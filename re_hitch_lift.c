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
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_67 = 0;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_77 = { 0, 0, 0 } ;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	float fLocal_94 = 0f;
	struct<3> Local_95 = { 0, 0, 0 } ;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int* iLocal_121 = NULL;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	struct<6> Local_126 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_132 = { 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	bool bLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	char[] cLocal_176[8] = 0;
	char* sLocal_177 = NULL;
	char* sLocal_178 = NULL;
	char* sLocal_179 = NULL;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	float fLocal_182 = 0f;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	float fLocal_187 = 0f;
	struct<3> Local_188 = { 0, 0, 0 } ;
	var uLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193 = 16;
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
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
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
	fLocal_45 = -1f;
	iLocal_53 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_54 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_68 = { -3092.82f, 749.8f, 21.48f };
	Local_71 = { 181.8977f, 4415.1523f, 73.463f };
	Local_74 = { 2743.4612f, 4385.5103f, 47.7521f };
	Local_77 = { -382.1346f, 2817.9712f, 44.0671f };
	Local_95 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_126, "", 24);
	Local_61 = { ScriptParam_0.f_1[0 /*3*/] };
	func_279();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_83))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_83);
			}
		}
		func_256();
	}
	if (func_227(Local_61, 13, bLocal_80, 0, 0))
	{
		func_224(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_109)
		{
			if (!func_223())
			{
				if (func_222())
				{
					func_256();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_HL", 0);
			switch (iLocal_55)
			{
				case 0:
					if (func_210())
					{
						func_256();
					}
					if (!iLocal_60)
					{
						func_209();
					}
					else
					{
						func_208();
					}
					if (bLocal_59)
					{
						iLocal_141 = 1;
						iLocal_55 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_56)
						{
							case 0:
								if ((func_207() && iLocal_57 != 8) && iLocal_57 != 10)
								{
									if (!func_223())
									{
										func_198(1);
									}
									iLocal_56 = 1;
								}
								switch (iLocal_57)
								{
									case 0:
										func_191();
										break;
									
									case 1:
										func_189();
										break;
									
									case 2:
										if (func_188())
										{
										}
										iLocal_156 = MISC::GET_GAME_TIMER();
										if (iLocal_138 < 1 && !iLocal_139)
										{
											func_187();
										}
										if (iLocal_58 == 1)
										{
											func_186();
										}
										else if (iLocal_58 == 2)
										{
											func_185();
										}
										else if (iLocal_58 == 3)
										{
											func_184();
										}
										else if (iLocal_58 == 5)
										{
											func_181();
										}
										break;
									
									case 3:
										func_178();
										break;
									
									case 4:
										if (iLocal_58 == 1)
										{
											func_161();
											func_160();
										}
										else if (iLocal_58 == 3)
										{
											func_155();
											func_154();
										}
										else if (iLocal_58 == 5)
										{
											func_155();
											func_145();
										}
										if (!bLocal_112)
										{
											func_141();
											func_140();
											func_137();
											func_136();
											func_133();
											func_131();
											func_130();
											func_129();
										}
										func_121();
										break;
									
									case 6:
										func_69();
										if (iLocal_58 == 3)
										{
											func_154();
										}
										break;
									
									case 7:
										func_68();
										if (iLocal_58 == 3)
										{
											func_154();
										}
										break;
									
									case 8:
										if (iLocal_58 == 3)
										{
											func_64();
											func_154();
										}
										break;
									
									case 9:
										if (!PED::IS_PED_INJURED(iLocal_83))
										{
											if (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Local_91, 200f, 200f, 200f, false, true, 0))
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_83, Local_91, 1f, -1, 0.25f, 0, 40000f);
											}
											else
											{
												TASK::TASK_WANDER_STANDARD(iLocal_83, 40000f, 0);
											}
											PED::SET_PED_KEEP_TASK(iLocal_83, true);
											SYSTEM::WAIT(5000);
										}
										func_60();
										break;
									
									case 10:
										break;
								}
								if ((func_59() && !func_58()) && iLocal_57 != 10)
								{
									if (!PED::IS_PED_INJURED(iLocal_83))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Local_95, 5f, 5f, 5f, false, true, 0))
										{
											func_57(0);
											SYSTEM::WAIT(0);
											func_55();
											iLocal_57 = 10;
										}
									}
								}
								if (func_54())
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
									{
										PED::DELETE_PED(&iLocal_83);
									}
									func_24();
								}
								break;
							
							case 1:
								func_55();
								SYSTEM::WAIT(0);
								if (iLocal_58 == 1)
								{
									func_1(&uLocal_193, cLocal_176, "REHH1_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_58 == 2)
								{
									func_1(&uLocal_193, cLocal_176, "REHH2_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_58 == 3)
								{
									func_1(&uLocal_193, cLocal_176, "REHH3_AGG", 4, 0, 0, 0);
									if (!PED::IS_PED_INJURED(iLocal_84))
									{
										TASK::CLEAR_PED_TASKS(iLocal_84);
										TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
										PED::SET_PED_KEEP_TASK(iLocal_84, true);
									}
								}
								else if (iLocal_58 == 5)
								{
									func_1(&uLocal_193, cLocal_176, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!PED::IS_PED_INJURED(iLocal_83))
								{
									TASK::CLEAR_PED_TASKS(iLocal_83);
									TASK::TASK_SMART_FLEE_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
									PED::SET_PED_KEEP_TASK(iLocal_83, true);
									func_60();
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_256();
		}
		if (iLocal_57 > 2)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
				{
					if (!PED::IS_PED_INJURED(iLocal_83))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
						{
							func_60();
						}
					}
				}
			}
		}
		if (iLocal_57 > 0 && iLocal_57 < 8)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_INJURED(iLocal_83))
				{
					if (!func_223())
					{
						func_198(1);
					}
					func_60();
				}
				else if (!PED::IS_PED_RAGDOLL(iLocal_83))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS(iLocal_83);
						TASK::TASK_SMART_FLEE_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						func_60();
					}
				}
			}
		}
	}
}

bool func_1(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x586
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_2(sParam2, iParam3, 0);
}

int func_2(char* sParam0, int iParam1, bool bParam2)//Position - 0x5D4
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_22();
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
		if (func_21(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_20();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
			if (bParam2)
			{
				func_12();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_11())
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
				if (!Global_79389)
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
			if (func_10())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_9();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_8();
		func_3();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_22();
	}
	return 0;
}

void func_3()//Position - 0x8A2
{
	if (!func_4())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_4()//Position - 0x8D9
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_7())
	{
		return 0;
	}
	if (func_5(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)//Position - 0x93C
{
	return func_6(iParam0, 20);
}

var func_6(int iParam0, int iParam1)//Position - 0x94C
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_7()//Position - 0x964
{
	return -1;
}

void func_8()//Position - 0x96D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22286 = 1;
}

void func_9()//Position - 0x99D
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	MISC::CLEAR_BIT(&Global_8801, 16);
}

int func_10()//Position - 0xA32
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_11()//Position - 0xA59
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
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

void func_12()//Position - 0xAF2
{
	if (func_19(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_13();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

int func_13()//Position - 0xB94
{
	func_14();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_14()//Position - 0xBAD
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_17(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_16(PLAYER::PLAYER_PED_ID());
			if (func_15(iVar0) && (!func_19(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_15(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_15(int iParam0)//Position - 0xCAA
{
	return iParam0 < 3;
}

int func_16(int iParam0)//Position - 0xCB6
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)//Position - 0xCF3
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_18(int iParam0)//Position - 0xD18
{
	return Global_2169[iParam0 /*29*/];
}

bool func_19(int iParam0)//Position - 0xD27
{
	return Global_44042 == iParam0;
}

void func_20()//Position - 0xD35
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_21(int iParam0, int iParam1)//Position - 0xD8B
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_22()//Position - 0xDC3
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xE1A
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

void func_24()//Position - 0xE70
{
	while (!func_53())
	{
		SYSTEM::WAIT(0);
	}
	func_48(func_13(), 4, 5);
	func_28(13, bLocal_80);
	func_25();
	func_256();
}

void func_25()//Position - 0xEA2
{
	func_26();
}

int func_26()//Position - 0xEAF
{
	if (func_27(0))
	{
		return 0;
	}
	if (Global_101572.f_8)
	{
		if (Global_101572.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101572.f_10 > 1)
	{
		return 0;
	}
	Global_101572.f_10++;
	return 1;
}

int func_27(bool bParam0)//Position - 0xEFA
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_28(int iParam0, bool bParam1)//Position - 0xF22
{
	if (iParam0 == -1)
	{
		iParam0 = func_46();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_45(iParam0))
	{
		func_44(iParam0, bParam1);
		if (!func_43(51))
		{
			func_39("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_42(), 0, 138, 0);
			func_38(51);
		}
		if (func_37(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_36(iParam0, bParam1) != 322)
		{
			func_30(func_36(iParam0, bParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_113957 = bParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_29(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_29(7);
			}
			else
			{
				func_29(1);
			}
		}
	}
}

void func_29(int iParam0)//Position - 0x1025
{
	Global_113955 = iParam0;
}

void func_30(int iParam0, var uParam1, var uParam2)//Position - 0x1033
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
		func_34((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = uParam2;
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
		func_31();
	}
}

void func_31()//Position - 0x1119
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
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113969.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113969.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113705++;
					fVar1 = (fVar1 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113706++;
					fVar2 = (fVar2 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113707++;
					fVar3 = (fVar3 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113708++;
					fVar4 = (fVar4 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113709++;
					fVar5 = (fVar5 + (Global_113969.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113710++;
					fVar6 = (fVar6 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113711++;
					fVar7 = (fVar7 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113688 > 0)
	{
		if (Global_113705 == Global_113688)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113689 > 0)
	{
		if (Global_113706 == Global_113689)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113690 > 0)
	{
		if (Global_113707 == Global_113690)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113691 > 0)
	{
		if (Global_113708 == Global_113691)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113692 > 0)
	{
		if (((Global_113709 == Global_113692 || (Global_113692 * 10 / Global_113709) < 41) || Global_113709 > Global_113695) || Global_113709 == Global_113695)
		{
			if (!BitTest(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113692, 0);
					MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113693 > 0)
	{
		if (Global_113710 == Global_113693)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113694 > 0)
	{
		if (Global_113711 == Global_113694)
		{
			fVar7 = 5f;
		}
	}
	Global_113969.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
	{
		iVar9 = Global_113695;
	}
	else
	{
		iVar9 = Global_113709;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113705, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113688, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113706, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113689, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113707, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113690, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113708, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113691, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113695, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113711 + Global_113710), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113694 + Global_113693), true);
	Global_113712 = (Global_113705 * 100 / Global_113688);
	Global_113714 = ((Global_113707 + Global_113706) * 100 / (Global_113690 + Global_113689));
	Global_113713 = ((Global_113708 + iVar9) * 100 / (Global_113691 + Global_113695));
	Global_113715 = ((Global_113710 + Global_113711) * 100 / (Global_113693 + Global_113694));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113969.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113712, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113713, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113714, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113969.f_10197.f_3853))
	{
		func_33(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_32() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_26();
				}
			}
		}
	}
}

int func_32()//Position - 0x15D7
{
	return Global_32948;
}

int func_33(int iParam0, int iParam1)//Position - 0x15E2
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

void func_34(int iParam0, bool bParam1, int iParam2)//Position - 0x1633
{
	if (iParam2 == -1)
	{
		iParam2 = func_35();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_35()//Position - 0x1651
{
	return Global_1574926;
}

int func_36(int iParam0, int iParam1)//Position - 0x165D
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

int func_37(int iParam0)//Position - 0x19D1
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

void func_38(int iParam0)//Position - 0x1A00
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
		MISC::SET_BIT(&(Global_113969.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_39(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1A42
{
	func_40(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_40(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1A62
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
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113969.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113969.f_20413.f_145++;
		func_41();
	}
}

void func_41()//Position - 0x1C34
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[0])
			{
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[1])
			{
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[2])
			{
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_42()//Position - 0x1D4B
{
	func_14();
	switch (Global_113969.f_2366.f_539.f_4321)
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

int func_43(int iParam0)//Position - 0x1D91
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
		return BitTest(Global_113969.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_44(int iParam0, int iParam1)//Position - 0x1DD1
{
	MISC::SET_BIT(&(Global_113969.f_24998.f_8[iParam0]), iParam1);
}

int func_45(int iParam0)//Position - 0x1DEC
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

int func_46()//Position - 0x1E9D
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_47(Var0);
	return uVar16;
}

int func_47(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x1EBA
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

void func_48(int iParam0, int iParam1, int iParam2)//Position - 0x2094
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 14835;
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
			if (iVar1 != 14835)
			{
				iVar0 = func_52(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_49(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_49(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2182
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_50(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_50(int iParam0, var uParam1)//Position - 0x21B0
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_51(uParam1));
}

int func_51(int iParam0)//Position - 0x21C5
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_35();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_52(int iParam0, int iParam1)//Position - 0x21F9
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_50(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_53()//Position - 0x2228
{
	return 1;
}

int func_54()//Position - 0x2231
{
	if (Global_33188)
	{
		func_29(4);
		return 1;
	}
	return 0;
}

void func_55()//Position - 0x2249
{
	Global_21152 = 0;
	func_56();
}

void func_56()//Position - 0x2259
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}
}

void func_57(int iParam0)//Position - 0x227A
{
	Global_23297 = iParam0;
}

int func_58()//Position - 0x2287
{
	if (Global_113969.f_24998.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_59()//Position - 0x22A3
{
	return Global_33187;
}

void func_60()//Position - 0x22AE
{
	func_62();
	while (func_61())
	{
		SYSTEM::WAIT(0);
	}
	func_256();
}

int func_61()//Position - 0x22CD
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_62()//Position - 0x22EF
{
	Global_21152 = 0;
	func_63();
}

void func_63()//Position - 0x22FF
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23297 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

void func_64()//Position - 0x2323
{
	struct<6> Var0;
	
	if (!PED::IS_PED_INJURED(iLocal_84) && !PED::IS_PED_INJURED(iLocal_83))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 25f, 25f, 25f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 40f, 40f, 40f, false, true, 0))
		{
			TASK::CLEAR_PED_TASKS(iLocal_84);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_84, Local_91, 1f, -1, 0.25f, 0, 40000f);
			func_24();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), true))
		{
			if (func_61())
			{
				Var0 = { func_67() };
				if ((MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_2") || MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_4")) || MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_6"))
				{
					func_55();
				}
			}
		}
		if (SYSTEM::TIMERB() > 5000)
		{
			if (PED::IS_PED_IN_COMBAT(iLocal_84, PLAYER::PLAYER_PED_ID()))
			{
				iLocal_157 = 4;
			}
		}
	}
	if (!iLocal_111)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), true))
			{
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					func_55();
					SYSTEM::WAIT(0);
					func_1(&uLocal_193, cLocal_176, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_111 = 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_83))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
		}
		if (PED::IS_PED_INJURED(iLocal_84) && ENTITY::IS_ENTITY_AT_COORD(iLocal_83, ENTITY::GET_ENTITY_COORDS(iLocal_84, false), 1f, 1f, 5f, false, true, 0))
		{
			iLocal_157 = 5;
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_84))
	{
		TASK::TASK_COMBAT_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 0, 16);
		func_60();
	}
	else
	{
		func_60();
	}
	if (!iLocal_166)
	{
		if (PED::IS_PED_INJURED(iLocal_84))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_120))
			{
				HUD::REMOVE_BLIP(&iLocal_120);
			}
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				iLocal_157 = 3;
			}
		}
	}
	if (!iLocal_168)
	{
		if (!PED::IS_PED_INJURED(iLocal_83) && !PED::IS_PED_INJURED(iLocal_84))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					iLocal_157 = 2;
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_84))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_120))
			{
				HUD::REMOVE_BLIP(&iLocal_120);
			}
			func_66(&uLocal_193, 4);
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), true) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iLocal_157 = 2;
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_83, iLocal_84, true))
			{
				iLocal_157 = 2;
			}
		}
	}
	switch (iLocal_157)
	{
		case 0:
			if (!iLocal_166)
			{
				if (!PED::IS_PED_INJURED(iLocal_83) && !PED::IS_PED_INJURED(iLocal_84))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false) && PED::IS_PED_IN_MELEE_COMBAT(iLocal_84))
					{
						if (!iLocal_167)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_84, -1, 2052, 2);
							TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0f, false, false, false);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_84, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
							iLocal_167 = 1;
						}
					}
				}
			}
			else
			{
				func_24();
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_83, 0, 0);
				SYSTEM::SETTIMERB(0);
				iLocal_157 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_168)
			{
				if (!PED::IS_PED_INJURED(iLocal_83))
				{
					func_55();
					SYSTEM::WAIT(0);
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_83))
					{
						TASK::CLEAR_PED_TASKS(iLocal_83);
						TASK::TASK_SMART_FLEE_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						if (!PED::IS_PED_INJURED(iLocal_84))
						{
							AUDIO::PLAY_PAIN(iLocal_84, 6, 0, 0);
							TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						}
					}
					func_24();
					iLocal_168 = 1;
					iLocal_157 = 0;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				func_55();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_83))
				{
					AUDIO::PLAY_PAIN(iLocal_83, 7, 0, 0);
				}
				func_1(&uLocal_193, cLocal_176, "REHH3_BAS", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_83) && ENTITY::DOES_ENTITY_EXIST(iLocal_84))
				{
					TASK::CLEAR_PED_TASKS(iLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0f, false, false, false);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_84, -1, 2052, 4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_84, false), 1f, -1, 3f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_84, -1);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0f, false, false, false);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					PED::SET_PED_KEEP_TASK(iLocal_83, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_83, false);
					SYSTEM::WAIT(10000);
					iLocal_166 = 1;
					iLocal_157 = 0;
				}
			}
			break;
		
		case 4:
			if (func_65())
			{
				if (!PED::IS_PED_INJURED(iLocal_83))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, false, true, 0))
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH3_NOO", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_157 = 0;
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (func_1(&uLocal_193, cLocal_176, "REHH3_FHT", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_157 = 0;
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				func_62();
				SYSTEM::WAIT(0);
				if (func_1(&uLocal_193, cLocal_176, "REHH3_ATT", 4, 0, 0, 0))
				{
					iLocal_157 = 0;
				}
			}
			break;
	}
}

