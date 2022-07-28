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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int* iLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	struct<3> Local_76 = { 0, 0, 0 } ;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	char* sLocal_80[3] = { NULL, NULL, NULL };
	char* sLocal_81 = NULL;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<3> Local_84[4];
	float fLocal_85[4] = { 0f, 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<4> Local_88 = { 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 15;
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
	var uLocal_148 = 16;
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
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317[5] = { 0, 0, 0, 0, 0 };
	float fLocal_318[5] = { 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_319[5];
	struct<3> Local_320[5];
	int iLocal_321 = 0;
	struct<3> Local_322 = { 0, 0, 0 } ;
	struct<3> Local_323 = { 0, 0, 0 } ;
	float fLocal_324 = 0f;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	bool bLocal_327 = 0;
	int iLocal_328 = 0;
	struct<3> Local_329 = { 0, 0, 0 } ;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	float fLocal_341 = 0f;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	struct<3> Local_345 = { 0, 0, 0 } ;
	int iLocal_346 = 0;
	struct<3> Local_347 = { 0, 0, 0 } ;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	struct<3> Local_351 = { 0, 0, 0 } ;
	struct<3> Local_352 = { 0, 0, 0 } ;
	float fLocal_353 = 0f;
	struct<3> Local_354 = { 0, 0, 0 } ;
	struct<3> Local_355 = { 0, 0, 0 } ;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	struct<3> Local_358[8];
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	char* sLocal_370 = NULL;
	char* sLocal_371 = NULL;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	struct<2> Local_387 = { 0, 5 } ;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 5;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iLocal_54 = -1;
	sLocal_81 = "null";
	iLocal_82 = -1;
	iLocal_83 = -1;
	iLocal_94 = 1;
	fLocal_324 = 200f;
	iLocal_343 = MISC::GET_GAME_TIMER();
	iLocal_344 = 10000;
	iLocal_360 = -1;
	iLocal_369 = joaat("LAYOUT_STANDARD");
	sLocal_370 = "std_ds_open_door_for_chop";
	sLocal_371 = "creatures@rottweiler@in_vehicle@std_car";
	iLocal_379 = MISC::GET_GAME_TIMER();
	iLocal_382 = MISC::GET_GAME_TIMER();
	iLocal_384 = AUDIO::GET_SOUND_ID();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_180();
	}
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_386 = CAM::IS_GAMEPLAY_HINT_ACTIVE();
	Local_345 = { ScriptParam_387.f_1[0 /*3*/] };
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
	{
		func_180();
	}
	if (!func_179(63))
	{
		func_180();
	}
	if (!func_178(5) && !func_178(6))
	{
		func_180();
	}
	if (func_178(6) && func_177(Local_345, 1, 0) == 5)
	{
		func_180();
	}
	if (!func_170(1))
	{
		func_180();
	}
	if (Global_32107 == 1)
	{
		func_180();
	}
	if (Global_97361 == 1)
	{
		func_180();
	}
	if (func_167(0))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("sh_intro_f_hills")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("martin1")) == 0)
		{
			func_180();
		}
	}
	if ((((func_166() == 206 || func_166() == 207) || func_166() == 204) || func_166() == 205) || func_166() == 203)
	{
		iLocal_325 = 1;
	}
	else if (func_166() == 47)
	{
		iLocal_326 = 1;
	}
	else
	{
		if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_345, 154.0731f, 765.5721f, 209.6901f, true) <= 50f || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_345, -268.139f, 415.2881f, 109.7258f, true) <= 50f) || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_345, 314.4171f, 965.207f, 208.4024f, true) <= 50f)
		{
			func_180();
		}
		iLocal_325 = 0;
		iLocal_326 = 0;
		if (Global_78317 == 1)
		{
			func_180();
		}
	}
	while (true)
	{
		if (!func_163())
		{
			switch (iLocal_50)
			{
				case 0:
					func_154();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			func_180();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x2AC
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iLocal_69))
	{
		return;
	}
	func_152();
	func_151();
	if (iLocal_51 != 11)
	{
		func_150();
		func_149();
		func_129();
		func_128();
		func_126();
	}
	func_2();
}

void func_2()//Position - 0x2F5
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	switch (iLocal_51)
	{
		case 11:
			if (iLocal_52 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@sleep_in_kennel@"))
				{
					if (func_125(iLocal_69))
					{
						TASK::TASK_PLAY_ANIM(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "sleep_in_kennel", 1000f, -8f, -1, 1, 0f, false, false, false);
						func_124(iLocal_69, Local_329.f_5, Local_329.f_8, 0, 1);
					}
					iLocal_336 = MISC::GET_GAME_TIMER();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_123())
				{
					STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
					if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@sleep_in_kennel@") && func_125(iLocal_69))
					{
						TASK::TASK_PLAY_ANIM(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "exit_kennel", 8f, -8f, -1, 0, 0f, false, false, false);
						func_122("WHINE");
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_69, -2017877118) == 7)
				{
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
					func_122("PLAYFUL");
					func_121(1, 1);
				}
			}
			break;
		
		case 1:
			if (iLocal_338 == 0 && func_118(PLAYER::PLAYER_PED_ID(), 1))
			{
				func_121(18, 1);
			}
			else
			{
				func_117();
				func_116();
				func_115();
			}
			break;
		
		case 17:
			func_117();
			func_116();
			if (iLocal_52 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_80[0]);
				STREAMING::REQUEST_ANIM_DICT(sLocal_80[1]);
				STREAMING::REQUEST_ANIM_DICT(sLocal_80[2]);
				if ((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_80[0]) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_80[1])) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_80[2]))
				{
					TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_80[0], "enter", 8f, -8f, -1, 0, 0f, false, false, false);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if ((!func_113(iLocal_69, -2017877118) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_69, sLocal_80[0], "enter", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_69, sLocal_80[0], "enter") > 0.98f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_69, sLocal_80[1], sLocal_81, 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_69, sLocal_80[1], sLocal_81) > 0.98f))
				{
					if (iLocal_53 == 0)
					{
						if (iLocal_79 == 1)
						{
							TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_80[1], "base", 8f, -8f, -1, 0, 0f, false, false, false);
							sLocal_81 = "base";
							iLocal_52++;
						}
						else
						{
							func_112();
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
							{
								iLocal_52++;
							}
						}
					}
					else
					{
						if (iLocal_53 != 5)
						{
							func_108("CHOP_WAIT", 0);
						}
						TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_80[2], "exit", 8f, -8f, -1, 0, 0f, false, false, false);
						iLocal_52 = 3;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (!func_113(iLocal_69, -2017877118) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_69, sLocal_80[1], sLocal_81, 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_69, sLocal_80[1], sLocal_81) > 0.98f))
				{
					TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_80[2], "exit", 8f, -8f, -1, 0, 0f, false, false, false);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 3)
			{
				if (!func_113(iLocal_69, -2017877118))
				{
					iLocal_348 = 0;
					if (iLocal_53 == 0)
					{
						func_121(1, 1);
					}
					else
					{
						func_121(iLocal_53, 1);
					}
				}
			}
			break;
		
		case 18:
			func_116();
			if (iLocal_52 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@enter");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@idle_a");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@exit");
				TASK::TASK_GO_TO_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 20000, 3f, 1f, 2f, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (iLocal_53 == 0)
				{
					if (!func_113(iLocal_69, 1227113341))
					{
						if ((STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@enter") && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@exit"))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
							iLocal_52++;
						}
					}
				}
				else
				{
					func_121(iLocal_53, 1);
				}
			}
			else if (iLocal_52 == 2)
			{
				if (func_107())
				{
					iLocal_338 = 1;
					if (iLocal_53 == 0)
					{
						func_121(1, 1);
					}
					else
					{
						func_121(iLocal_53, 1);
					}
				}
			}
			break;
		
		case 2:
			func_102();
			if (iLocal_52 == 0)
			{
				if ((func_125(iLocal_69) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false)) && !PED::IS_PED_IN_GROUP(iLocal_69))
				{
					TASK::CLEAR_PED_TASKS(iLocal_69);
				}
				func_100();
				func_99(0, 0, 0);
				func_98(1);
				iLocal_60 = -1;
				iLocal_316 = MISC::GET_GAME_TIMER();
				iLocal_62 = MISC::GET_GAME_TIMER();
				iLocal_63 = (MISC::GET_GAME_TIMER() - 10000);
				Local_76 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				func_83();
				func_54();
				func_53();
				func_45();
				func_44();
				func_41();
				func_117();
			}
			break;
		
		case 3:
			if (iLocal_52 == 0)
			{
				func_122("WHINE");
				func_108("CHOP_GOHOME", 0);
				func_40(0);
				STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
				if (func_125(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"), false))
				{
					WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"));
				}
				if (PED::IS_PED_IN_GROUP(iLocal_69))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_69);
				}
				if (func_118(iLocal_69, 1))
				{
					func_121(1, 1);
				}
				else if (func_39(iLocal_69, Local_329, 1) < 100f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_69);
					if (func_39(iLocal_69, Local_329, 1) < 20f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_69, Local_329, 1f, 20000, 0.25f, 32, Local_329.f_3);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_69, Local_329, 3f, 60000, 0.25f, 32, Local_329.f_3);
					}
					iLocal_52++;
				}
				else
				{
					func_121(4, 1);
				}
			}
			else if (iLocal_52 == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_69, 713668775) == 7)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_69, Local_329, 2.5f, 2.5f, 4f, false, true, 0))
					{
						func_121(1, 1);
					}
					else
					{
						func_121(3, 1);
					}
				}
			}
			break;
		
		case 4:
			if (!func_113(iLocal_69, 1805844857))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			}
			break;
		
		case 5:
			if (iLocal_52 == 0)
			{
				if (func_38())
				{
					if (func_35())
					{
						if (PED::IS_PED_IN_GROUP(iLocal_69))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_69);
						}
						TASK::CLEAR_PED_TASKS(iLocal_69);
						iLocal_56 = MISC::GET_GAME_TIMER();
						iLocal_58 = 1000;
						iLocal_339 = 0;
						iLocal_67 = -1;
						func_34();
						iLocal_52++;
					}
					else
					{
						func_32();
					}
				}
			}
			else if (iLocal_52 == 1)
			{
				if (((!func_24() || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_22())) || (iLocal_67 > -1 && (MISC::GET_GAME_TIMER() - iLocal_67) > 30000)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_322, 1f, 1f, 1f, false, true, 0))
				{
					iLocal_52++;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_69, Local_323, 3f, 3f, 4f, false, true, 0))
				{
					func_20();
					if (iLocal_67 == -1)
					{
						iLocal_67 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					func_18();
					if (func_113(iLocal_69, 713668775))
					{
						iVar0 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iLocal_69, &uVar2, &uVar1);
						if (iVar0 == 2)
						{
							iLocal_339++;
						}
						else if (iVar0 == 3)
						{
							if (iLocal_339 != 0)
							{
								iLocal_339 = 0;
							}
						}
						if (iLocal_339 > 9)
						{
							func_32();
						}
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_69, Local_323, 3f, -1, 3f, 36, 40000f);
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				TASK::CLEAR_PED_TASKS(iLocal_69);
				STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@indication@");
				func_121(2, 1);
			}
			func_102();
			break;
		
		case 6:
			if (iLocal_52 == 0)
			{
				if (PED::IS_PED_IN_GROUP(iLocal_69))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_69);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_69, false);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (func_125(PLAYER::PLAYER_PED_ID()))
				{
					if ((!func_113(iLocal_69, 780511057) && !PED::IS_PED_IN_COMBAT(iLocal_69, 0)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						iLocal_62 = MISC::GET_GAME_TIMER();
						func_121(2, 1);
					}
				}
			}
			func_102();
			break;
		
		case 7:
			if (iLocal_52 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_69);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
					if (!PED::IS_PED_FACING_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 10f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					}
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "beg_enter", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "beg_exit", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 8:
			if (iLocal_52 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_69);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
					if (!PED::IS_PED_FACING_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 10f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					}
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 9:
			if (iLocal_52 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_69);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
					if (!PED::IS_PED_FACING_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 10f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					}
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "paw_right_enter", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "paw_right_exit", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 10:
			PAD::DISABLE_CONTROL_ACTION(0, 32, true);
			PAD::DISABLE_CONTROL_ACTION(0, 34, true);
			PAD::DISABLE_CONTROL_ACTION(0, 35, true);
			PAD::DISABLE_CONTROL_ACTION(0, 33, true);
			PAD::DISABLE_CONTROL_ACTION(0, 31, true);
			PAD::DISABLE_CONTROL_ACTION(0, 30, true);
			PAD::DISABLE_CONTROL_ACTION(0, 22, true);
			PAD::DISABLE_CONTROL_ACTION(0, 36, true);
			PAD::DISABLE_CONTROL_ACTION(0, 44, true);
			PAD::DISABLE_CONTROL_ACTION(0, 141, true);
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 263, true);
			PAD::DISABLE_CONTROL_ACTION(0, 264, true);
			PAD::DISABLE_CONTROL_ACTION(0, 143, true);
			PAD::DISABLE_CONTROL_ACTION(0, 24, true);
			PAD::DISABLE_CONTROL_ACTION(0, 257, true);
			PAD::DISABLE_CONTROL_ACTION(0, 262, true);
			PAD::DISABLE_CONTROL_ACTION(0, 261, true);
			PAD::DISABLE_CONTROL_ACTION(0, 37, true);
			PAD::DISABLE_CONTROL_ACTION(0, 21, true);
			if (iLocal_52 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_69, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -875674219) == 7)
				{
					TASK::CLEAR_PED_TASKS(iLocal_69);
					Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1f, 1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &(Var3.f_2), false, false);
					if (func_39(iLocal_69, Var3, 0) > 0.3f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_69, Var3, 1f, 5000, 0.25f, false, 40000f);
					}
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 2)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_69, 713668775) == 7 || func_39(iLocal_69, Var3, 0) < 0.3f)
				{
					if (!PED::IS_PED_FACING_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 15f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 0);
						iLocal_376 = 0;
					}
					else
					{
						iLocal_376 = 1;
					}
					if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_69, 15f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_69, 0);
						iLocal_377 = 0;
					}
					else
					{
						iLocal_377 = 1;
					}
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 3)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				if (((iLocal_376 == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_69, -875674219) == 7) && (iLocal_377 == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -875674219) == 7)) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::TASK_PLAY_ANIM(iLocal_69, "creatures@rottweiler@tricks@", "petting_chop", 8f, -8f, -1, 8, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@rottweiler@tricks@", "petting_franklin", 8f, -8f, -1, 8, 0f, false, false, false);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_69, -2017877118) == 7)
				{
					func_108("CHOP_RETURN1", 0);
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 12:
			if (iLocal_52 == 0)
			{
				if (PED::IS_PED_IN_GROUP(iLocal_69))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_69);
				}
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_69);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4097, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (!func_16())
				{
					STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
					if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
					{
						TASK::CLEAR_PED_TASKS(iLocal_69);
						TASK::TASK_PLAY_ANIM(iLocal_69, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0f, false, false, false);
						func_108("CHOP_WALK", 0);
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_69, -2017877118) == 7)
				{
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					iLocal_62 = MISC::GET_GAME_TIMER();
					func_121(2, 1);
				}
			}
			break;
		
		case 13:
			if (iLocal_52 == 0)
			{
				if (PED::IS_PED_IN_GROUP(iLocal_69))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_69);
				}
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@move");
				STREAMING::REQUEST_PTFX_ASSET();
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@move") && STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					TASK::CLEAR_PED_TASKS(iLocal_69);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "dump_enter", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "dump_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "dump_exit", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					func_122("AGITATED");
					iLocal_64 = MISC::GET_GAME_TIMER();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
					}
					if (func_118(iLocal_69, 0))
					{
						func_121(1, 1);
					}
					else
					{
						func_121(2, 1);
					}
				}
				else if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
				{
					if (iLocal_64 > -1 && (MISC::GET_GAME_TIMER() - iLocal_64) > 4000)
					{
						iLocal_77 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_anim_dog_poo", iLocal_69, 0f, -0.15f, -0.2f, 0f, 0f, 0f, 1f, false, false, false);
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_64) > 10000)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
					iLocal_64 = -1;
				}
			}
			break;
		
		case 14:
			if (iLocal_52 == 0)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					if (PED::IS_PED_IN_GROUP(iLocal_69))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_69);
					}
					func_122("AGITATED");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@move");
				if (!func_113(iLocal_69, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_69, ENTITY::GET_ENTITY_COORDS(iLocal_349, true), 2f, 20000, 0.25f, 36, 40000f);
				}
				if (func_39(iLocal_69, ENTITY::GET_ENTITY_COORDS(iLocal_349, true), 1) < 2f)
				{
					if ((!BitTest(Global_113386.f_10049.f_94, 10) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113386.f_10049.f_94), 10);
						if (bLocal_327 == 0)
						{
							func_15("CHOP_H_BEHAVE", -1);
						}
						else
						{
							func_15("CHOP_H_BEHAVA", -1);
						}
					}
					TASK::CLEAR_PED_TASKS(iLocal_69);
					if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@move") && ENTITY::GET_ENTITY_SPEED(iLocal_69) < 1f)
					{
						Local_351 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
						iLocal_350 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						fLocal_353 = func_14(Local_351, ENTITY::GET_ENTITY_COORDS(iLocal_349, true));
						if (iLocal_350 == 0)
						{
							Local_352 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_351, fLocal_353, -0.5f, 1f, 0f) };
						}
						else
						{
							Local_352 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_351, fLocal_353, 0.5f, 1f, 0f) };
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_352, 0);
						if (iLocal_350 == 0)
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_right_enter", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_right_idle", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_right_exit", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_left_enter", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_left_idle", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_left_exit", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
						iLocal_64 = MISC::GET_GAME_TIMER();
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (func_107())
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
					}
					func_122("BARK");
					func_121(2, 1);
				}
				else if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
				{
					if (iLocal_64 > -1 && (MISC::GET_GAME_TIMER() - iLocal_64) > 7000)
					{
						if (iLocal_350 == 0)
						{
							iLocal_77 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_anim_dog_peeing", iLocal_69, 0.1f, -0.32f, -0.04f, 0f, 0f, 30f, 1f, false, false, false);
						}
						else
						{
							iLocal_77 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_anim_dog_peeing", iLocal_69, -0.1f, -0.32f, -0.04f, 0f, 0f, 150f, 1f, false, false, false);
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_64) > 16000)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
					iLocal_64 = -1;
				}
			}
			break;
		
		case 15:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				func_40(0);
				iLocal_62 = MISC::GET_GAME_TIMER();
				func_121(2, 1);
			}
			else
			{
				if (iLocal_52 == 0)
				{
					func_40(1);
					if (MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), iLocal_367, 50f, &uLocal_362, &iLocal_361, false))
					{
						func_6(294, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
						iLocal_365 = 0;
						iLocal_366 = 0;
						iLocal_340 = 0;
						if (PED::IS_PED_IN_GROUP(iLocal_69))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_69);
						}
						iLocal_368 = MISC::GET_GAME_TIMER();
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_361))
					{
						if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_361))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_368) > 500)
							{
								if (func_5())
								{
									STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@move");
									if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@move"))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
										if (iLocal_367 == joaat("weapon_ball"))
										{
											TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "fetch_pickup", 8f, -8f, -1, 49152, 0f, false, false, false);
										}
										TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 4f, 3f, 2f, 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
										if (iLocal_367 == joaat("weapon_ball"))
										{
											iLocal_365 = 1;
										}
										iLocal_52++;
									}
								}
								else if (!func_113(iLocal_69, 1227113341))
								{
									TASK::TASK_GO_TO_ENTITY(iLocal_69, iLocal_361, 30000, 0.5f, 3f, 2f, 0);
									iLocal_340++;
									iLocal_339 = 0;
									if (iLocal_340 > 3)
									{
										TASK::TASK_GO_TO_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 2f, 0);
										func_40(1);
										iLocal_52++;
									}
								}
								else
								{
									iVar0 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iLocal_69, &uVar2, &uVar1);
									if (iVar0 == 2)
									{
										fLocal_341 = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_361);
										if (fLocal_341 < 1f)
										{
											iLocal_339++;
										}
									}
									else if (iVar0 == 3)
									{
										if (iLocal_366 == 0)
										{
											func_122("BARK");
											if (iLocal_367 == joaat("weapon_ball"))
											{
												func_108("CHOP_FETCH", 0);
											}
											iLocal_366 = 1;
										}
									}
									if (iLocal_339 > 9)
									{
										TASK::TASK_GO_TO_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 2f, 0);
										func_40(1);
										iLocal_52++;
									}
								}
							}
						}
						else
						{
							TASK::TASK_GO_TO_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 2f, 0);
							iLocal_52++;
						}
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 2f, 0);
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 2)
				{
					if (iLocal_365 == 1)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_361) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_69, "creatures@rottweiler@move", "fetch_pickup", 3)) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_69, "creatures@rottweiler@move", "fetch_pickup") > 0.25f)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_361, iLocal_69, 28, 0.2042f, 0f, -0.0608f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							AUDIO::SET_AUDIO_FLAG("DisableBarks", true);
							iLocal_52++;
						}
					}
					else
					{
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 3)
				{
					if (func_4(PLAYER::PLAYER_PED_ID(), iLocal_69, 1) < 5f)
					{
						if (iLocal_367 == joaat("weapon_ball"))
						{
							if (iLocal_365 == 1)
							{
								STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@move");
								if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@move"))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "fetch_drop", 8f, -8f, -1, 16384, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
									func_108("CHOP_RETURN1", 0);
									AUDIO::SET_AUDIO_FLAG("DisableBarks", false);
									iLocal_52++;
								}
							}
							else
							{
								func_122("BREATH_AGITATED");
								func_108("CHOP_RETURN2", 0);
								func_121(2, 1);
							}
						}
						else
						{
							func_122("BARK_WHINE");
							func_40(1);
							func_121(2, 1);
						}
					}
				}
				else if (iLocal_52 == 4)
				{
					if (!func_113(iLocal_69, 242628503) && !ENTITY::DOES_ENTITY_EXIST(iLocal_361))
					{
						if (func_3(0))
						{
							func_99(0, 1, 0);
						}
						else if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
						{
							func_99(0, 1, 1);
						}
						else
						{
							func_99(1, 1, 1);
						}
						iLocal_62 = MISC::GET_GAME_TIMER();
						func_121(2, 1);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_361))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_361))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_69, "creatures@rottweiler@move", "fetch_drop", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_69, "creatures@rottweiler@move", "fetch_drop") > 0.4f)
							{
								ENTITY::DETACH_ENTITY(iLocal_361, true, true);
							}
						}
						else
						{
							if ((func_4(PLAYER::PLAYER_PED_ID(), iLocal_361, 1) < 1.5f || func_4(PLAYER::PLAYER_PED_ID(), iLocal_361, 1) > 20f) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								func_40(1);
							}
							if (!func_113(iLocal_69, 242628503))
							{
								func_100();
							}
						}
					}
				}
				func_102();
			}
			break;
		
		case 16:
			if (iLocal_52 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@in_vehicle@std_car");
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@in_vehicle@std_car"))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_69))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_69);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_69, ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID()), 0, 0f, 0f, -6.1f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
					TASK::TASK_PLAY_ANIM(iLocal_69, "creatures@rottweiler@in_vehicle@std_car", "sit", 1000f, -1000f, -1, 9, 0f, false, false, false);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
				{
					fVar4 = 99999f;
					iVar6 = 0;
					while (iVar6 < 4)
					{
						fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_84[iVar6 /*3*/], true);
						if (fVar5 < fVar4)
						{
							fVar4 = fVar5;
							iVar7 = iVar6;
						}
						iVar6++;
					}
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_69))
					{
						ENTITY::DETACH_ENTITY(iLocal_69, true, true);
					}
					func_124(iLocal_69, Local_84[iVar7 /*3*/], fLocal_85[iVar7], 0, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
					iLocal_62 = MISC::GET_GAME_TIMER();
					func_121(2, 1);
				}
			}
			break;
	}
}

