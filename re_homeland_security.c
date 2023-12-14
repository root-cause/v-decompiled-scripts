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
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50[2] = { 0, 0 };
	struct<3> Local_53[2];
	float fLocal_60[2] = { 0f, 0f };
	int iLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	struct<3> Local_71 = { 0, 0, 0 } ;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	struct<6> Local_76 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_82 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_97 = { 0, 0, 0 } ;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119[2] = { 0, 0 };
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	bool bLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	bool bLocal_136 = 0;
	var uLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 16;
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
	var uLocal_228 = 0;
	var uLocal_229 = 0;
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
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	fLocal_13 = 0.001f;
	iLocal_16 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = -1f;
	StringCopy(&Local_76, "", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_70);
			}
		}
		func_213();
	}
	if (func_171(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_168(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_106) || iLocal_135)
		{
			if (!func_167())
			{
				if (func_166())
				{
					func_213();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_RA", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_154())
					{
						func_213();
					}
					if (!iLocal_101)
					{
						func_153();
					}
					else
					{
						func_152();
					}
					if (bLocal_102)
					{
						iLocal_100 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_47)
						{
							case 0:
								func_145();
								iLocal_47 = 1;
								break;
							
							case 1:
								if (!func_144())
								{
									if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_71, 75f, 75f, 75f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_70)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 15f, 15f, 15f, false, true, 0))
									{
										if (!func_167())
										{
											TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, -1, 0, 2);
											PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
											func_143();
											func_134(1);
										}
										bLocal_109 = true;
									}
									if (!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(iLocal_50[1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[1], PLAYER::PLAYER_PED_ID(), true))
										{
											func_143();
											bLocal_109 = true;
										}
									}
									if (bLocal_109)
									{
										func_128();
									}
									if (!PED::IS_PED_INJURED(iLocal_70) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
									{
										if (PED::IS_PED_IN_VEHICLE(iLocal_70, iLocal_63, false))
										{
											iLocal_135 = 1;
										}
									}
									if (bLocal_136)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
										{
											if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 150f, 150f, 150f, false, true, 0))
											{
												iLocal_47 = 9;
											}
										}
									}
								}
								if (func_127())
								{
									func_143();
									iLocal_47 = 3;
								}
								else if (func_144())
								{
									func_143();
									func_125();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_130)
								{
									case 0:
										iLocal_47 = 3;
										break;
									
									case 1:
										iLocal_47 = 3;
										break;
									
									case 3:
										iLocal_47 = 3;
										break;
									
									case 4:
										iLocal_47 = 3;
										break;
									
									case 5:
										if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
										{
											iLocal_138 = 1;
											iLocal_49 = 9;
										}
										else
										{
											iLocal_49 = 13;
										}
										iLocal_47 = 1;
										break;
								}
								if (func_144())
								{
									switch (iLocal_48)
									{
										case 2:
											func_124();
											break;
										
										case 4:
											func_123();
											break;
										
										case 5:
											func_122();
											break;
										}
								}
								break;
							
							case 3:
								func_119();
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								if (!PED::IS_PED_INJURED(iLocal_70))
								{
									AUDIO::PLAY_PAIN(iLocal_70, 3, 0, 0);
									if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, false))
									{
										if (!iLocal_115)
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, "random@homelandsecurity", "idle_girl", 3) && !PED::IS_PED_RAGDOLL(iLocal_70))
											{
												PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_70, 16);
												TASK::OPEN_SEQUENCE_TASK(&iLocal_134);
												TASK::TASK_PLAY_ANIM(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0f, false, false, false);
												TASK::TASK_PLAY_ANIM(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0f, false, false, false);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_134);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_134);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_134);
												iLocal_115 = 1;
											}
											else
											{
												TASK::TASK_COWER(iLocal_70, -1);
												iLocal_115 = 1;
											}
										}
										else if ((((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, "random@homelandsecurity", "idle_girl", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, "random@homelandsecurity", "knees_loop_girl", 1)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_COWER")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_COWER")) != 1)
										{
											iLocal_115 = 0;
										}
									}
									else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_118))
											{
												HUD::REMOVE_BLIP(&iLocal_118);
											}
										}
									}
								}
								else
								{
									func_118();
								}
								if (!func_117())
								{
									if (iLocal_127 < MISC::GET_GAME_TIMER())
									{
										if (func_116())
										{
											if (!PED::IS_PED_INJURED(iLocal_50[0]))
											{
												func_115(&uLocal_152, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!PED::IS_PED_INJURED(iLocal_50[1]))
										{
											func_115(&uLocal_152, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_127 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 5000));
									}
								}
								if (PED::IS_PED_INJURED(iLocal_50[0]))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_119[0]))
									{
										HUD::REMOVE_BLIP(&(iLocal_119[0]));
									}
									func_114(&uLocal_152, 5);
								}
								else if (PED::CAN_PED_SEE_HATED_PED(iLocal_50[0], PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
								{
								}
								else if (HUD::DOES_BLIP_EXIST(iLocal_119[0]))
								{
									HUD::REMOVE_BLIP(&(iLocal_119[0]));
								}
								if (PED::IS_PED_INJURED(iLocal_50[1]))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_119[1]))
									{
										HUD::REMOVE_BLIP(&(iLocal_119[1]));
									}
									func_114(&uLocal_152, 4);
								}
								else if (PED::CAN_PED_SEE_HATED_PED(iLocal_50[1], PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50[1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
								{
								}
								else if (HUD::DOES_BLIP_EXIST(iLocal_119[1]))
								{
									HUD::REMOVE_BLIP(&(iLocal_119[1]));
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_50[1]))
								{
									if (((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_50[0], joaat("WEAPON_STUNGUN"), 0) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_50[1], joaat("WEAPON_STUNGUN"), 0)) || (PED::IS_PED_DEAD_OR_DYING(iLocal_50[0], true) && PED::IS_PED_DEAD_OR_DYING(iLocal_50[1], true))) || func_113())
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_119[0]))
										{
											HUD::REMOVE_BLIP(&(iLocal_119[0]));
										}
										if (HUD::DOES_BLIP_EXIST(iLocal_119[1]))
										{
											HUD::REMOVE_BLIP(&(iLocal_119[1]));
										}
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 15f, 15f, 15f, false, true, 0))
											{
												if (!func_117())
												{
													func_115(&uLocal_152, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_88 = false;
													iLocal_106 = 1;
													PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_70, 16);
													ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_70);
													iLocal_47 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!bLocal_88)
								{
									if (!PED::IS_PED_INJURED(iLocal_70))
									{
										if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, "random@homelandsecurity", "idle_to_knees_girl", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, "random@homelandsecurity", "knees_loop_girl", 1)) && !PED::IS_PED_RAGDOLL(iLocal_70))
										{
											TASK::TASK_PLAY_ANIM(iLocal_70, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, false, false, false);
										}
										else
										{
											TASK::CLEAR_PED_TASKS(iLocal_70);
										}
										PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 0);
										PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, func_112());
										PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, true);
										func_111();
										bLocal_88 = true;
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_70))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_70, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											TASK::CLEAR_PED_TASKS(iLocal_70);
										}
									}
								}
								if (!iLocal_90)
								{
									if (!func_117())
									{
										if (func_115(&uLocal_152, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_90 = 1;
										}
									}
								}
								else if (!iLocal_89)
								{
									if (!func_117())
									{
										if (func_110() == 0)
										{
											func_115(&uLocal_152, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_110() == 1)
										{
											func_115(&uLocal_152, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_89 = 1;
									}
								}
								if (bLocal_88)
								{
									if (!PED::IS_PED_INJURED(iLocal_70))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_118))
											{
												HUD::REMOVE_BLIP(&iLocal_118);
											}
										}
										else if (!HUD::DOES_BLIP_EXIST(iLocal_118))
										{
											iLocal_118 = func_108(iLocal_70, 0, 145);
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_50[0]))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_50[0], PLAYER::PLAYER_PED_ID()))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
										{
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_50[1]))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_50[1], PLAYER::PLAYER_PED_ID()))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
										{
										}
									}
								}
								if (iLocal_89 && func_107())
								{
									if (!func_117())
									{
										func_105();
										SYSTEM::WAIT(0);
										func_115(&uLocal_152, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_50[0]));
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_50[1]));
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											if (PED::IS_PED_IN_GROUP(iLocal_70))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_50)
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[iVar0]))
													{
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_50[iVar0]));
													}
													iVar0++;
												}
												PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
												iLocal_47 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_99();
								func_94();
								func_93();
								func_90();
								func_89();
								if (func_88(Local_91))
								{
									func_69(0);
									func_105();
									SYSTEM::WAIT(0);
									func_115(&uLocal_152, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_67())
								{
									func_69(0);
									func_105();
									SYSTEM::WAIT(0);
									func_115(&uLocal_152, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!PED::IS_PED_INJURED(iLocal_70))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_91, Global_23, true, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0))
									{
										if (PED::IS_PED_IN_GROUP(iLocal_70))
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_118))
											{
												HUD::REMOVE_BLIP(&iLocal_118);
											}
											if (HUD::DOES_BLIP_EXIST(iLocal_122))
											{
												HUD::REMOVE_BLIP(&iLocal_122);
											}
											if (HUD::DOES_BLIP_EXIST(iLocal_123))
											{
												HUD::REMOVE_BLIP(&iLocal_123);
											}
											if (PED::IS_PED_IN_GROUP(iLocal_70))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_70);
											}
											if (func_107())
											{
												if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
												{
													VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f, 2, false);
												}
												iLocal_47 = 6;
											}
											else
											{
												func_105();
												SYSTEM::WAIT(0);
												func_115(&uLocal_152, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!PED::IS_PED_INJURED(iLocal_70))
												{
													TASK::OPEN_SEQUENCE_TASK(&iLocal_134);
													TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2052, 2);
													TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_94, 1f, -1, 0.25f, 0, 38.9844f);
													TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_134);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_134);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_134);
													PED::SET_PED_KEEP_TASK(iLocal_70, true);
												}
												func_35(func_110(), 1, 80, 0, 1);
												iLocal_47 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_34();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_118();
								break;
						}
						if (iLocal_148 && !iLocal_149)
						{
							if (iLocal_47 != 6)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_147) > 0.85f)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
										{
											if (!PED::IS_PED_INJURED(iLocal_70))
											{
												if (!PED::IS_PED_IN_VEHICLE(iLocal_70, iLocal_63, false))
												{
													if (!PED::IS_PED_RAGDOLL(iLocal_70))
													{
														TASK::CLEAR_PED_TASKS(iLocal_70);
														PED::SET_PED_INTO_VEHICLE(iLocal_70, iLocal_63, 2);
														PED::SET_PED_KEEP_TASK(iLocal_70, true);
														iLocal_149 = 1;
													}
													else
													{
														iLocal_149 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
							{
								PED::DELETE_PED(&iLocal_70);
							}
							func_4();
						}
						if ((iLocal_47 != 0 && iLocal_47 != 6) && iLocal_47 != 7)
						{
							if (func_1())
							{
								iLocal_47 = 9;
							}
						}
						if (iLocal_47 == 4 || iLocal_47 == 5)
						{
							if (!PED::IS_PED_INJURED(iLocal_70))
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 150f, 150f, 150f, false, true, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), true))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
									func_105();
									func_118();
								}
							}
						}
						if (iLocal_47 < 5)
						{
							PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
						}
						if (PED::IS_PED_INJURED(iLocal_50[0]))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_119[0]))
							{
								HUD::REMOVE_BLIP(&(iLocal_119[0]));
							}
						}
						if (PED::IS_PED_INJURED(iLocal_50[1]))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_119[1]))
							{
								HUD::REMOVE_BLIP(&(iLocal_119[1]));
							}
						}
						if (PED::IS_PED_INJURED(iLocal_70))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_118))
							{
								HUD::REMOVE_BLIP(&iLocal_118);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_213();
		}
	}
}