int func_65()//Position - 0x288B
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_66(var uParam0, int iParam1)//Position - 0x28A9
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

struct<6> func_67()//Position - 0x28C6
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_23296);
		if (iVar6 > -1)
		{
			return Global_21154[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_68()//Position - 0x290C
{
	if (iLocal_58 == 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_83))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_83);
			}
			iLocal_57 = 8;
		}
	}
}

void func_69()//Position - 0x2937
{
	if (HUD::DOES_BLIP_EXIST(iLocal_81))
	{
		HUD::REMOVE_BLIP(&iLocal_81);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_82))
	{
		HUD::REMOVE_BLIP(&iLocal_82);
	}
	if (iLocal_58 == 1)
	{
		AUDIO::STOP_SOUND(iLocal_175);
		AUDIO::STOP_AUDIO_SCENE("TIMER_SCENE");
		if (!iLocal_122)
		{
			func_55();
			SYSTEM::WAIT(0);
			func_1(&uLocal_193, cLocal_176, "REHH1_TKA", 4, 0, 0, 0);
			CAM::SET_GAMEPLAY_COORD_HINT(-1055.5146f, -2533.2207f, 19.3049f, -1, 3000, 2000, 0);
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				func_94(func_13(), 1, 100, 0, 1);
				func_93(198, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 8000, 2052, 4);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 3000, 4194369);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1055.5146f, -2533.2207f, 19.3049f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1046.8315f, -2518.1458f, 12.9447f, 2f, -1, 40000f, 0.5f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				PED::SET_PED_KEEP_TASK(iLocal_83, true);
				SYSTEM::SETTIMERB(0);
				iLocal_122 = 1;
			}
		}
		if (SYSTEM::TIMERB() < 7000)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 286 /*INPUT_VEH_LOOK_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 287 /*INPUT_VEH_LOOK_RIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 273 /*INPUT_LOOK_DOWN*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 4 /*INPUT_LOOK_DOWN_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 270 /*INPUT_LOOK_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 5 /*INPUT_LOOK_LEFT_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 271 /*INPUT_LOOK_RIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 6 /*INPUT_LOOK_RIGHT_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 272 /*INPUT_LOOK_UP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 3 /*INPUT_LOOK_UP_ONLY*/, true);
		}
		if (SYSTEM::TIMERB() > 3000 && SYSTEM::TIMERB() < 7000)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		else if (SYSTEM::TIMERB() > 7000)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::STOP_GAMEPLAY_HINT(false);
			if (SYSTEM::TIMERB() > 8500 && !iLocal_124)
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_124 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83) || SYSTEM::TIMERB() > 15000)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, -1046.8315f, -2518.1458f, 12.9447f, 20f, 20f, 5f, false, true, 0) || SYSTEM::TIMERB() > 15000)
			{
				PED::DELETE_PED(&iLocal_83);
				func_24();
			}
		}
	}
	else if (iLocal_58 == 2)
	{
		if (!iLocal_122)
		{
			func_55();
			SYSTEM::WAIT(0);
			func_1(&uLocal_193, cLocal_176, "REHH2_TKB", 4, 0, 0, 0);
			iLocal_122 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			if (!PED::IS_PED_RAGDOLL(iLocal_83))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
				TASK::TASK_PAUSE(0, 4500);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194369);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3323.4304f, 5166.8315f, 17.406f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3320.6838f, 5186.0166f, 17.4016f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3303.6118f, 5185.2686f, 18.7155f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				PED::SET_PED_KEEP_TASK(iLocal_83, true);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5000, 2052, 2);
				PED::REMOVE_PED_FROM_GROUP(iLocal_83);
				SYSTEM::WAIT(1000);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (func_13() == 0)
				{
					func_73(9, 1, 0);
				}
				else if (func_13() == 1)
				{
					func_73(9, 1, 1);
				}
				else if (func_13() == 2)
				{
					func_73(9, 1, 2);
				}
				SYSTEM::WAIT(8000);
				func_24();
			}
		}
	}
	else if (iLocal_58 == 3)
	{
		if (SYSTEM::TIMERA() > 1000)
		{
			if (func_1(&uLocal_193, cLocal_176, "REHH3_JB", 4, 0, 0, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_84, true);
					if (!HUD::DOES_BLIP_EXIST(iLocal_119))
					{
						HUD::REMOVE_BLIP(&iLocal_119);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_120))
					{
						iLocal_120 = func_70(iLocal_84, 1, 145);
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 17f, 1f, 2f, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					PED::SET_PED_KEEP_TASK(iLocal_84, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PED::ADD_RELATIONSHIP_GROUP("rghBoyfriend", &iLocal_192);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_84, iLocal_192);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, joaat("COP"), iLocal_192);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("SECURITY_GUARD"), iLocal_192);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_192, joaat("SECURITY_GUARD"));
					SYSTEM::SETTIMERA(0);
					iLocal_57 = 7;
				}
			}
		}
	}
	else if (iLocal_58 == 5)
	{
		if (!iLocal_122)
		{
			func_55();
			SYSTEM::WAIT(0);
			func_1(&uLocal_193, cLocal_176, "REHH5_THX", 4, 0, 0, 0);
			iLocal_122 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194369);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
			TASK::TASK_PAUSE(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
			PED::SET_PED_KEEP_TASK(iLocal_83, true);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5000, 2052, 2);
			PED::REMOVE_PED_FROM_GROUP(iLocal_83);
		}
		SYSTEM::WAIT(2000);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		SYSTEM::WAIT(3000);
		func_24();
	}
}