int func_3(int iParam0)//Position - 0x1C8F
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

float func_4(int iParam0, int iParam1, bool bParam2)//Position - 0x1CE6
{
	struct<3> Var0;
	struct<3> Var1;
	
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
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, bParam2);
}

int func_5()//Position - 0x1D44
{
	struct<3> Var0;
	float fVar1;
	
	if (func_4(iLocal_69, iLocal_361, 1) < (0.5f + 0.25f))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_361, true) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f), &fVar1, false, false))
		{
			if (MISC::ABSF((Var0.f_2 - fVar1)) < 0.1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_6(int iParam0, int iParam1, int iParam2)//Position - 0x1DA1
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
		func_12((891 + iParam0), 1, -1);
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
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
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
		func_7();
	}
}

void func_7()//Position - 0x1E87
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
		func_11(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_10() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_8();
				}
			}
		}
	}
}

int func_8()//Position - 0x2345
{
	if (func_9(0))
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

int func_9(bool bParam0)//Position - 0x2390
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_10()//Position - 0x23B8
{
	return Global_31959;
}

int func_11(int iParam0, int iParam1)//Position - 0x23C3
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

void func_12(int iParam0, bool bParam1, int iParam2)//Position - 0x2414
{
	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_13()//Position - 0x2432
{
	return Global_1574918;
}

float func_14(struct<2> Param0, var uParam1, struct<2> Param2, Vector3 vParam3)//Position - 0x243E
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_15(char* sParam0, int iParam1)//Position - 0x2458
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_16()//Position - 0x246F
{
	return Global_100493.f_375 > 0;
}

void func_17()//Position - 0x2480
{
	iLocal_62 = MISC::GET_GAME_TIMER();
	if (iLocal_75 == 0)
	{
		func_121(1, 1);
	}
	else
	{
		func_121(2, 1);
	}
}

void func_18()//Position - 0x24A3
{
	float fVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_56) > iLocal_58)
	{
		fVar0 = func_39(iLocal_69, Local_323, 1);
		if (fVar0 < 10f)
		{
			func_122("BARK_SEQ");
		}
		else
		{
			func_122("BARK");
		}
		iLocal_56 = MISC::GET_GAME_TIMER();
		if (fVar0 < 20f)
		{
			iLocal_58 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000);
		}
		else if (fVar0 < 50f)
		{
			iLocal_58 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000);
		}
		else
		{
			iLocal_58 = MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000);
		}
		if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113386.f_10049.f_94, 1)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			MISC::SET_BIT(&(Global_113386.f_10049.f_94), 1);
			func_15("CHOP_H_HUNT", -1);
		}
	}
}

int func_19()//Position - 0x256D
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_69) || (iLocal_51 == 10 && PAD::IS_CONTROL_PRESSED(2, 25)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
	}
	return 0;
}

void func_20()//Position - 0x25B4
{
	if (!func_113(iLocal_69, 242628503))
	{
		STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@indication@");
		if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@indication@"))
		{
			TASK::CLEAR_PED_TASKS(iLocal_69);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_322, 0);
			TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@indication@", func_21(), 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
		}
	}
}

char* func_21()//Position - 0x2626
{
	char* sVar0;
	struct<3> Var1;
	
	if (func_125(iLocal_69))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
		if ((Var1.f_2 + 1f) < Local_322.f_2)
		{
			sVar0 = "indicate_high";
		}
		else if ((Var1.f_2 - 1f) > Local_322.f_2)
		{
			sVar0 = "indicate_low";
		}
		else
		{
			sVar0 = "indicate_ahead";
		}
	}
	return sVar0;
}

int func_22()//Position - 0x267A
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) || func_23())
		{
			return 1;
		}
	}
	return 0;
}

int func_23()//Position - 0x26BB
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true));
		if ((((((((((((((((((iVar0 == joaat("caddy") || iVar0 == joaat("caddy2")) || iVar0 == joaat("dune")) || iVar0 == joaat("airtug")) || iVar0 == joaat("blazer")) || iVar0 == joaat("blazer2")) || iVar0 == joaat("bulldozer")) || iVar0 == joaat("cutter")) || iVar0 == joaat("dump")) || iVar0 == joaat("forklift")) || iVar0 == joaat("handler")) || iVar0 == joaat("mower")) || iVar0 == joaat("rhino")) || iVar0 == joaat("tractor")) || iVar0 == joaat("tractor2")) || iVar0 == joaat("tractor3")) || iVar0 == MISC::GET_HASH_KEY("bifta")) || iVar0 == joaat("blazer3")) || iVar0 == joaat("dune2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_24()//Position - 0x27ED
{
	switch (iLocal_314)
	{
		case 2:
			if (!func_27(2))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 1:
			if (!func_27(1))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 0:
			if (!func_27(0))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 3:
			if (func_26(iLocal_321))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 4:
			if (func_25(iLocal_321))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_25(int iParam0)//Position - 0x289B
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return BitTest(Global_113386.f_10049.f_125, iParam0);
	}
	return BitTest(Global_113386.f_10049.f_125.f_1, (iParam0 - 32));
}

int func_26(int iParam0)//Position - 0x28E0
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return BitTest(Global_113386.f_10049.f_122, iParam0);
	}
	return BitTest(Global_113386.f_10049.f_122.f_1, (iParam0 - 32));
}

int func_27(int iParam0)//Position - 0x2925
{
	if (func_31())
	{
		func_30(iParam0, iLocal_321);
	}
	if (func_29())
	{
		if (func_28())
		{
			func_34();
			return 0;
		}
		func_34();
	}
	return 1;
}

bool func_28()//Position - 0x2958
{
	return Global_32206;
}

int func_29()//Position - 0x2963
{
	if (Global_32203 == 2)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0, int iParam1)//Position - 0x2977
{
	if (Global_32203 == 0)
	{
		Global_32203 = 1;
		Global_32204 = iParam0;
		Global_32205 = iParam1;
	}
}

int func_31()//Position - 0x2994
{
	if (Global_32203 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32()//Position - 0x29A8
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
	func_33(Var0);
	func_122("WHINE");
	func_108("CHOP_NONEAR", 0);
	func_17();
}

void func_33(struct<3> Param0)//Position - 0x29D7
{
	if (SYSTEM::VDIST(Param0, Param0) > 1f)
	{
	}
}

void func_34()//Position - 0x29F0
{
	Global_32203 = 3;
}

int func_35()//Position - 0x29FC
{
	iLocal_321 = -1;
	Local_322 = { 0f, 0f, 0f };
	Local_323 = { 0f, 0f, 0f };
	func_36(0);
	if (iLocal_321 == -1)
	{
		func_36(1);
	}
	if (iLocal_321 > -1)
	{
		return 1;
	}
	return 0;
}

void func_36(int iParam0)//Position - 0x2A35
{
	float fVar0;
	int iVar1;
	
	fVar0 = 9999f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if ((iLocal_317[iVar1] > -1 && fLocal_318[iVar1] < fVar0) && func_37(iParam0, iVar1))
		{
			fVar0 = fLocal_318[iVar1];
			iLocal_321 = iLocal_317[iVar1];
			iLocal_314 = iVar1;
			Local_322 = { Local_319[iVar1 /*3*/] };
			Local_323 = { Local_320[iVar1 /*3*/] };
		}
		iVar1++;
	}
}

int func_37(int iParam0, int iParam1)//Position - 0x2AB5
{
	if (iParam0 == 1)
	{
		return 1;
	}
	if (iParam1 == 1 && ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) >= 200)
	{
		return 0;
	}
	if (iParam1 == 0 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) >= 100)
	{
		return 0;
	}
	return 1;
}

int func_38()//Position - 0x2AFE
{
	if (iLocal_315 == 5)
	{
		iLocal_315 = 0;
	}
	switch (iLocal_315)
	{
		case 0:
			if (iLocal_317[0] > -1)
			{
				if (func_31())
				{
					func_30(0, iLocal_317[0]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_317[0] = -1;
					}
					func_34();
					iLocal_315 = 1;
				}
			}
			else
			{
				iLocal_315 = 1;
			}
			break;
		
		case 1:
			if (iLocal_317[1] > -1)
			{
				if (func_31())
				{
					func_30(1, iLocal_317[1]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_317[1] = -1;
					}
					func_34();
					iLocal_315 = 2;
				}
			}
			else
			{
				iLocal_315 = 2;
			}
			break;
		
		case 2:
			if (iLocal_317[2] > -1)
			{
				if (func_31())
				{
					func_30(2, iLocal_317[2]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_317[2] = -1;
					}
					func_34();
					iLocal_315 = 3;
				}
			}
			else
			{
				iLocal_315 = 3;
			}
			break;
		
		case 3:
			if (iLocal_317[3] > -1)
			{
				if (func_26(iLocal_317[3]))
				{
					iLocal_317[3] = -1;
				}
			}
			if (iLocal_317[4] > -1)
			{
				if (func_25(iLocal_317[4]))
				{
					iLocal_317[4] = -1;
				}
			}
			iLocal_315 = 5;
			return 1;
			break;
	}
	return 0;
}

float func_39(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x2C42
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

void func_40(int iParam0)//Position - 0x2C7C
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_361))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_361, true) };
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_361))
		{
			ENTITY::DETACH_ENTITY(iLocal_361, true, true);
		}
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_361);
		if (iParam0 == 1 && iLocal_367 == joaat("weapon_ball"))
		{
			MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 0.1f, 0);
		}
	}
}

void func_41()//Position - 0x2CD7
{
	struct<3> Var0;
	
	if ((((((func_43() != 1 && (MISC::GET_GAME_TIMER() - iLocal_62) > 10000) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && iLocal_86 == 0) && iLocal_367 != joaat("weapon_ball")) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f) == 0) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(iLocal_69, ENTITY::GET_ENTITY_COORDS(iLocal_69, true), 100f) == 0)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_76, false) < 1f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_355, false) > 20f)
				{
					func_42(&iLocal_349, 0);
					iLocal_349 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 10f, joaat("prop_streetlight_01"), true, false, true);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_349))
					{
						Local_355 = { ENTITY::GET_ENTITY_COORDS(iLocal_349, true) };
						func_121(14, 1);
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_354, false) > 20f)
				{
					Local_354 = { Var0 };
					func_121(13, 1);
				}
			}
			Local_76 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
			iLocal_62 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_42(int* iParam0, bool bParam1)//Position - 0x2E0C
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
		}
	}
}