int func_1()//Position - 0xC9F
{
	int iVar0[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[0]))
	{
		if (PED::IS_PED_INJURED(iLocal_50[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[1]))
	{
		if (PED::IS_PED_INJURED(iLocal_50[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
	{
		if (PED::IS_PED_INJURED(iLocal_70))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0xD4E
{
	if (Global_33068)
	{
		func_3(4);
		return 1;
	}
	return 0;
}

void func_3(int iParam0)//Position - 0xD66
{
	Global_114356 = iParam0;
}

void func_4()//Position - 0xD74
{
	while (func_117())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_33())
	{
		SYSTEM::WAIT(0);
	}
	func_8(-1, 0);
	func_5();
	func_213();
}

void func_5()//Position - 0xDA9
{
	func_6();
}

int func_6()//Position - 0xDB6
{
	if (func_7(0))
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

int func_7(bool bParam0)//Position - 0xE01
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

void func_8(int iParam0, int iParam1)//Position - 0xE29
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_30(iParam0))
	{
		func_29(iParam0, iParam1);
		if (!func_28(51))
		{
			func_18("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_114370.f_24998.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322)
		{
			func_9(func_15(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_114358 = iParam1;
		if (Global_114356 == 0)
		{
			if (((Global_114359 == 1 || Global_114359 == 5) || Global_114359 == 11) || Global_114359 == 25)
			{
				func_3(2);
			}
			else if ((Global_114359 == 26 || Global_114359 == 8) || Global_114359 == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, var uParam2)//Position - 0xF2C
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
		func_13((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_114370.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114370.f_10197[iParam0 /*12*/].f_6 == 11 || Global_114370.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_114370.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_114370.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_114370.f_10197[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_10();
	}
}

void func_10()//Position - 0x1012
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
	Global_114106 = 0;
	Global_114107 = 0;
	Global_114108 = 0;
	Global_114109 = 0;
	Global_114110 = 0;
	Global_114111 = 0;
	Global_114112 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114370.f_10197.f_3853;
	Global_114370.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_114370.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_114370.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114106++;
					fVar1 = (fVar1 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_114107++;
					fVar2 = (fVar2 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_114108++;
					fVar3 = (fVar3 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_114109++;
					fVar4 = (fVar4 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_114110++;
					fVar5 = (fVar5 + (Global_114370.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_114111++;
					fVar6 = (fVar6 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_114112++;
					fVar7 = (fVar7 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_114089 > 0)
	{
		if (Global_114106 == Global_114089)
		{
			fVar1 = 55f;
		}
	}
	if (Global_114090 > 0)
	{
		if (Global_114107 == Global_114090)
		{
			fVar2 = 10f;
		}
	}
	if (Global_114091 > 0)
	{
		if (Global_114108 == Global_114091)
		{
			fVar3 = 0f;
		}
	}
	if (Global_114092 > 0)
	{
		if (Global_114109 == Global_114092)
		{
			fVar4 = 10f;
		}
	}
	if (Global_114093 > 0)
	{
		if (((Global_114110 == Global_114093 || (Global_114093 * 10 / Global_114110) < 41) || Global_114110 > Global_114096) || Global_114110 == Global_114096)
		{
			if (!BitTest(Global_114370.f_10197.f_3856, 14))
			{
				if (Global_114110 == Global_114093)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_114093, 0);
					MISC::SET_BIT(&(Global_114370.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_114094 > 0)
	{
		if (Global_114111 == Global_114094)
		{
			fVar6 = 15f;
		}
	}
	if (Global_114095 > 0)
	{
		if (Global_114112 == Global_114095)
		{
			fVar7 = 5f;
		}
	}
	Global_114370.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_114110 > Global_114096 || Global_114110 == Global_114096)
	{
		iVar9 = Global_114096;
	}
	else
	{
		iVar9 = Global_114110;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_114106, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_114089, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_114107, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_114090, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_114108, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_114091, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_114109, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_114092, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_114096, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_114112 + Global_114111), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_114095 + Global_114094), true);
	Global_114113 = (Global_114106 * 100 / Global_114089);
	Global_114115 = ((Global_114108 + Global_114107) * 100 / (Global_114091 + Global_114090));
	Global_114114 = ((Global_114109 + iVar9) * 100 / (Global_114092 + Global_114096));
	Global_114116 = ((Global_114111 + Global_114112) * 100 / (Global_114094 + Global_114095));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_114370.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_114113, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_114114, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_114115, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_114370.f_10197.f_3853))
	{
		func_12(13, SYSTEM::FLOOR(Global_114370.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79248)
		{
			if (func_11() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_114104 = 0;
				}
				if (!Global_64038)
				{
					func_6();
				}
			}
		}
	}
}

int func_11()//Position - 0x14D0
{
	return Global_32828;
}

int func_12(int iParam0, int iParam1)//Position - 0x14DB
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

void func_13(int iParam0, bool bParam1, int iParam2)//Position - 0x152C
{
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_14()//Position - 0x154A
{
	return Global_1574925;
}

int func_15(int iParam0, int iParam1)//Position - 0x1556
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

int func_16(int iParam0)//Position - 0x18CA
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

void func_17(int iParam0)//Position - 0x18F9
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
		MISC::SET_BIT(&(Global_114370.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x193B
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x195B
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
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_114370.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_114370.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_114370.f_20413.f_145++;
		func_20();
	}
}

void func_20()//Position - 0x1B2D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_114370.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[0])
			{
				Global_114370.f_20413.f_146[0] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[1])
			{
				Global_114370.f_20413.f_146[1] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[2])
			{
				Global_114370.f_20413.f_146[2] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_21()//Position - 0x1C44
{
	func_22();
	switch (Global_114370.f_2366.f_539.f_4321)
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

void func_22()//Position - 0x1C8A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_26(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_25(PLAYER::PLAYER_PED_ID());
			if (func_24(iVar0) && (!func_23(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_24(Global_114370.f_2366.f_539.f_4321))
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

bool func_23(int iParam0)//Position - 0x1D87
{
	return Global_43922 == iParam0;
}

bool func_24(int iParam0)//Position - 0x1D95
{
	return iParam0 < 3;
}

int func_25(int iParam0)//Position - 0x1DA1
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)//Position - 0x1DDE
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)//Position - 0x1E03
{
	return Global_2139[iParam0 /*29*/];
}

int func_28(int iParam0)//Position - 0x1E12
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
		return BitTest(Global_114370.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_29(int iParam0, int iParam1)//Position - 0x1E52
{
	MISC::SET_BIT(&(Global_114370.f_24998.f_8[iParam0]), iParam1);
}

int func_30(int iParam0)//Position - 0x1E6D
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

int func_31()//Position - 0x1F1E
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_32(Var0);
	return uVar16;
}

int func_32(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x1F3B
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

int func_33()//Position - 0x2115
{
	return 1;
}

void func_34()//Position - 0x211E
{
	switch (iLocal_150)
	{
		case 0:
			func_105();
			SYSTEM::WAIT(0);
			func_115(&uLocal_152, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_150++;
			break;
		
		case 1:
			iLocal_150++;
			break;
		
		case 2:
			iLocal_150++;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_134);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2052, 2);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_94, 1f, -1, 0.25f, 0, 38.9844f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_134);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_134);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_134);
				PED::SET_PED_KEEP_TASK(iLocal_70, true);
			}
			iLocal_150++;
			break;
		
		case 4:
			func_35(func_110(), 1, 80, 0, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_4();
			break;
	}
}

void func_35(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2202
{
	int iVar0;
	int iVar1;
	
	if (func_66(iParam0) == 3)
	{
		return;
	}
	if (func_66(iParam0) == 4)
	{
		return;
	}
	func_36(func_66(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x22D4
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_65();
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
					func_64(99, 1);
					func_63(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_63(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_63(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_49(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_46(5))
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
							func_63(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_46(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_63(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_63(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_46(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_45(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_64(95, iParam3);
					break;
				
				case 1:
					func_64(97, iParam3);
					break;
				
				case 2:
					func_64(96, iParam3);
					break;
			}
			func_64(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_39(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_39(bVar1);
	}
	iVar5 = (Global_61212[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61212[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61212[iVar2] = 2147483647;
				}
				else
				{
					Global_61212[iVar2] = (Global_61212[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_63(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_63(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_63(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61212[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61212[iVar2];
			Global_61212[iVar2] = (Global_61212[iVar2] - iParam3);
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
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_2[Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_2[Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_2[Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114370.f_20567.f_233[iVar2 /*69*/]++;
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_38(iParam0);
	if (Global_43922 == 15)
	{
		func_37(0);
	}
	return 1;
}

void func_37(bool bParam0)//Position - 0x28D3
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
			Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61220[iVar0 /*3*/][0] = Global_114370.f_20567[iVar0];
		Global_61220.f_31[iVar0 /*3*/][0] = Global_114370.f_20567.f_11[iVar0];
		Global_61220.f_62[iVar0 /*3*/][0] = Global_114370.f_20567.f_22[iVar0];
		Global_61220.f_93[iVar0 /*3*/][0] = Global_114370.f_20567.f_33[iVar0];
		Global_61220.f_124[iVar0 /*3*/][0] = Global_114370.f_20567.f_44[iVar0];
		Global_61220.f_155[iVar0 /*3*/][0] = Global_114370.f_20567.f_55[iVar0];
		Global_61220.f_186[iVar0 /*3*/][0] = Global_114370.f_20567.f_66[iVar0];
		Global_61220.f_217[iVar0 /*3*/][0] = Global_114370.f_20567.f_77[iVar0];
		Global_61220.f_248[iVar0 /*3*/][0] = Global_114370.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61220[iVar0 /*3*/][1] = Global_114370.f_20567[iVar0];
			Global_61220.f_31[iVar0 /*3*/][1] = Global_114370.f_20567.f_11[iVar0];
			Global_61220.f_62[iVar0 /*3*/][1] = Global_114370.f_20567.f_22[iVar0];
			Global_61220.f_93[iVar0 /*3*/][1] = Global_114370.f_20567.f_33[iVar0];
			Global_61220.f_124[iVar0 /*3*/][1] = Global_114370.f_20567.f_44[iVar0];
			Global_61220.f_155[iVar0 /*3*/][1] = Global_114370.f_20567.f_55[iVar0];
			Global_61220.f_186[iVar0 /*3*/][1] = Global_114370.f_20567.f_66[iVar0];
			Global_61220.f_217[iVar0 /*3*/][1] = Global_114370.f_20567.f_77[iVar0];
			Global_61220.f_248[iVar0 /*3*/][1] = Global_114370.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_38(int iParam0)//Position - 0x2B55
{
	int iVar0;
	
	iVar0 = Global_61212[iParam0];
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

void func_39(bool bParam0)//Position - 0x2BAF
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_13(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_13(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_13(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_13(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_42(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_42(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_42(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_42(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_42(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_42(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_114370.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_114370.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_114370.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_41() /*5569*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_114370.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_41() /*5569*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_40(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_40(bool bParam0)//Position - 0x2D26
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

int func_41()//Position - 0x2E27
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_42(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2E34
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_43(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_43(int iParam0, var uParam1)//Position - 0x2E62
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_44(uParam1));
}

int func_44(var uParam0)//Position - 0x2E77
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
		if (iVar1 > -1)
		{
			Global_2750546 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750546 = 1;
		}
	}
	return iVar0;
}

void func_45(int iParam0)//Position - 0x2EAB
{
	func_64(93, iParam0);
	func_64(29, iParam0);
	func_64(30, iParam0);
}

int func_46(int iParam0)//Position - 0x2ECB
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
		return func_48(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_48(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_48(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_48(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_47(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_47(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_47(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_47(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_47(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_47(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_114370.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_41() /*5569*/].f_681.f_10, iParam0);
}

int func_47(int iParam0, int iParam1)//Position - 0x306B
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_43(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_48(int iParam0, int iParam1)//Position - 0x309A
{
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_49(bool bParam0)//Position - 0x30B6
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
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_50(27, 1);
	return 1;
}

int func_50(int iParam0, int iParam1)//Position - 0x316D
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_51(iParam0, iParam1);
}

int func_51(int iParam0, int iParam1)//Position - 0x3188
{
	if (func_23(14) && !func_62(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33079 != 0 && !Global_79248)
	{
		return 0;
	}
	if (func_61(&Global_4543283))
	{
		if (func_59(&Global_4543283, iParam0))
		{
			return 0;
		}
		if (func_52(&Global_4543283, iParam0))
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

int func_52(var uParam0, int iParam1)//Position - 0x3225
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_62(iParam1))
	{
		return 0;
	}
	if (func_59(uParam0, iParam1))
	{
		return 0;
	}
	if (func_58(uParam0) < 0f)
	{
		func_57(uParam0, 0);
	}
	func_55(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_53(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_53(var uParam0, int iParam1)//Position - 0x32D6
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_62(iParam1))
	{
		return 0;
	}
	if (func_59(uParam0, iParam1))
	{
		return 0;
	}
	if (func_58(uParam0) < 0f)
	{
		func_57(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_54(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_54(var uParam0, int iParam1)//Position - 0x3351
{
	return (*uParam0)[iParam1] == 78;
}

void func_55(var uParam0)//Position - 0x3362
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_56(uParam0, iVar0);
		iVar0++;
	}
	func_57(uParam0, (Global_4543282 - 0.5f));
}

void func_56(var uParam0, int iParam1)//Position - 0x3396
{
	(*uParam0)[iParam1] = 78;
}

void func_57(var uParam0, float fParam1)//Position - 0x33A6
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

float func_58(var uParam0)//Position - 0x33C3
{
	return uParam0->f_80;
}

bool func_59(var uParam0, int iParam1)//Position - 0x33CF
{
	return func_60(uParam0, iParam1) != -1;
}

int func_60(var uParam0, int iParam1)//Position - 0x33E1
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

bool func_61(var uParam0)//Position - 0x340E
{
	return uParam0->f_79 == 1;
}

int func_62(int iParam0)//Position - 0x341C
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

void func_63(int iParam0, int iParam1)//Position - 0x346C
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_64(int iParam0, int iParam1)//Position - 0x348F
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59780[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59780[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59780[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59780[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_65()//Position - 0x34EC
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61212[0] == iVar0)
		{
			Global_61212[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61212[1] == iVar0)
		{
			Global_61212[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61212[2] == iVar0)
		{
			Global_61212[2] = iVar0;
		}
	}
}

int func_66(int iParam0)//Position - 0x3561
{
	return Global_2139[iParam0 /*29*/].f_17;
}

int func_67()//Position - 0x3572
{
	if (func_110() == 2)
	{
		if (func_68())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_33072)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_33072 = 1;
					if (!Global_33071)
					{
						Global_33071 = 1;
						return 1;
					}
				}
			}
			else if (Global_33072)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_33072 = 0;
			}
		}
	}
	return 0;
}

bool func_68()//Position - 0x35ED
{
	return Global_33067;
}

void func_69(bool bParam0)//Position - 0x35F8
{
	if (bParam0)
	{
		if (iLocal_75)
		{
			if (func_72(&uLocal_152, "REHOMAU", &Local_82, &Local_76, 8, 0, 0))
			{
				iLocal_75 = 0;
			}
		}
	}
	else if (!iLocal_75 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Local_82 = { func_71() };
		Local_76 = { func_70() };
		func_125();
		iLocal_75 = 1;
	}
}

struct<6> func_70()//Position - 0x364A
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22166 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_23176);
		if (iVar6 > -1)
		{
			return Global_21034[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_71()//Position - 0x3690
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22166 == 4)
	{
		return Global_21785;
	}
	return Var0;
}

bool func_72(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x36B4
{
	func_87(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22173 = 0;
	Global_22180 = 0;
	Global_22175 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 1;
	StringCopy(&Global_23170, sParam3, 24);
	Global_2883585 = 0;
	return func_73(sParam2, iParam4, 0);
}

int func_73(char* sParam0, int iParam1, bool bParam2)//Position - 0x3708
{
	Global_22167 = 0;
	if (Global_22166 == 0 || Global_22168 == 2)
	{
		if (Global_22166 != 0)
		{
			if (iParam1 > Global_22168)
			{
				if (Global_22173 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20813.f_1 = 3;
					Global_22166 = 0;
					Global_22167 = 1;
					Global_22219 = 0;
					Global_22162 = 0;
					Global_22163 = 0;
					Global_22177 = 0;
					Global_22176 = 0;
					Global_20812 = 0;
				}
				else
				{
					func_86();
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
		if (func_85(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_84();
		Global_21455 = { Global_21620 };
		Global_22172 = Global_22173;
		Global_22179 = Global_22180;
		Global_2883586 = Global_2883585;
		Global_22181 = { Global_22197 };
		Global_22174 = Global_22175;
		Global_23156 = Global_23157;
		Global_23164 = { Global_23170 };
		Global_23158 = Global_23159;
		Global_23160 = Global_23161;
		Global_23162 = Global_23163;
		Global_21785.f_370 = Global_23155;
		Global_21785.f_368 = Global_23153;
		Global_21785.f_369 = Global_23154;
		Global_22162 = Global_22163;
		if (Global_22172)
		{
			MISC::CLEAR_BIT(&Global_8683, 20);
			MISC::CLEAR_BIT(&Global_8684, 17);
			MISC::CLEAR_BIT(&Global_8685, 0);
			if (bParam2)
			{
				func_83();
				if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20813.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20779 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_82())
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
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_79248)
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
			if (func_81())
			{
				return 0;
			}
			else
			{
				switch (Global_20813.f_1)
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
				if (BitTest(Global_8683, 9))
				{
					return 0;
				}
			}
			func_80();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_79();
		func_74();
		return 1;
	}
	if (Global_22166 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22168 || iParam1 == Global_22168)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_86();
	}
	return 0;
}

void func_74()//Position - 0x39D6
{
	if (!func_75())
	{
		return;
	}
	if (Global_22172)
	{
		MemCopy(&(Global_1970561.f_1), {Global_21785}, 4);
		Global_1970561 = Global_7998;
		Global_1970561.f_6 = Global_22176;
	}
}

int func_75()//Position - 0x3A0D
{
	if (!Global_262145.f_29155 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_78())
	{
		return 0;
	}
	if (func_76(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_76(int iParam0)//Position - 0x3A70
{
	return func_77(iParam0, 20);
}

var func_77(int iParam0, int iParam1)//Position - 0x3A80
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_78()//Position - 0x3A98
{
	return -1;
}

void func_79()//Position - 0x3AA1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21034[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22166 = 1;
}

void func_80()//Position - 0x3AD1
{
	Global_22219 = Global_22218;
	Global_22213 = Global_22214;
	Global_22260 = { Global_22248 };
	Global_22266 = { Global_22254 };
	Global_22221 = Global_22220;
	Global_22290 = { Global_22272 };
	Global_22296 = { Global_22278 };
	Global_22302 = { Global_22284 };
	Global_22308 = { Global_22314 };
	Global_7998 = Global_7999;
	Global_8000 = Global_8001;
	Global_22177 = Global_22178;
	Global_22179 = Global_22180;
	Global_22181 = { Global_22197 };
	Global_22170 = Global_22171;
	Global_23182 = 0;
	Global_22215 = 0;
	Global_22216 = 0;
	MISC::CLEAR_BIT(&Global_8684, 16);
}

int func_81()//Position - 0x3B66
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_82()//Position - 0x3B8D
{
	int iVar0;
	int iVar1;
	
	if (Global_79248)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
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

void func_83()//Position - 0x3C26
{
	if (func_23(14))
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
		Global_20813 = func_110();
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

void func_84()//Position - 0x3CC8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21455[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21455[iVar0 /*10*/].f_1), "", 24);
		Global_21455[iVar0 /*10*/].f_7 = 0;
		Global_21455[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21455.f_161 = -99;
	Global_21455.f_162 = { 0f, 0f, 0f };
}

bool func_85(int iParam0, int iParam1)//Position - 0x3D1E
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

void func_86()//Position - 0x3D56
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20813.f_1 == 9) || Global_20812 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
		Global_20813.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22166 = 6;
		return;
	}
}

void func_87(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3DAD
{
	Global_21620 = { *uParam0 };
	Global_7999 = iParam1;
	StringCopy(&Global_22236, sParam2, 24);
	Global_23155 = iParam5;
	if (iParam3 == 0)
	{
		Global_23153 = 1;
		Global_23151 = 0;
	}
	else
	{
		Global_23153 = 0;
		Global_23151 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23154 = 1;
		Global_23152 = 0;
	}
	else
	{
		Global_23154 = 0;
		Global_23152 = 1;
	}
}

int func_88(struct<3> Param0)//Position - 0x3E03
{
	if (func_110() == 2)
	{
		if (func_68() && !Global_33070)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0) > (fLocal_45 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_33070 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_89()//Position - 0x3E90
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (!iLocal_103)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) && PED::IS_PED_IN_VEHICLE(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					func_69(0);
					func_105();
					SYSTEM::WAIT(0);
					func_115(&uLocal_152, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_103 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				iLocal_103 = 0;
			}
		}
		if (!iLocal_104)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_69(0);
				func_105();
				SYSTEM::WAIT(0);
				func_115(&uLocal_152, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_104 = 1;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_104 = 0;
		}
		if (!iLocal_105)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_69(0);
				func_105();
				SYSTEM::WAIT(0);
				func_115(&uLocal_152, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_105 = 1;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_105 = 0;
		}
	}
}

void func_90()//Position - 0x3FB7
{
	if (!func_91())
	{
		func_69(1);
	}
	if (!func_117())
	{
		switch (iLocal_128)
		{
			case 0:
				if (func_110() == 0)
				{
					func_115(&uLocal_152, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_110() == 1)
				{
					func_115(&uLocal_152, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_128++;
				break;
			
			case 1:
				func_115(&uLocal_152, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_128++;
				break;
			
			case 2:
				func_115(&uLocal_152, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_128++;
				break;
			
			case 3:
				if (func_110() == 0)
				{
					func_115(&uLocal_152, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_110() == 1)
				{
					func_115(&uLocal_152, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_128++;
				break;
			
			case 4:
				func_115(&uLocal_152, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_128++;
				break;
			
			case 5:
				if (func_110() == 0)
				{
					func_115(&uLocal_152, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_110() == 1)
				{
					func_115(&uLocal_152, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_128++;
				break;
			
			case 6:
				func_115(&uLocal_152, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_128++;
				break;
			
			case 7:
				func_115(&uLocal_152, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_128++;
				break;
			
			case 8:
				if (func_110() == 0)
				{
					func_115(&uLocal_152, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_110() == 1)
				{
					func_115(&uLocal_152, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_128++;
				break;
			
			case 9:
				func_115(&uLocal_152, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_128++;
				break;
			}
	}
}

int func_91()//Position - 0x41E6
{
	if (((((((((func_92("REHOM_QM") || func_92("REHOM_GETOUT")) || func_92("REHOM_SHOOT")) || func_92("REHOM_JACK")) || func_92("REHOM_WRONG")) || func_92("REHOM_CULT")) || func_92("REHOM_STOP")) || func_92("REHOM_NOVEH")) || func_92("REHOM_UNS1")) || func_92("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}

int func_92(char* sParam0)//Position - 0x427A
{
	var uVar0;
	
	if (func_117())
	{
		MemCopy(&uVar0, {func_71()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_93()//Position - 0x42A2
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_70))
		{
			if (!iLocal_140)
			{
				iLocal_141 = MISC::GET_GAME_TIMER();
				iLocal_140 = 1;
			}
			else
			{
				iLocal_142 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_140 = 0;
		}
		if ((iLocal_142 - iLocal_141) > 180000)
		{
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_70);
				func_115(&uLocal_152, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_118();
			}
		}
	}
}

void func_94()//Position - 0x430C
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_143)
		{
			iLocal_145 = MISC::GET_GAME_TIMER();
			iLocal_143 = 1;
		}
		else
		{
			iLocal_146 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_146 = 0;
		iLocal_143 = 0;
		iLocal_144 = 0;
	}
	if ((iLocal_146 - iLocal_145) > 50000 && !iLocal_144)
	{
		func_69(0);
		func_105();
		SYSTEM::WAIT(0);
		func_115(&uLocal_152, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_144 = 1;
	}
	if ((iLocal_146 - iLocal_145) > 60000 && iLocal_144)
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			func_95(iLocal_70, 120000, 0);
			PED::SET_PED_KEEP_TASK(iLocal_70, true);
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_70);
			}
		}
		func_118();
	}
}

int func_95(int iParam0, int iParam1, bool bParam2)//Position - 0x43D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_98(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_97(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_96();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_44882[iVar2 /*5*/] = 0;
	Global_44882[iVar2 /*5*/].f_1 = iParam0;
	Global_44882[iVar2 /*5*/].f_2 = iParam1;
	Global_44882[iVar2 /*5*/].f_3 = iParam1;
	Global_44882[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		Global_45120 = 1;
	}
	Global_44880++;
	return 1;
}

int func_96()//Position - 0x448D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_44882[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_97(int iParam0)//Position - 0x44BC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_44882[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_98(int iParam0)//Position - 0x44ED
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44908[iVar0 /*5*/].f_1)
		{
			return Global_44908[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_99()//Position - 0x452E
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_118))
			{
				HUD::REMOVE_BLIP(&iLocal_118);
			}
			if (!PED::IS_PED_IN_GROUP(iLocal_70))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 0);
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_122))
				{
					iLocal_122 = func_103(Local_91, 1);
				}
				if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_122))
					{
						iLocal_122 = func_103(Local_91, 1);
					}
				}
				if (func_110() == 2 && !func_102())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_123))
					{
						iLocal_123 = func_103(Local_97, 0);
						HUD::SET_BLIP_SPRITE(iLocal_123, 269 /*RADAR_ALTRUIST*/);
						func_100();
					}
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_118))
			{
				iLocal_118 = func_108(iLocal_70, 0, 145);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_122))
			{
				HUD::REMOVE_BLIP(&iLocal_122);
			}
		}
	}
}

void func_100()//Position - 0x4639
{
	if (func_110() == 2)
	{
		if (!Global_33069)
		{
			func_101("CULT_BLIP_HELP" /* GXT: Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~ */, -1);
			Global_33069 = 1;
		}
	}
}

void func_101(char* sParam0, int iParam1)//Position - 0x465D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_102()//Position - 0x4674
{
	if (Global_114370.f_24998.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

int func_103(struct<3> Param0, bool bParam3)//Position - 0x4690
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_104(bool bParam0, float fParam1, float fParam2)//Position - 0x46BC
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_105()//Position - 0x46D3
{
	Global_21032 = 0;
	func_106();
}

void func_106()//Position - 0x46E3
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
	}
}

int func_107()//Position - 0x4704
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_116 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_116, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_70, iLocal_116))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_108(int iParam0, bool bParam1, int iParam2)//Position - 0x4747
{
	int iVar0;
	
	iVar0 = func_109(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2139[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2139[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_109(int iParam0, bool bParam1, bool bParam2)//Position - 0x4791
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_104(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_110()//Position - 0x4835
{
	func_22();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_111()//Position - 0x484E
{
	if (!func_102())
	{
		if (func_110() == 2)
		{
			Global_33067 = 1;
		}
	}
}

int func_112()//Position - 0x486A
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_113()//Position - 0x487A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false) && PED::IS_PED_IN_VEHICLE(iLocal_70, iLocal_63, false)) && !PED::IS_PED_IN_VEHICLE(iLocal_50[0], iLocal_63, false)) && !PED::IS_PED_IN_VEHICLE(iLocal_50[1], iLocal_63, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_114(var uParam0, int iParam1)//Position - 0x48D0
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_115(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x48ED
{
	func_87(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22173 = 0;
	Global_22175 = 0;
	Global_22180 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_2883585 = 0;
	return func_73(sParam2, iParam3, 0);
}

int func_116()//Position - 0x493B
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_117()//Position - 0x4959
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_118()//Position - 0x497B
{
	func_213();
}

void func_119()//Position - 0x4987
{
	if (!iLocal_107)
	{
		if (!PED::IS_PED_INJURED(iLocal_50[0]))
		{
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_50[0], 0);
			TASK::CLEAR_PED_TASKS(iLocal_50[0]);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_134);
			TASK::TASK_CLEAR_LOOK_AT(0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_134);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_50[0], iLocal_134);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_134);
			PED::SET_PED_KEEP_TASK(iLocal_50[0], true);
			if (HUD::DOES_BLIP_EXIST(iLocal_119[0]))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_119[0], false);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_107 = 1;
		}
		else
		{
			SYSTEM::SETTIMERB(500);
			iLocal_107 = 1;
		}
	}
	if (!iLocal_108)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_119[1]))
		{
			HUD::SET_BLIP_AS_FRIENDLY(iLocal_119[1], false);
		}
		func_105();
		SYSTEM::WAIT(0);
		if (!PED::IS_PED_INJURED(iLocal_50[1]))
		{
			func_120(iLocal_50[1], "GENERIC_INSULT_HIGH", 24);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_50[1], 2);
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147)) && !PED::IS_PED_RAGDOLL(iLocal_50[1]))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_50[1], 16);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_134);
				TASK::TASK_PLAY_ANIM(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0f, false, false, false);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_134);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_50[1], iLocal_134);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_134);
				PED::SET_PED_KEEP_TASK(iLocal_50[1], true);
				iLocal_108 = 1;
			}
			else
			{
				TASK::TASK_COMBAT_PED(iLocal_50[1], PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_50[1], true);
				iLocal_108 = 1;
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_50[1]))
	{
		if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[1], joaat("SCRIPT_TASK_COMBAT")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[1], joaat("SCRIPT_TASK_COMBAT")) != 1)
		{
			iLocal_108 = 1;
		}
	}
}

void func_120(int iParam0, char* sParam1, int iParam2)//Position - 0x4B78
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_121(iParam2), 1);
}

int func_121(int iParam0)//Position - 0x4B8F
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

void func_122()//Position - 0x4D84
{
	iLocal_47 = 3;
}

void func_123()//Position - 0x4D8F
{
	func_105();
	SYSTEM::WAIT(0);
	func_115(&uLocal_152, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_47 = 3;
}

void func_124()//Position - 0x4DB5
{
	iLocal_47 = 3;
}

void func_125()//Position - 0x4DC0
{
	Global_21032 = 0;
	func_126();
}

void func_126()//Position - 0x4DD0
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23177 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22166 = 6;
		return;
	}
}

int func_127()//Position - 0x4DF4
{
	iLocal_124 = 0;
	while (iLocal_124 <= 1)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_50[iLocal_124], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[iLocal_124], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		iLocal_124++;
	}
	return 0;
}

void func_128()//Position - 0x4E33
{
	iLocal_126 = MISC::GET_GAME_TIMER();
	if (!bLocal_136)
	{
		switch (iLocal_49)
		{
			case 0:
				if (func_133())
				{
					iLocal_49 = 9;
				}
				if (func_132() && !iLocal_112)
				{
					iLocal_49 = 13;
				}
				if (func_115(&uLocal_152, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER();
					iLocal_49 = 1;
				}
				break;
			
			case 1:
				if (func_133())
				{
					iLocal_49 = 9;
				}
				if (func_132() && !iLocal_112)
				{
					iLocal_49 = 13;
				}
				if (func_115(&uLocal_152, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER();
					iLocal_49 = 2;
				}
				break;
			
			case 2:
				if (func_133())
				{
					iLocal_49 = 9;
				}
				if (func_132() && !iLocal_112)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_126 - iLocal_125) > 6000)
				{
					if (func_115(&uLocal_152, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_125 = MISC::GET_GAME_TIMER();
						iLocal_49 = 3;
					}
				}
				break;
			
			case 3:
				if (func_133())
				{
					iLocal_49 = 9;
				}
				if (func_132() && !iLocal_112)
				{
					iLocal_49 = 13;
				}
				if (func_115(&uLocal_152, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER();
					iLocal_49 = 4;
				}
				break;
			
			case 4:
				if (func_133())
				{
					iLocal_49 = 9;
				}
				if (func_132() && !iLocal_112)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_126 - iLocal_125) > 5500)
				{
					if (func_115(&uLocal_152, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_125 = MISC::GET_GAME_TIMER();
						iLocal_49 = 5;
					}
				}
				break;
			
			case 5:
				if (func_133())
				{
					iLocal_49 = 9;
				}
				if (func_132() && !iLocal_112)
				{
					iLocal_49 = 13;
				}
				if (!iLocal_113 && SYSTEM::TIMERA() > 5000)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_134);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_70, -1, 2054, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_70, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_134);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_50[0], iLocal_134);
					PED::SET_PED_KEEP_TASK(iLocal_50[0], true);
					iLocal_113 = 1;
				}
				if ((iLocal_126 - iLocal_125) > 3000 || iLocal_112)
				{
					if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && !PED::IS_PED_INJURED(iLocal_50[0])) && !PED::IS_PED_INJURED(iLocal_50[1])) && !PED::IS_PED_INJURED(iLocal_70))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_147) > 0.98f)
							{
								if (!func_117())
								{
									if (PED::IS_PED_FACING_PED(iLocal_50[0], iLocal_70, 10f))
									{
										if (func_115(&uLocal_152, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											TASK::TASK_CLEAR_LOOK_AT(iLocal_50[0]);
											iLocal_147 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
											PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_147, iLocal_63, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_70, iLocal_147, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[0], iLocal_147, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[1], iLocal_147, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1000f, 0);
											ENTITY::PLAY_ENTITY_ANIM(iLocal_63, "exit_car", "random@homelandsecurity", 4f, false, false, false, 0f, 0);
											iLocal_148 = 1;
											iLocal_125 = MISC::GET_GAME_TIMER();
											iLocal_49 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_131())
				{
					iLocal_49 = 15;
				}
				break;
			
			case 15:
				if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && !PED::IS_PED_INJURED(iLocal_50[0])) && !PED::IS_PED_INJURED(iLocal_50[1])) && !PED::IS_PED_INJURED(iLocal_70))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
					{
						if (!func_117())
						{
							if (PED::IS_PED_FACING_PED(iLocal_50[0], iLocal_70, 10f))
							{
								if (func_115(&uLocal_152, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_50[0]);
									iLocal_147 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_147, iLocal_63, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_70, iLocal_147, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[0], iLocal_147, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[1], iLocal_147, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1000f, 0);
									ENTITY::PLAY_ENTITY_ANIM(iLocal_63, "exit_car", "random@homelandsecurity", 2f, false, false, false, 0f, 0);
									iLocal_148 = 1;
									iLocal_125 = MISC::GET_GAME_TIMER();
									iLocal_49 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_129();
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_147) > 0.45f)
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && !PED::IS_PED_INJURED(iLocal_70)) && !PED::IS_PED_INJURED(iLocal_50[0]))
						{
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_147) > 0.9f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
						{
							if (!PED::IS_PED_INJURED(iLocal_50[0]))
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_50[0], iLocal_63, -1, -1, 1f, 9, 0, 0);
								iLocal_49 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_129();
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_147) > 0.95f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
						{
							if (!PED::IS_PED_INJURED(iLocal_50[1]))
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_50[1], iLocal_63, -1, 0, 1f, 9, 0, 0);
								PED::SET_PED_KEEP_TASK(iLocal_50[1], true);
								iLocal_49 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_129();
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && !PED::IS_PED_INJURED(iLocal_50[0])) && !PED::IS_PED_INJURED(iLocal_50[1]))
				{
					if ((PED::IS_PED_SITTING_IN_VEHICLE(iLocal_70, iLocal_63) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_50[0], iLocal_63)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_50[1], iLocal_63))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_50[0], iLocal_63, 15f, 786468);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_63, true);
						bLocal_136 = true;
					}
				}
				break;
			
			case 9:
				TASK::OPEN_SEQUENCE_TASK(&iLocal_134);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 0, 2);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_134);
				if (!PED::IS_PED_INJURED(iLocal_50[0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_50[0], iLocal_134);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_134);
				if (!iLocal_110)
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3))
					{
						func_105();
						SYSTEM::WAIT(0);
						func_115(&uLocal_152, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
					{
						func_105();
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_50[0]))
						{
							func_120(iLocal_50[0], "GUN_COOL", 24);
						}
					}
					iLocal_110 = 1;
					iLocal_132 = MISC::GET_GAME_TIMER();
				}
				iLocal_49 = 10;
				break;
			
			case 10:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 15f, 15f, 15f, false, true, 0))
				{
					iLocal_133 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_133 - iLocal_132) > 6000 && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && !iLocal_111)
				{
					if (func_115(&uLocal_152, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_132 = MISC::GET_GAME_TIMER();
						iLocal_111 = 1;
					}
					iLocal_49 = 11;
				}
				break;
			
			case 11:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 15f, 15f, 15f, false, true, 0))
				{
					iLocal_133 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_133 - iLocal_132) > 9000 && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) || iLocal_138)
				{
					if (func_115(&uLocal_152, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_49 = 12;
					}
				}
				break;
			
			case 12:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					iLocal_133 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_49 = 13;
				}
				if ((iLocal_133 - iLocal_132) > 13000)
				{
					iLocal_47 = 3;
				}
				break;
			
			case 13:
				if (!PED::IS_PED_INJURED(iLocal_50[0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_134);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_134);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_50[0], iLocal_134);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_134);
				}
				if (iLocal_139)
				{
					if (!PED::IS_PED_INJURED(iLocal_50[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_70))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[1], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_134);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_70, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_70, 20000, 0, 2);
								TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_70, -1f, 0f, 0f, 1f, -1, 0.1f, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_134);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_50[1], iLocal_134);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_134);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[1], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_134);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 0, 2);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_134);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_50[1], iLocal_134);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_134);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_70))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1)
						{
							TASK::TASK_SEEK_COVER_FROM_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), -1, false);
							PED::SET_PED_KEEP_TASK(iLocal_70, true);
						}
					}
				}
				iLocal_49 = 14;
				break;
			
			case 14:
				if (func_133())
				{
					iLocal_49 = 9;
				}
				if (func_131())
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
					{
						if (!iLocal_139)
						{
							if (!PED::IS_PED_INJURED(iLocal_50[1]))
							{
							}
							if (!PED::IS_PED_INJURED(iLocal_70))
							{
								TASK::TASK_SEEK_COVER_FROM_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), -1, false);
								PED::SET_PED_KEEP_TASK(iLocal_70, true);
							}
							iLocal_139 = 1;
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_50[0]))
				{
					if (!func_117() && !iLocal_112)
					{
						if (func_116())
						{
							func_115(&uLocal_152, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_115(&uLocal_152, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_112 = 1;
					}
					iLocal_113 = 0;
					SYSTEM::SETTIMERA(0);
					iLocal_125 = (MISC::GET_GAME_TIMER() - 4500);
					iLocal_49 = 5;
				}
			}
	}
}