int func_70(int iParam0, bool bParam1, int iParam2)//Position - 0x2FBD
{
	int iVar0;
	
	iVar0 = func_71(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_71(int iParam0, bool bParam1, bool bParam2)//Position - 0x3007
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_72(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_72(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_72(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_72(bool bParam0, float fParam1, float fParam2)//Position - 0x30AB
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_73(int iParam0, bool bParam1, int iParam2)//Position - 0x30C2
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_92();
	}
	if (func_91(iParam2) == 4)
	{
	}
	bVar0 = Global_113969.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_89(func_90(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_89(func_90(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_113969.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_88(iParam0, 0);
			func_83(func_90(iParam0), func_91(iParam2), 1);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2359296[func_82() /*5570*/].f_681.f_1273), iParam0);
					func_79(-60084924, 15, 0);
					break;
			}
			func_78(iVar1);
			func_77(iParam0, iVar1);
			Global_112962.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (bVar0)
	{
		func_74(func_90(iParam0), func_91(iParam2));
	}
}

void func_74(int iParam0, int iParam1)//Position - 0x31EB
{
	int iVar0;
	
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_76(iParam0, iVar0, 0);
			func_75(iParam0, iVar0, 0);
		}
	}
}

void func_75(int iParam0, int iParam1, int iParam2)//Position - 0x3220
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_76(int iParam0, int iParam1, int iParam2)//Position - 0x3265
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_77(int iParam0, int iParam1)//Position - 0x32AA
{
	if (iParam1 > -1)
	{
		Global_112962.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_112962.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

void func_78(int iParam0)//Position - 0x32E7
{
	if (iParam0 != -1)
	{
		Global_112962.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_112962.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

void func_79(int iParam0, int iParam1, int iParam2)//Position - 0x331E
{
	int iVar0;
	
	if (func_81(iParam1, iParam2))
	{
		iVar0 = func_80();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_80()//Position - 0x334B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696066[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_81(int iParam0, var uParam1)//Position - 0x3380
{
	if (Global_1575071)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575083) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_82()//Position - 0x3406
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_83(int iParam0, int iParam1, bool bParam2)//Position - 0x3413
{
	int iVar0;
	
	Global_9486 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		func_12();
		if (iParam1 == 4)
		{
			func_76(iParam0, 0, 1);
			func_76(iParam0, 1, 1);
			func_76(iParam0, 2, 1);
			func_75(iParam0, 0, 1);
			func_75(iParam0, 1, 1);
			func_75(iParam0, 2, 1);
		}
		else
		{
			if (func_87(iParam0, iParam1) == 1 && func_86(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_76(iParam0, iVar0, 1);
			func_75(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2738934.f_6969, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_79389)
			{
				if (iParam1 != 4)
				{
					if (Global_20930 != iParam1)
					{
						Global_9459[iParam1 /*4*/] = { func_85(iParam0) };
						Global_9476[iParam1] = 1;
						Global_9481[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { func_85(iParam0) };
						Global_9410[1 /*6*/].f_5 = iParam1;
						func_84();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { func_85(iParam0) };
					Global_9410[1 /*6*/].f_5 = iParam1;
					func_84();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { func_85(iParam0) };
				Global_9410[1 /*6*/].f_5 = iParam1;
				func_84();
			}
		}
	}
}

void func_84()//Position - 0x3591
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_9486 /*29*/].f_7)), 64);
	if (Global_9505 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_9410[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /* GXT: New Contact */);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /* GXT: New Contact: ~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_9410[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8800, 0);
}

struct<4> func_85(int iParam0)//Position - 0x360A
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_86(int iParam0, int iParam1)//Position - 0x361D
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

int func_87(int iParam0, int iParam1)//Position - 0x3647
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_12[iParam1];
}

void func_88(int iParam0, int iParam1)//Position - 0x3671
{
	Global_113969.f_243[func_92() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_89(int iParam0, int iParam1)//Position - 0x368F
{
	if (func_87(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0)//Position - 0x36AB
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_91(int iParam0)//Position - 0x3748
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

int func_92()//Position - 0x37A4
{
	int iVar0;
	
	iVar0 = func_13();
	switch (iVar0)
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
		
		default:
			switch (func_51(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_93(int iParam0, int iParam1)//Position - 0x3832
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113969.f_8616[iParam0] = 1;
	Global_113969.f_8616.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_94(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x386F
{
	int iVar0;
	int iVar1;
	
	if (func_120(iParam0) == 3)
	{
		return;
	}
	if (func_120(iParam0) == 4)
	{
		return;
	}
	func_95(func_120(iParam0), 1, iParam1, iParam2, 0);
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

int func_95(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3941
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_119();
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
					func_118(99, 1);
					func_117(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_117(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_117(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_103(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_101(5))
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
							func_117(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_117(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_117(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_101(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_117(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_117(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_117(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_117(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_117(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_117(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_117(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_117(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_117(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_117(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_117(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_117(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_117(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_117(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_117(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_101(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_117(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_117(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_117(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_117(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_117(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_117(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_100(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_118(95, iParam3);
					break;
				
				case 1:
					func_118(97, iParam3);
					break;
				
				case 2:
					func_118(96, iParam3);
					break;
			}
			func_118(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_98(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_98(bVar1);
	}
	iVar5 = (Global_61340[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61340[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61340[iVar2] = 2147483647;
				}
				else
				{
					Global_61340[iVar2] = (Global_61340[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_117(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_117(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_117(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61340[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61340[iVar2];
			Global_61340[iVar2] = (Global_61340[iVar2] - iParam3);
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
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113969.f_20567.f_233[iVar2 /*69*/]++;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_97(iParam0);
	if (Global_44042 == 15)
	{
		func_96(0);
	}
	return 1;
}

void func_96(bool bParam0)//Position - 0x3F40
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
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61348[iVar0 /*3*/][0] = Global_113969.f_20567[iVar0];
		Global_61348.f_31[iVar0 /*3*/][0] = Global_113969.f_20567.f_11[iVar0];
		Global_61348.f_62[iVar0 /*3*/][0] = Global_113969.f_20567.f_22[iVar0];
		Global_61348.f_93[iVar0 /*3*/][0] = Global_113969.f_20567.f_33[iVar0];
		Global_61348.f_124[iVar0 /*3*/][0] = Global_113969.f_20567.f_44[iVar0];
		Global_61348.f_155[iVar0 /*3*/][0] = Global_113969.f_20567.f_55[iVar0];
		Global_61348.f_186[iVar0 /*3*/][0] = Global_113969.f_20567.f_66[iVar0];
		Global_61348.f_217[iVar0 /*3*/][0] = Global_113969.f_20567.f_77[iVar0];
		Global_61348.f_248[iVar0 /*3*/][0] = Global_113969.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61348[iVar0 /*3*/][1] = Global_113969.f_20567[iVar0];
			Global_61348.f_31[iVar0 /*3*/][1] = Global_113969.f_20567.f_11[iVar0];
			Global_61348.f_62[iVar0 /*3*/][1] = Global_113969.f_20567.f_22[iVar0];
			Global_61348.f_93[iVar0 /*3*/][1] = Global_113969.f_20567.f_33[iVar0];
			Global_61348.f_124[iVar0 /*3*/][1] = Global_113969.f_20567.f_44[iVar0];
			Global_61348.f_155[iVar0 /*3*/][1] = Global_113969.f_20567.f_55[iVar0];
			Global_61348.f_186[iVar0 /*3*/][1] = Global_113969.f_20567.f_66[iVar0];
			Global_61348.f_217[iVar0 /*3*/][1] = Global_113969.f_20567.f_77[iVar0];
			Global_61348.f_248[iVar0 /*3*/][1] = Global_113969.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_97(int iParam0)//Position - 0x41C3
{
	int iVar0;
	
	iVar0 = Global_61340[iParam0];
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

void func_98(bool bParam0)//Position - 0x421D
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_34(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_34(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_34(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_34(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_49(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_49(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_49(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_49(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_49(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_49(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113969.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_82() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_82() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_99(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_99(bool bParam0)//Position - 0x4395
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

void func_100(int iParam0)//Position - 0x4496
{
	func_118(93, iParam0);
	func_118(29, iParam0);
	func_118(30, iParam0);
}

int func_101(int iParam0)//Position - 0x44B6
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
		return func_102(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_102(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_102(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_102(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_52(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_52(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_52(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_52(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_52(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_52(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113969.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_82() /*5570*/].f_681.f_10, iParam0);
}

bool func_102(int iParam0, int iParam1)//Position - 0x4656
{
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_103(bool bParam0)//Position - 0x4672
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
		func_33(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_104(27, 1);
	return 1;
}

int func_104(int iParam0, int iParam1)//Position - 0x4729
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_105(iParam0, iParam1);
}

int func_105(int iParam0, int iParam1)//Position - 0x4744
{
	if (func_19(14) && !func_116(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33199 != 0 && !Global_79389)
	{
		return 0;
	}
	if (func_115(&Global_4543384))
	{
		if (func_113(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_106(&Global_4543384, iParam0))
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

int func_106(var uParam0, int iParam1)//Position - 0x47E1
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_19(14) && !func_116(iParam1))
	{
		return 0;
	}
	if (func_113(uParam0, iParam1))
	{
		return 0;
	}
	if (func_112(uParam0) < 0f)
	{
		func_111(uParam0, 0);
	}
	func_109(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_107(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_107(var uParam0, int iParam1)//Position - 0x4892
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_19(14) && !func_116(iParam1))
	{
		return 0;
	}
	if (func_113(uParam0, iParam1))
	{
		return 0;
	}
	if (func_112(uParam0) < 0f)
	{
		func_111(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_108(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_108(var uParam0, int iParam1)//Position - 0x490D
{
	return (*uParam0)[iParam1] == 78;
}

void func_109(var uParam0)//Position - 0x491E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_110(uParam0, iVar0);
		iVar0++;
	}
	func_111(uParam0, (Global_4543383 - 0.5f));
}

void func_110(var uParam0, int iParam1)//Position - 0x4952
{
	(*uParam0)[iParam1] = 78;
}

void func_111(var uParam0, float fParam1)//Position - 0x4962
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

float func_112(var uParam0)//Position - 0x497F
{
	return uParam0->f_80;
}

bool func_113(var uParam0, int iParam1)//Position - 0x498B
{
	return func_114(uParam0, iParam1) != -1;
}

int func_114(var uParam0, int iParam1)//Position - 0x499D
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

bool func_115(var uParam0)//Position - 0x49CA
{
	return uParam0->f_79 == 1;
}

int func_116(int iParam0)//Position - 0x49D8
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

void func_117(int iParam0, int iParam1)//Position - 0x4A28
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_118(int iParam0, int iParam1)//Position - 0x4A4B
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59908[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59908[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_119()//Position - 0x4AA8
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61340[0] == iVar0)
		{
			Global_61340[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61340[1] == iVar0)
		{
			Global_61340[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61340[2] == iVar0)
		{
			Global_61340[2] = iVar0;
		}
	}
}

int func_120(int iParam0)//Position - 0x4B1D
{
	return Global_2169[iParam0 /*29*/].f_17;
}

void func_121()//Position - 0x4B2E
{
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_128())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_83))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_83, 0, 0);
				}
				if (!iLocal_140)
				{
					func_123(0);
					func_55();
					SYSTEM::WAIT(0);
					if (!func_61())
					{
						if (iLocal_58 == 1)
						{
							if (!func_188())
							{
								func_1(&uLocal_193, cLocal_176, "REHH1_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH1_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_58 == 2)
						{
							if (!func_188())
							{
								func_1(&uLocal_193, cLocal_176, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH2_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_58 == 3)
						{
							if (!func_188())
							{
								func_1(&uLocal_193, cLocal_176, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH3_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_58 == 5)
						{
							if (!func_188())
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_VEH2", 4, 0, 0, 0);
							}
						}
						iLocal_140 = 1;
					}
				}
			}
			else
			{
				iLocal_140 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_83);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_83))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_122());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 0);
		}
	}
}

int func_122()//Position - 0x4CF5
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_123(bool bParam0)//Position - 0x4D05
{
	if (bParam0)
	{
		if (iLocal_125)
		{
			if (func_127(&uLocal_193, cLocal_176, &Local_132, &Local_126, 8, 0, 0))
			{
				iLocal_125 = 0;
			}
		}
	}
	else if ((!iLocal_125 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !func_125())
	{
		Local_132 = { func_124() };
		Local_126 = { func_67() };
		func_62();
		iLocal_125 = 1;
	}
}

struct<6> func_124()//Position - 0x4D60
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

int func_125()//Position - 0x4D84
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_126("REHH1_VEH") || func_126("REHH2_VEH")) || func_126("REHH3_VEH")) || func_126("REHH4_VEH")) || func_126("REHH5_VEH")) || func_126("REHH1_VEH2")) || func_126("REHH2_VEH2")) || func_126("REHH3_VEH2")) || func_126("REHH4_VEH2")) || func_126("REHH5_VEH2")) || func_126("REHH1_WLK")) || func_126("REHH2_WLK")) || func_126("REHH3_WLK")) || func_126("REHH4_WLK")) || func_126("REHH5_WLK")) || func_126("REHH1_SLR")) || func_126("REHH4_SLR")) || func_126("REHH1_SLW")) || func_126("REHH2_SLW")) || func_126("REHH3_SLW")) || func_126("REHH4_SLW")) || func_126("REHH5_SLW")) || func_126("REHH1_OUT")) || func_126("REHH2_GETOUT")) || func_126("REHH3_GETOUT")) || func_126("REHH5_GETOUT")) || func_126("REHH1_JACK")) || func_126("REHH2_JACK")) || func_126("REHH3_JACK")) || func_126("REHH5_JACK")) || func_126("REHH1_GUN")) || func_126("REHH2_SHOOT")) || func_126("REHH3_SHOOT")) || func_126("REHH5_SHOO")) || func_126("REHH1_1HOUR")) || func_126("REHH2_1HOUR")) || func_126("REHH1_HHOUR")) || func_126("REHH2_HHOUR")) || func_126("REHH1_CRASH")) || func_126("REHH1_WAY")) || func_126("REHH2_NEAR")) || func_126("REHH3_NEAR")) || func_126("REHH5_NEAR")) || func_126("REHH2_CULT")) || func_126("REHH3_CULT")) || func_126("REHH5_CULT"))
	{
		return 1;
	}
	return 0;
}

int func_126(char* sParam0)//Position - 0x5012
{
	var uVar0;
	
	if (func_61())
	{
		MemCopy(&uVar0, {func_124()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_127(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x503A
{
	func_23(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22293 = 0;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 1;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_2(sParam2, iParam4, 0);
}

int func_128()//Position - 0x508E
{
	if (iLocal_58 == 5)
	{
		if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if ((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			if (((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_129()//Position - 0x51A1
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_148)
		{
			iLocal_150 = MISC::GET_GAME_TIMER();
			iLocal_148 = 1;
		}
		else
		{
			iLocal_152 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_152 = 0;
		iLocal_151 = 0;
		iLocal_148 = 0;
		iLocal_149 = 0;
	}
	if ((iLocal_152 - iLocal_150) > 3000 && (iLocal_152 - iLocal_151) > 6000)
	{
		if (!func_61())
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_SLR", 4, 0, 0, 0);
			}
			iLocal_151 = iLocal_152;
		}
	}
	if ((iLocal_152 - iLocal_150) > 50000 && !iLocal_149)
	{
		func_123(0);
		func_55();
		SYSTEM::WAIT(0);
		if (!func_61())
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 2)
			{
				func_1(&uLocal_193, cLocal_176, "REHH2_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 3)
			{
				if (!PED::IS_PED_INJURED(iLocal_83))
				{
					if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
					}
				}
				func_1(&uLocal_193, cLocal_176, "REHH3_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 5)
			{
				func_1(&uLocal_193, cLocal_176, "REHH5_SLW", 4, 0, 0, 0);
			}
			iLocal_149 = 1;
		}
	}
	if ((iLocal_152 - iLocal_150) > 60000 && iLocal_149)
	{
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_83, true);
			if (PED::IS_PED_IN_GROUP(iLocal_83))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Local_91, 200f, 200f, 200f, false, true, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_83, Local_91, 1f, -1, 0.25f, 0, 40000f);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(iLocal_83, 40000f, 0);
					}
					if (iLocal_58 == 1)
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					}
					PED::SET_PED_KEEP_TASK(iLocal_83, true);
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
					func_60();
				}
			}
		}
	}
}

void func_130()//Position - 0x536B
{
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_83))
		{
			if (!iLocal_145)
			{
				iLocal_146 = MISC::GET_GAME_TIMER();
				iLocal_145 = 1;
			}
			else
			{
				iLocal_147 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_145 = 0;
		}
	}
	if ((iLocal_147 - iLocal_146) > 90000)
	{
		func_123(0);
		func_55();
		SYSTEM::WAIT(0);
		if (iLocal_58 == 1)
		{
			func_1(&uLocal_193, cLocal_176, "REHH1_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 2)
		{
			func_1(&uLocal_193, cLocal_176, "REHH2_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			func_1(&uLocal_193, cLocal_176, "REHH3_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			func_1(&uLocal_193, cLocal_176, "REHH5_WLK", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_83, true);
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Local_91, 200f, 200f, 200f, false, true, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_83, Local_91, 1f, -1, 0.25f, 0, 40000f);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_83, 40000f, 0);
			}
			if (iLocal_58 == 1)
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			}
			PED::SET_PED_KEEP_TASK(iLocal_83, true);
			if (PED::IS_PED_IN_GROUP(iLocal_83))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_83);
			}
			func_60();
		}
	}
}

void func_131()//Position - 0x54AB
{
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_VEHICLE(iLocal_83, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_119))
				{
					iLocal_119 = func_70(iLocal_83, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_81))
				{
					HUD::REMOVE_BLIP(&iLocal_81);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_81))
				{
					iLocal_81 = func_132(Local_91, 1);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_119))
				{
					HUD::REMOVE_BLIP(&iLocal_119);
				}
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_119))
		{
			iLocal_119 = func_70(iLocal_83, 0, 145);
		}
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_91, 50f, 50f, 50f, false, true, 0)) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_81))
			{
				iLocal_81 = func_132(Local_91, 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_91, 50f, 50f, 50f, false, true, 0))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_81))
			{
				HUD::REMOVE_BLIP(&iLocal_81);
			}
		}
	}
}