int func_43()//Position - 0x2E47
{
	if (Global_113386.f_20118.f_254.f_5)
	{
		if (Global_113386.f_20118.f_254 > 66f)
		{
			return 1;
		}
		else if (Global_113386.f_20118.f_254 > 33f)
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	return 2;
}

void func_44()//Position - 0x2E94
{
	if (((!BitTest(Global_113386.f_10049.f_94, 7) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		MISC::SET_BIT(&(Global_113386.f_10049.f_94), 7);
		func_15("CHOP_H_BALL", -1);
	}
	if (((func_125(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && func_125(iLocal_69)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, true))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_367, true);
		if (((((iLocal_367 == joaat("weapon_ball") || iLocal_367 == joaat("weapon_grenade")) || iLocal_367 == joaat("weapon_smokegrenade")) || iLocal_367 == joaat("weapon_stickybomb")) || iLocal_367 == joaat("weapon_molotov")) || iLocal_367 == joaat("weapon_flare"))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_121(15, 1);
			}
			else if (((MISC::GET_GAME_TIMER() - iLocal_63) > 10000 && ENTITY::GET_ENTITY_SPEED(iLocal_69) < 1f) && func_4(PLAYER::PLAYER_PED_ID(), iLocal_69, 1) < 5f)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@enter");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@idle_a");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@exit");
				if ((STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@enter") && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@exit"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_69);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					iLocal_63 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_45()//Position - 0x3074
{
	if (func_16() && !func_46(4))
	{
		if ((func_125(iLocal_69) && iLocal_86 == 0) && PED::IS_PED_IN_GROUP(iLocal_69))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_69);
		}
		func_121(12, 1);
	}
}

int func_46(int iParam0)//Position - 0x30B8
{
	int iVar0;
	
	if (func_16())
	{
		iVar0 = 0;
		while (iVar0 < 58)
		{
			if (func_52(iVar0) == iParam0)
			{
				if (func_47(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_47(int iParam0)//Position - 0x30F3
{
	return func_48(iParam0, 5, 1);
}

int func_48(int iParam0, int iParam1, bool bParam2)//Position - 0x3103
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			return BitTest(func_49(func_51(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x3164
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_50(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_50(var uParam0)//Position - 0x31A1
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_51(int iParam0)//Position - 0x31D5
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
			return 11352;
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
		
		default:
			break;
	}
	return 13122;
}

int func_52(int iParam0)//Position - 0x3550
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

void func_53()//Position - 0x385F
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (iLocal_60 == -1)
		{
			iLocal_60 = MISC::GET_GAME_TIMER();
			iLocal_61 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000);
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_60) > iLocal_61)
		{
			func_122("SNARL");
			iLocal_60 = -1;
		}
	}
}

void func_54()//Position - 0x38A2
{
	if (func_125(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_86 > 1 && iLocal_86 < 8)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 309, true);
		}
		if (iLocal_93 == 1 && iLocal_86 == 1)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 313, true);
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_372 = MISC::GET_GAME_TIMER();
				iLocal_65 = -1;
				iLocal_66 = -1;
				iLocal_57 = MISC::GET_GAME_TIMER();
				func_82();
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
				iLocal_385 = 1;
				iLocal_86 = 1;
			}
			else
			{
				if (iLocal_369 != 0)
				{
					iLocal_369 = 0;
				}
				iLocal_313 = 0;
				iLocal_59 = -1;
				if (func_81())
				{
					func_121(3, 1);
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_86 = 15;
			}
			else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (func_80())
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) != PLAYER::PLAYER_PED_ID())
					{
						func_121(3, 1);
					}
					else
					{
						if (!func_125(iLocal_78))
						{
							iLocal_78 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							func_79();
							func_78();
						}
						STREAMING::REQUEST_ANIM_DICT(sLocal_371);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371) && func_125(iLocal_78))
						{
							if (PED::IS_PED_IN_GROUP(iLocal_69))
							{
								PED::REMOVE_PED_FROM_GROUP(iLocal_69);
							}
							if (func_77())
							{
								if (iLocal_65 == -1)
								{
									iLocal_65 = MISC::GET_GAME_TIMER();
								}
								if (func_76())
								{
									func_75(1);
									iLocal_86 = 6;
								}
								else
								{
									func_74();
								}
							}
							else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iLocal_78, 0, false, false))
							{
								if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_78, 1) > 0.9f)
								{
									iLocal_86 = 4;
								}
								else
								{
									iLocal_86 = 2;
								}
							}
							else
							{
								func_75(1);
								iLocal_86 = 6;
							}
						}
					}
				}
				else if (func_22())
				{
					iLocal_86 = 14;
				}
				else
				{
					if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113386.f_10049.f_94, 3)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113386.f_10049.f_94), 3);
						func_15("CHOP_H_NOVEH", -1);
					}
					func_121(3, 1);
				}
			}
			else
			{
				if (func_80())
				{
					STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
					func_74();
				}
				if (iLocal_313 == 0 && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_69, 185, false);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !func_23())
					{
						if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) == joaat("taxi"))
						{
						}
						else if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) >= 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0, false))
						{
							if (!func_73())
							{
								func_108("CHOP_RIDE", 0);
							}
						}
					}
					else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) || func_23())
					{
						func_108("CHOP_FOLLOW", 0);
					}
					iLocal_313 = 1;
				}
			}
			break;
		
		case 2:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_86 = 15;
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_86 = 3;
				}
			}
			break;
		
		case 3:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_86 = 15;
			}
			else if (func_125(iLocal_78) && func_70())
			{
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_94, false, false);
				}
				iLocal_383 = MISC::GET_GAME_TIMER();
				iLocal_65 = MISC::GET_GAME_TIMER();
				iLocal_86 = 4;
			}
			break;
		
		case 4:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_86 = 15;
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_371);
				if (func_125(iLocal_78))
				{
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_78, iLocal_94) < 0.95f)
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_94, false, false);
						iLocal_383 = MISC::GET_GAME_TIMER();
					}
					if (func_76() && MISC::GET_GAME_TIMER() >= iLocal_383 + 300)
					{
						if (!func_113(PLAYER::PLAYER_PED_ID(), -2017877118) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371))
						{
							func_72();
							func_69(1, 1);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_69);
							iLocal_87 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_87, iLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_78, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_69, iLocal_87, sLocal_371, "get_in", 1000f, -8f, 4, 0, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
							iLocal_86 = 5;
						}
					}
					else
					{
						func_74();
					}
				}
			}
			break;
		
		case 5:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(iLocal_380))
				{
					CAM::SET_USE_HI_DOF();
				}
				STREAMING::REQUEST_ANIM_DICT(sLocal_371);
				if (((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_87) > 0.99f) && func_125(iLocal_78))
				{
					func_69(0, 1);
					func_75(0);
					iLocal_86 = 6;
				}
			}
			break;
		
		case 6:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschop_vehicleenter_exit") && func_125(iLocal_78))
				{
					if ((!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_78, 1) > 0.1f) && !func_77())
					{
						func_71();
					}
					iLocal_86 = 7;
				}
			}
			break;
		
		case 7:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (func_125(iLocal_78) && func_70())
			{
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_78, iLocal_94, false);
				}
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			func_72();
			func_67(&iLocal_70);
			func_40(1);
			if (iLocal_54 == -1)
			{
				iLocal_54 = MISC::GET_GAME_TIMER();
				iLocal_55 = 7000;
			}
			if (func_125(iLocal_78))
			{
				if (func_66())
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (FIRE::IS_ENTITY_ON_FIRE(iLocal_78))
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SPEED(iLocal_78) < 5f)
					{
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_94, false, false);
						}
						iLocal_86 = 12;
					}
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 75))
				{
					if (ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_78))
					{
						func_68(2f, 0f, 0f, 1);
					}
					else if (func_77())
					{
						iLocal_86 = 9;
					}
					else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iLocal_78, 0, false, false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_78, 10f, 1, false);
						if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
						{
							iLocal_86 = 12;
						}
						else
						{
							iLocal_86 = 10;
						}
					}
					else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iLocal_78, -1, false, false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_78, 10f, 1, false);
						func_68(-2f, 0f, 0f, 0);
					}
					else
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_78, 10f, 1, false);
						func_68(0f, -4f, 0f, 0);
					}
				}
				else
				{
					func_65();
					func_63();
					func_62();
					if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113386.f_10049.f_94, 2)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113386.f_10049.f_94), 2);
						func_15("CHOP_H_CAR", -1);
					}
				}
			}
			else
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		
		case 9:
			func_72();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_113(PLAYER::PLAYER_PED_ID(), -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		
		case 10:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_86 = 11;
				}
			}
			break;
		
		case 11:
			func_72();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (func_125(iLocal_78) && func_70())
			{
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_94, false, false);
				}
				iLocal_86 = 12;
			}
			break;
		
		case 12:
			func_72();
			STREAMING::REQUEST_ANIM_DICT(sLocal_371);
			if ((!func_113(PLAYER::PLAYER_PED_ID(), -2017877118) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371)) && func_125(iLocal_78))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_69);
				iLocal_87 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_87, iLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_78, "seat_pside_f"));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_69, iLocal_87, sLocal_371, "get_out", 1000f, -8f, 10, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
				iLocal_86 = 13;
			}
			break;
		
		case 13:
			func_72();
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && (MISC::GET_GAME_TIMER() - iLocal_373) > 1500) && !func_113(PLAYER::PLAYER_PED_ID(), -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_87) > 0.99f))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(iLocal_69, iLocal_69, 0f, 5f, 0f, 1f, 20000);
				iLocal_86 = 15;
			}
			break;
		
		case 14:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_86 = 15;
			}
			else
			{
				func_65();
				if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113386.f_10049.f_94, 5)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_113386.f_10049.f_94), 5);
					func_15("CHOP_H_BIKE", -1);
				}
			}
			break;
		
		case 15:
			func_72();
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_57();
				func_99(0, 0, 0);
				STREAMING::REMOVE_ANIM_DICT("misschop_vehicleenter_exit");
				STREAMING::REMOVE_ANIM_DICT(sLocal_371);
				iLocal_62 = MISC::GET_GAME_TIMER();
				func_56();
				func_55(&iLocal_78);
				iLocal_78 = 0;
				iLocal_54 = -1;
				TASK::CLEAR_PED_TASKS(iLocal_69);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_69, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_69, 185, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
				func_121(2, 1);
			}
			else if (!func_113(PLAYER::PLAYER_PED_ID(), -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			break;
	}
}

void func_55(int* iParam0)//Position - 0x42AF
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_56()//Position - 0x42E7
{
	if (((iLocal_385 == 1 && func_125(VEHICLE::GET_LAST_DRIVEN_VEHICLE())) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) > 1) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), iLocal_94))
	{
		VEHICLE::SET_VEHICLE_DOOR_LATCHED(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), iLocal_94, false, true, false);
	}
}

void func_57()//Position - 0x4330
{
	if ((!HUD::DOES_BLIP_EXIST(iLocal_70) && func_125(iLocal_69)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, true))
	{
		if (func_179(126))
		{
			func_61(139, 0, 0);
		}
		else
		{
			func_61(138, 0, 0);
		}
		iLocal_70 = func_58(iLocal_69, 0, 145);
		HUD::SET_BLIP_SPRITE(iLocal_70, 273);
	}
}

int func_58(int iParam0, bool bParam1, int iParam2)//Position - 0x438A
{
	int iVar0;
	
	iVar0 = func_59(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_59(int iParam0, bool bParam1, bool bParam2)//Position - 0x43D4
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_60(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_60(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_60(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_60(bool bParam0, float fParam1, float fParam2)//Position - 0x4478
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_61(int iParam0, bool bParam1, bool bParam2)//Position - 0x448F
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_32338[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
		if (Global_32335 == 1)
		{
			Global_32336 = 1;
		}
		Global_32335 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_32338[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_32338[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}
}

void func_62()//Position - 0x458F
{
	if (func_125(iLocal_69) && func_125(iLocal_78))
	{
		if (iLocal_372 > -1)
		{
			if (((MISC::GET_GAME_TIMER() - iLocal_372) > 500 && ENTITY::GET_ENTITY_SPEED(iLocal_78) > 5f) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_78))
			{
				TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_371, "shunt_from_back", 8f, -8f, -1, 0, 0f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
				func_122("GROWL");
				iLocal_372 = -1;
				iLocal_57 = MISC::GET_GAME_TIMER();
			}
		}
		else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_69, sLocal_371, "shunt_from_back", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_69, sLocal_371, "shunt_from_back", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_69, sLocal_371, "shunt_from_back") > 0.98f))
		{
			TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_371, "sit", 8f, -8f, -1, 1, 0f, false, false, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
			iLocal_372 = MISC::GET_GAME_TIMER();
			iLocal_57 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_63()//Position - 0x4683
{
	if (iLocal_372 > -1 && (MISC::GET_GAME_TIMER() - iLocal_54) > iLocal_55)
	{
		if (((AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 7 || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 8) || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 9) || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 13)
		{
			func_64();
			iLocal_54 = MISC::GET_GAME_TIMER();
			iLocal_55 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000);
		}
	}
}

void func_64()//Position - 0x46E8
{
	if ((MISC::GET_GAME_TIMER() - iLocal_57) > 500)
	{
		iLocal_57 = MISC::GET_GAME_TIMER();
		if (func_125(iLocal_69) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
			TASK::TASK_PLAY_ANIM(0, sLocal_371, "bark", 4f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_371, "sit", 8f, -8f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
		}
	}
}

void func_65()//Position - 0x476E
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && bLocal_327 == 1)
	{
		if (iLocal_59 == -1)
		{
			iLocal_59 = MISC::GET_GAME_TIMER();
		}
		if (((MISC::GET_GAME_TIMER() - iLocal_59) > 10000 && iLocal_372 > -1) && func_38())
		{
			if (func_35())
			{
				if (func_125(iLocal_69))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false))
					{
						func_64();
					}
					else
					{
						func_122("BARK");
					}
				}
			}
			iLocal_59 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_66()//Position - 0x47E9
{
	float fVar0;
	struct<3> Var1;
	
	if (func_125(iLocal_78))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iLocal_78))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_78, true) };
			if (iLocal_68 == -1)
			{
				iLocal_68 = MISC::GET_GAME_TIMER();
			}
			if (WATER::GET_WATER_HEIGHT(Var1, &fVar0))
			{
				if ((fVar0 - Var1.f_2) > 1f)
				{
					return 1;
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_68) > 3000)
				{
					func_122("AGITATED");
					iLocal_68 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			iLocal_68 = -1;
		}
	}
	return 0;
}

void func_67(int* iParam0)//Position - 0x485C
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_68(struct<3> Param0, int iParam1)//Position - 0x487C
{
	if (func_125(PLAYER::PLAYER_PED_ID()) && func_125(iLocal_69))
	{
		if (func_125(iLocal_78))
		{
			if ((iParam1 == 1 && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94)) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_78, 1) < 0.9f)
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_94, false, false);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87))
			{
				PED::DETACH_SYNCHRONIZED_SCENE(iLocal_87);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_69);
			func_124(iLocal_69, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_78, Param0), ENTITY::GET_ENTITY_HEADING(iLocal_69), 1, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
			func_69(0, 0);
			iLocal_86 = 15;
		}
		else
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87))
			{
				PED::DETACH_SYNCHRONIZED_SCENE(iLocal_87);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_69);
			func_124(iLocal_69, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), (Param0.f_0 + 1f), Param0.f_1, Param0.f_2), ENTITY::GET_ENTITY_HEADING(iLocal_69), 1, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
			func_69(0, 0);
			iLocal_86 = 15;
		}
	}
}

void func_69(int iParam0, int iParam1)//Position - 0x4961
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	if (iParam0 == 1)
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_380) && func_125(iLocal_78))
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar2 == 0)
			{
				Var0 = { 1.11573f, -1.40338f, 0.555789f };
				Var1 = { 0.5f, 0f, 0.3f };
			}
			else if (iVar2 == 1)
			{
				Var0 = { -1.15872f, 1.75252f, 0.761228f };
				Var1 = { 0f, 0f, 0.3f };
			}
			else if (iVar2 == 2)
			{
				Var0 = { -1.89975f, 0.339287f, 0.661881f };
				Var1 = { 0f, 0f, 0.3f };
			}
			else
			{
				Var0 = { 1.38134f, -0.1248f, 0.580783f };
				Var1 = { 0f, 0f, 0.3f };
			}
			iLocal_380 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			Var3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_78, "seat_pside_f")) };
			Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_78, Var3) };
			Var5 = { Var0 + Var4 };
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_380, iLocal_78, Var5, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_380, iLocal_78, Var4 + Var1, true);
			CAM::SET_CAM_FOV(iLocal_380, 50f);
			CAM::SHAKE_CAM(iLocal_380, "HAND_SHAKE", 0.3f);
			CAM::SET_CAM_DOF_PLANES(iLocal_380, 0f, 0f, 100000f, 100000f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_380))
	{
		if (iParam1 == 1)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_ALL_CAMS(false);
	}
}

int func_70()//Position - 0x4AEE
{
	if (func_125(iLocal_78))
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_373) > 500 || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94)) || func_77())
		{
			return 1;
		}
	}
	return 0;
}

void func_71()//Position - 0x4B2B
{
	TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misschop_vehicleenter_exit", sLocal_370, 8f, -8f, -1, 40, 0f, false, false, false);
	iLocal_373 = MISC::GET_GAME_TIMER();
}

void func_72()//Position - 0x4B5A
{
	PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	PAD::DISABLE_CONTROL_ACTION(0, 23, true);
}

int func_73()//Position - 0x4B72
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_74()//Position - 0x4B94
{
	if (!func_113(iLocal_69, 713668775) && func_4(PLAYER::PLAYER_PED_ID(), iLocal_69, 1) > 1f)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_69, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), 2f, 0f, 0f), 2f, 20000, 0.25f, false, 40000f);
	}
}

void func_75(int iParam0)//Position - 0x4BE2
{
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	func_67(&iLocal_70);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_69, true);
	PED::SET_PED_INTO_VEHICLE(iLocal_69, iLocal_78, 0);
	TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_371, "sit", 8f, -8f, -1, 1, 0f, false, false, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
}

int func_76()//Position - 0x4C3A
{
	float fVar0;
	
	if (func_125(iLocal_78) && func_125(iLocal_69))
	{
		if (iLocal_66 == -1)
		{
			fVar0 = func_4(iLocal_78, iLocal_69, 1);
			iLocal_66 = SYSTEM::FLOOR((fVar0 * 1000f));
			if (iLocal_66 < 5000)
			{
				iLocal_66 = 5000;
			}
		}
		if (((func_39(iLocal_69, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_78, 2f, 0f, 0f), 0) < 1f || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 72)) || (iLocal_65 > -1 && (MISC::GET_GAME_TIMER() - iLocal_65) > iLocal_66))
		{
			return 1;
		}
	}
	return 0;
}

