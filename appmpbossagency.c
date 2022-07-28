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
	float fLocal_47 = 0f;
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
	int iLocal_83 = 0;
	struct<2> Local_84 = { 0, 0 } ;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	struct<2> Local_87 = { 0, 0 } ;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<2> Local_90 = { 0, 0 } ;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<2> Local_93 = { 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	struct<2> Local_96 = { 0, 0 } ;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	struct<2> Local_99 = { 0, 0 } ;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int* iLocal_105 = NULL;
	var uLocal_106 = 0;
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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&Local_84, "CELL_206", 16);
	StringCopy(&Local_87, "CELL_214", 16);
	StringCopy(&Local_90, "CELL_243", 16);
	StringCopy(&Local_93, "CELL_244", 16);
	StringCopy(&Local_96, "CELL_265", 16);
	StringCopy(&Local_99, "CELL_300", 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_98(&iLocal_105);
	iLocal_102 = 0;
	func_96();
	func_95(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_85(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_84();
		func_83();
		if (!Global_20266.f_1 == 9 && Global_20266.f_1 > 3)
		{
			switch (iLocal_83)
			{
				case 0:
					func_47();
					break;
				
				case 1:
					func_31();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_20266.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x170
{
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 3) || Global_20266.f_1 == 0) || Global_20210 == 1)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1B3
{
	Global_1888478.f_6 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3()//Position - 0x1C6
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1EF
{
}

void func_5()//Position - 0x1F7
{
	int iVar0;
	
	Global_1888478.f_6 = 1;
	if (iLocal_104)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2, Global_20235))
		{
			iLocal_104 = 0;
		}
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
	{
		iLocal_83 = 1;
		iVar0 = func_29(iLocal_102, 0);
		func_6(iVar0);
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
	{
		iLocal_83 = 1;
		return;
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, false, -1, 0, 0, true, 0);
}

void func_6(int iParam0)//Position - 0x25E
{
	int iVar0;
	
	iVar0 = Global_1888478.f_7[iParam0 /*8*/].f_2;
	if (Global_1888478.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_103 == iVar0)
	{
		func_26(iVar0, Global_1888478.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}
	Global_1888478.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)//Position - 0x2B3
{
	if (func_12())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_11())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_20266.f_1 = 3;
	}
}

int func_8()//Position - 0x33D
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)//Position - 0x364
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)//Position - 0x3D8
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

bool func_11()//Position - 0x42F
{
	return BitTest(Global_1958711, 5);
}

bool func_12()//Position - 0x43D
{
	return BitTest(Global_1958711, 19);
}

void func_13(int iParam0)//Position - 0x44C
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1888478.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (BitTest(Global_1888478.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_25();
				if (Global_1888478.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1888478.f_4 = (Global_1888478.f_4 - 1);
					if (Global_1888478.f_4 < 0)
					{
						Global_1888478.f_4 = 0;
					}
					func_18();
				}
			}
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_22), Global_1888478.f_7[iParam0 /*8*/].f_2);
			HUD::THEFEED_REMOVE_ITEM(Global_1888478.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1888478.f_7[iVar0 /*8*/] = { Global_1888478.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1888478.f_7[9 /*8*/].f_1 = 0;
		Global_1888478.f_7[9 /*8*/].f_2 = func_14();
	}
}

int func_14()//Position - 0x53E
{
	return -1;
}

void func_15(int iParam0)//Position - 0x547
{
	if (!func_16(iParam0))
	{
		MISC::SET_BIT(&(Global_1888478.f_3), iParam0);
	}
}

bool func_16(int iParam0)//Position - 0x565
{
	return BitTest(Global_1888478.f_3, iParam0);
}

void func_17()//Position - 0x576
{
	Global_1888478 = (Global_1888478 - 1);
}

