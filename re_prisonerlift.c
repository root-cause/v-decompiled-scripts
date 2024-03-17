#region Local Var
	var uLocal_0 = 0;
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
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	int iLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	bool bLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	struct<3> Local_74 = { 0, 0, 0 } ;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80[2] = { 0, 0 };
	int iLocal_83 = 0;
	struct<3> Local_84 = { 0, 0, 0 } ;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	struct<3> Local_89 = { 0, 0, 0 } ;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	struct<3> Local_112 = { 0, 0, 0 } ;
	struct<3> Local_115 = { 0, 0, 0 } ;
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_121 = { 0, 0, 0 } ;
	struct<3> Local_124 = { 0, 0, 0 } ;
	struct<3> Local_127 = { 0, 0, 0 } ;
	struct<3> Local_130 = { 0, 0, 0 } ;
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_136 = { 0, 0, 0 } ;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	var uLocal_146 = 16;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_61 = { 1492.31f, 2136.53f, 89.15f };
	Local_64 = { 1408.2397f, 2522.8027f, 41.0419f };
	Local_112 = { 370.25763f, -1597.4883f, 35.949543f };
	Local_115 = { 824.992f, -1289.2668f, 27.245644f };
	Local_118 = { 450.18887f, -981.6754f, 42.69174f };
	Local_121 = { -1088.3698f, -842.2911f, 30.275543f };
	Local_124 = { 608.9076f, 0.806411f, 100.24968f };
	Local_127 = { -562.01587f, -130.81131f, 37.4369f };
	Local_130 = { 1855.237f, 3683.236f, 33.29165f };
	Local_133 = { -443.50635f, 6016.231f, 30.717875f };
	Local_136 = { 1693.5181f, 2579.2097f, 44.957134f };
	Local_57 = { ScriptParam_0.f_1[0 /*3*/] };
	func_192();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_70);
			}
		}
		func_177();
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (func_135(Local_57, 22, bLocal_67, 0, 0))
	{
		func_132(22);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_94)
		{
			if (!func_131())
			{
				if (func_130())
				{
					func_177();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_PL", 0);
			switch (iLocal_51)
			{
				case 0:
					if (func_118())
					{
						func_177();
					}
					if (!iLocal_56)
					{
						func_117();
					}
					else
					{
						func_116();
					}
					if (bLocal_55)
					{
						iLocal_139 = 1;
						iLocal_51 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_52)
						{
							case 0:
								switch (iLocal_53)
								{
									case 0:
										func_109();
										break;
									
									case 1:
										if (iLocal_54 == 0)
										{
											if (!PED::IS_PED_INJURED(iLocal_70))
											{
												if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 100f, 100f, 100f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_70)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 20f, 20f, 8f, false, true, 0))
												{
													func_108();
													if (!func_131())
													{
														func_98(1);
														func_97(1);
													}
												}
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 20f, 20f, 8f, false, true, 0))
												{
													if (HUD::DOES_BLIP_EXIST(iLocal_103))
													{
														HUD::SHOW_HEIGHT_ON_BLIP(iLocal_103, true);
													}
													func_96();
													if (!func_95())
													{
														if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, "random@prisoner_lift", "arms_waving", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_70, "random@prisoner_lift", "loop2_idlelook2", 3))
														{
															TASK::CLEAR_PED_TASKS(iLocal_70);
														}
														func_94(&uLocal_105);
													}
												}
											}
											else
											{
												func_93();
											}
											func_92();
											func_91();
										}
										else if (iLocal_54 == 1)
										{
											if (!PED::IS_PED_INJURED(iLocal_70))
											{
												if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 105f, 105f, 105f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_70)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 20f, 20f, 8f, false, true, 0))
												{
													func_108();
													if (!func_131())
													{
														func_98(1);
														func_97(1);
													}
												}
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_70, false))
												{
													if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 20f, 20f, 8f, false, true, 0))
													{
														if (HUD::DOES_BLIP_EXIST(iLocal_103))
														{
															HUD::SHOW_HEIGHT_ON_BLIP(iLocal_103, true);
														}
														func_96();
													}
												}
												if (bLocal_97)
												{
													if (SYSTEM::TIMERA() > 2000 && SYSTEM::TIMERA() < 2100)
													{
														TASK::CLEAR_PED_SECONDARY_TASK(iLocal_70);
													}
													if (SYSTEM::TIMERA() > 3000)
													{
														if (!iLocal_100)
														{
															if (!func_90())
															{
																func_74(&uLocal_146, "PRI2AU", "PRI2_ASK", 4, 0, 0, 0);
																iLocal_100 = 1;
															}
														}
													}
												}
												if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
													{
														if (!func_73(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
														{
															if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_70, 40f, 40f, 20f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 17))
															{
																TASK::CLEAR_PED_TASKS(iLocal_70);
																if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
																{
																	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
																}
																TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), PLAYER::PLAYER_PED_ID(), 8, 22f, 786469, 1f, 1f, true);
																PED::SET_PED_KEEP_TASK(iLocal_70, true);
																iLocal_53 = 13;
															}
															else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 20f, 20f, 8f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 17))
															{
																func_74(&uLocal_146, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
																func_93();
															}
														}
														else
														{
															func_74(&uLocal_146, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_93();
														}
													}
													else
													{
														func_74(&uLocal_146, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
														func_93();
													}
												}
												if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
													{
														if (((PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino"))) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
														{
															func_74(&uLocal_146, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_93();
														}
													}
												}
											}
											if (func_72())
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_70, false))
												{
													if (!PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bus")))
													{
														if (func_71(PLAYER::PLAYER_PED_ID(), iLocal_70) < 2.5f)
														{
															if (ENTITY::GET_ENTITY_SPEED(iLocal_73) < 1f)
															{
																func_70();
															}
														}
													}
													else if (func_71(PLAYER::PLAYER_PED_ID(), iLocal_70) < 10f)
													{
														if (ENTITY::GET_ENTITY_SPEED(iLocal_73) < 1f)
														{
															func_70();
														}
													}
												}
											}
										}
										if (func_66())
										{
											if (!PED::IS_PED_INJURED(iLocal_70))
											{
												TASK::CLEAR_PED_TASKS(iLocal_70);
												if (PED::IS_PED_IN_GROUP(iLocal_70))
												{
													PED::REMOVE_PED_FROM_GROUP(iLocal_70);
												}
											}
											func_93();
										}
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_70, false);
										}
										break;
									
									case 2:
										func_65();
										func_91();
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_70, false);
										}
										break;
									
									case 3:
										if (func_64())
										{
											iLocal_53 = 9;
										}
										func_56();
										func_91();
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_70, false);
										}
										break;
									
									case 5:
										func_55();
										break;
									
									case 6:
										if (!iLocal_102 && !PED::IS_PED_INJURED(iLocal_70))
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
											TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
											TASK::TASK_PAUSE(0, 1500);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_89, 1f, -1, 0.25f, 0, 333.9002f);
											TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
											PED::SET_PED_KEEP_TASK(iLocal_70, true);
											func_74(&uLocal_146, "PRI1AU", "PRI1_THK", 4, 0, 0, 0);
											PED::REMOVE_PED_FROM_GROUP(iLocal_70);
											iLocal_102 = 1;
										}
										if (func_66())
										{
											if (!PED::IS_PED_INJURED(iLocal_70))
											{
												TASK::CLEAR_PED_TASKS(iLocal_70);
												if (PED::IS_PED_IN_GROUP(iLocal_70))
												{
													PED::REMOVE_PED_FROM_GROUP(iLocal_70);
												}
												func_53();
												SYSTEM::WAIT(0);
												func_74(&uLocal_146, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
												TASK::TASK_SMART_FLEE_COORD(iLocal_70, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
												PED::SET_PED_KEEP_TASK(iLocal_70, true);
												SYSTEM::WAIT(0);
											}
											func_93();
										}
										if (!func_90())
										{
											func_16();
										}
										break;
									
									case 7:
										func_15();
										break;
									
									case 9:
										func_13();
										break;
									
									case 10:
										func_10();
										func_8();
										if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
										{
											if (!HUD::DOES_BLIP_EXIST(iLocal_68))
											{
												iLocal_68 = func_6(Local_84, 1);
											}
											if (func_74(&uLocal_146, "PRI1AU", "PRI1_LOS", 4, 0, 0, 0))
											{
												iLocal_53 = 3;
											}
										}
										if (bLocal_98)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
											{
												if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || func_5(PLAYER::PLAYER_PED_ID(), iLocal_83, 1) > 200f)
												{
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_80[0]));
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_80[1]));
													ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_83);
												}
											}
										}
										if (func_66())
										{
											if (!PED::IS_PED_INJURED(iLocal_70))
											{
												TASK::CLEAR_PED_TASKS(iLocal_70);
												if (PED::IS_PED_IN_GROUP(iLocal_70))
												{
													PED::REMOVE_PED_FROM_GROUP(iLocal_70);
												}
												TASK::TASK_SMART_FLEE_COORD(iLocal_70, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
												PED::SET_PED_KEEP_TASK(iLocal_70, true);
												func_53();
												SYSTEM::WAIT(0);
												func_74(&uLocal_146, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
											}
											func_93();
										}
										break;
									
									case 11:
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false))
										{
											if (!func_73(iLocal_73))
											{
												if (!iLocal_99)
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, false))
													{
														if (!PED::IS_PED_INJURED(iLocal_70))
														{
															if (!iLocal_101)
															{
																func_74(&uLocal_146, "PRI2AU", "PRI2_STEAL", 4, 0, 0, 0);
																iLocal_101 = 1;
															}
															TASK::TASK_ENTER_VEHICLE(iLocal_70, iLocal_73, -1, -1, 2f, 1, 0, 0);
															PED::SET_PED_KEEP_TASK(iLocal_70, true);
															iLocal_53 = 12;
														}
													}
													if (!PED::IS_PED_INJURED(iLocal_70))
													{
														if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), true) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_70) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_70) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))) || (ENTITY::GET_ENTITY_SPEED(iLocal_73) > 2.5f && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_73, false)))
														{
															TASK::TASK_COMBAT_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 0, 16);
															func_53();
															iLocal_99 = 1;
														}
													}
												}
											}
											else
											{
												if (HUD::DOES_BLIP_EXIST(iLocal_103))
												{
													HUD::REMOVE_BLIP(&iLocal_103);
												}
												if (!PED::IS_PED_INJURED(iLocal_70))
												{
													TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
													TASK::TASK_SMART_FLEE_COORD(0, 1449.0497f, 2507.2576f, 44.8843f, 1000f, -1, false, false);
													TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
													PED::SET_PED_KEEP_TASK(iLocal_70, true);
													iLocal_53 = 13;
												}
											}
										}
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 150f, 150f, 150f, false, true, 0))
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
												TASK::TASK_SMART_FLEE_COORD(0, 1449.0497f, 2507.2576f, 44.8843f, 1000f, -1, false, false);
												TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
												PED::SET_PED_KEEP_TASK(iLocal_70, true);
												iLocal_53 = 13;
											}
										}
										else
										{
											iLocal_53 = 13;
										}
										break;
									
									case 12:
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), true))
											{
												if (HUD::DOES_BLIP_EXIST(iLocal_103))
												{
													HUD::SET_BLIP_AS_FRIENDLY(iLocal_103, false);
													ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_70);
												}
											}
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false))
											{
												if (!func_73(iLocal_73))
												{
													if (PED::IS_PED_IN_VEHICLE(iLocal_70, iLocal_73, false))
													{
														if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_73))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_73, true, false);
														}
														TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_70, iLocal_73, PLAYER::PLAYER_PED_ID(), 8, 22f, 786469, 1f, 1f, true);
														PED::SET_PED_KEEP_TASK(iLocal_70, true);
														iLocal_53 = 13;
													}
													else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_73, false))
													{
														if (bLocal_108)
														{
															TASK::TASK_COMBAT_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 0, 16);
															func_53();
															iLocal_99 = 1;
															iLocal_53 = 11;
														}
														else
														{
															func_70();
														}
													}
													else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
													{
														if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_COMBAT")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_COMBAT")) != 0)
														{
														}
														else
														{
															iLocal_53 = 11;
														}
													}
												}
												else
												{
													if (HUD::DOES_BLIP_EXIST(iLocal_103))
													{
														HUD::REMOVE_BLIP(&iLocal_103);
													}
													TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
													TASK::TASK_SMART_FLEE_COORD(0, 1449.0497f, 2507.2576f, 44.8843f, 1000f, -1, false, false);
													TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
													PED::SET_PED_KEEP_TASK(iLocal_70, true);
													iLocal_53 = 13;
												}
											}
											else
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
												TASK::TASK_SMART_FLEE_COORD(0, 1449.0497f, 2507.2576f, 44.8843f, 1000f, -1, false, false);
												TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
												PED::SET_PED_KEEP_TASK(iLocal_70, true);
												iLocal_53 = 13;
											}
											if (!iLocal_99)
											{
												if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), true) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_70) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_70) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))) || (ENTITY::GET_ENTITY_SPEED(iLocal_73) > 2.5f && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_73, false)))
												{
													TASK::TASK_COMBAT_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 0, 16);
													func_53();
													iLocal_99 = 1;
												}
											}
										}
										else
										{
											iLocal_53 = 13;
										}
										break;
									
									case 13:
										iLocal_94 = 1;
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											if (PED::IS_PED_BEING_JACKED(iLocal_70))
											{
												func_53();
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, false))
											{
												if (HUD::DOES_BLIP_EXIST(iLocal_103))
												{
													HUD::SET_BLIP_AS_FRIENDLY(iLocal_103, false);
												}
												if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(iLocal_70, false), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(iLocal_70, false), joaat("towtruck2")))
												{
													iLocal_79 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(iLocal_70, false));
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_79))
													{
														iLocal_78 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iLocal_79);
														if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(iLocal_70, false), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_78, false))
														{
															if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(iLocal_70, false), iLocal_78))
															{
																VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(iLocal_70, false), iLocal_78);
															}
														}
													}
												}
												if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iLocal_70, false)))
												{
													TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
													TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
													TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
													PED::SET_PED_KEEP_TASK(iLocal_70, true);
												}
												if (!iLocal_111)
												{
													if ((func_1(PED::GET_VEHICLE_PED_IS_IN(iLocal_70, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iLocal_70, false), false)) || func_73(PED::GET_VEHICLE_PED_IS_IN(iLocal_70, false)))
													{
														if (HUD::DOES_BLIP_EXIST(iLocal_103))
														{
															HUD::SET_BLIP_AS_FRIENDLY(iLocal_103, false);
														}
														TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
														TASK::TASK_SMART_FLEE_COORD(0, 1449.0497f, 2507.2576f, 44.8843f, 1000f, -1, false, false);
														TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
														TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
														TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
														TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
														PED::SET_PED_KEEP_TASK(iLocal_70, true);
														iLocal_111 = 1;
													}
												}
												if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 245f, 245f, 245f, false, true, 0))
												{
													func_93();
												}
											}
											else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
											{
												iLocal_53 = 11;
											}
											else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 200f, 200f, 200f, false, true, 0))
											{
												func_16();
											}
										}
										else
										{
											func_16();
										}
										break;
								}
								break;
							
							case 1:
								switch (iLocal_93)
								{
									case 1:
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											TASK::CLEAR_PED_TASKS(iLocal_70);
											if (PED::IS_PED_IN_GROUP(iLocal_70))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_70);
											}
											TASK::TASK_SMART_FLEE_COORD(iLocal_70, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
											PED::SET_PED_KEEP_TASK(iLocal_70, true);
											SYSTEM::WAIT(0);
											func_93();
										}
										break;
									
									case 2:
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											TASK::CLEAR_PED_TASKS(iLocal_70);
											if (PED::IS_PED_IN_GROUP(iLocal_70))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_70);
											}
											TASK::TASK_SMART_FLEE_COORD(iLocal_70, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
											PED::SET_PED_KEEP_TASK(iLocal_70, true);
											SYSTEM::WAIT(0);
											func_93();
										}
										break;
									
									case 3:
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											TASK::CLEAR_PED_TASKS(iLocal_70);
											if (PED::IS_PED_IN_GROUP(iLocal_70))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_70);
											}
											TASK::TASK_SMART_FLEE_COORD(iLocal_70, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
											PED::SET_PED_KEEP_TASK(iLocal_70, true);
											SYSTEM::WAIT(0);
											func_93();
										}
										break;
									
									case 4:
										if (!PED::IS_PED_INJURED(iLocal_70))
										{
											TASK::CLEAR_PED_TASKS(iLocal_70);
											if (PED::IS_PED_IN_GROUP(iLocal_70))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_70);
											}
											TASK::TASK_SMART_FLEE_COORD(iLocal_70, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
											PED::SET_PED_KEEP_TASK(iLocal_70, true);
											SYSTEM::WAIT(0);
											func_93();
										}
										break;
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_177();
		}
	}
}