int func_77()//Position - 0x4CCF
{
	int iVar0;
	
	if (func_125(iLocal_78))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true));
		if (((((((((((((((((((((((iVar0 == joaat("airbus") || iVar0 == joaat("barracks")) || iVar0 == joaat("barracks2")) || iVar0 == joaat("biff")) || iVar0 == joaat("bus")) || iVar0 == joaat("coach")) || iVar0 == joaat("hauler")) || iVar0 == joaat("mixer")) || iVar0 == joaat("mixer2")) || iVar0 == joaat("packer")) || iVar0 == joaat("pbus")) || iVar0 == joaat("phantom")) || iVar0 == joaat("pounder")) || iVar0 == joaat("riot")) || iVar0 == joaat("rubble")) || iVar0 == joaat("scrap")) || iVar0 == joaat("stockade")) || iVar0 == joaat("stockade3")) || iVar0 == joaat("tiptruck")) || iVar0 == joaat("tiptruck2")) || iVar0 == joaat("towtruck")) || iVar0 == joaat("towtruck2")) || iVar0 == MISC::GET_HASH_KEY("monster")) || iVar0 == MISC::GET_HASH_KEY("marshall"))
		{
			return 1;
		}
	}
	return 0;
}

void func_78()//Position - 0x4E47
{
	int iVar0;
	
	if (func_125(iLocal_78))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_78);
		if (iVar0 == joaat("coach"))
		{
			iLocal_94 = 0;
		}
		else
		{
			iLocal_94 = 1;
		}
	}
}

void func_79()//Position - 0x4E73
{
	if (func_125(iLocal_78))
	{
		iLocal_369 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(iLocal_78);
		switch (iLocal_369)
		{
			case -1965057835:
			case 919485892:
			case -1838563680:
			case 1768419516:
			case 1576485197:
			case 929009548:
			case -497732145:
			case -1659990386:
			case -662028469:
			case 1939145032:
				sLocal_371 = "creatures@rottweiler@in_vehicle@van";
				sLocal_370 = "van_ds_open_door_for_chop";
				break;
			
			case -2066252141:
			case 1105669833:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -782720499:
			case -1150063973:
			case 1630950849:
			case -463340997:
			case 2033852426:
				sLocal_371 = "creatures@rottweiler@in_vehicle@low_car";
				sLocal_370 = "low_ds_open_door_for_chop";
				break;
			
			case 434478421:
			case 1816176348:
			case 1710903184:
			case 1663892749:
				sLocal_371 = "creatures@rottweiler@in_vehicle@4x4";
				sLocal_370 = "std_ds_open_door_for_chop";
				break;
			
			default:
				sLocal_371 = "creatures@rottweiler@in_vehicle@std_car";
				sLocal_370 = "std_ds_open_door_for_chop";
				break;
		}
		if (ENTITY::GET_ENTITY_MODEL(iLocal_78) == joaat("brawler"))
		{
			sLocal_371 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_370 = "std_ds_open_door_for_chop";
		}
	}
}

int func_80()//Position - 0x4F81
{
	if ((((((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1) && VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, false)) && !func_23())
	{
		return 1;
	}
	return 0;
}

int func_81()//Position - 0x5017
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-14.5f, -1437.2f, 31.1f))
		{
			return 1;
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(7.6f, 537.3f, 176f))
		{
			return 1;
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(130.2632f, -1295.035f, 28.2695f))
		{
			return 1;
		}
	}
	return 0;
}

void func_82()//Position - 0x5095
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), 2f, 0f, 0f) };
	Var3 = { Var1 - Var0 };
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), -2f, 0f, 0f) };
	Var4 = { Var2 - Var0 };
	if (SYSTEM::VMAG(Var3) < SYSTEM::VMAG(Var4))
	{
		iLocal_93 = 1;
	}
	else
	{
		iLocal_93 = 0;
	}
}

void func_83()//Position - 0x510D
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	
	if ((iLocal_315 != 5 || (MISC::GET_GAME_TIMER() - iLocal_316) < 1000) || bLocal_327 == 0)
	{
		return;
	}
	func_97();
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 102)
	{
		if (func_96(iVar2))
		{
			Var0 = { func_95(iVar2, 1) };
			if (!func_94(Var0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_69, true), Var0, true);
				if (fVar1 < fLocal_318[2] && fVar1 < fLocal_324)
				{
					iLocal_317[2] = iVar2;
					fLocal_318[2] = fVar1;
					Local_319[2 /*3*/] = { func_95(iVar2, 0) };
					Local_320[2 /*3*/] = { Var0 };
				}
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 76)
	{
		if (func_93(iVar2))
		{
			Var0 = { func_92(iVar2, 1) };
			if (!func_94(Var0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_69, true), Var0, true);
				if (fVar1 < fLocal_318[1] && fVar1 < fLocal_324)
				{
					iLocal_317[1] = iVar2;
					fLocal_318[1] = fVar1;
					Local_319[1 /*3*/] = { func_92(iVar2, 0) };
					Local_320[1 /*3*/] = { Var0 };
				}
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 45)
	{
		if (func_91(iVar2))
		{
			Var0 = { func_90(iVar2, 1) };
			if (!func_94(Var0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_69, true), Var0, true);
				if (fVar1 < fLocal_318[0] && fVar1 < fLocal_324)
				{
					iLocal_317[0] = iVar2;
					fLocal_318[0] = fVar1;
					Local_319[0 /*3*/] = { func_90(iVar2, 0) };
					Local_320[0 /*3*/] = { Var0 };
				}
			}
		}
		iVar2++;
	}
	if (func_89())
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 50)
		{
			if (!func_26(iVar2) && func_88(iVar2))
			{
				Var0 = { func_87(iVar2, 1) };
				if (!func_94(Var0))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_69, true), Var0, true);
					if (fVar1 < fLocal_318[3] && fVar1 < fLocal_324)
					{
						iLocal_317[3] = iVar2;
						fLocal_318[3] = fVar1;
						Local_319[3 /*3*/] = { func_87(iVar2, 0) };
						Local_320[3 /*3*/] = { Var0 };
					}
				}
			}
			iVar2++;
		}
	}
	if (func_86())
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 50)
		{
			if (!func_25(iVar2) && func_85(iVar2))
			{
				Var0 = { func_84(iVar2, 1) };
				if (!func_94(Var0))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_69, true), Var0, true);
					if (fVar1 < fLocal_318[4] && fVar1 < fLocal_324)
					{
						iLocal_317[4] = iVar2;
						fLocal_318[4] = fVar1;
						Local_319[4 /*3*/] = { func_84(iVar2, 0) };
						Local_320[4 /*3*/] = { Var0 };
					}
				}
			}
			iVar2++;
		}
	}
	iLocal_316 = MISC::GET_GAME_TIMER();
}

