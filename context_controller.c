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
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	struct<4> Local_99 = { 0, 0, 0, 0 } ;
	struct<16> Local_103 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
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
	iLocal_122 = -1;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iVar0 = 0;
	iVar1 = iVar0;
	SYSTEM::SETTIMERA(0);
	Global_44870 = 0;
	func_42();
	StringCopy(&Global_44871, "CC_SUBSTR" /* GXT: ~INPUT_CONTEXT~ */, 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_79248;
	while (true)
	{
		if (Global_79248)
		{
			func_36();
		}
		else
		{
			func_34();
		}
		func_27();
		if (Global_79248 != iVar8)
		{
			func_26();
			func_42();
			iVar2 = -1;
			iVar8 = Global_79248;
			while (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				SYSTEM::WAIT(2000);
			}
		}
		if (Global_44876)
		{
			if (Global_44878 > -1)
			{
				if (!Global_44676[Global_44878 /*32*/].f_6)
				{
					if (!func_24(Global_44878, 1))
					{
						Global_44878 = -1;
					}
				}
			}
		}
		if (func_20())
		{
			iVar2 = -1;
			func_26();
		}
		if (iVar2 > -1)
		{
			if (!Global_44876)
			{
				if (Global_44878 != iVar2)
				{
					if (func_19(Global_44878))
					{
						func_26();
						if (!Global_44676[iVar2 /*32*/].f_5 && Global_44676[iVar2 /*32*/])
						{
							if (!func_20())
							{
								if (!Global_44676[iVar2 /*32*/].f_7)
								{
									if (!Global_44676[iVar2 /*32*/].f_6)
									{
										if (!Global_44676[iVar2 /*32*/].f_12)
										{
											func_18(Global_44676[iVar2 /*32*/].f_8, Global_44676[iVar2 /*32*/].f_3);
										}
										else
										{
											func_17(Global_44676[iVar2 /*32*/].f_8, Global_44676[iVar2 /*32*/].f_13, Global_44676[iVar2 /*32*/].f_3, Global_44676[iVar2 /*32*/].f_30);
										}
										Global_44878 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_26();
			}
		}
		else
		{
			func_26();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_16();
				if (PAD::IS_CONTROL_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					iVar6 = 1;
				}
				if (!func_20())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
						{
							Global_44676[iVar2 /*32*/].f_4 = 1;
							Global_44676[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_44676[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_44869 = 0;
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
				if (iVar2 < 0 || func_15() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (SYSTEM::TIMERA() > 5000)
					{
						Global_44676[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_14(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_44676[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_44676[iVar2 /*32*/].f_7 || Global_44676[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_44869)
				{
					func_26();
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					if (iVar2 > -1)
					{
						Global_44676[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_44870)
				{
					Global_44870 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_44676[iVar2 /*32*/].f_4 || Global_44676[iVar2 /*32*/].f_7))
					{
						Global_44870 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_44676[iVar2 /*32*/].f_7 || Global_44676[iVar2 /*32*/] == 0)
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
		func_13();
		func_11(&iVar2);
		Global_44875 = 0;
		Global_44876 = 0;
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x457
{
	bool bVar0;
	
	if (!bLocal_96)
	{
		return;
	}
	bVar0 = true;
	if (iLocal_119 == 1)
	{
		bVar0 = false;
	}
	if (bLocal_97)
	{
		if (bLocal_98)
		{
			HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(false);
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&Local_99);
		if (bLocal_98)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Local_103);
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44871);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Local_103);
		}
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, bVar0, 50);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&Local_99);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44871);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, bVar0, 50);
	}
	switch (iLocal_119)
	{
		case 0:
			break;
		
		case 1:
			func_10(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)//Position - 0x4F4
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

bool func_3()//Position - 0x528
{
	return Global_2672741.f_2518[0 /*80*/].f_1 != 0;
}

bool func_4(bool bParam0)//Position - 0x53E
{
	return func_5(PLAYER::PLAYER_ID(), bParam0);
}

int func_5(int iParam0, bool bParam1)//Position - 0x550
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)//Position - 0x561
{
	int iVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_8(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1886967[iParam0 /*609*/].f_10;
	if (iVar0 != func_7() && Global_1886967[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7()//Position - 0x5BE
{
	return -1;
}

int func_8(int iParam0, int iParam1)//Position - 0x5C7
{
	if (func_9(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_7())
		{
			if (Global_1886967[iParam0 /*609*/].f_10 == iParam0 && Global_1886967[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(var uParam0)//Position - 0x616
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

void func_10(int iParam0)//Position - 0x638
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_11(int iParam0)//Position - 0x665
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/] && Global_44676[iVar0 /*32*/].f_4)
		{
			if (Global_44676[iVar0 /*32*/].f_31 != 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_44676[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_12();
					}
					Global_44676[iVar0 /*32*/] = 0;
					Global_44676[iVar0 /*32*/].f_31 = 0;
					Global_44676[iVar0 /*32*/] = 0;
					Global_44676[iVar0 /*32*/].f_4 = 0;
					Global_44676[iVar0 /*32*/].f_5 = 0;
					Global_44676[iVar0 /*32*/].f_2 = 0;
					Global_44676[iVar0 /*32*/].f_7 = 0;
					Global_44676[iVar0 /*32*/].f_6 = 0;
					Global_44676[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_12()//Position - 0x71D
{
	if (Global_44878 != -1 || bLocal_96)
	{
		bLocal_96 = false;
		Global_44878 = -1;
	}
}

void func_13()//Position - 0x73C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_44878)
			{
				func_26();
			}
			Global_44676[iVar0 /*32*/].f_31 = 0;
			Global_44676[iVar0 /*32*/] = 0;
			Global_44676[iVar0 /*32*/].f_4 = 0;
			Global_44676[iVar0 /*32*/].f_5 = 0;
			Global_44676[iVar0 /*32*/].f_2 = 0;
			Global_44676[iVar0 /*32*/].f_7 = 0;
			Global_44676[iVar0 /*32*/].f_6 = 0;
			Global_44676[iVar0 /*32*/].f_1 = -1;
			Global_44676[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_14(int iParam0)//Position - 0x7C9
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_44676[iParam0 /*32*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0x7EC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/] == 1)
		{
			if (Global_44676[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_26();
	}
	return iVar1;
}

int func_16()//Position - 0x836
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
		if (Global_44676[iVar0 /*32*/])
		{
			if (Global_44676[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_44676[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_17(struct<4> Param0, struct<16> Param4, var uParam20, var uParam21)//Position - 0x882
{
	Local_99 = { Param0 };
	Local_103 = { Param4 };
	bLocal_96 = true;
	bLocal_97 = true;
	iLocal_119 = uParam20;
	bLocal_98 = uParam21;
}

void func_18(struct<4> Param0, var uParam4)//Position - 0x8AA
{
	Local_99 = { Param0 };
	bLocal_96 = true;
	bLocal_97 = false;
	iLocal_119 = uParam4;
}

int func_19(int iParam0)//Position - 0x8C4
{
	int iVar0;
	
	if (Global_98301 && Global_98300)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_24(iParam0, 1) || bLocal_96)
		{
			return 1;
		}
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::HAS_SCRIPT_HIDDEN_HELP_THIS_FRAME())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_24(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_20()//Position - 0x932
{
	if (Global_76369)
	{
		return 1;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	if (func_23(0))
	{
		return 1;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 1;
	}
	if (Global_44875)
	{
		return 1;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		return 1;
	}
	if (func_22(1))
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 1;
	}
	if (func_21(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_21(int iParam0, int iParam1)//Position - 0x9A9
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

bool func_22(bool bParam0)//Position - 0x9E1
{
	if (bParam0)
	{
		return (Global_23572.f_4 && Global_23572.f_104 == 4);
	}
	return Global_23572.f_4;
}

int func_23(int iParam0)//Position - 0xA0A
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
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
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_24(int iParam0, int iParam1)//Position - 0xA61
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_25(iParam0);
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
	if (Global_44676[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_44676[iVar0 /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44676[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44871);
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44676[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44871);
		if (Global_44676[iVar0 /*32*/].f_30)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_44676[iVar0 /*32*/].f_13));
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_44676[iVar0 /*32*/].f_13));
		}
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	return bVar1;
}

int func_25(int iParam0)//Position - 0xB16
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
		if (Global_44676[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_26()//Position - 0xB51
{
	func_12();
	Global_44878 = -1;
}

void func_27()//Position - 0xB61
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_33())
	{
		if (func_32(0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2684312.f_785.f_12)))
			{
				func_31();
				func_28(6, 0, 0);
			}
		}
	}
}

int func_28(int iParam0, bool bParam1, int iParam2)//Position - 0xBA0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_76482 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_76482)
	{
		case 3:
			Global_76480 = 0;
			break;
		
		case 4:
			Global_76480 = 3;
			break;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appbikerbusiness")) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appimportexport")) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_79248 && func_30())
	{
		return 0;
	}
	if (!Global_79248 && func_29())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SCRIPT::REQUEST_SCRIPT("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appImportExport", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
		return 1;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SCRIPT::REQUEST_SCRIPT("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT("appInternet", 4592);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	return 1;
}

var func_29()//Position - 0xDA7
{
	return Global_76370;
}

var func_30()//Position - 0xDB3
{
	return Global_1928228;
}

void func_31()//Position - 0xDBF
{
	Global_2684312.f_785.f_28 = 0;
}

bool func_32(bool bParam0)//Position - 0xDD1
{
	if (bParam0)
	{
		return (Global_2684312.f_785.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2684312.f_785.f_31);
	}
	return Global_2684312.f_785.f_28;
}

bool func_33()//Position - 0xE0D
{
	return Global_76369;
}

void func_34()//Position - 0xE19
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_61212[iVar1] < 0)
		{
			Global_61212[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_35(0);
		func_35(1);
		func_35(2);
	}
}

void func_35(int iParam0)//Position - 0xE63
{
	int iVar0;
	
	iVar0 = Global_61212[iParam0];
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

void func_36()//Position - 0xEBD
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
		if (MISC::IS_XBOX360_VERSION() || func_41())
		{
			if (!iLocal_120)
			{
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&(Var0[0 /*13*/])))
				{
					iLocal_120 = 1;
				}
			}
			if (iLocal_120)
			{
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
				}
				else
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(&(Global_2359296[func_40() /*5569*/].f_5392.f_18[Global_1835458 /*6*/]), NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&(Var0[0 /*13*/])), 24);
					}
					func_39();
				}
			}
		}
		else if (MISC::IS_PS3_VERSION() || func_38())
		{
			if (func_37(Var0[0 /*13*/]))
			{
				switch (iLocal_121)
				{
					case 0:
						iLocal_122 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var0, 1);
						if (iLocal_122 >= 0)
						{
							iLocal_121++;
						}
						break;
					
					case 1:
						iVar31 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(iLocal_122, &Var14, 1);
						switch (iVar31)
						{
							case -1:
								func_39();
								break;
							
							case 0:
								MemCopy(&(Global_2359296[func_40() /*5569*/].f_5392.f_18[Global_1835458 /*6*/]), {Var14[0 /*16*/]}, 6);
								func_39();
								break;
							
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_39();
			}
		}
		else
		{
			if (func_37(Var0[0 /*13*/]))
			{
				StringCopy(&(Global_2359296[func_40() /*5569*/].f_5392.f_18[Global_1835458 /*6*/]), NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&(Var0[0 /*13*/])), 24);
			}
			func_39();
		}
	}
}

bool func_37(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x10D7
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

bool func_38()//Position - 0x10E7
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_39()//Position - 0x10FD
{
	Global_1835458 = -1;
	iLocal_120 = 0;
	iLocal_122 = -1;
	iLocal_121 = 0;
}

int func_40()//Position - 0x1113
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_41()//Position - 0x1120
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_42()//Position - 0x1136
{
	int iVar0;
	
	Global_44869 = 0;
	Global_44875 = 0;
	Global_44876 = 0;
	Global_44877 = 1;
	Global_44878 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_44676[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

