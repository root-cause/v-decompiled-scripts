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
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
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
	var uLocal_85 = 12;
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
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 49;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 2;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	struct<3> Local_172 = { 0, 0, 0 } ;
	struct<3> Local_175 = { 0, 0, 0 } ;
	float fLocal_178 = 0f;
	int iLocal_179 = 0;
	struct<3> Local_180 = { 0, 0, 0 } ;
	var uLocal_183 = 0;
	char* sLocal_184 = NULL;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	char[] cLocal_200[8] = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
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
	Local_60 = { 0f, 0f, 0f };
	Local_63 = { 0f, 0f, 0f };
	iLocal_66 = -1;
	iLocal_69 = 318;
	iLocal_70 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_53();
	}
	SYSTEM::WAIT(0);
	func_23();
	func_22();
	func_18();
	while (iLocal_70 && func_8(2, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_68)
		{
			case 0:
				if (func_6())
				{
					iLocal_68 = 1;
				}
				break;
			
			case 1:
				if (func_4())
				{
					iLocal_68 = 2;
				}
				break;
			
			case 2:
				if (func_2())
				{
					iLocal_68 = 3;
				}
				break;
			
			case 3:
				func_1();
				break;
		}
	}
	func_53();
}

void func_1()//Position - 0x110
{
	iLocal_70 = 0;
}

int func_2()//Position - 0x11B
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (!func_3(&uVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_71, false) };
		fVar4 = SYSTEM::VDIST2(Local_175 + Local_180, Var1);
		if (fVar4 < (4.5f * 4.5f))
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_71, iLocal_73, fLocal_178, 786599);
			return 1;
		}
	}
	return 0;
}

int func_3(var uParam0)//Position - 0x16F
{
	if (!PED::IS_PED_INJURED(Global_100554))
	{
	}
	else
	{
		iLocal_68 = 3;
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
	}
	else
	{
		iLocal_68 = 3;
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false))
	{
	}
	else
	{
		iLocal_68 = 3;
		return 1;
	}
	return 0;
}

int func_4()//Position - 0x1B6
{
	var uVar0;
	float fVar1;
	int iVar2;
	
	if (!func_3(&uVar0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_98142))
		{
		}
		else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_98143))
		{
			PED::TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(Global_98143);
			fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_98143);
			if (!func_5(Global_100554, iLocal_73, 2))
			{
				if (fVar1 >= 0.9f)
				{
					PED::SET_PED_INTO_VEHICLE(Global_100554, iLocal_73, 2);
				}
			}
			if (!iLocal_179)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_71, false);
				iLocal_179 = 1;
			}
			TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_71, iLocal_73, 6, 50);
		}
		else
		{
			if (!func_5(Global_100554, iLocal_73, 2))
			{
				PED::SET_PED_INTO_VEHICLE(Global_100554, iLocal_73, 2);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_73, -8f, true);
			SYSTEM::WAIT(100);
			if (!func_3(&uVar0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_73, 24, 50);
				TASK::TASK_PAUSE(0, 2000);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_73, Local_175 + Local_180, fLocal_178, 0, iLocal_74, 786599, ((4.5f / 2f) - 1f), 10f);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				return 1;
			}
		}
	}
	return 0;
}

int func_5(int iParam0, int iParam1, int iParam2)//Position - 0x2C5
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2, false) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6()//Position - 0x303
{
	if (!func_7())
	{
		return 1;
	}
	return 0;
}

int func_7()//Position - 0x318
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		return 0;
	}
	if (STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
	{
		if (STREAMING::GET_PLAYER_SWITCH_STATE() != 11)
		{
			return 0;
		}
		if (STREAMING::GET_PLAYER_SWITCH_STATE() == 11)
		{
			if (STREAMING::GET_PLAYER_SWITCH_INTERP_OUT_DURATION() > 0)
			{
				if (STREAMING::GET_PLAYER_SWITCH_INTERP_OUT_CURRENT_TIME() > 100)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_8(int iParam0, int iParam1)//Position - 0x36D
{
	struct<3> Var0;
	float fVar3;
	
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (func_17(14))
		{
			return 0;
		}
		if (MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
		{
			return 0;
		}
		if (!func_10(iParam0, func_11()))
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
			fVar3 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0);
			if (fVar3 > 250f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam1))
					{
						return 0;
					}
				}
				else if (!CAM::IS_SPHERE_VISIBLE(Var0, 1.5f))
				{
					return 0;
				}
			}
		}
		else if (iParam1 == func_9(Global_100554) && iParam1 != 0)
		{
			Global_100554 = 0;
		}
	}
	return 1;
}

int func_9(var uParam0)//Position - 0x451
{
	return uParam0;
}

bool func_10(var uParam0, var uParam1)//Position - 0x45B
{
	return (uParam0 && uParam1) != 0;
}

