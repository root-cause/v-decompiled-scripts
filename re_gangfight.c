#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
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
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_60 = 0;
	int iLocal_61[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_62 = 0;
	var uLocal_63 = 16;
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
	var uLocal_96 = 0;
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
	var uLocal_155 = 0;
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
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
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
	var uLocal_200 = 0;
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
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	int iLocal_228 = 0;
	struct<2> Local_229 = { 0, 5 } ;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 5;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_48 = { ScriptParam_229.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_146();
	}
	if (func_104(Local_48, -1, 0, 0, 0))
	{
		func_101(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_100();
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (iLocal_55 > MISC::GET_GAME_TIMER())
			{
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			}
			if (!func_99())
			{
				if (!func_99())
				{
					if (func_98())
					{
						func_146();
					}
				}
				RECORDING::_0x208784099002BC30("RE_CGF", 0);
				switch (iLocal_44)
				{
					case 0:
						if (func_86())
						{
							func_146();
						}
						if (func_85())
						{
							iLocal_49 = 1;
							iLocal_44 = 1;
						}
						break;
					
					case 1:
						func_84();
						if (!func_83() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							if ((!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[0])) && !PED::IS_PED_INJURED(iLocal_59[1]))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 969.2191f, 3608.665f, 41.8758f, 100f, 80f, 20f, false, true, 0))
								{
									iLocal_56 = func_80(iLocal_58, 0, 145);
									HUD::SET_BLIP_PRIORITY(iLocal_56, 9);
									iLocal_57[0] = func_80(iLocal_59[0], 1, 145);
									iLocal_57[1] = func_80(iLocal_59[1], 1, 145);
									HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, false);
									HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57[0], false);
									HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57[1], false);
									func_70(1);
								}
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < iLocal_59)
							{
								if (!PED::IS_PED_INJURED(iLocal_59[iVar0]))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								}
								iVar0++;
							}
							if (!PED::IS_PED_INJURED(iLocal_58))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
							}
							func_69();
						}
						break;
				}
			}
			else
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				if (!PED::IS_PED_INJURED(iLocal_58))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), true))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
						func_69();
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 150f, 150f, 50f, false, true, 0))
					{
						if (iLocal_46 >= 5 && iLocal_45 == 2)
						{
						}
						else
						{
							func_84();
							func_68();
						}
						switch (iLocal_45)
						{
							case 0:
								func_67();
								if (func_83())
								{
									bLocal_51 = true;
									iLocal_46 = 4;
								}
								break;
							
							case 1:
								if (iLocal_46 < 7 && !PED::IS_PED_INJURED(iLocal_58))
								{
									if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_58, 90f))
									{
										if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_58) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_58))
										{
											func_64();
										}
									}
								}
								func_59();
								break;
							
							case 2:
								func_9();
								break;
							
							case 3:
								func_1();
								break;
						}
					}
					else
					{
						func_69();
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						HUD::REMOVE_BLIP(&iLocal_56);
					}
					if (((!PED::IS_PED_INJURED(iLocal_59[0]) && !PED::IS_PED_INJURED(iLocal_59[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[0], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[1], false))
					{
						func_69();
					}
					iVar1 = 0;
					iVar2 = 0;
					while (iVar2 < iLocal_59)
					{
						if (!PED::IS_PED_INJURED(iLocal_59[iVar2]))
						{
							TASK::TASK_COMBAT_PED(iLocal_59[iVar2], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_59[iVar2], true);
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_59[iVar2], 150f, 150f, 50f, false, true, 0))
							{
								func_69();
							}
							iVar1 = 1;
						}
						else if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar2]))
						{
							HUD::REMOVE_BLIP(&(iLocal_57[iVar2]));
						}
						iVar2++;
					}
					if (iVar1 == 0)
					{
						func_69();
					}
				}
			}
		}
		else
		{
			func_146();
		}
	}
}

void func_1()//Position - 0x431
{
	int iVar0;
	
	if (iLocal_49 && !iLocal_54)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
		}
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_58, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_57[iVar0]));
			}
			if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (iVar0 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_59[iVar0], iLocal_61[iVar0], PLAYER::PLAYER_PED_ID(), 8, 20f, 786469, 150f, 10f, true);
						PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					}
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_59[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_61[iVar0]));
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		AUDIO::STOP_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		func_3(&uLocal_63, 1);
		func_3(&uLocal_63, 2);
		func_3(&uLocal_63, 3);
		func_3(&uLocal_63, 4);
		iLocal_54 = 1;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_2(PLAYER::PLAYER_ID()), Local_48, true) > 50f)
	{
		func_146();
	}
}

Vector3 func_2(int iParam0)//Position - 0x600
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_3(var uParam0, int iParam1)//Position - 0x613
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()//Position - 0x630
{
	Global_20471 = 0;
	func_5();
}

void func_5()//Position - 0x640
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