Vector3 func_84(int iParam0, int iParam1)//Position - 0x5420
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495.9f, 12.9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606.8925f, -3250.188f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.79f, -16.5774f;
			}
			break;
		
		case 2:
			return 1590.6f, -2810.174f, 3.4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.106f, 42.6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134.422f, -2607.024f, 14.77071f;
			}
			else
			{
				return 1133.688f, -2605.073f, 14.9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368.9316f, -2118.533f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.756f, 16.1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.024f, -1618.777f, 111.8313f;
			}
			break;
		
		case 7:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		
		case 8:
			return 17.5926f, -1213.207f, 28.3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910.0172f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.551f, 31.8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237.728f, -1099.15f, 37.52579f;
			}
			else
			{
				return 1231.973f, -1102.308f, 34.4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87.69075f, 810.3736f, 210.1258f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900.951f, 1389.582f, 218.1509f;
			}
			else
			{
				return -1907.515f, 1388.69f, 217.9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467.369f, -730.7552f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		
		case 14:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183.152f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.538f, -525.5859f, 39.9114f;
			}
			break;
		
		case 17:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		
		case 18:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169.397f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.488f, -65.4649f, 44.6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679.056f, 39.44059f, 160.7736f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24.21706f, 637.1212f, 206.3897f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		
		case 23:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531.895f, 870.3203f, 180.6775f;
			}
			else
			{
				return -1529.722f, 871.4257f, 180.6421f;
			}
			break;
		
		case 25:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		
		case 26:
			return -2809.354f, 1449.643f, 99.928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			else
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			break;
		
		case 28:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		
		case 29:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		
		case 31:
			return 1367.413f, 2180.632f, 96.6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.131f, 89.7842f;
			}
			break;
		
		case 33:
			return 889.3209f, 2870.052f, 55.2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		
		case 35:
			return -390.384f, 2963.26f, 18.2713f;
			break;
		
		case 36:
			return 71.6642f, 3279.368f, 30.3918f;
			break;
		
		case 37:
			return 1924.186f, 3471.256f, 50.3238f;
			break;
		
		case 38:
			return -583.1569f, 3580.375f, 266.2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514.302f, 3789.519f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517.613f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.047f, 3857.217f, 22.2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530.2739f, 4474.358f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.644f, 31.7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.813f, 4441.683f, 1.8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.055f, 4585.194f, 46.6362f;
			}
			break;
		
		case 44:
			return 2437.545f, 4779.959f, 33.5101f;
			break;
		
		case 45:
			return -1441.495f, 5414.888f, 23.3f;
			break;
		
		case 46:
			return 2196.251f, 5599.034f, 52.7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.61f, 48.8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378.4192f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		
		case 49:
			return 440.9546f, 6459.642f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_85(int iParam0)//Position - 0x5C6C
{
	switch (iParam0)
	{
		case 2:
		case 14:
		case 18:
		case 25:
			return 0;
			break;
		
		case 16:
			if (BitTest(Global_32118, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_86()//Position - 0x5CB0
{
	return Global_113386.f_10049.f_125.f_2;
}

Vector3 func_87(int iParam0, int iParam1)//Position - 0x5CC3
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034.274f, -3026.275f, 4.90197f;
			}
			else
			{
				return 1026.705f, -3026.052f, 13.3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040.979f, -2743.509f, 12.94983f;
			}
			else
			{
				return -1048.604f, -2734.218f, 12.8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93.9012f, -2711.314f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.511f, 7.74f;
			}
			break;
		
		case 3:
			return -917.6909f, -2527.384f, 22.3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509.742f, -2126.038f, 75.21973f;
			}
			else
			{
				return 1509.099f, -2120.551f, 75.61f;
			}
			break;
		
		case 6:
			return 76.0032f, -1970.475f, 20.1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1.82327f, -1732.614f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377.766f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.491f, -1404.374f, 1.7273f;
			}
			break;
		
		case 9:
			return 2864.808f, -1372.84f, 1.3151f;
			break;
		
		case 10:
			return -1035.812f, -1273.077f, 0.8919f;
			break;
		
		case 11:
			return -1821.136f, -1201.36f, 18.1698f;
			break;
		
		case 12:
			return 643.0116f, -1035.65f, 35.8891f;
			break;
		
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243.104f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.766f, -506.7138f, 37.6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 16:
			return 1095.953f, -210.4642f, 54.9477f;
			break;
		
		case 17:
			return -1724.522f, -196f, 57.2387f;
			break;
		
		case 18:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020.475f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347.5277f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 21:
			return 1052.248f, 167.611f, 87.7406f;
			break;
		
		case 22:
			return -2303.798f, 217.4301f, 166.6017f;
			break;
		
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688.1073f, 1204.671f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.928f, 344.3322f;
			}
			break;
		
		case 25:
			return -1548.763f, 1380.173f, 125.3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.129f, 356.613f;
			}
			break;
		
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 28:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069.213f, 2160.988f, 1.1327f;
			}
			else
			{
				return 3063.583f, 2212.63f, 2.5863f;
			}
			break;
		
		case 30:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.115f, 48.43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380.212f, 2655.176f, 0.832f;
			}
			else
			{
				return -2379.948f, 2656.953f, 1.4906f;
			}
			break;
		
		case 33:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 34:
			return -289.0195f, 2848.853f, 53.331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288.8409f, 2871.912f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297.378f, 2988.71f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3.51812f, 4332.451f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 40:
			return 1336.737f, 4307.2f, 37.1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007.103f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366.099f, 5182.461f, 0.68317f;
			}
			else
			{
				return 3436.453f, 5176.911f, 6.386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 45:
			return 444.6518f, 5571.781f, 780.1888f;
			break;
		
		case 46:
			return -402.9948f, 6319.279f, 31.2256f;
			break;
		
		case 47:
			return 1439.599f, 6335.208f, 22.9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466.109f, 6552.266f, 12.95773f;
			}
			else
			{
				return 1469.632f, 6552.174f, 13.6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66.19278f, 6668.888f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.198f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_88(int iParam0)//Position - 0x64A3
{
	switch (iParam0)
	{
		case 3:
		case 9:
		case 10:
		case 13:
		case 27:
		case 38:
			return 0;
			break;
		
		case 14:
			if (BitTest(Global_32118, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_89()//Position - 0x64F3
{
	return Global_113386.f_10049.f_122.f_2;
}

Vector3 func_90(int iParam0, bool bParam1)//Position - 0x6506
{
	switch (iParam0)
	{
		case 0:
			return 473.1829f, -2643.184f, 4.7209f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return 291.41f, -2090.78f, 16.29f;
			}
			else
			{
				return 289.2062f, -2091.221f, 16.0234f;
			}
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return 1173.839f, -1499.781f, 33.84875f;
			}
			else
			{
				return 1173.566f, -1495.763f, 34.1121f;
			}
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -461.7139f, -1699.202f, 17.85122f;
			}
			else
			{
				return -462f, -1701f, 18.8f;
			}
			break;
		
		case 4:
			return -1384.628f, -521.0416f, 30.084f;
			break;
		
		case 5:
			return -521.5692f, -601.7532f, 29.4482f;
			break;
		
		case 6:
			return -664.5f, 165.4552f, 58.3821f;
			break;
		
		case 7:
			return 329.3609f, -190.5986f, 53.2262f;
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return -477.44f, -1052.99f, 39.81f;
			}
			else
			{
				return -478.7744f, -1051.079f, 40.93f;
			}
			break;
		
		case 9:
			return -1268.071f, -1917.408f, 4.8583f;
			break;
		
		case 10:
			return -1221.908f, -2771.762f, 13.0545f;
			break;
		
		case 11:
			return -3088.668f, 652.9629f, 0.989f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return -629.3048f, 2036.067f, 157.3307f;
			}
			else
			{
				return -627.2166f, 2035.032f, 157.5585f;
			}
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return -2071.903f, 3411.504f, 30.36414f;
			}
			else
			{
				return -2048.483f, 3406.162f, 31.1504f;
			}
			break;
		
		case 14:
			return -424.0321f, 4012.767f, 80.4744f;
			break;
		
		case 15:
			return 1983.1f, 5174.5f, 47.6f;
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 2341.1f, 2576f, 45.7f;
			}
			else
			{
				return 2340.17f, 2573.89f, 45.77f;
			}
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 1663.9f, -25.91945f, 172.7747f;
			}
			else
			{
				return 1663.96f, -24.1101f, 172.7747f;
			}
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return 2614.451f, 1695.127f, 26.59907f;
			}
			else
			{
				return 2617.729f, 1693.417f, 30.8743f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -187.31f, 1545.16f, 314.07f;
			}
			else
			{
				return -187.0338f, 1555.677f, 321.2431f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 859.5025f, 2426.04f, 53.18517f;
			}
			else
			{
				return 868.7573f, 2423.536f, 60.8942f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return -1822.075f, 805.7814f, 137.7265f;
			}
			else
			{
				return -1822.967f, 803.8147f, 138.2005f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -1852.922f, 2054.42f, 139.9841f;
			}
			else
			{
				return -1851.628f, 2053.836f, 139.9841f;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -1075.515f, 4898.497f, 213.2767f;
			}
			else
			{
				return -1070.651f, 4898.934f, 213.2752f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1301.56f, 4306.6f, 36.39f;
			}
			else
			{
				return 1300.1f, 4308.1f, 37.3f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return -436.44f, 5983.5f, 30.49f;
			}
			else
			{
				return -437.94f, 5985.04f, 31.29f;
			}
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 1840.569f, 3693.77f, 33.2668f;
			}
			else
			{
				return 1838.577f, 3692.028f, 33.6172f;
			}
			break;
		
		case 27:
			return 533.1f, -23.8f, 70.6f;
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 445.83f, -986.48f, 29.69f;
			}
			else
			{
				return 446.4f, -988.5f, 29.77f;
			}
			break;
		
		case 29:
			return -1119.498f, -847.3371f, 18.6886f;
			break;
		
		case 30:
			return 391.2f, -1603.9f, 28.38f;
			break;
		
		case 31:
			return -890.8f, -2386.2f, 13.4f;
			break;
		
		case 32:
			if (bParam1 == 1)
			{
				return 282.75f, 953.05f, 209.95f;
			}
			else
			{
				return 284.7f, 954.2f, 210.1514f;
			}
			break;
		
		case 33:
			return -2003.115f, 544.7549f, 114.5077f;
			break;
		
		case 34:
			if (bParam1 == 1)
			{
				return -397.5786f, 1127.353f, 321.7291f;
			}
			else
			{
				return -386.8739f, 1142.42f, 321.5892f;
			}
			break;
		
		case 35:
			return -1521.811f, 1560.201f, 106.9392f;
			break;
		
		case 36:
			return 1391.945f, 3616.655f, 37.9259f;
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 45.37f, -1911.45f, 20.79f;
			}
			else
			{
				return 40.5177f, -1910.727f, 20.9706f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return 68.14f, 3749.36f, 38.73f;
			}
			else
			{
				return 70.3786f, 3755.605f, 38.7487f;
			}
			break;
		
		case 39:
			return 119.45f, -755.29f, 258.15f;
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return 156.35f, -1192.1f, 28.37f;
			}
			else
			{
				return 160.4134f, -1191.7f, 28.87f;
			}
			break;
		
		case 41:
			return 23.9296f, -633.9206f, 6.5084f;
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return 31.67f, 6542.78f, 30.44f;
			}
			else
			{
				return 30.9162f, 6546.791f, 30.4058f;
			}
			break;
		
		case 43:
			if (bParam1)
			{
				return 1333.057f, 4381.278f, 43.3703f;
			}
			else
			{
				return 1331.355f, 4392.887f, 44.012f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -1147.31f, 4939.27f, 221.27f;
			}
			else
			{
				return -1149.392f, 4938.771f, 221.3682f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_91(int iParam0)//Position - 0x6C94
{
	switch (iParam0)
	{
		case 33:
		case 39:
		case 41:
			return 0;
			break;
	}
	return 1;
}

Vector3 func_92(int iParam0, bool bParam1)//Position - 0x6CBD
{
	switch (iParam0)
	{
		case 0:
			return 131.2f, 6920.1f, 20.8f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return -1048.569f, 4917.414f, 208.4216f;
			}
			else
			{
				return -1046.277f, 4918.739f, 211.5379f;
			}
			break;
		
		case 2:
			return -2358.46f, 3251.397f, 100.5504f;
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -247.6219f, 6331.341f, 31.42602f;
			}
			else
			{
				return -249.9504f, 6331.219f, 32.7262f;
			}
			break;
		
		case 4:
			if (bParam1 == 1)
			{
				return -140.9f, -2491.45f, 43.45f;
			}
			else
			{
				return -141.0976f, -2498.239f, 40.0124f;
			}
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return -2924.697f, 46.50282f, 10.60369f;
			}
			else
			{
				return -2925.7f, 47.4f, 11.6f;
			}
			break;
		
		case 6:
			return -793.1981f, -726.4421f, 26.28f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return 124.0092f, -673.0096f, 41.02729f;
			}
			else
			{
				return 123.5196f, -674.2917f, 41.4945f;
			}
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return 1195.737f, -1481.694f, 33.8595f;
			}
			else
			{
				return 1194.709f, -1482.472f, 33.9594f;
			}
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return -35.88743f, 1945.738f, 189.1868f;
			}
			else
			{
				return -35.5254f, 1947.289f, 189.186f;
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return 753.4579f, 4174.996f, 39.8011f;
			}
			else
			{
				return 751.72f, 4175.14f, 40.95f;
			}
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 1791.256f, 4592.383f, 36.68283f;
			}
			else
			{
				return 1789.8f, 4592.4f, 36.78f;
			}
			break;
		
		case 12:
			return 341.311f, 2618.918f, 43.5124f;
			break;
		
		case 13:
			return 442.3755f, -223.602f, 55.0215f;
			break;
		
		case 14:
			if (bParam1 == 1)
			{
				return 1291.02f, -1760.94f, 51.05f;
			}
			else
			{
				return 1286.5f, -1754.4f, 52f;
			}
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 1659.438f, 5.4271f, 165.1176f;
			}
			else
			{
				return 1658.621f, 6.7752f, 166.1676f;
			}
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 1645.91f, 4866.72f, 40.98f;
			}
			else
			{
				return 1647.399f, 4865.839f, 41f;
			}
			break;
		
		case 17:
			return -1144.589f, -2004.452f, 12.3803f;
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return -1047.3f, -520.6f, 35f;
			}
			else
			{
				return -1048.32f, -521.2f, 35.14f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -1576.046f, -587.8257f, 33.97909f;
			}
			else
			{
				return -1576.817f, -586.3887f, 34.8528f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 953.44f, -123.42f, 73.35f;
			}
			else
			{
				return 954.5f, -121.34f, 74.18f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return 1134.201f, -665.9413f, 56.08261f;
			}
			else
			{
				return 1135.401f, -663.7875f, 56.088f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -2196.198f, 248.9123f, 173.612f;
			}
			else
			{
				return -2195.029f, 250.4256f, 173.6017f;
			}
			break;
		
		case 23:
			return 29.2f, 3635.4f, 39.8f;
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1724.429f, 3299.023f, 40.2235f;
			}
			else
			{
				return 1721.96f, 3300.464f, 40.3835f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 2617.321f, 3659.452f, 100.3867f;
			}
			else
			{
				return 2612.712f, 3662.564f, 101.1074f;
			}
			break;
		
		case 26:
			return -459.9625f, 1101.076f, 328.0211f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 2432.607f, 4994.333f, 45.25828f;
			}
			else
			{
				return 2430.906f, 4995.561f, 45.2685f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 3722.456f, 4521.837f, 20.39456f;
			}
			else
			{
				return 3724.5f, 4524.5f, 21.6f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return -446.9024f, 5997.598f, 30.3407f;
			}
			else
			{
				return -446.045f, 6000.882f, 31.9163f;
			}
			break;
		
		case 30:
			return 3291.4f, 5192.5f, 18.4f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 390.81f, -1436.07f, 28.45f;
			}
			else
			{
				return 388.7f, -1434.3f, 29.8f;
			}
			break;
		
		case 32:
			return -445.26f, -442.49f, 32.26f;
			break;
		
		case 33:
			if (bParam1)
			{
				return -1501.46f, 858.17f, 180.59f;
			}
			else
			{
				return -1500.08f, 857.59f, 180.59f;
			}
			break;
		
		case 34:
			return 2822.2f, -741.4f, 1.8f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return -3166.978f, 1102.622f, 19.80827f;
			}
			else
			{
				return -3165.613f, 1102.24f, 19.8928f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 1842.882f, 3670.457f, 32.68f;
			}
			else
			{
				return 1841.114f, 3675.253f, 34.086f;
			}
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 1828.794f, 2605.504f, 44.61582f;
			}
			else
			{
				return 1830.535f, 2603.828f, 45.7491f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return -32.61f, -1089.67f, 25.42f;
			}
			else
			{
				return -40.0528f, -1084.016f, 26.6224f;
			}
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 1439.012f, 6336.812f, 22.96477f;
			}
			else
			{
				return 1445.544f, 6334.057f, 23.975f;
			}
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return -782.5126f, -1352.245f, 8.0001f;
			}
			else
			{
				return -784.4851f, -1351.364f, 8.1001f;
			}
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return 962.8806f, -1826.419f, 30.07195f;
			}
			else
			{
				return 963.1673f, -1831.149f, 36.2055f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -1246.155f, -1531.647f, 3.2962f;
			}
			else
			{
				return -1246.494f, -1533.677f, 4.5262f;
			}
			break;
		
		case 43:
			if (bParam1 == 1)
			{
				return -765.5466f, 698.8101f, 143.3693f;
			}
			else
			{
				return -761.1058f, 701.9452f, 145.05f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -512.1094f, 28.86313f, 43.6153f;
			}
			else
			{
				return -513.4391f, 30.9069f, 43.9018f;
			}
			break;
		
		case 45:
			if (bParam1 == 1)
			{
				return 781.3839f, 1292.073f, 359.2997f;
			}
			else
			{
				return 780.3879f, 1295.705f, 361.6941f;
			}
			break;
		
		case 46:
			return 208.69f, 337.76f, 104.64f;
			break;
		
		case 47:
			if (bParam1 == 1)
			{
				return -1889.99f, 2078.38f, 140f;
			}
			else
			{
				return -1890.24f, 2073.26f, 140.11f;
			}
			break;
		
		case 48:
			return 153.6156f, -3073.998f, 4.8962f;
			break;
		
		case 49:
			if (bParam1)
			{
				return -306.2449f, -1180.538f, 22.711f;
			}
			else
			{
				return -304.0894f, -1180.886f, 23.9493f;
			}
			break;
		
		case 50:
			return -2006.987f, -556.4998f, 11.8813f;
			break;
		
		case 51:
			if (bParam1 == 1)
			{
				return -590.2079f, -289.8196f, 40.68631f;
			}
			else
			{
				return -588.1934f, -290.4782f, 43.7101f;
			}
			break;
		
		case 52:
			return -1795.826f, -855.7111f, 8.2048f;
			break;
		
		case 53:
			return -1557.108f, -1155.246f, 2.9158f;
			break;
		
		case 54:
			if (bParam1 == 1)
			{
				return -1470.71f, -1389.33f, 1.58f;
			}
			else
			{
				return -1467.483f, -1387.507f, 3.1432f;
			}
			break;
		
		case 55:
			return -684.8126f, -180.648f, 48.02f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return -1311.413f, 640.1154f, 136.9244f;
			}
			else
			{
				return -1307.062f, 641.4211f, 138.0582f;
			}
			break;
		
		case 57:
			return 2493.686f, 4963.541f, 43.7358f;
			break;
		
		case 58:
			if (bParam1 == 1)
			{
				return 1392.76f, 3602.94f, 33.98f;
			}
			else
			{
				return 1392.609f, 3605.799f, 34.9939f;
			}
			break;
		
		case 59:
			if (bParam1 == 1)
			{
				return -527.33f, 5295.7f, 73.17f;
			}
			else
			{
				return -535.4436f, 5297.496f, 76.3891f;
			}
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return -564.26f, 5353.13f, 69.23f;
			}
			else
			{
				return -551.5837f, 5349.404f, 75.253f;
			}
			break;
		
		case 61:
			if (bParam1 == 1)
			{
				return 3.18f, -1827.1f, 24.22f;
			}
			else
			{
				return 0.1911f, -1825.905f, 24.3295f;
			}
			break;
		
		case 62:
			if (bParam1 == 1)
			{
				return 62.25f, 3681.06f, 38.84f;
			}
			else
			{
				return 63.8867f, 3683.49f, 39.1543f;
			}
			break;
		
		case 63:
			return 155.384f, -741.179f, 258.6519f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return 126.61f, -1206.29f, 28.3f;
			}
			else
			{
				return 124.265f, -1205.882f, 28.2951f;
			}
			break;
		
		case 65:
			return 27.449f, -625.31f, 15.462f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -129.04f, -662.04f, 39.51f;
			}
			else
			{
				return -129.0374f, -659.2689f, 41.0016f;
			}
			break;
		
		case 67:
			if (bParam1)
			{
				return 1138.62f, -1598.56f, 33.69f;
			}
			else
			{
				return 1138.63f, -1596.61f, 35.07f;
			}
			break;
		
		case 68:
			if (bParam1)
			{
				return 1149.68f, -1525.56f, 33.84f;
			}
			else
			{
				return 1147.55f, -1527.83f, 36.01f;
			}
			break;
		
		case 69:
			if (bParam1)
			{
				return 297.48f, -1448.79f, 28.97f;
			}
			else
			{
				return 296.44f, -1450.75f, 30.4f;
			}
			break;
		
		case 70:
			if (bParam1)
			{
				return 324.21f, -1392.68f, 31.51f;
			}
			else
			{
				return 322.27f, -1393.75f, 32.79f;
			}
			break;
		
		case 71:
			if (bParam1)
			{
				return 293.2f, -597.92f, 42.28f;
			}
			else
			{
				return 294.3f, -598.1f, 43.73f;
			}
			break;
		
		case 72:
			if (bParam1)
			{
				return 358f, -592.66f, 27.79f;
			}
			else
			{
				return 357.07f, -590.63f, 29.08f;
			}
			break;
		
		case 73:
			if (bParam1)
			{
				return -495.45f, -326.18f, 33.5f;
			}
			else
			{
				return -496.4f, -324.7f, 34.75f;
			}
			break;
		
		case 74:
			if (bParam1)
			{
				return -450.91f, -351.93f, 33.5f;
			}
			else
			{
				return -449.82f, -353.49f, 34.75f;
			}
			break;
		
		case 75:
			return -2258.833f, 323.9413f, 184.9015f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_93(int iParam0)//Position - 0x7A95
{
	switch (iParam0)
	{
		case 2:
		case 17:
		case 55:
		case 63:
		case 65:
			return 0;
			break;
	}
	return 1;
}

