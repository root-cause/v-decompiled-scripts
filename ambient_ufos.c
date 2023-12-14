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
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<3> Local_77[2];
	bool bLocal_84 = 0;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	Local_63 = { -1124.3922f, -514.70013f, 33.21493f };
	fLocal_66 = 200f;
	Local_67 = { 2490f, 3777f, 2402.879f };
	Local_70 = { -2052f, 3237f, 1450.078f };
	iLocal_73 = -1;
	iLocal_75 = -1;
	bLocal_84 = true;
	fLocal_85 = 10f;
	fLocal_86 = 90f;
	fLocal_87 = 35f;
	fLocal_88 = 60f;
	fLocal_89 = 275f;
	iLocal_90 = 1500;
	iLocal_91 = -1;
	iLocal_93 = 3000;
	iLocal_94 = 708;
	iLocal_95 = 377;
	iLocal_96 = 1000;
	iLocal_97 = 2093;
	iLocal_100 = -1;
	iLocal_101 = -1;
	bLocal_102 = true;
	bLocal_103 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_12();
	}
	while (CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}
	if (!STREAMING::IS_IPL_ACTIVE("ufo"))
	{
		STREAMING::REQUEST_IPL("ufo");
	}
	Local_77[0 /*3*/] = { Local_67 };
	Local_77[1 /*3*/] = { Local_70 };
	while (true)
	{
		func_11(PLAYER::PLAYER_PED_ID());
		if (Global_32833 == 1)
		{
			func_12();
		}
		if (bLocal_84)
		{
			if (!func_10(PLAYER::PLAYER_PED_ID(), Local_77[0 /*3*/], (290f + 50f), 1))
			{
				if (!func_10(PLAYER::PLAYER_PED_ID(), Local_77[1 /*3*/], (290f + 50f), 1))
				{
					func_12();
				}
			}
			if (iLocal_76 != 0)
			{
				if (!func_10(PLAYER::PLAYER_PED_ID(), Local_77[0 /*3*/], (fLocal_89 + 50f), 1))
				{
					if (!func_10(PLAYER::PLAYER_PED_ID(), Local_77[1 /*3*/], (fLocal_89 + 50f), 1))
					{
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", false, true);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", false, true);
						iLocal_76 = 0;
						iLocal_75 = -1;
					}
				}
			}
		}
		func_8();
		switch (iLocal_76)
		{
			case 0:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_77.f_0)
				{
					if (func_10(PLAYER::PLAYER_PED_ID(), Local_77[iVar0 /*3*/], fLocal_89, 1))
					{
						iLocal_75 = iVar0;
						iLocal_76 = 1;
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", true, true);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", true, true);
					}
					iVar0++;
				}
				break;
			
			case 1:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_77.f_0)
				{
					if (func_10(PLAYER::PLAYER_PED_ID(), Local_77[iVar0 /*3*/], fLocal_86, 1))
					{
						iLocal_75 = iVar0;
						iLocal_76 = 2;
					}
					iVar0++;
				}
				break;
			
			case 2:
				if (iLocal_75 == -1)
				{
					iLocal_76 = 1;
				}
				else
				{
					iLocal_73 = MISC::GET_GAME_TIMER();
					iLocal_74 = 0;
					iLocal_76 = 3;
				}
				break;
			
			case 3:
				if (func_10(PLAYER::PLAYER_PED_ID(), Local_77[iLocal_75 /*3*/], fLocal_86, 1))
				{
					iLocal_74 = (MISC::GET_GAME_TIMER() - iLocal_73);
					if (iLocal_74 >= iLocal_90)
					{
						iLocal_76 = 4;
						iLocal_91 = AUDIO::GET_SOUND_ID();
						iLocal_92 = MISC::GET_GAME_TIMER();
						if (iLocal_75 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_91, "SPECIAL_EVIL_UFO_DEATH_RAY", Local_77[iLocal_75 /*3*/], 0, false, 0, false);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_91, "SPECIAL_EVIL_UFO_DEATH_RAY_3", Local_77[iLocal_75 /*3*/], 0, false, 0, false);
						}
						func_7();
						func_6();
					}
				}
				else
				{
					iLocal_76 = 1;
				}
				break;
			
			case 4:
				func_5();
				func_7();
				func_6();
				if (MISC::GET_GAME_TIMER() > (iLocal_92 + iLocal_93))
				{
					func_4(&iLocal_91);
				}
				if (!func_10(PLAYER::PLAYER_PED_ID(), Local_77[iLocal_75 /*3*/], fLocal_89, 1))
				{
					func_1();
					iLocal_75 = -1;
					iLocal_76 = 0;
					func_4(&iLocal_101);
					func_4(&iLocal_100);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", false, true);
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x3A3
{
	int iVar0;
	
	if (func_11(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (func_2(iVar0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, true, false, false);
			}
		}
	}
}

int func_2(int iParam0)//Position - 0x3DF
{
	if (func_3(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)//Position - 0x409
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_4(int iParam0)//Position - 0x42A
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

void func_5()//Position - 0x44B
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_2(iVar0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, false, false);
			ENTITY::APPLY_FORCE_TO_ENTITY(iVar0, 2, 0f, 0f, -fLocal_85, 0f, 1f, 0f, 0, false, true, true, false, true);
		}
	}
}

void func_6()//Position - 0x491
{
	if (bLocal_103)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_98)
		{
			if (iLocal_100 != -1)
			{
				func_4(&iLocal_100);
				iLocal_98 = (MISC::GET_GAME_TIMER() + iLocal_97);
			}
			else
			{
				iLocal_100 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(iLocal_100, "ent_amb_elec_crackle", 0, false, 0, true);
				iLocal_98 = (MISC::GET_GAME_TIMER() + iLocal_95);
			}
		}
	}
}

void func_7()//Position - 0x4DB
{
	if (bLocal_102)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_99)
		{
			if (iLocal_101 != -1)
			{
				func_4(&iLocal_101);
				iLocal_99 = (MISC::GET_GAME_TIMER() + iLocal_96);
			}
			else
			{
				iLocal_101 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(iLocal_101, "spl_stun_npc_master", 0, false, 0, true);
				iLocal_99 = (MISC::GET_GAME_TIMER() + iLocal_94);
			}
		}
	}
}

void func_8()//Position - 0x525
{
	struct<3> Var0;
	
	if (iLocal_75 == -1)
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	if (!func_10(PLAYER::PLAYER_PED_ID(), Local_77[iLocal_75 /*3*/], fLocal_87, 1))
	{
		return;
	}
	Var0 = { func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Local_77[iLocal_75 /*3*/]) * Vector(fLocal_88, fLocal_88, fLocal_88) };
	ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 2, Var0, 0f, 0f, 0f, 0, false, true, true, false, true);
}

Vector3 func_9(struct<3> Param0)//Position - 0x593
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

bool func_10(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x5D2
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5), Param1) <= (fParam4 * fParam4);
}

bool func_11(int iParam0)//Position - 0x5F0
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_12()//Position - 0x60E
{
	if (STREAMING::IS_IPL_ACTIVE("ufo"))
	{
		STREAMING::REMOVE_IPL("ufo");
	}
	func_4(&iLocal_101);
	func_4(&iLocal_100);
	func_4(&iLocal_91);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", false, true);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", false, true);
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