int func_6(char* sParam0)//Position - 0x661
{
	var uVar0;
	
	if (func_8())
	{
		MemCopy(&uVar0, {func_7()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_7()//Position - 0x689
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_8()//Position - 0x6AD
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_9()//Position - 0x6CF
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_46)
	{
		case 0:
			if (SYSTEM::TIMERB() > 2000)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_57[iVar0]))
						{
							iLocal_57[iVar0] = func_80(iLocal_59[iVar0], 1, 145);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_59[iVar0], false))
							{
								if (!bLocal_51)
								{
									TASK::TASK_DRIVE_BY(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 150f, 100, true, -753768974);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_59[iVar0], iLocal_62);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
									PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
								}
							}
						}
					}
					iVar0++;
				}
				if (!func_8())
				{
					if (func_42(&uLocal_63, "RECGFAU", "RECGF_BIKERS", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iLocal_59)
			{
				if (!PED::IS_PED_INJURED(iLocal_59[iVar1]))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_59[iVar1], 904.3153f, 3631.684f, 31.574f, 7f, 7f, 7f, false, true, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar1], false))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_61[iVar1], 0f);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_59[iVar1], false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_59[iVar1], iLocal_62);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
							PED::SET_PED_KEEP_TASK(iLocal_59[iVar1], true);
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_59[iVar1], false))
					{
						TASK::TASK_COMBAT_PED(iLocal_59[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_59[iVar1], true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar1], false))
					{
						if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_61[iVar1]))
						{
						}
					}
				}
				if (PED::IS_PED_INJURED(iLocal_59[iVar1]))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar1]))
					{
						HUD::REMOVE_BLIP(&(iLocal_57[iVar1]));
					}
				}
				iVar1++;
			}
			if (((PED::IS_PED_INJURED(iLocal_59[2]) && PED::IS_PED_INJURED(iLocal_59[3])) && PED::IS_PED_INJURED(iLocal_59[4])) && PED::IS_PED_INJURED(iLocal_59[5]))
			{
				AUDIO::STOP_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
				iLocal_46++;
			}
			break;
		
		case 2:
			func_41(1500);
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				TASK::CLEAR_PED_TASKS(iLocal_58);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2056, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_60);
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 5f, 5f, 5f, false, true, 0))
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_REWARD", 4, 0, 0, 0);
				}
			}
			iLocal_46++;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 6f, 6f, 6f, false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), 60f))
					{
						if (!func_8())
						{
							if (func_42(&uLocal_63, "RECGFAU", "RECGF_END", 4, 0, 0, 0))
							{
								iLocal_46++;
							}
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), 120f, 120f, 120f, false, true, 0))
				{
					func_10();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), false))
				{
					func_69();
				}
			}
			break;
		
		case 4:
			iLocal_46++;
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_60, -1, -1, 2f, 8, 0);
				TASK::TASK_PAUSE(0, 2000);
				TASK::TASK_PLAY_ANIM(0, "veh@drivebystd_ds_grenades", "drop_grenade", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_60, 10f, 786603);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
				PED::SET_PED_KEEP_TASK(iLocal_58, true);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_60, true);
				iLocal_46++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade") > 0.436f && PED::IS_PED_IN_ANY_VEHICLE(iLocal_58, false))
					{
						OBJECT::CREATE_MONEY_PICKUPS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(iLocal_58, false), -1f, 0f, 0f), 1000, 1, 0);
						iLocal_46++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_8())
			{
				func_42(&uLocal_63, "RECGFAU", "RECGF_END2", 4, 0, 0, 0);
				func_10();
			}
			break;
	}
}

void func_10()//Position - 0xB8C
{
	while (func_8())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_40())
	{
		SYSTEM::WAIT(0);
	}
	func_14(-1, 0);
	func_11();
	iLocal_45 = 3;
}

void func_11()//Position - 0xBC0
{
	func_12();
}

int func_12()//Position - 0xBCD
{
	if (func_13(0))
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

int func_13(bool bParam0)//Position - 0xC18
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_14(int iParam0, int iParam1)//Position - 0xC40
{
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_37(iParam0))
	{
		func_36(iParam0, iParam1);
		if (!func_35(51))
		{
			func_25("RE_REWARD", 1, 0, 4000, 10000, func_28(), 0, 138, 0);
			func_24(51);
		}
		if (func_23(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_22(iParam0, iParam1) != 322)
		{
			func_16(func_22(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_15(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_15(7);
			}
			else
			{
				func_15(1);
			}
		}
	}
}

void func_15(int iParam0)//Position - 0xD43
{
	Global_113372 = iParam0;
}

void func_16(int iParam0, var uParam1, var uParam2)//Position - 0xD51
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_20((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_17();
	}
}

void func_17()//Position - 0xE37
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113109, 0);
					MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113122, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113105, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113123, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113106, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113124, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113107, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113125, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113108, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113112, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113129, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113130, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113131, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113386.f_10194.f_3853))
	{
		func_19(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_18() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_12();
				}
			}
		}
	}
}

int func_18()//Position - 0x12F5
{
	return Global_31959;
}

int func_19(int iParam0, int iParam1)//Position - 0x1300
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