int func_11()//Position - 0x46A
{
	func_12();
	switch (Global_113810.f_2366.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_12()//Position - 0x4B0
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_15(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_14(PLAYER::PLAYER_PED_ID());
			if (func_13(iVar0) && (!func_17(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_13(Global_113810.f_2366.f_539.f_4321))
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

bool func_13(int iParam0)//Position - 0x5AD
{
	return iParam0 < 3;
}

int func_14(int iParam0)//Position - 0x5B9
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)//Position - 0x5F6
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)//Position - 0x61B
{
	return Global_2058[iParam0 /*29*/];
}

bool func_17(int iParam0)//Position - 0x62A
{
	return Global_43377 == iParam0;
}

void func_18()//Position - 0x638
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_21();
		}
		return;
	}
	if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		func_21();
		return;
	}
	func_19();
	if (Global_100556 > 0)
	{
		return;
	}
	STREAMING::ALLOW_PLAYER_SWITCH_OUTRO();
}

void func_19()//Position - 0x678
{
	func_20((Global_100556 - 1));
}

void func_20(int iParam0)//Position - 0x68A
{
	Global_100556 = iParam0;
}

void func_21()//Position - 0x698
{
	func_20(0);
}

void func_22()//Position - 0x6A5
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(iLocal_72);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_72, true);
	iLocal_73 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_180 + Local_172, 15f, iLocal_74, 2);
	iVar0 = 0;
	while ((!ENTITY::DOES_ENTITY_EXIST(Global_100554) || !ENTITY::DOES_ENTITY_EXIST(iLocal_73)) || (!STREAMING::HAS_MODEL_LOADED(iLocal_72) && iVar0 < 400))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_73))
		{
			iLocal_73 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_180 + Local_172, 15f, iLocal_74, 2);
		}
		iVar0++;
		SYSTEM::WAIT(0);
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100554, true, true);
	if (ENTITY::DOES_ENTITY_EXIST(Global_100554))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_100554, Global_95817);
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_100554, "A_F_Y_BevHills_01_White_FULL_01");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_73, false))
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_73, true, true, false);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_73, 2);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_73, 5f);
		iLocal_71 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_73, 4, iLocal_72, -1, true, true);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_71, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_72);
	}
}

void func_23()//Position - 0x7A1
{
	char[] cVar0[8];
	var uVar8;
	struct<109> Var9;
	struct<97> Var118;
	var uVar238;
	var uVar239;
	
	iLocal_69 = Global_100236;
	func_45(iLocal_69, &Local_180, &uLocal_183, &cVar0);
	iLocal_72 = joaat("A_M_M_EastSA_02");
	func_29(1, iLocal_69, &iLocal_74, &Local_172, &uVar8, &Local_175, &fLocal_178);
	Var9.f_1 = -1;
	Var9.f_17 = 4;
	Var9.f_17.f_8 = 4;
	Var9.f_17.f_13 = 4;
	Var9.f_17.f_18 = 4;
	Var9.f_17.f_24 = 4;
	Var9.f_17.f_29 = 4;
	Var9.f_17.f_34 = 4;
	Var9.f_62 = 8;
	Var9.f_96.f_7 = 21;
	Var9.f_96.f_8 = 6;
	Var118.f_1 = -1;
	Var118.f_17 = 4;
	Var118.f_17.f_8 = 4;
	Var118.f_17.f_13 = 4;
	Var118.f_17.f_18 = 4;
	Var118.f_17.f_24 = 4;
	Var118.f_17.f_29 = 4;
	Var118.f_17.f_34 = 4;
	Var118.f_62 = 8;
	Var118.f_96.f_7 = 21;
	Var118.f_96.f_8 = 6;
	Var9.f_0 = 0;
	Var9.f_2 = iLocal_69;
	Var9.f_3 = Global_98291.f_45;
	func_26(Var9, &Var118);
	func_24(iLocal_69, &sLocal_184, &cLocal_200, &cLocal_200, &uVar238, &uVar239);
}