int func_1(int iParam0)//Position - 0x10DE
{
	int iVar0;
	int iVar1;
	
	if ((func_4(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_2(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_2(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_2(int iParam0)//Position - 0x114A
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

int func_3(int iParam0)//Position - 0x1174
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

int func_4(int iParam0)//Position - 0x1195
{
	if (func_3(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

float func_5(int iParam0, int iParam1, bool bParam2)//Position - 0x11B5
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

int func_6(struct<3> Param0, bool bParam3)//Position - 0x1213
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_7(bool bParam0, float fParam1, float fParam2)//Position - 0x123F
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_8()//Position - 0x1256
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!func_95())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_70, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_70, 0, 0);
				}
				if (!iLocal_109)
				{
					if (!func_90())
					{
						if (func_9())
						{
							func_74(&uLocal_146, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_74(&uLocal_146, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						iLocal_109 = 1;
					}
				}
			}
			else
			{
				iLocal_109 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_70, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_70);
				}
			}
		}
	}
}

int func_9()//Position - 0x1332
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_10()//Position - 0x139D
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 8f, 8f, 8f, false, true, 0))
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_70, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_103))
						{
							HUD::REMOVE_BLIP(&iLocal_103);
						}
						if (iLocal_53 != 10)
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_68))
							{
								iLocal_68 = func_6(Local_84, 1);
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_103))
					{
						HUD::REMOVE_BLIP(&iLocal_103);
					}
					if (iLocal_53 != 10)
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_68))
						{
							iLocal_68 = func_6(Local_84, 1);
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_68))
			{
				HUD::REMOVE_BLIP(&iLocal_68);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_103))
			{
				iLocal_103 = func_11(iLocal_70, 0, 145);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_68))
			{
				HUD::REMOVE_BLIP(&iLocal_68);
			}
		}
	}
}