void func_20(int iParam0, bool bParam1, int iParam2)//Position - 0x1351
{
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_21()//Position - 0x136F
{
	return Global_1574918;
}

int func_22(int iParam0, int iParam1)//Position - 0x137B
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_23(int iParam0)//Position - 0x16EF
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_24(int iParam0)//Position - 0x171E
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_25(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1760
{
	func_26(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_26(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1781
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
		func_27();
	}
}

void func_27()//Position - 0x1954
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

int func_28()//Position - 0x1A6B
{
	func_29();
	switch (Global_113386.f_2363.f_539.f_4321)
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

void func_29()//Position - 0x1AB1
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_33(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_32(PLAYER::PLAYER_PED_ID());
			if (func_31(iVar0) && (!func_30(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_31(Global_113386.f_2363.f_539.f_4321))
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

bool func_30(int iParam0)//Position - 0x1BAE
{
	return Global_43052 == iParam0;
}

bool func_31(int iParam0)//Position - 0x1BBC
{
	return iParam0 < 3;
}

int func_32(int iParam0)//Position - 0x1BC8
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

int func_33(int iParam0)//Position - 0x1C05
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)//Position - 0x1C2A
{
	return Global_1998[iParam0 /*29*/];
}

int func_35(int iParam0)//Position - 0x1C39
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_36(int iParam0, int iParam1)//Position - 0x1C79
{
	MISC::SET_BIT(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_37(int iParam0)//Position - 0x1C94
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_38()//Position - 0x1D45
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_39(Var0);
	return uVar1;
}

int func_39(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x1D62
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_40()//Position - 0x1F3C
{
	return 1;
}

void func_41(int iParam0)//Position - 0x1F45
{
	int iVar0;
	
	iVar0 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() <= iVar0)
	{
		SYSTEM::WAIT(0);
		if (iLocal_55 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
	}
}

bool func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1F74
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)//Position - 0x1FC2
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_57();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_55();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam2)
			{
				func_53();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_52())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_51())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_50();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_49();
		func_44();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_57();
	}
	return 0;
}

void func_44()//Position - 0x2290
{
	if (!func_45())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_45()//Position - 0x22C7
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_48())
	{
		return 0;
	}
	if (func_46(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_46(int iParam0)//Position - 0x232A
{
	return func_47(iParam0, 20);
}

var func_47(int iParam0, int iParam1)//Position - 0x233A
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_48()//Position - 0x2352
{
	return -1;
}

void func_49()//Position - 0x235B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21605 = 1;
}

void func_50()//Position - 0x238C
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	MISC::CLEAR_BIT(&Global_8137, 16);
}

int func_51()//Position - 0x2421
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_52()//Position - 0x2448
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_53()//Position - 0x24E1
{
	if (func_30(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_54();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

int func_54()//Position - 0x2583
{
	func_29();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_55()//Position - 0x259C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_56(int iParam0, int iParam1)//Position - 0x25F3
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

void func_57()//Position - 0x262B
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21605 = 6;
		return;
	}
}

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2682
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

void func_59()//Position - 0x26D8
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				iLocal_46++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 20f, 20f, 20f, false, true, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), -1, 2060, 2);
					func_42(&uLocal_63, "RECGFAU", "RECGF_THX", 4, 0, 0, 0);
					iLocal_46++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 916.5764f, 3602.146f, 31.9262f, 1f, 40000, 0.25f, false, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
				iLocal_46++;
			}
			break;
		
		case 3:
			if (!func_8())
			{
				if (func_54() == 0)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_JABM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_JABF", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_JABBER", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_58, 916.5764f, 3602.146f, 31.9262f, 3.3f, 3.3f, 3.3f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 8f, 8f, 8f, false, true, 0))
					{
						if (!func_8())
						{
							if (func_42(&uLocal_63, "RECGFAU", "RECGF_STASH", 4, 0, 0, 0))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), -1);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
								{
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_60);
								}
								iLocal_46++;
							}
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_60);
						}
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 5:
			if (!func_8())
			{
				if (func_54() == 0)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_STASHM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_STASHF", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 8f, 8f, 8f, false, true, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					{
						if (func_62())
						{
							func_41(1000);
							if ((!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[2])) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
								TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_60, -1, -1, 1f);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_59[2], 2000, 0, 2);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_59[2], 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
								func_41(2000);
								func_4();
								func_41(0);
								func_42(&uLocal_63, "RECGFAU", "RECGF_HIDE", 4, 0, 0, 0);
								if ((!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, false)) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_58, false))
								{
									iLocal_46++;
								}
								else
								{
									if (!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[2]))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
										TASK::TASK_COWER(0, -1);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
									}
									bLocal_51 = false;
									SYSTEM::SETTIMERB(0);
									iLocal_46++;
								}
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), false))
				{
					func_69();
				}
			}
			break;
		
		case 7:
			if ((((!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, false)) && !PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_60, false)) && !PED::IS_PED_IN_COVER(iLocal_58, false)) && !PED::IS_PED_GOING_INTO_COVER(iLocal_58))
			{
			}
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
				{
					if (((((PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), (916.3351f - 100f), (3602.048f - 100f), (31.9209f - 100f), (916.3351f + 100f), (3602.048f + 100f), (31.9209f + 100f), false, true) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_59[iVar0], 5f, 5f, 5f, false, true, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61[iVar0], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_59[iVar0])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61[iVar0]))
					{
						bLocal_51 = true;
						SYSTEM::SETTIMERB(2000);
						iLocal_46 = 0;
						iLocal_45 = 2;
					}
				}
				iVar0++;
			}
			if (((PED::IS_PED_INJURED(iLocal_59[2]) && PED::IS_PED_INJURED(iLocal_59[3])) && PED::IS_PED_INJURED(iLocal_59[4])) && PED::IS_PED_INJURED(iLocal_59[5]))
			{
				iLocal_46 = 2;
				iLocal_45 = 2;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_59[2], 970.3641f, 3629.886f, 31.3694f, 5f, 5f, 5f, false, true, 0) || SYSTEM::TIMERB() > 13000)
			{
				func_41(2000);
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!PED::IS_PED_INJURED(iLocal_59[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_59[iVar0], iLocal_61[iVar0], false))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_59[iVar0], iLocal_61[iVar0], PLAYER::PLAYER_PED_ID(), (iVar0 - 2) + 10, 60f, 786475, 5f, 10f, true);
							}
						}
					}
					iVar0++;
				}
				if (!PED::IS_PED_INJURED(iLocal_58))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 15f, 15f, 15f, false, true, 0))
					{
						func_60();
						func_41(0);
						func_42(&uLocal_63, "RECGFAU", "RECGF_GANG", 4, 0, 0, 0);
					}
				}
				SYSTEM::SETTIMERB(0);
				iLocal_46 = 0;
				iLocal_45 = 2;
			}
			break;
	}
}

void func_60()//Position - 0x2D05
{
	Global_20471 = 0;
	func_61();
}

void func_61()//Position - 0x2D15
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22616 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21605 = 6;
		return;
	}
}