int func_24(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)//Position - 0x8A5
{
	*uParam4 = 9;
	*uParam5 = 8;
	switch (iParam0)
	{
		case 77:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Amanda", 64);
			StringCopy(sParam3, "BED_REACT_Amanda", 64);
			return 1;
			break;
		
		case 78:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Amanda", 64);
			StringCopy(sParam3, "BED_EXIT_Amanda", 64);
			return 1;
			break;
		
		case 79:
			func_25(sParam1, sParam2, sParam3, "SWITCH@MICHAEL@SITTING", "IDLE", "EXIT_FORWARD");
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 86:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Jimmy", 64);
			StringCopy(sParam3, "EXIT_Jimmy", 64);
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Amanda", 64);
			StringCopy(sParam3, "EXIT_Amanda", 64);
			return 1;
			break;
		
		case 122:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_amanda", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_amanda", 64);
			return 1;
			break;
		
		case 98:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_AMA", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_AMA", 64);
			return 1;
			break;
		
		case 150:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_RON", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_RON", 64);
			return 1;
			break;
		
		case 170:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_AMA", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_AMA", 64);
			return 1;
			break;
		
		case 171:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_JMY", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_JMY", 64);
			return 1;
			break;
		
		case 172:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_TRA", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_TRA", 64);
			return 1;
			break;
		
		case 163:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_AMA", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_AMA", 64);
			*uParam5 |= 262144;
			return 1;
			break;
		
		case 151:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_AMANDA", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_AMANDA", 64);
			return 1;
			break;
		
		case 156:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Jimmy", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Jimmy", 64);
			return 1;
			break;
		
		case 152:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_AMA", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_AMA", 64);
			*uParam5 |= 262144;
			return 1;
			break;
		
		case 158:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_HOOKER", 64);
			StringCopy(sParam3, "EXIT_HOOKER", 64);
			return 1;
			break;
		
		case 167:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_JMY", 64);
			return 1;
			break;
		
		case 169:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_JMY", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_JMY", 64);
			return 1;
			break;
		
		case 155:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_AMA", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_AMA", 64);
			return 1;
			break;
		
		case 203:
		case 206:
		case 207:
			if (func_24(205, sParam1, sParam2, sParam3, uParam4, uParam5))
			{
				return 1;
			}
			break;
		
		case 204:
			if (func_24(205, sParam1, sParam2, sParam3, uParam4, uParam5))
			{
				return 1;
			}
			break;
		
		case 205:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE_ROT", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT_ROT", 64);
			return 1;
			break;
		
		case 196:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Tanisha", 64);
			StringCopy(sParam3, "Tanisha_Argue_Tanisha", 64);
			return 1;
			break;
		
		case 215:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_GIRL", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_GIRL", 64);
			return 1;
			break;
		
		case 221:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Hooker", 64);
			StringCopy(sParam3, "switch_ped_Hooker", 64);
			return 1;
			break;
		
		case 218:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_lamar", 64);
			StringCopy(sParam3, "gang_taunt_exit_lamar", 64);
			return 1;
			break;
		
		case 219:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_lamar", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_lamar", 64);
			return 1;
			break;
		
		case 220:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_lamar", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_lamar", 64);
			return 1;
			break;
		
		case 225:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_lamar", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_lamar", 64);
			return 1;
			break;
		
		case 193:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped_f_a", 64);
			return 1;
			break;
		
		case 192:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			return 1;
			break;
		
		case 236:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Bartender", 64);
			StringCopy(sParam3, "EXIT_Bartender", 64);
			return 1;
			break;
		
		case 237:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_BOUNCER", 64);
			StringCopy(sParam3, "EXIT_BOUNCER", 64);
			return 1;
			break;
		
		case 289:
			func_25(sParam1, sParam2, sParam3, "SWITCH@MICHAEL@PIER", "pier_lean_smoke_idle", "pier_lean_smoke_idle");
			return 1;
			break;
		
		case 262:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_NBR", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_NBR", 64);
			return 1;
			break;
		
		case 248:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_GENERIC", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_GENERIC", 64);
			return 1;
			break;
		
		case 249:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_BUSKER", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_BUSKER", 64);
			return 1;
			break;
		
		case 292:
		case 295:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_FLOYD", 64);
			StringCopy(sParam3, "Bed_GetUp_1_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 293:
		case 294:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_FLOYD", 64);
			StringCopy(sParam3, "Bed_GetUp_2_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 299:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Console_Get_Along_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 296:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_floyd", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_floyd", 64);
			return 1;
			break;
		
		case 297:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_floyd", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_floyd", 64);
			return 1;
			break;
		
		case 298:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Pineapple_EXIT_FLOYD", 64);
			return 1;
			break;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return 0;
}

