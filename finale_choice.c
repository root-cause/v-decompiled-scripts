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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	
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
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_43();
	}
	func_42(20);
	func_41();
	func_40(1);
	func_40(0);
	func_40(2);
	func_40(13);
	func_40(12);
	Global_8688 = 1;
	func_39();
	if (!func_38(joaat("CALL_FIN_CHOICE_1A")))
	{
		func_37(joaat("CALL_FIN_CHOICE_1A"), 2, 2, 2, 1, -1, 5);
	}
	if (!func_38(joaat("CALL_FIN_CHOICE_2A")))
	{
		func_37(joaat("CALL_FIN_CHOICE_2A"), 2, 0, 0, 1, -1, 5);
	}
	if (!func_38(joaat("CALL_FIN_CHOICE_3")))
	{
		func_37(joaat("CALL_FIN_CHOICE_3"), 2, 12, 3, 1, -1, 5);
	}
	bVar0 = false;
	while (func_36(23) && !func_35(134))
	{
		if (func_30() == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if ((!PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
					{
						if (!bVar0)
						{
							if (!((func_29() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_28()))
							{
								if (func_13())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (iLocal_26)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 384);
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/, true);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							}
							switch (func_12())
							{
								case joaat("CALL_FIN_CHOICE_1A"):
									if (!func_38(joaat("CALL_FIN_CHOICE_1B")))
									{
										func_8(joaat("CALL_FIN_CHOICE_1B"), 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case joaat("CALL_FIN_CHOICE_1B"):
									func_7(12, 0);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("SP_FINAL_DECISION"), 2, true);
									break;
								
								case joaat("CALL_FIN_CHOICE_2A"):
									if (!func_38(joaat("CALL_FIN_CHOICE_2B")))
									{
										func_8(joaat("CALL_FIN_CHOICE_2B"), 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case joaat("CALL_FIN_CHOICE_2B"):
									func_7(12, 1);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("SP_FINAL_DECISION"), 1, true);
									break;
								
								case joaat("CALL_FIN_CHOICE_3"):
									func_7(12, 2);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("SP_FINAL_DECISION"), 3, true);
									break;
								
								default:
									if (!func_5(0))
									{
										bVar0 = false;
									}
									else if (iLocal_26)
									{
										if (func_4())
										{
											iLocal_26 = 0;
										}
									}
									break;
								}
							}
						}
					}
				}
		}
		SYSTEM::WAIT(0);
	}
	func_3(20);
	Global_101431 = 0;
	func_1();
	func_43();
}

int func_1()//Position - 0x2F3
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_101431.f_8)
	{
		if (Global_101431.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101431.f_10 > 1)
	{
		return 0;
	}
	Global_101431.f_10++;
	return 1;
}

int func_2(bool bParam0)//Position - 0x33E
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