int func_62()//Position - 0x2D39
{
	int iVar0;
	
	if (((((((!ENTITY::DOES_ENTITY_EXIST(iLocal_61[2]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[3])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[4])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[5])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[2])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[3])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[4])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[5]))
	{
		STREAMING::REQUEST_MODEL(joaat("hexer"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_02"));
		AUDIO::START_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
		{
			iLocal_61[2] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 863.4697f, 3633.5f, 31.9874f, 290.5797f, true, true, false);
			iLocal_61[3] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 866.4073f, 3636.039f, 31.9514f, 270.3649f, true, true, false);
			iLocal_61[4] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 866.3153f, 3631.587f, 31.9545f, 276.6327f, true, true, false);
			iLocal_61[5] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 868.5937f, 3633.523f, 31.9622f, 267.0991f, true, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_61[2], 3);
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_61[4], 3);
			iLocal_55 = MISC::GET_GAME_TIMER() + 1500;
		}
		if ((STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_01")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_02"))) && AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
		{
			iLocal_59[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_61[2], 22, joaat("g_m_y_lost_01"), -1, true, true);
			iLocal_59[3] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_61[3], 22, joaat("g_m_y_lost_02"), -1, true, true);
			iLocal_59[4] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_61[4], 22, joaat("g_m_y_lost_01"), -1, true, true);
			iLocal_59[5] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_61[5], 22, joaat("g_m_y_lost_02"), -1, true, true);
			func_63(&uLocal_63, 4, iLocal_59[4], "RECGFLost3", 0, 1);
			iLocal_55 = MISC::GET_GAME_TIMER() + 1500;
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_61[iVar0], "RE_COUNTRYSIDE_GANG_BIKES", 0f);
					PED::SET_PED_CONFIG_FLAG(iLocal_59[iVar0], 137, true);
					PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_59[iVar0], 0);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_59[iVar0], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_59[iVar0], 50, true);
					PED::SET_PED_COMBAT_ABILITY(iLocal_59[iVar0], 2);
					PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_59[iVar0], 50f, 20);
					PED::SET_PED_COMBAT_RANGE(iLocal_59[iVar0], 1);
					PED::SET_PED_ACCURACY(iLocal_59[iVar0], 13);
					PED::SET_PED_HEARING_RANGE(iLocal_59[iVar0], 100f);
					PED::SET_PED_SEEING_RANGE(iLocal_59[iVar0], 100f);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_59[iVar0], iLocal_228);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_59[iVar0], true);
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_59[iVar0], 3);
					PED::SET_PED_HELMET(iLocal_59[iVar0], false);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_59[iVar0], true);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_59[iVar0], true, 1000f);
					if (iVar0 > 1 && iVar0 < 5)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_59[iVar0], joaat("weapon_pistol"), -1, true, true);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_59[iVar0], joaat("weapon_sawnoffshotgun"), -1, true, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_61[2], 966.7098f, 3633.926f, 31.3974f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					TASK::TASK_LOOK_AT_COORD(0, Local_48, 5000, 0, 2);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_59[2], iLocal_62);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_61[3], 970.6208f, 3636.743f, 31.3666f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					TASK::TASK_LOOK_AT_COORD(0, Local_48, 5000, 0, 2);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_59[3], iLocal_62);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
					PED::SET_PED_KEEP_TASK(iLocal_59[3], true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_61[4], 971.023f, 3631.225f, 31.3807f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					TASK::TASK_LOOK_AT_COORD(0, Local_48, 5000, 0, 2);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_59[4], iLocal_62);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_61[5], 974.8073f, 3633.771f, 31.3818f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					TASK::TASK_LOOK_AT_COORD(0, Local_48, 5000, 0, 2);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_59[5], iLocal_62);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_02"));
			return 1;
		}
	}
	return 0;
}

void func_63(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3210
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_64()//Position - 0x32AB
{
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_58, true);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_59[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_59[1], false))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_58, 101, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_58, false);
			TASK::TASK_SHOOT_AT_ENTITY(iLocal_59[0], iLocal_58, 1000, 0);
			TASK::TASK_SHOOT_AT_ENTITY(iLocal_59[1], iLocal_58, 1000, 0);
		}
		else
		{
			func_4();
			func_41(0);
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				func_65(iLocal_58, "GENERIC_FRIGHTENED_HIGH", 24);
			}
		}
		func_41(1000);
		func_69();
	}
}

void func_65(int iParam0, char* sParam1, int iParam2)//Position - 0x334F
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_66(iParam2), 1);
}

int func_66(int iParam0)//Position - 0x3366
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_67()//Position - 0x355B
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 45f, 45f, 20f, false, true, 0))
			{
				if (!func_8())
				{
					if (func_54() == 0)
					{
						func_42(&uLocal_63, "RECGFAU", "RECGF_COMM", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_42(&uLocal_63, "RECGFAU", "RECGF_COMF", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_42(&uLocal_63, "RECGFAU", "RECGF_COMT", 4, 0, 0, 0);
					}
					iLocal_46++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 40f, 40f, 20f, false, true, 0))
				{
					if (func_42(&uLocal_63, "RECGFAU", "RECGF_HELP", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		
		case 2:
			if (!func_8())
			{
				func_42(&uLocal_63, "RECGFAU", "RECGF_SHUTUP", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_46++;
			}
			break;
		
		case 3:
			if ((!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[0])) && !PED::IS_PED_INJURED(iLocal_59[1]))
			{
				if ((SYSTEM::TIMERA() > 5000 && !iLocal_52) && !func_8())
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_PAYUP", 4, 0, 0, 0);
					iLocal_52 = 1;
				}
				if (SYSTEM::TIMERA() < 28000)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 12f, 12f, 2.5f, false, true, 0))
					{
						if (((PED::CAN_PED_SEE_HATED_PED(iLocal_59[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_59[1], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_59[0], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_59[1], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_59[0], PLAYER::PLAYER_PED_ID(), 4000, 2056, 4);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_59[1], PLAYER::PLAYER_PED_ID(), 4000, 2056, 4);
							if (!iLocal_53)
							{
								func_4();
								func_41(0);
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									func_42(&uLocal_63, "RECGFAU", "RECGF_GETLOS", 4, 0, 0, 0);
								}
								else
								{
									func_42(&uLocal_63, "RECGFAU", "RECGF_BEGONE", 4, 0, 0, 0);
								}
								iLocal_53 = 1;
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 3))
					{
						if (!PED::IS_PED_FACING_PED(iLocal_59[0], iLocal_58, 10f))
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_59[0], iLocal_58, -1, false);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[1], false))
				{
					func_4();
					func_41(0);
					func_42(&uLocal_63, "RECGFAU", "RECGF_SHOOT", 4, 0, 0, 0);
					func_41(2000);
					func_64();
				}
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!PED::IS_PED_INJURED(iLocal_59[iVar0]))
				{
					PED::SET_PED_RESET_FLAG(iLocal_59[iVar0], 156, true);
					TASK::TASK_COMBAT_PED(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
				}
				iVar0++;
			}
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				TASK::TASK_COWER(iLocal_58, -1);
			}
			iLocal_46++;
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (PED::IS_PED_INJURED(iLocal_59[iVar0]))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_57[iVar0]));
						func_3(&uLocal_63, 2);
						func_3(&uLocal_63, 3);
					}
				}
				iVar0++;
			}
			if (PED::IS_PED_INJURED(iLocal_59[0]) && PED::IS_PED_INJURED(iLocal_59[1]))
			{
				iLocal_46 = 0;
				iLocal_45 = 1;
			}
			break;
	}
}