void func_18()//Position - 0x588
{
	Global_22668 = (Global_22668 - 1);
	if (Global_22668 < 0)
	{
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()//Position - 0x5AA
{
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_95(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_95(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_20(int iParam0)//Position - 0x607
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_23(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_21(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_21(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_21(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										
										case 1:
											iVar6 = Global_44250;
											break;
										
										case 2:
											iVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_21(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8142);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_21(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_21(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xB93
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_22(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_22(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_22(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_22(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_22(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_22(char* sParam0)//Position - 0xC46
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_23(int iParam0)//Position - 0xC58
{
	return Global_43052 == iParam0;
}

void func_24(char* sParam0)//Position - 0xC66
{
	if (Global_22668 != 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
		}
		Global_22668 = 0;
	}
}

void func_25()//Position - 0xC83
{
	Global_1888478.f_1 = (Global_1888478.f_1 - 1);
	if (Global_1888478.f_1 < 0)
	{
		Global_1888478.f_1 = 0;
	}
}

void func_26(int iParam0, var uParam1)//Position - 0xCAA
{
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_26 == func_14())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_26 = iParam0;
			Global_2815059.f_5195.f_225 = uParam1;
			func_27(func_28(iParam0));
		}
	}
}

void func_27(int iParam0)//Position - 0xCFA
{
	struct<2> Var0;
	
	Var0.f_0 = 1922361302;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 2, iParam0);
	}
}

int func_28(int iParam0)//Position - 0xD26
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_29(int iParam0, int iParam1)//Position - 0xD3E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1888478.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30()//Position - 0xD7E
{
	return Global_1888478;
}

void func_31()//Position - 0xD8A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iLocal_102, 0);
	if (iLocal_102 == -1)
	{
		func_85(1);
		return;
	}
	iVar1 = Global_1888478.f_7[iVar0 /*8*/].f_2;
	if (!func_46(iVar1, 0, 1) || iLocal_103 != iVar1)
	{
		func_85(1);
		return;
	}
	func_41(&iLocal_105);
	if (func_39(&iLocal_105))
	{
		func_85(1);
		return;
	}
	if (func_38(&iLocal_105))
	{
		func_13(iVar0);
		func_85(1);
		return;
	}
	if (func_34(&iLocal_105))
	{
		if (func_33())
		{
			iLocal_104 = 1;
			iLocal_83 = 3;
		}
		else if (Global_1888478.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1888478.f_7[iVar0 /*8*/] == 1)
		{
			func_32(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_32(int iParam0)//Position - 0xE50
{
	MISC::SET_BIT(&Global_1836068, 15);
	func_13(iParam0);
	Global_1888478.f_6 = 0;
	func_7(0);
}

bool func_33()//Position - 0xE74
{
	return Global_1574582;
}

int func_34(int* iParam0)//Position - 0xE80
{
	if (!BitTest(*iParam0, 0))
	{
		return 0;
	}
	if (Global_20244)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2, Global_20235))
	{
		return 0;
	}
	func_35();
	Global_20244 = 1;
	return 1;
}

void func_35()//Position - 0xEC4
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20255, true);
		func_36();
	}
}

void func_36()//Position - 0xEE9
{
	if (func_37())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_37()//Position - 0xEFD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4541507 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_38(int* iParam0)//Position - 0xF44
{
	if (!BitTest(*iParam0, 1))
	{
		return 0;
	}
	if (Global_20244)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2, Global_20238))
	{
		return 0;
	}
	func_35();
	Global_20244 = 1;
	return 1;
}

int func_39(int* iParam0)//Position - 0xF88
{
	if (!BitTest(*iParam0, 2))
	{
		return 0;
	}
	if (Global_20244)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2, Global_20236))
	{
		return 0;
	}
	func_40();
	Global_20244 = 1;
	return 1;
}

void func_40()//Position - 0xFCC
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20255, true);
	}
}

void func_41(int* iParam0)//Position - 0xFEE
{
	if (MISC::GET_GAME_TIMER() < iParam0->f_1)
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_20242) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
	{
		func_44();
		iParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_20243) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
	{
		func_42();
		iParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}
}

void func_42()//Position - 0x105B
{
	func_95(Global_20247, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
	func_43();
}

void func_43()//Position - 0x1098
{
	if (func_37())
	{
		if (Global_20469 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
	}
}

void func_44()//Position - 0x10BB
{
	func_95(Global_20247, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
	func_45();
}

void func_45()//Position - 0x10F8
{
	if (func_37())
	{
		if (Global_20469 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
	}
}

int func_46(int iParam0, bool bParam1, bool bParam2)//Position - 0x111B
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

void func_47()//Position - 0x117B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_30() > 1)
	{
		func_41(&iLocal_105);
	}
	if (func_34(&iLocal_105))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
		iVar0 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_102 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iVar0);
		iVar1 = func_29(iLocal_102, 0);
		switch (Global_1888478.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_49();
				break;
			
			default:
				return;
		}
		Global_20266.f_1 = 8;
		return;
	}
	if (func_38(&iLocal_105))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
		iVar2 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iVar2))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_102 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iVar2);
		iVar3 = func_29(iLocal_102, 0);
		switch (Global_1888478.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_13(iVar3);
				func_85(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_16(0))
	{
		func_48(0);
		func_85(0);
	}
}

