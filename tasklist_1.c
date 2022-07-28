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
	var uLocal_18[3] = { 0, 0, 0 };
	int iLocal_19 = 0;
	var uLocal_20[3] = { 0, 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_11();
	}
	while (true)
	{
		SYSTEM::WAIT(250);
		switch (iLocal_21)
		{
			case 0:
				if (uLocal_18[0])
				{
					StringCopy(&(Global_22724[1 /*42*/]), "CL_C1A", 16);
					StringCopy(&(Global_22724[1 /*42*/].f_4), "CL_C1A_BR", 16);
					Global_22724[1 /*42*/].f_8 = 0;
					Global_22724[1 /*42*/].f_9 = 2;
					StringCopy(&(Global_22724[1 /*42*/].f_10[1 /*4*/]), "CL_C1A_J1", 16);
					Global_22724[1 /*42*/].f_37[1] = 0;
					Global_22724[1 /*42*/].f_32[1] = 3;
					Global_22724[1 /*42*/].f_27[1] = 0;
					StringCopy(&(Global_22724[1 /*42*/].f_10[2 /*4*/]), "CL_C1A_J2", 16);
					Global_22724[1 /*42*/].f_37[2] = 0;
					Global_22724[1 /*42*/].f_32[2] = 3;
					Global_22724[1 /*42*/].f_27[2] = 0;
					iLocal_19 = 0;
					while (iLocal_19 < Global_22724[1 /*42*/].f_32[1])
					{
						Global_32014[iLocal_19] = 0;
						Global_32010[iLocal_19] = 0;
						iLocal_19++;
					}
					func_4(1, 1, 1, 1);
					func_3("CL_ADDED", "CL_C1A", 3000, 1);
					iLocal_21 = 1;
				}
				break;
			
			case 1:
				iLocal_19 = 0;
				while (iLocal_19 < Global_22724[1 /*42*/].f_32[1])
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_20[iLocal_19]))
						{
							if (PED::IS_PED_INJURED(uLocal_20[iLocal_19]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_20[iLocal_19], PLAYER::PLAYER_PED_ID(), true))
								{
									if (!Global_32010[iLocal_19])
									{
										Global_22724[1 /*42*/].f_27[1]++;
										func_2("CL_C1A_J1", Global_22724[1 /*42*/].f_27[1], Global_22724[1 /*42*/].f_32[1], 2000, 1);
										Global_32010[iLocal_19] = 1;
									}
									if (ENTITY::IS_ENTITY_DEAD(uLocal_20[iLocal_19], false))
									{
										if (!Global_32014[iLocal_19])
										{
											if (MOBILE::CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(uLocal_20[iLocal_19]) && func_1())
											{
												Global_22724[1 /*42*/].f_27[2]++;
												func_2("CL_C1A_J2", Global_22724[1 /*42*/].f_27[2], Global_22724[1 /*42*/].f_32[2], 2000, 1);
												Global_32014[iLocal_19] = 1;
											}
										}
									}
									if (Global_22724[1 /*42*/].f_27[1] >= Global_22724[1 /*42*/].f_32[1] && Global_22724[1 /*42*/].f_27[2] >= Global_22724[1 /*42*/].f_32[2])
									{
										func_3("CL_COMPLETE", "CL_C1A", 3000, 1);
										Global_22724[1 /*42*/].f_8 = 1;
										iLocal_21 = 2;
									}
								}
							}
						}
					}
					iLocal_19++;
				}
				break;
			
			case 2:
				break;
		}
		SYSTEM::WAIT(250);
		switch (iLocal_22)
		{
			case 0:
				if (uLocal_18[1])
				{
					StringCopy(&(Global_22724[2 /*42*/]), "CL_C1B", 16);
					StringCopy(&(Global_22724[2 /*42*/].f_4), "CL_C1B_BR", 16);
					Global_22724[2 /*42*/].f_8 = 0;
					Global_22724[2 /*42*/].f_9 = 3;
					StringCopy(&(Global_22724[2 /*42*/].f_10[1 /*4*/]), "CL_C1B_J1", 16);
					Global_22724[2 /*42*/].f_37[1] = 0;
					Global_22724[2 /*42*/].f_32[1] = -1;
					Global_22724[2 /*42*/].f_27[1] = -1;
					StringCopy(&(Global_22724[2 /*42*/].f_10[2 /*4*/]), "CL_C1B_J2", 16);
					Global_22724[2 /*42*/].f_37[2] = 0;
					Global_22724[2 /*42*/].f_32[2] = -1;
					Global_22724[2 /*42*/].f_27[2] = -1;
					StringCopy(&(Global_22724[2 /*42*/].f_10[3 /*4*/]), "CL_C1B_J3", 16);
					Global_22724[2 /*42*/].f_37[3] = 0;
					Global_22724[2 /*42*/].f_32[3] = -1;
					Global_22724[2 /*42*/].f_27[3] = -1;
					func_4(136, 2, 1, 1);
					func_3("CL_ADDED", "CL_C1B", 3000, 1);
					iLocal_22 = 1;
				}
				break;
			
			case 1:
				if (!Global_22724[2 /*42*/].f_37[1])
				{
				}
				if (!Global_22724[2 /*42*/].f_37[2])
				{
				}
				if (!Global_22724[2 /*42*/].f_37[3])
				{
				}
				if ((Global_22724[2 /*42*/].f_37[1] == 1 && Global_22724[2 /*42*/].f_37[2] == 1) && Global_22724[2 /*42*/].f_37[3] == 1)
				{
					func_3("CL_COMPLETE", "CL_C1B", 3000, 1);
					Global_22724[2 /*42*/].f_8 = 1;
					iLocal_22 = 2;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_1()//Position - 0x438
{
	if (Global_22641)
	{
		return 1;
	}
	return 0;
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x44E
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, false);
}

void func_3(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x473
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, false);
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x492
{
	if (func_10())
	{
		return 0;
	}
	if (func_5(iParam0, iParam1, bParam2, iParam3) == 1)
	{
		return 1;
	}
	return 0;
}

int func_5(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x4BD
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appsidetask")) > 0)
	{
		return 0;
	}
	if (func_8() == 0)
	{
		func_7();
		return 0;
	}
	func_6(Global_22723);
	Global_22893[Global_22723 /*9*/].f_1 = uParam1;
	Global_22893[Global_22723 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_22893[Global_22723 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 1;
}

void func_6(int iParam0)//Position - 0x521
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_22893[iParam0 /*9*/].f_2 = iVar0;
	Global_22893[iParam0 /*9*/].f_2.f_1 = iVar1;
	Global_22893[iParam0 /*9*/].f_2.f_2 = iVar2;
	Global_22893[iParam0 /*9*/].f_2.f_3 = iVar3;
	Global_22893[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_22893[iParam0 /*9*/].f_2.f_5 = iVar5;
}

void func_7()//Position - 0x59B
{
}

int func_8()//Position - 0x5A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_22893[iVar0 /*9*/].f_8 == 0)
		{
			Global_22723 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_22723 = 3;
	Global_22893[Global_22723 /*9*/].f_2 = -1;
	Global_22893[Global_22723 /*9*/].f_2.f_1 = 0;
	Global_22893[Global_22723 /*9*/].f_2.f_2 = 0;
	Global_22893[Global_22723 /*9*/].f_2.f_3 = 0;
	Global_22893[Global_22723 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_22893[iVar0 /*9*/].f_8 == 0 || Global_22893[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_9(Global_22893[iVar0 /*9*/].f_2, Global_22893[Global_22723 /*9*/].f_2))
			{
				Global_22723 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_22723 == 3)
	{
		return 0;
	}
	return 1;
}

int func_9(struct<6> Param0, struct<6> Param1)//Position - 0x67D
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_10()//Position - 0x768
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_11()//Position - 0x78F
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

