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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_49[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_50[68];
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<114> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_57 = { 0, 0, 0, 0, 0 } ;
	int* iLocal_58 = NULL;
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
	struct<74> Local_83 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
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
	var uLocal_96 = 2;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	bool bLocal_109 = 0;
	int iLocal_110[4] = { 0, 0, 0, 0 };
	bool bLocal_111 = 0;
	int iLocal_112[1] = { 0 };
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123[2] = { 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	struct<13> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	struct<81> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_141 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[3] = { 0, 0, 0 };
	int iLocal_151 = 0;
	float fLocal_152[68] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	char cLocal_162[16] = "";
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	char cLocal_165[16] = "";
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	char* sLocal_176 = NULL;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	float fLocal_179 = 0f;
	int iLocal_180 = 0;
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_114 = -1;
	iLocal_115 = -1;
	iLocal_120 = -1;
	iLocal_125 = -1;
	iLocal_151 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Local_56.f_5 = -1;
	Local_56.f_0 = -1;
	Local_56.f_1 = 99999.99f;
	func_524(&iLocal_58);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97820[iVar0 /*3*/][0] = -1;
		Global_97820[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_113386.f_32749.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_113386.f_32749.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_113386.f_32749.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_113386.f_32749.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_113386.f_32749.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_113386.f_32749.f_4801 = -15;
		Global_113386.f_32749.f_4802 = 1;
	}
	if (((!func_523() && !func_522()) && !func_521()) && !func_520())
	{
		func_519(60, 0);
		func_519(61, 0);
	}
	func_518();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_517(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_55)
		{
			iLocal_55 = 1;
			if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
			{
				if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 64)
				{
					if (!Global_78126)
					{
						iLocal_55 = 0;
					}
					else
					{
						func_516();
						func_515();
					}
					Global_78126 = 0;
				}
				else
				{
					func_516();
					func_515();
				}
			}
		}
		SYSTEM::WAIT(0);
		if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != 5)
		{
			iLocal_129 = func_513();
			func_477();
			func_475();
			func_443(&iLocal_58);
			func_403();
			func_28();
			func_20();
			func_17(&uLocal_153);
		}
		func_1(&iLocal_58);
	}
}

void func_1(int* iParam0)//Position - 0x24C
{
	bool bVar0;
	float fVar1;
	
	if (!BitTest(Global_113386.f_10016.f_25, 7))
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
		MISC::SET_BIT(&(Global_113386.f_10016.f_25), 22);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 22);
	}
}

void func_4(int* iParam0, struct<3> Param1)//Position - 0x3F5
{
	struct<16> Var0;
	struct<16> Var1;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var1 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	iParam0->f_1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_COORD(iParam0->f_1, &Var0, Param1, &Var1, false, 0, false);
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
	struct<3> Var1;
	struct<3> Var2;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var2 = { func_7(iParam0->f_6 - Var1) * Vector(52.5f, 52.5f, 52.5f) };
		Var0 = { Var1 + Var2 };
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
	
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 36))
	{
		MISC::SET_BIT(&(Global_113386.f_10016.f_25), 22);
	}
	iVar0 = BitTest(Global_113386.f_10016.f_25, 22);
	if (iParam0 && iVar0)
	{
		MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 22);
	}
	iParam1 = iParam1;
	return iVar0;
}

int func_9()//Position - 0x542
{
	var uVar0;
	
	uVar0 = func_10(Global_113386.f_10016.f_25, 14336, 11);
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
	
	bVar0 = BitTest(Global_113386.f_10016.f_25, 22);
	return (func_8(0, 0) && !bVar0);
}

bool func_14(int iParam0)//Position - 0x5C6
{
	return iParam0 == func_15();
}

int func_15()//Position - 0x5D5
{
	return joaat("ig_orleans");
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
	
	if (!Global_1585359.f_21)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1585359.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_1585359[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1585359[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_ACCELERATION(iVar0);
			if (Global_1585359[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1585359[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_AGILITY(iVar0);
			}
			else
			{
				fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_TRACTION(iVar0);
			}
			if (Global_1585359[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1585359[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_BRAKING(iVar0);
			if (Global_1585359[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1585359[*uParam0 /*5*/][2] = fVar2;
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
	
	if (HUD::DOES_BLIP_EXIST(Global_77137.f_583))
	{
		bVar0 = false;
		if (iLocal_129 != Global_77137.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14))
		{
			bVar0 = true;
		}
		else if (Global_77137.f_590)
		{
			if (!func_26(Global_77137.f_584, HUD::GET_BLIP_COORDS(Global_77137.f_583), 1056964608, 0) || func_22(Global_77137.f_582, func_23(Global_77137.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_77137.f_591)
		{
			if (!func_26(Global_77137.f_587, HUD::GET_BLIP_COORDS(Global_77137.f_583), 1056964608, 0) || func_22(Global_77137.f_582, func_23(Global_77137.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!ENTITY::DOES_ENTITY_EXIST(Global_77137.f_581) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_581, false)) || (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_581, false)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_581) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_581, false))
			{
				Global_77137.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_581))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_581, false))
			{
				Global_77137.f_587 = { ENTITY::GET_ENTITY_COORDS(Global_77137.f_581, true) };
			}
			else
			{
				Global_77137.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			HUD::REMOVE_BLIP(&(Global_77137.f_583));
			Global_77137.f_590 = 0;
			Global_77137.f_591 = 0;
			Global_77137.f_581 = 0;
		}
	}
	else
	{
		Global_77137.f_590 = 0;
		Global_77137.f_591 = 0;
		Global_77137.f_581 = 0;
	}
	if ((((((!HUD::DOES_BLIP_EXIST(Global_77137.f_583) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_97782[iVar2] != 145 && Global_97792[iVar2] != 0) && ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar2])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar2], false)) && !HUD::DOES_BLIP_EXIST(HUD::GET_BLIP_FROM_ENTITY(Global_97772[iVar2]))) && Global_97782[iVar2] == iLocal_129) && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_97772[iVar2])))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_97772[iVar2], false))
				{
					Global_77137.f_581 = Global_97772[iVar2];
					Global_77137.f_582 = iLocal_129;
					Global_77137.f_590 = 0;
					Global_77137.f_583 = HUD::ADD_BLIP_FOR_ENTITY(Global_77137.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!HUD::DOES_BLIP_EXIST(Global_77137.f_583) && !func_21(Global_77137.f_584, 0f, 0f, 0f, 0))
			{
				Global_77137.f_581 = 0;
				Global_77137.f_582 = iLocal_129;
				Global_77137.f_590 = 1;
				Global_77137.f_583 = HUD::ADD_BLIP_FOR_COORD(Global_77137.f_584);
			}
			if (!HUD::DOES_BLIP_EXIST(Global_77137.f_583) && !func_21(Global_77137.f_587, 0f, 0f, 0f, 0))
			{
				Global_77137.f_581 = 0;
				Global_77137.f_582 = iLocal_129;
				Global_77137.f_591 = 1;
				Global_77137.f_583 = HUD::ADD_BLIP_FOR_COORD(Global_77137.f_587);
			}
		}
		else
		{
			Global_77137.f_590 = 0;
			Global_77137.f_591 = 0;
		}
		if (HUD::DOES_BLIP_EXIST(Global_77137.f_583))
		{
			HUD::SET_BLIP_SPRITE(Global_77137.f_583, 225);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77137.f_583, "PVEHICLE");
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_77137.f_583, false);
			HUD::SET_BLIP_PRIORITY(Global_77137.f_583, 3);
			if (iLocal_129 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_129 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_129 == 2)
			{
				iVar3 = 44;
			}
			HUD::SET_BLIP_COLOUR(Global_77137.f_583, iVar3);
		}
	}
}

bool func_21(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0xCEE
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_22(int iParam0, int iParam1)//Position - 0xD35
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar1], false))
		{
			if (Global_97782[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == ENTITY::GET_ENTITY_MODEL(Global_97772[iVar1]))
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
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
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
					if (Global_113386.f_9085.f_99.f_58[119])
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
			else if (Global_113386.f_9085.f_99.f_58[118])
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

int func_26(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x104A
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (MISC::ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0)//Position - 0x10C5
{
	return Global_43052 == iParam0;
}

void func_28()//Position - 0x10D3
{
	func_343();
	func_257();
	func_70();
	func_29();
}

void func_29()//Position - 0x10EB
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((((Local_56.f_29.f_80 && !Local_56.f_29.f_69) && Local_56.f_0 != -1) && func_69(Local_56.f_0, 0)) && func_69(Local_56.f_0, 5)) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_56.f_113))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
						if (func_66(iVar1))
						{
							Local_56.f_113 = iVar0;
						}
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_56.f_113, false) && func_66(ENTITY::GET_ENTITY_MODEL(Local_56.f_113)))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_56.f_113, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_56.f_113, Local_56.f_29.f_48, Local_56.f_29.f_51, Local_56.f_29.f_54, false, true, 0))
					{
						if ((!func_65(Local_56.f_113) && !func_64(Local_56.f_113)) && Local_56.f_113 != Global_77137.f_484[Local_56.f_0])
						{
							func_30(Local_56.f_0, Local_56.f_113, 1);
						}
						Local_56.f_113 = 0;
					}
				}
			}
			else
			{
				Local_56.f_113 = 0;
			}
		}
		else
		{
			Local_56.f_113 = 0;
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
	if (!func_63(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
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
				Global_113386.f_32749.f_4801 = func_52();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_51(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_31(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
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
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
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
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_32(iParam0, &(Global_113386.f_32749.f_5510));
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
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
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
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
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
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_49(iParam0, 0, 0)) || func_49(iParam0, 1, 0)) || func_49(iParam0, 2, 0)) || func_48(iParam0) != 145) || func_47(iParam0)) || func_65(iParam0)) || func_64(iParam0)) || func_46(iParam0)) || !func_38(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_65(iParam0))
		{
		}
		if (func_65(iParam0))
		{
		}
		if (func_49(iParam0, 0, 0))
		{
		}
		if (func_49(iParam0, 1, 0))
		{
		}
		if (func_49(iParam0, 2, 0))
		{
		}
		if (func_48(iParam0) != 145)
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
	if (!func_39(iParam0, 0))
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

int func_39(int iParam0, bool bParam1)//Position - 0x1E12
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
		if (!func_45())
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
		if ((((!func_523() && !func_522()) && !func_521()) && !func_520()) && !func_45())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_44() || MISC::IS_PC_VERSION()) || func_43())
		{
		}
		else if (!func_521())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_42(iParam0))
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