void func_25(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0xFB4
{
	StringCopy(sParam0, sParam3, 64);
	StringCopy(sParam1, sParam4, 64);
	StringCopy(sParam2, sParam5, 64);
}

int func_26(struct<109> Param0, var uParam109)//Position - 0xFCE
{
	uParam109->f_119 = 0;
	switch (Param0.f_2)
	{
		case 0:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_ANY");
			uParam109->f_110 = joaat("SCRIPT_TASK_ANY");
			func_28(uParam109);
			uParam109->f_118 = 0;
			return 0;
			break;
		
		case 1:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = 0;
			return 1;
			break;
		
		case 2:
			*uParam109 = { Global_98944[0 /*109*/] };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = Global_100532[0];
			return 1;
			break;
		
		case 3:
			*uParam109 = { Global_98944[1 /*109*/] };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = Global_100532[1];
			return 1;
			break;
		
		case 4:
			*uParam109 = { Global_98944[2 /*109*/] };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = Global_100532[2];
			return 1;
			break;
		
		case 5:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = Global_100532[Param0.f_3];
			return 1;
			break;
		
		case 6:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = Global_100532[Param0.f_3];
			return 1;
			break;
		
		case 7:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = Global_100532[Param0.f_3];
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_USE_MOBILE_PHONE");
			uParam109->f_110 = joaat("SCRIPT_TASK_USE_MOBILE_PHONE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 11:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 14:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 13:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 15:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 54:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 55:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_USE_MOBILE_PHONE");
			uParam109->f_110 = joaat("SCRIPT_TASK_USE_MOBILE_PHONE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 56:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 57:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 12:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_LEAVE_VEHICLE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_STAND_STILL"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 16:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 17:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 18:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 19:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 20:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 22:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 74:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 67:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 58:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 59:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 60:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 25:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 26:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 27:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 28:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 38:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 40:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 42:
		case 43:
		case 44:
		case 45:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER");
			uParam109->f_110 = joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 47:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 49:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 48:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_ENTER_VEHICLE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 50:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 51:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 52:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 66:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 61:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 62:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 63:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 69:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 64:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 65:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 234:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 316:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 315:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 75:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			func_27(uParam109, 30, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_STAND_STILL"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 76:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 77:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -0.7035f, -0.0282f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 78:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -3.03f, -0.72f, 0.08f, 168f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 79:
		case 80:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 17, joaat("SCRIPT_TASK_PLAY_ANIM"), joaat("SCRIPT_TASK_PLAY_ANIM"), Vector(2.6407f, 8.164f, -14.1564f) + Vector(-1f, 0.03f, -2.16f), (-66f + -56f));
			if (Param0.f_2 == 80)
			{
				func_28(uParam109);
			}
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 124:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 82:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 84:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 83:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 85:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 291:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 86:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 87:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 88:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			if (Param0.f_2 == 92)
			{
				uParam109->f_118 = 1;
			}
			if (Param0.f_2 == 104)
			{
				uParam109->f_118 = 0;
			}
			if (Param0.f_2 == 81)
			{
				func_28(uParam109);
				uParam109->f_118 = 1;
			}
			return 1;
			break;
		
		case 94:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			if (Param0.f_2 == 94)
			{
				func_27(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -1.71f, 1.05f, 0f, -138f);
			}
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 95:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 96:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 134:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 108:
		case 109:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 41:
		case 112:
		case 113:
		case 123:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 150:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 20, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0.98f, 0.8017f, -0.42f, -180f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 118:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 119:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 120:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 114:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 105:
		case 106:
		case 107:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 98:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 99:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_27(uParam109, 15, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 100:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_27(uParam109, 15, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 101:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_27(uParam109, 14, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 102:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_27(uParam109, 14, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 103:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 121:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 122:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -2.04f, -0.15f, 0f, 14.4f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 125:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 110:
		case 111:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 131:
		case 132:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 126:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 128:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 129:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 130:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 133:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 151:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -1.71f, 1.05f, 0f, -138f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 152:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.1779f, 2.4276f, 0f, 162.1022f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 153:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 154:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 155:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 156:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 14, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0.3427f, 1.1592f, 1.0351f, 139.912f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 157:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 158:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 159:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 160:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 161:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 163:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -3.03f, -0.72f, 0.08f, 168f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 164:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 165:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 166:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 167:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 14, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -0.8472f, 0.155f, 0f, 152.556f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 168:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 169:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 14, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -0.3577f, -0.8968f, -0.0003f, 0f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 170:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 17, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 171:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 14, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 172:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 15, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 173:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 174:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = 0;
			return 1;
			break;
	}
	switch (Param0.f_2)
	{
		case 175:
		case 176:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 177:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 178:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 179:
		case 180:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 181:
		case 182:
		case 183:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 192:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1f, 1f, 0f, 0f);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
			break;
		
		case 193:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 4.2943f, -6.7858f, 0f, -133.5332f);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
			break;
		
		case 194:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			func_28(uParam109);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
			break;
		
		case 195:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			func_28(uParam109);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
			break;
		
		case 198:
		case 199:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 200:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 201:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 202:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 184:
		case 185:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 186:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 187:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 188:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 189:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 190:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 191:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 196:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 43, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 197:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 203:
		case 206:
		case 207:
		case 204:
		case 205:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 3.4381f, -0.8269f, 0f, -87.6612f);
			if (Param0.f_2 != 205)
			{
				uParam109->f_112 = { 3.4381f, -0.8269f, 0f };
				uParam109->f_115 = -87.6612f;
			}
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 23:
		case 208:
		case 209:
		case 210:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 24:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 211:
		case 213:
		case 216:
		case 217:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 212:
		case 214:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
			break;
		
		case 215:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 3.4381f, -0.8269f, 0f, -87.6612f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 221:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), -0.7949f, -0.508f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 222:
		case 223:
		case 224:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 218:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 19, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.29f, 1.41f, 0f, 57.52f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 219:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 19, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.29f, 1.41f, 0f, 57.52f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 220:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 19, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0.5504f, -0.2322f, 0f, -9.9741f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 225:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 19, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.23f, 0.6f, -1f, 34.56f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 231:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = 0;
			return 1;
			break;
		
		case 232:
		case 233:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 235:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 236:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 237:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 238:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 239:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 240:
		case 241:
		case 242:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 273:
		case 274:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 245:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 243:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 244:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 271:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 280:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_118 = 1;
			func_28(uParam109);
			return 1;
			break;
		
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_118 = 1;
			func_28(uParam109);
			if (Param0.f_2 == 265)
			{
				uParam109->f_118 = 1;
			}
			if (Param0.f_2 == 268)
			{
				uParam109->f_118 = 0;
			}
			if (Param0.f_2 == 267)
			{
				func_27(uParam109, 144, joaat("SCRIPT_TASK_STAND_STILL"), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), -2.4166f, -0.15f, 0f, -148.7555f);
			}
			if (Param0.f_2 == 266)
			{
				func_27(uParam109, 144, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), -5.7915f, -11.0439f, 0.67f, -72.589f);
			}
			return 1;
			break;
		
		case 246:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 247:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 263:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 278:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 279:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 264:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 255:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 248:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 249:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 281:
		case 282:
		case 283:
		case 284:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 275:
		case 276:
		case 277:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
		
		case 254:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 285:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 256:
		case 257:
		case 258:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 259:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 260:
		case 261:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 286:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 287:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 288:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 262:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 289:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_PLAY_ANIM"), joaat("SCRIPT_TASK_PLAY_ANIM"), -3.264f, -14.7895f, 14.1815f, -0.6311f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 290:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 292:
		case 295:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 293:
		case 294:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 299:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0.24f, 0.33f, -0.5f, -11.88f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0.24f, 0.33f, -0.5f, -11.88f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 296:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.41f, 1.35f, 0f, 168f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 297:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1.7491f, 0.6423f, 0f, 166.479f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 298:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_27(uParam109, 32, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 0.72f, -0.69f, 0f, 172.44f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 304:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 305:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_PLAY_ANIM");
			uParam109->f_110 = joaat("SCRIPT_TASK_PLAY_ANIM");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 306:
		case 307:
		case 308:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 309:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_STAND_STILL");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 310:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 311:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			uParam109->f_110 = joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE");
			func_28(uParam109);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 312:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY");
			uParam109->f_110 = joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY");
			func_27(uParam109, 144, joaat("SCRIPT_TASK_COWER"), joaat("SCRIPT_TASK_HANDS_UP"), -9.5443f, -3.191f, -0.3f, 180f);
			uParam109->f_118 = 1;
			return 1;
			break;
		
		case 313:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_STAND_STILL");
			func_28(uParam109);
			uParam109->f_118 = 0;
			return 1;
			break;
		
		case 314:
			*uParam109 = { Param0 };
			uParam109->f_109 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			uParam109->f_110 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
			func_28(uParam109);
			uParam109->f_118 = 2;
			return 1;
			break;
	}
	*uParam109 = { Param0 };
	uParam109->f_109 = joaat("SCRIPT_TASK_ANY");
	uParam109->f_110 = joaat("SCRIPT_TASK_ANY");
	func_28(uParam109);
	uParam109->f_118 = 0;
	return 0;
}