void func_129()//Position - 0x57E8
{
	if (!func_117())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_70, iLocal_63, false))
				{
					if (func_130(iLocal_70, 0) == 2)
					{
						if (iLocal_127 < MISC::GET_GAME_TIMER())
						{
							func_115(&uLocal_152, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_127 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 4000));
						}
					}
				}
			}
		}
	}
}

int func_130(int iParam0, bool bParam1)//Position - 0x584F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_131()//Position - 0x58D4
{
	if ((!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(iLocal_50[1])) && !PED::IS_PED_INJURED(iLocal_70))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 1.5f, 1.5f, 5f, false, true, 2) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1], 2.5f, 2.5f, 5f, false, true, 2)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 1.5f, 1.5f, 5f, false, true, 2))
			{
				return 1;
			}
		}
		else if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 0.5f, 0.5f, 5f, false, true, 1) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1], 0.5f, 0.5f, 5f, false, true, 1)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 0.5f, 0.5f, 5f, false, true, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_132()//Position - 0x59D6
{
	if (!PED::IS_PED_INJURED(iLocal_50[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1], 6f, 6f, 6f, false, true, 0))
		{
			if (PED::IS_PED_FACING_PED(iLocal_50[1], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_50[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 6f, 6f, 6f, false, true, 0))
		{
			if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_133()//Position - 0x5A5C
{
	if (!PED::IS_PED_INJURED(iLocal_50[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1], 6f, 6f, 6f, false, true, 1))
		{
			if (PED::IS_PED_FACING_PED(iLocal_50[1], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_50[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 6f, 6f, 6f, false, true, 1))
		{
			if (PED::IS_PED_FACING_PED(iLocal_50[0], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_134(int iParam0)//Position - 0x5AF5
{
	if (func_137())
	{
		Global_114360 = 1;
		Global_114357 = MISC::GET_GAME_TIMER();
		if (func_16(Global_114359))
		{
			func_135(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_16(Global_114359))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_135(int iParam0)//Position - 0x5B48
{
	switch (iParam0)
	{
		case 0:
			if (Global_114370.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_101(func_136(iParam0), -1);
					Global_114370.f_24998.f_2++;
					MISC::SET_BIT(&Global_114366, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_114366, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_101(func_136(iParam0), -1);
					Global_114370.f_24998.f_3++;
					MISC::SET_BIT(&Global_114366, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_114366, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_101(func_136(iParam0), -1);
					Global_114370.f_24998.f_4++;
					MISC::SET_BIT(&Global_114366, 2);
				}
			}
			break;
	}
}

char* func_136(int iParam0)//Position - 0x5C23
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS" /* GXT: Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby. */;
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP" /* GXT: Flashing blue and red blips indicate situations around San Andreas that you can choose to help with. */;
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER" /* GXT: If you retrieve a stolen item, you can choose to keep it or return it for a reward. */;
			break;
	}
	return sVar0;
}

int func_137()//Position - 0x5C65
{
	switch (func_138(&Global_32888, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_138(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x5C9B
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98850.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_142(0))
		{
			return 0;
		}
		Global_43886++;
		*uParam0 = Global_43886;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23572.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43922 = iParam2;
		Global_43884 = *uParam0;
		Global_43885 = iParam4;
		Global_43883 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43883 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43883)
			{
				if (Global_43889[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43884 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_140(iParam2))
		{
			return 0;
		}
		if (Global_43883 == 8)
		{
			return 0;
		}
		Global_43886++;
		*uParam0 = Global_43886;
		Global_43889[Global_43883 /*4*/] = Global_43886;
		Global_43889[Global_43883 /*4*/].f_1 = iParam1;
		Global_43889[Global_43883 /*4*/].f_2 = iParam2;
		Global_43889[Global_43883 /*4*/].f_3 = 0;
		Global_43883++;
		if (iParam4 != 0)
		{
			func_139(uParam0, iParam4);
		}
	}
	return 2;
}

void func_139(var uParam0, int iParam1)//Position - 0x5DD2
{
	int iVar0;
	
	if (Global_43883 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43883)
	{
		if (Global_43889[iVar0 /*4*/] == *uParam0)
		{
			Global_43889[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_140(int iParam0)//Position - 0x5E21
{
	return func_141(iParam0, Global_43922);
}

int func_141(int iParam0, int iParam1)//Position - 0x5E32
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

int func_142(int iParam0)//Position - 0x6013
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	if (func_140(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_143()//Position - 0x6035
{
	if (HUD::DOES_BLIP_EXIST(iLocal_117))
	{
		HUD::REMOVE_BLIP(&iLocal_117);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_118))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_70, false))
		{
			iLocal_118 = func_108(iLocal_70, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_118, false);
		}
	}
	else
	{
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_118, true);
	}
	iLocal_124 = 0;
	while (iLocal_124 <= 1)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_119[iLocal_124]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[iLocal_124], false))
			{
				iLocal_119[iLocal_124] = func_108(iLocal_50[iLocal_124], 0, 145);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_119[iLocal_124], false);
			}
		}
		else
		{
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_119[iLocal_124], true);
		}
		iLocal_124++;
	}
}

int func_144()//Position - 0x60D8
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_131)
	{
		if (MISC::IS_PROJECTILE_IN_AREA(Local_64 - Vector(30f, 30f, 30f), Local_64 + Vector(30f, 30f, 30f), true) || MISC::IS_BULLET_IN_BOX(Local_64 - Vector(30f, 30f, 30f), Local_64 + Vector(30f, 30f, 30f), true))
		{
			iLocal_48 = 2;
			return 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(iLocal_50[1]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), 6f, 6f, 6f, false, true, 0)))
				{
					if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[0])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[1])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[1]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_50[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_50[1], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_48 = 2;
							return 1;
						}
					}
				}
			}
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_63, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID(), true))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.1f)
				{
					iLocal_48 = 2;
					return 1;
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63, iVar0, true))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_48 = 2;
				return 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_63, false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar1, iLocal_63))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_50[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_50[0], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0]) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[0], iVar0, true))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_50[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_50[1], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[1], PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1]) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[1], iVar0, true))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_70, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, iVar0, true))
				{
					iLocal_48 = 4;
					return 1;
				}
			}
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), true))
		{
			iLocal_48 = 4;
			return 1;
		}
	}
	return 0;
}

