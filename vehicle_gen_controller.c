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
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_115[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_184[68];
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	struct<114> Local_400 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_514 = { 0, 0, 0, 0, 0 } ;
	int* iLocal_519 = NULL;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	struct<74> Local_544 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 2;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	bool bLocal_643 = 0;
	int iLocal_644[4] = { 0, 0, 0, 0 };
	bool bLocal_649 = 0;
	int iLocal_650[1] = { 0 };
	int iLocal_652 = 0;
	int iLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	bool bLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662[2] = { 0, 0 };
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	bool bLocal_671 = 0;
	struct<13> Local_672 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	struct<81> Local_693 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_774 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_934[3] = { 0, 0, 0 };
	int iLocal_938 = 0;
	float fLocal_939[68] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	int iLocal_1010 = 0;
	int iLocal_1011 = 0;
	int iLocal_1012 = 0;
	bool bLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	bool bLocal_1016 = 0;
	char cLocal_1017[16] = "";
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	char cLocal_1021[16] = "";
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	char* sLocal_1033 = NULL;
	int iLocal_1034 = 0;
	int iLocal_1035 = 0;
	float fLocal_1036 = 0f;
	int iLocal_1037 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_653 = -1;
	iLocal_654 = -1;
	iLocal_659 = -1;
	iLocal_666 = -1;
	iLocal_938 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Local_400.f_5 = -1;
	Local_400.f_0 = -1;
	Local_400.f_1 = 99999.99f;
	func_547(&iLocal_519);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98192[iVar0 /*3*/][0] = -1;
		Global_98192[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_113810.f_32752.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_113810.f_32752.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_113810.f_32752.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_113810.f_32752.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_113810.f_32752.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_113810.f_32752.f_4801 = -15;
		Global_113810.f_32752.f_4802 = 1;
	}
	if (((!func_546() && !func_545()) && !func_544()) && !func_543())
	{
		func_542(60, 0);
		func_542(61, 0);
	}
	func_541();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_540(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_399)
		{
			iLocal_399 = 1;
			if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
			{
				if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 64)
				{
					if (!Global_78468)
					{
						iLocal_399 = 0;
					}
					else
					{
						func_539();
						func_538();
					}
					Global_78468 = 0;
				}
				else
				{
					func_539();
					func_538();
				}
			}
		}
		SYSTEM::WAIT(0);
		if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != 5)
		{
			iLocal_670 = func_536();
			func_500();
			func_498();
			func_466(&iLocal_519);
			func_425();
			func_28();
			func_20();
			func_17(&uLocal_1008);
		}
		func_1(&iLocal_519);
	}
}

void func_1(int* iParam0)//Position - 0x24C
{
	bool bVar0;
	float fVar1;
	
	if (!BitTest(Global_113810.f_10019.f_25, 7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_14(func_16()))
		{
			bVar0 = false;
			if (BitTest(*iParam0, 6) && BitTest(*iParam0, 12))
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (iParam0->f_2 == -1)
					{
						iParam0->f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
					}
					else
					{
						if (func_13())
						{
							iParam0->f_2 = func_12(iParam0->f_2, (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000)));
						}
						if (!BitTest(*iParam0, 23))
						{
							func_11(iParam0, &(iParam0->f_9));
						}
						else if (!BitTest(*iParam0, 30))
						{
							if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&(iParam0->f_9), false, -1))
							{
								if (MISC::GET_GAME_TIMER() > iParam0->f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(iParam0, func_6(iParam0));
										func_3(0);
										MISC::SET_BIT(iParam0, 30);
									}
								}
							}
						}
						else if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_1))
						{
							MISC::CLEAR_BIT(iParam0, 30);
							AUDIO::RELEASE_SOUND_ID(iParam0->f_1);
							iParam0->f_1 = -1;
							iParam0->f_2 = -1;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (BitTest(*iParam0, 23))
				{
					func_2(iParam0);
				}
				MISC::CLEAR_BIT(iParam0, 30);
				iParam0->f_2 = -1;
			}
		}
	}
}

void func_2(int* iParam0)//Position - 0x3B3
{
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	MISC::CLEAR_BIT(iParam0, 23);
}

void func_3(bool bParam0)//Position - 0x3C7
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_113810.f_10019.f_25), 22);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113810.f_10019.f_25), 22);
	}
}

void func_4(int* iParam0, struct<3> Param1)//Position - 0x3F5
{
	struct<16> Var0;
	struct<16> Var16;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var16 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	iParam0->f_1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_COORD(iParam0->f_1, &Var0, Param1, &Var16, false, 0, false);
}

struct<16> func_5(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x441
{
	struct<16> Var0;
	
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

Vector3 func_6(int* iParam0)//Position - 0x466
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var6 = { func_7(iParam0->f_6 - Var3) * Vector(52.5f, 52.5f, 52.5f) };
		Var0 = { Var3 + Var6 };
	}
	return Var0;
}

Vector3 func_7(struct<3> Param0)//Position - 0x4B3
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

int func_8(int iParam0, int iParam1)//Position - 0x4F2
{
	int iVar0;
	
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/))
	{
		MISC::SET_BIT(&(Global_113810.f_10019.f_25), 22);
	}
	iVar0 = BitTest(Global_113810.f_10019.f_25, 22);
	if (iParam0 && iVar0)
	{
		MISC::CLEAR_BIT(&(Global_113810.f_10019.f_25), 22);
	}
	iParam1 = iParam1;
	return iVar0;
}

int func_9()//Position - 0x542
{
	var uVar0;
	
	uVar0 = func_10(Global_113810.f_10019.f_25, 14336, 11);
	return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)//Position - 0x560
{
	return SYSTEM::SHIFT_RIGHT((uParam0 && iParam1), iParam2);
}

void func_11(int* iParam0, char* sParam1)//Position - 0x573
{
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, false, -1);
	MISC::SET_BIT(iParam0, 23);
}

int func_12(int iParam0, int iParam1)//Position - 0x58C
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_13()//Position - 0x5A2
{
	bool bVar0;
	
	bVar0 = BitTest(Global_113810.f_10019.f_25, 22);
	return (func_8(0, 0) && !bVar0);
}

bool func_14(int iParam0)//Position - 0x5C6
{
	return iParam0 == func_15();
}

int func_15()//Position - 0x5D5
{
	return joaat("IG_Orleans");
}

int func_16()//Position - 0x5E2
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

void func_17(var uParam0)//Position - 0x5F2
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1585990.f_21)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1585990.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_1585990[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1585990[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_ACCELERATION(iVar0);
			if (Global_1585990[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1585990[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_AGILITY(iVar0);
			}
			else
			{
				fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_TRACTION(iVar0);
			}
			if (Global_1585990[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1585990[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_BRAKING(iVar0);
			if (Global_1585990[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1585990[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

float func_18(int iParam0)//Position - 0x70F
{
	if (iParam0 == 7)
	{
		return 51.77096f;
	}
	return VEHICLE::GET_VEHICLE_CLASS_ESTIMATED_MAX_SPEED(iParam0);
}

int func_19(int iParam0, int iParam1)//Position - 0x72B
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				case 6:
					return 6;
				
				case 7:
					return 7;
				
				case 8:
					return 8;
				
				case 9:
					return 9;
				
				case 10:
					return 10;
				
				case 11:
					return 11;
				
				case 12:
					return 12;
				
				case 13:
					return 13;
				
				case 14:
					return 17;
				
				case 15:
					return 18;
				
				case 16:
					return 19;
				
				case 17:
					return 20;
				
				case 18:
					return 22;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 15;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 16;
				
				default:
			}
			break;
	}
	return -1;
}

void func_20()//Position - 0x865
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (HUD::DOES_BLIP_EXIST(Global_77479.f_583))
	{
		bVar0 = false;
		if (iLocal_670 != Global_77479.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14))
		{
			bVar0 = true;
		}
		else if (Global_77479.f_590)
		{
			if (!func_26(Global_77479.f_584, HUD::GET_BLIP_COORDS(Global_77479.f_583), 1056964608, 0) || func_22(Global_77479.f_582, func_23(Global_77479.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_77479.f_591)
		{
			if (!func_26(Global_77479.f_587, HUD::GET_BLIP_COORDS(Global_77479.f_583), 1056964608, 0) || func_22(Global_77479.f_582, func_23(Global_77479.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!ENTITY::DOES_ENTITY_EXIST(Global_77479.f_581) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_581, false)) || (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_581, false)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_581) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_581, false))
			{
				Global_77479.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_581))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_581, false))
			{
				Global_77479.f_587 = { ENTITY::GET_ENTITY_COORDS(Global_77479.f_581, true) };
			}
			else
			{
				Global_77479.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			HUD::REMOVE_BLIP(&(Global_77479.f_583));
			Global_77479.f_590 = 0;
			Global_77479.f_591 = 0;
			Global_77479.f_581 = 0;
		}
	}
	else
	{
		Global_77479.f_590 = 0;
		Global_77479.f_591 = 0;
		Global_77479.f_581 = 0;
	}
	if ((((((!HUD::DOES_BLIP_EXIST(Global_77479.f_583) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_98154[iVar2] != 145 && Global_98164[iVar2] != 0) && ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar2])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar2], false)) && !HUD::DOES_BLIP_EXIST(HUD::GET_BLIP_FROM_ENTITY(Global_98144[iVar2]))) && Global_98154[iVar2] == iLocal_670) && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_98144[iVar2])))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98144[iVar2], false))
				{
					Global_77479.f_581 = Global_98144[iVar2];
					Global_77479.f_582 = iLocal_670;
					Global_77479.f_590 = 0;
					Global_77479.f_583 = HUD::ADD_BLIP_FOR_ENTITY(Global_77479.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!HUD::DOES_BLIP_EXIST(Global_77479.f_583) && !func_21(Global_77479.f_584, 0f, 0f, 0f, 0))
			{
				Global_77479.f_581 = 0;
				Global_77479.f_582 = iLocal_670;
				Global_77479.f_590 = 1;
				Global_77479.f_583 = HUD::ADD_BLIP_FOR_COORD(Global_77479.f_584);
			}
			if (!HUD::DOES_BLIP_EXIST(Global_77479.f_583) && !func_21(Global_77479.f_587, 0f, 0f, 0f, 0))
			{
				Global_77479.f_581 = 0;
				Global_77479.f_582 = iLocal_670;
				Global_77479.f_591 = 1;
				Global_77479.f_583 = HUD::ADD_BLIP_FOR_COORD(Global_77479.f_587);
			}
		}
		else
		{
			Global_77479.f_590 = 0;
			Global_77479.f_591 = 0;
		}
		if (HUD::DOES_BLIP_EXIST(Global_77479.f_583))
		{
			HUD::SET_BLIP_SPRITE(Global_77479.f_583, 225);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77479.f_583, "PVEHICLE" /* GXT: Personal Vehicle */);
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_77479.f_583, false);
			HUD::SET_BLIP_PRIORITY(Global_77479.f_583, 3);
			if (iLocal_670 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_670 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_670 == 2)
			{
				iVar3 = 44;
			}
			HUD::SET_BLIP_COLOUR(Global_77479.f_583, iVar3);
		}
	}
}

bool func_21(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xCEE
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_22(int iParam0, int iParam1)//Position - 0xD35
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar1], false))
		{
			if (Global_98154[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == ENTITY::GET_ENTITY_MODEL(Global_98144[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1)//Position - 0xDA5
{
	struct<82> Var0;
	
	if (func_25(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_24(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_24(int iParam0, var uParam1, int iParam2)//Position - 0xDE7
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113810.f_9088.f_99.f_58[128] && !Global_113810.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113810.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113810.f_9088.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_25(int iParam0)//Position - 0x103E
{
	return iParam0 < 3;
}

int func_26(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x104A
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

bool func_27(int iParam0)//Position - 0x10C5
{
	return Global_43377 == iParam0;
}

void func_28()//Position - 0x10D3
{
	func_365();
	func_276();
	func_71();
	func_29();
}

void func_29()//Position - 0x10EB
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((((Local_400.f_29.f_80 && !Local_400.f_29.f_69) && Local_400.f_0 != -1) && func_70(Local_400.f_0, 0)) && func_70(Local_400.f_0, 5)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael1")) == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_400.f_113))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
						if (func_67(iVar1))
						{
							Local_400.f_113 = iVar0;
						}
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_400.f_113, false) && func_67(ENTITY::GET_ENTITY_MODEL(Local_400.f_113)))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_400.f_113, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_400.f_113, Local_400.f_29.f_48, Local_400.f_29.f_51, Local_400.f_29.f_54, false, true, 0))
					{
						if ((!func_66(Local_400.f_113) && !func_65(Local_400.f_113)) && Local_400.f_113 != Global_77479.f_484[Local_400.f_0])
						{
							func_30(Local_400.f_0, Local_400.f_113, 1);
						}
						Local_400.f_113 = 0;
					}
				}
			}
			else
			{
				Local_400.f_113 = 0;
			}
		}
		else
		{
			Local_400.f_113 = 0;
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2)//Position - 0x124F
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_64(&(Global_77479.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77479.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77479.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77479.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78386 != -1 && Global_78386 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113810.f_32752.f_4801 = func_53();
			}
			if (iParam1 != Global_77479.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_52(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_31(iVar0, 145);
					}
				}
				Global_78385 = iParam1;
				Global_78386 = iParam0;
				Global_78387 = iParam2;
			}
		}
	}
}

void func_31(int iParam0, int iParam1)//Position - 0x1366
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_37(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113810.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113810.f_32752.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113810.f_32752.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113810.f_32752.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113810.f_32752.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113810.f_32752.f_5590 = iParam1;
	Global_78384 = iParam0;
	Global_113810.f_32752.f_5588 = 1;
	func_32(iParam0, &(Global_113810.f_32752.f_5510));
}

void func_32(int iParam0, var uParam1)//Position - 0x1568
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_36(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_35(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_33(int iParam0)//Position - 0x1811
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_34(int iParam0, var uParam1, var uParam2)//Position - 0x18C1
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)//Position - 0x1AB4
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_36(var uParam0)//Position - 0x1AD4
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_37(int iParam0)//Position - 0x1B84
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_50(iParam0, 0, 0)) || func_50(iParam0, 1, 0)) || func_50(iParam0, 2, 0)) || func_49(iParam0) != 145) || func_48(iParam0)) || func_66(iParam0)) || func_65(iParam0)) || func_47(iParam0)) || !func_38(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_66(iParam0))
		{
		}
		if (func_66(iParam0))
		{
		}
		if (func_50(iParam0, 0, 0))
		{
		}
		if (func_50(iParam0, 1, 0))
		{
		}
		if (func_50(iParam0, 2, 0))
		{
		}
		if (func_49(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_38(int iParam0)//Position - 0x1C61
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_39(iParam0, 0, -1))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_39(int iParam0, bool bParam1, int iParam2)//Position - 0x1E13
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_46())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_546() && !func_545()) && !func_544()) && !func_543()) && !func_46())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_45() || MISC::IS_PC_VERSION()) || func_44())
		{
		}
		else if (!func_544())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_42(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_40(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0)//Position - 0x1F95
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_41())
	{
		return 1;
	}
	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_41()//Position - 0x2059
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_42(int iParam0, int iParam1)//Position - 0x2070
{
	int iVar0;
	int iVar1;
	
	if ((!Global_2764417 && iParam1 >= 0) && iParam1 <= 415)
	{
		if (BitTest(Global_1586488[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	if (Global_2764416)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7142 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !Global_262145.f_13570 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE */) && iVar1 < Global_262145.f_13571 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14912 /* Tunable: ENABLE_LOWRIDER2_FACTION */ && iVar1 < Global_262145.f_14924 /* Tunable: ENABLE_LOWRIDER2_FACTION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14908 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */ && iVar1 < Global_262145.f_14920 /* Tunable: ENABLE_LOWRIDER2_VIRGO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14909 /* Tunable: ENABLE_LOWRIDER2_SABREGT */ && iVar1 < Global_262145.f_14921 /* Tunable: ENABLE_LOWRIDER2_SABREGT_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14910 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */ && iVar1 < Global_262145.f_14922 /* Tunable: ENABLE_LOWRIDER2_TORNADO5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14911 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */ && iVar1 < Global_262145.f_14923 /* Tunable: ENABLE_LOWRIDER2_MINIVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14913 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */ && iVar1 < Global_262145.f_14925 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14914 /* Tunable: ENABLEEXEC1_GROTTI_PROTO */ && iVar1 < Global_262145.f_14917 /* Tunable: ENABLEEXEC1_GROTTI_PROTO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14915 /* Tunable: ENABLEEXEC1_DEWBAUCHEE */ && iVar1 < Global_262145.f_14918 /* Tunable: ENABLEEXEC1_DEWBAUCHEE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14916 /* Tunable: ENABLEEXEC1_PFISTER */ && iVar1 < Global_262145.f_14919 /* Tunable: ENABLEEXEC1_PFISTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17493 /* Tunable: ENABLESTUNT_BF400 */ && iVar1 < Global_262145.f_17458 /* Tunable: ENABLESTUNT_BF400_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17488 /* Tunable: ENABLESTUNT_BRIOSO_RA */ && iVar1 < Global_262145.f_17453 /* Tunable: ENABLESTUNT_BRIOSO_RA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17492 /* Tunable: ENABLESTUNT_CLIFFHANGER */ && iVar1 < Global_262145.f_17457 /* Tunable: ENABLESTUNT_CLIFFHANGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17491 /* Tunable: ENABLESTUNT_CONTENDER */ && iVar1 < Global_262145.f_17456 /* Tunable: ENABLESTUNT_CONTENDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17485 /* Tunable: ENABLESTUNT_LE7B */ && iVar1 < Global_262145.f_17450 /* Tunable: ENABLESTUNT_LE7B_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17486 /* Tunable: ENABLESTUNT_OMNIS */ && iVar1 < Global_262145.f_17451 /* Tunable: ENABLESTUNT_OMNIS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17489 /* Tunable: ENABLESTUNT_TROPHY_TRUCK */ && iVar1 < Global_262145.f_17454 /* Tunable: ENABLESTUNT_TROPHY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17490 /* Tunable: ENABLESTUNT_TROPHY_CAR */ && iVar1 < Global_262145.f_17455 /* Tunable: ENABLESTUNT_TROPHY_CAR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17487 /* Tunable: ENABLESTUNT_TROPOS_RALLYE */ && iVar1 < Global_262145.f_17452 /* Tunable: ENABLESTUNT_TROPOS_RALLYE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17495 /* Tunable: ENABLESTUNT_GARGOYLE */ && iVar1 < Global_262145.f_17460 /* Tunable: ENABLESTUNT_GARGOYLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17496 /* Tunable: ENABLESTUNT_RALLY_TRUCK */ && iVar1 < Global_262145.f_17461 /* Tunable: ENABLESTUNT_RALLY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17484 /* Tunable: ENABLESTUNT_DRIFT_TAMPA */ && iVar1 < Global_262145.f_17449 /* Tunable: ENABLESTUNT_DRIFT_TAMPA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17483 /* Tunable: ENABLESTUNT_TYRUS */ && iVar1 < Global_262145.f_17448 /* Tunable: ENABLESTUNT_TYRUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17482 /* Tunable: ENABLESTUNT_ET1 */ && iVar1 < Global_262145.f_17447 /* Tunable: ENABLESTUNT_ET1_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17494 /* Tunable: ENABLESTUNT_LYNX */ && iVar1 < Global_262145.f_17459 /* Tunable: ENABLESTUNT_LYNX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17497 /* Tunable: ENABLESTUNT_STALLION */ && iVar1 < Global_262145.f_17462 /* Tunable: ENABLESTUNT_STALLION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17498 /* Tunable: ENABLESTUNT_GAUNTLET */ && iVar1 < Global_262145.f_17463 /* Tunable: ENABLESTUNT_GAUNTLET_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17499 /* Tunable: ENABLESTUNT_DOMINATOR */ && iVar1 < Global_262145.f_17464 /* Tunable: ENABLESTUNT_DOMINATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17500 /* Tunable: ENABLESTUNT_BUFFALO */ && iVar1 < Global_262145.f_17465 /* Tunable: ENABLESTUNT_BUFFALO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17654 /* Tunable: ENABLE_BIKER_DEFILER */ && iVar1 < Global_262145.f_17676 /* Tunable: ENABLE_BIKER_DEFILER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17655 /* Tunable: ENABLE_BIKER_NIGHTBLADE */ && iVar1 < Global_262145.f_17677 /* Tunable: ENABLE_BIKER_NIGHTBLADE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17656 /* Tunable: ENABLE_BIKER_ZOMBIEA */ && iVar1 < Global_262145.f_17678 /* Tunable: ENABLE_BIKER_ZOMBIEA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17657 /* Tunable: ENABLE_BIKER_ESSKEY */ && iVar1 < Global_262145.f_17679 /* Tunable: ENABLE_BIKER_ESSKEY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17658 /* Tunable: ENABLE_BIKER_AVARUS */ && iVar1 < Global_262145.f_17680 /* Tunable: ENABLE_BIKER_AVARUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17659 /* Tunable: ENABLE_BIKER_ZOMBIEB */ && iVar1 < Global_262145.f_17681 /* Tunable: ENABLE_BIKER_ZOMBIEB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17661 /* Tunable: ENABLE_BIKER_HAKUCHOU2 */ && iVar1 < Global_262145.f_17682 /* Tunable: ENABLE_BIKER_HAKUCHOU2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17662 /* Tunable: ENABLE_BIKER_VORTEX */ && iVar1 < Global_262145.f_17683 /* Tunable: ENABLE_BIKER_VORTEX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17663 /* Tunable: ENABLE_BIKER_SHOTARO */ && iVar1 < Global_262145.f_17684 /* Tunable: ENABLE_BIKER_SHOTARO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17664 /* Tunable: ENABLE_BIKER_CHIMERA */ && iVar1 < Global_262145.f_17685 /* Tunable: ENABLE_BIKER_CHIMERA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17665 /* Tunable: ENABLE_BIKER_RAPTOR */ && iVar1 < Global_262145.f_17686 /* Tunable: ENABLE_BIKER_RAPTOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17666 /* Tunable: ENABLE_BIKER_WESTERNDAEMON */ && iVar1 < Global_262145.f_17687 /* Tunable: ENABLE_BIKER_WESTERNDAEMON_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17667 /* Tunable: ENABLE_BIKER_BLAZER4 */ && iVar1 < Global_262145.f_17688 /* Tunable: ENABLE_BIKER_BLAZER4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17673 /* Tunable: ENABLE_BIKER_TORNADO6 */ && iVar1 < Global_262145.f_17695 /* Tunable: ENABLE_BIKER_TORNADO6_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17670 /* Tunable: ENABLE_BIKER_YOUGA2 */ && iVar1 < Global_262145.f_17691 /* Tunable: ENABLE_BIKER_YOUGA2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17671 /* Tunable: ENABLE_BIKER_WOLFSBANE */ && iVar1 < Global_262145.f_17692 /* Tunable: ENABLE_BIKER_WOLFSBANE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17672 /* Tunable: ENABLE_BIKER_FAGGIO3 */ && iVar1 < Global_262145.f_17693 /* Tunable: ENABLE_BIKER_FAGGIO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17660 /* Tunable: ENABLE_BIKER_FAGGIO */ && iVar1 < Global_262145.f_17694 /* Tunable: ENABLE_BIKER_FAGGIO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17674 /* Tunable: ENABLE_BIKER_BAGGER */ && iVar1 < Global_262145.f_17696 /* Tunable: ENABLE_BIKER_BAGGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17668 /* Tunable: ENABLE_BIKER_SANCTUS */ && iVar1 < Global_262145.f_17689 /* Tunable: ENABLE_BIKER_SANCTUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17669 /* Tunable: ENABLE_BIKER_MANCHEZ */ && iVar1 < Global_262145.f_17690 /* Tunable: ENABLE_BIKER_MANCHEZ_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17675 /* Tunable: ENABLE_BIKER_RATBIKE */ && iVar1 < Global_262145.f_17697 /* Tunable: ENABLE_BIKER_RATBIKE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19311 /* Tunable: ENABLE_IE_VOLTIC2 */ && iVar1 < Global_262145.f_19408 /* Tunable: ENABLE_IE_VOLTIC2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19312 /* Tunable: ENABLE_IE_RUINER2 */ && iVar1 < Global_262145.f_19409 /* Tunable: ENABLE_IE_RUINER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19313 /* Tunable: ENABLE_IE_DUNE4 */ && iVar1 < Global_262145.f_19410 /* Tunable: ENABLE_IE_DUNE4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19314 /* Tunable: ENABLE_IE_DUNE5 */ && iVar1 < Global_262145.f_19411 /* Tunable: ENABLE_IE_DUNE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19315 /* Tunable: ENABLE_IE_PHANTOM2 */ && iVar1 < Global_262145.f_19412 /* Tunable: ENABLE_IE_PHANTOM2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19316 /* Tunable: ENABLE_IE_TECHNICAL2 */ && iVar1 < Global_262145.f_19413 /* Tunable: ENABLE_IE_TECHNICAL2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19317 /* Tunable: ENABLE_IE_BOXVILLE5 */ && iVar1 < Global_262145.f_19414 /* Tunable: ENABLE_IE_BOXVILLE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19318 /* Tunable: ENABLE_IE_WASTELANDER */ && iVar1 < Global_262145.f_19415 /* Tunable: ENABLE_IE_WASTELANDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19319 /* Tunable: ENABLE_IE_BLAZER5 */ && iVar1 < Global_262145.f_19416 /* Tunable: ENABLE_IE_BLAZER5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19320 /* Tunable: ENABLE_IE_COMET2 */ && iVar1 < Global_262145.f_19417 /* Tunable: ENABLE_IE_COMET2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19321 /* Tunable: ENABLE_IE_COMET3 */ && iVar1 < Global_262145.f_19418 /* Tunable: ENABLE_IE_COMET3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19322 /* Tunable: ENABLE_IE_DIABLOUS */ && iVar1 < Global_262145.f_19419 /* Tunable: ENABLE_IE_DIABLOUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19323 /* Tunable: ENABLE_IE_DIABLOUS2 */ && iVar1 < Global_262145.f_19420 /* Tunable: ENABLE_IE_DIABLOUS2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19324 /* Tunable: ENABLE_IE_ELEGY */ && iVar1 < Global_262145.f_19421 /* Tunable: ENABLE_IE_ELEGY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19325 /* Tunable: ENABLE_IE_ELEGY2 */ && iVar1 < Global_262145.f_19422 /* Tunable: ENABLE_IE_ELEGY2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19326 /* Tunable: ENABLE_IE_FCR */ && iVar1 < Global_262145.f_19423 /* Tunable: ENABLE_IE_FCR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19327 /* Tunable: ENABLE_IE_FCR2 */ && iVar1 < Global_262145.f_19424 /* Tunable: ENABLE_IE_FCR2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19328 /* Tunable: ENABLE_IE_ITALIGTB */ && iVar1 < Global_262145.f_19425 /* Tunable: ENABLE_IE_ITALIGTB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19329 /* Tunable: ENABLE_IE_ITALIGTB2 */ && iVar1 < Global_262145.f_19426 /* Tunable: ENABLE_IE_ITALIGTB2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19330 /* Tunable: ENABLE_IE_NERO */ && iVar1 < Global_262145.f_19427 /* Tunable: ENABLE_IE_NERO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19331 /* Tunable: ENABLE_IE_NERO2 */ && iVar1 < Global_262145.f_19428 /* Tunable: ENABLE_IE_NERO2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19332 /* Tunable: ENABLE_IE_PENETRATOR */ && iVar1 < Global_262145.f_19429 /* Tunable: ENABLE_IE_PENETRATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19333 /* Tunable: ENABLE_IE_SPECTER */ && iVar1 < Global_262145.f_19430 /* Tunable: ENABLE_IE_SPECTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19334 /* Tunable: ENABLE_IE_SPECTER2 */ && iVar1 < Global_262145.f_19431 /* Tunable: ENABLE_IE_SPECTER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19335 /* Tunable: ENABLE_IE_TEMPESTA */ && iVar1 < Global_262145.f_19432 /* Tunable: ENABLE_IE_TEMPESTA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20392 /* Tunable: ENABLEGP1 */ && iVar1 < Global_262145.f_20388 /* Tunable: LAUNCHPOSIXGP1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20393 /* Tunable: ENABLEINFERNUS2 */ && iVar1 < Global_262145.f_20389 /* Tunable: LAUNCHPOSIXINFERNUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20394 /* Tunable: ENABLERUSTON */ && iVar1 < Global_262145.f_20390 /* Tunable: LAUNCHPOSIXRUSTON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20395 /* Tunable: ENABLETURISMO2 */ && iVar1 < Global_262145.f_20391 /* Tunable: LAUNCHPOSIXTURISMO2 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21274 /* Tunable: ENABLE_XA21 */ && iVar1 < Global_262145.f_21282 /* Tunable: LAUNCHPOSIX_XA21 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21275 /* Tunable: ENABLE_CHEETAH2 */ && iVar1 < Global_262145.f_21283 /* Tunable: LAUNCHPOSIX_CHEETAH2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21276 /* Tunable: ENABLE_TORERO */ && iVar1 < Global_262145.f_21284 /* Tunable: LAUNCHPOSIX_TORERO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21277 /* Tunable: ENABLE_VAGNER */ && iVar1 < Global_262145.f_21285 /* Tunable: LAUNCHPOSIX_VAGNER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21278 /* Tunable: ENABLE_ARDENT */ && iVar1 < Global_262145.f_21286 /* Tunable: LAUNCHPOSIX_ARDENT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21279 /* Tunable: ENABLE_NIGHTSHARK */ && iVar1 < Global_262145.f_21287 /* Tunable: LAUNCHPOSIX_NIGHTSHARK */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_22073 /* Tunable: ENABLE_ULTRALIGHT */ && iVar1 < Global_262145.f_22093 /* Tunable: LAUNCHPOSIX_ULTRALIGHT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_22085 /* Tunable: ENABLE_MOGUL */ && iVar1 < Global_262145.f_22105 /* Tunable: LAUNCHPOSIX_MOGUL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_22076 /* Tunable: ENABLE_ROGUE */ && iVar1 < Global_262145.f_22096 /* Tunable: LAUNCHPOSIX_ROGUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_22086 /* Tunable: ENABLE_STARLING */ && iVar1 < Global_262145.f_22106 /* Tunable: LAUNCHPOSIX_STARLING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_22074 /* Tunable: ENABLE_SEABREEZE */ && iVar1 < Global_262145.f_22094 /* Tunable: LAUNCHPOSIX_SEABREEZE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_22090 /* Tunable: ENABLE_TULA */ && iVar1 < Global_262145.f_22110 /* Tunable: LAUNCHPOSIX_TULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_22088 /* Tunable: ENABLE_PYRO */ && iVar1 < Global_262145.f_22108 /* Tunable: LAUNCHPOSIX_PYRO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_22089 /* Tunable: ENABLE_MOLOTOK */ && iVar1 < Global_262145.f_22109 /* Tunable: LAUNCHPOSIX_MOLOTOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_22084 /* Tunable: ENABLE_NOKOTA */ && iVar1 < Global_262145.f_22104 /* Tunable: LAUNCHPOSIX_NOKOTA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_22091 /* Tunable: ENABLE_BOMBUSHKA */ && iVar1 < Global_262145.f_22111 /* Tunable: LAUNCHPOSIX_BOMBUSHKA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_22087 /* Tunable: ENABLE_HUNTER */ && iVar1 < Global_262145.f_22107 /* Tunable: LAUNCHPOSIX_HUNTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_22083 /* Tunable: ENABLE_HAVOK */ && iVar1 < Global_262145.f_22103 /* Tunable: LAUNCHPOSIX_HAVOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_22075 /* Tunable: ENABLE_HOWARD */ && iVar1 < Global_262145.f_22095 /* Tunable: LAUNCHPOSIX_HOWARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_22077 /* Tunable: ENABLE_ALPHAZ1 */ && iVar1 < Global_262145.f_22097 /* Tunable: LAUNCHPOSIX_ALPHAZ1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_22078 /* Tunable: ENABLE_CYCLONE */ && iVar1 < Global_262145.f_22098 /* Tunable: LAUNCHPOSIX_CYCLONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_22079 /* Tunable: ENABLE_VISIONE */ && iVar1 < Global_262145.f_22099 /* Tunable: LAUNCHPOSIX_VISIONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_22080 /* Tunable: ENABLE_VIGILANTE */ && iVar1 < Global_262145.f_22100 /* Tunable: LAUNCHPOSIX_VIGILANTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_22081 /* Tunable: ENABLE_RETINUE */ && iVar1 < Global_262145.f_22101 /* Tunable: LAUNCHPOSIX_RETINUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_22082 /* Tunable: ENABLE_RAPIDGT3 */ && iVar1 < Global_262145.f_22102 /* Tunable: LAUNCHPOSIX_RAPIDGT3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_23041 /* Tunable: ENABLE_DELUXO */ && iVar1 < Global_262145.f_23069 /* Tunable: LAUNCHPOSIX_DELUXO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_23042 /* Tunable: ENABLE_STROMBERG */ && iVar1 < Global_262145.f_23070 /* Tunable: LAUNCHPOSIX_STROMBERG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_23043 /* Tunable: ENABLE_RIOT2 */ && iVar1 < Global_262145.f_23071 /* Tunable: LAUNCHPOSIX_RIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_23044 /* Tunable: ENABLE_CHERNOBOG */ && iVar1 < Global_262145.f_23072 /* Tunable: LAUNCHPOSIX_CHERNOBOG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_23045 /* Tunable: ENABLE_KHANJALI */ && iVar1 < Global_262145.f_23073 /* Tunable: LAUNCHPOSIX_KHANJALI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_23046 /* Tunable: ENABLE_AKULA */ && iVar1 < Global_262145.f_23074 /* Tunable: LAUNCHPOSIX_AKULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_23047 /* Tunable: ENABLE_THRUSTER */ && iVar1 < Global_262145.f_23075 /* Tunable: LAUNCHPOSIX_THRUSTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_23048 /* Tunable: ENABLE_BARRAGE */ && iVar1 < Global_262145.f_23076 /* Tunable: LAUNCHPOSIX_BARRAGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_23049 /* Tunable: ENABLE_VOLATOL */ && iVar1 < Global_262145.f_23077 /* Tunable: LAUNCHPOSIX_VOLATOL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_23050 /* Tunable: ENABLE_COMET4 */ && iVar1 < Global_262145.f_23078 /* Tunable: LAUNCHPOSIX_COMET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_23051 /* Tunable: ENABLE_NEON */ && iVar1 < Global_262145.f_23079 /* Tunable: LAUNCHPOSIX_NEON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_23052 /* Tunable: ENABLE_STREITER */ && iVar1 < Global_262145.f_23080 /* Tunable: LAUNCHPOSIX_STREITER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_23053 /* Tunable: ENABLE_SENTINEL3 */ && iVar1 < Global_262145.f_23081 /* Tunable: LAUNCHPOSIX_SENTINEL3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_23054 /* Tunable: ENABLE_YOSEMITE */ && iVar1 < Global_262145.f_23082 /* Tunable: LAUNCHPOSIX_YOSEMITE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_23055 /* Tunable: ENABLE_SC1 */ && iVar1 < Global_262145.f_23083 /* Tunable: LAUNCHPOSIX_SC1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_23056 /* Tunable: ENABLE_AUTARCH */ && iVar1 < Global_262145.f_23084 /* Tunable: LAUNCHPOSIX_AUTARCH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_23057 /* Tunable: ENABLE_GT500 */ && iVar1 < Global_262145.f_23085 /* Tunable: LAUNCHPOSIX_GT500 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_23058 /* Tunable: ENABLE_HUSTLER */ && iVar1 < Global_262145.f_23086 /* Tunable: LAUNCHPOSIX_HUSTLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_23059 /* Tunable: ENABLE_REVOLTER */ && iVar1 < Global_262145.f_23087 /* Tunable: LAUNCHPOSIX_REVOLTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_23060 /* Tunable: ENABLE_PARIAH */ && iVar1 < Global_262145.f_23088 /* Tunable: LAUNCHPOSIX_PARIAH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_23061 /* Tunable: ENABLE_RAIDEN */ && iVar1 < Global_262145.f_23089 /* Tunable: LAUNCHPOSIX_RAIDEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_23062 /* Tunable: ENABLE_SAVESTRA */ && iVar1 < Global_262145.f_23090 /* Tunable: LAUNCHPOSIX_SAVESTRA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_23063 /* Tunable: ENABLE_RIATA */ && iVar1 < Global_262145.f_23091 /* Tunable: LAUNCHPOSIX_RIATA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_23064 /* Tunable: ENABLE_HERMES */ && iVar1 < Global_262145.f_23092 /* Tunable: LAUNCHPOSIX_HERMES */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_23065 /* Tunable: ENABLE_COMET5 */ && iVar1 < Global_262145.f_23093 /* Tunable: LAUNCHPOSIX_COMET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_23066 /* Tunable: ENABLE_Z190 */ && iVar1 < Global_262145.f_23094 /* Tunable: LAUNCHPOSIX_Z190 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_23067 /* Tunable: ENABLE_VISERIS */ && iVar1 < Global_262145.f_23095 /* Tunable: LAUNCHPOSIX_VISERIS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_23068 /* Tunable: ENABLE_KAMACHO */ && iVar1 < Global_262145.f_23096 /* Tunable: LAUNCHPOSIX_KAMACHO */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24263 /* Tunable: ENABLE_GB200 */ && iVar1 < Global_262145.f_24279 /* Tunable: LAUNCHPOSIX_GB200 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24264 /* Tunable: ENABLE_FAGALOA */ && iVar1 < Global_262145.f_24280 /* Tunable: LAUNCHPOSIX_FAGALOA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24268 /* Tunable: ENABLE_ELLIE */ && iVar1 < Global_262145.f_24284 /* Tunable: LAUNCHPOSIX_ELLIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24271 /* Tunable: ENABLE_ISSI3 */ && iVar1 < Global_262145.f_24287 /* Tunable: LAUNCHPOSIX_ISSI3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24276 /* Tunable: ENABLE_MICHELLI */ && iVar1 < Global_262145.f_24292 /* Tunable: LAUNCHPOSIX_MICHELLI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24270 /* Tunable: ENABLE_FLASHGT */ && iVar1 < Global_262145.f_24286 /* Tunable: LAUNCHPOSIX_FLASHGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24262 /* Tunable: ENABLE_HOTRING */ && iVar1 < Global_262145.f_24278 /* Tunable: LAUNCHPOSIX_HOTRING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24269 /* Tunable: ENABLE_TEZERACT */ && iVar1 < Global_262145.f_24285 /* Tunable: LAUNCHPOSIX_TEZERACT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24275 /* Tunable: ENABLE_TYRANT */ && iVar1 < Global_262145.f_24291 /* Tunable: LAUNCHPOSIX_TYRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24274 /* Tunable: ENABLE_DOMINATOR3 */ && iVar1 < Global_262145.f_24290 /* Tunable: LAUNCHPOSIX_DOMINATOR3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24265 /* Tunable: ENABLE_TAIPAN */ && iVar1 < Global_262145.f_24281 /* Tunable: LAUNCHPOSIX_TAIPAN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24267 /* Tunable: ENABLE_ENTITY2 */ && iVar1 < Global_262145.f_24283 /* Tunable: LAUNCHPOSIX_ENTITY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24277 /* Tunable: ENABLE_JESTER3 */ && iVar1 < Global_262145.f_24293 /* Tunable: LAUNCHPOSIX_JESTER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24273 /* Tunable: ENABLE_CHEBUREK */ && iVar1 < Global_262145.f_24289 /* Tunable: LAUNCHPOSIX_CHEBUREK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24266 /* Tunable: ENABLE_CARACARA */ && iVar1 < Global_262145.f_24282 /* Tunable: LAUNCHPOSIX_CARACARA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24272 /* Tunable: ENABLE_SEASPARROW */ && iVar1 < Global_262145.f_24288 /* Tunable: LAUNCHPOSIX_SEASPARROW */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24353 /* Tunable: ENABLE_TERBYTE */ && iVar1 < Global_262145.f_24340 /* Tunable: LAUNCHPOSIX_TERBYTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24354 /* Tunable: ENABLE_PBUS2 */ && iVar1 < Global_262145.f_24341 /* Tunable: LAUNCHPOSIX_PBUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24359 /* Tunable: ENABLE_MULE4 */ && iVar1 < Global_262145.f_24346 /* Tunable: LAUNCHPOSIX_MULE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24358 /* Tunable: ENABLE_POUNDER2 */ && iVar1 < Global_262145.f_24345 /* Tunable: LAUNCHPOSIX_POUNDER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24356 /* Tunable: ENABLE_SWINGER */ && iVar1 < Global_262145.f_24343 /* Tunable: LAUNCHPOSIX_SWINGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24362 /* Tunable: ENABLE_MENACER */ && iVar1 < Global_262145.f_24349 /* Tunable: LAUNCHPOSIX_MENACER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24364 /* Tunable: ENABLE_SCRAMJET */ && iVar1 < Global_262145.f_24351 /* Tunable: LAUNCHPOSIX_SCRAMJET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24365 /* Tunable: ENABLE_STRIKEFORCE */ && iVar1 < Global_262145.f_24352 /* Tunable: LAUNCHPOSIX_STRIKEFORCE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24363 /* Tunable: ENABLE_OPPRESSOR2 */ && iVar1 < Global_262145.f_24350 /* Tunable: LAUNCHPOSIX_OPPRESSOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24355 /* Tunable: ENABLE_PATRIOT2 */ && iVar1 < Global_262145.f_24342 /* Tunable: LAUNCHPOSIX_PATRIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24357 /* Tunable: ENABLE_STAFFORD */ && iVar1 < Global_262145.f_24344 /* Tunable: LAUNCHPOSIX_STAFFORD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24361 /* Tunable: ENABLE_FREECRAWLER */ && iVar1 < Global_262145.f_24348 /* Tunable: LAUNCHPOSIX_FREECRAWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24360 /* Tunable: ENABLE_BLIMP3 */ && iVar1 < Global_262145.f_24347 /* Tunable: LAUNCHPOSIX_BLIMP3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26956 /* Tunable: ENABLE_VEHICLE_DEVESTE */ && iVar1 < Global_262145.f_26958 /* Tunable: LAUNCHPOSIX_DEVESTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25969 /* Tunable: ENABLE_VEHICLE_TOROS */ && iVar1 < Global_262145.f_25962 /* Tunable: LAUNCHPOSIX_TOROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25970 /* Tunable: ENABLE_VEHICLE_CLIQUE */ && iVar1 < Global_262145.f_25963 /* Tunable: LAUNCHPOSIX_CLIQUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25971 /* Tunable: ENABLE_VEHICLE_ITALIGTO */ && iVar1 < Global_262145.f_25964 /* Tunable: LAUNCHPOSIX_ITALIGTO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25972 /* Tunable: ENABLE_VEHICLE_DEVIANT */ && iVar1 < Global_262145.f_25965 /* Tunable: LAUNCHPOSIX_DEVIANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26957 /* Tunable: ENABLE_VEHICLE_VAMOS */ && iVar1 < Global_262145.f_26959 /* Tunable: LAUNCHPOSIX_VAMOS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25973 /* Tunable: ENABLE_VEHICLE_TULIP */ && iVar1 < Global_262145.f_25966 /* Tunable: LAUNCHPOSIX_TULIP */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25974 /* Tunable: ENABLE_VEHICLE_SCHLAGEN */ && iVar1 < Global_262145.f_25967 /* Tunable: LAUNCHPOSIX_SCHLAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25975 /* Tunable: ENABLE_VEHICLE_BANDITO */ && iVar1 < Global_262145.f_25968 /* Tunable: LAUNCHPOSIX_BANDITO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25980 /* Tunable: ENABLE_VEHICLE_THRAX */ && iVar1 < Global_262145.f_26001 /* Tunable: LAUNCHPOSIX_THRAX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25981 /* Tunable: ENABLE_VEHICLE_DRAFTER */ && iVar1 < Global_262145.f_26002 /* Tunable: LAUNCHPOSIX_DRAFTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25982 /* Tunable: ENABLE_VEHICLE_LOCUST */ && iVar1 < Global_262145.f_26003 /* Tunable: LAUNCHPOSIX_LOCUST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25983 /* Tunable: ENABLE_VEHICLE_NOVAK */ && iVar1 < Global_262145.f_26004 /* Tunable: LAUNCHPOSIX_NOVAK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25984 /* Tunable: ENABLE_VEHICLE_ZORRUSSO */ && iVar1 < Global_262145.f_26005 /* Tunable: LAUNCHPOSIX_ZORRUSSO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25985 /* Tunable: ENABLE_VEHICLE_GAUNTLET3 */ && iVar1 < Global_262145.f_26006 /* Tunable: LAUNCHPOSIX_GAUNTLET3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25986 /* Tunable: ENABLE_VEHICLE_ISSI7 */ && iVar1 < Global_262145.f_26007 /* Tunable: LAUNCHPOSIX_ISSI7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25987 /* Tunable: ENABLE_VEHICLE_ZION3 */ && iVar1 < Global_262145.f_26008 /* Tunable: LAUNCHPOSIX_ZION3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25988 /* Tunable: ENABLE_VEHICLE_NEBULA */ && iVar1 < Global_262145.f_26009 /* Tunable: LAUNCHPOSIX_NEBULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25989 /* Tunable: ENABLE_VEHICLE_HELLION */ && iVar1 < Global_262145.f_26010 /* Tunable: LAUNCHPOSIX_HELLION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25990 /* Tunable: ENABLE_VEHICLE_DYNASTY */ && iVar1 < Global_262145.f_26011 /* Tunable: LAUNCHPOSIX_DYNASTY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25991 /* Tunable: ENABLE_VEHICLE_RROCKET */ && iVar1 < Global_262145.f_26012 /* Tunable: LAUNCHPOSIX_RROCKET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25992 /* Tunable: ENABLE_VEHICLE_PEYOTE2 */ && iVar1 < Global_262145.f_26013 /* Tunable: LAUNCHPOSIX_PEYOTE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25993 /* Tunable: ENABLE_VEHICLE_GAUNTLET4 */ && iVar1 < Global_262145.f_26014 /* Tunable: LAUNCHPOSIX_GAUNTLET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25994 /* Tunable: ENABLE_VEHICLE_CARACARA2 */ && iVar1 < Global_262145.f_26015 /* Tunable: LAUNCHPOSIX_CARACARA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25995 /* Tunable: ENABLE_VEHICLE_JUGULAR */ && iVar1 < Global_262145.f_26016 /* Tunable: LAUNCHPOSIX_JUGULAR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25996 /* Tunable: ENABLE_VEHICLE_S80 */ && iVar1 < Global_262145.f_26017 /* Tunable: LAUNCHPOSIX_S80 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25997 /* Tunable: ENABLE_VEHICLE_KRIEGER */ && iVar1 < Global_262145.f_26018 /* Tunable: LAUNCHPOSIX_KRIEGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25998 /* Tunable: ENABLE_VEHICLE_EMERUS */ && iVar1 < Global_262145.f_26019 /* Tunable: LAUNCHPOSIX_EMERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25999 /* Tunable: ENABLE_VEHICLE_NEO */ && iVar1 < Global_262145.f_26020 /* Tunable: LAUNCHPOSIX_NEO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_26000 /* Tunable: ENABLE_VEHICLE_PARAGON */ && iVar1 < Global_262145.f_26021 /* Tunable: LAUNCHPOSIX_PARAGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28820 /* Tunable: ENABLE_VEHICLE_ASBO */ && iVar1 < Global_262145.f_28841 /* Tunable: LAUNCHPOSIX_ASBO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28821 /* Tunable: ENABLE_VEHICLE_KANJO */ && iVar1 < Global_262145.f_28842 /* Tunable: LAUNCHPOSIX_KANJO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28822 /* Tunable: ENABLE_VEHICLE_EVERON */ && iVar1 < Global_262145.f_28843 /* Tunable: LAUNCHPOSIX_EVERON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28823 /* Tunable: ENABLE_VEHICLE_RETINUE2 */ && iVar1 < Global_262145.f_28844 /* Tunable: LAUNCHPOSIX_RETINUE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28824 /* Tunable: ENABLE_VEHICLE_YOSEMITE2 */ && iVar1 < Global_262145.f_28845 /* Tunable: LAUNCHPOSIX_YOSEMITE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28825 /* Tunable: ENABLE_VEHICLE_SUGOI */ && iVar1 < Global_262145.f_28846 /* Tunable: LAUNCHPOSIX_SUGOI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28826 /* Tunable: ENABLE_VEHICLE_SULTAN2 */ && iVar1 < Global_262145.f_28847 /* Tunable: LAUNCHPOSIX_SULTAN2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28827 /* Tunable: ENABLE_VEHICLE_OUTLAW */ && iVar1 < Global_262145.f_28848 /* Tunable: LAUNCHPOSIX_OUTLAW */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28828 /* Tunable: ENABLE_VEHICLE_VAGRANT */ && iVar1 < Global_262145.f_28849 /* Tunable: LAUNCHPOSIX_VAGRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28829 /* Tunable: ENABLE_VEHICLE_KOMODA */ && iVar1 < Global_262145.f_28850 /* Tunable: LAUNCHPOSIX_KOMODA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28830 /* Tunable: ENABLE_VEHICLE_STRYDER */ && iVar1 < Global_262145.f_28851 /* Tunable: LAUNCHPOSIX_STRYDER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28831 /* Tunable: ENABLE_VEHICLE_FURIA */ && iVar1 < Global_262145.f_28852 /* Tunable: LAUNCHPOSIX_FURIA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28832 /* Tunable: ENABLE_VEHICLE_ZHABA */ && iVar1 < Global_262145.f_28853 /* Tunable: LAUNCHPOSIX_ZHABA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28833 /* Tunable: ENABLE_VEHICLE_JB7002 */ && iVar1 < Global_262145.f_28854 /* Tunable: LAUNCHPOSIX_JB7002 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28834 /* Tunable: ENABLE_VEHICLE_FIRETRUCK */ && iVar1 < Global_262145.f_28855 /* Tunable: LAUNCHPOSIX_FIRETRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28835 /* Tunable: ENABLE_VEHICLE_BURRITO2 */ && iVar1 < Global_262145.f_28856 /* Tunable: LAUNCHPOSIX_BURRITO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28836 /* Tunable: ENABLE_VEHICLE_BOXVILLE */ && iVar1 < Global_262145.f_28857 /* Tunable: LAUNCHPOSIX_BOXVILLE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28837 /* Tunable: ENABLE_VEHICLE_STOCKADE */ && iVar1 < Global_262145.f_28858 /* Tunable: LAUNCHPOSIX_STOCKADE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28838 /* Tunable: ENABLE_VEHICLE_MINITANK */ && iVar1 < Global_262145.f_28859 /* Tunable: LAUNCHPOSIX_MINITANK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28839 /* Tunable: ENABLE_VEHICLE_LGUARD */ && iVar1 < Global_262145.f_28860 /* Tunable: LAUNCHPOSIX_LGUARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28840 /* Tunable: ENABLE_VEHICLE_BLAZER2 */ && iVar1 < Global_262145.f_28861 /* Tunable: LAUNCHPOSIX_BLAZER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28863 /* Tunable: ENABLE_VEHICLE_FORMULA */ && iVar1 < Global_262145.f_28864 /* Tunable: LAUNCHPOSIX_FORMULA */) && !Global_262145.f_28818 /* Tunable: ENABLE_VEHICLE_FORMULA_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28866 /* Tunable: ENABLE_VEHICLE_FORMULA2 */ && iVar1 < Global_262145.f_28867 /* Tunable: LAUNCHPOSIX_FORMULA2 */) && !Global_262145.f_28819 /* Tunable: ENABLE_VEHICLE_FORMULA2_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28871 /* Tunable: ENABLE_VEHICLE_IMORGEN */ && iVar1 < Global_262145.f_28874 /* Tunable: LAUNCHPOSIX_IMORGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28872 /* Tunable: ENABLE_VEHICLE_REBLA */ && iVar1 < Global_262145.f_28875 /* Tunable: LAUNCHPOSIX_REBLA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28873 /* Tunable: ENABLE_VEHICLE_VSTR */ && iVar1 < Global_262145.f_28876 /* Tunable: LAUNCHPOSIX_VSTR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29889 /* Tunable: ENABLE_VEH_GAUNTLET5 */ && iVar1 < Global_262145.f_29554 /* Tunable: LAUNCHPOSIX_GAUNTLET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29540 /* Tunable: ENABLE_VEH_CLUB */ && iVar1 < Global_262145.f_29561 /* Tunable: LAUNCHPOSIX_CLUB */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29541 /* Tunable: ENABLE_VEH_DUKES3 */ && iVar1 < Global_262145.f_29547 /* Tunable: LAUNCHPOSIX_DUKES3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29887 /* Tunable: ENABLE_VEH_YOSEMITE3 */ && iVar1 < Global_262145.f_29555 /* Tunable: LAUNCHPOSIX_YOSEMITE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29888 /* Tunable: ENABLE_VEH_PEYOTE3 */ && iVar1 < Global_262145.f_29556 /* Tunable: LAUNCHPOSIX_PEYOTE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29534 /* Tunable: ENABLE_VEH_GLENDALE2 */ && iVar1 < Global_262145.f_29553 /* Tunable: LAUNCHPOSIX_GLENDALE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29535 /* Tunable: ENABLE_VEH_PENUMBRA2 */ && iVar1 < Global_262145.f_29562 /* Tunable: LAUNCHPOSIX_PENUMBRA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29536 /* Tunable: ENABLE_VEH_LANDSTALKER2 */ && iVar1 < Global_262145.f_29552 /* Tunable: LAUNCHPOSIX_LANDSTALKER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29537 /* Tunable: ENABLE_VEH_SEMINOLE2 */ && iVar1 < Global_262145.f_29550 /* Tunable: LAUNCHPOSIX_SEMINOLE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29883 /* Tunable: ENABLE_VEH_TIGON */ && iVar1 < Global_262145.f_29557 /* Tunable: LAUNCHPOSIX_TIGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29884 /* Tunable: ENABLE_VEH_OPENWHEEL1 */ && iVar1 < Global_262145.f_29558 /* Tunable: LAUNCHPOSIX_OPENWHEEL1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29885 /* Tunable: ENABLE_VEH_OPENWHEEL2 */ && iVar1 < Global_262145.f_29559 /* Tunable: LAUNCHPOSIX_OPENWHEEL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29886 /* Tunable: ENABLE_VEH_COQUETTE4 */ && iVar1 < Global_262145.f_29560 /* Tunable: LAUNCHPOSIX_COQUETTE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29538 /* Tunable: ENABLE_VEH_MANANA2 */ && iVar1 < Global_262145.f_29549 /* Tunable: LAUNCHPOSIX_MANANA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29539 /* Tunable: ENABLE_VEH_YOUGA3 */ && iVar1 < Global_262145.f_29551 /* Tunable: LAUNCHPOSIX_YOUGA3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30348 /* Tunable: ENABLE_VEHICLE_TOREADOR */ && iVar1 < Global_262145.f_30331 /* Tunable: LAUNCHPOSIX_TOREADOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30349 /* Tunable: ENABLE_VEHICLE_ANNIHILATOR2 */ && iVar1 < Global_262145.f_30332 /* Tunable: LAUNCHPOSIX_ANNIHILATOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30350 /* Tunable: ENABLE_VEHICLE_ALKONOST */ && iVar1 < Global_262145.f_30333 /* Tunable: LAUNCHPOSIX_ALKONOST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30351 /* Tunable: ENABLE_VEHICLE_PATROLBOAT */ && iVar1 < Global_262145.f_30334 /* Tunable: LAUNCHPOSIX_PATROLBOAT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30352 /* Tunable: ENABLE_VEHICLE_LONGFIN */ && iVar1 < Global_262145.f_30335 /* Tunable: LAUNCHPOSIX_LONGFIN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30353 /* Tunable: ENABLE_VEHICLE_WINKY */ && iVar1 < Global_262145.f_30336 /* Tunable: LAUNCHPOSIX_WINKY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30354 /* Tunable: ENABLE_VEHICLE_VETO */ && iVar1 < Global_262145.f_30337 /* Tunable: LAUNCHPOSIX_VETO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30355 /* Tunable: ENABLE_VEHICLE_VETO2 */ && iVar1 < Global_262145.f_30338 /* Tunable: LAUNCHPOSIX_VETO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30356 /* Tunable: ENABLE_VEHICLE_ITALIRSX */ && iVar1 < Global_262145.f_30339 /* Tunable: LAUNCHPOSIX_ITALIRSX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30365 /* Tunable: -552682736 */)
		{
		}
		else if (!Global_262145.f_30357 /* Tunable: ENABLE_VEHICLE_WEEVIL */ && iVar1 < Global_262145.f_30340 /* Tunable: LAUNCHPOSIX_WEEVIL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30358 /* Tunable: ENABLE_VEHICLE_MANCHEZ2 */ && iVar1 < Global_262145.f_30341 /* Tunable: LAUNCHPOSIX_MANCHEZ2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30359 /* Tunable: ENABLE_VEHICLE_SLAMTRUCK */ && iVar1 < Global_262145.f_30342 /* Tunable: LAUNCHPOSIX_SLAMTRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30360 /* Tunable: ENABLE_VEHICLE_VETIR */ && iVar1 < Global_262145.f_30343 /* Tunable: LAUNCHPOSIX_VETIR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30361 /* Tunable: ENABLE_VEHICLE_SQUADDIE */ && iVar1 < Global_262145.f_30344 /* Tunable: LAUNCHPOSIX_SQUADDIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30366 /* Tunable: 976860524 */)
		{
		}
		else if (!Global_262145.f_30362 /* Tunable: ENABLE_VEHICLE_BRIOSO2 */ && iVar1 < Global_262145.f_30345 /* Tunable: LAUNCHPOSIX_BRIOSO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30363 /* Tunable: ENABLE_VEHICLE_DINGY5 */ && iVar1 < Global_262145.f_30346 /* Tunable: LAUNCHPOSIX_DINGY5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30364 /* Tunable: ENABLE_VEHICLE_VERUS */ && iVar1 < Global_262145.f_30347 /* Tunable: LAUNCHPOSIX_VERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31216 /* Tunable: ENABLE_VEHICLE_TAILGATER2 */ && iVar1 < Global_262145.f_31199 /* Tunable: LAUNCHPOSIX_TAILGATER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31217 /* Tunable: ENABLE_VEHICLE_EUROS */ && iVar1 < Global_262145.f_31200 /* Tunable: LAUNCHPOSIX_EUROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31218 /* Tunable: ENABLE_VEHICLE_SULTAN3 */ && iVar1 < Global_262145.f_31201 /* Tunable: LAUNCHPOSIX_SULTAN3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31219 /* Tunable: ENABLE_VEHICLE_RT3000 */ && iVar1 < Global_262145.f_31202 /* Tunable: LAUNCHPOSIX_RT3000 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31220 /* Tunable: ENABLE_VEHICLE_VECTRE */ && iVar1 < Global_262145.f_31203 /* Tunable: LAUNCHPOSIX_VECTRE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31221 /* Tunable: ENABLE_VEHICLE_ZR350 */ && iVar1 < Global_262145.f_31204 /* Tunable: LAUNCHPOSIX_ZR350 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31222 /* Tunable: ENABLE_VEHICLE_WARRENER2 */ && iVar1 < Global_262145.f_31205 /* Tunable: LAUNCHPOSIX_WARRENER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31223 /* Tunable: ENABLE_VEHICLE_CALICO */ && iVar1 < Global_262145.f_31206 /* Tunable: LAUNCHPOSIX_CALICO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31224 /* Tunable: ENABLE_VEHICLE_REMUS */ && iVar1 < Global_262145.f_31207 /* Tunable: LAUNCHPOSIX_REMUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31225 /* Tunable: ENABLE_VEHICLE_CYPHER */ && iVar1 < Global_262145.f_31208 /* Tunable: LAUNCHPOSIX_CYPHER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31226 /* Tunable: ENABLE_VEHICLE_DOMINATOR7 */ && iVar1 < Global_262145.f_31209 /* Tunable: LAUNCHPOSIX_DOMINATOR7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31227 /* Tunable: ENABLE_VEHICLE_JESTER4 */ && iVar1 < Global_262145.f_31210 /* Tunable: LAUNCHPOSIX_JESTER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31228 /* Tunable: ENABLE_VEHICLE_FUTO2 */ && iVar1 < Global_262145.f_31211 /* Tunable: LAUNCHPOSIX_FUTO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31229 /* Tunable: ENABLE_VEHICLE_DOMINATOR8 */ && iVar1 < Global_262145.f_31212 /* Tunable: LAUNCHPOSIX_DOMINATOR8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31230 /* Tunable: ENABLE_VEHICLE_PREVION */ && iVar1 < Global_262145.f_31213 /* Tunable: LAUNCHPOSIX_PREVION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31231 /* Tunable: ENABLE_VEHICLE_GROWLER */ && iVar1 < Global_262145.f_31214 /* Tunable: LAUNCHPOSIX_GROWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31232 /* Tunable: ENABLE_VEHICLE_COMET6 */ && iVar1 < Global_262145.f_31215 /* Tunable: LAUNCHPOSIX_COMET6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_32099 /* Tunable: ENABLE_VEHICLE_CHAMPION */ && iVar1 < Global_262145.f_32084 /* Tunable: LAUNCHPOSIX_CHAMPION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_32100 /* Tunable: ENABLE_VEHICLE_BUFFALO4 */ && iVar1 < Global_262145.f_32085 /* Tunable: LAUNCHPOSIX_BUFFALO4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_32101 /* Tunable: ENABLE_VEHICLE_DEITY */ && iVar1 < Global_262145.f_32086 /* Tunable: LAUNCHPOSIX_DEITY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_32102 /* Tunable: ENABLE_VEHICLE_JUBILEE */ && iVar1 < Global_262145.f_32087 /* Tunable: LAUNCHPOSIX_JUBILEE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_32103 /* Tunable: ENABLE_VEHICLE_IGNUS */ && iVar1 < Global_262145.f_32088 /* Tunable: LAUNCHPOSIX_IGNUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_32104 /* Tunable: ENABLE_VEHICLE_CINQUEMILA */ && iVar1 < Global_262145.f_32089 /* Tunable: LAUNCHPOSIX_CINQUEMILA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_32105 /* Tunable: ENABLE_VEHICLE_ASTRON */ && iVar1 < Global_262145.f_32090 /* Tunable: LAUNCHPOSIX_ASTRON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_32106 /* Tunable: ENABLE_VEHICLE_COMET7 */ && iVar1 < Global_262145.f_32091 /* Tunable: LAUNCHPOSIX_COMET7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_32107 /* Tunable: ENABLE_VEHICLE_ZENO */ && iVar1 < Global_262145.f_32092 /* Tunable: LAUNCHPOSIX_ZENO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_32108 /* Tunable: ENABLE_VEHICLE_REEVER */ && iVar1 < Global_262145.f_32093 /* Tunable: LAUNCHPOSIX_REEVER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_32109 /* Tunable: ENABLE_VEHICLE_IWAGEN */ && iVar1 < Global_262145.f_32094 /* Tunable: LAUNCHPOSIX_IWAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_32110 /* Tunable: ENABLE_VEHICLE_GRANGER2 */ && iVar1 < Global_262145.f_32095 /* Tunable: LAUNCHPOSIX_GRANGER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_32111 /* Tunable: ENABLE_VEHICLE_PATRIOT3 */ && iVar1 < Global_262145.f_32096 /* Tunable: LAUNCHPOSIX_PATRIOT3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_32112 /* Tunable: ENABLE_VEHICLE_SHINOBI */ && iVar1 < Global_262145.f_32097 /* Tunable: LAUNCHPOSIX_FAST_MOTORBIKE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_32177 /* Tunable: 991164709 */)
		{
		}
		else if (!Global_262145.f_32113 /* Tunable: ENABLE_VEHICLE_BALLER7 */ && iVar1 < Global_262145.f_32098 /* Tunable: LAUNCHPOSIX_BALLER7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33350 /* Tunable: ENABLE_VEHICLE_BRIOSO3 */ && iVar1 < Global_262145.f_33331 /* Tunable: LAUNCHPOSIX_BRIOSO3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33344 /* Tunable: ENABLE_VEHICLE_CORSITA */ && iVar1 < Global_262145.f_33325 /* Tunable: LAUNCHPOSIX_CORSITA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33348 /* Tunable: ENABLE_VEHICLE_DRAUGUR */ && iVar1 < Global_262145.f_33329 /* Tunable: LAUNCHPOSIX_DRAUGUR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33342 /* Tunable: ENABLE_VEHICLE_GREENWOOD */ && iVar1 < Global_262145.f_33323 /* Tunable: LAUNCHPOSIX_GREENWOOD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33353 /* Tunable: ENABLE_VEHICLE_KANJOSJ */ && iVar1 < Global_262145.f_33334 /* Tunable: LAUNCHPOSIX_KANJOSJ */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33345 /* Tunable: ENABLE_VEHICLE_LM87 */ && iVar1 < Global_262145.f_33326 /* Tunable: LAUNCHPOSIX_LM87 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33354 /* Tunable: ENABLE_VEHICLE_POSTLUDE */ && iVar1 < Global_262145.f_33335 /* Tunable: LAUNCHPOSIX_POSTLUDE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33356 /* Tunable: ENABLE_VEHICLE_RHINEHART */ && iVar1 < Global_262145.f_33337 /* Tunable: LAUNCHPOSIX_RHINEHART */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33347 /* Tunable: ENABLE_VEHICLE_SM722 */ && iVar1 < Global_262145.f_33328 /* Tunable: LAUNCHPOSIX_SM722 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33355 /* Tunable: ENABLE_VEHICLE_TENF */ && iVar1 < Global_262145.f_33336 /* Tunable: LAUNCHPOSIX_TENF */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33358 /* Tunable: ENABLE_VEHICLE_TENF2 */ && iVar1 < Global_262145.f_33339 /* Tunable: LAUNCHPOSIX_TENF2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33343 /* Tunable: ENABLE_VEHICLE_TORERO2 */ && iVar1 < Global_262145.f_33324 /* Tunable: LAUNCHPOSIX_TORERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33351 /* Tunable: ENABLE_VEHICLE_VIGERO2 */ && iVar1 < Global_262145.f_33332 /* Tunable: LAUNCHPOSIX_VIGERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33357 /* Tunable: ENABLE_VEHICLE_WEEVIL2 */ && iVar1 < Global_262145.f_33338 /* Tunable: LAUNCHPOSIX_WEEVIL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33349 /* Tunable: ENABLE_VEHICLE_RUINER4 */ && iVar1 < Global_262145.f_33330 /* Tunable: LAUNCHPOSIX_RUINER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33359 /* Tunable: ENABLE_VEHICLE_SENTINEL4 */ && iVar1 < Global_262145.f_33340 /* Tunable: LAUNCHPOSIX_MODEL_SENTINEL4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33346 /* Tunable: ENABLE_VEHICLE_CONADA */ && iVar1 < Global_262145.f_33327 /* Tunable: LAUNCHPOSIX_CONADA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33341 /* Tunable: ENABLE_VEHICLE_OMNISEGT */ && iVar1 < Global_262145.f_33322 /* Tunable: LAUNCHPOSIX_OMNISEGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez3"))
	{
		if (!Global_262145.f_34217 /* Tunable: ENABLE_VEHICLE_BRICKADE2 */ && iVar1 < Global_262145.f_34201 /* Tunable: LAUNCHPOSIX_BRICKADE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brickade2"))
	{
		if (!Global_262145.f_34217 /* Tunable: ENABLE_VEHICLE_BRICKADE2 */ && iVar1 < Global_262145.f_34201 /* Tunable: LAUNCHPOSIX_BRICKADE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("eudora"))
	{
		if (!Global_262145.f_34226 /* Tunable: ENABLE_VEHICLE_EUDORA */ && iVar1 < Global_262145.f_34209 /* Tunable: LAUNCHPOSIX_EUDORA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("powersurge"))
	{
		if (!Global_262145.f_34220 /* Tunable: ENABLE_VEHICLE_POWERSURGE */ && iVar1 < Global_262145.f_34204 /* Tunable: LAUNCHPOSIX_POWERSURGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("journey2"))
	{
		if (!Global_262145.f_34214 /* Tunable: ENABLE_VEHICLE_JOURNEY2 */ && iVar1 < Global_262145.f_34198 /* Tunable: LAUNCHPOSIX_JOURNEY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surfer3"))
	{
		if (!Global_262145.f_34215 /* Tunable: ENABLE_VEHICLE_SURFER3 */ && iVar1 < Global_262145.f_34199 /* Tunable: LAUNCHPOSIX_SURFER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity3"))
	{
		if (!Global_262145.f_34212 /* Tunable: ENABLE_VEHICLE_ENTITY3 */ && iVar1 < Global_262145.f_34196 /* Tunable: LAUNCHPOSIX_ENTITY3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("panthere"))
	{
		if (!Global_262145.f_34223 /* Tunable: ENABLE_VEHICLE_PANTHERE */ && iVar1 < Global_262145.f_34207 /* Tunable: LAUNCHPOSIX_PANTHERE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boor"))
	{
		if (!Global_262145.f_34227 /* Tunable: ENABLE_VEHICLE_BOOR */ && iVar1 < Global_262145.f_34211 /* Tunable: LAUNCHPOSIX_BOOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon2"))
	{
		if (!Global_262145.f_34224 /* Tunable: ENABLE_VEHICLE_EVERON2 */ && iVar1 < Global_262145.f_34208 /* Tunable: LAUNCHPOSIX_EVERON2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip2"))
	{
		if (!Global_262145.f_34213 /* Tunable: ENABLE_VEHICLE_TULIP2 */ && iVar1 < Global_262145.f_34197 /* Tunable: LAUNCHPOSIX_TULIP2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("r300"))
	{
		if (!Global_262145.f_34216 /* Tunable: ENABLE_VEHICLE_R300 */ && iVar1 < Global_262145.f_34200 /* Tunable: LAUNCHPOSIX_R300 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virtue"))
	{
		if (!Global_262145.f_34225 /* Tunable: ENABLE_VEHICLE_VIRTUE */ && iVar1 < Global_262145.f_34210 /* Tunable: LAUNCHPOSIX_VIRTUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi8"))
	{
		if (!Global_262145.f_34221 /* Tunable: ENABLE_VEHICLE_ISSI8 */ && iVar1 < Global_262145.f_34205 /* Tunable: LAUNCHPOSIX_ISSI8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("broadway"))
	{
		if (!Global_262145.f_34222 /* Tunable: ENABLE_VEHICLE_BROADWAY */ && iVar1 < Global_262145.f_34206 /* Tunable: LAUNCHPOSIX_BROADWAY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tahoma"))
	{
		if (!Global_262145.f_34219 /* Tunable: ENABLE_VEHICLE_TAHOMA */ && iVar1 < Global_262145.f_34203 /* Tunable: LAUNCHPOSIX_TAHOMA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taxi"))
	{
		if (!Global_262145.f_34218 /* Tunable: ENABLE_VEHICLE_TAXI */ && iVar1 < Global_262145.f_34202 /* Tunable: LAUNCHPOSIX_TAXI */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("exemplar"))
	{
		if (!Global_262145.f_35167 /* Tunable: ENABLE_VEHICLE_EXEMPLAR */ && !Global_262145.f_35168 /* Tunable: ENABLE_VEHICLE_EXEMPLAR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cogcabrio"))
	{
		if (!Global_262145.f_35169 /* Tunable: ENABLE_VEHICLE_COGCABRIO */ && !Global_262145.f_35170 /* Tunable: ENABLE_VEHICLE_COGCABRIO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrust"))
	{
		if (!Global_262145.f_35171 /* Tunable: ENABLE_VEHICLE_THRUST */ && !Global_262145.f_35172 /* Tunable: ENABLE_VEHICLE_THRUST_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vindicator"))
	{
		if (!Global_262145.f_35173 /* Tunable: ENABLE_VEHICLE_VINDICATOR */ && !Global_262145.f_35174 /* Tunable: ENABLE_VEHICLE_VINDICATOR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette3"))
	{
		if (!Global_262145.f_35175 /* Tunable: ENABLE_VEHICLE_COQUETTE3 */ && !Global_262145.f_35176 /* Tunable: ENABLE_VEHICLE_COQUETTE3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brawler"))
	{
		if (!Global_262145.f_35177 /* Tunable: ENABLE_VEHICLE_BRAWLER */ && !Global_262145.f_35178 /* Tunable: ENABLE_VEHICLE_BRAWLER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		if (!Global_262145.f_35179 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI */ && !Global_262145.f_35180 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cognoscenti2"))
	{
		if (!Global_262145.f_35181 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI2 */ && !Global_262145.f_35182 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cog55"))
	{
		if (!Global_262145.f_35183 /* Tunable: ENABLE_VEHICLE_COG55 */ && !Global_262145.f_35184 /* Tunable: ENABLE_VEHICLE_COG55_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cog552"))
	{
		if (!Global_262145.f_35185 /* Tunable: ENABLE_VEHICLE_COG552 */ && !Global_262145.f_35186 /* Tunable: ENABLE_VEHICLE_COG552_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("superd"))
	{
		if (!Global_262145.f_35187 /* Tunable: ENABLE_VEHICLE_SUPERD */ && !Global_262145.f_35188 /* Tunable: ENABLE_VEHICLE_SUPERD_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter4"))
	{
		if (!Global_262145.f_35189 /* Tunable: ENABLE_VEHICLE_SCHAFTER4 */ && !Global_262145.f_35190 /* Tunable: ENABLE_VEHICLE_SCHAFTER4_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter6"))
	{
		if (!Global_262145.f_35191 /* Tunable: ENABLE_VEHICLE_SCHAFTER6 */ && !Global_262145.f_35192 /* Tunable: ENABLE_VEHICLE_SCHAFTER6_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alpha"))
	{
		if (!Global_262145.f_35193 /* Tunable: ENABLE_VEHICLE_ALPHA */ && !Global_262145.f_35194 /* Tunable: ENABLE_VEHICLE_ALPHA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("feltzer2"))
	{
		if (!Global_262145.f_35195 /* Tunable: ENABLE_VEHICLE_FELTZER2 */ && !Global_262145.f_35196 /* Tunable: ENABLE_VEHICLE_FELTZER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("massacro"))
	{
		if (!Global_262145.f_35197 /* Tunable: ENABLE_VEHICLE_MASSACRO */ && !Global_262145.f_35198 /* Tunable: ENABLE_VEHICLE_MASSACRO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt"))
	{
		if (!Global_262145.f_35199 /* Tunable: ENABLE_VEHICLE_RAPIDGT */ && !Global_262145.f_35200 /* Tunable: ENABLE_VEHICLE_RAPIDGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt2"))
	{
		if (!Global_262145.f_35201 /* Tunable: ENABLE_VEHICLE_RAPIDGT2 */ && !Global_262145.f_35202 /* Tunable: ENABLE_VEHICLE_RAPIDGT2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_35203 /* Tunable: ENABLE_VEHICLE_SEVEN70 */ && !Global_262145.f_35204 /* Tunable: ENABLE_VEHICLE_SEVEN70_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester"))
	{
		if (!Global_262145.f_35205 /* Tunable: ENABLE_VEHICLE_JESTER */ && !Global_262145.f_35206 /* Tunable: ENABLE_VEHICLE_JESTER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		if (!Global_262145.f_35207 /* Tunable: ENABLE_VEHICLE_BESTIAGTS */ && !Global_262145.f_35208 /* Tunable: ENABLE_VEHICLE_BESTIAGTS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("carbonizzare"))
	{
		if (!Global_262145.f_35209 /* Tunable: ENABLE_VEHICLE_CARBONIZZARE */ && !Global_262145.f_35210 /* Tunable: ENABLE_VEHICLE_CARBONIZZARE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette"))
	{
		if (!Global_262145.f_35211 /* Tunable: ENABLE_VEHICLE_COQUETTE */ && !Global_262145.f_35212 /* Tunable: ENABLE_VEHICLE_COQUETTE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furoregt"))
	{
		if (!Global_262145.f_35213 /* Tunable: ENABLE_VEHICLE_FUROREGT */ && !Global_262145.f_35214 /* Tunable: ENABLE_VEHICLE_FUROREGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ninef"))
	{
		if (!Global_262145.f_35215 /* Tunable: ENABLE_VEHICLE_NINEF */ && !Global_262145.f_35216 /* Tunable: ENABLE_VEHICLE_NINEF_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ninef2"))
	{
		if (!Global_262145.f_35217 /* Tunable: ENABLE_VEHICLE_NINEF2 */ && !Global_262145.f_35218 /* Tunable: ENABLE_VEHICLE_NINEF2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		if (!Global_262145.f_35219 /* Tunable: ENABLE_VEHICLE_VERLIERER2 */ && !Global_262145.f_35220 /* Tunable: ENABLE_VEHICLE_VERLIERER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype"))
	{
		if (!Global_262145.f_35221 /* Tunable: ENABLE_VEHICLE_BTYPE */ && !Global_262145.f_35222 /* Tunable: ENABLE_VEHICLE_BTYPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		if (!Global_262145.f_35223 /* Tunable: ENABLE_VEHICLE_FELTZER3 */ && !Global_262145.f_35224 /* Tunable: ENABLE_VEHICLE_FELTZER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stingergt"))
	{
		if (!Global_262145.f_35225 /* Tunable: ENABLE_VEHICLE_STINGERGT */ && !Global_262145.f_35226 /* Tunable: ENABLE_VEHICLE_STINGERGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stinger"))
	{
		if (!Global_262145.f_35227 /* Tunable: ENABLE_VEHICLE_STINGER */ && !Global_262145.f_35228 /* Tunable: ENABLE_VEHICLE_STINGER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette2"))
	{
		if (!Global_262145.f_35229 /* Tunable: ENABLE_VEHICLE_COQUETTE2 */ && !Global_262145.f_35230 /* Tunable: ENABLE_VEHICLE_COQUETTE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb700"))
	{
		if (!Global_262145.f_35231 /* Tunable: ENABLE_VEHICLE_JB700 */ && !Global_262145.f_35232 /* Tunable: ENABLE_VEHICLE_JB700_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mamba"))
	{
		if (!Global_262145.f_35233 /* Tunable: ENABLE_VEHICLE_MAMBA */ && !Global_262145.f_35234 /* Tunable: ENABLE_VEHICLE_MAMBA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monroe"))
	{
		if (!Global_262145.f_35235 /* Tunable: ENABLE_VEHICLE_MONROE */ && !Global_262145.f_35236 /* Tunable: ENABLE_VEHICLE_MONROE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype3"))
	{
		if (!Global_262145.f_35237 /* Tunable: ENABLE_VEHICLE_BTYPE3 */ && !Global_262145.f_35238 /* Tunable: ENABLE_VEHICLE_BTYPE3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ztype"))
	{
		if (!Global_262145.f_35239 /* Tunable: ENABLE_VEHICLE_ZTYPE */ && !Global_262145.f_35240 /* Tunable: ENABLE_VEHICLE_ZTYPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("voltic"))
	{
		if (!Global_262145.f_35241 /* Tunable: ENABLE_VEHICLE_VOLTIC */ && !Global_262145.f_35242 /* Tunable: ENABLE_VEHICLE_VOLTIC_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_35243 /* Tunable: ENABLE_VEHICLE_SHEAVA */ && !Global_262145.f_35244 /* Tunable: ENABLE_VEHICLE_SHEAVA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah"))
	{
		if (!Global_262145.f_35245 /* Tunable: ENABLE_VEHICLE_CHEETAH */ && !Global_262145.f_35246 /* Tunable: ENABLE_VEHICLE_CHEETAH_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entityxf"))
	{
		if (!Global_262145.f_35247 /* Tunable: ENABLE_VEHICLE_ENTITYXF */ && !Global_262145.f_35248 /* Tunable: ENABLE_VEHICLE_ENTITYXF_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus"))
	{
		if (!Global_262145.f_35249 /* Tunable: ENABLE_VEHICLE_INFERNUS */ && !Global_262145.f_35250 /* Tunable: ENABLE_VEHICLE_INFERNUS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vacca"))
	{
		if (!Global_262145.f_35251 /* Tunable: ENABLE_VEHICLE_VACCA */ && !Global_262145.f_35252 /* Tunable: ENABLE_VEHICLE_VACCA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bullet"))
	{
		if (!Global_262145.f_35253 /* Tunable: ENABLE_VEHICLE_BULLET */ && !Global_262145.f_35254 /* Tunable: ENABLE_VEHICLE_BULLET_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fmj"))
	{
		if (!Global_262145.f_35255 /* Tunable: ENABLE_VEHICLE_FMJ */ && !Global_262145.f_35256 /* Tunable: ENABLE_VEHICLE_FMJ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller2"))
	{
		if (!Global_262145.f_35257 /* Tunable: ENABLE_VEHICLE_BALLER2 */ && !Global_262145.f_35258 /* Tunable: ENABLE_VEHICLE_BALLER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller3"))
	{
		if (!Global_262145.f_35259 /* Tunable: ENABLE_VEHICLE_BALLER3 */ && !Global_262145.f_35260 /* Tunable: ENABLE_VEHICLE_BALLER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller5"))
	{
		if (!Global_262145.f_35261 /* Tunable: ENABLE_VEHICLE_BALLER5 */ && !Global_262145.f_35262 /* Tunable: ENABLE_VEHICLE_BALLER5_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller4"))
	{
		if (!Global_262145.f_35263 /* Tunable: ENABLE_VEHICLE_BALLER4 */ && !Global_262145.f_35264 /* Tunable: ENABLE_VEHICLE_BALLER4_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller6"))
	{
		if (!Global_262145.f_35265 /* Tunable: ENABLE_VEHICLE_BALLER6 */ && !Global_262145.f_35266 /* Tunable: ENABLE_VEHICLE_BALLER6_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("xls"))
	{
		if (!Global_262145.f_35267 /* Tunable: ENABLE_VEHICLE_XLS */ && !Global_262145.f_35268 /* Tunable: ENABLE_VEHICLE_XLS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("xls2"))
	{
		if (!Global_262145.f_35269 /* Tunable: ENABLE_VEHICLE_XLS2 */ && !Global_262145.f_35270 /* Tunable: ENABLE_VEHICLE_XLS2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("prairie"))
	{
		if (!Global_262145.f_35271 /* Tunable: ENABLE_VEHICLE_PRAIRIE */ && !Global_262145.f_35272 /* Tunable: ENABLE_VEHICLE_PRAIRIE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi2"))
	{
		if (!Global_262145.f_35273 /* Tunable: ENABLE_VEHICLE_ISSI2 */ && !Global_262145.f_35274 /* Tunable: ENABLE_VEHICLE_ISSI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dilettante"))
	{
		if (!Global_262145.f_35275 /* Tunable: ENABLE_VEHICLE_DILETTANTE */ && !Global_262145.f_35276 /* Tunable: ENABLE_VEHICLE_DILETTANTE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("felon"))
	{
		if (!Global_262145.f_35277 /* Tunable: ENABLE_VEHICLE_FELON */ && !Global_262145.f_35278 /* Tunable: ENABLE_VEHICLE_FELON_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("felon2"))
	{
		if (!Global_262145.f_35279 /* Tunable: ENABLE_VEHICLE_FELON2 */ && !Global_262145.f_35280 /* Tunable: ENABLE_VEHICLE_FELON2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("f620"))
	{
		if (!Global_262145.f_35281 /* Tunable: ENABLE_VEHICLE_F620 */ && !Global_262145.f_35282 /* Tunable: ENABLE_VEHICLE_F620_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jackal"))
	{
		if (!Global_262145.f_35283 /* Tunable: ENABLE_VEHICLE_JACKAL */ && !Global_262145.f_35284 /* Tunable: ENABLE_VEHICLE_JACKAL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oracle2"))
	{
		if (!Global_262145.f_35285 /* Tunable: ENABLE_VEHICLE_ORACLE2 */ && !Global_262145.f_35286 /* Tunable: ENABLE_VEHICLE_ORACLE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oracle"))
	{
		if (!Global_262145.f_35287 /* Tunable: ENABLE_VEHICLE_ORACLE */ && !Global_262145.f_35288 /* Tunable: ENABLE_VEHICLE_ORACLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel2"))
	{
		if (!Global_262145.f_35289 /* Tunable: ENABLE_VEHICLE_SENTINEL2 */ && !Global_262145.f_35290 /* Tunable: ENABLE_VEHICLE_SENTINEL2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion"))
	{
		if (!Global_262145.f_35291 /* Tunable: ENABLE_VEHICLE_ZION */ && !Global_262145.f_35292 /* Tunable: ENABLE_VEHICLE_ZION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion2"))
	{
		if (!Global_262145.f_35293 /* Tunable: ENABLE_VEHICLE_ZION2 */ && !Global_262145.f_35294 /* Tunable: ENABLE_VEHICLE_ZION2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akuma"))
	{
		if (!Global_262145.f_35295 /* Tunable: ENABLE_VEHICLE_AKUMA */ && !Global_262145.f_35296 /* Tunable: ENABLE_VEHICLE_AKUMA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("double"))
	{
		if (!Global_262145.f_35297 /* Tunable: ENABLE_VEHICLE_DOUBLE */ && !Global_262145.f_35298 /* Tunable: ENABLE_VEHICLE_DOUBLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("enduro"))
	{
		if (!Global_262145.f_35299 /* Tunable: ENABLE_VEHICLE_ENDURO */ && !Global_262145.f_35300 /* Tunable: ENABLE_VEHICLE_ENDURO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hexer"))
	{
		if (!Global_262145.f_35301 /* Tunable: ENABLE_VEHICLE_HEXER */ && !Global_262145.f_35302 /* Tunable: ENABLE_VEHICLE_HEXER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("innovation"))
	{
		if (!Global_262145.f_35303 /* Tunable: ENABLE_VEHICLE_INNOVATION */ && !Global_262145.f_35304 /* Tunable: ENABLE_VEHICLE_INNOVATION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanchez"))
	{
		if (!Global_262145.f_35305 /* Tunable: ENABLE_VEHICLE_SANCHEZ */ && !Global_262145.f_35306 /* Tunable: ENABLE_VEHICLE_SANCHEZ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanchez2"))
	{
		if (!Global_262145.f_35307 /* Tunable: ENABLE_VEHICLE_SANCHEZ2 */ && !Global_262145.f_35308 /* Tunable: ENABLE_VEHICLE_SANCHEZ2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bati2"))
	{
		if (!Global_262145.f_35309 /* Tunable: ENABLE_VEHICLE_BATI2 */ && !Global_262145.f_35310 /* Tunable: ENABLE_VEHICLE_BATI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio2"))
	{
		if (!Global_262145.f_35311 /* Tunable: ENABLE_VEHICLE_FAGGIO2 */ && !Global_262145.f_35312 /* Tunable: ENABLE_VEHICLE_FAGGIO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruffian"))
	{
		if (!Global_262145.f_35313 /* Tunable: ENABLE_VEHICLE_RUFFIAN */ && !Global_262145.f_35314 /* Tunable: ENABLE_VEHICLE_RUFFIAN_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nemesis"))
	{
		if (!Global_262145.f_35315 /* Tunable: ENABLE_VEHICLE_NEMESIS */ && !Global_262145.f_35316 /* Tunable: ENABLE_VEHICLE_NEMESIS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		if (!Global_262145.f_35317 /* Tunable: ENABLE_VEHICLE_HAKUCHOU */ && !Global_262145.f_35318 /* Tunable: ENABLE_VEHICLE_HAKUCHOU_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pcj"))
	{
		if (!Global_262145.f_35319 /* Tunable: ENABLE_VEHICLE_PCJ */ && !Global_262145.f_35320 /* Tunable: ENABLE_VEHICLE_PCJ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vader"))
	{
		if (!Global_262145.f_35321 /* Tunable: ENABLE_VEHICLE_VADER */ && !Global_262145.f_35322 /* Tunable: ENABLE_VEHICLE_VADER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sovereign"))
	{
		if (!Global_262145.f_35323 /* Tunable: ENABLE_VEHICLE_SOVEREIGN */ && !Global_262145.f_35324 /* Tunable: ENABLE_VEHICLE_SOVEREIGN_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet"))
	{
		if (!Global_262145.f_35325 /* Tunable: ENABLE_VEHICLE_GAUNTLET */ && !Global_262145.f_35326 /* Tunable: ENABLE_VEHICLE_GAUNTLET_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratloader"))
	{
		if (!Global_262145.f_35327 /* Tunable: ENABLE_VEHICLE_RATLOADER */ && !Global_262145.f_35328 /* Tunable: ENABLE_VEHICLE_RATLOADER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("picador"))
	{
		if (!Global_262145.f_35329 /* Tunable: ENABLE_VEHICLE_PICADOR */ && !Global_262145.f_35330 /* Tunable: ENABLE_VEHICLE_PICADOR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero"))
	{
		if (!Global_262145.f_35331 /* Tunable: ENABLE_VEHICLE_VIGERO */ && !Global_262145.f_35332 /* Tunable: ENABLE_VEHICLE_VIGERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner"))
	{
		if (!Global_262145.f_35333 /* Tunable: ENABLE_VEHICLE_RUINER */ && !Global_262145.f_35334 /* Tunable: ENABLE_VEHICLE_RUINER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa"))
	{
		if (!Global_262145.f_35335 /* Tunable: ENABLE_VEHICLE_TAMPA */ && !Global_262145.f_35336 /* Tunable: ENABLE_VEHICLE_TAMPA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blade"))
	{
		if (!Global_262145.f_35337 /* Tunable: ENABLE_VEHICLE_BLADE */ && !Global_262145.f_35338 /* Tunable: ENABLE_VEHICLE_BLADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bifta"))
	{
		if (!Global_262145.f_35339 /* Tunable: ENABLE_VEHICLE_BIFTA */ && !Global_262145.f_35340 /* Tunable: ENABLE_VEHICLE_BIFTA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune"))
	{
		if (!Global_262145.f_35341 /* Tunable: ENABLE_VEHICLE_DUNE */ && !Global_262145.f_35342 /* Tunable: ENABLE_VEHICLE_DUNE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bfinjection"))
	{
		if (!Global_262145.f_35343 /* Tunable: ENABLE_VEHICLE_BFINJECTION */ && !Global_262145.f_35344 /* Tunable: ENABLE_VEHICLE_BFINJECTION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bodhi2"))
	{
		if (!Global_262145.f_35345 /* Tunable: ENABLE_VEHICLE_BODHI2 */ && !Global_262145.f_35346 /* Tunable: ENABLE_VEHICLE_BODHI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kalahari"))
	{
		if (!Global_262145.f_35347 /* Tunable: ENABLE_VEHICLE_KALAHARI */ && !Global_262145.f_35348 /* Tunable: ENABLE_VEHICLE_KALAHARI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rancherxl"))
	{
		if (!Global_262145.f_35349 /* Tunable: ENABLE_VEHICLE_RANCHERXL */ && !Global_262145.f_35350 /* Tunable: ENABLE_VEHICLE_RANCHERXL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebel2"))
	{
		if (!Global_262145.f_35351 /* Tunable: ENABLE_VEHICLE_REBEL2 */ && !Global_262145.f_35352 /* Tunable: ENABLE_VEHICLE_REBEL2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebel"))
	{
		if (!Global_262145.f_35353 /* Tunable: ENABLE_VEHICLE_REBEL */ && !Global_262145.f_35354 /* Tunable: ENABLE_VEHICLE_REBEL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer"))
	{
		if (!Global_262145.f_35355 /* Tunable: ENABLE_VEHICLE_BLAZER */ && !Global_262145.f_35356 /* Tunable: ENABLE_VEHICLE_BLAZER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer3"))
	{
		if (!Global_262145.f_35357 /* Tunable: ENABLE_VEHICLE_BLAZER3 */ && !Global_262145.f_35358 /* Tunable: ENABLE_VEHICLE_BLAZER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sandking2"))
	{
		if (!Global_262145.f_35359 /* Tunable: ENABLE_VEHICLE_SANDKING2 */ && !Global_262145.f_35360 /* Tunable: ENABLE_VEHICLE_SANDKING2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("washington"))
	{
		if (!Global_262145.f_35361 /* Tunable: ENABLE_VEHICLE_WASHINGTON */ && !Global_262145.f_35362 /* Tunable: ENABLE_VEHICLE_WASHINGTON_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter2"))
	{
		if (!Global_262145.f_35363 /* Tunable: ENABLE_VEHICLE_SCHAFTER2 */ && !Global_262145.f_35364 /* Tunable: ENABLE_VEHICLE_SCHAFTER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("romero"))
	{
		if (!Global_262145.f_35365 /* Tunable: ENABLE_VEHICLE_ROMERO */ && !Global_262145.f_35366 /* Tunable: ENABLE_VEHICLE_ROMERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fugitive"))
	{
		if (!Global_262145.f_35367 /* Tunable: ENABLE_VEHICLE_FUGITIVE */ && !Global_262145.f_35368 /* Tunable: ENABLE_VEHICLE_FUGITIVE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surge"))
	{
		if (!Global_262145.f_35369 /* Tunable: ENABLE_VEHICLE_SURGE */ && !Global_262145.f_35370 /* Tunable: ENABLE_VEHICLE_SURGE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asea"))
	{
		if (!Global_262145.f_35371 /* Tunable: ENABLE_VEHICLE_ASEA */ && !Global_262145.f_35372 /* Tunable: ENABLE_VEHICLE_ASEA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("premier"))
	{
		if (!Global_262145.f_35373 /* Tunable: ENABLE_VEHICLE_PREMIER */ && !Global_262145.f_35374 /* Tunable: ENABLE_VEHICLE_PREMIER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("regina"))
	{
		if (!Global_262145.f_35375 /* Tunable: ENABLE_VEHICLE_REGINA */ && !Global_262145.f_35376 /* Tunable: ENABLE_VEHICLE_REGINA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asterope"))
	{
		if (!Global_262145.f_35377 /* Tunable: ENABLE_VEHICLE_ASTEROPE */ && !Global_262145.f_35378 /* Tunable: ENABLE_VEHICLE_ASTEROPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("intruder"))
	{
		if (!Global_262145.f_35379 /* Tunable: ENABLE_VEHICLE_INTRUDER */ && !Global_262145.f_35380 /* Tunable: ENABLE_VEHICLE_INTRUDER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater"))
	{
		if (!Global_262145.f_35381 /* Tunable: ENABLE_VEHICLE_TAILGATER */ && !Global_262145.f_35382 /* Tunable: ENABLE_VEHICLE_TAILGATER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stanier"))
	{
		if (!Global_262145.f_35383 /* Tunable: ENABLE_VEHICLE_STANIER */ && !Global_262145.f_35384 /* Tunable: ENABLE_VEHICLE_STANIER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ingot"))
	{
		if (!Global_262145.f_35385 /* Tunable: ENABLE_VEHICLE_INGOT */ && !Global_262145.f_35386 /* Tunable: ENABLE_VEHICLE_INGOT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener"))
	{
		if (!Global_262145.f_35387 /* Tunable: ENABLE_VEHICLE_WARRENER */ && !Global_262145.f_35388 /* Tunable: ENABLE_VEHICLE_WARRENER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stratum"))
	{
		if (!Global_262145.f_35389 /* Tunable: ENABLE_VEHICLE_STRATUM */ && !Global_262145.f_35390 /* Tunable: ENABLE_VEHICLE_STRATUM_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schwarzer"))
	{
		if (!Global_262145.f_35391 /* Tunable: ENABLE_VEHICLE_SCHWARZER */ && !Global_262145.f_35392 /* Tunable: ENABLE_VEHICLE_SCHWARZER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surano"))
	{
		if (!Global_262145.f_35393 /* Tunable: ENABLE_VEHICLE_SURANO */ && !Global_262145.f_35394 /* Tunable: ENABLE_VEHICLE_SURANO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo"))
	{
		if (!Global_262145.f_35395 /* Tunable: ENABLE_VEHICLE_BUFFALO */ && !Global_262145.f_35396 /* Tunable: ENABLE_VEHICLE_BUFFALO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo2"))
	{
		if (!Global_262145.f_35397 /* Tunable: ENABLE_VEHICLE_BUFFALO2 */ && !Global_262145.f_35398 /* Tunable: ENABLE_VEHICLE_BUFFALO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("massacro2"))
	{
		if (!Global_262145.f_35399 /* Tunable: ENABLE_VEHICLE_MASSACRO2 */ && !Global_262145.f_35400 /* Tunable: ENABLE_VEHICLE_MASSACRO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester2"))
	{
		if (!Global_262145.f_35401 /* Tunable: ENABLE_VEHICLE_JESTER2 */ && !Global_262145.f_35402 /* Tunable: ENABLE_VEHICLE_JESTER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo"))
	{
		if (!Global_262145.f_35403 /* Tunable: ENABLE_VEHICLE_FUTO */ && !Global_262145.f_35404 /* Tunable: ENABLE_VEHICLE_FUTO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra"))
	{
		if (!Global_262145.f_35405 /* Tunable: ENABLE_VEHICLE_PENUMBRA */ && !Global_262145.f_35406 /* Tunable: ENABLE_VEHICLE_PENUMBRA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fusilade"))
	{
		if (!Global_262145.f_35407 /* Tunable: ENABLE_VEHICLE_FUSILADE */ && !Global_262145.f_35408 /* Tunable: ENABLE_VEHICLE_FUSILADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype2"))
	{
		if (!Global_262145.f_35409 /* Tunable: ENABLE_VEHICLE_BTYPE2 */ && !Global_262145.f_35410 /* Tunable: ENABLE_VEHICLE_BTYPE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pigalle"))
	{
		if (!Global_262145.f_35411 /* Tunable: ENABLE_VEHICLE_PIGALLE */ && !Global_262145.f_35412 /* Tunable: ENABLE_VEHICLE_PIGALLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade"))
	{
		if (!Global_262145.f_35413 /* Tunable: ENABLE_VEHICLE_CAVALCADE */ && !Global_262145.f_35414 /* Tunable: ENABLE_VEHICLE_CAVALCADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade2"))
	{
		if (!Global_262145.f_35415 /* Tunable: ENABLE_VEHICLE_CAVALCADE2 */ && !Global_262145.f_35416 /* Tunable: ENABLE_VEHICLE_CAVALCADE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bjxl"))
	{
		if (!Global_262145.f_35417 /* Tunable: ENABLE_VEHICLE_BJXL */ && !Global_262145.f_35418 /* Tunable: ENABLE_VEHICLE_BJXL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("serrano"))
	{
		if (!Global_262145.f_35419 /* Tunable: ENABLE_VEHICLE_SERRANO */ && !Global_262145.f_35420 /* Tunable: ENABLE_VEHICLE_SERRANO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gresley"))
	{
		if (!Global_262145.f_35421 /* Tunable: ENABLE_VEHICLE_GRESLEY */ && !Global_262145.f_35422 /* Tunable: ENABLE_VEHICLE_GRESLEY_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole"))
	{
		if (!Global_262145.f_35423 /* Tunable: ENABLE_VEHICLE_SEMINOLE */ && !Global_262145.f_35424 /* Tunable: ENABLE_VEHICLE_SEMINOLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger"))
	{
		if (!Global_262145.f_35425 /* Tunable: ENABLE_VEHICLE_GRANGER */ && !Global_262145.f_35426 /* Tunable: ENABLE_VEHICLE_GRANGER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker"))
	{
		if (!Global_262145.f_35427 /* Tunable: ENABLE_VEHICLE_LANDSTALKER */ && !Global_262145.f_35428 /* Tunable: ENABLE_VEHICLE_LANDSTALKER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("habanero"))
	{
		if (!Global_262145.f_35429 /* Tunable: ENABLE_VEHICLE_HABANERO */ && !Global_262145.f_35430 /* Tunable: ENABLE_VEHICLE_HABANERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fq2"))
	{
		if (!Global_262145.f_35431 /* Tunable: ENABLE_VEHICLE_FQ2 */ && !Global_262145.f_35432 /* Tunable: ENABLE_VEHICLE_FQ2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller"))
	{
		if (!Global_262145.f_35433 /* Tunable: ENABLE_VEHICLE_BALLER */ && !Global_262145.f_35434 /* Tunable: ENABLE_VEHICLE_BALLER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot"))
	{
		if (!Global_262145.f_35435 /* Tunable: ENABLE_VEHICLE_PATRIOT */ && !Global_262145.f_35436 /* Tunable: ENABLE_VEHICLE_PATRIOT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rocoto"))
	{
		if (!Global_262145.f_35437 /* Tunable: ENABLE_VEHICLE_ROCOTO */ && !Global_262145.f_35438 /* Tunable: ENABLE_VEHICLE_ROCOTO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("radi"))
	{
		if (!Global_262145.f_35439 /* Tunable: ENABLE_VEHICLE_RADI */ && !Global_262145.f_35440 /* Tunable: ENABLE_VEHICLE_RADI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mesa3"))
	{
		if (!Global_262145.f_35441 /* Tunable: ENABLE_VEHICLE_MESA3 */ && !Global_262145.f_35442 /* Tunable: ENABLE_VEHICLE_MESA3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monster"))
	{
		if (!Global_262145.f_35443 /* Tunable: ENABLE_VEHICLE_MONSTER */ && !Global_262145.f_35444 /* Tunable: ENABLE_VEHICLE_MONSTER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet6"))
	{
		if (!Global_262145.f_35473 /* Tunable: ENABLE_VEHICLE_GAUNTLET6 */ && iVar1 < Global_262145.f_35460 /* Tunable: LAUNCHPOSIX_GAUNTLET6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada2"))
	{
		if (!Global_262145.f_35472 /* Tunable: ENABLE_VEHICLE_CONADA2 */ && iVar1 < Global_262145.f_35459 /* Tunable: LAUNCHPOSIX_CONADA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brigham"))
	{
		if (!Global_262145.f_35474 /* Tunable: ENABLE_VEHICLE_BRIGHAM */ && iVar1 < Global_262145.f_35461 /* Tunable: LAUNCHPOSIX_BRIGHAM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique2"))
	{
		if (!Global_262145.f_35465 /* Tunable: ENABLE_VEHICLE_CLIQUE2 */ && iVar1 < Global_262145.f_35452 /* Tunable: LAUNCHPOSIX_CLIQUE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("l35"))
	{
		if (!Global_262145.f_35462 /* Tunable: ENABLE_VEHICLE_L35 */ && iVar1 < Global_262145.f_35449 /* Tunable: LAUNCHPOSIX_L35 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == func_43(1))
	{
		iVar0 = 1;
	}
	else if (iParam0 == joaat("ratel"))
	{
		if (!Global_262145.f_35463 /* Tunable: ENABLE_VEHICLE_RATEL */ && iVar1 < Global_262145.f_35450 /* Tunable: LAUNCHPOSIX_RATEL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stingertt"))
	{
		if (!Global_262145.f_35466 /* Tunable: ENABLE_VEHICLE_STINGERTT */ && iVar1 < Global_262145.f_35453 /* Tunable: LAUNCHPOSIX_STINGERTT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo5"))
	{
		if (!Global_262145.f_35469 /* Tunable: ENABLE_VEHICLE_BUFFALO5 */ && iVar1 < Global_262145.f_35456 /* Tunable: LAUNCHPOSIX_BUFFALO5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streamer216"))
	{
		if (!Global_262145.f_35467 /* Tunable: ENABLE_VEHICLE_STREAMER216 */ && iVar1 < Global_262145.f_35454 /* Tunable: LAUNCHPOSIX_STREAMER216 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monstrociti"))
	{
		if (!Global_262145.f_35464 /* Tunable: ENABLE_VEHICLE_MONSTROCITI */ && iVar1 < Global_262145.f_35451 /* Tunable: LAUNCHPOSIX_MONSTROCITI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coureur"))
	{
		if (!Global_262145.f_35471 /* Tunable: ENABLE_VEHICLE_COUREUR */ && iVar1 < Global_262145.f_35458 /* Tunable: LAUNCHPOSIX_COUREUR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiju"))
	{
		if (!Global_262145.f_35468 /* Tunable: ENABLE_VEHICLE_RAIJU */ && iVar1 < Global_262145.f_35455 /* Tunable: LAUNCHPOSIX_RAIJU */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("inductor"))
	{
		if (!Global_262145.f_35470 /* Tunable: ENABLE_VEHICLE_INDUCTOR */ && iVar1 < Global_262145.f_35457 /* Tunable: LAUNCHPOSIX_INDUCTOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("inductor2"))
	{
		if (!Global_262145.f_35470 /* Tunable: ENABLE_VEHICLE_INDUCTOR */ && iVar1 < Global_262145.f_35457 /* Tunable: LAUNCHPOSIX_INDUCTOR */)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_43(bool bParam0)//Position - 0x724B
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

bool func_44()//Position - 0x7265
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_45()//Position - 0x727B
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_46()//Position - 0x7291
{
	int iVar0;
	
	if (Global_152686 == 2)
	{
		return 1;
	}
	else if (Global_152686 == 3)
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
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
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

int func_47(int iParam0)//Position - 0x7349
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_39(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0)//Position - 0x7390
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[24]))
	{
		if (iParam0 == Global_77479.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77479.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x7478
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]))
		{
			if (Global_98144[iVar0] == iParam0)
			{
				return Global_98154[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_50(int iParam0, int iParam1, bool bParam2)//Position - 0x74DB
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_51(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113810.f_7232[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x7549
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_52(int iParam0)//Position - 0x7621
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77479.f_139[iParam0];
}

int func_53()//Position - 0x763D
{
	var uVar0;
	
	func_63(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_62(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_61(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_56(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_55(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_54(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_54(var uParam0, int iParam1)//Position - 0x7683
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_55(var uParam0, int iParam1)//Position - 0x7709
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_56(var uParam0, int iParam1)//Position - 0x773C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_60(*uParam0);
	iVar1 = func_58(*uParam0);
	if (iParam1 < 1 || iParam1 > func_57(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_57(int iParam0, int iParam1)//Position - 0x778D
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_58(int iParam0)//Position - 0x782F
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_59(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_59(bool bParam0, int iParam1, int iParam2)//Position - 0x7851
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_60(int iParam0)//Position - 0x7868
{
	return iParam0 & 15;
}

void func_61(var uParam0, int iParam1)//Position - 0x7875
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_62(var uParam0, int iParam1)//Position - 0x78AF
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_63(var uParam0, int iParam1)//Position - 0x78EA
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_64(var uParam0, int iParam1)//Position - 0x7926
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_46())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_46())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113810.f_32752.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_21(Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113810.f_32752.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113810.f_32752.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_21(Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113810.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_21(Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113810.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_65(int iParam0)//Position - 0x9016
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98174[iVar0]))
		{
			if (Global_98174[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x9051
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar0], false))
			{
				if (Global_98144[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x90CD
{
	switch (Local_400.f_6)
	{
		case 0:
			return func_69(iParam0);
			break;
		
		case 1:
			if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_68(iParam0);
			break;
		
		case 2:
			return (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x9161
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0)//Position - 0x91D5
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0, int iParam1)//Position - 0x922E
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113810.f_32752[iParam0], iParam1);
}

void func_71()//Position - 0x924E
{
	struct<101> Var0;
	struct<78> Var103;
	bool bVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	int iVar185;
	int iVar186;
	struct<4> Var187;
	int iVar191;
	int iVar192;
	int iVar193;
	int iVar194;
	int iVar195;
	int iVar196;
	int iVar197;
	bool bVar198;
	int iVar199;
	bool bVar200;
	bool bVar201;
	int iVar202;
	int iVar203;
	int iVar204;
	int iVar205;
	struct<2> Var206;
	int iVar210;
	bool bVar211;
	int iVar212;
	bool bVar213;
	var uVar214;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var103.f_9 = 49;
	Var103.f_59 = 2;
	bVar181 = false;
	iVar182 = 0;
	if (iLocal_652 > 0 && iLocal_652 != 99)
	{
		if (((((((((((((((Local_400.f_0 == -1 || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_400.f_29.f_7, Local_400.f_29.f_10, Local_400.f_29.f_13, false, true, 0)) || ((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_400.f_0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[Local_400.f_0], false)) && (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_484[Local_400.f_0]) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_484[Local_400.f_0], true)))) || ((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_400.f_0]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ((ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) - 1f) > 0.15f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Global_77479.f_484[Local_400.f_0])))) || ((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_400.f_0]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_484[Local_400.f_0], true))) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_275(0) != bLocal_1016) || bLocal_852) || func_274(-1082130432))
		{
			iLocal_652 = 99;
		}
	}
	switch (iLocal_652)
	{
		case 0:
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !Global_75816) && !bLocal_852) && !CAM::IS_SCREEN_FADED_OUT())
			{
				if ((((((((((Local_400.f_29.f_80 && Local_400.f_2 == 0) && (Global_77479.f_592[0] != -1 || func_273() != 0)) && Local_400.f_0 != -1) && !iLocal_1014) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_274(-1082130432))
				{
					if (iLocal_654 != -1)
					{
					}
					else if (func_70(Local_400.f_0, 0) && func_70(Local_400.f_0, 5))
					{
						if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_400.f_29.f_7, Local_400.f_29.f_10, Local_400.f_29.f_13, false, true, 0) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
						{
							if ((!ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_400.f_0]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[Local_400.f_0], false)) || (!PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_484[Local_400.f_0]) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_484[Local_400.f_0], true)))
							{
								iVar185 = func_273();
								iVar186 = 0;
								while (iVar186 < iVar185)
								{
									if (func_67(func_269(iVar186)))
									{
										iVar184++;
									}
									iVar186++;
								}
								iVar183 = 0;
								while (iVar183 < Global_77479.f_592)
								{
									if (Global_77479.f_592[iVar183] != -1)
									{
										if ((func_268(Global_77479.f_592[iVar183], iLocal_670) && Global_113810.f_32752.f_1982[iLocal_670 /*939*/].f_626[Global_77479.f_592[iVar183]] == -15) && (Global_77479.f_592[iVar183] != 200 || !Global_113810.f_25076.f_7))
										{
											iVar184++;
										}
									}
									iVar183++;
								}
								if (iVar184 > 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										iLocal_854 = 1;
										if (Local_400.f_6 == 3)
										{
											func_267(&iLocal_653, 3, "WEB_VEH_TRIG2" /* GXT: Press ~a~ to select a special vehicle. */, 0, 0, 0, 0);
										}
										else
										{
											func_267(&iLocal_653, 3, "WEB_VEH_TRIG" /* GXT: Press ~a~ to change stored vehicle. */, 0, 0, 0, 0);
										}
										bLocal_1016 = func_275(0);
										iLocal_652++;
									}
								}
								else if (!iLocal_854)
								{
									if (Local_400.f_6 == 0)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_266("HANGAR_NO" /* GXT: Planes purchased from websites or that you land here will be stored here, along with ground vehicles too large for a garage. */))
										{
											func_265("HANGAR_NO" /* GXT: Planes purchased from websites or that you land here will be stored here, along with ground vehicles too large for a garage. */, -1);
											StringCopy(&cLocal_1017, "HANGAR_NO" /* GXT: Planes purchased from websites or that you land here will be stored here, along with ground vehicles too large for a garage. */, 16);
										}
										bVar181 = true;
									}
									else if (Local_400.f_6 == 1)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_266("MARINA_NO" /* GXT: Boats purchased from websites or that you dock in this slip will be stored here. */))
										{
											func_265("MARINA_NO" /* GXT: Boats purchased from websites or that you dock in this slip will be stored here. */, -1);
											StringCopy(&cLocal_1017, "MARINA_NO" /* GXT: Boats purchased from websites or that you dock in this slip will be stored here. */, 16);
										}
										bVar181 = true;
									}
									else if (Local_400.f_6 == 2)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_266("HELIPAD_NO" /* GXT: Helicopters purchased from websites or that you land on this helipad will be stored here. */))
										{
											func_265("HELIPAD_NO" /* GXT: Helicopters purchased from websites or that you land on this helipad will be stored here. */, -1);
											StringCopy(&cLocal_1017, "HELIPAD_NO" /* GXT: Helicopters purchased from websites or that you land on this helipad will be stored here. */, 16);
										}
										bVar181 = true;
									}
									else if (Local_400.f_6 == 3)
									{
										StringCopy(&Var187, "CAR_GAR_NO" /* GXT: Special vehicles can be collected here. Visit the Store to find new downloadable content. */, 16);
										if (MISC::IS_PS3_VERSION() || func_44())
										{
											StringConCat(&Var187, "_1", 16);
										}
										else if (MISC::IS_XBOX360_VERSION() || func_45())
										{
											StringConCat(&Var187, "_2", 16);
										}
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_266(&Var187))
										{
											func_265(&Var187, -1);
											cLocal_1017 = { Var187 };
										}
										bVar181 = true;
									}
								}
							}
						}
						else
						{
							iLocal_854 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_263(0, -1, 0))
			{
				if (iLocal_654 != -1)
				{
					iLocal_652 = 0;
					return;
				}
				if (func_262(iLocal_653, 1))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					}
					else
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
						}
					}
					func_261();
					iLocal_655 = 0;
					iLocal_656 = 0;
					iLocal_657 = 0;
					bLocal_643 = -1;
					iLocal_652++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_655 || iLocal_656)
			{
				func_260(0, 0);
				func_259(1, 4, 0, 0, 0);
				func_258(1, 2, 1, 1, 1);
				func_257("WEB_VEH_TITLE" /* GXT: SELECT VEHICLE */);
				iVar191 = 0;
				while (iVar191 < iLocal_644)
				{
					iLocal_644[iVar191] = 0;
					iVar191++;
				}
				iVar192 = -1;
				iVar193 = 0;
				func_64(&(Local_400.f_8), Local_400.f_0);
				iVar195 = 0;
				iVar196 = func_273();
				iVar194 = 0;
				while (iVar194 < iVar196)
				{
					if (func_67(func_269(iVar194)))
					{
						if (iVar192 == -1)
						{
							iVar192 = iVar195;
						}
						if (Local_400.f_8.f_4 == func_269(iVar194))
						{
							bLocal_643 = iVar195;
							iVar193 = 1;
						}
						iVar195++;
					}
					iVar194++;
				}
				iVar194 = 0;
				while (iVar194 < Global_77479.f_592)
				{
					if (Global_77479.f_592[iVar194] != -1)
					{
						if ((func_268(Global_77479.f_592[iVar194], iLocal_670) && Global_113810.f_32752.f_1982[iLocal_670 /*939*/].f_626[Global_77479.f_592[iVar194]] == -15) && (Global_77479.f_592[iVar194] != 200 || !Global_113810.f_25076.f_7))
						{
							func_144(Global_77479.f_592[iVar194], &Var0, 0, iLocal_670, -1, -1);
							if (iVar192 == -1)
							{
								iVar192 = iVar195;
							}
							if (Local_400.f_8.f_4 == Var0.f_66)
							{
								bLocal_643 = iVar195;
								iVar193 = 1;
							}
							iVar195++;
						}
					}
					iVar194++;
				}
				if (bLocal_643 == -1)
				{
					bLocal_643 = iVar192;
				}
				iVar195 = 0;
				iVar196 = func_273();
				iVar194 = 0;
				while (iVar194 < iVar196)
				{
					if (func_67(func_269(iVar194)))
					{
						MISC::SET_BIT(&(iLocal_644[(iVar195 / 32)]), (iVar195 % 32));
						func_140(iVar195, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_269(iVar194)), 0, 1, 0, 0, 0);
						if ((bLocal_643 == iVar195 && iVar193) && Local_400.f_6 != 3)
						{
							func_139(iVar195, 4, 0);
						}
						else
						{
							func_139(iVar195, 0, 0);
						}
						iVar195++;
					}
					iVar194++;
				}
				iVar194 = 0;
				while (iVar194 < Global_77479.f_592)
				{
					if (Global_77479.f_592[iVar194] != -1)
					{
						if ((func_268(Global_77479.f_592[iVar194], iLocal_670) && Global_113810.f_32752.f_1982[iLocal_670 /*939*/].f_626[Global_77479.f_592[iVar194]] == -15) && (Global_77479.f_592[iVar194] != 200 || !Global_113810.f_25076.f_7))
						{
							MISC::SET_BIT(&(iLocal_644[(iVar195 / 32)]), (iVar195 % 32));
							func_144(Global_77479.f_592[iVar194], &Var0, 0, iLocal_670, -1, -1);
							if (Global_77479.f_592[iVar194] != 164)
							{
								func_140(iVar195, func_136(Global_77479.f_592[iVar194]), 0, 1, 0, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_140(iVar195, "TWOSTRINGS" /* GXT: ~a~ ~a~ */, 2, 1, 0, 0, 0);
								func_133(func_136(Global_77479.f_592[iVar194]), 0);
								func_133("VNX_SWFTC" /* GXT: Classic */, 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_140(iVar195, "TWOSTRINGS" /* GXT: ~a~ ~a~ */, 2, 1, 0, 0, 0);
								func_133(func_136(Global_77479.f_592[iVar194]), 0);
								func_133("VNX_SWFTB" /* GXT: Flying Bravo */, 0);
							}
							else
							{
								func_140(iVar195, func_136(Global_77479.f_592[iVar194]), 0, 1, 0, 0, 0);
							}
							if (bLocal_643 == iVar195 && iVar193)
							{
								func_139(iVar195, 4, 0);
							}
							else
							{
								func_139(iVar195, 0, 0);
							}
							iVar195++;
						}
					}
					iVar194++;
				}
				func_132(bLocal_643, 1, 1);
				iLocal_658 = 1;
				iLocal_656 = 0;
				iLocal_655 = 1;
			}
			else
			{
				iVar182 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
						PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
						func_129(0, 0, 0, 1);
						func_128(0, -1, 1);
						if (func_127())
						{
							if (Global_4541034 != bLocal_643)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								bLocal_643 = Global_4541034;
								func_132(bLocal_643, 1, 1);
								iLocal_658 = 1;
							}
							else
							{
								iVar182 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
				{
					iLocal_658 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar197 = (bLocal_643 - 1);
					while (iVar197 >= 0)
					{
						if (BitTest(iLocal_644[(iVar197 / 32)], (iVar197 % 32)))
						{
							bLocal_643 = iVar197;
							bVar198 = true;
							iVar197 = 0;
						}
						iVar197 = (iVar197 + -1);
					}
					if (!bVar198)
					{
						iVar197 = (iLocal_644 * 32 - 1);
						while (iVar197 >= bLocal_643 + 1)
						{
							if (BitTest(iLocal_644[(iVar197 / 32)], (iVar197 % 32)))
							{
								bLocal_643 = iVar197;
								bVar198 = true;
								iVar197 = 0;
							}
							iVar197 = (iVar197 + -1);
						}
					}
					if (bVar198)
					{
						func_132(bLocal_643, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
				{
					iLocal_658 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar199 = bLocal_643 + 1;
					while (iVar199 <= (iLocal_644 * 32 - 1))
					{
						if (BitTest(iLocal_644[(iVar199 / 32)], (iVar199 % 32)))
						{
							bLocal_643 = iVar199;
							bVar200 = true;
							iVar199 = iLocal_644 * 32 + 1;
						}
						iVar199++;
					}
					if (!bVar200)
					{
						iVar199 = 0;
						while (iVar199 <= (bLocal_643 - 1))
						{
							if (BitTest(iLocal_644[(iVar199 / 32)], (iVar199 % 32)))
							{
								bLocal_643 = iVar199;
								bVar200 = true;
								iVar199 = iLocal_644 * 32 + 1;
							}
							iVar199++;
						}
					}
					if (bVar200)
					{
						func_132(bLocal_643, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar182 == 1)
				{
					bVar201 = false;
					iVar182 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar203 = 0;
					iVar204 = func_273();
					iVar202 = 0;
					while (iVar202 < iVar204)
					{
						if (func_67(func_269(iVar202)))
						{
							if (bLocal_643 == iVar203 && (((((Local_400.f_8.f_4 != func_269(iVar202) || !ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_400.f_0])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[Local_400.f_0], false)) || Local_400.f_0 == 21) || Local_400.f_0 == 22) || Local_400.f_0 == 23))
							{
								bVar201 = true;
								if ((((!iLocal_657 && Local_400.f_8.f_4 != func_269(iVar202)) || (!iLocal_657 && Local_400.f_0 == 21)) || (!iLocal_657 && Local_400.f_0 == 22)) || (!iLocal_657 && Local_400.f_0 == 23))
								{
									func_126("VEH_SELECT_CNFA" /* GXT: Are you sure you wish to use this vehicle? */, 0, 0);
									func_125(-1);
									func_124(201, "ITEM_YES" /* GXT: Confirm */, -1);
									func_124(202, "ITEM_NO" /* GXT: Back */, -1);
									iLocal_657 = 1;
									iVar202 = func_273() + 1;
								}
								else if (Local_400.f_6 == 3)
								{
									if (func_123(func_269(iVar202)))
									{
										iLocal_1015 = func_269(iVar202);
										iLocal_655 = 0;
										iLocal_656 = 0;
										bLocal_649 = false;
										iLocal_652++;
									}
									else
									{
										iLocal_1014 = 1;
										iLocal_1015 = func_269(iVar202);
										iLocal_652 = 99;
									}
								}
								else if (Local_400.f_6 == 0 && func_123(func_269(iVar202)))
								{
									iLocal_1015 = func_269(iVar202);
									iLocal_655 = 0;
									iLocal_656 = 0;
									bLocal_649 = false;
									iLocal_652++;
								}
								else
								{
									if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_400.f_0]))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_484[Local_400.f_0], false, true);
										VEHICLE::DELETE_VEHICLE(&(Global_77479.f_484[Local_400.f_0]));
									}
									Var103.f_66 = func_269(iVar202);
									MISC::SET_BIT(&(Var103.f_77), 14);
									func_120(Local_400.f_0, &Var103, 0f, 0f, 0f, -1f, 145);
									func_119(Local_400.f_0);
									func_64(&(Local_400.f_8), Local_400.f_0);
									iVar202 = func_273() + 1;
									iLocal_656 = 1;
								}
							}
							iVar203++;
						}
						iVar202++;
					}
					if (!bVar201)
					{
						iVar202 = 0;
						while (iVar202 < Global_77479.f_592)
						{
							if (Global_77479.f_592[iVar202] != -1)
							{
								if ((func_268(Global_77479.f_592[iVar202], iLocal_670) && Global_113810.f_32752.f_1982[iLocal_670 /*939*/].f_626[Global_77479.f_592[iVar202]] == -15) && (Global_77479.f_592[iVar202] != 200 || !Global_113810.f_25076.f_7))
								{
									func_144(Global_77479.f_592[iVar202], &Var0, 0, iLocal_670, -1, -1);
									if (bLocal_643 == iVar203 && ((Local_400.f_8.f_4 != Var0.f_66 || !ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_400.f_0])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[Local_400.f_0], false)))
									{
										bVar201 = true;
										if (!iLocal_657)
										{
											if (Local_400.f_6 == 3)
											{
												func_126("VEH_SELECT_CNF" /* GXT: This will remove any modifications from your currently selected vehicle. Are you sure? */, 0, 0);
											}
											else
											{
												func_126("VEH_SELECT_CNFA" /* GXT: Are you sure you wish to use this vehicle? */, 0, 0);
											}
											func_125(-1);
											func_124(201, "ITEM_YES" /* GXT: Confirm */, -1);
											func_124(202, "ITEM_NO" /* GXT: Back */, -1);
											iLocal_657 = 1;
											iVar202 = Global_77479.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_652 = 3;
											iLocal_656 = 1;
											iVar202 = Global_77479.f_592 + 1;
										}
										else
										{
											if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_400.f_0]))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_484[Local_400.f_0], false, true);
												VEHICLE::DELETE_VEHICLE(&(Global_77479.f_484[Local_400.f_0]));
											}
											func_144(Global_77479.f_592[iVar202], &Var0, 0, iLocal_670, -1, -1);
											MISC::SET_BIT(&(Var0.f_77), 14);
											if (VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_66))
											{
												MISC::SET_BIT(&(Var0.f_77), 22);
											}
											func_120(Local_400.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
											func_119(Local_400.f_0);
											func_64(&(Local_400.f_8), Local_400.f_0);
											iVar202 = Global_77479.f_592 + 1;
											iLocal_656 = 1;
										}
									}
									iVar203++;
								}
							}
							iVar202++;
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_657)
					{
						iLocal_658 = 1;
						iLocal_657 = 0;
					}
					else
					{
						iLocal_652 = 99;
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_658)
			{
				func_126("", 0, 0);
				func_125(-1);
				func_124(201, "ITEM_SELECT" /* GXT: Select */, -1);
				func_124(202, "ITEM_EXIT" /* GXT: Exit */, -1);
				iLocal_657 = 0;
				iLocal_658 = 0;
			}
			func_77(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			break;
		
		case 3:
			if (!iLocal_655 || iLocal_656)
			{
				func_260(0, 0);
				func_259(1, 0, 0, 0, 0);
				func_258(1, 1, 1, 1, 1);
				iVar205 = 0;
				while (iVar205 < iLocal_650)
				{
					iLocal_650[iVar205] = 0;
					iVar205++;
				}
				func_257("WEB_VEH_TITLE2" /* GXT: SELECT FLAG */);
				iVar205 = 0;
				while (iVar205 < 25)
				{
					StringCopy(&Var206, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var206, iVar205, 16);
					func_140(iVar205, &Var206, 0, 1, 0, 0, 0);
					MISC::SET_BIT(&(iLocal_650[(iVar205 / 32)]), (iVar205 % 32));
					iVar205++;
				}
				if (Local_672.f_12 == 0)
				{
					bLocal_649 = Global_113810.f_25185.f_313[200];
				}
				else if (Local_672.f_12 == 1)
				{
					bLocal_649 = Global_113810.f_25185.f_626[200];
				}
				else
				{
					bLocal_649 = Global_113810.f_25185.f_939[200];
				}
				func_132(bLocal_649, 1, 1);
				iLocal_658 = 1;
				iLocal_656 = 0;
				iLocal_655 = 1;
			}
			else
			{
				iVar182 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
						func_129(0, 0, 0, 1);
						func_128(0, -1, 1);
						if (func_127())
						{
							if (Global_4541034 != bLocal_649)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								bLocal_649 = Global_4541034;
								func_132(bLocal_649, 1, 1);
								iLocal_658 = 1;
							}
							else
							{
								iVar182 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
				{
					iLocal_658 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar210 = (bLocal_649 - 1);
					while (iVar210 >= 0)
					{
						if (BitTest(iLocal_650[(iVar210 / 32)], (iVar210 % 32)))
						{
							bLocal_649 = iVar210;
							bVar211 = true;
							iVar210 = 0;
						}
						iVar210 = (iVar210 + -1);
					}
					if (!bVar211)
					{
						iVar210 = 31;
						while (iVar210 >= bLocal_649 + 1)
						{
							if (BitTest(iLocal_650[(iVar210 / 32)], (iVar210 % 32)))
							{
								bLocal_649 = iVar210;
								bVar211 = true;
								iVar210 = bLocal_649;
							}
							iVar210 = (iVar210 + -1);
						}
					}
					if (bVar211)
					{
						func_132(bLocal_649, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
				{
					iLocal_658 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar212 = bLocal_649 + 1;
					while (iVar212 <= 31)
					{
						if (BitTest(iLocal_650[(iVar212 / 32)], (iVar212 % 32)))
						{
							bLocal_649 = iVar212;
							bVar213 = true;
							iVar212 = 31;
						}
						iVar212++;
					}
					if (!bVar213)
					{
						iVar212 = 0;
						while (iVar212 <= (bLocal_649 - 1))
						{
							if (BitTest(iLocal_650[(iVar212 / 32)], (iVar212 % 32)))
							{
								bLocal_649 = iVar212;
								bVar213 = true;
								iVar212 = bLocal_649;
							}
							iVar212++;
						}
					}
					if (bVar213)
					{
						func_132(bLocal_649, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar182 == 1)
				{
					iVar182 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[Local_400.f_0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_484[Local_400.f_0], false, true);
						VEHICLE::DELETE_VEHICLE(&(Global_77479.f_484[Local_400.f_0]));
					}
					uVar214 = bLocal_649 + 1;
					if (iLocal_670 == 0)
					{
						Global_113810.f_25185.f_313[200] = uVar214;
					}
					else if (iLocal_670 == 1)
					{
						Global_113810.f_25185.f_626[200] = uVar214;
					}
					else if (iLocal_670 == 2)
					{
						Global_113810.f_25185.f_939[200] = uVar214;
					}
					func_144(200, &Var0, 0, iLocal_670, -1, -1);
					MISC::SET_BIT(&(Var0.f_77), 14);
					if (VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_66))
					{
						MISC::SET_BIT(&(Var0.f_77), 22);
					}
					func_120(Local_400.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
					func_119(Local_400.f_0);
					func_64(&(Local_400.f_8), Local_400.f_0);
					iLocal_656 = 1;
					iLocal_652 = 2;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iLocal_655 = 0;
					iLocal_656 = 0;
					iLocal_652 = (iLocal_652 - 1);
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_658)
			{
				func_126("", 0, 0);
				func_125(-1);
				func_124(201, "ITEM_SELECT" /* GXT: Select */, -1);
				func_124(202, "ITEM_EXIT" /* GXT: Exit */, -1);
				iLocal_657 = 0;
				iLocal_658 = 0;
			}
			func_77(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (!AUDIO::IS_PLAYER_VEH_RADIO_ENABLE())
					{
						AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
					}
				}
			}
			func_74(1, -1);
			iLocal_652 = 0;
			func_72(&iLocal_653);
			iLocal_653 = -1;
			break;
	}
	if (!bVar181 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1017))
		{
			if ((((func_266("HANGAR_NO" /* GXT: Planes purchased from websites or that you land here will be stored here, along with ground vehicles too large for a garage. */) || func_266("MARINA_NO" /* GXT: Boats purchased from websites or that you dock in this slip will be stored here. */)) || func_266("HELIPAD_NO" /* GXT: Helicopters purchased from websites or that you land on this helipad will be stored here. */)) || func_266("CAR_GAR_NO_1" /* GXT: Special vehicles can be collected here. Visit PlayStation®Store to find new downloadable content. */)) || func_266("CAR_GAR_NO_2" /* GXT: Special vehicles can be collected here. Visit the Xbox Store to find new downloadable content. */))
			{
				HUD::CLEAR_HELP(true);
			}
			StringCopy(&cLocal_1017, "", 16);
		}
	}
}

void func_72(int iParam0)//Position - 0xA8B5
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_73(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44123[iVar0 /*32*/])
		{
			Global_44123[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_73(int iParam0)//Position - 0xA90C
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
		if (Global_44123[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_74(bool bParam0, int iParam1)//Position - 0xA947
{
	int iVar0;
	
	if (!func_76(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23390.f_8892)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23390.f_8892 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23390.f_6071[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23390.f_6071[iVar0] = 0;
	}
	if (Global_23390.f_6057[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23390.f_6057[iVar0] = 0;
	}
	if (Global_23390.f_6064[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23390.f_6064[iVar0] = 0;
	}
	if (bParam0)
	{
		func_75(&(Global_23390.f_6103[iVar0 /*10*/]));
		Global_23390.f_6164[iVar0] = 0;
	}
	else
	{
		Global_23390.f_6164[iVar0] = 0;
	}
}

void func_75(int* iParam0)//Position - 0xAA05
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_76(var uParam0, bool bParam1, int iParam2)//Position - 0xAA31
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23390.f_6164[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23390.f_6164[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23390.f_6164[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_77(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0xAACE
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int* iVar47;
	int* iVar48;
	int* iVar49;
	int* iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int* iVar60;
	int* iVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	int iVar96;
	float fVar97;
	float fVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	char cVar105[16];
	float fVar109;
	float fVar110;
	float fVar111;
	float fVar112;
	float fVar113;
	
	if (!func_76(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_116(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23390)
	{
		if (func_114(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23390 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23389;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_23388;
	}
	else
	{
		fVar59 = (((Global_23388 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_112(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23390.f_5661 <= 1)
		{
			func_140(Global_23390.f_5661 + 1, "DFLT_MNU_OPT" /* GXT: Exit */, 0, 1, 0, 0, 0);
			Global_23390.f_6457 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23390.f_6171)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_23388;
			}
			else
			{
				if (Global_23390)
				{
					StringCopy(&cVar63, func_111(29), 64);
					StringCopy(&cVar79, func_108(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_107(Global_23387, Global_23388, fParam5, fVar57, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23387 + (fParam5 * 0.5f)), (Global_23388 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23387 + (fParam5 * 0.5f)), (Global_23388 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23390.f_8862)
				{
					iVar1 = Global_23390.f_8858;
					iVar2 = Global_23390.f_8859;
					iVar3 = Global_23390.f_8860;
					iVar4 = Global_23390.f_8861;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_107(Global_23387, (Global_23388 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23388 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) != 0)
				{
					func_106();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23390.f_74)
					{
						if (Global_23390.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23390.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_14[iVar16], Global_23390.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23390.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23390.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23390.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23390.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23390.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23390.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23387 + 0.00390625f), ((Global_23388 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23390.f_6178)
				{
					func_106();
					func_104((((Global_23387 + fParam5) - 0.00390625f) - func_105("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6179, Global_23390.f_6180)), ((Global_23388 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6179, Global_23390.f_6180);
				}
				else if (Global_23390.f_6174 > Global_23390.f_5668)
				{
					if (Global_23390.f_6177 != 0)
					{
						func_106();
						func_104((((Global_23387 + fParam5) - 0.00390625f) - func_105("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6177, Global_23390.f_6176)), ((Global_23388 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6177, Global_23390.f_6176);
					}
				}
			}
			iVar6 = Global_23390.f_6181;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23390.f_8872)
			{
				iVar1 = Global_23390.f_8868;
				iVar2 = Global_23390.f_8869;
				iVar3 = Global_23390.f_8870;
				iVar4 = Global_23390.f_8871;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23390.f_5668 && iVar6 <= Global_23390.f_5661)
			{
				if (iVar6 >= 0)
				{
					if (Global_23390.f_5928[iVar6])
					{
						if (Global_23390.f_5799[iVar6] && iVar6 != Global_23390.f_6181)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23390.f_6188[iVar6] != 0f)
						{
							fVar56 = Global_23390.f_6188[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23390.f_6174 > Global_23390.f_5668)
			{
				if (Global_23390.f_8877)
				{
					iVar1 = Global_23390.f_8873;
					iVar2 = Global_23390.f_8874;
					iVar3 = Global_23390.f_8875;
					iVar4 = Global_23390.f_8876;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_107(Global_23387, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23390.f_8890)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23390.f_5081)) != 0 && Global_23390.f_5163 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23387 + 0.0046875f);
				if (Global_23390.f_5165 != 0)
				{
					func_114(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_103(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23390.f_5159)
				{
					if (Global_23390.f_5093[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23390.f_5093[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23390.f_5093[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_107(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23390.f_8882)
				{
					iVar1 = Global_23390.f_8878;
					iVar2 = Global_23390.f_8879;
					iVar3 = Global_23390.f_8880;
					iVar4 = Global_23390.f_8881;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_103(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23390.f_5159)
				{
					if (Global_23390.f_5093[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23390.f_5093[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23390.f_5093[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23390.f_5165 != 0)
				{
					func_114(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					func_102(Global_23390.f_5165, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_5165), func_108(Global_23390.f_5165, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_103(fVar42);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_107(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23390.f_8882)
					{
						iVar1 = Global_23390.f_8878;
						iVar2 = Global_23390.f_8879;
						iVar3 = Global_23390.f_8880;
						iVar4 = Global_23390.f_8881;
					}
					else
					{
						HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
					func_103(fVar42);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23390.f_5163 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23390.f_5164) > Global_23390.f_5163)
					{
						StringCopy(&(Global_23390.f_5081), "", 24);
						Global_23390.f_5163 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23387 + 0.0046875f);
				func_103(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23390.f_5159)
				{
					if (Global_23390.f_5093[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23390.f_5093[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23390.f_5093[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_107(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23390.f_8882)
				{
					iVar1 = Global_23390.f_8878;
					iVar2 = Global_23390.f_8879;
					iVar3 = Global_23390.f_8880;
					iVar4 = Global_23390.f_8881;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_103(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4540958.f_21)) != 0 && Global_4540958.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23387 + 0.0046875f);
				if (Global_4540958.f_67 != 0)
				{
					func_114(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_103(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4540958.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540958.f_61)
				{
					if (Global_4540958.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540958.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540958.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540958.f_34[iVar16], Global_4540958.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540958.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_107(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23390.f_8882)
				{
					iVar1 = Global_23390.f_8878;
					iVar2 = Global_23390.f_8879;
					iVar3 = Global_23390.f_8880;
					iVar4 = Global_23390.f_8881;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_103(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4540958.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540958.f_61)
				{
					if (Global_4540958.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540958.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540958.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540958.f_34[iVar16], Global_4540958.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540958.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4540958.f_67 != 0)
				{
					func_114(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_102(Global_4540958.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_111(Global_4540958.f_67), func_108(Global_4540958.f_67, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4540958.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4540958.f_66) > Global_4540958.f_65)
					{
						StringCopy(&(Global_4540958.f_21), "", 16);
						Global_4540958.f_65 = -1;
					}
				}
			}
			func_93(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23390.f_6171)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar96 = Global_23390.f_5661;
			if (Global_23390.f_6172)
			{
				iVar96 = (Global_23390.f_6175 - 1);
			}
			fVar97 = 0f;
			fVar98 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar96)
			{
				fVar56 = 0.034722f;
				if (Global_23390.f_6188[iVar6] != 0f)
				{
					fVar56 = Global_23390.f_6188[iVar6];
				}
				if (Global_23390.f_6172)
				{
					iVar6 = Global_23390.f_8513[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23390.f_6181 && iVar9 < Global_23390.f_5668)
				{
					bVar33 = true;
					if (Global_23390.f_6182 == iVar6)
					{
						fVar98 = fVar97;
					}
					if (Global_23390.f_5799[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23390.f_6322[iVar6] = fVar35;
				fVar34 = (Global_23387 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23390.f_6182 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_23390.f_8884)
					{
						HUD::GET_HUD_COLOUR(Global_23390.f_8883, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23387 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, false, 0);
					Global_23390.f_6320 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23390.f_5669)
				{
					if (BitTest(Global_23390.f_5532[iVar6], iVar8) || Global_23390.f_5499[iVar8] == 5)
					{
						if (Global_23390.f_6172)
						{
							iVar19 = Global_23390.f_8529[((iVar9 * Global_23390.f_5669) + iVar8)];
							iVar20 = Global_23390.f_8570[((iVar9 * Global_23390.f_5669) + iVar8)];
							iVar21 = Global_23390.f_8611[((iVar9 * Global_23390.f_5669) + iVar8)];
							iVar22 = Global_23390.f_8652[((iVar9 * Global_23390.f_5669) + iVar8)];
							iVar23 = Global_23390.f_8693[((iVar9 * Global_23390.f_5669) + iVar8)];
						}
						else
						{
							Global_23390.f_8529[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar19;
							Global_23390.f_8570[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar20;
							Global_23390.f_8611[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar21;
							Global_23390.f_8652[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar22;
							Global_23390.f_8693[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar23;
						}
						iVar104 = 0;
						bVar55 = false;
						if (Global_23390.f_6454[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23390.f_6451[0])
							{
								bVar55 = true;
								iVar104 = 0;
							}
						}
						if (Global_23390.f_6454[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23390.f_6451[1])
							{
								bVar55 = true;
								iVar104 = 1;
							}
						}
						if (Global_23390.f_5505[iVar8] != -1f)
						{
							fVar34 = ((Global_23387 + 0.0046875f) + Global_23390.f_5505[iVar8]);
						}
						if ((iVar8 < 4 && Global_23390.f_5505[iVar8 + 1] != -1f) && fVar34 < Global_23390.f_5505[iVar8 + 1])
						{
							fVar46 = (Global_23390.f_5505[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23387 + Global_23389) - 0.0046875f) - fVar34);
						}
						if ((Global_23390.f_5518[iVar8] && Global_23390.f_6317) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23390.f_5499[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23390.f_6172)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23390.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_91(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23390.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[(iVar21 + iVar27)], Global_23390.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_114(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23390.f_4824[(iVar22 + iVar14)] == 2 || Global_23390.f_4824[(iVar22 + iVar14)] == 52) || Global_23390.f_4824[(iVar22 + iVar14)] == 62)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23390.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23390.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar42;
										Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar43;
										Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar44;
										if (Global_23390.f_5526[iVar8] == 2)
										{
											iVar99 = (iVar8 - 1);
											while (iVar99 >= 0)
											{
												if (Global_23390.f_5526[iVar99] == 2)
												{
													Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar99)] = (Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar99)] - Global_23390.f_5511[iVar8]);
												}
												iVar99 = (iVar99 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
										fVar43 = Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
										fVar44 = Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_114(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_114(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_102(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_111(26), func_108(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_114(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_114(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_102(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_111(27), func_108(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23390.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_91(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23390.f_8888 && Global_23390.f_8889 == iVar6)
										{
											func_90(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[(iVar21 + iVar27)], Global_23390.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23390.f_4824[(iVar22 + iVar28)] == 2 || Global_23390.f_4824[(iVar22 + iVar28)] == 52) || Global_23390.f_4824[(iVar22 + iVar28)] == 62)
											{
												if (func_114(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_114(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_102(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23390.f_5526[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar28)]), func_108(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar28)]), func_108(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23390.f_5526[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_89() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23390.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_91(0, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar105, "TEST_LABEL", 16);
													fVar109 = 0f;
													fVar110 = 55f;
													fVar111 = 0.0185f;
													fVar112 = 0.004f;
													fVar113 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar110), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar105);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23390.f_6181 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar113), (fVar35 + fVar112), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23390.f_4824[(iVar22 + iVar14)] != 2 && Global_23390.f_4824[(iVar22 + iVar14)] != 52) && Global_23390.f_4824[(iVar22 + iVar14)] != 62)
											{
												if (func_114(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_114(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_102(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23390.f_4824[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar14)]), func_108(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (Global_23387 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else if (Global_23390.f_5526[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar14)]), func_108(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[(iVar22 + iVar14)]), func_108(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23390.f_6172)
									{
										func_91(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23390.f_8888 && Global_23390.f_8889 == iVar6)
										{
											func_90(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[iVar20]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23390.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23390.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar42;
										Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
										fVar43 = Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_114(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_114(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_102(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_111(26), func_108(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_114(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_114(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_102(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_111(27), func_108(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_91(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
										func_88((fVar34 + fVar42), fVar35, "NUMBER", Global_23390.f_4309[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23390.f_6172)
									{
										func_91(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23390.f_8888 && Global_23390.f_8889 == iVar6)
										{
											func_90(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23390.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23390.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar42;
										Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
										fVar43 = Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_114(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_114(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_102(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_111(26), func_108(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_114(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_114(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_102(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_111(27), func_108(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									func_91(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
									func_87((fVar34 + fVar42), fVar35, "NUMBER", Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_114(Global_23390.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23390.f_6172)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23390.f_5526[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar42;
											Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
											fVar44 = Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)];
										}
										if (bVar54)
										{
											if (func_114(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23390.f_5526[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_114(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_102(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_111(26), func_108(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
											if (func_114(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_114(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_102(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_111(27), func_108(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_114(Global_23390.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_102(Global_23390.f_4824[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_111(Global_23390.f_4824[iVar22]), func_108(Global_23390.f_4824[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_86(Global_23390.f_4824[iVar22])), (fVar37 * func_86(Global_23390.f_4824[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23390.f_5499[iVar8] == 5)
						{
							if (Global_23390.f_5511[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23390.f_5511[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23390.f_5511[iVar8]);
							if (Global_23390.f_5518[iVar8])
							{
								if (func_114(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23390.f_5511[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23390.f_8513[iVar9] = iVar6;
						Global_23390.f_6183 = iVar6;
						iVar9++;
						if (Global_23390.f_5799[iVar6])
						{
							iVar13++;
						}
						if (Global_23390.f_6188[iVar6] != 0f)
						{
							fVar97 = (fVar97 + Global_23390.f_6188[iVar6]);
						}
						else
						{
							fVar97 = (fVar97 + 0.034722f);
						}
					}
					if (!Global_23390.f_6171)
					{
						Global_23390.f_5928[iVar6] = 1;
						if (Global_23390.f_5670[iVar6])
						{
							if (bVar32)
							{
								Global_23390.f_6177 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23390.f_6177 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23390.f_6171)
			{
				Global_23390.f_6173 = ((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
				Global_23390.f_6176 = iVar11;
				Global_23390.f_6174 = iVar10;
				Global_23390.f_6171 = 1;
			}
		}
		if (!Global_23390.f_6172)
		{
			Global_23390.f_6175 = iVar9;
			Global_23390.f_6172 = 1;
		}
		iVar5++;
	}
	Global_23390.f_6319 = fVar51;
	Global_23390.f_6321 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23390.f_6319);
	if (!Global_23390.f_8857)
	{
		func_79(0);
	}
	Global_23390.f_8857 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_78(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_78(int iParam0)//Position - 0xDC29
{
	Global_1655612.f_1163 = iParam0;
}

void func_79(int iParam0)//Position - 0xDC3A
{
	if (func_85())
	{
		return;
	}
	if (!Global_20500.f_1 == 1)
	{
		if (func_84(0))
		{
			func_80(iParam0);
		}
		MISC::SET_BIT(&Global_8371, 2);
	}
}

void func_80(int iParam0)//Position - 0xDC6D
{
	if (func_85())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_83())
		{
			func_82(1, 1);
		}
		else
		{
			func_82(0, 0);
		}
	}
	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8371, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21845 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 30);
	}
	if (!func_81())
	{
		Global_20500.f_1 = 3;
	}
}

int func_81()//Position - 0xDCF7
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_82(bool bParam0, bool bParam1)//Position - 0xDD1E
{
	if (bParam0)
	{
		if (func_84(0))
		{
			Global_20704 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
			}
			Global_20428 = { Global_20446[Global_20445 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
	else if (Global_20704 == 1)
	{
		Global_20704 = 0;
		Global_20428 = { Global_20453[Global_20445 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
}

bool func_83()//Position - 0xDD92
{
	return BitTest(Global_1963795, 5);
}

int func_84(int iParam0)//Position - 0xDDA0
{
	if (iParam0 == 1)
	{
		if (Global_20500.f_1 > 3)
		{
			if (BitTest(Global_8370, 14))
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
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_85()//Position - 0xDDF7
{
	return BitTest(Global_1963795, 19);
}

float func_86(int iParam0)//Position - 0xDE06
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 54:
		case 45:
		case 46:
		case 47:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_87(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0xDE75
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_88(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xDE94
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_89()//Position - 0xDEB2
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_90(bool bParam0)//Position - 0xDEC3
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23390.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23390.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_91(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xDF09
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_92(Global_23390.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_92(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xE0B7
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_93(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0xE341
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_76(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_116(bParam4, bParam8))
	{
		return;
	}
	if (func_100())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_96(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_23390.f_5166 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = 0;
			while (iVar1 < Global_23390.f_5166)
			{
				if (Global_23390.f_5465[iVar1] != 363)
				{
					StringCopy(&(Global_23390.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23390.f_5465[iVar1], true), 64);
				}
				else if (Global_23390.f_5480[iVar1] != 32)
				{
					StringCopy(&(Global_23390.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23390.f_5480[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23390.f_5167 = 0;
		}
		if (!Global_23390.f_5167)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23390.f_5524 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23390.f_5166)
			{
				if (MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_95(&(Global_23390.f_5168[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_95(&(Global_23390.f_5168[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23390.f_5450[iVar1] == -1)
					{
						func_94(&(Global_23390.f_5393[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23390.f_5450[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23390.f_5393[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23390.f_5465[iVar1] != 363 && BitTest(Global_23390.f_5495, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23390.f_5465[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4540958.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23390.f_5166);
				func_95(&Global_4540958);
				if (Global_4540958.f_20 == -1)
				{
					func_94(&(Global_4540958.f_16));
				}
				else
				{
					iVar4 = Global_23390.f_5450[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540958.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23390.f_5525)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23390.f_5167 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23390.f_5166)
		{
			if (Global_23390.f_5450[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23390.f_5393[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4540958.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540958.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23390.f_8892)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23390.f_8892 = 1;
			}
		}
		else if (Global_23390.f_8892)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23390.f_8892 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23390.f_5498)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23390.f_6103[iVar0 /*10*/], Global_23390.f_5496, Global_23390.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23390.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_94(char* sParam0)//Position - 0xE845
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_95(char* sParam0)//Position - 0xE857
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_96(int iParam0, int iParam1)//Position - 0xE865
{
	bool bVar0;
	
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_97(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853988[iParam0 /*867*/].f_205 == 8;
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

int func_97(int iParam0, bool bParam1)//Position - 0xE8BE
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_98();
	}
	if (Global_1575043[iVar1] == 1)
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

int func_98()//Position - 0xE8FF
{
	return Global_1574918;
}

int func_99(var uParam0)//Position - 0xE90B
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

int func_100()//Position - 0xE92D
{
	struct<3> Var0;
	
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	if (func_101())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20445 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_101()//Position - 0xE99B
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_102(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0xE9B5
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 54:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 45:
		case 46:
		case 47:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 55:
			*iParam5 = 100;
			break;
		
		case 63:
			*iParam5 = 100;
			break;
		
		case 56:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_103(float fParam0)//Position - 0xEAD6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23387 + Global_23389) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_104(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xEB35
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_105(char* sParam0, int iParam1, int iParam2)//Position - 0xEB58
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_106();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_106()//Position - 0xEB9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23390.f_8867)
	{
		iVar0 = Global_23390.f_8863;
		iVar1 = Global_23390.f_8864;
		iVar2 = Global_23390.f_8865;
		iVar3 = Global_23390.f_8866;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23387 + 0.0046875f), ((Global_23387 + Global_23389) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_107(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xEC24
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_108(int iParam0, bool bParam1)//Position - 0xEC53
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_7488[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23390.f_7488[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_110(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_109(&uVar3);
			}
		}
		else
		{
			return func_109(&(Global_23390.f_7488[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 52:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 53:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 55:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 56:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 61:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_109(var uParam0)//Position - 0xF17B
{
	return uParam0;
}

struct<13> func_110(int iParam0)//Position - 0xF185
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_111(int iParam0)//Position - 0xF19C
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6463[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23390.f_6463[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_110(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_109(&uVar0);
		}
		else
		{
			return func_109(&(Global_23390.f_6463[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 52)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_112(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0xF211
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (func_113(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = SYSTEM::ROUND((fVar1 * fVar2));
		*iParam2 = SYSTEM::ROUND(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = SYSTEM::ROUND((fVar0 / *fParam3));
	*iParam2 = SYSTEM::ROUND((fVar1 / *fParam3));
}

bool func_113(int iParam0, int iParam1)//Position - 0xF299
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_114(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xF2B4
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_111(iParam0), 64);
	StringCopy(&cVar16, func_108(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_112(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_115(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23389)
			{
				*fParam4 = (*fParam4 * (Global_23389 / *fParam3));
				*fParam3 = Global_23389;
			}
		}
		return 1;
	}
	return 0;
}

float func_115(int iParam0)//Position - 0xF3E0
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 63:
			return 0.5f;
			break;
		
		case 62:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_116(bool bParam0, bool bParam1)//Position - 0xF4B4
{
	if (Global_2672524.f_1685.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_118(8, -1) && func_117() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78950) || Global_23390.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100885.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_117()//Position - 0xF551
{
	return Global_1574996;
}

var func_118(int iParam0, int iParam1)//Position - 0xF55D
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1654054.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1654054.f_1048, iParam0);
}

void func_119(int iParam0)//Position - 0xF595
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_77479[iParam0] = 0;
	Global_77479.f_69[iParam0] = 0;
}

void func_120(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)//Position - 0xF5BA
{
	if (func_64(&(Global_77479.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77479.f_555[0 /*21*/].f_9, 10))
		{
			func_122(iParam0);
			func_121(uParam1, &(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77479.f_555[0 /*21*/].f_9, 11))
			{
				Global_113810.f_32752.f_1864[Global_77479.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113810.f_32752.f_1934[Global_77479.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_113810.f_32752.f_1864[Global_77479.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113810.f_32752.f_1934[Global_77479.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_542(iParam0, 1);
		}
	}
}

void func_121(var uParam0, var uParam1)//Position - 0xF6B3
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_122(int iParam0)//Position - 0xF77F
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_64(&(Global_77479.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
			Global_77479.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77479.f_555[0 /*21*/].f_9, 13))
		{
			func_542(iParam0, 0);
		}
	}
}

int func_123(int iParam0)//Position - 0xF7F6
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_124(int iParam0, char* sParam1, int iParam2)//Position - 0xF813
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23390.f_5166 >= 14)
	{
		StringCopy(&Global_4540958, sVar0, 64);
		StringCopy(&(Global_4540958.f_16), sParam1, 16);
		Global_4540958.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23390.f_5495), Global_23390.f_5166);
	StringCopy(&(Global_23390.f_5168[Global_23390.f_5166 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23390.f_5393[Global_23390.f_5166 /*4*/]), sParam1, 16);
	Global_23390.f_5450[Global_23390.f_5166] = iParam2;
	Global_23390.f_5465[Global_23390.f_5166] = iParam0;
	Global_23390.f_5480[Global_23390.f_5166] = 32;
	Global_23390.f_5166++;
}

void func_125(int iParam0)//Position - 0xF8C2
{
	int iVar0;
	int iVar1;
	
	Global_23390.f_5166 = 0;
	Global_23390.f_5167 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23390.f_5393[iVar0 /*4*/]), "", 16);
		Global_23390.f_5450[iVar0] = -1;
		Global_23390.f_5465[iVar0] = 363;
		Global_23390.f_5480[iVar0] = 32;
		iVar0++;
	}
	Global_23390.f_5495 = 0;
	StringCopy(&(Global_4540958.f_16), "", 16);
	Global_4540958.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_76(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23390.f_6103[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_126(char* sParam0, int iParam1, int iParam2)//Position - 0xF97B
{
	int iVar0;
	
	StringCopy(&(Global_23390.f_5081), sParam0, 24);
	Global_23390.f_5159 = 0;
	Global_23390.f_5160 = 0;
	Global_23390.f_5161 = 0;
	Global_23390.f_5162 = 0;
	Global_23390.f_5163 = iParam1;
	Global_23390.f_5164 = MISC::GET_GAME_TIMER();
	Global_23390.f_5165 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23390.f_5093[iVar0] = 0;
		iVar0++;
	}
}

int func_127()//Position - 0xF9E0
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4541034 > -1)
		{
			if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_128(int iParam0, int iParam1, bool bParam2)//Position - 0xFA07
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	if (Global_4541034 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			return 1;
		}
		else
		{
			Global_4541034 = -1;
			return 0;
		}
	}
	if (((Global_4541034 > -1 || Global_4541034 == -3) || Global_4541034 == -2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}
	if (Global_4541034 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4541034 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}
	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

void func_129(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xFAE7
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		Global_4541034 = -1;
		return;
	}
	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	fVar0 = Global_23387;
	fVar2 = (fVar0 + Global_23389);
	fVar3 = Global_23390.f_6173;
	fVar1 = (Global_23390.f_6173 - (IntToFloat(Global_23390.f_6175) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23390.f_6175 < 1)
	{
		fVar1 = (Global_23390.f_6173 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_131();
	if (Global_4541034 == -6)
	{
		return;
	}
	Global_4541034 = -1;
	fVar7 = Global_4541028;
	fVar8 = Global_4541029;
	if (Global_23390.f_6176 > Global_23390.f_6175)
	{
		if (((Global_4541028 >= fVar0 && Global_4541028 <= fVar2) && Global_4541029 >= fVar3) && Global_4541029 < (fVar3 + fVar6))
		{
			Global_4541034 = -2;
			if (bParam3)
			{
				func_130(0);
			}
			return;
		}
		if (((Global_4541028 >= fVar0 && Global_4541028 <= fVar2) && Global_4541029 >= (fVar3 + fVar6)) && Global_4541029 < (fVar3 + 0.034722f))
		{
			Global_4541034 = -3;
			if (bParam3)
			{
				func_130(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_23390.f_6176 == -1)
		{
			Global_4541034 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23390.f_6175);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_107(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23389, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4541034 = Global_23390.f_8513[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4541034 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4541034 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4541034 = -4;
		return;
	}
	Global_4541034 = -1;
}

void func_130(bool bParam0)//Position - 0xFD93
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23387;
	fVar1 = Global_23390.f_6173;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4541034 == -2)
	{
		func_107(fVar0, fVar1, Global_23389, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4541034 == -3)
	{
		func_107(fVar0, (fVar1 + fVar2), Global_23389, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_131()//Position - 0xFE1C
{
	Global_4541030 = Global_4541028;
	Global_4541031 = Global_4541029;
	Global_4541028 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
	Global_4541029 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	Global_4541032 = (Global_4541028 - Global_4541030);
	Global_4541033 = (Global_4541029 - Global_4541031);
}

void func_132(bool bParam0, bool bParam1, int iParam2)//Position - 0xFE64
{
	int iVar0;
	int iVar1;
	
	Global_23390.f_6182 = bParam0;
	Global_23390.f_6317 = iParam2;
	if (Global_23390.f_6182 < Global_23390.f_6181)
	{
		Global_23390.f_6181 = Global_23390.f_6182;
	}
	else if ((Global_23390.f_6172 && Global_23390.f_6182 > Global_23390.f_6183) || (!Global_23390.f_6172 && Global_23390.f_6182 >= (Global_23390.f_6181 + Global_23390.f_5668)))
	{
		iVar0 = Global_23390.f_6181;
		while (iVar0 <= Global_23390.f_6182)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23390.f_5532[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23390.f_5668 && Global_23390.f_6181 < 128)
		{
			Global_23390.f_6181++;
			iVar1 = 0;
			iVar0 = Global_23390.f_6181;
			while (iVar0 <= Global_23390.f_6182)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23390.f_5532[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23390.f_6171 = 0;
	Global_23390.f_6172 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23390.f_5081), "", 24);
		StringCopy(&(Global_4540958.f_21), "", 16);
	}
}

void func_133(char* sParam0, bool bParam1)//Position - 0xFFB4
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_23390.f_5663 >= 256)
	{
		return;
	}
	if (Global_23390.f_6186 >= 4)
	{
		return;
	}
	if (Global_23390.f_6187 != 1)
	{
		return;
	}
	if (Global_23390.f_6186 >= Global_23390.f_6184)
	{
		return;
	}
	StringCopy(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]), sParam0, 24);
	Global_23390.f_5663++;
	Global_23390.f_2387[Global_23390.f_6185 /*5*/][Global_23390.f_6186] = 1;
	Global_23390.f_6186++;
	if (Global_23390.f_6186 >= Global_23390.f_6184)
	{
		fVar0 = func_135();
		if (Global_23390.f_5518[Global_23390.f_5662] && Global_23390.f_6186 == Global_23390.f_6184)
		{
			func_114(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23390.f_5511[(Global_23390.f_5662 - 1)])
		{
			Global_23390.f_5511[(Global_23390.f_5662 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23390.f_6186 >= Global_23390.f_6184)
		{
			fVar3 = func_134();
			if (fVar3 > Global_23390.f_6188[Global_23390.f_5661])
			{
				Global_23390.f_6188[Global_23390.f_5661] = fVar3;
			}
		}
	}
}

float func_134()//Position - 0x100F1
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23390.f_6186)
	{
		if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23390.f_4824[((Global_23390.f_5667 - iVar1) + iVar0)] != 0)
		{
			if (func_114(Global_23390.f_4824[((Global_23390.f_5667 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_135()//Position - 0x101A4
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23390.f_6186)
	{
		if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_91(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
	{
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23390.f_79[Global_23390.f_6185 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23390.f_6186)
	{
		if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(Global_23390.f_6185 + iVar8) /*6*/]));
			}
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(Global_23390.f_6185 + iVar8) /*6*/]));
			}
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[((Global_23390.f_5665 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[((Global_23390.f_5666 - iVar4) + iVar10)], Global_23390.f_4695[((Global_23390.f_5666 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
	{
		fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23390.f_4824[((Global_23390.f_5667 - iVar5) + iVar7)] != 0)
		{
			func_114(Global_23390.f_4824[((Global_23390.f_5667 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_136(int iParam0)//Position - 0x105EB
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_137(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ" /* GXT: Sanchez (Livery) */;
		
		case 105:
			return "REBEL" /* GXT: Rebel */;
		
		case 107:
			return "SANCHEZ2" /* GXT: Sanchez */;
		
		case 117:
			return "COQUETTE_TLESS" /* GXT: Coquette Topless */;
		
		case 118:
			return "BANSHEE_TLESS" /* GXT: Banshee Topless */;
		
		case 119:
			return "STINGER_TLESS" /* GXT: Stinger Topless */;
		
		case 120:
			return "VOLTIC_HTOP" /* GXT: Voltic */;
		
		case 154:
			return "BLAZER3" /* GXT: Hot Rod Blazer */;
		
		case 155:
			return "REBEL2" /* GXT: Rebel (Clean) */;
		
		case 158:
			return "BUFFALO2" /* GXT: Buffalo S */;
		
		case 159:
			return "TAILGATER" /* GXT: Tailgater */;
		
		case 166:
			return "COQUETTE2_TLESS" /* GXT: Coquette Classic Topless */;
		
		case 170:
			return "KALAHARI_TLESS" /* GXT: Kalahari Topless */;
		
		case 171:
			return "BOXVILLE4" /* GXT: Boxville */;
		
		case 173:
			return "DINGHY3" /* GXT: Dinghy */;
		
		case 183:
			return "MULE3" /* GXT: Mule */;
		
		case 191:
			return "LANDSTALKER" /* GXT: Landstalker */;
		
		case 192:
			return "MESA3" /* GXT: Mesa */;
		
		case 194:
			return "ORACLE1" /* GXT: Oracle XS */;
		
		case 196:
			return "SCHAFTER2" /* GXT: Schafter */;
		
		case 207:
			return "DOMINATOR2" /* GXT: Pisswasser Dominator */;
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2" /* GXT: Cargobob Jetsam */;
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		case 510:
			return "LANDSTLKR2" /* GXT: Landstalker XL */;
		
		case 583:
			return "BRICKADE2" /* GXT: Brickade 6x6 */;
		
		default:
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar0);
}

int func_137(int iParam0, int iParam1)//Position - 0x107B4
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case 79:
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_75777;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
		
		case 267:
			return joaat("le7b");
		
		case 268:
			return joaat("omnis");
		
		case 269:
			return joaat("tropos");
		
		case 270:
			return joaat("brioso");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("contender");
		
		case 274:
			return joaat("cliffhanger");
		
		case 275:
			return joaat("bf400");
		
		case 279:
			return joaat("tyrus");
		
		case 280:
			return joaat("lynx");
		
		case 281:
			return joaat("sheava");
		
		case 276:
			return joaat("rallytruck");
		
		case 277:
			return joaat("tampa2");
		
		case 278:
			return joaat("gargoyle");
		
		case 282:
			return joaat("bagger");
		
		case 283:
			return joaat("esskey");
		
		case 284:
			return joaat("nightblade");
		
		case 285:
			return joaat("defiler");
		
		case 286:
			return joaat("avarus");
		
		case 287:
			return joaat("zombiea");
		
		case 288:
			return joaat("zombieb");
		
		case 289:
			return joaat("chimera");
		
		case 290:
			return joaat("daemon2");
		
		case 291:
			return joaat("ratbike");
		
		case 292:
			return joaat("shotaro");
		
		case 293:
			return joaat("raptor");
		
		case 294:
			return joaat("hakuchou2");
		
		case 296:
			return joaat("blazer4");
		
		case 297:
			return joaat("sanctus");
		
		case 295:
			return joaat("vortex");
		
		case 298:
			return joaat("manchez");
		
		case 299:
			return joaat("tornado6");
		
		case 300:
			return joaat("youga2");
		
		case 301:
			return joaat("wolfsbane");
		
		case 302:
			return joaat("faggio3");
		
		case 303:
			return joaat("faggio");
		
		case 304:
			return joaat("dune5");
		
		case 305:
			return joaat("phantom2");
		
		case 306:
			return joaat("technical2");
		
		case 307:
			return joaat("blazer5");
		
		case 308:
			return joaat("boxville5");
		
		case 309:
			return joaat("wastelander");
		
		case 310:
			return joaat("ruiner2");
		
		case 311:
			return joaat("voltic2");
		
		case 312:
			return joaat("penetrator");
		
		case 313:
			return joaat("tempesta");
		
		case 314:
			return joaat("italigtb");
		
		case 315:
			return joaat("nero");
		
		case 316:
			return joaat("diablous");
		
		case 317:
			return joaat("fcr");
		
		case 318:
			return joaat("specter");
		
		case 319:
			return joaat("gp1");
		
		case 320:
			return joaat("infernus2");
		
		case 321:
			return joaat("ruston");
		
		case 322:
			return joaat("turismo2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_75778;
		
		case 324:
			return Global_75779;
		
		case 325:
			return joaat("cheetah2");
		
		case 326:
			return joaat("torero");
		
		case 327:
			return joaat("vagner");
		
		case 328:
			return joaat("xa21");
		
		case 329:
			return joaat("apc");
		
		case 330:
			return joaat("dune3");
		
		case 331:
			return joaat("halftrack");
		
		case 332:
			return joaat("oppressor");
		
		case 333:
			return joaat("tampa3");
		
		case 334:
			return joaat("trailersmall2");
		
		case 335:
			return joaat("ardent");
		
		case 336:
			return joaat("nightshark");
		
		case 337:
			return joaat("lazer");
		
		case 338:
			return joaat("microlight");
		
		case 339:
			return joaat("mogul");
		
		case 340:
			return joaat("rogue");
		
		case 341:
			return joaat("starling");
		
		case 342:
			return joaat("seabreeze");
		
		case 343:
			return joaat("tula");
		
		case 344:
			return joaat("pyro");
		
		case 345:
			return joaat("molotok");
		
		case 346:
			return joaat("nokota");
		
		case 347:
			return joaat("bombushka");
		
		case 348:
			return joaat("hunter");
		
		case 349:
			return joaat("havok");
		
		case 350:
			return joaat("howard");
		
		case 351:
			return joaat("alphaz1");
		
		case 352:
			return joaat("cyclone");
		
		case 353:
			return joaat("visione");
		
		case 354:
			return joaat("retinue");
		
		case 355:
			return joaat("rapidgt3");
		
		case 356:
			return joaat("vigilante");
		
		case 357:
			return Global_75780;
		
		case 358:
			return joaat("deluxo");
		
		case 359:
			return joaat("stromberg");
		
		case 360:
			return joaat("riot2");
		
		case 361:
			return joaat("chernobog");
		
		case 362:
			return joaat("khanjali");
		
		case 363:
			return joaat("akula");
		
		case 364:
			return joaat("thruster");
		
		case 365:
			return joaat("barrage");
		
		case 366:
			return joaat("volatol");
		
		case 367:
			return joaat("comet4");
		
		case 368:
			return joaat("neon");
		
		case 369:
			return joaat("streiter");
		
		case 370:
			return joaat("sentinel3");
		
		case 371:
			return joaat("yosemite");
		
		case 372:
			return joaat("sc1");
		
		case 373:
			return joaat("autarch");
		
		case 374:
			return joaat("gt500");
		
		case 375:
			return joaat("hustler");
		
		case 376:
			return joaat("revolter");
		
		case 377:
			return joaat("pariah");
		
		case 378:
			return joaat("raiden");
		
		case 379:
			return joaat("savestra");
		
		case 380:
			return joaat("riata");
		
		case 381:
			return joaat("hermes");
		
		case 382:
			return joaat("comet5");
		
		case 383:
			return joaat("z190");
		
		case 384:
			return joaat("viseris");
		
		case 385:
			return joaat("kamacho");
		
		case 386:
			return joaat("gb200");
		
		case 387:
			return joaat("fagaloa");
		
		case 388:
			return joaat("ellie");
		
		case 389:
			return joaat("issi3");
		
		case 390:
			return joaat("michelli");
		
		case 391:
			return joaat("flashgt");
		
		case 392:
			return joaat("hotring");
		
		case 393:
			return joaat("tezeract");
		
		case 394:
			return joaat("tyrant");
		
		case 395:
			return joaat("dominator3");
		
		case 396:
			return joaat("taipan");
		
		case 397:
			return joaat("entity2");
		
		case 398:
			return joaat("jester3");
		
		case 399:
			return joaat("cheburek");
		
		case 400:
			return joaat("caracara");
		
		case 401:
			return joaat("seasparrow");
		
		case 402:
			return Global_75781;
		
		case 403:
			return joaat("mule4");
		
		case 404:
			return joaat("pounder2");
		
		case 405:
			return joaat("swinger");
		
		case 406:
			return joaat("menacer");
		
		case 407:
			return joaat("scramjet");
		
		case 408:
			return joaat("strikeforce");
		
		case 409:
			return joaat("oppressor2");
		
		case 410:
			return joaat("patriot2");
		
		case 411:
			return joaat("stafford");
		
		case 412:
			return joaat("freecrawler");
		
		case 415:
			return joaat("futo");
		
		case 416:
			return joaat("ruiner");
		
		case 417:
			return joaat("romero");
		
		case 418:
			return joaat("prairie");
		
		case 419:
			return joaat("baller");
		
		case 420:
			return joaat("serrano");
		
		case 421:
			return joaat("bjxl");
		
		case 422:
			return joaat("habanero");
		
		case 423:
			return joaat("fq2");
		
		case 424:
			return joaat("patriot");
		
		case 413:
			return joaat("blimp3");
		
		case 414:
			return joaat("pbus2");
		
		case 425:
			return joaat("cerberus");
		
		case 426:
			return joaat("cerberus2");
		
		case 427:
			return joaat("cerberus3");
		
		case 428:
			return joaat("brutus");
		
		case 429:
			return joaat("brutus2");
		
		case 430:
			return joaat("brutus3");
		
		case 431:
			return joaat("scarab");
		
		case 432:
			return joaat("scarab2");
		
		case 433:
			return joaat("scarab3");
		
		case 434:
			return joaat("imperator");
		
		case 435:
			return joaat("imperator2");
		
		case 436:
			return joaat("imperator3");
		
		case 437:
			return joaat("zr380");
		
		case 438:
			return joaat("zr3802");
		
		case 439:
			return joaat("zr3803");
		
		case 440:
			return joaat("impaler");
		
		case 450:
			return joaat("taxi");
		
		case 451:
			return joaat("bulldozer");
		
		case 452:
			return joaat("speedo2");
		
		case 453:
			return joaat("trash2");
		
		case 454:
			return joaat("barracks2");
		
		case 455:
			return joaat("mixer");
		
		case 456:
			return joaat("dune2");
		
		case 457:
			return joaat("tractor");
		
		case 458:
			return joaat("blista3");
		
		case 441:
			return joaat("vamos");
		
		case 442:
			return joaat("tulip");
		
		case 443:
			return joaat("deveste");
		
		case 444:
			return joaat("schlagen");
		
		case 445:
			return joaat("toros");
		
		case 446:
			return joaat("deviant");
		
		case 447:
			return joaat("clique");
		
		case 448:
			return joaat("italigto");
		
		case 449:
			return joaat("rcbandito");
		
		case 459:
			return joaat("thrax");
		
		case 460:
			return joaat("drafter");
		
		case 461:
			return joaat("locust");
		
		case 462:
			return joaat("novak");
		
		case 463:
			return joaat("zorrusso");
		
		case 464:
			return joaat("gauntlet3");
		
		case 465:
			return joaat("issi7");
		
		case 466:
			return joaat("zion3");
		
		case 467:
			return joaat("nebula");
		
		case 468:
			return joaat("hellion");
		
		case 469:
			return joaat("dynasty");
		
		case 470:
			return joaat("rrocket");
		
		case 471:
			return joaat("peyote2");
		
		case 472:
			return joaat("gauntlet4");
		
		case 473:
			return joaat("caracara2");
		
		case 474:
			return joaat("jugular");
		
		case 475:
			return joaat("s80");
		
		case 476:
			return joaat("krieger");
		
		case 477:
			return joaat("emerus");
		
		case 478:
			return joaat("neo");
		
		case 479:
			return joaat("paragon");
		
		case 480:
			return joaat("firetruk");
		
		case 481:
			return joaat("burrito2");
		
		case 482:
			return joaat("boxville");
		
		case 483:
			return joaat("stockade");
		
		case 484:
			return joaat("lguard");
		
		case 485:
			return joaat("blazer2");
		
		case 486:
			return joaat("zhaba");
		
		case 487:
			return joaat("minitank");
		
		case 488:
			return joaat("jb7002");
		
		case 489:
			return joaat("stryder");
		
		case 490:
			return joaat("vstr");
		
		case 491:
			return joaat("formula");
		
		case 492:
			return joaat("imorgon");
		
		case 493:
			return joaat("formula2");
		
		case 494:
			return joaat("furia");
		
		case 495:
			return joaat("rebla");
		
		case 496:
			return joaat("vagrant");
		
		case 497:
			return joaat("retinue2");
		
		case 498:
			return joaat("yosemite2");
		
		case 499:
			return joaat("komoda");
		
		case 500:
			return joaat("sultan2");
		
		case 501:
			return joaat("sugoi");
		
		case 502:
			return joaat("everon");
		
		case 503:
			return joaat("asbo");
		
		case 504:
			return joaat("kanjo");
		
		case 505:
			return joaat("outlaw");
		
		default:
	}
	switch (iParam0)
	{
		case 506:
			return joaat("club");
		
		case 507:
			return joaat("dukes3");
		
		case 508:
			return joaat("yosemite3");
		
		case 509:
			return joaat("penumbra2");
		
		case 510:
			return joaat("landstalker2");
		
		case 511:
			return joaat("seminole2");
		
		case 512:
			return joaat("tigon");
		
		case 513:
			return joaat("openwheel1");
		
		case 514:
			return joaat("openwheel2");
		
		case 515:
			return joaat("coquette4");
		
		case 516:
			return joaat("manana");
		
		case 517:
			return joaat("peyote");
		
		case 518:
			return func_138();
		
		case 519:
			return joaat("italirsx");
		
		case 520:
			return joaat("slamtruck");
		
		case 521:
			return joaat("brioso2");
		
		case 522:
			return joaat("weevil");
		
		case 523:
			return joaat("alkonost");
		
		case 524:
			return joaat("annihilator2");
		
		case 525:
			return joaat("dinghy5");
		
		case 526:
			return joaat("manchez2");
		
		case 527:
			return joaat("patrolboat");
		
		case 528:
			return joaat("squaddie");
		
		case 529:
			return joaat("toreador");
		
		case 530:
			return joaat("verus");
		
		case 531:
			return joaat("vetir");
		
		case 532:
			return joaat("winky");
		
		case 533:
			return joaat("longfin");
		
		case 534:
			return joaat("veto");
		
		case 535:
			return joaat("veto2");
		
		case 543:
			return joaat("zr350");
		
		case 537:
			return joaat("comet6");
		
		case 540:
			return joaat("jester4");
		
		case 542:
			return joaat("vectre");
		
		case 538:
			return joaat("cypher");
		
		case 548:
			return joaat("tailgater2");
		
		case 550:
			return joaat("euros");
		
		case 551:
			return joaat("growler");
		
		case 536:
			return joaat("calico");
		
		case 541:
			return joaat("remus");
		
		case 539:
			return joaat("dominator7");
		
		case 546:
			return joaat("futo2");
		
		case 545:
			return joaat("rt3000");
		
		case 544:
			return joaat("warrener2");
		
		case 547:
			return joaat("sultan3");
		
		case 549:
			return joaat("dominator8");
		
		case 552:
			return joaat("previon");
		
		case 554:
			return joaat("comet7");
		
		case 555:
			return joaat("shinobi");
		
		case 556:
			return joaat("reever");
		
		case 557:
			return joaat("baller7");
		
		case 558:
			return joaat("cinquemila");
		
		case 559:
			return joaat("jubilee");
		
		case 560:
			return joaat("astron");
		
		case 561:
			return joaat("deity");
		
		case 562:
			return joaat("zeno");
		
		case 563:
			return joaat("champion");
		
		case 564:
			return joaat("ignus");
		
		case 565:
			return joaat("buffalo4");
		
		case 566:
			return joaat("granger2");
		
		case 567:
			return joaat("iwagen");
		
		case 568:
			return joaat("patriot3");
		
		case 553:
			return joaat("supervolito2");
		
		case 569:
			return joaat("tenf");
		
		case 570:
			return joaat("sm722");
		
		case 571:
			return joaat("torero2");
		
		case 572:
			return joaat("corsita");
		
		case 573:
			return joaat("lm87");
		
		case 574:
			return joaat("omnisegt");
		
		case 575:
			return joaat("rhinehart");
		
		case 576:
			return joaat("postlude");
		
		case 577:
			return joaat("kanjosj");
		
		case 578:
			return joaat("vigero2");
		
		case 579:
			return joaat("ruiner4");
		
		case 580:
			return joaat("draugur");
		
		case 581:
			return joaat("greenwood");
		
		case 582:
			return joaat("conada");
		
		case 583:
			return joaat("brickade2");
		
		case 584:
			return joaat("manchez3");
		
		case 585:
			return joaat("panthere");
		
		case 586:
			return joaat("tahoma");
		
		case 587:
			return joaat("tulip2");
		
		case 588:
			return joaat("everon2");
		
		case 589:
			return joaat("journey2");
		
		case 590:
			return joaat("surfer3");
		
		case 591:
			return joaat("virtue");
		
		case 592:
			return joaat("r300");
		
		case 593:
			return joaat("issi8");
		
		case 594:
			return joaat("entity3");
		
		case 595:
			return joaat("powersurge");
		
		case 596:
			return joaat("boor");
		
		case 597:
			return joaat("broadway");
		
		case 598:
			return joaat("eudora");
		
		case 599:
			return joaat("mesa");
		
		case 600:
			return joaat("l35");
		
		case 603:
			return joaat("brigham");
		
		case 604:
			return joaat("clique2");
		
		case 601:
			return joaat("ratel");
		
		case 602:
			return joaat("monstrociti");
		
		case 605:
			return joaat("inductor");
		
		case 606:
			return joaat("inductor2");
		
		case 607:
			return joaat("streamer216");
		
		case 608:
			return joaat("conada2");
		
		case 609:
			return joaat("raiju");
		
		case 610:
			return joaat("gauntlet6");
		
		case 611:
			return joaat("stingertt");
		
		case 612:
			return joaat("buffalo5");
		
		case 613:
			return joaat("coureur");
		
		default:
	}
	return 0;
}

int func_138()//Position - 0x12A35
{
	return joaat("kosatka");
}

void func_139(int iParam0, int iParam1, bool bParam2)//Position - 0x12A42
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_23390.f_5661 > iParam0)
	{
		return;
	}
	if (Global_23390.f_5661 >= 128)
	{
		return;
	}
	if (Global_23390.f_5667 >= 256)
	{
		return;
	}
	if (Global_23390.f_6186 < Global_23390.f_6184)
	{
		return;
	}
	if (Global_23390.f_5661 != iParam0)
	{
		Global_23390.f_5661 = iParam0;
		Global_23390.f_5662 = 0;
	}
	iVar0 = Global_23390.f_5499[Global_23390.f_5662];
	if (iVar0 != 4)
	{
		while (Global_23390.f_5662 < 4 && iVar0 != 4)
		{
			Global_23390.f_5662++;
			iVar0 = Global_23390.f_5499[Global_23390.f_5662];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_23390.f_4824[Global_23390.f_5667] = iParam1;
	Global_23390.f_5667++;
	if (iParam1 != 0)
	{
		func_114(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_23390.f_5518[Global_23390.f_5662])
		{
			func_114(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_23390.f_5511[Global_23390.f_5662])
		{
			Global_23390.f_5511[Global_23390.f_5662] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_23390.f_6188[iParam0])
			{
				Global_23390.f_6188[iParam0] = fVar2;
			}
		}
	}
	MISC::SET_BIT(&(Global_23390.f_5532[iParam0]), Global_23390.f_5662);
	Global_23390.f_5662++;
	Global_23390.f_6187 = 4;
}

void func_140(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x12BBD
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23390.f_5661 > iParam0)
	{
		return;
	}
	if (Global_23390.f_5661 >= 128)
	{
		return;
	}
	if (Global_23390.f_5663 >= 256)
	{
		return;
	}
	if (Global_23390.f_6186 < Global_23390.f_6184)
	{
		return;
	}
	if (Global_23390.f_5661 != iParam0)
	{
		Global_23390.f_5661 = iParam0;
		Global_23390.f_5662 = 0;
	}
	iVar0 = Global_23390.f_5499[Global_23390.f_5662];
	if (iVar0 != 1)
	{
		while (Global_23390.f_5662 < 4 && iVar0 != 1)
		{
			Global_23390.f_5662++;
			iVar0 = Global_23390.f_5499[Global_23390.f_5662];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23390.f_1616[Global_23390.f_5663] = bParam3;
	Global_23390.f_1873[Global_23390.f_5663] = iParam4;
	Global_23390.f_2130[Global_23390.f_5663] = iParam6;
	Global_23390.f_5663++;
	if (!bParam3)
	{
		func_143(Global_23390.f_5661, 1);
	}
	else
	{
		func_143(Global_23390.f_5661, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_142(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
		if (Global_23390.f_5518[Global_23390.f_5662])
		{
			func_114(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23390.f_5511[Global_23390.f_5662])
		{
			Global_23390.f_5511[Global_23390.f_5662] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_141(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
			if (fVar4 > Global_23390.f_6188[iParam0])
			{
				Global_23390.f_6188[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23390.f_5532[iParam0]), Global_23390.f_5662);
	Global_23390.f_5662++;
	Global_23390.f_6187 = 1;
	Global_23390.f_6185 = (Global_23390.f_5663 - 1);
	Global_23390.f_6186 = 0;
	Global_23390.f_6184 = iParam2;
}

float func_141(char* sParam0)//Position - 0x12DD9
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_142(char* sParam0)//Position - 0x12DF5
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_91(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_143(int iParam0, bool bParam1)//Position - 0x12E32
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23390.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23390.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_144(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)//Position - 0x12E7E
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	char* sVar15;
	int iVar19;
	var uVar20;
	var uVar21;
	int iVar22;
	char* sVar23;
	int iVar27;
	var uVar28;
	var uVar29;
	
	uParam1->f_66 = func_137(iParam0, iParam4);
	if (uParam1->f_66 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_66 == joaat("frogger"))
	{
		uParam1->f_66 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_67 = 1;
		return;
	}
	uParam1->f_77 = 0;
	func_256(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_255(iParam0))
	{
		if (Global_77390)
		{
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	*uParam1 = 0;
	if (iParam0 == 360)
	{
		*uParam1 = 4;
	}
	uParam1->f_9[48] = 0;
	if (iParam0 == 447)
	{
		if (iParam4 == -1)
		{
			uParam1->f_9[48] = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_9[48] = 11;
		}
	}
	else if (func_254(uParam1->f_66))
	{
		uParam1->f_9[48] = 1;
	}
	uParam1->f_99 = 0;
	if (iParam0 == 251)
	{
		uParam1->f_99 = 4;
	}
	uParam1->f_9[42] = 0;
	switch (uParam1->f_66)
	{
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			uParam1->f_9[42] = 4;
			break;
		
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
			uParam1->f_9[42] = 4;
			break;
		
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
			uParam1->f_9[42] = 1;
			break;
		
		case joaat("zr380"):
		case joaat("zr3802"):
		case joaat("zr3803"):
			uParam1->f_9[42] = 1;
			break;
		
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			uParam1->f_9[42] = 4;
			break;
		
		default:
			if (func_253(uParam1->f_66))
			{
				uParam1->f_97 = 3;
				uParam1->f_99 = 111;
			}
			break;
	}
	uParam1->f_9[41] = 0;
	if (iParam0 == 449)
	{
		uParam1->f_9[41] = 1;
	}
	uParam1->f_65 = 0;
	if (iParam0 == 263)
	{
		if (Global_77390)
		{
			uParam1->f_65 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (((((iParam0 == 320 || iParam0 == 321) || iParam0 == 322) || iParam0 == 327) || iParam0 == 382) || iParam0 == 391)
	{
		uParam1->f_9[0] = 1;
	}
	if (((((iParam0 == 329 || iParam0 == 330) || iParam0 == 331) || iParam0 == 334) || iParam0 == 332) || iParam0 == 333)
	{
		uParam1->f_9[10] = 0;
	}
	if (func_252(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
	{
		uParam1->f_80 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_77389;
	}
	else if (iParam3 == 0)
	{
		iVar1 = Global_113810.f_25185.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar1 = Global_113810.f_25185.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar1 = Global_113810.f_25185.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_67 = -1;
	if (iParam0 == 200)
	{
		switch (iVar1)
		{
			case 1:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 2:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 3:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 4:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 5:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 6:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 7:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 8:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 9:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 10:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 11:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 12:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 13:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 14:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 15:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 16:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 17:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 18:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 19:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 20:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 21:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 22:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 23:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 24:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			case 25:
				func_168(func_169(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_155(func_169(iParam0, iVar1));
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar1)
		{
			case 1:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 1;
				break;
			
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 2;
				break;
			
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 3;
				break;
			
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 8;
				break;
			
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 4;
				break;
			
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 5;
				break;
			
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 7;
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 6;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 1:
				if (func_154(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_153(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else if (func_152(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
						{
							uParam1->f_5 = uVar3;
							uParam1->f_6 = uVar4;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar2;
						}
						else
						{
							uParam1->f_67 = 0;
						}
					}
					else
					{
						uParam1->f_67 = func_155(func_169(iParam0, iVar1));
					}
				}
				else if (func_255(iParam0))
				{
					if (!Global_77390)
					{
						uParam1->f_5 = 143;
						uParam1->f_6 = 34;
						uParam1->f_7 = 31;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 40;
						uParam1->f_6 = 40;
						uParam1->f_97 = 93;
						uParam1->f_67 = -1;
					}
				}
				else if (func_151(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 89;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else if (func_150(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			
			case 2:
				if (func_154(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_153(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[48] = uVar5;
						}
						else if (func_152(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
						{
							uParam1->f_5 = uVar6;
							uParam1->f_6 = uVar7;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar5;
						}
						else
						{
							uParam1->f_67 = 1;
						}
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_67 = func_155(func_169(iParam0, iVar1));
					}
				}
				else if (func_255(iParam0))
				{
					if (!Global_77390)
					{
						uParam1->f_5 = 8;
						uParam1->f_6 = 8;
						uParam1->f_7 = 5;
						uParam1->f_97 = 106;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 14;
						uParam1->f_6 = 14;
						uParam1->f_97 = 108;
						uParam1->f_67 = -1;
					}
				}
				else if (func_151(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 67;
					uParam1->f_67 = -1;
				}
				else if (func_150(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			
			case 3:
				if (func_154(iParam0))
				{
					if (func_153(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[48] = uVar8;
					}
					else if (func_152(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
					{
						uParam1->f_5 = uVar9;
						uParam1->f_6 = uVar10;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar8;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (func_255(iParam0))
				{
					if (!Global_77390)
					{
						uParam1->f_5 = 100;
						uParam1->f_6 = 100;
						uParam1->f_7 = 100;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 152;
						uParam1->f_6 = 152;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
				}
				else if (func_151(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 28;
					uParam1->f_67 = -1;
				}
				else if (func_150(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			
			case 4:
				if (func_154(iParam0))
				{
					if (func_153(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[48] = uVar11;
					}
					else if (func_152(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
					{
						uParam1->f_5 = uVar12;
						uParam1->f_6 = uVar13;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar11;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (func_255(iParam0))
				{
					if (!Global_77390)
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_7 = 106;
						uParam1->f_97 = 101;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_97 = 48;
						uParam1->f_67 = -1;
					}
				}
				else if (func_151(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (func_150(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_149(iVar14, &sVar15, &iVar19, &uVar20, &uVar21))
					{
						if (MISC::ARE_STRINGS_EQUAL(&sVar15, "ORANGE" /* GXT: Orange */) && iVar19 == 1)
						{
							uParam1->f_5 = uVar20;
							uParam1->f_6 = uVar21;
							iVar14 = -99;
						}
						iVar14++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 5:
				if (func_255(iParam0))
				{
					if (!Global_77390)
					{
						uParam1->f_5 = 49;
						uParam1->f_6 = 49;
						uParam1->f_7 = 52;
						uParam1->f_97 = 98;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 128;
						uParam1->f_6 = 128;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
				}
				else if ((iParam0 == 178 || iParam0 == 179) || iParam0 == 192)
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
				}
				else if (func_151(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 41;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 55;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (func_150(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_149(iVar22, &sVar23, &iVar27, &uVar28, &uVar29))
					{
						if (MISC::ARE_STRINGS_EQUAL(&sVar23, "LIME_GREEN" /* GXT: Lime Green */) && iVar27 == 1)
						{
							uParam1->f_5 = uVar28;
							uParam1->f_6 = uVar29;
							iVar22 = -99;
						}
						iVar22++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 6:
				if (func_255(iParam0))
				{
					if (!Global_77390)
					{
						uParam1->f_5 = 141;
						uParam1->f_6 = 141;
						uParam1->f_7 = 73;
						uParam1->f_97 = 5;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 84;
						uParam1->f_6 = 84;
						uParam1->f_97 = 24;
						uParam1->f_67 = -1;
					}
				}
				else if (func_151(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 63;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else if (func_150(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 68;
					uParam1->f_67 = -1;
				}
				break;
			
			case 7:
				if (uParam1->f_66 == joaat("kuruma2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else if (func_255(iParam0))
				{
					if (!Global_77390)
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 0;
						uParam1->f_7 = 10;
						uParam1->f_97 = 1;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 12;
						uParam1->f_6 = 12;
						uParam1->f_97 = 0;
						uParam1->f_67 = -1;
					}
				}
				else if (func_151(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 5;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 333)
				{
					uParam1->f_5 = 154;
					uParam1->f_6 = 3;
					uParam1->f_97 = 0;
					uParam1->f_67 = -1;
				}
				else if (func_150(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			
			case 8:
				if (func_255(iParam0))
				{
					if (!Global_77390)
					{
						uParam1->f_5 = 112;
						uParam1->f_6 = 112;
						uParam1->f_7 = 0;
						uParam1->f_97 = 7;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 131;
						uParam1->f_6 = 131;
						uParam1->f_97 = 78;
						uParam1->f_67 = -1;
					}
				}
				else if (func_151(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 27;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (func_150(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				break;
			
			default:
				break;
			}
	}
	if (iVar1 == 0)
	{
		switch (iParam0)
		{
			case 32:
				uParam1->f_5 = 111;
				uParam1->f_6 = 65;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_67 = -1;
				break;
			
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_67 = -1;
				break;
			
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_67 = -1;
				break;
			
			case 210:
				if (iParam5 != 29)
				{
					uParam1->f_5 = 28;
					uParam1->f_6 = 0;
					uParam1->f_7 = 14;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 66;
					uParam1->f_7 = 63;
					uParam1->f_8 = 156;
					uParam1->f_97 = 1;
					uParam1->f_99 = 132;
				}
				break;
			
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_67 = -1;
				break;
			
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 205:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 12;
				uParam1->f_67 = -1;
				break;
			
			case 227:
				uParam1->f_5 = 0;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 226:
				uParam1->f_5 = 36;
				uParam1->f_6 = 36;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 230:
				uParam1->f_5 = 41;
				uParam1->f_6 = 41;
				uParam1->f_7 = 156;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 338:
				uParam1->f_5 = 64;
				uParam1->f_6 = 5;
				uParam1->f_7 = 111;
				uParam1->f_8 = 5;
				uParam1->f_97 = 0;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 339:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 340:
				uParam1->f_5 = 24;
				uParam1->f_6 = 29;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 341:
				uParam1->f_5 = 3;
				uParam1->f_6 = 4;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 342:
				uParam1->f_5 = 111;
				uParam1->f_6 = 89;
				uParam1->f_7 = 111;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 343:
				uParam1->f_5 = 14;
				uParam1->f_6 = 121;
				uParam1->f_7 = 121;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 344:
				uParam1->f_5 = 50;
				uParam1->f_6 = 91;
				uParam1->f_7 = 0;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 345:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 346:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 347:
				uParam1->f_5 = 14;
				uParam1->f_6 = 5;
				uParam1->f_67 = -1;
				break;
			
			case 348:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 349:
				uParam1->f_5 = 27;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 350:
				uParam1->f_5 = 119;
				uParam1->f_6 = 73;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 351:
				uParam1->f_5 = 67;
				uParam1->f_6 = 1;
				uParam1->f_7 = 5;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 356:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 363:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 361:
				uParam1->f_5 = 154;
				uParam1->f_6 = 13;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 358:
				uParam1->f_5 = 117;
				uParam1->f_6 = 118;
				uParam1->f_7 = 18;
				uParam1->f_8 = 0;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 362:
				uParam1->f_5 = 13;
				uParam1->f_6 = 8;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 360:
				uParam1->f_5 = 9;
				uParam1->f_6 = 9;
				uParam1->f_7 = 7;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 359:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 364:
				uParam1->f_5 = 8;
				uParam1->f_6 = 14;
				uParam1->f_7 = 5;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 425:
				uParam1->f_5 = 153;
				uParam1->f_6 = 159;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 428:
				uParam1->f_5 = 12;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 431:
				uParam1->f_5 = 153;
				uParam1->f_6 = 154;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 434:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 437:
				uParam1->f_5 = 13;
				uParam1->f_6 = 131;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 426:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 429:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 432:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 435:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 438:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 427:
				uParam1->f_5 = 131;
				uParam1->f_6 = 135;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 430:
				uParam1->f_5 = 131;
				uParam1->f_6 = 39;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 433:
				uParam1->f_5 = 87;
				uParam1->f_6 = 138;
				uParam1->f_7 = 7;
				uParam1->f_8 = 135;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 436:
				uParam1->f_5 = 12;
				uParam1->f_6 = 55;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 439:
				uParam1->f_5 = 131;
				uParam1->f_6 = 55;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 211:
				uParam1->f_5 = 30;
				uParam1->f_6 = 30;
				uParam1->f_7 = 30;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 145:
				uParam1->f_5 = 68;
				uParam1->f_6 = 2;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 122:
				uParam1->f_5 = 111;
				uParam1->f_6 = 64;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 440:
				uParam1->f_5 = 6;
				uParam1->f_6 = 120;
				uParam1->f_7 = 7;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 389:
				uParam1->f_5 = 29;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 5;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			default:
				break;
			}
	}
	if (iParam0 == 161)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 231)
	{
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (iParam0 == 290)
	{
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291)
	{
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 304)
	{
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 305)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 306)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 307)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 308)
	{
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 309)
	{
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 310)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 311)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 329)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 330)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 331)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 0;
		uParam1->f_8 = 154;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 332)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 120;
		uParam1->f_7 = 35;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 334)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 323)
	{
		if (iParam4 == 0)
		{
			uParam1->f_66 = joaat("phantom3");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_66 = joaat("hauler2");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
	}
	if (func_148(uParam1->f_66))
	{
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 357)
	{
		uParam1->f_66 = func_43(0);
		uParam1->f_5 = 14;
		uParam1->f_6 = 131;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 365)
	{
		uParam1->f_5 = 128;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 364)
	{
		uParam1->f_5 = 32;
		uParam1->f_6 = 112;
		uParam1->f_7 = 25;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 366)
	{
		uParam1->f_5 = 65;
		uParam1->f_6 = 65;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 387)
	{
		uParam1->f_6 = 120;
	}
	if (iParam0 == 400)
	{
		uParam1->f_5 = 64;
		uParam1->f_6 = 2;
		uParam1->f_7 = 68;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 401)
	{
		uParam1->f_5 = 5;
		uParam1->f_6 = 106;
		uParam1->f_7 = 5;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 402)
	{
		uParam1->f_66 = func_147();
		uParam1->f_5 = 9;
		uParam1->f_7 = 7;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 409)
	{
		uParam1->f_5 = 141;
		uParam1->f_7 = 73;
		uParam1->f_8 = 112;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_69 = 6;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 408)
	{
		uParam1->f_5 = 119;
		uParam1->f_6 = 119;
		uParam1->f_7 = 1;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 407)
	{
		uParam1->f_5 = 111;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 406)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 12;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 404)
	{
		uParam1->f_5 = 112;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 403)
	{
		uParam1->f_5 = 8;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 487)
	{
		uParam1->f_5 = 102;
		uParam1->f_6 = 144;
		uParam1->f_7 = 105;
		uParam1->f_8 = 144;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	if (iParam0 == 485)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	if (iParam0 == 486)
	{
		uParam1->f_5 = 102;
		uParam1->f_6 = 102;
		uParam1->f_7 = 105;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	switch (iParam0)
	{
		case 518:
			uParam1->f_66 = func_138();
			uParam1->f_5 = 0;
			uParam1->f_6 = 15;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			break;
		
		case 529:
			uParam1->f_5 = 27;
			uParam1->f_6 = 27;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 532:
			uParam1->f_5 = 155;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 155;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 531:
			uParam1->f_5 = 155;
			uParam1->f_6 = 13;
			uParam1->f_7 = 6;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 528:
			uParam1->f_5 = 154;
			uParam1->f_6 = 154;
			uParam1->f_7 = 0;
			uParam1->f_8 = 154;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 526:
			uParam1->f_5 = 151;
			uParam1->f_6 = 154;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 530:
			uParam1->f_5 = 154;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 154;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 527:
			uParam1->f_5 = 152;
			uParam1->f_6 = 46;
			uParam1->f_7 = 52;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 525:
			uParam1->f_5 = 152;
			uParam1->f_6 = 46;
			uParam1->f_7 = 52;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			MISC::SET_BIT(&(uParam1->f_77), 3);
			break;
		
		case 523:
			uParam1->f_5 = 131;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_9[9] = 4;
			break;
		
		case 524:
			uParam1->f_5 = 12;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 520:
			uParam1->f_9[24] = 3;
			break;
		
		case 583:
			func_146(uParam1);
			break;
		
		case 584:
			func_145(uParam1);
			break;
		
		case 608:
			uParam1->f_5 = 153;
			uParam1->f_6 = 13;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 609:
			uParam1->f_5 = 131;
			uParam1->f_6 = 131;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 607:
			uParam1->f_5 = 131;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
	}
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

void func_145(var uParam0)//Position - 0x1587E
{
	uParam0->f_5 = 3;
	uParam0->f_6 = 6;
	uParam0->f_7 = 2;
	uParam0->f_8 = 0;
	uParam0->f_97 = 1;
	uParam0->f_99 = 132;
	uParam0->f_98 = 0;
	uParam0->f_69 = 6;
	uParam0->f_62 = 255;
	uParam0->f_63 = 255;
	uParam0->f_64 = 255;
	uParam0->f_9[48] = 2;
	MISC::SET_BIT(&(uParam0->f_77), 9);
}

void func_146(var uParam0)//Position - 0x158D4
{
	uParam0->f_5 = 9;
	uParam0->f_6 = 9;
	uParam0->f_7 = 1;
	uParam0->f_8 = 0;
	uParam0->f_97 = 1;
	uParam0->f_99 = 132;
	uParam0->f_98 = 0;
	uParam0->f_62 = 255;
	uParam0->f_63 = 255;
	uParam0->f_64 = 255;
	uParam0->f_74 = 255;
	uParam0->f_76 = 255;
	uParam0->f_9[42] = 1;
	uParam0->f_9[5] = 1;
	uParam0->f_9[48] = 0;
	MISC::SET_BIT(&(uParam0->f_77), 0);
	MISC::SET_BIT(&(uParam0->f_77), 9);
}

int func_147()//Position - 0x1594D
{
	return joaat("terbyte");
}

int func_148(int iParam0)//Position - 0x1595A
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("conada"):
		case joaat("conada2"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("streamer216"):
		case joaat("raiju"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_149(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x15ABE
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL" /* GXT: Brushed Black Steel */, 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE" /* GXT: Carbon Black */, 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE" /* GXT: Schafter Purple */, 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK" /* GXT: Hot Pink */, 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED" /* GXT: Formula Red */, 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE" /* GXT: Ultra Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN" /* GXT: Racing Green */, 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW" /* GXT: Race Yellow */, 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD" /* GXT: Gold */, 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER" /* GXT: Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME" /* GXT: Chrome */, 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE" /* GXT: Graphite */, 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK" /* GXT: Anthracite Black */, 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL" /* GXT: Black Steel */, 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER" /* GXT: Dark Steel */, 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER" /* GXT: Bluish Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL" /* GXT: Rolled Steel */, 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER" /* GXT: Shadow Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER" /* GXT: Stone Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER" /* GXT: Midnight Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL" /* GXT: Cast Iron Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED" /* GXT: Torino Red */, 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED" /* GXT: Lava Red */, 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED" /* GXT: Blaze Red */, 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED" /* GXT: Grace Red */, 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED" /* GXT: Garnet Red */, 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED" /* GXT: Sunset Red */, 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED" /* GXT: Cabernet Red */, 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED" /* GXT: Wine Red */, 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED" /* GXT: Candy Red */, 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK" /* GXT: Pfister Pink */, 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK" /* GXT: Salmon Pink */, 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE" /* GXT: Sunrise Orange */, 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE" /* GXT: Bright Orange */, 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE" /* GXT: Bronze */, 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW" /* GXT: Race Yellow */, 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW" /* GXT: Dew Yellow */, 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN" /* GXT: Dark Green */, 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN" /* GXT: Racing Green */, 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN" /* GXT: Sea Green */, 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN" /* GXT: Olive Green */, 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN" /* GXT: Bright Green */, 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN" /* GXT: Gasoline Green */, 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE" /* GXT: Galaxy Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE" /* GXT: Saxon Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE" /* GXT: Mariner Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE" /* GXT: Harbor Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE" /* GXT: Diamond Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE" /* GXT: Surf Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE" /* GXT: Nautical Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE" /* GXT: Racing Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE" /* GXT: Ultra Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE" /* GXT: Light Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN" /* GXT: Bison Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN" /* GXT: Creek Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN" /* GXT: Feltzer Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN" /* GXT: Maple Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN" /* GXT: Sienna Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN" /* GXT: Saddle Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN" /* GXT: Moss Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN" /* GXT: Straw Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN" /* GXT: Sandy Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN" /* GXT: Bleached Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE" /* GXT: Spinnaker Purple */, 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE" /* GXT: Bright Purple */, 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM" /* GXT: Cream */, 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE" /* GXT: Frost White */, 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE" /* GXT: Carbon Black */, 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE" /* GXT: Graphite */, 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK" /* GXT: Anthracite Black */, 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL" /* GXT: Black Steel */, 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER" /* GXT: Dark Steel */, 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER" /* GXT: Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER" /* GXT: Bluish Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL" /* GXT: Rolled Steel */, 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER" /* GXT: Shadow Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER" /* GXT: Stone Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER" /* GXT: Midnight Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL" /* GXT: Cast Iron Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED" /* GXT: Torino Red */, 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED" /* GXT: Formula Red */, 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED" /* GXT: Lava Red */, 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED" /* GXT: Blaze Red */, 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED" /* GXT: Grace Red */, 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED" /* GXT: Garnet Red */, 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED" /* GXT: Sunset Red */, 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED" /* GXT: Cabernet Red */, 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED" /* GXT: Wine Red */, 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED" /* GXT: Candy Red */, 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK" /* GXT: Hot Pink */, 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK" /* GXT: Pfister Pink */, 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK" /* GXT: Salmon Pink */, 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE" /* GXT: Sunrise Orange */, 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE" /* GXT: Bright Orange */, 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD" /* GXT: Gold */, 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE" /* GXT: Bronze */, 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW" /* GXT: Dew Yellow */, 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN" /* GXT: Dark Green */, 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN" /* GXT: Sea Green */, 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN" /* GXT: Olive Green */, 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN" /* GXT: Bright Green */, 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN" /* GXT: Gasoline Green */, 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE" /* GXT: Galaxy Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE" /* GXT: Saxon Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE" /* GXT: Mariner Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE" /* GXT: Harbor Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE" /* GXT: Diamond Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE" /* GXT: Surf Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE" /* GXT: Nautical Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE" /* GXT: Racing Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE" /* GXT: Light Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN" /* GXT: Bison Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN" /* GXT: Creek Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN" /* GXT: Feltzer Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN" /* GXT: Maple Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN" /* GXT: Sienna Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN" /* GXT: Saddle Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN" /* GXT: Moss Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN" /* GXT: Straw Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN" /* GXT: Sandy Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN" /* GXT: Bleached Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE" /* GXT: Schafter Purple */, 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE" /* GXT: Spinnaker Purple */, 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE" /* GXT: Bright Purple */, 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM" /* GXT: Cream */, 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE" /* GXT: Frost White */, 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY" /* GXT: Gray */, 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY" /* GXT: Light Gray */, 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple" /* GXT: Schafter Purple */, 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED" /* GXT: Dark Red */, 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN" /* GXT: Green */, 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR" /* GXT: Forest Green */, 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL" /* GXT: Foliage Green */, 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD" /* GXT: Olive Drab */, 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT" /* GXT: Dark Earth */, 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT" /* GXT: Desert Tan */, 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL" /* GXT: Brushed Steel */, 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM" /* GXT: Brushed Aluminum */, 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P" /* GXT: Pure Gold */, 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S" /* GXT: Brushed Gold */, 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_150(int iParam0)//Position - 0x16FB0
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 398 || iParam0 == 386) || iParam0 == 391) || iParam0 == 394) || iParam0 == 393) || iParam0 == 397) || iParam0 == 396) || iParam0 == 390) || iParam0 == 395) || iParam0 == 389) || iParam0 == 388) || iParam0 == 392) || iParam0 == 399) || iParam0 == 410) || iParam0 == 411) || iParam0 == 412) || iParam0 == 405) || iParam0 == 415) || iParam0 == 417) || iParam0 == 418) || iParam0 == 424) || iParam0 == 420) || iParam0 == 421) || iParam0 == 423) || iParam0 == 422) || iParam0 == 449) || iParam0 == 442) || iParam0 == 441) || iParam0 == 444) || iParam0 == 446) || iParam0 == 448) || iParam0 == 447) || iParam0 == 445) || iParam0 == 443) || iParam0 == 459) || iParam0 == 460) || iParam0 == 461) || iParam0 == 462) || iParam0 == 463) || iParam0 == 464) || iParam0 == 465) || iParam0 == 466) || iParam0 == 467) || iParam0 == 468) || iParam0 == 469) || iParam0 == 470) || iParam0 == 471) || iParam0 == 472) || iParam0 == 473) || iParam0 == 474) || iParam0 == 475) || iParam0 == 476) || iParam0 == 477) || iParam0 == 478) || iParam0 == 479) || iParam0 == 489) || iParam0 == 490) || iParam0 == 491) || iParam0 == 492) || iParam0 == 493) || iParam0 == 494) || iParam0 == 495) || iParam0 == 496) || iParam0 == 497) || iParam0 == 498) || iParam0 == 500) || iParam0 == 501) || iParam0 == 502) || iParam0 == 503) || iParam0 == 504) || iParam0 == 505) || iParam0 == 519) || iParam0 == 520) || iParam0 == 521) || iParam0 == 522) || iParam0 == 534) || iParam0 == 535)
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0)//Position - 0x17356
{
	if (((((iParam0 == 286 || iParam0 == 289) || iParam0 == 290) || iParam0 == 301) || iParam0 == 287) || iParam0 == 288)
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x173A8
{
	if (iParam0 == 275)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 270)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 274)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 278)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 267)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 280)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 268)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				func_168(func_169(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				func_168(func_169(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 281)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 277)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 271)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 272)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 38;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 88;
				*uParam3 = 88;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 269)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 279)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	return 0;
}

int func_153(int iParam0, int iParam1, var uParam2)//Position - 0x177D6
{
	if (iParam0 == 231)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 4;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
			
			case 3:
				*uParam2 = 2;
				return 1;
				break;
			
			case 4:
				*uParam2 = 3;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 232)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 2;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 2;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	*uParam2 = -1;
	return 0;
}

int func_154(int iParam0)//Position - 0x178B4
{
	if (((((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279) || iParam0 == 413) || iParam0 == 414)
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0)//Position - 0x179D6
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		case 90:
			return 0;
		
		case 91:
			return 1;
		
		case 97:
			return 0;
		
		case 98:
			return 1;
		
		case 99:
			return 2;
		
		case 100:
			return 3;
		
		case 101:
			return 4;
		
		case 102:
			return 5;
		
		case 103:
			return 6;
		
		case 104:
			if (func_167(PLAYER::PLAYER_ID(), 0))
			{
				return 14;
			}
			else if (func_167(PLAYER::PLAYER_ID(), 1))
			{
				return 13;
			}
			else if (func_167(PLAYER::PLAYER_ID(), 2))
			{
				return 8;
			}
			else if (func_167(PLAYER::PLAYER_ID(), 3))
			{
				return 12;
			}
			else if (func_167(PLAYER::PLAYER_ID(), 4))
			{
				return 11;
			}
			else if (func_167(PLAYER::PLAYER_ID(), 5))
			{
				return 10;
			}
			else if (func_167(PLAYER::PLAYER_ID(), 6))
			{
				return 9;
			}
			else if (func_167(PLAYER::PLAYER_ID(), 7))
			{
				return 7;
			}
			else if (func_167(PLAYER::PLAYER_ID(), 8))
			{
				return 15;
			}
			if (func_156(PLAYER::PLAYER_ID()))
			{
			}
			return -1;
			break;
		
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		case 109:
			return 4;
		
		case 110:
			return 5;
		
		case 111:
			return 6;
		
		case 112:
			return 7;
		
		case 113:
			return 8;
		
		case 114:
			return 9;
	}
	return -1;
}

int func_156(int iParam0)//Position - 0x17CA5
{
	if ((((((((func_166(iParam0) || func_165(iParam0)) || func_164(iParam0)) || func_163(iParam0)) || func_162(iParam0)) || func_161(iParam0)) || func_160(iParam0)) || func_159(iParam0)) || func_157(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)//Position - 0x17D1B
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_164785.f_2 == 8;
	}
	if (iParam0 == func_158())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_354.f_2, 0);
}

int func_158()//Position - 0x17D5E
{
	return -1;
}

int func_159(int iParam0)//Position - 0x17D67
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_164785.f_2 == 7;
	}
	if (iParam0 == func_158())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 31);
}

int func_160(int iParam0)//Position - 0x17DAA
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_164785.f_2 == 6;
	}
	if (iParam0 == func_158())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 30);
}

int func_161(int iParam0)//Position - 0x17DED
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_164785.f_2 == 5;
	}
	if (iParam0 == func_158())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 29);
}

int func_162(int iParam0)//Position - 0x17E30
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_164785.f_2 == 4;
	}
	if (iParam0 == func_158())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 28);
}

int func_163(int iParam0)//Position - 0x17E73
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_164785.f_2 == 3;
	}
	if (iParam0 == func_158())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 27);
}

int func_164(int iParam0)//Position - 0x17EB6
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_164785.f_2 == 2;
	}
	if (iParam0 == func_158())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 26);
}

int func_165(int iParam0)//Position - 0x17EF9
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_164785.f_2 == 1;
	}
	if (iParam0 == func_158())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 25);
}

int func_166(int iParam0)//Position - 0x17F3C
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_164785.f_2 == 0;
	}
	if (iParam0 == func_158())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_354.f_1, 24);
}

int func_167(int iParam0, int iParam1)//Position - 0x17F7F
{
	switch (iParam1)
	{
		case 4:
			return func_166(iParam0);
		
		case 3:
			return func_165(iParam0);
		
		case 6:
			return func_164(iParam0);
		
		case 1:
			return func_163(iParam0);
		
		case 0:
			return func_162(iParam0);
		
		case 7:
			return func_161(iParam0);
		
		case 2:
			return func_160(iParam0);
		
		case 5:
			return func_159(iParam0);
		
		case 8:
			return func_157(iParam0);
		
		default:
	}
	return 0;
}

int func_168(int iParam0, var uParam1, var uParam2)//Position - 0x18016
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
		
		case 115:
			*uParam1 = 40;
			*uParam2 = 12;
			return 1;
		
		case 116:
			*uParam1 = 58;
			*uParam2 = 1;
			return 1;
		
		case 118:
			*uParam1 = 111;
			return 1;
		
		case 119:
			*uParam1 = 120;
			return 1;
		
		case 120:
			*uParam1 = 1;
			*uParam2 = 1;
			return 1;
		
		default:
	}
	return 0;
}

int func_169(int iParam0, int iParam1)//Position - 0x182B0
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_170(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_170(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			if (iParam1 == 2)
			{
				return 132;
			}
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		case 480:
			return 123;
		
		case 482:
			return 124;
		
		case 483:
			return 125;
		
		case 518:
			return 126;
			break;
		
		case 531:
			return 127;
			break;
		
		case 533:
			return 128;
			break;
		
		case 527:
			return 129;
			break;
		
		case 525:
			return 130;
		
		case 583:
			return 131;
	}
	return -1;
}

int func_170(int iParam0, int iParam1, int iParam2)//Position - 0x188C9
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	iVar0 = func_137(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_46() && func_251())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 207 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 208 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 209 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (func_46())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_255(iParam0))
	{
		if (Global_77390)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_250(iVar0);
	if (iVar1 != -1)
	{
		if (func_248(func_249(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_247(iParam0))
	{
		if (func_46())
		{
			if ((iParam0 == 205 && Global_262145.f_20403 /* Tunable: ENABLE_RETURNING_CONTENT_DOD */) || (iParam0 != 205 && Global_262145.f_20402 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_246(iParam0))
	{
		if (func_237(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_236(iVar0);
	if (iVar2 != -1)
	{
		if (func_234(func_235(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_233(iVar0);
	if (iVar3 > 0)
	{
		if (func_231(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_230(iVar0);
	if (iVar4 != -1)
	{
		if (func_228(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_227(iVar0);
	if (iVar5 != -1)
	{
		if (func_224(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_223(iVar0);
	if (iVar6 != -1)
	{
		if (func_219(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == joaat("firetruk") || iVar0 == joaat("boxville")) || iVar0 == joaat("stockade"))
	{
		if (func_218(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar7 = func_217(iVar0);
	if (iVar7 != -1)
	{
		if (func_218(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar8 = func_216(iVar0);
	if (iVar8 != -1)
	{
		if (func_206(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar9 = func_205(iVar0);
	if (iVar9 != -1)
	{
		if (func_202(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar10 = func_201(iVar0);
	if (iVar10 != -1)
	{
		if (func_193(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar11 = func_192(iVar0);
	if (iVar11 != -1)
	{
		if (func_189(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar12 = func_188(iVar0);
	if (iVar12 != -1 || iVar0 == joaat("brickade2"))
	{
		if (func_180(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar13 = func_179(iVar0);
	if (iVar13 != -1)
	{
		if (func_171(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_171(int iParam0)//Position - 0x18C66
{
	if (!Global_78689)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("raiju"):
			return func_173(2, 1, 1);
		
		case joaat("squaddie"):
			return func_172(41656, -1);
		
		case joaat("manchez2"):
			return func_172(41671, -1);
		
		default:
	}
	return 0;
}

bool func_172(int iParam0, int iParam1)//Position - 0x18CB6
{
	if (iParam1 == -1)
	{
		iParam1 = func_98();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_173(int iParam0, bool bParam1, bool bParam2)//Position - 0x18CD2
{
	if (bParam2)
	{
		return BitTest(func_176(11948, -1), func_175(iParam0, bParam1));
	}
	return func_174(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

int func_174(int iParam0, int iParam1, bool bParam2)//Position - 0x18CFF
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1982321[iParam0 /*71*/].f_60.f_1, func_175(iParam1, bParam2));
	}
	return 0;
}

int func_175(int iParam0, bool bParam1)//Position - 0x18D26
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			
			case 1:
				return 1;
			
			case 2:
				return 2;
			
			case 3:
				return 3;
			
			case 4:
				return 4;
			
			case 5:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 6;
			
			case 1:
				return 7;
			
			case 2:
				return 8;
			
			case 3:
				return 9;
			
			case 4:
				return 10;
			
			case 5:
				return 11;
			}
		
		default:
	}
	return -1;
}

int func_176(int iParam0, int iParam1)//Position - 0x18DC1
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_177(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_177(int iParam0, var uParam1)//Position - 0x18DF0
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_178(uParam1));
}

int func_178(int iParam0)//Position - 0x18E05
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_98();
		if (iVar1 > -1)
		{
			Global_2805862 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2805862 = 1;
		}
	}
	return iVar0;
}

int func_179(int iParam0)//Position - 0x18E39
{
	switch (iParam0)
	{
		case joaat("raiju"):
			return 0;
		
		case joaat("squaddie"):
			return 1;
		
		case joaat("manchez2"):
			return 2;
		
		default:
	}
	return -1;
}

int func_180(int iParam0)//Position - 0x18E67
{
	if (!Global_78689)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("journey2"):
			return func_185(0, 0);
		
		case joaat("surfer3"):
			return func_185(4, 0);
		
		case joaat("virtue"):
			return func_185(10, 0);
		
		case joaat("hotring"):
			return func_176(11843, -1) >= 10;
		
		case joaat("everon2"):
			return func_176(11843, -1) >= 20;
		
		case joaat("taxi"):
			return func_183(158, -1);
		
		case joaat("brickade2"):
			return func_181(0);
		
		default:
	}
	return 0;
}

int func_181(bool bParam0)//Position - 0x18EF7
{
	if (bParam0)
	{
		return BitTest(func_176(10870, -1), 0);
	}
	return func_182(PLAYER::PLAYER_ID());
}

int func_182(int iParam0)//Position - 0x18F19
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1982321[iParam0 /*71*/].f_57.f_2, 0);
	}
	return 0;
}

int func_183(int iParam0, int iParam1)//Position - 0x18F39
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_184(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_184(int iParam0, int iParam1)//Position - 0x18F5D
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, func_178(iParam1));
}

int func_185(int iParam0, bool bParam1)//Position - 0x18F73
{
	if (bParam1)
	{
		return BitTest(func_176(10871, -1), func_187(iParam0, 1));
	}
	return func_186(PLAYER::PLAYER_ID(), iParam0);
}

int func_186(int iParam0, int iParam1)//Position - 0x18F9D
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1982321[iParam0 /*71*/].f_57, func_187(iParam1, 1));
	}
	return 0;
}

int func_187(int iParam0, bool bParam1)//Position - 0x18FC1
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			
			case 1:
				return 1;
			
			case 2:
				return 2;
			
			case 3:
				return 3;
			
			case 4:
				return 4;
			
			case 5:
				return 5;
			
			case 6:
				return 6;
			
			case 7:
				return 7;
			
			case 8:
				return 8;
			
			case 9:
				return 9;
			
			case 10:
				return 10;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 11;
			
			case 1:
				return 12;
			
			case 2:
				return 13;
			
			case 3:
				return 14;
			
			case 4:
				return 15;
			
			case 5:
				return 16;
			
			case 6:
				return 17;
			
			case 7:
				return 18;
			
			case 8:
				return 19;
			
			case 9:
				return 20;
			
			case 10:
				return 21;
			}
		
		default:
	}
	return -1;
}

int func_188(int iParam0)//Position - 0x190CA
{
	switch (iParam0)
	{
		case joaat("journey2"):
			return 0;
		
		case joaat("surfer3"):
			return 1;
		
		case joaat("virtue"):
			return 2;
		
		case joaat("hotring"):
			return 3;
		
		case joaat("everon2"):
			return 4;
		
		case joaat("taxi"):
			return 5;
		
		case joaat("brickade2"):
			return 6;
		
		default:
	}
	return -1;
}

int func_189(int iParam0)//Position - 0x19120
{
	if (!Global_78689)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("kanjosj"):
			return func_172(34373, -1);
		
		case joaat("postlude"):
			return func_172(34374, -1);
		
		case joaat("greenwood"):
			return func_190(0);
		
		case joaat("draugur"):
			return (func_172(32366, -1) || func_173(0, 1, 1));
		
		case joaat("conada"):
			return func_190(5);
		
		default:
	}
	return 0;
}

var func_190(int iParam0)//Position - 0x1919A
{
	return BitTest(func_176(10393, -1), func_191(iParam0, 1));
}

int func_191(int iParam0, bool bParam1)//Position - 0x191B2
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			
			case 1:
				return 1;
			
			case 2:
				return 2;
			
			case 3:
				return 3;
			
			case 4:
				return 4;
			
			case 5:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 7;
			
			case 1:
				return 8;
			
			case 2:
				return 9;
			
			case 3:
				return 10;
			
			case 4:
				return 11;
			
			case 5:
				return 12;
			}
		
		default:
	}
	return -1;
}

int func_192(int iParam0)//Position - 0x1924E
{
	switch (iParam0)
	{
		case joaat("kanjosj"):
			return 0;
		
		case joaat("postlude"):
			return 1;
		
		case joaat("greenwood"):
			return 2;
		
		case joaat("draugur"):
			return 3;
		
		case joaat("conada"):
			return 4;
		
		default:
	}
	return -1;
}

int func_193(int iParam0)//Position - 0x19290
{
	if (!Global_78689)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("buffalo4"):
			return func_200();
		
		case joaat("granger2"):
			return func_198(1) >= 5;
		
		case joaat("deity"):
			return func_198(1) >= 10;
		
		case joaat("patriot3"):
			return func_198(1) >= 15;
		
		case joaat("jubilee"):
			return func_198(1) >= 20;
		
		case joaat("champion"):
			return (func_196(11, 1) || func_194(1));
		
		case joaat("baller7"):
			return func_194(1);
		
		default:
	}
	return 0;
}

int func_194(bool bParam0)//Position - 0x19325
{
	if (bParam0)
	{
		return BitTest(func_176(9905, -1), 2);
	}
	return func_195(PLAYER::PLAYER_ID());
}

int func_195(int iParam0)//Position - 0x19347
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1982321[iParam0 /*71*/].f_27, 2);
	}
	return 0;
}

int func_196(int iParam0, bool bParam1)//Position - 0x19365
{
	if (bParam1)
	{
		return BitTest(func_176(9907, -1), iParam0);
	}
	return func_197(PLAYER::PLAYER_ID(), iParam0);
}

int func_197(int iParam0, var uParam1)//Position - 0x1938A
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1982321[iParam0 /*71*/].f_27.f_3, uParam1);
	}
	return 0;
}

int func_198(bool bParam0)//Position - 0x193AB
{
	if (bParam0)
	{
		return func_176(9910, -1);
	}
	return func_199(PLAYER::PLAYER_ID());
}

int func_199(int iParam0)//Position - 0x193CB
{
	if (iParam0 != -1)
	{
		return Global_1982321[iParam0 /*71*/].f_27.f_8;
	}
	return 0;
}

bool func_200()//Position - 0x193E9
{
	return func_176(9903, func_178(-1)) != 0;
}

int func_201(int iParam0)//Position - 0x193FF
{
	switch (iParam0)
	{
		case joaat("baller7"):
			return 0;
		
		case joaat("buffalo4"):
			return 1;
		
		case joaat("champion"):
			return 2;
		
		case joaat("deity"):
			return 3;
		
		case joaat("granger2"):
			return 4;
		
		case joaat("jubilee"):
			return 5;
		
		case joaat("mule5"):
			return 6;
		
		case joaat("patriot3"):
			return 7;
		
		case joaat("youga4"):
			return 8;
		
		default:
	}
	return -1;
}

int func_202(int iParam0)//Position - 0x1946A
{
	if (!Global_78689)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("euros"):
			return func_204(PLAYER::PLAYER_ID());
		
		case joaat("tailgater2"):
			return func_203(PLAYER::PLAYER_ID());
		
		case joaat("zr350"):
			return func_172(31810, -1);
		
		case joaat("comet6"):
			return func_172(31811, -1);
		
		case joaat("jester4"):
			return func_172(31812, -1);
		
		case joaat("vectre"):
			return func_172(31813, -1);
		
		case joaat("cypher"):
			return func_172(31814, -1);
		
		case joaat("growler"):
			return func_172(31815, -1);
		
		case joaat("calico"):
			return func_172(31816, -1);
		
		case joaat("remus"):
			return func_172(31817, -1);
		
		case joaat("dominator7"):
			return func_172(31818, -1);
		
		case joaat("futo2"):
			return func_172(31819, -1);
		
		case joaat("rt3000"):
			return func_172(31820, -1);
		
		case joaat("warrener2"):
			return func_172(31821, -1);
		
		case joaat("sultan3"):
			return func_172(31822, -1);
		
		case joaat("dominator8"):
			return func_172(31823, -1);
		
		case joaat("previon"):
			return func_172(31824, -1);
		
		case joaat("kanjosj"):
			return func_172(34373, -1);
		
		case joaat("postlude"):
			return func_172(34374, -1);
		
		default:
	}
	return 0;
}

int func_203(int iParam0)//Position - 0x195CB
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return BitTest(func_176(9618, -1), 0);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1982321[iParam0 /*71*/].f_1, 0);
	}
	return 0;
}

int func_204(int iParam0)//Position - 0x195FF
{
	if (iParam0 != func_158())
	{
		if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_486.f_2, 17))
		{
			return 1;
		}
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return func_176(9631, -1) != 0;
		}
	}
	return 0;
}

int func_205(int iParam0)//Position - 0x19642
{
	switch (iParam0)
	{
		case joaat("zr350"):
			return 0;
		
		case joaat("comet6"):
			return 1;
		
		case joaat("jester4"):
			return 2;
		
		case joaat("vectre"):
			return 3;
		
		case joaat("cypher"):
			return 4;
		
		case joaat("tailgater2"):
			return 5;
		
		case joaat("euros"):
			return 6;
		
		case joaat("growler"):
			return 7;
		
		case joaat("calico"):
			return 8;
		
		case joaat("remus"):
			return 9;
		
		case joaat("dominator7"):
			return 10;
		
		case joaat("futo2"):
			return 11;
		
		case joaat("rt3000"):
			return 12;
		
		case joaat("warrener2"):
			return 13;
		
		case joaat("sultan3"):
			return 14;
		
		case joaat("dominator8"):
			return 15;
		
		case joaat("previon"):
			return 16;
		
		default:
	}
	return -1;
}

int func_206(int iParam0)//Position - 0x19705
{
	if (!Global_78689)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("winky"):
			if (func_213(PLAYER::PLAYER_ID(), 0) || func_212(0))
			{
				return 1;
			}
			break;
		
		case joaat("brioso2"):
			if (func_211(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case joaat("vetir"):
			if (func_209(281, -1))
			{
				return 1;
			}
			break;
		
		case joaat("longfin"):
			if (func_209(282, -1))
			{
				return 1;
			}
			break;
		
		case joaat("annihilator2"):
			if (func_209(283, -1))
			{
				return 1;
			}
			break;
		
		case joaat("alkonost"):
			if (func_209(284, -1))
			{
				return 1;
			}
			break;
		
		case joaat("patrolboat"):
			if (func_209(285, -1))
			{
				return 1;
			}
			break;
		
		case joaat("weevil"):
			if ((func_207(0, 1) && func_207(1, 1)) && func_207(2, 1))
			{
				return 1;
			}
			break;
		
		case joaat("italirsx"):
			if (func_207(3, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_207(int iParam0, bool bParam1)//Position - 0x19817
{
	if (bParam1)
	{
		return BitTest(func_176(9586, -1), iParam0);
	}
	return func_208(PLAYER::PLAYER_ID(), iParam0);
}

int func_208(int iParam0, var uParam1)//Position - 0x1983C
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1980400[iParam0 /*53*/].f_3, uParam1);
	}
	return 0;
}

int func_209(int iParam0, int iParam1)//Position - 0x1985B
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_210(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_210(int iParam0, var uParam1)//Position - 0x1987F
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_178(uParam1));
}

int func_211(int iParam0)//Position - 0x19894
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1980400[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_212(bool bParam0)//Position - 0x198B2
{
	if (bParam0)
	{
		return BitTest(func_176(9511, -1), 1);
	}
	return func_211(PLAYER::PLAYER_ID());
}

int func_213(int iParam0, int iParam1)//Position - 0x198D4
{
	if (iParam0 != -1)
	{
		return func_214(iParam0, func_215(iParam1));
	}
	return 0;
}

int func_214(int iParam0, var uParam1)//Position - 0x198F2
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1980400[iParam0 /*53*/].f_2, uParam1);
	}
	return 0;
}

int func_215(int iParam0)//Position - 0x19911
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_216(int iParam0)//Position - 0x199D4
{
	switch (iParam0)
	{
		case joaat("vetir"):
			return 0;
			break;
		
		case joaat("winky"):
			return 1;
			break;
		
		case joaat("longfin"):
			return 2;
			break;
		
		case joaat("annihilator2"):
			return 3;
			break;
		
		case joaat("alkonost"):
			return 4;
			break;
		
		case joaat("patrolboat"):
			return 5;
			break;
		
		case joaat("brioso2"):
			return 6;
			break;
		
		case joaat("weevil"):
			return 7;
			break;
		
		case joaat("italirsx"):
			return 8;
			break;
	}
	return -1;
}

int func_217(int iParam0)//Position - 0x19A5A
{
	switch (iParam0)
	{
		case joaat("firetruk"):
			return 0;
			break;
		
		case joaat("burrito2"):
			return 1;
			break;
		
		case joaat("boxville"):
			return 2;
			break;
		
		case joaat("stockade"):
			return 3;
			break;
		
		case joaat("asbo"):
			return 4;
			break;
		
		case joaat("kanjo"):
			return 5;
			break;
		
		case joaat("everon"):
			return 6;
			break;
		
		case joaat("retinue2"):
			return 7;
			break;
		
		case joaat("yosemite2"):
			return 8;
			break;
		
		case joaat("sugoi"):
			return 9;
			break;
		
		case joaat("sultan2"):
			return 10;
			break;
		
		case joaat("outlaw"):
			return 11;
			break;
		
		case joaat("vagrant"):
			return 12;
			break;
		
		case joaat("komoda"):
			return 13;
			break;
		
		case joaat("stryder"):
			return 14;
			break;
		
		case joaat("furia"):
			return 15;
			break;
		
		case joaat("zhaba"):
			return 16;
			break;
		
		case joaat("jugular"):
			return 17;
			break;
		
		case joaat("sentinel3"):
			return 18;
			break;
		
		case joaat("gauntlet3"):
			return 19;
			break;
		
		case joaat("ellie"):
			return 20;
			break;
		
		case joaat("defiler"):
			return 21;
			break;
		
		case joaat("manchez"):
			return 22;
			break;
	}
	return -1;
}

int func_218(int iParam0)//Position - 0x19BA4
{
	int iVar0;
	
	if (!Global_78689)
	{
		return 0;
	}
	iVar0 = func_176(8837, -1);
	switch (iParam0)
	{
		case joaat("firetruk"):
			if (BitTest(iVar0, 0) || Global_262145.f_28795 /* Tunable: -1997603235 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("burrito2"):
			if (BitTest(iVar0, 1) || Global_262145.f_28796 /* Tunable: 1293915021 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("boxville"):
			if (BitTest(iVar0, 2) || Global_262145.f_28797 /* Tunable: -423431250 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("stockade"):
			if (BitTest(iVar0, 3) || Global_262145.f_28798 /* Tunable: -1491164275 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("asbo"):
			if (BitTest(iVar0, 4) || Global_262145.f_28799 /* Tunable: -170684478 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("kanjo"):
			if (BitTest(iVar0, 5) || Global_262145.f_28800 /* Tunable: -1541063863 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("everon"):
			if (BitTest(iVar0, 6) || Global_262145.f_28801 /* Tunable: 2075481779 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("retinue2"):
			if (BitTest(iVar0, 7) || Global_262145.f_28802 /* Tunable: -1775833032 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("yosemite2"):
			if (BitTest(iVar0, 8) || Global_262145.f_28803 /* Tunable: -1971661685 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sugoi"):
			if (BitTest(iVar0, 9) || Global_262145.f_28804 /* Tunable: 1161220966 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sultan2"):
			if (BitTest(iVar0, 10) || Global_262145.f_28805 /* Tunable: -1874913332 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("outlaw"):
			if (BitTest(iVar0, 11) || Global_262145.f_28806 /* Tunable: -595990903 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("vagrant"):
			if (BitTest(iVar0, 12) || Global_262145.f_28807 /* Tunable: 829638346 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("komoda"):
			if (BitTest(iVar0, 13) || Global_262145.f_28808 /* Tunable: 1362146058 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("stryder"):
			if (BitTest(iVar0, 14) || Global_262145.f_28809 /* Tunable: -758040390 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("furia"):
			if (BitTest(iVar0, 15) || Global_262145.f_28810 /* Tunable: 1378787619 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("zhaba"):
			if (BitTest(iVar0, 16) || Global_262145.f_28811 /* Tunable: 1041883040 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("jugular"):
			if (BitTest(iVar0, 17) || Global_262145.f_28812 /* Tunable: -463901261 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sentinel3"):
			if (BitTest(iVar0, 18) || Global_262145.f_28813 /* Tunable: 1961619344 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("gauntlet3"):
			if (BitTest(iVar0, 19) || Global_262145.f_28814 /* Tunable: -2141495545 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("ellie"):
			if (BitTest(iVar0, 20) || Global_262145.f_28815 /* Tunable: -349041781 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("defiler"):
			if (BitTest(iVar0, 21) || Global_262145.f_28816 /* Tunable: -410267195 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("manchez"):
			if (BitTest(iVar0, 22) || Global_262145.f_28817 /* Tunable: -1071451023 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0x19F71
{
	if (!Global_78689)
	{
		return 0;
	}
	if (iParam0 == joaat("cognoscenti") || iParam0 == joaat("cognoscenti2"))
	{
		return 0;
	}
	if (func_223(iParam0) != -1)
	{
		if (func_220(func_222(iParam0)))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_220(int iParam0)//Position - 0x19FC5
{
	return func_172(func_221(iParam0), -1);
}

int func_221(int iParam0)//Position - 0x19FD8
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		
		case 9:
			return 24964;
			break;
		
		case 10:
			return 24966;
			break;
		
		case 11:
			return 24965;
			break;
		
		case 12:
			return 24968;
			break;
		
		case 13:
			return 25101;
			break;
		
		case 14:
			return 24967;
			break;
		
		case 15:
			return 25105;
			break;
		
		case 16:
			return 25106;
			break;
		
		case 20:
			return 25102;
			break;
		
		case 21:
			return 25103;
			break;
		
		case 22:
			return 25104;
			break;
		
		case 102:
			return 24969;
			break;
		
		case 17:
			return 25107;
			break;
		
		case 18:
			return 25108;
			break;
		
		case 19:
			return 25109;
			break;
		
		case 103:
			return 24972;
			break;
		
		case 104:
			return 24973;
			break;
		
		case 105:
			return 24974;
			break;
		
		case 106:
			return 24975;
			break;
		
		case 107:
			return 24976;
			break;
		
		case 108:
			return 24978;
			break;
		
		case 109:
			return 24980;
			break;
		
		case 110:
			return 24981;
			break;
		
		case 111:
			return 24982;
			break;
		
		case 112:
			return 24983;
			break;
		
		case 113:
			return 24984;
			break;
		
		case 114:
			return 24985;
			break;
		
		case 115:
			return 24986;
			break;
		
		case 116:
			return 24987;
			break;
		
		case 117:
			return 24988;
			break;
		
		case 118:
			return 24989;
			break;
		
		case 119:
			return 24990;
			break;
		
		case 120:
			return 24991;
			break;
		
		case 0:
			return 24992;
			break;
		
		case 1:
			return 24993;
			break;
		
		case 2:
			return 24994;
			break;
		
		case 3:
			return 24995;
			break;
		
		case 4:
			return 24996;
			break;
		
		case 5:
			return 24997;
			break;
		
		case 6:
			return 24998;
			break;
		
		case 7:
			return 24999;
			break;
		
		case 127:
			return 25117;
			break;
		
		case 128:
			return 25118;
			break;
		
		case 23:
			return 25119;
			break;
		
		case 139:
			return 25125;
			break;
		
		case 140:
			return 25127;
			break;
		
		case 141:
			return 25128;
			break;
		
		case 27:
			return 25129;
			break;
		
		case 160:
			return 25136;
			break;
		
		case 161:
			return 25139;
			break;
		
		case 162:
			return 25140;
			break;
		
		case 31:
			return 25141;
			break;
		
		case 181:
			return 25148;
			break;
		
		case 182:
			return 25151;
			break;
		
		case 183:
			return 25152;
			break;
		
		case 35:
			return 25153;
			break;
		
		case 193:
			return 25160;
			break;
		
		case 194:
			return 25161;
			break;
		
		case 39:
			return 25162;
			break;
		
		case 206:
			return 25168;
			break;
		
		case 207:
			return 25169;
			break;
		
		case 208:
			return 25170;
			break;
		
		case 209:
			return 25173;
			break;
		
		case 210:
			return 25174;
			break;
		
		case 43:
			return 25175;
			break;
		
		case 234:
			return 25179;
			break;
		
		case 235:
			return 25183;
			break;
		
		case 236:
			return 25184;
			break;
		
		case 47:
			return 25185;
			break;
		
		case 248:
			return 25188;
			break;
		
		case 249:
			return 25191;
			break;
		
		case 250:
			return 25192;
			break;
		
		case 51:
			return 25193;
			break;
		
		case 259:
			return 25198;
			break;
		
		case 260:
			return 25202;
			break;
		
		case 261:
			return 25203;
			break;
		
		case 55:
			return 25204;
			break;
		
		case 274:
			return 25209;
			break;
		
		case 275:
			return 25212;
			break;
		
		case 276:
			return 25213;
			break;
		
		case 59:
			return 25214;
			break;
		
		case 284:
			return 25217;
			break;
		
		case 285:
			return 25221;
			break;
		
		case 286:
			return 25222;
			break;
		
		case 63:
			return 25223;
			break;
		
		case 307:
			return 25228;
			break;
		
		case 308:
			return 24979;
			break;
		
		case 309:
			return 25229;
			break;
		
		case 310:
			return 25111;
			break;
		
		case 67:
			return 25230;
			break;
		
		case 68:
			return 25112;
			break;
		
		case 72:
			return 25231;
			break;
		
		case 73:
			return 25233;
			break;
		
		case 74:
			return 25234;
			break;
		
		case 75:
			return 25235;
			break;
		
		case 76:
			return 25236;
			break;
		
		case 77:
			return 25394;
			break;
		
		case 121:
			return 25395;
			break;
		
		case 122:
			return 25396;
			break;
		
		case 123:
			return 25397;
			break;
		
		case 124:
			return 25398;
			break;
		
		case 125:
			return 25399;
			break;
		
		case 126:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		
		case 79:
			return 25245;
			break;
		
		case 80:
			return 25246;
			break;
		
		case 81:
			return 25247;
			break;
		
		case 82:
			return 25248;
			break;
		
		case 83:
			return 25249;
			break;
		
		case 84:
			return 25250;
			break;
		
		case 85:
			return 25000;
			break;
		
		case 86:
			return 25251;
			break;
		
		case 87:
			return 25252;
			break;
		
		case 88:
			return 25253;
			break;
		
		case 89:
			return 25254;
			break;
		
		case 90:
			return 25255;
			break;
		
		case 91:
			return 25256;
			break;
		
		case 92:
			return 25257;
			break;
		
		case 93:
			return 25258;
			break;
		
		case 94:
			return 25259;
			break;
		
		case 95:
			return 25260;
			break;
		
		case 96:
			return 25261;
			break;
		
		case 97:
			return 25262;
			break;
		
		case 98:
			return 25263;
			break;
		
		case 99:
			return 25264;
			break;
		
		case 100:
			return 25225;
			break;
		
		case 101:
			return 25178;
			break;
		
		case 311:
			return 25265;
			break;
		
		case 312:
			return 25266;
			break;
		
		case 313:
			return 25267;
			break;
		
		case 314:
			return 25268;
			break;
		
		case 315:
			return 24977;
			break;
		
		case 316:
			return 25269;
			break;
		
		case 317:
			return 25270;
			break;
		
		case 318:
			return 25271;
			break;
		
		case 319:
			return 25272;
			break;
		
		case 320:
			return 25273;
			break;
		
		case 321:
			return 25274;
			break;
		
		case 322:
			return 25275;
			break;
		
		case 323:
			return 25276;
			break;
		
		case 324:
			return 25277;
			break;
		
		case 325:
			return 25278;
			break;
		
		case 326:
			return 25279;
			break;
		
		case 327:
			return 25280;
			break;
		
		case 328:
			return 25281;
			break;
		
		case 329:
			return 25282;
			break;
		
		case 330:
			return 25283;
			break;
		
		case 331:
			return 25284;
			break;
		
		case 332:
			return 25285;
			break;
		
		case 333:
			return 25286;
			break;
		
		case 334:
			return 25287;
			break;
		
		case 335:
			return 25288;
			break;
		
		case 336:
			return 25289;
			break;
		
		case 337:
			return 25290;
			break;
		
		case 338:
			return 25291;
			break;
		
		case 339:
			return 25292;
			break;
		
		case 340:
			return 25293;
			break;
		
		case 341:
			return 25294;
			break;
		
		case 342:
			return 25295;
			break;
		
		case 343:
			return 25296;
			break;
		
		case 344:
			return 25297;
			break;
		
		case 345:
			return 25298;
			break;
		
		case 346:
			return 25299;
			break;
		
		case 347:
			return 25300;
			break;
		
		case 348:
			return 25301;
			break;
		
		case 349:
			return 25302;
			break;
		
		case 350:
			return 25303;
			break;
		
		case 351:
			return 25304;
			break;
		
		case 352:
			return 25305;
			break;
		
		case 353:
			return 25306;
			break;
		
		case 354:
			return 25307;
			break;
		
		case 355:
			return 25308;
			break;
		
		case 356:
			return 25309;
			break;
		
		case 357:
			return 25310;
			break;
		
		case 358:
			return 25311;
			break;
		
		case 359:
			return 25312;
			break;
		
		case 360:
			return 25313;
			break;
		
		case 361:
			return 25314;
			break;
		
		case 362:
			return 25315;
			break;
		
		case 363:
			return 25316;
			break;
		
		case 364:
			return 25317;
			break;
		
		case 365:
			return 25318;
			break;
		
		case 366:
			return 25319;
			break;
		
		case 367:
			return 25320;
			break;
		
		case 368:
			return 25321;
			break;
		
		case 369:
			return 25322;
			break;
		
		case 370:
			return 25323;
			break;
		
		case 371:
			return 25324;
			break;
		
		case 372:
			return 25325;
			break;
		
		case 373:
			return 25326;
			break;
		
		case 374:
			return 25327;
			break;
		
		case 375:
			return 25328;
			break;
		
		case 376:
			return 25329;
			break;
		
		case 377:
			return 25330;
			break;
		
		case 378:
			return 25331;
			break;
		
		case 379:
			return 25332;
			break;
		
		case 380:
			return 25333;
			break;
		
		case 381:
			return 25334;
			break;
		
		case 382:
			return 25335;
			break;
		
		case 383:
			return 25336;
			break;
		
		case 384:
			return 25337;
			break;
		
		case 385:
			return 25338;
			break;
		
		case 386:
			return 25339;
			break;
		
		case 387:
			return 25340;
			break;
		
		case 388:
			return 25341;
			break;
		
		case 389:
			return 25342;
			break;
		
		case 390:
			return 25343;
			break;
		
		case 391:
			return 25344;
			break;
		
		case 392:
			return 25345;
			break;
		
		case 393:
			return 25346;
			break;
		
		case 394:
			return 25347;
			break;
		
		case 395:
			return 24970;
			break;
		
		case 396:
			return 25348;
			break;
		
		case 397:
			return 25349;
			break;
		
		case 398:
			return 25350;
			break;
		
		case 399:
			return 25351;
			break;
		
		case 400:
			return 25352;
			break;
		
		case 401:
			return 25353;
			break;
		
		case 402:
			return 25354;
			break;
		
		case 403:
			return 25355;
			break;
		
		case 404:
			return 25356;
			break;
		
		case 405:
			return 25357;
			break;
		
		case 406:
			return 25358;
			break;
		
		case 407:
			return 25359;
			break;
		
		case 408:
			return 25360;
			break;
		
		case 409:
			return 25361;
			break;
		
		case 410:
			return 25362;
			break;
		
		case 411:
			return 25363;
			break;
		
		case 412:
			return 25364;
			break;
		
		case 413:
			return 25365;
			break;
		
		case 414:
			return 25366;
			break;
		
		case 415:
			return 25367;
			break;
		
		case 416:
			return 25368;
			break;
		
		case 417:
			return 25369;
			break;
		
		case 418:
			return 25370;
			break;
		
		case 419:
			return 25371;
			break;
		
		case 420:
			return 25373;
			break;
		
		case 421:
			return 25374;
			break;
		
		case 422:
			return 25375;
			break;
		
		case 423:
			return 25377;
			break;
		
		case 424:
			return 25378;
			break;
		
		case 425:
			return 25379;
			break;
		
		case 426:
			return 25382;
			break;
		
		case 427:
			return 25383;
			break;
		
		case 428:
			return 25386;
			break;
		
		case 429:
			return 25390;
			break;
		
		case 430:
			return 25391;
			break;
		
		case 431:
			return 25392;
			break;
		
		case 432:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		
		case 25:
			return 25113;
			break;
		
		case 26:
			return 25114;
			break;
		
		case 28:
			return 25115;
			break;
		
		case 29:
			return 25116;
			break;
		
		case 30:
			return 25120;
			break;
		
		case 32:
			return 25121;
			break;
		
		case 33:
			return 25122;
			break;
		
		case 34:
			return 25123;
			break;
		
		case 36:
			return 25124;
			break;
		
		case 37:
			return 25126;
			break;
		
		case 38:
			return 25130;
			break;
		
		case 40:
			return 25131;
			break;
		
		case 41:
			return 25132;
			break;
		
		case 42:
			return 25133;
			break;
		
		case 44:
			return 25134;
			break;
		
		case 45:
			return 25137;
			break;
		
		case 46:
			return 25138;
			break;
		
		case 48:
			return 25142;
			break;
		
		case 49:
			return 25143;
			break;
		
		case 50:
			return 25144;
			break;
		
		case 52:
			return 25145;
			break;
		
		case 53:
			return 25146;
			break;
		
		case 54:
			return 25147;
			break;
		
		case 56:
			return 25149;
			break;
		
		case 57:
			return 25150;
			break;
		
		case 58:
			return 25154;
			break;
		
		case 60:
			return 25155;
			break;
		
		case 61:
			return 25156;
			break;
		
		case 62:
			return 25157;
			break;
		
		case 64:
			return 25158;
			break;
		
		case 65:
			return 25159;
			break;
		
		case 66:
			return 25163;
			break;
		
		case 69:
			return 25164;
			break;
		
		case 70:
			return 25165;
			break;
		
		case 71:
			return 25166;
			break;
		
		case 129:
			return 25167;
			break;
		
		case 130:
			return 25171;
			break;
		
		case 131:
			return 25172;
			break;
		
		case 132:
			return 25176;
			break;
		
		case 133:
			return 25177;
			break;
		
		case 134:
			return 25181;
			break;
		
		case 135:
			return 25182;
			break;
		
		case 136:
			return 25186;
			break;
		
		case 137:
			return 25187;
			break;
		
		case 138:
			return 25189;
			break;
		
		case 142:
			return 25190;
			break;
		
		case 143:
			return 25194;
			break;
		
		case 144:
			return 25195;
			break;
		
		case 145:
			return 25196;
			break;
		
		case 146:
			return 25197;
			break;
		
		case 147:
			return 25199;
			break;
		
		case 148:
			return 25200;
			break;
		
		case 149:
			return 25201;
			break;
		
		case 150:
			return 25205;
			break;
		
		case 151:
			return 25206;
			break;
		
		case 152:
			return 25207;
			break;
		
		case 153:
			return 25208;
			break;
		
		case 154:
			return 25210;
			break;
		
		case 155:
			return 25211;
			break;
		
		case 156:
			return 25215;
			break;
		
		case 157:
			return 25216;
			break;
		
		case 158:
			return 25218;
			break;
		
		case 159:
			return 25219;
			break;
		
		case 163:
			return 25220;
			break;
		
		case 164:
			return 25224;
			break;
		
		case 165:
			return 25226;
			break;
		
		case 166:
			return 25227;
			break;
		
		case 167:
			return 25232;
			break;
		
		case 168:
			return 25372;
			break;
		
		case 169:
			return 25376;
			break;
		
		case 170:
			return 25380;
			break;
		
		case 171:
			return 25381;
			break;
		
		case 172:
			return 25384;
			break;
		
		case 173:
			return 25385;
			break;
		
		case 174:
			return 25387;
			break;
		
		case 175:
			return 25388;
			break;
		
		case 176:
			return 25389;
			break;
		
		case 177:
			return 25407;
			break;
		
		case 178:
			return 25408;
			break;
		
		case 179:
			return 25409;
			break;
		
		case 180:
			return 25410;
			break;
		
		case 184:
			return 25411;
			break;
		
		case 185:
			return 25412;
			break;
		
		case 186:
			return 25413;
			break;
		
		case 187:
			return 25414;
			break;
		
		case 188:
			return 25415;
			break;
		
		case 189:
			return 25416;
			break;
		
		case 190:
			return 25417;
			break;
		
		case 191:
			return 25418;
			break;
		
		case 192:
			return 25419;
			break;
		
		case 195:
			return 25420;
			break;
		
		case 196:
			return 25421;
			break;
		
		case 197:
			return 25422;
			break;
		
		case 198:
			return 25423;
			break;
		
		case 199:
			return 25424;
			break;
		
		case 200:
			return 25425;
			break;
		
		case 201:
			return 25426;
			break;
		
		case 202:
			return 25427;
			break;
		
		case 203:
			return 25428;
			break;
		
		case 204:
			return 25429;
			break;
		
		case 205:
			return 25430;
			break;
		
		case 211:
			return 25431;
			break;
		
		case 212:
			return 25432;
			break;
		
		case 213:
			return 25433;
			break;
		
		case 214:
			return 25434;
			break;
		
		case 215:
			return 25435;
			break;
		
		case 216:
			return 25436;
			break;
		
		case 217:
			return 25437;
			break;
		
		case 218:
			return 25438;
			break;
		
		case 219:
			return 25439;
			break;
		
		case 220:
			return 25440;
			break;
		
		case 221:
			return 25441;
			break;
		
		case 222:
			return 25442;
			break;
		
		case 223:
			return 25443;
			break;
		
		case 224:
			return 25444;
			break;
		
		case 225:
			return 25445;
			break;
		
		case 226:
			return 25446;
			break;
		
		case 227:
			return 25447;
			break;
		
		case 228:
			return 25448;
			break;
		
		case 229:
			return 25449;
			break;
		
		case 230:
			return 25450;
			break;
		
		case 231:
			return 25451;
			break;
		
		case 232:
			return 25452;
			break;
		
		case 233:
			return 25453;
			break;
		
		case 237:
			return 25454;
			break;
		
		case 238:
			return 25455;
			break;
		
		case 239:
			return 25456;
			break;
		
		case 240:
			return 25457;
			break;
		
		case 241:
			return 25458;
			break;
		
		case 242:
			return 25459;
			break;
		
		case 243:
			return 25460;
			break;
		
		case 244:
			return 25461;
			break;
		
		case 245:
			return 25462;
			break;
		
		case 246:
			return 25463;
			break;
		
		case 247:
			return 25464;
			break;
		
		case 251:
			return 25465;
			break;
		
		case 252:
			return 25466;
			break;
		
		case 253:
			return 25467;
			break;
		
		case 254:
			return 25468;
			break;
		
		case 255:
			return 25469;
			break;
		
		case 256:
			return 25470;
			break;
		
		case 257:
			return 25471;
			break;
		
		case 258:
			return 25472;
			break;
		
		case 262:
			return 25473;
			break;
		
		case 263:
			return 25474;
			break;
		
		case 264:
			return 25475;
			break;
		
		case 265:
			return 25476;
			break;
		
		case 266:
			return 25477;
			break;
		
		case 267:
			return 25478;
			break;
		
		case 268:
			return 25479;
			break;
		
		case 269:
			return 25480;
			break;
		
		case 270:
			return 25481;
			break;
		
		case 271:
			return 25482;
			break;
		
		case 272:
			return 25483;
			break;
		
		case 273:
			return 25484;
			break;
		
		case 277:
			return 25485;
			break;
		
		case 278:
			return 25486;
			break;
		
		case 279:
			return 25487;
			break;
		
		case 280:
			return 25488;
			break;
		
		case 281:
			return 25489;
			break;
		
		case 282:
			return 25490;
			break;
		
		case 283:
			return 25491;
			break;
		
		case 287:
			return 25492;
			break;
		
		case 288:
			return 25493;
			break;
		
		case 289:
			return 25494;
			break;
		
		case 290:
			return 25495;
			break;
		
		case 291:
			return 25496;
			break;
		
		case 292:
			return 25497;
			break;
		
		case 293:
			return 25498;
			break;
		
		case 294:
			return 25499;
			break;
		
		case 295:
			return 25500;
			break;
		
		case 296:
			return 25501;
			break;
		
		case 297:
			return 25502;
			break;
		
		case 298:
			return 25503;
			break;
		
		case 299:
			return 25504;
			break;
		
		case 300:
			return 25505;
			break;
		
		case 301:
			return 25506;
			break;
		
		case 302:
			return 25507;
			break;
		
		case 303:
			return 25508;
			break;
		
		case 304:
			return 25509;
			break;
		
		case 305:
			return 25510;
			break;
		
		case 306:
			return 25511;
			break;
	}
	return 0;
}

int func_222(int iParam0)//Position - 0x1B955
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 8;
			break;
		
		case joaat("cerberus2"):
			return 9;
			break;
		
		case joaat("cerberus3"):
			return 10;
			break;
		
		case joaat("brutus"):
			return 11;
			break;
		
		case joaat("brutus2"):
			return 12;
			break;
		
		case joaat("brutus3"):
			return 13;
			break;
		
		case joaat("zr380"):
			return 14;
			break;
		
		case joaat("zr3802"):
			return 15;
			break;
		
		case joaat("zr3803"):
			return 16;
			break;
		
		case joaat("scarab"):
			return 20;
			break;
		
		case joaat("scarab2"):
			return 21;
			break;
		
		case joaat("scarab3"):
			return 22;
			break;
		
		case joaat("imperator"):
			return 17;
			break;
		
		case joaat("imperator2"):
			return 18;
			break;
		
		case joaat("imperator3"):
			return 19;
			break;
		
		case joaat("impaler"):
			return 102;
			break;
		
		case joaat("ratloader2"):
			return 103;
			break;
		
		case joaat("glendale"):
			return 104;
			break;
		
		case joaat("slamvan"):
			return 105;
			break;
		
		case joaat("dominator"):
			return 106;
			break;
		
		case joaat("issi3"):
			return 107;
			break;
		
		case joaat("gargoyle"):
			return 108;
			break;
	}
	return -1;
}

int func_223(int iParam0)//Position - 0x1BA99
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 0;
		
		case joaat("cerberus2"):
			return 1;
		
		case joaat("cerberus3"):
			return 2;
		
		case joaat("brutus"):
			return 3;
		
		case joaat("brutus2"):
			return 4;
		
		case joaat("brutus3"):
			return 5;
		
		case joaat("scarab"):
			return 6;
		
		case joaat("scarab2"):
			return 7;
		
		case joaat("scarab3"):
			return 8;
		
		case joaat("imperator"):
			return 9;
		
		case joaat("imperator2"):
			return 10;
		
		case joaat("imperator3"):
			return 11;
		
		case joaat("zr380"):
			return 12;
		
		case joaat("zr3802"):
			return 13;
		
		case joaat("zr3803"):
			return 14;
		
		case joaat("ratloader2"):
			return 15;
		
		case joaat("glendale"):
			return 16;
		
		case joaat("slamvan"):
			return 17;
		
		case joaat("dominator"):
			return 18;
		
		case joaat("impaler"):
			return 19;
		
		case joaat("issi3"):
			return 20;
		
		case joaat("gargoyle"):
			return 21;
		
		default:
	}
	return -1;
}

int func_224(int iParam0)//Position - 0x1BB93
{
	switch (iParam0)
	{
		case joaat("mule4"):
			if (func_176(7233, -1) >= func_226(iParam0) || Global_262145.f_24865 /* Tunable: 1416880888 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pounder2"):
			if (func_176(7233, -1) >= func_226(iParam0) || Global_262145.f_24866 /* Tunable: 132690314 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("oppressor2"):
			if (func_225(22050, -1) >= func_226(iParam0) || Global_262145.f_24867 /* Tunable: 407802353 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pbus2"):
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_311.f_7, 1) || Global_262145.f_24869 /* Tunable: -26415325 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("patriot2"):
			if (func_176(7231, -1) >= func_226(iParam0) || Global_262145.f_24870 /* Tunable: 1547508956 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("blimp3"):
			if (func_176(7231, -1) >= func_226(iParam0) || Global_262145.f_24871 /* Tunable: -1431059775 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_225(int iParam0, int iParam1)//Position - 0x1BCDB
{
	if (iParam1 == -1)
	{
		iParam1 = func_98();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_226(int iParam0)//Position - 0x1BCF7
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return Global_262145.f_24872 /* Tunable: -781384755 */;
			break;
		
		case joaat("pounder2"):
			return Global_262145.f_24873 /* Tunable: 1813909003 */;
			break;
		
		case joaat("oppressor2"):
			return Global_262145.f_24874 /* Tunable: 246949104 */;
			break;
		
		case joaat("patriot2"):
			return Global_262145.f_24875 /* Tunable: -410593703 */;
			break;
		
		case joaat("blimp3"):
			return Global_262145.f_24876 /* Tunable: -121606550 */;
			break;
	}
	return 0;
}

int func_227(int iParam0)//Position - 0x1BD66
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return 0;
			break;
		
		case joaat("pounder2"):
			return 1;
			break;
		
		case joaat("oppressor2"):
			return 2;
			break;
		
		case joaat("pbus2"):
			return 3;
			break;
		
		case joaat("patriot2"):
			return 4;
			break;
		
		case joaat("blimp3"):
			return 5;
			break;
	}
	return -1;
}

int func_228(int iParam0)//Position - 0x1BDC4
{
	var uVar0;
	
	if (!Global_78689)
	{
		return 0;
	}
	uVar0 = func_176(5664, -1);
	switch (iParam0)
	{
		case joaat("deluxo"):
			return BitTest(uVar0, func_229(1));
		
		case joaat("akula"):
			return BitTest(uVar0, func_229(2));
		
		case joaat("riot2"):
			return BitTest(uVar0, func_229(6));
		
		case joaat("stromberg"):
			return BitTest(uVar0, func_229(7));
		
		case joaat("chernobog"):
			return BitTest(uVar0, func_229(10));
		
		case joaat("barrage"):
			return BitTest(uVar0, func_229(11));
		
		case joaat("khanjali"):
			return BitTest(uVar0, func_229(12));
		
		case joaat("volatol"):
			return BitTest(uVar0, func_229(13));
		
		case joaat("thruster"):
			return BitTest(uVar0, func_229(15));
		
		default:
	}
	return 0;
}

int func_229(int iParam0)//Position - 0x1BE88
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_230(int iParam0)//Position - 0x1BF40
{
	switch (iParam0)
	{
		case joaat("deluxo"):
			return 0;
			break;
		
		case joaat("akula"):
			return 1;
			break;
		
		case joaat("riot2"):
			return 2;
			break;
		
		case joaat("stromberg"):
			return 3;
			break;
		
		case joaat("chernobog"):
			return 4;
			break;
		
		case joaat("barrage"):
			return 5;
			break;
		
		case joaat("khanjali"):
			return 6;
			break;
		
		case joaat("volatol"):
			return 7;
			break;
		
		case joaat("thruster"):
			return 8;
			break;
	}
	return -1;
}

int func_231(int iParam0)//Position - 0x1BFC6
{
	int iVar0;
	int iVar1;
	
	if (!Global_78689)
	{
		return 0;
	}
	iVar0 = func_233(iParam0);
	iVar1 = func_232();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_232()//Position - 0x1BFF4
{
	return func_176(6116, -1);
}

int func_233(int iParam0)//Position - 0x1C007
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return Global_262145.f_22892 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_MICROLIGHT */;
		
		case joaat("rogue"):
			return Global_262145.f_22893 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_ROGUE */;
		
		case joaat("alphaz1"):
			return Global_262145.f_22894 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_ALPHAZ1 */;
		
		case joaat("havok"):
			return Global_262145.f_22895 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_HAVOK */;
		
		case joaat("starling"):
			return Global_262145.f_22896 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_STARLING */;
		
		case joaat("molotok"):
			return Global_262145.f_22897 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_MOLOTOK */;
		
		case joaat("tula"):
			return Global_262145.f_22898 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_TULA */;
		
		case joaat("bombushka"):
			return Global_262145.f_22899 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_BOMBUSHKA */;
		
		case joaat("howard"):
			return Global_262145.f_22900 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_HOWARD */;
		
		case joaat("mogul"):
			return Global_262145.f_22901 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_MOGUL */;
		
		case joaat("pyro"):
			return Global_262145.f_22902 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_PYRO */;
		
		case joaat("seabreeze"):
			return Global_262145.f_22903 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_SEABREEZE */;
		
		case joaat("nokota"):
			return Global_262145.f_22904 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_NOKOTA */;
		
		case joaat("hunter"):
			return Global_262145.f_22905 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_HUNTER */;
		
		default:
	}
	return 0;
}

int func_234(var uParam0)//Position - 0x1C0F7
{
	if (!Global_78689)
	{
		return 0;
	}
	return BitTest(func_176(5466, -1), uParam0);
}

int func_235(int iParam0)//Position - 0x1C116
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
		
		case joaat("halftrack"):
			return 1;
		
		case joaat("trailersmall2"):
			return 2;
		
		case joaat("apc"):
			return 3;
		
		case joaat("tampa3"):
			return 5;
		
		case joaat("oppressor"):
			return 7;
		
		default:
	}
	return 3;
}

int func_236(int iParam0)//Position - 0x1C162
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
			break;
		
		case joaat("halftrack"):
			return 1;
			break;
		
		case joaat("trailersmall2"):
			return 2;
			break;
		
		case joaat("apc"):
			return 3;
			break;
		
		case joaat("tampa3"):
			return 4;
			break;
		
		case joaat("oppressor"):
			return 5;
			break;
	}
	return -1;
}

int func_237(int iParam0)//Position - 0x1C1C0
{
	int iVar0;
	
	if (!Global_78689)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_238(iVar0);
}

int func_238(int iParam0)//Position - 0x1C2CB
{
	var uVar0;
	int iVar1;
	
	if (func_245())
	{
		return 0;
	}
	uVar0 = func_240(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_239(iVar1));
}

int func_239(int iParam0)//Position - 0x1C2F3
{
	return (iParam0 % 32);
}

var func_240(var uParam0)//Position - 0x1C300
{
	var uVar0;
	
	uVar0 = func_176(func_241(uParam0), -1);
	return uVar0;
}

int func_241(var uParam0)//Position - 0x1C317
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_244(iVar0);
	if ((func_243() == 0 || func_242() == 0) || (func_243() == 999 && func_242() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 739;
				break;
			
			case 1:
				return 740;
				break;
		}
	}
	return 14385;
}

int func_242()//Position - 0x1C386
{
	return Global_32284;
}

int func_243()//Position - 0x1C391
{
	return Global_32283;
}

int func_244(int iParam0)//Position - 0x1C39C
{
	return (iParam0 / 32);
}

bool func_245()//Position - 0x1C3A9
{
	return Global_1575042;
}

int func_246(int iParam0)//Position - 0x1C3B5
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_247(int iParam0)//Position - 0x1C46F
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

int func_248(var uParam0)//Position - 0x1C4C6
{
	if (!Global_78689)
	{
		return 0;
	}
	return BitTest(func_176(5329, -1), uParam0);
}

int func_249(int iParam0)//Position - 0x1C4E5
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
		
		case joaat("dune5"):
			return 0;
		
		case joaat("wastelander"):
			return 1;
		
		case joaat("blazer5"):
			return 2;
		
		case joaat("phantom2"):
			return 3;
		
		case joaat("voltic2"):
			return 4;
		
		case joaat("technical2"):
			return 5;
		
		case joaat("boxville5"):
			return 6;
		
		case joaat("ruiner2"):
			return 7;
		
		default:
	}
	return 0;
}

int func_250(var uParam0)//Position - 0x1C54F
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_251()//Position - 0x1C5D8
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (BitTest(Global_25, 5))
	{
		if (BitTest(Global_25, 1) || BitTest(Global_25, 3))
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
		if (Global_152688.f_3)
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
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
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

bool func_252(int iParam0, var uParam1)//Position - 0x1C711
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

int func_253(int iParam0)//Position - 0x1CA12
{
	switch (iParam0)
	{
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
			return 1;
		
		default:
	}
	return 0;
}

int func_254(int iParam0)//Position - 0x1CA8C
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
		
		default:
	}
	return 0;
}

int func_255(int iParam0)//Position - 0x1CB78
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

void func_256(int iParam0, int* iParam1)//Position - 0x1CBD0
{
	switch (iParam0)
	{
		case 64:
			MISC::SET_BIT(iParam1, 4);
			break;
		
		case 67:
			MISC::SET_BIT(iParam1, 4);
			break;
		
		case 72:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 117:
			MISC::CLEAR_BIT(iParam1, 1);
			break;
		
		case 49:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 118:
			MISC::SET_BIT(iParam1, 0);
			MISC::CLEAR_BIT(iParam1, 1);
			break;
		
		case 1:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 119:
			MISC::CLEAR_BIT(iParam1, 1);
			break;
		
		case 77:
			MISC::SET_BIT(iParam1, 0);
			MISC::CLEAR_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			break;
		
		case 120:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			break;
		
		case 130:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 132:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 135:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 137:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 141:
			MISC::SET_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 6);
			break;
		
		case 147:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 4);
			MISC::SET_BIT(iParam1, 5);
			MISC::SET_BIT(iParam1, 6);
			MISC::SET_BIT(iParam1, 7);
			MISC::SET_BIT(iParam1, 8);
			break;
		
		case 203:
			MISC::SET_BIT(iParam1, 0);
			MISC::CLEAR_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			break;
		
		case 100:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			break;
		
		case 170:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::CLEAR_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			break;
		
		case 160:
			MISC::SET_BIT(iParam1, 15);
			break;
		
		case 161:
			MISC::SET_BIT(iParam1, 15);
			break;
		
		case 192:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			break;
		
		case 221:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			break;
		
		case 222:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 172:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 165:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 166:
			MISC::SET_BIT(iParam1, 0);
			MISC::CLEAR_BIT(iParam1, 1);
			break;
		
		case 139:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 24);
			break;
		
		case 104:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 109:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			break;
		
		case 227:
		case 252:
			MISC::SET_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			MISC::CLEAR_BIT(iParam1, 4);
			break;
		
		case 97:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 52:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 108:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 237:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 238:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_77390)
			{
				MISC::SET_BIT(iParam1, 9);
			}
			break;
		
		case 271:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 4);
			break;
		
		case 272:
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 4);
			break;
		
		case 273:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 281:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 267:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 268:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 292:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 309:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 329:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 364:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 360:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 401:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 6);
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 406:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 404:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 425:
		case 426:
		case 427:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 431:
		case 432:
		case 433:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 471:
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 7);
			break;
		
		case 493:
		case 491:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 4);
			MISC::SET_BIT(iParam1, 5);
			MISC::SET_BIT(iParam1, 6);
			MISC::SET_BIT(iParam1, 7);
			break;
		
		case 498:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 590:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 525:
			MISC::SET_BIT(iParam1, 3);
			break;
		
		case 485:
		case 105:
		case 597:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 475:
		case 477:
		case 492:
		case 504:
		case 599:
		case 394:
		case 604:
		case 613:
		case 385:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 151:
			MISC::SET_BIT(iParam1, 2);
			MISC::SET_BIT(iParam1, 3);
			break;
		
		case 155:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 2);
			break;
		
		case 95:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 24);
			break;
		
		case 474:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 602:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			break;
		
		default:
			return;
			break;
	}
}

void func_257(char* sParam0)//Position - 0x1D23C
{
	int iVar0;
	
	StringCopy(&(Global_23390.f_1), sParam0, 16);
	Global_23390.f_74 = 0;
	Global_23390.f_75 = 0;
	Global_23390.f_76 = 0;
	Global_23390.f_77 = 0;
	Global_23390.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23390.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_258(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1D287
{
	Global_23390.f_5526[0] = iParam0;
	Global_23390.f_5526[1] = iParam1;
	Global_23390.f_5526[2] = iParam2;
	Global_23390.f_5526[3] = iParam3;
	Global_23390.f_5526[4] = iParam4;
}

void func_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1D2C6
{
	Global_23390.f_5499[0] = iParam0;
	Global_23390.f_5499[1] = iParam1;
	Global_23390.f_5499[2] = iParam2;
	Global_23390.f_5499[3] = iParam3;
	Global_23390.f_5499[4] = iParam4;
	Global_23390.f_5669 = 0;
	if (iParam0 != 0)
	{
		Global_23390.f_5669++;
	}
	if (iParam1 != 0)
	{
		Global_23390.f_5669++;
	}
	if (iParam2 != 0)
	{
		Global_23390.f_5669++;
	}
	if (iParam3 != 0)
	{
		Global_23390.f_5669++;
	}
	if (iParam4 != 0)
	{
		Global_23390.f_5669++;
	}
}

void func_260(bool bParam0, bool bParam1)//Position - 0x1D370
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23390.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23390.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2695123[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23390.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23390.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23390.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23390.f_5532[iVar0] = 0;
		Global_23390.f_5670[iVar0] = 0;
		Global_23390.f_5799[iVar0] = 0;
		Global_23390.f_6322[iVar0] = 0f;
		Global_23390.f_5928[iVar0] = 0;
		Global_23390.f_6188[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23390.f_5499[iVar0] = 0;
		Global_23390.f_5511[iVar0] = 0f;
		Global_23390.f_5505[iVar0] = -1f;
		Global_23390.f_5518[iVar0] = 0;
		Global_23390.f_5526[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23390.f_5393[iVar0 /*4*/]), "", 16);
		Global_23390.f_5450[iVar0] = -1;
		Global_23390.f_5465[iVar0] = 363;
		Global_23390.f_5480[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		StringCopy(&(Global_23390.f_6463[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23390.f_7488[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23390.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4540958.f_16), "", 16);
	Global_4540958.f_20 = -1;
	Global_23390 = 0;
	Global_23390.f_5661 = 0;
	Global_23390.f_5662 = 0;
	Global_23390.f_5663 = 0;
	Global_23390.f_5665 = 0;
	Global_23390.f_5666 = 0;
	Global_23390.f_5667 = 0;
	Global_23390.f_5664 = 0;
	Global_23390.f_6317 = 0;
	Global_23390.f_6457 = 0;
	Global_23390.f_6182 = 0;
	Global_23390.f_6181 = 0;
	Global_23390.f_6183 = 0;
	StringCopy(&(Global_23390.f_5081), "", 24);
	Global_23390.f_5159 = 0;
	Global_23390.f_5160 = 0;
	Global_23390.f_5161 = 0;
	Global_23390.f_5162 = 0;
	Global_23390.f_5163 = 0;
	Global_23390.f_5164 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23390.f_5093[iVar0] = 0;
		iVar0++;
	}
	Global_23390.f_5165 = 0;
	StringCopy(&(Global_4540958.f_21), "", 16);
	Global_4540958.f_61 = 0;
	Global_4540958.f_62 = 0;
	Global_4540958.f_63 = 0;
	Global_4540958.f_64 = 0;
	Global_4540958.f_65 = 0;
	Global_4540958.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4540958.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4540958.f_67 = 0;
	StringCopy(&(Global_23390.f_1), "", 16);
	Global_23390.f_5517 = 0f;
	Global_23390.f_74 = 0;
	Global_23390.f_75 = 0;
	Global_23390.f_76 = 0;
	Global_23390.f_77 = 0;
	Global_23390.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23390.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23390.f_6187 = 0;
	Global_23390.f_6186 = 0;
	Global_23390.f_6184 = 0;
	Global_23390.f_6185 = 0;
	Global_23390.f_5166 = 0;
	Global_23390.f_5167 = 0;
	Global_23390.f_5668 = 10;
	Global_23390.f_5669 = 0;
	Global_23390.f_6319 = 0f;
	Global_23390.f_6320 = 0f;
	Global_23390.f_6171 = 0;
	Global_23390.f_6172 = 0;
	Global_23390.f_6173 = 0f;
	Global_23390.f_6174 = 0;
	Global_23390.f_6176 = 0;
	Global_23390.f_6175 = 0;
	Global_23390.f_6177 = 0;
	Global_23390.f_6178 = 0;
	Global_23390.f_6179 = 0;
	Global_23390.f_6180 = 0;
	Global_23390.f_8888 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23390.f_6451[iVar0] = -1;
		Global_23390.f_6454[iVar0] = -1;
		iVar0++;
	}
	Global_23390.f_5524 = 0f;
	Global_23390.f_5495 = 0;
	Global_23390.f_5525 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23390.f_6458)
	{
		Global_23390.f_6458[iVar0] = 0;
		iVar0++;
	}
	Global_23390.f_8867 = 0;
	Global_23390.f_8862 = 0;
	Global_23390.f_8872 = 0;
	Global_23390.f_8877 = 0;
	Global_23390.f_8882 = 0;
	Global_23390.f_8884 = 0;
	Global_23390.f_8890 = 0;
	Global_23387 = 0.05f;
	Global_23388 = 0.05f;
	Global_23389 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23389 = (0.225f * (1.7777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23389 = (0.225f * (1.7777778f / fVar2));
	}
	else
	{
		Global_23389 = 0.225f;
	}
}

void func_261()//Position - 0x1D85A
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::SET_CURSOR_POSITION(0.325f, 0.3f);
	}
}

int func_262(int iParam0, bool bParam1)//Position - 0x1D878
{
	int iVar0;
	
	iVar0 = func_73(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_84(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44123[iVar0 /*32*/] == 1 && Global_44123[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44123[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44123[iVar0 /*32*/].f_5 = 1;
			Global_44123[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44123[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44123[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_263(char* sParam0, int iParam1, bool bParam2)//Position - 0x1D930
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_76(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23390.f_6078[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6078[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23390.f_6078[iVar0 /*4*/]), 9);
		Global_23390.f_6071[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23390.f_6078[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_23390.f_6057[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23390.f_6064[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23390.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_264(&(Global_23390.f_6103[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_264(var uParam0)//Position - 0x1DA26
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_265(char* sParam0, int iParam1)//Position - 0x1DAC8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_266(char* sParam0)//Position - 0x1DADF
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_267(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1DAF2
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_72(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44123[iVar0 /*32*/])
		{
			Global_44123[iVar0 /*32*/] = 1;
			Global_44123[iVar0 /*32*/].f_1 = Global_44324;
			Global_44324++;
			Global_44123[iVar0 /*32*/].f_4 = 0;
			Global_44123[iVar0 /*32*/].f_29 = 0;
			Global_44123[iVar0 /*32*/].f_5 = 0;
			Global_44123[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44123[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44123[iVar0 /*32*/].f_6 = iParam3;
			Global_44123[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44123[iVar0 /*32*/].f_7 = 0;
			Global_44123[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44123[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44123[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44123[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44123[iVar0 /*32*/].f_12 = 0;
				Global_44123[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44123[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_268(int iParam0, int iParam1)//Position - 0x1DC1D
{
	int iVar0;
	
	if (iParam0 >= 312)
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return BitTest(Global_113810.f_25185[iParam0], iVar0);
}

int func_269(int iParam0)//Position - 0x1DC58
{
	int iVar0;
	int iVar1[128];
	
	if (func_272(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (BitTest(Global_113810.f_18577[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_46() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_271(33, 0) && !func_270(joaat("TEXT_MONKEY_CAR_UNLOCK")))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_113810.f_25076.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_113810.f_25076.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_113810.f_25076.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_113810.f_25076.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_113810.f_25076.f_7)
		{
			iVar1[iVar0] = joaat("marshall");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return 0;
}

int func_270(int iParam0)//Position - 0x1DD9A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113810.f_7691.f_764)
	{
		if (Global_113810.f_7691.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_271(int iParam0, bool bParam1)//Position - 0x1DDD5
{
	if (BitTest(Global_113810.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_272(bool bParam0, bool bParam1)//Position - 0x1DDF5
{
	if (bParam0)
	{
		if (BitTest(Global_113810.f_668.f_1320, 2))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MISC::IS_PS3_VERSION() && !func_44())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		return 1;
	}
	return 0;
}

int func_273()//Position - 0x1DE5E
{
	int iVar0;
	
	iVar0 = 0;
	if (func_272(1, 1))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0++;
		}
	}
	if (BitTest(Global_113810.f_18577[45 /*6*/], 3))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0++;
		}
	}
	if (func_46() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_271(33, 0) && !func_270(joaat("TEXT_MONKEY_CAR_UNLOCK")))
		{
			iVar0++;
		}
		if (Global_113810.f_25076.f_3)
		{
			iVar0++;
		}
		if (Global_113810.f_25076.f_4)
		{
			iVar0++;
		}
		if (Global_113810.f_25076.f_5)
		{
			iVar0++;
		}
		if (Global_113810.f_25076.f_6)
		{
			iVar0++;
		}
		if (Global_113810.f_25076.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_274(float fParam0)//Position - 0x1DF2A
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fParam0 <= 0f)
		{
			return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0) > 0;
		}
	}
	return 0;
}

int func_275(bool bParam0)//Position - 0x1DF7C
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

void func_276()//Position - 0x1DFA4
{
	var uVar0[10];
	bool bVar11;
	int iVar12;
	float fVar13;
	char* sVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	int iVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	struct<3> Var30;
	bool bVar51;
	float fVar52;
	int iVar53;
	struct<3> Var54;
	struct<3> Var57;
	int iVar60;
	struct<3> Var61;
	bool bVar82;
	float fVar83;
	int iVar84;
	bool bVar85;
	struct<4> Var86;
	bool bVar90;
	int iVar91;
	struct<4> Var92;
	struct<60> Var113;
	int iVar191;
	int iVar192;
	int iVar193;
	bool bVar194;
	float fVar195;
	int iVar196;
	struct<60> Var197;
	int iVar275;
	bool bVar276;
	int iVar277;
	int iVar278;
	int iVar279;
	int iVar280;
	bool bVar281;
	bool bVar282;
	
	bVar11 = false;
	if ((((((((((((((((Local_400.f_29.f_80 && Local_400.f_29.f_69) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && Local_400.f_2 == 0) && Local_400.f_0 != -1) && func_70(Local_400.f_0, 0)) && func_70(Local_400.f_0, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_75816) && !func_275(1)) && !func_364()) || (((Local_400.f_3 > 1 && !func_275(0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !func_364()))
	{
		func_363(Local_400.f_0, &Local_544);
		fVar13 = 0f;
		sVar14 = "ANIM@APT_TRANS@GARAGE";
		Var15 = { 198.3659f, -1020.2732f, -100f };
		Var18 = { Var15 };
		Var21 = { 198.9538f, -1026.1301f, -100f };
		iVar24 = func_362(Local_400.f_0);
		switch (Local_400.f_3)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					Local_400.f_3 = 10;
					return;
				}
				if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_400.f_29, Local_400.f_29.f_3, Local_400.f_29.f_6, false, true, 0) && (func_361(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_400.f_29.f_68, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)) && (iVar24 == iLocal_670 || iVar24 == 145))
				{
					if (func_360())
					{
						bVar25 = true;
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
							if (ENTITY::DOES_ENTITY_EXIST(iVar12))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, false))
								{
									iVar26 = ENTITY::GET_ENTITY_MODEL(iVar12);
									if (((((((((!func_67(iVar26) || func_66(iVar12)) || func_65(iVar12)) || !func_39(iVar26, 0, -1)) || VEHICLE::IS_BIG_VEHICLE(iVar12)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar26) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar26)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar26))) || iVar26 == joaat("monster")) || FIRE::IS_ENTITY_ON_FIRE(iVar12)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar12)) || (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("taxi_procedural")) > 0))
									{
										bVar25 = false;
									}
								}
								else
								{
									bVar25 = false;
								}
							}
						}
						else if (STREAMING::DOES_ANIM_DICT_EXIST(sVar14))
						{
							STREAMING::REQUEST_ANIM_DICT(sVar14);
							if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar14))
							{
								bVar25 = false;
							}
						}
						if (bVar25)
						{
							func_267(&iLocal_654, 3, "WEB_VEH_ENTER" /* GXT: Press ~a~ to enter garage. */, 0, 0, 0, 0);
							iLocal_1032 = 0;
							Local_400.f_3 = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_266("WEB_VEH_INV" /* GXT: This vehicle cannot be stored in this garage. */))
							{
								func_265("WEB_VEH_INV" /* GXT: This vehicle cannot be stored in this garage. */, -1);
								StringCopy(&cLocal_1021, "WEB_VEH_INV" /* GXT: This vehicle cannot be stored in this garage. */, 16);
								bVar11 = true;
							}
						}
					}
					else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_266("WEB_VEH_FULL" /* GXT: Your garage is full. Enter on foot to remove a vehicle. */))
					{
						func_265("WEB_VEH_FULL" /* GXT: Your garage is full. Enter on foot to remove a vehicle. */, -1);
						StringCopy(&cLocal_1021, "WEB_VEH_FULL" /* GXT: Your garage is full. Enter on foot to remove a vehicle. */, 16);
						bVar11 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_1030)
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_1030 = 0;
						STREAMING::REQUEST_ANIM_DICT(sVar14);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sVar14))
						{
							iLocal_1030 = 1;
						}
					}
					else
					{
						STREAMING::REMOVE_ANIM_DICT(sVar14);
						iLocal_1030 = 1;
					}
				}
				iVar27 = 1;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, false))
						{
							iVar28 = ENTITY::GET_ENTITY_MODEL(iVar12);
							if ((((((((!func_67(iVar28) || func_66(iVar12)) || func_65(iVar12)) || VEHICLE::IS_BIG_VEHICLE(iVar12)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar28) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar28)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar28))) || iVar28 == joaat("monster")) || FIRE::IS_ENTITY_ON_FIRE(iVar12)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar12)) || (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("taxi_procedural")) > 0))
							{
								iVar27 = 0;
							}
						}
						else
						{
							iVar27 = 0;
						}
					}
				}
				if (((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_400.f_29, Local_400.f_29.f_3, Local_400.f_29.f_6, false, true, 0) && (func_361(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_400.f_29.f_68, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_360()) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)) && !func_364()) && (iVar24 == iLocal_670 || iVar24 == 145)) && iVar27)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || (STREAMING::HAS_ANIM_DICT_LOADED(sVar14) || !STREAMING::DOES_ANIM_DICT_EXIST(sVar14)))
					{
						if (func_262(iLocal_654, 1))
						{
							func_72(&iLocal_654);
							iLocal_1030 = 0;
							Local_400.f_3 = 2;
						}
						func_358(47, 0);
						func_353(47, 0);
						Local_400.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var15, "v_garagem_sp");
						if (INTERIOR::IS_VALID_INTERIOR(Local_400.f_112))
						{
							if (!INTERIOR::IS_INTERIOR_READY(Local_400.f_112))
							{
								if ((MISC::GET_FRAME_COUNT() % 10) == 0)
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_400.f_112);
								}
							}
							StringCopy(&Global_39672, "v_garagem_sp", 32);
						}
						if (!iLocal_1029 && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar29 = func_351(Local_400.f_0);
								func_64(&Var30, iVar29);
								Var18 = { Var30 };
								STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var18, 20f, 0);
							}
							else
							{
								STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var21 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_1029 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1029 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_1029 = 0;
					}
					iLocal_1030 = 0;
					func_72(&iLocal_654);
					STREAMING::REMOVE_ANIM_DICT(sVar14);
					Local_400.f_3 = 0;
				}
				break;
			
			case 2:
				func_358(47, 0);
				func_353(47, 0);
				PLAYER::FORCE_CLEANUP(8);
				Global_77479.f_577 = 1;
				Global_77479.f_578 = { Local_400.f_29.f_55 };
				iLocal_1010 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, false))
					{
						if (func_361(ENTITY::GET_ENTITY_HEADING(iVar12), Local_400.f_29.f_68, 90f))
						{
							iLocal_1032 = 0;
						}
						else
						{
							iLocal_1032 = 1;
						}
						ENTITY::SET_ENTITY_PROOFS(iVar12, true, true, true, true, true, true, false, false);
						MISC::CLEAR_AREA_OF_OBJECTS(Local_544.f_86[0 /*6*/], 20f, 0);
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_544.f_86[0 /*6*/], 20f, 0);
						GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_544.f_86[0 /*6*/], 7f);
						ENTITY::SET_ENTITY_COORDS(iVar12, Local_544.f_86[0 /*6*/], true, false, false, true);
						if (iLocal_1032 && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_HEADING(iVar12, (Local_544.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							ENTITY::SET_ENTITY_HEADING(iVar12, Local_544.f_86[0 /*6*/].f_3.f_2);
						}
						if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
						{
							PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 0, -1);
							PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar12, 5f);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					func_345(1, 1, 1, 0, 0, 0, 0);
					func_344(&(Local_544[1 /*15*/]), &(Local_400.f_110), &(Local_400.f_111));
					Local_400.f_3 = 3;
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1025) && !ENTITY::IS_ENTITY_DEAD(iLocal_1025, false))
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1025) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1025, true))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1025);
						}
					}
					iLocal_1025 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_1025) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1025, false)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_1025))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_1025))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_1025)))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1025))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1025, false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1025) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1025, false))
						{
							if (!bVar51)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1025, Local_400.f_29, Local_400.f_29.f_3, Local_400.f_29.f_6, false, true, 0))
								{
									bVar51 = true;
								}
							}
							if (!bVar51)
							{
								fVar52 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1025, true), Local_544[0 /*15*/]);
								if (fVar52 < (5f * 5f))
								{
									bVar51 = true;
								}
							}
							if (bVar51)
							{
								iVar53 = func_52(24);
								if (func_343(&Local_774, 24))
								{
									func_338(&Local_774, func_536());
									if (ENTITY::DOES_ENTITY_EXIST(iVar53))
									{
										VEHICLE::DELETE_VEHICLE(&iVar53);
									}
								}
								if (Local_400.f_0 == 21)
								{
									MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, true, false, false, false);
									func_336(iLocal_1025, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_400.f_0 == 22)
								{
									MISC::CLEAR_AREA(-62.0307f, -1839.8585f, 25.6787f, 5f, true, false, false, false);
									func_336(iLocal_1025, -62.0307f, -1839.8585f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_400.f_0 == 23)
								{
									MISC::CLEAR_AREA(-234.7648f, -1150.3105f, 21.9224f, 5f, true, false, false, false);
									func_336(iLocal_1025, -234.7648f, -1150.3105f, 21.9224f, 270.8741f, 24, 0);
								}
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1025, 5f);
							}
						}
					}
					else
					{
						iLocal_1025 = 0;
					}
					Var54 = { Local_400.f_29 * Vector(2f, 2f, 2f) + Local_400.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var57 = { Local_400.f_29 * Vector(1f, 1f, 1f) + Local_400.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_400.f_29, Var54.f_0, Var54.f_1, Local_400.f_29.f_3.f_2, Local_400.f_29.f_6, false, true, 0))
					{
						sLocal_1033 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_1033 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1033 = "gar_open_2_left";
								break;
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var54.f_0, Var54.f_1, Local_400.f_29.f_2, Var57.f_0, Var57.f_1, Local_400.f_29.f_3.f_2, Local_400.f_29.f_6, false, true, 0))
					{
						sLocal_1033 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_1033 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1033 = "gar_open_1_right";
								break;
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var57.f_0, Var57.f_1, Local_400.f_29.f_2, Local_400.f_29.f_3, Local_400.f_29.f_6, false, true, 0))
					{
						sLocal_1033 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_1033 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_1033 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_1033 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
						{
							case 0:
								sLocal_1033 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1033 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_1033 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_1033 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_1033 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_1033 = "gar_open_3_right";
								break;
							}
					}
					MISC::CLEAR_AREA_OF_OBJECTS(Local_544.f_73[0 /*4*/], 20f, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_544.f_86[0 /*6*/], 20f, 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_544.f_73[0 /*4*/], true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_544.f_73[0 /*4*/].f_3);
					iLocal_659 = PED::CREATE_SYNCHRONIZED_SCENE(Local_544.f_73[0 /*4*/], 0f, 0f, Local_544.f_73[0 /*4*/].f_3, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_659, sVar14, sLocal_1033, 8f, -8f, 0, 0, 1000f, 0);
					func_345(1, 1, 1, 0, 0, 0, 0);
					func_344(&(Local_544[0 /*15*/]), &(Local_400.f_110), &(Local_400.f_111));
					Local_400.f_3 = 4;
				}
				Local_400.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var15, "v_garagem_sp");
				if (INTERIOR::IS_VALID_INTERIOR(Local_400.f_112))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_400.f_112))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_400.f_112);
					}
					StringCopy(&Global_39672, "v_garagem_sp", 32);
				}
				if (!iLocal_1029)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar60 = func_351(Local_400.f_0);
						func_64(&Var61, iVar60);
						Var18 = { Var61 };
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var18, 20f, 0);
					}
					else
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var21, 20f, 0);
					}
				}
				MISC::SET_BIT(&(Local_672.f_9), 25);
				func_332(198.0043f, -999.7775f, -100f, 50f, 0);
				func_119(Local_400.f_0);
				func_119(26);
				func_119(29);
				func_119(32);
				func_119(28);
				func_119(31);
				func_119(34);
				func_119(27);
				func_119(30);
				func_119(33);
				SYSTEM::SETTIMERA(0);
				iLocal_1031 = 0;
				break;
			
			case 4:
				bVar82 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (INTERIOR::IS_VALID_INTERIOR(Local_400.f_112))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_400.f_112))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_400.f_112);
					}
					StringCopy(&Global_39672, "v_garagem_sp", 32);
				}
				else
				{
					Local_400.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var15, "v_garagem_sp");
				}
				if (func_331())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_400.f_110) && CAM::IS_CAM_RENDERING(Local_400.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_400.f_110))
					{
						bVar82 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_544[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_400.f_111) && CAM::IS_CAM_RENDERING(Local_400.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_400.f_111))
					{
						bVar82 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_544[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else
				{
					bVar82 = false;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_659))
				{
					fVar83 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_659);
					if (fVar83 < 0.4f)
					{
						bVar82 = false;
					}
				}
				if (bVar82)
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_400.f_3 = 5;
				}
				break;
			
			case 5:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar84 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iVar84, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iVar84, "hold", (2250f / 1000f));
					func_345(0, 1, 1, 0, 0, 0, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(Local_400.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_400.f_110, false);
						CAM::DESTROY_CAM(Local_400.f_110, false);
					}
					if (CAM::DOES_CAM_EXIST(Local_400.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_400.f_111, false);
						CAM::DESTROY_CAM(Local_400.f_111, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1035))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_1035, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1035, false);
						iLocal_1035 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PLAYER::FORCE_CLEANUP(8);
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_659))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_659);
					}
					iLocal_659 = -1;
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 194.53943f, -1026.32f, -100f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 334.1665f);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					SYSTEM::SETTIMERA(0);
					Local_400.f_3 = 6;
				}
				break;
			
			case 6:
				func_330(Local_400.f_0);
				if (CAM::IS_SCREEN_FADED_OUT() && SYSTEM::TIMERA() > 2250)
				{
					STREAMING::REMOVE_ANIM_DICT(sVar14);
					func_329();
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					CAM::DO_SCREEN_FADE_IN(800);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					SYSTEM::SETTIMERA(0);
					iLocal_1011 = 0;
					iLocal_1029 = 0;
					Local_400.f_3 = 10;
				}
				break;
			
			case 3:
				func_330(Local_400.f_0);
				bVar85 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (INTERIOR::IS_VALID_INTERIOR(Local_400.f_112))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_400.f_112))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_400.f_112);
					}
					StringCopy(&Global_39672, "v_garagem_sp", 32);
				}
				else
				{
					Local_400.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var15, "v_garagem_sp");
				}
				if (func_331())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_400.f_110) && CAM::IS_CAM_RENDERING(Local_400.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_400.f_110))
					{
						bVar85 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_544[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_400.f_111) && CAM::IS_CAM_RENDERING(Local_400.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_400.f_111))
					{
						bVar85 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_544[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else
				{
					bVar85 = false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Var86 = { 0f, 0f, 0f };
					Var86.f_3 = 0f;
					func_321(PLAYER::PLAYER_PED_ID(), Local_544.f_86[0 /*6*/], Local_544.f_66[0 /*3*/], ((Local_544[1 /*15*/].f_14 * 1000f) - 500f), Var86, 2, &fVar13);
				}
				if (bVar85)
				{
					func_329();
					SYSTEM::SETTIMERA(0);
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_400.f_3 = 35;
				}
				break;
			
			case 35:
				bVar90 = true;
				func_330(Local_400.f_0);
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_544.f_61[1] * 1000f))
				{
					bVar90 = false;
				}
				if (bVar90)
				{
					func_329();
					func_345(0, 1, 1, 0, 0, 0, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(Local_400.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_400.f_110, false);
						CAM::DESTROY_CAM(Local_400.f_110, false);
					}
					if (CAM::DOES_CAM_EXIST(Local_400.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_400.f_111, false);
						CAM::DESTROY_CAM(Local_400.f_111, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1035))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_1035, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1035, false);
						iLocal_1035 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PLAYER::FORCE_CLEANUP(8);
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, false))
						{
							iVar91 = func_351(Local_400.f_0);
							func_64(&Var92, iVar91);
							ENTITY::SET_ENTITY_COORDS(iVar12, Var92, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar12, Var92.f_3);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar12, true);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar12, false, true, false);
							VEHICLE::SET_VEHICLE_LIGHTS(iVar12, 4);
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iVar12, 1, false);
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iVar12, 0, false);
							AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar12, false);
							ENTITY::SET_ENTITY_PROOFS(iVar12, false, false, false, false, false, false, false, false);
							TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar12, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iVar12, false);
							Var113.f_9 = 49;
							Var113.f_59 = 2;
							func_32(iVar12, &Var113);
							func_120(iVar91, &Var113, 0f, 0f, 0f, -1f, 145);
							func_30(iVar91, iVar12, 1);
							func_320(iVar12);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
					iVar191 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
					iVar192 = 0;
					while (iVar192 < iVar191)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar192]) && !PED::IS_PED_INJURED(uVar0[iVar192])) && PED::IS_PED_GROUP_MEMBER(uVar0[iVar192], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uVar0[iVar192], 206.802f, -1018.0115f, -100f, false, false, true);
						}
						iVar192++;
					}
					SYSTEM::SETTIMERA(0);
					iLocal_1011 = 0;
					iLocal_1029 = 0;
					CAM::DO_SCREEN_FADE_IN(800);
					Local_400.f_3 = 10;
				}
				break;
			
			case 10:
				if (SYSTEM::TIMERA() < 7000 || !Global_113810.f_32752.f_4800)
				{
					if (!Global_113810.f_32752.f_4800)
					{
						if (iLocal_1011 == 0)
						{
							func_265("CAR_GAR_05" /* GXT: Vehicles purchased from websites or driven into the garage will be stored here. */, -1);
							StringCopy(&cLocal_1021, "CAR_GAR_05" /* GXT: Vehicles purchased from websites or driven into the garage will be stored here. */, 16);
							bVar11 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								iLocal_1011++;
							}
						}
						else if (iLocal_1011 == 1)
						{
							func_265("CAR_GAR_06" /* GXT: Special vehicles can also be collected here. */, -1);
							StringCopy(&cLocal_1021, "CAR_GAR_06" /* GXT: Special vehicles can also be collected here. */, 16);
							bVar11 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								Global_113810.f_32752.f_4800 = 1;
							}
						}
					}
					else
					{
						func_265("CAR_GAR_EXIT" /* GXT: To leave the Garage, walk to the exit or get in a vehicle. */, -1);
						StringCopy(&cLocal_1021, "CAR_GAR_EXIT" /* GXT: To leave the Garage, walk to the exit or get in a vehicle. */, 16);
						bVar11 = true;
					}
				}
				else
				{
					Global_113810.f_32752.f_4800 = 1;
				}
				iVar193 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (iLocal_654 != -1)
					{
						func_72(&iLocal_654);
					}
					iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, false))
					{
						if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar12) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
						{
							if (!(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())))
							{
								if ((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) != 0f || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/))
								{
									iVar193 = 1;
								}
								if ((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) != 0f || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/))
								{
									iVar193 = 1;
								}
							}
						}
					}
				}
				else
				{
					STREAMING::REQUEST_ANIM_DICT(sVar14);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 191.04915f, -1026.3182f, -104.99996f, 198.0297f, -1026.3217f, -96.81246f, 2.0625f, false, true, 0) && func_361(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 180f, 90f))
					{
						if (iLocal_653 != -1)
						{
							func_72(&iLocal_653);
						}
						if (iLocal_654 == -1)
						{
							func_267(&iLocal_654, 3, "WEB_VEH_EXIT" /* GXT: Press ~a~ to exit garage. */, 0, 0, 0, 0);
						}
						if (!iLocal_653 != -1 && !iLocal_654 == -1)
						{
							if (func_262(iLocal_654, 1))
							{
								func_72(&iLocal_654);
								iVar193 = 1;
							}
						}
					}
					else if (iLocal_654 != -1)
					{
						func_72(&iLocal_654);
					}
				}
				if (iLocal_1014)
				{
					iVar193 = 1;
				}
				if (iVar193 && !func_319())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || iLocal_1014)
					{
						SYSTEM::SETTIMERA(0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_544.f_73[2 /*4*/], 20f, 0);
						if (iLocal_654 != -1)
						{
							func_72(&iLocal_654);
						}
						Local_400.f_3 = 12;
					}
					else if (STREAMING::HAS_ANIM_DICT_LOADED(sVar14))
					{
						sLocal_1033 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
						{
							case 0:
								sLocal_1033 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1033 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_1033 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_1033 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_1033 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_1033 = "gar_open_3_right";
								break;
						}
						iLocal_659 = PED::CREATE_SYNCHRONIZED_SCENE(Local_544.f_73[1 /*4*/], 0f, 0f, Local_544.f_73[1 /*4*/].f_3, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_659, sVar14, sLocal_1033, 8f, -8f, 0, 0, 1000f, 0);
						func_345(1, 1, 1, 0, 0, 0, 0);
						func_344(&(Local_544[2 /*15*/]), &(Local_400.f_110), &(Local_400.f_111));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_544.f_73[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_654 != -1)
						{
							func_72(&iLocal_654);
						}
						Local_400.f_3 = 11;
					}
					else if (!STREAMING::DOES_ANIM_DICT_EXIST(sVar14))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_544.f_73[1 /*4*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_544.f_73[1 /*4*/].f_3);
						func_345(1, 1, 1, 0, 0, 0, 0);
						func_344(&(Local_544[2 /*15*/]), &(Local_400.f_110), &(Local_400.f_111));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_544.f_73[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_654 != -1)
						{
							func_72(&iLocal_654);
						}
						Local_400.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar194 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (func_331())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_400.f_110) && CAM::IS_CAM_RENDERING(Local_400.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_400.f_110))
					{
						bVar194 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_544[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_400.f_111) && CAM::IS_CAM_RENDERING(Local_400.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_400.f_111))
					{
						bVar194 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_544[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else
				{
					bVar194 = false;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_659))
				{
					fVar195 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_659);
					if (fVar195 < 0.4f)
					{
						bVar194 = false;
					}
				}
				if (bVar194)
				{
					iLocal_1011 = 0;
					iLocal_1029 = 0;
					CAM::DO_SCREEN_FADE_OUT(800);
					SYSTEM::SETTIMERA(0);
					Local_400.f_3 = 13;
				}
				break;
			
			case 12:
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				if (SYSTEM::TIMERA() > 500)
				{
					iVar196 = func_318();
					if ((iVar196 == 21 || iVar196 == 22) || iVar196 == 23)
					{
						Var197.f_9 = 49;
						Var197.f_59 = 2;
						func_120(iVar196, &Var197, 0f, 0f, 0f, -1f, 145);
						func_122(iVar196);
					}
					else if (iVar196 != -1)
					{
						if (!iLocal_1014)
						{
							func_542(iVar196, 0);
							func_122(iVar196);
						}
					}
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					STREAMING::REMOVE_ANIM_DICT(sVar14);
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_400.f_3 = 13;
				}
				break;
			
			case 13:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar275 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iVar275, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iVar275, "hold", (2250f / 1000f));
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(Local_400.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_400.f_110, false);
						CAM::DESTROY_CAM(Local_400.f_110, false);
					}
					if (CAM::DOES_CAM_EXIST(Local_400.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_400.f_111, false);
						CAM::DESTROY_CAM(Local_400.f_111, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1035))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_1035, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1035, false);
						iLocal_1035 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::FORCE_CLEANUP(8);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!iLocal_1014)
						{
							iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, false))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								ENTITY::SET_ENTITY_COORDS(iVar12, Local_400.f_29.f_70[1 /*3*/], true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar12, Local_400.f_29.f_77[1]);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar12, 5f);
							}
						}
					}
					else
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_659))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_659);
						}
						iLocal_659 = -1;
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_400.f_29.f_70[1 /*3*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_400.f_29.f_77[1]);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					SYSTEM::SETTIMERA(0);
					Local_400.f_3 = 14;
				}
				break;
			
			case 14:
				if (CAM::IS_SCREEN_FADED_OUT() && SYSTEM::TIMERA() > 2250)
				{
					bVar276 = true;
					if (iLocal_1014)
					{
						STREAMING::REQUEST_MODEL(iLocal_1015);
						if (STREAMING::HAS_MODEL_LOADED(iLocal_1015))
						{
							iVar277 = VEHICLE::CREATE_VEHICLE(iLocal_1015, Local_400.f_29.f_70[0 /*3*/], Local_400.f_29.f_77[0], true, true, false);
							if (iLocal_1015 == joaat("windsor"))
							{
								VEHICLE::SET_VEHICLE_LIVERY(iVar277, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar277) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar277, false))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar277, -1);
								VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar277, 0f);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1015);
								if (func_123(iLocal_1015))
								{
									switch (iLocal_1015)
									{
										case joaat("marshall"):
											VEHICLE::SET_VEHICLE_LIVERY(iVar277, bLocal_649);
											break;
										}
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar277);
							}
							iLocal_1014 = 0;
						}
						else
						{
							bVar276 = false;
						}
					}
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
					}
					else
					{
						bVar276 = false;
					}
					if (bVar276)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1025) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1025, false))
						{
							iVar278 = func_52(24);
							if (func_343(&Local_774, 24))
							{
								func_338(&Local_774, func_536());
								if (ENTITY::DOES_ENTITY_EXIST(iVar278))
								{
									VEHICLE::DELETE_VEHICLE(&iVar278);
								}
							}
							if (Local_400.f_0 == 21)
							{
								MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, true, false, false, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_1025, -89.377f, 92.6583f, 71.2349f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_1025, 154.4846f);
								func_336(iLocal_1025, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_400.f_0 == 22)
							{
								MISC::CLEAR_AREA(-62.0307f, -1839.8585f, 25.6787f, 5f, true, false, false, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_1025, -62.0307f, -1839.8585f, 25.6787f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_1025, 319.6985f);
								func_336(iLocal_1025, -62.0307f, -1839.8585f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_400.f_0 == 23)
							{
								MISC::CLEAR_AREA(-234.7648f, -1150.3105f, 21.9224f, 5f, true, false, false, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_1025, -234.7648f, -1150.3105f, 21.9224f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_1025, 270.8741f);
								func_336(iLocal_1025, -234.7648f, -1150.3105f, 21.9224f, 270.8741f, 24, 0);
							}
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1025, 5f);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, false))
							{
								ENTITY::SET_ENTITY_COORDS(iVar12, Local_544.f_66[1 /*3*/], true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar12, Local_400.f_29.f_77[0]);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar12, 5f);
								if ((iLocal_1015 == joaat("monster") || iLocal_1015 == joaat("marshall")) || iLocal_1015 == joaat("rhino"))
								{
									VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar12, false);
								}
								else
								{
									VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar12, true);
								}
								if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
								{
									PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 0, -1);
									PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
								}
								AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar12, true);
								func_282(func_536(), &iVar12, 3, 1);
							}
							CAM::DO_SCREEN_FADE_IN(800);
							func_345(1, 1, 1, 0, 0, 0, 0);
							func_344(&(Local_544[3 /*15*/]), &(Local_400.f_110), &(Local_400.f_111));
							iLocal_1032 = 0;
							iLocal_1034 = -1;
							Local_400.f_3 = 15;
						}
						else
						{
							STREAMING::REMOVE_ANIM_DICT(sVar14);
							func_329();
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							if (CAM::DOES_CAM_EXIST(Local_400.f_110))
							{
								CAM::SET_CAM_ACTIVE(Local_400.f_110, false);
								CAM::DESTROY_CAM(Local_400.f_110, false);
							}
							if (CAM::DOES_CAM_EXIST(Local_400.f_111))
							{
								CAM::SET_CAM_ACTIVE(Local_400.f_111, false);
								CAM::DESTROY_CAM(Local_400.f_111, false);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1035))
							{
								ENTITY::SET_ENTITY_COLLISION(iLocal_1035, true, false);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_1035, false);
								iLocal_1035 = 0;
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							PLAYER::FORCE_CLEANUP(8);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_400.f_29.f_70[1 /*3*/], true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_400.f_29.f_77[1]);
							CAM::DO_SCREEN_FADE_IN(800);
							SYSTEM::SETTIMERA(0);
							func_332(198.0043f, -999.7775f, -100f, 50f, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							Local_400.f_3 = 16;
						}
						if (Local_400.f_3 != 16)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						}
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(false);
						SYSTEM::SETTIMERA(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						iVar279 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
						iVar280 = 0;
						while (iVar280 < iVar279)
						{
							if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar280]) && !PED::IS_PED_INJURED(uVar0[iVar280])) && PED::IS_PED_GROUP_MEMBER(uVar0[iVar280], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if ((ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, false)) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar12) > iVar280)
									{
										PED::SET_PED_INTO_VEHICLE(uVar0[iVar280], iVar12, iVar280);
									}
								}
								else
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uVar0[iVar280], Local_400.f_29.f_70[1 /*3*/], false, false, true);
								}
							}
							iVar280++;
						}
						PLAYER::FORCE_CLEANUP(8);
						iLocal_1031 = 0;
					}
				}
				break;
			
			case 15:
				bVar281 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (func_331())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_400.f_110) && CAM::IS_CAM_RENDERING(Local_400.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_400.f_110))
					{
						bVar281 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_544[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_400.f_111) && CAM::IS_CAM_RENDERING(Local_400.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_400.f_111))
					{
						bVar281 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_544[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else
				{
					bVar281 = false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_321(PLAYER::PLAYER_PED_ID(), Local_544.f_86[1 /*6*/], Local_544.f_66[1 /*3*/], ((Local_544[3 /*15*/].f_14 * 1000f) - 500f), Local_544.f_73[2 /*4*/], 3, &fVar13);
				}
				if (iLocal_1034 < 1 && func_281(PLAYER::PLAYER_PED_ID(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_1034 == 0)
					{
						func_332(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_1034++;
				}
				if (bVar281)
				{
					SYSTEM::SETTIMERA(0);
					Local_400.f_3 = 16;
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				break;
			
			case 16:
				bVar282 = true;
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_544.f_61[3] * 1000f))
				{
					bVar282 = false;
				}
				if (bVar282)
				{
					Local_400.f_3 = 17;
				}
				break;
			
			case 17:
				if (INTERIOR::IS_VALID_INTERIOR(Local_400.f_112))
				{
					INTERIOR::UNPIN_INTERIOR(Local_400.f_112);
				}
				StringCopy(&Global_39672, "", 32);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				func_280(47, 1);
				func_278(47, 1);
				Global_77479.f_577 = 0;
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				SYSTEM::SETTIMERA(0);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(Local_400.f_110))
				{
					CAM::SET_CAM_ACTIVE(Local_400.f_110, false);
					CAM::DESTROY_CAM(Local_400.f_110, false);
				}
				if (CAM::DOES_CAM_EXIST(Local_400.f_111))
				{
					CAM::SET_CAM_ACTIVE(Local_400.f_111, false);
					CAM::DESTROY_CAM(Local_400.f_111, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1035))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_1035, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1035, false);
					iLocal_1035 = 0;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, false))
					{
						ENTITY::SET_ENTITY_COORDS(iVar12, Local_544.f_73[2 /*4*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar12, Local_544.f_73[2 /*4*/].f_3);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar12, 5f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
				}
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				func_345(0, 1, 1, 0, 0, 0, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (iLocal_1010 > 0)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_1010, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1025) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1025)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1025, false)) && iLocal_1025 != func_52(24))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1025);
				}
				MISC::CLEAR_BIT(&(Local_672.f_9), 25);
				iLocal_1029 = 0;
				Local_400.f_3 = 18;
				break;
			
			case 18:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					Local_400.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_77479.f_577)
		{
			func_280(47, 1);
			func_278(47, 1);
			Global_77479.f_577 = 0;
		}
		Local_400.f_3 = 0;
		if (iLocal_654 != -1)
		{
			func_72(&iLocal_654);
		}
	}
	if (Global_77479.f_577)
	{
		HUD::HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME();
		func_277();
		func_79(0);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 38 /*INPUT_PICKUP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 46 /*INPUT_TALK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	}
	if (!bVar11 && Local_400.f_2 == 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1021))
			{
				if ((((func_266("WEB_VEH_INV" /* GXT: This vehicle cannot be stored in this garage. */) || func_266("WEB_VEH_FULL" /* GXT: Your garage is full. Enter on foot to remove a vehicle. */)) || func_266("CAR_GAR_05" /* GXT: Vehicles purchased from websites or driven into the garage will be stored here. */)) || func_266("CAR_GAR_06" /* GXT: Special vehicles can also be collected here. */)) || func_266("CAR_GAR_EXIT" /* GXT: To leave the Garage, walk to the exit or get in a vehicle. */))
				{
					HUD::CLEAR_HELP(true);
				}
				StringCopy(&cLocal_1021, "", 16);
			}
		}
	}
}

void func_277()//Position - 0x206A0
{
	Global_23251.f_6 = 1;
}

void func_278(int iParam0, bool bParam1)//Position - 0x206AE
{
	struct<2> Var0;
	
	Var0 = { func_279(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_38726[Var0.f_1]), Var0.f_0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_38726[Var0.f_1]), Var0.f_0);
	}
}

struct<2> func_279(int iParam0)//Position - 0x206F1
{
	struct<2> Var0;
	
	Var0.f_0 = (iParam0 % 32);
	Var0.f_1 = (iParam0 / 32);
	if (Var0.f_1 >= 8)
	{
		Var0.f_0 = -1;
		Var0.f_1 = -1;
	}
	return Var0;
}

void func_280(int iParam0, bool bParam1)//Position - 0x2071E
{
	struct<2> Var0;
	
	Var0 = { func_279(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_38717[Var0.f_1]), Var0.f_0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_38717[Var0.f_1]), Var0.f_0);
	}
}

float func_281(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x20761
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

void func_282(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2079B
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_25(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
	{
		if (iParam2 > Global_113810.f_2366.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_31(*iParam1, iParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, false))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_113810.f_2366.f_539.f_4317[iParam0] = 10;
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && func_285(*iParam1, 0, &uVar0))
		{
			func_34(iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_113810.f_20121[iParam0 /*43*/].f_40 = 1;
				Global_113810.f_20121[iParam0 /*43*/] = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_113810.f_20121[iParam0 /*43*/].f_3 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_113810.f_20121[iParam0 /*43*/].f_4 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_113810.f_20121[iParam0 /*43*/].f_5 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_113810.f_20121[iParam0 /*43*/].f_6 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_113810.f_20121[iParam0 /*43*/].f_10 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_113810.f_20121[iParam0 /*43*/].f_16 = !Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_113810.f_20121[iParam0 /*43*/].f_19 = { Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_113810.f_20121[iParam0 /*43*/].f_23 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_113810.f_20121[iParam0 /*43*/].f_7 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_113810.f_20121[iParam0 /*43*/].f_8 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_113810.f_20121[iParam0 /*43*/].f_9 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_113810.f_20121[iParam0 /*43*/].f_11 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_113810.f_20121[iParam0 /*43*/].f_12 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_113810.f_20121[iParam0 /*43*/].f_13 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_113810.f_20121[iParam0 /*43*/].f_14 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_113810.f_20121[iParam0 /*43*/].f_15 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_113810.f_20121[iParam0 /*43*/].f_18 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_113810.f_20121[iParam0 /*43*/].f_17 = Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_113810.f_20121[iParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_113810.f_20121[iParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_113810.f_20121[iParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_113810.f_20121[iParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_113810.f_20121[iParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_113810.f_20121[iParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_113810.f_20121[iParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_113810.f_20121[iParam0 /*43*/].f_32 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*iParam1);
				Global_113810.f_20121[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_113810.f_20121[iParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_113810.f_20121[iParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_113810.f_20121[iParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_113810.f_20121[iParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_113810.f_20121[iParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_113810.f_20121[iParam0 /*43*/].f_31 = func_284(*iParam1);
				Global_113810.f_20121[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_283(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_113810.f_20121[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_283(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113810.f_20121[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_283(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x213AF
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_149(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

float func_284(int iParam0)//Position - 0x21422
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

int func_285(int iParam0, bool bParam1, var uParam2)//Position - 0x214D2
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((!func_316(iVar0, bParam1, uParam2) && !func_315(PLAYER::PLAYER_ID())) && !func_296(iParam0))
	{
		return 0;
	}
	if (func_315(PLAYER::PLAYER_ID()))
	{
		if (func_294(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_293(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)))
	{
		bVar1 = true;
	}
	if (((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_290(iParam0)) && !bVar1) && !(func_289(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_286(PLAYER::PLAYER_ID())))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("monster3"):
			case joaat("monster4"):
			case joaat("monster5"):
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((func_65(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_286(int iParam0)//Position - 0x21640
{
	if (iParam0 != func_158())
	{
		if (func_288(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_287(int iParam0)//Position - 0x21687
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
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
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

int func_288(int iParam0, bool bParam1, bool bParam2)//Position - 0x21B3B
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
				if (iVar0 == Global_2672524.f_3)
				{
					return Global_2672524.f_2;
				}
				else if (Global_2657704[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_289(int iParam0)//Position - 0x21B9B
{
	if (((iParam0 == joaat("mule4") || iParam0 == joaat("pounder2")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0)//Position - 0x21BDD
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("halftrack"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("bruiser"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			return 1;
			break;
		
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (func_292(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case joaat("minitank"):
		case joaat("burrito2"):
			return 1;
		
		case joaat("brickade2"):
			if (func_291(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case joaat("journey2"):
			return 1;
			break;
	}
	return 0;
}

int func_291(int iParam0)//Position - 0x21CA5
{
	if (iParam0 != func_158())
	{
		if (func_288(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7) == 26;
			}
		}
	}
	return 0;
}

int func_292(int iParam0)//Position - 0x21CEC
{
	if (iParam0 != func_158())
	{
		if (func_288(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7) == 13;
			}
		}
	}
	return 0;
}

int func_293(int iParam0)//Position - 0x21D33
{
	if (iParam0 != func_158())
	{
		if (func_288(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7) == 7;
			}
		}
	}
	return 0;
}

int func_294(int iParam0)//Position - 0x21D79
{
	bool bVar0;
	
	if (iParam0 == joaat("oppressor2"))
	{
		return 0;
	}
	bVar0 = false;
	if ((iParam0 == joaat("riot2") || iParam0 == joaat("chernobog")) || iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_34153 /* Tunable: -1259888294 */)
		{
			bVar0 = true;
		}
	}
	if ((((!func_295(PLAYER::PLAYER_ID()) && iParam0 != joaat("thruster")) && iParam0 != joaat("avenger")) && iParam0 != func_43(1)) && !bVar0)
	{
		return 0;
	}
	return 1;
}

int func_295(int iParam0)//Position - 0x21E0A
{
	if (iParam0 != func_158())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_307, 2);
	}
	return 0;
}

int func_296(int iParam0)//Position - 0x21E30
{
	if (func_314(PLAYER::PLAYER_ID()) || func_313(PLAYER::PLAYER_ID()))
	{
		if (func_297(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_297(int iParam0)//Position - 0x21E5F
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	if (func_301(iParam0, 0))
	{
		return 1;
	}
	if (func_300(PLAYER::PLAYER_ID()) && ((((!func_294(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("openwheel1"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("openwheel2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("formula"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("formula2"))))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("oppressor2")))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("thruster")))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
		{
			if (!func_298(iParam0))
			{
				return 1;
			}
		}
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Thruster"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Thruster") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
		{
			if (!func_298(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_298(int iParam0)//Position - 0x21F97
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if ((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_290(iParam0)) || func_299(iVar0))
		{
			return 1;
		}
		switch (iVar0)
		{
			case joaat("slamtruck"):
			case joaat("patriot2"):
			case joaat("mule4"):
			case joaat("pounder2"):
			case joaat("speedo4"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_299(int iParam0)//Position - 0x2200E
{
	switch (iParam0)
	{
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("brickade"):
		case joaat("dune"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("boxville5"):
			return 1;
		
		default:
	}
	return 0;
}

int func_300(int iParam0)//Position - 0x2205E
{
	if (iParam0 == func_158())
	{
		return 0;
	}
	if (func_315(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_301(int iParam0, bool bParam1)//Position - 0x22097
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_303(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
			{
				if (Global_2794162.f_304 == iParam0)
				{
					return 1;
				}
				else if (func_302(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_302(int iParam0)//Position - 0x220F2
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2672524.f_221[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_303(int iParam0, int iParam1)//Position - 0x2212B
{
	if (iParam1 == 0)
	{
		if (func_312(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_311();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14909 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return func_310();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14910 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return func_310();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14908 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
			{
				return func_310();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14911 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return func_310();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14913 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
			{
				return func_310();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_309();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_19321 /* Tunable: ENABLE_IE_COMET3 */)
			{
				return func_308();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_19323 /* Tunable: ENABLE_IE_DIABLOUS2 */)
			{
				return func_308();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_19327 /* Tunable: ENABLE_IE_FCR2 */)
			{
				return func_308();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_19324 /* Tunable: ENABLE_IE_ELEGY */)
			{
				return func_308();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_19331 /* Tunable: ENABLE_IE_NERO2 */)
			{
				return func_308();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_19329 /* Tunable: ENABLE_IE_ITALIGTB2 */)
			{
				return func_308();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_19334 /* Tunable: ENABLE_IE_SPECTER2 */)
			{
				return func_308();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_21280 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
			{
				return func_307();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_21281 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
			{
				return func_307();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_306();
			break;
		
		case joaat("glendale"):
			if (func_306() || func_305())
			{
				return 1;
			}
			break;
		
		case joaat("impaler"):
			return func_306();
			break;
		
		case joaat("issi3"):
			return func_306();
			break;
		
		case joaat("gargoyle"):
			return func_306();
			break;
		
		case joaat("dominator"):
			return func_306();
			break;
		
		case joaat("dominator2"):
			return func_306();
			break;
		
		case joaat("imperator"):
			return func_306();
			break;
		
		case joaat("imperator2"):
			return func_306();
			break;
		
		case joaat("imperator3"):
			return func_306();
			break;
		
		case joaat("deathbike"):
			return func_306();
			break;
		
		case joaat("deathbike2"):
			return func_306();
			break;
		
		case joaat("deathbike3"):
			return func_306();
			break;
		
		case joaat("impaler2"):
		case joaat("brutus"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("issi4"):
		case joaat("monster3"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return func_306();
			break;
		
		case joaat("youga2"):
			if (Global_262145.f_29539 /* Tunable: ENABLE_VEH_YOUGA3 */)
			{
				return func_305();
			}
			break;
		
		case joaat("gauntlet3"):
			if (Global_262145.f_29889 /* Tunable: ENABLE_VEH_GAUNTLET5 */)
			{
				return func_305();
			}
			break;
		
		case joaat("manana"):
			if (Global_262145.f_29538 /* Tunable: ENABLE_VEH_MANANA2 */)
			{
				return func_305();
			}
			break;
		
		case joaat("peyote"):
			if (Global_262145.f_29888 /* Tunable: ENABLE_VEH_PEYOTE3 */)
			{
				return func_305();
			}
			break;
		
		case joaat("yosemite"):
			if (Global_262145.f_29887 /* Tunable: ENABLE_VEH_YOSEMITE3 */)
			{
				return func_305();
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("tenf"):
			if (Global_262145.f_33358 /* Tunable: ENABLE_VEHICLE_TENF2 */)
			{
				return func_304();
			}
			break;
		
		case joaat("weevil"):
			if (Global_262145.f_33357 /* Tunable: ENABLE_VEHICLE_WEEVIL2 */)
			{
				return func_304();
			}
			break;
		
		case joaat("brioso2"):
			if (Global_262145.f_33350 /* Tunable: ENABLE_VEHICLE_BRIOSO3 */)
			{
				return func_304();
			}
			break;
		
		case joaat("sentinel3"):
			if (Global_262145.f_33359 /* Tunable: ENABLE_VEHICLE_SENTINEL4 */)
			{
				return func_304();
			}
			break;
	}
	return 0;
}

bool func_304()//Position - 0x225AA
{
	return DLC::IS_DLC_PRESENT(joaat("mpsum2"));
}

bool func_305()//Position - 0x225BB
{
	return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}

bool func_306()//Position - 0x225CC
{
	return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}

bool func_307()//Position - 0x225DD
{
	return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}

bool func_308()//Position - 0x225EE
{
	return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}

bool func_309()//Position - 0x225FF
{
	return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}

bool func_310()//Position - 0x22610
{
	return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}

bool func_311()//Position - 0x22621
{
	return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_312(int iParam0, int iParam1)//Position - 0x22632
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14909 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14910 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14908 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14911 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14913 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14912 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19321 /* Tunable: ENABLE_IE_COMET3 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19323 /* Tunable: ENABLE_IE_DIABLOUS2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19327 /* Tunable: ENABLE_IE_FCR2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19324 /* Tunable: ENABLE_IE_ELEGY */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19331 /* Tunable: ENABLE_IE_NERO2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19329 /* Tunable: ENABLE_IE_ITALIGTB2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19334 /* Tunable: ENABLE_IE_SPECTER2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21280 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21281 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_313(int iParam0)//Position - 0x22A11
{
	if (iParam0 != func_158())
	{
		if (func_288(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_158())
			{
				return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

int func_314(int iParam0)//Position - 0x22A70
{
	if (iParam0 != func_158())
	{
		if (func_288(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_158())
			{
				return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_315(int iParam0)//Position - 0x22AD0
{
	if (iParam0 != func_158())
	{
		if (func_288(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_287(Global_2657704[iParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_316(int iParam0, bool bParam1, var uParam2)//Position - 0x22B17
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2")) || iParam0 == joaat("inductor")) || iParam0 == joaat("inductor2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_293(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((((((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && iParam0 != joaat("rrocket")) && iParam0 != joaat("stryder")) && iParam0 != joaat("verus")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_317(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_317(int iParam0)//Position - 0x22F7F
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

int func_318()//Position - 0x22FA8
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (iVar0 == Global_77479.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_77479.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_77479.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_77479.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_77479.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_77479.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_77479.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_77479.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_77479.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_77479.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_77479.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_77479.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_319()//Position - 0x230D9
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

void func_320(int iParam0)//Position - 0x230EE
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && iParam0 == Global_78384)
	{
		Global_113810.f_32752.f_5588 = 0;
		Global_78384 = 0;
	}
}

int func_321(int iParam0, struct<4> Param1, var uParam5, var uParam6, struct<3> Param7, float fParam10, struct<4> Param11, int iParam15, float fParam16)//Position - 0x23127
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	struct<3> Var13;
	float fVar16;
	float fVar17;
	float fVar18;
	
	Var0 = { Param1 };
	Var3 = { Param1.f_3 };
	Var6 = { Param7 };
	Var9 = { Param1.f_3 };
	if (iLocal_1031 == 0)
	{
		iVar12 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		iLocal_1035 = iVar12;
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_1035, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1035, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1035, 5f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1035, true, true, false);
		if (PED::IS_PED_ON_ANY_BIKE(iParam0))
		{
			PED::GIVE_PED_HELMET(iParam0, false, 0, -1);
			PED::SET_PED_HELMET(iParam0, true);
		}
		Var13 = { ENTITY::GET_ENTITY_COORDS(iLocal_1035, true) };
		fLocal_1036 = (Var13.f_2 - Var0.f_2);
		ENTITY::SET_ENTITY_COORDS(iLocal_1035, Var0 + Vector(-10f, 0f, 0f), true, false, false, true);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1035, false))
		{
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1035, 3);
		}
		iLocal_1037 = MISC::GET_GAME_TIMER();
		iLocal_1031 = 1;
	}
	if (iLocal_1031 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1035) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1035, false))
		{
			fVar16 = SYSTEM::TO_FLOAT(iLocal_1037);
			fVar17 = (fVar16 + fParam10);
			fVar18 = func_328(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()), fVar16, fVar17);
			fVar18 = (fVar18 - fVar16);
			fVar18 = (fVar18 / fParam10);
			if (iParam15 == 1)
			{
				fVar18 = func_327(fVar18);
			}
			else if (iParam15 == 2)
			{
				fVar18 = func_326(fVar18);
			}
			else if (iParam15 == 3)
			{
				fVar18 = func_324(fVar18);
			}
			fVar18 = (fVar18 * fParam10);
			fVar18 = (fVar18 + fVar16);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1035, func_322(Var0 + Vector(fLocal_1036, 0f, 0f), Var6 + Vector(fLocal_1036, 0f, 0f), fVar16, fVar17, fVar18), false, false, true);
			if (iLocal_1032 && !PED::IS_PED_ON_ANY_BIKE(iParam0))
			{
				ENTITY::SET_ENTITY_ROTATION(iLocal_1035, func_322((0f - Var3.f_0), (0f - Var3.f_1), (Var3.f_2 + 180f), (0f - Var9.f_0), (0f - Var9.f_1), (Var9.f_2 + 180f), fVar16, fVar17, fVar18), 2, true);
			}
			else
			{
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (PED::IS_PED_ON_ANY_BIKE(iParam0))
					{
						PED::SET_PED_RESET_FLAG(iParam0, 236, true);
						PED::SET_PED_RESET_FLAG(iParam0, 309, true);
					}
				}
				ENTITY::SET_ENTITY_ROTATION(iLocal_1035, func_322(Var3, Var9, fVar16, fVar17, fVar18), 2, true);
			}
			ENTITY::SET_ENTITY_COLLISION(iLocal_1035, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1035, true);
		}
		else
		{
			iLocal_1031 = 2;
			return 0;
		}
		if (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) > (SYSTEM::TO_FLOAT(iLocal_1037) + fParam10) && SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) > ((SYSTEM::TO_FLOAT(iLocal_1037) + fParam10) + 2600f))
		{
			iLocal_1031 = 2;
			return 0;
		}
	}
	if (iLocal_1031 == 2)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 236, false);
		PED::SET_PED_RESET_FLAG(iParam0, 309, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1035))
		{
			if (!func_21(Param11, 0f, 0f, 0f, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_1035, Param11, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_1035, Param11.f_3);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1035, 5f);
			}
			ENTITY::SET_ENTITY_COLLISION(iLocal_1035, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1035, false);
			iLocal_1035 = 0;
		}
		if (PED::IS_PED_ON_ANY_BIKE(iParam0))
		{
			PED::REMOVE_PED_HELMET(iParam0, false);
		}
		return 1;
	}
	return 0;
}

Vector3 func_322(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)//Position - 0x2341F
{
	return func_323(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_323(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_323(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_323(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x23459
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_324(float fParam0)//Position - 0x23475
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = SYSTEM::SIN(func_325(((fParam0 * 3.1415927f) * 0.5f)));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_325(float fParam0)//Position - 0x234B1
{
	return (fParam0 * 57.29578f);
}

float func_326(float fParam0)//Position - 0x234C1
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - SYSTEM::COS(func_325(((fParam0 * 3.1415927f) * 0.5f))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_327(float fParam0)//Position - 0x234FF
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - SYSTEM::COS(func_325((fParam0 * 3.1415927f)))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_328(float fParam0, float fParam1, float fParam2)//Position - 0x2353D
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_329()//Position - 0x23564
{
	Global_77479.f_553 = 1;
	Global_77479.f_554 = 0;
}

void func_330(var uParam0)//Position - 0x2357C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = uParam0;
		iVar1 = (9 + (iVar2 - 21));
		if (iVar0 > 0)
		{
			iVar2 = (iVar2 + 2 + iVar0 * 3);
			iVar1 = ((9 + (iVar2 - 21)) - 2);
		}
		iLocal_115[iVar2] = Global_113810.f_32752.f_69[iVar1 /*78*/].f_66;
		if (iLocal_115[iVar2] != 0)
		{
			if (!BitTest(uLocal_46[iVar2], 2))
			{
				STREAMING::REQUEST_MODEL(iLocal_115[iVar2]);
				MISC::SET_BIT(&(uLocal_46[iVar2]), 2);
				func_540(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_331()//Position - 0x23607
{
	return !Global_77479.f_553;
}

void func_332(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x23617
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_64(&(Global_77479.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77479.f_555[0 /*21*/], bParam4) <= fParam3)
			{
				func_333(iVar0);
			}
		}
		iVar0++;
	}
}

void func_333(int iParam0)//Position - 0x23667
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_64(&(Global_77479.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&(Global_77479.f_139[iParam0]));
			}
		}
		Global_77479[iParam0] = 1;
		if (BitTest(Global_77479.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_70(iParam0, 0)) && Global_78388.f_66 == 0) && Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] != 0) && Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] > 3) && (!func_334(0, Global_77479.f_555[0 /*21*/].f_12) || !func_334(1, Global_77479.f_555[0 /*21*/].f_12)))
			{
				func_121(&(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]), &Global_78388);
				Global_78466 = Global_113810.f_32752.f_5591;
			}
			func_542(iParam0, 0);
		}
	}
}

int func_334(int iParam0, int iParam1)//Position - 0x237D6
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_335(&(Global_113810.f_32752.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_39(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_335(var uParam0)//Position - 0x23849
{
	return *uParam0;
}

void func_336(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x23854
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[25], false))
			{
				if (Global_77479.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_337(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_32(iParam0, &Var0);
		if (func_21(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_78467 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_120(iParam5, &Var0, Param1, fParam4, func_49(iParam0));
		func_30(iParam5, iParam0, 0);
	}
}

void func_337(int iParam0)//Position - 0x2397D
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_122(iParam0);
	func_542(iParam0, 0);
}

int func_338(var uParam0, int iParam1)//Position - 0x239A4
{
	int iVar0;
	
	if (!func_38(uParam0->f_66))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_78385))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (!func_334(0, iParam1))
	{
		Global_113810.f_32752.f_5592[iVar0] = 0;
	}
	else if (!func_334(1, iParam1))
	{
		Global_113810.f_32752.f_5592[iVar0] = 1;
	}
	func_339(iParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uParam0->f_66));
	func_121(uParam0, &(Global_113810.f_32752.f_5038[iVar0 /*157*/][Global_113810.f_32752.f_5592[iVar0] /*78*/]));
	Global_113810.f_32752.f_5592[iVar0]++;
	if (Global_113810.f_32752.f_5592[iVar0] >= func_335(&(Global_113810.f_32752.f_5038[iVar0 /*157*/])))
	{
		Global_113810.f_32752.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_100237[iVar0 /*98*/] == uParam0->f_66 && MISC::ARE_STRINGS_EQUAL(&(Global_100237[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_100237[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_339(int iParam0, char* sParam1)//Position - 0x23AFC
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_113810.f_32752.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_340("IMPOUND_HELPM" /* GXT: Michael's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee. */, sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_340("IMPOUND_HELPF" /* GXT: Franklin's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee. */, sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_340("IMPOUND_HELPT" /* GXT: Trevor's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee. */, sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_113810.f_32752.f_5596[iParam0] = 1;
	}
}

void func_340(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x23BAB
{
	func_341(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_341(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x23BCB
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
	while (iVar0 < Global_113810.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113810.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113810.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113810.f_20413.f_145++;
		func_342();
	}
}

void func_342()//Position - 0x23D9E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113810.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113810.f_20413.f_145)
	{
		if (BitTest(Global_113810.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[0])
			{
				Global_113810.f_20413.f_146[0] = Global_113810.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113810.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[1])
			{
				Global_113810.f_20413.f_146[1] = Global_113810.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113810.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[2])
			{
				Global_113810.f_20413.f_146[2] = Global_113810.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_343(var uParam0, int iParam1)//Position - 0x23EB5
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_64(&(Global_77479.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_121(&(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

int func_344(var uParam0, var uParam1, var uParam2)//Position - 0x23F00
{
	if (CAM::DOES_CAM_EXIST(*uParam1))
	{
		CAM::DESTROY_CAM(*uParam1, false);
	}
	if (CAM::DOES_CAM_EXIST(*uParam2))
	{
		CAM::DESTROY_CAM(*uParam2, false);
	}
	*uParam1 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	*uParam2 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	if (CAM::DOES_CAM_EXIST(*uParam1) && CAM::DOES_CAM_EXIST(*uParam2))
	{
		CAM::SET_CAM_COORD(*uParam1, *uParam0);
		CAM::SET_CAM_ROT(*uParam1, uParam0->f_3, 2);
		CAM::SET_CAM_FOV(*uParam1, uParam0->f_12);
		CAM::SET_CAM_COORD(*uParam2, uParam0->f_6);
		CAM::SET_CAM_ROT(*uParam2, uParam0->f_6.f_3, 2);
		CAM::SET_CAM_FOV(*uParam2, uParam0->f_12);
		CAM::SHAKE_CAM(*uParam1, "HAND_SHAKE", uParam0->f_13);
		CAM::SHAKE_CAM(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam2, *uParam1, SYSTEM::ROUND((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			CAM::SET_CAM_ACTIVE(*uParam1, true);
		}
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		return 1;
	}
	return 0;
}

void func_345(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x24008
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_350(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20500.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_81())
			{
				Global_20500.f_1 = 3;
			}
			Global_21845 = 5;
		}
		func_349(1, bParam3, iParam2, 0);
		Global_63491 = 1;
		Global_75819 = 1;
		Global_78687 = 1;
	}
	else
	{
		func_350(0);
		HUD::THEFEED_RESUME();
		Global_63491 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_349(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_347(PLAYER::PLAYER_ID())) && !func_96(PLAYER::PLAYER_ID(), 0)) && !func_346()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_347(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78687 = 0;
	}
}

bool func_346()//Position - 0x24155
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

int func_347(int iParam0)//Position - 0x2416F
{
	if (func_96(iParam0, 0))
	{
		return 1;
	}
	if (func_348())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657704[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_348()//Position - 0x241AE
{
	return BitTest(Global_2621446, 3);
}

int func_349(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x241BC
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_350(int iParam0)//Position - 0x241EF
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 13);
	}
}

int func_351(int iParam0)//Position - 0x24212
{
	func_64(&(Global_77479.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_77479.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_352(26))
			{
				return 26;
			}
			if (!func_352(29))
			{
				return 29;
			}
			if (!func_352(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_77479.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_352(27))
			{
				return 27;
			}
			if (!func_352(30))
			{
				return 30;
			}
			if (!func_352(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_77479.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_352(28))
			{
				return 28;
			}
			if (!func_352(31))
			{
				return 31;
			}
			if (!func_352(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_352(int iParam0)//Position - 0x24314
{
	return func_70(iParam0, 0);
}

void func_353(int iParam0, bool bParam1)//Position - 0x24323
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_355(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE" /* GXT: None */, sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_278(iParam0, 1);
				return;
			}
			iVar2 = INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW();
			if (iVar2 != 0 && iVar2 == iVar1)
			{
				func_278(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (func_354(iParam0))
			{
				func_278(iParam0, 0);
			}
		}
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_354(int iParam0)//Position - 0x243CF
{
	struct<2> Var0;
	
	Var0 = { func_279(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_38726[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

var func_355(int iParam0, int iParam1)//Position - 0x24400
{
	struct<5> Var0;
	
	Var0 = { func_356(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_356(int iParam0)//Position - 0x24425
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.7858f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.7559f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.3986f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.9338f, -1714.7256f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.3704f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.5645f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.2789f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.2538f, 3686.7385f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.8452f, 3707.9653f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.7852f, 4983.8247f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.1952f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.3816f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.8253f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.6632f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_357(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_357(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_357(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_357(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_357(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_357(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_357(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312228[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_357(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_357(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_357(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_357(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_357(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_357(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_357(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_357(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_357(43, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.6498f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.295849f, -684.0385f, 33.508316f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.97156f, -1018.95416f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.0013f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var5 = { func_357(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_357(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_357(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_357(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_357(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_357(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_357(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_357(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_357(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_357(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_357(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_357(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_357(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_357(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_357(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_357(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_357(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_357(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_357(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_357(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_357(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_357(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_357(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_357(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_357(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_357(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_357(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_357(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_357(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_357(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_357(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_357(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_357(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_357(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_357(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_357(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_357(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_357(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_357(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_357(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_357(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_357(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_357(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_357(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_357(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_357(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_357(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_357(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_357(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_357(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_357(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_357(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_357(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_357(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.1116f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.5997f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.8022f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.0647f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.4111f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.9966f, -3100.0117f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.9949f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.0083f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 279.9322f, -1337.4902f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604.6643f, -3012.5828f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505.783f, -3012.5867f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 195:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 197:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 976.6364f, 70.29476f, 115.16413f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 1103.5624f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1010f, -70f, -99.4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { -935.7f, -2992.2f, 13.9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { 152.3f, -1004.4f, -97.8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 228:
			Var0 = { 850f, -3000f, -50f };
			Var0.f_3 = "reh_dlc_int_04_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 229:
			Var0 = { 495f, -2560f, -50f };
			Var0.f_3 = "xm3_DLC_INT_04_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 230:
			Var0 = { 570f, -415.1f, -69.6f };
			Var0.f_3 = "xm3_DLC_INT_03_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 231:
			Var0 = { 984.4f, -95.4f, 76.8f };
			Var0.f_3 = "bkr_biker_dlc_int_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 232:
			Var0 = { -880f, -2770f, -49f };
			Var0.f_3 = "M23_1_dlc_int_01_M23_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 233:
			Var0 = { 800f, -3000f, -69f };
			Var0.f_3 = "reh_dlc_int_03_sum2";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_357(int iParam0, bool bParam1)//Position - 0x26DA5
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.59628f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 179.99997f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -109.99999f };
			break;
		
		case 7:
			Var0 = { -1471.8821f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.8821f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.39966f };
			Var0.f_3 = { 0f, 0f, -153.30931f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.23286f };
			Var0.f_3 = { 0f, 0f, -152.55307f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.6498f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.0981f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.1869f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.9543f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.7644f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.6702f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.5712f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.2538f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.0984f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.5178f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.5383f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.9939f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_358(int iParam0, bool bParam1)//Position - 0x2795B
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_355(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE" /* GXT: None */, sVar0) && iVar1 != 0)
	{
		if (bParam1 && !INTERIOR::IS_INTERIOR_CAPPED(iVar1))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_280(iParam0, 1);
				return;
			}
			iVar2 = INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW();
			if (iVar2 != 0 && iVar2 == iVar1)
			{
				func_280(iParam0, 1);
				return;
			}
			INTERIOR::CAP_INTERIOR(iVar1, true);
		}
		else if (!bParam1 && INTERIOR::IS_INTERIOR_CAPPED(iVar1))
		{
			if (func_359(iParam0))
			{
				func_280(iParam0, 0);
			}
			INTERIOR::CAP_INTERIOR(iVar1, false);
		}
		else if (!bParam1)
		{
			if (func_359(iParam0))
			{
				func_280(iParam0, 0);
			}
		}
	}
}

int func_359(int iParam0)//Position - 0x27A22
{
	struct<2> Var0;
	
	Var0 = { func_279(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_38717[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

int func_360()//Position - 0x27A53
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_351(Local_400.f_0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_361(float fParam0, float fParam1, float fParam2)//Position - 0x27A7C
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

int func_362(int iParam0)//Position - 0x27AF1
{
	switch (iParam0)
	{
		case 21:
		case 26:
		case 29:
		case 32:
			return 0;
			break;
		
		case 23:
		case 28:
		case 31:
		case 34:
			return 2;
			break;
		
		case 22:
		case 27:
		case 30:
		case 33:
			return 1;
			break;
	}
	return 145;
}

int func_363(int iParam0, var uParam1)//Position - 0x27B5F
{
	uParam1->f_73[1 /*4*/] = { 194.674f, -1026.984f, -100f };
	uParam1->f_73[1 /*4*/].f_3 = 285f;
	*(uParam1[2 /*15*/]) = { 198.9908f, -1025.9564f, -98.8981f };
	(uParam1[2 /*15*/])->f_3 = { -4.5679f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_6 = { 198.6016f, -1026.103f, -98.9313f };
	(uParam1[2 /*15*/])->f_6.f_3 = { -5.3499f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_12 = 25.2218f;
	(uParam1[2 /*15*/])->f_13 = 0.2f;
	(uParam1[2 /*15*/])->f_14 = 3.5f;
	uParam1->f_61[2] = 0f;
	switch (iParam0)
	{
		case 21:
			*(uParam1[0 /*15*/]) = { -84.4891f, 95.2463f, 72.7397f };
			(uParam1[0 /*15*/])->f_3 = { -1.0236f, 0.0007f, -126.7439f };
			(uParam1[0 /*15*/])->f_6 = { -84.1568f, 94.9229f, 72.7318f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.0236f, 0.0007f, -127.1499f };
			(uParam1[0 /*15*/])->f_12 = 25.1687f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -62.5434f, 80.2917f, 70.5644f };
			uParam1->f_73[0 /*4*/].f_3 = 345f;
			*(uParam1[1 /*15*/]) = { -61.075f, 81.2555f, 84.5867f };
			(uParam1[1 /*15*/])->f_3 = { -69.9271f, 0f, 103.892f };
			(uParam1[1 /*15*/])->f_6 = { -60.6284f, 81.2036f, 84.5867f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -73.4239f, 0f, 108.7693f };
			(uParam1[1 /*15*/])->f_12 = 29.9579f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -60.3859f, 78.4352f, 70.5249f };
			uParam1->f_86[0 /*6*/] = { -67.0129f, 81.9471f, 70.5249f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -117.9206f };
			*(uParam1[3 /*15*/]) = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_3 = { -57.747f, 0f, 34.1968f };
			(uParam1[3 /*15*/])->f_6 = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -48.0008f, 0f, 49.6137f };
			(uParam1[3 /*15*/])->f_12 = 30.0324f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -62.6272f, 79.7534f, 70.6161f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 65f };
			uParam1->f_66[1 /*3*/] = { -79.1059f, 87.1091f, 70.5157f };
			uParam1->f_73[2 /*4*/] = { -88.4f, 70.8f, 72f };
			uParam1->f_73[2 /*4*/].f_3 = 150f;
			return 1;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = { -66.6121f, -1842.1222f, 26.6941f };
			(uParam1[0 /*15*/])->f_3 = { 3.4131f, -0.0009f, 17.9566f };
			(uParam1[0 /*15*/])->f_6 = { -66.5137f, -1841.6156f, 26.7211f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.1669f, -0.0009f, 18.0384f };
			(uParam1[0 /*15*/])->f_12 = 25.1856f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -72.5431f, -1820.447f, 25.9424f };
			uParam1->f_73[0 /*4*/].f_3 = 140f;
			*(uParam1[1 /*15*/]) = { -72.7256f, -1823.2828f, 41.0951f };
			(uParam1[1 /*15*/])->f_3 = { -81.9335f, 0f, -58.1415f };
			(uParam1[1 /*15*/])->f_6 = { -72.9027f, -1822.9979f, 41.0951f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.6657f, 0f, -29.6554f };
			(uParam1[1 /*15*/])->f_12 = 29.9864f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -76.7939f, -1816.77f, 26.6473f };
			uParam1->f_86[0 /*6*/] = { -69.2183f, -1823.2582f, 25.9421f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, 49.4214f };
			*(uParam1[3 /*15*/]) = { -70.9492f, -1820.9363f, 45.3628f };
			(uParam1[3 /*15*/])->f_3 = { -85.5171f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_6 = { -70.9836f, -1821.0228f, 45.3628f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -89.4995f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_12 = 28.4803f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 4f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -75.3386f, -1818.2485f, 26.0241f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, -132.7699f };
			uParam1->f_66[1 /*3*/] = { -63.988f, -1829.3903f, 26.423f };
			uParam1->f_73[2 /*4*/] = { -49.738f, -1830.1475f, 25.5591f };
			uParam1->f_73[2 /*4*/].f_3 = 317.3589f;
			return 1;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = { -237.074f, -1170.3906f, 23.479f };
			(uParam1[0 /*15*/])->f_3 = { 7.619f, 0f, -69.7398f };
			(uParam1[0 /*15*/])->f_6 = { -237.2166f, -1169.6716f, 23.4931f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 7.619f, 0f, -71.3391f };
			(uParam1[0 /*15*/])->f_12 = 40.0015f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -218.0289f, -1162.392f, 22.0242f };
			uParam1->f_73[0 /*4*/].f_3 = 15f;
			*(uParam1[1 /*15*/]) = { -219.5507f, -1159.9506f, 36.8399f };
			(uParam1[1 /*15*/])->f_3 = { -81.7188f, 0f, 170.4291f };
			(uParam1[1 /*15*/])->f_6 = { -219.1442f, -1160.019f, 36.8399f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.5726f, 0f, -168.992f };
			(uParam1[1 /*15*/])->f_12 = 30.0319f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 4f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -211.6438f, -1162.4067f, 22.0234f };
			uParam1->f_86[0 /*6*/] = { -221.6438f, -1162.4067f, 22.0234f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[3 /*15*/]) = { -218.5983f, -1159.0609f, 31.4452f };
			(uParam1[3 /*15*/])->f_3 = { -62.4689f, 0f, -142.2907f };
			(uParam1[3 /*15*/])->f_6 = { -218.6533f, -1159.0671f, 31.4471f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -62.4689f, 0f, -172.3491f };
			(uParam1[3 /*15*/])->f_12 = 30f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -214.5676f, -1162.658f, 21.9591f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 90f };
			uParam1->f_66[1 /*3*/] = { -227.7619f, -1162.848f, 22.0085f };
			uParam1->f_73[2 /*4*/] = { -221.6f, -1156.3f, 22.6f };
			uParam1->f_73[2 /*4*/].f_3 = 0f;
			return 1;
			break;
	}
	return 0;
}

int func_364()//Position - 0x28351
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98291.f_44 == 1;
	}
	return 0;
}

void func_365()//Position - 0x2836D
{
	int iVar0;
	struct<5> Var1;
	int iVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	struct<2> Var26;
	float fVar30;
	int iVar31;
	struct<3> Var32;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if ((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_670))
	{
		return;
	}
	if (!Global_75816)
	{
		if (Global_113810.f_32752.f_1982[iLocal_670 /*939*/].f_626[iLocal_853] != -15)
		{
			if (!Global_77479[Global_113810.f_32752.f_1982[iLocal_670 /*939*/].f_313[iLocal_853]])
			{
				if (func_419(func_53(), Global_113810.f_32752.f_1982[iLocal_670 /*939*/].f_626[iLocal_853]))
				{
					iVar0 = Global_113810.f_32752.f_1982[iLocal_670 /*939*/][iLocal_853];
					func_417(iVar0, iLocal_853, iLocal_670);
					func_64(&Var1, Global_113810.f_32752.f_1982[iLocal_670 /*939*/].f_313[iLocal_853]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_542(Global_113810.f_32752.f_1982[iLocal_670 /*939*/].f_313[iLocal_853], 1);
					}
					Global_113810.f_32752.f_1982[iLocal_670 /*939*/].f_626[iLocal_853] = -15;
				}
			}
		}
		iLocal_853++;
		if (iLocal_853 >= 312)
		{
			iLocal_853 = 0;
		}
	}
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Local_400.f_7 || Local_400.f_2 == 99)
	{
		if (Local_400.f_5 != -1)
		{
			func_72(&(Local_400.f_5));
		}
		if (Local_400.f_2 > 0)
		{
			HUD::CLEAR_HELP(true);
		}
		Local_400.f_7 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		Local_400.f_5 = -1;
		Local_400.f_2 = 0;
		Local_400.f_4 = 0;
		if (bLocal_852)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(Local_400.f_110))
			{
				CAM::SET_CAM_ACTIVE(Local_400.f_110, false);
				CAM::DESTROY_CAM(Local_400.f_110, false);
			}
			if (CAM::DOES_CAM_EXIST(Local_400.f_111))
			{
				CAM::SET_CAM_ACTIVE(Local_400.f_111, false);
				CAM::DESTROY_CAM(Local_400.f_111, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			}
			iVar22 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar22) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar22, false))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar22, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar22, false);
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar22, true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar22);
				}
			}
			iVar23 = 5000;
			iVar24 = MISC::GET_GAME_TIMER();
			while (!CAM::IS_GAMEPLAY_CAM_RENDERING() && (MISC::GET_GAME_TIMER() - iVar24) < iVar23)
			{
				SYSTEM::WAIT(0);
			}
			if (INTERIOR::IS_VALID_INTERIOR(Local_400.f_112))
			{
				INTERIOR::UNPIN_INTERIOR(Local_400.f_112);
			}
			StringCopy(&Global_39672, "", 32);
			if ((Local_400.f_0 == 21 || Local_400.f_0 == 22) || Local_400.f_0 == 23)
			{
				func_358(47, 1);
				func_353(47, 1);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			STREAMING::CLEAR_FOCUS();
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			func_345(0, 1, 1, 0, 0, 0, 0);
			bLocal_852 = false;
			Global_32541 = 0;
		}
	}
	bVar25 = false;
	if ((((((((((((!bLocal_852 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_400.f_29, Local_400.f_29.f_3, Local_400.f_29.f_6, false, true, 0)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !Local_400.f_29.f_69)) || (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))) || (!bLocal_852 && func_70(Local_400.f_0, 5))) || (!bLocal_852 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/))) || (!bLocal_852 && HUD::IS_PAUSE_MENU_ACTIVE())) || !func_415(0)) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID())) || Global_32435) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())))
	{
		if (Local_400.f_2 > 0 && Local_400.f_2 != 90)
		{
			iLocal_1012 = 1;
			Local_400.f_2 = 99;
		}
		bVar25 = true;
	}
	fVar30 = 20f;
	iVar31 = 3;
	switch (Local_400.f_2)
	{
		case 0:
			if ((((Local_400.f_0 != -1 && func_70(Local_400.f_0, 0)) && !func_70(Local_400.f_0, 5)) && !bLocal_1013) && !bVar25)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_400.f_29, Local_400.f_29.f_3, Local_400.f_29.f_6, false, true, 0) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					Var26 = { Local_400.f_29.f_63 };
					StringConCat(&Var26, "_01", 16);
					func_267(&(Local_400.f_5), 3, &Var26, 0, 0, 0, 0);
					Local_400.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_262(Local_400.f_5, 1))
			{
				if (func_414(iLocal_670) < Local_400.f_29.f_67)
				{
					Local_400.f_4 = MISC::GET_GAME_TIMER();
					func_72(&(Local_400.f_5));
					iLocal_667 = 0;
					Local_400.f_2 = 90;
				}
				else
				{
					iLocal_667 = 0;
					Local_400.f_4 = MISC::GET_GAME_TIMER();
					func_72(&(Local_400.f_5));
					Local_400.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_667++;
			if (iLocal_667 >= 3)
			{
				Var26 = { Local_400.f_29.f_63 };
				StringConCat(&Var26, "_02", 16);
				func_267(&(Local_400.f_5), 3, &Var26, 0, 0, 0, 0);
				Local_400.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_262(Local_400.f_5, 1))
			{
				if (func_414(iLocal_670) < Local_400.f_29.f_67)
				{
					Local_400.f_4 = MISC::GET_GAME_TIMER();
					Local_400.f_2 = 90;
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", true);
					bLocal_852 = false;
					if ((Local_400.f_0 == 15 || Local_400.f_0 == 17) || Local_400.f_0 == 16)
					{
						Local_514.f_4 = 114;
						bLocal_852 = true;
					}
					else if (Local_400.f_0 == 18 || Local_400.f_0 == 19)
					{
						Local_514.f_4 = 116;
						bLocal_852 = true;
					}
					else if (Local_400.f_0 == 12 || Local_400.f_0 == 13)
					{
						Local_514.f_4 = 115;
						bLocal_852 = true;
					}
					else if ((Local_400.f_0 == 21 || Local_400.f_0 == 22) || Local_400.f_0 == 23)
					{
						Local_514.f_4 = 117;
						bLocal_852 = true;
					}
					Local_514.f_0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
					Local_514.f_1 = 0;
					Local_514.f_3 = 0;
					Local_514.f_2 = 0;
					iLocal_854 = 1;
					Global_32541 = 1;
					if (bLocal_852)
					{
						if ((Local_400.f_0 == 21 || Local_400.f_0 == 22) || Local_400.f_0 == 23)
						{
							func_358(47, 0);
							func_353(47, 0);
							Local_400.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(198.3659f, -1020.2732f, -100f, "v_garagem_sp");
							if (INTERIOR::IS_VALID_INTERIOR(Local_400.f_112))
							{
								if (!INTERIOR::IS_INTERIOR_READY(Local_400.f_112))
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_400.f_112);
								}
								StringCopy(&Global_39672, "v_garagem_sp", 32);
							}
						}
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
						STREAMING::NEW_LOAD_SCENE_STOP();
						Local_400.f_4 = MISC::GET_GAME_TIMER();
						Local_400.f_2 = 4;
					}
					else
					{
						Local_400.f_2 = 8;
					}
					func_72(&(Local_400.f_5));
				}
			}
			break;
		
		case 4:
			bVar35 = true;
			if ((Local_400.f_0 == 21 || Local_400.f_0 == 22) || Local_400.f_0 == 23)
			{
				Local_400.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(198.3659f, -1020.2732f, -100f, "v_garagem_sp");
				if ((!INTERIOR::IS_VALID_INTERIOR(Local_400.f_112) || INTERIOR::IS_INTERIOR_CAPPED(Local_400.f_112)) || INTERIOR::IS_INTERIOR_DISABLED(Local_400.f_112))
				{
					func_358(47, 0);
					func_353(47, 0);
					bVar35 = false;
				}
			}
			if (bVar35)
			{
				if (Local_400.f_0 == 12)
				{
					fVar30 = 95f;
					iVar31 = 2;
				}
				else if (Local_400.f_0 == 13)
				{
					fVar30 = 150f;
					iVar31 = 2;
				}
				else if ((Local_400.f_0 == 21 || Local_400.f_0 == 22) || Local_400.f_0 == 23)
				{
					fVar30 = 150f;
					iVar31 = 2;
				}
				Var32 = { SYSTEM::COS((Local_400.f_29.f_14.f_3.f_2 + 90f)), SYSTEM::SIN((Local_400.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if ((Local_400.f_0 == 21 || Local_400.f_0 == 22) || Local_400.f_0 == 23)
				{
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(200.4651f, -1020.631f, -100f, 50f, 0) || (MISC::GET_GAME_TIMER() - Local_400.f_4) > 3500)
					{
						Local_400.f_4 = MISC::GET_GAME_TIMER();
						Local_400.f_2 = 5;
					}
				}
				else if (STREAMING::NEW_LOAD_SCENE_START(Local_400.f_29.f_14, Var32, fVar30, iVar31) || (MISC::GET_GAME_TIMER() - Local_400.f_4) > 3500)
				{
					Local_400.f_4 = MISC::GET_GAME_TIMER();
					Local_400.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && (!INTERIOR::IS_VALID_INTERIOR(Local_400.f_112) || INTERIOR::IS_INTERIOR_READY(Local_400.f_112))) || (MISC::GET_GAME_TIMER() - Local_400.f_4) > 10000)
			{
				Local_400.f_4 = MISC::GET_GAME_TIMER();
				Local_400.f_2 = 6;
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - Local_400.f_4) > 1000)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1025) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1025)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1025, true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1025);
				}
				iLocal_1025 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_1025) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1025, false)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_1025))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_1025))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_1025)))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1025))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1025, false, false);
					}
				}
				else
				{
					iLocal_1025 = 0;
				}
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 16);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 32);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
					PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
				}
				func_345(1, 1, 1, 0, 0, 0, 0);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				Var32 = { SYSTEM::COS((Local_400.f_29.f_14.f_3.f_2 + 90f)), SYSTEM::SIN((Local_400.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_400.f_29.f_69)
				{
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_400.f_29.f_14, Var32);
				}
				if (!CAM::DOES_CAM_EXIST(Local_400.f_110))
				{
					Local_400.f_110 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				}
				if (CAM::DOES_CAM_EXIST(Local_400.f_110))
				{
					if (Local_400.f_29.f_69)
					{
						INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("GtaMloRoom001");
					}
					func_345(1, 1, 1, 0, 0, 0, 0);
					func_344(&(Local_400.f_29.f_14), &(Local_400.f_110), &(Local_400.f_111));
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				STREAMING::NEW_LOAD_SCENE_STOP();
				Local_400.f_2 = 7;
				Local_400.f_4 = MISC::GET_GAME_TIMER();
				func_72(&(Local_400.f_5));
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - Local_400.f_4) < 7000 && !func_412(1000))
			{
				Var26 = { Local_400.f_29.f_63 };
				StringConCat(&Var26, "_05", 16);
				func_265(&Var26, -1);
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (Local_400.f_0 == 12 || Local_400.f_0 == 13)
					{
						fVar30 = 85f;
						iVar31 = 2;
					}
					Var32 = { SYSTEM::COS((Local_400.f_29.f_29.f_2 + 90f)), SYSTEM::SIN((Local_400.f_29.f_29.f_2 + 90f)), 0f };
					STREAMING::NEW_LOAD_SCENE_START(Local_400.f_29.f_29, Var32, fVar30, iVar31);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_400.f_110))
				{
					if (Local_400.f_29.f_69)
					{
						INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("GtaMloRoom001");
					}
					func_345(1, 1, 1, 0, 0, 0, 0);
					func_344(&(Local_400.f_29.f_29), &(Local_400.f_110), &(Local_400.f_111));
				}
				STREAMING::CLEAR_FOCUS();
				HUD::CLEAR_HELP(true);
				Local_400.f_4 = MISC::GET_GAME_TIMER();
				Local_400.f_2 = 8;
			}
			break;
		
		case 8:
			if ((MISC::GET_GAME_TIMER() - Local_400.f_4) < 7000 && !func_412(1000))
			{
				Var26 = { Local_400.f_29.f_63 };
				StringConCat(&Var26, "_06", 16);
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_265(&Var26, 7000);
				}
			}
			else
			{
				HUD::CLEAR_HELP(true);
				Local_400.f_4 = MISC::GET_GAME_TIMER();
				Local_400.f_2 = 9;
			}
			break;
		
		case 9:
			if ((MISC::GET_GAME_TIMER() - Local_400.f_4) < 3500 && !func_412(1000))
			{
				Var26 = { Local_400.f_29.f_63 };
				StringConCat(&Var26, "_03", 16);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_514.f_0))
				{
					if (Local_514.f_1)
					{
						if (!Local_514.f_3)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
							Local_514.f_3 = 1;
						}
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_514.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_514.f_0, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_94(&Var26);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						Local_514.f_1 = 1;
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - Local_400.f_4) < 4000 && !func_412(1000))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_514.f_0))
				{
					if (Local_514.f_2)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_514.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_514.f_0, "SHARD_ANIM_OUT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						Local_514.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_852)
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(Local_400.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_400.f_110, false);
						CAM::DESTROY_CAM(Local_400.f_110, false);
					}
					if (CAM::DOES_CAM_EXIST(Local_400.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_400.f_111, false);
						CAM::DESTROY_CAM(Local_400.f_111, false);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					iVar36 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
						if ((ENTITY::DOES_ENTITY_EXIST(iVar36) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar36, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar36, false))
						{
							ENTITY::SET_ENTITY_COORDS(iVar36, Local_400.f_29.f_44, true, true, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar36, Local_400.f_29.f_47);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar36, 5f);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_400.f_29.f_44, true, true, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_400.f_29.f_47);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1025) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1025, false))
					{
						iVar37 = func_52(24);
						if (func_343(&Local_774, 24))
						{
							func_338(&Local_774, func_536());
							if (ENTITY::DOES_ENTITY_EXIST(iVar37))
							{
								VEHICLE::DELETE_VEHICLE(&iVar37);
							}
						}
						if (Local_400.f_0 == 21)
						{
							MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, true, false, false, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_1025, -89.377f, 92.6583f, 71.2349f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_1025, 154.4846f);
							func_336(iLocal_1025, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_400.f_0 == 22)
						{
							MISC::CLEAR_AREA(-62.0307f, -1839.8585f, 25.6787f, 5f, true, false, false, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_1025, -62.0307f, -1839.8585f, 25.6787f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_1025, 319.6985f);
							func_336(iLocal_1025, -62.0307f, -1839.8585f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_400.f_0 == 23)
						{
							MISC::CLEAR_AREA(-234.7648f, -1150.3105f, 21.9224f, 5f, true, false, false, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_1025, -234.7648f, -1150.3105f, 21.9224f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_1025, 270.8741f);
							func_336(iLocal_1025, -234.7648f, -1150.3105f, 21.9224f, 270.8741f, 24, 0);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1025, 5f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar36) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iVar36, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iVar36, false);
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar36, true))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar36);
						}
					}
					iVar38 = 5000;
					iVar39 = MISC::GET_GAME_TIMER();
					while (!CAM::IS_GAMEPLAY_CAM_RENDERING() && (MISC::GET_GAME_TIMER() - iVar39) < iVar38)
					{
						SYSTEM::WAIT(0);
					}
					if (INTERIOR::IS_VALID_INTERIOR(Local_400.f_112))
					{
						INTERIOR::UNPIN_INTERIOR(Local_400.f_112);
					}
					StringCopy(&Global_39672, "", 32);
					if ((Local_400.f_0 == 21 || Local_400.f_0 == 22) || Local_400.f_0 == 23)
					{
						func_358(47, 1);
						func_353(47, 1);
						Global_113810.f_32752.f_4800 = 1;
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::CLEAR_FOCUS();
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					func_345(0, 1, 1, 0, 0, 0, 0);
					bLocal_852 = false;
					Global_32541 = 0;
				}
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_514.f_0))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Local_514);
				}
				func_382(iLocal_670, Local_514.f_4, Local_400.f_29.f_67);
				func_381(Local_400.f_0, 5, 1);
				func_368(Local_400.f_0);
				if (HUD::DOES_BLIP_EXIST(Global_77479.f_208[Local_400.f_0]))
				{
					HUD::REMOVE_BLIP(&(Global_77479.f_208[Local_400.f_0]));
				}
				iLocal_938 = Local_400.f_0;
				func_367();
				Local_400.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_667++;
			if (iLocal_667 >= 3)
			{
				if ((MISC::GET_GAME_TIMER() - Local_400.f_4) < 4000)
				{
					Var26 = { Local_400.f_29.f_63 };
					StringConCat(&Var26, "_04", 16);
					func_366(&Var26);
				}
				else
				{
					Local_400.f_2 = 99;
				}
			}
			break;
	}
}

void func_366(char* sParam0)//Position - 0x2955A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_367()//Position - 0x29570
{
	if (func_275(0))
	{
		return 0;
	}
	if (Global_100872.f_8)
	{
		if (Global_100872.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100872.f_10 > 1)
	{
		return 0;
	}
	Global_100872.f_10++;
	return 1;
}

void func_368(int iParam0)//Position - 0x295BB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 21:
			iVar0 = 20;
			iVar1 = 155;
			break;
		
		case 22:
			iVar0 = 21;
			iVar1 = 156;
			break;
		
		case 23:
			iVar0 = 22;
			iVar1 = 157;
			break;
		
		case 12:
			iVar0 = 13;
			iVar1 = 57;
			break;
		
		case 13:
			iVar0 = 16;
			iVar1 = 62;
			break;
		
		case 14:
			iVar0 = 19;
			iVar1 = 63;
			break;
		
		case 15:
			iVar0 = 12;
			iVar1 = 56;
			break;
		
		case 16:
			iVar0 = 15;
			iVar1 = 60;
			break;
		
		case 17:
			iVar0 = 18;
			iVar1 = 61;
			break;
		
		case 18:
			iVar0 = 11;
			iVar1 = 55;
			break;
		
		case 19:
			iVar0 = 14;
			iVar1 = 58;
			break;
	}
	func_380(iVar0, 0);
	iVar2 = func_379(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_378(iVar0);
		if (func_376(iVar0, iVar1, 1))
		{
			func_369(iVar0);
			func_378(iVar0);
		}
	}
}

void func_369(int iParam0)//Position - 0x296C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_375(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_53888[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_53888[iVar0 /*203*/].f_10[(Global_53888[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_53888[iVar0 /*203*/].f_9 - 1);
	if (!Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_374(Global_44588[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1" /* GXT: You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented... */;
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3" /* GXT: Hello Franklin,~n~The Southern San Andreas Tourist Board Young Amateur Wildlife Photographer of the Year Competition is over.~n~Some of our photographers fell off cli... */;
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2" /* GXT: Dear contestant,~n~Thank you for your recent photographic submission. Our image licensing department is already maximizing its profit-making potential. And you're a step clos... */;
				break;
		}
		func_370(1, Global_44588[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_44588[iVar1 /*12*/].f_3)
		{
			case 0:
				func_370(0, Global_44588[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_370(1, Global_44588[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_370(2, Global_44588[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53888[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_370(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x29A32
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_536();
	bVar1 = false;
	StringCopy(&cVar2, func_373(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1" /* GXT: Dear Mr. De Santa, please find below your weekly income from owned properties:~n~ */);
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3" /* GXT: Dear Mr. Clinton, please find below your weekly income from owned properties:~n~ */);
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2" /* GXT: Dear Mr. Philips, please find below your weekly income from owned properties:~n~ */);
				break;
			
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_371(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_372(iParam1)), 0));
		}
		else
		{
			func_371(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_372(iParam1)), 0));
		}
		switch (Global_20500)
		{
			case 0:
				StringCopy(&Global_20489, "Phone_SoundSet_Michael", 24);
				Global_44580++;
				if (Global_44580 > 16)
				{
					Global_44580 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_20489, "Phone_SoundSet_Trevor", 24);
				Global_44582++;
				if (Global_44582 > 16)
				{
					Global_44582 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_20489, "Phone_SoundSet_Franklin", 24);
				Global_44581++;
				if (Global_44581 > 16)
				{
					Global_44581 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_20489, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20489, true);
	}
}

void func_371(int iParam0)//Position - 0x29C1A
{
	Global_44583[Global_44587] = iParam0;
	Global_22903 = 1;
	Global_22902 = iParam0;
	Global_44587++;
	if (Global_44587 == 3)
	{
		Global_44587 = 0;
	}
}

char* func_372(int iParam0)//Position - 0x29C48
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0" /* GXT: Mike */;
		
		case 3:
			return "EMSTR_3" /* GXT: Jimmy */;
		
		case 1:
			return "EMSTR_6" /* GXT: Franklin */;
		
		case 2:
			return "EMSTR_9" /* GXT: Trevor */;
		
		case 4:
			return "EMSTR_12" /* GXT: Marnie */;
		
		case 5:
			return "EMSTR_29" /* GXT: Epsilon Store */;
		
		case 6:
			return "EMSTR_36" /* GXT: Maude */;
		
		case 7:
			return "EMSTR_39" /* GXT: Lester */;
		
		case 8:
			return "EMSTR_52" /* GXT: Maze Bank */;
		
		case 9:
			return "EMSTR_55" /* GXT: Fleeca */;
		
		case 10:
			return "EMSTR_58" /* GXT: Bank of Liberty */;
		
		case 11:
			return "EMSTR_78" /* GXT: Legendary Motorsport Sales */;
		
		case 12:
			return "EMSTR_81" /* GXT: Elitas Sales */;
		
		case 13:
			return "EMSTR_84" /* GXT: Cache & Carry */;
		
		case 14:
			return "EMSTR_87" /* GXT: Dock Tease */;
		
		case 15:
			return "EMSTR_106" /* GXT: LSC */;
		
		case 16:
			return "EMSTR_114" /* GXT: AMMU-NATION */;
		
		case 17:
			return "EMSTR_142" /* GXT: Christian Feltz */;
		
		case 18:
			return "EMSTR_145" /* GXT: Paige Harris */;
		
		case 19:
			return "EMSTR_152" /* GXT: Los Santos Tourist Info */;
		
		case 20:
			return "EMSTR_157" /* GXT: Rickie Luckens */;
		
		case 21:
			return "EMSTR_163" /* GXT: Minotaur Property Management */;
		
		case 22:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
		
		case 23:
			return "EMSTR_187" /* GXT: Vanilla Unicorn */;
		
		case 24:
			return "EMSTR_190" /* GXT: Dr Isiah Friedlander */;
		
		case 25:
			return "EMSTR_206" /* GXT: TRACEYHEARTSTEALER */;
		
		case 26:
			return "EMSTR_219" /* GXT: Dave Norton */;
		
		case 27:
			return "EMSTR_226" /* GXT: Amanda De Santa */;
		
		case 28:
			return "EMSTR_233" /* GXT: Donald Percival */;
		
		case 29:
			return "EMSTR_242" /* GXT: Ron */;
		
		case 30:
			return "EMSTR_249" /* GXT: Tanisha Marks */;
		
		case 31:
			return "EMSTR_262" /* GXT: Denise */;
		
		case 32:
			return "EMSTR_269" /* GXT: Lamar Davis */;
		
		case 33:
			return "EMSTR_319" /* GXT: Brad */;
		
		case 34:
			return "EMSTR_340" /* GXT: Patricia Madrazo */;
		
		case 35:
			return "EMSTR_348" /* GXT: Eileen Haworth */;
		
		case 36:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
		
		case 37:
			return "EMSTR_357" /* GXT: Gray Nicholson */;
		
		case 38:
			return "EMSTR_360" /* GXT: Nigel */;
		
		case 39:
			return "EMSTR_369" /* GXT: Hookies */;
		
		case 40:
			return "EMSTR_376" /* GXT: Towing Impound */;
		
		case 41:
			return "EMSTR_379" /* GXT: Downtown Cab Co, */;
		
		case 42:
			return "EMSTR_382" /* GXT: McKenzie Field Hangar */;
		
		case 43:
			return "EMSTR_384" /* GXT: Sonar Collections Dock */;
		
		case 44:
			return "EMSTR_387" /* GXT: Los Santos Customs */;
		
		case 45:
			return "EMSTR_390" /* GXT: Cinema Doppler */;
		
		case 46:
			return "EMSTR_393" /* GXT: Ten Cent Theater */;
		
		case 47:
			return "EMSTR_396" /* GXT: Tivoli Cinema */;
		
		case 48:
			return "EMSTR_399" /* GXT: Los Santos Golf Club */;
		
		case 49:
			return "EMSTR_402" /* GXT: Car Scrap Yard */;
		
		case 50:
			return "EMSTR_405" /* GXT: Smoke on the Water */;
		
		case 51:
			return "EMSTR_408" /* GXT: Tequi-la-la */;
		
		case 52:
			return "EMSTR_411" /* GXT: Pitchers */;
		
		case 53:
			return "EMSTR_414" /* GXT: The Hen House */;
		
		case 54:
			return "EMSTR_465" /* GXT: Pedal & Metal Sales */;
		
		case 55:
			return "EMSTR_468" /* GXT: SSA Super Autos Sales */;
		
		case 56:
			return "EMSTR_489" /* GXT: Hush Smush */;
		
		case 57:
			return "EMSTR_492" /* GXT: foxymama21 */;
		
		case 58:
			return "EMSTR_495" /* GXT: Altarego12 */;
		
		case 59:
			return "EMSTR_498" /* GXT: BadKitty11 */;
		
		case 60:
			return "EMSTR_501" /* GXT: 7yearbitch */;
		
		case 61:
			return "EMSTR_504" /* GXT: Froggy69 */;
		
		case 62:
			return "EMSTR_507" /* GXT: Misscuddles */;
		
		case 63:
			return "EMSTR_640" /* GXT: Off-Road Events */;
		
		case 64:
			return "EMSTR_643" /* GXT: Dock Tease */;
		
		case 65:
			return "EMSTR_652" /* GXT: Brother Adrian */;
		
		default:
	}
	return "NULL";
}

char* func_373(int iParam0, int iParam1)//Position - 0x29FB3
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[0 /*29*/].f_7));
		
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[1 /*29*/].f_7));
		
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[2 /*29*/].f_7));
		
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[12 /*29*/].f_7));
		
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[60 /*29*/].f_7));
		
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[62 /*29*/].f_7));
		
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[14 /*29*/].f_7));
		
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[97 /*29*/].f_7));
		
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[99 /*29*/].f_7));
		
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[15 /*29*/].f_7));
		
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[30 /*29*/].f_7));
		
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[17 /*29*/].f_7));
		
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[20 /*29*/].f_7));
		
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[43 /*29*/].f_7));
		
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[44 /*29*/].f_7));
		
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[19 /*29*/].f_7));
		
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[40 /*29*/].f_7));
		
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381" /* GXT: CHAR_SAEEDA */);
		
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[122 /*29*/].f_7));
		
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[125 /*29*/].f_7));
		
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[113 /*29*/].f_7));
		
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[126 /*29*/].f_7));
		
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[127 /*29*/].f_7));
		
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[124 /*29*/].f_7));
		
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[114 /*29*/].f_7));
		
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[115 /*29*/].f_7));
		
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[116 /*29*/].f_7));
		
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[123 /*29*/].f_7));
		
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[117 /*29*/].f_7));
		
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[118 /*29*/].f_7));
		
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[119 /*29*/].f_7));
		
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[120 /*29*/].f_7));
		
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_374(int iParam0)//Position - 0x2A37E
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_375(int iParam0)//Position - 0x2A3AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_53888[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_53888[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_53888[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_376(int iParam0, int iParam1, bool bParam2)//Position - 0x2A413
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_380(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_53888[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_53888[iVar0 /*203*/].f_2 = iParam0;
	Global_53888[iVar0 /*203*/].f_10[Global_53888[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_53888[iVar0 /*203*/].f_10[Global_53888[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_53888[iVar0 /*203*/].f_10[Global_53888[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_53888[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53888[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53888[iVar0 /*203*/].f_4[iVar1] == Global_44588[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53888[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53888[iVar0 /*203*/].f_4[Global_53888[iVar0 /*203*/].f_3] = Global_44588[iParam1 /*12*/].f_3;
			Global_53888[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53888[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53888[iVar0 /*203*/].f_4[iVar1] == Global_44588[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53888[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53888[iVar0 /*203*/].f_4[Global_53888[iVar0 /*203*/].f_3] = Global_44588[iParam1 /*12*/].f_2;
			Global_53888[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_53888[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_53888[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_377(Global_53888[iVar0 /*203*/].f_4[iVar1], Global_53888[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_377(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2A60F
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_47913[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_47913[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_374(Global_44588[iVar20 /*12*/].f_1) };
		if (Global_44588[iVar20 /*12*/].f_2 == iParam0 && !Global_44588[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_44588[iVar20 /*12*/].f_2;
		iVar0 = Global_53526[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_53526[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44580 = (Global_44580 - 1);
						if (Global_44580 < 0)
						{
							Global_44580 = 0;
						}
						break;
					
					case 1:
						Global_44581 = (Global_44581 - 1);
						if (Global_44581 < 0)
						{
							Global_44581 = 0;
						}
						break;
					
					case 2:
						Global_44582 = (Global_44582 - 1);
						if (Global_44582 < 0)
						{
							Global_44582 = 0;
						}
						break;
					}
				}
		}
		Global_53526[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_53526[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_53526[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53526[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_53526[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53526[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_53526[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_53526[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44580 = (Global_44580 - 1);
						if (Global_44580 < 0)
						{
							Global_44580 = 0;
						}
						break;
					
					case 1:
						Global_44581 = (Global_44581 - 1);
						if (Global_44581 < 0)
						{
							Global_44581 = 0;
						}
						break;
					
					case 2:
						Global_44582 = (Global_44582 - 1);
						if (Global_44582 < 0)
						{
							Global_44582 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_53888[iVar24 /*203*/].f_1 == iParam1 && Global_53888[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_53526[iParam0 /*120*/].f_18[iVar0] = Global_53888[iVar23 /*203*/].f_1;
		Global_53526[iParam0 /*120*/].f_1[iVar0] = (Global_53888[iVar23 /*203*/].f_9 - 1);
		Global_53526[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53526[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_53526[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53526[iParam0 /*120*/]++;
		iVar25 = Global_53526[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_53888[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_44588[iVar26 /*12*/].f_2;
		if (Global_53888[iVar23 /*203*/].f_10[(Global_53888[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_53888[iVar23 /*203*/].f_10[(Global_53888[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_374(Global_44588[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_53526[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_370(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_370(1, iVar1, iVar2, "PW_FEED_EM_1" /* GXT: You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented... */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_370(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_370(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_378(int iParam0)//Position - 0x2A9E4
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!BitTest(Global_113810.f_24989, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_375(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_53888[iVar0 /*203*/] = 0;
}

int func_379(int iParam0, int iParam1, int iParam2)//Position - 0x2AA1E
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_55310 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53888[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_53888[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_53888[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_55311[iVar1 /*53*/].f_52 == 0)
		{
			Global_55311[iVar1 /*53*/].f_52 = iVar0;
			Global_55311[iVar1 /*53*/] = iParam0;
			Global_55311[iVar1 /*53*/].f_1 = iParam1;
			Global_55311[iVar1 /*53*/].f_2 = iParam2;
			Global_113810.f_21040.f_310++;
			if (Global_113810.f_21040.f_310 == 0)
			{
				Global_113810.f_21040.f_310 = 1;
			}
			Global_55311[iVar1 /*53*/].f_10 = 0;
			Global_55311[iVar1 /*53*/].f_3 = Global_113810.f_21040.f_310;
			Global_55311[iVar1 /*53*/].f_4 = 1;
			Global_55310++;
			return Global_55311[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_380(int iParam0, bool bParam1)//Position - 0x2AB39
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_375(iParam0);
	if (iVar0 > -1)
	{
		if (Global_53888[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53888[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53888[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_53888[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_53888[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_53888[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_53888[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_53888[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_53526[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_53526[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_53526[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_53526[iVar6 /*120*/].f_18[iVar8] == Global_53888[iVar4 /*203*/].f_1)
							{
								if (Global_53526[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_44580 = (Global_44580 - 1);
											break;
										
										case 1:
											Global_44581 = (Global_44581 - 1);
											break;
										
										case 2:
											Global_44582 = (Global_44582 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_53888[iVar4 /*203*/].f_2 = iParam0;
	Global_53888[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_53888[iVar4 /*203*/] = 1;
	}
	Global_113810.f_21040.f_310++;
	if (Global_113810.f_21040.f_310 == 0)
	{
		Global_113810.f_21040.f_310 = 1;
	}
	Global_53888[iVar4 /*203*/].f_1 = Global_113810.f_21040.f_310;
	Global_53888[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_381(int iParam0, int iParam1, bool bParam2)//Position - 0x2AD51
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113810.f_32752[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113810.f_32752[iParam0]), iParam1);
	}
}

int func_382(int iParam0, int iParam1, int iParam2)//Position - 0x2AD8C
{
	if (func_411(iParam0) == 3)
	{
		return 0;
	}
	if (func_411(iParam0) == 4)
	{
		return 0;
	}
	return func_383(func_411(iParam0), 0, iParam1, iParam2, 0);
}

int func_383(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2ADC0
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_410();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_409(99, 1);
					func_408(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_408(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_408(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_393(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_392(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_408(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_408(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_408(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_392(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_408(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_408(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_408(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_408(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_408(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_408(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_408(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_408(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_408(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_408(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_408(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_408(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_408(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_408(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_408(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_392(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_408(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_408(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_408(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_408(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_408(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_408(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_391(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_409(95, iParam3);
					break;
				
				case 1:
					func_409(97, iParam3);
					break;
				
				case 2:
					func_409(96, iParam3);
					break;
			}
			func_409(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_386(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_386(bVar1);
	}
	iVar5 = (Global_60659[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60659[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60659[iVar2] = 2147483647;
				}
				else
				{
					Global_60659[iVar2] = (Global_60659[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_408(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_408(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_408(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60659[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60659[iVar2];
			Global_60659[iVar2] = (Global_60659[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113810.f_20567.f_233[iVar2 /*69*/]++;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_385(iParam0);
	if (Global_43377 == 15)
	{
		func_384(0);
	}
	return 1;
}

void func_384(bool bParam0)//Position - 0x2B3BF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60667[iVar0 /*3*/][0] = Global_113810.f_20567[iVar0];
		Global_60667.f_31[iVar0 /*3*/][0] = Global_113810.f_20567.f_11[iVar0];
		Global_60667.f_62[iVar0 /*3*/][0] = Global_113810.f_20567.f_22[iVar0];
		Global_60667.f_93[iVar0 /*3*/][0] = Global_113810.f_20567.f_33[iVar0];
		Global_60667.f_124[iVar0 /*3*/][0] = Global_113810.f_20567.f_44[iVar0];
		Global_60667.f_155[iVar0 /*3*/][0] = Global_113810.f_20567.f_55[iVar0];
		Global_60667.f_186[iVar0 /*3*/][0] = Global_113810.f_20567.f_66[iVar0];
		Global_60667.f_217[iVar0 /*3*/][0] = Global_113810.f_20567.f_77[iVar0];
		Global_60667.f_248[iVar0 /*3*/][0] = Global_113810.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_60667[iVar0 /*3*/][1] = Global_113810.f_20567[iVar0];
			Global_60667.f_31[iVar0 /*3*/][1] = Global_113810.f_20567.f_11[iVar0];
			Global_60667.f_62[iVar0 /*3*/][1] = Global_113810.f_20567.f_22[iVar0];
			Global_60667.f_93[iVar0 /*3*/][1] = Global_113810.f_20567.f_33[iVar0];
			Global_60667.f_124[iVar0 /*3*/][1] = Global_113810.f_20567.f_44[iVar0];
			Global_60667.f_155[iVar0 /*3*/][1] = Global_113810.f_20567.f_55[iVar0];
			Global_60667.f_186[iVar0 /*3*/][1] = Global_113810.f_20567.f_66[iVar0];
			Global_60667.f_217[iVar0 /*3*/][1] = Global_113810.f_20567.f_77[iVar0];
			Global_60667.f_248[iVar0 /*3*/][1] = Global_113810.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_385(int iParam0)//Position - 0x2B641
{
	int iVar0;
	
	iVar0 = Global_60659[iParam0];
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

void func_386(bool bParam0)//Position - 0x2B69B
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_390(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_390(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_390(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_390(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_389(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_389(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_389(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_389(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_389(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_389(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113810.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113810.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_388() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_388() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_387(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_387(bool bParam0)//Position - 0x2B814
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC" /* GXT: one free haircut. */;
		
		case 1:
			return "COUP_TATTOO" /* GXT: one free tattoo. */;
		
		case 2:
			return "COUP_WARSTOCK" /* GXT: 10% off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 3:
			return "COUP_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 4:
			return "COUP_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 5:
			return "COUP_MEDSPENS" /* GXT: 10 percent off your next medical expenses. */;
		
		case 6:
			return "COUP_SPRUNK" /* GXT: one free can of Sprunk. */;
		
		case 7:
			return "COUP_RESPRAY" /* GXT: one free respray. */;
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 13:
			return "COUP_CAS_DOCKTEASE" /* GXT: 10 percent off your next purchase at DockTease.com. */;
		
		case 14:
			return "COUP_CAS_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 15:
			return "COUP_CAS_SSASA" /* GXT: 10 percent off your next purchase at southernsanandreassuperautos.com. */;
		
		case 16:
			return "COUP_CAS_WARSTOCK" /* GXT: 10 percent off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 17:
			return "COUP_CAS_PANDM" /* GXT: 10 percent off your next purchase at pandmcycles.com. */;
			break;
		
		default:
			break;
	}
	return "";
}

int func_388()//Position - 0x2B916
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_389(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2B923
{
	int iVar0;
	
	iVar0 = func_177(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_390(int iParam0, bool bParam1, int iParam2)//Position - 0x2B946
{
	if (iParam2 == -1)
	{
		iParam2 = func_98();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_391(int iParam0)//Position - 0x2B964
{
	func_409(93, iParam0);
	func_409(29, iParam0);
	func_409(30, iParam0);
}

int func_392(int iParam0)//Position - 0x2B984
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
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_172(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_172(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_172(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_172(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_176(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_176(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_176(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_176(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_176(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_176(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113810.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_388() /*5568*/].f_681.f_10, iParam0);
}

int func_393(bool bParam0)//Position - 0x2BB24
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		func_407(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_394(27, 1);
	return 1;
}

int func_394(int iParam0, int iParam1)//Position - 0x2BBDB
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_395(iParam0, iParam1);
}

int func_395(int iParam0, int iParam1)//Position - 0x2BBF6
{
	if (func_27(14) && !func_406(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32534 != 0 && !Global_78689)
	{
		return 0;
	}
	if (func_405(&Global_4542602))
	{
		if (func_403(&Global_4542602, iParam0))
		{
			return 0;
		}
		if (func_396(&Global_4542602, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_396(var uParam0, int iParam1)//Position - 0x2BC93
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_406(iParam1))
	{
		return 0;
	}
	if (func_403(uParam0, iParam1))
	{
		return 0;
	}
	if (func_402(uParam0) < 0f)
	{
		func_401(uParam0, 0);
	}
	func_399(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_397(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_397(var uParam0, int iParam1)//Position - 0x2BD44
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_406(iParam1))
	{
		return 0;
	}
	if (func_403(uParam0, iParam1))
	{
		return 0;
	}
	if (func_402(uParam0) < 0f)
	{
		func_401(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_398(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_398(var uParam0, int iParam1)//Position - 0x2BDBF
{
	return (*uParam0)[iParam1] == 78;
}

void func_399(var uParam0)//Position - 0x2BDD0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_400(uParam0, iVar0);
		iVar0++;
	}
	func_401(uParam0, (Global_4542601 - 0.5f));
}

void func_400(var uParam0, int iParam1)//Position - 0x2BE04
{
	(*uParam0)[iParam1] = 78;
}

void func_401(var uParam0, float fParam1)//Position - 0x2BE14
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_402(var uParam0)//Position - 0x2BE31
{
	return uParam0->f_80;
}

bool func_403(var uParam0, int iParam1)//Position - 0x2BE3D
{
	return func_404(uParam0, iParam1) != -1;
}

int func_404(var uParam0, int iParam1)//Position - 0x2BE4F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_405(var uParam0)//Position - 0x2BE7C
{
	return uParam0->f_79 == 1;
}

int func_406(int iParam0)//Position - 0x2BE8A
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

int func_407(int iParam0, int iParam1)//Position - 0x2BEDA
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_408(int iParam0, int iParam1)//Position - 0x2BF2B
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_409(int iParam0, int iParam1)//Position - 0x2BF4E
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59227[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59227[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59227[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59227[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_410()//Position - 0x2BFAB
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[0] == iVar0)
		{
			Global_60659[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[1] == iVar0)
		{
			Global_60659[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[2] == iVar0)
		{
			Global_60659[2] = iVar0;
		}
	}
}

int func_411(int iParam0)//Position - 0x2C025
{
	return Global_2058[iParam0 /*29*/].f_17;
}

int func_412(int iParam0)//Position - 0x2C036
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_413())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_413()//Position - 0x2C080
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
	{
		return 1;
	}
	return 0;
}

int func_414(int iParam0)//Position - 0x2C0B2
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_415(int iParam0)//Position - 0x2C10A
{
	return func_416(iParam0, Global_43377);
}

int func_416(int iParam0, int iParam1)//Position - 0x2C11B
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_417(int iParam0, int iParam1, int iParam2)//Position - 0x2C2FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_536();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_136(iParam1);
	switch (iParam0)
	{
		case 10:
			iVar0 = 5;
			switch (iVar2)
			{
				case 0:
					iVar1 = 32;
					break;
				
				case 2:
					iVar1 = 33;
					break;
				
				case 1:
					iVar1 = 31;
					break;
			}
			break;
		
		case 11:
			iVar0 = 7;
			if (((iParam1 == 15 || iParam1 == 16) || iParam1 == 164) || iParam1 == 217)
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 191;
						break;
					
					case 2:
						iVar1 = 193;
						break;
					
					case 1:
						iVar1 = 192;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 40;
						break;
					
					case 2:
						iVar1 = 42;
						break;
					
					case 1:
						iVar1 = 41;
						break;
					}
			}
			break;
		
		case 12:
			iVar0 = 6;
			switch (iVar2)
			{
				case 0:
					iVar1 = 34;
					break;
				
				case 2:
					iVar1 = 36;
					break;
				
				case 1:
					iVar1 = 35;
					break;
			}
			break;
		
		case 13:
			iVar0 = 8;
			switch (iVar2)
			{
				case 0:
					iVar1 = 37;
					break;
				
				case 2:
					iVar1 = 39;
					break;
				
				case 1:
					iVar1 = 38;
					break;
			}
			break;
		
		case 15:
			iVar0 = 9;
			switch (iVar2)
			{
				case 0:
					iVar1 = 186;
					break;
				
				case 2:
					iVar1 = 188;
					break;
				
				case 1:
					iVar1 = 185;
					break;
			}
			break;
		
		case 16:
			iVar0 = 10;
			switch (iVar2)
			{
				case 0:
					iVar1 = 189;
					break;
				
				case 2:
					iVar1 = 190;
					break;
				
				case 1:
					iVar1 = 187;
					break;
			}
			break;
		
		default:
			return;
			break;
	}
	if (func_376(iVar0, iVar1, 1))
	{
		func_418(iVar0, sVar3);
		func_369(iVar0);
		func_378(iVar0);
	}
}

void func_418(int iParam0, char* sParam1)//Position - 0x2C506
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_375(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_53888[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_53888[iVar0 /*203*/].f_10[(Global_53888[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_53888[iVar0 /*203*/].f_10[(Global_53888[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_53888[iVar0 /*203*/].f_10[(Global_53888[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_53888[iVar0 /*203*/].f_10[(Global_53888[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_419(int iParam0, int iParam1)//Position - 0x2C5BB
{
	int iVar0;
	int iVar1;
	
	if (!func_424(iParam1) || !func_424(iParam0))
	{
		return 1;
	}
	iVar0 = func_58(iParam0);
	iVar1 = func_58(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_60(iParam0);
	iVar1 = func_60(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_423(iParam0);
	iVar1 = func_423(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_422(iParam0);
	iVar1 = func_422(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_421(iParam0);
	iVar1 = func_421(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_420(iParam0);
	iVar1 = func_420(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_420(int iParam0)//Position - 0x2C6C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_421(int iParam0)//Position - 0x2C6DA
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_422(int iParam0)//Position - 0x2C6ED
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_423(int iParam0)//Position - 0x2C700
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_424(int iParam0)//Position - 0x2C712
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_420(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_421(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_422(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_58(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_60(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_423(iParam0);
	if (iVar5 < 1 || iVar5 > func_57(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_425()//Position - 0x2C7EE
{
	int iVar0;
	var uVar1;
	char* sVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	struct<3> Var26;
	int iVar29;
	
	iVar0 = 0;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
	{
		if (Global_113810.f_32752.f_5588)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_78384))
			{
				func_338(&(Global_113810.f_32752.f_5510), Global_113810.f_32752.f_5590);
				Global_113810.f_32752.f_5588 = 0;
			}
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78384, false) || func_50(Global_78384, Global_113810.f_32752.f_5590, 1))
			{
				Global_113810.f_32752.f_5588 = 0;
			}
			else
			{
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == Global_78384) && func_463(PLAYER::PLAYER_PED_ID()) != Global_113810.f_32752.f_5590)
				{
					Global_113810.f_32752.f_5590 = func_463(PLAYER::PLAYER_PED_ID());
				}
				if (Global_78384 != iLocal_669)
				{
					sVar2 = ENTITY::GET_ENTITY_SCRIPT(Global_78384, &uVar1);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
					{
						if (MISC::GET_HASH_KEY(sVar2) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
						{
							Global_113810.f_32752.f_5588 = 0;
							iLocal_1026 = Global_78384;
							if (Global_77479.f_139[24] == Global_78384 || (Global_78385 == Global_78384 && Global_78386 == 24))
							{
								func_462(458, 24, -1);
							}
							else
							{
								func_462(458, 0, -1);
							}
							Global_78384 = 0;
						}
					}
				}
				if (((Global_113810.f_32752.f_5590 != func_536() && Global_100237[Global_113810.f_32752.f_5590 /*98*/] == Global_113810.f_32752.f_5510.f_66) && MISC::ARE_STRINGS_EQUAL(&(Global_100237[Global_113810.f_32752.f_5590 /*98*/].f_27), &(Global_113810.f_32752.f_5510.f_1))) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_121(&(Global_113810.f_32752.f_5510), &(Global_113810.f_32752.f_5600[Global_113810.f_32752.f_5590 /*78*/]));
					Global_113810.f_32752.f_5588 = 0;
					iLocal_1026 = 0;
					func_462(458, 0, -1);
					Global_78384 = 0;
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_78384) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78384, false)) && !func_50(Global_78384, Global_113810.f_32752.f_5590, 1))
		{
			Global_113810.f_32752.f_5588 = 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1026) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1026, false))
		{
			if (((!Global_113810.f_32752.f_5588 && iLocal_1026 != Global_78384) && iLocal_1026 != iLocal_1027) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1026, true))
			{
				func_31(iLocal_1026, 145);
				iLocal_1026 = 0;
				func_462(458, 0, -1);
			}
		}
		else if (iLocal_1026 != 0)
		{
			iLocal_1026 = 0;
			func_462(458, 0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1027) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1027, false))
		{
		}
		else if (iLocal_1027 != 0)
		{
			iLocal_1027 = 0;
		}
	}
	if (Global_78388.f_66 != 0 && Global_78385 == 0)
	{
		func_338(&Global_78388, Global_78466);
		Global_78388.f_66 = 0;
	}
	Var3 = { 433.67212f, -1006.53754f, 25.963509f };
	Var6 = { 433.6578f, -1017.5f, 32.098953f };
	fVar9 = 11.25f;
	if (iLocal_665 > 0 && iLocal_665 < 99)
	{
		if (iLocal_665 != 3)
		{
			if (((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3, Var6, fVar9, false, true, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14))
			{
				iLocal_665 = 99;
			}
		}
	}
	if (func_461(iLocal_670))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_855))
		{
			if (((func_27(15) || func_27(12)) && iLocal_665 != 3) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_855 = func_459(428.37f, -1013.5f, 27.93f, 0);
				HUD::SET_BLIP_SPRITE(iLocal_855, 225);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_855, "IMPOUND_BLIPNAME" /* GXT: Vehicle Impound */);
				HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_855, true);
			}
		}
		else if ((!(func_27(15) || func_27(12)) || iLocal_665 == 3) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			HUD::REMOVE_BLIP(&iLocal_855);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_855))
	{
		HUD::REMOVE_BLIP(&iLocal_855);
	}
	switch (iLocal_665)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((Local_400.f_2 == 0 && (func_27(15) || func_27(12))) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (func_461(iLocal_670))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3, Var6, fVar9, false, true, 0))
						{
							if (func_414(iLocal_670) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (func_334(iVar11, iLocal_670))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									func_267(&iLocal_666, 3, "IMPOUND_TRIG2" /* GXT: Press ~a~ to retrieve an impounded vehicle. */, 0, 0, 0, 0);
								}
								else
								{
									func_267(&iLocal_666, 3, "IMPOUND_TRIG1" /* GXT: Press ~a~ to retrieve an impounded vehicle for $250. */, 0, 0, 0, 0);
								}
								iLocal_665 = 1;
							}
							else
							{
								func_265("SCLUB_NO_MONEY" /* GXT: Not enough cash. */, -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_263(0, -1, 0))
			{
				if (func_262(iLocal_666, 1))
				{
					func_72(&iLocal_666);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_458();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (func_334(iVar13, iLocal_670))
						{
							iVar12++;
						}
						iVar13++;
					}
					if (iVar12 > 1)
					{
						iLocal_655 = 0;
						iLocal_656 = 0;
						iLocal_657 = 0;
						bLocal_660 = -1;
						iLocal_665++;
					}
					else
					{
						iVar14 = 0;
						while (iVar14 < 2)
						{
							if (func_334(iVar14, iLocal_670))
							{
								if (iVar14 == 0)
								{
									Var15 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var15 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_431(&iLocal_669, iVar14, Var15, 179.24f, 1))
								{
									SYSTEM::WAIT(0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_669))
								{
									if (iVar14 == 0)
									{
										func_430(18, 1, 0);
									}
									else
									{
										func_430(19, 1, 0);
									}
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
									}
									func_382(iLocal_670, 119, 250);
									func_429(iVar14);
									func_31(iLocal_669, func_536());
									func_74(1, -1);
									iLocal_665 = 3;
									func_72(&iLocal_666);
									iLocal_666 = -1;
									iLocal_657 = 0;
								}
							}
							iVar14++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_536())
			{
				case 0:
					iVar18 = 0;
					break;
				
				case 1:
					iVar18 = 1;
					break;
				
				case 2:
					iVar18 = 2;
					break;
			}
			func_458();
			if (!iLocal_655 || iLocal_656)
			{
				func_260(0, 0);
				func_259(1, 1, 0, 0, 0);
				func_258(1, 2, 1, 1, 1);
				func_257("IMPOUND_TITLE" /* GXT: SELECT VEHICLE */);
				iLocal_661 = 0;
				iVar19 = -1;
				iVar21 = 0;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (func_334(iVar20, iLocal_670))
					{
						func_140(iVar21, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_113810.f_32752.f_5038[iVar18 /*157*/][iVar20 /*78*/].f_66), 0, 1, 0, 0, 0);
						if (iVar19 == -1)
						{
							iVar19 = iVar21;
							bLocal_660 = iVar21;
						}
						MISC::SET_BIT(&iLocal_661, iVar21);
						iLocal_662[iVar21] = iVar20;
						func_140(iVar21, "IMPOUND_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
						func_428(250, 0);
						iVar21++;
					}
					iVar20++;
				}
				iVar21 = 0;
				func_132(bLocal_660, 1, 1);
				iLocal_658 = 1;
				iLocal_656 = 0;
				iLocal_655 = 1;
			}
			else
			{
				iVar0 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
						func_129(0, 0, 0, 1);
						func_128(0, -1, 1);
						if (func_127())
						{
							if (Global_4541034 != bLocal_660)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								bLocal_660 = Global_4541034;
								func_132(bLocal_660, 1, 1);
								iLocal_658 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
				{
					if (!iLocal_657)
					{
						iLocal_658 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						bVar22 = (bLocal_660 - 1);
						while (bVar22 >= 0)
						{
							if (BitTest(iLocal_661, bVar22))
							{
								bLocal_660 = bVar22;
								bVar23 = true;
								bVar22 = false;
							}
							bVar22 = (bVar22 + -1);
						}
						if (!bVar23)
						{
							bVar22 = 31;
							while (bVar22 >= bLocal_660 + 1)
							{
								if (BitTest(iLocal_661, bVar22))
								{
									bLocal_660 = bVar22;
									bVar23 = true;
									bVar22 = bLocal_660;
								}
								bVar22 = (bVar22 + -1);
							}
						}
						if (bVar23)
						{
							func_132(bLocal_660, 1, 1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
				{
					if (!iLocal_657)
					{
						iLocal_658 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						bVar24 = bLocal_660 + 1;
						while (bVar24 <= 31)
						{
							if (BitTest(iLocal_661, bVar24))
							{
								bLocal_660 = bVar24;
								bVar25 = true;
								bVar24 = 31;
							}
							bVar24++;
						}
						if (!bVar25)
						{
							bVar24 = false;
							while (bVar24 <= (bLocal_660 - 1))
							{
								if (BitTest(iLocal_661, bVar24))
								{
									bLocal_660 = bVar24;
									bVar25 = true;
									bVar24 = bLocal_660;
								}
								bVar24++;
							}
						}
						if (bVar25)
						{
							func_132(bLocal_660, 1, 1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
				{
					iVar0 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!iLocal_657)
					{
						func_126("IMPOUND_CNF" /* GXT: Are you sure you want to retrieve this vehicle? */, 0, 0);
						func_125(-1);
						func_124(201, "ITEM_YES" /* GXT: Confirm */, -1);
						func_124(202, "ITEM_NO" /* GXT: Back */, -1);
						iLocal_657 = 1;
					}
					else
					{
						if (bLocal_660 == 0)
						{
							Var26 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							Var26 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_334(iLocal_662[bLocal_660], iLocal_670))
						{
							while (!func_431(&iLocal_669, iLocal_662[bLocal_660], Var26, 179.24f, 1))
							{
								SYSTEM::WAIT(0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_669))
							{
								if (bLocal_660 == 0)
								{
									func_430(18, 1, 0);
								}
								else
								{
									func_430(19, 1, 0);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								}
								func_382(iLocal_670, 119, 250);
								func_429(iLocal_662[bLocal_660]);
								func_31(iLocal_669, func_536());
								func_74(1, -1);
								iLocal_665++;
								func_72(&iLocal_666);
								iLocal_666 = -1;
								iLocal_657 = 0;
							}
						}
						iLocal_656 = 1;
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_657)
					{
						iLocal_658 = 1;
						iLocal_657 = 0;
					}
					else
					{
						iLocal_665 = 99;
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_658)
			{
				func_126("", 0, 0);
				func_125(-1);
				func_124(201, "ITEM_SELECT" /* GXT: Select */, -1);
				func_124(202, "ITEM_EXIT" /* GXT: Exit */, -1);
				iLocal_657 = 0;
				iLocal_658 = 0;
			}
			if (func_263(0, -1, 0))
			{
				func_77(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 431.4f, -997.33f, 24.76f, true) > 20f && !func_427())
			{
				func_31(iLocal_669, func_536());
				iLocal_665 = 99;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 431.4f, -997.33f, 24.76f, true) > 100f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_669))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_669, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_669, false) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_669, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) > 100f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_669))
							{
								func_426(iLocal_669, 1, 145);
								VEHICLE::DELETE_VEHICLE(&iLocal_669);
								MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, false, false, true, true, false, false, 0);
								iLocal_665 = 99;
							}
						}
						else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_669, false))
						{
							MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, false, false, true, true, false, false, 0);
							func_31(iLocal_669, func_536());
							iLocal_665 = 99;
						}
					}
					else
					{
						MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, false, false, true, true, false, false, 0);
						iLocal_665 = 99;
					}
				}
				else
				{
					MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, false, false, true, true, false, false, 0);
					iLocal_665 = 99;
				}
			}
			break;
		
		case 99:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			func_72(&iLocal_666);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_662[iVar29] = -1;
				iVar29++;
			}
			func_430(18, 0, 0);
			func_430(19, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_669))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_669);
			}
			iLocal_665 = 0;
			break;
	}
	if (iLocal_665 == 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 428.29285f, -996.6834f, 24.488642f, 439.54382f, -996.71136f, 28.103334f, 8.6875f, false, true, 0))
		{
			if (!iLocal_668)
			{
				func_430(18, 1, 0);
				iLocal_668 = 1;
			}
		}
		else if (iLocal_668 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 431.27148f, -1004.05896f, 23.981976f, 431.03943f, -993.621f, 27.618681f, 6.8125f, false, true, 0))
		{
			func_430(18, 0, 0);
			iLocal_668 = 0;
		}
	}
}

int func_426(int iParam0, int iParam1, int iParam2)//Position - 0x2D5D0
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (MISC::GET_HASH_KEY(sVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_31(iParam0, iParam2);
	return 1;
}

int func_427()//Position - 0x2D610
{
	if (MISC::IS_POSITION_OCCUPIED(431.44235f, -997.73083f, 24.761612f, 4.75f, false, true, true, false, false, 0, false))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(436.6913f, -997.5869f, 24.755816f, 4.75f, false, true, true, false, false, 0, false))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(431.07f, -1005.57f, 26.2f, 4.75f, false, true, true, false, false, 0, false))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(436.52f, -1005.47f, 26.17f, 4.75f, false, true, true, false, false, 0, false))
	{
		return 1;
	}
	return 0;
}

void func_428(int iParam0, bool bParam1)//Position - 0x2D6BA
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23390.f_5665 >= 256)
	{
		return;
	}
	if (Global_23390.f_6186 >= 4)
	{
		return;
	}
	if (Global_23390.f_6187 != 1)
	{
		return;
	}
	if (Global_23390.f_6186 >= Global_23390.f_6184)
	{
		return;
	}
	Global_23390.f_4309[Global_23390.f_5665] = iParam0;
	Global_23390.f_5665++;
	Global_23390.f_2387[Global_23390.f_6185 /*5*/][Global_23390.f_6186] = 2;
	Global_23390.f_6186++;
	if (Global_23390.f_6186 >= Global_23390.f_6184)
	{
		fVar0 = func_135();
		if (Global_23390.f_5518[Global_23390.f_5662] && Global_23390.f_6186 == Global_23390.f_6184)
		{
			func_114(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23390.f_5511[(Global_23390.f_5662 - 1)])
		{
			Global_23390.f_5511[(Global_23390.f_5662 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23390.f_6186 >= Global_23390.f_6184)
		{
			fVar3 = func_134();
			if (fVar3 > Global_23390.f_6188[Global_23390.f_5661])
			{
				Global_23390.f_6188[Global_23390.f_5661] = fVar3;
			}
		}
	}
}

void func_429(int iParam0)//Position - 0x2D7F5
{
	int iVar0;
	
	switch (func_536())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_335(&(Global_113810.f_32752.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_430(int iParam0, bool bParam1, bool bParam2)//Position - 0x2D864
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_42073[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (BitTest(Global_42073[iParam0 /*31*/].f_1, 1))
			{
				Global_42073[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_42073[iParam0 /*31*/].f_22 = 1f;
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_42073[iParam0 /*31*/], Global_42073[iParam0 /*31*/].f_22, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_42073[iParam0 /*31*/], 1, false, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_42073[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_42073[iParam0 /*31*/].f_22 = 0f;
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_42073[iParam0 /*31*/], Global_42073[iParam0 /*31*/].f_22, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_42073[iParam0 /*31*/], 1, false, true);
		}
	}
}

int func_431(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x2D911
{
	int iVar0;
	
	if (!func_334(iParam1, func_536()) || ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	switch (func_536())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	STREAMING::REQUEST_MODEL(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (STREAMING::HAS_MODEL_LOADED(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, Param2, fParam5, false, false, false);
		func_432(*iParam0, &(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
		VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
		if (bParam6)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_432(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x2DA16
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_451(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_33(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_33(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_33(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_33(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_33(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_33(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_33(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_33(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_33(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_33(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_33(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_33(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_33(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_33(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_33(iVar6)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_33(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_449(uParam1->f_5) || func_449(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_448(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_447())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_35(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_446(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_446(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			func_439(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_33(iVar7 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, true);
				}
				iVar7++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if ((((func_433() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_43(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_433()//Position - 0x2E10C
{
	if ((((Global_4718592.f_108230 == 6 || Global_4718592.f_108230 == 7) || Global_4718592.f_108230 == 18) || Global_4718592.f_108230 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_437(7))
	{
		if (func_435(Global_2672524.f_4.f_16) || func_434(Global_2672524.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_434(var uParam0)//Position - 0x2E19B
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1890739[iVar0 /*138*/].f_77.f_60 != 0;
	}
	return 0;
}

int func_435(int iParam0)//Position - 0x2E1BF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_436(iParam0, 9);
	}
	return 0;
}

var func_436(int iParam0, int iParam1)//Position - 0x2E1DD
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

bool func_437(int iParam0)//Position - 0x2E1F5
{
	return func_438(&(Global_2672524.f_184), iParam0);
}

var func_438(var uParam0, var uParam1)//Position - 0x2E209
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_439(int iParam0, var uParam1, var uParam2)//Position - 0x2E22C
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, 255);
				}
				else
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_444(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_312(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_442(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_442(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_441(iParam0);
	if (func_440(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_440(int iParam0)//Position - 0x2E406
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE" /* GXT: Roll Cage and Chassis Upgrade */) || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG" /* GXT: Stunt Cage */))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_441(var uParam0)//Position - 0x2E4E2
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_442(int iParam0, int iParam1)//Position - 0x2E539
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
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
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_443(iParam0, 38) + 1;
		iVar1 = func_443(iParam0, 24) + 1;
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_443(int iParam0, int iParam1)//Position - 0x2E622
{
	int iVar0;
	
	if ((STREAMING::IS_MODEL_VALID(Global_152698) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152698)) && Global_152699 == iParam1)
	{
		return Global_152700;
	}
	iVar0 = (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_444(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_444(int iParam0, int iParam1, int iParam2)//Position - 0x2E684
{
	if (!func_445() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_445()//Position - 0x2E6A8
{
	return 0;
}

void func_446(int iParam0, int iParam1)//Position - 0x2E6B1
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_447()//Position - 0x2E729
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_448(int iParam0)//Position - 0x2E73A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_449(int iParam0)//Position - 0x2E782
{
	if (!func_445() && func_450(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_450(int iParam0)//Position - 0x2E7A2
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_451(int iParam0)//Position - 0x2E7F5
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_457(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (func_453(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_452(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_452(int iParam0)//Position - 0x2E87C
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_453(int iParam0)//Position - 0x2E8AB
{
	if (func_456(iParam0) == 233)
	{
		return func_454(iParam0);
	}
	return -1;
}

int func_454(int iParam0)//Position - 0x2E8C8
{
	if (func_455(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_455(int iParam0, int iParam1)//Position - 0x2E8EB
{
	if (func_99(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_456(int iParam0)//Position - 0x2E92F
{
	if (func_99(iParam0))
	{
		if (func_455(iParam0, 0))
		{
			return Global_1895156[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_457(int iParam0, int iParam1)//Position - 0x2E95B
{
	int iVar0;
	
	if (func_288(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_458()//Position - 0x2E9A8
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 239 /*INPUT_CURSOR_X*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 240 /*INPUT_CURSOR_Y*/, true);
}

int func_459(struct<3> Param0, bool bParam3)//Position - 0x2E9F3
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_460(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_460(bool bParam0, float fParam1, float fParam2)//Position - 0x2EA1F
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_461(int iParam0)//Position - 0x2EA36
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_334(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_462(int iParam0, int iParam1, int iParam2)//Position - 0x2EA60
{
	if (iParam2 == -1)
	{
		iParam2 = func_98();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_463(int iParam0)//Position - 0x2EA88
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_464(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_464(int iParam0)//Position - 0x2EAC5
{
	if (func_25(iParam0))
	{
		return func_465(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_465(int iParam0)//Position - 0x2EAEA
{
	return Global_2058[iParam0 /*29*/];
}

void func_466(int* iParam0)//Position - 0x2EAF9
{
	int iVar0;
	struct<8> Var1;
	
	if (!BitTest(Global_113810.f_10019.f_25, 7))
	{
		if (!BitTest(*iParam0, 6))
		{
			if (func_27(13) && func_14(func_16()))
			{
				MISC::SET_BIT(iParam0, 6);
				iVar0 = func_9();
				iParam0->f_6 = { func_497(iVar0) };
				if (Global_32560 == iVar0 || Global_32560 == 0)
				{
					func_3(1);
					Var1 = { func_496("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					AUDIO::START_AUDIO_SCENE(&Var1);
					iVar0 = (Global_32560 + 1 % 8);
					func_494(iParam0, iVar0);
					iParam0->f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
					MISC::SET_BIT(iParam0, 12);
					if (iVar0 == 7)
					{
						MISC::SET_BIT(&(Global_113810.f_10019.f_25), 7);
						func_493(255, 0);
					}
				}
				else
				{
					func_494(iParam0, 0);
					MISC::CLEAR_BIT(&(Global_113810.f_10019.f_25), 12);
				}
			}
		}
		else
		{
			func_492();
			if (!BitTest(*iParam0, 31))
			{
				if (!BitTest(*iParam0, 25))
				{
					func_491(iParam0);
				}
				else if (func_490())
				{
					func_474(iParam0);
					iParam0->f_3 = MISC::GET_GAME_TIMER() + 2000;
				}
				if (!func_473(0))
				{
					func_493(255, 0);
				}
			}
			else if (func_473(0))
			{
				if (MISC::GET_GAME_TIMER() > iParam0->f_3)
				{
					func_493(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16()))
			{
				func_467(iParam0);
			}
		}
	}
}

void func_467(int* iParam0)//Position - 0x2EC6B
{
	struct<8> Var0;
	
	if (BitTest(*iParam0, 31))
	{
		func_472(iParam0);
	}
	if (BitTest(*iParam0, 25))
	{
		func_468(iParam0);
	}
	Var0 = { func_496("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Var0))
	{
		AUDIO::STOP_AUDIO_SCENE(&Var0);
	}
	MISC::CLEAR_BIT(iParam0, 6);
	MISC::CLEAR_BIT(iParam0, 30);
	MISC::CLEAR_BIT(iParam0, 8);
}

void func_468(int* iParam0)//Position - 0x2ECD0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_471(iVar0);
	iVar2 = func_470(iVar1);
	iVar3 = func_469(iVar1);
	if (iVar2 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
	}
	if (iVar3 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
	}
	MISC::CLEAR_BIT(iParam0, 25);
}

int func_469(int iParam0)//Position - 0x2ED16
{
	switch (iParam0)
	{
		case 17:
			return joaat("U_M_Y_Cyclist_01");
		
		case 49:
			return joaat("dune");
		
		default:
	}
	return 0;
}

int func_470(int iParam0)//Position - 0x2ED42
{
	switch (iParam0)
	{
		case 12:
			return joaat("A_C_Rabbit_01");
		
		case 109:
			return joaat("A_C_Boar");
		
		case 43:
			return joaat("A_C_Deer");
		
		case 35:
			return joaat("emperor2");
		
		case 17:
			return joaat("scorcher");
		
		case 28:
			return joaat("A_C_MtLion");
		
		case 49:
			return joaat("CS_Hunter");
		
		case 25:
			return joaat("A_M_Y_Hiker_01");
		
		case 14:
			return joaat("A_F_Y_Hippie_01");
		
		case 86:
			return joaat("A_M_M_Hillbilly_01");
		
		default:
	}
	return 0;
}

int func_471(int iParam0)//Position - 0x2EDDE
{
	switch (iParam0)
	{
		case 1:
			return 12;
		
		case 2:
			return 43;
		
		case 3:
			return 35;
		
		case 4:
			return 109;
		
		case 5:
			return 28;
		
		case 6:
			return 17;
		
		default:
	}
	return -1;
}

void func_472(int* iParam0)//Position - 0x2EE30
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0->f_4, false), 10f);
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_4));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_5))
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0->f_5, false), 10f);
		PED::DELETE_PED(&(iParam0->f_5));
	}
	MISC::CLEAR_BIT(iParam0, 31);
}

bool func_473(bool bParam0)//Position - 0x2EE8A
{
	if (bParam0)
	{
		return Global_110557.f_2 > 0.5f;
	}
	return Global_110557.f_2 >= 255f;
}

void func_474(int* iParam0)//Position - 0x2EEB5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_471(iVar0);
	func_475(iVar1, &(iParam0->f_5), &(iParam0->f_4), func_489(iVar0), func_488(iVar0), 1);
	MISC::SET_BIT(iParam0, 31);
}

void func_475(int iParam0, var uParam1, var uParam2, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x2EEEE
{
	switch (iParam0)
	{
		case 12:
			func_487(uParam1, Param3, fParam6, bParam7);
			break;
		
		case 109:
			func_486(uParam1, Param3, fParam6, bParam7);
			break;
		
		case 43:
			func_485(uParam1, Param3, fParam6, bParam7);
			break;
		
		case 35:
			func_484(uParam2, Param3, fParam6, bParam7);
			break;
		
		case 28:
			func_483(uParam1, Param3, fParam6, bParam7);
			break;
		
		case 17:
			func_482(uParam1, uParam2, Param3, fParam6, bParam7);
			break;
		
		case 49:
			func_480(uParam1, uParam2, Param3, fParam6);
			break;
		
		case 25:
			func_479(uParam1, Param3, fParam6);
			break;
		
		case 14:
			func_478(uParam1, Param3, fParam6);
			break;
		
		case 86:
			func_476(uParam1, Param3, fParam6);
			break;
	}
}

void func_476(var uParam0, struct<3> Param1, float fParam4)//Position - 0x2EFDF
{
	int iVar0;
	
	iVar0 = func_470(86);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(5, iVar0, Param1, fParam4, true, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		func_477(*uParam0);
		return;
	}
}

void func_477(int iParam0)//Position - 0x2F1E6
{
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_478(var uParam0, struct<3> Param1, float fParam4)//Position - 0x2F51E
{
	int iVar0;
	
	iVar0 = func_470(14);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(5, iVar0, Param1, fParam4, true, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		func_477(*uParam0);
		return;
	}
}

void func_479(var uParam0, struct<3> Param1, float fParam4)//Position - 0x2F725
{
	int iVar0;
	
	iVar0 = func_470(25);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(4, iVar0, Param1, fParam4, true, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.02f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.23f), (Param1.f_1 + 0.04f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.11f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, (Param1.f_0 + 0.09f), (Param1.f_1 - 0.06f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		func_477(*uParam0);
		return;
	}
}

void func_480(var uParam0, var uParam1, struct<3> Param2, float fParam5)//Position - 0x2F8B4
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_470(49);
	iVar1 = func_469(49);
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		*uParam0 = PED::CREATE_PED(4, iVar0, Param2, fParam5, true, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		GRAPHICS::ADD_DECAL(1110, ((Param2.f_0 + 0.12f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, ((Param2.f_0 - 0.03f) - 0.3f), ((Param2.f_1 + 0.04f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, ((Param2.f_0 - 0.2f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, ((Param2.f_0 - 0.05f) - 0.3f), ((Param2.f_1 - 0.15f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		GRAPHICS::ADD_DECAL(1110, ((Param2.f_0 + 0.01f) - 0.3f), ((Param2.f_1 - 0.06f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		func_477(*uParam0);
		Var2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = VEHICLE::CREATE_VEHICLE(iVar1, Param2 + Var2, fParam5, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam1, 2f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam1, 2f);
		VEHICLE::SET_VEHICLE_BRAKE(*uParam1, 1f);
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 0, func_481());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 1, func_481());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 2, func_481());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 3, func_481());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 4, func_481());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 5, func_481());
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam1, 15f);
		VEHICLE::SET_VEHICLE_HEADLIGHT_SHADOWS(*uParam1, 3);
		VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(*uParam1, true);
		PHYSICS::ACTIVATE_PHYSICS(*uParam1);
		return;
	}
}

int func_481()//Position - 0x2FB56
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_482(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x2FB74
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_470(17);
	iVar1 = func_469(17);
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		*uParam0 = PED::CREATE_PED(4, iVar1, Param2, fParam5, true, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		Var2 = { 0.02f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var2 = { 0.23f, 0.04f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var2 = { -0.05f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var2 = { -0.05f, -0.11f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var2 = { 0.09f, -0.06f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		if (bParam6)
		{
			Var2 = { 0.5783f, 0.1357f, -0.0683f };
			GRAPHICS::ADD_DECAL(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, true, false, false);
			Var2 = { 1.0477f, 0.1103f, -0.1388f };
			GRAPHICS::ADD_DECAL(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, true, false, false);
			Var2 = { 1.5048f, 0.4595f, -0.1953f };
			GRAPHICS::ADD_DECAL(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, true, false, false);
		}
		func_477(*uParam0);
		*uParam1 = VEHICLE::CREATE_VEHICLE(iVar0, (Param2.f_0 - 0.4f), (Param2.f_1 - 0.5f), Param2.f_2, fParam5, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_ROTATION(*uParam1, 0f, 85f, 0f, 2, true);
		VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam1, 20.5f);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam1, 15f);
		PHYSICS::ACTIVATE_PHYSICS(*uParam1);
		return;
	}
}

void func_483(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x2FE56
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_470(28);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, Param1, fParam4, true, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		Var1 = { 0.02f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.03f, 0.04f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.05f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { 0.01f, -0.06f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		if (bParam5)
		{
			Var1 = { 0.5206f, 0f, 0.003f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, true, false, false);
			Var1 = { 1.1258f, 0.0362f, -0.0837f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, true, false, false);
			Var1 = { 1.6107f, 0.4678f, -0.0815f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, true, false, false);
		}
		return;
	}
}

void func_484(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x3008B
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_470(35);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(iVar0, Param1, fParam4, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_ROTATION(*uParam0, 0f, 170f, 0f, 2, true);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1f);
		VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam0, 1f);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, 15f);
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 0, func_481());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 1, func_481());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 2, func_481());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 3, func_481());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 4, func_481());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 5, func_481());
		VEHICLE::SET_VEHICLE_HEADLIGHT_SHADOWS(*uParam0, 3);
		VEHICLE::SET_VEHICLE_LIGHTS(*uParam0, 2);
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(*uParam0, true);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		if (bParam5)
		{
			Var1 = { 0.4947f, 2.3632f, 0.1294f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, true, false, false);
			Var1 = { 0.9243f, 2.6606f, 0.1951f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, true, false, false);
			Var1 = { 1.5467f, 2.5044f, 0.2418f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, true, false, false);
			Var1 = { 1.357f, 3.8779f, 0.3259f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, true, false, false);
		}
		return;
	}
}

void func_485(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x30277
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_470(43);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, Param1, fParam4, true, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.03f, 0.04f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.2f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.05f, -0.15f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		if (bParam5)
		{
			Var1 = { 0.4125f, -0.5815f, -0.2056f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, true, false, false);
			Var1 = { 0.6332f, -1.1758f, -0.7106f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, true, false, false);
		}
		return;
	}
}

void func_486(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x30467
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_470(109);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, Param1, fParam4, true, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.03f, 0.04f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.2f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.05f, -0.15f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { 0.01f, -0.06f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		if (bParam5)
		{
			Var1 = { 0.4936f, -0.1763f, -0.0522f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, true, false, false);
			Var1 = { 1.0645f, 0.0483f, -0.0698f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, true, false, false);
			Var1 = { 1.6011f, -0.1704f, -0.1473f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, true, false, false);
		}
		func_477(*uParam0);
		return;
	}
}

void func_487(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x306BC
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_470(12);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, Param1, fParam4, true, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		Var1 = { 0.04f, 0.02f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.01f, 0.05f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.03f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		if (bParam5)
		{
			Var1 = { 0.2417f, -0.3975f, -0.2282f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, true, false, false);
			Var1 = { 0.0747f, -0.8188f, -0.2576f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, true, false, false);
			Var1 = { 0.4322f, -1.1548f, -0.4902f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, true, false, false);
		}
		func_477(*uParam0);
		return;
	}
}

float func_488(int iParam0)//Position - 0x308B1
{
	switch (iParam0)
	{
		case 1:
			return 190.1056f;
		
		case 2:
			return 132.9326f;
		
		case 3:
			return 355.7119f;
		
		case 4:
			return 209.0264f;
		
		case 5:
			return 122.6722f;
		
		case 6:
			return 174.841f;
		
		default:
	}
	return 0f;
}

Vector3 func_489(int iParam0)//Position - 0x30915
{
	switch (iParam0)
	{
		case 1:
			return Global_110534[0 /*3*/];
		
		case 2:
			return Global_110534[1 /*3*/];
		
		case 3:
			return Global_110534[2 /*3*/];
		
		case 4:
			return Global_110534[3 /*3*/];
		
		case 5:
			return Global_110534[4 /*3*/];
		
		case 6:
			return Global_110534[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_490()//Position - 0x30993
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_471(iVar0);
	iVar2 = func_470(iVar1);
	iVar3 = func_469(iVar1);
	if (iVar2 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
	}
	if (iVar3 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar3))
		{
			return 0;
		}
	}
	return 1;
}

void func_491(int* iParam0)//Position - 0x309E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_471(iVar0);
	iVar2 = func_470(iVar1);
	iVar3 = func_469(iVar1);
	if (iVar2 != 0)
	{
		STREAMING::REQUEST_MODEL(iVar2);
	}
	if (iVar3 != 0)
	{
		STREAMING::REQUEST_MODEL(iVar3);
	}
	MISC::SET_BIT(iParam0, 25);
}

void func_492()//Position - 0x30A28
{
	if (Global_110557.f_3 == MISC::GET_FRAME_COUNT())
	{
		return;
	}
	Global_110557.f_3 = MISC::GET_FRAME_COUNT();
	if (Global_110557.f_2 == 0f && Global_110557.f_1 == 0f)
	{
		return;
	}
	if (Global_110557.f_2 != Global_110557.f_1)
	{
		Global_110557.f_2 = (Global_110557.f_2 + Global_110557);
		if (Global_110557 <= 0f)
		{
			if (Global_110557.f_2 < Global_110557.f_1)
			{
				Global_110557.f_2 = Global_110557.f_1;
			}
		}
		else if (Global_110557.f_2 > Global_110557.f_1)
		{
			Global_110557.f_2 = Global_110557.f_1;
		}
	}
	GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, SYSTEM::ROUND(Global_110557.f_2), false);
}

void func_493(int iParam0, int iParam1)//Position - 0x30AE9
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	if (iParam1 <= 0)
	{
		Global_110557 = 0f;
		Global_110557.f_1 = fVar0;
		Global_110557.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_110557.f_2);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1) / (MISC::GET_FRAME_TIME() * 1000f));
		Global_110557 = (fVar1 / fVar2);
		Global_110557.f_1 = fVar0;
	}
}

void func_494(int* iParam0, int iParam1)//Position - 0x30B46
{
	func_495(&(Global_113810.f_10019.f_25), iParam1, 14336, 11);
}

void func_495(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x30B62
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, iParam3));
}

struct<8> func_496(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x30B86
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_497(int iParam0)//Position - 0x30BAB
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_110512[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_498()//Position - 0x30BD3
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 475.192f, -1313.4802f, 28.2074f) < 1000f)
		{
			if (!iLocal_390)
			{
				STREAMING::REQUEST_MODEL(joaat("v_ilev_uvline"));
				iLocal_389 = 1;
				if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_uvline")))
				{
					if (func_499(8))
					{
						iLocal_391[4] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_391[4], 471.48f, fVar0, 30.33f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_391[4], 0f, 0f, 116.9f, 2, true);
						iLocal_391[1] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_391[1], 471.48f, fVar0, 30.15f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_391[1], 0f, 0f, 116.9f, 2, true);
					}
					if (func_499(9))
					{
						iLocal_391[5] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_391[5], 471.48f, fVar0, 29.98f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_391[5], 0f, 0f, 116.9f, 2, true);
					}
					if (func_499(10))
					{
						iLocal_391[3] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_391[3], 471.48f, fVar0, 29.82f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_391[3], 0f, 0f, 116.9f, 2, true);
					}
					iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(475.192f, -1313.4802f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_391[iVar2]))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_391[iVar2], true, false);
							ENTITY::SET_ENTITY_ALWAYS_PRERENDER(iLocal_391[iVar2], true);
							INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_391[iVar2], iVar1);
						}
						iVar2++;
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_uvline"));
					iLocal_390 = 1;
				}
			}
		}
		else
		{
			if (iLocal_389)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_uvline"));
				iLocal_389 = 0;
			}
			if (iLocal_390)
			{
				func_539();
				iLocal_390 = 0;
			}
		}
	}
}

int func_499(int iParam0)//Position - 0x30E0B
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113810.f_9088.f_330[iParam0 /*6*/];
}

void func_500()//Position - 0x30E37
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77479.f_553)
	{
		if (!iLocal_398)
		{
			Global_77479.f_554 = 0;
			iLocal_398 = 1;
		}
		else if (Global_77479.f_554 >= 68)
		{
			Global_77479.f_553 = 0;
			iLocal_398 = 0;
		}
	}
	else
	{
		iLocal_398 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_864)
	{
		iVar1 = iLocal_865[iVar0];
		if (func_64(&Local_672, iVar1))
		{
			func_535(&Local_693, iVar1);
			if ((Local_693.f_69 && Local_400.f_3 == 0) || iVar1 == 14)
			{
				fLocal_939[iVar1] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_693.f_55, false);
			}
			else
			{
				fLocal_939[iVar1] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_672, false);
			}
			if (func_534())
			{
				func_533(iVar1);
				func_531(iVar1);
				func_530(iVar1);
				func_529(iVar1);
				func_527(iVar1);
				func_526(iVar1);
				func_525(iVar1);
				func_502(iVar1);
				if (BitTest(uLocal_46[iVar1], 2))
				{
					if (Global_77479.f_553)
					{
						iLocal_398 = 0;
					}
					func_540(iVar1);
				}
			}
			else
			{
				func_501(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_864;
	iLocal_864 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_934)
	{
		iLocal_934[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (BitTest(uLocal_46[iLocal_865[iVar0]], 2))
		{
			func_540(iLocal_865[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_938 != -1)
	{
		func_540(iLocal_938);
		iLocal_938 = -1;
	}
	iLocal_45++;
	if (iLocal_45 >= 68)
	{
		iLocal_45 = 0;
	}
	func_540(iLocal_45);
	if (iLocal_1012)
	{
		func_540(21);
		func_540(22);
		func_540(23);
		iLocal_1012 = 0;
		bLocal_1013 = true;
	}
	else if (bLocal_1013)
	{
		bLocal_1013 = false;
	}
	if (Global_77479.f_553)
	{
		Global_77479.f_554++;
	}
}

void func_501(int iParam0)//Position - 0x3102A
{
	if (iLocal_115[iParam0] != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_115[iParam0]);
		iLocal_115[iParam0] = 0;
	}
}

void func_502(int iParam0)//Position - 0x3104D
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	struct<60> Var11;
	int iVar89;
	bool bVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	struct<3> Var94;
	struct<3> Var100;
	int iVar106;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!BitTest(uLocal_46[iParam0], 2))
	{
		func_501(iParam0);
	}
	MISC::CLEAR_BIT(&(uLocal_46[iParam0]), 2);
	if (BitTest(uLocal_46[iParam0], 1))
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_184[iParam0 /*3*/], true);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (BitTest(Local_672.f_9, 23))
	{
		if (Local_672.f_4 == joaat("blimp"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (BitTest(Local_672.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((BitTest(Local_672.f_9, 19) || BitTest(Local_672.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (BitTest(Local_672.f_9, 25) && (((iLocal_670 == 0 && Local_400.f_0 == 21) || (iLocal_670 == 0 && Local_400.f_0 == 22)) || (iLocal_670 == 0 && Local_400.f_0 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iParam0], false))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (iParam0 == 24)
				{
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_77479.f_139[iParam0], -1, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						iVar3 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(Global_77479.f_139[iParam0], -1);
					}
					iVar4 = func_463(iVar3);
					if (iVar4 != Global_113810.f_32752.f_5591)
					{
						if (func_25(iVar4))
						{
							func_524("Updating last character to use vehicle gen", iVar4);
							Global_113810.f_32752.f_5591 = iVar4;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_77479.f_139[iParam0], true))
				{
					func_523("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], true);
					}
					Global_77479.f_139[iParam0] = 0;
					Global_77479[iParam0] = 1;
					func_522(iParam0);
					return;
				}
				if (((BitTest(uLocal_46[iParam0], 0) && !BitTest(Local_672.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_523("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
					Global_77479.f_139[iParam0] = 0;
					Global_77479[iParam0] = 1;
					func_522(iParam0);
					return;
				}
				if ((!BitTest(uLocal_46[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_77479.f_139[iParam0], PLAYER::PLAYER_PED_ID(), true))
					{
						func_523("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) != joaat("monster"))
						{
							VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], true);
						}
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
						Global_77479.f_139[iParam0] = 0;
						Global_77479[iParam0] = 1;
						func_522(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((BitTest(uLocal_46[iParam0], 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_77479.f_139[iParam0], true), Local_184[iParam0 /*3*/], true) > fVar5) || (!BitTest(uLocal_46[iParam0], 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_77479.f_139[iParam0], true), Local_672, true) > fVar5))
				{
					func_523("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
					Global_77479.f_139[iParam0] = 0;
					Global_77479[iParam0] = 1;
					func_522(iParam0);
					return;
				}
				if (!func_70(iParam0, 0))
				{
					func_523("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
					Global_77479.f_139[iParam0] = 0;
					Global_77479[iParam0] = 1;
					func_522(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_50(Global_77479.f_139[iParam0], iLocal_670, 1) && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0]))
					{
						func_523("No longer needed: Mission vehicle gen moved to players garage");
						if (ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) != joaat("monster"))
						{
							VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], true);
						}
						Global_77479.f_139[iParam0] = 0;
						Global_77479[iParam0] = 1;
						func_522(iParam0);
						return;
					}
				}
				if (fLocal_939[iParam0] > fVar0 && (!BitTest(uLocal_46[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_53();
						iVar7 = Global_113810.f_32752.f_4801;
						func_520(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_419(iVar6, iVar7))
						{
							if ((!func_66(Global_77479.f_139[iParam0]) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) != joaat("monster"))
							{
								VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], true);
							}
							func_31(Global_77479.f_139[iParam0], Global_113810.f_32752.f_5591);
							Global_77479[iParam0] = 1;
							func_522(iParam0);
						}
						else if (func_37(Global_77479.f_139[iParam0]))
						{
							func_32(Global_77479.f_139[iParam0], &Global_2696187);
							Global_2696186 = Global_113810.f_32752.f_5591;
							iLocal_1027 = Global_77479.f_139[iParam0];
						}
					}
					func_523("No longer needed: Player out for range");
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
					MISC::CLEAR_AREA(Local_672, 3f, false, false, false, false);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_672, 3f, false, false, false, false, false, false, 0);
					Global_77479.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_670 == 0) || (iParam0 == 6 && iLocal_670 == 2)) || (iParam0 == 2 && iLocal_670 == 1))
					{
						Global_77479.f_584 = { Local_672 };
						Global_77479.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (BitTest(Local_672.f_9, 30))
				{
					if (!BitTest(Local_672.f_9, 31))
					{
						if (!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_77479.f_139[iParam0]) && !ENTITY::IS_ENTITY_ATTACHED(Global_77479.f_139[iParam0]))
						{
							Var8 = { ENTITY::GET_ENTITY_COORDS(Global_77479.f_139[iParam0], true) };
							if (Var8.f_2 >= func_519(iParam0))
							{
								VEHICLE::SET_BOAT_ANCHOR(Global_77479.f_139[iParam0], true);
								MISC::SET_BIT(&(Local_672.f_9), 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_77479.f_139[iParam0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0]))
	{
		func_523("No longer needed: Vehicle not driveable");
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
		Global_77479.f_139[iParam0] = 0;
		Global_77479[iParam0] = 1;
		func_522(iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (Global_78386 == iParam0)
	{
		func_523("Processing a vehgen vehicle handover request.");
		if (ENTITY::DOES_ENTITY_EXIST(Global_78385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78385, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iParam0], false))
			{
				if (Global_77479.f_139[iParam0] == Global_78385)
				{
					func_523("Vehicle to be handed over is the same vehicle.");
					Global_78386 = -1;
					Global_78385 = 0;
					return;
				}
				else
				{
					func_523("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_66(Global_77479.f_139[iParam0])) && !func_65(Global_77479.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
					Global_77479.f_139[iParam0] = 0;
				}
			}
			Global_77479.f_139[iParam0] = Global_78385;
			Global_77479[iParam0] = 1;
			MISC::CLEAR_BIT(&(uLocal_46[iParam0]), 0);
			MISC::SET_BIT(&(uLocal_46[iParam0]), 1);
			MISC::CLEAR_BIT(&(uLocal_46[iParam0]), 3);
			Local_184[iParam0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_78385, true) };
			Global_78386 = -1;
			if (BitTest(Local_672.f_9, 10))
			{
				Var11.f_9 = 49;
				Var11.f_59 = 2;
				func_32(Global_78385, &Var11);
				if (Global_78387)
				{
					func_120(iParam0, &Var11, ENTITY::GET_ENTITY_COORDS(Global_78385, true), ENTITY::GET_ENTITY_HEADING(Global_78385), func_49(Global_78385));
				}
				else
				{
					func_120(iParam0, &Var11, Global_113810.f_32752.f_1864[Local_672.f_14 /*3*/], Global_113810.f_32752.f_1934[Local_672.f_14], func_49(Global_78385));
				}
				Global_77479.f_139[iParam0] = Global_78385;
				Global_77479.f_484[iParam0] = Global_77479.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar89 = func_536();
				if (func_25(iVar89))
				{
					func_523("Players stored switch vehicle cleared for prep getaway.");
					Global_100536[iVar89] = 0;
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], true, true);
			if (iParam0 == 24)
			{
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], false);
			}
			Global_78385 = 0;
			if (Global_2696187.f_66 != 0)
			{
				func_338(&Global_2696187, Global_2696186);
				Global_2696187.f_66 = 0;
			}
			return;
		}
		if (Global_2696187.f_66 != 0)
		{
			func_338(&Global_2696187, Global_2696186);
			Global_2696187.f_66 = 0;
		}
		func_523("Vehicle to be handed over doesn't exist.");
		Global_78386 = -1;
		Global_78385 = 0;
	}
	if (Global_77479[iParam0])
	{
		if (fLocal_939[iParam0] >= fVar0)
		{
			Global_77479[iParam0] = 0;
			func_523("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_670 == 0) || (iParam0 == 6 && iLocal_670 == 2)) || (iParam0 == 2 && iLocal_670 == 1))
		{
			Global_77479.f_584 = { 0f, 0f, 0f };
			Global_77479.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar90 = false;
	if (fLocal_939[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_113810.f_32752.f_1958[Local_672.f_14] != 0) && Global_113810.f_32752.f_1958[Local_672.f_14] > 3) && Local_672.f_4 != 0) && func_70(iParam0, 0)) && func_39(Local_672.f_4, 0, -1))
		{
			iVar91 = func_53();
			iVar92 = Global_113810.f_32752.f_4801;
			func_520(&iVar92, 0, 0, 17, 0, 0, 0);
			if (func_419(iVar91, iVar92))
			{
				func_338(&(Global_113810.f_32752.f_69[Local_672.f_14 /*78*/]), Global_113810.f_32752.f_5591);
				func_522(iParam0);
				Global_77479[iParam0] = 1;
				func_523("Cannot be created: Vehicle ready for impound");
				Global_2696187.f_66 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_670 == 0) || (iParam0 == 6 && iLocal_670 == 2)) || (iParam0 == 2 && iLocal_670 == 1))
		{
			bVar90 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_670 == 0) || (iParam0 == 6 && iLocal_670 == 2)) || (iParam0 == 2 && iLocal_670 == 1))
	{
		Global_77479.f_584 = { 0f, 0f, 0f };
		Global_77479.f_587 = { 0f, 0f, 0f };
	}
	if (Local_672.f_4 == 0)
	{
		Global_77479[iParam0] = 1;
		func_523("Cannot be created: Dummy model");
		return;
	}
	if (!func_39(Local_672.f_4, 0, -1))
	{
		Global_77479[iParam0] = 1;
		func_523("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_70(iParam0, 0))
	{
		Global_77479[iParam0] = 1;
		func_523("Cannot be created: Vehicle gen not available");
		return;
	}
	if (BitTest(Local_672.f_9, 14) && !func_70(iParam0, 5))
	{
		Global_77479[iParam0] = 1;
		func_523("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_518() && func_517(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_77479[iParam0] = 1;
		func_523("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_671)
	{
		Global_77479[iParam0] = 1;
		func_523("Cannot be created: Player character not valid");
		return;
	}
	if (BitTest(Local_672.f_9, 10))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iParam0]))
		{
			Global_77479[iParam0] = 1;
			func_523("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_77479.f_484[iParam0] = 0;
		}
	}
	if (BitTest(Local_672.f_9, 6))
	{
		if (func_516(Local_672.f_4, -1))
		{
			Global_77479[iParam0] = 1;
			func_523("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_515(Local_672.f_4, -1))
		{
			Global_77479[iParam0] = 1;
			func_523("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (BitTest(Local_672.f_9, 29))
	{
		if (Local_400.f_3 == 0)
		{
			return;
		}
	}
	if (func_514(iParam0))
	{
		Global_77479[iParam0] = 1;
		func_523("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_77479[iParam0] = 1;
			func_523("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar93 = 0;
	if (BitTest(Local_672.f_9, 19))
	{
		iVar93 = 2;
	}
	else if (BitTest(Local_672.f_9, 20))
	{
		iVar93 = 1;
	}
	if ((iParam0 == 24 && Global_113810.f_32752.f_1958[Local_672.f_14] > 0) && Global_113810.f_32752.f_1958[Local_672.f_14] <= 3)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_672.f_4))
		{
			iVar93 = 2;
			Local_672.f_12 = (Global_113810.f_32752.f_1958[Local_672.f_14] - 1);
		}
		else if (VEHICLE::IS_THIS_MODEL_A_CAR(Local_672.f_4))
		{
			iVar93 = 1;
			Local_672.f_12 = (Global_113810.f_32752.f_1958[Local_672.f_14] - 1);
		}
	}
	if (iVar93 != 0)
	{
		if (func_513(Local_672.f_12, iVar93, Local_672, -1f))
		{
			Global_77479[iParam0] = 1;
			func_523("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_542(iParam0, 0);
			}
			return;
		}
		if (BitTest(Local_672.f_9, 19) || BitTest(Local_672.f_9, 20))
		{
			if (iVar93 == 2)
			{
				if (Global_98192[Local_672.f_12 /*3*/][1] != -1 && (MISC::GET_GAME_TIMER() - Global_98192[Local_672.f_12 /*3*/][1]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180)
				{
					Global_77479[iParam0] = 1;
					func_523("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var94, "...", 24);
					StringIntConCat(&Var94, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_98192[Local_672.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var94, " seconds", 24);
					func_523(&Var94);
					return;
				}
			}
			else if (iVar93 == 1)
			{
				if (Global_98192[Local_672.f_12 /*3*/][0] != -1 && (MISC::GET_GAME_TIMER() - Global_98192[Local_672.f_12 /*3*/][0]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180)
				{
					Global_77479[iParam0] = 1;
					func_523("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var100, "...", 24);
					StringIntConCat(&Var100, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_98192[Local_672.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var100, " seconds", 24);
					func_523(&Var100);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_670 == 0) || (iParam0 == 6 && iLocal_670 == 2)) || (iParam0 == 2 && iLocal_670 == 1))
	{
		Global_77479.f_584 = { Local_672 };
	}
	if (bVar90)
	{
		return;
	}
	if (iVar93 != 0)
	{
		iLocal_115[iParam0] = func_23(Local_672.f_12, iVar93);
		STREAMING::REQUEST_MODEL(iLocal_115[iParam0]);
		MISC::SET_BIT(&(uLocal_46[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_115[iParam0]))
		{
			func_523("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_512(iLocal_115[iParam0], Local_672, 1))
		{
			func_523("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		MISC::CLEAR_AREA(Local_672, 3f, false, false, false, false);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_672, 3f, false, false, false, false, false, false, 0);
		if (iVar93 == 2)
		{
			func_507(&(Global_77479.f_139[iParam0]), Local_672.f_12, Local_672, Local_672.f_3, 0, 2);
		}
		else if (iVar93 == 1)
		{
			func_507(&(Global_77479.f_139[iParam0]), Local_672.f_12, Local_672, Local_672.f_3, 0, 1);
		}
		else
		{
			Global_77479[iParam0] = 1;
			func_523("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(Local_672.f_4);
		iLocal_115[iParam0] = Local_672.f_4;
		MISC::SET_BIT(&(uLocal_46[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(Local_672.f_4))
		{
			func_523("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_512(Local_672.f_4, Local_672, 1))
		{
			func_523("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		MISC::CLEAR_AREA(Local_672, 3f, false, false, false, false);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_672, 3f, false, false, false, false, false, false, 0);
		if (BitTest(Local_672.f_9, 23))
		{
			STREAMING::REQUEST_COLLISION_AT_COORD(Local_672);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_672.f_4 == joaat("submersible2"))
			{
				Local_672.f_2 = -3f;
			}
		}
		Global_77479.f_139[iParam0] = VEHICLE::CREATE_VEHICLE(Local_672.f_4, Local_672, Local_672.f_3, true, true, false);
		if (BitTest(Local_672.f_9, 10))
		{
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_672.f_4))
			{
				MISC::SET_BIT(&(Global_113810.f_32752.f_69[Local_672.f_14 /*78*/].f_77), 22);
			}
			if (BitTest(Global_113810.f_32752.f_69[Local_672.f_14 /*78*/].f_77, 14))
			{
				func_32(Global_77479.f_139[iParam0], &Local_774);
				func_506(Local_774.f_77, &(Global_113810.f_32752.f_69[Local_672.f_14 /*78*/].f_77), Local_672.f_4);
				MISC::CLEAR_BIT(&(Global_113810.f_32752.f_69[Local_672.f_14 /*78*/].f_77), 14);
			}
			func_432(Global_77479.f_139[iParam0], &(Global_113810.f_32752.f_69[Local_672.f_14 /*78*/]), 0, 1);
			Global_77479.f_484[iParam0] = Global_77479.f_139[iParam0];
		}
		else
		{
			if (BitTest(Local_672.f_9, 9))
			{
				VEHICLE::SET_VEHICLE_COLOURS(Global_77479.f_139[iParam0], Local_672.f_10, Local_672.f_11);
			}
			if (BitTest(Local_672.f_9, 8))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_77479.f_139[iParam0], 2);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Global_77479.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Global_77479.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_BREAK(Global_77479.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_77479.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_77479.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Global_77479.f_139[iParam0], false);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_77479.f_139[iParam0], true);
				ENTITY::FREEZE_ENTITY_POSITION(Global_77479.f_139[iParam0], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0]))
	{
		func_505("Created - Coords: ", Local_672);
		func_504("Created - Dist From Player:", fLocal_939[iParam0]);
		if (((iParam0 == 0 && iLocal_670 == 0) || (iParam0 == 6 && iLocal_670 == 2)) || (iParam0 == 2 && iLocal_670 == 1))
		{
			Global_77479.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_672.f_4)
		{
			case joaat("miljet"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77479.f_139[iParam0], 121, 21);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77479.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77479.f_139[iParam0], 122, 89);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77479.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77479.f_139[iParam0], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77479.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77479.f_139[iParam0], 131, 132);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77479.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77479.f_139[iParam0], 159, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77479.f_139[iParam0], 160, 156);
				break;
		}
		if (BitTest(Local_672.f_9, 22))
		{
			VEHICLE::SET_BOAT_ANCHOR(Global_77479.f_139[iParam0], true);
		}
		if (BitTest(Local_672.f_9, 30))
		{
			MISC::CLEAR_BIT(&(Local_672.f_9), 31);
		}
		if (BitTest(Local_672.f_9, 26))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_77479.f_139[iParam0], 7);
			VEHICLE::SET_VEHICLE_ALARM(Global_77479.f_139[iParam0], true);
		}
		func_503(Global_77479.f_139[iParam0], iParam0);
		if (!BitTest(Local_672.f_9, 29) && !BitTest(Local_672.f_9, 30))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_77479.f_139[iParam0], 5f);
		}
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_77479.f_139[iParam0], 0f);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_77479.f_139[iParam0], true);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77479.f_139[iParam0], BitTest(Local_672.f_9, 5));
	}
	MISC::CLEAR_BIT(&(uLocal_46[iParam0]), 0);
	MISC::CLEAR_BIT(&(uLocal_46[iParam0]), 1);
	Global_77479[iParam0] = 1;
	if (iVar93 != 0)
	{
		Global_77479.f_69[iParam0] = 1;
	}
	iVar106 = func_225(458, -1);
	if (iVar106 != 0 && iVar106 == iParam0)
	{
		iLocal_1026 = Global_77479.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2696187.f_66 = 0;
	}
}

void func_503(int iParam0, int iParam1)//Position - 0x32805
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (iParam1)
		{
			case 36:
				VEHICLE::SET_VEHICLE_DAMAGE(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, true);
				VEHICLE::SET_VEHICLE_DAMAGE(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, true);
				VEHICLE::SET_VEHICLE_DAMAGE(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, true);
				break;
			
			case 35:
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				break;
			}
	}
}

void func_504(char* sParam0, float fParam1)//Position - 0x328AB
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_505(char* sParam0, float fParam1, var uParam2, var uParam3)//Position - 0x328C4
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_506(var uParam0, var uParam1, int iParam2)//Position - 0x328DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			MISC::CLEAR_BIT(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			MISC::CLEAR_BIT(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			MISC::CLEAR_BIT(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			MISC::CLEAR_BIT(&iVar0, 2);
			break;
		
		case joaat("chino"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			MISC::CLEAR_BIT(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_507(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x329B3
{
	int iVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;
	
	if (func_25(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_24(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_113810.f_2366.f_539.f_4316) && Global_113810.f_9088.f_99.f_58[131])
		{
			Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, fParam5, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar103 + 1, !Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_511(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_439(iParam0, &(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_509(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_508(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam5, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar104 + 1, !Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_511(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_439(iParam0, &(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_509(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_508(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5.f_0, Param2, fParam5, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar106, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var5.f_5, Var5.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var5.f_7, Var5.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var5.f_24);
				}
				if (func_511(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var5.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var5.f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var5.f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Var5.f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Var5.f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Var5.f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Var5.f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_90);
						}
					}
				}
				func_439(iParam0, &(Var5.f_31), &(Var5.f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_113810.f_9088.f_99.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_509(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_113810.f_2366.f_539.f_4316) && Global_113810.f_9088.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_113810.f_2366.f_539.f_4316 = 1;
					func_282(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5.f_0);
				}
				if (bVar105)
				{
					func_508(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_508(int iParam0, int iParam1)//Position - 0x337D3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]))
		{
			Global_98144[iVar0] = iParam0;
			Global_98154[iVar0] = iParam1;
			Global_98164[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_98164[iVar0]))
			{
				Global_98192[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_98192[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_509(var uParam0)//Position - 0x33855
{
	if (!func_510(*uParam0))
	{
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_113810.f_9088.f_99.f_58[119]);
	}
}

bool func_510(int iParam0)//Position - 0x33880
{
	return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_511(var uParam0, int iParam1)//Position - 0x3388F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_113810.f_20121.f_261)
	{
		*uParam0 = { Global_113810.f_20121.f_267 };
		*iParam1 = Global_113810.f_20121.f_271;
		return 1;
	}
	return 0;
}

int func_512(int iParam0, struct<3> Param1, int iParam4)//Position - 0x338D0
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if ((iParam4 && CAM::IS_SCREEN_FADED_OUT()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) > 0)
	{
		func_523("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var3);
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var0, true);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param1, true) < (fVar6 * 0.5f))
	{
		func_504("player is in vehicle bounds - fLength: ", fVar6);
		func_504("player is in vehicle bounds - fDistance: ", MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param1, true));
		return 1;
	}
	return 0;
}

int func_513(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x33962
{
	int iVar0;
	struct<82> Var1;
	int iVar99;
	
	if (!func_25(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar99 = 0;
	func_24(iParam0, &Var1, iParam1);
	iVar99 = Var1.f_0;
	if (iVar99 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar0], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0]) == iVar99 && Global_98154[iVar0] == iParam0)
				{
					if (fParam5 == -1f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_98144[iVar0], false), Param2, true) <= fParam5)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_514(int iParam0)//Position - 0x33A27
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_672.f_4 == joaat("frogger2"))
		{
			if (((func_516(Local_672.f_4, -1) || func_515(Local_672.f_4, -1)) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("exile2")) > 0) || !func_499(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[20]) && !ENTITY::IS_ENTITY_DEAD(Global_77479.f_484[20], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[20], false))
		{
			if (Local_672.f_4 == ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[20]))
			{
				VEHICLE::GET_VEHICLE_COLOURS(Global_77479.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_672.f_10 && iVar1 == Local_672.f_11)
				{
					func_333(20);
				}
			}
		}
	}
	return 0;
}

int func_515(int iParam0, int iParam1)//Position - 0x33B0F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Local_672, 200f, iParam0, iVar0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false)) && ENTITY::GET_ENTITY_MODEL(iVar1) == iParam0)
	{
		if (iParam1 == -1 || VEHICLE::GET_VEHICLE_LIVERY(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_516(int iParam0, int iParam1)//Position - 0x33B6E
{
	var uVar0[50];
	int iVar51;
	int iVar52;
	
	iVar52 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar51]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0[iVar51], false)) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar51]) == iParam0)
		{
			if (iParam1 == -1 || VEHICLE::GET_VEHICLE_LIVERY(uVar0[iVar51]) == iParam1)
			{
				return 1;
			}
		}
		iVar51++;
	}
	return 0;
}

int func_517(int iParam0)//Position - 0x33BE9
{
	if (Global_43377 == 15)
	{
		return 0;
	}
	if (func_415(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_518()//Position - 0x33C0B
{
	return Global_77479.f_138;
}

float func_519(int iParam0)//Position - 0x33C19
{
	switch (iParam0)
	{
		case 57:
			return -0.7f;
			break;
		
		case 63:
			return -0.8f;
			break;
	}
	return 0f;
}

void func_520(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x33C4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_58(*uParam0);
	iVar1 = func_60(*uParam0);
	iVar2 = func_423(*uParam0);
	iVar3 = func_422(*uParam0);
	iVar4 = func_421(*uParam0);
	iVar5 = func_420(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_57(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_57(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_521(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_521(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x33DCD
{
	func_63(uParam0, iParam1);
	func_62(uParam0, iParam2);
	func_61(uParam0, iParam3);
	func_55(uParam0, iParam5);
	func_56(uParam0, iParam4);
	func_54(uParam0, iParam6);
}

void func_522(int iParam0)//Position - 0x33E05
{
	if (BitTest(Local_672.f_9, 13))
	{
		func_542(iParam0, 0);
	}
}

void func_523(char* sParam0)//Position - 0x33E1F
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_524(char* sParam0, int iParam1)//Position - 0x33E31
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_525(int iParam0)//Position - 0x33E49
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	bVar0 = false;
	iVar5 = -1;
	iVar6 = joaat("prop_forsale_dyn_01");
	switch (iParam0)
	{
		case 12:
		case 13:
			bVar0 = !func_70(iParam0, 5);
			Var1 = { -961.42f, -2794.47f, 12.96f };
			fVar4 = -209.22f;
			iVar5 = 0;
			iVar6 = joaat("prop_airport_sale_sign");
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_70(iParam0, 5);
			Var1 = { -827.93f, -1368.14f, 3.9982f };
			fVar4 = -68.75f;
			iVar5 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_70(iParam0, 5);
			bVar0 = true;
			Var1 = { -710.07f, -1414.31f, 4f };
			fVar4 = -41.25f;
			iVar5 = 2;
			break;
		
		case 21:
			bVar0 = !func_70(iParam0, 5);
			Var1 = { -66.21f, 77.76f, 70.51f };
			fVar4 = -27f;
			iVar5 = 3;
			break;
		
		case 22:
			bVar0 = !func_70(iParam0, 5);
			Var1 = { -76.02f, -1825.61f, 25.88f };
			fVar4 = -129.67f;
			iVar5 = 4;
			break;
		
		case 23:
			bVar0 = !func_70(iParam0, 5);
			Var1 = { -218.68f, -1165.76f, 21.99f };
			fVar4 = 89.95f;
			iVar5 = 5;
			break;
	}
	if (bVar0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1, true) < 250f)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_856[iVar5]))
		{
			STREAMING::REQUEST_MODEL(iVar6);
			iLocal_863 = 1;
			if (STREAMING::HAS_MODEL_LOADED(iVar6))
			{
				if (iLocal_863)
				{
					iLocal_856[iVar5] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar6, Var1, false, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_856[iVar5], 0f, 0f, fVar4, 2, true);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_856[iVar5], false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_856[iVar5], true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar6);
					iLocal_863 = 0;
				}
			}
		}
	}
	else if (iVar5 != -1)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_856[iVar5]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_856[iVar5])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1, true) > 255f)
		{
			OBJECT::DELETE_OBJECT(&(iLocal_856[iVar5]));
			if (iLocal_863)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar6);
				iLocal_863 = 0;
			}
		}
	}
}

void func_526(int iParam0)//Position - 0x340A3
{
	bool bVar0;
	
	bVar0 = false;
	if (func_70(iParam0, 0) && (!BitTest(Local_672.f_9, 14) || func_70(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_77479.f_346[iParam0] != bVar0)
	{
		if (!func_21(Local_672.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_77479.f_346[iParam0])
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_77479.f_415[iParam0], false);
				}
			}
			else if (!Global_77479.f_346[iParam0])
			{
				Global_77479.f_415[iParam0] = PED::ADD_SCENARIO_BLOCKING_AREA(Local_672.f_15, Local_672.f_18, false, true, true, true);
			}
		}
		Global_77479.f_346[iParam0] = bVar0;
	}
}

void func_527(int iParam0)//Position - 0x3415D
{
	int iVar0;
	
	if (BitTest(Local_672.f_9, 15))
	{
		if (func_70(iParam0, 0) && !func_70(iParam0, 5))
		{
			iVar0 = 145;
			if (BitTest(Local_672.f_9, 16))
			{
				iVar0 = func_528(9);
			}
			else if (BitTest(Local_672.f_9, 18))
			{
				iVar0 = func_528(4);
			}
			if (iVar0 == Local_672.f_12)
			{
				func_381(iParam0, 5, 1);
			}
		}
	}
}

int func_528(int iParam0)//Position - 0x341C5
{
	return Global_113810.f_24907[iParam0 /*4*/];
}

void func_529(int iParam0)//Position - 0x341D8
{
	if (func_70(iParam0, 0) && !func_70(iParam0, 3))
	{
		if (BitTest(Local_672.f_9, 4))
		{
			func_381(iParam0, 3, 1);
		}
		else
		{
			func_381(iParam0, 3, 1);
		}
	}
}

void func_530(int iParam0)//Position - 0x34214
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_70(iParam0, 0) && bLocal_671)
	{
		if (BitTest(Local_672.f_9, 0) || (BitTest(Local_672.f_9, 2) && !func_70(iParam0, 2)))
		{
			if ((!BitTest(Local_672.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 || func_70(iParam0, 5)) || !BitTest(Local_672.f_9, 28)))
			{
				bVar0 = false;
				if (!HUD::DOES_BLIP_EXIST(Global_77479.f_208[iParam0]))
				{
					if (func_499(0))
					{
						if (BitTest(Local_672.f_9, 14) && !func_70(iParam0, 5))
						{
							Global_77479.f_208[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_693.f_55);
							if (Local_693.f_58 != -1)
							{
								HUD::SET_BLIP_SPRITE(Global_77479.f_208[iParam0], Local_693.f_58);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_693.f_59)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77479.f_208[iParam0], &(Local_693.f_59));
								}
							}
						}
						else if (func_70(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_77479.f_208[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_693.f_55);
							if (Local_672.f_13 != -1)
							{
								HUD::SET_BLIP_SPRITE(Global_77479.f_208[iParam0], Local_672.f_13);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_693.f_59)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77479.f_208[iParam0], &(Local_693.f_59));
								}
								if (Local_672.f_12 == 0)
								{
									iVar1 = 42;
								}
								else if (Local_672.f_12 == 1)
								{
									iVar1 = 43;
								}
								else if (Local_672.f_12 == 2)
								{
									iVar1 = 44;
								}
								HUD::SET_BLIP_COLOUR(Global_77479.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_77479.f_208[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_672);
							if (Local_672.f_13 != -1)
							{
								HUD::SET_BLIP_SPRITE(Global_77479.f_208[iParam0], Local_672.f_13);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_693.f_59)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77479.f_208[iParam0], &(Local_693.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_672.f_12 == 0)
									{
										iVar2 = 42;
									}
									else if (Local_672.f_12 == 1)
									{
										iVar2 = 43;
									}
									else if (Local_672.f_12 == 2)
									{
										iVar2 = 44;
									}
									HUD::SET_BLIP_COLOUR(Global_77479.f_208[iParam0], iVar2);
								}
							}
						}
						HUD::SET_BLIP_AS_SHORT_RANGE(Global_77479.f_208[iParam0], !BitTest(Local_672.f_9, 1));
						HUD::SET_BLIP_FLASHES(Global_77479.f_208[iParam0], false);
						HUD::SET_BLIP_PRIORITY(Global_77479.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (HUD::DOES_BLIP_EXIST(Global_77479.f_208[iParam0]))
		{
			HUD::REMOVE_BLIP(&(Global_77479.f_208[iParam0]));
		}
	}
}

void func_531(int iParam0)//Position - 0x3457C
{
	if (func_70(iParam0, 0) && !func_70(iParam0, 1))
	{
		if (func_70(iParam0, 4))
		{
			if (BitTest(Local_672.f_9, 3))
			{
				func_532(&(Local_672.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_381(iParam0, 1, 1);
			}
			else
			{
				func_381(iParam0, 1, 1);
			}
		}
	}
}

void func_532(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x345D5
{
	func_341(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_533(int iParam0)//Position - 0x345F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!BitTest(Local_672.f_9, 7) || Local_672.f_12 == iLocal_670)
	{
		bLocal_671 = true;
	}
	else
	{
		bLocal_671 = false;
	}
	if (func_27(14))
	{
		bLocal_671 = false;
	}
	if ((bLocal_671 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && BitTest(Local_672.f_9, 14))
	{
		if (Local_400.f_2 == 0 && Local_400.f_3 == 0)
		{
			if (fLocal_939[iParam0] < Local_400.f_1 || Local_400.f_0 == iParam0)
			{
				if (Local_400.f_0 != iParam0)
				{
					Local_400.f_8 = { Local_672 };
					Local_400.f_29 = { Local_693 };
					Local_400.f_0 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_77479.f_592)
					{
						Global_77479.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_400.f_6 = -1;
					if ((Local_400.f_0 == 12 || Local_400.f_0 == 13) || Local_400.f_0 == 14)
					{
						Local_400.f_6 = 0;
					}
					else if ((Local_400.f_0 == 15 || Local_400.f_0 == 16) || Local_400.f_0 == 17)
					{
						Local_400.f_6 = 1;
					}
					else if ((Local_400.f_0 == 18 || Local_400.f_0 == 19) || Local_400.f_0 == 20)
					{
						Local_400.f_6 = 2;
					}
					else if ((Local_400.f_0 == 21 || Local_400.f_0 == 22) || Local_400.f_0 == 23)
					{
						Local_400.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = func_137(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_77479.f_592)
							{
								switch (Local_400.f_6)
								{
									case 3:
										if (func_68(iVar2))
										{
											Global_77479.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar2))
										{
											Global_77479.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((VEHICLE::IS_THIS_MODEL_A_BOAT(iVar2) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_77479.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_69(iVar2))
										{
											Global_77479.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_400.f_1 = fLocal_939[iParam0];
			}
		}
	}
	else if (Local_400.f_0 == iParam0)
	{
		Local_400.f_0 = -1;
		Local_400.f_1 = 99999.99f;
	}
	if (!BitTest(uLocal_46[iParam0], 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iParam0], false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_139[iParam0], false))
					{
						if (!BitTest(uLocal_46[iParam0], 1) || BitTest(uLocal_46[iParam0], 3))
						{
							MISC::SET_BIT(&(uLocal_46[iParam0]), 0);
							func_381(iParam0, 4, 1);
							func_381(iParam0, 2, 1);
						}
					}
					else
					{
						MISC::SET_BIT(&(uLocal_46[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[iParam0], false)) && ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_1028)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_77479.f_484[iParam0], 1738.6864f, 3283.4226f, 45.242832f, 1724.5111f, 3328.8079f, 39.597805f, 21f, false, true, 0))
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Global_77479.f_484[iParam0], 0f);
					iLocal_1028 = 1;
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_77479.f_484[iParam0], 1738.6864f, 3283.4226f, 45.242832f, 1724.5111f, 3328.8079f, 39.597805f, 21f, false, true, 0))
			{
				VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Global_77479.f_484[iParam0], 1f);
				iLocal_1028 = 0;
			}
		}
		else
		{
			iLocal_1028 = 0;
		}
	}
}

int func_534()//Position - 0x34A0D
{
	return 1;
}

var func_535(var uParam0, int iParam1)//Position - 0x34A16
{
	uParam0->f_80 = 0;
	uParam0->f_69 = 0;
	StringCopy(&(uParam0->f_59), "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = { -952.8823f, -2795.8965f, 12.132326f };
			uParam0->f_3 = { -966.73083f, -2787.9749f, 16.132324f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1652.4537f, -3059.1494f, 24.932f };
			uParam0->f_14.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_12 = 38.2303f;
			uParam0->f_14.f_6 = { -1651.5469f, -3060.4783f, 23.8077f };
			uParam0->f_14.f_6.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1650.4305f, -3177.2292f, 16.9898f };
			uParam0->f_29.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_12 = 38.2303f;
			uParam0->f_29.f_6 = { -1647.495f, -3173.7278f, 16.6439f };
			uParam0->f_29.f_6.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1625.9105f, -3167.5557f, 11.114552f };
			uParam0->f_10 = { -1688.5801f, -3130.7407f, 20.135382f };
			uParam0->f_13 = 60.1875f;
			uParam0->f_48 = { -1625.9105f, -3167.5557f, 11.114552f };
			uParam0->f_51 = { -1688.5801f, -3130.7407f, 20.135382f };
			uParam0->f_54 = 60.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME" /* GXT: Los Santos International Hangar */, 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 13:
			*uParam0 = { -952.8823f, -2795.8965f, 12.132326f };
			uParam0->f_3 = { -966.73083f, -2787.9749f, 16.132324f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1184.2f, -3345f, 17.5f };
			uParam0->f_14.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_12 = 30.3f;
			uParam0->f_14.f_6 = { -1184.3f, -3345f, 16.6f };
			uParam0->f_14.f_6.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1272.6f, -3414.7f, 15.6f };
			uParam0->f_29.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_12 = 37.8f;
			uParam0->f_29.f_6 = { -1274f, -3414.4f, 15.6f };
			uParam0->f_29.f_6.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1247.6877f, -3408.5464f, 20.504175f };
			uParam0->f_10 = { -1309.774f, -3372.2944f, 11.368781f };
			uParam0->f_13 = 66.1875f;
			uParam0->f_48 = { -1247.6877f, -3408.5464f, 20.504175f };
			uParam0->f_51 = { -1309.774f, -3372.2944f, 11.368781f };
			uParam0->f_54 = 66.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME" /* GXT: Los Santos International Hangar */, 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 14:
			*uParam0 = { 1727.3018f, 3291.4531f, 39.619114f };
			uParam0->f_3 = { 1744.1077f, 3296.2146f, 44.171993f };
			uParam0->f_6 = 4.6875f;
			uParam0->f_44 = { 1737.5295f, 3289.2388f, 40.1448f };
			uParam0->f_47 = 14.8763f;
			uParam0->f_14 = { 1739.7485f, 3280.4453f, 45.8124f };
			uParam0->f_14.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_12 = 50f;
			uParam0->f_14.f_6 = { 1739.7485f, 3280.4453f, 45.8124f };
			uParam0->f_14.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1739.7485f, 3280.4453f, 45.8124f };
			uParam0->f_29.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_12 = 50f;
			uParam0->f_29.f_6 = { 1739.7485f, 3280.4453f, 45.8124f };
			uParam0->f_29.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { 1718.0555f, 3305.0188f, 45.70922f };
			uParam0->f_10 = { 1745.7059f, 3313.101f, 39.757996f };
			uParam0->f_13 = 28.125f;
			uParam0->f_48 = { 1718.0555f, 3305.0188f, 45.70922f };
			uParam0->f_51 = { 1745.7059f, 3313.101f, 39.757996f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME2" /* GXT: Sandy Shores Hangar */, 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 18:
			*uParam0 = { -709.095f, -1414.2295f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.6545f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -739.1531f, -1439.5093f, 3.188024f };
			uParam0->f_10 = { -753.7792f, -1426.7556f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.1694f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -738f, -1440f, 6.3f };
			uParam0->f_14.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -738f, -1440f, 6f };
			uParam0->f_14.f_6.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -749.3f, -1425.7f, 5.9f };
			uParam0->f_29.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -749.9f, -1426f, 5.9f };
			uParam0->f_29.f_6.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -738.77905f, -1439.3772f, 9.125515f };
			uParam0->f_51 = { -755.9111f, -1425.0059f, 1.688014f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME" /* GXT: Vespucci Helipad */, 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 19:
			*uParam0 = { -709.095f, -1414.2295f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.6545f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -755.68115f, -1459.2335f, 3.188023f };
			uParam0->f_10 = { -770.7671f, -1446.8666f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.1694f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -754.6f, -1460.5f, 6.4f };
			uParam0->f_14.f_3 = { -4.8f, 0f, 48.5f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -754.6f, -1460.6f, 6.1f };
			uParam0->f_14.f_6.f_3 = { -2.2f, 0f, 48.5f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -771.8f, -1452.6f, 5.7f };
			uParam0->f_29.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -771.8f, -1452.1f, 5.7f };
			uParam0->f_29.f_6.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -755.57153f, -1459.453f, 9.125514f };
			uParam0->f_51 = { -771.4204f, -1446.2347f, 1.688017f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME" /* GXT: Vespucci Helipad */, 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 20:
			*uParam0 = { 1763.4244f, 3238.2822f, 40.32022f };
			uParam0->f_3 = { 1786.5887f, 3239.0159f, 47.185337f };
			uParam0->f_6 = 17.75f;
			uParam0->f_7 = { 1763.4244f, 3238.2822f, 40.32022f };
			uParam0->f_10 = { 1786.5887f, 3239.0159f, 47.185337f };
			uParam0->f_13 = 17.75f;
			uParam0->f_44 = { 1761.1222f, 3250.125f, 40.733f };
			uParam0->f_47 = 236.5858f;
			uParam0->f_14 = { 1779.2452f, 3222.4773f, 48.5795f };
			uParam0->f_14.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_12 = 40f;
			uParam0->f_14.f_6 = { 1779.2452f, 3222.4773f, 48.5795f };
			uParam0->f_14.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1779.2452f, 3222.4773f, 48.5795f };
			uParam0->f_29.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { 1779.2452f, 3222.4773f, 48.5795f };
			uParam0->f_29.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { 1802.3268f, 3245.1646f, 46.955437f };
			uParam0->f_51 = { 1755.0397f, 3237.1704f, 38.693703f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME2" /* GXT: Sandy Shores Helipad */, 16);
			uParam0->f_67 = 0;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 15:
			*uParam0 = { -826.57587f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -845.22156f, -1356.0399f, -0.212093f };
			uParam0->f_10 = { -841.64514f, -1365.7767f, 3.787907f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -835.86f, -1358.347f, 0.6102f };
			uParam0->f_47 = 112.3787f;
			uParam0->f_14 = { -859.6f, -1374f, 4.3f };
			uParam0->f_14.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_12 = 32.9f;
			uParam0->f_14.f_6 = { -859.7f, -1374f, 3f };
			uParam0->f_14.f_6.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -837.2f, -1350.3f, 2.4f };
			uParam0->f_29.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -837.4f, -1350.8f, 2.3f };
			uParam0->f_29.f_6.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.8871f, -3.331177f };
			uParam0->f_51 = { -826.64606f, -1410.4468f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.7362f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME" /* GXT: Puerto Del Sol Marina */, 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 16:
			*uParam0 = { -826.57587f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -848.81775f, -1347.7858f, -0.212093f };
			uParam0->f_10 = { -845.2482f, -1357.9358f, 3.787908f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -839.2461f, -1349.5249f, 0.6102f };
			uParam0->f_47 = 110.6762f;
			uParam0->f_14 = { -866.1f, -1365.6f, 4.3f };
			uParam0->f_14.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_12 = 30f;
			uParam0->f_14.f_6 = { -866.1f, -1365.6f, 3f };
			uParam0->f_14.f_6.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -838.7f, -1343.3f, 2.9f };
			uParam0->f_29.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -838.8f, -1343.2f, 2.9f };
			uParam0->f_29.f_6.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.8871f, -3.331177f };
			uParam0->f_51 = { -826.64606f, -1410.4468f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.7362f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME" /* GXT: Puerto Del Sol Marina */, 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 17:
			*uParam0 = { -826.57587f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -851.69867f, -1339.1278f, -0.212129f };
			uParam0->f_10 = { -848.128f, -1349.1681f, 3.787905f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -842.0763f, -1341.4015f, 0.6102f };
			uParam0->f_47 = 109.8916f;
			uParam0->f_14 = { -866.3f, -1357.9f, 4.3f };
			uParam0->f_14.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_12 = 31.2f;
			uParam0->f_14.f_6 = { -866.3f, -1357.9f, 3f };
			uParam0->f_14.f_6.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -841.6f, -1336.3f, 2.5f };
			uParam0->f_29.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -841.8f, -1336.1f, 2.5f };
			uParam0->f_29.f_6.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.8871f, -3.331177f };
			uParam0->f_51 = { -826.64606f, -1410.4468f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.7362f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME" /* GXT: Puerto Del Sol Marina */, 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 21:
			*uParam0 = { -63.381466f, 84.0594f, 70.521385f };
			uParam0->f_3 = { -66.17774f, 77.95913f, 74.05372f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -65.2041f, 81.0524f, 70.5666f };
			uParam0->f_47 = 243.8699f;
			uParam0->f_7 = { 189.70735f, -1017.56903f, -104.99996f };
			uParam0->f_10 = { 207.8325f, -1017.7743f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.99786f, -981.66345f, -100.18742f };
			uParam0->f_51 = { 234.20102f, -981.75824f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -62.62f, 80.03f, 70.62f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME1" /* GXT: Vinewood Garage */, 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 243.8699f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -67.9068f, 82.2664f, 70.5153f };
			uParam0->f_77[0] = 66.202f;
			uParam0->f_70[1 /*3*/] = { -65.1234f, 81.2517f, 70.5644f };
			uParam0->f_77[1] = 71.6237f;
			uParam0->f_80 = 1;
			break;
		
		case 22:
			*uParam0 = { -72.41166f, -1824.1421f, 25.817038f };
			uParam0->f_3 = { -68.70254f, -1819.6421f, 29.379538f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -70.1992f, -1823.2252f, 25.942f };
			uParam0->f_47 = 46.1535f;
			uParam0->f_7 = { 189.70735f, -1017.56903f, -104.99996f };
			uParam0->f_10 = { 207.8325f, -1017.7743f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.99786f, -981.66345f, -100.18742f };
			uParam0->f_51 = { 234.20102f, -981.75824f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -71.29f, -1821.68f, 25.94f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME2" /* GXT: Grove Street Garage */, 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 53.0985f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -64.2268f, -1832.5975f, 25.8666f };
			uParam0->f_77[0] = 274.6339f;
			uParam0->f_70[1 /*3*/] = { -68.5531f, -1824.3774f, 25.9424f };
			uParam0->f_77[1] = 215.8295f;
			uParam0->f_80 = 1;
			break;
		
		case 23:
			*uParam0 = { -220.77936f, -1159.2798f, 21.903023f };
			uParam0->f_3 = { -220.7273f, -1165.2653f, 25.450535f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -220.7592f, -1162.2775f, 22.0242f };
			uParam0->f_47 = 271.2097f;
			uParam0->f_7 = { 189.70735f, -1017.56903f, -104.99996f };
			uParam0->f_10 = { 207.8325f, -1017.7743f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.99786f, -981.66345f, -100.18742f };
			uParam0->f_51 = { 234.20102f, -981.75824f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -218.35f, -1162.18f, 22.02f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME3" /* GXT: Pillbox Hill Garage */, 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 271.2097f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -222.1935f, -1162.1134f, 22.0204f };
			uParam0->f_77[0] = 358.5703f;
			uParam0->f_70[1 /*3*/] = { -220.8189f, -1162.3016f, 22.0242f };
			uParam0->f_77[1] = 70.2711f;
			uParam0->f_80 = 1;
			break;
	}
	return uParam0->f_80;
}

int func_536()//Position - 0x361C0
{
	func_537();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_537()//Position - 0x361D9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_464(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_463(PLAYER::PLAYER_PED_ID());
			if (func_25(iVar0) && (!func_27(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_25(Global_113810.f_2366.f_539.f_4321))
				{
					Global_113810.f_2366.f_539.f_4322 = Global_113810.f_2366.f_539.f_4321;
				}
				Global_113810.f_2366.f_539.f_4323 = iVar0;
				Global_113810.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113810.f_2366.f_539.f_4321 != 145)
			{
				Global_113810.f_2366.f_539.f_4323 = Global_113810.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113810.f_2366.f_539.f_4321 = 145;
}

void func_538()//Position - 0x362D6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (HUD::DOES_BLIP_EXIST(Global_77479.f_208[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Global_77479.f_208[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iVar0], false))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_77479.f_139[iVar0], true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iVar0]));
					Global_77479.f_139[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(Local_400.f_110))
	{
		CAM::SET_CAM_ACTIVE(Local_400.f_110, false);
		CAM::DESTROY_CAM(Local_400.f_110, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_400.f_111))
	{
		CAM::SET_CAM_ACTIVE(Local_400.f_111, false);
		CAM::DESTROY_CAM(Local_400.f_111, false);
	}
	if (Local_400.f_3 != 0)
	{
		func_329();
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	if (HUD::DOES_BLIP_EXIST(Global_77479.f_583))
	{
		HUD::REMOVE_BLIP(&(Global_77479.f_583));
	}
	if (iLocal_654 != -1)
	{
		func_72(&iLocal_654);
	}
	if (iLocal_653 != -1)
	{
		func_72(&iLocal_653);
	}
	if (Local_400.f_5 != -1)
	{
		func_72(&(Local_400.f_5));
	}
	if (iLocal_666 != -1)
	{
		func_72(&iLocal_666);
	}
	if (Local_400.f_3 > 0)
	{
		if (Global_77479.f_577)
		{
			func_280(47, 1);
			func_278(47, 1);
			Global_77479.f_577 = 0;
			Local_400.f_3 = 0;
		}
	}
	Global_77479.f_553 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_539()//Position - 0x36444
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_391[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_391[iVar0]));
		}
		iVar0++;
	}
}

void func_540(int iParam0)//Position - 0x36477
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	if (!BitTest(iLocal_934[iVar0], bVar1))
	{
		MISC::SET_BIT(&(iLocal_934[iVar0]), bVar1);
		iLocal_865[iLocal_864] = iParam0;
		iLocal_864++;
	}
}

void func_541()//Position - 0x364BA
{
	int iVar0;
	
	if (func_352(25))
	{
		if (Global_113810.f_32752.f_69[22 /*78*/].f_66 != 0 && !func_39(Global_113810.f_32752.f_69[22 /*78*/].f_66, 0, -1))
		{
			Global_113810.f_32752.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_113810.f_32752.f_69[22 /*78*/].f_77 = 0;
			Global_113810.f_32752.f_69[22 /*78*/].f_65 = 0;
			Global_113810.f_32752.f_69[22 /*78*/].f_62 = 255;
			Global_113810.f_32752.f_69[22 /*78*/].f_63 = 255;
			Global_113810.f_32752.f_69[22 /*78*/].f_64 = 255;
			Global_113810.f_32752.f_69[22 /*78*/].f_5 = 0;
			Global_113810.f_32752.f_69[22 /*78*/].f_6 = 0;
			Global_113810.f_32752.f_69[22 /*78*/].f_7 = 0;
			Global_113810.f_32752.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_113810.f_32752.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_113810.f_32752.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_352(21) && Global_113810.f_32752.f_69[9 /*78*/].f_66 != 0) && !func_39(Global_113810.f_32752.f_69[9 /*78*/].f_66, 0, -1))
	{
		Global_113810.f_32752.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_352(22) && Global_113810.f_32752.f_69[10 /*78*/].f_66 != 0) && !func_39(Global_113810.f_32752.f_69[10 /*78*/].f_66, 0, -1))
	{
		Global_113810.f_32752.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_352(23) && Global_113810.f_32752.f_69[11 /*78*/].f_66 != 0) && !func_39(Global_113810.f_32752.f_69[11 /*78*/].f_66, 0, -1))
	{
		Global_113810.f_32752.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_352(26) && !func_39(Global_113810.f_32752.f_69[12 /*78*/].f_66, 0, -1))
	{
		func_542(26, 0);
	}
	if (func_352(27) && !func_39(Global_113810.f_32752.f_69[13 /*78*/].f_66, 0, -1))
	{
		func_542(27, 0);
	}
	if (func_352(28) && !func_39(Global_113810.f_32752.f_69[14 /*78*/].f_66, 0, -1))
	{
		func_542(28, 0);
	}
	if (func_352(29) && !func_39(Global_113810.f_32752.f_69[15 /*78*/].f_66, 0, -1))
	{
		func_542(29, 0);
	}
	if (func_352(30) && !func_39(Global_113810.f_32752.f_69[16 /*78*/].f_66, 0, -1))
	{
		func_542(30, 0);
	}
	if (func_352(31) && !func_39(Global_113810.f_32752.f_69[17 /*78*/].f_66, 0, -1))
	{
		func_542(31, 0);
	}
	if (func_352(32) && !func_39(Global_113810.f_32752.f_69[18 /*78*/].f_66, 0, -1))
	{
		func_542(32, 0);
	}
	if (func_352(33) && !func_39(Global_113810.f_32752.f_69[19 /*78*/].f_66, 0, -1))
	{
		func_542(33, 0);
	}
	if (func_352(34) && !func_39(Global_113810.f_32752.f_69[20 /*78*/].f_66, 0, -1))
	{
		func_542(34, 0);
	}
}

void func_542(int iParam0, bool bParam1)//Position - 0x3684C
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_70(iParam0, 0))
		{
			func_381(iParam0, 1, 0);
			func_381(iParam0, 2, 0);
			func_381(iParam0, 3, 0);
			func_381(iParam0, 4, 0);
			func_381(iParam0, 0, 1);
			Global_77479[iParam0] = 1;
		}
	}
	else
	{
		func_381(iParam0, 0, 0);
	}
}

int func_543()//Position - 0x368A9
{
	return 0;
}

int func_544()//Position - 0x368B2
{
	return 1;
}

int func_545()//Position - 0x368BB
{
	return 1;
}

int func_546()//Position - 0x368C4
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

void func_547(var uParam0)//Position - 0x368DD
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_551();
	func_550();
	func_548();
}

void func_548()//Position - 0x3691A
{
	Global_112187 = 2405.8494f;
	Global_112190 = 2408.22f;
	Global_112193 = 2386.0962f;
	Global_112196 = 69.1875f;
	Global_112199[0 /*3*/] = 2417.105f;
	Global_112199[1 /*3*/] = 2407.058f;
	Global_112199[2 /*3*/] = 2371.9197f;
	Global_112199[3 /*3*/] = 2399.5835f;
	Global_112199[4 /*3*/] = 2416.519f;
	Global_112199[5 /*3*/] = 2430.345f;
	Global_112199[6 /*3*/] = 2385.8186f;
	Global_112221[0] = 157.8636f;
	Global_112221[1] = 174.7226f;
	Global_112221[2] = 270.7562f;
	Global_112221[3] = 190.7495f;
	Global_112221[4] = 27.6506f;
	Global_112221[5] = 358.1218f;
	Global_112221[6] = 339.4363f;
	Global_112229 = 2399.82f;
	Global_112232 = 2414.7f;
	func_549(&Global_110556, 64);
}

void func_549(var uParam0, int iParam1)//Position - 0x36A0A
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_550()//Position - 0x36A1B
{
	Global_110561[0 /*3*/].f_1 = 5141.01f;
	Global_110561[1 /*3*/].f_1 = 6048.71f;
	Global_110561[2 /*3*/].f_1 = 6185.32f;
	Global_110561[3 /*3*/].f_1 = 5180.99f;
	Global_110561[4 /*3*/].f_1 = 4582.72f;
	Global_110561[5 /*3*/].f_1 = 4831.82f;
	Global_110561[6 /*3*/].f_1 = 4322.66f;
	Global_110561[7 /*3*/].f_1 = 3503.92f;
	Global_110561[8 /*3*/].f_1 = 3777.54f;
	Global_110561[9 /*3*/].f_1 = 3810.8f;
	Global_110561[10 /*3*/].f_1 = 3095.88f;
	Global_110595[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_110595[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_110595[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_110595[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_110595[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_110595[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_110595[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_110595[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_110595[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_110595[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_110595[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_110595[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_110595[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_110595[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_110595[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_110595[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_110595[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_110595[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_110595[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_110595[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_110595[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_110595[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_110595[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_110595[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_110595[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_110595[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_110595[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_110595[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_110595[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_110595[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_110595[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_110595[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_110595[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_110595[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_110595[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_110595[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_110595[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_110595[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_110595[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_110595[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_110595[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_110595[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_110595[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_110595[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_110595[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_110595[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_110595[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_110595[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_110595[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_110595[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_110595[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_110595[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_110595[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_110595[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_110595[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_110595[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_110595[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_110595[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_110595[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_110595[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_110595[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_110595[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_110595[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_549(&Global_110556, 16);
}

void func_551()//Position - 0x36F1F
{
	Global_110512[0 /*3*/] = -1567.3816f;
	Global_110512[1 /*3*/] = -1436.3053f;
	Global_110512[2 /*3*/] = 31.2408f;
	Global_110512[3 /*3*/] = 278.1924f;
	Global_110512[4 /*3*/] = 1116.002f;
	Global_110512[5 /*3*/] = 1676.1929f;
	Global_110534[0 /*3*/] = -1592.642f;
	Global_110534[1 /*3*/] = -1573.5006f;
	Global_110534[2 /*3*/] = -1459.3585f;
	Global_110534[3 /*3*/] = 21.1005f;
	Global_110534[4 /*3*/] = 262.9409f;
	Global_110534[5 /*3*/] = 1091.0703f;
	func_549(&Global_110556, 1);
}