void func_27(var uParam0, int iParam1, int iParam2, int iParam3, struct<3> Param4, float fParam7)//Position - 0x4349
{
	uParam0->f_111 = iParam1;
	uParam0->f_116 = iParam2;
	uParam0->f_117 = iParam3;
	uParam0->f_112 = { Param4 };
	uParam0->f_115 = fParam7;
}

void func_28(var uParam0)//Position - 0x4373
{
	func_27(uParam0, 145, joaat("SCRIPT_TASK_ANY"), joaat("SCRIPT_TASK_ANY"), 0f, 0f, 0f, 0f);
}

int func_29(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x4391
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_100237[iParam0 /*98*/] };
			if (Global_100532[iParam0] != 2)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_100540[iParam0 /*3*/], -829.7478f, 192.11703f, 76.73248f, -827.13837f, 153.85951f, 59.961723f, 33.25f, false, true))
				{
					if (Global_100532[iParam0] == 1)
					{
						*uParam3 = { Global_100540[iParam0 /*3*/] - Global_113810.f_2366.f_539.f_2300[iParam0 /*3*/] };
						*uParam4 = (Global_100550[iParam0] - Global_113810.f_2366.f_539.f_2310[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_100540[iParam0 /*3*/] - Global_113810.f_2366.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_100550[iParam0] - Global_113810.f_2366.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_100237[iParam0 /*98*/] };
			if (Global_100532[iParam0] != 2)
			{
				*uParam3 = { Global_100540[iParam0 /*3*/] - Global_113810.f_2366.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_100550[iParam0] - Global_113810.f_2366.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_100237[iParam0 /*98*/] };
			if (Global_100532[iParam0] != 2)
			{
				*uParam3 = { Global_100540[iParam0 /*3*/] - Global_113810.f_2366.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_100550[iParam0] - Global_113810.f_2366.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.1947f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		
		case 9:
			return func_29(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_29(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_31(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.4985f, 782.1644f) - Vector(4.0205f, -2975.3408f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.5203f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_29(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_31(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_31(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_31(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.6798f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.7855f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		
		case 40:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.4985f, 782.1644f) - Vector(4.0205f, -2975.3408f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.4788f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.8425f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.0852f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.7203f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		
		case 52:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_29(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_29(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_29(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_31(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_29(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_29(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_29(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_29(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_29(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_29(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_29(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_29(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_29(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_29(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_31(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_29(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_29(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_29(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_29(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_29(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_29(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_31(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_29(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_29(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_30(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_29(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.9152f, -17.4132f) - Vector(31.1932f, -1441.1821f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.4609f, -147.0307f) - Vector(31.1932f, -1441.1821f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_29(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_29(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28.225f, -1015.1096f, -70.4456f) - Vector(27.5447f, -1019.2347f, -78.4023f) };
			*uParam4 = (162.09804f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.0171f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.0171f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_29(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_29(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.5681f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.2864f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.7875f, 3.6009f) - Vector(29.2903f, -1607.2864f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_29(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_29(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_29(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_29(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_29(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_29(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_29(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_29(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_30(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_29(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_29(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.4209f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.0466f, 1399.6621f) - Vector(37.9419f, 3602.284f, 1394.2081f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.2047f, -1243.6498f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.5349f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.1196f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.7816f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.8779f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.1743f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.7998f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.7335f, 185.4888f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.1594f, -17.556f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.1511f, -219.3172f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.6935f, -22.6138f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.4458f, -1883.836f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.5566f, -200.684f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.7513f, -1278.0234f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.2205f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.7039f, -1264.2178f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.2819f, 434.9171f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.2819f, 434.9171f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.5045f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.4424f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.1559f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.9182f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.8212f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.7256f, -569.3535f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.5929f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.7451f, 631.8275f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.3232f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.6665f, -179.4242f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.5446f, 486.7419f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.8945f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.3752f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.5072f, -1195.2559f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.2125f, -573.3765f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.5391f, -724.429f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.1135f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_99272[iParam1 /*3*/] };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_31(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_30(int iParam0, var uParam1, int iParam2)//Position - 0x7803
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

int func_31(int iParam0, var uParam1, int iParam2)//Position - 0x7A5F
{
	if (Global_100237[iParam0 /*98*/] == 0)
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("blimp"))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_44(iParam0))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(Global_100237[iParam0 /*98*/]))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_100237[iParam0 /*98*/]))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_100237[iParam0 /*98*/]))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_100237[iParam0 /*98*/]))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_CAR(Global_100237[iParam0 /*98*/]))
		{
			func_30(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Global_100237[iParam0 /*98*/]))
		{
			func_30(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_32(Global_100237[iParam0 /*98*/], 0, -1))
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_30(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_100237[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_100237[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_30(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_100237[iParam0 /*98*/] == *uParam1)
		{
			func_30(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_30(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_100237[iParam0 /*98*/] == *uParam1)
		{
			func_30(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_100237[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_30(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_32(int iParam0, bool bParam1, int iParam2)//Position - 0x7C97
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
		if (!func_43())
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
		if ((((!func_42() && !func_41()) && !func_40()) && !func_39()) && !func_43())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_38() || MISC::IS_PC_VERSION()) || func_37())
		{
		}
		else if (!func_40())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_35(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_33(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_33(int iParam0)//Position - 0x7E19
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_34())
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

int func_34()//Position - 0x7EE5
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_35(int iParam0, int iParam1)//Position - 0x7EFC
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
	else if (iParam0 == func_36(1))
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

int func_36(bool bParam0)//Position - 0xD0D6
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

bool func_37()//Position - 0xD0F0
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_38()//Position - 0xD106
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_39()//Position - 0xD11C
{
	return 0;
}

int func_40()//Position - 0xD125
{
	return 1;
}

int func_41()//Position - 0xD12E
{
	return 1;
}

int func_42()//Position - 0xD137
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_43()//Position - 0xD150
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

int func_44(int iParam0)//Position - 0xD208
{
	if (Global_100237[iParam0 /*98*/] == joaat("blimp") || Global_100237[iParam0 /*98*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("submersible") || Global_100237[iParam0 /*98*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("burrito2") || Global_100237[iParam0 /*98*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("entityxf") && !Global_113810.f_9088.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("cheetah") && !Global_113810.f_9088.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("policeb") && !Global_113810.f_9088.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("ztype") && !Global_113810.f_9088.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("polmav") && !Global_113810.f_9088.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("jb700") && !Global_113810.f_9088.f_330[10 /*6*/])
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("monroe") && !Global_113810.f_9088.f_330[11 /*6*/])
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("firetruk"))
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_100237[iParam0 /*98*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_100237[iParam0 /*98*/] == joaat("gauntlet") && !Global_113810.f_9088.f_330[80 /*6*/]) && !Global_113810.f_9088.f_330[81 /*6*/]) && !Global_113810.f_9088.f_330[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0, var uParam1, var uParam2, char* sParam3)//Position - 0xD488
{
	int iVar0;
	
	if (func_48(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			
			case 1:
				func_46(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_96016[iVar0 /*9*/].f_3 };
					*uParam2 = Global_96016[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_96016[0 /*9*/].f_3 };
					*uParam2 = Global_96016[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			
			case 2:
				*uParam1 = { Global_98944[0 /*109*/].f_4 };
				*uParam2 = Global_98944[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 3:
				*uParam1 = { Global_98944[1 /*109*/].f_4 };
				*uParam2 = Global_98944[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 4:
				*uParam1 = { Global_98944[2 /*109*/].f_4 };
				*uParam2 = Global_98944[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 5:
				*uParam1 = { Global_113810.f_2366.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_113810.f_2366.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 6:
				*uParam1 = { Global_113810.f_2366.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_113810.f_2366.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 7:
				*uParam1 = { Global_113810.f_2366.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_113810.f_2366.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
		}
		*uParam1 = { Global_99272[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

bool func_46(var uParam0)//Position - 0xD683
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	struct<3> Var6;
	float fVar9;
	
	iVar0 = Global_113810.f_2366.f_539.f_4323;
	Var1 = { Global_113810.f_2366.f_539.f_2300[iVar0 /*3*/] };
	if (func_47(Var1, 0f, 0f, 0f, 0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	}
	*uParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (BitTest(Global_113810.f_7232.f_11[iVar5], 0))
		{
			Var6 = { Global_96016[iVar5 /*9*/].f_3 };
			fVar9 = SYSTEM::VDIST(Var1, Var6);
			if (fVar9 > 150f)
			{
				if (fVar9 < fVar4)
				{
					*uParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *uParam0 != 5;
}

bool func_47(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xD73B
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_48(int iParam0, var uParam1, char* sParam2)//Position - 0xD782
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			func_46(&iVar3);
			if (iVar3 < 5)
			{
				*uParam1 = Global_96016[iVar3 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*uParam1 = Global_96016[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 2:
			*uParam1 = Global_98944[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 3:
			*uParam1 = Global_98944[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 4:
			*uParam1 = Global_98944[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 5:
			*uParam1 = Global_113810.f_2366.f_539.f_2310[0];
			StringCopy(sParam2, func_52(Global_113810.f_2366.f_539.f_2314[0]), 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = Global_113810.f_2366.f_539.f_2310[1];
			StringCopy(sParam2, func_52(Global_113810.f_2366.f_539.f_2314[1]), 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = Global_113810.f_2366.f_539.f_2310[2];
			StringCopy(sParam2, func_52(Global_113810.f_2366.f_539.f_2314[2]), 32);
			return 1;
			break;
		
		case 11:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_48(8, uParam1, sParam2);
			break;
		
		case 10:
			return func_48(8, uParam1, sParam2);
			break;
		
		case 13:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 14:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 15:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 12:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 16:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 17:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 18:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 19:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 20:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 22:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 74:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 23:
			return func_48(208, uParam1, sParam2);
			break;
		
		case 24:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 67:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 25:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 26:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 27:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 28:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 58:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 59:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 60:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 38:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 40:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 42:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 43:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 44:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 45:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 47:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 49:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 48:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 124:
			Var0 = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 50:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 51:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 52:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 66:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 54:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 55:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 56:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 57:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 61:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 62:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 63:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 69:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 64:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 65:
			if (func_51(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 234:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 316:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 315:
			*uParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 75:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 76:
			*uParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 79:
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 80:
			*uParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 82:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 83:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 84:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 87:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 89:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 90:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 91:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 92:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 96:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 98:
			*uParam1 = (-150.6148f + 0.0095f);
			*uParam1 = (*uParam1 + 0.0004f);
			*uParam1 = (*uParam1 + 0.0015f);
			*uParam1 = (*uParam1 + 0.0002f);
			*uParam1 = (*uParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 100:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 101:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 103:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 106:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 112:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 135:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 136:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 137:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 138:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 139:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 140:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 141:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 142:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 143:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 144:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 145:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 146:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 147:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 148:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 149:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 150:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 117:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 118:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 119:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 121:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 122:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 126:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 127:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 128:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 129:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 130:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 131:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 132:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 133:
			*uParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 134:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 153:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 154:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 155:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 156:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 157:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 158:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 159:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 161:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 165:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 166:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 167:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 168:
			if (func_49(0, 25, &uVar4, &fVar7))
			{
				*uParam1 = (fVar7 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		
		case 169:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 170:
			*uParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 171:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 173:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 172:
			*uParam1 = -30.185f;
			*uParam1 = (*uParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 174:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 178:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 179:
			*uParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 181:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 183:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 184:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 185:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 186:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 189:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 191:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 196:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 192:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 193:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 194:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 195:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 198:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 199:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 200:
			*uParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 201:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 202:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 204:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 205:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 207:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 209:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 210:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 212:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 214:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 215:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 221:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 222:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 223:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 224:
			return func_48(222, uParam1, sParam2);
			break;
		
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 227:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 229:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 230:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 218:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 220:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 225:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 231:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 232:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 233:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 240:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 242:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 245:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 248:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 249:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 251:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 252:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 255:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 265:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 266:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 267:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 269:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 271:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 272:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 275:
			*uParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 276:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 277:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 278:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 279:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 280:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 281:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 282:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 283:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 284:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 285:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 257:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 258:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 259:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 260:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 261:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 289:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 292:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 293:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 294:
			return func_48(293, uParam1, sParam2);
			break;
		
		case 295:
			return func_48(292, uParam1, sParam2);
			break;
		
		case 299:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 300:
			return func_48(303, uParam1, sParam2);
			break;
		
		case 301:
			return func_48(303, uParam1, sParam2);
			break;
		
		case 302:
			return func_48(303, uParam1, sParam2);
			break;
		
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 296:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 297:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 304:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 305:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		
		case 306:
			Var8 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var8.f_0, -Var8.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 307:
			Var11 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var11.f_0, -Var11.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 308:
			Var14 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var14.f_0, -Var14.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 309:
			Var17 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var17.f_0, -Var17.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 310:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 312:
			*uParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 313:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 314:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}

int func_49(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xFD84
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return 1;
					break;
				
				case 1:
					if (func_49(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return 1;
					}
					break;
				
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return 1;
					break;
				
				case 1:
					if (func_49(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				
				case 2:
					if (func_49(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_49(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) };
					*uParam3 = (306f + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f));
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*uParam3 = MISC::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_49(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*uParam3 = 144.6939f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_49(iParam0, 26, uParam2, uParam3);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*uParam3 = 88.5686f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0;
					break;
			}
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*uParam3 = 338.5f;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*uParam3 = 39f;
					return 1;
					break;
			}
			break;
		
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*uParam3 = 94.2086f;
					return 1;
					break;
			}
			break;
		
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*uParam3 = 336f;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*uParam3 = 311.4f;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*uParam3 = 306.6f;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*uParam3 = 337.4f;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*uParam3 = 277.317f;
					return 1;
					break;
			}
			break;
		
		case 60:
			if (func_49(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
				*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
				return 1;
			}
			break;
		
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*uParam3 = 172.714f;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-158f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-164f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*uParam3 = 157.44f;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*uParam3 = 87.3368f;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*uParam3 = 262.32f;
					return 1;
					break;
			}
			break;
		
		case 77:
			if (func_49(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 1;
			}
			break;
		
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return 1;
					break;
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.6757f, -42.2059f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*uParam3 = (84.7009f - 188.5817f);
					return 1;
					break;
				
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.8477f, -40.7478f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*uParam3 = (90.6417f - 188.5817f);
					return 1;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
					return 1;
					break;
			}
			break;
		
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*uParam3 = 119.008f;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
					return 1;
					break;
			}
			break;
		
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*uParam3 = 114.3391f;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*uParam3 = 252.2687f;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121.6591f;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = (170.2796f - 180f);
					return 1;
					break;
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_113810.f_18536[2] == 299)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else if (((Global_113810.f_18536[2] == 300 || Global_113810.f_18536[2] == 301) || Global_113810.f_18536[2] == 302) || Global_113810.f_18536[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					if (func_50())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*uParam3 = (102f - 90.6729f);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_49(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
						*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*uParam3 = 42.6f;
					return 1;
					break;
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.7363f, -1148.4664f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return 1;
					break;
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return 1;
					break;
			}
			break;
		
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		default:
			*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
	*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	return 0;
}

int func_50()//Position - 0x11F46
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, var uParam1, var uParam2)//Position - 0x11F64
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*uParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_51(8, uParam1, uParam2);
			break;
		
		case 10:
			return func_51(8, uParam1, uParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*uParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*uParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*uParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*uParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*uParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*uParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*uParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*uParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*uParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*uParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*uParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*uParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*uParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

char* func_52(int iParam0)//Position - 0x128D3
{
	switch (iParam0)
	{
		case joaat("v_chopshop"):
			return "v_chopshop";
			break;
		
		case joaat("v_franklins"):
			return "v_franklins";
			break;
		
		case joaat("v_franklinshouse"):
			return "v_franklinshouse";
			break;
		
		case joaat("v_methlab"):
			return "v_methlab";
			break;
		
		case joaat("v_michael"):
			return "v_michael";
			break;
		
		case joaat("v_strip3"):
			return "v_strip3";
			break;
		
		case joaat("v_trailer"):
			return "v_trailer";
			break;
		
		case joaat("v_trevors"):
			return "v_Trevors";
			break;
	}
	return "";
}

void func_53()//Position - 0x12966
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_71, false) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_71, true))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_71);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_73, false) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_73, true))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_73);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_72, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_72);
	MISC::SET_GAME_PAUSED(false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