int func_11(int iParam0, bool bParam1, int iParam2)//Position - 0x148C
{
	int iVar0;
	
	iVar0 = func_12(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2139[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2139[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)//Position - 0x14D6
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_13()//Position - 0x157A
{
	switch (iLocal_104)
	{
		case 0:
			if (func_14())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_70))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_70);
				}
				func_53();
				SYSTEM::WAIT(0);
				func_74(&uLocal_146, "PRI1AU", "PRI1_STA", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_104++;
			}
			break;
		
		case 1:
			if (func_14())
			{
				if (SYSTEM::TIMERA() > 500)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false))
					{
						VEHICLE::SET_VEHICLE_STEER_BIAS(iLocal_73, -1f);
						if (HUD::DOES_BLIP_EXIST(iLocal_68))
						{
							HUD::REMOVE_BLIP(&iLocal_68);
						}
						iLocal_104++;
					}
				}
			}
			break;
		
		case 2:
			if (func_14())
			{
				if (SYSTEM::TIMERA() > 2000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_73, 24, 2000);
						iLocal_104++;
					}
				}
			}
			break;
		
		case 3:
			if (func_14())
			{
				if (SYSTEM::TIMERA() > 4000)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_70))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_70);
							VEHICLE::SET_VEHICLE_STEER_BIAS(iLocal_73, 0f);
							TASK::TASK_LEAVE_VEHICLE(iLocal_70, iLocal_73, 320);
							if (!HUD::DOES_BLIP_EXIST(iLocal_103))
							{
								iLocal_103 = func_11(iLocal_70, 1, 145);
							}
							iLocal_104++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_70) && !PED::IS_PED_IN_VEHICLE(iLocal_70, iLocal_73, false))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_70, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_70, true);
					func_53();
					SYSTEM::WAIT(0);
					func_74(&uLocal_146, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
					iLocal_104++;
				}
			}
			break;
		
		case 5:
			SYSTEM::WAIT(0);
			func_93();
			break;
	}
}

int func_14()//Position - 0x1737
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_73 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_70, iLocal_73))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_15()//Position - 0x177A
{
	if ((!iLocal_102 && !PED::IS_PED_INJURED(iLocal_70)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_70);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
		TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_89, 1f, -1, 0.25f, 0, 333.9002f);
		TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
		PED::SET_PED_KEEP_TASK(iLocal_70, true);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		iLocal_102 = 1;
	}
	if (func_66())
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			TASK::CLEAR_PED_TASKS(iLocal_70);
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_70);
			}
			TASK::TASK_SMART_FLEE_COORD(iLocal_70, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_70, true);
			func_53();
			SYSTEM::WAIT(0);
			func_74(&uLocal_146, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_93();
	}
	if (!func_90())
	{
		func_16();
	}
}

void func_16()//Position - 0x1883
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_70, false);
	}
	while (!func_52())
	{
		SYSTEM::WAIT(0);
	}
	if (iLocal_54 == 0)
	{
		func_46(func_51(), 4, 3);
	}
	func_20(22, bLocal_67);
	func_17();
	func_177();
}

void func_17()//Position - 0x18CC
{
	func_18();
}

int func_18()//Position - 0x18D9
{
	if (func_19(0))
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

int func_19(bool bParam0)//Position - 0x1924
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

void func_20(int iParam0, bool bParam1)//Position - 0x194C
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_43(iParam0))
	{
		func_42(iParam0, bParam1);
		if (!func_41(51))
		{
			func_31("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_34(), 0, 138, 0);
			func_30(51);
		}
		if (func_29(iParam0))
		{
			Global_114370.f_24998.f_2 = 3;
		}
		if (func_28(iParam0, bParam1) != 322)
		{
			func_22(func_28(iParam0, bParam1), Local_48.f_0, Local_48.f_1);
		}
		Global_114358 = bParam1;
		if (Global_114356 == 0)
		{
			if (((Global_114359 == 1 || Global_114359 == 5) || Global_114359 == 11) || Global_114359 == 25)
			{
				func_21(2);
			}
			else if ((Global_114359 == 26 || Global_114359 == 8) || Global_114359 == 17)
			{
				func_21(7);
			}
			else
			{
				func_21(1);
			}
		}
	}
}

void func_21(int iParam0)//Position - 0x1A4F
{
	Global_114356 = iParam0;
}

void func_22(int iParam0, var uParam1, var uParam2)//Position - 0x1A5D
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
		func_26((891 + iParam0), 1, -1);
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
		func_23();
	}
}

void func_23()//Position - 0x1B43
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
		func_25(13, SYSTEM::FLOOR(Global_114370.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79248)
		{
			if (func_24() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_114104 = 0;
				}
				if (!Global_64038)
				{
					func_18();
				}
			}
		}
	}
}

int func_24()//Position - 0x2001
{
	return Global_32828;
}

int func_25(int iParam0, int iParam1)//Position - 0x200C
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

void func_26(int iParam0, bool bParam1, int iParam2)//Position - 0x205D
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_27()//Position - 0x207B
{
	return Global_1574925;
}

int func_28(int iParam0, int iParam1)//Position - 0x2087
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

int func_29(int iParam0)//Position - 0x23FB
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

void func_30(int iParam0)//Position - 0x242A
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