int func_132(struct<3> Param0, bool bParam3)//Position - 0x55E1
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_72(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_133()//Position - 0x560D
{
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, true)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5f, 5f, 5f, false, true, 0))
		{
			if (func_135())
			{
				func_57(0);
				iLocal_123 = 0;
			}
		}
		else if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
		{
			if (func_61() && !iLocal_123)
			{
				func_57(1);
				iLocal_123 = 1;
			}
		}
		if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_83, false);
		}
		if (func_134("REHH3_CHT3_7"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_83, true, 1);
		}
		if (func_134("REHH3_CHT6_5"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_83, false, 1);
		}
		if (func_134("REHH3_CHT8_3"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_83, true, 1);
		}
		if ((func_126("REHH3_CHT8M") || func_126("REHH3_CHT8F")) || func_126("REHH3_CHT8T"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_83, false, 1);
		}
	}
}

int func_134(char* sParam0)//Position - 0x56F8
{
	var uVar0;
	
	if (func_61())
	{
		MemCopy(&uVar0, {func_67()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135()//Position - 0x5720
{
	if (Global_23297 == 1)
	{
		return 1;
	}
	return 0;
}

void func_136()//Position - 0x5737
{
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (iLocal_58 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!func_126("REHH1_CRASH"))
						{
							func_123(0);
							func_55();
							SYSTEM::WAIT(0);
							func_1(&uLocal_193, cLocal_176, "REHH1_CRASH", 4, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_142)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) && PED::IS_PED_IN_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					func_123(0);
					func_55();
					SYSTEM::WAIT(0);
					if (!func_61())
					{
						if (iLocal_58 == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_OUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 2)
						{
							func_1(&uLocal_193, cLocal_176, "REHH2_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 3)
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
								}
							}
							func_1(&uLocal_193, cLocal_176, "REHH3_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 5)
						{
							func_1(&uLocal_193, cLocal_176, "REHH5_GETOUT", 4, 0, 0, 0);
						}
						iLocal_142 = 1;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				iLocal_142 = 0;
			}
		}
		if (!iLocal_143)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_123(0);
				func_55();
				SYSTEM::WAIT(0);
				if (!func_61())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 5)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_JACK", 4, 0, 0, 0);
					}
					iLocal_143 = 1;
				}
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_143 = 0;
		}
		if (!iLocal_144)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_123(0);
				func_55();
				SYSTEM::WAIT(0);
				if (!func_61())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_GUN", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						if (!PED::IS_PED_INJURED(iLocal_83))
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
							}
						}
						func_1(&uLocal_193, cLocal_176, "REHH3_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 5)
					{
					}
					iLocal_144 = 1;
				}
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_144 = 0;
		}
	}
}

void func_137()//Position - 0x59FB
{
	if (func_139(Local_91))
	{
		func_123(0);
		func_55();
		SYSTEM::WAIT(0);
		if (iLocal_58 == 1)
		{
			func_1(&uLocal_193, cLocal_176, "REHH1_WAY", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 2)
		{
			func_1(&uLocal_193, cLocal_176, "REHH2_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
				}
			}
			func_1(&uLocal_193, cLocal_176, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			func_1(&uLocal_193, cLocal_176, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (func_138())
	{
		func_123(0);
		func_55();
		SYSTEM::WAIT(0);
		if (iLocal_58 == 1)
		{
		}
		else if (iLocal_58 == 2)
		{
			func_1(&uLocal_193, cLocal_176, "REHH2_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
				}
			}
			func_1(&uLocal_193, cLocal_176, "REHH3_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			func_1(&uLocal_193, cLocal_176, "REHH5_NEAR", 4, 0, 0, 0);
		}
	}
}

int func_138()//Position - 0x5B1E
{
	if (func_13() == 2)
	{
		if (func_59())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_33192)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_33192 = 1;
					if (!Global_33191)
					{
						Global_33191 = 1;
						return 1;
					}
				}
			}
			else if (Global_33192)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_33192 = 0;
			}
		}
	}
	return 0;
}

int func_139(struct<3> Param0)//Position - 0x5B99
{
	if (func_13() == 2)
	{
		if (func_59() && !Global_33190)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0) > (fLocal_45 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_33190 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_140()//Position - 0x5C26
{
	if (!func_125())
	{
		func_123(1);
	}
	if (!func_61())
	{
		switch (iLocal_106)
		{
			case 0:
				if (iLocal_58 == 1)
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_58 == 2)
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_58 == 3)
				{
					iLocal_108 = MISC::GET_GAME_TIMER() + 2000;
				}
				else if (iLocal_58 == 5)
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				iLocal_106++;
				break;
			
			case 1:
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 5)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHT", 4, 0, 0, 0);
					}
					iLocal_106++;
				}
				break;
			
			case 2:
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_58 == 1)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_ASKM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_ASKF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_ASKT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_58 == 2)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_193, cLocal_176, "REHH2_CHTm2", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH2_CHTf2", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_193, cLocal_176, "REHH2_CHTt2", 4, 0, 0, 0);
						}
					}
					else if (iLocal_58 == 3)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_193, cLocal_176, "REHH3_CHTM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH3_CHTF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_193, cLocal_176, "REHH3_CHTT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_58 == 5)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_193, cLocal_176, "REHH5_RESPM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH5_RESPF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							if (!bLocal_110)
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_RESPT", 4, 0, 0, 0);
							}
						}
					}
					iLocal_106++;
				}
				break;
			
			case 3:
				if (iLocal_58 == 1)
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_58 == 2)
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_58 == 3)
				{
					iLocal_108 = MISC::GET_GAME_TIMER() + 500;
				}
				else if (iLocal_58 == 5)
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				iLocal_106++;
				break;
			
			case 4:
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_CHT2", 4, 0, 0, 0);
						iLocal_106++;
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT2", 4, 0, 0, 0);
						iLocal_106++;
					}
					else if (iLocal_58 == 3)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT2", 4, 0, 0, 0);
						iLocal_106++;
					}
					else if (iLocal_58 == 5)
					{
						if (bLocal_110 && !bLocal_112)
						{
							if (func_13() == 0)
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_OKM", 4, 0, 0, 0);
							}
							else if (func_13() == 1)
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_OKF", 4, 0, 0, 0);
							}
							else if (func_13() == 2)
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_OKT", 4, 0, 0, 0);
							}
							iLocal_106++;
						}
					}
				}
				break;
			
			case 5:
				if (iLocal_58 == 1)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_RESPM", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_RESPF", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_RESPT", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_pchatm", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_pchatf", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_pchatt", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT2M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT2F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT2T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_CHAT1", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 6:
				if (iLocal_58 == 1)
				{
					func_1(&uLocal_193, cLocal_176, "REHH1_CHAT", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT1b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT1c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT1d", 4, 0, 0, 0);
					}
				}
				iLocal_106++;
				break;
			
			case 7:
				if (iLocal_58 == 1)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_CHATb", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_CHATc", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_CHATd", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT3M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT3F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT3M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT3F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 8:
				if (iLocal_58 == 1)
				{
					func_1(&uLocal_193, cLocal_176, "REHH1_CHATe", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2d", 4, 0, 0, 0);
					}
				}
				iLocal_106++;
				break;
			
			case 9:
				if (iLocal_58 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT4M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT4F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT4M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT4F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2e", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 10:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2f", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2g", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2h", 4, 0, 0, 0);
					}
				}
				iLocal_106++;
				break;
			
			case 11:
				if (iLocal_58 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT5M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT5F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT5M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT5F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_CHAT3", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 12:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT3b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT3c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT3d", 4, 0, 0, 0);
					}
				}
				iLocal_106++;
				break;
			
			case 13:
				if (iLocal_58 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT6M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT6F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT6M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT6F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_CHAT4", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 14:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT4b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT4c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT4d", 4, 0, 0, 0);
					}
				}
				iLocal_106++;
				break;
			
			case 15:
				if (iLocal_58 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT7M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT7F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_RUNOUT", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 16:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT8", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT8", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 17:
				if (iLocal_58 == 3)
				{
					iLocal_108 = MISC::GET_GAME_TIMER() + 700;
				}
				iLocal_106++;
				break;
			
			case 18:
				if (iLocal_58 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT8M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT8F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT8T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT8M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT8F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT8T", 4, 0, 0, 0);
					}
				}
				iLocal_106++;
				break;
			
			case 19:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT9", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT9", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 20:
				if (iLocal_58 == 3)
				{
					iLocal_108 = MISC::GET_GAME_TIMER() + 300;
				}
				iLocal_106++;
				break;
			
			case 21:
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_58 == 3)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_193, cLocal_176, "REHH3_CHT9M", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH3_CHT9F", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_193, cLocal_176, "REHH3_CHT9T", 4, 0, 0, 0);
						}
					}
					iLocal_106++;
				}
				break;
			
			case 22:
				if (!PED::IS_PED_INJURED(iLocal_83))
				{
					TASK::TASK_PLAY_ANIM(iLocal_83, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0f, false, false, false);
				}
				iLocal_106++;
				break;
			}
	}
}

void func_141()//Position - 0x6AE1
{
	if (iLocal_58 != 3)
	{
		if (func_144())
		{
			SYSTEM::SETTIMERA(0);
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_91, 3f, 3f, 2f, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Local_91, Global_20, false, true, 0))
				{
					if (func_143(1, 0, 1))
					{
						func_142();
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f + 2f), 3, false);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
						iLocal_57 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_110)
	{
		if (PED::IS_PED_INJURED(iLocal_84))
		{
			iLocal_57 = 7;
		}
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 805.501f, 1269.9261f, 361.4025f, 25f, 30f, 2f, false, true, 0) || (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, 824.8886f, 1275.6705f, 359.4312f, Global_20, true, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0)))
			{
				func_55();
				SYSTEM::WAIT(0);
				func_1(&uLocal_193, cLocal_176, "REHH3_CHT10", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_83) && !PED::IS_PED_INJURED(iLocal_84))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_84, -1, 2052, 4);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 5f, 1f, 2f, 0);
						TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0f, false, false, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_84, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f + 2f), 2, false);
					}
				}
				SYSTEM::SETTIMERA(0);
				iLocal_57 = 6;
			}
		}
	}
}

void func_142()//Position - 0x6CC8
{
	Global_21152 = 0;
	func_22();
}

int func_143(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6CD8
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

int func_144()//Position - 0x6DBD
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_83, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 1;
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_91, 50f, 50f, 50f, false, true, 0) && !PED::IS_PED_INJURED(iLocal_83))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_145()//Position - 0x6E3E
{
	if (bLocal_112)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
		{
			if ((((PED::IS_PED_INJURED(iLocal_84) || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0)) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_91) < 250f) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_95) < 250f) || iLocal_114)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_120))
				{
					HUD::REMOVE_BLIP(&iLocal_120);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_121))
				{
					HUD::REMOVE_BLIP(&iLocal_121);
				}
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					AUDIO::PLAY_PAIN(iLocal_84, 6, 0, 0);
					TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_84);
				}
				func_55();
				SYSTEM::WAIT(0);
				func_1(&uLocal_193, cLocal_176, "REHH5_CHT2", 4, 0, 0, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_84);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_169))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_169);
				}
				bLocal_112 = false;
			}
			else
			{
				if (!iLocal_115)
				{
					if (!func_61())
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_193, cLocal_176, "REHH5_COMM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH5_COMF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_193, cLocal_176, "REHH5_COMT", 4, 0, 0, 0);
						}
						iLocal_115 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					func_153(&iLocal_84, &iLocal_120, &iLocal_169, &iLocal_121);
					func_152(&iLocal_84, &iLocal_120, &iLocal_169, &iLocal_121);
					func_146(iLocal_169, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_183, &uLocal_186, &Local_188, &fLocal_187, &uLocal_191, 0f, 0f, 0f, 1500, 0f);
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, false, true, 0))
					{
						if (iLocal_107 < MISC::GET_GAME_TIMER())
						{
							if (!func_61())
							{
								if (func_65())
								{
									func_1(&uLocal_193, cLocal_176, "REHH5_FHT", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_193, cLocal_176, "REHH5_FEAR", 4, 0, 0, 0);
								}
								iLocal_107 = MISC::GET_GAME_TIMER() + 8000;
							}
						}
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							if (!func_126("REHH5_SHO"))
							{
								func_55();
								SYSTEM::WAIT(0);
								func_1(&uLocal_193, cLocal_176, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_84))
						{
							if ((PED::IS_PED_ON_FOOT(iLocal_84) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4)) && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
							{
								iLocal_114 = 1;
							}
						}
					}
					if (!iLocal_113 && !PED::IS_PED_INJURED(iLocal_84))
					{
						if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
						{
							TASK::TASK_COMBAT_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_55();
							SYSTEM::WAIT(0);
							func_1(&uLocal_193, cLocal_176, "REHH5_GRM", 4, 0, 0, 0);
							iLocal_113 = 1;
						}
					}
				}
			}
		}
	}
}

