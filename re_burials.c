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
	int iLocal_16 = 0;
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
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[2] = { 0, 0 };
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59[2] = { 0, 0 };
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_79[2];
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	float fLocal_96[2] = { 0f, 0f };
	float fLocal_99 = 0f;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	struct<3> Local_105 = { 0, 0, 0 } ;
	int iLocal_108 = 0;
	int iLocal_109[2] = { 0, 0 };
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	bool bLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	struct<3> Local_137 = { 0, 0, 0 } ;
	struct<3> Local_140 = { 0, 0, 0 } ;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	bool bLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	struct<6> Local_148 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_154 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	bool bLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	var uLocal_176 = 16;
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
	int iLocal_341 = 0;
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
	iLocal_16 = 3;
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
	Local_105 = { 154.92f, 6841.12f, 19.14f };
	iLocal_123 = 200;
	Local_137 = { -1161.1992f, 934.5912f, 196.7591f };
	Local_140 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_148, "", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_51))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_51);
			}
		}
		func_214();
	}
	if (func_172(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_169(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_129)
		{
			if (!func_168())
			{
				if (func_167())
				{
					func_214();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_BU", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_155())
					{
						func_214();
					}
					if (!iLocal_64)
					{
						func_154();
					}
					else
					{
						func_153();
					}
					if (bLocal_50)
					{
						iLocal_160 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_152();
						switch (iLocal_47)
						{
							case 0:
								func_141();
								iLocal_47 = 1;
								break;
							
							case 1:
								if ((!func_134(iLocal_52[0], &iLocal_126, &uLocal_125, uLocal_124, iLocal_127, 7f, 0) && !func_134(iLocal_52[1], &iLocal_126, &uLocal_125, uLocal_124, iLocal_127, 7f, 0)) && !func_133())
								{
									switch (iLocal_48)
									{
										case 0:
											func_132();
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_76, 50f, 35f, 50f, false, true, 0))
											{
												func_131();
											}
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_76, 80f, 65f, 50f, false, true, 0))
											{
												func_130();
											}
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_56, false))
											{
												if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 281.9148f, 6816.3447f, 4.3197f, 48.3924f, 6885.9214f, 43.0037f, 226.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86 - Vector(0f, 0f, 7f), 20f, 15f, 50f, false, true, 0))
												{
													func_129();
													if (HUD::DOES_BLIP_EXIST(iLocal_112))
													{
														HUD::SHOW_HEIGHT_ON_BLIP(iLocal_112, false);
													}
													iLocal_62 = 0;
													while (iLocal_62 <= 1)
													{
														if (HUD::DOES_BLIP_EXIST(iLocal_109[iLocal_62]))
														{
															HUD::SHOW_HEIGHT_ON_BLIP(iLocal_109[iLocal_62], false);
														}
														iLocal_62++;
													}
													if (!func_168())
													{
														func_120(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_129();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								if ((func_134(iLocal_52[0], &iLocal_126, &uLocal_125, uLocal_124, iLocal_127, 7f, 0) || func_134(iLocal_52[1], &iLocal_126, &uLocal_125, uLocal_124, iLocal_127, 7f, 0)) || iLocal_127)
								{
									iLocal_127 = 1;
									if (!func_168())
									{
										func_120(1);
									}
									if (HUD::DOES_BLIP_EXIST(iLocal_112))
									{
										HUD::SHOW_HEIGHT_ON_BLIP(iLocal_112, true);
									}
									iLocal_62 = 0;
									while (iLocal_62 <= 1)
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_109[iLocal_62]))
										{
											HUD::SHOW_HEIGHT_ON_BLIP(iLocal_109[iLocal_62], true);
										}
										iLocal_62++;
									}
									switch (iLocal_126)
									{
										case 0:
											func_119();
											break;
										
										case 1:
											func_119();
											break;
										
										case 2:
											func_119();
											break;
										
										case 3:
											func_119();
											break;
										
										case 4:
											func_119();
											break;
										
										case 5:
											func_119();
											break;
										}
								}
								if (func_133())
								{
									iLocal_73 = 1;
									if (HUD::DOES_BLIP_EXIST(iLocal_112))
									{
										HUD::SHOW_HEIGHT_ON_BLIP(iLocal_112, true);
									}
									iLocal_62 = 0;
									while (iLocal_62 <= 1)
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_109[iLocal_62]))
										{
											HUD::SHOW_HEIGHT_ON_BLIP(iLocal_109[iLocal_62], true);
										}
										iLocal_62++;
									}
									if (!func_118())
									{
										switch (iLocal_49)
										{
											case 1:
												func_115();
												break;
											
											case 3:
												func_114();
												break;
											
											case 4:
												func_113();
												break;
											
											case 5:
												func_111();
												SYSTEM::WAIT(0);
												if (!PED::IS_PED_INJURED(iLocal_52[0]))
												{
													func_109(iLocal_52[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!PED::IS_PED_INJURED(iLocal_52[1]))
												{
													func_109(iLocal_52[1], "GENERIC_WAR_CRY", 24);
												}
												func_119();
												break;
											
											case 6:
												func_111();
												SYSTEM::WAIT(0);
												if (!PED::IS_PED_INJURED(iLocal_52[0]))
												{
													func_109(iLocal_52[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!PED::IS_PED_INJURED(iLocal_52[1]))
												{
													func_109(iLocal_52[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_119();
												break;
										}
									}
									else
									{
										func_111();
										SYSTEM::WAIT(0);
										iVar0 = 0;
										while (iVar0 < iLocal_52)
										{
											if (!PED::IS_PED_INJURED(iLocal_52[iVar0]))
											{
												AUDIO::PLAY_PAIN(iLocal_52[iVar0], 5, 0, 0);
												TASK::TASK_SMART_FLEE_PED(iLocal_52[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
												PED::SET_PED_KEEP_TASK(iLocal_52[iVar0], true);
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
												{
													if (ENTITY::IS_ENTITY_ATTACHED(iLocal_58))
													{
														ENTITY::DETACH_ENTITY(iLocal_58, true, true);
													}
												}
												if (HUD::DOES_BLIP_EXIST(iLocal_109[iVar0]))
												{
													HUD::REMOVE_BLIP(&(iLocal_109[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_47 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_128)
								{
									func_108();
								}
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								{
									func_92();
								}
								break;
							
							case 4:
								func_91();
								if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_105, 100f, 100f, 100f, true, true, 0))
								{
									PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
									{
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_52[0]));
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_52[1]));
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_55))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_137, 200f, 200f, 200f, true, true, 0))
									{
										STREAMING::REQUEST_MODEL(joaat("S_M_M_HighSec_01"));
										STREAMING::REQUEST_MODEL(joaat("granger"));
										if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_HighSec_01")) && STREAMING::HAS_MODEL_LOADED(joaat("granger")))
										{
											iLocal_57 = VEHICLE::CREATE_VEHICLE(joaat("granger"), -1155.0431f, 942.9685f, 197.4921f, 161.1247f, true, true, false);
											ENTITY::SET_ENTITY_LOD_DIST(iLocal_57, 200);
											VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_57, 1.5f);
											iLocal_55 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_57, 26, joaat("S_M_M_HighSec_01"), -1, true, true);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_55, 0, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_55, 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_55, 4, 0, 0, 0);
											WEAPON::GIVE_WEAPON_TO_PED(iLocal_55, joaat("WEAPON_PISTOL"), -1, true, true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_55, iLocal_175);
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_51))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 1)
										{
											if (!iLocal_130)
											{
												func_87(0);
												func_111();
												SYSTEM::WAIT(0);
												func_71(&uLocal_176, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_130 = 1;
											}
										}
									}
									else
									{
										iLocal_130 = 0;
									}
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_137, Global_22, true, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
									{
										if (PED::IS_PED_IN_GROUP(iLocal_51))
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_135))
											{
												HUD::REMOVE_BLIP(&iLocal_135);
											}
											if (HUD::DOES_BLIP_EXIST(iLocal_136))
											{
												HUD::REMOVE_BLIP(&iLocal_136);
											}
											if (func_70())
											{
												iLocal_47 = 5;
											}
											else
											{
												iLocal_47 = 6;
											}
										}
									}
									else
									{
										func_65();
										func_64();
										func_63();
										func_59();
										func_58();
										func_52();
										if (func_51(Local_137))
										{
											func_87(0);
											func_111();
											SYSTEM::WAIT(0);
											func_71(&uLocal_176, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_50())
										{
											func_87(0);
											func_111();
											SYSTEM::WAIT(0);
											func_71(&uLocal_176, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_91();
								if (func_49(1, 0, 1))
								{
									func_48();
								}
								if (bLocal_122)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 6:
								func_91();
								if (func_49(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_122)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(iLocal_58))
									{
										if (!PED::IS_PED_INJURED(iLocal_52[0]))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52[0], "random@burial", "a_burial_stop", 3))
											{
												if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													ENTITY::DETACH_ENTITY(iLocal_58, true, true);
												}
											}
											else
											{
												ENTITY::DETACH_ENTITY(iLocal_58, true, true);
											}
										}
									}
								}
								if (PED::IS_PED_INJURED(iLocal_52[0]) || PED::IS_PED_INJURED(iLocal_52[1]))
								{
									bLocal_145 = true;
								}
								if (bLocal_145)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, false))
									{
										if (!PED::IS_PED_INJURED(iLocal_52[0]))
										{
											PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_52[0]);
											if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_52[0], iLocal_56, -1, false, false) || VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_52[0], iLocal_56, 0, false, false))
											{
												if (!iLocal_162)
												{
													TASK::CLEAR_PED_TASKS(iLocal_52[0]);
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
													{
														if (ENTITY::IS_ENTITY_ATTACHED(iLocal_58))
														{
															ENTITY::DETACH_ENTITY(iLocal_58, true, true);
														}
													}
													TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
													TASK::TASK_CLEAR_LOOK_AT(0);
													TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_56, -0.5f, 0.5f, 0f), PLAYER::PLAYER_PED_ID(), 3f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													TASK::TASK_ENTER_VEHICLE(0, iLocal_56, -1, -1, 3f, 9, 0);
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_56, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, true);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_52[0], iLocal_63);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
													PED::SET_PED_KEEP_TASK(iLocal_52[0], true);
													VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_56, true);
													iLocal_162 = 1;
												}
												else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52[0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
												{
													if (TASK::GET_SEQUENCE_PROGRESS(iLocal_52[0]) == 3)
													{
														if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_52[0], Local_86, 10f, 10f, 10f, false, true, 0))
														{
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_52[0]));
														}
													}
												}
											}
											else
											{
												TASK::TASK_COMBAT_PED(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_52[0], true);
											}
										}
										if (!PED::IS_PED_INJURED(iLocal_52[1]))
										{
											PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_52[1]);
											if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_52[1], iLocal_56, -1, false, false) || VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_52[1], iLocal_56, 0, false, false))
											{
												if (!iLocal_162)
												{
													TASK::CLEAR_PED_TASKS(iLocal_52[1]);
													TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
													TASK::TASK_CLEAR_LOOK_AT(0);
													TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_56, -0.5f, 0.5f, 0f), PLAYER::PLAYER_PED_ID(), 3f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													TASK::TASK_ENTER_VEHICLE(0, iLocal_56, -1, -1, 3f, 9, 0);
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_56, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, true);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_52[1], iLocal_63);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
													PED::SET_PED_KEEP_TASK(iLocal_52[1], true);
													VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_56, true);
													iLocal_162 = 1;
												}
												else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
												{
													if (TASK::GET_SEQUENCE_PROGRESS(iLocal_52[1]) == 3)
													{
														if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_52[1], Local_86, 10f, 10f, 10f, false, true, 0))
														{
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_52[1]));
														}
													}
												}
											}
											else
											{
												TASK::TASK_COMBAT_PED(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_52[1], true);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_47 != 9)
						{
							if (!PED::IS_PED_INJURED(iLocal_51))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_51, Local_140, 5f, 5f, 5f, false, true, 0))
								{
									func_8(0);
									SYSTEM::WAIT(0);
									func_111();
									iLocal_47 = 9;
								}
							}
						}
						if (func_6())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
							{
								PED::DELETE_PED(&iLocal_51);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_47 != 3)
						{
							if (func_1())
							{
								AUDIO::TRIGGER_MUSIC_EVENT("RE6_BOTH_DEAD");
								if (!iLocal_72)
								{
									SYSTEM::SETTIMERA(0);
									iLocal_104 = MISC::GET_GAME_TIMER() + 8500;
									iLocal_72 = 1;
								}
								if (!PED::IS_PED_INJURED(iLocal_51))
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 20f, 20f, 20f, false, true, 1))
									{
										if (func_71(&uLocal_176, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_47 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_47 == 1 || iLocal_47 == 2) || iLocal_47 == 3) || iLocal_47 == 7)
						{
							if (!PED::IS_PED_INJURED(iLocal_51))
							{
								if (!bLocal_128)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 0)
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_51);
										iLocal_341 = PED::CREATE_SYNCHRONIZED_SCENE(Local_76, -2f, -4f, 18f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51, iLocal_341, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1000f, 0);
										ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_59[0], iLocal_341, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1000f);
										ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_59[1], iLocal_341, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1000f);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_341, true);
										PED::SET_PED_KEEP_TASK(iLocal_51, true);
									}
									if (FIRE::IS_ENTITY_ON_FIRE(iLocal_51))
									{
										PED::SET_ENABLE_HANDCUFFS(iLocal_51, true);
										PED::SET_ENABLE_BOUND_ANKLES(iLocal_51, true);
										ENTITY::SET_ENTITY_HEALTH(iLocal_51, 0, 0);
									}
								}
								if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_51) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_51)) || (iLocal_123 - ENTITY::GET_ENTITY_HEALTH(iLocal_51)) >= 50)
								{
									PED::SET_ENABLE_HANDCUFFS(iLocal_51, true);
									PED::SET_ENABLE_BOUND_ANKLES(iLocal_51, true);
									ENTITY::SET_ENTITY_HEALTH(iLocal_51, 0, 0);
								}
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
								{
									if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 5f)
									{
									}
									else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_51))
									{
										PED::SET_ENABLE_HANDCUFFS(iLocal_51, true);
										PED::SET_ENABLE_BOUND_ANKLES(iLocal_51, true);
										ENTITY::SET_ENTITY_HEALTH(iLocal_51, 0, 0);
									}
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_56, false))
								{
									if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_56, iLocal_51))
									{
										PED::SET_ENABLE_HANDCUFFS(iLocal_51, true);
										PED::SET_ENABLE_BOUND_ANKLES(iLocal_51, true);
										ENTITY::SET_ENTITY_HEALTH(iLocal_51, 0, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_214();
		}
	}
}