void func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x246C
{
	func_32(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_32(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x248D
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
		func_33();
	}
}

void func_33()//Position - 0x2660
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

int func_34()//Position - 0x2777
{
	func_35();
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

void func_35()//Position - 0x27BD
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_39(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_38(PLAYER::PLAYER_PED_ID());
			if (func_37(iVar0) && (!func_36(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_37(Global_114370.f_2366.f_539.f_4321))
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

bool func_36(int iParam0)//Position - 0x28BA
{
	return Global_43922 == iParam0;
}

bool func_37(int iParam0)//Position - 0x28C8
{
	return iParam0 < 3;
}

int func_38(int iParam0)//Position - 0x28D4
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)//Position - 0x2911
{
	if (func_37(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_40(int iParam0)//Position - 0x2936
{
	return Global_2139[iParam0 /*29*/];
}

int func_41(int iParam0)//Position - 0x2945
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

void func_42(int iParam0, int iParam1)//Position - 0x2985
{
	MISC::SET_BIT(&(Global_114370.f_24998.f_8[iParam0]), iParam1);
}

int func_43(int iParam0)//Position - 0x29A0
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

int func_44()//Position - 0x2A51
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_45(Var0);
	return uVar16;
}

int func_45(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2A6E
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

void func_46(int iParam0, int iParam1, int iParam2)//Position - 0x2C48
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_114370.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_114370.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 14626;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 14626)
			{
				iVar0 = func_50(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_47(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_47(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2D36
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_48(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_48(int iParam0, var uParam1)//Position - 0x2D64
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_49(uParam1));
}

int func_49(var uParam0)//Position - 0x2D79
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_50(int iParam0, int iParam1)//Position - 0x2DAD
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_48(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_51()//Position - 0x2DDC
{
	func_35();
	return Global_114370.f_2366.f_539.f_4321;
}

int func_52()//Position - 0x2DF5
{
	return 1;
}

void func_53()//Position - 0x2DFE
{
	Global_21032 = 0;
	func_54();
}

void func_54()//Position - 0x2E0E
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
	}
}

void func_55()//Position - 0x2E2F
{
	if (HUD::DOES_BLIP_EXIST(iLocal_68))
	{
		HUD::SET_BLIP_ROUTE(iLocal_68, false);
		HUD::REMOVE_BLIP(&iLocal_68);
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			HUD::CLEAR_PRINTS();
			func_53();
			SYSTEM::WAIT(0);
			if (func_74(&uLocal_146, "PRI1AU", "PRI1_THK", 4, 0, 0, 0))
			{
			}
		}
	}
	if (SYSTEM::TIMERA() > 1000)
	{
		iLocal_53 = 7;
	}
}

void func_56()//Position - 0x2E84
{
	struct<3> Var0[4];
	
	func_10();
	func_63();
	func_62();
	func_8();
	if (!iLocal_95 && !iLocal_96)
	{
		if (func_51() == 0)
		{
			if (func_74(&uLocal_146, "PRI1AU", "PRI1_CHAT1", 4, 0, 0, 0))
			{
				iLocal_95 = 1;
			}
		}
		else if (func_51() == 1)
		{
			if (func_74(&uLocal_146, "PRI1AU", "PRI1_CHAT2", 4, 0, 0, 0))
			{
				iLocal_95 = 1;
			}
		}
	}
	if (iLocal_95 && !iLocal_96)
	{
		if (func_51() == 0)
		{
			if (func_74(&uLocal_146, "PRI1AU", "PRI1_CHAT1b", 4, 0, 0, 0))
			{
				iLocal_96 = 1;
			}
		}
		else if (func_51() == 1)
		{
			if (func_74(&uLocal_146, "PRI1AU", "PRI1_CHAT2b", 4, 0, 0, 0))
			{
				iLocal_96 = 1;
			}
		}
	}
	if (iLocal_95 && iLocal_96)
	{
		if (func_51() == 0)
		{
			if (func_74(&uLocal_146, "PRI1AU", "PRI1_CHAT1c", 4, 0, 0, 0))
			{
				iLocal_95 = 0;
			}
		}
		else if (func_51() == 1)
		{
			if (func_74(&uLocal_146, "PRI1AU", "PRI1_CHAT2c", 4, 0, 0, 0))
			{
				iLocal_95 = 0;
			}
		}
	}
	if (func_66())
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			TASK::CLEAR_PED_TASKS(iLocal_70);
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_70);
			}
			TASK::TASK_SMART_FLEE_COORD(iLocal_70, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_70, true);
			func_53();
			SYSTEM::WAIT(0);
			func_74(&uLocal_146, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_93();
	}
	if (func_61(PLAYER::PLAYER_PED_ID(), Local_57, 1) > 200f)
	{
		if (!bLocal_98)
		{
			Var0[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(0f, 9f, 0f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[0 /*3*/], false, &(Var0[0 /*3*/]), 0);
			Var0[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(0f, 9f, 0f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[1 /*3*/], false, &(Var0[1 /*3*/]), 0);
			Var0[2 /*3*/] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(0f, 0f, 9f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[2 /*3*/], false, &(Var0[2 /*3*/]), 0);
			Var0[3 /*3*/] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(0f, 0f, 9f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[3 /*3*/], false, &(Var0[3 /*3*/]), 0);
			if (!CAM::IS_SPHERE_VISIBLE(Var0[0 /*3*/], 3f))
			{
				iLocal_83 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), Var0[0 /*3*/], func_59(Var0[0 /*3*/], func_60(PLAYER::PLAYER_ID())), true, true, false);
				iLocal_80[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_83, 6, joaat("S_M_Y_Ranger_01"), -1, true, true);
				iLocal_80[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_83, 6, joaat("S_M_Y_Ranger_01"), 0, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_80[0], joaat("WEAPON_PISTOL"), -1, false, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_80[1], joaat("WEAPON_PISTOL"), -1, false, true);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				bLocal_98 = true;
			}
			else if (!CAM::IS_SPHERE_VISIBLE(Var0[1 /*3*/], 3f))
			{
				iLocal_83 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), Var0[1 /*3*/], func_59(Var0[1 /*3*/], func_60(PLAYER::PLAYER_ID())), true, true, false);
				iLocal_80[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_83, 6, joaat("S_M_Y_Ranger_01"), -1, true, true);
				iLocal_80[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_83, 6, joaat("S_M_Y_Ranger_01"), 0, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_80[0], joaat("WEAPON_PISTOL"), -1, false, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_80[1], joaat("WEAPON_PISTOL"), -1, false, true);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				bLocal_98 = true;
			}
			else if (!CAM::IS_SPHERE_VISIBLE(Var0[2 /*3*/], 3f))
			{
				iLocal_83 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), Var0[2 /*3*/], func_59(Var0[2 /*3*/], func_60(PLAYER::PLAYER_ID())), true, true, false);
				iLocal_80[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_83, 6, joaat("S_M_Y_Ranger_01"), -1, true, true);
				iLocal_80[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_83, 6, joaat("S_M_Y_Ranger_01"), 0, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_80[0], joaat("WEAPON_PISTOL"), -1, false, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_80[1], joaat("WEAPON_PISTOL"), -1, false, true);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				bLocal_98 = true;
			}
			else if (!CAM::IS_SPHERE_VISIBLE(Var0[3 /*3*/], 3f))
			{
				iLocal_83 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), Var0[3 /*3*/], func_59(Var0[3 /*3*/], func_60(PLAYER::PLAYER_ID())), true, true, false);
				iLocal_80[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_83, 6, joaat("S_M_Y_Ranger_01"), -1, true, true);
				iLocal_80[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_83, 6, joaat("S_M_Y_Ranger_01"), 0, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_80[0], joaat("WEAPON_PISTOL"), -1, false, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_80[1], joaat("WEAPON_PISTOL"), -1, false, true);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				bLocal_98 = true;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_77, false), 10f, 10f, 10f, false, false, 0) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_58();
	}
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (((!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_70, 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, false, true, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, false, true, 0)) || (ENTITY::IS_ENTITY_AT_COORD(iLocal_70, Local_84, Global_20, true, true, 0) && func_57(1, 0, 1)))
		{
			SYSTEM::SETTIMERA(0);
			if (func_14())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
				}
				HUD::CLEAR_PRINTS();
				iLocal_53 = 5;
			}
			else
			{
				iLocal_53 = 6;
			}
		}
	}
}

int func_57(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3423
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_58()//Position - 0x3508
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (func_14())
		{
			func_53();
			SYSTEM::WAIT(0);
			if (func_74(&uLocal_146, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				iLocal_53 = 10;
			}
		}
		else if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D((Var0.f_0 - 50f), (Var0.f_1 - 50f), (Var0.f_2 - 50f), (Var0.f_0 + 50f), (Var0.f_1 + 50f), (Var0.f_2 + 50f)))
		{
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				TASK::CLEAR_PED_TASKS(iLocal_70);
				if (PED::IS_PED_IN_GROUP(iLocal_70))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_70);
				}
				TASK::TASK_SMART_FLEE_COORD(iLocal_70, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_70, true);
				SYSTEM::WAIT(0);
			}
			func_93();
		}
	}
	else if (func_14())
	{
		if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D((Var0.f_0 - 10f), (Var0.f_1 - 10f), (Var0.f_2 - 10f), (Var0.f_0 + 10f), (Var0.f_1 + 10f), (Var0.f_2 + 10f)))
		{
			func_53();
			SYSTEM::WAIT(0);
			if (func_74(&uLocal_146, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				if (HUD::DOES_BLIP_EXIST(iLocal_68))
				{
					HUD::REMOVE_BLIP(&iLocal_68);
				}
				iLocal_53 = 10;
			}
		}
	}
	else if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D((Var0.f_0 - 10f), (Var0.f_1 - 10f), (Var0.f_2 - 10f), (Var0.f_0 + 10f), (Var0.f_1 + 10f), (Var0.f_2 + 10f)))
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			TASK::CLEAR_PED_TASKS(iLocal_70);
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_70);
			}
			TASK::TASK_SMART_FLEE_COORD(iLocal_70, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_70, true);
			SYSTEM::WAIT(0);
		}
		func_93();
	}
}

float func_59(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x36F6
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_60(int iParam0)//Position - 0x3710
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

float func_61(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x3723
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

void func_62()//Position - 0x375D
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
	}
	if ((iLocal_142 - iLocal_141) > 120000)
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				if (func_74(&uLocal_146, "PRI1AU", "PRI1_WLK", 4, 0, 0, 0))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_70);
					func_93();
				}
			}
		}
	}
}

void func_63()//Position - 0x37D3
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_143)
		{
			iLocal_144 = MISC::GET_GAME_TIMER();
			iLocal_143 = 1;
		}
		else
		{
			iLocal_145 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_143 = 0;
	}
	if ((iLocal_145 - iLocal_144) > 60000)
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_70))
			{
				if (func_74(&uLocal_146, "PRI1AU", "PRI1_SLO", 4, 0, 0, 0))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_70);
					func_93();
				}
			}
		}
	}
}

int func_64()//Position - 0x3841
{
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_70))
		{
			if ((((((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_112, 50f, 50f, 50f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_115, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_118, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_121, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_124, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_127, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_130, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_133, 50f, 50f, 50f, false, true, 0)) || func_61(PLAYER::PLAYER_PED_ID(), Local_136, 1) < 205f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_65()//Position - 0x3997
{
	if (!PED::IS_PED_INJURED(iLocal_70) && func_95())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_70, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				SYSTEM::SETTIMERA(0);
				if (!PED::IS_PED_IN_GROUP(iLocal_70))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 0);
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, true);
				}
				if (iLocal_54 == 0)
				{
					if (!func_90())
					{
						if (func_74(&uLocal_146, "PRI1AU", "PRI1_CH", 4, 0, 0, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_68))
							{
								iLocal_68 = func_6(Local_84, 1);
							}
							MISC::CLEAR_BIT(&uLocal_92, 3);
							iLocal_94 = 1;
							iLocal_53 = 3;
						}
					}
				}
				else if (iLocal_54 == 1)
				{
					if (func_51() == 0)
					{
						func_74(&uLocal_146, "PRI2AU", "PRI2_WHTM", 4, 0, 0, 0);
					}
					else if (func_51() == 1)
					{
						func_74(&uLocal_146, "PRI2AU", "PRI2_WHTF", 4, 0, 0, 0);
					}
					else if (func_51() == 2)
					{
						func_74(&uLocal_146, "PRI2AU", "PRI2_WHTT", 4, 0, 0, 0);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_70, 2, true);
					iLocal_53 = 3;
				}
			}
		}
	}
}