void func_145()//Position - 0x6492
{
	func_147(39, 1);
	func_147(40, 1);
	func_147(41, 1);
	func_147(42, 1);
	func_147(43, 1);
	func_147(44, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, false, true, true, true, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_94 - Vector(20f, 20f, 20f), Local_94 + Vector(20f, 20f, 20f), false, true, true, true, 1);
	MISC::CLEAR_AREA_OF_PEDS(Local_71, 50f, 0);
	PATHFIND::SET_PED_PATHS_IN_AREA(419f, -1387f, 28f, 427f, -1370f, 29f, false, 0);
	MISC::SET_BIT(&uLocal_129, 5);
	iLocal_70 = PED::CREATE_PED(26, iLocal_74, Local_71, 0f, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_70, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_70, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_70, 185, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_70, 206, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_70, 2, false);
	AUDIO::STOP_PED_SPEAKING(iLocal_70, true);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_70, "REHOMGirl");
	PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 0, 2, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 3, 1, 4, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 4, 0, 5, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_70, 6, 1, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("OFFICERS", &iLocal_151);
	iLocal_124 = 0;
	while (iLocal_124 <= 1)
	{
		iLocal_50[iLocal_124] = PED::CREATE_PED(6, iLocal_68, Local_53[iLocal_124 /*3*/], fLocal_60[iLocal_124], true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iLocal_124], true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_68);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50[iLocal_124], iLocal_151);
		PED::SET_PED_CONFIG_FLAG(iLocal_50[iLocal_124], 42, true);
		iLocal_124++;
	}
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_50[0], joaat("WEAPON_PISTOL"), -1, true, true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_50[1], joaat("WEAPON_PISTOL"), -1, false, true);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_151, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_151, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_151);
	iLocal_63 = VEHICLE::CREATE_VEHICLE(iLocal_69, Local_64, fLocal_67, true, true, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_69, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_63, 5f);
	VEHICLE::SET_VEHICLE_SIREN(iLocal_63, true);
	func_146(&uLocal_152, 5, iLocal_50[0], "ACULTMember1", 0, 1);
	func_146(&uLocal_152, 4, iLocal_50[1], "ACULTMember2", 0, 1);
	func_146(&uLocal_152, 3, iLocal_70, "REHOMGirl", 0, 1);
	if (func_110() == 0)
	{
		func_146(&uLocal_152, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_110() == 1)
	{
		func_146(&uLocal_152, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	iLocal_147 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
	PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_147, iLocal_63, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_70, iLocal_147, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[0], iLocal_147, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[1], iLocal_147, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1000f, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_147, true);
}

void func_146(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x678F
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79248)
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

void func_147(int iParam0, bool bParam1)//Position - 0x682A
{
	if (bParam1)
	{
		if (!func_151(iParam0, 2, 1))
		{
			func_150(iParam0, 2, 1);
		}
	}
	else if (func_151(iParam0, 2, 1))
	{
		func_148(iParam0, 2, 1);
	}
}

void func_148(int iParam0, int iParam1, bool bParam2)//Position - 0x6861
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_101444.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			iVar0 = func_47(func_149(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_42(func_149(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114370.f_668[iParam0]), iParam1);
	}
}

int func_149(int iParam0)//Position - 0x68D1
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12725;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14626;
}