int func_1()//Position - 0xE95
{
	if (!bLocal_128)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_52[0]) && PED::IS_PED_INJURED(iLocal_52[1]))
			{
				return 1;
			}
			if (PED::IS_PED_HURT(iLocal_52[0]) && PED::IS_PED_HURT(iLocal_52[1]))
			{
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_52[0]))
			{
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_52[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()//Position - 0xF70
{
	if (PED::IS_PED_INJURED(iLocal_52[0]))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_109[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_58))
				{
					ENTITY::DETACH_ENTITY(iLocal_58, true, true);
				}
			}
			func_3(&uLocal_176, 4);
			HUD::REMOVE_BLIP(&(iLocal_109[0]));
		}
	}
	if (PED::IS_PED_INJURED(iLocal_52[1]))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_109[1]))
		{
			func_3(&uLocal_176, 3);
			HUD::REMOVE_BLIP(&(iLocal_109[1]));
		}
	}
	if (PED::IS_PED_INJURED(iLocal_51))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, false))
		{
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_112))
		{
			func_3(&uLocal_176, 5);
			HUD::REMOVE_BLIP(&iLocal_112);
		}
	}
}

void func_3(var uParam0, int iParam1)//Position - 0x100C
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()//Position - 0x1029
{
	AUDIO::TRIGGER_MUSIC_EVENT("RE6_END");
	func_214();
}

int func_5()//Position - 0x103D
{
	if (PED::IS_PED_INJURED(iLocal_51))
	{
		return 1;
	}
	return 0;
}

int func_6()//Position - 0x1053
{
	if (Global_32523)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)//Position - 0x106B
{
	Global_113796 = iParam0;
}

void func_8(int iParam0)//Position - 0x1079
{
	Global_22856 = iParam0;
}

