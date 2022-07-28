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
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
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
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int* iLocal_82 = NULL;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	struct<414> Local_230 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = -1;
	var uLocal_237 = -1;
	var uLocal_238 = -1;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	struct<33> Local_247 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 4;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	struct<38> Local_257 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	struct<3> Local_264[1];
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271[3] = { 0, 0, 0 };
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274[2] = { 0, 0 };
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	var uLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	bool bLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	struct<3> Local_309 = { 0, 0, 0 } ;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_312 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	struct<3> Local_315 = { 0, 0, 0 } ;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_318 = { 0, 0, 0 } ;
	char* sLocal_319 = NULL;
	char cLocal_320[24] = "";
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	char cLocal_324[24] = "";
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	struct<6> Local_328 = { 0, 0, 0, 0, 0, 0 } ;
	int* iLocal_329 = NULL;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	int* iLocal_332 = NULL;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	bool bLocal_335 = 0;
	struct<28> Local_336 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 5;
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
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 1097859072;
	var uLocal_383 = 1500;
	var uLocal_384 = 45;
	var uLocal_385 = 1103626240;
	var uLocal_386 = 5;
	int iLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
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
	iLocal_71 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_72 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_77 = { 500f, 500f, 500f };
	iLocal_265 = joaat("a_m_m_farmer_01");
	iLocal_266 = joaat("prop_box_wood04a");
	iLocal_267 = joaat("prop_cardbordbox_03a");
	iLocal_268 = joaat("prop_barrel_exp_01a");
	iLocal_281 = 1;
	iLocal_285 = 112;
	Local_309 = { 11.8607f, -1123.48f, 27.6801f };
	Local_310 = { 11.8607f, -1123.48f, 27.6801f };
	Local_311 = { 144.3291f, -3352.773f, 3.6651f };
	Local_312 = { 311.9527f, -3305.613f, 10.6651f };
	Local_313 = { 206.636f, -3322.673f, 4.6339f };
	Local_314 = { 0f, 0f, 24f };
	Local_315 = { 208.786f, -3319.823f, 4.6339f };
	Local_316 = { 0f, 0f, 47f };
	Local_317 = { 199.5188f, -3326.201f, 4.78716f };
	Local_318 = { 232.9944f, -3327.825f, 4.79877f };
	sLocal_319 = "oddjobs@taxi@argument";
	StringCopy(&cLocal_320, "txm12_deal1_7", 24);
	StringCopy(&cLocal_324, "txm12_deal1_7", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_435(2);
		func_433();
	}
	MISC::SET_MISSION_FLAG(true);
	func_417();
	Local_230.f_102 = 1;
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_230);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x1CD
{
	iParam0->f_2 = PLAYER::PLAYER_PED_ID();
	func_7(&(iParam0->f_244));
	iParam0->f_428 = func_2();
}

int func_2()//Position - 0x1EE
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)//Position - 0x239
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)//Position - 0x276
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_5(int iParam0)//Position - 0x29B
{
	return Global_1998[iParam0 /*29*/];
}

bool func_6(int iParam0)//Position - 0x2AA
{
	return iParam0 < 3;
}

void func_7(var uParam0)//Position - 0x2B6
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x33E
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

void func_9()//Position - 0x3D9
{
	if (func_416(&Local_230))
	{
		func_415(&Local_230);
		if (func_414(&Local_230, 0))
		{
			func_412();
		}
	}
	else
	{
		func_411(&Local_230);
		if (Local_230.f_410 >= 9)
		{
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			func_409();
		}
		func_375(&Local_230, &uLocal_380);
		if (Local_230.f_410 < 22)
		{
			func_374(&Local_230);
		}
		func_373(&Local_230, &uLocal_289, 0);
		if (Local_230.f_410 > 5 && !BitTest(uLocal_290, 0))
		{
			Local_230.f_17 = { 189.7825f, -3325.684f, 4.6697f };
			MISC::SET_BIT(&uLocal_290, 0);
		}
		if (Local_230.f_410 > 2)
		{
			if (!func_372(&Local_230))
			{
				func_339();
			}
			else
			{
				func_330(&Local_230, "Taxi Not Driveable", func_338(&Local_230));
			}
		}
		if (Local_230.f_410 == 9)
		{
			func_306(&Local_230, 0, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_3))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_230.f_3, false))
			{
				if (!func_305(&Local_230, 0))
				{
					func_304(&Local_230, 0);
				}
				if (Local_230.f_410 >= 22 || iLocal_269 >= 1)
				{
					iLocal_299 = 1;
				}
				func_303(&(Local_247.f_3));
				func_303(&(Local_257.f_3));
				func_302(&iLocal_274);
				func_330(&Local_230, "TX12_GYB - Walter has been killed", 15);
			}
		}
		switch (Local_230.f_410)
		{
			case 0:
				func_299();
				func_298(&Local_230, 16, 4f, 0);
				func_296(&Local_230, Local_309, Local_310, "TaxiWalter", iLocal_265, 202f, 35f);
				func_294(&Local_230);
				func_293(&Local_230, 1);
				break;
			
			case 1:
				if (func_291())
				{
					func_290();
					func_289(&(Local_264[0 /*3*/]), "TAXI_SC_BN_12", 200);
					func_288(&Local_230, &Local_264);
					func_268();
					func_267(&Local_230);
					func_293(&Local_230, 2);
				}
				break;
			
			case 2:
				Local_230.f_14 = { Local_309 };
				Local_230.f_17 = { Local_247 };
				func_293(&Local_230, 3);
				break;
			
			case 3:
				if (func_260(&Local_230, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_230.f_3, false))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 4, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 0, 0, 2, 0);
					}
					func_259(&Local_230, 1, 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_262, Local_230.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Local_230.f_413, iLocal_262);
					PED::SET_PED_CAN_BE_TARGETTED(Local_230.f_3, false);
					func_293(&Local_230, 5);
				}
				break;
			
			case 5:
				if (func_233(&Local_230, 0, 1109393408))
				{
					func_293(&Local_230, 15);
				}
				break;
			
			case 15:
				if (func_232(&Local_230))
				{
					func_228(&Local_230, 9, 1, 0, 0);
					func_227(&Local_230);
					func_293(&Local_230, 7);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_230.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_230.f_2, Local_230.f_4, false))
					{
						func_225(&Local_230);
						func_293(&Local_230, 5);
					}
				}
				break;
			
			case 7:
				if (BitTest(uLocal_290, 0))
				{
					func_224();
					func_293(&Local_230, 9);
				}
				break;
			
			case 9:
				func_208();
				if ((func_207(Local_230.f_4, Local_230.f_17, 1) < 675f && !Local_230.f_140) && !iLocal_297)
				{
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_311, Local_312, false, true);
					PED::SET_PED_NON_CREATION_AREA(Local_311, Local_312);
					iLocal_278 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_311, Local_312, false, true, true, true);
					MISC::CLEAR_AREA_OF_PEDS(195.16f, -3282.54f, 4.79f, 25f, 0);
					func_206(&Local_230);
					func_204(&uLocal_339);
					func_203(&Local_336, 3, 0);
					func_228(&Local_230, 97, 1, 0, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_230.f_2, joaat("weapon_combatpistol"), 200, true, true);
					iLocal_297 = 1;
				}
				if (func_172(&Local_230, 16f, 1097859072, 1117782016))
				{
					HUD::REMOVE_BLIP(&(Local_230.f_9));
					func_171(&uLocal_380, 4);
					func_171(&uLocal_380, 8);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					SYSTEM::SETTIMERA(0);
					func_293(&Local_230, 22);
				}
				if (func_207(Local_230.f_4, Local_230.f_17, 1) < 10f && func_170(Local_230.f_4, Local_247.f_3[1], 1) < 10f)
				{
					if (func_166(&Local_230, 1, 1084227584))
					{
						HUD::REMOVE_BLIP(&(Local_230.f_9));
						func_164(1, 0);
						func_164(2, 0);
						func_164(3, 0);
						func_164(4, 0);
						func_164(5, 0);
						func_164(0, 1);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
						SYSTEM::SETTIMERA(0);
						func_293(&Local_230, 22);
					}
				}
				if (!iLocal_301)
				{
				}
				if (!iLocal_301)
				{
					if (bLocal_302)
					{
						if ((((((((((PED::IS_PED_INJURED(Local_247.f_3[0]) || PED::IS_PED_INJURED(Local_247.f_3[1])) || PED::IS_PED_INJURED(Local_247.f_3[2])) || PED::IS_PED_INJURED(Local_247.f_3[3])) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_247.f_3[0]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_247.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_247.f_3[2]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_247.f_3[0], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_247.f_3[1], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_247.f_3[2], 0, 2))) || func_170(PLAYER::PLAYER_PED_ID(), Local_247.f_3[1], 1) < 6f)
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_247.f_3[0], iLocal_262);
							func_303(&(Local_247.f_3));
							func_302(&iLocal_274);
							func_330(&Local_230, "Aggro Heard Shot", 8);
							iLocal_301 = 1;
						}
					}
				}
				break;
			
			case 22:
				if (func_163(Local_230.f_3, 1) < 250f)
				{
					if (func_124())
					{
						func_122(&uLocal_380, 1);
						func_122(&uLocal_380, 16);
						func_122(&uLocal_380, 32);
						func_228(&Local_230, 100, 1, 0, 0);
						if (!PED::IS_PED_INJURED(Local_230.f_3) && !PED::IS_PED_INJURED(Local_230.f_2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_230.f_3);
							TASK::TASK_GO_TO_ENTITY(Local_230.f_3, Local_230.f_2, 20000, 6f, 2f, 2f, 0);
						}
						SYSTEM::SETTIMERA(0);
						Local_230.f_114 = 0;
						func_293(&Local_230, 24);
					}
				}
				else
				{
					func_330(&Local_230, "Player abandoned passenger", 8);
				}
				break;
			
			case 24:
				if (func_163(Local_230.f_2, 1) < 7f && SYSTEM::TIMERA() > 3000)
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_230.f_3, Local_230.f_2, -1, 2048, 4);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_270);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_270);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_230.f_2, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_270);
					TASK::TASK_PERFORM_SEQUENCE(Local_230.f_3, iLocal_270);
					Local_230.f_56 = 50;
					func_120(&Local_230);
					func_116(&Local_230);
					func_115(&Local_230);
					if (iLocal_288 == 8)
					{
						func_114(&Local_230, 0);
					}
					func_293(&Local_230, 27);
				}
				else if (func_163(Local_230.f_3, 1) > 100f)
				{
					func_330(&Local_230, "Player abandoned passenger", 8);
				}
				break;
			
			case 27:
				if ((!func_113() && !ENTITY::IS_ENTITY_DEAD(Local_230.f_3, false)) && func_111(&Local_230, 19) > 2f)
				{
					func_110(&Local_230, 19, 0);
					func_293(&Local_230, 29);
					if (MISC::CREATE_INCIDENT(5, Local_318, 1, 0f, &iLocal_279, 0, 0))
					{
						MISC::_SET_INCIDENT_UNK(iLocal_279, 200f);
						bLocal_304 = true;
					}
					if (MISC::CREATE_INCIDENT(7, Local_318, 3, 0f, &uLocal_280, 0, 0))
					{
						bLocal_304 = true;
					}
				}
				break;
			
			case 29:
				if (func_77(&Local_230, &iLocal_387))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_3))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_230.f_3, false))
						{
							TASK::CLEAR_PED_TASKS(Local_230.f_3);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_270);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_270);
							TASK::TASK_SMART_FLEE_COORD(0, Local_230.f_17, 500f, 30000, false, false);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 261.0916f, -3089.062f, 4.79249f, 2f, -1, 0.25f, false, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 304.6327f, -2965.922f, 5.00012f, 2f, -1, 0.25f, false, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 309.8907f, -2870.473f, 5.15704f, 2f, -1, 0.25f, false, 40000f);
							TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_270);
							TASK::TASK_PERFORM_SEQUENCE(Local_230.f_3, iLocal_270);
							PED::SET_PED_KEEP_TASK(Local_230.f_3, true);
						}
					}
					func_11(1, &Local_230, 0);
					SYSTEM::SETTIMERA(0);
					func_293(&Local_230, 30);
				}
				break;
			
			case 30:
				if (func_10(PLAYER::PLAYER_PED_ID(), 213.4579f, -3329.471f, 4.7971f, 1) > 40f)
				{
					func_433();
				}
				else if (bLocal_304)
				{
					iLocal_277 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_318, 40f, joaat("ambulance"), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, false))
					{
						iLocal_305 = 1;
					}
					iLocal_277 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_318, 40f, joaat("police"), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, false))
					{
						iLocal_305 = 1;
					}
					iLocal_275 = PED::GET_RANDOM_PED_AT_COORD(Local_318, 10f, 10f, 5f, -1);
					if (!PED::IS_PED_INJURED(iLocal_275))
					{
						iLocal_305 = 1;
					}
					if (iLocal_305 || SYSTEM::TIMERA() > 30000)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						func_433();
					}
				}
				else
				{
					func_433();
				}
				break;
			}
	}
}

float func_10(int iParam0, struct<3> Param1, bool bParam2)//Position - 0xDE8
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