void func_146(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)//Position - 0x711F
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1)) && func_151(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam2, *uParam3, Param7) };
				*uParam3 = func_150(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true));
				func_149(iParam1, uParam4, uParam5);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if (func_148(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam2, true) > 20f)
				{
					if (!func_147(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, false, false, false, false, false, false, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
						else
						{
							Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_188, fLocal_187, Param7) };
							if (!func_147(Var0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Var0, 2f))
								{
									MISC::CLEAR_AREA_OF_PEDS(Var0, 1.5f, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(Var0, 3f, false, false, false, false, false, false, 0);
									ENTITY::SET_ENTITY_COORDS(iParam0, Var0, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iParam0, fLocal_187);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
									*uParam6 = MISC::GET_GAME_TIMER();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_147(struct<3> Param0)//Position - 0x7354
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_148(int iParam0, int iParam1, bool bParam2)//Position - 0x737E
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

void func_149(int iParam0, var uParam1, var uParam2)//Position - 0x73DC
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			*uParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			*uParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
	}
}

float func_150(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)//Position - 0x740C
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_151(int iParam0)//Position - 0x7426
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_152(int* iParam0, int* iParam1, int* iParam2, int* iParam3)//Position - 0x7471
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
		{
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, false))
				{
					if (HUD::DOES_BLIP_EXIST(*iParam1))
					{
						HUD::REMOVE_BLIP(iParam1);
					}
					iVar0 = 1;
				}
				else if (!HUD::DOES_BLIP_EXIST(*iParam1))
				{
					*iParam1 = func_70(*iParam0, 1, 145);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_132(ENTITY::GET_ENTITY_COORDS(*iParam2, true), 0);
					HUD::SET_BLIP_COLOUR(*iParam3, 1);
					HUD::SET_BLIP_PRIORITY(*iParam3, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, "BLIP_VEH" /* GXT: Vehicle */);
				}
			}
			else
			{
				Var1 = { HUD::GET_BLIP_COORDS(*iParam3) };
				Var4 = { ENTITY::GET_ENTITY_COORDS(*iParam2, true) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(*iParam3, Var1);
				if (iVar0 == 0)
				{
					HUD::REMOVE_BLIP(iParam3);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam1))
				{
					*iParam1 = func_70(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_153(int* iParam0, int* iParam1, int* iParam2, int* iParam3)//Position - 0x75BC
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, false))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0f);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(*iParam3))
				{
					HUD::REMOVE_BLIP(iParam3);
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0f);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
		}
	}
}

void func_154()//Position - 0x76AD
{
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.0767f, 382.48657f, 77f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_84, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.0767f, 382.48657f, 77f, false, true, 0))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.71484f, 1270.1383f, 359.28552f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.71484f, 1270.1383f, 359.28552f, false, 0f, false);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.29623f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.29623f, false, 0f, false);
			}
		}
		else
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.71484f, 1270.1383f, 359.28552f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.71484f, 1270.1383f, 359.28552f, true, 0f, false);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.29623f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.29623f, true, 0f, false);
			}
		}
	}
}

void func_155()//Position - 0x7805
{
	if (!bLocal_110)
	{
		if (iLocal_58 == 3)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_102, 200f, 200f, 200f, false, true, 0))
			{
				STREAMING::REQUEST_MODEL(iLocal_99);
				STREAMING::REQUEST_CLIP_SET("move_m@brave");
				if (STREAMING::HAS_MODEL_LOADED(iLocal_99) && STREAMING::HAS_CLIP_SET_LOADED("move_m@brave"))
				{
					iLocal_84 = PED::CREATE_PED(26, iLocal_99, Local_102, fLocal_105, true, true);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 0, 2, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 3, 0, 2, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_84, 42, true);
					PED::SET_PED_DIES_WHEN_INJURED(iLocal_84, true);
					PED::SET_PED_MOVEMENT_CLIPSET(iLocal_84, "move_m@brave", 0.25f);
					PED::SET_PED_CONFIG_FLAG(iLocal_84, 137, true);
					func_159(&uLocal_193, 4, iLocal_84, sLocal_178, 0, 1);
					TASK::TASK_PLAY_ANIM(iLocal_84, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_99);
					bLocal_110 = true;
				}
			}
		}
		else if (iLocal_58 == 5)
		{
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_77, true) > 320f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_83, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), MISC::GET_RANDOM_INT_IN_RANGE(2, 5), &Local_64, 1, 3f, 0f))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Local_64, 7f) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_64) < 110f)
							{
								STREAMING::REQUEST_MODEL(iLocal_99);
								if (STREAMING::HAS_MODEL_LOADED(iLocal_99))
								{
									func_62();
									SYSTEM::WAIT(0);
									if (func_158(&uLocal_193, cLocal_176, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !PED::IS_PED_INJURED(iLocal_83))
									{
										iLocal_169 = VEHICLE::CREATE_VEHICLE(iLocal_100, Local_64, func_156(Local_64, func_157(PLAYER::PLAYER_ID()), 1), true, true, false);
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_169, 134, 134);
										VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_169, 0f);
										iLocal_84 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_169, 26, iLocal_99, -1, true, true);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 0, 1, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 2, 1, 0, 0);
										PED::SET_PED_CONFIG_FLAG(iLocal_84, 42, true);
										AUDIO::STOP_PED_SPEAKING(iLocal_84, true);
										func_159(&uLocal_193, 4, iLocal_84, sLocal_178, 0, 1);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_169, 5f);
										TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_84, iLocal_169, iLocal_83, 6, 60f, 786468, -1f, -1f, true);
										TASK::TASK_COMBAT_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_KEEP_TASK(iLocal_84, true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_99);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_100);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_169, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) + 15f));
										if (HUD::DOES_BLIP_EXIST(iLocal_81))
										{
											HUD::REMOVE_BLIP(&iLocal_81);
										}
										func_62();
										while (func_61())
										{
											SYSTEM::WAIT(0);
										}
										func_127(&uLocal_193, cLocal_176, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
										bLocal_112 = true;
										bLocal_110 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_156(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)//Position - 0x7AC5
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

Vector3 func_157(int iParam0)//Position - 0x7B2A
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_158(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7B3D
{
	func_23(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22293 = 0;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 1;
	Global_23279 = 0;
	Global_23283 = 0;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_2(sParam2, iParam4, 0);
}

void func_159(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x7B91
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
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

void func_160()//Position - 0x7C2C
{
	if (!iLocal_174 && !func_61())
	{
		if (iLocal_172 == 6 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM1", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 6 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM2", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 7 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM3", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 7 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM4", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 8 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM5", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 8 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM6", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 9 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM7", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 9 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM8", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 10 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM9", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 10 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM10", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 11 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM11", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 11 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM12", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 12 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM13", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 12 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM14", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 13 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM15", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 13 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM16", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 14 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM17", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 14 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM18", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 15 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM19", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 15 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM20", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 16 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM21", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 16 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM22", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 17 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM23", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 17 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM24", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 18 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM25", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 18 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM26", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 19 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM27", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 19 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM28", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 20 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM29", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 20 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM30", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 21 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM31", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 21 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM32", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 22 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM33", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 22 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM34", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 23 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM35", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
	}
}

void func_161()//Position - 0x8233
{
	iLocal_153 = func_166(func_167()) * 1000;
	iLocal_153 = (iLocal_153 + func_165(func_167()) * 1000 * 60);
	if (!iLocal_162)
	{
		if ((iLocal_172 >= 24 && iLocal_153 < 150000) || (iLocal_172 >= 24 && iLocal_153 < 150000))
		{
			func_162((((iLocal_172 * 1000 * 60 - func_165(func_167()) * 1000 * 60) + (iLocal_171 * 1000 - func_166(func_167()) * 1000)) - 1440000), "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
		else
		{
			func_162(((iLocal_172 * 1000 * 60 - func_165(func_167()) * 1000 * 60) + (iLocal_171 * 1000 - func_166(func_167()) * 1000)), "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
	else if ((iLocal_172 >= 24 && iLocal_153 < 150000) || (iLocal_172 >= 24 && iLocal_153 < 150000))
	{
		func_162((((iLocal_172 * 1000 * 60 - func_165(func_167()) * 1000 * 60) + (iLocal_171 * 1000 - func_166(func_167()) * 1000)) - 1440000), "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_162(((iLocal_172 * 1000 * 60 - func_165(func_167()) * 1000 * 60) + (iLocal_171 * 1000 - func_166(func_167()) * 1000)), "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if ((iLocal_172 == func_165(func_167()) + 1 && iLocal_171 == func_166(func_167())) || (((iLocal_172 >= 24 && iLocal_153 < 150000) && iLocal_172 == func_165(func_167()) + 25) && iLocal_171 == func_166(func_167())))
	{
		if (!iLocal_161)
		{
			if (!func_126("REHH1_1HOUR") && !func_126("REHH4_1HOUR"))
			{
				func_123(0);
			}
			func_55();
			SYSTEM::WAIT(0);
			if (!func_61())
			{
				if (iLocal_58 == 1)
				{
					func_1(&uLocal_193, cLocal_176, "REHH1_1HOUR", 4, 0, 0, 0);
				}
				iLocal_161 = 1;
			}
		}
	}
	if (iLocal_171 == 30)
	{
		if ((iLocal_172 == func_165(func_167()) && iLocal_171 == func_166(func_167()) + 30) || (((iLocal_172 >= 24 && iLocal_153 < 150000) && iLocal_172 == func_165(func_167()) + 24) && iLocal_171 == func_166(func_167()) + 30))
		{
			if (!iLocal_162)
			{
				if (!func_126("REHH1_HHOUR") && !func_126("REHH4_HHOUR"))
				{
					func_123(0);
				}
				func_55();
				SYSTEM::WAIT(0);
				if (!func_61())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_162 = 1;
				}
				if (!iLocal_163)
				{
					iLocal_175 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_175, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_175, "countdown_fadein", 35f);
					AUDIO::START_AUDIO_SCENE("TIMER_SCENE");
					iLocal_163 = 1;
				}
			}
		}
		if ((iLocal_172 == func_165(func_167()) && iLocal_171 == func_166(func_167()) + 5) || (((iLocal_172 >= 24 && iLocal_153 < 150000) && iLocal_172 == func_165(func_167()) + 24) && iLocal_171 == func_166(func_167()) + 5))
		{
			if (!iLocal_164)
			{
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_175, "countdown_fast", 1f);
				iLocal_164 = 1;
			}
		}
	}
	if (iLocal_171 == 0)
	{
		if ((iLocal_172 == func_165(func_167()) + 1 && iLocal_171 == (func_166(func_167()) - 30)) || (((iLocal_172 >= 24 && iLocal_153 < 150000) && iLocal_172 == func_165(func_167()) + 25) && iLocal_171 == (func_166(func_167()) - 30)))
		{
			if (!iLocal_162)
			{
				if (!func_126("REHH1_HHOUR") && !func_126("REHH4_HHOUR"))
				{
					func_123(0);
				}
				func_55();
				SYSTEM::WAIT(0);
				if (!func_61())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_162 = 1;
				}
				if (!iLocal_163)
				{
					iLocal_175 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_175, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_175, "countdown_fadein", 35f);
					AUDIO::START_AUDIO_SCENE("TIMER_SCENE");
					iLocal_163 = 1;
				}
			}
		}
		if ((iLocal_172 == func_165(func_167()) + 1 && iLocal_171 == (func_166(func_167()) - 55)) || (((iLocal_172 >= 24 && iLocal_153 < 150000) && iLocal_172 == func_165(func_167()) + 25) && iLocal_171 == (func_166(func_167()) - 55)))
		{
			if (!iLocal_164)
			{
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_175, "countdown_fast", 1f);
				iLocal_164 = 1;
			}
		}
	}
	if (iLocal_172 >= 24 && iLocal_153 < 150000)
	{
		if (iLocal_172 == func_165(func_167()) + 24 && iLocal_171 == func_166(func_167()))
		{
			bLocal_173 = true;
		}
	}
	else if (iLocal_172 == func_165(func_167()) && iLocal_171 == func_166(func_167()))
	{
		bLocal_173 = true;
	}
	if (bLocal_173)
	{
		func_55();
		SYSTEM::WAIT(0);
		AUDIO::STOP_SOUND(iLocal_175);
		AUDIO::STOP_AUDIO_SCENE("TIMER_SCENE");
		if (iLocal_58 == 1)
		{
			func_1(&uLocal_193, cLocal_176, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(iLocal_83, false), (10.5f + 2f), 2, false);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_83, 1, 0);
				PED::REMOVE_PED_FROM_GROUP(iLocal_83);
				if (HUD::DOES_BLIP_EXIST(iLocal_81))
				{
					HUD::REMOVE_BLIP(&iLocal_81);
				}
			}
		}
		iLocal_57 = 9;
	}
}

void func_162(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x87F1
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_164(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_163(7, iVar0);
		Global_1670224.f_4714[iVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4714.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4714.f_172[iVar0] = iParam2;
		Global_1670224.f_4714.f_216[iVar0] = iParam3;
		Global_1670224.f_4714.f_183[iVar0] = iParam4;
		Global_1670224.f_4714.f_194[iVar0] = iParam5;
		Global_1670224.f_4714.f_249[iVar0] = iParam6;
		Global_1670224.f_4714.f_260[iVar0] = iParam7;
		Global_1670224.f_4714.f_205[iVar0] = iParam8;
		Global_1670224.f_4714.f_314[iVar0] = iParam9;
		Global_1670224.f_4714.f_325[iVar0] = iParam10;
		Global_1670224.f_4714.f_357[iVar0] = iParam11;
		Global_1670224.f_4714.f_238[iVar0] = iParam12;
		Global_1670224.f_4714.f_271[iVar0] = iParam13;
		Global_1670224.f_4714.f_368[iVar0] = iParam14;
		Global_1670224.f_4714.f_379[iVar0] = iParam15;
		Global_1670224.f_4714.f_390[iVar0] = iParam16;
		Global_1670224.f_4714.f_227[iVar0] = iParam17;
	}
}

void func_163(int iParam0, int iParam1)//Position - 0x894E
{
	MISC::SET_BIT(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_164(int iParam0, int iParam1)//Position - 0x8967
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

int func_165(int iParam0)//Position - 0x897D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_166(int iParam0)//Position - 0x8990
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_167()//Position - 0x89A3
{
	var uVar0;
	
	func_177(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_176(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_175(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_170(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_169(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_168(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_168(var uParam0, int iParam1)//Position - 0x89E9
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

void func_169(var uParam0, int iParam1)//Position - 0x8A6F
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_170(var uParam0, int iParam1)//Position - 0x8AA2
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_174(*uParam0);
	iVar1 = func_172(*uParam0);
	if (iParam1 < 1 || iParam1 > func_171(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_171(int iParam0, int iParam1)//Position - 0x8AF3
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

int func_172(int iParam0)//Position - 0x8B95
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_173(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_173(bool bParam0, int iParam1, int iParam2)//Position - 0x8BB7
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_174(int iParam0)//Position - 0x8BCE
{
	return iParam0 & 15;
}

void func_175(var uParam0, int iParam1)//Position - 0x8BDB
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_176(var uParam0, int iParam1)//Position - 0x8C15
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_177(var uParam0, int iParam1)//Position - 0x8C50
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_178()//Position - 0x8C8C
{
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_119))
				{
					HUD::REMOVE_BLIP(&iLocal_119);
				}
				if (!PED::IS_PED_IN_GROUP(iLocal_83))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_122());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_81))
				{
					iLocal_81 = func_132(Local_91, 1);
				}
				if (((func_13() == 2 && !func_58()) && iLocal_58 != 1) && iLocal_58 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_82))
					{
						iLocal_82 = func_132(Local_95, 0);
						HUD::SET_BLIP_SPRITE(iLocal_82, 269 /*RADAR_ALTRUIST*/);
						func_179();
					}
				}
				if (iLocal_58 == 1)
				{
					if (!func_61())
					{
						if (iLocal_58 == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_WTA", 4, 0, 0, 0);
						}
						iLocal_172 = func_165(func_167()) + 2;
						if (func_166(func_167()) >= 30)
						{
							iLocal_171 = 0;
							iLocal_172++;
						}
						else
						{
							iLocal_171 = 30;
						}
						iLocal_109 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 2)
				{
					if (func_1(&uLocal_193, cLocal_176, "REHH2_WTB", 4, 0, 0, 0))
					{
						iLocal_109 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_1(&uLocal_193, cLocal_176, "REHH3_WTC", 4, 0, 0, 0))
					{
						iLocal_109 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 5)
				{
					if (func_1(&uLocal_193, cLocal_176, "REHH5_WTE", 4, 0, 0, 0))
					{
						iLocal_109 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_57 = 4;
					}
				}
			}
		}
	}
}

void func_179()//Position - 0x8E25
{
	if (func_13() == 2)
	{
		if (!Global_33189)
		{
			func_180("CULT_BLIP_HELP" /* GXT: Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~ */, -1);
			Global_33189 = 1;
		}
	}
}

void func_180(char* sParam0, int iParam1)//Position - 0x8E49
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_181()//Position - 0x8E60
{
	int iVar0;
	
	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_STO", 4, 0, 0, 0);
					iLocal_108 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
				}
				if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 24f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
					{
						fLocal_182 = func_148(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_182 > 5f)
						{
							fLocal_182 = (fLocal_182 - 1f);
						}
						else
						{
							fLocal_182 = (fLocal_182 - 0.5f);
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 2f, 2f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						iLocal_138++;
					}
				}
				else if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
				{
					fLocal_182 = func_148(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_182 = (fLocal_182 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 2f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_119))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_119, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
					{
						if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 25f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_85, 0, false))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_85, -1, 0, 2f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
								iLocal_138++;
							}
						}
					}
				}
				else if (!iLocal_139)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (func_1(&uLocal_193, cLocal_176, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_139 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!PED::IS_PED_INJURED(iLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
				{
					if (func_148(iLocal_83, iLocal_85, 1) < 25f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								if (func_1(&uLocal_193, cLocal_176, "REHH5_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f && func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 25f)
						{
							if (!func_61())
							{
								if (func_13() == 0)
								{
									func_1(&uLocal_193, cLocal_176, "REHH5_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
								else if (func_13() == 1)
								{
									func_1(&uLocal_193, cLocal_176, "REHH5_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
								else if (func_13() == 2)
								{
									func_1(&uLocal_193, cLocal_176, "REHH5_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 25f)
				{
					if (func_128())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_122());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 2f, 1, 0, 0);
								func_182();
								iLocal_138++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_83);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_122());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_138++;
								}
							}
						}
					}
					else if (!iLocal_140)
					{
						if (!func_61())
						{
							if (!func_188())
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_VEH2", 4, 0, 0, 0);
							}
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (func_128())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_83);
						iLocal_109 = 1;
						iLocal_57 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH5_SLW", 4, 0, 0, 0))
						{
							func_60();
						}
					}
					if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) > 100f)
					{
						func_60();
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = 4;
				}
			}
			break;
	}
}

void func_182()//Position - 0x94A1
{
	if (!func_58())
	{
		if (func_13() == 2)
		{
			Global_33187 = 1;
		}
	}
}

float func_183(int iParam0, int iParam1)//Position - 0x94BD
{
	return func_148(iParam0, iParam1, 1);
}

void func_184()//Position - 0x94CE
{
	int iVar0;
	
	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
					{
						fLocal_182 = func_148(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_182 > 5f)
						{
							fLocal_182 = (fLocal_182 - 1f);
						}
						else
						{
							fLocal_182 = (fLocal_182 - 0.5f);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2.5f, 0f, 0f, 1f, 5000, 0.1f, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						iLocal_138++;
					}
				}
				else if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 8f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
				{
					fLocal_182 = func_148(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_182 = (fLocal_182 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 1f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_119))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_119, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
					{
						if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 10f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_85, 0, false))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_85, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
								iLocal_138++;
							}
						}
					}
				}
				else if (!iLocal_139)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (func_1(&uLocal_193, cLocal_176, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_139 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!PED::IS_PED_INJURED(iLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
				{
					if (func_148(iLocal_83, iLocal_85, 1) < 13f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								if (func_1(&uLocal_193, cLocal_176, "REHH3_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_83))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f && func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
						{
							if (!func_61())
							{
								if (func_13() == 0)
								{
									func_1(&uLocal_193, cLocal_176, "REHH3_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
								else if (func_13() == 1)
								{
									func_1(&uLocal_193, cLocal_176, "REHH3_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
								else if (func_13() == 2)
								{
									func_1(&uLocal_193, cLocal_176, "REHH3_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (func_128())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_122());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0, 0);
								func_182();
								iLocal_138++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_83);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_122());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_138++;
								}
							}
						}
					}
					else if (!iLocal_140)
					{
						if (!func_61())
						{
							if (!func_188())
							{
								func_1(&uLocal_193, cLocal_176, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH3_VEH2", 4, 0, 0, 0);
							}
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (func_128())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_83, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_83);
						iLocal_109 = 1;
						iLocal_57 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH3_SLW", 4, 0, 0, 0))
						{
							func_60();
						}
					}
					if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) > 100f)
					{
						func_60();
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = 4;
				}
			}
			break;
	}
}

void func_185()//Position - 0x9AEE
{
	int iVar0;
	
	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
					{
						fLocal_182 = func_148(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_182 > 5f)
						{
							fLocal_182 = (fLocal_182 - 1f);
						}
						else
						{
							fLocal_182 = (fLocal_182 - 0.5f);
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 1f, 2f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						iLocal_138++;
					}
				}
				else if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 8f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
				{
					fLocal_182 = func_148(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_182 = (fLocal_182 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 1f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_119))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_119, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
					{
						if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 10f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_85, 0, false))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_85, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
								func_55();
								SYSTEM::WAIT(0);
								iLocal_138++;
							}
						}
					}
				}
				else if (!iLocal_139)
				{
					TASK::CLEAR_PED_TASKS(iLocal_83);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (func_1(&uLocal_193, cLocal_176, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_139 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!PED::IS_PED_INJURED(iLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
				{
					if (func_148(iLocal_83, iLocal_85, 1) < 13f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								if (func_1(&uLocal_193, cLocal_176, "REHH2_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_83))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f && func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
						{
							if (!func_61())
							{
								if (func_13() == 0)
								{
									func_1(&uLocal_193, cLocal_176, "REHH2_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
								else if (func_13() == 1)
								{
									func_1(&uLocal_193, cLocal_176, "REHH2_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
								else if (func_13() == 2)
								{
									func_1(&uLocal_193, cLocal_176, "REHH2_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (func_128())
					{
						iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_122());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0, 0);
								func_182();
								iLocal_138++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_83);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_122());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_138++;
								}
							}
						}
					}
					else if (!iLocal_140)
					{
						if (!func_61())
						{
							if (!func_188())
							{
								func_1(&uLocal_193, cLocal_176, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH2_VEH2", 4, 0, 0, 0);
							}
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (!iLocal_101)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
					{
						if (!func_61())
						{
							if (func_1(&uLocal_193, cLocal_176, "REHH2_INA", 4, 0, 0, 0))
							{
								iLocal_101 = 1;
							}
						}
					}
				}
				if (func_128())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_83, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_83);
						iLocal_109 = 1;
						iLocal_57 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH2_SLW", 4, 0, 0, 0))
						{
							func_60();
						}
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = 4;
				}
				if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_60();
				}
			}
			break;
	}
}

void func_186()//Position - 0xA14B
{
	int iVar0;
	
	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5000, 2052, 2);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_85, 30000, 2054, 2);
							TASK::TASK_PLAY_ANIM(iLocal_83, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						}
						iLocal_138++;
					}
					else if (!iLocal_139)
					{
						TASK::CLEAR_PED_TASKS(iLocal_83);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2054, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						if (func_1(&uLocal_193, cLocal_176, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_139 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_119))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_119, true);
			}
			if (func_128())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 10f)
					{
						if (!PED::IS_PED_INJURED(iLocal_83))
						{
							if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 150f))
							{
								fLocal_182 = func_148(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
								if (fLocal_182 > 5f)
								{
									fLocal_182 = (fLocal_182 - 0.5f);
								}
								else
								{
									fLocal_182 = (fLocal_182 - 0.25f);
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_85, 10000, 2054, 2);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_85, 0, false))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_85, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
								iLocal_138++;
							}
							else
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, iLocal_85, 10000, 2054, 2);
								iLocal_138++;
							}
						}
					}
				}
			}
			else if (!iLocal_139)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2054, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					if (!func_61())
					{
						if (!func_188())
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_VEH", 4, 0, 0, 0);
						}
						else
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_VEH2", 4, 0, 0, 0);
						}
						iLocal_139 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f)
				{
					func_142();
					iLocal_138++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f)
				{
					if (func_1(&uLocal_193, cLocal_176, "REHH1_ASK", 4, 0, 0, 0))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
						SYSTEM::SETTIMERA(0);
						iLocal_138++;
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_83))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				}
				if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
						{
							if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f)
							{
								if (!func_61())
								{
									if (func_13() == 0)
									{
										func_1(&uLocal_193, cLocal_176, "REHH1_RPA", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_138++;
									}
									else if (func_13() == 1)
									{
										func_1(&uLocal_193, cLocal_176, "REHH1_RPB", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_138++;
									}
									else if (func_13() == 2)
									{
										func_1(&uLocal_193, cLocal_176, "REHH1_RPC", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_138++;
									}
								}
							}
						}
					}
					else if (!iLocal_139)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_139 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_128())
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_122());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0, 0);
								iLocal_138++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_83);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_122());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_138++;
								}
							}
						}
						else if (!iLocal_140)
						{
							if (!func_61())
							{
								if (!func_188())
								{
									func_1(&uLocal_193, cLocal_176, "REHH1_VEH", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_193, cLocal_176, "REHH1_VEH2", 4, 0, 0, 0);
								}
								iLocal_140 = 1;
							}
						}
					}
					else if (!iLocal_139)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_139 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (func_128())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_83, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_83);
						iLocal_109 = 1;
						iLocal_57 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH1_NOH", 4, 0, 0, 0))
						{
							func_60();
						}
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = 5;
				}
				if (func_183(iLocal_83, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_60();
				}
			}
			break;
	}
}