int func_9()//Position - 0x1086
{
	if (Global_113810.f_24998.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()//Position - 0x10A2
{
	return Global_32522;
}

void func_11()//Position - 0x10AD
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (!PED::IS_PED_INJURED(iLocal_52[0]) || !PED::IS_PED_INJURED(iLocal_52[1]))
		{
			if (!func_12())
			{
				switch (iLocal_166)
				{
					case 0:
						if (iLocal_104 < MISC::GET_GAME_TIMER())
						{
							if (func_71(&uLocal_176, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_104 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_166++;
							}
						}
						break;
					
					case 1:
						if (iLocal_104 < MISC::GET_GAME_TIMER())
						{
							if (func_71(&uLocal_176, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_104 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_166++;
							}
						}
						break;
					
					case 2:
						if (iLocal_104 < MISC::GET_GAME_TIMER())
						{
							if (func_71(&uLocal_176, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_104 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_166++;
							}
						}
						break;
					
					case 3:
						if (iLocal_104 < MISC::GET_GAME_TIMER())
						{
							if (func_71(&uLocal_176, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_104 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_166 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()//Position - 0x11D8
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_13()//Position - 0x11FA
{
	while (!func_46())
	{
		SYSTEM::WAIT(0);
	}
	if (!func_6())
	{
		if (func_45() == 0)
		{
			func_42(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_45() == 1)
		{
			func_42(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_45() == 2)
		{
			func_42(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
	func_17(-1, 0);
	func_14();
	func_214();
}

void func_14()//Position - 0x12B3
{
	func_15();
}

int func_15()//Position - 0x12C0
{
	if (func_16(0))
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

int func_16(bool bParam0)//Position - 0x130B
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

void func_17(int iParam0, int iParam1)//Position - 0x1333
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_27("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_113810.f_24998.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_113798 = iParam1;
		if (Global_113796 == 0)
		{
			if (((Global_113799 == 1 || Global_113799 == 5) || Global_113799 == 11) || Global_113799 == 25)
			{
				func_7(2);
			}
			else if ((Global_113799 == 26 || Global_113799 == 8) || Global_113799 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)//Position - 0x1436
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
		func_22((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113810.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113810.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113810.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113810.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113810.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113810.f_10197[iParam0 /*12*/].f_11 = uParam2;
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
		func_19();
	}
}

void func_19()//Position - 0x151C
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
	Global_113546 = 0;
	Global_113547 = 0;
	Global_113548 = 0;
	Global_113549 = 0;
	Global_113550 = 0;
	Global_113551 = 0;
	Global_113552 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113810.f_10197.f_3853;
	Global_113810.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113810.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113810.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113546++;
					fVar1 = (fVar1 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113547++;
					fVar2 = (fVar2 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113548++;
					fVar3 = (fVar3 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113549++;
					fVar4 = (fVar4 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113550++;
					fVar5 = (fVar5 + (Global_113810.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113551++;
					fVar6 = (fVar6 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113552++;
					fVar7 = (fVar7 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113529 > 0)
	{
		if (Global_113546 == Global_113529)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113530 > 0)
	{
		if (Global_113547 == Global_113530)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113531 > 0)
	{
		if (Global_113548 == Global_113531)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113532 > 0)
	{
		if (Global_113549 == Global_113532)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113533 > 0)
	{
		if (((Global_113550 == Global_113533 || (Global_113533 * 10 / Global_113550) < 41) || Global_113550 > Global_113536) || Global_113550 == Global_113536)
		{
			if (!BitTest(Global_113810.f_10197.f_3856, 14))
			{
				if (Global_113550 == Global_113533)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113533, 0);
					MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113534 > 0)
	{
		if (Global_113551 == Global_113534)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113535 > 0)
	{
		if (Global_113552 == Global_113535)
		{
			fVar7 = 5f;
		}
	}
	Global_113810.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113550 > Global_113536 || Global_113550 == Global_113536)
	{
		iVar9 = Global_113536;
	}
	else
	{
		iVar9 = Global_113550;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113546, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113529, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113547, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113530, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113548, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113531, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113549, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113532, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113536, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113552 + Global_113551), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113535 + Global_113534), true);
	Global_113553 = (Global_113546 * 100 / Global_113529);
	Global_113555 = ((Global_113548 + Global_113547) * 100 / (Global_113531 + Global_113530));
	Global_113554 = ((Global_113549 + iVar9) * 100 / (Global_113532 + Global_113536));
	Global_113556 = ((Global_113551 + Global_113552) * 100 / (Global_113534 + Global_113535));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113810.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113553, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113554, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113555, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113810.f_10197.f_3853))
	{
		func_21(13, SYSTEM::FLOOR(Global_113810.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78689)
		{
			if (func_20() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113544 = 0;
				}
				if (!Global_63485)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()//Position - 0x19DA
{
	return Global_32283;
}

int func_21(int iParam0, int iParam1)//Position - 0x19E5
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

void func_22(int iParam0, bool bParam1, int iParam2)//Position - 0x1A36
{
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_23()//Position - 0x1A54
{
	return Global_1574918;
}

int func_24(int iParam0, int iParam1)//Position - 0x1A60
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

int func_25(int iParam0)//Position - 0x1DD4
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

void func_26(int iParam0)//Position - 0x1E03
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
		MISC::SET_BIT(&(Global_113810.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1E45
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1E65
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
		func_29();
	}
}

void func_29()//Position - 0x2037
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

int func_30()//Position - 0x214E
{
	func_31();
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

void func_31()//Position - 0x2194
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_34(PLAYER::PLAYER_PED_ID());
			if (func_33(iVar0) && (!func_32(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_33(Global_113810.f_2366.f_539.f_4321))
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

bool func_32(int iParam0)//Position - 0x2291
{
	return Global_43377 == iParam0;
}

bool func_33(int iParam0)//Position - 0x229F
{
	return iParam0 < 3;
}

int func_34(int iParam0)//Position - 0x22AB
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)//Position - 0x22E8
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)//Position - 0x230D
{
	return Global_2058[iParam0 /*29*/];
}

int func_37(int iParam0)//Position - 0x231C
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
		return BitTest(Global_113810.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)//Position - 0x235C
{
	MISC::SET_BIT(&(Global_113810.f_24998.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)//Position - 0x2377
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

int func_40()//Position - 0x2428
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_41(Var0);
	return uVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2445
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

int func_42(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x261F
{
	struct<15> Var0;
	bool bVar15;
	
	if (func_16(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != bParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113810.f_7691.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113810.f_7691.f_911 == Var0.f_0)
		{
			Global_113810.f_7691.f_911 = -1;
		}
		Var0.f_3 = func_44(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = bParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			MISC::SET_BIT(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_113810.f_7691[Global_113810.f_7691.f_136 /*15*/] = { Var0 };
		Global_113810.f_7691.f_136++;
		bVar15 = false;
		while (bVar15 < 3)
		{
			if (BitTest(iParam2, bVar15))
			{
				func_43(bVar15);
			}
			bVar15++;
		}
		return 1;
	}
	return 0;
}

void func_43(bool bParam0)//Position - 0x2799
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113810.f_7691.f_136)
	{
		if (BitTest(Global_113810.f_7691[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113810.f_7691[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113810.f_7691[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113810.f_7691.f_764)
	{
		if (BitTest(Global_113810.f_7691.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113810.f_7691.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113810.f_7691.f_919[bParam0] = iVar1;
}

int func_44(int iParam0)//Position - 0x2857
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_45()//Position - 0x28C1
{
	func_31();
	return Global_113810.f_2366.f_539.f_4321;
}

int func_46()//Position - 0x28DA
{
	return 1;
}

void func_47()//Position - 0x28E3
{
	switch (iLocal_134)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_51) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, false))
			{
				if (PED::IS_PED_IN_GROUP(iLocal_51))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_51);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51, false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_51, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_57, -1, 0, 1f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_63);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
				PED::SET_PED_KEEP_TASK(iLocal_51, true);
				func_111();
				SYSTEM::WAIT(0);
				func_71(&uLocal_176, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_134++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_57, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_55))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_55, iLocal_56, 10f, 786599);
						PED::SET_PED_KEEP_TASK(iLocal_55, true);
					}
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_57, true);
					iLocal_134++;
				}
			}
			break;
		
		case 2:
			iLocal_134++;
			break;
		
		case 3:
			iLocal_134++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_134++;
			}
			break;
		
		case 5:
			SYSTEM::SETTIMERA(0);
			func_13();
			break;
	}
}

void func_48()//Position - 0x2A2A
{
	switch (iLocal_134)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_175, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), iLocal_175);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f, 2, false);
				if (!PED::IS_PED_INJURED(iLocal_51) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, false))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_51))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_51);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51, false);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_51, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_57, -1, 0, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_63);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
					PED::SET_PED_KEEP_TASK(iLocal_51, true);
					func_111();
					SYSTEM::WAIT(0);
					func_71(&uLocal_176, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			SYSTEM::WAIT(2700);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_134++;
			break;
		
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) > 0.1f)
						{
							if (func_45() == 0)
							{
								func_71(&uLocal_176, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_45() == 1)
							{
								func_71(&uLocal_176, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_45() == 2)
							{
								func_71(&uLocal_176, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_134++;
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_57, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_55))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_55, iLocal_57, 10f, 786599);
						PED::SET_PED_KEEP_TASK(iLocal_55, true);
					}
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_57, true);
					iLocal_134++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_122 = true;
			}
			break;
	}
}

int func_49(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2C17
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

int func_50()//Position - 0x2CFC
{
	if (func_45() == 2)
	{
		if (func_10())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_32527)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_32527 = 1;
					if (!Global_32526)
					{
						Global_32526 = 1;
						return 1;
					}
				}
			}
			else if (Global_32527)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_32527 = 0;
			}
		}
	}
	return 0;
}

int func_51(struct<3> Param0)//Position - 0x2D77
{
	if (func_45() == 2)
	{
		if (func_10() && !Global_32525)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0) > (fLocal_45 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_32525 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_52()//Position - 0x2E04
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if ((((((func_56("REBU2_LV2_2") || func_56("REBU2_LV2_3")) || func_56("REBU2_LV2_4")) || func_56("REBU2_LV2_5")) || func_56("REBU2_LV2_6")) || func_56("REBU2_LV2_7")) || func_56("REBU2_LV2_8"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_51, true, 1);
			TASK::TASK_CLEAR_LOOK_AT(iLocal_51);
		}
		if (func_56("REBU2_LV2_9") || iLocal_70 > 1)
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_51, false, 1);
		}
	}
	if (func_70() && !func_12())
	{
		if (!func_53())
		{
			func_87(1);
		}
		switch (iLocal_70)
		{
			case 0:
				func_71(&uLocal_176, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_70++;
				break;
			
			case 1:
				iLocal_71 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_70++;
				break;
			
			case 2:
				if (iLocal_71 < MISC::GET_GAME_TIMER())
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_70++;
				}
				break;
			
			case 3:
				if (func_45() == 0)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_70++;
				break;
			
			case 4:
				iLocal_71 = MISC::GET_GAME_TIMER() + 500;
				iLocal_70++;
				break;
			
			case 5:
				if (iLocal_71 < MISC::GET_GAME_TIMER())
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_70++;
				}
				break;
			
			case 6:
				if (func_45() == 0)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_70++;
				break;
			
			case 7:
				func_71(&uLocal_176, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_70++;
				break;
			
			case 8:
				if (func_45() == 0)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_70++;
				break;
			
			case 9:
				func_71(&uLocal_176, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_70++;
				break;
			
			case 10:
				if (func_45() == 0)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_70++;
				break;
			
			case 11:
				func_71(&uLocal_176, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_70++;
				break;
			
			case 12:
				if (func_45() == 0)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_70++;
				break;
			
			case 13:
				func_71(&uLocal_176, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_70++;
				break;
			
			case 14:
				if (func_45() == 0)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_70++;
				break;
			
			case 15:
				func_71(&uLocal_176, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_70++;
				break;
			
			case 16:
				if (func_45() == 0)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_70++;
				break;
			
			case 17:
				iLocal_71 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_70++;
				break;
			
			case 18:
				if (iLocal_71 < MISC::GET_GAME_TIMER())
				{
					func_71(&uLocal_176, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_70++;
				}
				break;
			
			case 19:
				iLocal_71 = MISC::GET_GAME_TIMER() + 2500;
				iLocal_70++;
				break;
			
			case 20:
				if (iLocal_71 < MISC::GET_GAME_TIMER())
				{
					if (func_45() == 0)
					{
						func_71(&uLocal_176, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_45() == 1)
					{
						func_71(&uLocal_176, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_45() == 2)
					{
						func_71(&uLocal_176, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_70++;
				}
				break;
			}
	}
}

int func_53()//Position - 0x338A
{
	if (((((((((func_54("REBU2_WV") || func_54("REBU2_UNS1")) || func_54("REBU2_UNS2")) || func_54("REBU2_CULT")) || func_54("REBU2_NEAR")) || func_54("REBU2_WRONG")) || func_54("REBU2_STOP")) || func_54("REBU2_GETOUT")) || func_54("REBU2_JACK")) || func_54("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_54(char* sParam0)//Position - 0x341D
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_55()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_55()//Position - 0x3445
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21845 == 4)
	{
		return Global_21464;
	}
	return Var0;
}

int func_56(char* sParam0)//Position - 0x3469
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_57()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_57()//Position - 0x3491
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21845 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_22855);
		if (iVar6 > -1)
		{
			return Global_20713[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_58()//Position - 0x34D7
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (!iLocal_131)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) && PED::IS_PED_IN_VEHICLE(iLocal_51, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (!func_54("REBU2_LV2"))
					{
						func_87(0);
						func_111();
						SYSTEM::WAIT(0);
						func_71(&uLocal_176, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_131 = 1;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_51, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				iLocal_131 = 0;
			}
		}
		if (!iLocal_132)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_87(0);
				func_111();
				SYSTEM::WAIT(0);
				func_71(&uLocal_176, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_132 = 1;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_132 = 0;
		}
		if (!iLocal_133)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_87(0);
				func_111();
				SYSTEM::WAIT(0);
				func_71(&uLocal_176, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_133 = 1;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_133 = 0;
		}
	}
}

void func_59()//Position - 0x360A
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_62())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_51))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_51);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_51, 0, 4194304);
				}
				if (!iLocal_130)
				{
					func_87(0);
					func_111();
					SYSTEM::WAIT(0);
					iLocal_130 = 1;
					if (!func_61())
					{
						func_71(&uLocal_176, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_71(&uLocal_176, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_130 = 0;
				if (((TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_51);
				}
			}
		}
		else if (((!PED::IS_PED_IN_GROUP(iLocal_51) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, false)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, func_60());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
		}
	}
}

int func_60()//Position - 0x377E
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_61()//Position - 0x378E
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

int func_62()//Position - 0x37F9
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
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
			if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_63()//Position - 0x391B
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_51))
		{
			if (!iLocal_168)
			{
				iLocal_169 = MISC::GET_GAME_TIMER();
				iLocal_168 = 1;
			}
			else
			{
				iLocal_170 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_168 = 0;
		}
	}
	if ((iLocal_170 - iLocal_169) > 180000)
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_51))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_51);
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_51, Local_137, 100f, 100f, 100f, false, true, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_51, 1740.7965f, 4648.7563f, 42.6529f, 1f, -1, 0.25f, 0, 40000f);
					PED::SET_PED_KEEP_TASK(iLocal_51, true);
				}
				func_111();
				SYSTEM::WAIT(0);
				func_71(&uLocal_176, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()//Position - 0x39E0
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_171)
		{
			iLocal_172 = MISC::GET_GAME_TIMER();
			iLocal_171 = 1;
		}
		else
		{
			iLocal_173 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_171 = 0;
	}
	if ((iLocal_173 - iLocal_172) > 120000)
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_51))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_51);
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_51, Local_137, 100f, 100f, 100f, false, true, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_51, Local_137, 1f, -1, 0.25f, 0, 40000f);
					PED::SET_PED_KEEP_TASK(iLocal_51, true);
				}
				else
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_51, 0, 4194304);
				}
				func_111();
				SYSTEM::WAIT(0);
				func_71(&uLocal_176, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_65()//Position - 0x3AA0
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_VEHICLE(iLocal_51, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_112))
				{
					iLocal_112 = func_68(iLocal_51, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_135))
				{
					HUD::REMOVE_BLIP(&iLocal_135);
				}
			}
			else
			{
				if (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_112))
					{
						HUD::REMOVE_BLIP(&iLocal_112);
					}
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_135))
				{
					iLocal_135 = func_66(Local_137, 1);
				}
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_112))
		{
			iLocal_112 = func_68(iLocal_51, 0, 145);
		}
		if (!PED::IS_PED_IN_GROUP(iLocal_51))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 8f, 8f, 8f, false, true, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_51);
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, func_60());
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, true);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				TASK::CLEAR_PED_TASKS(iLocal_51);
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, func_60());
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, true);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 150f, 150f, 150f, false, true, 0))
		{
			func_4();
		}
	}
}