void func_48(int iParam0)//Position - 0x1287
{
	if (func_16(iParam0))
	{
		MISC::CLEAR_BIT(&(Global_1888478.f_3), iParam0);
	}
}

void func_49()//Position - 0x12A4
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar6[3];
	bool bVar7;
	int iVar8;
	int iVar9;
	char cVar10[16];
	struct<16> Var11;
	char cVar12[16];
	
	if (Global_20266.f_1 != 8)
	{
		Global_20266.f_1 = 8;
	}
	func_95(Global_20247, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_29(iLocal_102, 0);
	iLocal_103 = Global_1888478.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1888478.f_7[iVar3 /*8*/].f_2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (func_46(iVar4, 0, 1))
	{
		Var5 = { func_82(iVar4) };
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_76(iVar4));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var5);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		bVar0 = true;
	}
	else
	{
		func_22("");
	}
	if (Global_1888478.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_15474)
		{
			bVar7 = func_75(iVar4);
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (iVar9 < 3)
				{
					if (Global_1892703[iVar4 /*599*/].f_10.f_11[iVar8] != func_14())
					{
						if (func_46(Global_1892703[iVar4 /*599*/].f_10.f_11[iVar8], 0, 1))
						{
							uVar6[iVar9] = Global_1892703[iVar4 /*599*/].f_10.f_11[iVar8];
							iVar9++;
						}
					}
				}
				iVar8++;
			}
			if (iVar9 == 0)
			{
				if (bVar7)
				{
					func_22("BA_APP_BODYCTA");
				}
				else
				{
					func_22("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar10, "BA_APP_BODY_T4", 16);
				if (bVar7)
				{
					StringCopy(&cVar10, "BA_APP_BODYCT4", 16);
				}
				if (iVar9 == 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar9 > 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T6", 16);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar10);
				iVar8 = 0;
				while (iVar8 < iVar9)
				{
					Var11 = { func_82(uVar6[iVar8]) };
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var11);
					iVar8++;
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			if (Global_1888478.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1888478.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar12, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar12, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1888478.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar12, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar12, "BA_APP_BODY_T10", 16);
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar12);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1888478.f_88[iVar3 /*5*/]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(func_74(iVar4));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1888478.f_88[iVar3 /*5*/].f_3);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1888478.f_88[iVar3 /*5*/].f_4);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	else if (Global_1888478.f_7[iVar3 /*8*/] == 1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM2");
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_76(Global_1888478.f_7[iVar3 /*8*/].f_2));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_61(Global_1888478.f_7[iVar3 /*8*/].f_2));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	if (bVar0)
	{
		iVar2 = func_55(Global_1888478.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar2);
		}
	}
	if (bVar0)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sVar1);
	}
	else
	{
		func_22(&Local_99);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_95(Global_20247, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53(&Local_96);
	func_50(13, &Local_90, 12, &Local_93, 4, &Local_84, &iLocal_105);
	iLocal_83 = 1;
}

void func_50(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int* iParam6)//Position - 0x15F3
{
	func_51(2, iParam0, sParam1, 0, iParam6, -1);
	func_51(1, iParam2, sParam3, 1, iParam6, 17);
	func_51(3, iParam4, sParam5, 2, iParam6, -1);
}

void func_51(int iParam0, int iParam1, char* sParam2, int iParam3, int* iParam4, int iParam5)//Position - 0x1623
{
	if (iParam1 == 1)
	{
		func_21(Global_20247, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(iParam4, iParam3);
		func_52(iParam5, 0);
		return;
	}
	if (Global_20254)
	{
		func_21(Global_20247, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		MISC::SET_BIT(iParam4, iParam3);
		func_52(iParam5, 1);
		return;
	}
	func_21(Global_20247, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(iParam4, iParam3);
	func_52(iParam5, 1);
}

void func_52(int iParam0, bool bParam1)//Position - 0x16C8
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&Global_8136, iParam0);
		return;
	}
	MISC::CLEAR_BIT(&Global_8136, iParam0);
}

void func_53(char* sParam0)//Position - 0x16F3
{
	func_54(Global_20247, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_54(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x170C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_22(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_22(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_22(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_22(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_22(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_55(int iParam0)//Position - 0x1767
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (iVar0 == -1)
	{
		func_56(iParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_56(int iParam0, bool bParam1)//Position - 0x179D
{
	if (!func_46(iParam0, 0, 1))
	{
		return;
	}
	if (func_58(iParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (iParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (func_57(iParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = iParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_57(int iParam0)//Position - 0x1809
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x183B
{
	int iVar0;
	
	if (!func_46(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1660944 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660944)
	{
		if (Global_1660783[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1660783[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1660783[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_59(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_59(int iParam0)//Position - 0x18BA
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1660944)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1660783[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1660783[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1660783[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1660783[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1660944)
	{
		Global_1660783[iVar2 /*5*/] = { Global_1660783[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_60(&(Global_1660783[iVar2 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

void func_60(var uParam0)//Position - 0x1970
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

char* func_61(int iParam0)//Position - 0x199D
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_73(&(Global_1892703[iParam0 /*599*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1892703[iParam0 /*599*/].f_10.f_121 != Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121)
	{
		sVar0 = func_68(iParam0, 0);
		return sVar0;
	}
	if (((func_67(iParam0, 28) || func_67(PLAYER::PLAYER_ID(), 28)) || func_66(iParam0)) && !func_64(iParam0))
	{
		return func_68(iParam0, 0);
	}
	iVar1 = func_63(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_62() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_68(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_14())
	{
		sVar0 = func_73(&(Global_1892703[iVar1 /*599*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_68(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_62()//Position - 0x1AA4
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

int func_63(int iParam0)//Position - 0x1ABA
{
	if (iParam0 != func_14())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_14();
}

int func_64(int iParam0)//Position - 0x1ADD
{
	struct<13> Var0;
	
	Var0 = { func_65(iParam0) };
	if (func_62())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_65(int iParam0)//Position - 0x1B1D
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0)//Position - 0x1B34
{
	struct<13> Var0;
	
	if (iParam0 != func_14())
	{
		Var0 = { func_65(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::_0x807ABE1AB65C24D2()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_62() || MISC::_0x807ABE1AB65C24D2())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_67(int iParam0, int iParam1)//Position - 0x1BA1
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

char* func_68(int iParam0, bool bParam1)//Position - 0x1BB9
{
	if (!bParam1)
	{
		if (func_70(iParam0, 1))
		{
			return func_69();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_69()//Position - 0x1BE0
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_70(int iParam0, bool bParam1)//Position - 0x1BF0
{
	return func_71(iParam0, bParam1, 1);
}

int func_71(int iParam0, bool bParam1, int iParam2)//Position - 0x1C01
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_72(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_14() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, int iParam1)//Position - 0x1C5D
{
	if (iParam0 != func_14())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_14())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_73(var uParam0)//Position - 0x1CAC
{
	return uParam0;
}

int func_74(int iParam0)//Position - 0x1CB6
{
	if (func_63(iParam0) == func_14())
	{
		return 0;
	}
	return Global_1892703[iParam0 /*599*/].f_10.f_19;
}

int func_75(int iParam0)//Position - 0x1CDC
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 26);
}

int func_76(int iParam0)//Position - 0x1CFF
{
	int iVar0;
	
	iVar0 = func_79(iParam0);
	if (iVar0 != -1)
	{
		return func_77(iVar0);
	}
	return 1;
}

int func_77(int iParam0)//Position - 0x1D1F
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_78(iParam0);
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

var func_78(int iParam0)//Position - 0x1DE2
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_79(int iParam0)//Position - 0x1DF9
{
	if (!iParam0 == func_14())
	{
		if (func_80(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_63(iParam0)];
		}
	}
	return -1;
}

bool func_80(int iParam0, bool bParam1)//Position - 0x1E2B
{
	if (!bParam1)
	{
		if (func_81(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_14();
}

int func_81(int iParam0)//Position - 0x1E56
{
	if (iParam0 != func_14())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_14())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

struct<16> func_82(int iParam0)//Position - 0x1E8B
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, PLAYER::GET_PLAYER_NAME(iParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_83()//Position - 0x1EB2
{
	if (Global_1888478.f_6)
	{
		if (iLocal_83 != 3)
		{
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				Global_1888478.f_6 = 0;
			}
		}
	}
}

void func_84()//Position - 0x1ED8
{
	PAD::SET_INPUT_EXCLUSIVE(0, 176);
	PAD::SET_INPUT_EXCLUSIVE(0, 177);
}

void func_85(bool bParam0)//Position - 0x1EEE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_103 = func_14();
	if (!Global_20266.f_1 == 7)
	{
		Global_20266.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_102;
	}
	if (iVar0 >= Global_1659409)
	{
		iVar0 = 0;
	}
	if (Global_22665)
	{
		func_49();
		Global_22665 = 0;
		return;
	}
	iVar1 = func_30();
	iVar1 = (iVar1 - func_94());
	if ((func_80(PLAYER::PLAYER_ID(), 0) && !func_93(1)) && iVar1 <= 0)
	{
		func_91();
		return;
	}
	func_86();
	func_95(Global_20247, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_50(13, &Local_87, 12, &Local_93, 4, &Local_84, &iLocal_105);
	}
	else
	{
		func_50(1, "", 1, "", 4, &Local_84, &iLocal_105);
	}
	iLocal_83 = 0;
}

void func_86()//Position - 0x1FD8
{
	int iVar0;
	int iVar1;
	
	func_95(Global_20247, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1888478.f_7[iVar0 /*8*/].f_1 == 1 && Global_1888478.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1888478.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_90(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_88(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_87();
}

void func_87()//Position - 0x208D
{
	bool bVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (func_81(PLAYER::PLAYER_ID()))
	{
		func_22("BA_APP_NONEB");
	}
	else
	{
		func_22("BA_APP_NONE");
	}
	func_22("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_88(int iParam0, int iParam1)//Position - 0x20EB
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	
	if (Global_1888478.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1888478.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	Var0 = { func_82(Global_1888478.f_7[iParam0 /*8*/].f_2) };
	func_89(&Var0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM1");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	iVar1 = 1;
	iVar2 = func_79(Global_1888478.f_7[iParam0 /*8*/].f_2);
	if (iVar2 != -1)
	{
		iVar1 = func_77(iVar2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return 1;
}

void func_89(char* sParam0)//Position - 0x219A
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_90(int iParam0, int iParam1)//Position - 0x21A8
{
	struct<16> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1888478.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1888478.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	Var0 = { func_82(Global_1888478.f_7[iParam0 /*8*/].f_2) };
	func_89(&Var0);
	bVar1 = func_75(Global_1888478.f_7[iParam0 /*8*/].f_2);
	iVar2 = func_74(Global_1888478.f_7[iParam0 /*8*/].f_2);
	if (iVar2 == 0)
	{
		if (bVar1)
		{
			func_22("BA_APP_BODYCT");
		}
		else
		{
			func_22("BA_APP_BODY_T");
		}
	}
	else if (iVar2 == 1)
	{
		if (bVar1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT3");
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T3");
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		if (bVar1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT2");
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T2");
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	iVar3 = 1;
	iVar4 = func_79(Global_1888478.f_7[iParam0 /*8*/].f_2);
	if (iVar4 != -1)
	{
		iVar3 = func_77(iVar4);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return 1;
}

void func_91()//Position - 0x22DD
{
	func_95(Global_20247, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_76(PLAYER::PLAYER_ID()));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_92());
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_22("BA_APP_NONEG");
	func_22("CELL_AGBOSSPIC");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_95(Global_20247, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	func_50(1, "", 1, "", 4, &Local_84, &iLocal_105);
	iLocal_83 = 2;
}

char* func_92()//Position - 0x2395
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_63(PLAYER::PLAYER_ID());
	if (iVar0 != func_14())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_67(iVar0, 28) || func_67(PLAYER::PLAYER_ID(), 28)) || func_66(iVar0)) && !func_64(iVar0))
			{
				return func_68(iVar0, 0);
			}
			if (!func_62() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_68(iVar0, 0);
			}
		}
		sVar1 = func_73(&(Global_1892703[iVar0 /*599*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_68(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_93(bool bParam0)//Position - 0x2447
{
	return func_70(PLAYER::PLAYER_ID(), bParam0);
}

int func_94()//Position - 0x2459
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1888478.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_95(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x248E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_96()//Position - 0x24F1
{
	Global_1888478.f_1 = 0;
	func_97();
}

void func_97()//Position - 0x2504
{
	Global_1888478.f_5 = 0;
}

void func_98(var uParam0)//Position - 0x2513
{
	*uParam0 = 0;
}