void func_187()//Position - 0xA78B
{
	int iVar0;
	
	if ((iLocal_156 - iLocal_155) > 1000)
	{
		iLocal_170 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_83, false), 18f, 0, 4);
	}
	if (iLocal_170 != 0)
	{
		iLocal_154++;
		iLocal_155 = MISC::GET_GAME_TIMER();
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_154 > iVar0)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_170, true, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_170, false))
				{
					if (iLocal_58 == 1)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, iLocal_170, 3000, 2052, 2);
							}
						}
						iLocal_180 = MISC::GET_GAME_TIMER();
						iLocal_154 = 0;
					}
					else if (iLocal_58 == 2)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, iLocal_170, 3000, 2052, 2);
							}
						}
						iLocal_180 = MISC::GET_GAME_TIMER();
						iLocal_154 = 0;
					}
					else if (iLocal_58 == 3)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, iLocal_170, 3000, 2052, 2);
							}
						}
						iLocal_180 = MISC::GET_GAME_TIMER();
						iLocal_154 = 0;
					}
					else if (iLocal_58 == 5)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, iLocal_170, 3000, 2052, 2);
							}
						}
						iLocal_180 = MISC::GET_GAME_TIMER();
						iLocal_154 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_181 = MISC::GET_GAME_TIMER();
			if ((iLocal_181 - iLocal_180) > 3500)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_170);
			}
			iLocal_170 = 0;
		}
	}
}

int func_188()//Position - 0xA913
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

void func_189()//Position - 0xA97E
{
	if (iLocal_58 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3024.265f, 660.8264f, 1.1982f, -3140.8235f, 803.707f, 35.131f, 93f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_83)) || func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 12f)
				{
					func_190();
					iLocal_57 = 2;
				}
			}
		}
	}
	else if (iLocal_58 == 2)
	{
		if (!iLocal_165)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_88, 100f, 100f, 100f, false, true, 0) && !PED::IS_PED_INJURED(iLocal_83))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 159.6669f, 4413.1973f, 74.8915f, 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, 1, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				iLocal_165 = 1;
			}
		}
	}
	else if (iLocal_58 == 5)
	{
		if (!iLocal_165)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_88, 200f, 200f, 200f, false, true, 0) && !PED::IS_PED_INJURED(iLocal_83))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 3);
				TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0f, false, false, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -343.4485f, 2826.2224f, 54.5089f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -365.6846f, 2809.1584f, 48.7646f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -382.4106f, 2818.3838f, 44.078f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -370.3838f, 2866.6768f, 41.0979f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				iLocal_165 = 1;
			}
		}
	}
	if (iLocal_58 != 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
			{
				if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 95f, 95f, 50f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_83)) || func_183(PLAYER::PLAYER_PED_ID(), iLocal_83) < 12f)
				{
					func_190();
					iLocal_57 = 2;
				}
			}
		}
	}
}