int func_40(int iParam0)//Position - 0x1F92
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_41())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
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
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_41()//Position - 0x2056
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x206D
{
	int iVar0;
	int iVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && iVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && iVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && iVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && iVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && iVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && iVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && iVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && iVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && iVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && iVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && iVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && iVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && iVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && iVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && iVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && iVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && iVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && iVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && iVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && iVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && iVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && iVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && iVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && iVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && iVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && iVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && iVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && iVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && iVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && iVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && iVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && iVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && iVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && iVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && iVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && iVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && iVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && iVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && iVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && iVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && iVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && iVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && iVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && iVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && iVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && iVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && iVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && iVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && iVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && iVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && iVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && iVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && iVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && iVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && iVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && iVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && iVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && iVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && iVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && iVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && iVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && iVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && iVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && iVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && iVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && iVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && iVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && iVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && iVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && iVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && iVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && iVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && iVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && iVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && iVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && iVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && iVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && iVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && iVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && iVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && iVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && iVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && iVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && iVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && iVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && iVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && iVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && iVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && iVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && iVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && iVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && iVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && iVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && iVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && iVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && iVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && iVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && iVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && iVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && iVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && iVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && iVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && iVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && iVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && iVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && iVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && iVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && iVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && iVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && iVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && iVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && iVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && iVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && iVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && iVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && iVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && iVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && iVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && iVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && iVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && iVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && iVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && iVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && iVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && iVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && iVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && iVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && iVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && iVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && iVar1 < Global_262145.f_24193)
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
		if (!Global_262145.f_26756 && iVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && iVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && iVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && iVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && iVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && iVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && iVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && iVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && iVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && iVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && iVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && iVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && iVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && iVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && iVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && iVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && iVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && iVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && iVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && iVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && iVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && iVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && iVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && iVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && iVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && iVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && iVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && iVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && iVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && iVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && iVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && iVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && iVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && iVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && iVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && iVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && iVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && iVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && iVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && iVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && iVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && iVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && iVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && iVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && iVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && iVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && iVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && iVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && iVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && iVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && iVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && iVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && iVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && iVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && iVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && iVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && iVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && iVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && iVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && iVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && iVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && iVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && iVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && iVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && iVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && iVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && iVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && iVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && iVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && iVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && iVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && iVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && iVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && iVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && iVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && iVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && iVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && iVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && iVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && iVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO3"))
	{
		if (!Global_262145.f_33037 && iVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CORSITA"))
	{
		if (!Global_262145.f_33031 && iVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DRAUGUR"))
	{
		if (!Global_262145.f_33035 && iVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GREENWOOD"))
	{
		if (!Global_262145.f_33029 && iVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KANJOSJ"))
	{
		if (!Global_262145.f_33040 && iVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LM87"))
	{
		if (!Global_262145.f_33032 && iVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POSTLUDE"))
	{
		if (!Global_262145.f_33041 && iVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RHINEHART"))
	{
		if (!Global_262145.f_33043 && iVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SM722"))
	{
		if (!Global_262145.f_33034 && iVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TENF"))
	{
		if (!Global_262145.f_33042 && iVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TENF2"))
	{
		if (!Global_262145.f_33045 && iVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO2"))
	{
		if (!Global_262145.f_33030 && iVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGERO2"))
	{
		if (!Global_262145.f_33038 && iVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WEEVIL2"))
	{
		if (!Global_262145.f_33044 && iVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER4"))
	{
		if (!Global_262145.f_33036 && iVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL4"))
	{
		if (!Global_262145.f_33046 && iVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONADA"))
	{
		if (!Global_262145.f_33033 && iVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNISEGT"))
	{
		if (!Global_262145.f_33028 && iVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_43()//Position - 0x533E
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

bool func_44()//Position - 0x5354
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

int func_45()//Position - 0x536A
{
	int iVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
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

int func_46(int iParam0)//Position - 0x5422
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_39(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x5468
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[24]))
	{
		if (iParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0)//Position - 0x5550
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
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_49(int iParam0, int iParam1, bool bParam2)//Position - 0x55B3
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_50(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
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

int func_50(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x5621
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

int func_51(int iParam0)//Position - 0x56F9
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77137.f_139[iParam0];
}

int func_52()//Position - 0x5715
{
	var uVar0;
	
	func_62(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_61(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_60(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_55(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_54(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_53(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_53(var uParam0, int iParam1)//Position - 0x575B
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

void func_54(var uParam0, int iParam1)//Position - 0x57E1
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_55(var uParam0, int iParam1)//Position - 0x5814
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_59(*uParam0);
	iVar1 = func_57(*uParam0);
	if (iParam1 < 1 || iParam1 > func_56(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_56(int iParam0, int iParam1)//Position - 0x5865
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

var func_57(int iParam0)//Position - 0x5907
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_58(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_58(bool bParam0, int iParam1, int iParam2)//Position - 0x5929
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_59(int iParam0)//Position - 0x5940
{
	return iParam0 & 15;
}

void func_60(var uParam0, int iParam1)//Position - 0x594D
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_61(var uParam0, int iParam1)//Position - 0x5987
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_62(var uParam0, int iParam1)//Position - 0x59C2
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_63(var uParam0, int iParam1)//Position - 0x59FE
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
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
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
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
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
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
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
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
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
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
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
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
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
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
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
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
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
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
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
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
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
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
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
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
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
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
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
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
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
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_45())
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
			if (func_45())
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
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
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
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
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
		uParam0->f_4 = Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_21(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113386.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113386.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_21(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_21(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_64(int iParam0)//Position - 0x70EC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x7127
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar0], false))
			{
				if (Global_97772[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x71A3
{
	switch (Local_56.f_6)
	{
		case 0:
			return func_68(iParam0);
			break;
		
		case 1:
			if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_67(iParam0);
			break;
		
		case 2:
			return (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x7237
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

int func_68(int iParam0)//Position - 0x72AB
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

int func_69(int iParam0, int iParam1)//Position - 0x7304
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_70()//Position - 0x7324
{
	struct<101> Var0;
	struct<78> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<2> Var24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	var uVar29;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var1.f_9 = 49;
	Var1.f_59 = 2;
	bVar2 = false;
	iVar3 = 0;
	if (iLocal_113 > 0 && iLocal_113 != 99)
	{
		if (((((((((((((((Local_56.f_0 == -1 || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_7, Local_56.f_29.f_10, Local_56.f_29.f_13, false, true, 0)) || ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[Local_56.f_0], false)) && (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_484[Local_56.f_0]) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_484[Local_56.f_0], true)))) || ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ((ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) - 1f) > 0.15f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Global_77137.f_484[Local_56.f_0])))) || ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_484[Local_56.f_0], true))) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_256(0) != bLocal_161) || bLocal_142) || func_255(-1082130432))
		{
			iLocal_113 = 99;
		}
	}
	switch (iLocal_113)
	{
		case 0:
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !Global_75485) && !bLocal_142) && !CAM::IS_SCREEN_FADED_OUT())
			{
				if ((((((((((Local_56.f_29.f_80 && Local_56.f_2 == 0) && (Global_77137.f_592[0] != -1 || func_254() != 0)) && Local_56.f_0 != -1) && !iLocal_159) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_255(-1082130432))
				{
					if (iLocal_115 != -1)
					{
					}
					else if (func_69(Local_56.f_0, 0) && func_69(Local_56.f_0, 5))
					{
						if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_7, Local_56.f_29.f_10, Local_56.f_29.f_13, false, true, 0) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
						{
							if ((!ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[Local_56.f_0], false)) || (!PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_484[Local_56.f_0]) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_484[Local_56.f_0], true)))
							{
								iVar6 = func_254();
								iVar7 = 0;
								while (iVar7 < iVar6)
								{
									if (func_66(func_250(iVar7)))
									{
										iVar5++;
									}
									iVar7++;
								}
								iVar4 = 0;
								while (iVar4 < Global_77137.f_592)
								{
									if (Global_77137.f_592[iVar4] != -1)
									{
										if ((func_249(Global_77137.f_592[iVar4], iLocal_129) && Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[Global_77137.f_592[iVar4]] == -15) && (Global_77137.f_592[iVar4] != 200 || !Global_113386.f_25073.f_7))
										{
											iVar5++;
										}
									}
									iVar4++;
								}
								if (iVar5 > 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										iLocal_144 = 1;
										if (Local_56.f_6 == 3)
										{
											func_248(&iLocal_114, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_248(&iLocal_114, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										bLocal_161 = func_256(0);
										iLocal_113++;
									}
								}
								else if (!iLocal_144)
								{
									if (Local_56.f_6 == 0)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_247("HANGAR_NO"))
										{
											func_246("HANGAR_NO", -1);
											StringCopy(&cLocal_162, "HANGAR_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 1)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_247("MARINA_NO"))
										{
											func_246("MARINA_NO", -1);
											StringCopy(&cLocal_162, "MARINA_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 2)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_247("HELIPAD_NO"))
										{
											func_246("HELIPAD_NO", -1);
											StringCopy(&cLocal_162, "HELIPAD_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 3)
									{
										StringCopy(&Var8, "CAR_GAR_NO", 16);
										if (MISC::IS_PS3_VERSION() || func_43())
										{
											StringConCat(&Var8, "_1", 16);
										}
										else if (MISC::IS_XBOX360_VERSION() || func_44())
										{
											StringConCat(&Var8, "_2", 16);
										}
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_247(&Var8))
										{
											func_246(&Var8, -1);
											cLocal_162 = { Var8 };
										}
										bVar2 = true;
									}
								}
							}
						}
						else
						{
							iLocal_144 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_244(0, -1, 0))
			{
				if (iLocal_115 != -1)
				{
					iLocal_113 = 0;
					return;
				}
				if (func_243(iLocal_114, 1))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
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
					func_242();
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_118 = 0;
					bLocal_109 = -1;
					iLocal_113++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_116 || iLocal_117)
			{
				func_241(0, 0);
				func_240(1, 4, 0, 0, 0);
				func_239(1, 2, 1, 1, 1);
				func_238("WEB_VEH_TITLE");
				iVar9 = 0;
				while (iVar9 < iLocal_110)
				{
					iLocal_110[iVar9] = 0;
					iVar9++;
				}
				iVar10 = -1;
				iVar11 = 0;
				func_63(&(Local_56.f_8), Local_56.f_0);
				iVar13 = 0;
				iVar14 = func_254();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_66(func_250(iVar12)))
					{
						if (iVar10 == -1)
						{
							iVar10 = iVar13;
						}
						if (Local_56.f_8.f_4 == func_250(iVar12))
						{
							bLocal_109 = iVar13;
							iVar11 = 1;
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_77137.f_592)
				{
					if (Global_77137.f_592[iVar12] != -1)
					{
						if ((func_249(Global_77137.f_592[iVar12], iLocal_129) && Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[Global_77137.f_592[iVar12]] == -15) && (Global_77137.f_592[iVar12] != 200 || !Global_113386.f_25073.f_7))
						{
							func_142(Global_77137.f_592[iVar12], &Var0, 0, iLocal_129, -1, -1);
							if (iVar10 == -1)
							{
								iVar10 = iVar13;
							}
							if (Local_56.f_8.f_4 == Var0.f_66)
							{
								bLocal_109 = iVar13;
								iVar11 = 1;
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				if (bLocal_109 == -1)
				{
					bLocal_109 = iVar10;
				}
				iVar13 = 0;
				iVar14 = func_254();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_66(func_250(iVar12)))
					{
						MISC::SET_BIT(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
						func_138(iVar13, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_250(iVar12)), 0, 1, 0, 0, 0);
						if ((bLocal_109 == iVar13 && iVar11) && Local_56.f_6 != 3)
						{
							func_137(iVar13, 4, 0);
						}
						else
						{
							func_137(iVar13, 0, 0);
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_77137.f_592)
				{
					if (Global_77137.f_592[iVar12] != -1)
					{
						if ((func_249(Global_77137.f_592[iVar12], iLocal_129) && Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[Global_77137.f_592[iVar12]] == -15) && (Global_77137.f_592[iVar12] != 200 || !Global_113386.f_25073.f_7))
						{
							MISC::SET_BIT(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
							func_142(Global_77137.f_592[iVar12], &Var0, 0, iLocal_129, -1, -1);
							if (Global_77137.f_592[iVar12] != 164)
							{
								func_138(iVar13, func_134(Global_77137.f_592[iVar12]), 0, 1, 0, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_138(iVar13, "TWOSTRINGS", 2, 1, 0, 0, 0);
								func_131(func_134(Global_77137.f_592[iVar12]), 0);
								func_131("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_138(iVar13, "TWOSTRINGS", 2, 1, 0, 0, 0);
								func_131(func_134(Global_77137.f_592[iVar12]), 0);
								func_131("VNX_SWFTB", 0);
							}
							else
							{
								func_138(iVar13, func_134(Global_77137.f_592[iVar12]), 0, 1, 0, 0, 0);
							}
							if (bLocal_109 == iVar13 && iVar11)
							{
								func_137(iVar13, 4, 0);
							}
							else
							{
								func_137(iVar13, 0, 0);
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				func_130(bLocal_109, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, true);
						PAD::DISABLE_CONTROL_ACTION(0, 2, true);
						PAD::DISABLE_CONTROL_ACTION(2, 200, true);
						PAD::ENABLE_CONTROL_ACTION(0, 237, true);
						PAD::ENABLE_CONTROL_ACTION(0, 238, true);
						PAD::ENABLE_CONTROL_ACTION(0, 241, true);
						PAD::ENABLE_CONTROL_ACTION(0, 242, true);
						func_127(0, 0, 0, 1);
						func_126(0, -1, 1);
						if (func_125())
						{
							if (Global_4539961 != bLocal_109)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								bLocal_109 = Global_4539961;
								func_130(bLocal_109, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
				{
					iLocal_119 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar15 = (bLocal_109 - 1);
					while (iVar15 >= 0)
					{
						if (BitTest(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
						{
							bLocal_109 = iVar15;
							bVar16 = true;
							iVar15 = 0;
						}
						iVar15 = (iVar15 + -1);
					}
					if (!bVar16)
					{
						iVar15 = (iLocal_110 * 32 - 1);
						while (iVar15 >= bLocal_109 + 1)
						{
							if (BitTest(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
							{
								bLocal_109 = iVar15;
								bVar16 = true;
								iVar15 = 0;
							}
							iVar15 = (iVar15 + -1);
						}
					}
					if (bVar16)
					{
						func_130(bLocal_109, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
				{
					iLocal_119 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar17 = bLocal_109 + 1;
					while (iVar17 <= (iLocal_110 * 32 - 1))
					{
						if (BitTest(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
						{
							bLocal_109 = iVar17;
							bVar18 = true;
							iVar17 = iLocal_110 * 32 + 1;
						}
						iVar17++;
					}
					if (!bVar18)
					{
						iVar17 = 0;
						while (iVar17 <= (bLocal_109 - 1))
						{
							if (BitTest(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
							{
								bLocal_109 = iVar17;
								bVar18 = true;
								iVar17 = iLocal_110 * 32 + 1;
							}
							iVar17++;
						}
					}
					if (bVar18)
					{
						func_130(bLocal_109, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar3 == 1)
				{
					bVar19 = false;
					iVar3 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar21 = 0;
					iVar22 = func_254();
					iVar20 = 0;
					while (iVar20 < iVar22)
					{
						if (func_66(func_250(iVar20)))
						{
							if (bLocal_109 == iVar21 && (((((Local_56.f_8.f_4 != func_250(iVar20) || !ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[Local_56.f_0], false)) || Local_56.f_0 == 21) || Local_56.f_0 == 22) || Local_56.f_0 == 23))
							{
								bVar19 = true;
								if ((((!iLocal_118 && Local_56.f_8.f_4 != func_250(iVar20)) || (!iLocal_118 && Local_56.f_0 == 21)) || (!iLocal_118 && Local_56.f_0 == 22)) || (!iLocal_118 && Local_56.f_0 == 23))
								{
									func_124("VEH_SELECT_CNFA", 0, 0);
									func_123(-1);
									func_122(201, "ITEM_YES", -1);
									func_122(202, "ITEM_NO", -1);
									iLocal_118 = 1;
									iVar20 = func_254() + 1;
								}
								else if (Local_56.f_6 == 3)
								{
									if (func_121(func_250(iVar20)))
									{
										iLocal_160 = func_250(iVar20);
										iLocal_116 = 0;
										iLocal_117 = 0;
										bLocal_111 = false;
										iLocal_113++;
									}
									else
									{
										iLocal_159 = 1;
										iLocal_160 = func_250(iVar20);
										iLocal_113 = 99;
									}
								}
								else if (Local_56.f_6 == 0 && func_121(func_250(iVar20)))
								{
									iLocal_160 = func_250(iVar20);
									iLocal_116 = 0;
									iLocal_117 = 0;
									bLocal_111 = false;
									iLocal_113++;
								}
								else
								{
									if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_484[Local_56.f_0], false, true);
										VEHICLE::DELETE_VEHICLE(&(Global_77137.f_484[Local_56.f_0]));
									}
									Var1.f_66 = func_250(iVar20);
									MISC::SET_BIT(&(Var1.f_77), 14);
									func_118(Local_56.f_0, &Var1, 0f, 0f, 0f, -1f, 145);
									func_117(Local_56.f_0);
									func_63(&(Local_56.f_8), Local_56.f_0);
									iVar20 = func_254() + 1;
									iLocal_117 = 1;
								}
							}
							iVar21++;
						}
						iVar20++;
					}
					if (!bVar19)
					{
						iVar20 = 0;
						while (iVar20 < Global_77137.f_592)
						{
							if (Global_77137.f_592[iVar20] != -1)
							{
								if ((func_249(Global_77137.f_592[iVar20], iLocal_129) && Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[Global_77137.f_592[iVar20]] == -15) && (Global_77137.f_592[iVar20] != 200 || !Global_113386.f_25073.f_7))
								{
									func_142(Global_77137.f_592[iVar20], &Var0, 0, iLocal_129, -1, -1);
									if (bLocal_109 == iVar21 && ((Local_56.f_8.f_4 != Var0.f_66 || !ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[Local_56.f_0], false)))
									{
										bVar19 = true;
										if (!iLocal_118)
										{
											if (Local_56.f_6 == 3)
											{
												func_124("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_124("VEH_SELECT_CNFA", 0, 0);
											}
											func_123(-1);
											func_122(201, "ITEM_YES", -1);
											func_122(202, "ITEM_NO", -1);
											iLocal_118 = 1;
											iVar20 = Global_77137.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_113 = 3;
											iLocal_117 = 1;
											iVar20 = Global_77137.f_592 + 1;
										}
										else
										{
											if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_484[Local_56.f_0], false, true);
												VEHICLE::DELETE_VEHICLE(&(Global_77137.f_484[Local_56.f_0]));
											}
											func_142(Global_77137.f_592[iVar20], &Var0, 0, iLocal_129, -1, -1);
											MISC::SET_BIT(&(Var0.f_77), 14);
											if (VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_66))
											{
												MISC::SET_BIT(&(Var0.f_77), 22);
											}
											func_118(Local_56.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
											func_117(Local_56.f_0);
											func_63(&(Local_56.f_8), Local_56.f_0);
											iVar20 = Global_77137.f_592 + 1;
											iLocal_117 = 1;
										}
									}
									iVar21++;
								}
							}
							iVar20++;
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_113 = 99;
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_119)
			{
				func_124("", 0, 0);
				func_123(-1);
				func_122(201, "ITEM_SELECT", -1);
				func_122(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			func_76(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			break;
		
		case 3:
			if (!iLocal_116 || iLocal_117)
			{
				func_241(0, 0);
				func_240(1, 0, 0, 0, 0);
				func_239(1, 1, 1, 1, 1);
				iVar23 = 0;
				while (iVar23 < iLocal_112)
				{
					iLocal_112[iVar23] = 0;
					iVar23++;
				}
				func_238("WEB_VEH_TITLE2");
				iVar23 = 0;
				while (iVar23 < 25)
				{
					StringCopy(&Var24, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var24, iVar23, 16);
					func_138(iVar23, &Var24, 0, 1, 0, 0, 0);
					MISC::SET_BIT(&(iLocal_112[(iVar23 / 32)]), (iVar23 % 32));
					iVar23++;
				}
				if (Local_131.f_12 == 0)
				{
					bLocal_111 = Global_113386.f_25182.f_313[200];
				}
				else if (Local_131.f_12 == 1)
				{
					bLocal_111 = Global_113386.f_25182.f_626[200];
				}
				else
				{
					bLocal_111 = Global_113386.f_25182.f_939[200];
				}
				func_130(bLocal_111, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, true);
						PAD::DISABLE_CONTROL_ACTION(0, 2, true);
						PAD::ENABLE_CONTROL_ACTION(0, 237, true);
						PAD::ENABLE_CONTROL_ACTION(0, 238, true);
						PAD::ENABLE_CONTROL_ACTION(0, 241, true);
						PAD::ENABLE_CONTROL_ACTION(0, 242, true);
						func_127(0, 0, 0, 1);
						func_126(0, -1, 1);
						if (func_125())
						{
							if (Global_4539961 != bLocal_111)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								bLocal_111 = Global_4539961;
								func_130(bLocal_111, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
				{
					iLocal_119 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar25 = (bLocal_111 - 1);
					while (iVar25 >= 0)
					{
						if (BitTest(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
						{
							bLocal_111 = iVar25;
							bVar26 = true;
							iVar25 = 0;
						}
						iVar25 = (iVar25 + -1);
					}
					if (!bVar26)
					{
						iVar25 = 31;
						while (iVar25 >= bLocal_111 + 1)
						{
							if (BitTest(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
							{
								bLocal_111 = iVar25;
								bVar26 = true;
								iVar25 = bLocal_111;
							}
							iVar25 = (iVar25 + -1);
						}
					}
					if (bVar26)
					{
						func_130(bLocal_111, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
				{
					iLocal_119 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar27 = bLocal_111 + 1;
					while (iVar27 <= 31)
					{
						if (BitTest(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
						{
							bLocal_111 = iVar27;
							bVar28 = true;
							iVar27 = 31;
						}
						iVar27++;
					}
					if (!bVar28)
					{
						iVar27 = 0;
						while (iVar27 <= (bLocal_111 - 1))
						{
							if (BitTest(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
							{
								bLocal_111 = iVar27;
								bVar28 = true;
								iVar27 = bLocal_111;
							}
							iVar27++;
						}
					}
					if (bVar28)
					{
						func_130(bLocal_111, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar3 == 1)
				{
					iVar3 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_484[Local_56.f_0], false, true);
						VEHICLE::DELETE_VEHICLE(&(Global_77137.f_484[Local_56.f_0]));
					}
					uVar29 = bLocal_111 + 1;
					if (iLocal_129 == 0)
					{
						Global_113386.f_25182.f_313[200] = uVar29;
					}
					else if (iLocal_129 == 1)
					{
						Global_113386.f_25182.f_626[200] = uVar29;
					}
					else if (iLocal_129 == 2)
					{
						Global_113386.f_25182.f_939[200] = uVar29;
					}
					func_142(200, &Var0, 0, iLocal_129, -1, -1);
					MISC::SET_BIT(&(Var0.f_77), 14);
					if (VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_66))
					{
						MISC::SET_BIT(&(Var0.f_77), 22);
					}
					func_118(Local_56.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
					func_117(Local_56.f_0);
					func_63(&(Local_56.f_8), Local_56.f_0);
					iLocal_117 = 1;
					iLocal_113 = 2;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_113 = (iLocal_113 - 1);
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_119)
			{
				func_124("", 0, 0);
				func_123(-1);
				func_122(201, "ITEM_SELECT", -1);
				func_122(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			func_76(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
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
			func_73(1, -1);
			iLocal_113 = 0;
			func_71(&iLocal_114);
			iLocal_114 = -1;
			break;
	}
	if (!bVar2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_162))
		{
			if ((((func_247("HANGAR_NO") || func_247("MARINA_NO")) || func_247("HELIPAD_NO")) || func_247("CAR_GAR_NO_1")) || func_247("CAR_GAR_NO_2"))
			{
				HUD::CLEAR_HELP(true);
			}
			StringCopy(&cLocal_162, "", 16);
		}
	}
}

void func_71(int iParam0)//Position - 0x898F
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_72(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_72(int iParam0)//Position - 0x89E6
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
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_73(bool bParam0, int iParam1)//Position - 0x8A21
{
	int iVar0;
	
	if (!func_75(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23150.f_8808 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23150.f_6019[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_74(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_74(int* iParam0)//Position - 0x8ADF
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

int func_75(var uParam0, bool bParam1, int iParam2)//Position - 0x8B0B
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_76(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x8BA8
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
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int* iVar45;
	int* iVar46;
	int* iVar47;
	int* iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int* iVar58;
	int* iVar59;
	float fVar60;
	char cVar61[64];
	char cVar62[64];
	float fVar63;
	int iVar64;
	float fVar65;
	float fVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	char cVar73[16];
	float fVar74;
	float fVar75;
	float fVar76;
	float fVar77;
	float fVar78;
	
	if (!func_75(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_114(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23150)
	{
		if (func_112(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = (fVar37 / fVar36);
		}
		else
		{
			Global_23150 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23149;
	}
	fVar55 = (fParam5 * fVar56);
	if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar57 = Global_23148;
	}
	else
	{
		fVar57 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
	}
	fVar60 = 1f;
	func_110(bParam7, &iVar58, &iVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23150.f_5609 <= 1)
		{
			func_138(Global_23150.f_5609 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23150.f_6405 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23150.f_6119)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_23148;
			}
			else
			{
				if (Global_23150)
				{
					StringCopy(&cVar61, func_109(29), 64);
					StringCopy(&cVar62, func_106(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_105(Global_23147, Global_23148, fParam5, fVar55, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23150.f_8778)
				{
					iVar1 = Global_23150.f_8774;
					iVar2 = Global_23150.f_8775;
					iVar3 = Global_23150.f_8776;
					iVar4 = Global_23150.f_8777;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_105(Global_23147, (Global_23148 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) != 0)
				{
					func_104();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23150.f_74)
					{
						if (Global_23150.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23150.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_14[iVar16], Global_23150.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23150.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23147 + 0.00390625f), ((Global_23148 + fVar55) + 0.00416664f), 0);
				}
				if (Global_23150.f_6126)
				{
					func_104();
					func_102((((Global_23147 + fParam5) - 0.00390625f) - func_103("CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128);
				}
				else if (Global_23150.f_6122 > Global_23150.f_5616)
				{
					if (Global_23150.f_6125 != 0)
					{
						func_104();
						func_102((((Global_23147 + fParam5) - 0.00390625f) - func_103("CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124);
					}
				}
			}
			iVar6 = Global_23150.f_6129;
			iVar9 = 0;
			fVar63 = fVar49;
			if (Global_23150.f_8788)
			{
				iVar1 = Global_23150.f_8784;
				iVar2 = Global_23150.f_8785;
				iVar3 = Global_23150.f_8786;
				iVar4 = Global_23150.f_8787;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23150.f_5616 && iVar6 <= Global_23150.f_5609)
			{
				if (iVar6 >= 0)
				{
					if (Global_23150.f_5876[iVar6])
					{
						if (Global_23150.f_5747[iVar6] && iVar6 != Global_23150.f_6129)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar54 = Global_23150.f_6136[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23150.f_6122 > Global_23150.f_5616)
			{
				if (Global_23150.f_8793)
				{
					iVar1 = Global_23150.f_8789;
					iVar2 = Global_23150.f_8790;
					iVar3 = Global_23150.f_8791;
					iVar4 = Global_23150.f_8792;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_105(Global_23147, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_23150.f_8806)
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
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23150.f_5081)) != 0 && Global_23150.f_5157 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_23150.f_5159 != 0)
				{
					func_112(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_101(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_105(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_101(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_23150.f_5159 != 0)
				{
					func_112(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					func_100(Global_23150.f_5159, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_109(Global_23150.f_5159), func_106(Global_23150.f_5159, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_23150.f_5157 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23150.f_5158) > Global_23150.f_5157)
					{
						StringCopy(&(Global_23150.f_5081), "", 24);
						Global_23150.f_5157 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4539885.f_21)) != 0 && Global_4539885.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_4539885.f_67 != 0)
				{
					func_112(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_101(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_105(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_101(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4539885.f_67 != 0)
				{
					func_112(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_100(Global_4539885.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_109(Global_4539885.f_67), func_106(Global_4539885.f_67, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4539885.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4539885.f_66) > Global_4539885.f_65)
					{
						StringCopy(&(Global_4539885.f_21), "", 16);
						Global_4539885.f_65 = -1;
					}
				}
			}
			func_92(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23150.f_6119)
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
			iVar64 = Global_23150.f_5609;
			if (Global_23150.f_6120)
			{
				iVar64 = (Global_23150.f_6123 - 1);
			}
			fVar65 = 0f;
			fVar66 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar64)
			{
				fVar54 = 0.034722f;
				if (Global_23150.f_6136[iVar6] != 0f)
				{
					fVar54 = Global_23150.f_6136[iVar6];
				}
				if (Global_23150.f_6120)
				{
					iVar6 = Global_23150.f_8429[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23150.f_6129 && iVar9 < Global_23150.f_5616)
				{
					bVar33 = true;
					if (Global_23150.f_6130 == iVar6)
					{
						fVar66 = fVar65;
					}
					if (Global_23150.f_5747[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23150.f_6270[iVar6] = fVar35;
				fVar34 = (Global_23147 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_23150.f_6130 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar68 = 255;
					iVar69 = 255;
					iVar70 = 255;
					iVar71 = 255;
					if (Global_23150.f_8800)
					{
						HUD::GET_HUD_COLOUR(Global_23150.f_8799, &iVar68, &iVar69, &iVar70, &iVar71);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar68, &iVar69, &iVar70, &iVar71);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23147 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar68, iVar69, iVar70, iVar71, false, 0);
					Global_23150.f_6268 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23150.f_5617)
				{
					if (BitTest(Global_23150.f_5480[iVar6], iVar8) || Global_23150.f_5447[iVar8] == 5)
					{
						if (Global_23150.f_6120)
						{
							iVar19 = Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar20 = Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar21 = Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar22 = Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar23 = Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)];
						}
						else
						{
							Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar19;
							Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar20;
							Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar21;
							Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar22;
							Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar23;
						}
						iVar72 = 0;
						bVar53 = false;
						if (Global_23150.f_6402[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[0])
							{
								bVar53 = true;
								iVar72 = 0;
							}
						}
						if (Global_23150.f_6402[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[1])
							{
								bVar53 = true;
								iVar72 = 1;
							}
						}
						if (Global_23150.f_5453[iVar8] != -1f)
						{
							fVar34 = ((Global_23147 + 0.0046875f) + Global_23150.f_5453[iVar8]);
						}
						if ((iVar8 < 4 && Global_23150.f_5453[iVar8 + 1] != -1f) && fVar34 < Global_23150.f_5453[iVar8 + 1])
						{
							fVar44 = (Global_23150.f_5453[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_23147 + Global_23149) - 0.0046875f) - fVar34);
						}
						if ((Global_23150.f_5466[iVar8] && Global_23150.f_6265) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_23150.f_5447[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_23150.f_2130[iVar24])
											{
												bVar51 = true;
											}
											func_90(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_23150.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_112(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_23150.f_4824[(iVar22 + iVar14)] == 2 || Global_23150.f_4824[(iVar22 + iVar14)] == 51) || Global_23150.f_4824[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
										Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											iVar67 = (iVar8 - 1);
											while (iVar67 >= 0)
											{
												if (Global_23150.f_5474[iVar67] == 2)
												{
													Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] = (Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] - Global_23150.f_5459[iVar8]);
												}
												iVar67 = (iVar67 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_112(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_112(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_109(26), func_106(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (func_112(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_112(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_109(27), func_106(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
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
									if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_23150.f_2130[iVar24])
										{
											bVar51 = true;
										}
										func_90(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_89(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar28)] == 2 || Global_23150.f_4824[(iVar22 + iVar28)] == 51) || Global_23150.f_4824[(iVar22 + iVar28)] == 61)
											{
												if (func_112(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_112(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_100(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_23150.f_5474[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_109(Global_23150.f_4824[(iVar22 + iVar28)]), func_106(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_109(Global_23150.f_4824[(iVar22 + iVar28)]), func_106(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23150.f_5474[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
											if (func_88() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23150.f_2130[iVar24])
													{
														bVar51 = true;
													}
													func_90(0, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar73, "TEST_LABEL", 16);
													fVar74 = 0f;
													fVar75 = 55f;
													fVar76 = 0.0185f;
													fVar77 = 0.004f;
													fVar78 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar78 * 0.6f)), (fVar35 + (fVar76 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar75), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar73);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23150.f_6129 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar78), (fVar35 + fVar77), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar14)] != 2 && Global_23150.f_4824[(iVar22 + iVar14)] != 51) && Global_23150.f_4824[(iVar22 + iVar14)] != 61)
											{
												if (func_112(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_112(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_100(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_23150.f_4824[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_109(Global_23150.f_4824[(iVar22 + iVar14)]), func_106(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (Global_23147 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else if (Global_23150.f_5474[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_109(Global_23150.f_4824[(iVar22 + iVar14)]), func_106(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_109(Global_23150.f_4824[(iVar22 + iVar14)]), func_106(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_90(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_89(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[iVar20]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_112(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_112(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_109(26), func_106(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (func_112(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_112(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_109(27), func_106(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_90(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										func_87((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4309[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_90(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_89(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_112(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_112(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_109(26), func_106(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (func_112(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_112(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_109(27), func_106(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									func_90(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
									func_86((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_112(Global_23150.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23150.f_6120)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_23150.f_5474[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
											Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
											fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
										}
										if (bVar52)
										{
											if (func_112(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23150.f_5474[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_112(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_100(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_109(26), func_106(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
													}
												}
											}
											if (func_112(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_112(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_100(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_109(27), func_106(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_112(Global_23150.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(Global_23150.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_109(Global_23150.f_4824[iVar22]), func_106(Global_23150.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_85(Global_23150.f_4824[iVar22])), (fVar37 * func_85(Global_23150.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_23150.f_5447[iVar8] == 5)
						{
							if (Global_23150.f_5459[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							if (Global_23150.f_5466[iVar8])
							{
								if (func_112(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_23150.f_8429[iVar9] = iVar6;
						Global_23150.f_6131 = iVar6;
						iVar9++;
						if (Global_23150.f_5747[iVar6])
						{
							iVar13++;
						}
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar65 = (fVar65 + Global_23150.f_6136[iVar6]);
						}
						else
						{
							fVar65 = (fVar65 + 0.034722f);
						}
					}
					if (!Global_23150.f_6119)
					{
						Global_23150.f_5876[iVar6] = 1;
						if (Global_23150.f_5618[iVar6])
						{
							if (bVar32)
							{
								Global_23150.f_6125 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23150.f_6125 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23150.f_6119)
			{
				Global_23150.f_6121 = ((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
				Global_23150.f_6124 = iVar11;
				Global_23150.f_6122 = iVar10;
				Global_23150.f_6119 = 1;
			}
		}
		if (!Global_23150.f_6120)
		{
			Global_23150.f_6123 = iVar9;
			Global_23150.f_6120 = 1;
		}
		iVar5++;
	}
	Global_23150.f_6267 = fVar49;
	Global_23150.f_6269 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23150.f_6267);
	if (!Global_23150.f_8773)
	{
		func_78(0);
	}
	Global_23150.f_8773 = 0;
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
		func_77(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_77(int iParam0)//Position - 0xB918
{
	Global_1649593.f_1163 = iParam0;
}

void func_78(int iParam0)//Position - 0xB929
{
	if (func_84())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_83(0))
		{
			func_79(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_79(int iParam0)//Position - 0xB95C
{
	if (func_84())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_82())
		{
			func_81(1, 1);
		}
		else
		{
			func_81(0, 0);
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
	if (!func_80())
	{
		Global_20266.f_1 = 3;
	}
}

int func_80()//Position - 0xB9E6
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_81(bool bParam0, bool bParam1)//Position - 0xBA0D
{
	if (bParam0)
	{
		if (func_83(0))
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

bool func_82()//Position - 0xBA81
{
	return BitTest(Global_1958711, 5);
}

int func_83(int iParam0)//Position - 0xBA8F
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

bool func_84()//Position - 0xBAE6
{
	return BitTest(Global_1958711, 19);
}

float func_85(int iParam0)//Position - 0xBAF5
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_86(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0xBB64
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_87(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xBB83
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_88()//Position - 0xBBA1
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_89(bool bParam0)//Position - 0xBBB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23150.f_8801[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23150.f_8801[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_90(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xBBF8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_91(Global_23150.f_6402[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_91(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xBDA6
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

void func_92(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0xC031
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_75(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_114(bParam4, bParam8))
	{
		return;
	}
	if (func_98())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_95(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[iVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_23150.f_5417[iVar1], true), 64);
				}
				else if (Global_23150.f_5430[iVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_23150.f_5430[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23150.f_5472 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_94(&(Global_23150.f_5162[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_94(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[iVar1] == -1)
					{
						func_93(&(Global_23150.f_5355[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23150.f_5404[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23150.f_5355[iVar1 /*4*/]));
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
						if (Global_23150.f_5417[iVar1] != 363 && BitTest(Global_23150.f_5443, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23150.f_5417[iVar1]);
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
			if (MISC::GET_HASH_KEY(&(Global_4539885.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23150.f_5160);
				func_94(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_93(&(Global_4539885.f_16));
				}
				else
				{
					iVar4 = Global_23150.f_5404[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539885.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23150.f_5161 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23150.f_5355[iVar1 /*4*/]));
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
		if (Global_4539885.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539885.f_16));
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
			if (!Global_23150.f_8808)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23150.f_8808 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23150.f_5446)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_93(char* sParam0)//Position - 0xC535
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_94(char* sParam0)//Position - 0xC547
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_95(int iParam0, int iParam1)//Position - 0xC555
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_96(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
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

int func_96(int iParam0, bool bParam1)//Position - 0xC5A0
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_97();
	}
	if (Global_1575038[iVar1] == 1)
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

int func_97()//Position - 0xC5E1
{
	return Global_1574918;
}

int func_98()//Position - 0xC5ED
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_99())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20211 == 0)
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

int func_99()//Position - 0xC65B
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_100(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0xC675
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
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_101(float fParam0)//Position - 0xC78A
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
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23147 + Global_23149) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_102(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xC7E9
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_103(char* sParam0, int iParam1, int iParam2)//Position - 0xC80C
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
	func_104();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_104()//Position - 0xC84E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23150.f_8783)
	{
		iVar0 = Global_23150.f_8779;
		iVar1 = Global_23150.f_8780;
		iVar2 = Global_23150.f_8781;
		iVar3 = Global_23150.f_8782;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23147 + 0.0046875f), ((Global_23147 + Global_23149) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_105(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xC8D8
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_106(int iParam0, bool bParam1)//Position - 0xC907
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_108(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_107(&uVar1);
			}
		}
		else
		{
			return func_107(&(Global_23150.f_7420[iParam0 /*16*/]));
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
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
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

var func_107(var uParam0)//Position - 0xCE2F
{
	return uParam0;
}

struct<13> func_108(int iParam0)//Position - 0xCE39
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_109(int iParam0)//Position - 0xCE50
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_108(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_107(&uVar0);
		}
		else
		{
			return func_107(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_110(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0xCEC5
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (func_111(*iParam1, *iParam2))
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

bool func_111(int iParam0, int iParam1)//Position - 0xCF4D
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_112(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xCF68
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_109(iParam0), 64);
	StringCopy(&cVar1, func_106(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_110(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) };
		fVar6 = (func_113(iParam0) / fVar4);
		Var5 = { Var5 * Vector(fVar6, fVar6, fVar6) };
		if (!bParam2)
		{
			Var5.f_0 = (Var5.f_0 - 2f);
			Var5.f_1 = (Var5.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var5.f_0 = 288f;
			Var5.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var5.f_0 = 106f;
			Var5.f_1 = 106f;
		}
		*fParam3 = ((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23149)
			{
				*fParam4 = (*fParam4 * (Global_23149 / *fParam3));
				*fParam3 = Global_23149;
			}
		}
		return 1;
	}
	return 0;
}

float func_113(int iParam0)//Position - 0xD094
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
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_114(bool bParam0, bool bParam1)//Position - 0xD168
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_116(8, -1) && func_115() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78579) || Global_23150.f_8807) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_115()//Position - 0xD205
{
	return Global_1574991;
}

var func_116(int iParam0, int iParam1)//Position - 0xD211
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

void func_117(int iParam0)//Position - 0xD249
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_77137[iParam0] = 0;
	Global_77137.f_69[iParam0] = 0;
}

void func_118(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0xD26E
{
	if (func_63(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			func_120(iParam0);
			func_119(uParam1, &(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 11))
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_519(iParam0, 1);
		}
	}
}

void func_119(var uParam0, var uParam1)//Position - 0xD367
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

void func_120(int iParam0)//Position - 0xD433
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_63(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
			Global_77137.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			func_519(iParam0, 0);
		}
	}
}

int func_121(int iParam0)//Position - 0xD4AA
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_122(int iParam0, char* sParam1, int iParam2)//Position - 0xD4C7
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_123(int iParam0)//Position - 0xD576
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	Global_23150.f_5443 = 0;
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_75(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23150.f_6051[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_124(char* sParam0, int iParam1, int iParam2)//Position - 0xD62F
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_5081), sParam0, 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = iParam1;
	Global_23150.f_5158 = MISC::GET_GAME_TIMER();
	Global_23150.f_5159 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
}

int func_125()//Position - 0xD694
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4539961 > -1)
		{
			if (PAD::IS_CONTROL_JUST_RELEASED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_126(int iParam0, int iParam1, bool bParam2)//Position - 0xD6BB
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	if (Global_4539961 == -6)
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4539961 = -1;
			return 0;
		}
	}
	if (((Global_4539961 > -1 || Global_4539961 == -3) || Global_4539961 == -2) || HUD::_IS_MOUSE_CURSOR_ABOVE_INSTRUCTIONAL_BUTTONS())
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_4539961 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(4);
			Global_4539961 = -6;
			return 1;
		}
		else
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	return 0;
}

void func_127(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xD79B
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
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_4539961 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(true);
	fVar0 = Global_23147;
	fVar2 = (fVar0 + Global_23149);
	fVar3 = Global_23150.f_6121;
	fVar1 = (Global_23150.f_6121 - (IntToFloat(Global_23150.f_6123) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23150.f_6123 < 1)
	{
		fVar1 = (Global_23150.f_6121 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_129();
	if (Global_4539961 == -6)
	{
		return;
	}
	Global_4539961 = -1;
	fVar7 = Global_4539955;
	fVar8 = Global_4539956;
	if (Global_23150.f_6124 > Global_23150.f_6123)
	{
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= fVar3) && Global_4539956 < (fVar3 + fVar6))
		{
			Global_4539961 = -2;
			if (bParam3)
			{
				func_128(0);
			}
			return;
		}
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= (fVar3 + fVar6)) && Global_4539956 < (fVar3 + 0.034722f))
		{
			Global_4539961 = -3;
			if (bParam3)
			{
				func_128(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_23150.f_6124 == -1)
		{
			Global_4539961 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23150.f_6123);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_105(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23149, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4539961 = Global_23150.f_8429[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4539961 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4539961 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4539961 = -4;
		return;
	}
	Global_4539961 = -1;
}

void func_128(bool bParam0)//Position - 0xDA47
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
	fVar0 = Global_23147;
	fVar1 = Global_23150.f_6121;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4539961 == -2)
	{
		func_105(fVar0, fVar1, Global_23149, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4539961 == -3)
	{
		func_105(fVar0, (fVar1 + fVar2), Global_23149, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_129()//Position - 0xDAD0
{
	Global_4539957 = Global_4539955;
	Global_4539958 = Global_4539956;
	Global_4539955 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4539956 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4539959 = (Global_4539955 - Global_4539957);
	Global_4539960 = (Global_4539956 - Global_4539958);
}

void func_130(bool bParam0, bool bParam1, int iParam2)//Position - 0xDB18
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_6130 = bParam0;
	Global_23150.f_6265 = iParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

void func_131(char* sParam0, bool bParam1)//Position - 0xDC68
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), sParam0, 24);
	Global_23150.f_5611++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 1;
	Global_23150.f_6134++;
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = func_133();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			func_112(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = func_132();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

float func_132()//Position - 0xDDA4
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23150.f_4824[((Global_23150.f_5615 - iVar1) + iVar0)] != 0)
		{
			if (func_112(Global_23150.f_4824[((Global_23150.f_5615 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
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

float func_133()//Position - 0xDE57
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
	while (iVar7 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_90(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_23150.f_79[Global_23150.f_6133 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(Global_23150.f_6133 + iVar8) /*6*/]));
			}
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(Global_23150.f_6133 + iVar8) /*6*/]));
			}
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[((Global_23150.f_5613 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[((Global_23150.f_5614 - iVar4) + iVar10)], Global_23150.f_4695[((Global_23150.f_5614 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23150.f_4824[((Global_23150.f_5615 - iVar5) + iVar7)] != 0)
		{
			func_112(Global_23150.f_4824[((Global_23150.f_5615 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_134(int iParam0)//Position - 0xE29E
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
	iVar0 = func_135(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		case 510:
			return "LANDSTLKR2";
		
		default:
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar0);
}

int func_135(int iParam0, int iParam1)//Position - 0xE45A
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
			return Global_75446;
		
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
			return Global_75447;
		
		case 324:
			return Global_75448;
		
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
			return Global_75449;
		
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
			return Global_75450;
		
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
			return func_136();
		
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
			return joaat("TENF");
		
		case 570:
			return joaat("SM722");
		
		case 571:
			return joaat("TORERO2");
		
		case 572:
			return joaat("CORSITA");
		
		case 573:
			return joaat("LM87");
		
		case 574:
			return joaat("OMNISEGT");
		
		case 575:
			return joaat("RHINEHART");
		
		case 576:
			return joaat("POSTLUDE");
		
		case 577:
			return joaat("KANJOSJ");
		
		case 578:
			return joaat("VIGERO2");
		
		case 579:
			return joaat("RUINER4");
		
		case 580:
			return joaat("DRAUGUR");
		
		case 581:
			return joaat("GREENWOOD");
		
		case 582:
			return joaat("CONADA");
		
		default:
	}
	return 0;
}

int func_136()//Position - 0x1052B
{
	return joaat("kosatka");
}

void func_137(int iParam0, int iParam1, bool bParam2)//Position - 0x10538
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5615 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 4)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 4)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_23150.f_4824[Global_23150.f_5615] = iParam1;
	Global_23150.f_5615++;
	if (iParam1 != 0)
	{
		func_112(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			func_112(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
		{
			Global_23150.f_5459[Global_23150.f_5610] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_23150.f_6136[iParam0])
			{
				Global_23150.f_6136[iParam0] = fVar2;
			}
		}
	}
	MISC::SET_BIT(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 4;
}

void func_138(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x106B3
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 1)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 1)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23150.f_1616[Global_23150.f_5611] = bParam3;
	Global_23150.f_1873[Global_23150.f_5611] = iParam4;
	Global_23150.f_2130[Global_23150.f_5611] = iParam6;
	Global_23150.f_5611++;
	if (!bParam3)
	{
		func_141(Global_23150.f_5609, 1);
	}
	else
	{
		func_141(Global_23150.f_5609, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_140(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			func_112(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
		{
			Global_23150.f_5459[Global_23150.f_5610] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_139(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
			if (fVar4 > Global_23150.f_6136[iParam0])
			{
				Global_23150.f_6136[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 1;
	Global_23150.f_6133 = (Global_23150.f_5611 - 1);
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = iParam2;
}

float func_139(char* sParam0)//Position - 0x108CF
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_140(char* sParam0)//Position - 0x108EB
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
	func_90(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_141(int iParam0, bool bParam1)//Position - 0x10928
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_142(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)//Position - 0x10974
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
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	char* sVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	
	uParam1->f_66 = func_135(iParam0, iParam4);
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
	func_237(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_236(iParam0))
	{
		if (Global_77052)
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
	else if (func_235(uParam1->f_66))
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
			if (func_234(uParam1->f_66))
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
		if (Global_77052)
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
	if (func_233(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
	{
		uParam1->f_80 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_77051;
	}
	else if (iParam3 == 0)
	{
		iVar1 = Global_113386.f_25182.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar1 = Global_113386.f_25182.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar1 = Global_113386.f_25182.f_939[iParam0];
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
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 2:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 3:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 4:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 5:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 6:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 7:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 8:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 9:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 10:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 11:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 12:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 13:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 14:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 15:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 16:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 17:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 18:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 19:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 20:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 21:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 22:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 23:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 24:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
				break;
			
			case 25:
				func_165(func_166(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_152(func_166(iParam0, iVar1));
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
				if (func_151(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_150(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else if (func_149(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
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
						uParam1->f_67 = func_152(func_166(iParam0, iVar1));
					}
				}
				else if (func_236(iParam0))
				{
					if (!Global_77052)
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
				else if (func_148(iParam0))
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
				else if (func_147(iParam0))
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
				if (func_151(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_150(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[48] = uVar5;
						}
						else if (func_149(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
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
						uParam1->f_67 = func_152(func_166(iParam0, iVar1));
					}
				}
				else if (func_236(iParam0))
				{
					if (!Global_77052)
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
				else if (func_148(iParam0))
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
				else if (func_147(iParam0))
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
				if (func_151(iParam0))
				{
					if (func_150(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[48] = uVar8;
					}
					else if (func_149(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
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
				else if (func_236(iParam0))
				{
					if (!Global_77052)
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
				else if (func_148(iParam0))
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
				else if (func_147(iParam0))
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
				if (func_151(iParam0))
				{
					if (func_150(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[48] = uVar11;
					}
					else if (func_149(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
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
				else if (func_236(iParam0))
				{
					if (!Global_77052)
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
				else if (func_148(iParam0))
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
				else if (func_147(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_146(iVar14, &sVar15, &iVar16, &uVar17, &uVar18))
					{
						if (MISC::ARE_STRINGS_EQUAL(&sVar15, "ORANGE") && iVar16 == 1)
						{
							uParam1->f_5 = uVar17;
							uParam1->f_6 = uVar18;
							iVar14 = -99;
						}
						iVar14++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 5:
				if (func_236(iParam0))
				{
					if (!Global_77052)
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
				else if (func_148(iParam0))
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
				else if (func_147(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_146(iVar19, &sVar20, &iVar21, &uVar22, &uVar23))
					{
						if (MISC::ARE_STRINGS_EQUAL(&sVar20, "LIME_GREEN") && iVar21 == 1)
						{
							uParam1->f_5 = uVar22;
							uParam1->f_6 = uVar23;
							iVar19 = -99;
						}
						iVar19++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 6:
				if (func_236(iParam0))
				{
					if (!Global_77052)
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
				else if (func_148(iParam0))
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
				else if (func_147(iParam0))
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
				else if (func_236(iParam0))
				{
					if (!Global_77052)
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
				else if (func_148(iParam0))
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
				else if (func_147(iParam0))
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
				if (func_236(iParam0))
				{
					if (!Global_77052)
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
				else if (func_148(iParam0))
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
				else if (func_147(iParam0))
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
	if (func_145(uParam1->f_66))
	{
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 357)
	{
		uParam1->f_66 = func_144();
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
		uParam1->f_66 = func_143();
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
			uParam1->f_66 = func_136();
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
	}
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

int func_143()//Position - 0x132D5
{
	return joaat("terbyte");
}

int func_144()//Position - 0x132E2
{
	return joaat("avenger");
}

int func_145(int iParam0)//Position - 0x132EF
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
		case joaat("CONADA"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_146(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x13435
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_147(int iParam0)//Position - 0x14928
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 398 || iParam0 == 386) || iParam0 == 391) || iParam0 == 394) || iParam0 == 393) || iParam0 == 397) || iParam0 == 396) || iParam0 == 390) || iParam0 == 395) || iParam0 == 389) || iParam0 == 388) || iParam0 == 392) || iParam0 == 399) || iParam0 == 410) || iParam0 == 411) || iParam0 == 412) || iParam0 == 405) || iParam0 == 415) || iParam0 == 417) || iParam0 == 418) || iParam0 == 424) || iParam0 == 420) || iParam0 == 421) || iParam0 == 423) || iParam0 == 422) || iParam0 == 449) || iParam0 == 442) || iParam0 == 441) || iParam0 == 444) || iParam0 == 446) || iParam0 == 448) || iParam0 == 447) || iParam0 == 445) || iParam0 == 443) || iParam0 == 459) || iParam0 == 460) || iParam0 == 461) || iParam0 == 462) || iParam0 == 463) || iParam0 == 464) || iParam0 == 465) || iParam0 == 466) || iParam0 == 467) || iParam0 == 468) || iParam0 == 469) || iParam0 == 470) || iParam0 == 471) || iParam0 == 472) || iParam0 == 473) || iParam0 == 474) || iParam0 == 475) || iParam0 == 476) || iParam0 == 477) || iParam0 == 478) || iParam0 == 479) || iParam0 == 489) || iParam0 == 490) || iParam0 == 491) || iParam0 == 492) || iParam0 == 493) || iParam0 == 494) || iParam0 == 495) || iParam0 == 496) || iParam0 == 497) || iParam0 == 498) || iParam0 == 500) || iParam0 == 501) || iParam0 == 502) || iParam0 == 503) || iParam0 == 504) || iParam0 == 505) || iParam0 == 519) || iParam0 == 520) || iParam0 == 521) || iParam0 == 522) || iParam0 == 534) || iParam0 == 535)
	{
		return 1;
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x14CCE
{
	if (((((iParam0 == 286 || iParam0 == 289) || iParam0 == 290) || iParam0 == 301) || iParam0 == 287) || iParam0 == 288)
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x14D20
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
				func_165(func_166(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				func_165(func_166(iParam0, iParam1), uParam2, uParam3);
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

int func_150(int iParam0, int iParam1, var uParam2)//Position - 0x1514E
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

int func_151(int iParam0)//Position - 0x1522C
{
	if (((((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279) || iParam0 == 413) || iParam0 == 414)
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)//Position - 0x1534E
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
			if (func_164(PLAYER::PLAYER_ID(), 0))
			{
				return 14;
			}
			else if (func_164(PLAYER::PLAYER_ID(), 1))
			{
				return 13;
			}
			else if (func_164(PLAYER::PLAYER_ID(), 2))
			{
				return 8;
			}
			else if (func_164(PLAYER::PLAYER_ID(), 3))
			{
				return 12;
			}
			else if (func_164(PLAYER::PLAYER_ID(), 4))
			{
				return 11;
			}
			else if (func_164(PLAYER::PLAYER_ID(), 5))
			{
				return 10;
			}
			else if (func_164(PLAYER::PLAYER_ID(), 6))
			{
				return 9;
			}
			else if (func_164(PLAYER::PLAYER_ID(), 7))
			{
				return 7;
			}
			else if (func_164(PLAYER::PLAYER_ID(), 8))
			{
				return 15;
			}
			if (func_153(PLAYER::PLAYER_ID()))
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

int func_153(int iParam0)//Position - 0x1561D
{
	if ((((((((func_163(iParam0) || func_162(iParam0)) || func_161(iParam0)) || func_160(iParam0)) || func_159(iParam0)) || func_158(iParam0)) || func_157(iParam0)) || func_156(iParam0)) || func_154(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x15693
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 8;
	}
	if (iParam0 == func_155())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_2, 0);
}

int func_155()//Position - 0x156D6
{
	return -1;
}

int func_156(int iParam0)//Position - 0x156DF
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 7;
	}
	if (iParam0 == func_155())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 31);
}

int func_157(int iParam0)//Position - 0x15722
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 6;
	}
	if (iParam0 == func_155())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 30);
}

int func_158(int iParam0)//Position - 0x15765
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 5;
	}
	if (iParam0 == func_155())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 29);
}

int func_159(int iParam0)//Position - 0x157A8
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 4;
	}
	if (iParam0 == func_155())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 28);
}

int func_160(int iParam0)//Position - 0x157EB
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 3;
	}
	if (iParam0 == func_155())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 27);
}

int func_161(int iParam0)//Position - 0x1582E
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 2;
	}
	if (iParam0 == func_155())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 26);
}

int func_162(int iParam0)//Position - 0x15871
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 1;
	}
	if (iParam0 == func_155())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 25);
}

int func_163(int iParam0)//Position - 0x158B4
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 0;
	}
	if (iParam0 == func_155())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 24);
}

int func_164(int iParam0, int iParam1)//Position - 0x158F7
{
	switch (iParam1)
	{
		case 4:
			return func_163(iParam0);
		
		case 3:
			return func_162(iParam0);
		
		case 6:
			return func_161(iParam0);
		
		case 1:
			return func_160(iParam0);
		
		case 0:
			return func_159(iParam0);
		
		case 7:
			return func_158(iParam0);
		
		case 2:
			return func_157(iParam0);
		
		case 5:
			return func_156(iParam0);
		
		case 8:
			return func_154(iParam0);
		
		default:
	}
	return 0;
}

int func_165(int iParam0, var uParam1, var uParam2)//Position - 0x1598E
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

int func_166(int iParam0, int iParam1)//Position - 0x15C28
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
			if (func_167(iParam0, 11, iParam1))
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
			if (func_167(iParam0, 16, iParam1))
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
	}
	return -1;
}

int func_167(int iParam0, int iParam1, int iParam2)//Position - 0x1622B
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
	
	iVar0 = func_135(iParam0, -1);
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
		if (func_45() && func_232())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 207 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 208 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 209 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (func_45())
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
	if (func_236(iParam0))
	{
		if (Global_77052)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_231(iVar0);
	if (iVar1 != -1)
	{
		if (func_229(func_230(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_228(iParam0))
	{
		if (func_45())
		{
			if ((iParam0 == 205 && Global_262145.f_20268) || (iParam0 != 205 && Global_262145.f_20267))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_227(iParam0))
	{
		if (func_218(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_217(iVar0);
	if (iVar2 != -1)
	{
		if (func_215(func_216(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_214(iVar0);
	if (iVar3 > 0)
	{
		if (func_212(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_211(iVar0);
	if (iVar4 != -1)
	{
		if (func_209(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_208(iVar0);
	if (iVar5 != -1)
	{
		if (func_205(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_204(iVar0);
	if (iVar6 != -1)
	{
		if (func_200(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == joaat("firetruk") || iVar0 == joaat("boxville")) || iVar0 == joaat("stockade"))
	{
		if (func_199(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar7 = func_198(iVar0);
	if (iVar7 != -1)
	{
		if (func_199(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar8 = func_197(iVar0);
	if (iVar8 != -1)
	{
		if (func_188(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar9 = func_187(iVar0);
	if (iVar9 != -1)
	{
		if (func_184(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar10 = func_183(iVar0);
	if (iVar10 != -1)
	{
		if (func_175(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar11 = func_174(iVar0);
	if (iVar11 != -1)
	{
		if (func_168(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_168(int iParam0)//Position - 0x1657B
{
	if (!Global_78319)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("KANJOSJ"):
			return func_173(34373, -1);
		
		case joaat("POSTLUDE"):
			return func_173(34374, -1);
		
		case joaat("GREENWOOD"):
			return func_169(0);
		
		case joaat("DRAUGUR"):
			return func_173(32366, -1);
		
		case joaat("CONADA"):
			return func_169(5);
		
		default:
	}
	return 0;
}

var func_169(int iParam0)//Position - 0x165E8
{
	return BitTest(func_171(10393, -1, 0), func_170(iParam0, 1));
}

int func_170(int iParam0, bool bParam1)//Position - 0x16601
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

int func_171(int iParam0, int iParam1, int iParam2)//Position - 0x1669D
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_172(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x166DA
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_97();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

bool func_173(int iParam0, int iParam1)//Position - 0x1670E
{
	if (iParam1 == -1)
	{
		iParam1 = func_97();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_174(int iParam0)//Position - 0x1672A
{
	switch (iParam0)
	{
		case joaat("KANJOSJ"):
			return 0;
		
		case joaat("POSTLUDE"):
			return 1;
		
		case joaat("GREENWOOD"):
			return 2;
		
		case joaat("DRAUGUR"):
			return 3;
		
		case joaat("CONADA"):
			return 4;
		
		default:
	}
	return -1;
}

int func_175(int iParam0)//Position - 0x1676C
{
	if (!Global_78319)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("buffalo4"):
			return func_182();
		
		case joaat("granger2"):
			return func_180(1) >= 5;
		
		case joaat("deity"):
			return func_180(1) >= 10;
		
		case joaat("patriot3"):
			return func_180(1) >= 15;
		
		case joaat("jubilee"):
			return func_180(1) >= 20;
		
		case joaat("champion"):
			return (func_178(11, 1) || func_176(1));
		
		case joaat("baller7"):
			return func_176(1);
		
		default:
	}
	return 0;
}

int func_176(bool bParam0)//Position - 0x16801
{
	if (bParam0)
	{
		return BitTest(func_171(9905, -1, 0), 2);
	}
	return func_177(PLAYER::PLAYER_ID());
}

int func_177(int iParam0)//Position - 0x16824
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27, 2);
	}
	return 0;
}

int func_178(int iParam0, bool bParam1)//Position - 0x16842
{
	if (bParam1)
	{
		return BitTest(func_171(9907, -1, 0), iParam0);
	}
	return func_179(PLAYER::PLAYER_ID(), iParam0);
}

int func_179(int iParam0, var uParam1)//Position - 0x16868
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27.f_3, uParam1);
	}
	return 0;
}

int func_180(bool bParam0)//Position - 0x16889
{
	if (bParam0)
	{
		return func_171(9910, -1, 0);
	}
	return func_181(PLAYER::PLAYER_ID());
}

int func_181(int iParam0)//Position - 0x168AA
{
	if (iParam0 != -1)
	{
		return Global_1977138[iParam0 /*57*/].f_27.f_8;
	}
	return 0;
}

bool func_182()//Position - 0x168C8
{
	return func_171(9903, func_172(-1), 0) != 0;
}

int func_183(int iParam0)//Position - 0x168DF
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

int func_184(int iParam0)//Position - 0x1694A
{
	if (!Global_78319)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("euros"):
			return func_186(PLAYER::PLAYER_ID());
		
		case joaat("tailgater2"):
			return func_185(PLAYER::PLAYER_ID());
		
		case joaat("zr350"):
			return func_173(31810, -1);
		
		case joaat("comet6"):
			return func_173(31811, -1);
		
		case joaat("jester4"):
			return func_173(31812, -1);
		
		case joaat("vectre"):
			return func_173(31813, -1);
		
		case joaat("cypher"):
			return func_173(31814, -1);
		
		case joaat("growler"):
			return func_173(31815, -1);
		
		case joaat("calico"):
			return func_173(31816, -1);
		
		case joaat("remus"):
			return func_173(31817, -1);
		
		case joaat("dominator7"):
			return func_173(31818, -1);
		
		case joaat("futo2"):
			return func_173(31819, -1);
		
		case joaat("rt3000"):
			return func_173(31820, -1);
		
		case joaat("warrener2"):
			return func_173(31821, -1);
		
		case joaat("sultan3"):
			return func_173(31822, -1);
		
		case joaat("dominator8"):
			return func_173(31823, -1);
		
		case joaat("previon"):
			return func_173(31824, -1);
		
		case joaat("KANJOSJ"):
			return func_173(34373, -1);
		
		case joaat("POSTLUDE"):
			return func_173(34374, -1);
		
		default:
	}
	return 0;
}

int func_185(int iParam0)//Position - 0x16AAB
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return BitTest(func_171(9618, -1, 0), 0);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_1, 0);
	}
	return 0;
}

int func_186(int iParam0)//Position - 0x16AE0
{
	if (iParam0 != func_155())
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_465.f_2, 17))
		{
			return 1;
		}
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return func_171(9631, -1, 0) != 0;
		}
	}
	return 0;
}

int func_187(int iParam0)//Position - 0x16B24
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

int func_188(int iParam0)//Position - 0x16BE7
{
	if (!Global_78319)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("winky"):
			if (func_194(PLAYER::PLAYER_ID(), 0) || func_193(0))
			{
				return 1;
			}
			break;
		
		case joaat("brioso2"):
			if (func_192(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case joaat("vetir"):
			if (func_191(281, -1))
			{
				return 1;
			}
			break;
		
		case joaat("longfin"):
			if (func_191(282, -1))
			{
				return 1;
			}
			break;
		
		case joaat("annihilator2"):
			if (func_191(283, -1))
			{
				return 1;
			}
			break;
		
		case joaat("alkonost"):
			if (func_191(284, -1))
			{
				return 1;
			}
			break;
		
		case joaat("patrolboat"):
			if (func_191(285, -1))
			{
				return 1;
			}
			break;
		
		case joaat("weevil"):
			if ((func_189(0, 1) && func_189(1, 1)) && func_189(2, 1))
			{
				return 1;
			}
			break;
		
		case joaat("italirsx"):
			if (func_189(3, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_189(int iParam0, bool bParam1)//Position - 0x16CF9
{
	if (bParam1)
	{
		return BitTest(func_171(9586, -1, 0), iParam0);
	}
	return func_190(PLAYER::PLAYER_ID(), iParam0);
}

int func_190(int iParam0, var uParam1)//Position - 0x16D1F
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_3, uParam1);
	}
	return 0;
}

int func_191(int iParam0, int iParam1)//Position - 0x16D3E
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_172(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_192(int iParam0)//Position - 0x16D6A
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_193(bool bParam0)//Position - 0x16D88
{
	if (bParam0)
	{
		return BitTest(func_171(9511, -1, 0), 1);
	}
	return func_192(PLAYER::PLAYER_ID());
}

int func_194(int iParam0, int iParam1)//Position - 0x16DAB
{
	if (iParam0 != -1)
	{
		return func_195(iParam0, func_196(iParam1));
	}
	return 0;
}

int func_195(int iParam0, var uParam1)//Position - 0x16DC9
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_2, uParam1);
	}
	return 0;
}

int func_196(int iParam0)//Position - 0x16DE8
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

int func_197(int iParam0)//Position - 0x16EAB
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

int func_198(int iParam0)//Position - 0x16F31
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

int func_199(int iParam0)//Position - 0x1707B
{
	int iVar0;
	
	if (!Global_78319)
	{
		return 0;
	}
	iVar0 = func_171(8837, -1, 0);
	switch (iParam0)
	{
		case joaat("firetruk"):
			if (BitTest(iVar0, 0) || Global_262145.f_28576)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("burrito2"):
			if (BitTest(iVar0, 1) || Global_262145.f_28577)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("boxville"):
			if (BitTest(iVar0, 2) || Global_262145.f_28578)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("stockade"):
			if (BitTest(iVar0, 3) || Global_262145.f_28579)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("asbo"):
			if (BitTest(iVar0, 4) || Global_262145.f_28580)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("kanjo"):
			if (BitTest(iVar0, 5) || Global_262145.f_28581)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("everon"):
			if (BitTest(iVar0, 6) || Global_262145.f_28582)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("retinue2"):
			if (BitTest(iVar0, 7) || Global_262145.f_28583)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("yosemite2"):
			if (BitTest(iVar0, 8) || Global_262145.f_28584)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sugoi"):
			if (BitTest(iVar0, 9) || Global_262145.f_28585)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sultan2"):
			if (BitTest(iVar0, 10) || Global_262145.f_28586)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("outlaw"):
			if (BitTest(iVar0, 11) || Global_262145.f_28587)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("vagrant"):
			if (BitTest(iVar0, 12) || Global_262145.f_28588)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("komoda"):
			if (BitTest(iVar0, 13) || Global_262145.f_28589)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("stryder"):
			if (BitTest(iVar0, 14) || Global_262145.f_28590)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("furia"):
			if (BitTest(iVar0, 15) || Global_262145.f_28591)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("zhaba"):
			if (BitTest(iVar0, 16) || Global_262145.f_28592)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("jugular"):
			if (BitTest(iVar0, 17) || Global_262145.f_28593)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sentinel3"):
			if (BitTest(iVar0, 18) || Global_262145.f_28594)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("gauntlet3"):
			if (BitTest(iVar0, 19) || Global_262145.f_28595)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("ellie"):
			if (BitTest(iVar0, 20) || Global_262145.f_28596)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("defiler"):
			if (BitTest(iVar0, 21) || Global_262145.f_28597)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("manchez"):
			if (BitTest(iVar0, 22) || Global_262145.f_28598)
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

int func_200(int iParam0)//Position - 0x17449
{
	if (!Global_78319)
	{
		return 0;
	}
	if (iParam0 == joaat("cognoscenti") || iParam0 == joaat("cognoscenti2"))
	{
		return 0;
	}
	if (func_204(iParam0) != -1)
	{
		if (func_201(func_203(iParam0)))
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

bool func_201(int iParam0)//Position - 0x1749D
{
	return func_173(func_202(iParam0), -1);
}

int func_202(int iParam0)//Position - 0x174B0
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

int func_203(int iParam0)//Position - 0x18E2D
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

int func_204(int iParam0)//Position - 0x18F71
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

int func_205(int iParam0)//Position - 0x1906B
{
	switch (iParam0)
	{
		case joaat("mule4"):
			if (func_171(7233, -1, 0) >= func_207(iParam0) || Global_262145.f_24711)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pounder2"):
			if (func_171(7233, -1, 0) >= func_207(iParam0) || Global_262145.f_24712)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("oppressor2"):
			if (func_206(22050, -1) >= func_207(iParam0) || Global_262145.f_24713)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pbus2"):
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_295.f_7, 1) || Global_262145.f_24715)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("patriot2"):
			if (func_171(7231, -1, 0) >= func_207(iParam0) || Global_262145.f_24716)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("blimp3"):
			if (func_171(7231, -1, 0) >= func_207(iParam0) || Global_262145.f_24717)
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

int func_206(int iParam0, int iParam1)//Position - 0x191B7
{
	if (iParam1 == -1)
	{
		iParam1 = func_97();
	}
	return STATS::_GET_PACKED_STAT_INT(iParam0, iParam1);
}

int func_207(int iParam0)//Position - 0x191D3
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return Global_262145.f_24718;
			break;
		
		case joaat("pounder2"):
			return Global_262145.f_24719;
			break;
		
		case joaat("oppressor2"):
			return Global_262145.f_24720;
			break;
		
		case joaat("patriot2"):
			return Global_262145.f_24721;
			break;
		
		case joaat("blimp3"):
			return Global_262145.f_24722;
			break;
	}
	return 0;
}

int func_208(int iParam0)//Position - 0x19242
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

int func_209(int iParam0)//Position - 0x192A0
{
	var uVar0;
	
	if (!Global_78319)
	{
		return 0;
	}
	uVar0 = func_171(5664, -1, 0);
	switch (iParam0)
	{
		case joaat("deluxo"):
			return BitTest(uVar0, func_210(1));
		
		case joaat("akula"):
			return BitTest(uVar0, func_210(2));
		
		case joaat("riot2"):
			return BitTest(uVar0, func_210(6));
		
		case joaat("stromberg"):
			return BitTest(uVar0, func_210(7));
		
		case joaat("chernobog"):
			return BitTest(uVar0, func_210(10));
		
		case joaat("barrage"):
			return BitTest(uVar0, func_210(11));
		
		case joaat("khanjali"):
			return BitTest(uVar0, func_210(12));
		
		case joaat("volatol"):
			return BitTest(uVar0, func_210(13));
		
		case joaat("thruster"):
			return BitTest(uVar0, func_210(15));
		
		default:
	}
	return 0;
}

int func_210(int iParam0)//Position - 0x19365
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

int func_211(int iParam0)//Position - 0x1941D
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

int func_212(int iParam0)//Position - 0x194A3
{
	int iVar0;
	int iVar1;
	
	if (!Global_78319)
	{
		return 0;
	}
	iVar0 = func_214(iParam0);
	iVar1 = func_213();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_213()//Position - 0x194D1
{
	return func_171(6116, -1, 0);
}

int func_214(int iParam0)//Position - 0x194E2
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return Global_262145.f_22740;
		
		case joaat("rogue"):
			return Global_262145.f_22741;
		
		case joaat("alphaz1"):
			return Global_262145.f_22742;
		
		case joaat("havok"):
			return Global_262145.f_22743;
		
		case joaat("starling"):
			return Global_262145.f_22744;
		
		case joaat("molotok"):
			return Global_262145.f_22745;
		
		case joaat("tula"):
			return Global_262145.f_22746;
		
		case joaat("bombushka"):
			return Global_262145.f_22747;
		
		case joaat("howard"):
			return Global_262145.f_22748;
		
		case joaat("mogul"):
			return Global_262145.f_22749;
		
		case joaat("pyro"):
			return Global_262145.f_22750;
		
		case joaat("seabreeze"):
			return Global_262145.f_22751;
		
		case joaat("nokota"):
			return Global_262145.f_22752;
		
		case joaat("hunter"):
			return Global_262145.f_22753;
		
		default:
	}
	return 0;
}

int func_215(var uParam0)//Position - 0x195D2
{
	if (!Global_78319)
	{
		return 0;
	}
	return BitTest(func_171(5466, -1, 0), uParam0);
}

int func_216(int iParam0)//Position - 0x195F2
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

int func_217(int iParam0)//Position - 0x1963E
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

int func_218(int iParam0)//Position - 0x1969C
{
	int iVar0;
	
	if (!Global_78319)
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
	return func_219(iVar0);
}

int func_219(int iParam0)//Position - 0x197A7
{
	var uVar0;
	int iVar1;
	
	if (func_226())
	{
		return 0;
	}
	uVar0 = func_221(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_220(iVar1));
}

int func_220(int iParam0)//Position - 0x197CF
{
	return (iParam0 % 32);
}

var func_221(var uParam0)//Position - 0x197DC
{
	var uVar0;
	
	uVar0 = func_171(func_222(uParam0), -1, 0);
	return uVar0;
}

int func_222(var uParam0)//Position - 0x197F4
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_225(iVar0);
	if ((func_224() == 0 || func_223() == 0) || (func_224() == 999 && func_223() == 999))
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
	return 13122;
}

int func_223()//Position - 0x19863
{
	return Global_31960;
}

int func_224()//Position - 0x1986E
{
	return Global_31959;
}

int func_225(int iParam0)//Position - 0x19879
{
	return (iParam0 / 32);
}

bool func_226()//Position - 0x19886
{
	return Global_1575037;
}

int func_227(int iParam0)//Position - 0x19892
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)//Position - 0x1994C
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

int func_229(var uParam0)//Position - 0x199A3
{
	if (!Global_78319)
	{
		return 0;
	}
	return BitTest(func_171(5329, -1, 0), uParam0);
}

int func_230(int iParam0)//Position - 0x199C3
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

int func_231(var uParam0)//Position - 0x19A2D
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

int func_232()//Position - 0x19AB6
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
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1))
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
		if (Global_152261.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
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
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_233(int iParam0, var uParam1)//Position - 0x19BEF
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

int func_234(int iParam0)//Position - 0x19EF0
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

int func_235(int iParam0)//Position - 0x19F6A
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

int func_236(int iParam0)//Position - 0x1A056
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

void func_237(int iParam0, int* iParam1)//Position - 0x1A0AE
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
			if (Global_77052)
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
		
		case 525:
			MISC::SET_BIT(iParam1, 3);
			break;
		
		default:
			return;
			break;
	}
}

void func_238(char* sParam0)//Position - 0x1A624
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_1), sParam0, 16);
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1A66F
{
	Global_23150.f_5474[0] = iParam0;
	Global_23150.f_5474[1] = iParam1;
	Global_23150.f_5474[2] = iParam2;
	Global_23150.f_5474[3] = iParam3;
	Global_23150.f_5474[4] = iParam4;
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1A6AE
{
	Global_23150.f_5447[0] = iParam0;
	Global_23150.f_5447[1] = iParam1;
	Global_23150.f_5447[2] = iParam2;
	Global_23150.f_5447[3] = iParam3;
	Global_23150.f_5447[4] = iParam4;
	Global_23150.f_5617 = 0;
	if (iParam0 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam1 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam2 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam3 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam4 != 0)
	{
		Global_23150.f_5617++;
	}
}

void func_241(bool bParam0, bool bParam1)//Position - 0x1A758
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23150.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23150.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2725950[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_5480[iVar0] = 0;
		Global_23150.f_5618[iVar0] = 0;
		Global_23150.f_5747[iVar0] = 0;
		Global_23150.f_6270[iVar0] = 0f;
		Global_23150.f_5876[iVar0] = 0;
		Global_23150.f_6136[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23150.f_5447[iVar0] = 0;
		Global_23150.f_5459[iVar0] = 0f;
		Global_23150.f_5453[iVar0] = -1f;
		Global_23150.f_5466[iVar0] = 0;
		Global_23150.f_5474[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_23150.f_6411[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23150.f_7420[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23150.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	Global_23150 = 0;
	Global_23150.f_5609 = 0;
	Global_23150.f_5610 = 0;
	Global_23150.f_5611 = 0;
	Global_23150.f_5613 = 0;
	Global_23150.f_5614 = 0;
	Global_23150.f_5615 = 0;
	Global_23150.f_5612 = 0;
	Global_23150.f_6265 = 0;
	Global_23150.f_6405 = 0;
	Global_23150.f_6130 = 0;
	Global_23150.f_6129 = 0;
	Global_23150.f_6131 = 0;
	StringCopy(&(Global_23150.f_5081), "", 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = 0;
	Global_23150.f_5158 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_5159 = 0;
	StringCopy(&(Global_4539885.f_21), "", 16);
	Global_4539885.f_61 = 0;
	Global_4539885.f_62 = 0;
	Global_4539885.f_63 = 0;
	Global_4539885.f_64 = 0;
	Global_4539885.f_65 = 0;
	Global_4539885.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4539885.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4539885.f_67 = 0;
	StringCopy(&(Global_23150.f_1), "", 16);
	Global_23150.f_5465 = 0f;
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_6135 = 0;
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = 0;
	Global_23150.f_6133 = 0;
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	Global_23150.f_5616 = 10;
	Global_23150.f_5617 = 0;
	Global_23150.f_6267 = 0f;
	Global_23150.f_6268 = 0f;
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	Global_23150.f_6121 = 0f;
	Global_23150.f_6122 = 0;
	Global_23150.f_6124 = 0;
	Global_23150.f_6123 = 0;
	Global_23150.f_6125 = 0;
	Global_23150.f_6126 = 0;
	Global_23150.f_6127 = 0;
	Global_23150.f_6128 = 0;
	Global_23150.f_8804 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23150.f_6399[iVar0] = -1;
		Global_23150.f_6402[iVar0] = -1;
		iVar0++;
	}
	Global_23150.f_5472 = 0f;
	Global_23150.f_5443 = 0;
	Global_23150.f_5473 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6406)
	{
		Global_23150.f_6406[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_8783 = 0;
	Global_23150.f_8778 = 0;
	Global_23150.f_8788 = 0;
	Global_23150.f_8793 = 0;
	Global_23150.f_8798 = 0;
	Global_23150.f_8800 = 0;
	Global_23150.f_8806 = 0;
	Global_23147 = 0.05f;
	Global_23148 = 0.05f;
	Global_23149 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23149 = 0.225f;
	}
}

void func_242()//Position - 0x1AC42
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

int func_243(int iParam0, bool bParam1)//Position - 0x1AC60
{
	int iVar0;
	
	iVar0 = func_72(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_83(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_244(char* sParam0, int iParam1, bool bParam2)//Position - 0x1AD18
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_75(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_23150.f_6005[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23150.f_6012[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_245(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_245(var uParam0)//Position - 0x1AE0E
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

void func_246(char* sParam0, int iParam1)//Position - 0x1AEB0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_247(char* sParam0)//Position - 0x1AEC7
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_248(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1AEDA
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_71(iParam0);
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
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_249(int iParam0, int iParam1)//Position - 0x1B005
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
	return BitTest(Global_113386.f_25182[iParam0], iVar0);
}

int func_250(int iParam0)//Position - 0x1B040
{
	int iVar0;
	int iVar1[128];
	
	if (func_253(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (BitTest(Global_113386.f_18574[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_45() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_252(33, 0) && !func_251(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_113386.f_25073.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_113386.f_25073.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_113386.f_25073.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_113386.f_25073.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_113386.f_25073.f_7)
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

int func_251(int iParam0)//Position - 0x1B182
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		if (Global_113386.f_7688.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_252(int iParam0, bool bParam1)//Position - 0x1B1BD
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_253(bool bParam0, bool bParam1)//Position - 0x1B1DD
{
	if (bParam0)
	{
		if (BitTest(Global_113386.f_668.f_1317, 2))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MISC::IS_PS3_VERSION() && !func_43())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
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

int func_254()//Position - 0x1B246
{
	int iVar0;
	
	iVar0 = 0;
	if (func_253(1, 1))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0++;
		}
	}
	if (BitTest(Global_113386.f_18574[45 /*6*/], 3))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0++;
		}
	}
	if (func_45() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_252(33, 0) && !func_251(1751306471))
		{
			iVar0++;
		}
		if (Global_113386.f_25073.f_3)
		{
			iVar0++;
		}
		if (Global_113386.f_25073.f_4)
		{
			iVar0++;
		}
		if (Global_113386.f_25073.f_5)
		{
			iVar0++;
		}
		if (Global_113386.f_25073.f_6)
		{
			iVar0++;
		}
		if (Global_113386.f_25073.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_255(float fParam0)//Position - 0x1B312
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

int func_256(bool bParam0)//Position - 0x1B364
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_257()//Position - 0x1B38C
{
	var uVar0[10];
	bool bVar1;
	int iVar2;
	float fVar3;
	char* sVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<3> Var14;
	bool bVar15;
	float fVar16;
	int iVar17;
	struct<3> Var18;
	struct<3> Var19;
	int iVar20;
	struct<3> Var21;
	bool bVar22;
	float fVar23;
	int iVar24;
	bool bVar25;
	struct<4> Var26;
	bool bVar27;
	int iVar28;
	struct<4> Var29;
	struct<60> Var30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	float fVar35;
	int iVar36;
	struct<60> Var37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	bool bVar45;
	
	bVar1 = false;
	if ((((((((((((((((Local_56.f_29.f_80 && Local_56.f_29.f_69) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && Local_56.f_2 == 0) && Local_56.f_0 != -1) && func_69(Local_56.f_0, 0)) && func_69(Local_56.f_0, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_75485) && !func_256(1)) && !func_342()) || (((Local_56.f_3 > 1 && !func_256(0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !func_342()))
	{
		func_341(Local_56.f_0, &Local_83);
		fVar3 = 0f;
		sVar4 = "ANIM@APT_TRANS@GARAGE";
		Var5 = { 198.3659f, -1020.273f, -100f };
		Var6 = { Var5 };
		Var7 = { 198.9538f, -1026.13f, -100f };
		iVar8 = func_340(Local_56.f_0);
		switch (Local_56.f_3)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, false, true, 0) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					Local_56.f_3 = 10;
					return;
				}
				if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, false, true, 0) && (func_339(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_56.f_29.f_68, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)) && (iVar8 == iLocal_129 || iVar8 == 145))
				{
					if (func_338())
					{
						bVar9 = true;
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
								{
									iVar10 = ENTITY::GET_ENTITY_MODEL(iVar2);
									if (((((((((!func_66(iVar10) || func_65(iVar2)) || func_64(iVar2)) || !func_39(iVar10, 0)) || VEHICLE::IS_BIG_VEHICLE(iVar2)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar10))) || iVar10 == joaat("monster")) || FIRE::IS_ENTITY_ON_FIRE(iVar2)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2)) || (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("taxi_procedural")) > 0))
									{
										bVar9 = false;
									}
								}
								else
								{
									bVar9 = false;
								}
							}
						}
						else if (STREAMING::DOES_ANIM_DICT_EXIST(sVar4))
						{
							STREAMING::REQUEST_ANIM_DICT(sVar4);
							if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
							{
								bVar9 = false;
							}
						}
						if (bVar9)
						{
							func_248(&iLocal_115, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							iLocal_175 = 0;
							Local_56.f_3 = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_247("WEB_VEH_INV"))
							{
								func_246("WEB_VEH_INV", -1);
								StringCopy(&cLocal_165, "WEB_VEH_INV", 16);
								bVar1 = true;
							}
						}
					}
					else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_247("WEB_VEH_FULL"))
					{
						func_246("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_165, "WEB_VEH_FULL", 16);
						bVar1 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_173)
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_173 = 0;
						STREAMING::REQUEST_ANIM_DICT(sVar4);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
						{
							iLocal_173 = 1;
						}
					}
					else
					{
						STREAMING::REMOVE_ANIM_DICT(sVar4);
						iLocal_173 = 1;
					}
				}
				iVar11 = 1;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
						{
							iVar12 = ENTITY::GET_ENTITY_MODEL(iVar2);
							if ((((((((!func_66(iVar12) || func_65(iVar2)) || func_64(iVar2)) || VEHICLE::IS_BIG_VEHICLE(iVar2)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar12) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar12)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar12))) || iVar12 == joaat("monster")) || FIRE::IS_ENTITY_ON_FIRE(iVar2)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2)) || (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("taxi_procedural")) > 0))
							{
								iVar11 = 0;
							}
						}
						else
						{
							iVar11 = 0;
						}
					}
				}
				if (((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, false, true, 0) && (func_339(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_56.f_29.f_68, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_338()) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)) && !func_342()) && (iVar8 == iLocal_129 || iVar8 == 145)) && iVar11)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || (STREAMING::HAS_ANIM_DICT_LOADED(sVar4) || !STREAMING::DOES_ANIM_DICT_EXIST(sVar4)))
					{
						if (func_243(iLocal_115, 1))
						{
							func_71(&iLocal_115);
							iLocal_173 = 0;
							Local_56.f_3 = 2;
						}
						func_336(47, 0);
						func_331(47, 0);
						Local_56.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, "v_garagem_sp");
						if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
						{
							if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_112))
							{
								if ((MISC::GET_FRAME_COUNT() % 10) == 0)
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_56.f_112);
								}
							}
							StringCopy(&Global_39347, "v_garagem_sp", 32);
						}
						if (!iLocal_172 && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar13 = func_329(Local_56.f_0);
								func_63(&Var14, iVar13);
								Var6 = { Var14 };
								STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var6, 20f, 0);
							}
							else
							{
								STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var7 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_172 = 1;
						}
					}
				}
				else
				{
					if (iLocal_172 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_172 = 0;
					}
					iLocal_173 = 0;
					func_71(&iLocal_115);
					STREAMING::REMOVE_ANIM_DICT(sVar4);
					Local_56.f_3 = 0;
				}
				break;
			
			case 2:
				func_336(47, 0);
				func_331(47, 0);
				PLAYER::FORCE_CLEANUP(8);
				Global_77137.f_577 = 1;
				Global_77137.f_578 = { Local_56.f_29.f_55 };
				iLocal_155 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
					{
						if (func_339(ENTITY::GET_ENTITY_HEADING(iVar2), Local_56.f_29.f_68, 90f))
						{
							iLocal_175 = 0;
						}
						else
						{
							iLocal_175 = 1;
						}
						ENTITY::SET_ENTITY_PROOFS(iVar2, true, true, true, true, true, true, false, false);
						MISC::CLEAR_AREA_OF_OBJECTS(Local_83.f_86[0 /*6*/], 20f, 0);
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_83.f_86[0 /*6*/], 20f, 0);
						GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_83.f_86[0 /*6*/], 7f);
						ENTITY::SET_ENTITY_COORDS(iVar2, Local_83.f_86[0 /*6*/], true, false, false, true);
						if (iLocal_175 && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_HEADING(iVar2, (Local_83.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							ENTITY::SET_ENTITY_HEADING(iVar2, Local_83.f_86[0 /*6*/].f_3.f_2);
						}
						if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
						{
							PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 0, -1);
							PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					func_323(1, 1, 1, 0, 0, 0, 0);
					func_322(&(Local_83[1 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
					Local_56.f_3 = 3;
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_168) && !ENTITY::IS_ENTITY_DEAD(iLocal_168, false))
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_168, true))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_168);
						}
					}
					iLocal_168 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_168) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_168))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_168))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_168)))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_168, false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_168) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false))
						{
							if (!bVar15)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_168, Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, false, true, 0))
								{
									bVar15 = true;
								}
							}
							if (!bVar15)
							{
								fVar16 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_168, true), Local_83[0 /*15*/]);
								if (fVar16 < (5f * 5f))
								{
									bVar15 = true;
								}
							}
							if (bVar15)
							{
								iVar17 = func_51(24);
								if (func_321(&Local_141, 24))
								{
									func_316(&Local_141, func_513());
									if (ENTITY::DOES_ENTITY_EXIST(iVar17))
									{
										VEHICLE::DELETE_VEHICLE(&iVar17);
									}
								}
								if (Local_56.f_0 == 21)
								{
									MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, true, false, false, false);
									func_314(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_56.f_0 == 22)
								{
									MISC::CLEAR_AREA(-62.0307f, -1839.859f, 25.6787f, 5f, true, false, false, false);
									func_314(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_56.f_0 == 23)
								{
									MISC::CLEAR_AREA(-234.7648f, -1150.311f, 21.9224f, 5f, true, false, false, false);
									func_314(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_168, 5f);
							}
						}
					}
					else
					{
						iLocal_168 = 0;
					}
					Var18 = { Local_56.f_29 * Vector(2f, 2f, 2f) + Local_56.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var19 = { Local_56.f_29 * Vector(1f, 1f, 1f) + Local_56.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29, Var18.f_0, Var18.f_1, Local_56.f_29.f_3.f_2, Local_56.f_29.f_6, false, true, 0))
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_2_left";
								break;
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var18.f_0, Var18.f_1, Local_56.f_29.f_2, Var19.f_0, Var19.f_1, Local_56.f_29.f_3.f_2, Local_56.f_29.f_6, false, true, 0))
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var19.f_0, Var19.f_1, Local_56.f_29.f_2, Local_56.f_29.f_3, Local_56.f_29.f_6, false, true, 0))
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_176 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
							}
					}
					MISC::CLEAR_AREA_OF_OBJECTS(Local_83.f_73[0 /*4*/], 20f, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_83.f_86[0 /*6*/], 20f, 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_83.f_73[0 /*4*/], true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_83.f_73[0 /*4*/].f_3);
					iLocal_120 = PED::CREATE_SYNCHRONIZED_SCENE(Local_83.f_73[0 /*4*/], 0f, 0f, Local_83.f_73[0 /*4*/].f_3, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1000f, 0);
					func_323(1, 1, 1, 0, 0, 0, 0);
					func_322(&(Local_83[0 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
					Local_56.f_3 = 4;
				}
				Local_56.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, "v_garagem_sp");
				if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_112))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_56.f_112);
					}
					StringCopy(&Global_39347, "v_garagem_sp", 32);
				}
				if (!iLocal_172)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar20 = func_329(Local_56.f_0);
						func_63(&Var21, iVar20);
						Var6 = { Var21 };
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var6, 20f, 0);
					}
					else
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var7, 20f, 0);
					}
				}
				MISC::SET_BIT(&(Local_131.f_9), 25);
				func_310(198.0043f, -999.7775f, -100f, 50f, 0);
				func_117(Local_56.f_0);
				func_117(26);
				func_117(29);
				func_117(32);
				func_117(28);
				func_117(31);
				func_117(34);
				func_117(27);
				func_117(30);
				func_117(33);
				SYSTEM::SETTIMERA(0);
				iLocal_174 = 0;
				break;
			
			case 4:
				bVar22 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_112))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_56.f_112);
					}
					StringCopy(&Global_39347, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, "v_garagem_sp");
				}
				if (func_309())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_110) && CAM::IS_CAM_RENDERING(Local_56.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_110))
					{
						bVar22 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0 /*15*/].f_14 * 1000f))
					{
						bVar22 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_56.f_111) && CAM::IS_CAM_RENDERING(Local_56.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_111))
					{
						bVar22 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0 /*15*/].f_14 * 1000f))
					{
						bVar22 = false;
					}
				}
				else
				{
					bVar22 = false;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
				{
					fVar23 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_120);
					if (fVar23 < 0.4f)
					{
						bVar22 = false;
					}
				}
				if (bVar22)
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_56.f_3 = 5;
				}
				break;
			
			case 5:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar24 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iVar24, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iVar24, "hold", (2250f / 1000f));
					func_323(0, 1, 1, 0, 0, 0, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(Local_56.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
						CAM::DESTROY_CAM(Local_56.f_110, false);
					}
					if (CAM::DOES_CAM_EXIST(Local_56.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
						CAM::DESTROY_CAM(Local_56.f_111, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, false);
						iLocal_178 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PLAYER::FORCE_CLEANUP(8);
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_120);
					}
					iLocal_120 = -1;
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 194.5394f, -1026.32f, -100f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 334.1665f);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 6;
				}
				break;
			
			case 6:
				func_308(Local_56.f_0);
				if (CAM::IS_SCREEN_FADED_OUT() && SYSTEM::TIMERA() > 2250)
				{
					STREAMING::REMOVE_ANIM_DICT(sVar4);
					func_307();
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					CAM::DO_SCREEN_FADE_IN(800);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					SYSTEM::SETTIMERA(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					Local_56.f_3 = 10;
				}
				break;
			
			case 3:
				func_308(Local_56.f_0);
				bVar25 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_112))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_56.f_112);
					}
					StringCopy(&Global_39347, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, "v_garagem_sp");
				}
				if (func_309())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_110) && CAM::IS_CAM_RENDERING(Local_56.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_110))
					{
						bVar25 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[1 /*15*/].f_14 * 1000f))
					{
						bVar25 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_56.f_111) && CAM::IS_CAM_RENDERING(Local_56.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_111))
					{
						bVar25 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[1 /*15*/].f_14 * 1000f))
					{
						bVar25 = false;
					}
				}
				else
				{
					bVar25 = false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Var26 = { 0f, 0f, 0f };
					Var26.f_3 = 0f;
					func_299(PLAYER::PLAYER_PED_ID(), Local_83.f_86[0 /*6*/], Local_83.f_66[0 /*3*/], ((Local_83[1 /*15*/].f_14 * 1000f) - 500f), Var26, 2, &fVar3);
				}
				if (bVar25)
				{
					func_307();
					SYSTEM::SETTIMERA(0);
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_56.f_3 = 35;
				}
				break;
			
			case 35:
				bVar27 = true;
				func_308(Local_56.f_0);
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83.f_61[1] * 1000f))
				{
					bVar27 = false;
				}
				if (bVar27)
				{
					func_307();
					func_323(0, 1, 1, 0, 0, 0, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(Local_56.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
						CAM::DESTROY_CAM(Local_56.f_110, false);
					}
					if (CAM::DOES_CAM_EXIST(Local_56.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
						CAM::DESTROY_CAM(Local_56.f_111, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, false);
						iLocal_178 = 0;
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
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
						{
							iVar28 = func_329(Local_56.f_0);
							func_63(&Var29, iVar28);
							ENTITY::SET_ENTITY_COORDS(iVar2, Var29, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar2, Var29.f_3);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar2, true);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, false, true, false);
							VEHICLE::SET_VEHICLE_LIGHTS(iVar2, 4);
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iVar2, 1, false);
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iVar2, 0, false);
							AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, false);
							ENTITY::SET_ENTITY_PROOFS(iVar2, false, false, false, false, false, false, false, false);
							TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar2, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
							Var30.f_9 = 49;
							Var30.f_59 = 2;
							func_32(iVar2, &Var30);
							func_118(iVar28, &Var30, 0f, 0f, 0f, -1f, 145);
							func_30(iVar28, iVar2, 1);
							func_298(iVar2);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
					iVar31 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
					iVar32 = 0;
					while (iVar32 < iVar31)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar32]) && !PED::IS_PED_INJURED(uVar0[iVar32])) && PED::IS_PED_GROUP_MEMBER(uVar0[iVar32], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uVar0[iVar32], 206.802f, -1018.011f, -100f, false, false, true);
						}
						iVar32++;
					}
					SYSTEM::SETTIMERA(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					CAM::DO_SCREEN_FADE_IN(800);
					Local_56.f_3 = 10;
				}
				break;
			
			case 10:
				if (SYSTEM::TIMERA() < 7000 || !Global_113386.f_32749.f_4800)
				{
					if (!Global_113386.f_32749.f_4800)
					{
						if (iLocal_156 == 0)
						{
							func_246("CAR_GAR_05", -1);
							StringCopy(&cLocal_165, "CAR_GAR_05", 16);
							bVar1 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								iLocal_156++;
							}
						}
						else if (iLocal_156 == 1)
						{
							func_246("CAR_GAR_06", -1);
							StringCopy(&cLocal_165, "CAR_GAR_06", 16);
							bVar1 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								Global_113386.f_32749.f_4800 = 1;
							}
						}
					}
					else
					{
						func_246("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_165, "CAR_GAR_EXIT", 16);
						bVar1 = true;
					}
				}
				else
				{
					Global_113386.f_32749.f_4800 = 1;
				}
				iVar33 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (iLocal_115 != -1)
					{
						func_71(&iLocal_115);
					}
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
					{
						if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar2) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
						{
							if (!(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())))
							{
								if ((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 71) != 0f || PAD::IS_CONTROL_JUST_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 71)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 71))
								{
									iVar33 = 1;
								}
								if ((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 72) != 0f || PAD::IS_CONTROL_JUST_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 72)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 72))
								{
									iVar33 = 1;
								}
							}
						}
					}
				}
				else
				{
					STREAMING::REQUEST_ANIM_DICT(sVar4);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, false, true, 0) && func_339(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 180f, 90f))
					{
						if (iLocal_114 != -1)
						{
							func_71(&iLocal_114);
						}
						if (iLocal_115 == -1)
						{
							func_248(&iLocal_115, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_114 != -1 && !iLocal_115 == -1)
						{
							if (func_243(iLocal_115, 1))
							{
								func_71(&iLocal_115);
								iVar33 = 1;
							}
						}
					}
					else if (iLocal_115 != -1)
					{
						func_71(&iLocal_115);
					}
				}
				if (iLocal_159)
				{
					iVar33 = 1;
				}
				if (iVar33 && !func_297())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || iLocal_159)
					{
						SYSTEM::SETTIMERA(0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_83.f_73[2 /*4*/], 20f, 0);
						if (iLocal_115 != -1)
						{
							func_71(&iLocal_115);
						}
						Local_56.f_3 = 12;
					}
					else if (STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
						}
						iLocal_120 = PED::CREATE_SYNCHRONIZED_SCENE(Local_83.f_73[1 /*4*/], 0f, 0f, Local_83.f_73[1 /*4*/].f_3, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1000f, 0);
						func_323(1, 1, 1, 0, 0, 0, 0);
						func_322(&(Local_83[2 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_83.f_73[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_115 != -1)
						{
							func_71(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
					else if (!STREAMING::DOES_ANIM_DICT_EXIST(sVar4))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_83.f_73[1 /*4*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_83.f_73[1 /*4*/].f_3);
						func_323(1, 1, 1, 0, 0, 0, 0);
						func_322(&(Local_83[2 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_83.f_73[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_115 != -1)
						{
							func_71(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar34 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (func_309())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_110) && CAM::IS_CAM_RENDERING(Local_56.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_110))
					{
						bVar34 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[2 /*15*/].f_14 * 1000f))
					{
						bVar34 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_56.f_111) && CAM::IS_CAM_RENDERING(Local_56.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_111))
					{
						bVar34 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[2 /*15*/].f_14 * 1000f))
					{
						bVar34 = false;
					}
				}
				else
				{
					bVar34 = false;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
				{
					fVar35 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_120);
					if (fVar35 < 0.4f)
					{
						bVar34 = false;
					}
				}
				if (bVar34)
				{
					iLocal_156 = 0;
					iLocal_172 = 0;
					CAM::DO_SCREEN_FADE_OUT(800);
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 13;
				}
				break;
			
			case 12:
				PAD::DISABLE_CONTROL_ACTION(0, 75, true);
				if (SYSTEM::TIMERA() > 500)
				{
					iVar36 = func_296();
					if ((iVar36 == 21 || iVar36 == 22) || iVar36 == 23)
					{
						Var37.f_9 = 49;
						Var37.f_59 = 2;
						func_118(iVar36, &Var37, 0f, 0f, 0f, -1f, 145);
						func_120(iVar36);
					}
					else if (iVar36 != -1)
					{
						if (!iLocal_159)
						{
							func_519(iVar36, 0);
							func_120(iVar36);
						}
					}
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					STREAMING::REMOVE_ANIM_DICT(sVar4);
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_56.f_3 = 13;
				}
				break;
			
			case 13:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar38 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iVar38, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iVar38, "hold", (2250f / 1000f));
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(Local_56.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
						CAM::DESTROY_CAM(Local_56.f_110, false);
					}
					if (CAM::DOES_CAM_EXIST(Local_56.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
						CAM::DESTROY_CAM(Local_56.f_111, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, false);
						iLocal_178 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::FORCE_CLEANUP(8);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!iLocal_159)
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								ENTITY::SET_ENTITY_COORDS(iVar2, Local_56.f_29.f_70[1 /*3*/], true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar2, Local_56.f_29.f_77[1]);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
							}
						}
					}
					else
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_120);
						}
						iLocal_120 = -1;
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_70[1 /*3*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_77[1]);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 14;
				}
				break;
			
			case 14:
				if (CAM::IS_SCREEN_FADED_OUT() && SYSTEM::TIMERA() > 2250)
				{
					bVar39 = true;
					if (iLocal_159)
					{
						STREAMING::REQUEST_MODEL(iLocal_160);
						if (STREAMING::HAS_MODEL_LOADED(iLocal_160))
						{
							iVar40 = VEHICLE::CREATE_VEHICLE(iLocal_160, Local_56.f_29.f_70[0 /*3*/], Local_56.f_29.f_77[0], true, true, false);
							if (iLocal_160 == joaat("windsor"))
							{
								VEHICLE::SET_VEHICLE_LIVERY(iVar40, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar40) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar40, false))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar40, -1);
								VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar40, 0f);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_160);
								if (func_121(iLocal_160))
								{
									switch (iLocal_160)
									{
										case joaat("marshall"):
											VEHICLE::SET_VEHICLE_LIVERY(iVar40, bLocal_111);
											break;
										}
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar40);
							}
							iLocal_159 = 0;
						}
						else
						{
							bVar39 = false;
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
						bVar39 = false;
					}
					if (bVar39)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_168) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false))
						{
							iVar41 = func_51(24);
							if (func_321(&Local_141, 24))
							{
								func_316(&Local_141, func_513());
								if (ENTITY::DOES_ENTITY_EXIST(iVar41))
								{
									VEHICLE::DELETE_VEHICLE(&iVar41);
								}
							}
							if (Local_56.f_0 == 21)
							{
								MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, true, false, false, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_168, -89.377f, 92.6583f, 71.2349f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_168, 154.4846f);
								func_314(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_56.f_0 == 22)
							{
								MISC::CLEAR_AREA(-62.0307f, -1839.859f, 25.6787f, 5f, true, false, false, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_168, -62.0307f, -1839.859f, 25.6787f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_168, 319.6985f);
								func_314(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_56.f_0 == 23)
							{
								MISC::CLEAR_AREA(-234.7648f, -1150.311f, 21.9224f, 5f, true, false, false, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_168, -234.7648f, -1150.311f, 21.9224f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_168, 270.8741f);
								func_314(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_168, 5f);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Local_83.f_66[1 /*3*/], true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar2, Local_56.f_29.f_77[0]);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
								if ((iLocal_160 == joaat("monster") || iLocal_160 == joaat("marshall")) || iLocal_160 == joaat("rhino"))
								{
									VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar2, false);
								}
								else
								{
									VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar2, true);
								}
								if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
								{
									PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 0, -1);
									PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
								}
								AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, true);
								func_263(func_513(), &iVar2, 3, 1);
							}
							CAM::DO_SCREEN_FADE_IN(800);
							func_323(1, 1, 1, 0, 0, 0, 0);
							func_322(&(Local_83[3 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
							iLocal_175 = 0;
							iLocal_177 = -1;
							Local_56.f_3 = 15;
						}
						else
						{
							STREAMING::REMOVE_ANIM_DICT(sVar4);
							func_307();
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							if (CAM::DOES_CAM_EXIST(Local_56.f_110))
							{
								CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
								CAM::DESTROY_CAM(Local_56.f_110, false);
							}
							if (CAM::DOES_CAM_EXIST(Local_56.f_111))
							{
								CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
								CAM::DESTROY_CAM(Local_56.f_111, false);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
							{
								ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, false);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, false);
								iLocal_178 = 0;
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							PLAYER::FORCE_CLEANUP(8);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_70[1 /*3*/], true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_77[1]);
							CAM::DO_SCREEN_FADE_IN(800);
							SYSTEM::SETTIMERA(0);
							func_310(198.0043f, -999.7775f, -100f, 50f, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							Local_56.f_3 = 16;
						}
						if (Local_56.f_3 != 16)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						}
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(false);
						SYSTEM::SETTIMERA(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						iVar42 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
						iVar43 = 0;
						while (iVar43 < iVar42)
						{
							if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar43]) && !PED::IS_PED_INJURED(uVar0[iVar43])) && PED::IS_PED_GROUP_MEMBER(uVar0[iVar43], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar2) > iVar43)
									{
										PED::SET_PED_INTO_VEHICLE(uVar0[iVar43], iVar2, iVar43);
									}
								}
								else
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uVar0[iVar43], Local_56.f_29.f_70[1 /*3*/], false, false, true);
								}
							}
							iVar43++;
						}
						PLAYER::FORCE_CLEANUP(8);
						iLocal_174 = 0;
					}
				}
				break;
			
			case 15:
				bVar44 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (func_309())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_110) && CAM::IS_CAM_RENDERING(Local_56.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_110))
					{
						bVar44 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[3 /*15*/].f_14 * 1000f))
					{
						bVar44 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_56.f_111) && CAM::IS_CAM_RENDERING(Local_56.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_111))
					{
						bVar44 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[3 /*15*/].f_14 * 1000f))
					{
						bVar44 = false;
					}
				}
				else
				{
					bVar44 = false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_299(PLAYER::PLAYER_PED_ID(), Local_83.f_86[1 /*6*/], Local_83.f_66[1 /*3*/], ((Local_83[3 /*15*/].f_14 * 1000f) - 500f), Local_83.f_73[2 /*4*/], 3, &fVar3);
				}
				if (iLocal_177 < 1 && func_262(PLAYER::PLAYER_PED_ID(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_177 == 0)
					{
						func_310(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_177++;
				}
				if (bVar44)
				{
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 16;
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				break;
			
			case 16:
				bVar45 = true;
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83.f_61[3] * 1000f))
				{
					bVar45 = false;
				}
				if (bVar45)
				{
					Local_56.f_3 = 17;
				}
				break;
			
			case 17:
				if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
				{
					INTERIOR::UNPIN_INTERIOR(Local_56.f_112);
				}
				StringCopy(&Global_39347, "", 32);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				func_261(47, 1);
				func_259(47, 1);
				Global_77137.f_577 = 0;
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				SYSTEM::SETTIMERA(0);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(Local_56.f_110))
				{
					CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
					CAM::DESTROY_CAM(Local_56.f_110, false);
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_111))
				{
					CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
					CAM::DESTROY_CAM(Local_56.f_111, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, false);
					iLocal_178 = 0;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
					{
						ENTITY::SET_ENTITY_COORDS(iVar2, Local_83.f_73[2 /*4*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar2, Local_83.f_73[2 /*4*/].f_3);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
				}
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				func_323(0, 1, 1, 0, 0, 0, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (iLocal_155 > 0)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_155, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iLocal_168) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_168, false)) && iLocal_168 != func_51(24))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_168);
				}
				MISC::CLEAR_BIT(&(Local_131.f_9), 25);
				iLocal_172 = 0;
				Local_56.f_3 = 18;
				break;
			
			case 18:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					Local_56.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_77137.f_577)
		{
			func_261(47, 1);
			func_259(47, 1);
			Global_77137.f_577 = 0;
		}
		Local_56.f_3 = 0;
		if (iLocal_115 != -1)
		{
			func_71(&iLocal_115);
		}
	}
	if (Global_77137.f_577)
	{
		HUD::HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME();
		func_258();
		func_78(0);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		PAD::SET_INPUT_EXCLUSIVE(2, 202);
		PAD::DISABLE_CONTROL_ACTION(0, 37, true);
		PAD::DISABLE_CONTROL_ACTION(0, 157, true);
		PAD::DISABLE_CONTROL_ACTION(0, 158, true);
		PAD::DISABLE_CONTROL_ACTION(0, 159, true);
		PAD::DISABLE_CONTROL_ACTION(0, 160, true);
		PAD::DISABLE_CONTROL_ACTION(0, 161, true);
		PAD::DISABLE_CONTROL_ACTION(0, 162, true);
		PAD::DISABLE_CONTROL_ACTION(0, 163, true);
		PAD::DISABLE_CONTROL_ACTION(0, 164, true);
		PAD::DISABLE_CONTROL_ACTION(0, 165, true);
		PAD::DISABLE_CONTROL_ACTION(0, 14, true);
		PAD::DISABLE_CONTROL_ACTION(0, 15, true);
		PAD::DISABLE_CONTROL_ACTION(0, 53, true);
		PAD::DISABLE_CONTROL_ACTION(0, 54, true);
		PAD::DISABLE_CONTROL_ACTION(0, 140, true);
		PAD::DISABLE_CONTROL_ACTION(0, 141, true);
		PAD::DISABLE_CONTROL_ACTION(0, 142, true);
		PAD::DISABLE_CONTROL_ACTION(0, 143, true);
		PAD::DISABLE_CONTROL_ACTION(0, 143, true);
		PAD::DISABLE_CONTROL_ACTION(0, 47, true);
		PAD::DISABLE_CONTROL_ACTION(0, 38, true);
		PAD::DISABLE_CONTROL_ACTION(0, 22, true);
		PAD::DISABLE_CONTROL_ACTION(0, 102, true);
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
		PAD::DISABLE_CONTROL_ACTION(0, 92, true);
		PAD::DISABLE_CONTROL_ACTION(0, 99, true);
		PAD::DISABLE_CONTROL_ACTION(0, 115, true);
		PAD::DISABLE_CONTROL_ACTION(0, 46, true);
		PAD::DISABLE_CONTROL_ACTION(0, 25, true);
	}
	if (!bVar1 && Local_56.f_2 == 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_165))
			{
				if ((((func_247("WEB_VEH_INV") || func_247("WEB_VEH_FULL")) || func_247("CAR_GAR_05")) || func_247("CAR_GAR_06")) || func_247("CAR_GAR_EXIT"))
				{
					HUD::CLEAR_HELP(true);
				}
				StringCopy(&cLocal_165, "", 16);
			}
		}
	}
}

void func_258()//Position - 0x1DA87
{
	Global_23011.f_6 = 1;
}

void func_259(int iParam0, bool bParam1)//Position - 0x1DA95
{
	struct<2> Var0;
	
	Var0 = { func_260(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_38401[Var0.f_1]), Var0.f_0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_38401[Var0.f_1]), Var0.f_0);
	}
}

struct<2> func_260(int iParam0)//Position - 0x1DAD8
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

void func_261(int iParam0, bool bParam1)//Position - 0x1DB05
{
	struct<2> Var0;
	
	Var0 = { func_260(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_38392[Var0.f_1]), Var0.f_0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_38392[Var0.f_1]), Var0.f_0);
	}
}

float func_262(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x1DB48
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
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam2);
}

void func_263(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1DB82
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
		if (iParam2 > Global_113386.f_2363.f_539.f_2407)
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
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, false))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_113386.f_2363.f_539.f_4317[iParam0] = 10;
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && func_266(*iParam1, 0, &uVar0))
		{
			func_34(iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_113386.f_20118[iParam0 /*43*/].f_40 = 1;
				Global_113386.f_20118[iParam0 /*43*/] = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_113386.f_20118[iParam0 /*43*/].f_3 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_113386.f_20118[iParam0 /*43*/].f_4 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_113386.f_20118[iParam0 /*43*/].f_5 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_113386.f_20118[iParam0 /*43*/].f_6 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_113386.f_20118[iParam0 /*43*/].f_10 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_113386.f_20118[iParam0 /*43*/].f_16 = !Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_113386.f_20118[iParam0 /*43*/].f_19 = { Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_113386.f_20118[iParam0 /*43*/].f_23 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_113386.f_20118[iParam0 /*43*/].f_7 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_113386.f_20118[iParam0 /*43*/].f_8 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_113386.f_20118[iParam0 /*43*/].f_9 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_113386.f_20118[iParam0 /*43*/].f_11 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_113386.f_20118[iParam0 /*43*/].f_12 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_113386.f_20118[iParam0 /*43*/].f_13 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_113386.f_20118[iParam0 /*43*/].f_14 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_113386.f_20118[iParam0 /*43*/].f_15 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_113386.f_20118[iParam0 /*43*/].f_18 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_113386.f_20118[iParam0 /*43*/].f_17 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_113386.f_20118[iParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_32 = VEHICLE::_0xEEBFC7A7EFDC35B4(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_113386.f_20118[iParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_113386.f_20118[iParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_113386.f_20118[iParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_31 = func_265(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
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
				func_264(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_113386.f_20118[iParam0 /*43*/].f_1));
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
				func_264(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113386.f_20118[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_264(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x1E796
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_146(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
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

float func_265(int iParam0)//Position - 0x1E809
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

int func_266(int iParam0, bool bParam1, var uParam2)//Position - 0x1E8B9
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
	if ((!func_294(iVar0, bParam1, uParam2) && !func_293(PLAYER::PLAYER_ID())) && !func_275(iParam0))
	{
		return 0;
	}
	if (func_293(PLAYER::PLAYER_ID()))
	{
		if (func_274(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_273(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)))
	{
		bVar1 = true;
	}
	if (((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_271(iParam0)) && !bVar1) && !(func_270(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_267(PLAYER::PLAYER_ID())))
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
		if ((func_64(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_267(int iParam0)//Position - 0x1EA27
{
	if (iParam0 != func_155())
	{
		if (func_269(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_268(Global_2689235[iParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_268(int iParam0)//Position - 0x1EA6E
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
	}
	return -1;
}

int func_269(int iParam0, bool bParam1, bool bParam2)//Position - 0x1EEF5
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

int func_270(int iParam0)//Position - 0x1EF55
{
	if (((iParam0 == joaat("mule4") || iParam0 == joaat("pounder2")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	return 0;
}

int func_271(int iParam0)//Position - 0x1EF97
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
			if (func_272(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case joaat("minitank"):
		case joaat("burrito2"):
			return 1;
	}
	return 0;
}

int func_272(int iParam0)//Position - 0x1F03A
{
	if (iParam0 != func_155())
	{
		if (func_269(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_268(Global_2689235[iParam0 /*453*/].f_318.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_273(int iParam0)//Position - 0x1F081
{
	if (iParam0 != func_155())
	{
		if (func_269(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_268(Global_2689235[iParam0 /*453*/].f_318.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_274(int iParam0)//Position - 0x1F0C7
{
	return 1;
}

int func_275(int iParam0)//Position - 0x1F0D0
{
	if (func_292(PLAYER::PLAYER_ID()) || func_291(PLAYER::PLAYER_ID()))
	{
		if (func_276(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_276(int iParam0)//Position - 0x1F0FF
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (func_279(iParam0, 0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
		{
			if (!func_277(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_277(int iParam0)//Position - 0x1F16F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if ((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_271(iParam0)) || func_278(iVar0))
		{
			return 1;
		}
		switch (iVar0)
		{
			case joaat("slamtruck"):
			case joaat("patriot2"):
			case joaat("caracara"):
			case joaat("caracara2"):
			case joaat("mule4"):
			case joaat("pounder2"):
			case joaat("speedo4"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_278(int iParam0)//Position - 0x1F1F2
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

int func_279(int iParam0, bool bParam1)//Position - 0x1F242
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_281(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
			{
				if (Global_2815059.f_303 == iParam0)
				{
					return 1;
				}
				else if (func_280(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_280(int iParam0)//Position - 0x1F29D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2703735.f_206[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_281(int iParam0, int iParam1)//Position - 0x1F2D6
{
	if (iParam1 == 0)
	{
		if (func_290(iParam0, 0))
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
			return func_289();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14731)
			{
				return func_288();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14732)
			{
				return func_288();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14730)
			{
				return func_288();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14733)
			{
				return func_288();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14735)
			{
				return func_288();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_287();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_19186)
			{
				return func_286();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_19188)
			{
				return func_286();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_19192)
			{
				return func_286();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_19189)
			{
				return func_286();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_19196)
			{
				return func_286();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_19194)
			{
				return func_286();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_19199)
			{
				return func_286();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_21144)
			{
				return func_285();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_21145)
			{
				return func_285();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_284();
			break;
		
		case joaat("glendale"):
			if (func_284() || func_283())
			{
				return 1;
			}
			break;
		
		case joaat("impaler"):
			return func_284();
			break;
		
		case joaat("issi3"):
			return func_284();
			break;
		
		case joaat("gargoyle"):
			return func_284();
			break;
		
		case joaat("dominator"):
			return func_284();
			break;
		
		case joaat("dominator2"):
			return func_284();
			break;
		
		case joaat("imperator"):
			return func_284();
			break;
		
		case joaat("imperator2"):
			return func_284();
			break;
		
		case joaat("imperator3"):
			return func_284();
			break;
		
		case joaat("deathbike"):
			return func_284();
			break;
		
		case joaat("deathbike2"):
			return func_284();
			break;
		
		case joaat("deathbike3"):
			return func_284();
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
			return func_284();
			break;
		
		case joaat("youga2"):
			if (Global_262145.f_29320)
			{
				return func_283();
			}
			break;
		
		case joaat("gauntlet3"):
			if (Global_262145.f_29670)
			{
				return func_283();
			}
			break;
		
		case joaat("manana"):
			if (Global_262145.f_29319)
			{
				return func_283();
			}
			break;
		
		case joaat("peyote"):
			if (Global_262145.f_29669)
			{
				return func_283();
			}
			break;
		
		case joaat("yosemite"):
			if (Global_262145.f_29668)
			{
				return func_283();
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("TENF"):
			if (Global_262145.f_33045)
			{
				return func_282();
			}
			break;
		
		case joaat("weevil"):
			if (Global_262145.f_33044)
			{
				return func_282();
			}
			break;
		
		case joaat("brioso2"):
			if (Global_262145.f_33037)
			{
				return func_282();
			}
			break;
		
		case joaat("sentinel3"):
			if (Global_262145.f_33046)
			{
				return func_282();
			}
			break;
	}
	return 0;
}

bool func_282()//Position - 0x1F755
{
	return DLC::IS_DLC_PRESENT(1199590110);
}

bool func_283()//Position - 0x1F766
{
	return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}

bool func_284()//Position - 0x1F777
{
	return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}

bool func_285()//Position - 0x1F788
{
	return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}

bool func_286()//Position - 0x1F799
{
	return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}

bool func_287()//Position - 0x1F7AA
{
	return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}

bool func_288()//Position - 0x1F7BB
{
	return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}

bool func_289()//Position - 0x1F7CC
{
	return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_290(int iParam0, int iParam1)//Position - 0x1F7DD
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
		
		case joaat("TENF2"):
		case joaat("WEEVIL2"):
		case joaat("BRIOSO3"):
		case joaat("SENTINEL4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
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
			if (Global_262145.f_19186)
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
			if (Global_262145.f_19188)
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
			if (Global_262145.f_19192)
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
			if (Global_262145.f_19189)
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
			if (Global_262145.f_19196)
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
			if (Global_262145.f_19194)
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
			if (Global_262145.f_19199)
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
			if (Global_262145.f_21144)
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
			if (Global_262145.f_21145)
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

int func_291(int iParam0)//Position - 0x1FBBC
{
	if (iParam0 != func_155())
	{
		if (func_269(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_155())
			{
				return func_268(Global_2689235[iParam0 /*453*/].f_318.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_292(int iParam0)//Position - 0x1FC1B
{
	if (iParam0 != func_155())
	{
		if (func_269(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_155())
			{
				return func_268(Global_2689235[iParam0 /*453*/].f_318.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_293(int iParam0)//Position - 0x1FC7B
{
	if (iParam0 != func_155())
	{
		if (func_269(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_268(Global_2689235[iParam0 /*453*/].f_318.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_294(int iParam0, bool bParam1, var uParam2)//Position - 0x1FCC2
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
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_273(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)))
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
		if (func_295(iParam0))
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

int func_295(int iParam0)//Position - 0x20110
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

int func_296()//Position - 0x20139
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (iVar0 == Global_77137.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_77137.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_77137.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_77137.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_77137.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_77137.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_77137.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_77137.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_77137.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_77137.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_77137.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_77137.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_297()//Position - 0x2026A
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

void func_298(int iParam0)//Position - 0x2027F
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && iParam0 == Global_78042)
	{
		Global_113386.f_32749.f_5588 = 0;
		Global_78042 = 0;
	}
}

int func_299(int iParam0, struct<4> Param1, var uParam2, var uParam3, struct<3> Param4, float fParam5, struct<4> Param6, int iParam7, float fParam8)//Position - 0x202B8
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { Param1 };
	Var1 = { Param1.f_3 };
	Var2 = { Param4 };
	Var3 = { Param1.f_3 };
	if (iLocal_174 == 0)
	{
		iVar4 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		iLocal_178 = iVar4;
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_178, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_178, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_178, 5f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_178, true, true, false);
		if (PED::IS_PED_ON_ANY_BIKE(iParam0))
		{
			PED::GIVE_PED_HELMET(iParam0, false, 0, -1);
			PED::SET_PED_HELMET(iParam0, true);
		}
		Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_178, true) };
		fLocal_179 = (Var5.f_2 - Var0.f_2);
		ENTITY::SET_ENTITY_COORDS(iLocal_178, Var0 + Vector(-10f, 0f, 0f), true, false, false, true);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_178, false))
		{
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_178, 3);
		}
		iLocal_180 = MISC::GET_GAME_TIMER();
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_178) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_178, false))
		{
			fVar6 = SYSTEM::TO_FLOAT(iLocal_180);
			fVar7 = (fVar6 + fParam5);
			fVar8 = func_306(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()), fVar6, fVar7);
			fVar8 = (fVar8 - fVar6);
			fVar8 = (fVar8 / fParam5);
			if (iParam7 == 1)
			{
				fVar8 = func_305(fVar8);
			}
			else if (iParam7 == 2)
			{
				fVar8 = func_304(fVar8);
			}
			else if (iParam7 == 3)
			{
				fVar8 = func_302(fVar8);
			}
			fVar8 = (fVar8 * fParam5);
			fVar8 = (fVar8 + fVar6);
			PAD::DISABLE_CONTROL_ACTION(0, 72, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_178, func_300(Var0 + Vector(fLocal_179, 0f, 0f), Var2 + Vector(fLocal_179, 0f, 0f), fVar6, fVar7, fVar8), false, false, true);
			if (iLocal_175 && !PED::IS_PED_ON_ANY_BIKE(iParam0))
			{
				ENTITY::SET_ENTITY_ROTATION(iLocal_178, func_300((0f - Var1.f_0), (0f - Var1.f_1), (Var1.f_2 + 180f), (0f - Var3.f_0), (0f - Var3.f_1), (Var3.f_2 + 180f), fVar6, fVar7, fVar8), 2, true);
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
				ENTITY::SET_ENTITY_ROTATION(iLocal_178, func_300(Var1, Var3, fVar6, fVar7, fVar8), 2, true);
			}
			ENTITY::SET_ENTITY_COLLISION(iLocal_178, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, true);
		}
		else
		{
			iLocal_174 = 2;
			return 0;
		}
		if (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) > (SYSTEM::TO_FLOAT(iLocal_180) + fParam5) && SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) > ((SYSTEM::TO_FLOAT(iLocal_180) + fParam5) + 2600f))
		{
			iLocal_174 = 2;
			return 0;
		}
	}
	if (iLocal_174 == 2)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 236, false);
		PED::SET_PED_RESET_FLAG(iParam0, 309, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
		{
			if (!func_21(Param6, 0f, 0f, 0f, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_178, Param6, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_178, Param6.f_3);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_178, 5f);
			}
			ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, false);
			iLocal_178 = 0;
		}
		if (PED::IS_PED_ON_ANY_BIKE(iParam0))
		{
			PED::REMOVE_PED_HELMET(iParam0, false);
		}
		return 1;
	}
	return 0;
}

Vector3 func_300(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4)//Position - 0x205B0
{
	return func_301(Param0.f_0, Param1.f_0, fParam2, fParam3, fParam4), func_301(Param0.f_1, Param1.f_1, fParam2, fParam3, fParam4), func_301(Param0.f_2, Param1.f_2, fParam2, fParam3, fParam4);
}

float func_301(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x205EA
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_302(float fParam0)//Position - 0x20606
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = SYSTEM::SIN(func_303(((fParam0 * 3.141593f) * 0.5f)));
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

float func_303(float fParam0)//Position - 0x20642
{
	return (fParam0 * 57.29578f);
}

float func_304(float fParam0)//Position - 0x20652
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - SYSTEM::COS(func_303(((fParam0 * 3.141593f) * 0.5f))));
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

float func_305(float fParam0)//Position - 0x20690
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - SYSTEM::COS(func_303((fParam0 * 3.141593f)))));
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

float func_306(float fParam0, float fParam1, float fParam2)//Position - 0x206CE
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

void func_307()//Position - 0x206F5
{
	Global_77137.f_553 = 1;
	Global_77137.f_554 = 0;
}

void func_308(var uParam0)//Position - 0x2070D
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
		iLocal_49[iVar2] = Global_113386.f_32749.f_69[iVar1 /*78*/].f_66;
		if (iLocal_49[iVar2] != 0)
		{
			if (!BitTest(uLocal_48[iVar2], 2))
			{
				STREAMING::REQUEST_MODEL(iLocal_49[iVar2]);
				MISC::SET_BIT(&(uLocal_48[iVar2]), 2);
				func_517(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_309()//Position - 0x20798
{
	return !Global_77137.f_553;
}

void func_310(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x207A8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_63(&(Global_77137.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77137.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_311(iVar0);
			}
		}
		iVar0++;
	}
}

void func_311(int iParam0)//Position - 0x207F8
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_63(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&(Global_77137.f_139[iParam0]));
			}
		}
		Global_77137[iParam0] = 1;
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_69(iParam0, 0)) && Global_78046.f_66 == 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] != 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] > 3) && (!func_312(0, Global_77137.f_555[0 /*21*/].f_12) || !func_312(1, Global_77137.f_555[0 /*21*/].f_12)))
			{
				func_119(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), &Global_78046);
				Global_78124 = Global_113386.f_32749.f_5591;
			}
			func_519(iParam0, 0);
		}
	}
}

int func_312(int iParam0, int iParam1)//Position - 0x20967
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
	if (iParam0 < 0 || iParam0 >= func_313(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_39(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_313(var uParam0)//Position - 0x209D9
{
	return *uParam0;
}

void func_314(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x209E4
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_315(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_32(iParam0, &Var0);
		if (func_21(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_118(iParam3, &Var0, Param1, fParam2, func_48(iParam0));
		func_30(iParam3, iParam0, 0);
	}
}

void func_315(int iParam0)//Position - 0x20B0D
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_120(iParam0);
	func_519(iParam0, 0);
}

int func_316(var uParam0, int iParam1)//Position - 0x20B34
{
	int iVar0;
	
	if (!func_38(uParam0->f_66))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_78043))
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
	if (!func_312(0, iParam1))
	{
		Global_113386.f_32749.f_5592[iVar0] = 0;
	}
	else if (!func_312(1, iParam1))
	{
		Global_113386.f_32749.f_5592[iVar0] = 1;
	}
	func_317(iParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uParam0->f_66));
	func_119(uParam0, &(Global_113386.f_32749.f_5038[iVar0 /*157*/][Global_113386.f_32749.f_5592[iVar0] /*78*/]));
	Global_113386.f_32749.f_5592[iVar0]++;
	if (Global_113386.f_32749.f_5592[iVar0] >= func_313(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		Global_113386.f_32749.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_99845[iVar0 /*98*/] == uParam0->f_66 && MISC::ARE_STRINGS_EQUAL(&(Global_99845[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_99845[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_317(int iParam0, char* sParam1)//Position - 0x20C8C
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_113386.f_32749.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_318("IMPOUND_HELPM", sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_318("IMPOUND_HELPF", sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_318("IMPOUND_HELPT", sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_113386.f_32749.f_5596[iParam0] = 1;
	}
}

void func_318(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x20D3B
{
	func_319(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_319(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x20D5B
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
		func_320();
	}
}

void func_320()//Position - 0x20F2E
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

int func_321(var uParam0, int iParam1)//Position - 0x21045
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_63(&(Global_77137.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_119(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

int func_322(var uParam0, var uParam1, var uParam2)//Position - 0x21090
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

void func_323(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x21197
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_328(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_80())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_327(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_328(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_327(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_325(PLAYER::PLAYER_ID())) && !func_95(PLAYER::PLAYER_ID(), 0)) && !func_324()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_325(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

bool func_324()//Position - 0x212DA
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

int func_325(int iParam0)//Position - 0x212F4
{
	if (func_95(iParam0, 0))
	{
		return 1;
	}
	if (func_326())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_326()//Position - 0x21333
{
	return BitTest(Global_2621446, 3);
}

int func_327(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x21341
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_328(int iParam0)//Position - 0x21374
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 13);
	}
}

int func_329(int iParam0)//Position - 0x21397
{
	func_63(&(Global_77137.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_77137.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_330(26))
			{
				return 26;
			}
			if (!func_330(29))
			{
				return 29;
			}
			if (!func_330(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_77137.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_330(27))
			{
				return 27;
			}
			if (!func_330(30))
			{
				return 30;
			}
			if (!func_330(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_77137.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_330(28))
			{
				return 28;
			}
			if (!func_330(31))
			{
				return 31;
			}
			if (!func_330(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_330(int iParam0)//Position - 0x21499
{
	return func_69(iParam0, 0);
}

void func_331(int iParam0, bool bParam1)//Position - 0x214A8
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_333(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_259(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (func_332(iParam0))
			{
				func_259(iParam0, 0);
			}
		}
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_332(int iParam0)//Position - 0x21533
{
	struct<2> Var0;
	
	Var0 = { func_260(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_38401[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

var func_333(int iParam0, int iParam1)//Position - 0x21564
{
	struct<5> Var0;
	
	Var0 = { func_334(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_334(int iParam0)//Position - 0x21589
{
	struct<5> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
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
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
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
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
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
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
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
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var1 = { func_335(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_335(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_335(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_335(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_335(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_335(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_335(7, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312193[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_335(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_335(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_335(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_335(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_335(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_335(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_335(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_335(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_335(43, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
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
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
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
			Var1 = { func_335(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var1 = { func_335(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var1 = { func_335(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var1 = { func_335(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var1 = { func_335(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var1 = { func_335(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var1 = { func_335(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var1 = { func_335(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var1 = { func_335(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var1 = { func_335(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var1 = { func_335(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var1 = { func_335(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var1 = { func_335(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var1 = { func_335(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var1 = { func_335(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var1 = { func_335(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var1 = { func_335(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var1 = { func_335(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var1 = { func_335(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var1 = { func_335(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var1 = { func_335(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var1 = { func_335(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var1 = { func_335(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var1 = { func_335(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var1 = { func_335(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var1 = { func_335(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var1 = { func_335(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var1 = { func_335(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var1 = { func_335(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var1 = { func_335(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var1 = { func_335(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var1 = { func_335(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var1 = { func_335(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var1 = { func_335(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var1 = { func_335(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var1 = { func_335(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var1 = { func_335(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var1 = { func_335(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var1 = { func_335(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var1 = { func_335(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var1 = { func_335(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var1 = { func_335(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var1 = { func_335(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var1 = { func_335(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var1 = { func_335(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var1 = { func_335(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var1 = { func_335(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var1 = { func_335(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var1 = { func_335(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var1 = { func_335(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var1 = { func_335(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var1 = { func_335(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var1 = { func_335(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var1 = { func_335(112, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
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
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
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
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
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
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
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
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
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
			Var0 = { 1103.562f, -3000f, -40f };
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
			return Var0;
	}
}

struct<6> func_335(int iParam0, bool bParam1)//Position - 0x23E01
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
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
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
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
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
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
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
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
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
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
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
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
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
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
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
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
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
				Var0 = { -1384.538f, -475.8829f, 48.1f };
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
				Var0 = { -1378.994f, -477.2481f, 56.1f };
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

void func_336(int iParam0, bool bParam1)//Position - 0x24BAF
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_333(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !INTERIOR::IS_INTERIOR_CAPPED(iVar1))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_261(iParam0, 1);
				return;
			}
			INTERIOR::CAP_INTERIOR(iVar1, true);
		}
		else if (!bParam1 && INTERIOR::IS_INTERIOR_CAPPED(iVar1))
		{
			if (func_337(iParam0))
			{
				func_261(iParam0, 0);
			}
			INTERIOR::CAP_INTERIOR(iVar1, false);
		}
		else if (!bParam1)
		{
			if (func_337(iParam0))
			{
				func_261(iParam0, 0);
			}
		}
	}
}

int func_337(int iParam0)//Position - 0x24C55
{
	struct<2> Var0;
	
	Var0 = { func_260(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_38392[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

int func_338()//Position - 0x24C86
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_329(Local_56.f_0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_339(float fParam0, float fParam1, float fParam2)//Position - 0x24CAF
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

int func_340(int iParam0)//Position - 0x24D24
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

int func_341(int iParam0, var uParam1)//Position - 0x24D92
{
	uParam1->f_73[1 /*4*/] = { 194.674f, -1026.984f, -100f };
	uParam1->f_73[1 /*4*/].f_3 = 285f;
	*(uParam1[2 /*15*/]) = { 198.9908f, -1025.956f, -98.8981f };
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
			*(uParam1[0 /*15*/]) = { -66.6121f, -1842.122f, 26.6941f };
			(uParam1[0 /*15*/])->f_3 = { 3.4131f, -0.0009f, 17.9566f };
			(uParam1[0 /*15*/])->f_6 = { -66.5137f, -1841.616f, 26.7211f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.1669f, -0.0009f, 18.0384f };
			(uParam1[0 /*15*/])->f_12 = 25.1856f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -72.5431f, -1820.447f, 25.9424f };
			uParam1->f_73[0 /*4*/].f_3 = 140f;
			*(uParam1[1 /*15*/]) = { -72.7256f, -1823.283f, 41.0951f };
			(uParam1[1 /*15*/])->f_3 = { -81.9335f, 0f, -58.1415f };
			(uParam1[1 /*15*/])->f_6 = { -72.9027f, -1822.998f, 41.0951f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.6657f, 0f, -29.6554f };
			(uParam1[1 /*15*/])->f_12 = 29.9864f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -76.7939f, -1816.77f, 26.6473f };
			uParam1->f_86[0 /*6*/] = { -69.2183f, -1823.258f, 25.9421f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, 49.4214f };
			*(uParam1[3 /*15*/]) = { -70.9492f, -1820.936f, 45.3628f };
			(uParam1[3 /*15*/])->f_3 = { -85.5171f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_6 = { -70.9836f, -1821.023f, 45.3628f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -89.4995f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_12 = 28.4803f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 4f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -75.3386f, -1818.249f, 26.0241f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, -132.7699f };
			uParam1->f_66[1 /*3*/] = { -63.988f, -1829.39f, 26.423f };
			uParam1->f_73[2 /*4*/] = { -49.738f, -1830.147f, 25.5591f };
			uParam1->f_73[2 /*4*/].f_3 = 317.3589f;
			return 1;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = { -237.074f, -1170.391f, 23.479f };
			(uParam1[0 /*15*/])->f_3 = { 7.619f, 0f, -69.7398f };
			(uParam1[0 /*15*/])->f_6 = { -237.2166f, -1169.672f, 23.4931f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 7.619f, 0f, -71.3391f };
			(uParam1[0 /*15*/])->f_12 = 40.0015f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -218.0289f, -1162.392f, 22.0242f };
			uParam1->f_73[0 /*4*/].f_3 = 15f;
			*(uParam1[1 /*15*/]) = { -219.5507f, -1159.951f, 36.8399f };
			(uParam1[1 /*15*/])->f_3 = { -81.7188f, 0f, 170.4291f };
			(uParam1[1 /*15*/])->f_6 = { -219.1442f, -1160.019f, 36.8399f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.5726f, 0f, -168.992f };
			(uParam1[1 /*15*/])->f_12 = 30.0319f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 4f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -211.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/] = { -221.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[3 /*15*/]) = { -218.5983f, -1159.061f, 31.4452f };
			(uParam1[3 /*15*/])->f_3 = { -62.4689f, 0f, -142.2907f };
			(uParam1[3 /*15*/])->f_6 = { -218.6533f, -1159.067f, 31.4471f };
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

int func_342()//Position - 0x25583
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

void func_343()//Position - 0x2559F
{
	int iVar0;
	struct<5> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<2> Var6;
	float fVar7;
	int iVar8;
	struct<3> Var9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if ((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_129))
	{
		return;
	}
	if (!Global_75485)
	{
		if (Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[iLocal_143] != -15)
		{
			if (!Global_77137[Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_313[iLocal_143]])
			{
				if (func_397(func_52(), Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[iLocal_143]))
				{
					iVar0 = Global_113386.f_32749.f_1982[iLocal_129 /*939*/][iLocal_143];
					func_395(iVar0, iLocal_143, iLocal_129);
					func_63(&Var1, Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_313[iLocal_143]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_519(Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_313[iLocal_143], 1);
					}
					Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[iLocal_143] = -15;
				}
			}
		}
		iLocal_143++;
		if (iLocal_143 >= 312)
		{
			iLocal_143 = 0;
		}
	}
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Local_56.f_7 || Local_56.f_2 == 99)
	{
		if (Local_56.f_5 != -1)
		{
			func_71(&(Local_56.f_5));
		}
		if (Local_56.f_2 > 0)
		{
			HUD::CLEAR_HELP(true);
		}
		Local_56.f_7 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		Local_56.f_5 = -1;
		Local_56.f_2 = 0;
		Local_56.f_4 = 0;
		if (bLocal_142)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(Local_56.f_110))
			{
				CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
				CAM::DESTROY_CAM(Local_56.f_110, false);
			}
			if (CAM::DOES_CAM_EXIST(Local_56.f_111))
			{
				CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
				CAM::DESTROY_CAM(Local_56.f_111, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			}
			iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
				}
			}
			iVar3 = 5000;
			iVar4 = MISC::GET_GAME_TIMER();
			while (!CAM::IS_GAMEPLAY_CAM_RENDERING() && (MISC::GET_GAME_TIMER() - iVar4) < iVar3)
			{
				SYSTEM::WAIT(0);
			}
			if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
			{
				INTERIOR::UNPIN_INTERIOR(Local_56.f_112);
			}
			StringCopy(&Global_39347, "", 32);
			if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
			{
				func_336(47, 1);
				func_331(47, 1);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			STREAMING::CLEAR_FOCUS();
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			func_323(0, 1, 1, 0, 0, 0, 0);
			bLocal_142 = false;
			Global_32216 = 0;
		}
	}
	bVar5 = false;
	if ((((((((((((!bLocal_142 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, false, true, 0)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !Local_56.f_29.f_69)) || (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))) || (!bLocal_142 && func_69(Local_56.f_0, 5))) || (!bLocal_142 && PAD::IS_CONTROL_JUST_PRESSED(2, 199))) || (!bLocal_142 && HUD::IS_PAUSE_MENU_ACTIVE())) || !func_393(0)) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID())) || Global_32110) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())))
	{
		if (Local_56.f_2 > 0 && Local_56.f_2 != 90)
		{
			iLocal_157 = 1;
			Local_56.f_2 = 99;
		}
		bVar5 = true;
	}
	fVar7 = 20f;
	iVar8 = 3;
	switch (Local_56.f_2)
	{
		case 0:
			if ((((Local_56.f_0 != -1 && func_69(Local_56.f_0, 0)) && !func_69(Local_56.f_0, 5)) && !bLocal_158) && !bVar5)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, false, true, 0) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					Var6 = { Local_56.f_29.f_63 };
					StringConCat(&Var6, "_01", 16);
					func_248(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
					Local_56.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_243(Local_56.f_5, 1))
			{
				if (func_392(iLocal_129) < Local_56.f_29.f_67)
				{
					Local_56.f_4 = MISC::GET_GAME_TIMER();
					func_71(&(Local_56.f_5));
					iLocal_126 = 0;
					Local_56.f_2 = 90;
				}
				else
				{
					iLocal_126 = 0;
					Local_56.f_4 = MISC::GET_GAME_TIMER();
					func_71(&(Local_56.f_5));
					Local_56.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_02", 16);
				func_248(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
				Local_56.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_243(Local_56.f_5, 1))
			{
				if (func_392(iLocal_129) < Local_56.f_29.f_67)
				{
					Local_56.f_4 = MISC::GET_GAME_TIMER();
					Local_56.f_2 = 90;
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", true);
					bLocal_142 = false;
					if ((Local_56.f_0 == 15 || Local_56.f_0 == 17) || Local_56.f_0 == 16)
					{
						Local_57.f_4 = 114;
						bLocal_142 = true;
					}
					else if (Local_56.f_0 == 18 || Local_56.f_0 == 19)
					{
						Local_57.f_4 = 116;
						bLocal_142 = true;
					}
					else if (Local_56.f_0 == 12 || Local_56.f_0 == 13)
					{
						Local_57.f_4 = 115;
						bLocal_142 = true;
					}
					else if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
					{
						Local_57.f_4 = 117;
						bLocal_142 = true;
					}
					Local_57.f_0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
					Local_57.f_1 = 0;
					Local_57.f_3 = 0;
					Local_57.f_2 = 0;
					iLocal_144 = 1;
					Global_32216 = 1;
					if (bLocal_142)
					{
						if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
						{
							func_336(47, 0);
							func_331(47, 0);
							Local_56.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
							{
								if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_112))
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_56.f_112);
								}
								StringCopy(&Global_39347, "v_garagem_sp", 32);
							}
						}
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
						STREAMING::NEW_LOAD_SCENE_STOP();
						Local_56.f_4 = MISC::GET_GAME_TIMER();
						Local_56.f_2 = 4;
					}
					else
					{
						Local_56.f_2 = 8;
					}
					func_71(&(Local_56.f_5));
				}
			}
			break;
		
		case 4:
			bVar10 = true;
			if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
			{
				Local_56.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!INTERIOR::IS_VALID_INTERIOR(Local_56.f_112) || INTERIOR::IS_INTERIOR_CAPPED(Local_56.f_112)) || INTERIOR::IS_INTERIOR_DISABLED(Local_56.f_112))
				{
					func_336(47, 0);
					func_331(47, 0);
					bVar10 = false;
				}
			}
			if (bVar10)
			{
				if (Local_56.f_0 == 12)
				{
					fVar7 = 95f;
					iVar8 = 2;
				}
				else if (Local_56.f_0 == 13)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				else if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				Var9 = { SYSTEM::COS((Local_56.f_29.f_14.f_3.f_2 + 90f)), SYSTEM::SIN((Local_56.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
				{
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(200.4651f, -1020.631f, -100f, 50f, 0) || (MISC::GET_GAME_TIMER() - Local_56.f_4) > 3500)
					{
						Local_56.f_4 = MISC::GET_GAME_TIMER();
						Local_56.f_2 = 5;
					}
				}
				else if (STREAMING::NEW_LOAD_SCENE_START(Local_56.f_29.f_14, Var9, fVar7, iVar8) || (MISC::GET_GAME_TIMER() - Local_56.f_4) > 3500)
				{
					Local_56.f_4 = MISC::GET_GAME_TIMER();
					Local_56.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && (!INTERIOR::IS_VALID_INTERIOR(Local_56.f_112) || INTERIOR::IS_INTERIOR_READY(Local_56.f_112))) || (MISC::GET_GAME_TIMER() - Local_56.f_4) > 10000)
			{
				Local_56.f_4 = MISC::GET_GAME_TIMER();
				Local_56.f_2 = 6;
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - Local_56.f_4) > 1000)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_168) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_168, true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_168);
				}
				iLocal_168 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_168) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_168))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_168))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_168)))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_168, false, false);
					}
				}
				else
				{
					iLocal_168 = 0;
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
				func_323(1, 1, 1, 0, 0, 0, 0);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				Var9 = { SYSTEM::COS((Local_56.f_29.f_14.f_3.f_2 + 90f)), SYSTEM::SIN((Local_56.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_56.f_29.f_69)
				{
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_56.f_29.f_14, Var9);
				}
				if (!CAM::DOES_CAM_EXIST(Local_56.f_110))
				{
					Local_56.f_110 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_110))
				{
					if (Local_56.f_29.f_69)
					{
						INTERIOR::_0xAF348AFCB575A441("GtaMloRoom001");
					}
					func_323(1, 1, 1, 0, 0, 0, 0);
					func_322(&(Local_56.f_29.f_14), &(Local_56.f_110), &(Local_56.f_111));
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				STREAMING::NEW_LOAD_SCENE_STOP();
				Local_56.f_2 = 7;
				Local_56.f_4 = MISC::GET_GAME_TIMER();
				func_71(&(Local_56.f_5));
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 7000 && !func_390(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_05", 16);
				func_246(&Var6, -1);
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (Local_56.f_0 == 12 || Local_56.f_0 == 13)
					{
						fVar7 = 85f;
						iVar8 = 2;
					}
					Var9 = { SYSTEM::COS((Local_56.f_29.f_29.f_2 + 90f)), SYSTEM::SIN((Local_56.f_29.f_29.f_2 + 90f)), 0f };
					STREAMING::NEW_LOAD_SCENE_START(Local_56.f_29.f_29, Var9, fVar7, iVar8);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_56.f_110))
				{
					if (Local_56.f_29.f_69)
					{
						INTERIOR::_0xAF348AFCB575A441("GtaMloRoom001");
					}
					func_323(1, 1, 1, 0, 0, 0, 0);
					func_322(&(Local_56.f_29.f_29), &(Local_56.f_110), &(Local_56.f_111));
				}
				STREAMING::CLEAR_FOCUS();
				HUD::CLEAR_HELP(true);
				Local_56.f_4 = MISC::GET_GAME_TIMER();
				Local_56.f_2 = 8;
			}
			break;
		
		case 8:
			if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 7000 && !func_390(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_06", 16);
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_246(&Var6, 7000);
				}
			}
			else
			{
				HUD::CLEAR_HELP(true);
				Local_56.f_4 = MISC::GET_GAME_TIMER();
				Local_56.f_2 = 9;
			}
			break;
		
		case 9:
			if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 3500 && !func_390(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_03", 16);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_57.f_0))
				{
					if (Local_57.f_1)
					{
						if (!Local_57.f_3)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
							Local_57.f_3 = 1;
						}
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_57.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_57.f_0, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_93(&Var6);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						Local_57.f_1 = 1;
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 4000 && !func_390(1000))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_57.f_0))
				{
					if (Local_57.f_2)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_57.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_57.f_0, "SHARD_ANIM_OUT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						Local_57.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_142)
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(Local_56.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
						CAM::DESTROY_CAM(Local_56.f_110, false);
					}
					if (CAM::DOES_CAM_EXIST(Local_56.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
						CAM::DESTROY_CAM(Local_56.f_111, false);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					iVar11 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
						if ((ENTITY::DOES_ENTITY_EXIST(iVar11) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar11, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar11, false))
						{
							ENTITY::SET_ENTITY_COORDS(iVar11, Local_56.f_29.f_44, true, true, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar11, Local_56.f_29.f_47);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar11, 5f);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_44, true, true, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_47);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_168) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false))
					{
						iVar12 = func_51(24);
						if (func_321(&Local_141, 24))
						{
							func_316(&Local_141, func_513());
							if (ENTITY::DOES_ENTITY_EXIST(iVar12))
							{
								VEHICLE::DELETE_VEHICLE(&iVar12);
							}
						}
						if (Local_56.f_0 == 21)
						{
							MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, true, false, false, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_168, -89.377f, 92.6583f, 71.2349f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_168, 154.4846f);
							func_314(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_56.f_0 == 22)
						{
							MISC::CLEAR_AREA(-62.0307f, -1839.859f, 25.6787f, 5f, true, false, false, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_168, -62.0307f, -1839.859f, 25.6787f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_168, 319.6985f);
							func_314(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_56.f_0 == 23)
						{
							MISC::CLEAR_AREA(-234.7648f, -1150.311f, 21.9224f, 5f, true, false, false, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_168, -234.7648f, -1150.311f, 21.9224f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_168, 270.8741f);
							func_314(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_168, 5f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar11) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar11, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iVar11, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iVar11, false);
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar11, true))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar11);
						}
					}
					iVar13 = 5000;
					iVar14 = MISC::GET_GAME_TIMER();
					while (!CAM::IS_GAMEPLAY_CAM_RENDERING() && (MISC::GET_GAME_TIMER() - iVar14) < iVar13)
					{
						SYSTEM::WAIT(0);
					}
					if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
					{
						INTERIOR::UNPIN_INTERIOR(Local_56.f_112);
					}
					StringCopy(&Global_39347, "", 32);
					if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
					{
						func_336(47, 1);
						func_331(47, 1);
						Global_113386.f_32749.f_4800 = 1;
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::CLEAR_FOCUS();
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					func_323(0, 1, 1, 0, 0, 0, 0);
					bLocal_142 = false;
					Global_32216 = 0;
				}
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_57.f_0))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Local_57);
				}
				func_360(iLocal_129, Local_57.f_4, Local_56.f_29.f_67);
				func_359(Local_56.f_0, 5, 1);
				func_346(Local_56.f_0);
				if (HUD::DOES_BLIP_EXIST(Global_77137.f_208[Local_56.f_0]))
				{
					HUD::REMOVE_BLIP(&(Global_77137.f_208[Local_56.f_0]));
				}
				iLocal_151 = Local_56.f_0;
				func_345();
				Local_56.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 4000)
				{
					Var6 = { Local_56.f_29.f_63 };
					StringConCat(&Var6, "_04", 16);
					func_344(&Var6);
				}
				else
				{
					Local_56.f_2 = 99;
				}
			}
			break;
	}
}

void func_344(char* sParam0)//Position - 0x2678C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_345()//Position - 0x267A2
{
	if (func_256(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

void func_346(int iParam0)//Position - 0x267ED
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
	func_358(iVar0, 0);
	iVar2 = func_357(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_356(iVar0);
		if (func_354(iVar0, iVar1, 1))
		{
			func_347(iVar0);
			func_356(iVar0);
		}
	}
}

void func_347(int iParam0)//Position - 0x268F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_353(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_53557[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_53557[iVar0 /*203*/].f_9 - 1);
	if (!Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_352(Global_44257[iVar4 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_348(1, Global_44257[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_44257[iVar1 /*12*/].f_3)
		{
			case 0:
				func_348(0, Global_44257[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_348(1, Global_44257[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_348(2, Global_44257[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_348(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x26C64
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_513();
	bVar1 = false;
	StringCopy(&cVar2, func_351(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1");
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3");
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2");
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
			func_349(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, HUD::_GET_LABEL_TEXT(func_350(iParam1)), 0));
		}
		else
		{
			func_349(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::_GET_LABEL_TEXT(func_350(iParam1)), 0));
		}
		switch (Global_20266)
		{
			case 0:
				StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
				Global_44249++;
				if (Global_44249 > 16)
				{
					Global_44249 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
				Global_44251++;
				if (Global_44251 > 16)
				{
					Global_44251 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
				Global_44250++;
				if (Global_44250 > 16)
				{
					Global_44250 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20255, true);
	}
}

void func_349(int iParam0)//Position - 0x26E4C
{
	Global_44252[Global_44256] = iParam0;
	Global_22663 = 1;
	Global_22662 = iParam0;
	Global_44256++;
	if (Global_44256 == 3)
	{
		Global_44256 = 0;
	}
}

char* func_350(int iParam0)//Position - 0x26E7A
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_351(int iParam0, int iParam1)//Position - 0x271E5
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[0 /*29*/].f_7));
		
		case 1:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[1 /*29*/].f_7));
		
		case 2:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[2 /*29*/].f_7));
		
		case 7:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[12 /*29*/].f_7));
		
		case 4:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[60 /*29*/].f_7));
		
		case 6:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[62 /*29*/].f_7));
		
		case 3:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[14 /*29*/].f_7));
		
		case 16:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[97 /*29*/].f_7));
		
		case 19:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[99 /*29*/].f_7));
		
		case 15:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[96 /*29*/].f_7));
		
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
			return HUD::_GET_LABEL_TEXT(&(Global_1998[15 /*29*/].f_7));
		
		case 26:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[30 /*29*/].f_7));
		
		case 27:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[17 /*29*/].f_7));
		
		case 29:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[20 /*29*/].f_7));
		
		case 30:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[43 /*29*/].f_7));
		
		case 31:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[44 /*29*/].f_7));
		
		case 32:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[19 /*29*/].f_7));
		
		case 34:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[40 /*29*/].f_7));
		
		case 36:
			return HUD::_GET_LABEL_TEXT("CELL_E_381");
		
		case 38:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[64 /*29*/].f_7));
		
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
			return HUD::_GET_LABEL_TEXT(&(Global_1998[122 /*29*/].f_7));
		
		case 40:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[125 /*29*/].f_7));
		
		case 41:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[113 /*29*/].f_7));
		
		case 42:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[126 /*29*/].f_7));
		
		case 43:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[127 /*29*/].f_7));
		
		case 44:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[124 /*29*/].f_7));
		
		case 45:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[114 /*29*/].f_7));
		
		case 46:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[115 /*29*/].f_7));
		
		case 47:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[116 /*29*/].f_7));
		
		case 48:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[123 /*29*/].f_7));
		
		case 49:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[117 /*29*/].f_7));
		
		case 50:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[118 /*29*/].f_7));
		
		case 51:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[119 /*29*/].f_7));
		
		case 52:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[120 /*29*/].f_7));
		
		case 53:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_352(int iParam0)//Position - 0x275B0
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_353(int iParam0)//Position - 0x275E1
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
		if (Global_53557[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_53557[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_53557[iVar0 /*203*/].f_1;
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

int func_354(int iParam0, int iParam1, bool bParam2)//Position - 0x27645
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_358(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_53557[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_53557[iVar0 /*203*/].f_2 = iParam0;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_53557[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53557[iVar0 /*203*/].f_4[iVar1] == Global_44257[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53557[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53557[iVar0 /*203*/].f_4[Global_53557[iVar0 /*203*/].f_3] = Global_44257[iParam1 /*12*/].f_3;
			Global_53557[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53557[iVar0 /*203*/].f_4[iVar1] == Global_44257[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53557[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53557[iVar0 /*203*/].f_4[Global_53557[iVar0 /*203*/].f_3] = Global_44257[iParam1 /*12*/].f_2;
			Global_53557[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_53557[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_355(Global_53557[iVar0 /*203*/].f_4[iVar1], Global_53557[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_355(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x27841
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_47582[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_47582[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_352(Global_44257[iVar5 /*12*/].f_1) };
		if (Global_44257[iVar5 /*12*/].f_2 == iParam0 && !Global_44257[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_44257[iVar5 /*12*/].f_2;
		iVar0 = Global_53195[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_53195[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44249 = (Global_44249 - 1);
						if (Global_44249 < 0)
						{
							Global_44249 = 0;
						}
						break;
					
					case 1:
						Global_44250 = (Global_44250 - 1);
						if (Global_44250 < 0)
						{
							Global_44250 = 0;
						}
						break;
					
					case 2:
						Global_44251 = (Global_44251 - 1);
						if (Global_44251 < 0)
						{
							Global_44251 = 0;
						}
						break;
					}
				}
		}
		Global_53195[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_53195[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_53195[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53195[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_53195[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_53195[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44249 = (Global_44249 - 1);
						if (Global_44249 < 0)
						{
							Global_44249 = 0;
						}
						break;
					
					case 1:
						Global_44250 = (Global_44250 - 1);
						if (Global_44250 < 0)
						{
							Global_44250 = 0;
						}
						break;
					
					case 2:
						Global_44251 = (Global_44251 - 1);
						if (Global_44251 < 0)
						{
							Global_44251 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_53557[iVar9 /*203*/].f_1 == iParam1 && Global_53557[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_53195[iParam0 /*120*/].f_18[iVar0] = Global_53557[iVar8 /*203*/].f_1;
		Global_53195[iParam0 /*120*/].f_1[iVar0] = (Global_53557[iVar8 /*203*/].f_9 - 1);
		Global_53195[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_53195[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53195[iParam0 /*120*/]++;
		iVar10 = Global_53195[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_53557[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_44257[iVar11 /*12*/].f_2;
		if (Global_53557[iVar8 /*203*/].f_10[(Global_53557[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_53557[iVar8 /*203*/].f_10[(Global_53557[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_352(Global_44257[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_53195[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_348(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_348(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_348(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_348(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_356(int iParam0)//Position - 0x27C16
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!BitTest(Global_113386.f_24986, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_353(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_53557[iVar0 /*203*/] = 0;
}

int func_357(int iParam0, int iParam1, int iParam2)//Position - 0x27C50
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_54979 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53557[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_53557[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_53557[iVar1 /*203*/].f_1;
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
		if (Global_54980[iVar1 /*53*/].f_52 == 0)
		{
			Global_54980[iVar1 /*53*/].f_52 = iVar0;
			Global_54980[iVar1 /*53*/] = iParam0;
			Global_54980[iVar1 /*53*/].f_1 = iParam1;
			Global_54980[iVar1 /*53*/].f_2 = iParam2;
			Global_113386.f_21037.f_310++;
			if (Global_113386.f_21037.f_310 == 0)
			{
				Global_113386.f_21037.f_310 = 1;
			}
			Global_54980[iVar1 /*53*/].f_10 = 0;
			Global_54980[iVar1 /*53*/].f_3 = Global_113386.f_21037.f_310;
			Global_54980[iVar1 /*53*/].f_4 = 1;
			Global_54979++;
			return Global_54980[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_358(int iParam0, bool bParam1)//Position - 0x27D6B
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
	
	iVar0 = func_353(iParam0);
	if (iVar0 > -1)
	{
		if (Global_53557[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53557[iVar1 /*203*/] == 0)
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
		if (Global_53557[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_53557[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_53557[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_53557[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_53557[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_53557[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_53195[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_53195[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_53195[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_53195[iVar6 /*120*/].f_18[iVar8] == Global_53557[iVar4 /*203*/].f_1)
							{
								if (Global_53195[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_44249 = (Global_44249 - 1);
											break;
										
										case 1:
											Global_44250 = (Global_44250 - 1);
											break;
										
										case 2:
											Global_44251 = (Global_44251 - 1);
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
	Global_53557[iVar4 /*203*/].f_2 = iParam0;
	Global_53557[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_53557[iVar4 /*203*/] = 1;
	}
	Global_113386.f_21037.f_310++;
	if (Global_113386.f_21037.f_310 == 0)
	{
		Global_113386.f_21037.f_310 = 1;
	}
	Global_53557[iVar4 /*203*/].f_1 = Global_113386.f_21037.f_310;
	Global_53557[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_359(int iParam0, int iParam1, bool bParam2)//Position - 0x27F83
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113386.f_32749[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_32749[iParam0]), iParam1);
	}
}

int func_360(int iParam0, int iParam1, int iParam2)//Position - 0x27FBE
{
	if (func_389(iParam0) == 3)
	{
		return 0;
	}
	if (func_389(iParam0) == 4)
	{
		return 0;
	}
	return func_361(func_389(iParam0), 0, iParam1, iParam2, 0);
}

int func_361(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x27FF2
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_388();
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
					func_387(99, 1);
					func_386(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_386(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_386(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_371(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_370(5))
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
							func_386(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_386(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_386(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_370(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_386(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_386(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_386(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_386(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_386(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_386(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_386(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_386(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_386(joaat("sp2_money_spent_property"), iParam3);
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
									func_386(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_386(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_386(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_386(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_386(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_386(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_370(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_386(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_386(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_386(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_386(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_386(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_386(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_369(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_387(95, iParam3);
					break;
				
				case 1:
					func_387(97, iParam3);
					break;
				
				case 2:
					func_387(96, iParam3);
					break;
			}
			func_387(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_364(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_364(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_386(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_386(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_386(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - iParam3);
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
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_363(iParam0);
	if (Global_43052 == 15)
	{
		func_362(0);
	}
	return 1;
}

void func_362(bool bParam0)//Position - 0x285F3
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
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_363(int iParam0)//Position - 0x28875
{
	int iVar0;
	
	iVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_364(bool bParam0)//Position - 0x288CF
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_368(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_368(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_368(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_368(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_367(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_367(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_367(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_367(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_367(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_367(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_366() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_366() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_365(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_365(bool bParam0)//Position - 0x28A4E
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_366()//Position - 0x28B50
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_367(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x28B5D
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_172(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_368(int iParam0, bool bParam1, int iParam2)//Position - 0x28B8D
{
	if (iParam2 == -1)
	{
		iParam2 = func_97();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_369(int iParam0)//Position - 0x28BAB
{
	func_387(93, iParam0);
	func_387(29, iParam0);
	func_387(30, iParam0);
}

int func_370(int iParam0)//Position - 0x28BCB
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
		return func_173(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_173(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_173(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_173(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_171(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_171(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_171(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_171(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_171(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_171(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_366() /*5567*/].f_681.f_10, iParam0);
}

int func_371(bool bParam0)//Position - 0x28D71
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, true);
		func_385(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_372(27, 1);
	return 1;
}

int func_372(int iParam0, int iParam1)//Position - 0x28E28
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_373(iParam0, iParam1);
}

int func_373(int iParam0, int iParam1)//Position - 0x28E43
{
	if (func_27(14) && !func_384(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_383(&Global_4541529))
	{
		if (func_381(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_374(&Global_4541529, iParam0))
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

int func_374(var uParam0, int iParam1)//Position - 0x28EE0
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_384(iParam1))
	{
		return 0;
	}
	if (func_381(uParam0, iParam1))
	{
		return 0;
	}
	if (func_380(uParam0) < 0f)
	{
		func_379(uParam0, 0);
	}
	func_377(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_375(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_375(var uParam0, int iParam1)//Position - 0x28F91
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_384(iParam1))
	{
		return 0;
	}
	if (func_381(uParam0, iParam1))
	{
		return 0;
	}
	if (func_380(uParam0) < 0f)
	{
		func_379(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_376(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_376(var uParam0, int iParam1)//Position - 0x2900C
{
	return (*uParam0)[iParam1] == 78;
}

void func_377(var uParam0)//Position - 0x2901D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_378(uParam0, iVar0);
		iVar0++;
	}
	func_379(uParam0, (Global_4541528 - 0.5f));
}

void func_378(var uParam0, int iParam1)//Position - 0x29051
{
	(*uParam0)[iParam1] = 78;
}

void func_379(var uParam0, float fParam1)//Position - 0x29061
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

float func_380(var uParam0)//Position - 0x2907E
{
	return uParam0->f_80;
}

bool func_381(var uParam0, int iParam1)//Position - 0x2908A
{
	return func_382(uParam0, iParam1) != -1;
}

int func_382(var uParam0, int iParam1)//Position - 0x2909C
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

bool func_383(var uParam0)//Position - 0x290C9
{
	return uParam0->f_79 == 1;
}

int func_384(int iParam0)//Position - 0x290D7
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

int func_385(int iParam0, int iParam1)//Position - 0x29127
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
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_386(int iParam0, int iParam1)//Position - 0x29178
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_387(int iParam0, int iParam1)//Position - 0x2919B
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_58896[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_388()//Position - 0x291F8
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_389(int iParam0)//Position - 0x2926D
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_390(int iParam0)//Position - 0x2927E
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
			if (func_391())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_391()//Position - 0x292C8
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0)//Position - 0x292FA
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_393(int iParam0)//Position - 0x29352
{
	return func_394(iParam0, Global_43052);
}

int func_394(int iParam0, int iParam1)//Position - 0x29363
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

void func_395(int iParam0, int iParam1, int iParam2)//Position - 0x29544
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_513();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_134(iParam1);
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
	if (func_354(iVar0, iVar1, 1))
	{
		func_396(iVar0, sVar3);
		func_347(iVar0);
		func_356(iVar0);
	}
}

void func_396(int iParam0, char* sParam1)//Position - 0x2974E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_353(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_53557[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_397(int iParam0, int iParam1)//Position - 0x29803
{
	int iVar0;
	int iVar1;
	
	if (!func_402(iParam1) || !func_402(iParam0))
	{
		return 1;
	}
	iVar0 = func_57(iParam0);
	iVar1 = func_57(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_59(iParam0);
	iVar1 = func_59(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_401(iParam0);
	iVar1 = func_401(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_400(iParam0);
	iVar1 = func_400(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_399(iParam0);
	iVar1 = func_399(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_398(iParam0);
	iVar1 = func_398(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0)//Position - 0x2990F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_399(int iParam0)//Position - 0x29922
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_400(int iParam0)//Position - 0x29935
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_401(int iParam0)//Position - 0x29948
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_402(int iParam0)//Position - 0x2995A
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
	iVar0 = func_398(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_399(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_400(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_57(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_59(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_401(iParam0);
	if (iVar5 < 1 || iVar5 > func_56(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_403()//Position - 0x29A36
{
	int iVar0;
	var uVar1;
	char* sVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	struct<3> Var20;
	int iVar21;
	
	iVar0 = 0;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (Global_113386.f_32749.f_5588)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_78042))
			{
				func_316(&(Global_113386.f_32749.f_5510), Global_113386.f_32749.f_5590);
				Global_113386.f_32749.f_5588 = 0;
			}
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78042, false) || func_49(Global_78042, Global_113386.f_32749.f_5590, 1))
			{
				Global_113386.f_32749.f_5588 = 0;
			}
			else
			{
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == Global_78042) && func_440(PLAYER::PLAYER_PED_ID()) != Global_113386.f_32749.f_5590)
				{
					Global_113386.f_32749.f_5590 = func_440(PLAYER::PLAYER_PED_ID());
				}
				if (Global_78042 != iLocal_128)
				{
					sVar2 = ENTITY::GET_ENTITY_SCRIPT(Global_78042, &uVar1);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
					{
						if (MISC::GET_HASH_KEY(sVar2) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
						{
							Global_113386.f_32749.f_5588 = 0;
							iLocal_169 = Global_78042;
							if (Global_77137.f_139[24] == Global_78042 || (Global_78043 == Global_78042 && Global_78044 == 24))
							{
								func_439(458, 24, -1);
							}
							else
							{
								func_439(458, 0, -1);
							}
							Global_78042 = 0;
						}
					}
				}
				if (((Global_113386.f_32749.f_5590 != func_513() && Global_99845[Global_113386.f_32749.f_5590 /*98*/] == Global_113386.f_32749.f_5510.f_66) && MISC::ARE_STRINGS_EQUAL(&(Global_99845[Global_113386.f_32749.f_5590 /*98*/].f_27), &(Global_113386.f_32749.f_5510.f_1))) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_119(&(Global_113386.f_32749.f_5510), &(Global_113386.f_32749.f_5600[Global_113386.f_32749.f_5590 /*78*/]));
					Global_113386.f_32749.f_5588 = 0;
					iLocal_169 = 0;
					func_439(458, 0, -1);
					Global_78042 = 0;
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_78042) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78042, false)) && !func_49(Global_78042, Global_113386.f_32749.f_5590, 1))
		{
			Global_113386.f_32749.f_5588 = 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_169) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_169, false))
		{
			if (((!Global_113386.f_32749.f_5588 && iLocal_169 != Global_78042) && iLocal_169 != iLocal_170) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_169, true))
			{
				func_31(iLocal_169, 145);
				iLocal_169 = 0;
				func_439(458, 0, -1);
			}
		}
		else if (iLocal_169 != 0)
		{
			iLocal_169 = 0;
			func_439(458, 0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170, false))
		{
		}
		else if (iLocal_170 != 0)
		{
			iLocal_170 = 0;
		}
	}
	if (Global_78046.f_66 != 0 && Global_78043 == 0)
	{
		func_316(&Global_78046, Global_78124);
		Global_78046.f_66 = 0;
	}
	Var3 = { 433.6721f, -1006.538f, 25.96351f };
	Var4 = { 433.6578f, -1017.5f, 32.09895f };
	fVar5 = 11.25f;
	if (iLocal_124 > 0 && iLocal_124 < 99)
	{
		if (iLocal_124 != 3)
		{
			if (((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3, Var4, fVar5, false, true, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14))
			{
				iLocal_124 = 99;
			}
		}
	}
	if (func_438(iLocal_129))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_145))
		{
			if (((func_27(15) || func_27(12)) && iLocal_124 != 3) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_145 = func_436(428.37f, -1013.5f, 27.93f, 0);
				HUD::SET_BLIP_SPRITE(iLocal_145, 225);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_145, "IMPOUND_BLIPNAME");
				HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_145, true);
			}
		}
		else if ((!(func_27(15) || func_27(12)) || iLocal_124 == 3) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			HUD::REMOVE_BLIP(&iLocal_145);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_145))
	{
		HUD::REMOVE_BLIP(&iLocal_145);
	}
	switch (iLocal_124)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((Local_56.f_2 == 0 && (func_27(15) || func_27(12))) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (func_438(iLocal_129))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3, Var4, fVar5, false, true, 0))
						{
							if (func_392(iLocal_129) >= 250)
							{
								iVar6 = 0;
								iVar7 = 0;
								while (iVar7 < 2)
								{
									if (func_312(iVar7, iLocal_129))
									{
										iVar6++;
									}
									iVar7++;
								}
								if (iVar6 > 1)
								{
									func_248(&iLocal_125, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_248(&iLocal_125, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_124 = 1;
							}
							else
							{
								func_246("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_244(0, -1, 0))
			{
				if (func_243(iLocal_125, 1))
				{
					func_71(&iLocal_125);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_435();
					iVar8 = 0;
					iVar9 = 0;
					while (iVar9 < 2)
					{
						if (func_312(iVar9, iLocal_129))
						{
							iVar8++;
						}
						iVar9++;
					}
					if (iVar8 > 1)
					{
						iLocal_116 = 0;
						iLocal_117 = 0;
						iLocal_118 = 0;
						bLocal_121 = -1;
						iLocal_124++;
					}
					else
					{
						iVar10 = 0;
						while (iVar10 < 2)
						{
							if (func_312(iVar10, iLocal_129))
							{
								if (iVar10 == 0)
								{
									Var11 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var11 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_409(&iLocal_128, iVar10, Var11, 179.24f, 1))
								{
									SYSTEM::WAIT(0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
								{
									if (iVar10 == 0)
									{
										func_408(18, 1, 0);
									}
									else
									{
										func_408(19, 1, 0);
									}
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
									}
									func_360(iLocal_129, 119, 250);
									func_407(iVar10);
									func_31(iLocal_128, func_513());
									func_73(1, -1);
									iLocal_124 = 3;
									func_71(&iLocal_125);
									iLocal_125 = -1;
									iLocal_118 = 0;
								}
							}
							iVar10++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_513())
			{
				case 0:
					iVar12 = 0;
					break;
				
				case 1:
					iVar12 = 1;
					break;
				
				case 2:
					iVar12 = 2;
					break;
			}
			func_435();
			if (!iLocal_116 || iLocal_117)
			{
				func_241(0, 0);
				func_240(1, 1, 0, 0, 0);
				func_239(1, 2, 1, 1, 1);
				func_238("IMPOUND_TITLE");
				iLocal_122 = 0;
				iVar13 = -1;
				iVar15 = 0;
				iVar14 = 0;
				while (iVar14 < 2)
				{
					if (func_312(iVar14, iLocal_129))
					{
						func_138(iVar15, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_113386.f_32749.f_5038[iVar12 /*157*/][iVar14 /*78*/].f_66), 0, 1, 0, 0, 0);
						if (iVar13 == -1)
						{
							iVar13 = iVar15;
							bLocal_121 = iVar15;
						}
						MISC::SET_BIT(&iLocal_122, iVar15);
						iLocal_123[iVar15] = iVar14;
						func_138(iVar15, "IMPOUND_COST", 1, 1, 0, 0, 0);
						func_406(250, 0);
						iVar15++;
					}
					iVar14++;
				}
				iVar15 = 0;
				func_130(bLocal_121, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar0 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, true);
						PAD::DISABLE_CONTROL_ACTION(0, 2, true);
						PAD::ENABLE_CONTROL_ACTION(0, 237, true);
						PAD::ENABLE_CONTROL_ACTION(0, 238, true);
						PAD::ENABLE_CONTROL_ACTION(0, 241, true);
						PAD::ENABLE_CONTROL_ACTION(0, 242, true);
						func_127(0, 0, 0, 1);
						func_126(0, -1, 1);
						if (func_125())
						{
							if (Global_4539961 != bLocal_121)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								bLocal_121 = Global_4539961;
								func_130(bLocal_121, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						bVar16 = (bLocal_121 - 1);
						while (bVar16 >= 0)
						{
							if (BitTest(iLocal_122, bVar16))
							{
								bLocal_121 = bVar16;
								bVar17 = true;
								bVar16 = false;
							}
							bVar16 = (bVar16 + -1);
						}
						if (!bVar17)
						{
							bVar16 = 31;
							while (bVar16 >= bLocal_121 + 1)
							{
								if (BitTest(iLocal_122, bVar16))
								{
									bLocal_121 = bVar16;
									bVar17 = true;
									bVar16 = bLocal_121;
								}
								bVar16 = (bVar16 + -1);
							}
						}
						if (bVar17)
						{
							func_130(bLocal_121, 1, 1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						bVar18 = bLocal_121 + 1;
						while (bVar18 <= 31)
						{
							if (BitTest(iLocal_122, bVar18))
							{
								bLocal_121 = bVar18;
								bVar19 = true;
								bVar18 = 31;
							}
							bVar18++;
						}
						if (!bVar19)
						{
							bVar18 = false;
							while (bVar18 <= (bLocal_121 - 1))
							{
								if (BitTest(iLocal_122, bVar18))
								{
									bLocal_121 = bVar18;
									bVar19 = true;
									bVar18 = bLocal_121;
								}
								bVar18++;
							}
						}
						if (bVar19)
						{
							func_130(bLocal_121, 1, 1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!iLocal_118)
					{
						func_124("IMPOUND_CNF", 0, 0);
						func_123(-1);
						func_122(201, "ITEM_YES", -1);
						func_122(202, "ITEM_NO", -1);
						iLocal_118 = 1;
					}
					else
					{
						if (bLocal_121 == 0)
						{
							Var20 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							Var20 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_312(iLocal_123[bLocal_121], iLocal_129))
						{
							while (!func_409(&iLocal_128, iLocal_123[bLocal_121], Var20, 179.24f, 1))
							{
								SYSTEM::WAIT(0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
							{
								if (bLocal_121 == 0)
								{
									func_408(18, 1, 0);
								}
								else
								{
									func_408(19, 1, 0);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								}
								func_360(iLocal_129, 119, 250);
								func_407(iLocal_123[bLocal_121]);
								func_31(iLocal_128, func_513());
								func_73(1, -1);
								iLocal_124++;
								func_71(&iLocal_125);
								iLocal_125 = -1;
								iLocal_118 = 0;
							}
						}
						iLocal_117 = 1;
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_124 = 99;
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_119)
			{
				func_124("", 0, 0);
				func_123(-1);
				func_122(201, "ITEM_SELECT", -1);
				func_122(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			if (func_244(0, -1, 0))
			{
				func_76(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 431.4f, -997.33f, 24.76f, true) > 20f && !func_405())
			{
				func_31(iLocal_128, func_513());
				iLocal_124 = 99;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 431.4f, -997.33f, 24.76f, true) > 100f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_128, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_128, false) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_128, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) > 100f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_128))
							{
								func_404(iLocal_128, 1, 145);
								VEHICLE::DELETE_VEHICLE(&iLocal_128);
								MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, false, false, true, true, false, false, 0);
								iLocal_124 = 99;
							}
						}
						else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_128, false))
						{
							MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, false, false, true, true, false, false, 0);
							func_31(iLocal_128, func_513());
							iLocal_124 = 99;
						}
					}
					else
					{
						MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, false, false, true, true, false, false, 0);
						iLocal_124 = 99;
					}
				}
				else
				{
					MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, false, false, true, true, false, false, 0);
					iLocal_124 = 99;
				}
			}
			break;
		
		case 99:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			func_71(&iLocal_125);
			iVar21 = 0;
			while (iVar21 < 2)
			{
				iLocal_123[iVar21] = -1;
				iVar21++;
			}
			func_408(18, 0, 0);
			func_408(19, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_128);
			}
			iLocal_124 = 0;
			break;
	}
	if (iLocal_124 == 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, false, true, 0))
		{
			if (!iLocal_127)
			{
				func_408(18, 1, 0);
				iLocal_127 = 1;
			}
		}
		else if (iLocal_127 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, false, true, 0))
		{
			func_408(18, 0, 0);
			iLocal_127 = 0;
		}
	}
}

int func_404(int iParam0, int iParam1, int iParam2)//Position - 0x2A818
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

int func_405()//Position - 0x2A858
{
	if (MISC::IS_POSITION_OCCUPIED(431.4424f, -997.7308f, 24.76161f, 4.75f, false, true, true, false, false, 0, false))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(436.6913f, -997.5869f, 24.75582f, 4.75f, false, true, true, false, false, 0, false))
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

void func_406(int iParam0, bool bParam1)//Position - 0x2A902
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23150.f_5613 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	Global_23150.f_4309[Global_23150.f_5613] = iParam0;
	Global_23150.f_5613++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 2;
	Global_23150.f_6134++;
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = func_133();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			func_112(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = func_132();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

void func_407(int iParam0)//Position - 0x2AA3D
{
	int iVar0;
	
	switch (func_513())
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
	if (iParam0 < 0 || iParam0 >= func_313(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_408(int iParam0, bool bParam1, bool bParam2)//Position - 0x2AAAC
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_41748[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (BitTest(Global_41748[iParam0 /*31*/].f_1, 1))
			{
				Global_41748[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_41748[iParam0 /*31*/].f_22 = 1f;
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[iParam0 /*31*/], Global_41748[iParam0 /*31*/].f_22, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[iParam0 /*31*/], 1, false, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_41748[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_41748[iParam0 /*31*/].f_22 = 0f;
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[iParam0 /*31*/], Global_41748[iParam0 /*31*/].f_22, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[iParam0 /*31*/], 1, false, true);
		}
	}
}

int func_409(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x2AB59
{
	int iVar0;
	
	if (!func_312(iParam1, func_513()) || ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	switch (func_513())
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
	STREAMING::REQUEST_MODEL(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, Param2, fParam3, false, false, false);
		func_410(*iParam0, &(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
		VEHICLE::_0xAB04325045427AAE(*iParam0, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
		if (bParam4)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_410(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x2AC5E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_428(iParam0))
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
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, true);
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
			if (func_426(uParam1->f_5) || func_426(uParam1->f_6))
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
		if (((BitTest(uParam1->f_77, 15) || func_425(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_424())
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
			VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
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
						func_423(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_423(iParam0, uParam1->f_69);
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
			func_417(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_33(iVar6 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((func_411() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
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

int func_411()//Position - 0x2B303
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_415(7))
	{
		if (func_413(Global_2703735.f_4.f_16) || func_412(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_412(var uParam0)//Position - 0x2B392
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_413(int iParam0)//Position - 0x2B3B6
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_414(iParam0, 9);
	}
	return 0;
}

var func_414(int iParam0, int iParam1)//Position - 0x2B3D4
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

bool func_415(int iParam0)//Position - 0x2B3EC
{
	return func_416(&(Global_2703735.f_169), iParam0);
}

var func_416(var uParam0, var uParam1)//Position - 0x2B400
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_417(int iParam0, var uParam1, var uParam2)//Position - 0x2B423
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
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, 255);
				}
				else
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, ((*uParam1)[iVar0] - 2));
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
				else if (func_421(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
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
	if (func_290(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_420(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_420(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_419(iParam0);
	if (func_418(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_418(int iParam0)//Position - 0x2B5FD
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
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
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

void func_419(var uParam0)//Position - 0x2B6D9
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

int func_420(int iParam0, int iParam1)//Position - 0x2B730
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
		iVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
		iVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
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

int func_421(int iParam0, int iParam1, int iParam2)//Position - 0x2B815
{
	if (!func_422() && VEHICLE::_0x00834EAC4A96E010(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_422()//Position - 0x2B839
{
	return 0;
}

void func_423(int iParam0, int iParam1)//Position - 0x2B842
{
	int iVar0;
	bool bVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		bVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
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
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, bVar1 == 1);
		}
	}
}

bool func_424()//Position - 0x2B8BA
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_425(int iParam0)//Position - 0x2B8CB
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

int func_426(int iParam0)//Position - 0x2B913
{
	if (!func_422() && func_427(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_427(int iParam0)//Position - 0x2B933
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

int func_428(int iParam0)//Position - 0x2B986
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_434(PLAYER::PLAYER_ID(), -1))
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
	if (func_430(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_429(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_429(int iParam0)//Position - 0x2BA0D
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

int func_430(int iParam0)//Position - 0x2BA3C
{
	if (func_433(iParam0) == 233)
	{
		return func_431(iParam0);
	}
	return -1;
}

int func_431(int iParam0)//Position - 0x2BA59
{
	if (func_432(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_432(int iParam0, int iParam1)//Position - 0x2BA7C
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_433(int iParam0)//Position - 0x2BAB7
{
	if (func_432(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_434(int iParam0, int iParam1)//Position - 0x2BADA
{
	int iVar0;
	
	if (func_269(iParam0, 1, 1))
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

void func_435()//Position - 0x2BB27
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(0, 188, true);
	PAD::ENABLE_CONTROL_ACTION(0, 187, true);
	PAD::ENABLE_CONTROL_ACTION(0, 201, true);
	PAD::ENABLE_CONTROL_ACTION(0, 202, true);
	PAD::ENABLE_CONTROL_ACTION(0, 1, true);
	PAD::ENABLE_CONTROL_ACTION(0, 2, true);
	PAD::ENABLE_CONTROL_ACTION(0, 239, true);
	PAD::ENABLE_CONTROL_ACTION(0, 240, true);
}

int func_436(struct<3> Param0, bool bParam1)//Position - 0x2BB72
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_437(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_437(bool bParam0, float fParam1, float fParam2)//Position - 0x2BB9E
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_438(int iParam0)//Position - 0x2BBB5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_312(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_439(int iParam0, int iParam1, int iParam2)//Position - 0x2BBDF
{
	if (iParam2 == -1)
	{
		iParam2 = func_97();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::_SET_PACKED_STAT_INT(iParam0, iParam1, iParam2);
}

int func_440(int iParam0)//Position - 0x2BC07
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_441(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_441(int iParam0)//Position - 0x2BC44
{
	if (func_25(iParam0))
	{
		return func_442(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_442(int iParam0)//Position - 0x2BC69
{
	return Global_1998[iParam0 /*29*/];
}

void func_443(int* iParam0)//Position - 0x2BC78
{
	int iVar0;
	struct<8> Var1;
	
	if (!BitTest(Global_113386.f_10016.f_25, 7))
	{
		if (!BitTest(*iParam0, 6))
		{
			if (func_27(13) && func_14(func_16()))
			{
				MISC::SET_BIT(iParam0, 6);
				iVar0 = func_9();
				iParam0->f_6 = { func_474(iVar0) };
				if (Global_32235 == iVar0 || Global_32235 == 0)
				{
					func_3(1);
					Var1 = { func_473("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					AUDIO::START_AUDIO_SCENE(&Var1);
					iVar0 = (Global_32235 + 1 % 8);
					func_471(iParam0, iVar0);
					iParam0->f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
					MISC::SET_BIT(iParam0, 12);
					if (iVar0 == 7)
					{
						MISC::SET_BIT(&(Global_113386.f_10016.f_25), 7);
						func_470(255, 0);
					}
				}
				else
				{
					func_471(iParam0, 0);
					MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 12);
				}
			}
		}
		else
		{
			func_469();
			if (!BitTest(*iParam0, 31))
			{
				if (!BitTest(*iParam0, 25))
				{
					func_468(iParam0);
				}
				else if (func_467())
				{
					func_451(iParam0);
					iParam0->f_3 = MISC::GET_GAME_TIMER() + 2000;
				}
				if (!func_450(0))
				{
					func_470(255, 0);
				}
			}
			else if (func_450(0))
			{
				if (MISC::GET_GAME_TIMER() > iParam0->f_3)
				{
					func_470(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16()))
			{
				func_444(iParam0);
			}
		}
	}
}

void func_444(int* iParam0)//Position - 0x2BDEA
{
	struct<8> Var0;
	
	if (BitTest(*iParam0, 31))
	{
		func_449(iParam0);
	}
	if (BitTest(*iParam0, 25))
	{
		func_445(iParam0);
	}
	Var0 = { func_473("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Var0))
	{
		AUDIO::STOP_AUDIO_SCENE(&Var0);
	}
	MISC::CLEAR_BIT(iParam0, 6);
	MISC::CLEAR_BIT(iParam0, 30);
	MISC::CLEAR_BIT(iParam0, 8);
}

void func_445(int* iParam0)//Position - 0x2BE4F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_448(iVar0);
	iVar2 = func_447(iVar1);
	iVar3 = func_446(iVar1);
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

int func_446(int iParam0)//Position - 0x2BE95
{
	switch (iParam0)
	{
		case 17:
			return joaat("u_m_y_cyclist_01");
		
		case 49:
			return joaat("dune");
		
		default:
	}
	return 0;
}

int func_447(int iParam0)//Position - 0x2BEC1
{
	switch (iParam0)
	{
		case 12:
			return joaat("a_c_rabbit_01");
		
		case 109:
			return joaat("a_c_boar");
		
		case 43:
			return joaat("a_c_deer");
		
		case 35:
			return joaat("emperor2");
		
		case 17:
			return joaat("scorcher");
		
		case 28:
			return joaat("a_c_mtlion");
		
		case 49:
			return joaat("cs_hunter");
		
		case 25:
			return joaat("a_m_y_hiker_01");
		
		case 14:
			return joaat("a_f_y_hippie_01");
		
		case 86:
			return joaat("a_m_m_hillbilly_01");
		
		default:
	}
	return 0;
}

int func_448(int iParam0)//Position - 0x2BF5D
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

void func_449(int* iParam0)//Position - 0x2BFAF
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

bool func_450(bool bParam0)//Position - 0x2C00B
{
	if (bParam0)
	{
		return Global_110134.f_2 > 0.5f;
	}
	return Global_110134.f_2 >= 255f;
}

void func_451(int* iParam0)//Position - 0x2C036
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_448(iVar0);
	func_452(iVar1, &(iParam0->f_5), &(iParam0->f_4), func_466(iVar0), func_465(iVar0), 1);
	MISC::SET_BIT(iParam0, 31);
}

void func_452(int iParam0, var uParam1, var uParam2, struct<3> Param3, float fParam4, bool bParam5)//Position - 0x2C06F
{
	switch (iParam0)
	{
		case 12:
			func_464(uParam1, Param3, fParam4, bParam5);
			break;
		
		case 109:
			func_463(uParam1, Param3, fParam4, bParam5);
			break;
		
		case 43:
			func_462(uParam1, Param3, fParam4, bParam5);
			break;
		
		case 35:
			func_461(uParam2, Param3, fParam4, bParam5);
			break;
		
		case 28:
			func_460(uParam1, Param3, fParam4, bParam5);
			break;
		
		case 17:
			func_459(uParam1, uParam2, Param3, fParam4, bParam5);
			break;
		
		case 49:
			func_457(uParam1, uParam2, Param3, fParam4);
			break;
		
		case 25:
			func_456(uParam1, Param3, fParam4);
			break;
		
		case 14:
			func_455(uParam1, Param3, fParam4);
			break;
		
		case 86:
			func_453(uParam1, Param3, fParam4);
			break;
	}
}

void func_453(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2C160
{
	int iVar0;
	
	iVar0 = func_447(86);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(5, iVar0, Param1, fParam2, true, true);
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
		func_454(*uParam0);
		return;
	}
}

void func_454(int iParam0)//Position - 0x2C367
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

void func_455(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2C69F
{
	int iVar0;
	
	iVar0 = func_447(14);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(5, iVar0, Param1, fParam2, true, true);
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
		func_454(*uParam0);
		return;
	}
}

void func_456(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2C8A6
{
	int iVar0;
	
	iVar0 = func_447(25);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(4, iVar0, Param1, fParam2, true, true);
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
		func_454(*uParam0);
		return;
	}
}

void func_457(var uParam0, var uParam1, struct<3> Param2, float fParam3)//Position - 0x2CA35
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_447(49);
	iVar1 = func_446(49);
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		*uParam0 = PED::CREATE_PED(4, iVar0, Param2, fParam3, true, true);
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
		func_454(*uParam0);
		Var2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = VEHICLE::CREATE_VEHICLE(iVar1, Param2 + Var2, fParam3, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam1, 2f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam1, 2f);
		VEHICLE::SET_VEHICLE_BRAKE(*uParam1, 1f);
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 0, func_458());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 1, func_458());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 2, func_458());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 3, func_458());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 4, func_458());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 5, func_458());
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam1, 15f);
		VEHICLE::_SET_VEHICLE_LIGHTS_MODE(*uParam1, 3);
		VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(*uParam1, true);
		PHYSICS::ACTIVATE_PHYSICS(*uParam1);
		return;
	}
}

int func_458()//Position - 0x2CCD7
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_459(var uParam0, var uParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x2CCF5
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_447(17);
	iVar1 = func_446(17);
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		*uParam0 = PED::CREATE_PED(4, iVar1, Param2, fParam3, true, true);
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
		if (bParam4)
		{
			Var2 = { 0.5783f, 0.1357f, -0.0683f };
			GRAPHICS::ADD_DECAL(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, true, false, false);
			Var2 = { 1.0477f, 0.1103f, -0.1388f };
			GRAPHICS::ADD_DECAL(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, true, false, false);
			Var2 = { 1.5048f, 0.4595f, -0.1953f };
			GRAPHICS::ADD_DECAL(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, true, false, false);
		}
		func_454(*uParam0);
		*uParam1 = VEHICLE::CREATE_VEHICLE(iVar0, (Param2.f_0 - 0.4f), (Param2.f_1 - 0.5f), Param2.f_2, fParam3, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_ROTATION(*uParam1, 0f, 85f, 0f, 2, true);
		VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam1, 20.5f);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam1, 15f);
		PHYSICS::ACTIVATE_PHYSICS(*uParam1);
		return;
	}
}

void func_460(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x2CFD7
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_447(28);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, Param1, fParam2, true, true);
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
		if (bParam3)
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

void func_461(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x2D20B
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_447(35);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(iVar0, Param1, fParam2, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_ROTATION(*uParam0, 0f, 170f, 0f, 2, true);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1f);
		VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam0, 1f);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, 15f);
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 0, func_458());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 1, func_458());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 2, func_458());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 3, func_458());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 4, func_458());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 5, func_458());
		VEHICLE::_SET_VEHICLE_LIGHTS_MODE(*uParam0, 3);
		VEHICLE::SET_VEHICLE_LIGHTS(*uParam0, 2);
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(*uParam0, true);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		if (bParam3)
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

void func_462(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x2D3F7
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_447(43);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, Param1, fParam2, true, true);
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
		if (bParam3)
		{
			Var1 = { 0.4125f, -0.5815f, -0.2056f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, true, false, false);
			Var1 = { 0.6332f, -1.1758f, -0.7106f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, true, false, false);
		}
		return;
	}
}

void func_463(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x2D5E7
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_447(109);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, Param1, fParam2, true, true);
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
		if (bParam3)
		{
			Var1 = { 0.4936f, -0.1763f, -0.0522f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, true, false, false);
			Var1 = { 1.0645f, 0.0483f, -0.0698f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, true, false, false);
			Var1 = { 1.6011f, -0.1704f, -0.1473f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, true, false, false);
		}
		func_454(*uParam0);
		return;
	}
}

void func_464(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x2D83C
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_447(12);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, Param1, fParam2, true, true);
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
		if (bParam3)
		{
			Var1 = { 0.2417f, -0.3975f, -0.2282f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, true, false, false);
			Var1 = { 0.0747f, -0.8188f, -0.2576f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, true, false, false);
			Var1 = { 0.4322f, -1.1548f, -0.4902f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, true, false, false);
		}
		func_454(*uParam0);
		return;
	}
}

float func_465(int iParam0)//Position - 0x2DA31
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

Vector3 func_466(int iParam0)//Position - 0x2DA95
{
	switch (iParam0)
	{
		case 1:
			return Global_110111[0 /*3*/];
		
		case 2:
			return Global_110111[1 /*3*/];
		
		case 3:
			return Global_110111[2 /*3*/];
		
		case 4:
			return Global_110111[3 /*3*/];
		
		case 5:
			return Global_110111[4 /*3*/];
		
		case 6:
			return Global_110111[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_467()//Position - 0x2DB13
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_448(iVar0);
	iVar2 = func_447(iVar1);
	iVar3 = func_446(iVar1);
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

void func_468(int* iParam0)//Position - 0x2DB62
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_448(iVar0);
	iVar2 = func_447(iVar1);
	iVar3 = func_446(iVar1);
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

void func_469()//Position - 0x2DBA8
{
	if (Global_110134.f_3 == MISC::GET_FRAME_COUNT())
	{
		return;
	}
	Global_110134.f_3 = MISC::GET_FRAME_COUNT();
	if (Global_110134.f_2 == 0f && Global_110134.f_1 == 0f)
	{
		return;
	}
	if (Global_110134.f_2 != Global_110134.f_1)
	{
		Global_110134.f_2 = (Global_110134.f_2 + Global_110134);
		if (Global_110134 <= 0f)
		{
			if (Global_110134.f_2 < Global_110134.f_1)
			{
				Global_110134.f_2 = Global_110134.f_1;
			}
		}
		else if (Global_110134.f_2 > Global_110134.f_1)
		{
			Global_110134.f_2 = Global_110134.f_1;
		}
	}
	GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, SYSTEM::ROUND(Global_110134.f_2), false);
}

void func_470(int iParam0, int iParam1)//Position - 0x2DC69
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	if (iParam1 <= 0)
	{
		Global_110134 = 0f;
		Global_110134.f_1 = fVar0;
		Global_110134.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_110134.f_2);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1) / (MISC::GET_FRAME_TIME() * 1000f));
		Global_110134 = (fVar1 / fVar2);
		Global_110134.f_1 = fVar0;
	}
}

void func_471(int* iParam0, int iParam1)//Position - 0x2DCC6
{
	func_472(&(Global_113386.f_10016.f_25), iParam1, 14336, 11);
}

void func_472(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2DCE2
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, iParam3));
}

struct<8> func_473(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x2DD06
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_474(int iParam0)//Position - 0x2DD2B
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_110089[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_475()//Position - 0x2DD53
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_52)
			{
				STREAMING::REQUEST_MODEL(joaat("v_ilev_uvline"));
				iLocal_51 = 1;
				if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_uvline")))
				{
					if (func_476(8))
					{
						iLocal_53[4] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_53[4], 471.48f, fVar0, 30.33f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_53[4], 0f, 0f, 116.9f, 2, true);
						iLocal_53[1] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_53[1], 471.48f, fVar0, 30.15f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_53[1], 0f, 0f, 116.9f, 2, true);
					}
					if (func_476(9))
					{
						iLocal_53[5] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_53[5], 471.48f, fVar0, 29.98f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_53[5], 0f, 0f, 116.9f, 2, true);
					}
					if (func_476(10))
					{
						iLocal_53[3] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_53[3], 471.48f, fVar0, 29.82f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_53[3], 0f, 0f, 116.9f, 2, true);
					}
					iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar2]))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_53[iVar2], true, false);
							ENTITY::SET_ENTITY_ALWAYS_PRERENDER(iLocal_53[iVar2], true);
							INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_53[iVar2], iVar1);
						}
						iVar2++;
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_uvline"));
					iLocal_52 = 1;
				}
			}
		}
		else
		{
			if (iLocal_51)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_uvline"));
				iLocal_51 = 0;
			}
			if (iLocal_52)
			{
				func_516();
				iLocal_52 = 0;
			}
		}
	}
}

int func_476(int iParam0)//Position - 0x2DF8B
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

void func_477()//Position - 0x2DFB7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77137.f_553)
	{
		if (!iLocal_54)
		{
			Global_77137.f_554 = 0;
			iLocal_54 = 1;
		}
		else if (Global_77137.f_554 >= 68)
		{
			Global_77137.f_553 = 0;
			iLocal_54 = 0;
		}
	}
	else
	{
		iLocal_54 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_148)
	{
		iVar1 = iLocal_149[iVar0];
		if (func_63(&Local_131, iVar1))
		{
			func_512(&Local_140, iVar1);
			if ((Local_140.f_69 && Local_56.f_3 == 0) || iVar1 == 14)
			{
				fLocal_152[iVar1] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_140.f_55, false);
			}
			else
			{
				fLocal_152[iVar1] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_131, false);
			}
			if (func_511())
			{
				func_510(iVar1);
				func_508(iVar1);
				func_507(iVar1);
				func_506(iVar1);
				func_504(iVar1);
				func_503(iVar1);
				func_502(iVar1);
				func_479(iVar1);
				if (BitTest(uLocal_48[iVar1], 2))
				{
					if (Global_77137.f_553)
					{
						iLocal_54 = 0;
					}
					func_517(iVar1);
				}
			}
			else
			{
				func_478(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_148;
	iLocal_148 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_150)
	{
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (BitTest(uLocal_48[iLocal_149[iVar0]], 2))
		{
			func_517(iLocal_149[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_151 != -1)
	{
		func_517(iLocal_151);
		iLocal_151 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_517(iLocal_47);
	if (iLocal_157)
	{
		func_517(21);
		func_517(22);
		func_517(23);
		iLocal_157 = 0;
		bLocal_158 = true;
	}
	else if (bLocal_158)
	{
		bLocal_158 = false;
	}
	if (Global_77137.f_553)
	{
		Global_77137.f_554++;
	}
}

void func_478(int iParam0)//Position - 0x2E1AA
{
	if (iLocal_49[iParam0] != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_49[iParam0]);
		iLocal_49[iParam0] = 0;
	}
}

void func_479(int iParam0)//Position - 0x2E1CD
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
	struct<60> Var9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	int iVar17;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!BitTest(uLocal_48[iParam0], 2))
	{
		func_478(iParam0);
	}
	MISC::CLEAR_BIT(&(uLocal_48[iParam0]), 2);
	if (BitTest(uLocal_48[iParam0], 1))
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_50[iParam0 /*3*/], true);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (BitTest(Local_131.f_9, 23))
	{
		if (Local_131.f_4 == joaat("blimp"))
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
	else if (BitTest(Local_131.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((BitTest(Local_131.f_9, 19) || BitTest(Local_131.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (BitTest(Local_131.f_9, 25) && (((iLocal_129 == 0 && Local_56.f_0 == 21) || (iLocal_129 == 0 && Local_56.f_0 == 22)) || (iLocal_129 == 0 && Local_56.f_0 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iParam0], false))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (iParam0 == 24)
				{
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_77137.f_139[iParam0], -1, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						iVar3 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(Global_77137.f_139[iParam0], -1);
					}
					iVar4 = func_440(iVar3);
					if (iVar4 != Global_113386.f_32749.f_5591)
					{
						if (func_25(iVar4))
						{
							func_501("Updating last character to use vehicle gen", iVar4);
							Global_113386.f_32749.f_5591 = iVar4;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_77137.f_139[iParam0], true))
				{
					func_500("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_65(Global_77137.f_139[iParam0])) && !func_64(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
					}
					Global_77137.f_139[iParam0] = 0;
					Global_77137[iParam0] = 1;
					func_499(iParam0);
					return;
				}
				if (((BitTest(uLocal_48[iParam0], 0) && !BitTest(Local_131.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_500("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_65(Global_77137.f_139[iParam0])) && !func_64(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
					Global_77137.f_139[iParam0] = 0;
					Global_77137[iParam0] = 1;
					func_499(iParam0);
					return;
				}
				if ((!BitTest(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_77137.f_139[iParam0], PLAYER::PLAYER_PED_ID(), true))
					{
						func_500("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_65(Global_77137.f_139[iParam0])) && !func_64(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
						{
							VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
						}
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
						Global_77137.f_139[iParam0] = 0;
						Global_77137[iParam0] = 1;
						func_499(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((BitTest(uLocal_48[iParam0], 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_77137.f_139[iParam0], true), Local_50[iParam0 /*3*/], true) > fVar5) || (!BitTest(uLocal_48[iParam0], 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_77137.f_139[iParam0], true), Local_131, true) > fVar5))
				{
					func_500("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_65(Global_77137.f_139[iParam0])) && !func_64(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
					Global_77137.f_139[iParam0] = 0;
					Global_77137[iParam0] = 1;
					func_499(iParam0);
					return;
				}
				if (!func_69(iParam0, 0))
				{
					func_500("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_65(Global_77137.f_139[iParam0])) && !func_64(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
					Global_77137.f_139[iParam0] = 0;
					Global_77137[iParam0] = 1;
					func_499(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_49(Global_77137.f_139[iParam0], iLocal_129, 1) && !func_65(Global_77137.f_139[iParam0])) && !func_64(Global_77137.f_139[iParam0]))
					{
						func_500("No longer needed: Mission vehicle gen moved to players garage");
						if (ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
						{
							VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
						}
						Global_77137.f_139[iParam0] = 0;
						Global_77137[iParam0] = 1;
						func_499(iParam0);
						return;
					}
				}
				if (fLocal_152[iParam0] > fVar0 && (!BitTest(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_52();
						iVar7 = Global_113386.f_32749.f_4801;
						func_497(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_397(iVar6, iVar7))
						{
							if ((!func_65(Global_77137.f_139[iParam0]) && !func_64(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
							{
								VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
							}
							func_31(Global_77137.f_139[iParam0], Global_113386.f_32749.f_5591);
							Global_77137[iParam0] = 1;
							func_499(iParam0);
						}
						else if (func_37(Global_77137.f_139[iParam0]))
						{
							func_32(Global_77137.f_139[iParam0], &Global_2726988);
							Global_2726987 = Global_113386.f_32749.f_5591;
							iLocal_170 = Global_77137.f_139[iParam0];
						}
					}
					func_500("No longer needed: Player out for range");
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
					MISC::CLEAR_AREA(Local_131, 3f, false, false, false, false);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_131, 3f, false, false, false, false, false, false, 0);
					Global_77137.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
					{
						Global_77137.f_584 = { Local_131 };
						Global_77137.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (BitTest(Local_131.f_9, 30))
				{
					if (!BitTest(Local_131.f_9, 31))
					{
						if (!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_77137.f_139[iParam0]) && !ENTITY::IS_ENTITY_ATTACHED(Global_77137.f_139[iParam0]))
						{
							Var8 = { ENTITY::GET_ENTITY_COORDS(Global_77137.f_139[iParam0], true) };
							if (Var8.f_2 >= func_496(iParam0))
							{
								VEHICLE::SET_BOAT_ANCHOR(Global_77137.f_139[iParam0], true);
								MISC::SET_BIT(&(Local_131.f_9), 31);
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
		Global_77137.f_139[iParam0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
	{
		func_500("No longer needed: Vehicle not driveable");
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
		Global_77137.f_139[iParam0] = 0;
		Global_77137[iParam0] = 1;
		func_499(iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (Global_78044 == iParam0)
	{
		func_500("Processing a vehgen vehicle handover request.");
		if (ENTITY::DOES_ENTITY_EXIST(Global_78043) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78043, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iParam0], false))
			{
				if (Global_77137.f_139[iParam0] == Global_78043)
				{
					func_500("Vehicle to be handed over is the same vehicle.");
					Global_78044 = -1;
					Global_78043 = 0;
					return;
				}
				else
				{
					func_500("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_65(Global_77137.f_139[iParam0])) && !func_64(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
					Global_77137.f_139[iParam0] = 0;
				}
			}
			Global_77137.f_139[iParam0] = Global_78043;
			Global_77137[iParam0] = 1;
			MISC::CLEAR_BIT(&(uLocal_48[iParam0]), 0);
			MISC::SET_BIT(&(uLocal_48[iParam0]), 1);
			MISC::CLEAR_BIT(&(uLocal_48[iParam0]), 3);
			Local_50[iParam0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_78043, true) };
			Global_78044 = -1;
			if (BitTest(Local_131.f_9, 10))
			{
				Var9.f_9 = 49;
				Var9.f_59 = 2;
				func_32(Global_78043, &Var9);
				if (Global_78045)
				{
					func_118(iParam0, &Var9, ENTITY::GET_ENTITY_COORDS(Global_78043, true), ENTITY::GET_ENTITY_HEADING(Global_78043), func_48(Global_78043));
				}
				else
				{
					func_118(iParam0, &Var9, Global_113386.f_32749.f_1864[Local_131.f_14 /*3*/], Global_113386.f_32749.f_1934[Local_131.f_14], func_48(Global_78043));
				}
				Global_77137.f_139[iParam0] = Global_78043;
				Global_77137.f_484[iParam0] = Global_77137.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar10 = func_513();
				if (func_25(iVar10))
				{
					func_500("Players stored switch vehicle cleared for prep getaway.");
					Global_100144[iVar10] = 0;
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_139[iParam0], true, true);
			if (iParam0 == 24)
			{
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], false);
			}
			Global_78043 = 0;
			if (Global_2726988.f_66 != 0)
			{
				func_316(&Global_2726988, Global_2726987);
				Global_2726988.f_66 = 0;
			}
			return;
		}
		if (Global_2726988.f_66 != 0)
		{
			func_316(&Global_2726988, Global_2726987);
			Global_2726988.f_66 = 0;
		}
		func_500("Vehicle to be handed over doesn't exist.");
		Global_78044 = -1;
		Global_78043 = 0;
	}
	if (Global_77137[iParam0])
	{
		if (fLocal_152[iParam0] >= fVar0)
		{
			Global_77137[iParam0] = 0;
			func_500("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_77137.f_584 = { 0f, 0f, 0f };
			Global_77137.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar11 = false;
	if (fLocal_152[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_113386.f_32749.f_1958[Local_131.f_14] != 0) && Global_113386.f_32749.f_1958[Local_131.f_14] > 3) && Local_131.f_4 != 0) && func_69(iParam0, 0)) && func_39(Local_131.f_4, 0))
		{
			iVar12 = func_52();
			iVar13 = Global_113386.f_32749.f_4801;
			func_497(&iVar13, 0, 0, 17, 0, 0, 0);
			if (func_397(iVar12, iVar13))
			{
				func_316(&(Global_113386.f_32749.f_69[Local_131.f_14 /*78*/]), Global_113386.f_32749.f_5591);
				func_499(iParam0);
				Global_77137[iParam0] = 1;
				func_500("Cannot be created: Vehicle ready for impound");
				Global_2726988.f_66 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			bVar11 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_77137.f_584 = { 0f, 0f, 0f };
		Global_77137.f_587 = { 0f, 0f, 0f };
	}
	if (Local_131.f_4 == 0)
	{
		Global_77137[iParam0] = 1;
		func_500("Cannot be created: Dummy model");
		return;
	}
	if (!func_39(Local_131.f_4, 0))
	{
		Global_77137[iParam0] = 1;
		func_500("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_69(iParam0, 0))
	{
		Global_77137[iParam0] = 1;
		func_500("Cannot be created: Vehicle gen not available");
		return;
	}
	if (BitTest(Local_131.f_9, 14) && !func_69(iParam0, 5))
	{
		Global_77137[iParam0] = 1;
		func_500("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_495() && func_494(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_77137[iParam0] = 1;
		func_500("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_130)
	{
		Global_77137[iParam0] = 1;
		func_500("Cannot be created: Player character not valid");
		return;
	}
	if (BitTest(Local_131.f_9, 10))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iParam0]))
		{
			Global_77137[iParam0] = 1;
			func_500("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_77137.f_484[iParam0] = 0;
		}
	}
	if (BitTest(Local_131.f_9, 6))
	{
		if (func_493(Local_131.f_4, -1))
		{
			Global_77137[iParam0] = 1;
			func_500("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_492(Local_131.f_4, -1))
		{
			Global_77137[iParam0] = 1;
			func_500("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (BitTest(Local_131.f_9, 29))
	{
		if (Local_56.f_3 == 0)
		{
			return;
		}
	}
	if (func_491(iParam0))
	{
		Global_77137[iParam0] = 1;
		func_500("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_77137[iParam0] = 1;
			func_500("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar14 = 0;
	if (BitTest(Local_131.f_9, 19))
	{
		iVar14 = 2;
	}
	else if (BitTest(Local_131.f_9, 20))
	{
		iVar14 = 1;
	}
	if ((iParam0 == 24 && Global_113386.f_32749.f_1958[Local_131.f_14] > 0) && Global_113386.f_32749.f_1958[Local_131.f_14] <= 3)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_131.f_4))
		{
			iVar14 = 2;
			Local_131.f_12 = (Global_113386.f_32749.f_1958[Local_131.f_14] - 1);
		}
		else if (VEHICLE::IS_THIS_MODEL_A_CAR(Local_131.f_4))
		{
			iVar14 = 1;
			Local_131.f_12 = (Global_113386.f_32749.f_1958[Local_131.f_14] - 1);
		}
	}
	if (iVar14 != 0)
	{
		if (func_490(Local_131.f_12, iVar14, Local_131, -1f))
		{
			Global_77137[iParam0] = 1;
			func_500("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_519(iParam0, 0);
			}
			return;
		}
		if (BitTest(Local_131.f_9, 19) || BitTest(Local_131.f_9, 20))
		{
			if (iVar14 == 2)
			{
				if (Global_97820[Local_131.f_12 /*3*/][1] != -1 && (MISC::GET_GAME_TIMER() - Global_97820[Local_131.f_12 /*3*/][1]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180)
				{
					Global_77137[iParam0] = 1;
					func_500("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var15, "...", 24);
					StringIntConCat(&Var15, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_97820[Local_131.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var15, " seconds", 24);
					func_500(&Var15);
					return;
				}
			}
			else if (iVar14 == 1)
			{
				if (Global_97820[Local_131.f_12 /*3*/][0] != -1 && (MISC::GET_GAME_TIMER() - Global_97820[Local_131.f_12 /*3*/][0]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180)
				{
					Global_77137[iParam0] = 1;
					func_500("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var16, "...", 24);
					StringIntConCat(&Var16, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_97820[Local_131.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var16, " seconds", 24);
					func_500(&Var16);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_77137.f_584 = { Local_131 };
	}
	if (bVar11)
	{
		return;
	}
	if (iVar14 != 0)
	{
		iLocal_49[iParam0] = func_23(Local_131.f_12, iVar14);
		STREAMING::REQUEST_MODEL(iLocal_49[iParam0]);
		MISC::SET_BIT(&(uLocal_48[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_49[iParam0]))
		{
			func_500("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_489(iLocal_49[iParam0], Local_131, 1))
		{
			func_500("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		MISC::CLEAR_AREA(Local_131, 3f, false, false, false, false);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_131, 3f, false, false, false, false, false, false, 0);
		if (iVar14 == 2)
		{
			func_484(&(Global_77137.f_139[iParam0]), Local_131.f_12, Local_131, Local_131.f_3, 0, 2);
		}
		else if (iVar14 == 1)
		{
			func_484(&(Global_77137.f_139[iParam0]), Local_131.f_12, Local_131, Local_131.f_3, 0, 1);
		}
		else
		{
			Global_77137[iParam0] = 1;
			func_500("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(Local_131.f_4);
		iLocal_49[iParam0] = Local_131.f_4;
		MISC::SET_BIT(&(uLocal_48[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(Local_131.f_4))
		{
			func_500("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_489(Local_131.f_4, Local_131, 1))
		{
			func_500("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		MISC::CLEAR_AREA(Local_131, 3f, false, false, false, false);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_131, 3f, false, false, false, false, false, false, 0);
		if (BitTest(Local_131.f_9, 23))
		{
			STREAMING::REQUEST_COLLISION_AT_COORD(Local_131);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_131.f_4 == joaat("submersible2"))
			{
				Local_131.f_2 = -3f;
			}
		}
		Global_77137.f_139[iParam0] = VEHICLE::CREATE_VEHICLE(Local_131.f_4, Local_131, Local_131.f_3, true, true, false);
		if (BitTest(Local_131.f_9, 10))
		{
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_131.f_4))
			{
				MISC::SET_BIT(&(Global_113386.f_32749.f_69[Local_131.f_14 /*78*/].f_77), 22);
			}
			if (BitTest(Global_113386.f_32749.f_69[Local_131.f_14 /*78*/].f_77, 14))
			{
				func_32(Global_77137.f_139[iParam0], &Local_141);
				func_483(Local_141.f_77, &(Global_113386.f_32749.f_69[Local_131.f_14 /*78*/].f_77), Local_131.f_4);
				MISC::CLEAR_BIT(&(Global_113386.f_32749.f_69[Local_131.f_14 /*78*/].f_77), 14);
			}
			func_410(Global_77137.f_139[iParam0], &(Global_113386.f_32749.f_69[Local_131.f_14 /*78*/]), 0, 1);
			Global_77137.f_484[iParam0] = Global_77137.f_139[iParam0];
		}
		else
		{
			if (BitTest(Local_131.f_9, 9))
			{
				VEHICLE::SET_VEHICLE_COLOURS(Global_77137.f_139[iParam0], Local_131.f_10, Local_131.f_11);
			}
			if (BitTest(Local_131.f_9, 8))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_77137.f_139[iParam0], 2);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Global_77137.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Global_77137.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_BREAK(Global_77137.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_77137.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_77137.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Global_77137.f_139[iParam0], false);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_77137.f_139[iParam0], true);
				ENTITY::FREEZE_ENTITY_POSITION(Global_77137.f_139[iParam0], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
	{
		func_482("Created - Coords: ", Local_131);
		func_481("Created - Dist From Player:", fLocal_152[iParam0]);
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_77137.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_131.f_4)
		{
			case joaat("miljet"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77137.f_139[iParam0], 121, 21);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77137.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77137.f_139[iParam0], 122, 89);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77137.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77137.f_139[iParam0], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77137.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77137.f_139[iParam0], 131, 132);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77137.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77137.f_139[iParam0], 159, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77137.f_139[iParam0], 160, 156);
				break;
		}
		if (BitTest(Local_131.f_9, 22))
		{
			VEHICLE::SET_BOAT_ANCHOR(Global_77137.f_139[iParam0], true);
		}
		if (BitTest(Local_131.f_9, 30))
		{
			MISC::CLEAR_BIT(&(Local_131.f_9), 31);
		}
		if (BitTest(Local_131.f_9, 26))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_77137.f_139[iParam0], 7);
			VEHICLE::SET_VEHICLE_ALARM(Global_77137.f_139[iParam0], true);
		}
		func_480(Global_77137.f_139[iParam0], iParam0);
		if (!BitTest(Local_131.f_9, 29) && !BitTest(Local_131.f_9, 30))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_77137.f_139[iParam0], 5f);
		}
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_77137.f_139[iParam0], 0f);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_77137.f_139[iParam0], true);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], BitTest(Local_131.f_9, 5));
	}
	MISC::CLEAR_BIT(&(uLocal_48[iParam0]), 0);
	MISC::CLEAR_BIT(&(uLocal_48[iParam0]), 1);
	Global_77137[iParam0] = 1;
	if (iVar14 != 0)
	{
		Global_77137.f_69[iParam0] = 1;
	}
	iVar17 = func_206(458, -1);
	if (iVar17 != 0 && iVar17 == iParam0)
	{
		iLocal_169 = Global_77137.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2726988.f_66 = 0;
	}
}

void func_480(int iParam0, int iParam1)//Position - 0x2F983
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

void func_481(char* sParam0, float fParam1)//Position - 0x2FA29
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_482(char* sParam0, float fParam1, var uParam2, var uParam3)//Position - 0x2FA42
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_483(var uParam0, var uParam1, int iParam2)//Position - 0x2FA5B
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

int func_484(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x2FB31
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_25(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_24(iParam1, &Var2, iParam5);
		if (Var2.f_0 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var2.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131])
		{
			Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::_0xAB04325045427AAE(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_488(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_417(iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_486(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_485(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::_0xAB04325045427AAE(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_488(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_417(iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_486(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_485(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var2.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var2.f_0))
			{
				bVar5 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var2.f_0, Param2, fParam3, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::_0xAB04325045427AAE(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_24);
				}
				if (func_488(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_87);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, BitTest(Var2.f_92, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, BitTest(Var2.f_92, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, BitTest(Var2.f_92, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, BitTest(Var2.f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
						}
					}
				}
				func_417(iParam0, &(Var2.f_31), &(Var2.f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_113386.f_9085.f_99.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_486(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
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
					Global_113386.f_2363.f_539.f_4316 = 1;
					func_263(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2.f_0);
				}
				if (bVar5)
				{
					func_485(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_485(int iParam0, int iParam1)//Position - 0x30952
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			Global_97772[iVar0] = iParam0;
			Global_97782[iVar0] = iParam1;
			Global_97792[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_97792[iVar0]))
			{
				Global_97820[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_97820[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_486(var uParam0)//Position - 0x309D4
{
	if (!func_487(*uParam0))
	{
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_113386.f_9085.f_99.f_58[119]);
	}
}

bool func_487(int iParam0)//Position - 0x309FF
{
	return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_488(var uParam0, int iParam1)//Position - 0x30A0E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_113386.f_20118.f_261)
	{
		*uParam0 = { Global_113386.f_20118.f_267 };
		*iParam1 = Global_113386.f_20118.f_271;
		return 1;
	}
	return 0;
}

int func_489(int iParam0, struct<3> Param1, int iParam2)//Position - 0x30A4F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if ((iParam2 && CAM::IS_SCREEN_FADED_OUT()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) > 0)
	{
		func_500("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var1);
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var0, true);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param1, true) < (fVar2 * 0.5f))
	{
		func_481("player is in vehicle bounds - fLength: ", fVar2);
		func_481("player is in vehicle bounds - fDistance: ", MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param1, true));
		return 1;
	}
	return 0;
}

int func_490(int iParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x30AE1
{
	int iVar0;
	struct<82> Var1;
	int iVar2;
	
	if (!func_25(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar2 = 0;
	func_24(iParam0, &Var1, iParam1);
	iVar2 = Var1.f_0;
	if (iVar2 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar0], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0]) == iVar2 && Global_97782[iVar0] == iParam0)
				{
					if (fParam3 == -1f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_97772[iVar0], false), Param2, true) <= fParam3)
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

int func_491(int iParam0)//Position - 0x30BA6
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_131.f_4 == joaat("frogger2"))
		{
			if (((func_493(Local_131.f_4, -1) || func_492(Local_131.f_4, -1)) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("exile2")) > 0) || !func_476(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[20]) && !ENTITY::IS_ENTITY_DEAD(Global_77137.f_484[20], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[20], false))
		{
			if (Local_131.f_4 == ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[20]))
			{
				VEHICLE::GET_VEHICLE_COLOURS(Global_77137.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_131.f_10 && iVar1 == Local_131.f_11)
				{
					func_311(20);
				}
			}
		}
	}
	return 0;
}

int func_492(int iParam0, int iParam1)//Position - 0x30C8E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Local_131, 200f, iParam0, iVar0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false)) && ENTITY::GET_ENTITY_MODEL(iVar1) == iParam0)
	{
		if (iParam1 == -1 || VEHICLE::GET_VEHICLE_LIVERY(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_493(int iParam0, int iParam1)//Position - 0x30CED
{
	var uVar0[50];
	int iVar1;
	int iVar2;
	
	iVar2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar0);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0[iVar1], false)) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar1]) == iParam0)
		{
			if (iParam1 == -1 || VEHICLE::GET_VEHICLE_LIVERY(uVar0[iVar1]) == iParam1)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_494(int iParam0)//Position - 0x30D68
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_393(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_495()//Position - 0x30D8A
{
	return Global_77137.f_138;
}

float func_496(int iParam0)//Position - 0x30D98
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

void func_497(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x30DCA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_57(*uParam0);
	iVar1 = func_59(*uParam0);
	iVar2 = func_401(*uParam0);
	iVar3 = func_400(*uParam0);
	iVar4 = func_399(*uParam0);
	iVar5 = func_398(*uParam0);
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
	iVar6 = func_56(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_56(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_498(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_498(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x30F4C
{
	func_62(uParam0, iParam1);
	func_61(uParam0, iParam2);
	func_60(uParam0, iParam3);
	func_54(uParam0, iParam5);
	func_55(uParam0, iParam4);
	func_53(uParam0, iParam6);
}

void func_499(int iParam0)//Position - 0x30F84
{
	if (BitTest(Local_131.f_9, 13))
	{
		func_519(iParam0, 0);
	}
}

void func_500(char* sParam0)//Position - 0x30F9E
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_501(char* sParam0, int iParam1)//Position - 0x30FB0
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_502(int iParam0)//Position - 0x30FC8
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	bVar0 = false;
	iVar3 = -1;
	iVar4 = joaat("prop_forsale_dyn_01");
	switch (iParam0)
	{
		case 12:
		case 13:
			bVar0 = !func_69(iParam0, 5);
			Var1 = { -961.42f, -2794.47f, 12.96f };
			fVar2 = -209.22f;
			iVar3 = 0;
			iVar4 = joaat("prop_airport_sale_sign");
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_69(iParam0, 5);
			Var1 = { -827.93f, -1368.14f, 3.9982f };
			fVar2 = -68.75f;
			iVar3 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_69(iParam0, 5);
			bVar0 = true;
			Var1 = { -710.07f, -1414.31f, 4f };
			fVar2 = -41.25f;
			iVar3 = 2;
			break;
		
		case 21:
			bVar0 = !func_69(iParam0, 5);
			Var1 = { -66.21f, 77.76f, 70.51f };
			fVar2 = -27f;
			iVar3 = 3;
			break;
		
		case 22:
			bVar0 = !func_69(iParam0, 5);
			Var1 = { -76.02f, -1825.61f, 25.88f };
			fVar2 = -129.67f;
			iVar3 = 4;
			break;
		
		case 23:
			bVar0 = !func_69(iParam0, 5);
			Var1 = { -218.68f, -1165.76f, 21.99f };
			fVar2 = 89.95f;
			iVar3 = 5;
			break;
	}
	if (bVar0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1, true) < 250f)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_146[iVar3]))
		{
			STREAMING::REQUEST_MODEL(iVar4);
			iLocal_147 = 1;
			if (STREAMING::HAS_MODEL_LOADED(iVar4))
			{
				if (iLocal_147)
				{
					iLocal_146[iVar3] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar4, Var1, false, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_146[iVar3], 0f, 0f, fVar2, 2, true);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_146[iVar3], false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_146[iVar3], true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
					iLocal_147 = 0;
				}
			}
		}
	}
	else if (iVar3 != -1)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_146[iVar3]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_146[iVar3])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1, true) > 255f)
		{
			OBJECT::DELETE_OBJECT(&(iLocal_146[iVar3]));
			if (iLocal_147)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
				iLocal_147 = 0;
			}
		}
	}
}

void func_503(int iParam0)//Position - 0x31221
{
	bool bVar0;
	
	bVar0 = false;
	if (func_69(iParam0, 0) && (!BitTest(Local_131.f_9, 14) || func_69(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_77137.f_346[iParam0] != bVar0)
	{
		if (!func_21(Local_131.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_77137.f_346[iParam0])
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_77137.f_415[iParam0], false);
				}
			}
			else if (!Global_77137.f_346[iParam0])
			{
				Global_77137.f_415[iParam0] = PED::ADD_SCENARIO_BLOCKING_AREA(Local_131.f_15, Local_131.f_18, false, true, true, true);
			}
		}
		Global_77137.f_346[iParam0] = bVar0;
	}
}

void func_504(int iParam0)//Position - 0x312DB
{
	int iVar0;
	
	if (BitTest(Local_131.f_9, 15))
	{
		if (func_69(iParam0, 0) && !func_69(iParam0, 5))
		{
			iVar0 = 145;
			if (BitTest(Local_131.f_9, 16))
			{
				iVar0 = func_505(9);
			}
			else if (BitTest(Local_131.f_9, 18))
			{
				iVar0 = func_505(4);
			}
			if (iVar0 == Local_131.f_12)
			{
				func_359(iParam0, 5, 1);
			}
		}
	}
}

int func_505(int iParam0)//Position - 0x31343
{
	return Global_113386.f_24904[iParam0 /*4*/];
}

void func_506(int iParam0)//Position - 0x31356
{
	if (func_69(iParam0, 0) && !func_69(iParam0, 3))
	{
		if (BitTest(Local_131.f_9, 4))
		{
			func_359(iParam0, 3, 1);
		}
		else
		{
			func_359(iParam0, 3, 1);
		}
	}
}

void func_507(int iParam0)//Position - 0x31392
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_69(iParam0, 0) && bLocal_130)
	{
		if (BitTest(Local_131.f_9, 0) || (BitTest(Local_131.f_9, 2) && !func_69(iParam0, 2)))
		{
			if ((!BitTest(Local_131.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 || func_69(iParam0, 5)) || !BitTest(Local_131.f_9, 28)))
			{
				bVar0 = false;
				if (!HUD::DOES_BLIP_EXIST(Global_77137.f_208[iParam0]))
				{
					if (func_476(0))
					{
						if (BitTest(Local_131.f_9, 14) && !func_69(iParam0, 5))
						{
							Global_77137.f_208[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_140.f_55);
							if (Local_140.f_58 != -1)
							{
								HUD::SET_BLIP_SPRITE(Global_77137.f_208[iParam0], Local_140.f_58);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140.f_59)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77137.f_208[iParam0], &(Local_140.f_59));
								}
							}
						}
						else if (func_69(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_77137.f_208[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_140.f_55);
							if (Local_131.f_13 != -1)
							{
								HUD::SET_BLIP_SPRITE(Global_77137.f_208[iParam0], Local_131.f_13);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140.f_59)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77137.f_208[iParam0], &(Local_140.f_59));
								}
								if (Local_131.f_12 == 0)
								{
									iVar1 = 42;
								}
								else if (Local_131.f_12 == 1)
								{
									iVar1 = 43;
								}
								else if (Local_131.f_12 == 2)
								{
									iVar1 = 44;
								}
								HUD::SET_BLIP_COLOUR(Global_77137.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_77137.f_208[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_131);
							if (Local_131.f_13 != -1)
							{
								HUD::SET_BLIP_SPRITE(Global_77137.f_208[iParam0], Local_131.f_13);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140.f_59)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77137.f_208[iParam0], &(Local_140.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_131.f_12 == 0)
									{
										iVar2 = 42;
									}
									else if (Local_131.f_12 == 1)
									{
										iVar2 = 43;
									}
									else if (Local_131.f_12 == 2)
									{
										iVar2 = 44;
									}
									HUD::SET_BLIP_COLOUR(Global_77137.f_208[iParam0], iVar2);
								}
							}
						}
						HUD::SET_BLIP_AS_SHORT_RANGE(Global_77137.f_208[iParam0], !BitTest(Local_131.f_9, 1));
						HUD::SET_BLIP_FLASHES(Global_77137.f_208[iParam0], false);
						HUD::SET_BLIP_PRIORITY(Global_77137.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (HUD::DOES_BLIP_EXIST(Global_77137.f_208[iParam0]))
		{
			HUD::REMOVE_BLIP(&(Global_77137.f_208[iParam0]));
		}
	}
}

void func_508(int iParam0)//Position - 0x316FA
{
	if (func_69(iParam0, 0) && !func_69(iParam0, 1))
	{
		if (func_69(iParam0, 4))
		{
			if (BitTest(Local_131.f_9, 3))
			{
				func_509(&(Local_131.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_359(iParam0, 1, 1);
			}
			else
			{
				func_359(iParam0, 1, 1);
			}
		}
	}
}

void func_509(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x31753
{
	func_319(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_510(int iParam0)//Position - 0x31774
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!BitTest(Local_131.f_9, 7) || Local_131.f_12 == iLocal_129)
	{
		bLocal_130 = true;
	}
	else
	{
		bLocal_130 = false;
	}
	if (func_27(14))
	{
		bLocal_130 = false;
	}
	if ((bLocal_130 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && BitTest(Local_131.f_9, 14))
	{
		if (Local_56.f_2 == 0 && Local_56.f_3 == 0)
		{
			if (fLocal_152[iParam0] < Local_56.f_1 || Local_56.f_0 == iParam0)
			{
				if (Local_56.f_0 != iParam0)
				{
					Local_56.f_8 = { Local_131 };
					Local_56.f_29 = { Local_140 };
					Local_56.f_0 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_77137.f_592)
					{
						Global_77137.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_56.f_6 = -1;
					if ((Local_56.f_0 == 12 || Local_56.f_0 == 13) || Local_56.f_0 == 14)
					{
						Local_56.f_6 = 0;
					}
					else if ((Local_56.f_0 == 15 || Local_56.f_0 == 16) || Local_56.f_0 == 17)
					{
						Local_56.f_6 = 1;
					}
					else if ((Local_56.f_0 == 18 || Local_56.f_0 == 19) || Local_56.f_0 == 20)
					{
						Local_56.f_6 = 2;
					}
					else if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
					{
						Local_56.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = func_135(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_77137.f_592)
							{
								switch (Local_56.f_6)
								{
									case 3:
										if (func_67(iVar2))
										{
											Global_77137.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar2))
										{
											Global_77137.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((VEHICLE::IS_THIS_MODEL_A_BOAT(iVar2) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_77137.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_68(iVar2))
										{
											Global_77137.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_56.f_1 = fLocal_152[iParam0];
			}
		}
	}
	else if (Local_56.f_0 == iParam0)
	{
		Local_56.f_0 = -1;
		Local_56.f_1 = 99999.99f;
	}
	if (!BitTest(uLocal_48[iParam0], 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iParam0], false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_139[iParam0], false))
					{
						if (!BitTest(uLocal_48[iParam0], 1) || BitTest(uLocal_48[iParam0], 3))
						{
							MISC::SET_BIT(&(uLocal_48[iParam0]), 0);
							func_359(iParam0, 4, 1);
							func_359(iParam0, 2, 1);
						}
					}
					else
					{
						MISC::SET_BIT(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[iParam0], false)) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_171)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_77137.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, false, true, 0))
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Global_77137.f_484[iParam0], 0f);
					iLocal_171 = 1;
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_77137.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, false, true, 0))
			{
				VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Global_77137.f_484[iParam0], 1f);
				iLocal_171 = 0;
			}
		}
		else
		{
			iLocal_171 = 0;
		}
	}
}

int func_511()//Position - 0x31B8B
{
	return 1;
}

var func_512(var uParam0, int iParam1)//Position - 0x31B94
{
	uParam0->f_80 = 0;
	uParam0->f_69 = 0;
	StringCopy(&(uParam0->f_59), "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1652.454f, -3059.149f, 24.932f };
			uParam0->f_14.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_12 = 38.2303f;
			uParam0->f_14.f_6 = { -1651.547f, -3060.478f, 23.8077f };
			uParam0->f_14.f_6.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1650.431f, -3177.229f, 16.9898f };
			uParam0->f_29.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_12 = 38.2303f;
			uParam0->f_29.f_6 = { -1647.495f, -3173.728f, 16.6439f };
			uParam0->f_29.f_6.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_10 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_13 = 60.1875f;
			uParam0->f_48 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_51 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_54 = 60.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 13:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
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
			uParam0->f_7 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_10 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_13 = 66.1875f;
			uParam0->f_48 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_51 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_54 = 66.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 14:
			*uParam0 = { 1727.302f, 3291.453f, 39.61911f };
			uParam0->f_3 = { 1744.108f, 3296.215f, 44.17199f };
			uParam0->f_6 = 4.6875f;
			uParam0->f_44 = { 1737.53f, 3289.239f, 40.1448f };
			uParam0->f_47 = 14.8763f;
			uParam0->f_14 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_12 = 50f;
			uParam0->f_14.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_12 = 50f;
			uParam0->f_29.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_10 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_13 = 28.125f;
			uParam0->f_48 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_51 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME2", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 18:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -739.1531f, -1439.509f, 3.188024f };
			uParam0->f_10 = { -753.7792f, -1426.756f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
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
			uParam0->f_48 = { -738.7791f, -1439.377f, 9.125515f };
			uParam0->f_51 = { -755.9111f, -1425.006f, 1.688014f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 19:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -755.6812f, -1459.234f, 3.188023f };
			uParam0->f_10 = { -770.7671f, -1446.867f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
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
			uParam0->f_48 = { -755.5715f, -1459.453f, 9.125514f };
			uParam0->f_51 = { -771.4204f, -1446.235f, 1.688017f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 20:
			*uParam0 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_3 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_6 = 17.75f;
			uParam0->f_7 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_10 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_13 = 17.75f;
			uParam0->f_44 = { 1761.122f, 3250.125f, 40.733f };
			uParam0->f_47 = 236.5858f;
			uParam0->f_14 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_12 = 40f;
			uParam0->f_14.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { 1802.327f, 3245.165f, 46.95544f };
			uParam0->f_51 = { 1755.04f, 3237.17f, 38.6937f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME2", 16);
			uParam0->f_67 = 0;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 15:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -845.2216f, -1356.04f, -0.212093f };
			uParam0->f_10 = { -841.6451f, -1365.777f, 3.787907f };
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
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 16:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -848.8177f, -1347.786f, -0.212093f };
			uParam0->f_10 = { -845.2482f, -1357.936f, 3.787908f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -839.2461f, -1349.525f, 0.6102f };
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
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 17:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -851.6987f, -1339.128f, -0.212129f };
			uParam0->f_10 = { -848.128f, -1349.168f, 3.787905f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -842.0763f, -1341.401f, 0.6102f };
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
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 21:
			*uParam0 = { -63.38147f, 84.0594f, 70.52139f };
			uParam0->f_3 = { -66.17774f, 77.95913f, 74.05372f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -65.2041f, 81.0524f, 70.5666f };
			uParam0->f_47 = 243.8699f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
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
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -62.62f, 80.03f, 70.62f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME1", 16);
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
			*uParam0 = { -72.41166f, -1824.142f, 25.81704f };
			uParam0->f_3 = { -68.70254f, -1819.642f, 29.37954f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -70.1992f, -1823.225f, 25.942f };
			uParam0->f_47 = 46.1535f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
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
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -71.29f, -1821.68f, 25.94f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME2", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 53.0985f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -64.2268f, -1832.598f, 25.8666f };
			uParam0->f_77[0] = 274.6339f;
			uParam0->f_70[1 /*3*/] = { -68.5531f, -1824.377f, 25.9424f };
			uParam0->f_77[1] = 215.8295f;
			uParam0->f_80 = 1;
			break;
		
		case 23:
			*uParam0 = { -220.7794f, -1159.28f, 21.90302f };
			uParam0->f_3 = { -220.7273f, -1165.265f, 25.45053f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -220.7592f, -1162.277f, 22.0242f };
			uParam0->f_47 = 271.2097f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
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
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -218.35f, -1162.18f, 22.02f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME3", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 271.2097f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -222.1935f, -1162.113f, 22.0204f };
			uParam0->f_77[0] = 358.5703f;
			uParam0->f_70[1 /*3*/] = { -220.8189f, -1162.302f, 22.0242f };
			uParam0->f_77[1] = 70.2711f;
			uParam0->f_80 = 1;
			break;
	}
	return uParam0->f_80;
}

int func_513()//Position - 0x3333E
{
	func_514();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_514()//Position - 0x33357
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_441(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_440(PLAYER::PLAYER_PED_ID());
			if (func_25(iVar0) && (!func_27(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_25(Global_113386.f_2363.f_539.f_4321))
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

void func_515()//Position - 0x33454
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (HUD::DOES_BLIP_EXIST(Global_77137.f_208[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Global_77137.f_208[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iVar0], false))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_77137.f_139[iVar0], true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iVar0]));
					Global_77137.f_139[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(Local_56.f_110))
	{
		CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
		CAM::DESTROY_CAM(Local_56.f_110, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_56.f_111))
	{
		CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
		CAM::DESTROY_CAM(Local_56.f_111, false);
	}
	if (Local_56.f_3 != 0)
	{
		func_307();
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	if (HUD::DOES_BLIP_EXIST(Global_77137.f_583))
	{
		HUD::REMOVE_BLIP(&(Global_77137.f_583));
	}
	if (iLocal_115 != -1)
	{
		func_71(&iLocal_115);
	}
	if (iLocal_114 != -1)
	{
		func_71(&iLocal_114);
	}
	if (Local_56.f_5 != -1)
	{
		func_71(&(Local_56.f_5));
	}
	if (iLocal_125 != -1)
	{
		func_71(&iLocal_125);
	}
	if (Local_56.f_3 > 0)
	{
		if (Global_77137.f_577)
		{
			func_261(47, 1);
			func_259(47, 1);
			Global_77137.f_577 = 0;
			Local_56.f_3 = 0;
		}
	}
	Global_77137.f_553 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_516()//Position - 0x335C2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_53[iVar0]));
		}
		iVar0++;
	}
}

void func_517(int iParam0)//Position - 0x335F5
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	if (!BitTest(iLocal_150[iVar0], bVar1))
	{
		MISC::SET_BIT(&(iLocal_150[iVar0]), bVar1);
		iLocal_149[iLocal_148] = iParam0;
		iLocal_148++;
	}
}

void func_518()//Position - 0x33638
{
	int iVar0;
	
	if (func_330(25))
	{
		if (Global_113386.f_32749.f_69[22 /*78*/].f_66 != 0 && !func_39(Global_113386.f_32749.f_69[22 /*78*/].f_66, 0))
		{
			Global_113386.f_32749.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_113386.f_32749.f_69[22 /*78*/].f_77 = 0;
			Global_113386.f_32749.f_69[22 /*78*/].f_65 = 0;
			Global_113386.f_32749.f_69[22 /*78*/].f_62 = 255;
			Global_113386.f_32749.f_69[22 /*78*/].f_63 = 255;
			Global_113386.f_32749.f_69[22 /*78*/].f_64 = 255;
			Global_113386.f_32749.f_69[22 /*78*/].f_5 = 0;
			Global_113386.f_32749.f_69[22 /*78*/].f_6 = 0;
			Global_113386.f_32749.f_69[22 /*78*/].f_7 = 0;
			Global_113386.f_32749.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_113386.f_32749.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_113386.f_32749.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_330(21) && Global_113386.f_32749.f_69[9 /*78*/].f_66 != 0) && !func_39(Global_113386.f_32749.f_69[9 /*78*/].f_66, 0))
	{
		Global_113386.f_32749.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_330(22) && Global_113386.f_32749.f_69[10 /*78*/].f_66 != 0) && !func_39(Global_113386.f_32749.f_69[10 /*78*/].f_66, 0))
	{
		Global_113386.f_32749.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_330(23) && Global_113386.f_32749.f_69[11 /*78*/].f_66 != 0) && !func_39(Global_113386.f_32749.f_69[11 /*78*/].f_66, 0))
	{
		Global_113386.f_32749.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_330(26) && !func_39(Global_113386.f_32749.f_69[12 /*78*/].f_66, 0))
	{
		func_519(26, 0);
	}
	if (func_330(27) && !func_39(Global_113386.f_32749.f_69[13 /*78*/].f_66, 0))
	{
		func_519(27, 0);
	}
	if (func_330(28) && !func_39(Global_113386.f_32749.f_69[14 /*78*/].f_66, 0))
	{
		func_519(28, 0);
	}
	if (func_330(29) && !func_39(Global_113386.f_32749.f_69[15 /*78*/].f_66, 0))
	{
		func_519(29, 0);
	}
	if (func_330(30) && !func_39(Global_113386.f_32749.f_69[16 /*78*/].f_66, 0))
	{
		func_519(30, 0);
	}
	if (func_330(31) && !func_39(Global_113386.f_32749.f_69[17 /*78*/].f_66, 0))
	{
		func_519(31, 0);
	}
	if (func_330(32) && !func_39(Global_113386.f_32749.f_69[18 /*78*/].f_66, 0))
	{
		func_519(32, 0);
	}
	if (func_330(33) && !func_39(Global_113386.f_32749.f_69[19 /*78*/].f_66, 0))
	{
		func_519(33, 0);
	}
	if (func_330(34) && !func_39(Global_113386.f_32749.f_69[20 /*78*/].f_66, 0))
	{
		func_519(34, 0);
	}
}

void func_519(int iParam0, bool bParam1)//Position - 0x339BD
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_69(iParam0, 0))
		{
			func_359(iParam0, 1, 0);
			func_359(iParam0, 2, 0);
			func_359(iParam0, 3, 0);
			func_359(iParam0, 4, 0);
			func_359(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_359(iParam0, 0, 0);
	}
}

int func_520()//Position - 0x33A1A
{
	return 0;
}

int func_521()//Position - 0x33A23
{
	return 1;
}

int func_522()//Position - 0x33A2C
{
	return 1;
}

int func_523()//Position - 0x33A35
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

void func_524(var uParam0)//Position - 0x33A4E
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_528();
	func_527();
	func_525();
}

void func_525()//Position - 0x33A8B
{
	Global_111764 = 2405.849f;
	Global_111767 = 2408.22f;
	Global_111770 = 2386.096f;
	Global_111773 = 69.1875f;
	Global_111776[0 /*3*/] = 2417.105f;
	Global_111776[1 /*3*/] = 2407.058f;
	Global_111776[2 /*3*/] = 2371.92f;
	Global_111776[3 /*3*/] = 2399.583f;
	Global_111776[4 /*3*/] = 2416.519f;
	Global_111776[5 /*3*/] = 2430.345f;
	Global_111776[6 /*3*/] = 2385.819f;
	Global_111798[0] = 157.8636f;
	Global_111798[1] = 174.7226f;
	Global_111798[2] = 270.7562f;
	Global_111798[3] = 190.7495f;
	Global_111798[4] = 27.6506f;
	Global_111798[5] = 358.1218f;
	Global_111798[6] = 339.4363f;
	Global_111806 = 2399.82f;
	Global_111809 = 2414.7f;
	func_526(&Global_110133, 64);
}

void func_526(var uParam0, int iParam1)//Position - 0x33B7B
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_527()//Position - 0x33B8C
{
	Global_110138[0 /*3*/].f_1 = 5141.01f;
	Global_110138[1 /*3*/].f_1 = 6048.71f;
	Global_110138[2 /*3*/].f_1 = 6185.32f;
	Global_110138[3 /*3*/].f_1 = 5180.99f;
	Global_110138[4 /*3*/].f_1 = 4582.72f;
	Global_110138[5 /*3*/].f_1 = 4831.82f;
	Global_110138[6 /*3*/].f_1 = 4322.66f;
	Global_110138[7 /*3*/].f_1 = 3503.92f;
	Global_110138[8 /*3*/].f_1 = 3777.54f;
	Global_110138[9 /*3*/].f_1 = 3810.8f;
	Global_110138[10 /*3*/].f_1 = 3095.88f;
	Global_110172[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_110172[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_110172[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_110172[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_110172[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_110172[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_110172[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_110172[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_110172[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_110172[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_110172[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_110172[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_110172[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_110172[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_110172[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_110172[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_110172[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_110172[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_110172[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_110172[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_110172[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_110172[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_110172[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_110172[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_110172[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_110172[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_110172[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_110172[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_110172[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_110172[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_110172[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_110172[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_110172[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_110172[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_110172[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_110172[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_110172[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_110172[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_110172[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_110172[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_110172[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_110172[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_110172[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_110172[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_110172[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_110172[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_110172[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_110172[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_110172[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_110172[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_110172[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_110172[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_110172[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_110172[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_110172[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_110172[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_110172[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_110172[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_110172[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_110172[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_110172[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_110172[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_110172[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_526(&Global_110133, 16);
}

void func_528()//Position - 0x34091
{
	Global_110089[0 /*3*/] = -1567.382f;
	Global_110089[1 /*3*/] = -1436.305f;
	Global_110089[2 /*3*/] = 31.2408f;
	Global_110089[3 /*3*/] = 278.1924f;
	Global_110089[4 /*3*/] = 1116.002f;
	Global_110089[5 /*3*/] = 1676.193f;
	Global_110111[0 /*3*/] = -1592.642f;
	Global_110111[1 /*3*/] = -1573.501f;
	Global_110111[2 /*3*/] = -1459.359f;
	Global_110111[3 /*3*/] = 21.1005f;
	Global_110111[4 /*3*/] = 262.9409f;
	Global_110111[5 /*3*/] = 1091.07f;
	func_526(&Global_110133, 1);
}