int func_66(struct<3> Param0, bool bParam3)//Position - 0x3C14
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_67(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_67(bool bParam0, float fParam1, float fParam2)//Position - 0x3C40
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_68(int iParam0, bool bParam1, int iParam2)//Position - 0x3C57
{
	int iVar0;
	
	iVar0 = func_69(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2058[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2058[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_69(int iParam0, bool bParam1, bool bParam2)//Position - 0x3CA1
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_67(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_67(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_67(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_70()//Position - 0x3D45
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_167 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_167, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_51, iLocal_167))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_71(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3D88
{
	func_86(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21852 = 0;
	Global_21854 = 0;
	Global_21859 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_2883585 = 0;
	return func_72(sParam2, iParam3, 0);
}

int func_72(char* sParam0, int iParam1, bool bParam2)//Position - 0x3DD6
{
	Global_21846 = 0;
	if (Global_21845 == 0 || Global_21847 == 2)
	{
		if (Global_21845 != 0)
		{
			if (iParam1 > Global_21847)
			{
				if (Global_21852 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20500.f_1 = 3;
					Global_21845 = 0;
					Global_21846 = 1;
					Global_21898 = 0;
					Global_21841 = 0;
					Global_21842 = 0;
					Global_21856 = 0;
					Global_21855 = 0;
					Global_20499 = 0;
				}
				else
				{
					func_85();
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
		if (func_84(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_83();
		Global_21134 = { Global_21299 };
		Global_21851 = Global_21852;
		Global_21858 = Global_21859;
		Global_2883586 = Global_2883585;
		Global_21860 = { Global_21876 };
		Global_21853 = Global_21854;
		Global_22835 = Global_22836;
		Global_22843 = { Global_22849 };
		Global_22837 = Global_22838;
		Global_22839 = Global_22840;
		Global_22841 = Global_22842;
		Global_21464.f_370 = Global_22834;
		Global_21464.f_368 = Global_22832;
		Global_21464.f_369 = Global_22833;
		Global_21841 = Global_21842;
		if (Global_21851)
		{
			MISC::CLEAR_BIT(&Global_8370, 20);
			MISC::CLEAR_BIT(&Global_8371, 17);
			MISC::CLEAR_BIT(&Global_8372, 0);
			if (bParam2)
			{
				func_82();
				if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20500.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20466 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_81())
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
				if (!Global_78689)
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
			if (func_80())
			{
				return 0;
			}
			else
			{
				switch (Global_20500.f_1)
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
				if (BitTest(Global_8370, 9))
				{
					return 0;
				}
			}
			func_79();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_78();
		func_73();
		return 1;
	}
	if (Global_21845 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21847 || iParam1 == Global_21847)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_85();
	}
	return 0;
}

void func_73()//Position - 0x40A6
{
	if (!func_74())
	{
		return;
	}
	if (Global_21851)
	{
		MemCopy(&(Global_1978312.f_1), {Global_21464}, 4);
		Global_1978312 = Global_7685;
		Global_1978312.f_6 = Global_21855;
	}
}

int func_74()//Position - 0x40DD
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_77())
	{
		return 0;
	}
	if (func_75(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_75(int iParam0)//Position - 0x4140
{
	return func_76(iParam0, 20);
}

var func_76(int iParam0, int iParam1)//Position - 0x4150
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_77()//Position - 0x4168
{
	return -1;
}

void func_78()//Position - 0x4171
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21845 = 1;
}

void func_79()//Position - 0x41A1
{
	Global_21898 = Global_21897;
	Global_21892 = Global_21893;
	Global_21939 = { Global_21927 };
	Global_21945 = { Global_21933 };
	Global_21900 = Global_21899;
	Global_21969 = { Global_21951 };
	Global_21975 = { Global_21957 };
	Global_21981 = { Global_21963 };
	Global_21987 = { Global_21993 };
	Global_7685 = Global_7686;
	Global_7687 = Global_7688;
	Global_21856 = Global_21857;
	Global_21858 = Global_21859;
	Global_21860 = { Global_21876 };
	Global_21849 = Global_21850;
	Global_22861 = 0;
	Global_21894 = 0;
	Global_21895 = 0;
	MISC::CLEAR_BIT(&Global_8371, 16);
}

int func_80()//Position - 0x4236
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()//Position - 0x425D
{
	int iVar0;
	int iVar1;
	
	if (Global_78689)
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

void func_82()//Position - 0x42F6
{
	if (func_32(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[0 /*29*/])
			{
				Global_20500 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[1 /*29*/])
			{
				Global_20500 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[2 /*29*/])
			{
				Global_20500 = 2;
			}
			else
			{
				Global_20500 = 0;
			}
		}
	}
	else
	{
		Global_20500 = func_45();
		if (Global_20500 == 145)
		{
			Global_20500 = 3;
		}
		if (Global_78689)
		{
			Global_20500 = 3;
		}
		if (Global_20500 > 3)
		{
			Global_20500 = 3;
		}
	}
}

void func_83()//Position - 0x4398
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21134[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21134[iVar0 /*10*/].f_1), "", 24);
		Global_21134[iVar0 /*10*/].f_7 = 0;
		Global_21134[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21134.f_161 = -99;
	Global_21134.f_162 = { 0f, 0f, 0f };
}

bool func_84(int iParam0, int iParam1)//Position - 0x43EE
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

void func_85()//Position - 0x4426
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1 == 9) || Global_20499 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
		Global_20500.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

void func_86(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x447D
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
	StringCopy(&Global_21915, sParam2, 24);
	Global_22834 = iParam5;
	if (iParam3 == 0)
	{
		Global_22832 = 1;
		Global_22830 = 0;
	}
	else
	{
		Global_22832 = 0;
		Global_22830 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22833 = 1;
		Global_22831 = 0;
	}
	else
	{
		Global_22833 = 0;
		Global_22831 = 1;
	}
}

void func_87(bool bParam0)//Position - 0x44D3
{
	if (bParam0)
	{
		if (iLocal_147)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_154))
			{
				if (func_90(&uLocal_176, "REBU2AU", &Local_154, &Local_148, 8, 0, 0))
				{
					iLocal_147 = 0;
				}
			}
			else
			{
				iLocal_147 = 0;
			}
		}
	}
	else if ((!iLocal_147 && func_12()) && !func_53())
	{
		Local_154 = { func_55() };
		Local_148 = { func_57() };
		func_88();
		iLocal_147 = 1;
	}
}

void func_88()//Position - 0x453F
{
	Global_20711 = 0;
	func_89();
}

void func_89()//Position - 0x454F
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22856 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

bool func_90(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4573
{
	func_86(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21852 = 0;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 1;
	StringCopy(&Global_22849, sParam3, 24);
	Global_2883585 = 0;
	return func_72(sParam2, iParam4, 0);
}

void func_91()//Position - 0x45C7
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			PED::SET_PED_RESET_FLAG(iLocal_51, 394, true);
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), true))
		{
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_51, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_51, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_55))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_175, joaat("PLAYER"));
				TASK::TASK_COMBAT_PED(iLocal_55, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_55, true);
			}
			func_111();
			SYSTEM::WAIT(0);
			func_71(&uLocal_176, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), true))
			{
				if (!PED::IS_PED_INJURED(iLocal_51))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_51, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_51, true);
				}
				if (!PED::IS_PED_INJURED(iLocal_55))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_175, joaat("PLAYER"));
					TASK::TASK_COMBAT_PED(iLocal_55, PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_55, true);
				}
				func_111();
				SYSTEM::WAIT(0);
				func_71(&uLocal_176, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_49 = 4;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_51, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_51, true);
			func_111();
			SYSTEM::WAIT(0);
			func_71(&uLocal_176, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
	}
}

void func_92()//Position - 0x4740
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 1.2f, 1.2f, 5f, false, true, 0) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_49(1, 0, 1))
			{
				bLocal_128 = true;
				if (!iLocal_113)
				{
					func_99(1, 1, 1, 0, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 24);
					HUD::CLEAR_HELP(true);
					HUD::DISPLAY_HUD(false);
					HUD::DISPLAY_RADAR(false);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
						if (FIRE::IS_ENTITY_ON_FIRE(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							func_98(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 200f);
						}
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_51, 5f, 5f, 5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_86, 5f, 5f, 5f, false, true, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(iLocal_51, true) - Vector(0f, 3f, 5f), false, false, false, true);
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
					{
						if (FIRE::IS_ENTITY_ON_FIRE(iLocal_56))
						{
							func_98(iLocal_56);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_56, 200f);
						}
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_56, iLocal_51, 8f, 8f, 8f, false, true, 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_56, Local_86, false, false, false, true);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_56, false))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_56, 5f);
							}
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_51))
					{
						iLocal_167 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_51, true), 5f, 0, 2);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_167, false))
						{
							if (FIRE::IS_ENTITY_ON_FIRE(iLocal_167))
							{
								func_98(iLocal_167);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_167, 200f);
							}
							ENTITY::SET_ENTITY_COORDS(iLocal_167, ENTITY::GET_ENTITY_COORDS(iLocal_51, true) + Vector(0f, 5f, 5f), true, false, false, true);
						}
					}
					FIRE::STOP_FIRE_IN_RANGE(Local_76, 10f);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_76, 10f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_76, 4.5f, false, false, false, false, false, false, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_51, Local_76, true, false, false, true);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_76, true, false, false, true);
					if (!PED::IS_PED_INJURED(iLocal_51))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_52)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[iVar0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_52[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_51, false), 1.5f, 1.5f, 1.5f, false, true, 0))
							{
								PED::DELETE_PED(&(iLocal_52[iVar0]));
							}
						}
						iVar0++;
					}
					if (!PED::IS_PED_INJURED(iLocal_51))
					{
						iLocal_341 = PED::CREATE_SYNCHRONIZED_SCENE(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						iLocal_75 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_75, iLocal_341, "untie_cam", "random@burial");
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 162.6699f, 6839.238f, 18.8314f, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 18.2311f);
						ENTITY::SET_ENTITY_HEALTH(iLocal_51, 200, 0);
						PED::SET_ENABLE_HANDCUFFS(iLocal_51, false);
						PED::SET_ENABLE_BOUND_ANKLES(iLocal_51, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_51);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51, iLocal_341, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_51, false, false);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_341, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_59[0], iLocal_341, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1000f);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_59[1], iLocal_341, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1000f);
						CAM::SET_CAM_ACTIVE(iLocal_75, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						iLocal_118 = MISC::GET_GAME_TIMER();
						iLocal_113 = 1;
					}
				}
			}
		}
	}
	if (iLocal_113 && !iLocal_115)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_341))
		{
			if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_341) > 0.115f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_341) < 0.12f) || (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_341) > 0.355f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_341) < 0.36f))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", true);
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_341) > 0.6f)
			{
				if (!iLocal_114)
				{
					func_111();
					SYSTEM::WAIT(0);
					if (func_71(&uLocal_176, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_114 = 1;
					}
				}
			}
		}
		iLocal_117 = MISC::GET_GAME_TIMER();
		if (((iLocal_117 - iLocal_118) > 9700 && !iLocal_121) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
			iLocal_121 = 1;
		}
		if ((iLocal_117 - iLocal_118) > 10000)
		{
			iLocal_115 = 1;
		}
		if (func_96(1000))
		{
			func_111();
			CAM::DO_SCREEN_FADE_OUT(800);
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_115 = 1;
			bLocal_116 = true;
		}
	}
	if (iLocal_115 && !bLocal_120)
	{
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 1f);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 162.5284f, 6839.658f, 18.8198f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 256.7693f);
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_51);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_51, false, false);
			PED::SET_PED_CAN_RAGDOLL(iLocal_51, true);
			ENTITY::SET_ENTITY_COORDS(iLocal_51, 164.4963f, 6839.3335f, 18.9657f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_51, 73.449f);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(26.1578f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8.1198f, 1f);
		CAM::SET_CAM_ACTIVE(iLocal_75, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_75, false);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		if (bLocal_116)
		{
			CAM::DO_SCREEN_FADE_IN(800);
			while (CAM::IS_SCREEN_FADING_IN())
			{
				SYSTEM::WAIT(0);
			}
		}
		bLocal_120 = true;
	}
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (bLocal_120)
		{
			if (!iLocal_119)
			{
				if (!func_12())
				{
					if (func_45() == 0)
					{
						func_71(&uLocal_176, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_45() == 1)
					{
						func_71(&uLocal_176, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_45() == 2)
					{
						func_71(&uLocal_176, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_175, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_175);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 20f, 20f, 20f, false, true, 0) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PLAYER::GET_PLAYERS_LAST_VEHICLE()) > 0)
						{
							TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
						}
						else if (!PED::IS_PED_IN_GROUP(iLocal_51))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, func_60());
							PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, true);
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
						}
					}
					else if (!PED::IS_PED_IN_GROUP(iLocal_51))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, func_60());
						PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, true);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_63);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
					if (HUD::DOES_BLIP_EXIST(iLocal_112))
					{
						HUD::REMOVE_BLIP(&iLocal_112);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_135))
					{
						iLocal_135 = func_66(Local_137, 1);
					}
					if (func_45() == 2 && !func_9())
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_136))
						{
							iLocal_136 = func_66(Local_140, 0);
							HUD::SET_BLIP_SPRITE(iLocal_136, 269);
							func_94();
						}
					}
					func_93();
					iLocal_129 = 1;
					iLocal_119 = 1;
					SYSTEM::SETTIMERA(0);
					VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, false, true);
					func_99(0, 1, 1, 0, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 4);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
					iLocal_47 = 4;
				}
			}
		}
	}
}