void func_190()//Position - 0xAC77
{
	if (HUD::DOES_BLIP_EXIST(iLocal_118))
	{
		HUD::REMOVE_BLIP(&iLocal_118);
	}
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_119))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
			{
				iLocal_119 = func_70(iLocal_83, 0, 145);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_119, false);
			}
		}
		if (!func_223())
		{
			func_198(1);
		}
		func_159(&uLocal_193, 3, iLocal_83, sLocal_177, 0, 1);
	}
	if (func_13() == 0)
	{
		func_159(&uLocal_193, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_13() == 1)
	{
		func_159(&uLocal_193, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_13() == 2)
	{
		func_159(&uLocal_193, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
}

void func_191()//Position - 0xAD2B
{
	func_193(39, 1);
	func_193(40, 1);
	func_193(41, 1);
	func_193(42, 1);
	func_193(43, 1);
	func_193(44, 1);
	iLocal_83 = PED::CREATE_PED(26, iLocal_98, Local_88, fLocal_94, true, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_98);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_83, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_83, false);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_83, sLocal_179);
	PED::SET_PED_CONFIG_FLAG(iLocal_83, 137, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_83, 206, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_83, 1024, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_83, 65536, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_83, 2, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_83, 17, true);
	PED::SET_PED_MAX_TIME_IN_WATER(iLocal_83, 60f);
	PED::SET_PED_LOD_MULTIPLIER(iLocal_83, 5f);
	if (iLocal_58 == 1)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 2, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 4, 0, 2, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_100, true);
		iLocal_169 = VEHICLE::CREATE_VEHICLE(iLocal_100, -3088.0684f, 730.4819f, 20.3028f, 332.2996f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_169, 150f);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_169, 4, false, false);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_169, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_100);
		TASK::TASK_PLAY_ANIM(iLocal_83, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
	}
	else if (iLocal_58 == 2)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 10, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_83, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_91 - Vector(20f, 50f, 50f), Local_91 + Vector(20f, 50f, 50f), false, true, true, true, 1);
		func_192(1);
	}
	else if (iLocal_58 == 3)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 8, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_83, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_91 - Vector(20f, 50f, 50f), Local_91 + Vector(20f, 50f, 50f), false, true, true, true, 1);
	}
	else if (iLocal_58 == 5)
	{
	}
	iLocal_57 = 1;
}

void func_192(bool bParam0)//Position - 0xAF90
{
	if (bParam0)
	{
		StringCopy(&Global_113025, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_113019 = 1;
	}
	else
	{
		StringCopy(&Global_113025, "NULL", 24);
		Global_113019 = 0;
	}
}

void func_193(int iParam0, bool bParam1)//Position - 0xAFBC
{
	if (bParam1)
	{
		if (!func_197(iParam0, 2, 1))
		{
			func_196(iParam0, 2, 1);
		}
	}
	else if (func_197(iParam0, 2, 1))
	{
		func_194(iParam0, 2, 1);
	}
}

void func_194(int iParam0, int iParam1, bool bParam2)//Position - 0xAFF3
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_32() == 0)
		{
			iVar0 = func_52(func_195(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_49(func_195(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

int func_195(int iParam0)//Position - 0xB063
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
			return 12924;
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
	return 14835;
}

void func_196(int iParam0, int iParam1, bool bParam2)//Position - 0xB40B
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_32() == 0)
		{
			iVar0 = func_52(func_195(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_49(func_195(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

int func_197(int iParam0, int iParam1, bool bParam2)//Position - 0xB47B
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_32() == 0)
		{
			return BitTest(func_52(func_195(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_198(int iParam0)//Position - 0xB4DB
{
	if (func_201())
	{
		Global_113959 = 1;
		Global_113956 = MISC::GET_GAME_TIMER();
		if (func_37(Global_113958))
		{
			func_199(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_37(Global_113958))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_199(int iParam0)//Position - 0xB52E
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_180(func_200(iParam0), -1);
					Global_113969.f_24998.f_2++;
					MISC::SET_BIT(&Global_113965, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113965, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_180(func_200(iParam0), -1);
					Global_113969.f_24998.f_3++;
					MISC::SET_BIT(&Global_113965, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113965, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_180(func_200(iParam0), -1);
					Global_113969.f_24998.f_4++;
					MISC::SET_BIT(&Global_113965, 2);
				}
			}
			break;
	}
}

char* func_200(int iParam0)//Position - 0xB609
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

int func_201()//Position - 0xB64B
{
	switch (func_202(&Global_33008, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_202(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xB681
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98991.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_206(0))
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23692.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_44042 = iParam2;
		Global_44004 = *uParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44003)
			{
				if (Global_44009[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44004 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_204(iParam2))
		{
			return 0;
		}
		if (Global_44003 == 8)
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003++;
		if (iParam4 != 0)
		{
			func_203(uParam0, iParam4);
		}
	}
	return 2;
}

void func_203(var uParam0, int iParam1)//Position - 0xB7B8
{
	int iVar0;
	
	if (Global_44003 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44003)
	{
		if (Global_44009[iVar0 /*4*/] == *uParam0)
		{
			Global_44009[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_204(int iParam0)//Position - 0xB807
{
	return func_205(iParam0, Global_44042);
}

int func_205(int iParam0, int iParam1)//Position - 0xB818
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

int func_206(int iParam0)//Position - 0xB9F9
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_204(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_207()//Position - 0xBA1B
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
			{
				return 1;
			}
		}
		if (!bLocal_112)
		{
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_83, true), 10f, true) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_83, true) - Vector(10f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_83, true) + Vector(10f, 10f, 10f), false))
			{
				return 1;
			}
		}
		else if (PED::IS_PED_INJURED(iLocal_84) && ENTITY::DOES_ENTITY_EXIST(iLocal_84))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), true) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
			{
				if (!PED::IS_PED_INJURED(iLocal_83))
				{
					AUDIO::PLAY_PAIN(iLocal_83, 6, 0, 0);
				}
				return 1;
			}
		}
		if ((!PED::IS_PED_IN_GROUP(iLocal_83) && PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 90f)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, false, true, 0))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_83) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_83))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_208()//Position - 0xBB71
{
	STREAMING::REQUEST_MODEL(iLocal_98);
	STREAMING::REQUEST_ANIM_DICT("random@hitch_lift");
	if (iLocal_58 == 1 || iLocal_58 == 5)
	{
		STREAMING::REQUEST_MODEL(iLocal_100);
	}
	if (iLocal_58 == 1)
	{
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("timer", false, -1);
	}
	else if (iLocal_58 == 3)
	{
		STREAMING::REQUEST_ANIM_DICT("facials@gen_female@base");
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_98) && STREAMING::HAS_ANIM_DICT_LOADED("random@hitch_lift"))
	{
		if (iLocal_58 == 1 || iLocal_58 == 5)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_100))
			{
				bLocal_59 = true;
			}
		}
		else if (iLocal_58 == 3)
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED("facials@gen_female@base"))
			{
				bLocal_59 = true;
			}
		}
		else
		{
			bLocal_59 = true;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_98);
		STREAMING::REQUEST_ANIM_DICT("random@hitch_lift");
		if (iLocal_58 == 1 || iLocal_58 == 5)
		{
			STREAMING::REQUEST_MODEL(iLocal_100);
		}
		else if (iLocal_58 == 3)
		{
			STREAMING::REQUEST_ANIM_DICT("facials@gen_female@base");
		}
	}
}

void func_209()//Position - 0xBC4B
{
	if (iLocal_58 == 1)
	{
		Local_88 = { -3086.0525f, 735.5091f, 20.4883f };
		fLocal_94 = 17.9234f;
		Local_91 = { -1053.3442f, -2539.3267f, 19.0394f };
		iLocal_98 = joaat("A_M_M_Business_01");
		cLocal_176 = "REHH1AU";
		sLocal_177 = "BUSINESSMAN";
		sLocal_179 = "BUSINESSMAN";
		iLocal_100 = joaat("schafter2");
	}
	else if (iLocal_58 == 2)
	{
		Local_88 = { 196.7701f, 4427.7573f, 72.2673f };
		fLocal_94 = 75.9173f;
		Local_91 = { 3328.8276f, 5154.456f, 17.2894f };
		iLocal_98 = joaat("A_F_Y_Hiker_01");
		cLocal_176 = "REHH2AU";
		sLocal_177 = "REHH2Hiker";
		sLocal_179 = "REHH2Hiker";
	}
	else if (iLocal_58 == 3)
	{
		Local_88 = { 2745.0264f, 4386.8267f, 47.8636f };
		fLocal_94 = 19.4143f;
		Local_91 = { 814.455f, 1274.7966f, 359.5112f };
		Local_102 = { 804.2382f, 1269.5895f, 359.3557f };
		fLocal_105 = 340.7372f;
		iLocal_98 = joaat("A_F_Y_Hipster_03");
		iLocal_99 = joaat("S_M_M_Security_01");
		cLocal_176 = "REHH3AU";
		sLocal_177 = "REHH3Hipster";
		sLocal_179 = "REHH3Hipster";
		sLocal_178 = "REHH3Security";
	}
	else if (iLocal_58 == 5)
	{
		Local_88 = { -324.0379f, 2818.034f, 58.4498f };
		fLocal_94 = 56.5422f;
		Local_91 = { -344.0339f, 634.4108f, 171.2902f };
		iLocal_98 = joaat("IG_Bride");
		iLocal_99 = joaat("A_M_Y_Business_01");
		cLocal_176 = "REHH5AU";
		sLocal_177 = "REHH5Bride";
		sLocal_179 = "REHH5Bride";
		sLocal_178 = "REHH5Groom";
		iLocal_100 = joaat("patriot");
	}
	iLocal_60 = 1;
}

