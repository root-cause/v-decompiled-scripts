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
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	struct<4> Local_101 = { 0, 0, 0, 0 } ;
	struct<16> Local_105 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
	iLocal_124 = -1;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iVar0 = 0;
	iVar1 = iVar0;
	SYSTEM::SETTIMERA(0);
	Global_44993 = 0;
	func_41();
	StringCopy(&Global_44994, "CC_SUBSTR" /* GXT: ~INPUT_CONTEXT~ */, 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_79389;
	while (true)
	{
		if (Global_79389)
		{
			func_35();
		}
		else
		{
			func_33();
		}
		func_26();
		if (Global_79389 != iVar8)
		{
			func_25();
			func_41();
			iVar2 = -1;
			iVar8 = Global_79389;
			while (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				SYSTEM::WAIT(2000);
			}
		}
		if (Global_44999)
		{
			if (Global_45001 > -1)
			{
				if (!Global_44799[Global_45001 /*32*/].f_6)
				{
					if (!func_23(Global_45001, 1))
					{
						Global_45001 = -1;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1)
		{
			if (!Global_44999)
			{
				if (Global_45001 != iVar2)
				{
					if (func_18(Global_45001))
					{
						func_25();
						if (!Global_44799[iVar2 /*32*/].f_5 && Global_44799[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_44799[iVar2 /*32*/].f_7)
								{
									if (!Global_44799[iVar2 /*32*/].f_6)
									{
										if (!Global_44799[iVar2 /*32*/].f_12)
										{
											func_17(Global_44799[iVar2 /*32*/].f_8, Global_44799[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_44799[iVar2 /*32*/].f_8, Global_44799[iVar2 /*32*/].f_13, Global_44799[iVar2 /*32*/].f_3, Global_44799[iVar2 /*32*/].f_30);
										}
										Global_45001 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
				if (PAD::IS_CONTROL_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
						{
							Global_44799[iVar2 /*32*/].f_4 = 1;
							Global_44799[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_44799[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_44992 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), true))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false))
							{
								if (PAD::IS_CONTROL_ENABLED(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/))
								{
									bVar5 = true;
									PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
								}
								if (PAD::IS_CONTROL_ENABLED(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/))
								{
									bVar4 = true;
									PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
							bVar5 = false;
						}
						if (bVar4)
						{
							PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (SYSTEM::TIMERA() > 5000)
					{
						Global_44799[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_44799[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_44799[iVar2 /*32*/].f_7 || Global_44799[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_44992)
				{
					func_25();
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					if (iVar2 > -1)
					{
						Global_44799[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_44993)
				{
					Global_44993 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_44799[iVar2 /*32*/].f_4 || Global_44799[iVar2 /*32*/].f_7))
					{
						Global_44993 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_44799[iVar2 /*32*/].f_7 || Global_44799[iVar2 /*32*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 46 /*INPUT_TALK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			SYSTEM::SETTIMERA(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_44998 = 0;
		Global_44999 = 0;
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x45A
{
	bool bVar0;
	
	if (!bLocal_98)
	{
		return;
	}
	bVar0 = true;
	if (iLocal_121 == 1)
	{
		bVar0 = false;
	}
	if (bLocal_99)
	{
		if (bLocal_100)
		{
			HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(false);
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&Local_101);
		if (bLocal_100)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Local_105);
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44994);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Local_105);
		}
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, bVar0, 50);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&Local_101);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44994);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, bVar0, 50);
	}
	switch (iLocal_121)
	{
		case 0:
			break;
		
		case 1:
			func_9(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)//Position - 0x4F7
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_3()//Position - 0x52B
{
	return Global_2672855.f_2557[0 /*80*/].f_1 != 0;
}

bool func_4(bool bParam0)//Position - 0x541
{
	return func_5(PLAYER::PLAYER_ID(), bParam0);
}

int func_5(int iParam0, bool bParam1)//Position - 0x553
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)//Position - 0x564
{
	int iVar0;
	
	if (!func_8(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_8(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)//Position - 0x5C0
{
	if (func_8(iParam0))
	{
		if (func_8(Global_1887305[iParam0 /*610*/].f_10))
		{
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_8(var uParam0)//Position - 0x60F
{
	int iVar0;
	
	iVar0 = uParam0;
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

void func_9(int iParam0)//Position - 0x631
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_10(int iParam0)//Position - 0x65E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/] && Global_44799[iVar0 /*32*/].f_4)
		{
			if (Global_44799[iVar0 /*32*/].f_31 != 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_44799[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_44799[iVar0 /*32*/] = 0;
					Global_44799[iVar0 /*32*/].f_31 = 0;
					Global_44799[iVar0 /*32*/] = 0;
					Global_44799[iVar0 /*32*/].f_4 = 0;
					Global_44799[iVar0 /*32*/].f_5 = 0;
					Global_44799[iVar0 /*32*/].f_2 = 0;
					Global_44799[iVar0 /*32*/].f_7 = 0;
					Global_44799[iVar0 /*32*/].f_6 = 0;
					Global_44799[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()//Position - 0x716
{
	if (Global_45001 != -1 || bLocal_98)
	{
		bLocal_98 = false;
		Global_45001 = -1;
	}
}

void func_12()//Position - 0x735
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_45001)
			{
				func_25();
			}
			Global_44799[iVar0 /*32*/].f_31 = 0;
			Global_44799[iVar0 /*32*/] = 0;
			Global_44799[iVar0 /*32*/].f_4 = 0;
			Global_44799[iVar0 /*32*/].f_5 = 0;
			Global_44799[iVar0 /*32*/].f_2 = 0;
			Global_44799[iVar0 /*32*/].f_7 = 0;
			Global_44799[iVar0 /*32*/].f_6 = 0;
			Global_44799[iVar0 /*32*/].f_1 = -1;
			Global_44799[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_13(int iParam0)//Position - 0x7C2
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_44799[iParam0 /*32*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_14()//Position - 0x7E5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/] == 1)
		{
			if (Global_44799[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_25();
	}
	return iVar1;
}

int func_15()//Position - 0x82F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/])
		{
			if (Global_44799[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_44799[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param4, var uParam20, var uParam21)//Position - 0x87B
{
	Local_101 = { Param0 };
	Local_105 = { Param4 };
	bLocal_98 = true;
	bLocal_99 = true;
	iLocal_121 = uParam20;
	bLocal_100 = uParam21;
}

void func_17(struct<4> Param0, var uParam4)//Position - 0x8A3
{
	Local_101 = { Param0 };
	bLocal_98 = true;
	bLocal_99 = false;
	iLocal_121 = uParam4;
}

int func_18(int iParam0)//Position - 0x8BD
{
	int iVar0;
	
	if (Global_98442 && Global_98441)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_98)
		{
			return 1;
		}
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::HAS_SCRIPT_HIDDEN_HELP_THIS_FRAME())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_23(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_19()//Position - 0x92B
{
	if (Global_76498)
	{
		return 1;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 1;
	}
	if (Global_44998)
	{
		return 1;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 1;
	}
	if (func_20(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)//Position - 0x9A2
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

bool func_21(bool bParam0)//Position - 0x9DA
{
	if (bParam0)
	{
		return (Global_23692.f_4 && Global_23692.f_104 == 4);
	}
	return Global_23692.f_4;
}

int func_22(int iParam0)//Position - 0xA03
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

bool func_23(int iParam0, int iParam1)//Position - 0xA5A
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_24(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_44799[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_44799[iVar0 /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44799[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44994);
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44799[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44994);
		if (Global_44799[iVar0 /*32*/].f_30)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_44799[iVar0 /*32*/].f_13));
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_44799[iVar0 /*32*/].f_13));
		}
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	return bVar1;
}

int func_24(int iParam0)//Position - 0xB0F
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

void func_25()//Position - 0xB4A
{
	func_11();
	Global_45001 = -1;
}

void func_26()//Position - 0xB5A
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_32())
	{
		if (func_31(0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2684504.f_787.f_12)))
			{
				func_30();
				func_27(6, 0);
			}
		}
	}
}

void func_27(int iParam0, int iParam1)//Position - 0xB97
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_76612 = iParam0;
	bVar0 = iParam1 == true;
	bVar1 = iParam1 == 2;
	bVar2 = iParam1 == 3;
	switch (Global_76612)
	{
		case 3:
			Global_76610 = 0;
			break;
		
		case 4:
			Global_76610 = 3;
			break;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appbikerbusiness")) > 0)
	{
		if (bVar1)
		{
		}
		return;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appimportexport")) > 0)
	{
		if (bVar2)
		{
		}
		return;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return;
	}
	if (Global_79389 && func_29())
	{
		return;
	}
	if (!Global_79389 && func_28())
	{
		return;
	}
	if (Global_79389)
	{
		Global_76463 = iParam1;
	}
	else if (bVar0)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
	}
	else if (bVar1)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
	}
	else if (bVar2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SCRIPT::REQUEST_SCRIPT("appImportExport");
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appImportExport", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
	}
	else
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
		{
			SCRIPT::REQUEST_SCRIPT("appInternet");
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appInternet", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	}
}

var func_28()//Position - 0xD77
{
	return Global_76499;
}

var func_29()//Position - 0xD83
{
	return Global_1928953;
}

void func_30()//Position - 0xD8F
{
	Global_2684504.f_787.f_28 = 0;
}

bool func_31(bool bParam0)//Position - 0xDA1
{
	if (bParam0)
	{
		return (Global_2684504.f_787.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2684504.f_787.f_31);
	}
	return Global_2684504.f_787.f_28;
}

bool func_32()//Position - 0xDDD
{
	return Global_76498;
}

void func_33()//Position - 0xDE9
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_61340[iVar1] < 0)
		{
			Global_61340[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}
}

void func_34(int iParam0)//Position - 0xE33
{
	int iVar0;
	
	iVar0 = Global_61340[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, true);
			break;
	}
}

void func_35()//Position - 0xE8D
{
	struct<13> Var0[1];
	struct<16> Var14[1];
	int iVar31;
	
	if (Global_1835458 != -1)
	{
		Var0[0 /*13*/] = Global_1835459[0];
		Var0[0 /*13*/].f_1 = Global_1835459[1];
		Var0[0 /*13*/].f_2 = Global_1835459[2];
		Var0[0 /*13*/].f_3 = Global_1835459[3];
		Var0[0 /*13*/].f_4 = Global_1835459[4];
		Var0[0 /*13*/].f_5 = Global_1835459[5];
		Var0[0 /*13*/].f_6 = Global_1835459[6];
		Var0[0 /*13*/].f_7 = Global_1835459[7];
		Var0[0 /*13*/].f_8 = Global_1835459[8];
		Var0[0 /*13*/].f_9 = Global_1835459[9];
		Var0[0 /*13*/].f_10 = Global_1835459[10];
		Var0[0 /*13*/].f_11 = Global_1835459[11];
		Var0[0 /*13*/].f_12 = Global_1835459[12];
		if (MISC::IS_XBOX360_VERSION() || func_40())
		{
			if (!iLocal_122)
			{
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&(Var0[0 /*13*/])))
				{
					iLocal_122 = 1;
				}
			}
			if (iLocal_122)
			{
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
				}
				else
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(&(Global_2359296[func_39() /*5570*/].f_5393.f_18[Global_1835458 /*6*/]), NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&(Var0[0 /*13*/])), 24);
					}
					func_38();
				}
			}
		}
		else if (MISC::IS_PS3_VERSION() || func_37())
		{
			if (func_36(Var0[0 /*13*/]))
			{
				switch (iLocal_123)
				{
					case 0:
						iLocal_124 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var0, 1);
						if (iLocal_124 >= 0)
						{
							iLocal_123++;
						}
						break;
					
					case 1:
						iVar31 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(iLocal_124, &Var14, 1);
						switch (iVar31)
						{
							case -1:
								func_38();
								break;
							
							case 0:
								MemCopy(&(Global_2359296[func_39() /*5570*/].f_5393.f_18[Global_1835458 /*6*/]), {Var14[0 /*16*/]}, 6);
								func_38();
								break;
							
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_38();
			}
		}
		else
		{
			if (func_36(Var0[0 /*13*/]))
			{
				StringCopy(&(Global_2359296[func_39() /*5570*/].f_5393.f_18[Global_1835458 /*6*/]), NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&(Var0[0 /*13*/])), 24);
			}
			func_38();
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x10A7
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

bool func_37()//Position - 0x10B7
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_38()//Position - 0x10CD
{
	Global_1835458 = -1;
	iLocal_122 = 0;
	iLocal_124 = -1;
	iLocal_123 = 0;
}

int func_39()//Position - 0x10E3
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_40()//Position - 0x10F0
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_41()//Position - 0x1106
{
	int iVar0;
	
	Global_44992 = 0;
	Global_44998 = 0;
	Global_44999 = 0;
	Global_45000 = 1;
	Global_45001 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_44799[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