int func_66()//Position - 0x3AC2
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_70))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
			{
				func_53();
				return 1;
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), true))
		{
			func_53();
			return 1;
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 250f, 250f, 250f, false, true, 0))
		{
			return 1;
		}
		if (iLocal_54 == 0)
		{
			iVar0 = 0;
			if (func_69())
			{
				iVar0 = 0;
				while (iVar0 < func_68())
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_67(iVar0), PLAYER::PLAYER_PED_ID(), false))
					{
						if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_67(iVar0))) == joaat("AMBIENT_GANG_LOST"))
						{
							return 1;
						}
					}
					iVar0++;
				}
			}
		}
		if (iLocal_53 < 2)
		{
			if (PED::HAS_PED_RECEIVED_EVENT(iLocal_70, 126))
			{
				return 1;
			}
			if (iLocal_54 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
				{
					if (((PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_77, false) + Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(iLocal_77, false) + Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f)) || PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_77, false) - Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(iLocal_77, false) - Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f))) || PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_77, false) + Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(iLocal_77, false) + Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f))) || PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_77, false) - Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(iLocal_77, false) - Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f)))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_70, true);
						return 1;
					}
				}
			}
			else if (iLocal_54 == 1)
			{
				if (PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_70, false) - Vector(70f, 70f, 70f), ENTITY::GET_ENTITY_COORDS(iLocal_70, false) + Vector(70f, 70f, 70f)))
				{
					return 1;
				}
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_70, true), 20f, true))
			{
				return 1;
			}
			if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_70, true) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_70, true) + Vector(15f, 15f, 15f), joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_70, true) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_70, true) + Vector(15f, 15f, 15f), joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_70, true) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_70, true) + Vector(15f, 15f, 15f), joaat("WEAPON_GRENADELAUNCHER"), true))
			{
				return 1;
			}
			if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_70, true), 3f))
			{
				return 1;
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 20f, 20f, 8f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_70, PLAYER::PLAYER_PED_ID())) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_70) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_70))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		func_53();
		return 1;
	}
	return 0;
}

var func_67(int iParam0)//Position - 0x3E80
{
	return Global_56289.f_25[iParam0];
}

int func_68()//Position - 0x3E91
{
	return Global_56289.f_24;
}

bool func_69()//Position - 0x3E9E
{
	return Global_56289.f_24 > 0;
}

void func_70()//Position - 0x3EAD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			if (!func_90())
			{
				if (func_9())
				{
					func_74(&uLocal_146, "PRI2AU", "PRI2_THREAT", 4, 0, 0, 0);
				}
				else
				{
					func_74(&uLocal_146, "PRI2AU", "PRI2_HIJ", 4, 0, 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_103))
				{
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_103, false);
				}
				TASK::CLEAR_PED_TASKS(iLocal_70);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500, true);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 1f, 0.5f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, -1, 2f, 9, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
				SYSTEM::SETTIMERA(0);
				bLocal_108 = true;
				iLocal_53 = 11;
			}
		}
	}
}

float func_71(int iParam0, int iParam1)//Position - 0x3F7B
{
	return func_5(iParam0, iParam1, 1);
}

int func_72()//Position - 0x3F8C
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_73 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_73(int iParam0)//Position - 0x3FBA
{
	if ((((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 3000) || FIRE::IS_ENTITY_ON_FIRE(iParam0)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0, false), 5f) > 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_MOLOTOV"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, false) - Vector(5f, 5f, 5f), ENTITY::GET_ENTITY_COORDS(iParam0, false) + Vector(5f, 5f, 5f), joaat("WEAPON_MOLOTOV"), false))
	{
		return 1;
	}
	return 0;
}

bool func_74(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x402C
{
	func_89(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_75(sParam2, iParam3, 0);
}

int func_75(char* sParam0, int iParam1, bool bParam2)//Position - 0x407A
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
					func_88();
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
		if (func_87(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_86();
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
				func_85();
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
				if (func_84())
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
			if (func_83())
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
			func_82();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_81();
		func_76();
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
		func_88();
	}
	return 0;
}

void func_76()//Position - 0x4348
{
	if (!func_77())
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

int func_77()//Position - 0x437F
{
	if (!Global_262145.f_29155 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_80())
	{
		return 0;
	}
	if (func_78(PLAYER::PLAYER_ID()))
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

bool func_78(int iParam0)//Position - 0x43E2
{
	return func_79(iParam0, 20);
}

var func_79(int iParam0, int iParam1)//Position - 0x43F2
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_80()//Position - 0x440A
{
	return -1;
}

void func_81()//Position - 0x4413
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

void func_82()//Position - 0x4444
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

int func_83()//Position - 0x44D9
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_84()//Position - 0x4500
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

void func_85()//Position - 0x4599
{
	if (func_36(14))
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
		Global_20813 = func_51();
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

void func_86()//Position - 0x463B
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

bool func_87(int iParam0, int iParam1)//Position - 0x4692
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

void func_88()//Position - 0x46CA
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

void func_89(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4721
{
	Global_21620 = { *uParam0 };
	Global_7999 = iParam1;
	StringCopy(&Global_22236, sParam2, 24);
	Global_23155 = uParam5;
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

int func_90()//Position - 0x4777
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_91()//Position - 0x4799
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_77, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_77, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_77, -1, false))
		{
			AUDIO::SET_HORN_PERMANENTLY_ON_TIME(iLocal_77, 60000f);
			AUDIO::SET_HORN_PERMANENTLY_ON(iLocal_77);
		}
	}
}

void func_92()//Position - 0x47DA
{
	switch (iLocal_106)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 20f, 20f, 8f, false, true, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 2.5f || !(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_70, 15f, 15f, 8f, false, true, 0)))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 30000, 2050, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 2f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
						if (func_74(&uLocal_146, "PRI1AU", "PRI1_ASK", 4, 0, 0, 0))
						{
							bLocal_97 = true;
							iLocal_106++;
						}
					}
				}
			}
			break;
		
		case 1:
			func_94(&uLocal_105);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (func_95())
				{
					iLocal_73 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_SPEED(iLocal_73) < 9f)
					{
						if (!PED::IS_PED_INJURED(iLocal_70))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_70, iLocal_73, 20f, 20f, 5f, false, true, 0))
							{
								iLocal_106++;
							}
						}
					}
				}
				else if (!bLocal_108)
				{
					fLocal_107 = func_5(iLocal_70, PLAYER::PLAYER_PED_ID(), 1);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, (fLocal_107 - 3f), 1f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
					if (!func_90())
					{
						if (func_9())
						{
							func_74(&uLocal_146, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_74(&uLocal_146, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						bLocal_108 = true;
						bLocal_97 = true;
					}
				}
			}
			break;
		
		case 2:
			func_94(&uLocal_105);
			if (!iLocal_110)
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 2.5f)
				{
					if (!PED::IS_PED_INJURED(iLocal_70))
					{
						TASK::CLEAR_PED_TASKS(iLocal_70);
						TASK::TASK_OPEN_VEHICLE_DOOR(iLocal_70, iLocal_73, -1, 0, 1f);
						iLocal_110 = 1;
					}
				}
				if (!func_90())
				{
					if (!PED::IS_PED_INJURED(iLocal_70))
					{
						TASK::CLEAR_PED_TASKS(iLocal_70);
						TASK::TASK_OPEN_VEHICLE_DOOR(iLocal_70, iLocal_73, -1, 0, 1f);
						iLocal_110 = 1;
					}
				}
			}
			if (func_95())
			{
				iLocal_73 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::GET_ENTITY_SPEED(iLocal_73) < 2.5f)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_73, ENTITY::GET_ENTITY_COORDS(iLocal_70, true), 20f, 20f, 5f, false, true, 0))
					{
						if (iLocal_54 == 0)
						{
							if (!func_90())
							{
								if (func_51() == 0)
								{
									if (func_9())
									{
										func_74(&uLocal_146, "PRI1AU", "PRI1_GETONM", 4, 0, 0, 0);
									}
									else
									{
										func_74(&uLocal_146, "PRI1AU", "PRI1_JIM", 4, 0, 0, 0);
									}
								}
								else if (func_51() == 1)
								{
									if (func_9())
									{
										func_74(&uLocal_146, "PRI1AU", "PRI1_GETONF", 4, 0, 0, 0);
									}
									else
									{
										func_74(&uLocal_146, "PRI1AU", "PRI1_JIF", 4, 0, 0, 0);
									}
								}
								else if (func_51() == 2)
								{
									func_74(&uLocal_146, "PRI1AU", "PRI1_JIT", 4, 0, 0, 0);
								}
								iLocal_106++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_95())
			{
				iLocal_73 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::GET_ENTITY_SPEED(iLocal_73) < 0.5f)
				{
					if (!PED::IS_PED_INJURED(iLocal_70))
					{
						TASK::CLEAR_PED_TASKS(iLocal_70);
						if (!PED::IS_PED_IN_GROUP(iLocal_70))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_70, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_70, 0);
							PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_70, true);
						}
						iLocal_106++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_54 == 0)
			{
				if (!func_90())
				{
					if (func_74(&uLocal_146, "PRI1AU", "PRI1_SH", 4, 0, 0, 0))
					{
						iLocal_106++;
					}
				}
			}
			else
			{
				iLocal_106++;
			}
			break;
		
		case 5:
			if (func_95())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (!PED::IS_PED_INJURED(iLocal_70))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_70, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_103))
							{
								HUD::REMOVE_BLIP(&iLocal_103);
							}
							iLocal_53 = 2;
						}
					}
				}
			}
			else
			{
				func_8();
			}
			break;
	}
}

void func_93()//Position - 0x4BE9
{
	func_177();
}