int func_94(struct<3> Param0)//Position - 0x7ACA
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_95(int iParam0, bool bParam1)//Position - 0x7AF4
{
	switch (iParam0)
	{
		case 0:
			if (bParam1 == 1)
			{
				return -1760.36f, 428.6f, 126.31f;
			}
			else
			{
				return -1756.974f, 427.531f, 126.7f;
			}
			break;
		
		case 1:
			return -1595.742f, 2799.371f, 16.0205f;
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return -197.1486f, 1482.685f, 288.253f;
			}
			else
			{
				return -200.0114f, 1481.697f, 289.4303f;
			}
			break;
		
		case 3:
			return 256.77f, 2841.047f, 42.6599f;
			break;
		
		case 4:
			return -1360.223f, 4435.751f, 27.7754f;
			break;
		
		case 5:
			return 64.63f, 7051.253f, 15.8272f;
			break;
		
		case 6:
			return -456.2838f, 1593.799f, 358.0119f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return -3114.617f, 749.8445f, 11.59352f;
			}
			else
			{
				return -3111.614f, 749.2816f, 12.6285f;
			}
			break;
		
		case 8:
			return 713.6797f, 4095.969f, 33.765f;
			break;
		
		case 9:
			return 255.2671f, 2586.281f, 43.9619f;
			break;
		
		case 10:
			return -1292.64f, -3345.82f, 23.27f;
			break;
		
		case 11:
			return 3111.531f, 2214.848f, -8.6457f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return 555.82f, -839.05f, 39.84f;
			}
			else
			{
				return 555f, -837.81f, 55.08f;
			}
			break;
		
		case 13:
			return -2360f, 3245f, 91.9f;
			break;
		
		case 14:
			return 1691.152f, 2640.859f, 54.0693f;
			break;
		
		case 15:
			return 1982.37f, 6203.64f, 41.15f;
			break;
		
		case 16:
			return -2979f, 1588f, 23.3f;
			break;
		
		case 17:
			return 963.5308f, -1824.04f, 30.0708f;
			break;
		
		case 18:
			return -295.4187f, 6188.786f, 30.48932f;
			break;
		
		case 19:
			return -1778f, 124f, 67.9f;
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 157.5759f, 3133.994f, 42.45733f;
			}
			else
			{
				return 161.2925f, 3131.854f, 42.5892f;
			}
			break;
		
		case 21:
			return -888f, 5406f, 30.5f;
			break;
		
		case 22:
			return -1840f, 793f, 138.7f;
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -495.8039f, -1750.207f, 17.42509f;
			}
			else
			{
				return -495.9968f, -1747.231f, 18.5194f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return -1764.695f, -265.5809f, 47.6187f;
			}
			else
			{
				return -1763.359f, -263.2062f, 47.1481f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 548.0715f, -1642.451f, 27.2033f;
			}
			else
			{
				return 548.5943f, -1642.603f, 27.4425f;
			}
			break;
		
		case 26:
			return 736.0563f, 2595.556f, 72.9165f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 701.0009f, -1179.702f, 23.28737f;
			}
			else
			{
				return 699.2748f, -1181.671f, 33.2608f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return -1146.74f, 4938.93f, 221.27f;
			}
			else
			{
				return -1149.437f, 4940.362f, 221.3282f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 2543.91f, -432.76f, 93.12f;
			}
			else
			{
				return 2513.535f, -442.8484f, 113.0888f;
			}
			break;
		
		case 30:
			return -553.1764f, -2239.877f, 121.3704f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 987.16f, -108.02f, 73.3f;
			}
			else
			{
				return 987.15f, -105.88f, 74.13f;
			}
			break;
		
		case 32:
			return -1048f, -836f, 10.5f;
			break;
		
		case 33:
			return 312.6026f, 6606.896f, 27.8835f;
			break;
		
		case 34:
			return -37.21f, 2871.26f, 58.61f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return 61.91f, 3690.51f, 38.83f;
			}
			else
			{
				return 59f, 3692f, 38.92f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 2933.33f, 4617.07f, 47.72f;
			}
			else
			{
				return 2934.499f, 4617.067f, 47.736f;
			}
			break;
		
		case 37:
			return 57.8219f, -1932.121f, 20.4939f;
			break;
		
		case 38:
			return 378.26f, -334.3f, 45.63f;
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 2673.662f, 2793.702f, 31.8124f;
			}
			else
			{
				return 2676.045f, 2793.249f, 39.5934f;
			}
			break;
		
		case 40:
			return -1582.278f, 770.3486f, 188.1942f;
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return -1641.139f, -1032.815f, 4.63165f;
			}
			else
			{
				return -1640.546f, -1034.129f, 4.6074f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -151.09f, -214.36f, 44.73f;
			}
			else
			{
				return -159.7137f, -209.1721f, 48.938f;
			}
			break;
		
		case 43:
			return -1276.986f, -2451.886f, 72.0481f;
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -403.5827f, 1056.212f, 322.8414f;
			}
			else
			{
				return -402f, 1053f, 323f;
			}
			break;
		
		case 45:
			return 2728.987f, 1576.382f, 65.5818f;
			break;
		
		case 46:
			if (bParam1 == 1)
			{
				return -221.27f, 6133.62f, 30.48f;
			}
			else
			{
				return -215.9002f, 6125.27f, 56.278f;
			}
			break;
		
		case 47:
			return 2092.225f, 2492.302f, 89.4046f;
			break;
		
		case 48:
			return -1124.666f, -967.1614f, 5.6319f;
			break;
		
		case 49:
			if (bParam1 == 1)
			{
				return -405.5299f, 323.4063f, 107.7227f;
			}
			else
			{
				return -405f, 325f, 108.7f;
			}
			break;
		
		case 50:
			return -1087.31f, -2429.3f, 13f;
			break;
		
		case 51:
			return -1042.645f, 879.7763f, 160.2144f;
			break;
		
		case 52:
			if (bParam1 == 1)
			{
				return -1081.229f, 678.9454f, 141.8056f;
			}
			else
			{
				return -1078.35f, 682.2944f, 144.904f;
			}
			break;
		
		case 53:
			return -402.0679f, 1355.062f, 329.8384f;
			break;
		
		case 54:
			return 153.3876f, 713.6584f, 207.2551f;
			break;
		
		case 55:
			return 186.9f, 243.0269f, 140.55f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return 302.01f, -3254.45f, 4.8f;
			}
			else
			{
				return 304f, -3259f, 5f;
			}
			break;
		
		case 57:
			if (bParam1 == 1)
			{
				return -398.57f, -1883.96f, 20.54f;
			}
			else
			{
				return -397f, -1885f, 21.5f;
			}
			break;
		
		case 58:
			return 780.7208f, -211.0616f, 65.1143f;
			break;
		
		case 59:
			return -1755.011f, 184.3929f, 63.3711f;
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return 788.84f, 2164.06f, 52.1f;
			}
			else
			{
				return 786.0139f, 2164.951f, 52.0981f;
			}
			break;
		
		case 61:
			return 1707.228f, 4920.156f, 41.0637f;
			break;
		
		case 62:
			return -684.9417f, 5793.045f, 16.331f;
			break;
		
		case 63:
			return -2188f, 4251f, 48f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return -1099.08f, 2711.35f, 18.11f;
			}
			else
			{
				return -1103f, 2715f, 19f;
			}
			break;
		
		case 65:
			return 581f, -2805f, 5.5f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -663.95f, -1998.85f, 6.1f;
			}
			else
			{
				return -665.4316f, -2002.04f, 7.5968f;
			}
			break;
		
		case 67:
			return 1442.905f, -1479.759f, 62.2245f;
			break;
		
		case 68:
			if (bParam1 == 1)
			{
				return -361.92f, -141.76f, 37.58f;
			}
			else
			{
				return -356.5324f, -145.0359f, 41.7413f;
			}
			break;
		
		case 69:
			return 624.0116f, 558.6531f, 129.2455f;
			break;
		
		case 70:
			return 2833f, 2807f, 56.3785f;
			break;
		
		case 71:
			if (bParam1 == 1)
			{
				return 92.14449f, 6360.182f, 30.37612f;
			}
			else
			{
				return 94.0769f, 6356.961f, 30.3761f;
			}
			break;
		
		case 72:
			return -2231.514f, 3477.792f, 29.3291f;
			break;
		
		case 73:
			return 377f, 3582f, 32.5f;
			break;
		
		case 74:
			if (bParam1 == 1)
			{
				return -2947.47f, 445.6f, 14.29f;
			}
			else
			{
				return -2948f, 441f, 15f;
			}
			break;
		
		case 75:
			if (bParam1 == 1)
			{
				return 1292.88f, -3341.78f, 4.9f;
			}
			else
			{
				return 1296f, -3348f, 5.2f;
			}
			break;
		
		case 76:
			if (bParam1 == 1)
			{
				return -1165.46f, -2054.09f, 13.2f;
			}
			else
			{
				return -1165.883f, -2051.026f, 13.2268f;
			}
			break;
		
		case 77:
			if (bParam1 == 1)
			{
				return 1235.57f, -452.01f, 65.7f;
			}
			else
			{
				return 1235f, -450f, 66.5f;
			}
			break;
		
		case 78:
			return -467.0458f, -934.8019f, 46.9844f;
			break;
		
		case 79:
			return 226.7f, -1761f, 28.5f;
			break;
		
		case 80:
			if (bParam1 == 1)
			{
				return 1218.07f, 1898.69f, 76.87f;
			}
			else
			{
				return 1221f, 1898f, 77.4f;
			}
			break;
		
		case 81:
			if (bParam1 == 1)
			{
				return 1545.99f, 3802.7f, 32.42f;
			}
			else
			{
				return 1535.829f, 3798.217f, 33.4563f;
			}
			break;
		
		case 82:
			return 756.8601f, 6462.329f, 30.4229f;
			break;
		
		case 83:
			return -2319f, 4124f, 26f;
			break;
		
		case 84:
			return -3185f, 1053f, 20.2f;
			break;
		
		case 85:
			return 818.9215f, -3188.167f, 4.9007f;
			break;
		
		case 86:
			if (bParam1 == 1)
			{
				return -451.05f, -2264.24f, 6.61f;
			}
			else
			{
				return -457.3656f, -2262.646f, 7.5212f;
			}
			break;
		
		case 87:
			if (bParam1 == 1)
			{
				return 1409.86f, -757.22f, 65.8f;
			}
			else
			{
				return 1410.091f, -752.1061f, 66.2362f;
			}
			break;
		
		case 88:
			return 8.4875f, -441.2103f, 44.5639f;
			break;
		
		case 89:
			if (bParam1 == 1)
			{
				return -935.04f, 387.39f, 76.62f;
			}
			else
			{
				return -937.0176f, 391.544f, 80.2377f;
			}
			break;
		
		case 90:
			if (bParam1 == 1)
			{
				return 2748.49f, 3463.02f, 54.77f;
			}
			else
			{
				return 2746.554f, 3463.525f, 54.7144f;
			}
			break;
		
		case 91:
			return 1898.896f, 4921.975f, 47.8088f;
			break;
		
		case 92:
			if (bParam1 == 1)
			{
				return -315.51f, 6310.89f, 31.37f;
			}
			else
			{
				return -315.9772f, 6307.385f, 31.4906f;
			}
			break;
		
		case 93:
			return -1171f, 4927f, 224f;
			break;
		
		case 94:
			return -281.1712f, 2528.012f, 73.6376f;
			break;
		
		case 95:
			if (bParam1 == 1)
			{
				return 68.45f, 3756.27f, 38.74f;
			}
			else
			{
				return 68.453f, 3758.967f, 38.7395f;
			}
			break;
		
		case 96:
			return 25.2888f, -634.2637f, 6.5084f;
			break;
		
		case 97:
			if (bParam1 == 1)
			{
				return -1146.67f, 4939.11f, 221.27f;
			}
			else
			{
				return -1145.283f, 4940.286f, 221.3038f;
			}
			break;
		
		case 98:
			return 441.64f, 5570.38f, 780.45f;
			break;
		
		case 99:
			if (bParam1)
			{
				return 1353.152f, 4377.223f, 43.3416f;
			}
			else
			{
				return 1357.209f, 4388.445f, 43.872f;
			}
			break;
		
		case 100:
			return -102.0671f, -968.1538f, 295.5635f;
			break;
		
		case 101:
			return 2492.69f, 4963.014f, 43.6478f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_96(int iParam0)//Position - 0x8A33
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 11:
		case 13:
		case 14:
		case 30:
		case 34:
		case 43:
		case 45:
		case 50:
		case 55:
		case 88:
		case 96:
		case 98:
		case 100:
			return 0;
			break;
	}
	return 1;
}

void func_97()//Position - 0x8AA4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_317[iVar0] = -1;
		fLocal_318[iVar0] = 999999f;
		Local_319[iVar0 /*3*/] = { 0f, 0f, 0f };
		Local_320[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

void func_98(bool bParam0)//Position - 0x8AED
{
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_retriever"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_rottweiler"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_boar"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_coyote"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_deer"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_mtlion"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_pig"), bParam0);
}

void func_99(bool bParam0, int iParam1, bool bParam2)//Position - 0x8B42
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball")) == 0)
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"), 1, bParam0, bParam2);
		HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(joaat("weapon_ball"));
		if (iParam1 == 1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_384, "PICKUP_WEAPON_BALL", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", true);
		}
	}
}

void func_100()//Position - 0x8BA2
{
	if (!PED::IS_PED_IN_GROUP(iLocal_69))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iLocal_69, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
	}
	if (PED::IS_PED_IN_GROUP(iLocal_69))
	{
		PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_69, true);
		PED::SET_GROUP_FORMATION_SPACING(func_101(), 1f, 0.9f, 3f);
		PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(iLocal_69, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()), true);
	}
}

int func_101()//Position - 0x8BF0
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_102()//Position - 0x8C00
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		if (func_106(PLAYER::PLAYER_PED_ID(), iLocal_69) > 10f || func_105("CHOP_H_WHIS"))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_342) > 4000 && PAD::IS_CONTROL_JUST_PRESSED(2, 47))
			{
				iLocal_342 = MISC::GET_GAME_TIMER();
				func_103(PLAYER::PLAYER_PED_ID(), "CALL_CHOP", 3);
				if (func_105("CHOP_H_WHIS"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (iLocal_51 == 15 && iLocal_52 > 1)
				{
				}
				else
				{
					func_40(0);
					if (iLocal_51 == 2)
					{
						func_121(2, 0);
					}
					else
					{
						func_121(2, 1);
					}
				}
			}
			if (((!BitTest(Global_113386.f_10049.f_94, 8) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_94), 8);
				func_15("CHOP_H_WHIS", -1);
			}
		}
	}
}

void func_103(int iParam0, char* sParam1, int iParam2)//Position - 0x8CF7
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_104(iParam2), 1);
}

int func_104(int iParam0)//Position - 0x8D0E
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

bool func_105(char* sParam0)//Position - 0x8F03
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

float func_106(int iParam0, int iParam1)//Position - 0x8F16
{
	return func_4(iParam0, iParam1, 1);
}

int func_107()//Position - 0x8F27
{
	if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_69, 242628503) == 7 || PED::IS_PED_RAGDOLL(iLocal_69)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_69))
	{
		WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_69);
		return 1;
	}
	return 0;
}

void func_108(char* sParam0, int iParam1)//Position - 0x8F62
{
	func_111(&uLocal_148, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	func_109(&uLocal_148, "CHOP_AU", sParam0, 3, iParam1, 0);
}

void func_109(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8F8B
{
	func_110(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	MISC::SET_BIT(&Global_20471, 0);
	Global_21608 = iParam3;
	StringCopy(&Global_21595, sParam2, 24);
}

void func_110(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8FC6
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
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

void func_111(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x901C
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

void func_112()//Position - 0x90B7
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	if (iVar0 == 0)
	{
		TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_80[1], "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
		sLocal_81 = "idle_a";
	}
	else if (iVar0 == 1)
	{
		TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_80[1], "idle_c", 8f, -8f, -1, 0, 0f, false, false, false);
		sLocal_81 = "idle_c";
	}
	else
	{
		TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_80[1], "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
		sLocal_81 = "idle_b";
	}
}

int func_113(int iParam0, int iParam1)//Position - 0x9148
{
	if (func_114(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x917B
{
	if (func_125(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_115()//Position - 0x919B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_359 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_69, Local_358[iVar0 /*3*/], 2f, 2f, 4f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_358[iVar0 /*3*/], 2f, 2f, 4f, false, true, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_69, Local_358[iVar0 /*3*/], 1f, 20000, 0.25f, 8192, 40000f);
			iLocal_359 = 1;
		}
	}
	else if (!func_113(iLocal_69, 713668775))
	{
		if (func_43() == 2)
		{
			iVar1 = 15;
		}
		else if (func_43() == 0)
		{
			iVar1 = 10;
		}
		else
		{
			iVar1 = -1;
		}
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar2 < iVar1 && iLocal_348 == 0)
		{
			iLocal_348 = 1;
			func_121(13, 1);
		}
		else if (iVar2 < 50)
		{
			iLocal_79 = 1;
			sLocal_80[0] = "creatures@rottweiler@amb@world_dog_barking@enter";
			sLocal_80[1] = "creatures@rottweiler@amb@world_dog_barking@base";
			sLocal_80[2] = "creatures@rottweiler@amb@world_dog_barking@exit";
			func_121(17, 1);
		}
		else
		{
			iLocal_79 = 0;
			sLocal_80[0] = "creatures@rottweiler@amb@world_dog_sitting@enter";
			sLocal_80[1] = "creatures@rottweiler@amb@world_dog_sitting@idle_a";
			sLocal_80[2] = "creatures@rottweiler@amb@world_dog_sitting@exit";
			func_121(17, 1);
		}
	}
}

void func_116()//Position - 0x92BC
{
	if (((MISC::GET_GAME_TIMER() - iLocal_378) > 2000 && func_125(iLocal_69)) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_69, true), 5f, true))
	{
		func_122("WHINE");
		iLocal_378 = MISC::GET_GAME_TIMER();
	}
}

void func_117()//Position - 0x92FE
{
	if (func_43() == 2 && (MISC::GET_GAME_TIMER() - iLocal_343) > iLocal_344)
	{
		iLocal_343 = MISC::GET_GAME_TIMER();
		iLocal_344 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000);
		func_122("WHINE");
	}
}

int func_118(int iParam0, int iParam1)//Position - 0x933B
{
	struct<3> Var0;
	struct<3> Var1;
	
	if ((func_125(iLocal_69) && func_125(PLAYER::PLAYER_PED_ID())) && func_120(iParam0, Local_329, 30f))
	{
		if (iParam1 == 1)
		{
			if (func_119(&uLocal_96, ENTITY::GET_ENTITY_COORDS(iParam0, true)))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (MISC::ABSF((Var0.f_2 - Var1.f_2)) < 2.5f)
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_119(var uParam0, struct<2> Param1, Vector3 vParam2)//Position - 0x93BE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1.f_0)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

bool func_120(int iParam0, struct<3> Param1, float fParam2)//Position - 0x947A
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var1 = { Param1 - Var0 };
	return ((Var1.f_0 * Var1.f_0) + (Var1.f_1 * Var1.f_1)) <= (fParam2 * fParam2);
}

void func_121(int iParam0, int iParam1)//Position - 0x94AF
{
	iLocal_86 = 0;
	if (func_125(iLocal_69))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_69, true);
		WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_69);
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false))
		{
			if (iParam1 == 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_69);
			}
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_69, false);
		}
	}
	iLocal_51 = iParam0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	iLocal_321 = -1;
	Local_322 = { 0f, 0f, 0f };
	Local_323 = { 0f, 0f, 0f };
	iLocal_315 = 5;
	func_34();
	iLocal_359 = 0;
	iLocal_357 = 0;
	iLocal_378 = MISC::GET_GAME_TIMER();
	AUDIO::SET_AUDIO_FLAG("DisableBarks", false);
}

void func_122(char* sParam0)//Position - 0x952C
{
	AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_69, 3, sParam0);
}

int func_123()//Position - 0x953D
{
	if (func_118(PLAYER::PLAYER_PED_ID(), 1))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_336) > iLocal_337)
		{
			return 1;
		}
		if (func_39(PLAYER::PLAYER_PED_ID(), Local_329.f_5, 1) < 8f)
		{
			func_108("CHOP_KENNEL", 0);
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)//Position - 0x958A
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_125(iParam0))
	{
		if (bParam3 == 1)
		{
			fVar1 = 0f;
			bVar0 = MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar1, false, false);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, bParam4);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x95E6
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