int func_210()//Position - 0xBDD1
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_221())
		{
			return 0;
		}
	}
	if (func_217())
	{
		return 1;
	}
	if (func_211(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_211(float fParam0, bool bParam1)//Position - 0xBE57
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
		if (func_15(func_13()))
		{
			iVar36 = func_42();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113969.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar32 /*6*/], 3))
				{
					func_212(iVar32, &Var0);
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

void func_212(int iParam0, var uParam1)//Position - 0xBF08
{
	switch (iParam0)
	{
		case 0:
			func_213(uParam1, "Abigail1", func_215(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_214(iParam0), 1, 0);
			break;
		
		case 1:
			func_213(uParam1, "Abigail2", func_215(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_214(iParam0), 1, 0);
			break;
		
		case 2:
			func_213(uParam1, "Barry1", func_215(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_214(iParam0), 1, 0);
			break;
		
		case 3:
			func_213(uParam1, "Barry2", func_215(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_214(iParam0), 1, 1);
			break;
		
		case 4:
			func_213(uParam1, "Barry3", func_215(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 5:
			func_213(uParam1, "Barry3A", func_215(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 6:
			func_213(uParam1, "Barry3C", func_215(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 7:
			func_213(uParam1, "Barry4", func_215(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_214(iParam0), 0, 0);
			break;
		
		case 8:
			func_213(uParam1, "Dreyfuss1", func_215(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 9:
			func_213(uParam1, "Epsilon1", func_215(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 10:
			func_213(uParam1, "Epsilon2", func_215(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_214(iParam0), 1, 0);
			break;
		
		case 11:
			func_213(uParam1, "Epsilon3", func_215(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 12:
			func_213(uParam1, "Epsilon4", func_215(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 13:
			func_213(uParam1, "Epsilon5", func_215(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_214(iParam0), 1, 0);
			break;
		
		case 14:
			func_213(uParam1, "Epsilon6", func_215(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 15:
			func_213(uParam1, "Epsilon7", func_215(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 16:
			func_213(uParam1, "Epsilon8", func_215(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_214(iParam0), 1, 0);
			break;
		
		case 17:
			func_213(uParam1, "Extreme1", func_215(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 18:
			func_213(uParam1, "Extreme2", func_215(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 19:
			func_213(uParam1, "Extreme3", func_215(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 20:
			func_213(uParam1, "Extreme4", func_215(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 21:
			func_213(uParam1, "Fanatic1", func_215(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_214(iParam0), 1, 0);
			break;
		
		case 22:
			func_213(uParam1, "Fanatic2", func_215(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_214(iParam0), 1, 0);
			break;
		
		case 23:
			func_213(uParam1, "Fanatic3", func_215(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_214(iParam0), 0, 1);
			break;
		
		case 24:
			func_213(uParam1, "Hao1", func_215(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_214(iParam0), 0, 1);
			break;
		
		case 25:
			func_213(uParam1, "Hunting1", func_215(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 26:
			func_213(uParam1, "Hunting2", func_215(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 27:
			func_213(uParam1, "Josh1", func_215(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_214(iParam0), 1, 0);
			break;
		
		case 28:
			func_213(uParam1, "Josh2", func_215(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_214(iParam0), 1, 1);
			break;
		
		case 29:
			func_213(uParam1, "Josh3", func_215(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_214(iParam0), 1, 1);
			break;
		
		case 30:
			func_213(uParam1, "Josh4", func_215(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_214(iParam0), 1, 0);
			break;
		
		case 31:
			func_213(uParam1, "Maude1", func_215(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 32:
			func_213(uParam1, "Minute1", func_215(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 33:
			func_213(uParam1, "Minute2", func_215(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 34:
			func_213(uParam1, "Minute3", func_215(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 35:
			func_213(uParam1, "MrsPhilips1", func_215(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 36:
			func_213(uParam1, "MrsPhilips2", func_215(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 37:
			func_213(uParam1, "Nigel1", func_215(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_214(iParam0), 1, 0);
			break;
		
		case 38:
			func_213(uParam1, "Nigel1A", func_215(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_214(iParam0), 1, 1);
			break;
		
		case 39:
			func_213(uParam1, "Nigel1B", func_215(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_214(iParam0), 1, 1);
			break;
		
		case 40:
			func_213(uParam1, "Nigel1C", func_215(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_214(iParam0), 1, 1);
			break;
		
		case 41:
			func_213(uParam1, "Nigel1D", func_215(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_214(iParam0), 1, 1);
			break;
		
		case 42:
			func_213(uParam1, "Nigel2", func_215(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_214(iParam0), 1, 1);
			break;
		
		case 43:
			func_213(uParam1, "Nigel3", func_215(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_214(iParam0), 1, 1);
			break;
		
		case 44:
			func_213(uParam1, "Omega1", func_215(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 45:
			func_213(uParam1, "Omega2", func_215(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 46:
			func_213(uParam1, "Paparazzo1", func_215(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 47:
			func_213(uParam1, "Paparazzo2", func_215(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 48:
			func_213(uParam1, "Paparazzo3", func_215(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 49:
			func_213(uParam1, "Paparazzo3A", func_215(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 50:
			func_213(uParam1, "Paparazzo3B", func_215(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 51:
			func_213(uParam1, "Paparazzo4", func_215(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 52:
			func_213(uParam1, "Rampage1", func_215(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 54:
			func_213(uParam1, "Rampage3", func_215(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_214(iParam0), 1, 0);
			break;
		
		case 55:
			func_213(uParam1, "Rampage4", func_215(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_214(iParam0), 1, 0);
			break;
		
		case 56:
			func_213(uParam1, "Rampage5", func_215(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_214(iParam0), 0, 0);
			break;
		
		case 53:
			func_213(uParam1, "Rampage2", func_215(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_214(iParam0), 1, 0);
			break;
		
		case 57:
			func_213(uParam1, "TheLastOne", func_215(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 58:
			func_213(uParam1, "Tonya1", func_215(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 59:
			func_213(uParam1, "Tonya2", func_215(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 60:
			func_213(uParam1, "Tonya3", func_215(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 61:
			func_213(uParam1, "Tonya4", func_215(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		case 62:
			func_213(uParam1, "Tonya5", func_215(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_213(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xD16E
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

int func_214(int iParam0)//Position - 0xD1FF
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

struct<2> func_215(int iParam0)//Position - 0xD545
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_216(iParam0) };
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

struct<2> func_216(int iParam0)//Position - 0xD57B
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

int func_217()//Position - 0xD9C6
{
	if (func_220() && !func_221())
	{
		return 1;
	}
	if (func_219() && func_218())
	{
		return 1;
	}
	return 0;
}

bool func_218()//Position - 0xD9F8
{
	return Global_113687 > 0;
}

int func_219()//Position - 0xDA06
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_220()//Position - 0xDA1B
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_221()//Position - 0xDA3E
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

int func_222()//Position - 0xDA5B
{
	if (!func_204(5))
	{
		return 1;
	}
	if (func_217())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_221())
		{
			return 0;
		}
	}
	if (func_211(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_223()//Position - 0xDABD
{
	if ((Global_113958 == func_46() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

void func_224(int iParam0)//Position - 0xDAE8
{
	if (iParam0 == -1)
	{
		iParam0 = func_46();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_226(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113955 = 0;
	func_225();
}

void func_225()//Position - 0xDB1E
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

void func_226(int iParam0)//Position - 0xDB5B
{
	Global_113958 = iParam0;
}

int func_227(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xDB69
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152557)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_46();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_255())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_221())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_27(0))
		{
			return 0;
		}
		if (func_217())
		{
			return 0;
		}
		if (func_254())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_15(func_13()))
		{
			if (func_211(100f, 1) != -1)
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
		if (!func_253(iParam3))
		{
			return 0;
		}
		if (func_15(func_13()))
		{
			if (func_252(func_13()) == 4 || func_252(func_13()) == 5)
			{
				return 0;
			}
		}
		if (func_15(func_13()))
		{
			if (!func_251(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_250(Global_113969.f_24998.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113960) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_249())
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
		if (!func_240(4))
		{
			return 0;
		}
		if (!func_204(5))
		{
			return 0;
		}
		if (func_239(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_239(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_253(30) && !func_239(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_15(func_13()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113969.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113969.f_2366.f_539.f_2296[iVar4];
				if (func_238(iVar8))
				{
					if (func_229(iVar4))
					{
						if (!func_228(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_13() != iVar4)
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

bool func_228(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xDF03
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_229(int iParam0)//Position - 0xDF4A
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_230(iVar0);
}

int func_230(int iParam0)//Position - 0xDF6B
{
	return func_231(iParam0, 1);
}

int func_231(int iParam0, int iParam1)//Position - 0xDF7A
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_238(iParam0))
	{
		return 0;
	}
	func_232(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_232(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xDFCD
{
	func_233(func_167(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_233(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xDFEB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_237(iParam0, iParam1))
	{
		iVar0 = func_174(iParam1);
		iVar1 = func_172(iParam0);
		iVar2 = (func_172(iParam0) - func_172(iParam1));
		iVar3 = (func_174(iParam0) - func_174(iParam1));
		iVar4 = (func_236(iParam0) - func_236(iParam1));
		iVar5 = (func_165(iParam0) - func_165(iParam1));
		iVar6 = (func_166(iParam0) - func_166(iParam1));
		iVar7 = (func_235(iParam0) - func_235(iParam1));
	}
	else
	{
		iVar0 = func_174(iParam0);
		iVar1 = func_172(iParam1);
		iVar2 = (func_172(iParam1) - func_172(iParam0));
		iVar3 = (func_174(iParam1) - func_174(iParam0));
		iVar4 = (func_236(iParam1) - func_236(iParam0));
		iVar5 = (func_165(iParam1) - func_165(iParam0));
		iVar6 = (func_166(iParam1) - func_166(iParam0));
		iVar7 = (func_235(iParam1) - func_235(iParam0));
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
		iVar4 = (iVar4 + func_171(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_234(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_234(float fParam0, float fParam1, float fParam2)//Position - 0xE1EC
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

int func_235(int iParam0)//Position - 0xE22E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_236(int iParam0)//Position - 0xE241
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_237(int iParam0, int iParam1)//Position - 0xE253
{
	int iVar0;
	int iVar1;
	
	if (!func_238(iParam1) || !func_238(iParam0))
	{
		return 1;
	}
	iVar0 = func_172(iParam0);
	iVar1 = func_172(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_236(iParam0);
	iVar1 = func_236(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
	iVar1 = func_165(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_166(iParam0);
	iVar1 = func_166(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	iVar1 = func_235(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)//Position - 0xE35F
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
	iVar0 = func_235(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_166(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_165(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_172(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_174(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_236(iParam0);
	if (iVar5 < 1 || iVar5 > func_171(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_239(int iParam0, bool bParam1)//Position - 0xE43B
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0)//Position - 0xE45B
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_13();
				if (!func_15(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_248()) || Global_113016) || Global_32951) || func_247()) || func_21(8, -1)) || func_246()) || func_245()) || func_244()) || func_243()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_248()) || Global_32951) || func_247()) || func_21(8, -1)) || func_244()) || func_246()) || func_245()) || func_243()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_248()) || Global_113016) || Global_32951) || func_247()) || func_21(8, -1)) || func_244()) || func_246()) || func_245()) || func_243()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_248()) || Global_113016) || Global_32951) || func_247()) || func_21(8, -1)) || func_246()) || func_245()) || func_243()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_248() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_21(8, -1)) || func_243()) || func_242()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_21(8, -1) || func_246()) || func_245()) || func_242()) || func_241())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_248()) || Global_32951) || func_247()) || func_21(8, -1)) || func_245()) || func_244()) || func_243()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_248()) || func_245()) || Global_113016) || Global_32951) || func_247()) || Global_45250) || func_21(8, -1)) || func_244()) || func_242()) || func_243()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_248()) || Global_113016) || Global_32951) || func_247()) || func_21(8, -1)) || func_244()) || func_242()) || func_246()) || func_245()) || func_243())
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

var func_241()//Position - 0xEB78
{
	return Global_101572.f_1;
}

int func_242()//Position - 0xEB86
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_243()//Position - 0xEBA9
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_244()//Position - 0xEBC3
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

bool func_245()//Position - 0xEBED
{
	return Global_101585.f_394 > 0;
}

bool func_246()//Position - 0xEBFE
{
	return Global_101585.f_393 > 0;
}

var func_247()//Position - 0xEC0F
{
	return Global_1575083;
}

int func_248()//Position - 0xEC1B
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_249()//Position - 0xEC37
{
	func_12();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_250(int iParam0)//Position - 0xEC5F
{
	return func_237(func_167(), iParam0);
}

int func_251(int iParam0, int iParam1, int iParam2)//Position - 0xEC71
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_13();
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

int func_252(int iParam0)//Position - 0xED55
{
	if (!func_15(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_253(int iParam0)//Position - 0xED79
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_255())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113969.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113969.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_254()//Position - 0xEDD1
{
	int iVar0;
	
	if (Global_33100)
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

int func_255()//Position - 0xEE15
{
	int iVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
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

void func_256()//Position - 0xEECD
{
	if (iLocal_141)
	{
		func_278(0);
		if (Global_33191)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_277();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		func_192(0);
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		if (CAM::IS_CODE_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_CODE_GAMEPLAY_HINT(false);
		}
		Global_33289[0 /*7*/].f_6 = 0;
		func_268(0, 1, 1, 0, 0, 0, 0);
		func_62();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
		{
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_83, 317, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_83);
				}
				if (iLocal_58 != 2)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 0)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_83, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_83, true);
				if (PED::IS_PED_IN_GROUP(iLocal_83))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
		{
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (!PED::IS_PED_FLEEING(iLocal_84))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, false);
				}
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (func_223())
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.71484f, 1270.1383f, 359.28552f, 6f, joaat("prop_fnclink_03gate1"), false))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.71484f, 1270.1383f, 359.28552f, false, 0f, false);
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.29623f, 6f, joaat("prop_fnclink_03gate1"), false))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.29623f, false, 0f, false);
		}
	}
	func_257(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_257(int iParam0)//Position - 0xF06D
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_46();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_223())
	{
		func_261(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113960 = MISC::GET_GAME_TIMER();
		func_260(30000);
		StringCopy(&cVar0, func_259(Global_113958, 1), 64);
		if (func_45(Global_113958) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113957, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113955, (MISC::GET_GAME_TIMER() - Global_113956), 0);
	}
	else if (BitTest(Global_113965, 0) && Global_113969.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113965, 0);
	}
	func_258(&Global_33008);
	Global_113959 = 0;
	func_226(-1);
}

void func_258(var uParam0)//Position - 0xF11F
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_44004)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
}

char* func_259(int iParam0, bool bParam1)//Position - 0xF15C
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

void func_260(int iParam0)//Position - 0xF3A5
{
	Global_44593 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_261(int iParam0)//Position - 0xF3B7
{
	func_262(iParam0, 0, func_267(iParam0));
}

void func_262(int iParam0, int iParam1, int iParam2)//Position - 0xF3CC
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_167();
	func_265(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_264(iParam0, &uVar0);
	Var1 = { func_263(&uVar0) };
}

struct<16> func_263(var uParam0)//Position - 0xF3FB
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_165(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_166(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_235(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_236(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_174(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_172(*uParam0), 64);
	return Var0;
}

void func_264(int iParam0, var uParam1)//Position - 0xF4CA
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_265(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF4E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_172(*uParam0);
	iVar1 = func_174(*uParam0);
	iVar2 = func_236(*uParam0);
	iVar3 = func_165(*uParam0);
	iVar4 = func_166(*uParam0);
	iVar5 = func_235(*uParam0);
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
	iVar6 = func_171(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_171(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_266(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_266(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF664
{
	func_177(uParam0, iParam1);
	func_176(uParam0, iParam2);
	func_175(uParam0, iParam3);
	func_169(uParam0, iParam5);
	func_170(uParam0, iParam4);
	func_168(uParam0, iParam6);
}

int func_267(int iParam0)//Position - 0xF69C
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

void func_268(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xF83F
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_276(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_10())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_275(1, bParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_276(0);
		HUD::THEFEED_RESUME();
		Global_64172 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_275(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_273(PLAYER::PLAYER_ID())) && !func_270(PLAYER::PLAYER_ID(), 0)) && !func_269()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_273(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79387 = 0;
	}
}

bool func_269()//Position - 0xF98C
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_270(int iParam0, int iParam1)//Position - 0xF9A6
{
	bool bVar0;
	
	if (!func_272(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_271(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
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

int func_271(int iParam0, bool bParam1)//Position - 0xF9FF
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_272(var uParam0)//Position - 0xFA40
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

int func_273(int iParam0)//Position - 0xFA62
{
	if (func_270(iParam0, 0))
	{
		return 1;
	}
	if (func_274())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_274()//Position - 0xFAA1
{
	return BitTest(Global_2621446, 3);
}

int func_275(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0xFAAF
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

void func_276(int iParam0)//Position - 0xFAE2
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 13);
	}
}

void func_277()//Position - 0xFB05
{
	Global_33187 = 0;
	Global_33188 = 0;
	Global_33190 = 0;
	Global_33191 = 0;
	Global_33192 = 0;
}

void func_278(bool bParam0)//Position - 0xFB21
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_193(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_279()//Position - 0xFB44
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_68, true);
		iLocal_67 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_71, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_71, true);
			iLocal_67 = 2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_74, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_74, true);
			iLocal_67 = 3;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_77, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_77, true);
			iLocal_67 = 5;
		}
		if (iLocal_67 == 1)
		{
			bLocal_80 = true;
			iLocal_58 = 1;
			return Local_68;
		}
		else if (iLocal_67 == 2)
		{
			bLocal_80 = 2;
			iLocal_58 = 2;
			return Local_71;
		}
		else if (iLocal_67 == 3)
		{
			bLocal_80 = 3;
			iLocal_58 = 3;
			return Local_74;
		}
		else if (iLocal_67 == 5)
		{
			bLocal_80 = 4;
			iLocal_58 = 5;
			return Local_77;
		}
	}
	return 0f, 0f, 0f;
}