void func_11(bool bParam0, var uParam1, bool bParam2)//Position - 0xE22
{
	if (bParam0)
	{
		func_53(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_51(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)//Position - 0xE5E
{
	func_415(uParam0);
	if (func_113())
	{
		func_49();
	}
	func_47();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_42(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	func_39(uParam0->f_14, 1);
	func_37(uParam0->f_14, 1, 1114636288);
	func_36(&(uParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	if (func_33())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(true);
	func_23(0, 1, 1, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (func_22(Global_113386.f_19097, 4))
	{
		func_122(&(Global_113386.f_19097), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_21(), false);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_17(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_13(&iLocal_82) * 1000f)), 12, 0);
}

float func_13(int* iParam0)//Position - 0xFB4
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_14(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)//Position - 0xFED
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_15(var uParam0)//Position - 0x1045
{
	return BitTest(*uParam0, 2);
}

bool func_16(var uParam0)//Position - 0x1052
{
	return BitTest(*uParam0, 1);
}

void func_17(int iParam0)//Position - 0x105F
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_18(int iParam0)//Position - 0x1086
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_19(var uParam0)//Position - 0x114F
{
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uParam0->f_51[0]);
}

void func_20(var uParam0)//Position - 0x1163
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
			{
				PED::RESET_PED_LAST_VEHICLE(uParam0->f_3);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uParam0->f_413, joaat("player"));
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
		}
	}
}

int func_21()//Position - 0x125C
{
	return joaat("taxi");
}

bool func_22(var uParam0, int iParam1)//Position - 0x1269
{
	return (uParam0 && iParam1) != 0;
}

void func_23(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1278
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_32(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_31())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_30(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_32(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_30(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_28(PLAYER::PLAYER_ID())) && !func_25(PLAYER::PLAYER_ID(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_28(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

bool func_24()//Position - 0x13BB
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

bool func_25(int iParam0, int iParam1)//Position - 0x13D5
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)//Position - 0x1420
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()//Position - 0x1461
{
	return Global_1574918;
}

int func_28(int iParam0)//Position - 0x146D
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
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

bool func_29()//Position - 0x14AC
{
	return BitTest(Global_2621446, 3);
}

int func_30(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x14BA
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

int func_31()//Position - 0x14ED
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0)//Position - 0x1514
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

int func_33()//Position - 0x1537
{
	if (!func_35() && !func_34())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()//Position - 0x1562
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x157C
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0, int iParam1)//Position - 0x1596
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_37(struct<3> Param0, bool bParam1, float fParam2)//Position - 0x15B3
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_38(Param0, 1f, -fParam2, -fParam2, -fParam2) };
	Var1 = { func_38(Param0, 1f, fParam2, fParam2, fParam2) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var1.f_2 = (Var1.f_2 + 22f);
	if (!bParam1)
	{
		PATHFIND::SET_ROADS_IN_AREA(Var0, Var1, false, true);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var1, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

Vector3 func_38(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x1628
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	Var0.f_0 = ((Param2.f_0 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2.f_0 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

void func_39(struct<3> Param0, bool bParam1)//Position - 0x1675
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_40(Param0, func_41(), 0))
	{
		Var0 = { func_38(Param0, 1f, -30f, -30f, -10f) };
		Var1 = { func_38(Param0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, bParam1, true);
	}
}

bool func_40(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x16D5
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_41()//Position - 0x171C
{
	struct<3> Var0;
	
	return Var0;
}

void func_42(int iParam0)//Position - 0x1728
{
	if (func_46())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_45())
		{
			func_43(1, 1);
		}
		else
		{
			func_43(0, 0);
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
	if (!func_31())
	{
		Global_20266.f_1 = 3;
	}
}

void func_43(bool bParam0, bool bParam1)//Position - 0x17B2
{
	if (bParam0)
	{
		if (func_44(0))
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

int func_44(int iParam0)//Position - 0x1826
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

bool func_45()//Position - 0x187D
{
	return BitTest(Global_1958711, 5);
}

bool func_46()//Position - 0x188B
{
	return BitTest(Global_1958711, 19);
}

void func_47()//Position - 0x189A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97374[iVar0 /*17*/] && !Global_97374[iVar0 /*17*/].f_1)
		{
			if (Global_97374[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_97374[iVar0 /*17*/].f_5 != 88 && Global_97374[iVar0 /*17*/].f_5 != 89) && Global_97374[iVar0 /*17*/].f_5 != 92)
				{
					func_48(Global_97374[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_48(int iParam0, bool bParam1)//Position - 0x1921
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94426[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94426[iParam0 /*2*/] = 0;
	}
}

void func_49()//Position - 0x195F
{
	Global_20471 = 0;
	func_50();
}

void func_50()//Position - 0x196F
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

void func_51(int iParam0, int iParam1)//Position - 0x1990
{
	switch (iParam0)
	{
		case 0:
			Global_113386.f_19097.f_22[0]++;
			func_52("Fares Completed ++ = ", Global_113386.f_19097.f_22[0]);
			break;
		
		case 1:
			Global_113386.f_19097.f_22[1]++;
			func_52("Fares Failed ++ = ", Global_113386.f_19097.f_22[1]);
			break;
		
		case 2:
			Global_113386.f_19097.f_22[2]++;
			func_52("Fares Accepted ++ ", Global_113386.f_19097.f_22[2]);
			break;
		
		case 3:
			Global_113386.f_19097.f_22[3]++;
			func_52("Fares Expired ++ ", Global_113386.f_19097.f_22[3]);
			break;
		
		case 13:
			Global_113386.f_19097.f_22[13]++;
			func_52("Passengers run ++ = ", Global_113386.f_19097.f_22[13]);
			break;
		
		case 14:
			Global_113386.f_19097.f_22[14]++;
			func_52("Passenger Forced to Pay ++ = ", Global_113386.f_19097.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_113386.f_19097.f_22[4])
				{
					Global_113386.f_19097.f_22[4] = iParam1;
					func_52("This distance ", iParam1);
					func_52(" is longer than current best", Global_113386.f_19097.f_22[4]);
				}
				else
				{
					func_52("Longest Distance Not Beat ", Global_113386.f_19097.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_113386.f_19097.f_22[5] = (Global_113386.f_19097.f_22[5] + iParam1);
			func_52("Total Distance w/ Passenger = ", Global_113386.f_19097.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_113386.f_19097.f_22[6]++;
			}
			else
			{
				Global_113386.f_19097.f_22[6] = (Global_113386.f_19097.f_22[6] + iParam1);
			}
			func_52("Wanted Levels ++ = ", Global_113386.f_19097.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_113386.f_19097.f_22[7] = (Global_113386.f_19097.f_22[7] + iParam1);
			}
			else
			{
				Global_113386.f_19097.f_22[7]++;
			}
			func_52("Wanted Levels Lost = ", Global_113386.f_19097.f_22[7]);
			break;
		
		case 8:
			Global_113386.f_19097.f_22[8]++;
			func_52("Taxis wrecked ++ = ", Global_113386.f_19097.f_22[8]);
			break;
		
		case 9:
			Global_113386.f_19097.f_22[9]++;
			func_52("Horn Honked ++ = ", Global_113386.f_19097.f_22[9]);
			break;
		
		case 10:
			Global_113386.f_19097.f_22[10] = (Global_113386.f_19097.f_22[10] + iParam1);
			func_52("Total Money Earned = ", Global_113386.f_19097.f_22[10]);
			break;
		
		case 11:
			Global_113386.f_19097.f_22[11] = (Global_113386.f_19097.f_22[11] + iParam1);
			func_52("Total Tips Earned = ", Global_113386.f_19097.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_113386.f_19097.f_22[12])
			{
				Global_113386.f_19097.f_22[12] = iParam1;
				func_52("New Highest Tip = ", Global_113386.f_19097.f_22[12]);
			}
			else
			{
				func_52("Highest Tip Not Reached = ", Global_113386.f_19097.f_22[12]);
			}
			break;
	}
}

void func_52(char* sParam0, int iParam1)//Position - 0x1D81
{
}

void func_53(var uParam0)//Position - 0x1D89
{
	func_51(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_435(1);
		func_63(15, 1);
	}
	func_171(&(Global_113386.f_19097), 1024);
	if (!func_22(Global_113386.f_19097, 64))
	{
		func_54(func_61(func_62(uParam0)), 0, 0);
	}
}

void func_54(int iParam0, int iParam1, int iParam2)//Position - 0x1DDD
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
		func_60((891 + iParam0), 1, -1);
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
		func_55();
	}
}

void func_55()//Position - 0x1EC3
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
		func_59(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_58() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_56();
				}
			}
		}
	}
}

int func_56()//Position - 0x2381
{
	if (func_57(0))
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

int func_57(bool bParam0)//Position - 0x23CC
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_58()//Position - 0x23F4
{
	return Global_31959;
}

int func_59(int iParam0, int iParam1)//Position - 0x23FF
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

void func_60(int iParam0, bool bParam1, int iParam2)//Position - 0x2450
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_61(int iParam0)//Position - 0x246E
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_62(var uParam0)//Position - 0x2504
{
	return uParam0->f_411;
}

int func_63(int iParam0, int iParam1)//Position - 0x2511
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_64(iParam0, iParam1);
}

int func_64(int iParam0, int iParam1)//Position - 0x252C
{
	if (func_76(14) && !func_75(iParam0))
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
	if (func_74(&Global_4541529))
	{
		if (func_72(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_65(&Global_4541529, iParam0))
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

int func_65(var uParam0, int iParam1)//Position - 0x25C9
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_76(14) && !func_75(iParam1))
	{
		return 0;
	}
	if (func_72(uParam0, iParam1))
	{
		return 0;
	}
	if (func_71(uParam0) < 0f)
	{
		func_70(uParam0, 0);
	}
	func_68(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_66(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_66(var uParam0, int iParam1)//Position - 0x267A
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_76(14) && !func_75(iParam1))
	{
		return 0;
	}
	if (func_72(uParam0, iParam1))
	{
		return 0;
	}
	if (func_71(uParam0) < 0f)
	{
		func_70(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_67(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_67(var uParam0, int iParam1)//Position - 0x26F5
{
	return (*uParam0)[iParam1] == 78;
}

void func_68(var uParam0)//Position - 0x2706
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_69(uParam0, iVar0);
		iVar0++;
	}
	func_70(uParam0, (Global_4541528 - 0.5f));
}

void func_69(var uParam0, int iParam1)//Position - 0x273A
{
	(*uParam0)[iParam1] = 78;
}

void func_70(var uParam0, float fParam1)//Position - 0x274A
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

float func_71(var uParam0)//Position - 0x2767
{
	return uParam0->f_80;
}

bool func_72(var uParam0, int iParam1)//Position - 0x2773
{
	return func_73(uParam0, iParam1) != -1;
}

int func_73(var uParam0, int iParam1)//Position - 0x2785
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

bool func_74(var uParam0)//Position - 0x27B2
{
	return uParam0->f_79 == 1;
}

int func_75(int iParam0)//Position - 0x27C0
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

bool func_76(int iParam0)//Position - 0x2810
{
	return Global_43052 == iParam0;
}

int func_77(int iParam0, int iParam1)//Position - 0x281E
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_113() && func_111(iParam0, 0) > 1f)
			{
				if (func_33())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				func_109(iParam0);
				func_122(&(Global_113386.f_19097), 4096);
				func_106(iParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, func_108(iParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_105(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_99(iParam1, 0))
			{
				func_78(iParam0);
				func_298(iParam0, 0, 0, 0);
				func_105(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_78(int iParam0)//Position - 0x28F0
{
	int iVar0;
	
	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		func_79(func_97(), 21, iVar0, 0, 0);
		func_51(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_79(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x292E
{
	int iVar0;
	int iVar1;
	
	if (func_96(iParam0) == 3)
	{
		return;
	}
	if (func_96(iParam0) == 4)
	{
		return;
	}
	func_80(func_96(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
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
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
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

int func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2A00
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_95();
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
					func_94(99, 1);
					func_93(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_93(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_93(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_92(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_89(5))
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
							func_93(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_89(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_93(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_property"), iParam3);
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
									func_93(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_89(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_88(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_94(95, iParam3);
					break;
				
				case 1:
					func_94(97, iParam3);
					break;
				
				case 2:
					func_94(96, iParam3);
					break;
			}
			func_94(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_83(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_83(bVar1);
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
					func_93(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_93(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_93(joaat("sp2_total_cash_earned"), iParam3);
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
	func_82(iParam0);
	if (Global_43052 == 15)
	{
		func_81(0);
	}
	return 1;
}

void func_81(bool bParam0)//Position - 0x2FFF
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

void func_82(int iParam0)//Position - 0x3281
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

void func_83(bool bParam0)//Position - 0x32DB
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_60(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_60(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_60(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_60(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_86(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_86(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_86(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_86(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_86(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_86(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_85() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_85() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_84(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_84(bool bParam0)//Position - 0x345B
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

int func_85()//Position - 0x355E
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_86(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x356B
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_87(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_87(var uParam0)//Position - 0x359B
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

void func_88(int iParam0)//Position - 0x35CF
{
	func_94(93, iParam0);
	func_94(29, iParam0);
	func_94(30, iParam0);
}

int func_89(int iParam0)//Position - 0x35EF
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
		return func_91(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_91(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_91(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_91(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_90(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_90(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_90(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_90(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_90(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_90(8277, -1, 0);
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
	return BitTest(Global_2359296[func_85() /*5567*/].f_681.f_10, iParam0);
}

int func_90(int iParam0, int iParam1, int iParam2)//Position - 0x3795
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_87(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_91(int iParam0, int iParam1)//Position - 0x37D2
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_92(bool bParam0)//Position - 0x37EE
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
		func_59(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_63(27, 1);
	return 1;
}

void func_93(int iParam0, int iParam1)//Position - 0x38A5
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_94(int iParam0, int iParam1)//Position - 0x38C8
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

void func_95()//Position - 0x3925
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

int func_96(int iParam0)//Position - 0x399A
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_97()//Position - 0x39AB
{
	func_98();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_98()//Position - 0x39C4
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_4(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_3(PLAYER::PLAYER_PED_ID());
			if (func_6(iVar0) && (!func_76(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_6(Global_113386.f_2363.f_539.f_4321))
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

int func_99(var uParam0, int iParam1)//Position - 0x3AC1
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_103(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_103(&(uParam0->f_5));
				func_102(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_101(&(uParam0->f_5)) > 0.33f)
			{
				func_100(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_101(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_103(&(uParam0->f_5));
			func_102(uParam0, 1051260355);
		}
		else if (func_101(&(uParam0->f_5)) > 0.33f)
		{
			func_100(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_100(var uParam0)//Position - 0x3BC4
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_101(int* iParam0)//Position - 0x3BDA
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_14(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_102(var uParam0, float fParam1)//Position - 0x3C16
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_103(int* iParam0)//Position - 0x3C3C
{
	func_104(iParam0, 0f);
}

void func_104(int* iParam0, float fParam1)//Position - 0x3C4B
{
	iParam0->f_1 = (func_14(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_105(int iParam0)//Position - 0x3C76
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

void func_106(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x3C8A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, func_107());
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam9);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_103(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_107()//Position - 0x3CF5
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_108(int iParam0)//Position - 0x3D0F
{
	char* sVar0;
	
	switch (iParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_109(int iParam0)//Position - 0x3DA9
{
	int iVar0;
	
	Local_161.f_1 = SYSTEM::TO_FLOAT(iParam0->f_50);
	Local_161.f_2 = SYSTEM::TO_FLOAT(iParam0->f_56);
	func_51(11, iParam0->f_56);
	func_51(12, iParam0->f_56);
	iLocal_57[1] = iParam0->f_56;
	iLocal_57[2] = iParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { iParam0->f_60[iVar0 /*3*/] };
		if (BitTest(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(iParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161.f_0 = iParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

void func_110(int iParam0, int iParam1, bool bParam2)//Position - 0x3E55
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_100(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_100(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

float func_111(int iParam0, int iParam1)//Position - 0x3E9E
{
	if (!func_16(&(iParam0->f_146[iParam1 /*3*/])))
	{
		func_112(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return func_101(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_112(int* iParam0)//Position - 0x3ECE
{
	if (!func_16(iParam0))
	{
		func_103(iParam0);
	}
}

int func_113()//Position - 0x3EE6
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_114(int iParam0, int iParam1)//Position - 0x3F08
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(iParam0->f_60[iParam1 /*3*/]), 2);
		iParam0->f_105 = (iParam0->f_105 + iParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_115(int iParam0)//Position - 0x3F36
{
	if (iParam0->f_56 >= iParam0->f_59)
	{
		iParam0->f_56 = SYSTEM::CEIL((IntToFloat(iParam0->f_50) * 0.4f));
	}
	else if (iParam0->f_56 < iParam0->f_59 && iParam0->f_56 >= iParam0->f_58)
	{
		iParam0->f_56 = SYSTEM::CEIL((IntToFloat(iParam0->f_50) * 0.15f));
	}
	else
	{
		iParam0->f_56 = 0;
	}
	if (!func_22(iParam0->f_55, 1))
	{
		func_171(&(iParam0->f_55), 1);
	}
}

void func_116(int iParam0)//Position - 0x3FAA
{
	func_118();
	HUD::CLEAR_PRINTS();
	if (iParam0->f_56 < iParam0->f_58)
	{
		if (iParam0->f_411 == 0)
		{
			func_228(iParam0, 105, 1, 0, 0);
		}
		else
		{
			func_228(iParam0, 103, 1, 0, 0);
		}
		func_117(1);
	}
	else if (iParam0->f_56 >= iParam0->f_59)
	{
		func_228(iParam0, 101, 1, 0, 0);
	}
	else
	{
		func_228(iParam0, 102, 1, 0, 0);
	}
	func_298(iParam0, 16, 4f, 0);
}

void func_117(int iParam0)//Position - 0x401F
{
	Global_112096.f_221 = iParam0;
}

void func_118()//Position - 0x402F
{
	Global_20471 = 0;
	func_119();
}

void func_119()//Position - 0x403F
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

void func_120(var uParam0)//Position - 0x4063
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_121(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_51(4, SYSTEM::CEIL(fVar0));
	func_51(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_121(float fParam0)//Position - 0x40B5
{
	return (fParam0 * 0.0006213712f);
}

void func_122(var uParam0, int iParam1)//Position - 0x40C5
{
	func_123(uParam0, iParam1);
}

void func_123(var uParam0, int iParam1)//Position - 0x40D5
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_124()//Position - 0x40EA
{
	int iVar0;
	
	if (iLocal_269 < 4 && ((((((((((PED::IS_PED_INJURED(Local_247.f_3[0]) || PED::IS_PED_INJURED(Local_247.f_3[1])) || PED::IS_PED_INJURED(Local_247.f_3[2])) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_247.f_3[0]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_247.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_247.f_3[2]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_247.f_3[0], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_247.f_3[1], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_247.f_3[2], 0, 2))) || func_170(PLAYER::PLAYER_PED_ID(), Local_247.f_3[1], 1) < 6f) || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 204.0783f, -3331.305f, 6.040432f, 7.5f, 7.5f, 1.25f, false, true, 0) && ((((((!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_247.f_3[0])) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_247.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_247.f_3[2]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_247.f_3[0]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_247.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_247.f_3[2]))))))
	{
		Local_230.f_114 = 1;
		iLocal_269 = 4;
	}
	switch (iLocal_269)
	{
		case 0:
			func_228(&Local_230, 90, 1, 0, 0);
			func_203(&Local_336, -1, 1);
			func_162();
			MISC::CLEAR_BIT(&uLocal_290, 1);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295))
			{
				if ((!PED::IS_PED_INJURED(Local_247.f_3[0]) && !PED::IS_PED_INJURED(Local_247.f_3[1])) && !PED::IS_PED_INJURED(Local_247.f_3[2]))
				{
					iLocal_295 = PED::CREATE_SYNCHRONIZED_SCENE(Local_315, Local_316, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_295, true);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[0], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[1], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[2], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1000f, 0);
				}
			}
			iLocal_282 = MISC::GET_GAME_TIMER();
			iLocal_269 = 1;
			break;
		
		case 1:
			if (!func_113() && !BitTest(uLocal_290, 10))
			{
				func_228(&Local_230, 91, 1, 0, 0);
				MISC::SET_BIT(&uLocal_290, 10);
				func_112(&iLocal_329);
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_282) > 4000)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					if (func_161(&Local_230))
					{
						func_160("TAXI_VIEW", -1);
					}
					iLocal_298 = 1;
					if ((!PED::IS_PED_INJURED(Local_247.f_3[3]) && !PED::IS_PED_INJURED(iLocal_274[0])) && !PED::IS_PED_INJURED(iLocal_274[1]))
					{
						iLocal_292 = PED::CREATE_SYNCHRONIZED_SCENE(Local_313, Local_314, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[3], iLocal_292, "oddjobs@taxi@argument", "bridge_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[0], iLocal_292, "oddjobs@taxi@argument", "bridge_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[1], iLocal_292, "oddjobs@taxi@argument", "bridge_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
				}
			}
			if (func_159("TAXI_VIEW") && (PAD::IS_CONTROL_PRESSED(0, 80) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!PED::IS_PED_INJURED(Local_230.f_3) && (!func_113() || func_13(&iLocal_329) > 9f))
			{
				if ((ENTITY::IS_ENTITY_AT_COORD(Local_230.f_3, Local_317, 1.5f, 1.5f, 2f, false, true, 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_230.f_3, 242628503) == 7) && (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) > 0.995f))
				{
					if ((!PED::IS_PED_INJURED(Local_247.f_3[0]) && !PED::IS_PED_INJURED(Local_247.f_3[1])) && !PED::IS_PED_INJURED(Local_247.f_3[2]))
					{
						iLocal_296 = PED::CREATE_SYNCHRONIZED_SCENE(Local_315, Local_316, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[0], iLocal_296, "oddjobs@taxi@argument", "stand_off_biker_a", 1000f, -4f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[1], iLocal_296, "oddjobs@taxi@argument", "stand_off_biker_b", 1000f, -4f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[2], iLocal_296, "oddjobs@taxi@argument", "stand_off_biker_c", 1000f, -4f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_296, true);
					}
					TASK::TASK_PLAY_ANIM(Local_230.f_3, "oddjobs@taxi@argument", "stand_off_passenger", 4f, -8f, -1, 0, 0f, false, false, false);
					iLocal_284 = MISC::GET_GAME_TIMER();
					iLocal_282 = MISC::GET_GAME_TIMER();
					iLocal_269 = 2;
				}
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_282) > 2500 && !BitTest(uLocal_290, 1))
			{
				func_228(&Local_230, 89, 1, 1, 0);
				MISC::SET_BIT(&uLocal_290, 1);
			}
			if (((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_296) >= 0.838f && !PED::IS_PED_INJURED(Local_230.f_3)) && !PED::IS_PED_INJURED(Local_247.f_3[1])) && !BitTest(uLocal_290, 6))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_247.f_3[1], joaat("weapon_pistol"), -1, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_230.f_3, joaat("weapon_pistol"), -1, true, true);
				MISC::SET_BIT(&uLocal_290, 6);
			}
			if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_296) >= 0.853f && !PED::IS_PED_INJURED(Local_247.f_3[2])) && !BitTest(uLocal_290, 7))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_247.f_3[2], joaat("weapon_pistol"), -1, true, true);
				MISC::SET_BIT(&uLocal_290, 7);
			}
			if (!BitTest(uLocal_290, 3))
			{
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_292) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_292) == 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_292))
				{
					if ((!PED::IS_PED_INJURED(Local_247.f_3[3]) && !PED::IS_PED_INJURED(iLocal_274[0])) && !PED::IS_PED_INJURED(iLocal_274[1]))
					{
						iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(Local_313, Local_314, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[3], iLocal_293, "oddjobs@taxi@argument", "hooker_loop_b_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[0], iLocal_293, "oddjobs@taxi@argument", "hooker_loop_b_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[1], iLocal_293, "oddjobs@taxi@argument", "hooker_loop_b_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_293, true);
						MISC::SET_BIT(&uLocal_290, 3);
					}
				}
			}
			if (BitTest(uLocal_290, 1))
			{
				Local_328 = { func_158() };
				if (MISC::ARE_STRINGS_EQUAL(&cLocal_320, &Local_328) || MISC::ARE_STRINGS_EQUAL(&cLocal_324, &Local_328))
				{
					if ((!PED::IS_PED_INJURED(Local_247.f_3[3]) && !PED::IS_PED_INJURED(iLocal_274[0])) && !PED::IS_PED_INJURED(iLocal_274[1]))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293))
						{
							iLocal_294 = PED::CREATE_SYNCHRONIZED_SCENE(Local_313, Local_314, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[3], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[0], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[1], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_294, true);
							iLocal_283 = MISC::GET_GAME_TIMER();
							iLocal_269 = 3;
						}
						else
						{
							iLocal_294 = PED::CREATE_SYNCHRONIZED_SCENE(Local_313, Local_314, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[3], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[0], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[1], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_294, true);
							iLocal_283 = MISC::GET_GAME_TIMER();
							iLocal_269 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			switch (iLocal_286)
			{
				case 0:
					if (((MISC::GET_GAME_TIMER() - iLocal_283) > 850 && !PED::IS_PED_INJURED(Local_247.f_3[3])) && !BitTest(uLocal_290, 8))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_247.f_3[3], joaat("weapon_pistol"), -1, true, true);
						MISC::SET_BIT(&uLocal_290, 8);
					}
					if (((!PED::IS_PED_INJURED(Local_247.f_3[0]) && !PED::IS_PED_INJURED(Local_247.f_3[1])) && !PED::IS_PED_INJURED(Local_247.f_3[2])) && !PED::IS_PED_INJURED(Local_230.f_3))
					{
						PED::SET_PED_RESET_FLAG(Local_247.f_3[0], 156, true);
						PED::SET_PED_RESET_FLAG(Local_247.f_3[1], 156, true);
						PED::SET_PED_RESET_FLAG(Local_247.f_3[2], 156, true);
						PED::SET_PED_RESET_FLAG(Local_230.f_3, 156, true);
						if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_296) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_296) == 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_296)) || (MISC::GET_GAME_TIMER() - iLocal_284) > 27000)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_284) > 27000)
							{
							}
							iLocal_307 = 1;
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_247.f_3[0], Local_230.f_3, -1, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_247.f_3[1], Local_230.f_3, -1, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_247.f_3[2], Local_230.f_3, -1, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_230.f_3, Local_247.f_3[1], -1, false);
							iLocal_282 = 0;
							iLocal_286++;
						}
					}
					break;
				
				case 1:
					if (((MISC::GET_GAME_TIMER() - iLocal_283) > 850 && !PED::IS_PED_INJURED(Local_247.f_3[3])) && !BitTest(uLocal_290, 8))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_247.f_3[3], joaat("weapon_pistol"), -1, true, true);
						MISC::SET_BIT(&uLocal_290, 8);
					}
					if (!PED::IS_PED_INJURED(Local_247.f_3[3]))
					{
						PED::SET_PED_RESET_FLAG(Local_247.f_3[3], 156, true);
					}
					if (!BitTest(uLocal_290, 4))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_294) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) == 1f)
						{
							if (((!PED::IS_PED_INJURED(Local_247.f_3[3]) && !PED::IS_PED_INJURED(iLocal_274[0])) && !PED::IS_PED_INJURED(iLocal_274[1])) && !PED::IS_PED_INJURED(Local_230.f_3))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_274[0], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 0.25f, false, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_274[1], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 0.25f, false, 40000f);
								PED::FORCE_PED_MOTION_STATE(iLocal_274[0], joaat("MotionState_Sprint"), false, 0, false);
								PED::FORCE_PED_MOTION_STATE(iLocal_274[1], joaat("MotionState_Sprint"), false, 0, false);
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_247.f_3[3], Local_230.f_3, -1, true);
								MISC::SET_BIT(&uLocal_290, 4);
							}
						}
					}
					Local_328 = { func_158() };
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_7", &Local_328) && iLocal_282 == 0)
					{
						iLocal_282 = MISC::GET_GAME_TIMER();
					}
					else if ((iLocal_282 > 0 && (MISC::GET_GAME_TIMER() - iLocal_282) > 1500) && !BitTest(uLocal_290, 9))
					{
						func_157();
						func_156("TAXI_OBJ_GYB", 4000, 0);
						func_155(&(Local_247.f_3), &(Local_247.f_11));
						iLocal_298 = 0;
						CAM::DESTROY_CAM(Local_230.f_0, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						iLocal_282 = MISC::GET_GAME_TIMER();
						iLocal_286 = 2;
						MISC::SET_BIT(&uLocal_290, 9);
					}
					else if (iLocal_282 > 0 && (MISC::GET_GAME_TIMER() - iLocal_282) > 1200)
					{
						if (func_154() && CAM::IS_CAM_ACTIVE(Local_230.f_0))
						{
							if (!iLocal_308)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								iLocal_308 = 1;
							}
						}
					}
					break;
				
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_282) > 4000 && BitTest(uLocal_290, 9))
					{
						func_139(&(Local_230.f_244), Local_230.f_144, "txm12_deal1", "txm12_deal1_9", 9, 0, 0);
						iLocal_282 = MISC::GET_GAME_TIMER();
						MISC::CLEAR_BIT(&uLocal_290, 9);
					}
					if ((((!PED::IS_PED_INJURED(Local_230.f_3) && !PED::IS_PED_INJURED(Local_247.f_3[0])) && !PED::IS_PED_INJURED(Local_247.f_3[2])) && !BitTest(uLocal_290, 9)) && (MISC::GET_GAME_TIMER() - iLocal_282) > 2000)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_247.f_3[0], 115, 0);
						ENTITY::SET_ENTITY_HEALTH(Local_247.f_3[2], 115, 0);
						iLocal_282 = MISC::GET_GAME_TIMER();
						iLocal_286 = 8;
					}
					break;
				
				case 3:
					if (!func_113())
					{
						func_228(&Local_230, 12, 1, 0, 0);
						func_298(&Local_230, 19, 0, 0);
						iLocal_282 = MISC::GET_GAME_TIMER();
						iLocal_286++;
					}
					break;
				
				case 4:
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_298(&Local_230, 19, 0, 0);
						func_228(&Local_230, 116, 1, 0, 0);
						iLocal_286++;
					}
					break;
				
				case 5:
				case 6:
				case 7:
					if (func_111(&Local_230, 19) > 2f)
					{
						func_298(&Local_230, 19, 0, 0);
						func_228(&Local_230, 116, 1, 0, 0);
						iLocal_286++;
					}
					break;
				
				case 8:
					if ((!PED::IS_PED_INJURED(Local_247.f_3[0]) && !PED::IS_PED_INJURED(Local_247.f_3[1])) && !PED::IS_PED_INJURED(Local_247.f_3[2]))
					{
						PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_262, Local_230.f_413);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, Local_230.f_413);
						PED::SET_PED_ACCURACY(Local_247.f_3[0], 100);
						PED::SET_PED_ACCURACY(Local_247.f_3[2], 100);
						TASK::TASK_SHOOT_AT_ENTITY(Local_247.f_3[0], Local_230.f_3, 5000, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_SHOOT_AT_ENTITY(Local_247.f_3[1], Local_230.f_3, 5000, joaat("FIRING_PATTERN_BURST_FIRE"));
						TASK::TASK_SHOOT_AT_ENTITY(Local_247.f_3[2], Local_230.f_3, 5000, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_282 = MISC::GET_GAME_TIMER();
						iLocal_286++;
					}
					break;
				
				case 9:
					if ((MISC::GET_GAME_TIMER() - iLocal_282) > 5000)
					{
						iLocal_269 = 4;
					}
					break;
			}
			break;
		
		case 4:
			if (!Local_230.f_114)
			{
				Local_230.f_114 = 1;
			}
			func_171(&uLocal_380, 1);
			func_171(&uLocal_380, 16);
			func_171(&uLocal_380, 32);
			func_157();
			func_136();
			func_135();
			func_303(&(Local_247.f_3));
			func_155(&(Local_247.f_3), &(Local_247.f_11));
			func_302(&iLocal_274);
			iLocal_282 = MISC::GET_GAME_TIMER();
			iLocal_269 = 5;
			break;
		
		case 5:
			if (iLocal_287 >= 2 && !func_305(&Local_230, 8))
			{
				func_304(&Local_230, 8);
			}
			else if (func_305(&Local_230, 8) && func_111(&Local_230, 8) > 3f)
			{
				func_133();
				func_130();
				iLocal_282 = MISC::GET_GAME_TIMER();
				iLocal_269 = 6;
			}
			else
			{
				iLocal_287 = 0;
			}
			func_128(&(Local_247.f_3), &(Local_247.f_11), &(Local_257.f_3), &(Local_257.f_11));
			break;
		
		case 6:
			if ((PED::IS_PED_INJURED(Local_257.f_3[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[0], false)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_257.f_27[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_257.f_27[0]);
			}
			if ((((PED::IS_PED_INJURED(Local_257.f_3[2]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_257.f_3[2], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_257.f_3[2], Local_230.f_3, true)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[1], false)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_257.f_27[1]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_257.f_27[1]);
			}
			if (HUD::DOES_BLIP_EXIST(Local_257.f_37[0]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[0], false))
			{
				HUD::REMOVE_BLIP(&(Local_257.f_37[0]));
			}
			if (HUD::DOES_BLIP_EXIST(Local_257.f_37[1]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[1], false))
			{
				HUD::REMOVE_BLIP(&(Local_257.f_37[1]));
			}
			if (!iLocal_303 && ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[0], false) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_257.f_27[0])) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[1], false) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_257.f_27[1]))))
			{
				if (func_127(&(Local_257.f_3)))
				{
					func_155(&(Local_257.f_3), &(Local_257.f_11));
					func_126();
					iLocal_303 = 1;
				}
			}
			if (!BitTest(uLocal_290, 2))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_282) > 5000)
				{
					func_303(&(Local_257.f_3));
					func_125(&(Local_247.f_3));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, Local_230.f_413);
					MISC::SET_BIT(&uLocal_290, 2);
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_257.f_3)
				{
					if (!PED::IS_PED_INJURED(Local_257.f_3[iVar0]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_257.f_3[iVar0], -1442466670) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_257.f_3[iVar0], -1442466670) != 0)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_257.f_3[iVar0], 1000f, 0);
						}
					}
					iVar0++;
				}
			}
			if (!PED::IS_PED_INJURED(Local_230.f_3))
			{
				if (iLocal_306)
				{
					if (!func_113())
					{
						func_228(&Local_230, 140, 1, 0, 1);
					}
					iLocal_306 = 0;
				}
			}
			return func_128(&(Local_247.f_3), &(Local_247.f_11), &(Local_257.f_3), &(Local_257.f_11));
			break;
	}
	return 0;
}

void func_125(var uParam0)//Position - 0x541E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			PED::SET_PED_ACCURACY((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_126()//Position - 0x5453
{
	if (HUD::DOES_BLIP_EXIST(Local_257.f_37[0]))
	{
		HUD::REMOVE_BLIP(&(Local_257.f_37[0]));
	}
	if (HUD::DOES_BLIP_EXIST(Local_257.f_37[1]))
	{
		HUD::REMOVE_BLIP(&(Local_257.f_37[1]));
	}
}

int func_127(var uParam0)//Position - 0x5491
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0], false))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_128(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x54CF
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iLocal_288 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0], false))
		{
			if (HUD::DOES_BLIP_EXIST((*uParam1)[iVar0]))
			{
				HUD::REMOVE_BLIP(uParam1[iVar0]);
			}
			if (func_129(&Local_230, (*uParam0)[iVar0], 1))
			{
				iLocal_288++;
			}
			iLocal_287++;
		}
		else
		{
			iLocal_288 = 0;
			iVar1 = 0;
		}
		if (ENTITY::IS_ENTITY_DEAD((*uParam2)[iVar0], false))
		{
			if (HUD::DOES_BLIP_EXIST((*uParam3)[iVar0]))
			{
				HUD::REMOVE_BLIP(uParam3[iVar0]);
				iLocal_306 = 1;
			}
			if (func_129(&Local_230, (*uParam2)[iVar0], 1))
			{
				iLocal_288++;
			}
		}
		else
		{
			iLocal_288 = 0;
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_129(var uParam0, int iParam1, bool bParam2)//Position - 0x558E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_130()//Position - 0x55EB
{
	if (!HUD::DOES_BLIP_EXIST(Local_257.f_37[0]) && !HUD::DOES_BLIP_EXIST(Local_257.f_37[1]))
	{
		Local_257.f_37[0] = func_131(Local_257.f_27[0], 0, 0);
		Local_257.f_37[1] = func_131(Local_257.f_27[1], 0, 0);
	}
}

int func_131(int iParam0, bool bParam1, bool bParam2)//Position - 0x5641
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_132(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_132(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_132(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_132(bool bParam0, float fParam1, float fParam2)//Position - 0x56E5
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_133()//Position - 0x56FC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[0], false))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_257.f_27[0], iLocal_285, func_134(0), 6, 1000, 786603);
		VEHICLE::SET_PLAYBACK_SPEED(Local_257.f_27[0], 1f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[1], false))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_257.f_27[1], iLocal_285, func_134(1), 6, 1000, 786603);
		VEHICLE::SET_PLAYBACK_SPEED(Local_257.f_27[1], 1f);
	}
}

char* func_134(int iParam0)//Position - 0x5776
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "txm12_s01_a";
			break;
		
		case 1:
			sVar0 = "txm12_s01_b";
			break;
	}
	return sVar0;
}

void func_135()//Position - 0x57A5
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_3))
	{
		if (!PED::IS_PED_INJURED(Local_230.f_3))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_230.f_8))
			{
				Local_230.f_8 = func_131(Local_230.f_3, 1, 0);
			}
			WEAPON::GET_CURRENT_PED_WEAPON(Local_230.f_3, &iVar0, true);
			if (iVar0 == joaat("weapon_unarmed"))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_230.f_3, joaat("weapon_combatpistol"), 100, false, true);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 12, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 24, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 34, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 37, true);
			PED::SET_PED_SEEING_RANGE(Local_230.f_3, 300f);
			PED::SET_PED_HEARING_RANGE(Local_230.f_3, 300f);
			PED::SET_PED_ID_RANGE(Local_230.f_3, 300f);
			PED::SET_PED_COMBAT_MOVEMENT(Local_230.f_3, 1);
			PED::SET_PED_CAN_EVASIVE_DIVE(Local_230.f_3, true);
			PED::SET_PED_ACCURACY(Local_230.f_3, 80);
			PED::SET_PED_COMBAT_RANGE(Local_230.f_3, 2);
			PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_230.f_3, 203.7838f, -3326.701f, 4.7901f, 204.288f, -3334.846f, 6.883f, 5.5f, false, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, Local_230.f_413);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_230.f_413, iLocal_262);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_270);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_270);
			TASK::TASK_SEEK_COVER_FROM_POS(0, 201.9434f, -3324.029f, 4.7888f, 5000, true);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_270);
			TASK::TASK_PERFORM_SEQUENCE(Local_230.f_3, iLocal_270);
			PED::SET_PED_KEEP_TASK(Local_230.f_3, true);
		}
	}
}

void func_136()//Position - 0x5949
{
	int iVar0;
	
	Local_257.f_27[0] = VEHICLE::CREATE_VEHICLE(Local_257.f_32[0], func_138(1), func_137(1), true, true, false);
	Local_257.f_27[1] = VEHICLE::CREATE_VEHICLE(Local_257.f_32[1], func_138(2), func_137(2), true, true, false);
	Local_257.f_3[0] = PED::CREATE_PED_INSIDE_VEHICLE(Local_257.f_27[0], 26, Local_257.f_19[0], -1, true, true);
	Local_257.f_3[1] = PED::CREATE_PED_INSIDE_VEHICLE(Local_257.f_27[0], 26, Local_257.f_19[0], 0, true, true);
	Local_257.f_3[2] = PED::CREATE_PED_INSIDE_VEHICLE(Local_257.f_27[1], 26, Local_257.f_19[0], -1, true, true);
	Local_257.f_3[3] = PED::CREATE_PED_INSIDE_VEHICLE(Local_257.f_27[1], 26, Local_257.f_19[0], 0, true, true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_257.f_27[1], "LuisLopz");
	func_8(&(Local_230.f_244), 6, Local_257.f_3[0], "TaxiBruce", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(Local_257.f_3[0], "TaxiBruce");
	WEAPON::GIVE_WEAPON_TO_PED(Local_257.f_3[0], joaat("weapon_smg"), 100, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_257.f_3[1], joaat("weapon_pistol"), 100, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_257.f_3[2], joaat("weapon_smg"), 100, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_257.f_3[3], joaat("weapon_pistol"), 100, true, true);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		PED::SET_PED_MONEY(Local_257.f_3[iVar0], MISC::GET_RANDOM_INT_IN_RANGE(50, 100));
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_257.f_3[iVar0], 2, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_257.f_3[iVar0], 13, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_257.f_3[iVar0], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_257.f_3[iVar0], 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_257.f_3[iVar0], 37, true);
		PED::SET_PED_CONFIG_FLAG(Local_257.f_3[iVar0], 42, true);
		PED::SET_PED_SEEING_RANGE(Local_257.f_3[iVar0], 300f);
		PED::SET_PED_HEARING_RANGE(Local_257.f_3[iVar0], 300f);
		PED::SET_PED_ID_RANGE(Local_257.f_3[iVar0], 300f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_257.f_3[iVar0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_257.f_3[iVar0], iLocal_262);
		PED::SET_PED_ACCURACY(Local_257.f_3[iVar0], 50);
		iVar0++;
	}
}

float func_137(int iParam0)//Position - 0x5B89
{
	switch (iParam0)
	{
		case 1:
			return 159.2139f;
			break;
		
		case 2:
			return 156.7733f;
			break;
	}
	return 0f;
}

Vector3 func_138(int iParam0)//Position - 0x5BBB
{
	switch (iParam0)
	{
		case 1:
			return 290.2584f, -3236.66f, 4.8352f;
			break;
		
		case 2:
			return 299.2215f, -3235.248f, 4.7762f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_139(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5C03
{
	func_153(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 1;
	Global_22598 = 0;
	Global_22602 = 0;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_140(sParam2, iParam4, 0);
}

int func_140(char* sParam0, int iParam1, bool bParam2)//Position - 0x5C57
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
					func_152();
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
		if (func_151(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_150();
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
				func_149();
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
				if (func_148())
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
			if (func_31())
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
			func_147();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_146();
		func_141();
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
		func_152();
	}
	return 0;
}

void func_141()//Position - 0x5F25
{
	if (!func_142())
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

int func_142()//Position - 0x5F5C
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_145())
	{
		return 0;
	}
	if (func_143(PLAYER::PLAYER_ID()))
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

bool func_143(int iParam0)//Position - 0x5FBF
{
	return func_144(iParam0, 20);
}

var func_144(int iParam0, int iParam1)//Position - 0x5FCF
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_145()//Position - 0x5FE7
{
	return -1;
}

void func_146()//Position - 0x5FF0
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

void func_147()//Position - 0x6022
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

int func_148()//Position - 0x60B7
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

void func_149()//Position - 0x6150
{
	if (func_76(14))
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
		Global_20266 = func_97();
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

void func_150()//Position - 0x61F2
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

bool func_151(int iParam0, int iParam1)//Position - 0x624A
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

void func_152()//Position - 0x6282
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

void func_153(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x62D9
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

int func_154()//Position - 0x632F
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_155(var uParam0, var uParam1)//Position - 0x6348
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!HUD::DOES_BLIP_EXIST((*uParam1)[iVar0]))
			{
				(*uParam1)[iVar0] = func_131((*uParam0)[iVar0], 0, 0);
			}
		}
		iVar0++;
	}
}

void func_156(char* sParam0, int iParam1, int iParam2)//Position - 0x6392
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_157()//Position - 0x63AB
{
	Global_20471 = 0;
	func_152();
}

struct<6> func_158()//Position - 0x63BB
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_22615);
		if (iVar1 > -1)
		{
			return Global_20473[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_159(char* sParam0)//Position - 0x6401
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_160(char* sParam0, int iParam1)//Position - 0x6414
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_161(int iParam0)//Position - 0x642B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

void func_162()//Position - 0x6455
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_3))
	{
		if (!PED::IS_PED_INJURED(Local_230.f_3))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_230.f_3, Local_230.f_413);
			TASK::TASK_LOOK_AT_ENTITY(Local_230.f_3, Local_247.f_3[1], -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_270);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_270);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 262144);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_317, 1f, 30000, 0.25f, false, 40000f);
			TASK::TASK_ACHIEVE_HEADING(0, -30.3f, 0);
			TASK::TASK_CLEAR_LOOK_AT(0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_270);
			TASK::TASK_PERFORM_SEQUENCE(Local_230.f_3, iLocal_270);
		}
	}
}

float func_163(int iParam0, bool bParam1)//Position - 0x64EF
{
	return func_170(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

void func_164(int iParam0, bool bParam1)//Position - 0x6507
{
	if (iParam0 < Local_165.f_0 && iParam0 >= 0)
	{
		if (bParam1)
		{
			func_165(&(Local_165.f_1[iParam0 /*4*/]), 2);
		}
		else
		{
			func_123(&(Local_165.f_1[iParam0 /*4*/]), 2);
		}
	}
}

void func_165(var uParam0, int iParam1)//Position - 0x6545
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_166(var uParam0, bool bParam1, float fParam2)//Position - 0x6556
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (func_44(1))
			{
				func_42(0);
			}
			if (func_33())
			{
				func_169();
				return 1;
			}
			else if (func_167(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
				}
			}
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_4, true);
		}
	}
	return 0;
}

int func_167(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x65D7
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
	func_168(iParam0);
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

void func_168(int iParam0)//Position - 0x676F
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

void func_169()//Position - 0x679B
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	}
}

float func_170(int iParam0, int iParam1, bool bParam2)//Position - 0x67B8
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

void func_171(var uParam0, int iParam1)//Position - 0x6816
{
	func_165(uParam0, iParam1);
}

int func_172(int iParam0, float fParam1, float fParam2, float fParam3)//Position - 0x6826
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !iParam0->f_142)
	{
		if (func_189(iParam0))
		{
			func_188(iParam0, &(iParam0->f_43));
			func_183(iParam0);
			func_182(iParam0);
			func_179(iParam0);
			func_178(iParam0, fParam2, fParam3);
			func_175(iParam0);
			return func_173(iParam0, fParam1);
		}
	}
	return 0;
}

int func_173(int iParam0, float fParam1)//Position - 0x689E
{
	if (func_62(iParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0))
		{
		}
		if (((func_10(iParam0->f_4, iParam0->f_17, 1) <= (fParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_174(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4))
		{
			return func_166(iParam0, 1, fParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_174(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4))
	{
		return func_166(iParam0, 1, fParam1);
	}
	return 0;
}

int func_174(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6975
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

void func_175(int iParam0)//Position - 0x6A5A
{
	float fVar0;
	
	if ((func_177(iParam0) && func_22(iParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_89) >= 10000)
		{
			fVar0 = func_176(iParam0->f_17, 1);
			if (fVar0 > fLocal_87)
			{
				iLocal_88++;
			}
			else
			{
				iLocal_88 = 0;
			}
			fLocal_87 = fVar0;
			iLocal_89 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_88 >= 2 && !func_113())
		{
			func_228(iParam0, 136, 1, 0, 1);
			iLocal_88 = 0;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 4000) < 50)
		{
			if (!func_177(iParam0))
			{
			}
			if (!func_22(iParam0->f_81, 67108864))
			{
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_88 > 0)
			{
				iLocal_88 = 0;
			}
		}
	}
}

float func_176(struct<3> Param0, bool bParam1)//Position - 0x6B30
{
	return func_207(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, bParam1);
}

int func_177(int iParam0)//Position - 0x6B4A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(iParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0->f_3, iParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_178(int iParam0, float fParam1, float fParam2)//Position - 0x6B7F
{
	if (func_177(iParam0) && func_22(iParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_4) || ENTITY::GET_ENTITY_SPEED(iParam0->f_4) < 3f) && func_161(iParam0))
		{
			if (!func_305(iParam0, 2))
			{
				func_304(iParam0, 2);
			}
			else if (func_177(iParam0))
			{
				if (func_111(iParam0, 2) > fParam1 && !func_305(iParam0, 14))
				{
					if (func_35())
					{
						func_228(iParam0, 48, 1, 0, 0);
					}
					else
					{
						func_228(iParam0, 48, 1, 0, 0);
					}
					func_298(iParam0, 2, 0, 0);
					if (func_305(iParam0, 10))
					{
						func_298(iParam0, 10, 0, 0);
					}
				}
				if (!func_305(iParam0, 3))
				{
					func_298(iParam0, 3, 0, 0);
				}
				else if (func_111(iParam0, 3) >= fParam2)
				{
					func_110(iParam0, 3, 0);
					func_330(iParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_305(iParam0, 2))
			{
				func_110(iParam0, 2, 0);
			}
			if (func_305(iParam0, 3))
			{
				func_110(iParam0, 3, 0);
			}
		}
	}
}

void func_179(int iParam0)//Position - 0x6C9A
{
	if (func_181(iParam0))
	{
		func_180(iParam0);
	}
}

void func_180(int iParam0)//Position - 0x6CB1
{
	if (AUDIO::IS_RADIO_RETUNING() && iParam0->f_418.f_4 != 0)
	{
		iParam0->f_418.f_4 = 0;
	}
	switch (iParam0->f_418.f_4)
	{
		case 0:
			iParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_110(iParam0, 20, 0);
			iParam0->f_418.f_4++;
			break;
		
		case 1:
			if (iParam0->f_418.f_8 && !iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (func_111(iParam0, 20) > 3f)
				{
					func_228(iParam0, 87, 1, 0, 0);
					iParam0->f_418.f_8 = 0;
					iParam0->f_418.f_4++;
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_1)
			{
				if (!func_22(iParam0->f_81, 262144) || !func_22(iParam0->f_81, 1048576))
				{
					if (func_111(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_5 = 1;
						func_228(iParam0, 84, 1, 0, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (!func_22(iParam0->f_82, 67108864))
				{
					if (func_111(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_6 = 1;
						iParam0->f_418.f_8 = 0;
						func_228(iParam0, 85, 1, 0, 0);
						func_110(iParam0, 22, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418.f_7)
			{
				if (func_111(iParam0, 20) > 8f)
				{
					func_228(iParam0, 86, 1, 0, 0);
					iParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_22(iParam0->f_81, 262144) || func_22(iParam0->f_82, 67108864))
			{
				if (!func_305(iParam0, 22))
				{
					func_304(iParam0, 22);
				}
			}
			if (func_305(iParam0, 22) && func_111(iParam0, 22) > 15f)
			{
				if (iParam0->f_418 == iParam0->f_418.f_1)
				{
					if (!func_22(iParam0->f_81, 1048576))
					{
						func_228(iParam0, 84, 1, 0, 0);
						func_110(iParam0, 22, 0);
					}
				}
				else if (iParam0->f_418 == iParam0->f_418.f_2)
				{
					if (!func_22(iParam0->f_82, 134217728))
					{
						func_228(iParam0, 85, 1, 0, 0);
						func_110(iParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_181(var uParam0)//Position - 0x6F2C
{
	return uParam0->f_120;
}

void func_182(int iParam0)//Position - 0x6F38
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !func_22(iParam0->f_44, 2))
	{
		func_171(&(iParam0->f_44), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_22(iParam0->f_44, 2))
	{
		func_122(&(iParam0->f_44), 2);
		iParam0->f_47++;
		func_51(9, 0);
	}
	if (iParam0->f_47 > 30)
	{
		func_228(iParam0, 47, 1, 0, 0);
		iParam0->f_47 = 0;
		iParam0->f_76 = (iParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_183(int iParam0)//Position - 0x6FC1
{
	if (!func_22(iParam0->f_44, 1))
	{
		switch (iParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_111(iParam0, 9) > 1f)
					{
						func_187(iParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (iParam0->f_410 != 22)
						{
							func_228(iParam0, 50, 1, 1, 0);
						}
						func_298(iParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(iParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(iParam0->f_9, false);
						}
						iParam0->f_140 = 1;
						iParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_113() && func_111(iParam0, 9) > 4f)
				{
					func_228(iParam0, 52, 1, 0, 0);
					iParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_186("TAXI_OBJ_POL", 0, 0))
				{
					if (iParam0->f_410 != 22)
					{
						func_228(iParam0, 51, 0, 0, 0);
					}
					iParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					iParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_185(iParam0)))
				{
					func_187(iParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					func_51(6, 0);
				}
				if (!func_184(iParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_111(iParam0, 16) > 10f)
						{
							if (iParam0->f_410 != 22)
							{
								func_228(iParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (func_186("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(iParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(iParam0->f_9, true);
					}
					iParam0->f_140 = 0;
					iParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_113())
				{
					if (iParam0->f_410 != 22)
					{
						func_228(iParam0, 53, 1, 0, 1);
					}
					func_51(7, func_185(iParam0));
					func_187(iParam0, 0);
					iParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_113())
				{
					func_110(iParam0, 9, 0);
					func_298(iParam0, 11, 0, 0);
					iParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_184(int iParam0)//Position - 0x71E5
{
	return iParam0->f_110;
}

int func_185(int iParam0)//Position - 0x71F1
{
	return iParam0->f_106;
}

bool func_186(char* sParam0, int iParam1, char* sParam2)//Position - 0x71FD
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_187(int iParam0, int iParam1)//Position - 0x721B
{
	if (iParam0->f_106 != iParam1)
	{
		iParam0->f_106 = iParam1;
	}
}

void func_188(var uParam0, float* fParam1)//Position - 0x7232
{
	STATS::STAT_GET_FLOAT(uParam0->f_428, fParam1, -1);
	uParam0->f_41 = (*fParam1 - uParam0->f_42);
}

int func_189(var uParam0)//Position - 0x7253
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_330(uParam0, "Passenger left car.", 9);
			}
			else if (func_199(uParam0))
			{
				if (func_186("TAXI_OBJ_PICKUP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					return 1;
				}
			}
			else
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_190(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_190(var uParam0, bool bParam1)//Position - 0x72E2
{
	func_198(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (!func_305(uParam0, 14))
			{
				if (func_113())
				{
					func_197(1);
				}
				func_196(uParam0, 11, 1);
				func_191(uParam0, 1);
				func_298(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_177(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, false))
					{
						if (func_111(uParam0, 15) > 5f)
						{
							func_298(uParam0, 15, 0f, 1);
						}
					}
					if (func_111(uParam0, 14) > 20f)
					{
						func_330(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_111(uParam0, 14) > 20f)
				{
					if (func_163(uParam0->f_4, 1) > 40f)
					{
						func_330(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_330(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_191(var uParam0, bool bParam1)//Position - 0x73ED
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
				func_195(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				HUD::CLEAR_PRINTS();
				if (func_177(uParam0))
				{
					func_228(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_195(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_192(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
				}
			}
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_192(var uParam0, bool bParam1, bool bParam2)//Position - 0x750B
{
	if (bParam1)
	{
		func_415(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		uParam0->f_10 = func_131(uParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(uParam0->f_10, true);
		func_193(uParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			func_228(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_193(var uParam0)//Position - 0x7566
{
	func_298(uParam0, 14, 0, 0);
	func_194();
}

void func_194()//Position - 0x757C
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_195(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x75A5
{
	if (!func_22(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		func_228(uParam0, iParam3, 1, 0, 0);
		func_171(uParam1, iParam2);
	}
}

void func_196(var uParam0, int iParam1, bool bParam2)//Position - 0x75D1
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_197(int iParam0)//Position - 0x75E5
{
	Global_22616 = iParam0;
}

void func_198(var uParam0, int iParam1)//Position - 0x75F2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_330(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

int func_199(var uParam0)//Position - 0x7657
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			if (func_305(uParam0, 14))
			{
				func_200(uParam0);
			}
			func_191(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_200(var uParam0)//Position - 0x7699
{
	func_110(uParam0, 14, 0);
	func_110(uParam0, 15, 0);
	func_202();
	if (func_201())
	{
		func_197(0);
	}
}

int func_201()//Position - 0x76C3
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

void func_202()//Position - 0x76DA
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_203(var uParam0, int iParam1, bool bParam2)//Position - 0x7703
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_204(var uParam0)//Position - 0x7727
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_205(), 24);
		iVar0++;
	}
	HUD::CLEAR_PRINTS();
	func_49();
}

var func_205()//Position - 0x7767
{
	var uVar0;
	
	return uVar0;
}

void func_206(var uParam0)//Position - 0x7771
{
	uParam0->f_120 = 0;
}

float func_207(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x777E
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1, bParam2);
}

void func_208()//Position - 0x77A8
{
	switch (iLocal_263)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_230.f_4, false) && func_10(Local_230.f_4, Local_230.f_17, 1) < 300f)
			{
				func_223();
				iLocal_263 = 1;
			}
			break;
		
		case 1:
			if (func_221())
			{
				iLocal_263 = 2;
			}
			break;
		
		case 2:
			if (!bLocal_302)
			{
				func_218();
				func_217();
				func_213();
				func_212();
				func_211();
				func_210();
				iLocal_263 = 3;
				bLocal_302 = true;
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_230.f_4, false) && func_10(Local_230.f_4, Local_230.f_17, 1) > 350f)
			{
				func_209();
				iLocal_263 = 0;
			}
			break;
	}
}

void func_209()//Position - 0x7870
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_266);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_267);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_268);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_247.f_19[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_247.f_19[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_247.f_32[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_247.f_32[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_247.f_32[2]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_247.f_32[3]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_257.f_32[1]);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_285, func_134(0));
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_285, func_134(1));
	STREAMING::REMOVE_ANIM_DICT("random@countryside_gang_fight");
	STREAMING::REMOVE_ANIM_DICT(sLocal_319);
}

void func_210()//Position - 0x7908
{
	iLocal_271[0] = OBJECT::CREATE_OBJECT(iLocal_266, 204.8445f, -3333.998f, 4.795367f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_271[0], 204.8445f, -3333.998f, 4.795367f, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_271[0], -0.036243f, -0.00124f, 91.56063f, 2, true);
	iLocal_271[1] = OBJECT::CREATE_OBJECT(iLocal_266, 212.67f, -3328.77f, 4.79f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_271[1], 212.67f, -3328.77f, 4.79f, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_271[1], -0.04f, -0.01f, 86.36f, 2, true);
	iLocal_271[2] = OBJECT::CREATE_OBJECT(iLocal_266, 204.8248f, -3328.631f, 4.7915f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_271[2], 204.8248f, -3328.631f, 4.7915f, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_271[2], -0.0027f, -0.0374f, 0.1414f, 2, true);
	iLocal_273 = OBJECT::CREATE_OBJECT(iLocal_267, 214.2505f, -3314.673f, 4.7883f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_273, 214.2505f, -3314.673f, 4.7883f, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_273, 0f, 0f, -17.399f, 2, true);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_268))
	{
		iLocal_272 = OBJECT::CREATE_OBJECT(iLocal_268, 220.7266f, -3320.001f, 5.2749f, true, true, false);
		ENTITY::SET_ENTITY_COORDS(iLocal_272, 220.7266f, -3320.001f, 5.2749f, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_272, 0f, 0f, 0f, 2, true);
	}
}

void func_211()//Position - 0x7AA7
{
	if ((!PED::IS_PED_INJURED(iLocal_274[0]) && !PED::IS_PED_INJURED(iLocal_274[0])) && !PED::IS_PED_INJURED(Local_247.f_3[3]))
	{
		iLocal_291 = PED::CREATE_SYNCHRONIZED_SCENE(Local_313, Local_314, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_291, true);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[3], iLocal_291, sLocal_319, "hooker_loop_a_biker_d", 1000f, -1000f, 64, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[0], iLocal_291, sLocal_319, "hooker_loop_a_hooker_a", 1000f, -1000f, 64, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[1], iLocal_291, sLocal_319, "hooker_loop_a_hooker_b", 1000f, -1000f, 64, 0, 1000f, 0);
	}
	if ((!PED::IS_PED_INJURED(Local_247.f_3[0]) && !PED::IS_PED_INJURED(Local_247.f_3[1])) && !PED::IS_PED_INJURED(Local_247.f_3[2]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_247.f_3[0], joaat("weapon_pistol"), -1, true, true);
		iLocal_295 = PED::CREATE_SYNCHRONIZED_SCENE(Local_315, Local_316, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_295, true);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[0], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[1], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[2], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1000f, 0);
	}
}

void func_212()//Position - 0x7C47
{
	int iVar0;
	
	iVar0 = 0;
	func_8(&(Local_230.f_244), 4, Local_247.f_3[1], "TaxiDom", 0, 1);
	func_8(&(Local_230.f_244), 5, Local_247.f_3[3], "TaxiGangM", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(Local_247.f_3[1], "TaxiDom");
	AUDIO::SET_AMBIENT_VOICE_NAME(Local_247.f_3[3], "TaxiGangM");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		PED::SET_PED_MONEY(Local_247.f_3[iVar0], MISC::GET_RANDOM_INT_IN_RANGE(20, 50));
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_247.f_3[iVar0], 2, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_247.f_3[iVar0], 13, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_247.f_3[iVar0], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_247.f_3[iVar0], 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_247.f_3[iVar0], 37, true);
		PED::SET_PED_CONFIG_FLAG(Local_247.f_3[iVar0], 42, true);
		PED::SET_PED_SEEING_RANGE(Local_247.f_3[iVar0], 300f);
		PED::SET_PED_HEARING_RANGE(Local_247.f_3[iVar0], 300f);
		PED::SET_PED_ID_RANGE(Local_247.f_3[iVar0], 300f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_247.f_3[iVar0], false);
		PED::SET_PED_ACCURACY(Local_247.f_3[iVar0], 1);
		iVar0++;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_247.f_3[0], iLocal_262);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_247.f_3[1], iLocal_262);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_247.f_3[2], iLocal_262);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_247.f_3[3], iLocal_262);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_274[iVar0], 42, true);
		PED::SET_PED_SEEING_RANGE(iLocal_274[iVar0], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_274[iVar0], 100f);
		PED::SET_PED_ID_RANGE(iLocal_274[iVar0], 100f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_274[iVar0], true);
		iVar0++;
	}
	func_8(&(Local_230.f_244), 7, iLocal_274[1], "TaxiGangGirl2", 0, 1);
	func_8(&(Local_230.f_244), 8, iLocal_274[0], "TaxiGangGirl1", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_274[1], "TaxiGangGirl2");
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_274[0], "TaxiGangGirl1");
}

void func_213()//Position - 0x7E58
{
	Local_247.f_3[0] = PED::CREATE_PED(26, Local_247.f_19[0], func_216(1), func_215(1), true, true);
	Local_247.f_3[1] = PED::CREATE_PED(26, Local_247.f_19[0], func_214(2), 0f, true, true);
	Local_247.f_3[2] = PED::CREATE_PED(26, Local_247.f_19[0], func_216(3), func_215(3), true, true);
	Local_247.f_3[3] = PED::CREATE_PED(26, Local_247.f_19[0], func_216(4), func_215(4), true, true);
	PED::SET_PED_CONFIG_FLAG(Local_247.f_3[1], 20, true);
	iLocal_274[0] = PED::CREATE_PED(26, Local_247.f_19[1], func_216(5), func_215(5), true, true);
	iLocal_274[1] = PED::CREATE_PED(26, Local_247.f_19[1], func_216(6), func_215(6), true, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_274[0], false);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_274[1], false);
	if (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[0], 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[0], 3, 0, 5, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[0], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[0], 10, 0, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[1], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[1], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[1], 10, 0, 1, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[2], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[2], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[2], 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[2], 10, 1, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[3], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[3], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[3], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[3], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[3], 10, 1, 0, 0);
	}
}

Vector3 func_214(int iParam0)//Position - 0x8092
{
	switch (iParam0)
	{
		case 1:
			return 202.24f, -3322.48f, 5.79f;
			break;
		
		case 2:
			return 203.4f, -3323.22f, 5.79f;
			break;
		
		case 3:
			return 205.66f, -3322.41f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

float func_215(int iParam0)//Position - 0x80F5
{
	switch (iParam0)
	{
		case 1:
			return 251.3766f;
			break;
		
		case 2:
			return -129.32f;
			break;
		
		case 3:
			return 39.53f;
			break;
		
		case 4:
			return -139.98f;
			break;
		
		case 5:
			return 147.25f;
			break;
		
		case 6:
			return 68.18f;
			break;
	}
	return 0f;
}

Vector3 func_216(int iParam0)//Position - 0x816B
{
	switch (iParam0)
	{
		case 1:
			return 202.35f, -3321.76f, 4.79f;
			break;
		
		case 2:
			return 204.27f, -3321.77f, 5.79f;
			break;
		
		case 3:
			return 204.93f, -3322.56f, 4.79f;
			break;
		
		case 4:
			return 218.19f, -3323.58f, 5.8f;
			break;
		
		case 5:
			return 219.52f, -3324f, 5.8f;
			break;
		
		case 6:
			return 220.14f, -3325.39f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_217()//Position - 0x821F
{
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_247.f_27[2], 5, false, false);
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_247.f_27[3], 5, false, false);
}

void func_218()//Position - 0x8245
{
	Local_247.f_27[0] = VEHICLE::CREATE_VEHICLE(Local_247.f_32[0], func_220(1), func_219(1), true, true, false);
	Local_247.f_27[1] = VEHICLE::CREATE_VEHICLE(Local_247.f_32[1], func_220(2), func_219(2), true, true, false);
	Local_247.f_27[2] = VEHICLE::CREATE_VEHICLE(Local_247.f_32[3], func_220(3), func_219(3), true, true, false);
	Local_247.f_27[3] = VEHICLE::CREATE_VEHICLE(Local_247.f_32[3], func_220(4), func_219(4), true, true, false);
	iLocal_276 = VEHICLE::CREATE_VEHICLE(Local_247.f_32[2], func_220(5), func_219(5), true, true, false);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_247.f_27[2], "NikoB");
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_247.f_27[3], "RomanB");
}

float func_219(int iParam0)//Position - 0x830D
{
	switch (iParam0)
	{
		case 1:
			return 301.96f;
			break;
		
		case 2:
			return 33.5561f;
			break;
		
		case 3:
			return 87.9127f;
			break;
		
		case 4:
			return 195.38f;
			break;
		
		case 5:
			return 35.3307f;
			break;
	}
	return 0f;
}

Vector3 func_220(int iParam0)//Position - 0x8372
{
	switch (iParam0)
	{
		case 1:
			return 208.8206f, -3319.28f, 4.7925f;
			break;
		
		case 2:
			return 202.0773f, -3320.393f, 4.7657f;
			break;
		
		case 3:
			return 216.1051f, -3318.837f, 4.7918f;
			break;
		
		case 4:
			return 221.6868f, -3324.747f, 5.3063f;
			break;
		
		case 5:
			return 200.1736f, -3320.666f, 4.7361f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_221()//Position - 0x840B
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_266))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading PROP_BOXPILE_02C", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_267))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading PROP_CARDBORDBOX_03A", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_247.f_19[0]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading Baddie driver model", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_247.f_19[1]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading Gangster girl model", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_247.f_32[0]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading modelName_Car1 model", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_247.f_32[1]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading modelName_Car2 model", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_247.f_32[2]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading modelName_Car3 model", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_247.f_32[3]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading modelName_Car4 model", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_257.f_32[1]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading modelName_Car5 model", &iLocal_281, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_285, func_134(0)))
	{
		func_222("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_A...", &iLocal_281, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_285, func_134(1)))
	{
		func_222("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_B...", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("random@countryside_gang_fight"))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading random@countryside_gang_fight ", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_319))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading sSyncSceneDict ", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_268))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading PROP_BARREL_EXP_01A", &iLocal_281, 1000);
	}
	return 1;
}

void func_222(char* sParam0, int iParam1, int iParam2)//Position - 0x85D4
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

void func_223()//Position - 0x85F3
{
	STREAMING::REQUEST_MODEL(iLocal_266);
	STREAMING::REQUEST_MODEL(iLocal_267);
	STREAMING::REQUEST_MODEL(iLocal_268);
	STREAMING::REQUEST_MODEL(Local_247.f_19[0]);
	STREAMING::REQUEST_MODEL(Local_247.f_19[1]);
	STREAMING::REQUEST_MODEL(Local_247.f_32[0]);
	STREAMING::REQUEST_MODEL(Local_247.f_32[1]);
	STREAMING::REQUEST_MODEL(Local_247.f_32[2]);
	STREAMING::REQUEST_MODEL(Local_247.f_32[3]);
	STREAMING::REQUEST_MODEL(Local_257.f_32[1]);
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_285, func_134(0));
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_285, func_134(1));
	STREAMING::REQUEST_ANIM_DICT("random@countryside_gang_fight");
	STREAMING::REQUEST_ANIM_DICT(sLocal_319);
}

void func_224()//Position - 0x868B
{
	func_171(&(Local_230.f_55), 2);
	func_171(&(Local_230.f_55), 4);
	func_171(&(Local_230.f_55), 16);
	func_171(&(Local_230.f_55), 64);
	func_171(&(Local_230.f_55), 256);
	func_171(&(Local_230.f_55), 512);
	func_171(&(Local_230.f_55), 1024);
	func_171(&(Local_230.f_55), 2048);
	func_171(&(Local_230.f_55), 4096);
	func_171(&(Local_230.f_55), 1073741824);
	func_171(&(Local_230.f_100), 8);
	func_171(&(Local_230.f_100), 2048);
	func_171(&(Local_230.f_100), 256);
	func_171(&uLocal_380, 2);
}

void func_225(var uParam0)//Position - 0x8732
{
	func_226(uParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	func_157();
	func_200(uParam0);
}

void func_226(var uParam0, int iParam1)//Position - 0x877E
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (iParam1 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, true, false, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
}

void func_227(int iParam0)//Position - 0x87B8
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	func_226(iParam0, 1000);
}

void func_228(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x87DB
{
	iParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_298(iParam0, 16, 4f, 0);
		if (func_229(iParam0))
		{
			func_49();
		}
	}
	func_259(iParam0, iParam2, bParam3);
}

int func_229(var uParam0)//Position - 0x8810
{
	struct<3> Var0;
	struct<6> Var1;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_113())
	{
		Var1 = { func_231() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_230(&Var0);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_230(char* sParam0)//Position - 0x8876
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_231()//Position - 0x8886
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_232(int iParam0)//Position - 0x88AA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(iParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_81) > 500) || PED::IS_PED_IN_VEHICLE(iParam0->f_3, iParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_233(int iParam0, bool bParam1, float fParam2)//Position - 0x88FD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_190(iParam0, 1);
			if (func_33())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 2106541073) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 2106541073) == 0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
				iParam0->f_48 = 0;
				iLocal_79 = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_258(iParam0);
			if (iParam0->f_48 > 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_11, iParam0->f_6, 20000, 0.25f, false, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0->f_4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iVar3);
				iParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_305(iParam0, 14))
			{
				func_200(iParam0);
				func_191(iParam0, 0);
			}
			if (func_305(iParam0, 9))
			{
				func_110(iParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(iParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(iParam0->f_8, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(iParam0->f_4) / 5f) + 4f);
				if (iParam0->f_141 && func_257(iParam0, iParam0->f_3) > 300f)
				{
					func_330(iParam0, "Left Passenger", 8);
				}
				switch (iParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 1 || ((func_170(PLAYER::PLAYER_PED_ID(), iParam0->f_3, 1) < 20f && func_10(iParam0->f_3, iParam0->f_11, 1) <= 28f) && func_10(iParam0->f_4, iParam0->f_11, 1) <= 28f))
						{
							if (func_254(iParam0, fParam2))
							{
								iParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_253(iParam0, 0, 28f, fVar4, 4f))
						{
							iParam0->f_138 = 1;
							if (bLocal_86)
							{
								iParam0->f_7 = func_252(iParam0->f_4, iParam0->f_3);
								iVar0 = func_251(iParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
								{
									if (iVar1 == iParam0->f_7)
									{
										if (iParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (iParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iVar2);
									}
									else
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								if (iParam0->f_411 == 0)
								{
									if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam0->f_3, iParam0->f_4, 0, false, false))
									{
										if (iParam0->f_7 == 2)
										{
											iParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							TASK::CLEAR_PED_TASKS(iParam0->f_3);
							TASK::TASK_ENTER_VEHICLE(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
							iParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_161(iParam0))
							{
								TASK::CLEAR_PED_TASKS(iParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 7) && func_257(iParam0, iParam0->f_3) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (iParam0->f_411 != 9)
								{
									TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iParam0->f_243);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_86)
						{
							if (func_170(iParam0->f_4, iParam0->f_3, 1) < 3f)
							{
								if (!func_250(iParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
									func_330(iParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_249(iParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
									func_330(iParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_247(iParam0);
						if (func_257(iParam0, iParam0->f_3) < fVar4 || func_33())
						{
							if (PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
							{
								if (func_235(iParam0))
								{
									func_234(iParam0);
									iLocal_81 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(iParam0->f_3, 26, true);
									func_110(iParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(iParam0->f_428, &(iParam0->f_42), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_3, false);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_234(int iParam0)//Position - 0x8E0F
{
	if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(iParam0->f_8, false);
		HUD::REMOVE_BLIP(&(iParam0->f_8));
	}
}

int func_235(int iParam0)//Position - 0x8E33
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	
	func_222("UPDATE_PASSENGER_ENTER_CUTSCENE", &(iParam0->f_78), 1000);
	iVar6 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
	{
		func_246();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (func_244(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (func_166(iParam0, 0, 1084227584) && func_174(1, 1, 1))
			{
				if (func_250(iParam0, 1))
				{
					iLocal_80 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_78 = 1;
				}
				else
				{
					func_330(iParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				iParam0->f_7 = func_252(iParam0->f_4, iParam0->f_3);
				iVar3 = func_251(iParam0, &iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
				{
					if (iVar4 == iParam0->f_7)
					{
						if (iParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, iVar5);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 0);
					}
				}
				if (iParam0->f_411 == 0)
				{
					if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam0->f_3, iParam0->f_4, 0, false, false))
					{
						iParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 4096);
						}
					}
				}
				iLocal_78 = 2;
			}
			break;
		
		case 2:
			if (iParam0->f_7 == 0)
			{
				Var2 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (iParam0->f_7 == 2)
			{
				Var2 = { 1.5f, -1f, -0.6422f };
				Var0 = { 1.4309f, 3.958f, 0.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				Var2 = { -1.5f, -1f, -0.6422f };
				Var0 = { -1.4823f, 4.2333f, 0.5939f };
				Var1 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar6 = func_243(&(iParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, Var0), 1);
			if (iVar6 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (iParam0->f_7 == 2)
				{
					Var1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != -1)
			{
				func_242(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_4, true), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(iParam0->f_4, true), 25f, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_118();
				func_259(iParam0, 0, 0);
				Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, Var2) };
				ENTITY::SET_ENTITY_COORDS(iParam0->f_3, Var7, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iParam0->f_3, func_240(iParam0));
				func_239(iParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				CAM::SET_CAM_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, Var0));
				CAM::POINT_CAM_AT_ENTITY(*iParam0, iParam0->f_4, Var1, true);
				CAM::SET_CAM_ACTIVE(*iParam0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_3, false, false);
				TASK::TASK_ENTER_VEHICLE(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 3, 0);
				iLocal_78 = 5;
			}
			break;
		
		case 5:
			func_222("TAXI_PED_ENTER_CUT_WAIT", &(iParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_78 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_3, false))
				{
					PED::SET_PED_INTO_VEHICLE(iParam0->f_3, iParam0->f_4, iParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0->f_4, func_238(iParam0->f_7), true);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(*iParam0, false);
				CAM::DESTROY_CAM(iParam0->f_1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_118();
				func_259(iParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				func_236(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(*iParam0, false);
			CAM::DESTROY_CAM(iParam0->f_1, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			func_236(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_3, true))
				{
					return 1;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_236(bool bParam0, bool bParam1, int iParam2)//Position - 0x9340
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(true);
	func_23(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_237(23, 0);
}

void func_237(int iParam0, bool bParam1)//Position - 0x937E
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_32207, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_32207, iParam0);
	}
}

int func_238(int iParam0)//Position - 0x93A0
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_239(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x93D8
{
	if (!CAM::DOES_CAM_EXIST(*iParam0))
	{
		*iParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Param1, Param2, fParam3, false, 2);
	}
}

float func_240(var uParam0)//Position - 0x9403
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_41() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_241(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), Var1);
	return fVar0;
}

float func_241(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3)//Position - 0x946C
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_242(int iParam0, bool bParam1, int iParam2)//Position - 0x9486
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(bParam1);
	func_42(0);
	func_23(1, 1, iParam2, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_237(23, 1);
}

int func_243(var uParam0, struct<3> Param1, struct<3> Param2, bool bParam3)//Position - 0x94DF
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0)
	{
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Param2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_244(int iParam0)//Position - 0x9559
{
	if (func_245() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_42(0);
		func_157();
		return 1;
	}
	return 0;
}

int func_245()//Position - 0x959C
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

void func_246()//Position - 0x95CE
{
	if (func_35())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (func_34())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (func_44(1))
	{
		func_42(0);
	}
}

void func_247(var uParam0)//Position - 0x9601
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (func_163(uParam0->f_3, 1) > 30f || func_248(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, -1794415470) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) == 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
					TASK::TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, false, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
					func_330(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_248(var uParam0)//Position - 0x96D2
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && func_111(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_249(int iParam0)//Position - 0x970C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_250(var uParam0, bool bParam1)//Position - 0x97C8
{
	int iVar0[3];
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, false);
		iVar0[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, false);
		iVar0[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar1], false))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_251(var uParam0, var uParam1)//Position - 0x9882
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_252(int iParam0, int iParam1)//Position - 0x98F7
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	
	iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true)) };
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("vacca"))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sentinel2"))
	{
		iVar2 = 1;
	}
	if (iVar2 == 1)
	{
		iVar1 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 2, false, false))
		{
			iVar1 = 2;
		}
		else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 1, false, false))
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = -2;
		}
	}
	else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 1, false, false))
	{
		iVar1 = 1;
	}
	else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 2, false, false))
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = -2;
	}
	return iVar1;
}

int func_253(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x99AF
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && func_163(uParam0->f_3, 1) < fParam2)
		{
			if (!func_305(uParam0, 5))
			{
				func_298(uParam0, 5, 0, 0);
			}
		}
		else if (func_305(uParam0, 5))
		{
			func_110(uParam0, 5, 0);
		}
		if (((func_111(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || func_163(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_254(var uParam0, float fParam1)//Position - 0x9A4D
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	if (iVar8 == -1)
	{
		iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != -1)
	{
		Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar8) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, Var2) };
		Var2.f_1 = (Var2.f_1 + 1f);
	}
	else
	{
		Var2 = { 0f, 1f, 1f };
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	GRAPHICS::DRAW_DEBUG_LINE(Var0, Var1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
			iLocal_79 = 1;
			break;
		
		case 1:
			if ((func_170(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && MISC::ABSF((Var0.f_2 - Var1.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var1, 511, 0, 7);
				}
				else
				{
					iVar7 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_409, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_79 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0)
			{
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uParam0->f_243, true);
				TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			if (uParam0->f_411 != 9)
			{
				if (!func_22(uParam0->f_44, 128))
				{
					func_228(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_255(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0f, false, false, false);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			iLocal_79 = 3;
			break;
		
		case 3:
			iLocal_79 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_255(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x9D2B
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_256(iParam3), false);
}

int func_256(int iParam0)//Position - 0x9D44
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

float func_257(var uParam0, int iParam1)//Position - 0x9F39
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (func_161(uParam0))
		{
			return func_170(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_258(var uParam0)//Position - 0x9F64
{
	func_198(uParam0, uParam0->f_3);
	if (func_161(uParam0))
	{
		if (func_305(uParam0, 14))
		{
			func_200(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_10));
			}
		}
	}
	if (!func_305(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		}
		func_298(uParam0, 9, 0, 0);
		func_156("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_259(int iParam0, int iParam1, bool bParam2)//Position - 0x9FE2
{
	iParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_49();
		func_298(iParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

int func_260(var uParam0, int iParam1)//Position - 0xA007
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	func_264(12);
	if (func_22(uParam0->f_44, 8))
	{
		if (!func_22(uParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !func_22(uParam0->f_44, 256))
			{
				func_171(&(uParam0->f_44), 256);
			}
			if (func_22(uParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_228(uParam0, 135, 1, 0, 1);
				func_171(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_263(uParam0, iParam1))
	{
		if (func_163(uParam0->f_3, 1) < 35f)
		{
			if (!func_22(uParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				func_228(uParam0, 133, 1, 0, 1);
				func_171(&(uParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || func_163(uParam0->f_3, 1) > 400f)
		{
			func_330(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			func_261(uParam0);
			func_51(2, 0);
			bLocal_86 = true;
			func_112(&iLocal_82);
			return 1;
		}
		else
		{
			func_330(uParam0, "No Taxi", 21);
			func_160("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_261(var uParam0)//Position - 0xA180
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (func_262())
		{
		}
	}
}

int func_262()//Position - 0xA19C
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_263(var uParam0, int iParam1)//Position - 0xA1BA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				bVar2 = func_249(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_22(uParam0->f_44, 64))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_160("TX_VIP_DMGD", -1);
							if (func_159("TX_VIP_DMGD"))
							{
								func_171(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_22(uParam0->f_44, 32))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_160("TX_VIP_CAR", -1);
							if (func_159("TX_VIP_CAR"))
							{
								func_171(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_22(uParam0->f_44, 16))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_160("TX_VIP_SMALL", -1);
							if (func_159("TX_VIP_SMALL"))
							{
								func_171(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_122(&(uParam0->f_44), 16);
			func_122(&(uParam0->f_44), 64);
			func_122(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_264(int iParam0)//Position - 0xA7CF
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_266())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_265())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

bool func_265()//Position - 0xA828
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

bool func_266()//Position - 0xA83E
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

void func_267(var uParam0)//Position - 0xA854
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_123(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_268()//Position - 0xA879
{
	Local_165.f_0 = 0;
	func_285(44076/*func_287*/, 44051/*func_286*/, 1);
	func_285(43812/*func_283*/, 43789/*func_282*/, 1);
	func_285(43727/*func_281*/, 43702/*func_280*/, 1);
	func_285(43630/*func_279*/, 43606/*func_278*/, 1);
	func_285(43496/*func_277*/, 43475/*func_276*/, 1);
	func_285(43422/*func_274*/, 43397/*func_273*/, 1);
	func_285(43255/*func_270*/, 43232/*func_269*/, 1);
}

int func_269(int iParam0, var uParam1)//Position - 0xA8E0
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_270(var uParam0)//Position - 0xA8F7
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_272(uParam0->f_4))
		{
			func_271(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_271(var uParam0, int iParam1)//Position - 0xA921
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_272(int iParam0)//Position - 0xA934
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < -100f)
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_273(int iParam0, var uParam1)//Position - 0xA985
{
	uParam1 = uParam1;
	func_330(iParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_274(var uParam0)//Position - 0xA99E
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_275(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_275(var uParam0, int iParam1)//Position - 0xA9C4
{
	return (uParam0 && iParam1) != 0;
}

int func_276(var uParam0, var uParam1)//Position - 0xA9D3
{
	uParam1 = uParam1;
	func_271(uParam0, 11);
	return 1;
}

int func_277(int iParam0)//Position - 0xA9E8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4))
		{
			if (!func_305(iParam0, 25))
			{
				func_298(iParam0, 25, 0, 0);
			}
			else if (func_111(iParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_305(iParam0, 25))
		{
			func_110(iParam0, 25, 0);
		}
	}
	return 0;
}

int func_278(int iParam0, var uParam1)//Position - 0xAA56
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_279(var uParam0)//Position - 0xAA6E
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_280(int iParam0, var uParam1)//Position - 0xAAB6
{
	uParam1 = uParam1;
	func_330(iParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_281(var uParam0)//Position - 0xAACF
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_275(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_282(int iParam0, var uParam1)//Position - 0xAB0D
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_283(var uParam0)//Position - 0xAB24
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_284(uParam0->f_4))
		{
			func_271(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_284(int iParam0)//Position - 0xAB4E
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) == 0f)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
		}
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_285(int iParam0, int iParam1, bool bParam2)//Position - 0xABA9
{
	if (Local_165.f_0 >= 16)
	{
		Local_165.f_0 = 16;
		return;
	}
	Local_165.f_1[Local_165.f_0 /*4*/] = 0;
	func_165(&(Local_165.f_1[Local_165.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_165(&(Local_165.f_1[Local_165.f_0 /*4*/]), 2);
	}
	Local_165.f_1[Local_165.f_0 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165.f_0 /*4*/].f_3 = iParam1;
	Local_165.f_0++;
}

int func_286(int iParam0, var uParam1)//Position - 0xAC13
{
	uParam1 = uParam1;
	func_330(iParam0, "Passenger injured.", 15);
	return 1;
}

int func_287(var uParam0)//Position - 0xAC2C
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((PED::IS_PED_INJURED(uParam0->f_3) || ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_288(var uParam0, var uParam1)//Position - 0xAC6C
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			MISC::SET_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_289(var uParam0, char* sParam1, int iParam2)//Position - 0xACE3
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_290()//Position - 0xACFB
{
	Local_162[5 /*10*/] = 5;
	Local_162[5 /*10*/].f_1 = 0;
	Local_162[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[5 /*10*/].f_9 = 78;
	Local_162[0 /*10*/] = 5;
	Local_162[0 /*10*/].f_1 = 0;
	Local_162[0 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0 /*10*/].f_9 = 76;
	Local_162[2 /*10*/] = 5;
	Local_162[2 /*10*/].f_1 = 0;
	Local_162[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[2 /*10*/].f_9 = 21;
	Local_162[1 /*10*/] = 10;
	Local_162[1 /*10*/].f_1 = 0;
	Local_162[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[1 /*10*/].f_9 = 71;
	Local_162[4 /*10*/] = 10;
	Local_162[4 /*10*/].f_1 = 0;
	Local_162[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[4 /*10*/].f_9 = 79;
	Local_162[6 /*10*/] = 10;
	Local_162[6 /*10*/].f_1 = 0;
	Local_162[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[6 /*10*/].f_9 = 80;
	Local_162[9 /*10*/] = 15;
	Local_162[9 /*10*/].f_1 = 0;
	Local_162[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[9 /*10*/].f_9 = 82;
	Local_162[8 /*10*/] = 15;
	Local_162[8 /*10*/].f_1 = 0;
	Local_162[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[8 /*10*/].f_9 = 72;
	Local_162[7 /*10*/] = 15;
	Local_162[7 /*10*/].f_1 = 0;
	Local_162[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[7 /*10*/].f_9 = 74;
	Local_162[11 /*10*/] = 5;
	Local_162[11 /*10*/].f_1 = 0;
	Local_162[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[11 /*10*/].f_9 = 70;
	Local_162[12 /*10*/] = 5;
	Local_162[12 /*10*/].f_1 = 0;
	Local_162[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[12 /*10*/].f_9 = 69;
	Local_162[13 /*10*/] = 10;
	Local_162[13 /*10*/].f_1 = 0;
	Local_162[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[13 /*10*/].f_9 = 67;
	Local_162[14 /*10*/] = 10;
	Local_162[14 /*10*/].f_1 = 0;
	Local_162[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[14 /*10*/].f_9 = 75;
}

int func_291()//Position - 0xAED3
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_265))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_281, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_387))
	{
		return 0;
	}
	if (!func_292(&iLocal_281, 1))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_281, 1000);
		return 0;
	}
	return 1;
}

int func_292(int iParam0, bool bParam1)//Position - 0xAF26
{
	if (!STREAMING::HAS_MODEL_LOADED(func_21()))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_222("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_293(int iParam0, int iParam1)//Position - 0xAFDE
{
	switch (iParam1)
	{
		case 1:
			iParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			iParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			iParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			iParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			iParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			iParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			iParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			iParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			iParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			iParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			iParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			iParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			iParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			iParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			iParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			iParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			iParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			iParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			iParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			iParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			iParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			iParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			iParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			iParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			iParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			iParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			iParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			iParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			iParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			iParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			iParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	iParam0->f_410 = iParam1;
}

int func_294(var uParam0)//Position - 0xB1FD
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = func_295(uParam0->f_3, 0, 0);
		HUD::SET_GPS_FLAGS(1, 0f);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS");
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	}
	return 1;
}

int func_295(int iParam0, bool bParam1, bool bParam2)//Position - 0xB24C
{
	return func_131(iParam0, !bParam1, bParam2);
}

int func_296(var uParam0, struct<3> Param1, struct<3> Param2, char* sParam3, int iParam4, float fParam5, float fParam6)//Position - 0xB25F
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_297(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param2 };
		func_39(uParam0->f_14, 0);
		MISC::CLEAR_AREA_OF_PEDS(uParam0->f_14, 2f, 0);
		func_37(uParam0->f_14, 0, fParam6);
		if (iParam4 == 0)
		{
			uParam0->f_3 = PED::CREATE_RANDOM_PED(uParam0->f_11);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[0]))
		{
			uParam0->f_3 = Global_112096.f_225[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, true);
		}
		else
		{
			uParam0->f_3 = PED::CREATE_PED(26, iParam4, uParam0->f_11, fParam5, true, true);
		}
		func_8(&(uParam0->f_244), 3, uParam0->f_3, sParam3, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_3, sParam3);
		PED::SET_PED_RESET_FLAG(uParam0->f_3, 112, true);
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_3, 250);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 32, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 104, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 177, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 116, false);
			PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_413));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_413, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uParam0->f_413, joaat("COP"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_297(var uParam0, struct<3> Param1)//Position - 0xB3B4
{
	uParam0->f_51[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param1, 20f, 5f, false);
}

void func_298(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xB3D2
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_104(&(iParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_103(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_104(&(iParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_103(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_299()//Position - 0xB444
{
	STREAMING::REQUEST_MODEL(iLocal_265);
	func_301(1);
	iLocal_387 = func_300();
}

int func_300()//Position - 0xB45F
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
}

void func_301(bool bParam0)//Position - 0xB46F
{
	STREAMING::REQUEST_MODEL(func_21());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
	if (!func_22(Global_113386.f_19097, 128))
	{
		func_171(&(Global_113386.f_19097), 128);
	}
}

void func_302(int iParam0)//Position - 0xB4CA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iVar0]);
			PED::SET_PED_FLEE_ATTRIBUTES((*iParam0)[iVar0], 13, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_270);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_270);
			TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1, 1000));
			TASK::TASK_SMART_FLEE_PED(0, Local_230.f_3, 4000f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_270);
			TASK::TASK_PERFORM_SEQUENCE((*iParam0)[iVar0], iLocal_270);
			PED::SET_PED_KEEP_TASK((*iParam0)[iVar0], true);
		}
		iVar0++;
	}
}

void func_303(var uParam0)//Position - 0xB557
{
	int iVar0;
	int iVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, joaat("player"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, Local_230.f_413);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_262);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			TASK::CLEAR_PED_TASKS((*uParam0)[iVar0]);
			WEAPON::GET_CURRENT_PED_WEAPON((*uParam0)[iVar0], &iVar1, true);
			if (iVar1 == joaat("weapon_unarmed"))
			{
				WEAPON::GIVE_WEAPON_TO_PED((*uParam0)[iVar0], joaat("weapon_pistol"), -1, false, true);
			}
			PED::SET_PED_ACCURACY((*uParam0)[iVar0], 30);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((*uParam0)[iVar0], 1000f, 0);
			PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
		}
		iVar0++;
	}
}

void func_304(int iParam0, int iParam1)//Position - 0xB611
{
	func_112(&(iParam0->f_146[iParam1 /*3*/]));
}

bool func_305(int iParam0, int iParam1)//Position - 0xB625
{
	return func_16(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_306(var uParam0, int iParam1, bool bParam2)//Position - 0xB639
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_111(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_228(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_228(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_298(uParam0, 10, 0f, 1);
				}
			}
			else if (func_111(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_228(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_228(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_298(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_111(uParam0, 10) > 30f)
		{
			if (!func_113())
			{
				if (uParam0->f_112)
				{
					func_228(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_228(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_298(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_22(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_162[5 /*10*/].f_6)))
		{
			func_112(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_329(uParam0))
			{
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0, 1);
				func_326(5, uParam0);
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_162[0 /*10*/].f_6)))
		{
			func_112(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_324(uParam0))
			{
				func_328(uParam0, 1);
				func_326(0, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_162[1 /*10*/].f_6)))
		{
			func_112(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_323(uParam0))
			{
				func_328(uParam0, 1);
				func_326(1, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_162[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				func_112(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_101(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_322(uParam0))
			{
				func_328(uParam0, 1);
				func_326(8, uParam0);
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_162[6 /*10*/].f_6)))
		{
			func_112(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_321(uParam0))
			{
				func_328(uParam0, 1);
				func_326(6, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_162[4 /*10*/].f_6)))
		{
			func_112(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_320(uParam0))
			{
				func_328(uParam0, 1);
				func_326(4, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_162[7 /*10*/].f_6)))
		{
			func_112(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_319(uParam0))
			{
				func_326(7, uParam0);
				func_328(uParam0, 1);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_162[9 /*10*/].f_6)))
		{
			func_112(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (func_101(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_318(uParam0))
			{
				func_328(uParam0, 1);
				func_326(9, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_162[13 /*10*/].f_6)))
		{
			func_112(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_312(uParam0))
			{
				func_328(uParam0, 1);
				func_326(13, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_162[14 /*10*/].f_6)))
		{
			func_112(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_311(uParam0))
			{
				func_328(uParam0, 1);
				func_326(14, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_162[11 /*10*/].f_6)))
		{
			func_112(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_310(uParam0))
			{
				func_328(uParam0, 1);
				func_326(11, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_162[12 /*10*/].f_6)))
		{
			func_112(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_309(uParam0))
			{
				func_328(uParam0, 1);
				func_326(12, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_162[2 /*10*/].f_6)))
		{
			func_308(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_101(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_307(uParam0))
			{
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0, 1);
				func_326(2, uParam0);
				func_325(uParam0);
			}
		}
	}
}

int func_307(var uParam0)//Position - 0xBE33
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_112(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_101(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_100(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_100(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_308(int* iParam0, float fParam1)//Position - 0xBF16
{
	if (!func_16(iParam0))
	{
		func_104(iParam0, fParam1);
	}
}

int func_309(var uParam0)//Position - 0xBF30
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (Var0.f_1 < -10f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[12 /*10*/].f_3)))
			{
				func_112(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_100(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_310(var uParam0)//Position - 0xBFBF
{
	struct<3> Var0;
	
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[1 /*10*/].f_3))) && !func_16(&(Local_162[5 /*10*/].f_3))) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3))) && !func_16(&(Local_162[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 2.5f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[11 /*10*/].f_3)))
			{
				func_112(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = Var0.f_0;
			}
			else if (func_101(&(Local_162[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_164) - MISC::ABSF(Var0.f_0)) < 0f)
			{
				func_100(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_101(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				func_100(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_311(var uParam0)//Position - 0xC0F0
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[8 /*10*/].f_3))) && !func_16(&(Local_162[5 /*10*/].f_3))) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && func_170(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1, false)))
				{
					func_112(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_101(&(Local_162[14 /*10*/].f_3)) < 1.5f && func_170(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_100(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_101(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			func_100(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_100(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_312(var uParam0)//Position - 0xC275
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3))) && !func_16(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_313(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_162[13 /*10*/].f_3)))
			{
				func_112(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_100(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_313(int iParam0)//Position - 0xC32C
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 1, &Var0, 1, 1077936128, 0);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2, &Var1, 1, 1077936128, 0);
	PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, -1, &Var2);
	fVar9 = SYSTEM::VMAG(Var2 - Var0);
	Var3 = { func_317((Var1.f_0 - Var0.f_0), (Var1.f_1 - Var0.f_1), 0f) };
	Var4 = { func_316(Var3, 0) * Vector(fVar9, fVar9, fVar9) };
	Var3 = { Var3 * Vector(2f, 2f, 2f) };
	Var5 = { Var0 - Var3 + Var4 };
	Var6 = { Var0 - Var3 - Var4 };
	Var7 = { Var1 + Var3 + Var4 };
	Var8 = { Var1 + Var3 - Var4 };
	Var8 = { Var8 };
	return func_314(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var5, Var6, Var7);
}

int func_314(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0xC415
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	Param2.f_2 = 0f;
	Param3.f_2 = 0f;
	Var0 = { func_317(Param2 - Param1) };
	Var1 = { func_317(Param3 - Param1) };
	fVar2 = func_315(Param0, Var0);
	fVar3 = func_315(Param1, Var0);
	fVar4 = func_315(Param2, Var0);
	fVar5 = func_315(Param0, Var1);
	fVar6 = func_315(Param1, Var1);
	fVar7 = func_315(Param3, Var1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

float func_315(struct<3> Param0, struct<3> Param1)//Position - 0xC4FE
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_316(struct<3> Param0, int iParam1)//Position - 0xC51F
{
	struct<3> Var0;
	
	switch (iParam1)
	{
		case 0:
			Var0.f_0 = -Param0.f_1;
			Var0.f_1 = Param0.f_0;
			break;
		
		case 1:
			Var0.f_0 = -Param0.f_0;
			Var0.f_1 = -Param0.f_1;
			break;
		
		case 2:
			Var0.f_0 = Param0.f_1;
			Var0.f_1 = -Param0.f_0;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_317(struct<3> Param0)//Position - 0xC57D
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

int func_318(var uParam0)//Position - 0xC5BC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_319(var uParam0)//Position - 0xC5F1
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 1;
					}
				}
			}
			else if (iLocal_163)
			{
				if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= 35f && ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_320(var uParam0)//Position - 0xC687
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_162[4 /*10*/].f_3)))
			{
				func_112(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_100(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_321(var uParam0)//Position - 0xC6F9
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_162[6 /*10*/].f_3)))
			{
				func_112(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				func_100(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_322(var uParam0)//Position - 0xC76F
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, 72, 1, 0, 1);
				}
				func_100(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_323(var uParam0)//Position - 0xC7F0
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 3f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[1 /*10*/].f_3)))
			{
				func_112(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				func_100(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_324(var uParam0)//Position - 0xC87C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!func_16(&(Local_162[0 /*10*/].f_3)))
			{
				func_112(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				func_100(&(Local_162[0 /*10*/].f_3));
				func_103(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_325(var uParam0)//Position - 0xC906
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_103(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_298(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_326(int iParam0, var uParam1)//Position - 0xC94E
{
	Local_162[iParam0 /*10*/].f_1++;
	func_327(uParam1, iParam0);
	func_100(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_327(var uParam0, int iParam1)//Position - 0xC981
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_328(var uParam0, int iParam1)//Position - 0xC998
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_329(var uParam0)//Position - 0xC9AB
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_162[5 /*10*/].f_3)))
			{
				func_112(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				func_100(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_330(int iParam0, char* sParam1, int iParam2)//Position - 0xCA22
{
	struct<3> Var0;
	
	func_157();
	func_435(2);
	Var0 = { func_158() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && func_113()) && !MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		StringCopy(&Var0, iParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
		{
			if (!func_177(iParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		iParam0->f_109 = 1;
		iParam0->f_121 = sParam1;
		iParam0->f_415 = iParam2;
		func_298(iParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				func_336(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_255(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (iParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			func_336(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_415 == 15)
		{
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_336(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_336(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_336(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_336(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_177(iParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_4))
				{
					func_333(iParam0, 4096, 0);
				}
				else
				{
					func_333(iParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_336(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_336(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				func_336(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_255(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_336(iParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_336(iParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_336(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_255(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_145, 4);
			}
			func_333(iParam0, 0, 0);
			func_336(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_336(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_255(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			func_336(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_336(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_255(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_332(&Var0);
			func_331(&(iParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (iParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			func_336(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (iParam0->f_410 > 5)
				{
					func_336(iParam0, &Var0);
				}
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_255(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_51(3, 0);
		}
		func_298(iParam0, 3, 0f, 1);
	}
}

int func_331(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xCFD1
{
	func_153(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_140(sParam2, iParam3, 0);
}

void func_332(char* sParam0)//Position - 0xD01F
{
	switch (func_3(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_333(var uParam0, int iParam1, bool bParam2)//Position - 0xD072
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if ((func_207(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_335(uParam0->f_29)) && !bParam2)
		{
			func_334(uParam0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 131072, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

void func_334(var uParam0)//Position - 0xD166
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_40(func_41(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 84.9058f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 68.3138f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(uParam0->f_3, 40000f, 0);
			}
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_29, 1f, -1, 0.25f, false, 40000f);
			if (uParam0->f_411 == 2)
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, false);
			}
			else if (uParam0->f_411 == 0)
			{
				TASK::TASK_CLIMB_LADDER(0, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, false);
			}
			else if (uParam0->f_411 == 4)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 20000);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(uParam0->f_29, 15f, true))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

int func_335(struct<3> Param0)//Position - 0xD34C
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_336(var uParam0, char* sParam1)//Position - 0xD376
{
	if (func_337(uParam0))
	{
		func_331(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_337(var uParam0)//Position - 0xD39E
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_170(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_338(var uParam0)//Position - 0xD3DC
{
	return uParam0->f_118;
}

void func_339()//Position - 0xD3E8
{
	func_371(&Local_230);
	if (func_370(&Local_230, &Local_336))
	{
		switch (Local_336.f_27)
		{
			case 0:
				if (Local_230.f_410 == 9)
				{
					if (!func_369(&Local_230))
					{
						if (func_368("TX_OBJ_GYB_DO") || HUD::DOES_BLIP_EXIST(Local_230.f_9))
						{
							Local_336.f_27++;
						}
						else if (func_367(&Local_230) != 10)
						{
							func_228(&Local_230, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_367(&Local_230) > 10 && func_367(&Local_230) != 15) && !func_369(&Local_230))
				{
					func_228(&Local_230, 15, 1, 0, 0);
					if (bLocal_335)
					{
					}
					func_304(&Local_230, 7);
				}
				break;
			
			case 2:
				if (((func_367(&Local_230) != 16 && !func_369(&Local_230)) && func_111(&Local_230, 18) > 2f) && !func_113())
				{
					func_228(&Local_230, 16, 1, 0, 0);
					if (bLocal_335)
					{
					}
				}
				break;
			
			case 3:
				if (func_111(&Local_230, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 7f))
				{
					if (!func_181(&Local_230))
					{
						func_366(&Local_230, 0);
						Local_336.f_27++;
						if (bLocal_335)
						{
						}
					}
				}
				break;
			}
	}
	func_340(&Local_230, &uLocal_339, &Local_336, bLocal_335);
}

int func_340(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xD55B
{
	func_348(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_305(uParam0, 2))
	{
		if (func_347(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_346(uParam0))
				{
					uParam2->f_7 = { func_345(uParam1) };
					func_331(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_113())
				{
					uParam2->f_13 = { func_231() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_165(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_343(uParam1);
					func_298(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_184(uParam0))
				{
					if (func_113())
					{
						func_298(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_342() };
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_113())
				{
					uParam2->f_19 = { func_158() };
				}
				else
				{
					func_165(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_343(uParam1);
					func_298(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_305(uParam0, 14) && !func_113()) && !func_184(uParam0)) && func_111(uParam0, 18) > 1f)
				{
					func_298(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_113())
				{
					if (func_111(uParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_341(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_113())
				{
					func_165(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_343(uParam1);
					func_298(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_341(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD7FB
{
	func_153(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 1;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_140(sParam2, iParam4, 0);
}

struct<6> func_342()//Position - 0xD84F
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_22615);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20473[iVar2 /*6*/])))
			{
				return Global_20473[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20473[iVar3 /*6*/])))
					{
						return Global_20473[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_20473[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_343(var uParam0)//Position - 0xD8FB
{
	int iVar0;
	
	iVar0 = func_344(uParam0);
	if (iVar0 > -1)
	{
		func_122(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_122(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_171(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_205(), 24);
	}
}

int func_344(var uParam0)//Position - 0xD945
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_345(var uParam0)//Position - 0xD975
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_171(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_346(var uParam0)//Position - 0xD9BC
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_186("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_186("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_186("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_186("TX_OBJ_GYB_DO", 0, 0) || func_186("TAXI_OBJ_GYB", 0, 0)) || func_186("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_186("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_186("TX_OBJ_CYI_DO", 0, 0) || func_186("TAXI_OBJ_CYI_01", 0, 0)) || func_186("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_186("TX_OBJ_GYN_DO", 0, 0) || func_186("TAXI_OBJ_GYN", 0, 0)) || func_186("TAXI_OBJ_GYN_TG", 0, 0)) || func_186("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_186("TAXI_OBJ_CC1", 0, 0) || func_186("TAXI_OBJ_CC2", 0, 0)) || func_186("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_186("TAXI_OBJ_FTC1", 0, 0) || func_186("TAXI_OBJ_FTC2", 0, 0)) || func_186("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_186("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_186("TAXI_OBJ_GETRUN", 0, 0) || func_186("TAXI_OBJ_DRIVE", 0, 0)) || func_186("TAXI_OBJ_RETURN", 0, 0)) || func_186("TAXI_OBJ_POL", 0, 0)) || func_186("TAXI_OBJ_RUNOUT", 0, 0)) || func_186("TAXI_OBJ_POL", 0, 0));
}

int func_347(var uParam0)//Position - 0xDBDC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_348(var uParam0, var uParam1)//Position - 0xDC0B
{
	struct<3> Var0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_346(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_305(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_367(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar1 = { Var0 };
				func_365(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_364(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_113())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_363(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_360(uParam0, Var0, func_362(uParam0, 2));
				}
				if (func_22(uParam0->f_98, 4))
				{
					func_298(uParam0, 16, 0, 0);
					func_259(uParam0, 0, 0);
				}
				func_195(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_111(uParam0, 16) > 1f)
				{
					func_197(1);
					if (uParam0->f_411 == 9)
					{
						func_156("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_156("TAXI_VIP_RETURN", 7500, 1);
					}
					func_298(uParam0, 16, 0, 0);
					func_259(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_255(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_111(uParam0, 16) > func_132(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_113()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_367(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_363(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar1 = { Var0 };
				func_365(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_364(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_331(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_228(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_298(uParam0, 16, 0, 0);
				func_228(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar1 = { Var0 };
				if (!func_22(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_365(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_363(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_298(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_156("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_156("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_359(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_228(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				func_230(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_255(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_359(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_228(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_358(uParam0, 33554432, Var0, "", 1, 8);
				func_298(uParam0, 16, 0, 0);
				func_228(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_113())
				{
					func_357(uParam0, 0);
					func_171(&(uParam0->f_44), 4);
					func_298(uParam0, 16, 0, 0);
					func_228(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				func_230(&Var0);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_111(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_230(&Var0);
					}
					func_355(Var0, uParam1);
					func_171(&(uParam0->f_81), 67108864);
					func_298(uParam0, 16, 0, 0);
					func_298(uParam0, 11, 0, 0);
					func_259(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_111(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_230(&Var0);
						}
					}
					func_355(Var0, uParam1);
					func_298(uParam0, 11, 0, 0);
					func_298(uParam0, 16, 0, 0);
					func_259(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					func_230(&Var0);
				}
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				func_230(&Var0);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				func_230(&Var0);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_230(&Var0);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_259(uParam0, 0, 0);
				func_171(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_354(&(uParam0->f_90), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_354(&(uParam0->f_90), 3, &Var0, &iVar5, 1, 0);
				}
				func_355(Var0, uParam1);
				func_364(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 6, 0f, 1);
				func_259(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_354(&(uParam0->f_89), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_354(&(uParam0->f_89), 3, &Var0, &iVar5, 1, 0);
				}
				func_355(Var0, uParam1);
				func_364(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 6, 0f, 1);
				func_259(uParam0, 0, 0);
				break;
			
			case 12:
				func_156("TAXI_OBJ_GYB", 3500, 1);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_156("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_156("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_156("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_22(uParam0->f_98, 268435456))
				{
					func_156("TAXI_OBJ_CYI_01", 7500, 1);
					func_171(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_230(&Var0);
				func_355(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_230(&Var0);
				func_355(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_230(&Var0);
				func_355(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 33:
				func_156("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_22(uParam0->f_82, 8192))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_230(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_355(Var0, uParam1);
						}
						else
						{
							func_363(uParam0, &Var0, 0, 0, 8);
						}
						func_171(&(uParam0->f_82), 8192);
						func_298(uParam0, 16, 0, 0);
						func_298(uParam0, 11, 0, 0);
						func_259(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_22(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_230(&Var0);
					func_363(uParam0, &Var0, 0, 0, 8);
					func_171(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_22(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_230(&Var0);
					func_363(uParam0, &Var0, 0, 0, 8);
					func_171(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_259(uParam0, 0, 0);
				break;
			
			case 139:
				func_156("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_228(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!func_22(uParam0->f_82, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_171(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!func_22(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_171(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_156("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_259(uParam0, 0, 0);
				func_228(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_113())
				{
					func_156("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_259(uParam0, 0, 0);
					func_228(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_156("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_259(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_22(uParam0->f_81, 1))
				{
					func_353(uParam0, 1, Var0, "_sick1", 8);
					func_122(&(uParam0->f_81), 2);
				}
				else if (!func_22(uParam0->f_81, 2))
				{
					func_353(uParam0, 2, Var0, "_sick2", 8);
					func_122(&(uParam0->f_81), 1);
				}
				func_364(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_22(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_22(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_171(&(uParam0->f_81), 2097152);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_298(uParam0, 16, 0, 0);
				func_364(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_259(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_364(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_364(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_364(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_22(uParam0->f_81, 4))
				{
					func_353(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_22(uParam0->f_81, 8))
				{
					func_353(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_353(uParam0, 8, Var0, "_turns3", 8);
					func_122(&(uParam0->f_81), 4);
					func_122(&(uParam0->f_81), 8);
				}
				func_364(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_352(uParam0))
				{
					func_360(uParam0, Var0, func_362(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_255(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar1 = { Var0 };
					func_365(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					func_331(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar1 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_365(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_365(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				func_364(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_22(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 128);
					func_122(&(uParam0->f_83), 256);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 256);
					func_122(&(uParam0->f_83), 512);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 512);
					func_122(&(uParam0->f_83), 128);
					func_298(uParam0, 16, 0, 0);
				}
				func_259(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_22(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar6)
					{
						func_230(&Var0);
					}
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 1);
					func_122(&(uParam0->f_83), 2);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar6)
					{
						func_230(&Var0);
					}
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_122(&(uParam0->f_83), 4);
					}
					else
					{
						func_122(&(uParam0->f_83), 1);
					}
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar6)
					{
						func_230(&Var0);
					}
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 4);
					func_122(&(uParam0->f_83), 1);
					func_298(uParam0, 16, 0, 0);
				}
				func_364(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_22(uParam0->f_81, 4096))
				{
					func_358(uParam0, 4096, Var0, "_sideW1", bVar6, 8);
				}
				else if (!func_22(uParam0->f_81, 8192))
				{
					func_358(uParam0, 8192, Var0, "_sideW2", bVar6, 8);
				}
				func_364(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_22(uParam0->f_81, 16384))
				{
					func_358(uParam0, 16384, Var0, "_opLne1", bVar6, 8);
				}
				else if (!func_22(uParam0->f_81, 32768))
				{
					func_358(uParam0, 32768, Var0, "_opLne2", bVar6, 8);
				}
				func_364(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_22(uParam0->f_82, 8))
					{
						func_351(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 16))
					{
						func_351(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 32))
					{
						func_351(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_364(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_259(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar1 = { Var0 };
					func_365(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					func_364(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_298(uParam0, 16, 0, 0);
					func_259(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar1 = { Var0 };
				func_365(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_364(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar1 = { Var0 };
				func_365(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_364(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_22(uParam0->f_81, 65536))
				{
					func_358(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 131072))
				{
					func_358(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_259(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_352(uParam0))
				{
					func_360(uParam0, Var0, func_362(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_255(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_22(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 8);
					func_122(&(uParam0->f_83), 16);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 16);
					func_122(&(uParam0->f_83), 32);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_122(&(uParam0->f_83), 64);
					}
					else
					{
						func_122(&(uParam0->f_83), 8);
					}
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 64);
					func_122(&(uParam0->f_83), 8);
					func_298(uParam0, 16, 0, 0);
				}
				func_364(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_113())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_363(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_360(uParam0, Var0, func_362(uParam0, 65));
					func_259(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_113())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					func_363(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_360(uParam0, Var0, func_362(uParam0, 66));
					func_259(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_113())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_363(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_363(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_363(uParam0, &Var0, 0, 0, 8);
								func_364(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_363(uParam0, &Var0, 0, 0, 8);
								func_364(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_363(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar1 = { Var0 };
								func_365(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
								func_364(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								func_298(uParam0, 16, 0, 0);
								func_259(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar1 = { Var0 };
									func_363(uParam0, &Var0, 0, 0, 8);
									func_298(uParam0, 16, 0, 0);
									func_298(uParam0, 11, 0, 0);
									func_259(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_60 = 1;
									}
									func_230(&Var0);
									func_363(uParam0, &Var0, 0, 0, 8);
									func_298(uParam0, 16, 0, 0);
									func_298(uParam0, 11, 0, 0);
									func_259(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_363(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_228(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar1 = { Var0 };
				func_365(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_364(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_22(uParam0->f_82, 1))
				{
					func_351(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 2))
				{
					func_351(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 4))
				{
					func_351(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_259(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar1 = { Var0 };
				func_365(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_255(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_298(uParam0, 16, 0, 0);
				func_364(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_352(uParam0))
				{
					func_360(uParam0, Var0, func_362(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_255(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_350(uParam0, Var0, 8);
				}
				func_364(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_22(uParam0->f_83, 1024))
				{
					func_171(&(uParam0->f_83), 1024);
					func_298(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2048))
				{
					func_171(&(uParam0->f_83), 2048);
					func_298(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4096))
				{
					func_171(&(uParam0->f_83), 4096);
					func_298(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_259(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_22(uParam0->f_82, 1024))
				{
					func_351(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_122(&(uParam0->f_82), 2048);
				}
				else if (!func_22(uParam0->f_82, 2048))
				{
					func_351(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_259(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar1 = { Var0 };
				func_365(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_364(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_255(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_352(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar1 = { Var0 };
						cVar1 = { Var0 };
						func_363(uParam0, &Var0, 0, 0, 8);
						func_228(uParam0, 52, 1, 0, 0);
						func_298(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar1 = { Var0 };
						func_363(uParam0, &Var0, 0, 0, 8);
						func_298(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar1 = { Var0 };
					func_365(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					func_298(uParam0, 16, 0, 0);
					func_259(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_364(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_298(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					func_156("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_259(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_22(uParam0->f_81, 262144))
				{
					func_358(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_358(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_358(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_364(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_349(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_22(uParam0->f_82, 134217728))
				{
					func_349(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_364(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar1 = { Var0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 100:
				func_156("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_259(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_230(&Var0);
				}
				func_171(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_230(&Var0);
				}
				func_171(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_230(&Var0);
				}
				func_171(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_22(uParam0->f_82, 65536))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						func_230(&Var0);
						func_355(Var0, uParam1);
						func_171(&(uParam0->f_82), 65536);
						func_298(uParam0, 16, 0, 0);
						func_298(uParam0, 11, 0, 0);
						func_259(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_22(uParam0->f_82, 131072))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_230(&Var0);
						func_355(Var0, uParam1);
						func_171(&(uParam0->f_82), 131072);
						func_298(uParam0, 16, 0, 0);
						func_298(uParam0, 11, 0, 0);
						func_259(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_22(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_171(&(uParam0->f_82), 8388608);
				}
				else if (!func_22(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_171(&(uParam0->f_82), 16777216);
				}
				else if (!func_22(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_171(&(uParam0->f_82), 33554432);
				}
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar1 = { Var0 };
					func_365(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					func_230(&Var0);
					func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar1 = { Var0 };
				func_365(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar1 = { Var0 };
				func_365(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_171(&(uParam0->f_81), 2097152);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_230(&Var0);
				func_355(Var0, uParam1);
				func_171(&(uParam0->f_81), 67108864);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_22(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_358(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_255(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_228(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_22(uParam0->f_81, 268435456))
				{
					func_358(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_228(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_156("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_259(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_22(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_358(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							func_255(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_358(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_228(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_156("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_259(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_22(uParam0->f_81, 16777216))
				{
					func_358(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_259(uParam0, 0, 0);
				break;
			
			case 88:
				func_156("TAXI_TIEFLEE", 7500, 1);
				func_259(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_22(uParam0->f_98, 536870912))
				{
					func_156("TAXI_OBJ_CYI_1B", 7500, 1);
					func_171(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_259(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				func_363(uParam0, &Var0, 0, 0, 8);
				func_259(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_259(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				func_363(uParam0, &Var0, 0, 0, 8);
				func_259(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_363(uParam0, &Var0, 1, 0, 8);
				func_228(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_156("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_228(uParam0, 0, 0, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			}
	}
}

void func_349(var uParam0, int iParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x10ECC
{
	func_171(&(uParam0->f_82), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_230(&Param2);
	}
	func_331(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_350(var uParam0, struct<6> Param1, int iParam2)//Position - 0x10F0D
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_22(uParam0->f_82, 64))
	{
		func_171(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_22(uParam0->f_82, 128))
	{
		func_171(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_139(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	func_298(uParam0, 16, 0, 0);
}

void func_351(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0x10F94
{
	func_171(&(uParam0->f_82), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			func_230(&Param2);
		}
	}
	func_331(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

int func_352(var uParam0)//Position - 0x11014
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_353(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0x1107A
{
	func_171(&(uParam0->f_81), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	func_331(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_354(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x110B0
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_275(*uParam0, iVar1))
		{
			func_165(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_230(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_355(char[24] cParam0, var uParam1)//Position - 0x11131
{
	int iVar0;
	
	iVar0 = func_356(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_171(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_356(var uParam0)//Position - 0x11160
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_357(var uParam0, bool bParam1)//Position - 0x1118D
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_156("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_156("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_156("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_156("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_156("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_156("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_156("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_156("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_156("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_156("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_156("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_156("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_358(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x11344
{
	func_171(&(uParam0->f_81), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_230(&Param2);
	}
	func_331(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

int func_359(struct<3> Param0, bool bParam1)//Position - 0x11385
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_132(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_360(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0x113B1
{
	func_298(uParam0, 16, 0, 0);
	func_298(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_361(uParam0));
	}
}

char* func_361(var uParam0)//Position - 0x113EF
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_362(var uParam0, int iParam1)//Position - 0x11489
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_363(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x11832
{
	func_298(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_298(uParam0, 17, 0f, 1);
	}
	func_259(uParam0, iParam2, 0);
	return func_331(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_364(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0x1186F
{
	if (iParam0 == 0)
	{
		if (func_22(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_22(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_22(*uParam2, 4))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_122(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_22(*uParam2, 512))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_122(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_22(*uParam2, 16))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_122(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_22(*uParam2, 64))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_122(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_22(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_22(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_22(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_22(*uParam2, 8192))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_22(*uParam2, 16384))
		{
			if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_22(*uParam2, 32768))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_22(*uParam2, 65536))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_22(*uParam2, 131072))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_22(*uParam2, 262144))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_22(*uParam2, 524288))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_22(*uParam2, 1048576))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_22(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_22(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_22(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_22(*uParam2, 67108864))
		{
			if (func_22(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_22(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_22(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_22(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_22(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

void func_365(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x11E79
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_275(*uParam0, iVar1))
		{
			func_165(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_230(sParam2);
				}
				else
				{
					func_230(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_366(var uParam0, bool bParam1)//Position - 0x11F10
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

int func_367(var uParam0)//Position - 0x11F22
{
	return uParam0->f_416;
}

int func_368(char* sParam0)//Position - 0x11F2F
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (func_186(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_369(var uParam0)//Position - 0x11F51
{
	if (func_113())
	{
		return 1;
	}
	if (func_305(uParam0, 17))
	{
		return 1;
	}
	if (func_305(uParam0, 14))
	{
		return 1;
	}
	if (func_184(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_370(var uParam0, var uParam1)//Position - 0x11F90
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_305(uParam0, 9));
}

void func_371(var uParam0)//Position - 0x11FB7
{
	if (func_305(uParam0, 17))
	{
		if (!func_305(uParam0, 14))
		{
			if (!func_184(uParam0))
			{
				if (!func_113())
				{
					func_110(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_372(var uParam0)//Position - 0x11FF1
{
	return uParam0->f_117;
}

void func_373(var uParam0, var uParam1, bool bParam2)//Position - 0x11FFD
{
	if (!func_22(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_124)) && func_113())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_113())
				{
					StringCopy(&(uParam0->f_124), func_205(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_374(var uParam0)//Position - 0x12083
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_165.f_0 > 0 && !func_275(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165.f_0 - 1))
				{
					if (func_275(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_275(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_165(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_123(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_275(Local_165.f_1[iVar0 /*4*/], 4) && !func_275(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_165(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_330(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_375(int iParam0, var uParam1)//Position - 0x12196
{
	var uVar0;
	
	if (!func_305(iParam0, 27))
	{
		func_304(iParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!iParam0->f_109 && func_111(iParam0, 27) > 5f)
	{
		if (func_402(iParam0->f_3, iParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_298(iParam0, 27, 0, 0);
			func_298(iParam0, 10, 0, 0);
			func_400(iParam0, &uVar0, uParam1);
		}
		func_397(iParam0);
	}
	if (iParam0->f_410 >= 3 && iParam0->f_410 <= 5)
	{
		func_376(iParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*iParam0) && !CAM::IS_CAM_ACTIVE(*iParam0))) && (CAM::DOES_CAM_EXIST(iParam0->f_1) && !CAM::IS_CAM_ACTIVE(iParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_113())
	{
		if (func_111(iParam0, 26) > 10f)
		{
			func_110(iParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (func_305(iParam0, 26))
	{
		func_110(iParam0, 26, 0);
	}
	return 0;
}

void func_376(var uParam0)//Position - 0x122C0
{
	if (!func_396(uParam0->f_429))
	{
		uParam0->f_429 = func_395();
		func_386(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_377(uParam0->f_429))
	{
		func_330(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_377(int iParam0)//Position - 0x1230D
{
	return func_378(func_395(), iParam0);
}

int func_378(int iParam0, int iParam1)//Position - 0x1231F
{
	int iVar0;
	int iVar1;
	
	if (!func_396(iParam1) || !func_396(iParam0))
	{
		return 1;
	}
	iVar0 = func_384(iParam0);
	iVar1 = func_384(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_383(iParam0);
	iVar1 = func_383(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_379(iParam0);
	iVar1 = func_379(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_379(int iParam0)//Position - 0x1242B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_380(int iParam0)//Position - 0x1243E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_381(int iParam0)//Position - 0x12451
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_382(int iParam0)//Position - 0x12464
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_383(int iParam0)//Position - 0x12476
{
	return iParam0 & 15;
}

var func_384(int iParam0)//Position - 0x12483
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_385(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_385(bool bParam0, int iParam1, int iParam2)//Position - 0x124A5
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_386(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x124BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_384(*uParam0);
	iVar1 = func_383(*uParam0);
	iVar2 = func_382(*uParam0);
	iVar3 = func_381(*uParam0);
	iVar4 = func_380(*uParam0);
	iVar5 = func_379(*uParam0);
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
	iVar6 = func_394(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_394(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_387(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_387(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1263E
{
	func_393(uParam0, iParam1);
	func_392(uParam0, iParam2);
	func_391(uParam0, iParam3);
	func_390(uParam0, iParam5);
	func_389(uParam0, iParam4);
	func_388(uParam0, iParam6);
}

void func_388(var uParam0, int iParam1)//Position - 0x12676
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

void func_389(var uParam0, int iParam1)//Position - 0x126FC
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_383(*uParam0);
	iVar1 = func_384(*uParam0);
	if (iParam1 < 1 || iParam1 > func_394(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_390(var uParam0, int iParam1)//Position - 0x1274D
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_391(var uParam0, int iParam1)//Position - 0x12780
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_392(var uParam0, int iParam1)//Position - 0x127BA
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_393(var uParam0, int iParam1)//Position - 0x127F5
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_394(int iParam0, int iParam1)//Position - 0x12831
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

int func_395()//Position - 0x128D3
{
	var uVar0;
	
	func_393(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_392(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_391(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_389(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_390(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_388(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_396(int iParam0)//Position - 0x12919
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
	iVar0 = func_379(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_380(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_381(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_384(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_383(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_382(iParam0);
	if (iVar5 < 1 || iVar5 > func_394(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_397(var uParam0)//Position - 0x129F5
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_399()) && !func_161(uParam0)) || ((uParam0->f_411 != 9 && func_263(uParam0, 1)) && !func_161(uParam0)))
		{
			uVar0 = func_398(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, false);
			func_200(uParam0);
			func_191(uParam0, 0);
		}
	}
}

var func_398(var uParam0)//Position - 0x12A8B
{
	return uParam0;
}

int func_399()//Position - 0x12A95
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_400(var uParam0, var uParam1, var uParam2)//Position - 0x12AEC
{
	switch (*uParam1)
	{
		case 1:
			if (func_401(uParam0, 0, 1))
			{
				func_330(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_401(uParam0, 0, 4))
			{
				func_330(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_401(uParam0, 0, 8))
			{
				func_330(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_401(uParam0, 1, 1))
			{
				func_330(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_401(uParam0, 0, 1))
			{
				func_330(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_22(*uParam2, 2) && func_177(uParam0))
			{
				func_330(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_401(var uParam0, int iParam1, int iParam2)//Position - 0x12BC6
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_228(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_228(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_402(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x12C43
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_22(*uParam2, 1))
		{
			if (func_408(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_22(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_22(*uParam2, 4))
		{
			if (func_406(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_22(*uParam2, 8))
		{
			if (func_405(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_22(*uParam2, 128);
		if (bParam4)
		{
			if (func_403(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_22(*uParam2, 16))
		{
			if (func_403(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_403(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x12D6D
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_73 = true;
		}
		iLocal_75 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_73)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_404(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_163(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_404(int iParam0, int iParam1)//Position - 0x12F35
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_405(int iParam0, int iParam1, var uParam2)//Position - 0x12F8A
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_406(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x12FD8
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(Var0, 4f, true))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), true, true))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_407(iVar1))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_407(int iParam0)//Position - 0x13151
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_170(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_408(int iParam0, var uParam1)//Position - 0x1321F
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_163(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_409()//Position - 0x132A4
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<6> Var3;
	
	Var3 = { func_158() };
	if ((((iLocal_269 < 4 && func_163(Local_230.f_3, 1) < 50f) && Local_230.f_410 == 22) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !iLocal_307)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 80))
		{
			if (CAM::DOES_CAM_EXIST(Local_230.f_0))
			{
				if (!CAM::IS_CAM_ACTIVE(Local_230.f_0))
				{
					iLocal_399 = MISC::GET_GAME_TIMER();
					CAM::SET_CAM_ACTIVE(Local_230.f_0, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
			}
		}
	}
	if ((((iLocal_269 < 4 && func_163(Local_230.f_3, 1) < 50f) && Local_230.f_410 == 22) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !iLocal_307)
	{
		if (iLocal_298)
		{
			switch (iLocal_397)
			{
				case 0:
					iLocal_398 = MISC::GET_GAME_TIMER();
					Var0 = { 223.3f, -3326.3f, 6.4f };
					Var1 = { -4.1f, 0f, 78f };
					fVar2 = 24.3f;
					func_410(Var0, Var1, fVar2);
					iLocal_397 = 1;
					break;
				
				case 1:
					if (MISC::ARE_STRINGS_EQUAL("txm12_ig1c_3", &Var3))
					{
						iLocal_398 = MISC::GET_GAME_TIMER();
						Var0 = { 211.1f, -3326.1f, 5.8f };
						Var1 = { 4.1f, 0f, -81.2f };
						fVar2 = 24.3f;
						func_410(Var0, Var1, fVar2);
						iLocal_397 = 2;
					}
					break;
				
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_398) > 5000)
					{
						iLocal_398 = MISC::GET_GAME_TIMER();
						Var0 = { 202.0472f, -3314.83f, 5.9369f };
						Var1 = { -1.9358f, -0.0169f, 169.6817f };
						fVar2 = 20.9113f;
						func_410(Var0, Var1, fVar2);
						iLocal_397 = 3;
					}
					break;
				
				case 3:
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_3", &Var3))
					{
						iLocal_398 = MISC::GET_GAME_TIMER();
						Var0 = { 194.7488f, -3328.101f, 5.9471f };
						Var1 = { -0.3369f, -0.0169f, -55.7257f };
						fVar2 = 24.5237f;
						func_410(Var0, Var1, fVar2);
						iLocal_397 = 4;
					}
					break;
				
				case 4:
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_5", &Var3))
					{
						iLocal_398 = MISC::GET_GAME_TIMER();
						Var0 = { 202.0472f, -3314.83f, 5.9369f };
						Var1 = { -1.9358f, -0.0169f, 169.6817f };
						fVar2 = 20.9113f;
						func_410(Var0, Var1, fVar2);
						iLocal_397 = 5;
					}
					break;
				
				case 5:
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_7", &Var3))
					{
						iLocal_398 = MISC::GET_GAME_TIMER();
						Var0 = { 194.1f, -3324.9f, 6.2f };
						Var1 = { -4.6f, 0f, -83.1f };
						fVar2 = 29f;
						func_410(Var0, Var1, fVar2);
						iLocal_397 = 6;
					}
					break;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 80) && (MISC::GET_GAME_TIMER() - iLocal_399) > 500)
			{
				if (CAM::DOES_CAM_EXIST(Local_230.f_0))
				{
					CAM::SET_CAM_ACTIVE(Local_230.f_0, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			}
		}
	}
	else if (iLocal_298)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (CAM::DOES_CAM_EXIST(Local_230.f_0))
			{
				if (CAM::IS_CAM_ACTIVE(Local_230.f_0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_CAM_ACTIVE(Local_230.f_0, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			}
		}
		if (iLocal_307)
		{
			if (!func_16(&iLocal_332))
			{
				if (func_154() && CAM::IS_CAM_ACTIVE(Local_230.f_0))
				{
					if (!iLocal_308)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_308 = 1;
					}
				}
				func_103(&iLocal_332);
			}
			else if (func_101(&iLocal_332) > 0.3f)
			{
				if (CAM::DOES_CAM_EXIST(Local_230.f_0))
				{
					if (CAM::IS_CAM_ACTIVE(Local_230.f_0))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(Local_230.f_0, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					}
				}
			}
		}
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
}

void func_410(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x136B5
{
	if (!CAM::DOES_CAM_EXIST(Local_230.f_0))
	{
		func_239(&Local_230, 0f, 0f, 0f, 0f, 0f, 0f, fParam2);
	}
	CAM::SET_CAM_COORD(Local_230.f_0, Param0);
	CAM::SET_CAM_ROT(Local_230.f_0, Param1, 2);
	CAM::SHAKE_CAM(Local_230.f_0, "HAND_SHAKE", 0.3f);
}

void func_411(var uParam0)//Position - 0x136FE
{
	if (!func_22(uParam0->f_98, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (func_207(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_17, 25f, false, false, false, false, false, false, 0);
				func_171(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_412()//Position - 0x13756
{
	if (!iLocal_300)
	{
		func_413(&Local_230);
		iLocal_300 = 1;
	}
	func_435(2);
	if (iLocal_299)
	{
		if (func_10(PLAYER::PLAYER_PED_ID(), Local_230.f_17, 1) > 50f || func_128(&(Local_247.f_3), &(Local_247.f_11), &(Local_257.f_3), &(Local_257.f_11)))
		{
			func_433();
		}
	}
	else
	{
		func_433();
	}
}

void func_413(var uParam0)//Position - 0x137BD
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_435(2);
	}
}

int func_414(var uParam0, bool bParam1)//Position - 0x137DC
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_113() && func_111(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
				{
					if (func_62(uParam0) == 0 || func_275(uParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							func_333(uParam0, 4160, 0);
						}
						else
						{
							func_333(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_333(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_333(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_333(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return 0;
}

void func_415(var uParam0)//Position - 0x138DB
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_10));
	}
}

int func_416(var uParam0)//Position - 0x1391C
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_417()//Position - 0x1393D
{
	Local_230.f_23 = { 107.3107f, -1124.865f, 28.198f };
	Local_230.f_33 = 88.9745f;
	Local_230.f_26 = { 195.7672f, -2981.732f, 4.8916f };
	Local_230.f_34 = 173.6662f;
	PED::ADD_RELATIONSHIP_GROUP("TAXI_Pursuers", &iLocal_262);
	func_432(1);
	func_421(&Local_230, 3);
	Local_230.f_410 = 0;
	func_420(&Local_230, 3, 6);
	func_418();
}

void func_418()//Position - 0x139B2
{
	func_419();
	Local_247 = { 187.5257f, -3320.163f, 4.6276f };
}

void func_419()//Position - 0x139D2
{
	Local_247.f_19[0] = joaat("g_m_y_lost_01");
	Local_247.f_19[1] = joaat("s_f_y_hooker_01");
	Local_247.f_32[0] = joaat("gburrito");
	Local_247.f_32[1] = joaat("daemon");
	Local_247.f_32[2] = joaat("hexer");
	Local_247.f_32[3] = joaat("emperor");
	Local_257.f_19[0] = joaat("g_m_y_lost_01");
	Local_257.f_32[0] = joaat("gburrito");
	Local_257.f_32[1] = joaat("hexer");
}

void func_420(var uParam0, int iParam1, int iParam2)//Position - 0x13A4F
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_421(var uParam0, int iParam1)//Position - 0x13A63
{
	func_431(1);
	func_202();
	func_7(&(uParam0->f_244));
	func_430(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_22(Global_113386.f_19097, 4))
	{
		func_171(&(Global_113386.f_19097), 4);
	}
	func_425(uParam0);
	func_423(uParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	uParam0->f_102 = (func_422(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}

int func_422(int iParam0)//Position - 0x13AE5
{
	return Global_113386.f_19097.f_39[iParam0];
}

void func_423(var uParam0)//Position - 0x13AFA
{
	switch (func_62(uParam0))
	{
		case 0:
			func_424(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_424(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_424(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_424(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_424(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_424(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_424(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_424(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_424(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_424(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_424(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x13C4D
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_425(var uParam0)//Position - 0x13C67
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_429(uParam0, 3);
			func_428(uParam0, 14);
			break;
		
		case 1:
			func_429(uParam0, 14);
			func_428(uParam0, 8);
			break;
		
		case 2:
			func_429(uParam0, 8);
			func_428(uParam0, 7);
			break;
		
		case 3:
			func_429(uParam0, 15);
			func_428(uParam0, 6);
			break;
		
		case 4:
			func_429(uParam0, 0);
			func_428(uParam0, 3);
			break;
		
		case 5:
			func_429(uParam0, 6);
			func_428(uParam0, 7);
			break;
		
		case 6:
			func_429(uParam0, 8);
			func_428(uParam0, 15);
			break;
		
		case 7:
			func_429(uParam0, 8);
			func_428(uParam0, 14);
			break;
		
		case 8:
			func_429(uParam0, 7);
			func_428(uParam0, 15);
			break;
		
		case 9:
			func_429(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_427((uParam0->f_418.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_428(uParam0, iVar0);
			func_426(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_426(var uParam0)//Position - 0x13D9E
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_427(int iParam0, int iParam1, int iParam2)//Position - 0x13E5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_428(var uParam0, int iParam1)//Position - 0x13F01
{
	uParam0->f_418.f_1 = iParam1;
}

void func_429(var uParam0, int iParam1)//Position - 0x13F12
{
	uParam0->f_418.f_2 = iParam1;
}

void func_430(var uParam0)//Position - 0x13F23
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_41() };
	uParam0->f_17 = { func_41() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_110(uParam0, 32, 0);
}

void func_431(bool bParam0)//Position - 0x13F81
{
	if (bParam0)
	{
		StringCopy(&Global_112442, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_112436 = 1;
	}
	else
	{
		StringCopy(&Global_112442, "NULL", 24);
		Global_112436 = 0;
	}
}

void func_432(int iParam0)//Position - 0x13FAD
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iLocal_262, joaat("player"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iLocal_262, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), iLocal_262);
}

void func_433()//Position - 0x13FDF
{
	func_20(&Local_230);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_311, Local_312, true, true);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_278, false);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_276);
	func_434();
	func_209();
	if (CAM::DOES_CAM_EXIST(Local_230.f_0))
	{
		CAM::DESTROY_CAM(Local_230.f_0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_434()//Position - 0x14049
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
}

void func_435(int iParam0)//Position - 0x14058
{
	Global_112096.f_22 = iParam0;
}