void func_150(int iParam0, int iParam1, bool bParam2)//Position - 0x6C79
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_101444.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			iVar0 = func_47(func_149(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_42(func_149(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_114370.f_668[iParam0]), iParam1);
	}
}

int func_151(int iParam0, int iParam1, bool bParam2)//Position - 0x6CE9
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101444.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			return BitTest(func_47(func_149(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_114370.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_152()//Position - 0x6D49
{
	STREAMING::REQUEST_MODEL(iLocal_74);
	STREAMING::REQUEST_MODEL(iLocal_68);
	STREAMING::REQUEST_MODEL(iLocal_69);
	STREAMING::REQUEST_ANIM_DICT("random@homelandsecurity");
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_74) && STREAMING::HAS_MODEL_LOADED(iLocal_68)) && STREAMING::HAS_MODEL_LOADED(iLocal_69)) && STREAMING::HAS_ANIM_DICT_LOADED("random@homelandsecurity"))
	{
		bLocal_102 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_74);
		STREAMING::REQUEST_MODEL(iLocal_68);
		STREAMING::REQUEST_MODEL(iLocal_69);
		STREAMING::REQUEST_ANIM_DICT("random@homelandsecurity");
	}
}

void func_153()//Position - 0x6DB4
{
	iLocal_74 = joaat("A_F_Y_Tourist_01");
	iLocal_68 = joaat("A_M_O_ACult_01");
	iLocal_69 = joaat("fugitive");
	Local_71 = { -174.0522f, 1905.6106f, 197.0466f };
	Local_53[0 /*3*/] = { -174.3279f, 1903.9724f, 197.0502f };
	fLocal_60[0] = 147.8596f;
	Local_53[1 /*3*/] = { -174.3233f, 1906.3843f, 197.0145f };
	fLocal_60[1] = 164.5974f;
	Local_64 = { -172.4207f, 1905.183f, 197.1163f };
	fLocal_67 = 187.3899f;
	Local_91 = { 469.8768f, 2617.5325f, 42.2566f };
	Local_94 = { 472.2393f, 2611.6108f, 42.2676f };
	Local_97 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_101 = 1;
}