void func_68()//Position - 0x3908
{
	if (!CAM::IS_SPHERE_VISIBLE(916.4631f, 3601.261f, 31.9327f, 3f))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 916.4631f, 3601.261f, 31.9327f, 2f, 2f, 2f, false, true, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 915.6531f, 3595.061f, 32.0774f, true, false, false, true);
			}
		}
	}
}

void func_69()//Position - 0x3970
{
	iLocal_45 = 3;
}

int func_70(int iParam0)//Position - 0x397B
{
	if (func_74())
	{
		Global_113376 = 1;
		Global_113373 = MISC::GET_GAME_TIMER();
		if (func_23(Global_113375))
		{
			func_71(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_23(Global_113375))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_71(int iParam0)//Position - 0x39CE
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_72(func_73(iParam0), -1);
					Global_113386.f_24995.f_2++;
					MISC::SET_BIT(&Global_113382, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_72(func_73(iParam0), -1);
					Global_113386.f_24995.f_3++;
					MISC::SET_BIT(&Global_113382, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_72(func_73(iParam0), -1);
					Global_113386.f_24995.f_4++;
					MISC::SET_BIT(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_72(char* sParam0, int iParam1)//Position - 0x3AA9
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_73(int iParam0)//Position - 0x3AC0
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_74()//Position - 0x3B03
{
	switch (func_75(&Global_32019, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_75(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x3B39
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_79(0))
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *uParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_77(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_76(uParam0, iParam4);
		}
	}
	return 2;
}

void func_76(var uParam0, int iParam1)//Position - 0x3C70
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_77(int iParam0)//Position - 0x3CBF
{
	return func_78(iParam0, Global_43052);
}

int func_78(int iParam0, int iParam1)//Position - 0x3CD0
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

int func_79(int iParam0)//Position - 0x3EB1
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_77(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0, bool bParam1, int iParam2)//Position - 0x3ED3
{
	int iVar0;
	
	iVar0 = func_81(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_81(int iParam0, bool bParam1, bool bParam2)//Position - 0x3F1D
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_82(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_82(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_82(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_82(bool bParam0, float fParam1, float fParam2)//Position - 0x3FC1
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_83()//Position - 0x3FD8
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!bLocal_51)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_228, joaat("player"));
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_59[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_59[1], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[1], PLAYER::PLAYER_PED_ID(), true))
			{
				func_4();
				return 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				{
					func_4();
					return 1;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[1], false))
		{
			if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_61[0], false) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_61[1], false)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61[0], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61[1], PLAYER::PLAYER_PED_ID(), true))
			{
				if (!PED::IS_PED_INJURED(iLocal_59[0]) && !PED::IS_PED_INJURED(iLocal_59[1]))
				{
					if (func_99())
					{
						func_4();
						func_41(0);
						func_42(&uLocal_63, "RECGFAU", "RECGF_BIKES", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_59[0]) || PED::IS_PED_INJURED(iLocal_59[1]))
		{
			func_4();
			return 1;
		}
		Var0 = { 15f, 15f, 15f };
		Var1 = { -15f, -15f, -15f };
		if (!PED::IS_PED_INJURED(iLocal_59[0]))
		{
			if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_59[0], 31086, 0f, 0f, 0f), 5f, true))
			{
				func_4();
				return 1;
			}
			Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_59[0], 31086, 0f, 0f, 0f) };
			Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_59[0], 31086, 0f, 0f, 0f) };
			if (((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("weapon_smokegrenade"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("weapon_grenade"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("weapon_grenadelauncher"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("weapon_stickybomb"), true))
			{
				func_4();
				return 1;
			}
			if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_59[0], 31086, 0f, 0f, 0f), 3f))
			{
				func_4();
				return 1;
			}
		}
		if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), (973.053f - 30f), (3616.738f - 30f), (32.6181f - 30f), (973.053f + 30f), (3616.738f + 30f), (32.6181f + 30f), false, true))
		{
			func_4();
			return 1;
		}
		if ((!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[0])) && !PED::IS_PED_INJURED(iLocal_59[1]))
		{
			if (iLocal_47 != -1)
			{
				if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_59[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_59[1])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_59[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_59[1]))
				{
					func_4();
					return 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 12f, 12f, 2.5f, false, true, 0))
			{
				if (((PED::CAN_PED_SEE_HATED_PED(iLocal_59[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_59[1], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_59[0], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_59[1], PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_50)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_59[0], PLAYER::PLAYER_PED_ID(), -1, false);
						iLocal_50 = 1;
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, true);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_57[0]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57[0], true);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_57[1]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57[1], true);
					}
					if ((!func_8() || func_6("RECGF_SHUTUP")) || func_6("RECGF_PAYUP"))
					{
						if (iLocal_47 == -1)
						{
							iLocal_47 = MISC::GET_GAME_TIMER();
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								func_4();
								func_41(0);
								func_42(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
							else
							{
								func_4();
								func_41(0);
								func_42(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			else
			{
				iLocal_50 = 0;
				iLocal_47 = -1;
			}
			if (iLocal_47 != -1 && MISC::GET_GAME_TIMER() > iLocal_47 + 10000)
			{
				func_4();
				func_41(0);
				func_42(&uLocal_63, "RECGFAU", "RECGF_WARNED", 4, 0, 0, 0);
				return 1;
			}
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[0], PLAYER::PLAYER_PED_ID(), true) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[1], PLAYER::PLAYER_PED_ID(), true))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_99())
					{
						func_4();
						func_41(0);
						func_42(&uLocal_63, "RECGFAU", "RECGF_DEALER", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_84()//Position - 0x44F0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_60, false))
	{
		if ((!ENTITY::IS_ENTITY_AT_COORD(iLocal_60, 915.7905f, 3603.449f, 31.9111f, 5f, 5f, 5f, false, true, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_60, false)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_60, true))
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
}

int func_85()//Position - 0x454C
{
	int iVar0;
	
	if (((((!ENTITY::DOES_ENTITY_EXIST(iLocal_58) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[0])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[1])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_60)) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[0])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[1]))
	{
		STREAMING::REQUEST_MODEL(joaat("a_m_m_skidrow_01"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_02"));
		STREAMING::REQUEST_MODEL(joaat("picador"));
		STREAMING::REQUEST_MODEL(joaat("hexer"));
		STREAMING::REQUEST_ANIM_DICT("random@countryside_gang_fight");
		STREAMING::REQUEST_ANIM_DICT("veh@drivebystd_ds_grenades");
		STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_i");
		if (((((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_skidrow_01")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("picador"))) && STREAMING::HAS_MODEL_LOADED(joaat("hexer"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@countryside_gang_fight")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@drivebystd_ds_grenades")) && STREAMING::HAS_ANIM_SET_LOADED("move_m@gangster@var_i"))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("picador"), true);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, false, false, true);
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_48 - Vector(20f, 50f, 80f), Local_48 + Vector(20f, 50f, 70f), false, true, true, true);
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			PED::ADD_RELATIONSHIP_GROUP("rghLost", &iLocal_228);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_228, joaat("player"));
			iLocal_58 = PED::CREATE_PED(26, joaat("a_m_m_skidrow_01"), 973.053f, 3616.738f, 31.6181f, 110.2753f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 4, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_skidrow_01"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_58, 17, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_58, false);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_58, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_58, 185, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_58, 16);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_58, "A_M_M_TRAMP_01_BLACK_MINI_01");
			func_63(&uLocal_63, 1, iLocal_58, "RECGFDealer", 0, 1);
			AUDIO::STOP_PED_SPEAKING(iLocal_58, true);
			TASK::TASK_PLAY_ANIM(iLocal_58, "random@countryside_gang_fight", "gangmember_stickup_loop", 1000f, -2f, -1, 1, 0f, false, false, false);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_58, "move_m@gangster@var_i", 0.25f);
			iLocal_60 = VEHICLE::CREATE_VEHICLE(joaat("picador"), 915.7905f, 3603.449f, 31.9111f, 111.9593f, true, true, false);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_60, 37, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_60, 4, 0);
			VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_60, true);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_60, "WDU 696");
			iLocal_59[0] = PED::CREATE_PED(22, joaat("g_m_y_lost_01"), 970.2217f, 3614.821f, 31.6909f, 297.4345f, true, true);
			func_63(&uLocal_63, 3, iLocal_59[0], "RECGFLost2", 0, 1);
			iLocal_59[1] = PED::CREATE_PED(22, joaat("g_m_y_lost_02"), 971.504f, 3618.054f, 31.5565f, 216.9967f, true, true);
			func_63(&uLocal_63, 2, iLocal_59[1], "RECGFLost1", 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_02"));
			iLocal_61[0] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 968.2626f, 3611.717f, 31.7874f, 296.8978f, true, true, false);
			iLocal_61[1] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 970.8362f, 3625.563f, 31.3415f, 212.3456f, true, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
			TASK::TASK_PLAY_ANIM(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 1000f, -2f, -1, 1, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(iLocal_59[1], "random@countryside_gang_fight", "biker_01_stickup_loop", 1000f, -2f, -1, 1, 0f, false, false, false);
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (iVar0 < 2)
				{
					PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_59[iVar0], 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_59[iVar0], iLocal_228);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_59[iVar0], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_59[iVar0], 50, true);
					PED::SET_PED_COMBAT_RANGE(iLocal_59[iVar0], 0);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_59[0], joaat("weapon_pistol"), -1, true, true);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_59[1], joaat("weapon_sawnoffshotgun"), -1, true, true);
					PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_59[iVar0], true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_59[iVar0], true, 1);
				}
				iVar0++;
			}
			iLocal_55 = MISC::GET_GAME_TIMER() + 1500;
			if (func_54() == 0)
			{
				func_63(&uLocal_63, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			else if (func_54() == 1)
			{
				func_63(&uLocal_63, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			else if (func_54() == 2)
			{
				func_63(&uLocal_63, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_86()//Position - 0x4A07
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_97())
		{
			return 0;
		}
	}
	if (func_93())
	{
		return 1;
	}
	if (func_87(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_87(float fParam0, bool bParam1)//Position - 0x4A8D
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_31(func_54()))
		{
			iVar5 = func_28();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_88(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_88(int iParam0, var uParam1)//Position - 0x4B3E
{
	switch (iParam0)
	{
		case 0:
			func_89(uParam1, "Abigail1", func_91(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 1:
			func_89(uParam1, "Abigail2", func_91(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 2:
			func_89(uParam1, "Barry1", func_91(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 3:
			func_89(uParam1, "Barry2", func_91(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 4:
			func_89(uParam1, "Barry3", func_91(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 5:
			func_89(uParam1, "Barry3A", func_91(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 6:
			func_89(uParam1, "Barry3C", func_91(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 7:
			func_89(uParam1, "Barry4", func_91(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_90(iParam0), 0, 0);
			break;
		
		case 8:
			func_89(uParam1, "Dreyfuss1", func_91(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 9:
			func_89(uParam1, "Epsilon1", func_91(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 10:
			func_89(uParam1, "Epsilon2", func_91(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 11:
			func_89(uParam1, "Epsilon3", func_91(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 12:
			func_89(uParam1, "Epsilon4", func_91(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 13:
			func_89(uParam1, "Epsilon5", func_91(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 14:
			func_89(uParam1, "Epsilon6", func_91(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 15:
			func_89(uParam1, "Epsilon7", func_91(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 16:
			func_89(uParam1, "Epsilon8", func_91(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 17:
			func_89(uParam1, "Extreme1", func_91(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 18:
			func_89(uParam1, "Extreme2", func_91(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 19:
			func_89(uParam1, "Extreme3", func_91(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 20:
			func_89(uParam1, "Extreme4", func_91(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 21:
			func_89(uParam1, "Fanatic1", func_91(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_90(iParam0), 1, 0);
			break;
		
		case 22:
			func_89(uParam1, "Fanatic2", func_91(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_90(iParam0), 1, 0);
			break;
		
		case 23:
			func_89(uParam1, "Fanatic3", func_91(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_90(iParam0), 0, 1);
			break;
		
		case 24:
			func_89(uParam1, "Hao1", func_91(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_90(iParam0), 0, 1);
			break;
		
		case 25:
			func_89(uParam1, "Hunting1", func_91(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 26:
			func_89(uParam1, "Hunting2", func_91(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 27:
			func_89(uParam1, "Josh1", func_91(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 28:
			func_89(uParam1, "Josh2", func_91(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 29:
			func_89(uParam1, "Josh3", func_91(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 30:
			func_89(uParam1, "Josh4", func_91(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 31:
			func_89(uParam1, "Maude1", func_91(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 32:
			func_89(uParam1, "Minute1", func_91(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 33:
			func_89(uParam1, "Minute2", func_91(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 34:
			func_89(uParam1, "Minute3", func_91(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 35:
			func_89(uParam1, "MrsPhilips1", func_91(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 36:
			func_89(uParam1, "MrsPhilips2", func_91(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 37:
			func_89(uParam1, "Nigel1", func_91(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 38:
			func_89(uParam1, "Nigel1A", func_91(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 39:
			func_89(uParam1, "Nigel1B", func_91(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		
		case 40:
			func_89(uParam1, "Nigel1C", func_91(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		
		case 41:
			func_89(uParam1, "Nigel1D", func_91(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		
		case 42:
			func_89(uParam1, "Nigel2", func_91(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 43:
			func_89(uParam1, "Nigel3", func_91(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 44:
			func_89(uParam1, "Omega1", func_91(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 45:
			func_89(uParam1, "Omega2", func_91(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 46:
			func_89(uParam1, "Paparazzo1", func_91(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 47:
			func_89(uParam1, "Paparazzo2", func_91(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 48:
			func_89(uParam1, "Paparazzo3", func_91(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 49:
			func_89(uParam1, "Paparazzo3A", func_91(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 50:
			func_89(uParam1, "Paparazzo3B", func_91(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 51:
			func_89(uParam1, "Paparazzo4", func_91(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 52:
			func_89(uParam1, "Rampage1", func_91(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 54:
			func_89(uParam1, "Rampage3", func_91(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 55:
			func_89(uParam1, "Rampage4", func_91(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 56:
			func_89(uParam1, "Rampage5", func_91(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 53:
			func_89(uParam1, "Rampage2", func_91(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 57:
			func_89(uParam1, "TheLastOne", func_91(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 58:
			func_89(uParam1, "Tonya1", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 59:
			func_89(uParam1, "Tonya2", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 60:
			func_89(uParam1, "Tonya3", func_91(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 61:
			func_89(uParam1, "Tonya4", func_91(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 62:
			func_89(uParam1, "Tonya5", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_89(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x5CF3
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_90(int iParam0)//Position - 0x5D84
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_91(int iParam0)//Position - 0x60CA
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_92(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_92(int iParam0)//Position - 0x6101
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_93()//Position - 0x654D
{
	if (func_96() && !func_97())
	{
		return 1;
	}
	if (func_95() && func_94())
	{
		return 1;
	}
	return 0;
}

bool func_94()//Position - 0x657F
{
	return Global_113104 > 0;
}

int func_95()//Position - 0x658D
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_96()//Position - 0x65A2
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_97()//Position - 0x65C5
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_98()//Position - 0x65E2
{
	if (!func_77(5))
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_97())
		{
			return 0;
		}
	}
	if (func_87(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_99()//Position - 0x6644
{
	if ((Global_113375 == func_38() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_100()//Position - 0x666F
{
}

void func_101(int iParam0)//Position - 0x6677
{
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_103(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113372 = 0;
	func_102();
}

void func_102()//Position - 0x66AD
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_103(int iParam0)//Position - 0x66EA
{
	Global_113375 = iParam0;
}

int func_104(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x66F8
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_145())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_97())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_13(0))
		{
			return 0;
		}
		if (func_93())
		{
			return 0;
		}
		if (func_144())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_31(func_54()))
		{
			if (func_87(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_143(iParam1))
		{
			return 0;
		}
		if (func_31(func_54()))
		{
			if (func_142(func_54()) == 4 || func_142(func_54()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_54()))
		{
			if (!func_141(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_140(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_139())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_130(4))
		{
			return 0;
		}
		if (!func_77(5))
		{
			return 0;
		}
		if (func_129(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_129(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_143(30) && !func_129(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_31(func_54()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_128(iVar4))
				{
					if (func_106(iVar2))
					{
						if (!func_105(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (func_54() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_105(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x6A92
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_106(int iParam0)//Position - 0x6AD9
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_107(iVar0);
}

int func_107(int iParam0)//Position - 0x6AFA
{
	return func_108(iParam0, 1);
}

int func_108(int iParam0, int iParam1)//Position - 0x6B09
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_128(iParam0))
	{
		return 0;
	}
	func_109(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_109(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x6B5C
{
	func_110(func_121(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_110(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x6B7A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_120(iParam0, iParam1))
	{
		iVar0 = func_119(iParam1);
		iVar1 = func_117(iParam0);
		iVar2 = (func_117(iParam0) - func_117(iParam1));
		iVar3 = (func_119(iParam0) - func_119(iParam1));
		iVar4 = (func_116(iParam0) - func_116(iParam1));
		iVar5 = (func_115(iParam0) - func_115(iParam1));
		iVar6 = (func_114(iParam0) - func_114(iParam1));
		iVar7 = (func_113(iParam0) - func_113(iParam1));
	}
	else
	{
		iVar0 = func_119(iParam0);
		iVar1 = func_117(iParam1);
		iVar2 = (func_117(iParam1) - func_117(iParam0));
		iVar3 = (func_119(iParam1) - func_119(iParam0));
		iVar4 = (func_116(iParam1) - func_116(iParam0));
		iVar5 = (func_115(iParam1) - func_115(iParam0));
		iVar6 = (func_114(iParam1) - func_114(iParam0));
		iVar7 = (func_113(iParam1) - func_113(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_112(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_111(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_111(float fParam0, float fParam1, float fParam2)//Position - 0x6D7B
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_112(int iParam0, int iParam1)//Position - 0x6DBD
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

int func_113(int iParam0)//Position - 0x6E5F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_114(int iParam0)//Position - 0x6E72
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_115(int iParam0)//Position - 0x6E85
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_116(int iParam0)//Position - 0x6E98
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_117(int iParam0)//Position - 0x6EAA
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_118(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_118(bool bParam0, int iParam1, int iParam2)//Position - 0x6ECC
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_119(int iParam0)//Position - 0x6EE3
{
	return iParam0 & 15;
}

int func_120(int iParam0, int iParam1)//Position - 0x6EF0
{
	int iVar0;
	int iVar1;
	
	if (!func_128(iParam1) || !func_128(iParam0))
	{
		return 1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_117(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_119(iParam0);
	iVar1 = func_119(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_116(iParam0);
	iVar1 = func_116(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_115(iParam0);
	iVar1 = func_115(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_114(iParam0);
	iVar1 = func_114(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	iVar1 = func_113(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x6FFC
{
	var uVar0;
	
	func_127(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_126(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_125(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_124(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_123(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_122(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_122(var uParam0, int iParam1)//Position - 0x7042
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

void func_123(var uParam0, int iParam1)//Position - 0x70C8
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_124(var uParam0, int iParam1)//Position - 0x70FB
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_119(*uParam0);
	iVar1 = func_117(*uParam0);
	if (iParam1 < 1 || iParam1 > func_112(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_125(var uParam0, int iParam1)//Position - 0x714C
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_126(var uParam0, int iParam1)//Position - 0x7186
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_127(var uParam0, int iParam1)//Position - 0x71C1
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_128(int iParam0)//Position - 0x71FD
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
	iVar0 = func_113(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_114(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_115(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_117(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_119(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_116(iParam0);
	if (iVar5 < 1 || iVar5 > func_112(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_129(int iParam0, bool bParam1)//Position - 0x72D9
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0x72F9
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_54();
				if (!func_31(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_138()) || Global_112433) || Global_31962) || func_137()) || func_56(8, -1)) || func_136()) || func_135()) || func_134()) || func_133()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_138()) || Global_31962) || func_137()) || func_56(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_138()) || Global_112433) || Global_31962) || func_137()) || func_56(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_138()) || Global_112433) || Global_31962) || func_137()) || func_56(8, -1)) || func_136()) || func_135()) || func_133()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_138() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_56(8, -1)) || func_133()) || func_132()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_56(8, -1) || func_136()) || func_135()) || func_132()) || func_131())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_138()) || Global_31962) || func_137()) || func_56(8, -1)) || func_135()) || func_134()) || func_133()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_138()) || func_135()) || Global_112433) || Global_31962) || func_137()) || Global_44238) || func_56(8, -1)) || func_134()) || func_132()) || func_133()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_138()) || Global_112433) || Global_31962) || func_137()) || func_56(8, -1)) || func_134()) || func_132()) || func_136()) || func_135()) || func_133())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_131()//Position - 0x7A16
{
	return Global_100480.f_1;
}

int func_132()//Position - 0x7A24
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_133()//Position - 0x7A47
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_134()//Position - 0x7A61
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

bool func_135()//Position - 0x7A8B
{
	return Global_100493.f_376 > 0;
}

bool func_136()//Position - 0x7A9C
{
	return Global_100493.f_375 > 0;
}

var func_137()//Position - 0x7AAD
{
	return Global_1575058;
}

int func_138()//Position - 0x7AB9
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_139()//Position - 0x7AD5
{
	func_53();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_140(int iParam0)//Position - 0x7AFD
{
	return func_120(func_121(), iParam0);
}

int func_141(int iParam0, int iParam1, int iParam2)//Position - 0x7B0F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_54();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_142(int iParam0)//Position - 0x7BF3
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_143(int iParam0)//Position - 0x7C17
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_145())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_144()//Position - 0x7C6F
{
	int iVar0;
	
	if (Global_32110)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_145()//Position - 0x7CB3
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

void func_146()//Position - 0x7D6B
{
	int iVar0;
	
	if (iLocal_49 && !iLocal_54)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
		}
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_58, 317, true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_58, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_57[iVar0]));
			}
			if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (iVar0 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_59[iVar0], iLocal_61[iVar0], PLAYER::PLAYER_PED_ID(), 8, 20f, 786469, 150f, 10f, true);
						PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					}
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_59[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_61[iVar0]));
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		AUDIO::STOP_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		func_3(&uLocal_63, 1);
		func_3(&uLocal_63, 2);
		func_3(&uLocal_63, 3);
		func_3(&uLocal_63, 4);
	}
	func_147(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_147(int iParam0)//Position - 0x7F2C
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_99())
	{
		func_151(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113377 = MISC::GET_GAME_TIMER();
		func_150(30000);
		StringCopy(&cVar0, func_149(Global_113375, 1), 64);
		if (func_37(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113372, (MISC::GET_GAME_TIMER() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113382, 0);
	}
	func_148(&Global_32019);
	Global_113376 = 0;
	func_103(-1);
}

void func_148(var uParam0)//Position - 0x7FDE
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

char* func_149(int iParam0, bool bParam1)//Position - 0x801C
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_150(int iParam0)//Position - 0x8265
{
	Global_43603 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_151(int iParam0)//Position - 0x8277
{
	func_152(iParam0, 0, func_157(iParam0));
}

void func_152(int iParam0, int iParam1, int iParam2)//Position - 0x828C
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_121();
	func_155(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_154(iParam0, &uVar0);
	Var1 = { func_153(&uVar0) };
}

struct<16> func_153(var uParam0)//Position - 0x82BB
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_115(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_114(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_113(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_116(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_119(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_117(*uParam0), 64);
	return Var0;
}

void func_154(int iParam0, var uParam1)//Position - 0x838B
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_155(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x83A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_117(*uParam0);
	iVar1 = func_119(*uParam0);
	iVar2 = func_116(*uParam0);
	iVar3 = func_115(*uParam0);
	iVar4 = func_114(*uParam0);
	iVar5 = func_113(*uParam0);
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
	iVar6 = func_112(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_112(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_156(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_156(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8525
{
	func_127(uParam0, iParam1);
	func_126(uParam0, iParam2);
	func_125(uParam0, iParam3);
	func_123(uParam0, iParam5);
	func_124(uParam0, iParam4);
	func_122(uParam0, iParam6);
}

int func_157(int iParam0)//Position - 0x855D
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