void func_93()//Position - 0x4F2E
{
	if (!func_9())
	{
		if (func_45() == 2)
		{
			Global_32522 = 1;
		}
	}
}

void func_94()//Position - 0x4F4A
{
	if (func_45() == 2)
	{
		if (!Global_32524)
		{
			func_95("CULT_BLIP_HELP" /* GXT: Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~ */, -1);
			Global_32524 = 1;
		}
	}
}

void func_95(char* sParam0, int iParam1)//Position - 0x4F6E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_96(int iParam0)//Position - 0x4F85
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
			if (func_97())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_97()//Position - 0x4FCF
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

void func_98(int iParam0)//Position - 0x5001
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				FIRE::STOP_ENTITY_FIRE(iParam0);
				ENTITY::SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_HEALTH(iParam0) + 200, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) + 200f));
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) + 200f));
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 5f);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2.5f, true, false, false, false);
			}
		}
	}
}

void func_99(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x507F
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_107(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20500.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_80())
			{
				Global_20500.f_1 = 3;
			}
			Global_21845 = 5;
		}
		func_106(1, bParam3, iParam2, 0);
		Global_63491 = 1;
		Global_75819 = 1;
		Global_78687 = 1;
	}
	else
	{
		func_107(0);
		HUD::THEFEED_RESUME();
		Global_63491 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_106(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_104(PLAYER::PLAYER_ID())) && !func_101(PLAYER::PLAYER_ID(), 0)) && !func_100()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_104(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78687 = 0;
	}
}

bool func_100()//Position - 0x51CC
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

bool func_101(int iParam0, int iParam1)//Position - 0x51E6
{
	bool bVar0;
	
	if (!func_103(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_102(-1, 0) == 8;
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

int func_102(int iParam0, bool bParam1)//Position - 0x523F
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_103(var uParam0)//Position - 0x5280
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

int func_104(int iParam0)//Position - 0x52A2
{
	if (func_101(iParam0, 0))
	{
		return 1;
	}
	if (func_105())
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

bool func_105()//Position - 0x52E1
{
	return BitTest(Global_2621446, 3);
}

int func_106(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x52EF
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

void func_107(int iParam0)//Position - 0x5322
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

void func_108()//Position - 0x5345
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, false))
	{
		switch (iLocal_166)
		{
			case 0:
				if (iLocal_104 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_176, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_104 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_166++;
					}
				}
				break;
			
			case 1:
				if (iLocal_104 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_176, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_104 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_166++;
					}
				}
				break;
			
			case 2:
				if (iLocal_104 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_176, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_104 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_166++;
					}
				}
				break;
			
			case 3:
				if (iLocal_104 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_176, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_104 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_166 = 0;
					}
				}
				break;
			}
	}
}

void func_109(int iParam0, char* sParam1, int iParam2)//Position - 0x544C
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_110(iParam2), 1);
}

int func_110(int iParam0)//Position - 0x5463
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

void func_111()//Position - 0x5658
{
	Global_20711 = 0;
	func_112();
}

void func_112()//Position - 0x5668
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
	}
}

void func_113()//Position - 0x5689
{
	if (!iLocal_65 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_105, 30f, 30f, 30f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_52[1]))
		{
			if (func_71(&uLocal_176, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_65 = 1;
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_52[0]))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_52[0], iLocal_56, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, true);
			PED::SET_PED_KEEP_TASK(iLocal_52[0], true);
		}
		if (!PED::IS_PED_INJURED(iLocal_52[1]))
		{
			TASK::TASK_ENTER_VEHICLE(iLocal_52[1], iLocal_56, -1, 0, 3f, 1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_52[1], true);
		}
	}
	else
	{
		iLocal_62 = 0;
		while (iLocal_62 <= 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_52[iLocal_62]))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_52[iLocal_62], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_52[iLocal_62], true);
			}
			iLocal_62++;
		}
	}
	SYSTEM::WAIT(0);
	func_4();
}

void func_114()//Position - 0x5794
{
	if (!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1]))
	{
		if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_52[0]) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_52[1]))
		{
			if (func_71(&uLocal_176, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!PED::IS_PED_SHOOTING(iLocal_52[1]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_52[1]);
					TASK::TASK_SHOOT_AT_ENTITY(iLocal_52[1], PLAYER::PLAYER_PED_ID(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
	iLocal_47 = 7;
}

void func_115()//Position - 0x5814
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1]))
	{
		if (!iLocal_67)
		{
			if (!iLocal_66)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_52[1], iLocal_63);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
				iLocal_66 = 1;
			}
			if (PED::IS_PED_FACING_PED(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 90f))
			{
				func_111();
				SYSTEM::WAIT(0);
				func_71(&uLocal_176, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1]))
				{
					fVar0 = func_117(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					ENTITY::DETACH_ENTITY(iLocal_58, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_58, iLocal_52[0], PED::GET_PED_BONE_INDEX(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					TASK::CLEAR_PED_TASKS(iLocal_52[0]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_PLAY_ANIM(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0f, false, false, false);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_52[0], iLocal_63);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52[1], joaat("WEAPON_SAWNOFFSHOTGUN"), true);
					TASK::CLEAR_PED_TASKS(iLocal_52[1]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fVar0, 1f, 2f, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_52[1], iLocal_63);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
					iLocal_67 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						ENTITY::DETACH_ENTITY(iLocal_58, true, true);
					}
				}
			}
		}
		if (iLocal_67 && !iLocal_163)
		{
			if (func_71(&uLocal_176, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 3.5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_52[1], iLocal_63);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
				AUDIO::TRIGGER_MUSIC_EVENT("RE6_START");
				iLocal_163 = 1;
			}
		}
		if (iLocal_163 && !iLocal_164)
		{
			if (func_71(&uLocal_176, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[0], 30f, 30f, 30f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[1], 30f, 30f, 30f, false, true, 0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_52[0], PLAYER::PLAYER_PED_ID(), -1, false);
				}
				iLocal_164 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		if (iLocal_164 && !bLocal_165)
		{
			if (SYSTEM::TIMERB() > 15000 && !func_12())
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[0], 30f, 30f, 30f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[1], 30f, 30f, 30f, false, true, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 0);
					func_71(&uLocal_176, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_165 = true;
				}
			}
		}
		if (((!iLocal_68 && iLocal_163) && !PED::IS_PED_INJURED(iLocal_52[0])) && !PED::IS_PED_INJURED(iLocal_52[1]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[0], 30f, 30f, 30f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[1], 30f, 30f, 30f, false, true, 0))
			{
				if (!func_12())
				{
					if (func_116())
					{
						func_71(&uLocal_176, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_71(&uLocal_176, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_52[1], -1, 2f, 1f, 2f, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_52[1], 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_52[0], iLocal_63);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_52[0], -1, 2f, 1f, 2f, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_52[0], 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_52[1], iLocal_63);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
				SYSTEM::SETTIMERB(15000);
				iLocal_143 = 0;
				iLocal_164 = 1;
				iLocal_68 = 1;
			}
		}
		if (bLocal_165)
		{
			func_11();
			func_119();
		}
		if (((PED::CAN_PED_SEE_HATED_PED(iLocal_52[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_52[1], PLAYER::PLAYER_PED_ID())) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_52[0])) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_52[1]))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3))
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_74)
					{
						func_111();
						SYSTEM::WAIT(0);
						if (func_71(&uLocal_176, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_74 = 1;
							func_119();
						}
					}
				}
			}
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_74)
					{
						func_111();
						SYSTEM::WAIT(0);
						if (func_71(&uLocal_176, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_74 = 1;
							func_119();
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_119();
			}
		}
	}
}

int func_116()//Position - 0x5E05
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_117(int iParam0, int iParam1, bool bParam2)//Position - 0x5E23
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

int func_118()//Position - 0x5E81
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if ((((PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("annihilator"))) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("buzzard"))) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_119()//Position - 0x5F09
{
	func_11();
	AUDIO::TRIGGER_MUSIC_EVENT("RE6_START");
	if (!iLocal_143)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_52[0]))
			{
				PED::SET_PED_RESET_FLAG(iLocal_52[0], 156, true);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_52[0]);
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_58))
					{
						if (!iLocal_68)
						{
							ENTITY::DETACH_ENTITY(iLocal_58, false, true);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_58, iLocal_52[0], PED::GET_PED_BONE_INDEX(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							TASK::CLEAR_PED_TASKS(iLocal_52[0]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_PLAY_ANIM(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0f, false, false, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_52[0], iLocal_63);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
							PED::SET_PED_KEEP_TASK(iLocal_52[0], true);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_52[0], false, false);
							iLocal_143 = 1;
						}
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_52[0], iLocal_63);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
						PED::SET_PED_KEEP_TASK(iLocal_52[0], true);
						iLocal_143 = 1;
					}
				}
			}
			else
			{
				iLocal_143 = 1;
			}
		}
		else
		{
			iLocal_143 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_58))
		{
			if (!PED::IS_PED_INJURED(iLocal_52[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						ENTITY::DETACH_ENTITY(iLocal_58, true, true);
					}
				}
			}
		}
	}
	if (!iLocal_144)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_52[1]))
			{
				PED::SET_PED_RESET_FLAG(iLocal_52[1], 156, true);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_52[1]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_63);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_63);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_52[1], iLocal_63);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_63);
				PED::SET_PED_KEEP_TASK(iLocal_52[1], true);
				iLocal_144 = 1;
			}
			else
			{
				iLocal_144 = 1;
			}
		}
		else
		{
			iLocal_144 = 1;
		}
	}
	if (iLocal_144 && iLocal_143)
	{
		iLocal_104 = MISC::GET_GAME_TIMER() + 8500;
		SYSTEM::SETTIMERA(0);
		iLocal_47 = 7;
	}
}

