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
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		iLocal_41 = 5;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			switch (iLocal_41)
			{
				case 0:
					func_10();
					break;
				
				case 1:
					break;
				
				case 2:
					func_9();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(7, PLAYER::PLAYER_PED_ID(), 2, 3f, &iLocal_47, 0, 0))
						{
							iLocal_46 = MISC::GET_GAME_TIMER();
							iLocal_41 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(7, Local_43, 2, 3f, &iLocal_47, 0, 0))
					{
						iLocal_46 = MISC::GET_GAME_TIMER();
						iLocal_41 = 5;
					}
					break;
				
				case 3:
					func_9();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if ((func_8(PLAYER::PLAYER_ID(), 0) && func_4(PLAYER::PLAYER_ID()) == 5) && Global_1962201)
						{
							if (Global_1962202 == 0)
							{
								Global_1962202 = 1;
							}
							iLocal_41 = 5;
						}
						else if (MISC::CREATE_INCIDENT_WITH_ENTITY(5, PLAYER::PLAYER_PED_ID(), 2, 3f, &iLocal_47, 0, 0))
						{
							iLocal_46 = MISC::GET_GAME_TIMER();
							iLocal_41 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(5, Local_43, 2, 3f, &iLocal_47, 0, 0))
					{
						iLocal_46 = MISC::GET_GAME_TIMER();
						iLocal_41 = 5;
					}
					break;
				
				case 4:
					func_9();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(3, PLAYER::PLAYER_PED_ID(), 4, 3f, &iLocal_47, 0, 0))
						{
							iLocal_46 = MISC::GET_GAME_TIMER();
							iLocal_41 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(3, Local_43, 4, 3f, &iLocal_47, 0, 0))
					{
						if (Global_98010.f_358 == MISC::GET_HASH_KEY("AGENCY_PREP_1") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("agency_prep1")) > 0 && func_3(0)))
						{
							Global_98010.f_358 = MISC::GET_HASH_KEY("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_97940 = 1;
						}
						iLocal_46 = MISC::GET_GAME_TIMER();
						iLocal_41 = 5;
					}
					break;
				
				case 5:
					if (MISC::GET_GAME_TIMER() > (iLocal_46 + 60000) || !MISC::IS_INCIDENT_VALID(iLocal_47))
					{
						func_1();
					}
					else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (MISC::IS_INCIDENT_VALID(iLocal_47))
							{
								MISC::DELETE_INCIDENT(iLocal_47);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()//Position - 0x27A
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)//Position - 0x28C
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

int func_3(bool bParam0)//Position - 0x2B8
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_4(int iParam0)//Position - 0x2E0
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)//Position - 0x2FD
{
	if (func_8(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_6(int iParam0)//Position - 0x320
{
	if (func_7(iParam0))
	{
		if (func_8(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_7(var uParam0)//Position - 0x34C
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

int func_8(int iParam0, int iParam1)//Position - 0x36E
{
	if (func_7(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

void func_9()//Position - 0x3B2
{
	if (MISC::GET_GAME_TIMER() > iLocal_46 + 30000)
	{
		iLocal_41 = 5;
	}
}

void func_10()//Position - 0x3C9
{
	var uVar0;
	
	switch (iLocal_42)
	{
		case 0:
			iLocal_42 = 1;
			iLocal_46 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			while (!func_20())
			{
				SYSTEM::WAIT(0);
				if (func_19() == 3)
				{
					iLocal_41 = 3;
				}
				if (func_19() == 4)
				{
					iLocal_41 = 4;
				}
				if (func_19() == 5)
				{
					iLocal_41 = 2;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_46 + 30000)
				{
					iLocal_46 = MISC::GET_GAME_TIMER();
					func_13(0);
				}
			}
			if (iLocal_41 == 0)
			{
				iLocal_41 = 5;
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_11(PLAYER::PLAYER_PED_ID(), &Local_43, &uVar0);
			}
			iLocal_46 = MISC::GET_GAME_TIMER();
			break;
	}
}

void func_11(int iParam0, var* uParam1, var uParam2)//Position - 0x462
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	struct<3> Var25;
	var uVar28;
	
	fVar18 = 5f;
	iVar0 = 1;
	iVar19 = 0;
	while (iVar19 < 2)
	{
		switch (iVar19)
		{
			case 0:
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iVar0, uParam1, &fVar16, &iVar1, 5, 3f, 0f);
				PATHFIND::GET_CLOSEST_ROAD(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, false);
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
				fVar14 = MISC::GET_HEADING_FROM_VECTOR_2D(Var10.f_0, Var10.f_1);
				fVar15 = (fVar16 + 180f);
				if (fVar15 > 360f)
				{
					fVar15 = (fVar15 - 360f);
				}
				if (func_12(fVar14, fVar16, 90f))
				{
					*uParam2 = fVar16;
				}
				else
				{
					*uParam2 = fVar15;
				}
				if (fVar13 < 0f)
				{
					fVar17 = 0f;
				}
				else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam1, 1, 1, 3f, 0f)))
				{
					fVar17 = 0f;
				}
				else
				{
					fVar17 = (fVar18 * SYSTEM::TO_FLOAT((iVar1 / 2)));
					if (fVar17 == 0f)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (iVar1 == 5)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 294f, -895f, 28f, true) < 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (SYSTEM::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, fVar17, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, -fVar17, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, fVar17, 0f, 0f) };
				iVar20 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar20, &iVar21, &Var25, &uVar22, &uVar28) == 2)
					{
						if (iVar21 != 0)
						{
							if (Var25.f_2 > (uParam1->f_2 + 8.5f))
							{
								iVar19++;
							}
							else
							{
								iVar0++;
								iVar19 = 0;
							}
						}
						else
						{
							iVar19++;
						}
					}
				}
				else
				{
					iVar19++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_12(float fParam0, float fParam1, float fParam2)//Position - 0x708
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_13(int iParam0)//Position - 0x77D
{
	if (func_18())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_17())
		{
			func_15(1, 1);
		}
		else
		{
			func_15(0, 0);
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
	if (!func_14())
	{
		Global_20930.f_1 = 3;
	}
}

int func_14()//Position - 0x807
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_15(bool bParam0, bool bParam1)//Position - 0x82E
{
	if (bParam0)
	{
		if (func_16(0))
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

int func_16(int iParam0)//Position - 0x8A2
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

bool func_17()//Position - 0x8F9
{
	return BitTest(Global_1956920, 5);
}

bool func_18()//Position - 0x907
{
	return BitTest(Global_1956920, 19);
}

int func_19()//Position - 0x916
{
	return Global_23303;
}

int func_20()//Position - 0x921
{
	if (Global_22286 == 0)
	{
		return 1;
	}
	return 0;
}