void func_126()//Position - 0x9607
{
	if ((MISC::GET_GAME_TIMER() - iLocal_382) > 60000)
	{
		iLocal_382 = MISC::GET_GAME_TIMER();
		if ((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15)
		{
			if (func_43() == 1)
			{
				func_127(115, 1);
			}
			else
			{
				func_127(116, 1);
			}
		}
	}
}

void func_127(int iParam0, int iParam1)//Position - 0x965A
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

void func_128()//Position - 0x96B7
{
	if ((MISC::GET_GAME_TIMER() - iLocal_379) > 500)
	{
		iLocal_379 = MISC::GET_GAME_TIMER();
		if (iLocal_51 != 15 && MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"), 1.5f, &uLocal_362, &iLocal_361, false))
		{
			func_40(1);
		}
	}
}

void func_129()//Position - 0x96FF
{
	int iVar0;
	
	if (((((((((((func_144() && func_143()) && !func_142()) && iLocal_53 == 0) && iLocal_51 != 6) && func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !PED::IS_PED_IN_COMBAT(iLocal_69, 0)) && !func_81()) && !func_16()) && !func_3(0)) && !func_141())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 19, true);
		PAD::DISABLE_CONTROL_ACTION(0, 44, true);
		PAD::DISABLE_CONTROL_ACTION(0, 262, true);
		PAD::DISABLE_CONTROL_ACTION(0, 261, true);
		PAD::DISABLE_CONTROL_ACTION(0, 37, true);
		if (iLocal_328 == 0)
		{
			func_138(SYSTEM::FLOOR(Global_113386.f_20118.f_254), 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
		else
		{
			func_138(100, 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
		if (func_137())
		{
			if (Global_32106 == 0)
			{
				Global_32106 = 1;
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::_0xCCD078C2665D2973(true);
			}
			else
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_69, 0f, 0f, 0f, true, -1, 1000, 1000, 193150208);
				iLocal_386 = 0;
			}
			PAD::SET_INPUT_EXCLUSIVE(func_136(), func_135(0));
			PAD::SET_INPUT_EXCLUSIVE(func_136(), func_135(1));
			PAD::SET_INPUT_EXCLUSIVE(func_136(), func_135(2));
			PAD::SET_INPUT_EXCLUSIVE(func_136(), func_135(3));
			PAD::SET_INPUT_EXCLUSIVE(func_136(), func_135(4));
			PAD::SET_INPUT_EXCLUSIVE(func_136(), func_135(5));
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				PAD::DISABLE_CONTROL_ACTION(func_136(), func_135(0), true);
				PAD::DISABLE_CONTROL_ACTION(func_136(), func_135(1), true);
				PAD::DISABLE_CONTROL_ACTION(func_136(), func_135(2), true);
				PAD::DISABLE_CONTROL_ACTION(func_136(), func_135(3), true);
				PAD::DISABLE_CONTROL_ACTION(func_136(), func_135(4), true);
				PAD::DISABLE_CONTROL_ACTION(func_136(), func_135(5), true);
			}
			PAD::ENABLE_CONTROL_ACTION(0, 25, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(func_136(), func_135(0)) && func_134())
			{
				switch (iLocal_51)
				{
					case 1:
					case 3:
					case 4:
						iLocal_75 = 1;
						func_133(0);
						func_122("PLAYFUL");
						func_108("CHOP_WALK", 0);
						func_121(2, 1);
						break;
					
					case 2:
					case 5:
					case 15:
						iLocal_75 = 0;
						func_133(0);
						func_121(3, 1);
						break;
					
					case 17:
					case 18:
						iLocal_75 = 1;
						func_133(0);
						func_108("CHOP_WALK", 0);
						iLocal_53 = 2;
						break;
				}
				if (iLocal_75 == 1 && STATS::STAT_GET_INT(joaat("sp_chop_walk_done"), &iLocal_381, -1))
				{
					iLocal_381++;
					STATS::STAT_SET_INT(joaat("sp_chop_walk_done"), iLocal_381, true);
				}
			}
			if (bLocal_327 == 1)
			{
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(1)) && func_134())
				{
					if (iLocal_51 == 17 || iLocal_51 == 18)
					{
						iLocal_53 = 5;
					}
					else
					{
						func_121(5, 1);
					}
				}
				if (func_43() == 2 && iLocal_328 == 0)
				{
					if (func_132() >= 1)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(2)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 2)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(3)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 3)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(4)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 4)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(5)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
				}
				else
				{
					if (func_132() >= 1)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(2)) && func_134())
						{
							func_108("CHOP_SIT", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 8;
							}
							else
							{
								func_121(8, 1);
							}
						}
					}
					if (func_132() >= 2)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(3)) && func_134())
						{
							func_108("CHOP_PAW", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 9;
							}
							else
							{
								func_121(9, 1);
							}
						}
					}
					if (func_132() >= 3)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(4)) && func_134())
						{
							func_108("CHOP_BEG", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 7;
							}
							else
							{
								func_121(7, 1);
							}
						}
					}
					if (func_132() >= 4)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_136(), func_135(5)) && func_134())
						{
							func_108("CHOP_PET", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 10;
							}
							else
							{
								func_121(10, 1);
							}
						}
					}
				}
			}
		}
		else
		{
			HUD::CLEAR_HELP(true);
			if (!BitTest(Global_113386.f_10049.f_94, 0))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_94), 0);
			}
			if (bLocal_327 == 0)
			{
				bLocal_327 = func_131();
			}
			if (bLocal_327 == 1)
			{
				iVar0 = func_132();
				if (iVar0 > 4)
				{
					iVar0 = 4;
				}
				if ((((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 18) || iLocal_51 == 3) || iLocal_51 == 4)
				{
					if ((func_43() == 2 && iLocal_328 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_88, "CHOP_H_WAIT_H", 32);
					}
					else
					{
						StringCopy(&Local_88, "CHOP_H_WAIT_", 32);
					}
					StringIntConCat(&Local_88, iVar0, 32);
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						StringConCat(&Local_88, "_KM", 32);
					}
				}
				else if (iLocal_51 == 2 || iLocal_51 == 15)
				{
					if ((func_43() == 2 && iLocal_328 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_88, "CHOP_H_WALK_H", 32);
					}
					else
					{
						StringCopy(&Local_88, "CHOP_H_WALK_", 32);
					}
					StringIntConCat(&Local_88, iVar0, 32);
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						StringConCat(&Local_88, "_KM", 32);
					}
				}
				func_130(&Local_88);
			}
			else if (iLocal_51 == 2 || iLocal_51 == 15)
			{
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					func_130("CHOP_H_HOME_KM");
				}
				else
				{
					func_130("CHOP_H_HOME");
				}
			}
			else if (PAD::_IS_USING_KEYBOARD(0))
			{
				func_130("CHOP_H_NOAPP_KM");
			}
			else
			{
				func_130("CHOP_H_NOAPP");
			}
		}
	}
	else
	{
		func_133(1);
	}
}

void func_130(char* sParam0)//Position - 0x9D53
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_131()//Position - 0x9D69
{
	if (Global_113386.f_20118.f_263)
	{
		return 1;
	}
	return 0;
}

int func_132()//Position - 0x9D83
{
	return Global_113386.f_20118.f_254.f_3;
}

void func_133(int iParam0)//Position - 0x9D96
{
	if (func_137())
	{
		HUD::CLEAR_HELP(true);
	}
	if (iParam0 == 1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_134()//Position - 0x9DBF
{
	if (((iLocal_51 == 8 || iLocal_51 == 7) || iLocal_51 == 9) || iLocal_51 == 10)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0)//Position - 0x9DF4
{
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 22;
			
			case 2:
				return 44;
			
			case 3:
				return 45;
			
			case 4:
				return 51;
			
			case 5:
				return 23;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 227;
			
			case 1:
				return 229;
			
			case 2:
				return 224;
			
			case 3:
				return 225;
			
			case 4:
				return 223;
			
			case 5:
				return 222;
			}
		
		default:
	}
	return 0;
}

int func_136()//Position - 0x9E9A
{
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		return 0;
	}
	return 2;
}