int func_120(int iParam0)//Position - 0x6142
{
	if (func_123())
	{
		Global_113800 = 1;
		Global_113797 = MISC::GET_GAME_TIMER();
		if (func_25(Global_113799))
		{
			func_121(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_25(Global_113799))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_121(int iParam0)//Position - 0x6195
{
	switch (iParam0)
	{
		case 0:
			if (Global_113810.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_95(func_122(iParam0), -1);
					Global_113810.f_24998.f_2++;
					MISC::SET_BIT(&Global_113806, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113806, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_95(func_122(iParam0), -1);
					Global_113810.f_24998.f_3++;
					MISC::SET_BIT(&Global_113806, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113806, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_95(func_122(iParam0), -1);
					Global_113810.f_24998.f_4++;
					MISC::SET_BIT(&Global_113806, 2);
				}
			}
			break;
	}
}

char* func_122(int iParam0)//Position - 0x6270
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

int func_123()//Position - 0x62B2
{
	switch (func_124(&Global_32343, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_124(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x62E8
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98291.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_128(0))
		{
			return 0;
		}
		Global_43341++;
		*uParam0 = Global_43341;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23251.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43377 = iParam2;
		Global_43339 = *uParam0;
		Global_43340 = iParam4;
		Global_43338 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43338 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43338)
			{
				if (Global_43344[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43339 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_126(iParam2))
		{
			return 0;
		}
		if (Global_43338 == 8)
		{
			return 0;
		}
		Global_43341++;
		*uParam0 = Global_43341;
		Global_43344[Global_43338 /*4*/] = Global_43341;
		Global_43344[Global_43338 /*4*/].f_1 = iParam1;
		Global_43344[Global_43338 /*4*/].f_2 = iParam2;
		Global_43344[Global_43338 /*4*/].f_3 = 0;
		Global_43338++;
		if (iParam4 != 0)
		{
			func_125(uParam0, iParam4);
		}
	}
	return 2;
}

void func_125(var uParam0, int iParam1)//Position - 0x641F
{
	int iVar0;
	
	if (Global_43338 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43338)
	{
		if (Global_43344[iVar0 /*4*/] == *uParam0)
		{
			Global_43344[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_126(int iParam0)//Position - 0x646E
{
	return func_127(iParam0, Global_43377);
}

int func_127(int iParam0, int iParam1)//Position - 0x647F
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

int func_128(int iParam0)//Position - 0x6660
{
	if (Global_43377 == 15)
	{
		return 0;
	}
	if (func_126(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_129()//Position - 0x6682
{
	if (HUD::DOES_BLIP_EXIST(iLocal_161))
	{
		HUD::REMOVE_BLIP(&iLocal_161);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_112))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, false))
		{
			iLocal_112 = func_68(iLocal_51, 0, 145);
		}
	}
	iLocal_62 = 0;
	while (iLocal_62 <= 1)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_109[iLocal_62]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_52[iLocal_62], false))
			{
				iLocal_109[iLocal_62] = func_68(iLocal_52[iLocal_62], 1, 145);
			}
		}
		iLocal_62++;
	}
}

void func_130()//Position - 0x66FB
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		switch (iLocal_166)
		{
			case 0:
				if (iLocal_104 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_176, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_104 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_166++;
					}
				}
				break;
			
			case 1:
				if (iLocal_104 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_176, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_104 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_166++;
					}
				}
				break;
			
			case 2:
				if (iLocal_104 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_176, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_104 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_166++;
					}
				}
				break;
			
			case 3:
				if (iLocal_104 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_176, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_104 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_166 = 0;
					}
				}
				break;
			}
	}
}

void func_131()//Position - 0x6805
{
	switch (iLocal_108)
	{
		case 0:
			if (func_71(&uLocal_176, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_108++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_71(&uLocal_176, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_108++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_71(&uLocal_176, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_108++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_71(&uLocal_176, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_108++;
				}
			}
			break;
		
		case 4:
			iLocal_104 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_108++;
			break;
		
		case 5:
			break;
	}
}

void func_132()//Position - 0x68D9
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_58))
		{
			if (!PED::IS_PED_INJURED(iLocal_52[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial_stop") > 0.124f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") < 0.127f)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_burial_dirt", iLocal_58, 0f, 0f, -0.95f, 0f, 180f, 0f, 1f, false, false, false);
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52[0], "random@burial", "a_burial", 3))
				{
					if (((((ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") > 0.04f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") < 0.043f) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") > 0.24f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") < 0.243f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") > 0.44f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") < 0.443f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") > 0.64f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") < 0.643f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") > 0.84f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") < 0.843f))
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_burial_dirt", iLocal_58, 0f, 0f, -0.95f, 0f, 180f, 0f, 1f, false, false, false);
					}
				}
			}
		}
	}
}

int func_133()//Position - 0x6AAC
{
	if (!iLocal_127)
	{
		if (MISC::IS_BULLET_IN_AREA(Local_86, 100f, true) || MISC::IS_BULLET_IN_AREA(Local_86, 100f, true))
		{
			if (PED::IS_PED_INJURED(iLocal_52[0]) || PED::IS_PED_INJURED(iLocal_52[1]))
			{
				iLocal_49 = 1;
				return 1;
			}
			else if (!MISC::IS_BULLET_IN_AREA(Local_86, 100f, true) || !MISC::IS_BULLET_IN_AREA(Local_86, 100f, true))
			{
				iLocal_49 = 1;
				return 1;
			}
		}
		if (((((((((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_STICKYBOMB"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_GRENADELAUNCHER"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_GRENADELAUNCHER_SMOKE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_RPG"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_MOLOTOV"), true)) || FIRE::IS_EXPLOSION_IN_AREA(2, Local_86 - Vector(100f, 100f, 100f), Local_86 + Vector(100f, 100f, 100f))) || FIRE::IS_EXPLOSION_IN_AREA(4, Local_86 - Vector(100f, 100f, 100f), Local_86 + Vector(100f, 100f, 100f))) || FIRE::IS_EXPLOSION_IN_AREA(0, Local_86 - Vector(100f, 100f, 100f), Local_86 + Vector(100f, 100f, 100f)))
		{
			iLocal_49 = 1;
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_56, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_56, false))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_56);
					func_119();
					iLocal_49 = 3;
					return 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_56))
						{
							func_119();
							iLocal_49 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_73)
		{
			if (!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1]))
			{
				if ((((PED::CAN_PED_SEE_HATED_PED(iLocal_52[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_52[1], PLAYER::PLAYER_PED_ID())) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_52[0])) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_52[1])) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86 - Vector(0f, 0f, 7f), 20f, 15f, 35f, false, true, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86 - Vector(0f, 0f, 7f), 28f, 18f, 35f, false, true, 0))
					{
						iLocal_49 = 1;
						return 1;
					}
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_52[0]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_52[1]))
					{
						iLocal_49 = 5;
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), false) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_51, joaat("WEAPON_STUNGUN"), 0))
			{
				iLocal_49 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_49 = 4;
			return 1;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_52[0], false) || ENTITY::IS_ENTITY_DEAD(iLocal_52[1], false))
		{
			iLocal_49 = 6;
			return 1;
		}
		if (iLocal_73)
		{
			return 1;
		}
	}
	return 0;
}