int func_3(int iParam0)//Position - 0x366
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_114370.f_9088.f_99.f_219[iVar0], bVar1))
	{
		MISC::CLEAR_BIT(&(Global_114370.f_9088.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

int func_4()//Position - 0x3BD
{
	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x3E6
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

void func_6(int iParam0, int iParam1)//Position - 0x43D
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_114370.f_9088.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_114370.f_9088.f_99.f_58[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)//Position - 0x482
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_114370.f_9088.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_114370.f_9088.f_99.f_205[iParam0] = iParam1;
}

int func_8(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x4C7
{
	struct<15> Var0;
	int iVar15;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == bParam2)
	{
		return 0;
	}
	if (((bParam2 != 144 && bParam2 != 0) && bParam2 != 1) && bParam2 != 2)
	{
		return 0;
	}
	if (Global_114370.f_7691.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_114370.f_7691.f_911 == Var0.f_0)
		{
			Global_114370.f_7691.f_911 = -1;
		}
		Var0.f_3 = func_11(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		MISC::SET_BIT(&iVar15, bParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_114370.f_7691[Global_114370.f_7691.f_136 /*15*/] = { Var0 };
		Global_114370.f_7691.f_136++;
		func_9(bParam2);
		return 1;
	}
	return 0;
}

void func_9(bool bParam0)//Position - 0x618
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_10(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_136)
	{
		if (BitTest(Global_114370.f_7691[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_114370.f_7691[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_114370.f_7691[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_114370.f_7691.f_764)
	{
		if (BitTest(Global_114370.f_7691.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_114370.f_7691.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_114370.f_7691.f_919[bParam0] = iVar1;
}

bool func_10(int iParam0)//Position - 0x6D6
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x6E2
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_12()//Position - 0x74C
{
	return Global_114370.f_7691.f_911;
}

int func_13()//Position - 0x75E
{
	if (Global_20813.f_1 > 3)
	{
		MISC::CLEAR_BIT(&Global_8684, 0);
		func_23(0);
		return 0;
	}
	MISC::SET_BIT(&Global_8684, 0);
	if (func_14(0, 0, 1, 1))
	{
		return 1;
	}
	MISC::CLEAR_BIT(&Global_8684, 0);
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7A3
{
	if (Global_79248)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!BitTest(Global_4542983, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4542983, 14);
				MISC::SET_BIT(&Global_4542983, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4542983, 14);
				MISC::SET_BIT(&Global_4542983, 15);
			}
			if (iParam0 == 23)
			{
				MISC::SET_BIT(&Global_4542983, 14);
				MISC::SET_BIT(&Global_4542983, 27);
			}
			if (iParam0 == 1)
			{
				MISC::SET_BIT(&Global_4542983, 14);
				MISC::SET_BIT(&Global_4542983, 29);
			}
		}
		if (Global_8690[iParam0 /*15*/].f_9 == 0)
		{
			func_20();
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4542983, 14);
			MISC::CLEAR_BIT(&Global_4542983, 16);
			MISC::CLEAR_BIT(&Global_4542983, 15);
			MISC::CLEAR_BIT(&Global_4542983, 27);
			MISC::CLEAR_BIT(&Global_4542983, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_19();
	if (Global_20813.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_5(0) == 1)
		{
			return 0;
		}
	}
	if (Global_20779 == 1)
	{
		return 0;
	}
	if (Global_20813.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_20810))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20813.f_1 < 4)
			{
				func_18("cellphone_flashhand");
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_20810 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_20795)
	{
		SYSTEM::WAIT(0);
	}
	func_20();
	func_15();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[iParam0 /*15*/].f_9) == 0)
	{
		Global_9289 = 0;
		Global_20813.f_1 = 7;
		func_18(&(Global_8690[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[iParam0 /*15*/].f_9) == 0)
			{
				Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[iParam0 /*15*/].f_9) == 0)
		{
			Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8690[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_15()//Position - 0x9DE
{
	if (Global_79248 == 0)
	{
		Global_8690[14 /*15*/].f_4 = -99;
		Global_8690[4 /*15*/].f_4 = -99;
		if (Global_2695946)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2" /* GXT: Internet */, 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29" /* GXT: Job List */, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29" /* GXT: Job List */, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xA62
{
	StringCopy(&(Global_8690[iParam0 /*15*/]), sParam1, 16);
	Global_8690[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8690[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8690[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8690[iParam0 /*15*/].f_10 = iParam4;
	Global_8690[iParam0 /*15*/].f_11 = iParam5;
	Global_8690[iParam0 /*15*/].f_12 = iParam6;
	Global_8690[iParam0 /*15*/].f_13 = iParam7;
	Global_8690[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8690[iParam0 /*15*/].f_12 == 0)
	{
		Global_8690[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8690[iParam0 /*15*/].f_13 == 0)
	{
		Global_8690[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8690[iParam0 /*15*/].f_14 == 0)
	{
		Global_8690[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_17(int iParam0)//Position - 0xB18
{
	return Global_43922 == iParam0;
}

void func_18(char* sParam0)//Position - 0xB26
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_19()//Position - 0xB46
{
	if (func_17(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[2 /*29*/])
			{
				Global_20813 = 2;
			}
			else
			{
				Global_20813 = 0;
			}
		}
	}
	else
	{
		Global_20813 = func_30();
		if (Global_20813 == 145)
		{
			Global_20813 = 3;
		}
		if (Global_79248)
		{
			Global_20813 = 3;
		}
		if (Global_20813 > 3)
		{
			Global_20813 = 3;
		}
	}
}

void func_20()//Position - 0xBE8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8690[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_79248 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_22(iVar2, Global_20813) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5" /* GXT: Email */, 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_43922 == 15 && func_2(0) == 0) && Global_8688 == 0)
		{
			func_16(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21028 = 0;
			Global_8689 = 255;
		}
		else
		{
			func_16(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21028 = 1;
			Global_8689 = 42;
		}
		if (iVar1 == 1)
		{
			func_16(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_16(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_114370.f_14054.f_89 == 1)
		{
			func_16(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_114370.f_14054.f_88 == 1)
		{
			func_16(16, "CELL_25" /* GXT: Sniper */, 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5" /* GXT: Email */, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29" /* GXT: Job List */, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0" /* GXT: Contacts */, 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "CELL_37" /* GXT: Quick Join */, 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (BitTest(Global_4542983, 4) == 1)
		{
			func_16(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35" /* GXT: Player List */, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18" /* GXT: Map */, -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4" /* GXT: Sidetasks */, -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15" /* GXT: Spare */, 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15" /* GXT: Spare */, 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15" /* GXT: Spare */, 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15" /* GXT: Spare */, 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15" /* GXT: Spare */, 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15" /* GXT: Spare */, 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15" /* GXT: Spare */, 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15" /* GXT: Spare */, 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15" /* GXT: Spare */, 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15" /* GXT: Spare */, 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15" /* GXT: Spare */, 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4542983, 4) == 1)
		{
			if (Global_1836171)
			{
				func_16(23, "CELL_CIRCBREAK" /* GXT: VLSI Unlock */, 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4542983, 20) == 1)
			{
				func_16(23, "CELL_SIGHTS" /* GXT: Sightseer */, 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4542983, 22) == 1)
			{
				func_16(23, "CELL_EXTRACT" /* GXT: Extraction */, 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4542983, 26) == 1)
			{
				if (func_21())
				{
					func_16(23, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_16(23, "CELL_SECHACK" /* GXT: SecuroServ Hack */, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4542983, 4) == 0 && Global_1836171 == 0) && BitTest(Global_4542983, 20) == 0) && BitTest(Global_4542983, 22) == 0) && BitTest(Global_4542983, 26) == 0)
		{
			if (func_21())
			{
				func_16(23, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_16(23, "CELL_BOSSAGE" /* GXT: SecuroServ */, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_21()//Position - 0x111A
{
	if (Global_79248)
	{
		if (Global_1836571 || Global_1836572 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1)//Position - 0x1141
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2139[iParam0 /*29*/].f_19[iParam1];
}

void func_23(int iParam0)//Position - 0x116B
{
	if (func_27())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_26())
		{
			func_25(1, 1);
		}
		else
		{
			func_25(0, 0);
		}
	}
	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8684, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22166 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 30);
	}
	if (!func_24())
	{
		Global_20813.f_1 = 3;
	}
}

int func_24()//Position - 0x11F5
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_25(bool bParam0, bool bParam1)//Position - 0x121C
{
	if (bParam0)
	{
		if (func_5(0))
		{
			Global_21025 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20750);
			}
			Global_20741 = { Global_20759[Global_20758 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
	else if (Global_21025 == 1)
	{
		Global_21025 = 0;
		Global_20741 = { Global_20766[Global_20758 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20750);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
}

bool func_26()//Position - 0x1290
{
	return BitTest(Global_1956030, 5);
}

bool func_27()//Position - 0x129E
{
	return BitTest(Global_1956030, 19);
}

int func_28()//Position - 0x12AD
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98850.f_44 == 1;
	}
	return 0;
}

int func_29()//Position - 0x12C9
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_30()//Position - 0x12E3
{
	func_31();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_31()//Position - 0x12FC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_33(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_32(PLAYER::PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_17(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_10(Global_114370.f_2366.f_539.f_4321))
				{
					Global_114370.f_2366.f_539.f_4322 = Global_114370.f_2366.f_539.f_4321;
				}
				Global_114370.f_2366.f_539.f_4323 = iVar0;
				Global_114370.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_4321 != 145)
			{
				Global_114370.f_2366.f_539.f_4323 = Global_114370.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114370.f_2366.f_539.f_4321 = 145;
}

int func_32(int iParam0)//Position - 0x13F9
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)//Position - 0x1436
{
	if (func_10(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)//Position - 0x145B
{
	return Global_2139[iParam0 /*29*/];
}

int func_35(int iParam0)//Position - 0x146A
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114370.f_9088.f_99.f_58[iParam0];
}

int func_36(int iParam0)//Position - 0x1497
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114370.f_9088.f_330[iParam0 /*6*/];
}

int func_37(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x14C3
{
	struct<15> Var0;
	
	if (func_2(0))
	{
		return 0;
	}
	if (bParam2 < 3)
	{
		if (BitTest(iParam1, bParam2))
		{
			return 0;
		}
	}
	if (iParam1 < 1 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam4 <= 0)
	{
		return 0;
	}
	if (Global_114370.f_7691.f_650 < 30)
	{
		Var0.f_0 = iParam0;
		if (Global_114370.f_7691.f_911 == Var0.f_0)
		{
			Global_114370.f_7691.f_911 = -1;
		}
		Var0.f_1 = 0;
		Var0.f_6 = bParam2;
		Var0.f_2 = iParam1;
		Var0.f_14 = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = -1;
		Var0.f_8 = 0;
		Var0.f_9 = -1;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_9 = iParam5;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 6);
		Global_114370.f_7691.f_199[Global_114370.f_7691.f_650 /*15*/] = { Var0 };
		Global_114370.f_7691.f_650++;
		return 1;
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x15C6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_136)
	{
		if (Global_114370.f_7691[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_650)
	{
		if (Global_114370.f_7691.f_199[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_198)
	{
		if (Global_114370.f_7691.f_137[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_764)
	{
		if (Global_114370.f_7691.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_866)
	{
		if (Global_114370.f_7691.f_765[iVar0 /*10*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_39()//Position - 0x16C2
{
	Global_101431 = 1;
}

void func_40(int iParam0)//Position - 0x16CF
{
	if (((((iParam0 == 144 || iParam0 == 145) || iParam0 == 161) || iParam0 == 202) || iParam0 == 201) || iParam0 == 162)
	{
		return;
	}
	Global_44474[iParam0] = MISC::GET_GAME_TIMER();
}

void func_41()//Position - 0x1724
{
	Global_44473 = MISC::GET_GAME_TIMER();
}

int func_42(int iParam0)//Position - 0x1733
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_114370.f_9088.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_114370.f_9088.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_43()//Position - 0x178A
{
	func_44(joaat("CALL_FIN_CHOICE_1A"));
	func_44(joaat("CALL_FIN_CHOICE_1B"));
	func_44(joaat("CALL_FIN_CHOICE_2A"));
	func_44(joaat("CALL_FIN_CHOICE_2B"));
	func_44(joaat("CALL_FIN_CHOICE_3"));
	Global_8688 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_44(int iParam0)//Position - 0x17D6
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_136)
	{
		if (Global_114370.f_7691[iVar0 /*15*/] == iParam0)
		{
			if (Global_44469 != iVar0)
			{
				func_55(iVar0);
				func_48(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_198)
	{
		if (Global_114370.f_7691.f_137[iVar0 /*15*/] == iParam0)
		{
			func_48(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_650)
	{
		if (Global_114370.f_7691.f_199[iVar0 /*15*/] == iParam0)
		{
			func_47(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_764)
	{
		if (Global_114370.f_7691.f_651[iVar0 /*14*/] == iParam0)
		{
			func_46(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_866)
	{
		if (Global_114370.f_7691.f_765[iVar0 /*10*/] == iParam0)
		{
			func_45(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_45(int iParam0)//Position - 0x18FD
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_114370.f_7691.f_866)
	{
		return;
	}
	if (Global_114370.f_7691.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_114370.f_7691.f_866 - 2))
		{
			Global_114370.f_7691.f_765[iVar0 /*10*/] = { Global_114370.f_7691.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_114370.f_7691.f_866 > 0)
	{
		Global_114370.f_7691.f_765[(Global_114370.f_7691.f_866 - 1) /*10*/] = { Var1 };
		Global_114370.f_7691.f_866 = (Global_114370.f_7691.f_866 - 1);
	}
}

void func_46(int iParam0)//Position - 0x19B6
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_114370.f_7691.f_764)
	{
		return;
	}
	if (Global_114370.f_7691.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_114370.f_7691.f_764 - 2))
		{
			Global_114370.f_7691.f_651[iVar0 /*14*/] = { Global_114370.f_7691.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_114370.f_7691.f_764 > 0)
	{
		Global_114370.f_7691.f_651[(Global_114370.f_7691.f_764 - 1) /*14*/] = { Var1 };
		Global_114370.f_7691.f_764 = (Global_114370.f_7691.f_764 - 1);
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_47(int iParam0)//Position - 0x1A7E
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_114370.f_7691.f_650)
	{
		if (Global_114370.f_7691.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_114370.f_7691.f_650 - 2))
			{
				Global_114370.f_7691.f_199[iVar16 /*15*/] = { Global_114370.f_7691.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_114370.f_7691.f_199[(Global_114370.f_7691.f_650 - 1) /*15*/] = { Var0 };
			Global_114370.f_7691.f_650 = (Global_114370.f_7691.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_48(int iParam0)//Position - 0x1B2B
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_114370.f_7691.f_198)
	{
		if (Global_114370.f_7691.f_137[iVar15 /*15*/] == iParam0)
		{
			func_49(Global_114370.f_7691.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_114370.f_7691.f_198 - 2))
			{
				Global_114370.f_7691.f_137[iVar16 /*15*/] = { Global_114370.f_7691.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_114370.f_7691.f_137[(Global_114370.f_7691.f_198 - 1) /*15*/] = { Var0 };
			Global_114370.f_7691.f_198 = (Global_114370.f_7691.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_49(int iParam0)//Position - 0x1BE7
{
	int iVar0;
	
	if (Global_118[iParam0 /*10*/].f_8 != 178)
	{
		if (func_22(iParam0, Global_20813) == 1)
		{
			func_54(iParam0, Global_20813, 0);
			if (func_53(iParam0, Global_20813) == 0)
			{
				iVar0 = Global_20813;
				func_50(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_50(int iParam0, int iParam1)//Position - 0x1C3D
{
	int iVar0;
	
	if (Global_118[iParam0 /*10*/].f_8 != 178)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_52(iParam0, iVar0, 0);
			func_51(iParam0, iVar0, 0);
		}
	}
}

void func_51(int iParam0, int iParam1, int iParam2)//Position - 0x1C72
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2139[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_114370.f_28053[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_52(int iParam0, int iParam1, int iParam2)//Position - 0x1CB7
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2139[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_114370.f_28053[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_53(int iParam0, int iParam1)//Position - 0x1CFC
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2139[iParam0 /*29*/].f_24[iParam1];
}

void func_54(int iParam0, int iParam1, int iParam2)//Position - 0x1D26
{
	Global_2139[iParam0 /*29*/].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_114370.f_28053[iParam0 /*29*/].f_19[iParam1] = iParam2;
	}
}

void func_55(int iParam0)//Position - 0x1D57
{
	bool bVar0;
	var uVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_114370.f_7691.f_136)
	{
		return;
	}
	uVar1 = Global_114370.f_7691[iParam0 /*15*/].f_2;
	if (Global_114370.f_7691.f_136 > 1)
	{
		bVar0 = iParam0;
		while (bVar0 <= (Global_114370.f_7691.f_136 - 2))
		{
			Global_114370.f_7691[bVar0 /*15*/] = { Global_114370.f_7691[bVar0 + 1 /*15*/] };
			bVar0++;
		}
	}
	if (Global_114370.f_7691.f_136 > 0)
	{
		Global_114370.f_7691[(Global_114370.f_7691.f_136 - 1) /*15*/] = { Var2 };
		Global_114370.f_7691.f_136 = (Global_114370.f_7691.f_136 - 1);
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (BitTest(uVar1, bVar0))
		{
			func_9(bVar0);
		}
		bVar0++;
	}
}