void func_94(var uParam0)//Position - 0x4BF5
{
	switch (*uParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (!PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 90f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_70, PLAYER::PLAYER_PED_ID(), 0);
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 90f))
				{
					*uParam0++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_70))
			{
				if (!PED::IS_PED_FACING_PED(iLocal_70, PLAYER::PLAYER_PED_ID(), 90f))
				{
					*uParam0 = 0;
				}
			}
			break;
	}
}

int func_95()//Position - 0x4C95
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if ((((((!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !VEHICLE::IS_BIG_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_96()//Position - 0x4D34
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_73 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false) && !PED::IS_PED_INJURED(iLocal_70)) && !bLocal_97)
		{
			fLocal_107 = func_5(iLocal_70, PLAYER::PLAYER_PED_ID(), 1);
			if (fLocal_107 > 5f)
			{
				fLocal_107 = (fLocal_107 - 2.5f);
			}
			else
			{
				fLocal_107 = (fLocal_107 - 1f);
			}
			TASK::CLEAR_PED_TASKS(iLocal_70);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
			if (iLocal_54 == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_73, 10000, 2048, 2);
				TASK::TASK_PLAY_ANIM(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0f, false, false, false);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, fLocal_107, 1f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (iLocal_54 == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_73, 10000, 2052, 2);
				TASK::TASK_PLAY_ANIM(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0f, false, false, false);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1f, 0f, 0f, 1f, -1, 0.5f, true);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
			if (iLocal_54 == 0)
			{
				func_74(&uLocal_146, "PRI1AU", "PRI1_STO", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				bLocal_97 = true;
			}
			else if (iLocal_54 == 1)
			{
				if (func_74(&uLocal_146, "PRI2AU", "PRI2_STO", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					bLocal_97 = true;
				}
			}
		}
	}
}

void func_97(bool bParam0)//Position - 0x4E85
{
	if (bParam0)
	{
		StringCopy(&Global_113426, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_113420 = 1;
	}
	else
	{
		StringCopy(&Global_113426, "NULL", 24);
		Global_113420 = 0;
	}
}

int func_98(int iParam0)//Position - 0x4EB1
{
	if (func_102())
	{
		Global_114360 = 1;
		Global_114357 = MISC::GET_GAME_TIMER();
		if (func_29(Global_114359))
		{
			func_99(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_29(Global_114359))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_99(int iParam0)//Position - 0x4F04
{
	switch (iParam0)
	{
		case 0:
			if (Global_114370.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_100(func_101(iParam0), -1);
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
					func_100(func_101(iParam0), -1);
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
					func_100(func_101(iParam0), -1);
					Global_114370.f_24998.f_4++;
					MISC::SET_BIT(&Global_114366, 2);
				}
			}
			break;
	}
}

void func_100(char* sParam0, int iParam1)//Position - 0x4FDF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_101(int iParam0)//Position - 0x4FF6
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

int func_102()//Position - 0x5039
{
	switch (func_103(&Global_32888, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_103(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x506F
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
		if (func_107(0))
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
		if (!func_105(iParam2))
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
			func_104(uParam0, iParam4);
		}
	}
	return 2;
}

void func_104(var uParam0, int iParam1)//Position - 0x51A6
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

bool func_105(int iParam0)//Position - 0x51F5
{
	return func_106(iParam0, Global_43922);
}

int func_106(int iParam0, int iParam1)//Position - 0x5206
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

int func_107(int iParam0)//Position - 0x53E7
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	if (func_105(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_108()//Position - 0x5409
{
	if (HUD::DOES_BLIP_EXIST(iLocal_69))
	{
		HUD::REMOVE_BLIP(&iLocal_69);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_103))
	{
		iLocal_103 = func_11(iLocal_70, 0, 145);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_103, false);
	}
}

void func_109()//Position - 0x543C
{
	int iVar0;
	int iVar1[2];
	
	func_111(39, 1);
	func_111(40, 1);
	func_111(41, 1);
	func_111(42, 1);
	func_111(43, 1);
	func_111(44, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(11, false);
	iLocal_70 = PED::CREATE_PED(26, iLocal_88, Local_74, fLocal_87, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_70, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_70, 134, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_70, 137, true);
	PED::ADD_RELATIONSHIP_GROUP("PedPrisoner", &iLocal_71);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_70, iLocal_71);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_71);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_71, joaat("COP"));
	TASK::TASK_PLAY_ANIM(iLocal_70, "random@prisoner_lift", "loop2_idlelook2", 2f, -2f, -1, 1, 0f, false, false, false);
	PED::SET_PED_MONEY(iLocal_70, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_70, 8, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_70, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_70, 2, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_70, 1, false);
	MISC::SET_BIT(&uLocal_92, 3);
	MISC::SET_BIT(&uLocal_92, 5);
	MISC::SET_BIT(&uLocal_92, 0);
	if (iLocal_54 == 0)
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_70, "REPRI1Lost");
		func_110(&uLocal_146, 3, iLocal_70, "REPRI1Lost", 0, 1);
		MISC::CLEAR_AREA_OF_PEDS(Local_74, 50f, 0);
		MISC::CLEAR_AREA(Local_74, 10f, false, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_74 - Vector(50f, 50f, 50f), Local_74 + Vector(50f, 50f, 50f), false, true, true, true, 1);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_84 - Vector(10f, 10f, 10f), Local_84 + Vector(10f, 10f, 10f), false, true, true, true, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_74 - Vector(10f, 10f, 10f), Local_74 + Vector(10f, 10f, 10f), false, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_71, joaat("AMBIENT_GANG_LOST"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_LOST"), iLocal_71);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_70, 17, true);
		iLocal_77 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1524.3323f, 2173.3474f, 79.0619f, 201.6806f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_77, 0f);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_77, 4, false, false);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_77, 0, false, 1000f);
		VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(iLocal_77, false);
		MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(1525.5659f, 2172.512f, 80.1985f, 1524.4229f, 2173.8943f, 80.1342f, 100, true, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
		iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_77, 26, joaat("S_M_Y_Ranger_01"), -1, true, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 326, true);
		ENTITY::SET_ENTITY_HEALTH(iVar0, 99, 0, 0);
		PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iVar0, true);
		iVar1[0] = VEHICLE::CREATE_VEHICLE(joaat("ratloader"), 1527.4001f, 2240.3298f, 73.8459f, 216.8133f, true, true, false);
		iVar1[1] = VEHICLE::CREATE_VEHICLE(joaat("bfinjection"), 1594.0929f, 2198.6572f, 77.8709f, 85.3536f, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1[0], 5f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1[1], 5f);
	}
	else if (iLocal_54 == 1)
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(1449.8513f, 2452.6614f, 81.565575f, 1203.8505f, 2579.351f, 35.154903f, 224.125f, false, false, true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_70, "G_M_Y_STREETPUNK02_BLACK_MINI_04");
		func_110(&uLocal_146, 3, iLocal_70, "REPRI2Prisoner", 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_70, joaat("WEAPON_PISTOL"), -1, false, true);
	}
	if (func_51() == 0)
	{
		func_110(&uLocal_146, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_51() == 1)
	{
		func_110(&uLocal_146, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_51() == 2)
	{
		func_110(&uLocal_146, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	iLocal_53 = 1;
}

void func_110(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x57DE
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

void func_111(int iParam0, bool bParam1)//Position - 0x5879
{
	if (bParam1)
	{
		if (!func_115(iParam0, 2, 1))
		{
			func_114(iParam0, 2, 1);
		}
	}
	else if (func_115(iParam0, 2, 1))
	{
		func_112(iParam0, 2, 1);
	}
}

void func_112(int iParam0, int iParam1, bool bParam2)//Position - 0x58B0
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
		if (func_24() == 0)
		{
			iVar0 = func_50(func_113(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_47(func_113(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114370.f_668[iParam0]), iParam1);
	}
}

int func_113(int iParam0)//Position - 0x5920
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

void func_114(int iParam0, int iParam1, bool bParam2)//Position - 0x5CC8
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
		if (func_24() == 0)
		{
			iVar0 = func_50(func_113(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_47(func_113(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_114370.f_668[iParam0]), iParam1);
	}
}

int func_115(int iParam0, int iParam1, bool bParam2)//Position - 0x5D38
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
		if (func_24() == 0)
		{
			return BitTest(func_50(func_113(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_114370.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_116()//Position - 0x5D98
{
	STREAMING::REQUEST_MODEL(iLocal_88);
	STREAMING::REQUEST_ANIM_DICT("random@prisoner_lift");
	if (iLocal_54 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Ranger_01"));
		STREAMING::REQUEST_MODEL(joaat("sheriff"));
		STREAMING::REQUEST_MODEL(joaat("ratloader"));
		STREAMING::REQUEST_MODEL(joaat("bfinjection"));
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_88) && STREAMING::HAS_ANIM_DICT_LOADED("random@prisoner_lift"))
	{
		if (iLocal_54 == 0)
		{
			if (((STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Ranger_01")) && STREAMING::HAS_MODEL_LOADED(joaat("sheriff"))) && STREAMING::HAS_MODEL_LOADED(joaat("ratloader"))) && STREAMING::HAS_MODEL_LOADED(joaat("bfinjection")))
			{
				bLocal_55 = true;
			}
		}
		else
		{
			bLocal_55 = true;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_88);
		STREAMING::REQUEST_ANIM_DICT("random@prisoner_lift");
		if (iLocal_54 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Ranger_01"));
			STREAMING::REQUEST_MODEL(joaat("sheriff"));
			STREAMING::REQUEST_MODEL(joaat("ratloader"));
			STREAMING::REQUEST_MODEL(joaat("bfinjection"));
		}
	}
}

void func_117()//Position - 0x5E6B
{
	if (iLocal_60 == 1)
	{
		iLocal_88 = joaat("G_M_Y_Lost_02");
		Local_74 = { 1538.0898f, 2172.3438f, 77.826f };
		fLocal_87 = 142.0201f;
		Local_89 = { 984.3975f, -106.9935f, 73.3531f };
		Local_84 = { 960.1481f, -139.4141f, 73.476f };
	}
	if (iLocal_60 == 2)
	{
		iLocal_88 = joaat("S_M_Y_Prisoner_01");
		Local_74 = { 1401.6923f, 2528.085f, 40.3762f };
		fLocal_87 = 301.2458f;
		Local_89 = { 938.5384f, -2167.4197f, 29.5153f };
		Local_84 = { 928.9882f, -2173.248f, 29.2873f };
	}
	iLocal_56 = 1;
}

int func_118()//Position - 0x5F10
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_48) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_129())
		{
			return 0;
		}
	}
	if (func_125())
	{
		return 1;
	}
	if (func_119(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_119(float fParam0, bool bParam1)//Position - 0x5F96
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
		if (func_37(func_51()))
		{
			iVar36 = func_34();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_114370.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_114370.f_18577[iVar32 /*6*/], 3))
				{
					func_120(iVar32, &Var0);
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

void func_120(int iParam0, var uParam1)//Position - 0x6047
{
	switch (iParam0)
	{
		case 0:
			func_121(uParam1, "Abigail1", func_123(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 1:
			func_121(uParam1, "Abigail2", func_123(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 2:
			func_121(uParam1, "Barry1", func_123(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 3:
			func_121(uParam1, "Barry2", func_123(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 4:
			func_121(uParam1, "Barry3", func_123(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 5:
			func_121(uParam1, "Barry3A", func_123(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 6:
			func_121(uParam1, "Barry3C", func_123(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 7:
			func_121(uParam1, "Barry4", func_123(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_122(iParam0), 0, 0);
			break;
		
		case 8:
			func_121(uParam1, "Dreyfuss1", func_123(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 9:
			func_121(uParam1, "Epsilon1", func_123(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 10:
			func_121(uParam1, "Epsilon2", func_123(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 11:
			func_121(uParam1, "Epsilon3", func_123(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 12:
			func_121(uParam1, "Epsilon4", func_123(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 13:
			func_121(uParam1, "Epsilon5", func_123(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 14:
			func_121(uParam1, "Epsilon6", func_123(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 15:
			func_121(uParam1, "Epsilon7", func_123(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 16:
			func_121(uParam1, "Epsilon8", func_123(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 17:
			func_121(uParam1, "Extreme1", func_123(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 18:
			func_121(uParam1, "Extreme2", func_123(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 19:
			func_121(uParam1, "Extreme3", func_123(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 20:
			func_121(uParam1, "Extreme4", func_123(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 21:
			func_121(uParam1, "Fanatic1", func_123(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_122(iParam0), 1, 0);
			break;
		
		case 22:
			func_121(uParam1, "Fanatic2", func_123(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_122(iParam0), 1, 0);
			break;
		
		case 23:
			func_121(uParam1, "Fanatic3", func_123(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_122(iParam0), 0, 1);
			break;
		
		case 24:
			func_121(uParam1, "Hao1", func_123(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_122(iParam0), 0, 1);
			break;
		
		case 25:
			func_121(uParam1, "Hunting1", func_123(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 26:
			func_121(uParam1, "Hunting2", func_123(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 27:
			func_121(uParam1, "Josh1", func_123(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 28:
			func_121(uParam1, "Josh2", func_123(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 29:
			func_121(uParam1, "Josh3", func_123(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 30:
			func_121(uParam1, "Josh4", func_123(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 31:
			func_121(uParam1, "Maude1", func_123(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 32:
			func_121(uParam1, "Minute1", func_123(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 33:
			func_121(uParam1, "Minute2", func_123(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 34:
			func_121(uParam1, "Minute3", func_123(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 35:
			func_121(uParam1, "MrsPhilips1", func_123(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 36:
			func_121(uParam1, "MrsPhilips2", func_123(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 37:
			func_121(uParam1, "Nigel1", func_123(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 38:
			func_121(uParam1, "Nigel1A", func_123(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 39:
			func_121(uParam1, "Nigel1B", func_123(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 40:
			func_121(uParam1, "Nigel1C", func_123(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 41:
			func_121(uParam1, "Nigel1D", func_123(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 42:
			func_121(uParam1, "Nigel2", func_123(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 43:
			func_121(uParam1, "Nigel3", func_123(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 44:
			func_121(uParam1, "Omega1", func_123(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 45:
			func_121(uParam1, "Omega2", func_123(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 46:
			func_121(uParam1, "Paparazzo1", func_123(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 47:
			func_121(uParam1, "Paparazzo2", func_123(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 48:
			func_121(uParam1, "Paparazzo3", func_123(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 49:
			func_121(uParam1, "Paparazzo3A", func_123(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 50:
			func_121(uParam1, "Paparazzo3B", func_123(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 51:
			func_121(uParam1, "Paparazzo4", func_123(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 52:
			func_121(uParam1, "Rampage1", func_123(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 54:
			func_121(uParam1, "Rampage3", func_123(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 55:
			func_121(uParam1, "Rampage4", func_123(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 56:
			func_121(uParam1, "Rampage5", func_123(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 53:
			func_121(uParam1, "Rampage2", func_123(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 57:
			func_121(uParam1, "TheLastOne", func_123(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 58:
			func_121(uParam1, "Tonya1", func_123(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 59:
			func_121(uParam1, "Tonya2", func_123(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 60:
			func_121(uParam1, "Tonya3", func_123(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 61:
			func_121(uParam1, "Tonya4", func_123(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 62:
			func_121(uParam1, "Tonya5", func_123(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_121(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x71FC
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

int func_122(int iParam0)//Position - 0x728D
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

struct<2> func_123(int iParam0)//Position - 0x75D3
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_124(iParam0) };
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

struct<2> func_124(int iParam0)//Position - 0x760A
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

int func_125()//Position - 0x7A56
{
	if (func_128() && !func_129())
	{
		return 1;
	}
	if (func_127() && func_126())
	{
		return 1;
	}
	return 0;
}

bool func_126()//Position - 0x7A88
{
	return Global_114088 > 0;
}

int func_127()//Position - 0x7A96
{
	if (Global_98294 != -1)
	{
		return 1;
	}
	return 0;
}

int func_128()//Position - 0x7AAB
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 20);
	}
	return 0;
}

int func_129()//Position - 0x7ACE
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

int func_130()//Position - 0x7AEB
{
	if (!func_105(5))
	{
		return 1;
	}
	if (func_125())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_129())
		{
			return 0;
		}
	}
	if (func_119(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_131()//Position - 0x7B4D
{
	if ((Global_114359 == func_44() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_114360)
	{
		return 1;
	}
	return 0;
}

void func_132(int iParam0)//Position - 0x7B78
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_134(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114356 = 0;
	func_133();
}

void func_133()//Position - 0x7BAE
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

void func_134(int iParam0)//Position - 0x7BEB
{
	Global_114359 = iParam0;
}

int func_135(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7BF9
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
		iParam3 = func_44();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_176())
		{
			return 0;
		}
	}
	Local_48 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_129())
			{
				return 0;
			}
		}
		if (!Global_114370.f_9088)
		{
			return 0;
		}
		if (func_19(0))
		{
			return 0;
		}
		if (func_125())
		{
			return 0;
		}
		if (func_175())
		{
			return 0;
		}
		if (Global_114359 != -1)
		{
			return 0;
		}
		if (func_37(func_51()))
		{
			if (func_119(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_48.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_174(iParam3))
		{
			return 0;
		}
		if (func_37(func_51()))
		{
			if (func_173(func_51()) == 4 || func_173(func_51()) == 5)
			{
				return 0;
			}
		}
		if (func_37(func_51()))
		{
			if (!func_172(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_171(Global_114370.f_24998.f_43[iParam3]))
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
		if (func_170())
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
		if (!func_161(4))
		{
			return 0;
		}
		if (!func_105(5))
		{
			return 0;
		}
		if (func_160(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_160(0, 0))
		{
			return 0;
		}
		if (Global_32975)
		{
			return 0;
		}
		if (func_174(30) && !func_160(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_37(func_51()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_114370.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_114370.f_2366.f_539.f_2296[iVar4];
				if (func_159(iVar8))
				{
					if (func_137(iVar4))
					{
						if (!func_136(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_51() != iVar4)
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

bool func_136(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x7F93
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_137(int iParam0)//Position - 0x7FDA
{
	int iVar0;
	
	iVar0 = Global_114370.f_2366.f_539.f_2296[iParam0];
	return func_138(iVar0);
}

int func_138(int iParam0)//Position - 0x7FFB
{
	return func_139(iParam0, 1);
}

int func_139(int iParam0, int iParam1)//Position - 0x800F
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_159(iParam0))
	{
		return 0;
	}
	func_140(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_140(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x8062
{
	func_141(func_152(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_141(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x8080
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_151(iParam0, iParam1))
	{
		iVar0 = func_150(iParam1);
		iVar1 = func_148(iParam0);
		iVar2 = (func_148(iParam0) - func_148(iParam1));
		iVar3 = (func_150(iParam0) - func_150(iParam1));
		iVar4 = (func_147(iParam0) - func_147(iParam1));
		iVar5 = (func_146(iParam0) - func_146(iParam1));
		iVar6 = (func_145(iParam0) - func_145(iParam1));
		iVar7 = (func_144(iParam0) - func_144(iParam1));
	}
	else
	{
		iVar0 = func_150(iParam0);
		iVar1 = func_148(iParam1);
		iVar2 = (func_148(iParam1) - func_148(iParam0));
		iVar3 = (func_150(iParam1) - func_150(iParam0));
		iVar4 = (func_147(iParam1) - func_147(iParam0));
		iVar5 = (func_146(iParam1) - func_146(iParam0));
		iVar6 = (func_145(iParam1) - func_145(iParam0));
		iVar7 = (func_144(iParam1) - func_144(iParam0));
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
		iVar4 = (iVar4 + func_143(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_142(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_142(float fParam0, float fParam1, float fParam2)//Position - 0x8281
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

int func_143(int iParam0, int iParam1)//Position - 0x82C3
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

int func_144(int iParam0)//Position - 0x8365
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_145(int iParam0)//Position - 0x8378
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_146(int iParam0)//Position - 0x838B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_147(int iParam0)//Position - 0x839E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_148(int iParam0)//Position - 0x83B0
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_149(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_149(bool bParam0, int iParam1, int iParam2)//Position - 0x83D2
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_150(int iParam0)//Position - 0x83E9
{
	return iParam0 & 15;
}

int func_151(int iParam0, int iParam1)//Position - 0x83F6
{
	int iVar0;
	int iVar1;
	
	if (!func_159(iParam1) || !func_159(iParam0))
	{
		return 1;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_150(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_152()//Position - 0x8502
{
	var uVar0;
	
	func_158(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_157(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_156(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_155(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_154(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_153(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_153(var uParam0, int iParam1)//Position - 0x8548
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

void func_154(var uParam0, int iParam1)//Position - 0x85CE
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_155(var uParam0, int iParam1)//Position - 0x8601
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_150(*uParam0);
	iVar1 = func_148(*uParam0);
	if (iParam1 < 1 || iParam1 > func_143(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_156(var uParam0, int iParam1)//Position - 0x8652
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_157(var uParam0, int iParam1)//Position - 0x868C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_158(var uParam0, int iParam1)//Position - 0x86C7
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_159(int iParam0)//Position - 0x8703
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
	iVar0 = func_144(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_145(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_146(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_148(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_150(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_147(iParam0);
	if (iVar5 < 1 || iVar5 > func_143(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0, bool bParam1)//Position - 0x87DF
{
	if (BitTest(Global_114370.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)//Position - 0x87FF
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_51();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_169()) || Global_113417) || Global_32831) || func_168()) || func_87(8, -1)) || func_167()) || func_166()) || func_165()) || func_164()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_169()) || Global_32831) || func_168()) || func_87(8, -1)) || func_165()) || func_167()) || func_166()) || func_164()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_169()) || Global_113417) || Global_32831) || func_168()) || func_87(8, -1)) || func_165()) || func_167()) || func_166()) || func_164()) || Global_114370.f_7691.f_919[iVar0] == 5) || Global_44469 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_169()) || Global_113417) || Global_32831) || func_168()) || func_87(8, -1)) || func_167()) || func_166()) || func_164()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_169() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_87(8, -1)) || func_164()) || func_163()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_87(8, -1) || func_167()) || func_166()) || func_163()) || func_162())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_169()) || Global_32831) || func_168()) || func_87(8, -1)) || func_166()) || func_165()) || func_164()) || Global_114370.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_169()) || func_166()) || Global_113417) || Global_32831) || func_168()) || Global_45122) || func_87(8, -1)) || func_165()) || func_163()) || func_164()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_169()) || Global_113417) || Global_32831) || func_168()) || func_87(8, -1)) || func_165()) || func_163()) || func_167()) || func_166()) || func_164())
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

var func_162()//Position - 0x8F1C
{
	return Global_101431.f_1;
}

int func_163()//Position - 0x8F2A
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 13);
	}
	return 0;
}

int func_164()//Position - 0x8F4D
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_165()//Position - 0x8F67
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

bool func_166()//Position - 0x8F91
{
	return Global_101444.f_394 > 0;
}

bool func_167()//Position - 0x8FA2
{
	return Global_101444.f_393 > 0;
}

var func_168()//Position - 0x8FB3
{
	return Global_1575079;
}

int func_169()//Position - 0x8FBF
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98850.f_44 == 1;
	}
	return 0;
}

int func_170()//Position - 0x8FDB
{
	func_85();
	if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_171(int iParam0)//Position - 0x9003
{
	return func_151(func_152(), iParam0);
}

int func_172(int iParam0, int iParam1, int iParam2)//Position - 0x9015
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_51();
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

int func_173(int iParam0)//Position - 0x90F9
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_114370.f_7691.f_919[iParam0];
}

int func_174(int iParam0)//Position - 0x911D
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_176())
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

int func_175()//Position - 0x9175
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

int func_176()//Position - 0x91B9
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

void func_177()//Position - 0x9271
{
	if (iLocal_139)
	{
		func_191(0);
		func_189();
		func_97(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_74 - Vector(10f, 10f, 10f), Local_74 + Vector(10f, 10f, 10f), true, true);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(1449.8513f, 2452.6614f, 81.565575f, 1203.8505f, 2579.351f, 35.154903f, 224.125f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_70))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_70, false);
			if (iLocal_54 == 0)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_70, 317, true);
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
					TASK::TASK_SMART_FLEE_COORD(0, 1449.0497f, 2507.2576f, 44.8843f, 1000f, -1, false, false);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
					PED::SET_PED_KEEP_TASK(iLocal_70, true);
				}
			}
			else if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
					TASK::TASK_SMART_FLEE_COORD(0, 1449.0497f, 2507.2576f, 44.8843f, 1000f, -1, false, false);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
					PED::SET_PED_KEEP_TASK(iLocal_70, true);
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_73, -1, -1, 2f, 9, 0, 0);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
					PED::SET_PED_KEEP_TASK(iLocal_70, true);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_72);
					TASK::TASK_SMART_FLEE_COORD(0, 1449.0497f, 2507.2576f, 44.8843f, 1000f, -1, false, false);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_72);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_70, iLocal_72);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_72);
					PED::SET_PED_KEEP_TASK(iLocal_70, true);
				}
			}
		}
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::ENABLE_DISPATCH_SERVICE(11, true);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	func_178(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_178(int iParam0)//Position - 0x94BF
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_131())
	{
		func_182(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114361 = MISC::GET_GAME_TIMER();
		func_181(30000);
		StringCopy(&cVar0, func_180(Global_114359, 1), 64);
		if (func_43(Global_114359) > 0)
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
	func_179(&Global_32888);
	Global_114360 = 0;
	func_134(-1);
}

void func_179(var uParam0)//Position - 0x9571
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

char* func_180(int iParam0, bool bParam1)//Position - 0x95AE
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

void func_181(int iParam0)//Position - 0x97F7
{
	Global_44473 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_182(int iParam0)//Position - 0x9809
{
	func_183(iParam0, 0, func_188(iParam0));
}

void func_183(int iParam0, int iParam1, int iParam2)//Position - 0x981E
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_152();
	func_186(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_185(iParam0, &uVar0);
	Var1 = { func_184(&uVar0) };
}

struct<16> func_184(var uParam0)//Position - 0x984D
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_146(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_145(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_144(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_147(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_150(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_148(*uParam0), 64);
	return Var0;
}

void func_185(int iParam0, var uParam1)//Position - 0x991D
{
	Global_114370.f_24998.f_43[iParam0] = *uParam1;
}

void func_186(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9935
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_148(*uParam0);
	iVar1 = func_150(*uParam0);
	iVar2 = func_147(*uParam0);
	iVar3 = func_146(*uParam0);
	iVar4 = func_145(*uParam0);
	iVar5 = func_144(*uParam0);
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
	iVar6 = func_143(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_143(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_187(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_187(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9AB7
{
	func_158(uParam0, iParam1);
	func_157(uParam0, iParam2);
	func_156(uParam0, iParam3);
	func_154(uParam0, iParam5);
	func_155(uParam0, iParam4);
	func_153(uParam0, iParam6);
}

int func_188(int iParam0)//Position - 0x9AEF
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

void func_189()//Position - 0x9C92
{
	Global_21032 = 0;
	func_190();
}

void func_190()//Position - 0x9CA2
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

void func_191(bool bParam0)//Position - 0x9CC6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_111(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_192()//Position - 0x9CE9
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_61, true);
		iLocal_60 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_64, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_64, true);
			iLocal_60 = 2;
		}
		if (iLocal_60 == 1)
		{
			bLocal_67 = true;
			iLocal_54 = 0;
			return Local_61;
		}
		if (iLocal_60 == 2)
		{
			bLocal_67 = 2;
			iLocal_54 = 1;
			return Local_64;
		}
	}
	return 0f, 0f, 0f;
}