int func_154()//Position - 0x6E7A
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_165())
		{
			return 0;
		}
	}
	if (func_161())
	{
		return 1;
	}
	if (func_155(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_155(float fParam0, bool bParam1)//Position - 0x6F00
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_24(func_110()))
		{
			iVar36 = func_21();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_114370.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_114370.f_18577[iVar32 /*6*/], 3))
				{
					func_156(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_156(int iParam0, var uParam1)//Position - 0x6FB1
{
	switch (iParam0)
	{
		case 0:
			func_157(uParam1, "Abigail1", func_159(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 1:
			func_157(uParam1, "Abigail2", func_159(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 2:
			func_157(uParam1, "Barry1", func_159(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 3:
			func_157(uParam1, "Barry2", func_159(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 4:
			func_157(uParam1, "Barry3", func_159(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 5:
			func_157(uParam1, "Barry3A", func_159(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 6:
			func_157(uParam1, "Barry3C", func_159(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 7:
			func_157(uParam1, "Barry4", func_159(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_158(iParam0), 0, 0);
			break;
		
		case 8:
			func_157(uParam1, "Dreyfuss1", func_159(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 9:
			func_157(uParam1, "Epsilon1", func_159(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 10:
			func_157(uParam1, "Epsilon2", func_159(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 11:
			func_157(uParam1, "Epsilon3", func_159(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 12:
			func_157(uParam1, "Epsilon4", func_159(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 13:
			func_157(uParam1, "Epsilon5", func_159(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 14:
			func_157(uParam1, "Epsilon6", func_159(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 15:
			func_157(uParam1, "Epsilon7", func_159(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 16:
			func_157(uParam1, "Epsilon8", func_159(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 17:
			func_157(uParam1, "Extreme1", func_159(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 18:
			func_157(uParam1, "Extreme2", func_159(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 19:
			func_157(uParam1, "Extreme3", func_159(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 20:
			func_157(uParam1, "Extreme4", func_159(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 21:
			func_157(uParam1, "Fanatic1", func_159(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_158(iParam0), 1, 0);
			break;
		
		case 22:
			func_157(uParam1, "Fanatic2", func_159(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_158(iParam0), 1, 0);
			break;
		
		case 23:
			func_157(uParam1, "Fanatic3", func_159(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_158(iParam0), 0, 1);
			break;
		
		case 24:
			func_157(uParam1, "Hao1", func_159(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_158(iParam0), 0, 1);
			break;
		
		case 25:
			func_157(uParam1, "Hunting1", func_159(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 26:
			func_157(uParam1, "Hunting2", func_159(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 27:
			func_157(uParam1, "Josh1", func_159(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 28:
			func_157(uParam1, "Josh2", func_159(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 29:
			func_157(uParam1, "Josh3", func_159(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 30:
			func_157(uParam1, "Josh4", func_159(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 31:
			func_157(uParam1, "Maude1", func_159(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 32:
			func_157(uParam1, "Minute1", func_159(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 33:
			func_157(uParam1, "Minute2", func_159(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 34:
			func_157(uParam1, "Minute3", func_159(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 35:
			func_157(uParam1, "MrsPhilips1", func_159(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 36:
			func_157(uParam1, "MrsPhilips2", func_159(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 37:
			func_157(uParam1, "Nigel1", func_159(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 38:
			func_157(uParam1, "Nigel1A", func_159(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 39:
			func_157(uParam1, "Nigel1B", func_159(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 40:
			func_157(uParam1, "Nigel1C", func_159(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 41:
			func_157(uParam1, "Nigel1D", func_159(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 42:
			func_157(uParam1, "Nigel2", func_159(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 43:
			func_157(uParam1, "Nigel3", func_159(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 44:
			func_157(uParam1, "Omega1", func_159(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 45:
			func_157(uParam1, "Omega2", func_159(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 46:
			func_157(uParam1, "Paparazzo1", func_159(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 47:
			func_157(uParam1, "Paparazzo2", func_159(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 48:
			func_157(uParam1, "Paparazzo3", func_159(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 49:
			func_157(uParam1, "Paparazzo3A", func_159(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 50:
			func_157(uParam1, "Paparazzo3B", func_159(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 51:
			func_157(uParam1, "Paparazzo4", func_159(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 52:
			func_157(uParam1, "Rampage1", func_159(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 54:
			func_157(uParam1, "Rampage3", func_159(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 55:
			func_157(uParam1, "Rampage4", func_159(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 56:
			func_157(uParam1, "Rampage5", func_159(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 53:
			func_157(uParam1, "Rampage2", func_159(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 57:
			func_157(uParam1, "TheLastOne", func_159(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 58:
			func_157(uParam1, "Tonya1", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 59:
			func_157(uParam1, "Tonya2", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 60:
			func_157(uParam1, "Tonya3", func_159(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 61:
			func_157(uParam1, "Tonya4", func_159(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 62:
			func_157(uParam1, "Tonya5", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_157(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x8128
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_158(int iParam0)//Position - 0x81B9
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

struct<2> func_159(int iParam0)//Position - 0x84FF
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_160(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_160(int iParam0)//Position - 0x8535
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

int func_161()//Position - 0x8980
{
	if (func_164() && !func_165())
	{
		return 1;
	}
	if (func_163() && func_162())
	{
		return 1;
	}
	return 0;
}

bool func_162()//Position - 0x89B2
{
	return Global_114088 > 0;
}

int func_163()//Position - 0x89C0
{
	if (Global_98294 != -1)
	{
		return 1;
	}
	return 0;
}

int func_164()//Position - 0x89D5
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 20);
	}
	return 0;
}

int func_165()//Position - 0x89F8
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_166()//Position - 0x8A15
{
	if (!func_140(5))
	{
		return 1;
	}
	if (func_161())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_165())
		{
			return 0;
		}
	}
	if (func_155(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_167()//Position - 0x8A77
{
	if ((Global_114359 == func_31() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_114360)
	{
		return 1;
	}
	return 0;
}

void func_168(int iParam0)//Position - 0x8AA2
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_170(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114356 = 0;
	func_169();
}

void func_169()//Position - 0x8AD8
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

void func_170(int iParam0)//Position - 0x8B15
{
	Global_114359 = iParam0;
}

int func_171(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8B23
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152957)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_31();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_212())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_165())
			{
				return 0;
			}
		}
		if (!Global_114370.f_9088)
		{
			return 0;
		}
		if (func_7(0))
		{
			return 0;
		}
		if (func_161())
		{
			return 0;
		}
		if (func_211())
		{
			return 0;
		}
		if (Global_114359 != -1)
		{
			return 0;
		}
		if (func_24(func_110()))
		{
			if (func_155(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_210(iParam3))
		{
			return 0;
		}
		if (func_24(func_110()))
		{
			if (func_209(func_110()) == 4 || func_209(func_110()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_110()))
		{
			if (!func_208(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_207(Global_114370.f_24998.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_114361) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_206())
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
		if (!func_197(4))
		{
			return 0;
		}
		if (!func_140(5))
		{
			return 0;
		}
		if (func_196(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_4 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_196(0, 0))
		{
			return 0;
		}
		if (Global_32975)
		{
			return 0;
		}
		if (func_210(30) && !func_196(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_110()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_114370.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_114370.f_2366.f_539.f_2296[iVar4];
				if (func_195(iVar8))
				{
					if (func_173(iVar4))
					{
						if (!func_172(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_110() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_172(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x8EBD
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_173(int iParam0)//Position - 0x8F04
{
	int iVar0;
	
	iVar0 = Global_114370.f_2366.f_539.f_2296[iParam0];
	return func_174(iVar0);
}

int func_174(int iParam0)//Position - 0x8F25
{
	return func_175(iParam0, 1);
}

int func_175(int iParam0, int iParam1)//Position - 0x8F34
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_195(iParam0))
	{
		return 0;
	}
	func_176(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_176(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x8F87
{
	func_177(func_188(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_177(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x8FA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_187(iParam0, iParam1))
	{
		iVar0 = func_186(iParam1);
		iVar1 = func_184(iParam0);
		iVar2 = (func_184(iParam0) - func_184(iParam1));
		iVar3 = (func_186(iParam0) - func_186(iParam1));
		iVar4 = (func_183(iParam0) - func_183(iParam1));
		iVar5 = (func_182(iParam0) - func_182(iParam1));
		iVar6 = (func_181(iParam0) - func_181(iParam1));
		iVar7 = (func_180(iParam0) - func_180(iParam1));
	}
	else
	{
		iVar0 = func_186(iParam0);
		iVar1 = func_184(iParam1);
		iVar2 = (func_184(iParam1) - func_184(iParam0));
		iVar3 = (func_186(iParam1) - func_186(iParam0));
		iVar4 = (func_183(iParam1) - func_183(iParam0));
		iVar5 = (func_182(iParam1) - func_182(iParam0));
		iVar6 = (func_181(iParam1) - func_181(iParam0));
		iVar7 = (func_180(iParam1) - func_180(iParam0));
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
		iVar4 = (iVar4 + func_179(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_178(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_178(float fParam0, float fParam1, float fParam2)//Position - 0x91A6
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

int func_179(int iParam0, int iParam1)//Position - 0x91E8
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

int func_180(int iParam0)//Position - 0x928A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_181(int iParam0)//Position - 0x929D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_182(int iParam0)//Position - 0x92B0
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_183(int iParam0)//Position - 0x92C3
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_184(int iParam0)//Position - 0x92D5
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_185(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_185(bool bParam0, int iParam1, int iParam2)//Position - 0x92F7
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_186(int iParam0)//Position - 0x930E
{
	return iParam0 & 15;
}

int func_187(int iParam0, int iParam1)//Position - 0x931B
{
	int iVar0;
	int iVar1;
	
	if (!func_195(iParam1) || !func_195(iParam0))
	{
		return 1;
	}
	iVar0 = func_184(iParam0);
	iVar1 = func_184(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_186(iParam0);
	iVar1 = func_186(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_183(iParam0);
	iVar1 = func_183(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_181(iParam0);
	iVar1 = func_181(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_188()//Position - 0x9427
{
	var uVar0;
	
	func_194(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_193(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_192(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_191(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_190(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_189(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_189(var uParam0, int iParam1)//Position - 0x946D
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

void func_190(var uParam0, int iParam1)//Position - 0x94F3
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_191(var uParam0, int iParam1)//Position - 0x9526
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_186(*uParam0);
	iVar1 = func_184(*uParam0);
	if (iParam1 < 1 || iParam1 > func_179(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_192(var uParam0, int iParam1)//Position - 0x9577
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_193(var uParam0, int iParam1)//Position - 0x95B1
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_194(var uParam0, int iParam1)//Position - 0x95EC
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_195(int iParam0)//Position - 0x9628
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
	iVar0 = func_180(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_181(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_182(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_184(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_186(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_183(iParam0);
	if (iVar5 < 1 || iVar5 > func_179(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_196(int iParam0, bool bParam1)//Position - 0x9704
{
	if (BitTest(Global_114370.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)//Position - 0x9724
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_110();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_205()) || Global_113417) || Global_32831) || func_204()) || func_85(8, -1)) || func_203()) || func_202()) || func_201()) || func_200()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_205()) || Global_32831) || func_204()) || func_85(8, -1)) || func_201()) || func_203()) || func_202()) || func_200()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_205()) || Global_113417) || Global_32831) || func_204()) || func_85(8, -1)) || func_201()) || func_203()) || func_202()) || func_200()) || Global_114370.f_7691.f_919[iVar0] == 5) || Global_44469 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_205()) || Global_113417) || Global_32831) || func_204()) || func_85(8, -1)) || func_203()) || func_202()) || func_200()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_205() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_85(8, -1)) || func_200()) || func_199()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_85(8, -1) || func_203()) || func_202()) || func_199()) || func_198())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_205()) || Global_32831) || func_204()) || func_85(8, -1)) || func_202()) || func_201()) || func_200()) || Global_114370.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_205()) || func_202()) || Global_113417) || Global_32831) || func_204()) || Global_45122) || func_85(8, -1)) || func_201()) || func_199()) || func_200()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_205()) || Global_113417) || Global_32831) || func_204()) || func_85(8, -1)) || func_201()) || func_199()) || func_203()) || func_202()) || func_200())
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

var func_198()//Position - 0x9E41
{
	return Global_101431.f_1;
}

int func_199()//Position - 0x9E4F
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 13);
	}
	return 0;
}

int func_200()//Position - 0x9E72
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_201()//Position - 0x9E8C
{
	if (Global_79509)
	{
		return 1;
	}
	else if (Global_64032 && !Global_64038)
	{
		return 1;
	}
	return 0;
}

bool func_202()//Position - 0x9EB6
{
	return Global_101444.f_394 > 0;
}

bool func_203()//Position - 0x9EC7
{
	return Global_101444.f_393 > 0;
}

var func_204()//Position - 0x9ED8
{
	return Global_1575079;
}

int func_205()//Position - 0x9EE4
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98850.f_44 == 1;
	}
	return 0;
}

int func_206()//Position - 0x9F00
{
	func_83();
	if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_207(int iParam0)//Position - 0x9F28
{
	return func_187(func_188(), iParam0);
}

int func_208(int iParam0, int iParam1, int iParam2)//Position - 0x9F3A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_110();
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

int func_209(int iParam0)//Position - 0xA01E
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_114370.f_7691.f_919[iParam0];
}

int func_210(int iParam0)//Position - 0xA042
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_212())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_114370.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_114370.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_211()//Position - 0xA09A
{
	int iVar0;
	
	if (Global_32980)
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

int func_212()//Position - 0xA0DE
{
	int iVar0;
	
	if (Global_153246 == 2)
	{
		return 1;
	}
	else if (Global_153246 == 3)
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
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
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

void func_213()//Position - 0xA196
{
	int iVar0;
	
	if (iLocal_100)
	{
		func_227(0);
		if (Global_33071)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_226();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_105();
		if (iLocal_101)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_68);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_69, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_50[iVar0]))
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_AIM_GUN_AT_COORD(iLocal_50[iVar0], func_225(PLAYER::PLAYER_ID()), -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_50[iVar0], true);
						if (!PED::IS_PED_INJURED(iLocal_70))
						{
							TASK::TASK_COWER(iLocal_70, -1);
							PED::SET_PED_KEEP_TASK(iLocal_70, true);
						}
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar0], false);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_50[iVar0]));
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
		{
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_70, 317, true);
				if (PED::IS_PED_IN_GROUP(iLocal_70))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_70);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, false))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_70);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_70, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_70);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_63);
		}
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
	}
	func_214(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_214(int iParam0)//Position - 0xA320
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_167())
	{
		func_218(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114361 = MISC::GET_GAME_TIMER();
		func_217(30000);
		StringCopy(&cVar0, func_216(Global_114359, 1), 64);
		if (func_30(Global_114359) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_114358, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_114356, (MISC::GET_GAME_TIMER() - Global_114357), 0);
	}
	else if (BitTest(Global_114366, 0) && Global_114370.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114366, 0);
	}
	func_215(&Global_32888);
	Global_114360 = 0;
	func_170(-1);
}

void func_215(var uParam0)//Position - 0xA3D2
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43884)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43883 = 0;
	Global_43885 = 0;
	Global_43922 = 15;
	Global_64035 = 0;
	Global_64036 = 0;
}

char* func_216(int iParam0, bool bParam1)//Position - 0xA40F
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

void func_217(int iParam0)//Position - 0xA658
{
	Global_44473 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_218(int iParam0)//Position - 0xA66A
{
	func_219(iParam0, 0, func_224(iParam0));
}

void func_219(int iParam0, int iParam1, int iParam2)//Position - 0xA67F
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_188();
	func_222(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_221(iParam0, &uVar0);
	Var1 = { func_220(&uVar0) };
}

struct<16> func_220(var uParam0)//Position - 0xA6AE
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_182(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_181(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_180(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_183(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_186(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_184(*uParam0), 64);
	return Var0;
}

void func_221(int iParam0, var uParam1)//Position - 0xA77D
{
	Global_114370.f_24998.f_43[iParam0] = *uParam1;
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA795
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_184(*uParam0);
	iVar1 = func_186(*uParam0);
	iVar2 = func_183(*uParam0);
	iVar3 = func_182(*uParam0);
	iVar4 = func_181(*uParam0);
	iVar5 = func_180(*uParam0);
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
	iVar6 = func_179(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_179(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_223(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_223(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA917
{
	func_194(uParam0, iParam1);
	func_193(uParam0, iParam2);
	func_192(uParam0, iParam3);
	func_190(uParam0, iParam5);
	func_191(uParam0, iParam4);
	func_189(uParam0, iParam6);
}

int func_224(int iParam0)//Position - 0xA94F
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

Vector3 func_225(int iParam0)//Position - 0xAAF2
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_226()//Position - 0xAB05
{
	Global_33067 = 0;
	Global_33068 = 0;
	Global_33070 = 0;
	Global_33071 = 0;
	Global_33072 = 0;
}

void func_227(bool bParam0)//Position - 0xAB21
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_147(iVar0, bParam0);
		iVar0++;
	}
}