int func_137()//Position - 0x9EB2
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (((((((((((((((((((func_105("CHOP_H_WAIT_0") || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_NOAPP"))
		{
			return 1;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (((((((((((((((((((func_105("CHOP_H_WAIT_0_KM") || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_138(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)//Position - 0xA102
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_140(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_139(0, iVar0);
		Global_1649593.f_1177[iVar0] = iParam0;
		Global_1649593.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1177.f_194[iVar0] = iParam3;
		Global_1649593.f_1177.f_183[iVar0] = iParam4;
		Global_1649593.f_1177.f_216[iVar0] = iParam5;
		Global_1649593.f_1177.f_227[iVar0 /*3*/] = fParam6;
		Global_1649593.f_1177.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1649593.f_1177.f_258[iVar0] = iParam8;
		Global_1649593.f_1177.f_269[iVar0] = iParam9;
		Global_1649593.f_1177.f_312[iVar0] = iParam10;
		Global_1649593.f_1177.f_323[iVar0] = iParam11;
		Global_1649593.f_1177.f_334[iVar0] = iParam12;
		Global_1649593.f_1177.f_345[iVar0] = iParam13;
		Global_1649593.f_1172 = 1;
		Global_1649593.f_1177.f_356[iVar0] = iParam14;
		Global_1649593.f_1177.f_367[iVar0] = iParam15;
		Global_1649593.f_1177.f_378[iVar0] = iParam16;
		Global_1649593.f_1177.f_389[iVar0] = iParam17;
		Global_1649593.f_1177.f_400[iVar0] = iParam18;
		Global_1649593.f_1177.f_411[iVar0] = iParam19;
		Global_1649593.f_1177.f_422[iVar0] = iParam20;
		Global_1649593.f_1177.f_433[iVar0] = iParam21;
		Global_1649593.f_1177.f_444[iVar0] = iParam22;
		Global_1649593.f_1177.f_455[iVar0] = iParam23;
		Global_1649593.f_1177.f_466[iVar0] = iParam24;
		Global_1649593.f_1177.f_205[iVar0] = iParam25;
		Global_1649593.f_1177.f_477[iVar0] = iParam26;
		Global_1649593.f_1177.f_488[iVar0] = iParam27;
		Global_1649593.f_1177.f_499[iVar0] = iParam28;
		Global_1649593.f_1177.f_510[iVar0] = iParam29;
		Global_1649593.f_1177.f_521[iVar0] = iParam30;
		Global_1649593.f_1177.f_532[iVar0] = iParam31;
		Global_1649593.f_1177.f_543[iVar0] = iParam32;
		Global_1649593.f_1177.f_554[iVar0] = iParam33;
		Global_1649593.f_1177.f_565[iVar0] = iParam34;
		Global_1649593.f_1177.f_576[iVar0] = iParam35;
		Global_1649593.f_1177.f_587[iVar0] = iParam36;
	}
}

void func_139(int iParam0, int iParam1)//Position - 0xA39A
{
	MISC::SET_BIT(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_140(int iParam0, int iParam1)//Position - 0xA3B3
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

bool func_141()//Position - 0xA3C9
{
	return Global_75485;
}

bool func_142()//Position - 0xA3D5
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

int func_143()//Position - 0xA3EA
{
	if (iLocal_51 == 12)
	{
		return 0;
	}
	if (iLocal_51 == 13 || (iLocal_51 == 14 && func_113(iLocal_69, 242628503)))
	{
		if (iLocal_357 == 0 && PAD::IS_CONTROL_PRESSED(2, 228))
		{
			func_108("CHOP_BUSY", 0);
			iLocal_357 = 1;
		}
		return 0;
	}
	return 1;
}

int func_144()//Position - 0xA446
{
	if (func_106(PLAYER::PLAYER_PED_ID(), iLocal_69) < 10f)
	{
		if (iLocal_51 == 15 && iLocal_52 < 4)
		{
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			func_148(0);
			func_147(0);
			return 0;
		}
		else
		{
			func_145();
			func_148(1);
			func_147(1);
			return 1;
		}
	}
	func_148(0);
	func_147(0);
	if (func_105("CHOP_H_INTRO") || (MISC::IS_PC_VERSION() && func_105("CHOP_H_INTRO_KM")))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_145()//Position - 0xA4D6
{
	if ((((((((!BitTest(Global_113386.f_10049.f_94, 0) && !(func_105("CHOP_H_INTRO") || (MISC::IS_PC_VERSION() && func_105("CHOP_H_INTRO_KM")))) && !func_105("PW_HELP_1")) && !func_105("PW_HELP_2")) && !func_146()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !func_3(0)) && !func_142()) && !func_141())
	{
		if ((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 18)
		{
			if (func_118(PLAYER::PLAYER_PED_ID(), 1))
			{
				HUD::CLEAR_HELP(true);
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					func_130("CHOP_H_INTRO_KM");
				}
				else
				{
					func_130("CHOP_H_INTRO");
				}
			}
		}
	}
	if ((MISC::IS_PC_VERSION() && func_105("CHOP_H_INTRO_KM")) || func_105("CHOP_H_INTRO"))
	{
		if ((((func_146() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_3(0)) || func_142()) || func_141())
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_146()//Position - 0xA601
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_147(int iParam0)//Position - 0xA61B
{
	if (iParam0 == 1)
	{
		if (func_125(iLocal_69))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_69, -1, 48, 2);
			iLocal_73 = 1;
		}
	}
	else if (iLocal_73 == 1 && func_125(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		iLocal_73 = 0;
	}
}

void func_148(int iParam0)//Position - 0xA665
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (iLocal_74 == 1 && iVar0 != joaat("weapon_unarmed"))
	{
		iParam0 = 0;
	}
	if (iParam0 == 1)
	{
		if (iLocal_74 == 0 && iVar0 == joaat("weapon_unarmed"))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_69, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_69, true, 0f);
			PED::_0x061CB768363D6424(iLocal_69, true);
			PED::_0xFD325494792302D7(iLocal_69, true);
			iLocal_74 = 1;
		}
	}
	else if (iLocal_74 == 1)
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_69, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_69, false, 0f);
		PED::_0x061CB768363D6424(iLocal_69, false);
		iLocal_74 = 0;
	}
}

void func_149()//Position - 0xA6EC
{
	int iVar0;
	var uVar1[5];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if ((iLocal_51 != 6 && iLocal_86 == 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15) || (iLocal_51 == 14 && !func_113(iLocal_69, 242628503)))
		{
			if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f) > 0 || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(iLocal_69, ENTITY::GET_ENTITY_COORDS(iLocal_69, true), 100f) > 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
				iVar0 = 0;
				while (iVar0 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1))
				{
					if ((((!func_125(iVar2) && func_125(uVar1[iVar0])) && (PED::IS_PED_IN_COMBAT(uVar1[iVar0], PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COMBAT(uVar1[iVar0], iLocal_69))) && !PED::IS_PED_IN_ANY_VEHICLE(uVar1[iVar0], false)) && uVar1[iVar0] != iLocal_69)
					{
						iVar2 = uVar1[iVar0];
					}
					iVar0++;
				}
				if (func_125(iVar2))
				{
					TASK::TASK_COMBAT_PED(iLocal_69, iVar2, 0, 16);
					func_108("CHOP_ATTACK2", 0);
					if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113386.f_10049.f_94, 6)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113386.f_10049.f_94), 6);
						func_15("CHOP_H_ATTACK", -1);
					}
					func_40(0);
					func_121(6, 0);
				}
			}
			else
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true);
				if (iVar3 != joaat("weapon_ball") && !(iLocal_51 == 15 && iLocal_52 == 1))
				{
					if (PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar4) || PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar4))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar4))
						{
							iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
							if (((!PED::IS_PED_INJURED(iVar5) && iVar5 != iLocal_69) && !PED::IS_PED_IN_ANY_VEHICLE(iVar5, false)) && func_4(PLAYER::PLAYER_PED_ID(), iVar5, 1) < 50f)
							{
								TASK::TASK_COMBAT_PED(iLocal_69, iVar5, 0, 16);
								iLocal_374++;
								if (iLocal_374 >= 3)
								{
									PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
								}
								func_108("CHOP_ATTACK1", 0);
								if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113386.f_10049.f_94, 11)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
								{
									MISC::SET_BIT(&(Global_113386.f_10049.f_94), 11);
									func_15("CHOP_H_AIM", -1);
								}
								func_40(0);
								func_121(6, 0);
							}
						}
					}
				}
			}
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_375) > 60000)
	{
		iLocal_375 = MISC::GET_GAME_TIMER();
		if (iLocal_374 > 0)
		{
			iLocal_374 = (iLocal_374 - 1);
		}
	}
}

void func_150()//Position - 0xA9B9
{
	if ((iLocal_51 != 16 && Global_31965 == 1) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(PLAYER::PLAYER_PED_ID()))
	{
		func_121(16, 1);
	}
}

void func_151()//Position - 0xA9E7
{
	if (iLocal_356 == 0)
	{
		if (func_118(PLAYER::PLAYER_PED_ID(), 1))
		{
			func_108("CHOP_DUMP", 0);
			iLocal_356 = 1;
		}
	}
}

void func_152()//Position - 0xAA0F
{
	if (iLocal_360 != func_153() && func_125(iLocal_69))
	{
		if (func_131())
		{
			iLocal_360 = func_153();
			PED::SET_PED_COMPONENT_VARIATION(iLocal_69, 3, 0, iLocal_360, 0);
		}
		else if (iLocal_360 != 4)
		{
			iLocal_360 = 4;
			PED::SET_PED_COMPONENT_VARIATION(iLocal_69, 3, 0, iLocal_360, 0);
		}
	}
}

int func_153()//Position - 0xAA61
{
	return Global_113386.f_20118.f_254.f_4;
}

void func_154()//Position - 0xAA74
{
	int iVar0;
	
	Global_32106 = 0;
	STREAMING::REQUEST_MODEL(func_162());
	if (!STREAMING::HAS_MODEL_LOADED(func_162()))
	{
		return;
	}
	if (func_178(6))
	{
		Local_329.f_4 = 6;
		Local_329 = { 18.1531f, 535.2469f, 169.6324f };
		Local_329.f_3 = 204.8112f;
		Local_329.f_5 = { 19.52771f, 537.436f, 170.143f };
		Local_329.f_8 = 151.3064f;
		Local_347 = { 19.45963f, 535.7817f, 169.6277f };
		Local_358[0 /*3*/] = { 17.36033f, 528.8973f, 169.6277f };
		Local_358[1 /*3*/] = { 19.46877f, 529.1785f, 169.6277f };
		Local_358[2 /*3*/] = { 20.82979f, 531.5168f, 169.6277f };
		Local_358[3 /*3*/] = { 22.83555f, 532.3281f, 169.6277f };
		Local_358[4 /*3*/] = { 20.79285f, 535.001f, 169.6277f };
		Local_358[5 /*3*/] = { 18.05178f, 535.6321f, 169.6277f };
		Local_358[6 /*3*/] = { 18.92047f, 534.0938f, 169.6277f };
		Local_358[7 /*3*/] = { 17.51333f, 533.4775f, 169.6277f };
		func_161(&uLocal_96);
		func_160(&uLocal_96, 12.41124f, 535.5469f, 169.6277f);
		func_160(&uLocal_96, 19.04497f, 538.5729f, 169.6277f);
		func_160(&uLocal_96, 25.00015f, 534.4414f, 169.6277f);
		func_160(&uLocal_96, 28.0998f, 527.7639f, 169.4277f);
		func_160(&uLocal_96, 17.75896f, 523.3129f, 169.2277f);
		func_159(&uLocal_96);
	}
	else
	{
		Local_329.f_4 = 5;
		Local_329 = { -10.25168f, -1422.907f, 29.67775f };
		Local_329.f_3 = 157.9037f;
		Local_329.f_5 = { -9.73f, -1421.55f, 30.1f };
		Local_329.f_8 = 148.26f;
		Local_347 = { -10.6379f, -1424.561f, 29.67365f };
		Local_358[0 /*3*/] = { -10.03643f, -1423.529f, 29.67602f };
		Local_358[1 /*3*/] = { -10.78779f, -1425.306f, 29.70937f };
		Local_358[2 /*3*/] = { -12.7048f, -1424.748f, 29.72222f };
		Local_358[3 /*3*/] = { -12.47465f, -1422.485f, 29.74699f };
		Local_358[4 /*3*/] = { -14.26666f, -1424.855f, 29.71964f };
		Local_358[5 /*3*/] = { -14.55816f, -1423.048f, 29.78372f };
		Local_358[6 /*3*/] = { -16.13293f, -1424.489f, 29.76139f };
		Local_358[7 /*3*/] = { -16.25662f, -1423.325f, 29.81294f };
		func_161(&uLocal_96);
		func_160(&uLocal_96, -7.26821f, -1427.065f, 29.67468f);
		func_160(&uLocal_96, -7.39631f, -1418.851f, 29.5858f);
		func_160(&uLocal_96, -14.27201f, -1421.59f, 29.76819f);
		func_160(&uLocal_96, -22.85347f, -1423.173f, 29.74042f);
		func_160(&uLocal_96, -22.77974f, -1427.168f, 29.65953f);
		func_159(&uLocal_96);
	}
	bLocal_327 = func_131();
	func_156();
	if (func_43() == 2)
	{
		MISC::CLEAR_AREA_OF_OBJECTS(Local_347, 2f, 2);
		STREAMING::REQUEST_MODEL(joaat("prop_big_shit_02"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("prop_big_shit_02")))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_346 = OBJECT::CREATE_OBJECT(joaat("prop_big_shit_02"), Local_347, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_big_shit_02"));
		iLocal_356 = 0;
	}
	else
	{
		iLocal_356 = 1;
	}
	iLocal_348 = 0;
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
	{
		iLocal_337 = -1;
	}
	else
	{
		iLocal_337 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000);
	}
	if (iLocal_325 == 1)
	{
		iLocal_51 = 7;
		iLocal_75 = 1;
	}
	else if (iLocal_326 == 1)
	{
		iLocal_51 = 2;
	}
	else if (iLocal_337 > -1)
	{
		iLocal_51 = 11;
		iLocal_75 = 0;
	}
	else
	{
		iLocal_51 = 1;
		iLocal_75 = 0;
	}
	iLocal_82 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(11.23f, 515.4f, 168f, 9f, 21f, 4f, func_155(113f), false, 7);
	iLocal_83 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(24f, 528f, 168f, 5f, 5f, 4f, func_155(113f), false, 7);
	Local_84[0 /*3*/] = { 444.1685f, 5569.016f, 780.1895f };
	Local_84[1 /*3*/] = { 443.8968f, 5574.931f, 780.1895f };
	Local_84[2 /*3*/] = { -739.1624f, 5596.784f, 40.6594f };
	Local_84[3 /*3*/] = { -738.8002f, 5593.269f, 40.6594f };
	fLocal_85[0] = 270f;
	fLocal_85[1] = 270f;
	fLocal_85[2] = 95f;
	fLocal_85[3] = 95f;
	func_97();
	iLocal_73 = 0;
	iLocal_338 = 0;
	iLocal_342 = MISC::GET_GAME_TIMER();
	iVar0 = func_132();
	if (iVar0 > 4)
	{
		iVar0 = 4;
	}
	StringCopy(&Local_88, "CHOP_H_WAIT_", 32);
	StringIntConCat(&Local_88, iVar0, 32);
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		StringConCat(&Local_88, "_KM", 32);
	}
	Global_32108 = 0;
	iLocal_50 = 1;
}

float func_155(float fParam0)//Position - 0xAF7A
{
	return (fParam0 * 0.01745329f);
}

void func_156()//Position - 0xAF8A
{
	if (iLocal_325 == 1)
	{
		if (func_158())
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_69, true, true);
			TASK::CLEAR_PED_TASKS(iLocal_69);
			func_152();
			while (func_146())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if (iLocal_326 == 1)
	{
		if (func_125(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_78 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				func_79();
				func_78();
				func_157(&iLocal_69, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 1);
				if (func_125(iLocal_69))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_69, true);
					PED::SET_PED_ALLOW_VEHICLES_OVERRIDE(iLocal_69, true);
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_69, false);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_69, false);
					func_100();
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_69, true);
					PED::SET_PED_INTO_VEHICLE(iLocal_69, iLocal_78, 0);
					iLocal_86 = 8;
					func_152();
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
				}
				while (func_146())
				{
					if (func_125(iLocal_69) && !func_113(iLocal_69, -2017877118))
					{
						STREAMING::REQUEST_ANIM_DICT(sLocal_371);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371))
						{
							TASK::TASK_PLAY_ANIM(iLocal_69, sLocal_371, "sit", 8f, -8f, -1, 1, 0f, false, false, false);
						}
					}
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		func_157(&iLocal_69, Local_329, Local_329.f_3, 1);
	}
	if (func_125(iLocal_69))
	{
		PED::ADD_RELATIONSHIP_GROUP("rel_group_chop", &iLocal_71);
		iLocal_72 = 1;
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), iLocal_71);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_71, joaat("player"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("cat"), iLocal_71);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_71, joaat("cat"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_69, iLocal_71);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_69, true);
		PED::SET_PED_ALLOW_VEHICLES_OVERRIDE(iLocal_69, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 185, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 26, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 32, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 29, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 116, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 118, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 132, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 268, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 107, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 281, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 137, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 146, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 157, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 45, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 167, true);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_69, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_69, false);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_69, joaat("weapon_animal"), 1, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_69, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_69, 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_69, 46, true);
		PED::SET_PED_HEARING_RANGE(iLocal_69, 100f);
		PED::SET_PED_SEEING_RANGE(iLocal_69, 100f);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_69, 512, true);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_69, false);
		PED::SET_PED_MAX_HEALTH(iLocal_69, 800);
		ENTITY::SET_ENTITY_HEALTH(iLocal_69, 800, 0);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_69, 200);
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false))
		{
			func_57();
		}
		func_111(&uLocal_148, 3, iLocal_69, "CHOP", 0, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_69, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_69, false, 0f);
		PED::_0x061CB768363D6424(iLocal_69, false);
		iLocal_74 = 0;
		Global_32105 = 0;
		iLocal_374 = 0;
		iLocal_375 = MISC::GET_GAME_TIMER();
	}
}

int func_157(int* iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0xB266
{
	int iVar0;
	
	iVar0 = func_162();
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			PED::DELETE_PED(iParam0);
		}
		*iParam0 = PED::CREATE_PED(26, iVar0, Param1, fParam2, false, false);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 2, 0, 0, 0);
		if (Global_113386.f_20118.f_263)
		{
			PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 0, Global_113386.f_20118.f_254.f_4, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 0, 4, 0);
		}
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 11, 0, 0, 0);
		PED::CLEAR_ALL_PED_PROPS(*iParam0);
		if (bParam3)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		return 1;
	}
	return 0;
}

int func_158()//Position - 0xB36A
{
	var uVar0[10];
	int iVar1;
	int iVar2;
	
	if (func_125(Global_100162) && PED::IS_PED_MODEL(Global_100162, func_162()))
	{
		iLocal_69 = Global_100162;
		return 1;
	}
	iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if ((uVar0[iVar2] != 0 && func_125(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == func_162())
		{
			iLocal_69 = uVar0[iVar2];
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_159(var uParam0)//Position - 0xB3F9
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = SYSTEM::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_160(var uParam0, struct<3> Param1)//Position - 0xB499
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { Param1 };
	uParam0->f_46++;
}

void func_161(var uParam0)//Position - 0xB4CA
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

int func_162()//Position - 0xB4F1
{
	return joaat("a_c_chop");
}

int func_163()//Position - 0xB4FE
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	
	if (iLocal_50 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
		{
			if (func_167(0) && Global_31965 == 0)
			{
				return 1;
			}
			if (!func_170(1))
			{
				return 1;
			}
			if (Global_113376 == 1)
			{
				return 1;
			}
			if (((((((((((Global_78317 == 1 && Global_31965 == 0) && Global_8140 == 0) && Global_32214 == 0) && Global_32215 == 0) && Global_32216 == 0) && Global_60335 == 0) && !func_146()) && !func_16()) && Global_102575 == 0) && func_125(PLAYER::PLAYER_PED_ID())) && !func_165())
			{
				return 1;
			}
			if (Global_97361 == 1)
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_DEAD(iLocal_69, false))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), true))
				{
					Global_32105 = 1;
					if (!BitTest(Global_113386.f_10049.f_94, 9) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113386.f_10049.f_94), 9);
						func_15("CHOP_H_DEAD", -1);
					}
				}
				else if (!BitTest(Global_113386.f_10049.f_94, 12) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_113386.f_10049.f_94), 12);
					func_15("CHOP_H_DEAD2", -1);
				}
				return 1;
			}
			else
			{
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_164();
				}
				else
				{
					if ((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15)
					{
						fVar0 = 200f;
					}
					else
					{
						fVar0 = 100f;
					}
					if (func_4(PLAYER::PLAYER_PED_ID(), iLocal_69, 1) > fVar0)
					{
						if ((!BitTest(Global_113386.f_10049.f_94, 4) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							if (((((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 11) || iLocal_51 == 4) || iLocal_51 == 3) || iLocal_51 == 13)
							{
							}
							else
							{
								MISC::SET_BIT(&(Global_113386.f_10049.f_94), 4);
								func_15("CHOP_H_RANGE", -1);
							}
						}
						return 1;
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false) && ENTITY::GET_ENTITY_HEALTH(iLocal_69) > 0)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iLocal_69))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
						if (WATER::GET_WATER_HEIGHT(Var1, &fVar2))
						{
							if ((fVar2 - Var1.f_2) > 0.1f)
							{
								ENTITY::SET_ENTITY_HEALTH(iLocal_69, 0, 0);
							}
						}
					}
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_69))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_69, 0, 0);
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_164()//Position - 0xB79C
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if ((((((((((((((((((((((((((((((func_105("CHOP_H_INTRO") || func_105("CHOP_H_WAIT_0")) || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_HUNT")) || func_105("CHOP_H_NOVEH")) || func_105("CHOP_H_CAR")) || func_105("CHOP_H_BIKE")) || func_105("CHOP_H_ATTACK")) || func_105("CHOP_H_BALL")) || func_105("CHOP_H_WHIS")) || func_105("CHOP_H_NOAPP")) || func_105("CHOP_H_BEHAVE")) || func_105("CHOP_H_BEHAVA")) || func_105("CHOP_H_AIM"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if ((((((((((((((((((((func_105("CHOP_H_INTRO_KM") || func_105("CHOP_H_WAIT_0_KM")) || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
}

bool func_165()//Position - 0xBA95
{
	return Global_97750;
}

int func_166()//Position - 0xBAA1
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return Global_98551;
	}
	if (func_146())
	{
		return Global_98551;
	}
	return 318;
}

int func_167(int iParam0)//Position - 0xBAC8
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_168(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_168(int iParam0)//Position - 0xBAEA
{
	return func_169(iParam0, Global_43052);
}

int func_169(int iParam0, int iParam1)//Position - 0xBAFB
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

bool func_170(int iParam0)//Position - 0xBCDC
{
	func_171();
	return iParam0 == Global_113386.f_2363.f_539.f_4321;
}

void func_171()//Position - 0xBCF8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_175(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_174(PLAYER::PLAYER_PED_ID());
			if (func_173(iVar0) && (!func_172(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_173(Global_113386.f_2363.f_539.f_4321))
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

bool func_172(int iParam0)//Position - 0xBDF5
{
	return Global_43052 == iParam0;
}

bool func_173(int iParam0)//Position - 0xBE03
{
	return iParam0 < 3;
}

int func_174(int iParam0)//Position - 0xBE0F
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_175(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_175(int iParam0)//Position - 0xBE4C
{
	if (func_173(iParam0))
	{
		return func_176(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_176(int iParam0)//Position - 0xBE71
{
	return Global_1998[iParam0 /*29*/];
}

int func_177(struct<3> Param0, int iParam1, int iParam2)//Position - 0xBE80
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_95479[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95479[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_178(iVar0) || iParam2 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95479[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_178(int iParam0)//Position - 0xBF0F
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_179(int iParam0)//Position - 0xBF24
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

void func_180()//Position - 0xBF51
{
	bool bVar0;
	bool bVar1;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
	{
	}
	else
	{
		Global_32106 = 0;
		func_147(0);
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE() && !iLocal_386)
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		func_67(&iLocal_70);
		if (func_179(63))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_179(126))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 19.3f, 528.24f, 169.63f, true) > 50f)
					{
						func_61(139, 1, 0);
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -11.15f, -1425.56f, 29.67f, true) > 50f)
				{
					func_61(138, 1, 0);
				}
			}
		}
		func_40(1);
		func_42(&iLocal_346, 0);
		func_42(&iLocal_349, 0);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
		}
		STREAMING::REMOVE_PTFX_ASSET();
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"), false))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"));
		}
		if (func_125(PLAYER::PLAYER_PED_ID()) && !func_172(0))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
		{
			if (func_188())
			{
				func_187(&iLocal_69);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, false) && func_125(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_69))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_69);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87) || PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false))
					{
						if (func_125(iLocal_78))
						{
							bVar0 = false;
							while (!bVar0)
							{
								SYSTEM::WAIT(0);
								if (!func_186() || func_184(iLocal_78, 1093140480, 1, 1056964608, 0, 1, 0))
								{
									bVar0 = true;
								}
							}
							if (func_186())
							{
								if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
								{
									VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_94, false, false);
								}
								STREAMING::REQUEST_ANIM_DICT(sLocal_371);
								while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371))
								{
									SYSTEM::WAIT(0);
								}
							}
							if (func_186())
							{
								iLocal_87 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_87, iLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_78, "seat_pside_f"));
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_69);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_69, iLocal_87, sLocal_371, "get_out", 1000f, -8f, 10, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
								bVar1 = false;
								while (!bVar1)
								{
									SYSTEM::WAIT(0);
									if (!func_186() || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_87) > 0.99f))
									{
										bVar1 = true;
									}
								}
								SYSTEM::WAIT(0);
								if (func_186() && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_94))
								{
									VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_78, iLocal_94, false);
								}
							}
						}
						else if (func_183() == 1)
						{
							if (iLocal_51 == 2 || iLocal_51 == 15)
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_69);
								func_124(iLocal_69, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 1.75f, 0f, 0f), ENTITY::GET_ENTITY_HEADING(iLocal_69), 1, 1);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_69, false, false);
							}
						}
					}
					if (func_125(iLocal_69))
					{
						PED::SET_PED_KEEP_TASK(iLocal_69, true);
						TASK::TASK_SMART_FLEE_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
					}
				}
				func_182(&iLocal_69, 1, 0, 1);
			}
		}
		func_56();
		func_55(&iLocal_78);
		func_98(0);
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@move");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@enter");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@base");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@idle_a");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@exit");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@4x4");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@low_car");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@std_car");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@van");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@enter");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@idle_a");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@exit");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@indication@");
		STREAMING::REMOVE_ANIM_DICT("misschop_vehicleenter_exit");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
		func_181(&uLocal_148, 1);
		func_181(&uLocal_148, 3);
		func_164();
		CAM::DESTROY_ALL_CAMS(false);
		if (iLocal_82 > -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_82);
		}
		if (iLocal_83 > -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_83);
		}
		if (iLocal_72 == 1)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(iLocal_71);
		}
		AUDIO::STOP_SOUND(iLocal_384);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_181(var uParam0, int iParam1)//Position - 0xC33C
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_182(int* iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xC359
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_183()//Position - 0xC3A9
{
	func_171();
	return Global_113386.f_2363.f_539.f_4321;
}

int func_184(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xC3C2
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 73, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 138, true);
	PAD::DISABLE_CONTROL_ACTION(0, 136, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 352, true);
	PAD::DISABLE_CONTROL_ACTION(0, 131, true);
	PAD::DISABLE_CONTROL_ACTION(0, 132, true);
	PAD::DISABLE_CONTROL_ACTION(0, 123, true);
	PAD::DISABLE_CONTROL_ACTION(0, 126, true);
	PAD::DISABLE_CONTROL_ACTION(0, 129, true);
	PAD::DISABLE_CONTROL_ACTION(0, 130, true);
	PAD::DISABLE_CONTROL_ACTION(0, 133, true);
	PAD::DISABLE_CONTROL_ACTION(0, 134, true);
	CAM::_0x17FCA7199A530203();
	func_185(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_185(int iParam0)//Position - 0xC55A
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

int func_186()//Position - 0xC586
{
	if ((func_125(PLAYER::PLAYER_PED_ID()) && func_125(iLocal_78)) && func_125(iLocal_69))
	{
		return 1;
	}
	return 0;
}

void func_187(int* iParam0)//Position - 0xC5B4
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		PED::DELETE_PED(iParam0);
	}
}

int func_188()//Position - 0xC5F5
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && func_125(iLocal_69))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87) || PED::IS_PED_IN_ANY_VEHICLE(iLocal_69, false))
		{
			return 1;
		}
	}
	if (Global_32107 == 1)
	{
		return 1;
	}
	if (Global_32108 == 1)
	{
		Global_32108 = 0;
		return 1;
	}
	if (func_125(iLocal_69))
	{
		if (iLocal_51 == 11 && ENTITY::IS_ENTITY_OCCLUDED(iLocal_69))
		{
			return 1;
		}
		if (func_189(ENTITY::GET_ENTITY_COORDS(iLocal_69, false), 1f, 1120403456))
		{
			return 0;
		}
	}
	if (!func_167(0))
	{
		return 0;
	}
	if (func_172(6) || func_172(2))
	{
		return 0;
	}
	return 1;
}

int func_189(struct<3> Param0, float fParam1, float fParam2)//Position - 0xC6A0
{
	if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, fParam2, fParam2, fParam2, false, false, 0))
		{
			return 0;
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