int func_134(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x6F4B
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fVar9 = SYSTEM::VDIST(Var3, Var6);
			if (!BitTest(uParam3, 3))
			{
				if (func_140(iParam0, iParam6))
				{
					func_139("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_139("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_138(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var6, fParam5, true))
				{
					func_139("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_139("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_138(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), false))
				{
					func_139("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_139("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_138(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								func_139("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_139("	aggro Ped knows player is pointing gun\n");
								func_135("		lockOnTimer = ", *uParam2);
								func_139("\n");
								func_135("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_17));
								func_139("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_17 + *uParam2))
								{
									func_139("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_138(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!BitTest(uParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_139("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_139("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_138(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_17 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

void func_135(char* sParam0, int iParam1)//Position - 0x719D
{
	func_137(sParam0);
	func_136(iParam1);
}

void func_136(int iParam0)//Position - 0x71B1
{
	if (iParam0 > 0)
	{
	}
}

void func_137(char* sParam0)//Position - 0x71BF
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_138(int iParam0)//Position - 0x71D2
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0);
}

void func_139(char* sParam0)//Position - 0x71E0
{
	func_137(sParam0);
}

int func_140(int iParam0, int iParam1)//Position - 0x71EE
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		if ((PED::GET_PED_MAX_HEALTH(iParam0) - ENTITY::GET_ENTITY_HEALTH(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_141()//Position - 0x723B
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_143(39, 1);
	func_143(40, 1);
	func_143(41, 1);
	func_143(42, 1);
	func_143(43, 1);
	func_143(44, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_137 - Vector(20f, 40f, 40f), Local_137 + Vector(20f, 40f, 40f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_76 - Vector(20f, 50f, 60f), Local_76 + Vector(20f, 50f, 50f), false, true, true, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_103, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	iLocal_51 = PED::CREATE_PED(26, iLocal_100, Local_76, fLocal_95, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_51, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_51, 2, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_51, 128, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_51, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_51, 6, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_51, 206, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_51, 318, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_51, 118, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_51, 208, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_100);
	ENTITY::SET_ENTITY_HEALTH(iLocal_51, iLocal_123, 0);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PLAYER::PLAYER_PED_ID(), false);
	PED::ADD_RELATIONSHIP_GROUP("rghKidnappers", &iLocal_174);
	PED::ADD_RELATIONSHIP_GROUP("rghVictim", &iLocal_175);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_51, iLocal_175);
	iLocal_62 = 0;
	while (iLocal_62 <= 1)
	{
		iLocal_52[iLocal_62] = PED::CREATE_PED(26, iLocal_101, Local_79[iLocal_62 /*3*/], fLocal_96[iLocal_62], true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52[iLocal_62], true);
		PED::SET_PED_AS_ENEMY(iLocal_52[iLocal_62], true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52[iLocal_62], 0, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_52[iLocal_62], 2, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_52[iLocal_62], 128, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_52[iLocal_62], 42, true);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_52[0], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52[0], 50, true);
		PED::SET_PED_SHOOT_RATE(iLocal_52[iLocal_62], 50);
		PED::SET_PED_ACCURACY(iLocal_52[iLocal_62], 13);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_52[iLocal_62], true, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_52[iLocal_62], iLocal_174);
		PED::SET_PED_MONEY(iLocal_52[iLocal_62], MISC::GET_RANDOM_INT_IN_RANGE(800, 2000));
		iLocal_62++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_102);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_101);
	PED::SET_PED_SHOOT_RATE(iLocal_52[1], 100);
	PED::SET_PED_FIRING_PATTERN(iLocal_52[1], joaat("FIRING_PATTERN_BURST_FIRE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_174, joaat("PLAYER"));
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_52[0], joaat("WEAPON_PISTOL"), -1, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_52[1], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, false, true);
	iLocal_56 = VEHICLE::CREATE_VEHICLE(iLocal_103, Local_86, fLocal_99, true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_56, 5f);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_56, 3);
	VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_56, 5, false, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_103);
	iLocal_58 = OBJECT::CREATE_OBJECT(joaat("prop_ld_shovel"), Local_105, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shovel"));
	iLocal_59[0] = OBJECT::CREATE_OBJECT(joaat("p_arm_bind_cut_s"), Local_105, true, true, false);
	iLocal_59[1] = OBJECT::CREATE_OBJECT(joaat("p_arm_bind_cut_s"), Local_105 + Vector(1f, 1f, 1f), true, true, false);
	STREAMING::REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_58, iLocal_52[0], PED::GET_PED_BONE_INDEX(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_52[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_52[0], 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_52[0], 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_52[1], 0, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_52[1], 3, 2, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_52[1], 4, 1, 1, 0);
	Var0 = { Local_76 };
	Var3 = { -2f, -4f, 18f };
	iLocal_341 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51, iLocal_341, "random@burial", "b_burial", 4f, -4f, 1, 0, 1000f, 0);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_59[0], iLocal_341, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1000f);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_59[1], iLocal_341, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1000f);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_341, true);
	PED::SET_PED_KEEP_TASK(iLocal_51, true);
	TASK::TASK_PLAY_ANIM(iLocal_52[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(iLocal_52[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0f, false, false, false);
	PED::SET_PED_ANGLED_DEFENSIVE_AREA(iLocal_52[0], Local_89, Local_92, 2.75f, false, false);
	PED::SET_PED_ANGLED_DEFENSIVE_AREA(iLocal_52[1], Local_89, Local_92, 2.75f, false, false);
	if (func_45() == 0)
	{
		func_142(&uLocal_176, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_45() == 1)
	{
		func_142(&uLocal_176, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_45() == 2)
	{
		func_142(&uLocal_176, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_52[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_52[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_51, "KIDNAPPEDFEMALE");
	func_142(&uLocal_176, 4, iLocal_52[0], "KIDNAPPER2", 0, 1);
	func_142(&uLocal_176, 3, iLocal_52[1], "KIDNAPPER1", 0, 1);
	func_142(&uLocal_176, 5, iLocal_51, "KIDNAPPEDFEMALE", 0, 1);
}

void func_142(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x774C
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78689)
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

void func_143(int iParam0, bool bParam1)//Position - 0x77E7
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
		func_144(iParam0, 2, 1);
	}
}

void func_144(int iParam0, int iParam1, bool bParam2)//Position - 0x781E
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_20() == 0)
		{
			iVar0 = func_148(func_149(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_145(func_149(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

void func_145(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x788E
{
	int iVar0;
	
	iVar0 = func_146(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_146(int iParam0, var uParam1)//Position - 0x78B1
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_147(uParam1));
}

int func_147(var uParam0)//Position - 0x78C6
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_148(int iParam0, int iParam1)//Position - 0x78FA
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_146(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x7929
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
			return 12514;
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
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		case 60:
			return 11901;
			break;
		
		default:
			break;
	}
	return 14385;
}

void func_150(int iParam0, int iParam1, bool bParam2)//Position - 0x7CD1
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_20() == 0)
		{
			iVar0 = func_148(func_149(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_145(func_149(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

int func_151(int iParam0, int iParam1, bool bParam2)//Position - 0x7D41
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100885.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_20() == 0)
		{
			return BitTest(func_148(func_149(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113810.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_152()//Position - 0x7DA1
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_153()//Position - 0x7E0E
{
	STREAMING::REQUEST_MODEL(iLocal_100);
	STREAMING::REQUEST_MODEL(iLocal_102);
	STREAMING::REQUEST_MODEL(iLocal_101);
	STREAMING::REQUEST_MODEL(iLocal_103);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shovel"));
	STREAMING::REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
	STREAMING::REQUEST_ANIM_DICT("random@burial");
	STREAMING::REQUEST_PTFX_ASSET();
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1);
	AUDIO::PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_100) && STREAMING::HAS_MODEL_LOADED(iLocal_102)) && STREAMING::HAS_MODEL_LOADED(iLocal_101)) && STREAMING::HAS_MODEL_LOADED(iLocal_103)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shovel"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_arm_bind_cut_s"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@burial")) && STREAMING::HAS_PTFX_ASSET_LOADED()) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1)) && AUDIO::PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS"))
	{
		bLocal_50 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_100);
		STREAMING::REQUEST_MODEL(iLocal_102);
		STREAMING::REQUEST_MODEL(iLocal_101);
		STREAMING::REQUEST_MODEL(iLocal_103);
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shovel"));
		STREAMING::REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
		STREAMING::REQUEST_ANIM_DICT("random@burial");
		STREAMING::REQUEST_PTFX_ASSET();
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1);
		AUDIO::PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
	}
}

void func_154()//Position - 0x7F25
{
	iLocal_100 = joaat("U_F_Y_Mistress");
	iLocal_101 = joaat("A_M_M_Salton_01");
	iLocal_102 = joaat("A_M_M_Salton_01");
	iLocal_103 = joaat("bison");
	Local_76 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_95 = 0f;
	Local_79[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_96[0] = 297.0056f;
	Local_79[1 /*3*/] = { 162.5046f, 6841.6797f, 18.8426f };
	fLocal_96[1] = 193.3866f;
	Local_86 = { 169.3462f, 6837.8047f, 19.1421f };
	fLocal_99 = 265.6862f;
	Local_89 = { 164.08965f, 6836.923f, 19.03899f };
	Local_92 = { 168.9638f, 6834.3022f, 24.99057f };
	iLocal_64 = 1;
}

int func_155()//Position - 0x7FE2
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_166())
		{
			return 0;
		}
	}
	if (func_162())
	{
		return 1;
	}
	if (func_156(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_156(float fParam0, bool bParam1)//Position - 0x8068
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
		if (func_33(func_45()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113810.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_113810.f_18577[iVar32 /*6*/], 3))
				{
					func_157(iVar32, &Var0);
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

void func_157(int iParam0, var uParam1)//Position - 0x8119
{
	switch (iParam0)
	{
		case 0:
			func_158(uParam1, "Abigail1", func_160(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 1:
			func_158(uParam1, "Abigail2", func_160(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 2:
			func_158(uParam1, "Barry1", func_160(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 3:
			func_158(uParam1, "Barry2", func_160(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		
		case 4:
			func_158(uParam1, "Barry3", func_160(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 5:
			func_158(uParam1, "Barry3A", func_160(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 6:
			func_158(uParam1, "Barry3C", func_160(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 7:
			func_158(uParam1, "Barry4", func_160(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_159(iParam0), 0, 0);
			break;
		
		case 8:
			func_158(uParam1, "Dreyfuss1", func_160(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 9:
			func_158(uParam1, "Epsilon1", func_160(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 10:
			func_158(uParam1, "Epsilon2", func_160(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 11:
			func_158(uParam1, "Epsilon3", func_160(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 12:
			func_158(uParam1, "Epsilon4", func_160(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 13:
			func_158(uParam1, "Epsilon5", func_160(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 14:
			func_158(uParam1, "Epsilon6", func_160(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 15:
			func_158(uParam1, "Epsilon7", func_160(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 16:
			func_158(uParam1, "Epsilon8", func_160(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 17:
			func_158(uParam1, "Extreme1", func_160(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 18:
			func_158(uParam1, "Extreme2", func_160(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 19:
			func_158(uParam1, "Extreme3", func_160(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 20:
			func_158(uParam1, "Extreme4", func_160(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 21:
			func_158(uParam1, "Fanatic1", func_160(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_159(iParam0), 1, 0);
			break;
		
		case 22:
			func_158(uParam1, "Fanatic2", func_160(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_159(iParam0), 1, 0);
			break;
		
		case 23:
			func_158(uParam1, "Fanatic3", func_160(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_159(iParam0), 0, 1);
			break;
		
		case 24:
			func_158(uParam1, "Hao1", func_160(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_159(iParam0), 0, 1);
			break;
		
		case 25:
			func_158(uParam1, "Hunting1", func_160(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 26:
			func_158(uParam1, "Hunting2", func_160(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 27:
			func_158(uParam1, "Josh1", func_160(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 28:
			func_158(uParam1, "Josh2", func_160(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		
		case 29:
			func_158(uParam1, "Josh3", func_160(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		
		case 30:
			func_158(uParam1, "Josh4", func_160(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 31:
			func_158(uParam1, "Maude1", func_160(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 32:
			func_158(uParam1, "Minute1", func_160(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 33:
			func_158(uParam1, "Minute2", func_160(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 34:
			func_158(uParam1, "Minute3", func_160(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 35:
			func_158(uParam1, "MrsPhilips1", func_160(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 36:
			func_158(uParam1, "MrsPhilips2", func_160(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 37:
			func_158(uParam1, "Nigel1", func_160(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 38:
			func_158(uParam1, "Nigel1A", func_160(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		
		case 39:
			func_158(uParam1, "Nigel1B", func_160(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_159(iParam0), 1, 1);
			break;
		
		case 40:
			func_158(uParam1, "Nigel1C", func_160(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_159(iParam0), 1, 1);
			break;
		
		case 41:
			func_158(uParam1, "Nigel1D", func_160(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_159(iParam0), 1, 1);
			break;
		
		case 42:
			func_158(uParam1, "Nigel2", func_160(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		
		case 43:
			func_158(uParam1, "Nigel3", func_160(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		
		case 44:
			func_158(uParam1, "Omega1", func_160(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 45:
			func_158(uParam1, "Omega2", func_160(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 46:
			func_158(uParam1, "Paparazzo1", func_160(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 47:
			func_158(uParam1, "Paparazzo2", func_160(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 48:
			func_158(uParam1, "Paparazzo3", func_160(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 49:
			func_158(uParam1, "Paparazzo3A", func_160(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 50:
			func_158(uParam1, "Paparazzo3B", func_160(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 51:
			func_158(uParam1, "Paparazzo4", func_160(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 52:
			func_158(uParam1, "Rampage1", func_160(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 54:
			func_158(uParam1, "Rampage3", func_160(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 55:
			func_158(uParam1, "Rampage4", func_160(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 56:
			func_158(uParam1, "Rampage5", func_160(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 53:
			func_158(uParam1, "Rampage2", func_160(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 57:
			func_158(uParam1, "TheLastOne", func_160(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 58:
			func_158(uParam1, "Tonya1", func_160(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 59:
			func_158(uParam1, "Tonya2", func_160(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 60:
			func_158(uParam1, "Tonya3", func_160(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 61:
			func_158(uParam1, "Tonya4", func_160(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 62:
			func_158(uParam1, "Tonya5", func_160(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_158(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x928E
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

int func_159(int iParam0)//Position - 0x931F
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

struct<2> func_160(int iParam0)//Position - 0x9665
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_161(iParam0) };
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

struct<2> func_161(int iParam0)//Position - 0x969B
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

int func_162()//Position - 0x9AE6
{
	if (func_165() && !func_166())
	{
		return 1;
	}
	if (func_164() && func_163())
	{
		return 1;
	}
	return 0;
}

bool func_163()//Position - 0x9B18
{
	return Global_113528 > 0;
}

int func_164()//Position - 0x9B26
{
	if (Global_97735 != -1)
	{
		return 1;
	}
	return 0;
}

int func_165()//Position - 0x9B3B
{
	if (Global_97735 != -1)
	{
		return BitTest(Global_91601[Global_97735 /*34*/].f_15, 20);
	}
	return 0;
}

int func_166()//Position - 0x9B5E
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

int func_167()//Position - 0x9B7B
{
	if (!func_126(5))
	{
		return 1;
	}
	if (func_162())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_166())
		{
			return 0;
		}
	}
	if (func_156(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_168()//Position - 0x9BDD
{
	if ((Global_113799 == func_40() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113800)
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0)//Position - 0x9C08
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_171(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113796 = 0;
	func_170();
}

void func_170()//Position - 0x9C3E
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

void func_171(int iParam0)//Position - 0x9C7B
{
	Global_113799 = iParam0;
}

int func_172(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x9C89
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152397)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_40();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_213())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_166())
			{
				return 0;
			}
		}
		if (!Global_113810.f_9088)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_162())
		{
			return 0;
		}
		if (func_212())
		{
			return 0;
		}
		if (Global_113799 != -1)
		{
			return 0;
		}
		if (func_33(func_45()))
		{
			if (func_156(100f, 1) != -1)
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
		if (!func_211(iParam3))
		{
			return 0;
		}
		if (func_33(func_45()))
		{
			if (func_210(func_45()) == 4 || func_210(func_45()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_45()))
		{
			if (!func_209(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_208(Global_113810.f_24998.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113801) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_207())
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
		if (!func_198(4))
		{
			return 0;
		}
		if (!func_126(5))
		{
			return 0;
		}
		if (func_197(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_197(0, 0))
		{
			return 0;
		}
		if (Global_32430)
		{
			return 0;
		}
		if (func_211(30) && !func_197(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_45()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113810.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113810.f_2366.f_539.f_2296[iVar4];
				if (func_196(iVar8))
				{
					if (func_174(iVar4))
					{
						if (!func_173(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_45() != iVar4)
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

bool func_173(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xA023
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_174(int iParam0)//Position - 0xA06A
{
	int iVar0;
	
	iVar0 = Global_113810.f_2366.f_539.f_2296[iParam0];
	return func_175(iVar0);
}

int func_175(int iParam0)//Position - 0xA08B
{
	return func_176(iParam0, 1);
}

int func_176(int iParam0, int iParam1)//Position - 0xA09A
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_196(iParam0))
	{
		return 0;
	}
	func_177(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_177(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xA0ED
{
	func_178(func_189(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_178(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xA10B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_188(iParam0, iParam1))
	{
		iVar0 = func_187(iParam1);
		iVar1 = func_185(iParam0);
		iVar2 = (func_185(iParam0) - func_185(iParam1));
		iVar3 = (func_187(iParam0) - func_187(iParam1));
		iVar4 = (func_184(iParam0) - func_184(iParam1));
		iVar5 = (func_183(iParam0) - func_183(iParam1));
		iVar6 = (func_182(iParam0) - func_182(iParam1));
		iVar7 = (func_181(iParam0) - func_181(iParam1));
	}
	else
	{
		iVar0 = func_187(iParam0);
		iVar1 = func_185(iParam1);
		iVar2 = (func_185(iParam1) - func_185(iParam0));
		iVar3 = (func_187(iParam1) - func_187(iParam0));
		iVar4 = (func_184(iParam1) - func_184(iParam0));
		iVar5 = (func_183(iParam1) - func_183(iParam0));
		iVar6 = (func_182(iParam1) - func_182(iParam0));
		iVar7 = (func_181(iParam1) - func_181(iParam0));
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
		iVar4 = (iVar4 + func_180(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_179(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_179(float fParam0, float fParam1, float fParam2)//Position - 0xA30C
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

int func_180(int iParam0, int iParam1)//Position - 0xA34E
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

int func_181(int iParam0)//Position - 0xA3F0
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_182(int iParam0)//Position - 0xA403
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_183(int iParam0)//Position - 0xA416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_184(int iParam0)//Position - 0xA429
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_185(int iParam0)//Position - 0xA43B
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_186(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_186(bool bParam0, int iParam1, int iParam2)//Position - 0xA45D
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_187(int iParam0)//Position - 0xA474
{
	return iParam0 & 15;
}

int func_188(int iParam0, int iParam1)//Position - 0xA481
{
	int iVar0;
	int iVar1;
	
	if (!func_196(iParam1) || !func_196(iParam0))
	{
		return 1;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_187(iParam0);
	iVar1 = func_187(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_189()//Position - 0xA58D
{
	var uVar0;
	
	func_195(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_194(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_193(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_192(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_191(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_190(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_190(var uParam0, int iParam1)//Position - 0xA5D3
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

void func_191(var uParam0, int iParam1)//Position - 0xA659
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_192(var uParam0, int iParam1)//Position - 0xA68C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_187(*uParam0);
	iVar1 = func_185(*uParam0);
	if (iParam1 < 1 || iParam1 > func_180(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_193(var uParam0, int iParam1)//Position - 0xA6DD
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_194(var uParam0, int iParam1)//Position - 0xA717
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_195(var uParam0, int iParam1)//Position - 0xA752
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_196(int iParam0)//Position - 0xA78E
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
	iVar0 = func_181(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_182(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_183(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_185(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_187(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_184(iParam0);
	if (iVar5 < 1 || iVar5 > func_180(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_197(int iParam0, bool bParam1)//Position - 0xA86A
{
	if (BitTest(Global_113810.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)//Position - 0xA88A
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_45();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_206()) || Global_112857) || Global_32286) || func_205()) || func_84(8, -1)) || func_204()) || func_203()) || func_202()) || func_201()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_206()) || Global_32286) || func_205()) || func_84(8, -1)) || func_202()) || func_204()) || func_203()) || func_201()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_206()) || Global_112857) || Global_32286) || func_205()) || func_84(8, -1)) || func_202()) || func_204()) || func_203()) || func_201()) || Global_113810.f_7691.f_919[iVar0] == 5) || Global_43924 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_206()) || Global_112857) || Global_32286) || func_205()) || func_84(8, -1)) || func_204()) || func_203()) || func_201()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_206() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_84(8, -1)) || func_201()) || func_200()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_84(8, -1) || func_204()) || func_203()) || func_200()) || func_199())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_206()) || Global_32286) || func_205()) || func_84(8, -1)) || func_203()) || func_202()) || func_201()) || Global_113810.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_206()) || func_203()) || Global_112857) || Global_32286) || func_205()) || Global_44569) || func_84(8, -1)) || func_202()) || func_200()) || func_201()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_206()) || Global_112857) || Global_32286) || func_205()) || func_84(8, -1)) || func_202()) || func_200()) || func_204()) || func_203()) || func_201())
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

var func_199()//Position - 0xAFA7
{
	return Global_100872.f_1;
}

int func_200()//Position - 0xAFB5
{
	if (Global_97735 != -1)
	{
		return BitTest(Global_91601[Global_97735 /*34*/].f_15, 13);
	}
	return 0;
}

int func_201()//Position - 0xAFD8
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_202()//Position - 0xAFF2
{
	if (Global_78950)
	{
		return 1;
	}
	else if (Global_63479 && !Global_63485)
	{
		return 1;
	}
	return 0;
}

bool func_203()//Position - 0xB01C
{
	return Global_100885.f_394 > 0;
}

bool func_204()//Position - 0xB02D
{
	return Global_100885.f_393 > 0;
}

var func_205()//Position - 0xB03E
{
	return Global_1575063;
}

int func_206()//Position - 0xB04A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98291.f_44 == 1;
	}
	return 0;
}

int func_207()//Position - 0xB066
{
	func_82();
	if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_208(int iParam0)//Position - 0xB08E
{
	return func_188(func_189(), iParam0);
}

int func_209(int iParam0, int iParam1, int iParam2)//Position - 0xB0A0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_45();
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

int func_210(int iParam0)//Position - 0xB184
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_113810.f_7691.f_919[iParam0];
}

int func_211(int iParam0)//Position - 0xB1A8
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_213())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113810.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113810.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_212()//Position - 0xB200
{
	int iVar0;
	
	if (Global_32435)
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

int func_213()//Position - 0xB244
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

void func_214()//Position - 0xB2FC
{
	int iVar0;
	
	if (iLocal_160)
	{
		func_227(0);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		AUDIO::CANCEL_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
		if (iLocal_143 || iLocal_163)
		{
			if (Global_32526)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RE6_END");
			}
		}
		func_226();
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_175, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), iLocal_175);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_51, 317, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, false))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_51);
				}
				if (PED::IS_PED_IN_GROUP(iLocal_51))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_51);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51, false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_51, true);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, false))
			{
				PED::SET_ENABLE_HANDCUFFS(iLocal_51, true);
				PED::SET_ENABLE_BOUND_ANKLES(iLocal_51, true);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_52)
		{
			if (!PED::IS_PED_INJURED(iLocal_52[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_52[iVar0]);
				if (iLocal_67 || iLocal_74)
				{
					TASK::TASK_COMBAT_PED(iLocal_52[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_52[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					func_111();
				}
				PED::SET_PED_KEEP_TASK(iLocal_52[iVar0], true);
			}
			iVar0++;
		}
		OBJECT::DELETE_OBJECT(&(iLocal_59[0]));
		OBJECT::DELETE_OBJECT(&(iLocal_59[1]));
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_56);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_58))
			{
				ENTITY::DETACH_ENTITY(iLocal_58, true, true);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_58);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_161))
		{
			HUD::REMOVE_BLIP(&iLocal_161);
		}
		iLocal_62 = 0;
		while (iLocal_62 <= 1)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_109[iLocal_62]))
			{
				HUD::REMOVE_BLIP(&(iLocal_109[iLocal_62]));
			}
			iLocal_62++;
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_112))
		{
			HUD::REMOVE_BLIP(&iLocal_112);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_75))
		{
			CAM::DESTROY_CAM(iLocal_75, false);
		}
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, true, true);
	}
	func_215(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_215(int iParam0)//Position - 0xB51F
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_168())
	{
		func_219(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113801 = MISC::GET_GAME_TIMER();
		func_218(30000);
		StringCopy(&cVar0, func_217(Global_113799, 1), 64);
		if (func_39(Global_113799) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113798, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113796, (MISC::GET_GAME_TIMER() - Global_113797), 0);
	}
	else if (BitTest(Global_113806, 0) && Global_113810.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113806, 0);
	}
	func_216(&Global_32343);
	Global_113800 = 0;
	func_171(-1);
}

void func_216(var uParam0)//Position - 0xB5D1
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43339)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43338 = 0;
	Global_43340 = 0;
	Global_43377 = 15;
	Global_63482 = 0;
	Global_63483 = 0;
}

char* func_217(int iParam0, bool bParam1)//Position - 0xB60E
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

void func_218(int iParam0)//Position - 0xB857
{
	Global_43928 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_219(int iParam0)//Position - 0xB869
{
	func_220(iParam0, 0, func_225(iParam0));
}

void func_220(int iParam0, int iParam1, int iParam2)//Position - 0xB87E
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_189();
	func_223(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_222(iParam0, &uVar0);
	Var1 = { func_221(&uVar0) };
}

struct<16> func_221(var uParam0)//Position - 0xB8AD
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_183(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
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
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_184(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_187(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_185(*uParam0), 64);
	return Var0;
}

void func_222(int iParam0, var uParam1)//Position - 0xB97C
{
	Global_113810.f_24998.f_43[iParam0] = *uParam1;
}

void func_223(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB994
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_185(*uParam0);
	iVar1 = func_187(*uParam0);
	iVar2 = func_184(*uParam0);
	iVar3 = func_183(*uParam0);
	iVar4 = func_182(*uParam0);
	iVar5 = func_181(*uParam0);
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
	iVar6 = func_180(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_180(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_224(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_224(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBB16
{
	func_195(uParam0, iParam1);
	func_194(uParam0, iParam2);
	func_193(uParam0, iParam3);
	func_191(uParam0, iParam5);
	func_192(uParam0, iParam4);
	func_190(uParam0, iParam6);
}

int func_225(int iParam0)//Position - 0xBB4E
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

void func_226()//Position - 0xBCF1
{
	Global_32522 = 0;
	Global_32523 = 0;
	Global_32525 = 0;
	Global_32526 = 0;
	Global_32527 = 0;
}

void func_227(bool bParam0)//Position - 0xBD0D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_143(iVar0, bParam0);
		iVar0++;
	}
}

