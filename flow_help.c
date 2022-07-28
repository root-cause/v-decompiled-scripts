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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	struct<17> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50))
	{
		func_23();
	}
	while (true)
	{
		if (Global_113386.f_20410.f_145 > 0 || Global_112026)
		{
			if (!Global_112026)
			{
				if ((Global_43052 != 6 && Global_43052 != 15) && !Global_96448)
				{
					func_23();
				}
				if (!Global_112025)
				{
					if (Global_113386.f_20410.f_145 > 0)
					{
						if (func_20(&(Global_113386.f_20410[iLocal_21 /*16*/])))
						{
							if (func_18(func_19()))
							{
								if (BitTest(Global_113386.f_20410[iLocal_21 /*16*/].f_11, func_12()))
								{
									if (Global_113386.f_20410[iLocal_21 /*16*/].f_12 == Global_113386.f_20410.f_146[func_12()])
									{
										if (MISC::GET_GAME_TIMER() > Global_112028)
										{
											if (MISC::GET_GAME_TIMER() > Global_113386.f_20410[iLocal_21 /*16*/].f_8)
											{
												if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iLocal_21 /*16*/].f_4), ""))
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(true);
													func_11(&(Global_113386.f_20410[iLocal_21 /*16*/]));
												}
												else
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(true);
													func_10(&(Global_113386.f_20410[iLocal_21 /*16*/]), &(Global_113386.f_20410[iLocal_21 /*16*/].f_4));
												}
												if (Global_113386.f_20410[iLocal_21 /*16*/].f_13 != 0)
												{
													func_9(Global_113386.f_20410[iLocal_21 /*16*/].f_13, 0);
												}
												Local_20 = { Global_113386.f_20410[iLocal_21 /*16*/] };
												Local_20.f_4 = { Global_113386.f_20410[iLocal_21 /*16*/].f_4 };
												Local_20.f_8 = Global_113386.f_20410[iLocal_21 /*16*/].f_8;
												Local_20.f_10 = Global_113386.f_20410[iLocal_21 /*16*/].f_10;
												Local_20.f_9 = Global_113386.f_20410[iLocal_21 /*16*/].f_9;
												Local_20.f_11 = Global_113386.f_20410[iLocal_21 /*16*/].f_11;
												Local_20.f_12 = Global_113386.f_20410[iLocal_21 /*16*/].f_12;
												Local_20.f_13 = Global_113386.f_20410[iLocal_21 /*16*/].f_13;
												Local_20.f_14 = Global_113386.f_20410[iLocal_21 /*16*/].f_14;
												Local_20.f_15 = Global_113386.f_20410[iLocal_21 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_112029 = { Global_113386.f_20410[iLocal_21 /*16*/] };
												Global_112027 = MISC::GET_GAME_TIMER();
												iVar0 = iLocal_21;
												while (iVar0 <= (Global_113386.f_20410.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_113386.f_20410.f_145 - 1));
												Global_113386.f_20410.f_145 = (Global_113386.f_20410.f_145 - 1);
												func_6();
												Global_112026 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						HUD::CLEAR_HELP(false);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					HUD::CLEAR_HELP(false);
				}
				if ((MISC::GET_GAME_TIMER() - Global_112027) > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						func_9(Local_20.f_14, 0);
					}
					Global_112028 = MISC::GET_GAME_TIMER() + 250;
				}
				else
				{
					if (Local_20.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_20, &(Local_20.f_4), Local_20.f_12, 1000, iVar1, Local_20.f_9, Local_20.f_11, Local_20.f_13, Local_20.f_14, Local_20.f_15);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0;
				Local_20.f_9 = 0;
				Local_20.f_10 = -1;
				Local_20.f_11 = 0;
				Local_20.f_12 = 0;
				Local_20.f_13 = 0;
				Local_20.f_14 = 0;
				Local_20.f_15 = 0;
				Local_20.f_16 = 0;
				Global_112027 = 0;
				Global_112026 = 0;
			}
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iLocal_21 /*16*/]), &Local_20) && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iLocal_21 /*16*/]), ""))
			{
				if (Global_113386.f_20410[iLocal_21 /*16*/].f_10 != -1)
				{
					if (MISC::GET_GAME_TIMER() > Global_113386.f_20410[iLocal_21 /*16*/].f_10)
					{
						iVar2 = iLocal_21;
						while (iVar2 <= (Global_113386.f_20410.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_113386.f_20410.f_145 - 1));
						Global_113386.f_20410.f_145 = (Global_113386.f_20410.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_21++;
			if (iLocal_21 >= Global_113386.f_20410.f_145)
			{
				iLocal_21 = 0;
			}
		}
		else if ((Global_43052 != 6 && Global_43052 != 15) && !Global_96448)
		{
			func_23();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x472
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_6();
	}
}

bool func_2(char* sParam0, char* sParam1)//Position - 0x644
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_3(char* sParam0)//Position - 0x65D
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_4()//Position - 0x670
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (MISC::GET_GAME_TIMER() - Global_112027) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_112025)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
	{
		if (!func_3(&Local_20))
		{
			Local_20.f_16 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_5()//Position - 0x6FF
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()//Position - 0x719
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)//Position - 0x830
{
	StringCopy(&(Global_113386.f_20410[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113386.f_20410[iParam0 /*16*/].f_4), "", 16);
	Global_113386.f_20410[iParam0 /*16*/].f_8 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_9 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_11 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_10 = -1;
	Global_113386.f_20410[iParam0 /*16*/].f_12 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_13 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_14 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)//Position - 0x8C8
{
	Global_113386.f_20410[iParam0 /*16*/] = { Global_113386.f_20410[iParam1 /*16*/] };
	Global_113386.f_20410[iParam0 /*16*/].f_4 = { Global_113386.f_20410[iParam1 /*16*/].f_4 };
	Global_113386.f_20410[iParam0 /*16*/].f_8 = Global_113386.f_20410[iParam1 /*16*/].f_8;
	Global_113386.f_20410[iParam0 /*16*/].f_10 = Global_113386.f_20410[iParam1 /*16*/].f_10;
	Global_113386.f_20410[iParam0 /*16*/].f_9 = Global_113386.f_20410[iParam1 /*16*/].f_9;
	Global_113386.f_20410[iParam0 /*16*/].f_11 = Global_113386.f_20410[iParam1 /*16*/].f_11;
	Global_113386.f_20410[iParam0 /*16*/].f_12 = Global_113386.f_20410[iParam1 /*16*/].f_12;
	Global_113386.f_20410[iParam0 /*16*/].f_13 = Global_113386.f_20410[iParam1 /*16*/].f_13;
	Global_113386.f_20410[iParam0 /*16*/].f_14 = Global_113386.f_20410[iParam1 /*16*/].f_14;
	Global_113386.f_20410[iParam0 /*16*/].f_15 = Global_113386.f_20410[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)//Position - 0x9D8
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113386.f_8613[iParam0] = 1;
	Global_113386.f_8613.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_10(char* sParam0, char* sParam1)//Position - 0xA15
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_11(char* sParam0)//Position - 0xA31
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_12()//Position - 0xA47
{
	func_13();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_13()//Position - 0xA60
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_16(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_15(PLAYER::PLAYER_PED_ID());
			if (func_18(iVar0) && (!func_14(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_18(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_14(int iParam0)//Position - 0xB5D
{
	return Global_43052 == iParam0;
}

int func_15(int iParam0)//Position - 0xB6B
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)//Position - 0xBA8
{
	if (func_18(iParam0))
	{
		return func_17(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_17(int iParam0)//Position - 0xBCD
{
	return Global_1998[iParam0 /*29*/];
}

bool func_18(int iParam0)//Position - 0xBDC
{
	return iParam0 < 3;
}

int func_19()//Position - 0xBE8
{
	func_13();
	return Global_113386.f_2363.f_539.f_4321;
}

int func_20(var uParam0)//Position - 0xC01
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (func_22())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_12 < 3)
	{
		if (func_21())
		{
			return 0;
		}
		if (Global_78317)
		{
			return 0;
		}
		if (Global_97361)
		{
			return 0;
		}
		if (!BitTest(uParam0->f_15, 1))
		{
			if (Global_97369)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_21()//Position - 0xC8B
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

int func_22()//Position - 0xCB5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

void func_23()//Position - 0xCD1
{
	if (Global_112026)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	Global_112027 = 0;
	Global_112026 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

