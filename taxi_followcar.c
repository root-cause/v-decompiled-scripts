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
	struct<3> Local_230[1];
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235[3] = { 0, 0, 0 };
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<418> Local_238 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = -1;
	var uLocal_240 = -1;
	var uLocal_241 = -1;
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	struct<32> Local_251 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	bool bLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	bool bLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	struct<3> Local_284 = { 0, 0, 0 } ;
	struct<3> Local_285 = { 0, 0, 0 } ;
	struct<3> Local_286 = { 0, 0, 0 } ;
	struct<3> Local_287 = { 0, 0, 0 } ;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_289 = { 0, 0, 0 } ;
	struct<3> Local_290 = { 0, 0, 0 } ;
	struct<3> Local_291 = { 0, 0, 0 } ;
	struct<3> Local_292 = { 0, 0, 0 } ;
	struct<3> Local_293 = { 0, 0, 0 } ;
	struct<3> Local_294 = { 0, 0, 0 } ;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	struct<3> Local_298 = { 0, 0, 0 } ;
	struct<3> Local_299 = { 0, 0, 0 } ;
	struct<3> Local_300 = { 0, 0, 0 } ;
	struct<3> Local_301 = { 0, 0, 0 } ;
	struct<3> Local_302 = { 0, 0, 0 } ;
	float fLocal_303 = 0f;
	float fLocal_304 = 0f;
	float fLocal_305 = 0f;
	float fLocal_306 = 0f;
	float fLocal_307 = 0f;
	int iLocal_308 = 0;
	char cLocal_309[16] = "";
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	char cLocal_312[64] = "";
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	char cLocal_321[64] = "";
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	char cLocal_330[64] = "";
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	char cLocal_339[64] = "";
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	struct<3> Local_348 = { 0, 0, 0 } ;
	struct<3> Local_349 = { 0, 0, 0 } ;
	float fLocal_350 = 0f;
	bool bLocal_351 = 0;
	struct<28> Local_352 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 5;
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
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 1097859072;
	var uLocal_401 = 1500;
	var uLocal_402 = 45;
	var uLocal_403 = 1103626240;
	var uLocal_404 = 5;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
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
	iLocal_253 = joaat("a_f_y_genhot_01");
	iLocal_254 = joaat("a_f_y_bevhills_01");
	iLocal_255 = joaat("ambulance");
	iLocal_256 = joaat("bison");
	iLocal_263 = 1;
	iLocal_264 = 1000;
	Local_283 = { 1358.822f, -1547.396f, 53.7793f };
	Local_284 = { 1358.822f, -1547.396f, 53.7793f };
	Local_285 = { -694.2758f, -1119.447f, 13.525f };
	Local_286 = { -683.1272f, -1102.185f, 13.5257f };
	Local_287 = { 410.2629f, -1399.16f, 28.4017f };
	Local_288 = { 371.3834f, -1482.955f, 28.3418f };
	Local_289 = { 404.8026f, -1416.294f, 28.435f };
	Local_290 = { 406.612f, -1419.937f, 29.00375f };
	Local_291 = { -682.5392f, -1109.082f, 13.6729f };
	Local_292 = { -688.6727f, -1117.512f, 13.52498f };
	Local_293 = { -667.136f, -1046.06f, 15.9174f };
	Local_294 = { -703.1228f, -1142.432f, 9.8127f };
	Local_298 = { -701.2533f, -1080.285f, 12.2884f };
	Local_299 = { -687.8794f, -1108.073f, 13.5257f };
	Local_300 = { -703.0013f, -1084.073f, 12.1105f };
	fLocal_303 = 25.0227f;
	fLocal_304 = 226.3085f;
	fLocal_305 = -128.2329f;
	fLocal_306 = 238.4969f;
	fLocal_307 = 212.7682f;
	StringCopy(&cLocal_309, "taxi_oj_fc_2", 16);
	StringCopy(&cLocal_312, "amb@world_human_hang_out_street@male_c@idle_a", 64);
	StringCopy(&cLocal_321, "amb@world_human_hang_out_street@male_c@exit", 64);
	StringCopy(&cLocal_330, "amb@world_human_hang_out_street@female_hold_arm@idle_a", 64);
	StringCopy(&cLocal_339, "amb@world_human_hang_out_street@female_hold_arm@exit", 64);
	Local_348 = { -727.111f, -1046.357f, 11.43926f };
	Local_349 = { -642.6097f, -1085.538f, 28.42921f };
	fLocal_350 = 76.75f;
	iLocal_396 = 786468;
	iLocal_397 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_462(2);
		func_458();
	}
	MISC::SET_MISSION_FLAG(true);
	func_444();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_238.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_238);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x2B1
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	func_7(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()//Position - 0x2D2
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

int func_3(int iParam0)//Position - 0x31D
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

int func_4(int iParam0)//Position - 0x35A
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

var func_5(int iParam0)//Position - 0x37F
{
	return Global_1998[iParam0 /*29*/];
}

bool func_6(int iParam0)//Position - 0x38E
{
	return iParam0 < 3;
}

void func_7(var uParam0)//Position - 0x39A
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

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x423
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

void func_9()//Position - 0x4BE
{
	if (func_443(&Local_238))
	{
		func_442(&Local_238);
		if (HUD::DOES_BLIP_EXIST(Local_251.f_4))
		{
			HUD::REMOVE_BLIP(&(Local_251.f_4));
		}
		if (func_441(&Local_238, 0))
		{
			func_439();
		}
	}
	else
	{
		func_438(&Local_238);
		if (Local_238.f_410 < 28)
		{
			func_404(&Local_238, &uLocal_398);
			func_403(&Local_238);
			func_402(&Local_238, &uLocal_265, 0);
		}
		if (Local_238.f_410 > 2)
		{
			if (!func_401(&Local_238))
			{
				func_370();
			}
			else
			{
				func_361(&Local_238, "Taxi Not Driveable", func_369(&Local_238));
			}
		}
		if (Local_238.f_410 >= 21 && !iLocal_272)
		{
			func_345();
		}
		if (iLocal_274)
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
		}
		if (Local_238.f_410 == 9 || Local_238.f_410 == 17)
		{
			func_321(&Local_238, 0, 0);
		}
		switch (Local_238.f_410)
		{
			case 0:
				func_318();
				func_317(&Local_238, 16, 4f, 0);
				func_315(&Local_238, Local_283, Local_284, "TaxiKeyla", iLocal_253, 41.1334f, 15f);
				func_314(&Local_238);
				func_313(&Local_238, 1);
				break;
			
			case 1:
				if (func_311())
				{
					func_310();
					func_290();
					func_289(&(Local_230[0 /*3*/]), "TAXI_SC_BN_04", 100);
					func_288(&Local_238, &Local_230);
					func_287(&Local_238);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_287, Local_288, false, true);
					Local_238.f_14 = { Local_283 };
					func_313(&Local_238, 3);
				}
				break;
			
			case 3:
				if (func_280(&Local_238, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_238.f_3, 0, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_238.f_3, 2, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_238.f_3, 3, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_238.f_3, 4, 1, 3, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_238.f_3, 8, 1, 0, 0);
					}
					func_279(&Local_238, 1, 0);
					PED::ADD_RELATIONSHIP_GROUP("TAXI_Escapee", &(Local_251.f_30));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_251.f_30, Local_238.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_251.f_30, joaat("player"));
					PATHFIND::SET_ROADS_IN_AREA(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, false, true);
					func_313(&Local_238, 5);
				}
				break;
			
			case 5:
				if (func_260(&Local_238, 0, 1109393408))
				{
					func_259();
					func_313(&Local_238, 6);
				}
				break;
			
			case 6:
				if (func_258(&Local_238))
				{
					func_254(&Local_238, 9, 1, 0, 0);
					func_253(&Local_238);
					Local_238.f_17 = { 485.2039f, -1418.064f, 28.2112f };
					func_252();
					func_251(392.8545f, -1379.577f, 29.2837f, 0, 50f);
					func_313(&Local_238, 17);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_238.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_238.f_2, Local_238.f_4, false))
					{
						func_249(&Local_238);
						func_313(&Local_238, 5);
					}
				}
				break;
			
			case 17:
				func_248(&Local_238, &(Local_238.f_9));
				if (!ENTITY::DOES_ENTITY_EXIST(Local_251.f_3))
				{
					if (func_247())
					{
						func_246(&Local_251, Local_290, fLocal_305);
					}
				}
				else
				{
					func_245(&Local_238, &Local_251);
				}
				if (func_219(&Local_238, 9f, 1097859072, 1117782016))
				{
					if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_238.f_9))
					{
						HUD::SET_BLIP_ROUTE(Local_238.f_9, false);
					}
					HUD::REMOVE_BLIP(&(Local_238.f_9));
					func_313(&Local_238, 19);
				}
				break;
			
			case 19:
				if (func_212())
				{
					if (!func_211())
					{
						func_254(&Local_238, 139, 1, 0, 0);
						iLocal_274 = 1;
						func_313(&Local_238, 9);
					}
				}
				break;
			
			case 9:
				func_245(&Local_238, &Local_251);
				func_210();
				if (func_209(Local_251.f_2, Local_251.f_3))
				{
					func_208(&Local_238, 2, 0);
					PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(Local_251.f_2, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 6, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 17, true);
					func_279(&Local_238, 1, 0);
					Local_251.f_5 = ENTITY::GET_ENTITY_HEALTH(Local_251.f_3);
					Local_251.f_15 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_251.f_3);
					Local_251.f_16 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_251.f_3);
					func_317(&Local_238, 13, 0f, 0);
					func_317(&Local_238, 20, 0f, 0);
					PED::SET_PED_NON_CREATION_AREA(Local_293, Local_294);
					iLocal_261 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_293, Local_294, false, true, true, true);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
					func_313(&Local_238, 13);
				}
				break;
			
			case 13:
				func_210();
				func_245(&Local_238, &Local_251);
				func_248(&Local_238, &(Local_251.f_4));
				if (func_207(&Local_238))
				{
					if (func_206(Local_251.f_2, Local_251.f_4))
					{
						func_254(&Local_238, 51, 1, 0, 0);
						func_313(&Local_238, 25);
					}
					func_202(&Local_238);
					func_199(Local_251.f_3, 291.0313f, -1476.446f, 28.2945f, 15f, &Local_352, 2);
					if (func_159())
					{
						if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_251.f_3))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_251.f_3);
							VEHICLE::REMOVE_VEHICLE_RECORDING(0, "taxi_oj_fc3");
						}
						func_157(&uLocal_45, 0, 0);
						func_156();
						func_313(&Local_238, 20);
					}
				}
				break;
			
			case 20:
				if (func_155())
				{
					if (func_134())
					{
						func_313(&Local_238, 14);
					}
				}
				break;
			
			case 14:
				func_133(&Local_238, &(Local_238.f_43));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
				{
					if ((ENTITY::IS_ENTITY_AT_COORD(Local_251.f_3, Local_285, 20f, 20f, 60f, true, true, 0) && ENTITY::GET_ENTITY_SPEED(Local_251.f_3) < 5f) || Local_251.f_31 > 2)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_257);
							ENTITY::SET_ENTITY_COORDS(iLocal_257, Local_292, true, false, false, true);
						}
						func_254(&Local_238, 37, 1, 0, 0);
						func_313(&Local_238, 21);
					}
				}
				break;
			
			case 21:
				func_133(&Local_238, &(Local_238.f_43));
				func_132(&Local_238, Local_251.f_2, 1, 1);
				func_132(&Local_238, iLocal_257, 0, 0);
				func_248(&Local_238, &(Local_238.f_9));
				if (HUD::DOES_BLIP_EXIST(Local_251.f_4))
				{
					HUD::REMOVE_BLIP(&(Local_251.f_4));
					Local_238.f_17 = { Local_286 };
				}
				else if (!HUD::DOES_BLIP_EXIST(Local_238.f_9))
				{
					Local_238.f_9 = func_130(Local_238.f_17, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_238.f_4, false))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_238.f_2, Local_238.f_4, false))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_238.f_4, -684.526f, -1105.76f, 13.52571f, 1f, 1f, 2f, !Local_238.f_140, true, 0))
						{
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_238.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_238.f_4, -704.1705f, -1115.226f, 13.525f, -700.2585f, -1121.292f, 15.4336f, 2.25f, false, true, 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_238.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, false, true, 0))
							{
								iLocal_231 = 0;
							}
							else
							{
								iLocal_231 = 1;
							}
							Local_238.f_35 = 60f;
							Local_238.f_417 = 143;
							Local_238.f_416 = 143;
							iLocal_274 = 0;
							func_313(&Local_238, 22);
						}
					}
				}
				break;
			
			case 22:
				func_132(&Local_238, Local_251.f_2, 0, 1);
				func_132(&Local_238, iLocal_257, 0, 0);
				if (!PED::IS_PED_INJURED(Local_238.f_3))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_238.f_4, false))
					{
						if (Local_251.f_31 != 6)
						{
							if (func_126(&Local_238, 1, 3f))
							{
								iLocal_273 = 1;
								HUD::REMOVE_BLIP(&(Local_238.f_9));
								func_313(&Local_238, 27);
							}
						}
						else
						{
							if (!HUD::DOES_BLIP_EXIST(Local_238.f_9))
							{
								Local_238.f_9 = func_130(Local_238.f_17, 1);
							}
							if (func_219(&Local_238, 8f, 1097859072, 1117782016) || func_126(&Local_238, 1, 1084227584))
							{
								HUD::REMOVE_BLIP(&(Local_238.f_9));
								func_313(&Local_238, 27);
							}
						}
					}
				}
				break;
			
			case 25:
				func_132(&Local_238, Local_251.f_2, 0, 1);
				func_132(&Local_238, iLocal_257, 0, 0);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					func_254(&Local_238, 37, 1, 0, 0);
					func_313(&Local_238, 27);
				}
				break;
			
			case 27:
				func_132(&Local_238, Local_251.f_2, 0, 1);
				func_132(&Local_238, iLocal_257, 0, 0);
				if (!PED::IS_PED_INJURED(Local_238.f_3))
				{
					if (HUD::DOES_BLIP_EXIST(Local_251.f_4))
					{
						HUD::REMOVE_BLIP(&(Local_251.f_4));
					}
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_DRIVE");
					if (Local_251.f_9 > 2)
					{
						Local_238.f_56 = -10;
					}
					else if (Local_251.f_9 == 0)
					{
						Local_238.f_56 = 7;
						func_125(&Local_238, 0);
					}
					else
					{
						Local_238.f_56 = 4;
					}
					func_123(&Local_238);
					func_119(&Local_238);
					func_118(&Local_238);
					func_313(&Local_238, 29);
				}
				break;
			
			case 29:
				HUD::CLEAR_THIS_PRINT("TAXI_OBJ_DRIVE");
				if (func_83(&Local_238, &uLocal_405))
				{
					func_57(&Local_238);
					func_313(&Local_238, 28);
				}
				break;
			
			case 28:
				if (iLocal_272 || iLocal_271)
				{
					func_313(&Local_238, 30);
				}
				break;
			
			case 30:
				HUD::CLEAR_THIS_PRINT("TAXI_OBJ_DRIVE");
				if ((!PED::IS_PED_INJURED(Local_238.f_3) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_257, Local_238.f_3, true)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_251.f_2, Local_238.f_3, true))
				{
					if (iLocal_277 || SYSTEM::TIMERA() > 20000)
					{
						func_54(1, &Local_238, 1);
						func_458();
					}
					else
					{
						iLocal_236 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_291, 10f, joaat("ambulance"), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_236, false))
						{
							iLocal_277 = 1;
						}
						iLocal_258 = PED::GET_RANDOM_PED_AT_COORD(Local_291, 5f, 5f, 5f, -1);
						if (!PED::IS_PED_INJURED(iLocal_258))
						{
							iLocal_277 = 1;
						}
						if (!iLocal_278)
						{
							if (MISC::CREATE_INCIDENT(5, Local_291, 1, 0f, &uLocal_262, 0, 0))
							{
								SYSTEM::SETTIMERA(0);
								iLocal_278 = 1;
							}
						}
					}
				}
				if (func_52(Local_291, 1) > 100f || func_50(Local_238.f_3, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_54(1, &Local_238, 1);
					func_458();
				}
				else if ((PED::IS_PED_INJURED(Local_238.f_3) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_257, PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_251.f_2, PLAYER::PLAYER_PED_ID(), true))
				{
					if (!PED::IS_PED_INJURED(Local_238.f_3))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_238.f_3, true);
						TASK::CLEAR_PED_TASKS(Local_238.f_3);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_COWER(0, 2000);
						TASK::TASK_SMART_FLEE_COORD(0, Local_238.f_17, 1000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(Local_238.f_3, iLocal_232);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						PED::SET_PED_KEEP_TASK(Local_238.f_3, true);
					}
					if (!PED::IS_PED_INJURED(iLocal_257))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_257, true);
						TASK::CLEAR_PED_TASKS(iLocal_257);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_COWER(0, 1000);
						TASK::TASK_SMART_FLEE_COORD(0, Local_238.f_17, 1000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_232);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						PED::SET_PED_KEEP_TASK(iLocal_257, true);
					}
					if (!PED::IS_PED_INJURED(Local_251.f_2))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251.f_2, true);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						if (bLocal_275)
						{
							TASK::TASK_PLAY_ANIM(0, "MOVE_DUCK_FOR_COVER", "exit", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						TASK::TASK_STAND_STILL(0, 500);
						TASK::TASK_SMART_FLEE_COORD(0, Local_238.f_17, 1000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(Local_251.f_2, iLocal_232);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						PED::SET_PED_KEEP_TASK(Local_251.f_2, true);
					}
					func_54(1, &Local_238, 1);
					func_458();
				}
				else if ((iLocal_271 && !func_211()) && (MISC::GET_GAME_TIMER() - iLocal_267) > 500)
				{
					if (!PED::IS_PED_INJURED(Local_238.f_3))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_238.f_3, true);
						TASK::CLEAR_PED_TASKS(Local_238.f_3);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_SHOOT_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(Local_238.f_3, iLocal_232);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						PED::SET_PED_KEEP_TASK(Local_238.f_3, true);
					}
					if (!PED::IS_PED_INJURED(iLocal_257))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_257, true);
						TASK::CLEAR_PED_TASKS(iLocal_257);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_COWER(0, 1000);
						TASK::TASK_SMART_FLEE_COORD(0, Local_238.f_17, 1000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_232);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						PED::SET_PED_KEEP_TASK(iLocal_257, true);
					}
					if (!PED::IS_PED_INJURED(Local_251.f_2))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251.f_2, true);
						TASK::CLEAR_PED_TASKS(Local_251.f_2);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_STAND_STILL(0, 500);
						TASK::TASK_SMART_FLEE_COORD(0, Local_238.f_17, 1000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(Local_251.f_2, iLocal_232);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						PED::SET_PED_KEEP_TASK(Local_251.f_2, true);
					}
					func_10(&Local_238, 1);
					func_458();
				}
				break;
			}
	}
}

void func_10(var uParam0, bool bParam1)//Position - 0x125A
{
	func_442(uParam0);
	if (func_211())
	{
		func_48();
	}
	func_46();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_41(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	func_37(uParam0->f_14, 1);
	func_251(uParam0->f_14, 1, 1114636288);
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
		func_20(&(Global_113386.f_19097), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_19(), false);
	}
	if (bParam1)
	{
		func_18(uParam0);
	}
	func_17(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_15(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_11(&iLocal_82) * 1000f)), 12, 0);
}

float func_11(var uParam0)//Position - 0x13B1
{
	if (func_14(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_12(bool bParam0)//Position - 0x13EA
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

bool func_13(var uParam0)//Position - 0x1442
{
	return BitTest(*uParam0, 2);
}

bool func_14(var uParam0)//Position - 0x144F
{
	return BitTest(*uParam0, 1);
}

void func_15(int iParam0)//Position - 0x145C
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_16(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_16(int iParam0)//Position - 0x1483
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

void func_17(var uParam0)//Position - 0x154C
{
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uParam0->f_51[0]);
}

void func_18(var uParam0)//Position - 0x1560
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

int func_19()//Position - 0x165D
{
	return joaat("taxi");
}

void func_20(var uParam0, int iParam1)//Position - 0x166A
{
	func_21(uParam0, iParam1);
}

void func_21(var uParam0, int iParam1)//Position - 0x167A
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_22(var uParam0, int iParam1)//Position - 0x168F
{
	return (uParam0 && iParam1) != 0;
}

void func_23(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x169E
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

bool func_24()//Position - 0x17E1
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

bool func_25(int iParam0, int iParam1)//Position - 0x17FB
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

int func_26(int iParam0, bool bParam1)//Position - 0x1846
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

int func_27()//Position - 0x1887
{
	return Global_1574918;
}

int func_28(int iParam0)//Position - 0x1893
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

bool func_29()//Position - 0x18D2
{
	return BitTest(Global_2621446, 3);
}

int func_30(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x18E0
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

int func_31()//Position - 0x1913
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0)//Position - 0x193A
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

int func_33()//Position - 0x195D
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

int func_34()//Position - 0x1988
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x19A2
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0, int iParam1)//Position - 0x19BC
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_37(struct<3> Param0, bool bParam1)//Position - 0x19D9
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_39(Param0, func_40(), 0))
	{
		Var0 = { func_38(Param0, 1f, -30f, -30f, -10f) };
		Var1 = { func_38(Param0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, bParam1, true);
	}
}

Vector3 func_38(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x1A39
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

bool func_39(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x1A86
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_40()//Position - 0x1ACD
{
	struct<3> Var0;
	
	return Var0;
}

void func_41(int iParam0)//Position - 0x1AD9
{
	if (func_45())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_44())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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

void func_42(bool bParam0, bool bParam1)//Position - 0x1B63
{
	if (bParam0)
	{
		if (func_43(0))
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

int func_43(int iParam0)//Position - 0x1BD7
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

bool func_44()//Position - 0x1C2E
{
	return BitTest(Global_1958711, 5);
}

bool func_45()//Position - 0x1C3C
{
	return BitTest(Global_1958711, 19);
}

void func_46()//Position - 0x1C4B
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
					func_47(Global_97374[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_47(int iParam0, bool bParam1)//Position - 0x1CD2
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

void func_48()//Position - 0x1D10
{
	Global_20471 = 0;
	func_49();
}

void func_49()//Position - 0x1D20
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

float func_50(int iParam0, int iParam1)//Position - 0x1D41
{
	return func_51(iParam0, iParam1, 1);
}

float func_51(int iParam0, int iParam1, bool bParam2)//Position - 0x1D52
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

float func_52(struct<3> Param0, bool bParam1)//Position - 0x1DB0
{
	return func_53(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, bParam1);
}

float func_53(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x1DCA
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1, bParam2);
}

void func_54(bool bParam0, var uParam1, bool bParam2)//Position - 0x1DF4
{
	if (bParam0)
	{
		func_57(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_55(1, 0);
	}
	func_10(uParam1, bParam2);
}

void func_55(int iParam0, int iParam1)//Position - 0x1E30
{
	switch (iParam0)
	{
		case 0:
			Global_113386.f_19097.f_22[0]++;
			func_56("Fares Completed ++ = ", Global_113386.f_19097.f_22[0]);
			break;
		
		case 1:
			Global_113386.f_19097.f_22[1]++;
			func_56("Fares Failed ++ = ", Global_113386.f_19097.f_22[1]);
			break;
		
		case 2:
			Global_113386.f_19097.f_22[2]++;
			func_56("Fares Accepted ++ ", Global_113386.f_19097.f_22[2]);
			break;
		
		case 3:
			Global_113386.f_19097.f_22[3]++;
			func_56("Fares Expired ++ ", Global_113386.f_19097.f_22[3]);
			break;
		
		case 13:
			Global_113386.f_19097.f_22[13]++;
			func_56("Passengers run ++ = ", Global_113386.f_19097.f_22[13]);
			break;
		
		case 14:
			Global_113386.f_19097.f_22[14]++;
			func_56("Passenger Forced to Pay ++ = ", Global_113386.f_19097.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_113386.f_19097.f_22[4])
				{
					Global_113386.f_19097.f_22[4] = iParam1;
					func_56("This distance ", iParam1);
					func_56(" is longer than current best", Global_113386.f_19097.f_22[4]);
				}
				else
				{
					func_56("Longest Distance Not Beat ", Global_113386.f_19097.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_113386.f_19097.f_22[5] = (Global_113386.f_19097.f_22[5] + iParam1);
			func_56("Total Distance w/ Passenger = ", Global_113386.f_19097.f_22[5]);
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
			func_56("Wanted Levels ++ = ", Global_113386.f_19097.f_22[6]);
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
			func_56("Wanted Levels Lost = ", Global_113386.f_19097.f_22[7]);
			break;
		
		case 8:
			Global_113386.f_19097.f_22[8]++;
			func_56("Taxis wrecked ++ = ", Global_113386.f_19097.f_22[8]);
			break;
		
		case 9:
			Global_113386.f_19097.f_22[9]++;
			func_56("Horn Honked ++ = ", Global_113386.f_19097.f_22[9]);
			break;
		
		case 10:
			Global_113386.f_19097.f_22[10] = (Global_113386.f_19097.f_22[10] + iParam1);
			func_56("Total Money Earned = ", Global_113386.f_19097.f_22[10]);
			break;
		
		case 11:
			Global_113386.f_19097.f_22[11] = (Global_113386.f_19097.f_22[11] + iParam1);
			func_56("Total Tips Earned = ", Global_113386.f_19097.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_113386.f_19097.f_22[12])
			{
				Global_113386.f_19097.f_22[12] = iParam1;
				func_56("New Highest Tip = ", Global_113386.f_19097.f_22[12]);
			}
			else
			{
				func_56("Highest Tip Not Reached = ", Global_113386.f_19097.f_22[12]);
			}
			break;
	}
}

void func_56(char* sParam0, int iParam1)//Position - 0x2221
{
}

void func_57(int iParam0)//Position - 0x2229
{
	func_55(0, 0);
	if (iParam0->f_411 != 9)
	{
		func_462(1);
		func_69(15, 1);
	}
	func_67(&(Global_113386.f_19097), 1024);
	if (!func_22(Global_113386.f_19097, 64))
	{
		func_58(func_65(func_66(iParam0)), 0, 0);
	}
}

void func_58(int iParam0, int iParam1, int iParam2)//Position - 0x227D
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
		func_64((891 + iParam0), 1, -1);
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
		func_59();
	}
}

void func_59()//Position - 0x2363
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
		func_63(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_62() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_60();
				}
			}
		}
	}
}

int func_60()//Position - 0x2821
{
	if (func_61(0))
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

int func_61(bool bParam0)//Position - 0x286C
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_62()//Position - 0x2894
{
	return Global_31959;
}

int func_63(int iParam0, int iParam1)//Position - 0x289F
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

void func_64(int iParam0, bool bParam1, int iParam2)//Position - 0x28F0
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_65(int iParam0)//Position - 0x290E
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

int func_66(var uParam0)//Position - 0x29A4
{
	return uParam0->f_411;
}

void func_67(var uParam0, int iParam1)//Position - 0x29B1
{
	func_68(uParam0, iParam1);
}

void func_68(var uParam0, int iParam1)//Position - 0x29C1
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_69(int iParam0, int iParam1)//Position - 0x29D2
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_70(iParam0, iParam1);
}

int func_70(int iParam0, int iParam1)//Position - 0x29ED
{
	if (func_82(14) && !func_81(iParam0))
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
	if (func_80(&Global_4541529))
	{
		if (func_78(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_71(&Global_4541529, iParam0))
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

int func_71(var uParam0, int iParam1)//Position - 0x2A8A
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_82(14) && !func_81(iParam1))
	{
		return 0;
	}
	if (func_78(uParam0, iParam1))
	{
		return 0;
	}
	if (func_77(uParam0) < 0f)
	{
		func_76(uParam0, 0);
	}
	func_74(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_72(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_72(var uParam0, int iParam1)//Position - 0x2B3B
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_82(14) && !func_81(iParam1))
	{
		return 0;
	}
	if (func_78(uParam0, iParam1))
	{
		return 0;
	}
	if (func_77(uParam0) < 0f)
	{
		func_76(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_73(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_73(var uParam0, int iParam1)//Position - 0x2BB6
{
	return (*uParam0)[iParam1] == 78;
}

void func_74(var uParam0)//Position - 0x2BC7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_75(uParam0, iVar0);
		iVar0++;
	}
	func_76(uParam0, (Global_4541528 - 0.5f));
}

void func_75(var uParam0, int iParam1)//Position - 0x2BFB
{
	(*uParam0)[iParam1] = 78;
}

void func_76(var uParam0, float fParam1)//Position - 0x2C0B
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

float func_77(var uParam0)//Position - 0x2C28
{
	return uParam0->f_80;
}

bool func_78(var uParam0, int iParam1)//Position - 0x2C34
{
	return func_79(uParam0, iParam1) != -1;
}

int func_79(var uParam0, int iParam1)//Position - 0x2C46
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

bool func_80(var uParam0)//Position - 0x2C73
{
	return uParam0->f_79 == 1;
}

int func_81(int iParam0)//Position - 0x2C81
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

bool func_82(int iParam0)//Position - 0x2CD1
{
	return Global_43052 == iParam0;
}

int func_83(int iParam0, var uParam1)//Position - 0x2CDF
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_211() && func_116(iParam0, 0) > 1f)
			{
				if (func_33())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				func_115(iParam0);
				func_20(&(Global_113386.f_19097), 4096);
				func_112(uParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, func_114(iParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_111(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_105(uParam1, 0))
			{
				func_84(iParam0);
				func_317(iParam0, 0, 0, 0);
				func_111(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_84(int iParam0)//Position - 0x2DB1
{
	int iVar0;
	
	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		func_85(func_103(), 21, iVar0, 0, 0);
		func_55(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_85(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2DEF
{
	int iVar0;
	int iVar1;
	
	if (func_102(iParam0) == 3)
	{
		return;
	}
	if (func_102(iParam0) == 4)
	{
		return;
	}
	func_86(func_102(iParam0), 1, iParam1, iParam2, 0);
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

int func_86(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2EC1
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_101();
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
					func_100(99, 1);
					func_99(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_99(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_99(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_98(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_95(5))
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
							func_99(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_95(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_99(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_property"), iParam3);
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
									func_99(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_95(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_94(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_100(95, iParam3);
					break;
				
				case 1:
					func_100(97, iParam3);
					break;
				
				case 2:
					func_100(96, iParam3);
					break;
			}
			func_100(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_89(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_89(bVar1);
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
					func_99(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_99(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_99(joaat("sp2_total_cash_earned"), iParam3);
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
	func_88(iParam0);
	if (Global_43052 == 15)
	{
		func_87(0);
	}
	return 1;
}

void func_87(bool bParam0)//Position - 0x34C0
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

void func_88(int iParam0)//Position - 0x3742
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

void func_89(bool bParam0)//Position - 0x379C
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_64(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_64(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_64(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_64(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_92(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_92(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_92(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_92(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_92(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_92(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_91() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_91() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_90(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_90(bool bParam0)//Position - 0x391C
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

int func_91()//Position - 0x3A1F
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_92(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3A2C
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_93(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_93(var uParam0)//Position - 0x3A5C
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

void func_94(int iParam0)//Position - 0x3A90
{
	func_100(93, iParam0);
	func_100(29, iParam0);
	func_100(30, iParam0);
}

int func_95(int iParam0)//Position - 0x3AB0
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
		return func_97(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_97(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_97(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_97(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_96(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_96(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_96(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_96(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_96(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_96(8277, -1, 0);
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
	return BitTest(Global_2359296[func_91() /*5567*/].f_681.f_10, iParam0);
}

int func_96(int iParam0, int iParam1, int iParam2)//Position - 0x3C56
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_93(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_97(int iParam0, int iParam1)//Position - 0x3C93
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_98(bool bParam0)//Position - 0x3CAF
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
		func_63(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_69(27, 1);
	return 1;
}

void func_99(int iParam0, int iParam1)//Position - 0x3D66
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_100(int iParam0, int iParam1)//Position - 0x3D89
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

void func_101()//Position - 0x3DE6
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

int func_102(int iParam0)//Position - 0x3E5B
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_103()//Position - 0x3E6C
{
	func_104();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_104()//Position - 0x3E85
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_4(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_3(PLAYER::PLAYER_PED_ID());
			if (func_6(iVar0) && (!func_82(14) || Global_112337))
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

int func_105(var uParam0, int iParam1)//Position - 0x3F82
{
	if (!func_14(&(uParam0->f_2)))
	{
		func_109(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_14(&(uParam0->f_5)))
			{
				func_109(&(uParam0->f_5));
				func_108(uParam0, 1051260355);
			}
		}
		if (func_14(&(uParam0->f_5)))
		{
			if (func_107(&(uParam0->f_5)) > 0.33f)
			{
				func_106(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_107(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_14(&(uParam0->f_5)))
		{
			func_109(&(uParam0->f_5));
			func_108(uParam0, 1051260355);
		}
		else if (func_107(&(uParam0->f_5)) > 0.33f)
		{
			func_106(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_106(var uParam0)//Position - 0x4086
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_107(var uParam0)//Position - 0x409C
{
	if (func_14(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_108(var uParam0, float fParam1)//Position - 0x40D8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_109(int* iParam0)//Position - 0x40FE
{
	func_110(iParam0, 0f);
}

void func_110(int* iParam0, float fParam1)//Position - 0x410D
{
	iParam0->f_1 = (func_12(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_111(int iParam0)//Position - 0x4138
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

void func_112(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x414C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, func_113());
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
	func_109(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_113()//Position - 0x41B7
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_114(int iParam0)//Position - 0x41D1
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

void func_115(int iParam0)//Position - 0x426C
{
	int iVar0;
	
	Local_161.f_1 = SYSTEM::TO_FLOAT(iParam0->f_50);
	Local_161.f_2 = SYSTEM::TO_FLOAT(iParam0->f_56);
	func_55(11, iParam0->f_56);
	func_55(12, iParam0->f_56);
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

float func_116(int iParam0, int iParam1)//Position - 0x4318
{
	if (!func_14(&(iParam0->f_146[iParam1 /*3*/])))
	{
		func_117(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return func_107(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_117(int* iParam0)//Position - 0x4348
{
	if (!func_14(iParam0))
	{
		func_109(iParam0);
	}
}

void func_118(int iParam0)//Position - 0x4360
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
		func_67(&(iParam0->f_55), 1);
	}
}

void func_119(int iParam0)//Position - 0x43D4
{
	func_121();
	HUD::CLEAR_PRINTS();
	if (iParam0->f_56 < iParam0->f_58)
	{
		if (iParam0->f_411 == 0)
		{
			func_254(iParam0, 105, 1, 0, 0);
		}
		else
		{
			func_254(iParam0, 103, 1, 0, 0);
		}
		func_120(1);
	}
	else if (iParam0->f_56 >= iParam0->f_59)
	{
		func_254(iParam0, 101, 1, 0, 0);
	}
	else
	{
		func_254(iParam0, 102, 1, 0, 0);
	}
	func_317(iParam0, 16, 4f, 0);
}

void func_120(int iParam0)//Position - 0x4447
{
	Global_112096.f_221 = iParam0;
}

void func_121()//Position - 0x4457
{
	Global_20471 = 0;
	func_122();
}

void func_122()//Position - 0x4467
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

void func_123(var uParam0)//Position - 0x448B
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_124(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_55(4, SYSTEM::CEIL(fVar0));
	func_55(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_124(float fParam0)//Position - 0x44DD
{
	return (fParam0 * 0.0006213712f);
}

void func_125(var uParam0, int iParam1)//Position - 0x44ED
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_126(var uParam0, bool bParam1, float fParam2)//Position - 0x451B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (func_43(1))
			{
				func_41(0);
			}
			if (func_33())
			{
				func_129();
				return 1;
			}
			else if (func_127(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
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

int func_127(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x459C
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
	func_128(iParam0);
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

void func_128(int iParam0)//Position - 0x4734
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

void func_129()//Position - 0x4760
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	}
}

int func_130(struct<3> Param0, bool bParam1)//Position - 0x477D
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_131(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_131(bool bParam0, float fParam1, float fParam2)//Position - 0x47A9
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_132(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x47C0
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
			{
				if (PED::IS_PED_BEING_JACKED(iParam1))
				{
					if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
					{
						if (Local_238.f_109 == 0)
						{
							func_361(&Local_238, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (PED::IS_PED_INJURED(iParam1))
		{
			if (bParam3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_257);
					TASK::TASK_SMART_FLEE_PED(iLocal_257, PLAYER::PLAYER_PED_ID(), 100f, 20000, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_257, true);
				}
				func_361(iParam0, "Target injured.", 13);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
				{
					TASK::CLEAR_PED_TASKS(Local_251.f_2);
					TASK::TASK_SMART_FLEE_PED(Local_251.f_2, PLAYER::PLAYER_PED_ID(), 100f, 20000, false, false);
					PED::SET_PED_KEEP_TASK(Local_251.f_2, true);
				}
				func_361(iParam0, "Mistress injured.", 14);
			}
		}
		else if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
		{
			if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_257);
					TASK::TASK_SMART_FLEE_PED(iLocal_257, PLAYER::PLAYER_PED_ID(), 100f, 20000, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_257, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
				{
					TASK::CLEAR_PED_TASKS(Local_251.f_2);
					TASK::TASK_SMART_FLEE_PED(Local_251.f_2, PLAYER::PLAYER_PED_ID(), 100f, 20000, false, false);
					PED::SET_PED_KEEP_TASK(Local_251.f_2, true);
				}
				func_361(iParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

void func_133(int iParam0, float* fParam1)//Position - 0x4956
{
	STATS::STAT_GET_FLOAT(iParam0->f_428, fParam1, -1);
	iParam0->f_41 = (*fParam1 - iParam0->f_42);
}

int func_134()//Position - 0x4977
{
	struct<3> Var0;
	
	func_154();
	if (iLocal_416 < 3 && iLocal_416 > 0)
	{
		if (func_150(iLocal_264))
		{
			iLocal_416 = 3;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_257))
	{
		if (!PED::IS_PED_INJURED(iLocal_257))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_257, true) };
		}
	}
	switch (iLocal_416)
	{
		case 0:
			if (func_149(1, 1, 1) && !Local_238.f_142)
			{
				iLocal_264 = MISC::GET_GAME_TIMER();
				func_147(&uLocal_355);
				func_146(&Local_352, -1, 1);
				func_251(Local_299, 0, 15f);
				func_251(Local_300, 0, 15f);
				func_145(&Local_238, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				func_144();
				func_317(&Local_238, 19, 0, 0);
				iLocal_416 = 1;
			}
			else
			{
				func_143("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_238.f_78), 1000);
			}
			break;
		
		case 1:
			if (func_116(&Local_238, 19) > 0.5f)
			{
				func_142(0, 0, 1);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_299, 30f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_300, 30f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_299, 30f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_300, 30f, 0);
				func_140(Local_299, 1114636288, 1);
				func_140(Local_300, 1114636288, 1);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_293, Local_294, false, true);
				func_254(&Local_238, 35, 1, 1, 0);
				CAM::SET_CAM_COORD(Local_238.f_0, func_139(0));
				CAM::SET_CAM_ROT(Local_238.f_0, func_138(0), 2);
				CAM::SET_CAM_FOV(Local_238.f_0, 44.5167f);
				CAM::SHAKE_CAM(Local_238.f_0, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(Local_238.f_0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
				{
					ENTITY::SET_ENTITY_COORDS(Local_251.f_3, Local_298, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_251.f_3, fLocal_304);
					if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(&cLocal_309, Local_298, &iLocal_266))
					{
					}
					if (TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_309, iLocal_266, &uLocal_295))
					{
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_251.f_2, Local_251.f_3, &cLocal_309, iLocal_397, iLocal_266 + 4, 0, -1, -1f, false, 2f);
					}
				}
				func_317(&Local_238, 19, 0, 0);
				iLocal_416 = 2;
			}
			break;
		
		case 2:
			if (func_116(&Local_238, 19) > 5f)
			{
				func_317(&Local_238, 19, 0, 0);
				iLocal_416 = 4;
			}
			else if (func_116(&Local_238, 19) > 4.7f)
			{
				if (func_137())
				{
					if (!iLocal_282)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_282 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_251.f_3, Local_285, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_251.f_3, fLocal_307);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_251.f_3);
			}
			func_317(&Local_238, 19, 0, 0);
			iLocal_416 = 4;
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_238.f_4, false))
			{
				Local_238.f_141 = 0;
				CAM::DO_SCREEN_FADE_IN(800);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
				{
					ENTITY::SET_ENTITY_COORDS(Local_251.f_3, Local_285, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_251.f_3, fLocal_307);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_251.f_3);
					if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_251.f_2);
						ENTITY::SET_ENTITY_COORDS(Local_251.f_2, -691.1571f, -1117.732f, 13.52498f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_251.f_2, -49.27436f);
					}
				}
				CAM::DESTROY_CAM(Local_238.f_0, false);
				CAM::DESTROY_CAM(iLocal_237, false);
				func_135(1, 1, 1);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					SYSTEM::WAIT(0);
				}
				func_208(&Local_238, 19, 0);
				iLocal_416 = 5;
				return 1;
			}
			break;
	}
	return 0;
}

void func_135(bool bParam0, bool bParam1, int iParam2)//Position - 0x4D7E
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
	func_136(23, 0);
}

void func_136(int iParam0, bool bParam1)//Position - 0x4DBC
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

int func_137()//Position - 0x4DDE
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		return 1;
	}
	return 0;
}

Vector3 func_138(int iParam0)//Position - 0x4DF7
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1.9027f, 0f, 170.5764f };
			break;
	}
	return Var0;
}

Vector3 func_139(int iParam0)//Position - 0x4E22
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -686.0368f, -1073.22f, 16.1762f };
			break;
	}
	return Var0;
}

void func_140(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x4E51
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, &Var1, &fVar0, 1, 3f, 0);
	Var2 = { func_38(Var1, func_141(fVar0), fParam1, fParam1, 5f) };
	Var3 = { func_38(Var1, fVar0, fParam1, fParam1, -5f) };
	Var3.f_2 = (Var3.f_2 - 22f);
	Var2.f_2 = (Var2.f_2 + 22f);
	if (bParam2)
	{
		PATHFIND::SET_ROADS_IN_AREA(Var3, Var2, false, true);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var3, Var2, 1);
	}
}

float func_141(float fParam0)//Position - 0x4EDA
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

void func_142(int iParam0, bool bParam1, int iParam2)//Position - 0x4F03
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(bParam1);
	func_41(0);
	func_23(1, 1, iParam2, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_136(23, 1);
}

void func_143(char* sParam0, int iParam1, int iParam2)//Position - 0x4F5C
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

void func_144()//Position - 0x4F7B
{
	int iVar0;
	
	iLocal_257 = PED::CREATE_PED(26, iLocal_254, Local_291, fLocal_303, true, true);
	PED::SET_PED_MAX_HEALTH(iLocal_257, 5);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_257, 3, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_257, 4, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_257, 2, 1, 2, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_257, 20, true);
	func_8(&(Local_238.f_244), 5, iLocal_257, "TaxiCarrie", 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_257, fLocal_303);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_STAND_STILL(0, 2500);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1.5f, 2000, 0, 0f, false, false, false);
		TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Local_292, 1f, 0, false, 786603, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_257, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_145(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x5053
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Param1, Param2, fParam3, false, 2);
	}
}

void func_146(var uParam0, int iParam1, bool bParam2)//Position - 0x507E
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

void func_147(var uParam0)//Position - 0x50A2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_148(), 24);
		iVar0++;
	}
	HUD::CLEAR_PRINTS();
	func_48();
}

var func_148()//Position - 0x50E2
{
	var uVar0;
	
	return uVar0;
}

int func_149(bool bParam0, bool bParam1, bool bParam2)//Position - 0x50EC
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

int func_150(int iParam0)//Position - 0x51D1
{
	if (func_153() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_41(0);
		func_151();
		return 1;
	}
	return 0;
}

void func_151()//Position - 0x5214
{
	Global_20471 = 0;
	func_152();
}

void func_152()//Position - 0x5224
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

int func_153()//Position - 0x527B
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

void func_154()//Position - 0x52AD
{
	if (func_35())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (func_34())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (func_43(1))
	{
		func_41(0);
	}
}

int func_155()//Position - 0x52E0
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_254))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MOVE_DUCK_FOR_COVER"))
	{
		func_143("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_263, 1000);
		return 0;
	}
	return 1;
}

void func_156()//Position - 0x5316
{
	STREAMING::REQUEST_MODEL(iLocal_254);
	STREAMING::REQUEST_ANIM_DICT("MOVE_DUCK_FOR_COVER");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_312);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_321);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_330);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_339);
}

void func_157(var uParam0, int iParam1, bool bParam2)//Position - 0x5349
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2815059.f_4660, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_158(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_158(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

bool func_158(char* sParam0)//Position - 0x5423
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_159()//Position - 0x5436
{
	if (func_116(&Local_238, 20) > 2f)
	{
		if (!Local_238.f_142)
		{
			func_188(&Local_238, &Local_251, (MISC::GET_GAME_TIMER() - iLocal_308) > 15000, 0);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_238.f_4, false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_238.f_4, Local_348, Local_349, fLocal_350, false, true, 0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(Local_238.f_4, 5f, 1, false);
				return 1;
			}
		}
		func_160(&uLocal_45, Local_251.f_3, 0, 0, 1, 1, 1);
		func_133(&Local_238, &(Local_238.f_43));
		if (!iLocal_270)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_251.f_3) && IntToFloat((MISC::GET_GAME_TIMER() - iLocal_308)) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(120, "txm_fc_h1_"))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_251.f_2, Local_251.f_3, Local_298, 28f, 0, Local_251.f_1, iLocal_396, 13.75f, -1f);
					iLocal_270 = 1;
				}
			}
		}
	}
	return 0;
}

void func_160(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x5535
{
	func_161(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_161(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x554F
{
	uParam0->f_6 = 0;
	func_162(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_162(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x5571
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_158(iVar0))
	{
		func_187();
	}
	if (func_186(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_181(uParam0, bParam5, bParam7, 0))
			{
				func_178(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_167(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_158(iVar0))
							{
								func_166(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_165(1);
								}
							}
						}
					}
				}
			}
			else if (func_167(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_158(iVar0))
						{
							func_166(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_165(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam3))
			{
				if (func_158(sParam3))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_157(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_157(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_157(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_157(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_157(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_157(uParam0, iVar0, 1);
				}
			}
			if (!func_181(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_164(uParam0))
				{
					func_163(uParam0);
				}
			}
		}
	}
	else
	{
		func_157(uParam0, iVar0, 0);
	}
}

void func_163(var uParam0)//Position - 0x58DE
{
	if (func_186(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_164(var uParam0)//Position - 0x5947
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_165(bool bParam0)//Position - 0x5972
{
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113386.f_10049.f_100++;
			}
			return Global_113386.f_10049.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113386.f_10049.f_101++;
			}
			return Global_113386.f_10049.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113386.f_10049.f_102++;
			}
			return Global_113386.f_10049.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_166(char* sParam0, int iParam1)//Position - 0x5A1C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_167(char* sParam0)//Position - 0x5A33
{
	if (!func_168(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_158(sParam0)) || func_158("CMN_HINT"))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (func_165(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_165(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_165(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_168(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5ACC
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60335)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_176() || func_175(Global_4718592.f_168757)) || func_174())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_173(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_172(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_169(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_169(int iParam0)//Position - 0x5D25
{
	if (iParam0 != func_171())
	{
		if (func_170(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == PLAYER::PLAYER_ID()) && func_170(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_170(int iParam0, bool bParam1, bool bParam2)//Position - 0x5D8B
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

int func_171()//Position - 0x5DEB
{
	return -1;
}

int func_172(int iParam0, int iParam1)//Position - 0x5DF4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_173(int iParam0, bool bParam1)//Position - 0x5E56
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

var func_174()//Position - 0x5EDB
{
	return Global_2714762.f_19;
}

bool func_175(int iParam0)//Position - 0x5EE9
{
	return iParam0 == 51;
}

var func_176()//Position - 0x5EF6
{
	return Global_2714762.f_18;
}

bool func_177()//Position - 0x5F04
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

void func_178(var uParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x5F19
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581357 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_157(uParam0, 0, 0);
	}
	if (func_39(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_179())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, true, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_179()//Position - 0x6029
{
	return func_180(PLAYER::PLAYER_ID());
}

int func_180(int iParam0)//Position - 0x6039
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_181(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x6058
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_185(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_184(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_184(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_185(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_164(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_185(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_184(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_184(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_185(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!func_185(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_184(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_184(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_185(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (func_183(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_182(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_182(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_183(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_164(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_168(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_187();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_182(bool bParam0, bool bParam1, bool bParam2)//Position - 0x63C4
{
	if (!func_168(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_183(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6416
{
	if (!func_168(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_184(bool bParam0, bool bParam1, bool bParam2)//Position - 0x645F
{
	if (!func_168(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_185(bool bParam0, bool bParam1, bool bParam2)//Position - 0x64BE
{
	if (!func_168(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_186(int iParam0)//Position - 0x6514
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_187()//Position - 0x656F
{
	MISC::SET_BIT(&Global_8137, 4);
}

void func_188(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x657F
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_2, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_2, PLAYER::PLAYER_PED_ID(), false))
		{
			func_361(iParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		func_361(iParam0, "Followee died", 13);
	}
	if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false)) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2, false))
	{
		TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, true);
		PED::SET_PED_KEEP_TASK(uParam1->f_2, true);
		func_361(iParam0, "Player went wanted", 4);
	}
	func_197(iParam0, uParam1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam3)
		{
			if (func_196(&(uParam1->f_3)))
			{
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam1->f_3, true), 22.5f, 255, 0, 0, 60);
			}
			else if (func_195(&(uParam1->f_3)))
			{
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam1->f_3, true), func_194(&(uParam1->f_3)), 255, 0, 0, 60);
			}
			else if (func_193(&(uParam1->f_3)))
			{
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam1->f_3, true), 13f, 125, 0, 125, 60);
			}
		}
		if ((VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam1->f_3) < uParam1->f_15 || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_3, PLAYER::PLAYER_PED_ID(), true)) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(uParam1->f_3) < uParam1->f_16)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_3, PLAYER::PLAYER_PED_ID(), false))
			{
				func_361(iParam0, "Taxi shot up the car", 12);
			}
			if (func_116(iParam0, 13) > 5f)
			{
				func_192(iParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_15 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam1->f_3);
				uParam1->f_5 = ENTITY::GET_ENTITY_HEALTH(uParam1->f_3);
				uParam1->f_16 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(uParam1->f_3);
			}
		}
		if (func_51(iParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (func_51(iParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				func_254(iParam0, 143, 0, 0, 0);
				func_361(iParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_21)
			{
				if ((func_191(&(iParam0->f_409), ENTITY::GET_ENTITY_COORDS(iParam0->f_4, true), ENTITY::GET_ENTITY_COORDS(uParam1->f_3, true), 0) == -1 && func_51(iParam0->f_4, uParam1->f_3, 1) >= 150f) && func_116(iParam0, 8) > 10f)
				{
					uParam1->f_21 = 1;
					uParam1->f_23 = 0;
					uParam1->f_9++;
					func_317(iParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2, false))
						{
							TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, true);
							PED::SET_PED_KEEP_TASK(uParam1->f_2, true);
						}
						func_361(iParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						func_190(iParam0, 6, 1);
					}
					else
					{
						func_190(iParam0, 1, 1);
					}
					func_254(iParam0, 13, 1, 0, 0);
				}
			}
			else if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_21 = 0;
				func_317(iParam0, 8, 0, 0);
			}
			else if (func_51(iParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				func_254(iParam0, 143, 0, 0, 0);
				func_361(iParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((func_51(iParam0->f_4, uParam1->f_3, 1) < 22.5f && func_196(&(uParam1->f_3))) || (func_51(iParam0->f_4, uParam1->f_3, 1) < 13f && func_193(&(uParam1->f_3)))) || (func_51(iParam0->f_4, uParam1->f_3, 1) < func_194(&(uParam1->f_3)) && func_195(&(uParam1->f_3))))
		{
			if (!uParam1->f_22 || func_189(iParam0, 21))
			{
				if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0->f_4, uParam1->f_3, 17) && func_116(iParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_22 = 1;
					uParam1->f_23 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					func_317(iParam0, 8, 0, 0);
					if (!func_189(iParam0, 21))
					{
						func_317(iParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!func_211())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2, false))
							{
								TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, true);
								PED::SET_PED_KEEP_TASK(uParam1->f_2, true);
							}
							func_361(iParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_151();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						func_190(iParam0, 3, 1);
					}
					else
					{
						func_190(iParam0, 2, 1);
					}
					if (func_51(iParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!func_211())
						{
							func_254(iParam0, 143, 0, 0, 0);
							func_48();
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2, false))
							{
								TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, true);
								PED::SET_PED_KEEP_TASK(uParam1->f_2, true);
							}
							func_361(iParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_151();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						func_254(iParam0, 13, 1, 0, 0);
					}
					uParam1->f_15 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam1->f_3);
				}
			}
		}
		else
		{
			if (func_189(iParam0, 21))
			{
				func_208(iParam0, 21, 0);
			}
			if (uParam1->f_22)
			{
				if (func_51(iParam0->f_4, uParam1->f_3, 1) > 22.5f)
				{
					uParam1->f_22 = 0;
					func_317(iParam0, 8, 0, 0);
				}
			}
			if (uParam1->f_21)
			{
				if (func_51(iParam0->f_4, uParam1->f_3, 1) < 150f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0->f_4, uParam1->f_3, 17))
				{
					uParam1->f_21 = 0;
					func_317(iParam0, 8, 0, 0);
				}
			}
			if (!uParam1->f_23)
			{
				if (!uParam1->f_21 && !uParam1->f_22)
				{
					uParam1->f_23 = 1;
					func_190(iParam0, 8, 1);
					func_254(iParam0, 13, 1, 0, 0);
					func_317(iParam0, 8, 0, 0);
				}
			}
			else
			{
				if (iParam0->f_80 > iParam0->f_101)
				{
					uParam1->f_24 = 1;
				}
				if ((!uParam1->f_24 && !uParam1->f_21) && !uParam1->f_22)
				{
					if (func_116(iParam0, 8) > 15f && !func_211())
					{
						func_190(iParam0, 9, 1);
						func_254(iParam0, 13, 1, 0, 0);
						func_317(iParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}

bool func_189(int iParam0, int iParam1)//Position - 0x6C2A
{
	return func_14(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_190(int iParam0, int iParam1, bool bParam2)//Position - 0x6C3E
{
	iParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

int func_191(var uParam0, struct<3> Param1, struct<3> Param2, bool bParam3)//Position - 0x6C52
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

void func_192(int iParam0, var uParam1, bool bParam2)//Position - 0x6CCC
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!func_211())
		{
			func_279(iParam0, 0, 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2, false))
			{
				TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, true);
				PED::SET_PED_KEEP_TASK(uParam1->f_2, true);
			}
			func_361(iParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			func_151();
		}
	}
	else
	{
		func_317(iParam0, 13, 0, 0);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam1->f_3);
		func_190(iParam0, 10, 1);
		func_279(iParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

int func_193(var uParam0)//Position - 0x6D87
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(*uParam0) || ENTITY::GET_ENTITY_SPEED(*uParam0) < 4f)
		{
			return 1;
		}
	}
	return 0;
}

float func_194(var uParam0)//Position - 0x6DB8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 22.5f;
	fVar3 = 13f;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

int func_195(var uParam0)//Position - 0x6DF9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(*uParam0) >= 4f && ENTITY::GET_ENTITY_SPEED(*uParam0) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_196(var uParam0)//Position - 0x6E2F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(*uParam0) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_197(int iParam0, var uParam1)//Position - 0x6E57
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_51(iParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (iParam0->f_414 == 6 || iParam0->f_414 == 1)
			{
				if (func_198(iParam0) == 13)
				{
					func_121();
				}
			}
		}
		if (func_51(iParam0->f_4, uParam1->f_3, 1) >= 22.5f)
		{
			if (iParam0->f_414 == 3 || iParam0->f_414 == 2)
			{
				if (func_198(iParam0) == 13)
				{
					func_121();
				}
			}
		}
	}
}

int func_198(int iParam0)//Position - 0x6EF1
{
	return iParam0->f_416;
}

void func_199(int iParam0, struct<3> Param1, float fParam2, var uParam3, int iParam4)//Position - 0x6EFE
{
	if (!func_211())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_53(iParam0, Param1, 1) < fParam2)
			{
				if (func_201(uParam3))
				{
					func_200(uParam3, iParam4, -1);
				}
			}
		}
	}
}

void func_200(var uParam0, int iParam1, int iParam2)//Position - 0x6F3B
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

bool func_201(var uParam0)//Position - 0x6F54
{
	return *uParam0 == 0;
}

void func_202(int iParam0)//Position - 0x6F61
{
	if (func_205(iParam0))
	{
		func_203(iParam0);
	}
}

void func_203(var uParam0)//Position - 0x6F78
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_208(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_116(uParam0, 20) > 3f)
				{
					func_254(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_22(uParam0->f_81, 262144) || !func_22(uParam0->f_81, 1048576))
				{
					if (func_116(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_254(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (func_116(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_254(uParam0, 85, 1, 0, 0);
						func_208(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_116(uParam0, 20) > 8f)
				{
					func_254(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_22(uParam0->f_81, 262144) || func_22(uParam0->f_82, 67108864))
			{
				if (!func_189(uParam0, 22))
				{
					func_204(uParam0, 22);
				}
			}
			if (func_189(uParam0, 22) && func_116(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_22(uParam0->f_81, 1048576))
					{
						func_254(uParam0, 84, 1, 0, 0);
						func_208(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_22(uParam0->f_82, 134217728))
					{
						func_254(uParam0, 85, 1, 0, 0);
						func_208(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_204(var uParam0, int iParam1)//Position - 0x71F3
{
	func_117(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_205(var uParam0)//Position - 0x7207
{
	return uParam0->f_120;
}

int func_206(int iParam0, int iParam1)//Position - 0x7213
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), false);
					if (HUD::DOES_BLIP_EXIST(iParam1))
					{
						HUD::REMOVE_BLIP(&iParam1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_207(int iParam0)//Position - 0x7271
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

void func_208(int iParam0, int iParam1, bool bParam2)//Position - 0x729B
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
			func_106(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_106(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_209(int iParam0, int iParam1)//Position - 0x72E4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_210()//Position - 0x7305
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 402.42f, -1457.19f, 28.82f };
	Var1 = { -701.25f, -1080.29f, 12.29f };
	if (Var1.f_0 <= Var0.f_0)
	{
		Local_301.f_0 = Var1.f_0;
		Local_302.f_0 = Var0.f_0;
	}
	else
	{
		Local_301.f_0 = Var0.f_0;
		Local_302.f_0 = Var1.f_0;
	}
	if (Var1.f_1 <= Var0.f_1)
	{
		Local_301.f_1 = Var1.f_1;
		Local_302.f_1 = Var0.f_1;
	}
	else
	{
		Local_301.f_1 = Var0.f_1;
		Local_302.f_1 = Var1.f_1;
	}
	Local_301 = { Local_301 - Vector(20f, 20f, 20f) };
	Local_302 = { Local_302 + Vector(20f, 20f, 20f) };
	PATHFIND::REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_301.f_0, Local_301.f_1, Local_302.f_0, Local_302.f_1);
}

int func_211()//Position - 0x73CE
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_212()//Position - 0x73F0
{
	func_154();
	if (iLocal_417 < 9 && iLocal_417 > 2)
	{
		if (func_150(iLocal_264))
		{
			iLocal_417 = 9;
		}
	}
	switch (iLocal_417)
	{
		case 0:
			if (func_149(1, 1, 1))
			{
				iLocal_264 = MISC::GET_GAME_TIMER();
				func_142(256, 0, 1);
				func_147(&uLocal_355);
				func_146(&Local_352, 2, 0);
				if (func_218(&Local_251, Local_289, fLocal_306))
				{
					PATHFIND::SET_ROADS_IN_AREA(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, true, true);
					func_145(&Local_238, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
					func_254(&Local_238, 138, 1, 0, 0);
					iLocal_417 = 1;
				}
			}
			break;
		
		case 1:
			if (func_116(&Local_238, 19) > 3f)
			{
				if (!PED::IS_PED_INJURED(Local_251.f_2))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251.f_2, true);
					TASK::CLEAR_PED_TASKS(Local_251.f_2);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_ENTER_VEHICLE(0, Local_251.f_3, 20000, -1, 1f, 1, 0);
						TASK::TASK_PLAY_ANIM(0, "veh@truck@ds@base", "start_engine", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(Local_251.f_2, iLocal_232);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_251.f_3, 1);
					}
				}
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_238.f_17);
				CAM::SET_CAM_COORD(Local_238.f_0, func_217(0));
				CAM::SET_CAM_ROT(Local_238.f_0, func_216(0), 2);
				CAM::SET_CAM_FOV(Local_238.f_0, 17.2f);
				CAM::SHAKE_CAM(Local_238.f_0, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(Local_238.f_0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				func_317(&Local_238, 19, 0, 0);
				iLocal_417 = 2;
			}
			break;
		
		case 2:
			iLocal_237 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
			CAM::SET_CAM_COORD(iLocal_237, func_217(4));
			CAM::SET_CAM_ROT(iLocal_237, func_216(0), 2);
			CAM::SET_CAM_FOV(iLocal_237, 17.2f);
			CAM::SHAKE_CAM(iLocal_237, "HAND_SHAKE", 0.1f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_237, Local_238.f_0, 6000, 1, 1);
			func_317(&Local_238, 19, 0, 0);
			iLocal_417 = 3;
			break;
		
		case 3:
			if (func_116(&Local_238, 19) > 7.85f && !iLocal_279)
			{
				if (func_198(&Local_238) > 10)
				{
					func_213();
				}
				iLocal_279 = 1;
			}
			if (func_116(&Local_238, 19) > 8f && iLocal_279)
			{
				CAM::SET_CAM_COORD(Local_238.f_0, func_217(2));
				CAM::POINT_CAM_AT_ENTITY(Local_238.f_0, Local_251.f_3, 0f, 0f, 0f, true);
				CAM::SET_CAM_FOV(Local_238.f_0, 35f);
				CAM::SHAKE_CAM(Local_238.f_0, "HAND_SHAKE", 0.2f);
				CAM::SET_CAM_ACTIVE(Local_238.f_0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				func_317(&Local_238, 19, 0, 0);
				iLocal_417 = 4;
			}
			break;
		
		case 4:
			CAM::SET_CAM_COORD(iLocal_237, func_217(2));
			CAM::POINT_CAM_AT_ENTITY(iLocal_237, Local_251.f_3, 0f, 0f, 0f, true);
			CAM::SET_CAM_FOV(iLocal_237, 45f);
			CAM::SHAKE_CAM(iLocal_237, "HAND_SHAKE", 0.2f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_237, Local_238.f_0, 10000, 1, 1);
			func_317(&Local_238, 19, 0, 0);
			iLocal_417 = 11;
			break;
		
		case 9:
			if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false) && !ENTITY::IS_ENTITY_DEAD(Local_251.f_3, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_251.f_2, false))
				{
					PED::SET_PED_INTO_VEHICLE(Local_251.f_2, Local_251.f_3, -1);
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_251.f_3, 10f);
				func_109(&(Local_251.f_27));
				func_317(&Local_238, 19, 2f, 0);
				iLocal_417 = 11;
				if (!bLocal_268)
				{
					func_213();
				}
			}
			break;
		
		case 11:
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(413.8f, -1416.19f, 29.26f, 5f, joaat("prop_sec_barrier_ld_02a"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_sec_barrier_ld_02a"), 413.8f, -1416.19f, 29.26f, false, 0.85f, false);
			}
			if (func_116(&Local_238, 19) > 4f)
			{
				CAM::DO_SCREEN_FADE_IN(800);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				func_109(&(Local_251.f_27));
				CAM::DESTROY_CAM(Local_238.f_0, false);
				CAM::DESTROY_CAM(iLocal_237, false);
				func_135(1, 1, 1);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				func_208(&Local_238, 19, 0);
				iLocal_417 = 12;
			}
			else if (func_116(&Local_238, 19) > 3.7f)
			{
				if (func_137())
				{
					if (!iLocal_281)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_281 = 1;
					}
				}
			}
			break;
		
		case 12:
			return 1;
			break;
	}
	return 0;
}

void func_213()//Position - 0x78AE
{
	bLocal_268 = true;
	if (!PED::IS_PED_INJURED(Local_251.f_2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_251.f_2, Local_251.f_3, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_251.f_3, 406.612f, -1419.937f, 29.00375f, true, false, false, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_251.f_2, Local_251.f_30);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 1, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 6, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 17, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 3, false);
				PED::SET_PED_SEEING_RANGE(Local_251.f_2, 500f);
				PED::SET_PED_HEARING_RANGE(Local_251.f_2, 500f);
				PED::SET_PED_ID_RANGE(Local_251.f_2, 500f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251.f_2, true);
				ENTITY::SET_ENTITY_LOD_DIST(Local_251.f_3, 500);
				ENTITY::SET_ENTITY_LOD_DIST(Local_251.f_2, 500);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_251.f_3, true, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_251.f_2, true, 1);
				if (!HUD::DOES_BLIP_EXIST(Local_251.f_4))
				{
					Local_251.f_4 = func_214(Local_251.f_3, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251.f_2, true);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_251.f_3, 120, "txm_fc_h1_", true);
				VEHICLE::SET_PLAYBACK_SPEED(Local_251.f_3, 0.8f);
				iLocal_308 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

int func_214(int iParam0, bool bParam1, bool bParam2)//Position - 0x79EB
{
	return func_215(iParam0, !bParam1, bParam2);
}

int func_215(int iParam0, bool bParam1, bool bParam2)//Position - 0x79FE
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_131(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_131(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_131(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

Vector3 func_216(int iParam0)//Position - 0x7AA2
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -0.7535f, -0.0475f, 91.9877f };
			break;
		
		case 1:
			Var0 = { 4.2328f, 0f, 165.0072f };
			break;
		
		case 2:
			Var0 = { -0.3221f, 0f, 68.7635f };
			break;
		
		case 3:
			Var0 = { -0.3614f, 0f, -145.1533f };
			break;
		
		case 4:
			Var0 = { -5.4284f, 0f, 1.8065f };
			break;
		
		case 5:
			Var0 = { 1.2038f, 0f, 68.7635f };
			break;
		
		case 6:
			Var0 = { -2.1877f, 0f, 71.1648f };
			break;
	}
	return Var0;
}

Vector3 func_217(int iParam0)//Position - 0x7B61
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 495.4f, -1416.8f, 30.2f };
			break;
		
		case 1:
			Var0 = { 429.6911f, -1385.415f, 29.7266f };
			break;
		
		case 2:
			Var0 = { 417.9f, -1419.4f, 30.6f };
			break;
		
		case 3:
			Var0 = { 426.754f, -1386.51f, 29.6201f };
			break;
		
		case 4:
			Var0 = { 493.7f, -1416.9f, 30.2f };
			break;
		
		case 5:
			Var0 = { 450.0146f, -1414.523f, 34.4507f };
			break;
		
		case 6:
			Var0 = { 448.2621f, -1413.842f, 34.4501f };
			break;
	}
	return Var0;
}

int func_218(var uParam0, struct<3> Param1, float fParam2)//Position - 0x7C38
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = PED::CREATE_PED(26, *uParam0, Param1, fParam2, true, true);
	}
	func_8(&(Local_238.f_244), 4, uParam0->f_2, "TaxiJames", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_2, "TaxiJames");
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_257, 20, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2, false))
	{
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 11, 0, 1, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_2, uParam0->f_30);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_2, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_2, 6, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_2, 17, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_2, 3, false);
		PED::SET_PED_SEEING_RANGE(uParam0->f_2, 300f);
		PED::SET_PED_HEARING_RANGE(uParam0->f_2, 300f);
		PED::SET_PED_ID_RANGE(uParam0->f_2, 300f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, true);
	}
	return 1;
}

int func_219(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x7D48
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_231(uParam0))
		{
			func_133(uParam0, &(uParam0->f_43));
			func_226(uParam0);
			func_225(uParam0);
			func_202(uParam0);
			func_224(uParam0, fParam2, fParam3);
			func_222(uParam0);
			return func_220(uParam0, fParam1);
		}
	}
	return 0;
}

int func_220(var uParam0, float fParam1)//Position - 0x7DC0
{
	if (func_66(uParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_221(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_149(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			return func_126(uParam0, 1, fParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_149(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
	{
		return func_126(uParam0, 1, fParam1);
	}
	return 0;
}

float func_221(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x7E97
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

void func_222(var uParam0)//Position - 0x7ED1
{
	float fVar0;
	
	if ((func_223(uParam0) && func_22(uParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_89) >= 10000)
		{
			fVar0 = func_52(uParam0->f_17, 1);
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
		if (iLocal_88 >= 2 && !func_211())
		{
			func_254(uParam0, 136, 1, 0, 1);
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
			if (!func_223(uParam0))
			{
			}
			if (!func_22(uParam0->f_81, 67108864))
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

int func_223(var uParam0)//Position - 0x7FA7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_224(var uParam0, float fParam1, float fParam2)//Position - 0x7FDC
{
	if (func_223(uParam0) && func_22(uParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && func_207(uParam0))
		{
			if (!func_189(uParam0, 2))
			{
				func_204(uParam0, 2);
			}
			else if (func_223(uParam0))
			{
				if (func_116(uParam0, 2) > fParam1 && !func_189(uParam0, 14))
				{
					if (func_35())
					{
						func_254(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_254(uParam0, 48, 1, 0, 0);
					}
					func_317(uParam0, 2, 0, 0);
					if (func_189(uParam0, 10))
					{
						func_317(uParam0, 10, 0, 0);
					}
				}
				if (!func_189(uParam0, 3))
				{
					func_317(uParam0, 3, 0, 0);
				}
				else if (func_116(uParam0, 3) >= fParam2)
				{
					func_208(uParam0, 3, 0);
					func_361(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_189(uParam0, 2))
			{
				func_208(uParam0, 2, 0);
			}
			if (func_189(uParam0, 3))
			{
				func_208(uParam0, 3, 0);
			}
		}
	}
}

void func_225(var uParam0)//Position - 0x80FB
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !func_22(uParam0->f_44, 2))
	{
		func_67(&(uParam0->f_44), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_22(uParam0->f_44, 2))
	{
		func_20(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_55(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_254(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_226(var uParam0)//Position - 0x8184
{
	if (!func_22(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_116(uParam0, 9) > 1f)
					{
						func_230(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (uParam0->f_410 != 22)
						{
							func_254(uParam0, 50, 1, 1, 0);
						}
						func_317(uParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_211() && func_116(uParam0, 9) > 4f)
				{
					func_254(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_229("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_254(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_228(uParam0)))
				{
					func_230(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					func_55(6, 0);
				}
				if (!func_227(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_116(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_254(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (func_229("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_211())
				{
					if (uParam0->f_410 != 22)
					{
						func_254(uParam0, 53, 1, 0, 1);
					}
					func_55(7, func_228(uParam0));
					func_230(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_211())
				{
					func_208(uParam0, 9, 0);
					func_317(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_227(var uParam0)//Position - 0x83A8
{
	return uParam0->f_110;
}

int func_228(var uParam0)//Position - 0x83B4
{
	return uParam0->f_106;
}

bool func_229(char* sParam0, int iParam1, char* sParam2)//Position - 0x83C0
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_230(var uParam0, int iParam1)//Position - 0x83DE
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_231(var uParam0)//Position - 0x83F5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_361(uParam0, "Passenger left car.", 9);
			}
			else if (func_241(uParam0))
			{
				if (func_229("TAXI_OBJ_PICKUP", 0, 0))
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
				func_232(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_232(var uParam0, bool bParam1)//Position - 0x8484
{
	func_240(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (!func_189(uParam0, 14))
			{
				if (func_211())
				{
					func_239(1);
				}
				func_190(uParam0, 11, 1);
				func_234(uParam0, 1);
				func_317(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_223(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, false))
					{
						if (func_116(uParam0, 15) > 5f)
						{
							func_317(uParam0, 15, 0f, 1);
						}
					}
					if (func_116(uParam0, 14) > 20f)
					{
						func_361(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_116(uParam0, 14) > 20f)
				{
					if (func_233(uParam0->f_4, 1) > 40f)
					{
						func_361(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_361(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_233(int iParam0, bool bParam1)//Position - 0x858F
{
	return func_51(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

void func_234(var uParam0, bool bParam1)//Position - 0x85A7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
				func_238(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				HUD::CLEAR_PRINTS();
				if (func_223(uParam0))
				{
					func_254(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_238(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_235(uParam0, 0, 0);
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

void func_235(var uParam0, bool bParam1, bool bParam2)//Position - 0x86C5
{
	if (bParam1)
	{
		func_442(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		uParam0->f_10 = func_215(uParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(uParam0->f_10, true);
		func_236(uParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			func_254(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_236(var uParam0)//Position - 0x8720
{
	func_317(uParam0, 14, 0, 0);
	func_237();
}

void func_237()//Position - 0x8736
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_238(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x875F
{
	if (!func_22(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		func_254(uParam0, iParam3, 1, 0, 0);
		func_67(uParam1, iParam2);
	}
}

void func_239(int iParam0)//Position - 0x878B
{
	Global_22616 = iParam0;
}

void func_240(var uParam0, int iParam1)//Position - 0x8798
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_361(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

int func_241(var uParam0)//Position - 0x87FD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			if (func_189(uParam0, 14))
			{
				func_242(uParam0);
			}
			func_234(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_242(var uParam0)//Position - 0x883F
{
	func_208(uParam0, 14, 0);
	func_208(uParam0, 15, 0);
	func_244();
	if (func_243())
	{
		func_239(0);
	}
}

int func_243()//Position - 0x8869
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

void func_244()//Position - 0x8880
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_245(int iParam0, var uParam1)//Position - 0x88A9
{
	func_132(iParam0, uParam1->f_2, 1, 1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_3, PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_211())
			{
				func_361(&Local_238, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				func_151();
			}
		}
	}
	else if (!func_211())
	{
		func_361(&Local_238, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		func_151();
	}
}

int func_246(var uParam0, struct<3> Param1, float fParam2)//Position - 0x8913
{
	uParam0->f_17 = { Param1 };
	uParam0->f_10 = fParam2;
	uParam0->f_3 = VEHICLE::CREATE_VEHICLE(uParam0->f_1, uParam0->f_17, uParam0->f_10, true, true, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(uParam0->f_1, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1);
	iLocal_235[0] = VEHICLE::CREATE_VEHICLE(iLocal_255, 404.9912f, -1423.974f, 28.4638f, 227.5235f, true, true, false);
	iLocal_235[1] = VEHICLE::CREATE_VEHICLE(iLocal_255, 402.2958f, -1427.018f, 28.4632f, 226.6982f, true, true, false);
	iLocal_235[2] = VEHICLE::CREATE_VEHICLE(iLocal_256, 398.415f, -1428.167f, 28.4504f, 226.4081f, true, true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_235[0], 2);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_235[1], 2);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_235[2], 2);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_235[0], "BRAVEST");
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_235[1], "BOLDEST");
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_235[2], "BADDEST");
	ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, 800, 0);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_3, "PUSSYWAG");
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(uParam0->f_3, true);
	VEHICLE::SET_VEHICLE_ALARM(uParam0->f_3, true);
	uParam0->f_15 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_3);
	uParam0->f_31 = 1;
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_3, true);
	func_251(Local_238.f_14, 1, 1114636288);
	func_251(Local_299, 1, 15f);
	func_251(Local_300, 1, 15f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_3, 2);
	return 1;
}

int func_247()//Position - 0x8A89
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_251.f_0))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_263, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_251.f_1))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_263, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_255))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_263, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_256))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_263, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(120, "txm_fc_h1_"))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_263, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, "taxi_oj_fc3"))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_263, 1000);
		return 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_309))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_263, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("veh@truck@ds@base"))
	{
		return 0;
	}
	return 1;
}

void func_248(int iParam0, var uParam1)//Position - 0x8B77
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
		{
			if (!func_189(iParam0, 14))
			{
				if (HUD::DOES_BLIP_EXIST(*uParam1) && HUD::GET_BLIP_ALPHA(*uParam1) > 0)
				{
					HUD::SET_BLIP_ALPHA(*uParam1, 0);
				}
				func_235(iParam0, 0, 0);
				func_254(iParam0, 2, 1, 0, 0);
			}
			else if (func_116(iParam0, 14) > 20f)
			{
				func_361(iParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (func_189(iParam0, 14))
			{
				func_317(iParam0, 2, 0, 0);
				func_242(iParam0);
			}
			if (HUD::DOES_BLIP_EXIST(iParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(iParam0->f_10));
			}
			if ((HUD::DOES_BLIP_EXIST(*uParam1) && HUD::GET_BLIP_ALPHA(*uParam1) < 255) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
			{
				HUD::SET_BLIP_ALPHA(*uParam1, 255);
				HUD::SET_BLIP_ROUTE(*uParam1, true);
			}
		}
	}
}

void func_249(var uParam0)//Position - 0x8C63
{
	func_250(uParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	func_151();
	func_242(uParam0);
}

void func_250(var uParam0, int iParam1)//Position - 0x8CAF
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

void func_251(struct<3> Param0, bool bParam1, float fParam2)//Position - 0x8CE9
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

void func_252()//Position - 0x8D5E
{
	func_67(&(Local_238.f_55), 2);
	func_67(&(Local_238.f_55), 4);
	func_67(&(Local_238.f_55), 16);
	func_67(&(Local_238.f_55), 64);
	func_67(&(Local_238.f_55), 256);
	func_67(&(Local_238.f_55), 512);
	func_67(&(Local_238.f_55), 1024);
	func_67(&(Local_238.f_55), 2048);
	func_67(&(Local_238.f_55), 1073741824);
	func_67(&(Local_238.f_55), 8388608);
	func_67(&(Local_238.f_55), 33554432);
	func_67(&(Local_238.f_55), 16777216);
	func_67(&(Local_238.f_55), 4096);
	func_67(&(Local_238.f_100), 8);
	func_67(&(Local_238.f_100), 2048);
	func_67(&(Local_238.f_100), 256);
	func_67(&uLocal_398, 2);
}

void func_253(var uParam0)//Position - 0x8E2E
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	func_250(uParam0, 1000);
}

void func_254(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x8E51
{
	iParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_317(iParam0, 16, 4f, 0);
		if (func_255(iParam0))
		{
			func_48();
		}
	}
	func_279(iParam0, iParam2, bParam3);
}

int func_255(var uParam0)//Position - 0x8E86
{
	struct<3> Var0;
	struct<6> Var1;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_211())
	{
		Var1 = { func_257() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_256(&Var0);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_256(char* sParam0)//Position - 0x8EEC
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_257()//Position - 0x8EFC
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_258(var uParam0)//Position - 0x8F20
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_81) > 500) || PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_259()//Position - 0x8F73
{
	STREAMING::REQUEST_MODEL(Local_251.f_0);
	STREAMING::REQUEST_MODEL(Local_251.f_1);
	STREAMING::REQUEST_MODEL(iLocal_255);
	STREAMING::REQUEST_MODEL(iLocal_256);
	VEHICLE::REQUEST_VEHICLE_RECORDING(120, "txm_fc_h1_");
	VEHICLE::REQUEST_VEHICLE_RECORDING(0, "taxi_oj_fc3");
	TASK::REQUEST_WAYPOINT_RECORDING(&cLocal_309);
	STREAMING::REQUEST_ANIM_DICT("veh@truck@ds@base");
}

int func_260(var uParam0, bool bParam1, float fParam2)//Position - 0x8FBB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_232(uParam0, 1);
			if (func_33())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_79 = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_277(uParam0);
			if (uParam0->f_48 > 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, false, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_189(uParam0, 14))
			{
				func_242(uParam0);
				func_234(uParam0, 0);
			}
			if (func_189(uParam0, 9))
			{
				func_208(uParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_276(uParam0, uParam0->f_3) > 300f)
				{
					func_361(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 || ((func_51(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && func_221(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_221(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_273(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_272(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = func_271(uParam0->f_4, uParam0->f_3);
								iVar0 = func_270(uParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
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
								if (uParam0->f_411 == 0)
								{
									if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 0, false, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							TASK::CLEAR_PED_TASKS(uParam0->f_3);
							TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_207(uParam0))
							{
								TASK::CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 7) && func_276(uParam0, uParam0->f_3) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (uParam0->f_411 != 9)
								{
									TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_86)
						{
							if (func_51(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_269(uParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_361(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_268(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_361(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_266(uParam0);
						if (func_276(uParam0, uParam0->f_3) < fVar4 || func_33())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
							{
								if (func_262(uParam0))
								{
									func_261(uParam0);
									iLocal_81 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, true);
									func_208(uParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(uParam0->f_428, &(uParam0->f_42), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_3, false);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_261(var uParam0)//Position - 0x94CE
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
}

int func_262(var uParam0)//Position - 0x94F2
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	
	func_143("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar6 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		func_154();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (func_150(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (func_126(uParam0, 0, 1084227584) && func_149(1, 1, 1))
			{
				if (func_269(uParam0, 1))
				{
					iLocal_80 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_78 = 1;
				}
				else
				{
					func_361(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = func_271(uParam0->f_4, uParam0->f_3);
				iVar3 = func_270(uParam0, &iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
				{
					if (iVar4 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
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
				if (uParam0->f_411 == 0)
				{
					if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 0, false, false))
					{
						uParam0->f_7 = 0;
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
			if (uParam0->f_7 == 0)
			{
				Var2 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
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
			iVar6 = func_191(&(uParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0), 1);
			if (iVar6 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (uParam0->f_7 == 2)
				{
					Var1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != -1)
			{
				func_142(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 25f, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_121();
				func_279(uParam0, 0, 0);
				Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_3, Var7, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, func_264(uParam0));
				func_145(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				CAM::SET_CAM_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0));
				CAM::POINT_CAM_AT_ENTITY(*uParam0, uParam0->f_4, Var1, true);
				CAM::SET_CAM_ACTIVE(*uParam0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_3, false, false);
				TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_78 = 5;
			}
			break;
		
		case 5:
			func_143("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_78 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
				{
					PED::SET_PED_INTO_VEHICLE(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(uParam0->f_4, func_263(uParam0->f_7), true);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(*uParam0, false);
				CAM::DESTROY_CAM(uParam0->f_1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_121();
				func_279(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				func_135(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(*uParam0, false);
			CAM::DESTROY_CAM(uParam0->f_1, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			func_135(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, true))
				{
					return 1;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_263(int iParam0)//Position - 0x99FF
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

float func_264(var uParam0)//Position - 0x9A37
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_40() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_265(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), Var1);
	return fVar0;
}

float func_265(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3)//Position - 0x9AA0
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_266(var uParam0)//Position - 0x9ABA
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (func_233(uParam0->f_3, 1) > 30f || func_267(uParam0))
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
					func_361(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_267(var uParam0)//Position - 0x9B8B
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && func_116(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_268(int iParam0)//Position - 0x9BC5
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

int func_269(var uParam0, bool bParam1)//Position - 0x9C81
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

int func_270(var uParam0, var uParam1)//Position - 0x9D3B
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

int func_271(int iParam0, int iParam1)//Position - 0x9DB0
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

int func_272(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x9E68
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && func_233(uParam0->f_3, 1) < fParam2)
		{
			if (!func_189(uParam0, 5))
			{
				func_317(uParam0, 5, 0, 0);
			}
		}
		else if (func_189(uParam0, 5))
		{
			func_208(uParam0, 5, 0);
		}
		if (((func_116(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || func_233(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_273(var uParam0, float fParam1)//Position - 0x9F06
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
			if ((func_51(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && MISC::ABSF((Var0.f_2 - Var1.f_2)) < 5f)
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
					func_254(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_274(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
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

void func_274(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xA1E7
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_275(iParam3), false);
}

int func_275(int iParam0)//Position - 0xA200
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

float func_276(var uParam0, int iParam1)//Position - 0xA3F5
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (func_207(uParam0))
		{
			return func_51(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_277(var uParam0)//Position - 0xA420
{
	func_240(uParam0, uParam0->f_3);
	if (func_207(uParam0))
	{
		if (func_189(uParam0, 14))
		{
			func_242(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_10));
			}
		}
	}
	if (!func_189(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		}
		func_317(uParam0, 9, 0, 0);
		func_278("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_278(char* sParam0, int iParam1, int iParam2)//Position - 0xA49E
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_279(int iParam0, int iParam1, bool bParam2)//Position - 0xA4B7
{
	iParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_48();
		func_317(iParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

int func_280(var uParam0, int iParam1)//Position - 0xA4DC
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	func_284(12);
	if (func_22(uParam0->f_44, 8))
	{
		if (!func_22(uParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !func_22(uParam0->f_44, 256))
			{
				func_67(&(uParam0->f_44), 256);
			}
			if (func_22(uParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_254(uParam0, 135, 1, 0, 1);
				func_67(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_283(uParam0, iParam1))
	{
		if (func_233(uParam0->f_3, 1) < 35f)
		{
			if (!func_22(uParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				func_254(uParam0, 133, 1, 0, 1);
				func_67(&(uParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || func_233(uParam0->f_3, 1) > 400f)
		{
			func_361(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			func_281(uParam0);
			func_55(2, 0);
			bLocal_86 = true;
			func_117(&iLocal_82);
			return 1;
		}
		else
		{
			func_361(uParam0, "No Taxi", 21);
			func_166("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_281(var uParam0)//Position - 0xA655
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (func_282())
		{
		}
	}
}

int func_282()//Position - 0xA671
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_283(var uParam0, int iParam1)//Position - 0xA68F
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
				bVar2 = func_268(iVar0);
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
							func_166("TX_VIP_DMGD", -1);
							if (func_158("TX_VIP_DMGD"))
							{
								func_67(&(uParam0->f_44), 64);
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
							func_166("TX_VIP_CAR", -1);
							if (func_158("TX_VIP_CAR"))
							{
								func_67(&(uParam0->f_44), 32);
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
							func_166("TX_VIP_SMALL", -1);
							if (func_158("TX_VIP_SMALL"))
							{
								func_67(&(uParam0->f_44), 16);
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
			func_20(&(uParam0->f_44), 16);
			func_20(&(uParam0->f_44), 64);
			func_20(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_284(int iParam0)//Position - 0xACA4
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_286())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_285())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

bool func_285()//Position - 0xACFD
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

bool func_286()//Position - 0xAD13
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

void func_287(var uParam0)//Position - 0xAD29
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_21(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_288(var uParam0, var uParam1)//Position - 0xAD4E
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

void func_289(var uParam0, char* sParam1, int iParam2)//Position - 0xADC5
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_290()//Position - 0xADDD
{
	Local_165.f_0 = 0;
	func_307(45458/*func_309*/, 45433/*func_308*/, 1);
	func_307(45194/*func_305*/, 45170/*func_304*/, 1);
	func_307(45108/*func_303*/, 45083/*func_302*/, 1);
	func_307(45011/*func_301*/, 44987/*func_300*/, 1);
	func_307(44877/*func_299*/, 44856/*func_298*/, 1);
	func_307(44803/*func_296*/, 44778/*func_295*/, 1);
	func_307(44636/*func_292*/, 44612/*func_291*/, 1);
}

int func_291(int iParam0, var uParam1)//Position - 0xAE44
{
	uParam1 = uParam1;
	func_361(iParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_292(var uParam0)//Position - 0xAE5C
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_294(uParam0->f_4))
		{
			func_293(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_293(var uParam0, int iParam1)//Position - 0xAE86
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_294(int iParam0)//Position - 0xAE99
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

int func_295(int iParam0, var uParam1)//Position - 0xAEEA
{
	uParam1 = uParam1;
	func_361(iParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_296(var uParam0)//Position - 0xAF03
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_297(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_297(var uParam0, int iParam1)//Position - 0xAF29
{
	return (uParam0 && iParam1) != 0;
}

int func_298(var uParam0, var uParam1)//Position - 0xAF38
{
	uParam1 = uParam1;
	func_293(uParam0, 11);
	return 1;
}

int func_299(int iParam0)//Position - 0xAF4D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4))
		{
			if (!func_189(iParam0, 25))
			{
				func_317(iParam0, 25, 0, 0);
			}
			else if (func_116(iParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_189(iParam0, 25))
		{
			func_208(iParam0, 25, 0);
		}
	}
	return 0;
}

int func_300(int iParam0, var uParam1)//Position - 0xAFBB
{
	uParam1 = uParam1;
	func_361(iParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_301(var uParam0)//Position - 0xAFD3
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

int func_302(int iParam0, var uParam1)//Position - 0xB01B
{
	uParam1 = uParam1;
	func_361(iParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_303(var uParam0)//Position - 0xB034
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_297(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_304(int iParam0, var uParam1)//Position - 0xB072
{
	uParam1 = uParam1;
	func_361(iParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_305(var uParam0)//Position - 0xB08A
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_306(uParam0->f_4))
		{
			func_293(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_306(int iParam0)//Position - 0xB0B4
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

void func_307(int iParam0, int iParam1, bool bParam2)//Position - 0xB10F
{
	if (Local_165.f_0 >= 16)
	{
		Local_165.f_0 = 16;
		return;
	}
	Local_165.f_1[Local_165.f_0 /*4*/] = 0;
	func_68(&(Local_165.f_1[Local_165.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_68(&(Local_165.f_1[Local_165.f_0 /*4*/]), 2);
	}
	Local_165.f_1[Local_165.f_0 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165.f_0 /*4*/].f_3 = iParam1;
	Local_165.f_0++;
}

int func_308(int iParam0, var uParam1)//Position - 0xB179
{
	uParam1 = uParam1;
	func_361(iParam0, "Passenger injured.", 15);
	return 1;
}

int func_309(var uParam0)//Position - 0xB192
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

void func_310()//Position - 0xB1D2
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

int func_311()//Position - 0xB3AA
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_253))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
	{
		return 0;
	}
	if (!func_312(&iLocal_263, 0))
	{
		func_143("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_263, 1000);
		return 0;
	}
	return 1;
}

int func_312(int iParam0, bool bParam1)//Position - 0xB3F0
{
	if (!STREAMING::HAS_MODEL_LOADED(func_19()))
	{
		func_143("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_143("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_143("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_143("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_143("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_143("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_313(int iParam0, int iParam1)//Position - 0xB4A9
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

int func_314(var uParam0)//Position - 0xB6C8
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = func_214(uParam0->f_3, 0, 0);
		HUD::SET_GPS_FLAGS(1, 0f);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS");
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	}
	return 1;
}

int func_315(var uParam0, struct<3> Param1, struct<3> Param2, char* sParam3, int iParam4, float fParam5, float fParam6)//Position - 0xB717
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_316(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param2 };
		func_37(uParam0->f_14, 0);
		MISC::CLEAR_AREA_OF_PEDS(uParam0->f_14, 2f, 0);
		func_251(uParam0->f_14, 0, fParam6);
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

void func_316(var uParam0, struct<3> Param1)//Position - 0xB86C
{
	uParam0->f_51[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param1, 20f, 5f, false);
}

void func_317(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xB88A
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_110(&(iParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_109(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_110(&(iParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_109(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_318()//Position - 0xB8FC
{
	STREAMING::REQUEST_MODEL(iLocal_253);
	func_320(0);
	uLocal_405 = func_319();
	STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
}

int func_319()//Position - 0xB91F
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
}

void func_320(bool bParam0)//Position - 0xB92F
{
	STREAMING::REQUEST_MODEL(func_19());
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
		func_67(&(Global_113386.f_19097), 128);
	}
}

void func_321(var uParam0, int iParam1, bool bParam2)//Position - 0xB98B
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_116(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_254(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_254(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_317(uParam0, 10, 0f, 1);
				}
			}
			else if (func_116(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_254(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_254(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_317(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_116(uParam0, 10) > 30f)
		{
			if (!func_211())
			{
				if (uParam0->f_112)
				{
					func_254(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_254(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_317(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_22(uParam0->f_100, 64))
	{
		if (!func_14(&(Local_162[5 /*10*/].f_6)))
		{
			func_117(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_344(uParam0))
			{
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_343(uParam0, 1);
				func_341(5, uParam0);
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 1))
	{
		if (!func_14(&(Local_162[0 /*10*/].f_6)))
		{
			func_117(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_339(uParam0))
			{
				func_343(uParam0, 1);
				func_341(0, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2))
	{
		if (!func_14(&(Local_162[1 /*10*/].f_6)))
		{
			func_117(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_338(uParam0))
			{
				func_343(uParam0, 1);
				func_341(1, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2048))
	{
		if (!func_14(&(Local_162[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				func_117(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_107(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_337(uParam0))
			{
				func_343(uParam0, 1);
				func_341(8, uParam0);
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 128))
	{
		if (!func_14(&(Local_162[6 /*10*/].f_6)))
		{
			func_117(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_336(uParam0))
			{
				func_343(uParam0, 1);
				func_341(6, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32))
	{
		if (!func_14(&(Local_162[4 /*10*/].f_6)))
		{
			func_117(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_335(uParam0))
			{
				func_343(uParam0, 1);
				func_341(4, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 256))
	{
		if (!func_14(&(Local_162[7 /*10*/].f_6)))
		{
			func_117(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_334(uParam0))
			{
				func_341(7, uParam0);
				func_343(uParam0, 1);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8))
	{
		if (!func_14(&(Local_162[9 /*10*/].f_6)))
		{
			func_117(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (func_107(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_333(uParam0))
			{
				func_343(uParam0, 1);
				func_341(9, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 16384))
	{
		if (!func_14(&(Local_162[13 /*10*/].f_6)))
		{
			func_117(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_327(uParam0))
			{
				func_343(uParam0, 1);
				func_341(13, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32768))
	{
		if (!func_14(&(Local_162[14 /*10*/].f_6)))
		{
			func_117(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_326(uParam0))
			{
				func_343(uParam0, 1);
				func_341(14, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4096))
	{
		if (!func_14(&(Local_162[11 /*10*/].f_6)))
		{
			func_117(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_325(uParam0))
			{
				func_343(uParam0, 1);
				func_341(11, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8192))
	{
		if (!func_14(&(Local_162[12 /*10*/].f_6)))
		{
			func_117(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_324(uParam0))
			{
				func_343(uParam0, 1);
				func_341(12, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4))
	{
		if (!func_14(&(Local_162[2 /*10*/].f_6)))
		{
			func_323(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_107(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_322(uParam0))
			{
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_343(uParam0, 1);
				func_341(2, uParam0);
				func_340(uParam0);
			}
		}
	}
}

int func_322(var uParam0)//Position - 0xC186
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !func_14(&(Local_162[0 /*10*/].f_3))) && !func_14(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_14(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_117(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_107(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_106(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_106(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_323(int* iParam0, float fParam1)//Position - 0xC269
{
	if (!func_14(iParam0))
	{
		func_110(iParam0, fParam1);
	}
}

int func_324(var uParam0)//Position - 0xC283
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (Var0.f_1 < -10f && !func_14(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_162[12 /*10*/].f_3)))
			{
				func_117(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_106(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_325(var uParam0)//Position - 0xC312
{
	struct<3> Var0;
	
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_14(&(Local_162[0 /*10*/].f_3))) && !func_14(&(Local_162[1 /*10*/].f_3))) && !func_14(&(Local_162[5 /*10*/].f_3))) && !func_14(&(Local_162[9 /*10*/].f_3))) && !func_14(&(Local_162[7 /*10*/].f_3))) && !func_14(&(Local_162[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 2.5f && !func_14(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_162[11 /*10*/].f_3)))
			{
				func_117(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = Var0.f_0;
			}
			else if (func_107(&(Local_162[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_164) - MISC::ABSF(Var0.f_0)) < 0f)
			{
				func_106(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_107(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				func_106(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_326(var uParam0)//Position - 0xC442
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_14(&(Local_162[0 /*10*/].f_3))) && !func_14(&(Local_162[8 /*10*/].f_3))) && !func_14(&(Local_162[5 /*10*/].f_3))) && !func_14(&(Local_162[9 /*10*/].f_3))) && !func_14(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_14(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && func_51(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1, false)))
				{
					func_117(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_107(&(Local_162[14 /*10*/].f_3)) < 1.5f && func_51(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_106(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_107(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			func_106(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_106(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_327(var uParam0)//Position - 0xC5C7
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_14(&(Local_162[9 /*10*/].f_3))) && !func_14(&(Local_162[7 /*10*/].f_3))) && !func_14(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_328(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!func_14(&(Local_162[13 /*10*/].f_3)))
			{
				func_117(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_106(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_328(int iParam0)//Position - 0xC67E
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
	Var3 = { func_332((Var1.f_0 - Var0.f_0), (Var1.f_1 - Var0.f_1), 0f) };
	Var4 = { func_331(Var3, 0) * Vector(fVar9, fVar9, fVar9) };
	Var3 = { Var3 * Vector(2f, 2f, 2f) };
	Var5 = { Var0 - Var3 + Var4 };
	Var6 = { Var0 - Var3 - Var4 };
	Var7 = { Var1 + Var3 + Var4 };
	Var8 = { Var1 + Var3 - Var4 };
	Var8 = { Var8 };
	return func_329(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var5, Var6, Var7);
}

int func_329(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0xC767
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
	Var0 = { func_332(Param2 - Param1) };
	Var1 = { func_332(Param3 - Param1) };
	fVar2 = func_330(Param0, Var0);
	fVar3 = func_330(Param1, Var0);
	fVar4 = func_330(Param2, Var0);
	fVar5 = func_330(Param0, Var1);
	fVar6 = func_330(Param1, Var1);
	fVar7 = func_330(Param3, Var1);
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

float func_330(struct<3> Param0, struct<3> Param1)//Position - 0xC850
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_331(struct<3> Param0, int iParam1)//Position - 0xC871
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

Vector3 func_332(struct<3> Param0)//Position - 0xC8CF
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

int func_333(var uParam0)//Position - 0xC90E
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

int func_334(var uParam0)//Position - 0xC943
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

int func_335(var uParam0)//Position - 0xC9D9
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_14(&(Local_162[4 /*10*/].f_3)))
			{
				func_117(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_106(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_336(var uParam0)//Position - 0xCA4B
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_14(&(Local_162[6 /*10*/].f_3)))
			{
				func_117(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				func_106(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_337(var uParam0)//Position - 0xCAC1
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
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, 72, 1, 0, 1);
				}
				func_106(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_338(var uParam0)//Position - 0xCB42
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 3f && !func_14(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_162[1 /*10*/].f_3)))
			{
				func_117(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				func_106(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_339(var uParam0)//Position - 0xCBCE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!func_14(&(Local_162[0 /*10*/].f_3)))
			{
				func_117(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				func_106(&(Local_162[0 /*10*/].f_3));
				func_109(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_340(var uParam0)//Position - 0xCC58
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_14(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_109(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_317(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_341(int iParam0, var uParam1)//Position - 0xCCA0
{
	Local_162[iParam0 /*10*/].f_1++;
	func_342(uParam1, iParam0);
	func_106(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_342(var uParam0, int iParam1)//Position - 0xCCD3
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_343(var uParam0, int iParam1)//Position - 0xCCEA
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_344(var uParam0)//Position - 0xCCFD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!func_14(&(Local_162[5 /*10*/].f_3)))
			{
				func_117(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				func_106(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_345()//Position - 0xCD74
{
	struct<3> Var0;
	
	func_143("UPDATE_FINAL_SCENE()", &iLocal_263, 1000);
	if ((Local_238.f_410 >= 28 && !iLocal_272) && ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_238.f_3, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_257, PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_251.f_2, PLAYER::PLAYER_PED_ID(), true)))
	{
		iLocal_272 = 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_251.f_2, Local_238.f_3, true) && iLocal_415 < 6)
		{
			iLocal_272 = 1;
		}
	}
	if (iLocal_415 >= 4)
	{
		if (func_233(Local_238.f_3, 1) < 3f && !iLocal_271)
		{
			if (!func_211())
			{
				func_348(&(Local_238.f_244), Local_238.f_144, "txm4_aggro", 8, 0, 0, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_238.f_3, PLAYER::PLAYER_PED_ID(), -1, false);
				iLocal_267 = MISC::GET_GAME_TIMER();
				iLocal_271 = 1;
			}
			else if (!iLocal_280)
			{
				func_151();
				iLocal_280 = 1;
			}
		}
	}
	switch (iLocal_415)
	{
		case 0:
			if ((!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false) && !ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
			{
				PED::ADD_RELATIONSHIP_GROUP("TAXI_Whore", &iLocal_260);
				iLocal_259 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_238.f_3);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_251.f_30, iLocal_260);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_251.f_30, iLocal_259);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_251.f_2, Local_251.f_30);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_257, iLocal_260);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251.f_2, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 17, true);
				ENTITY::SET_ENTITY_HEALTH(Local_251.f_2, 130, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_251.f_2, true);
				PED::SET_PED_DIES_WHEN_INJURED(Local_251.f_2, true);
				TASK::CLEAR_PED_TASKS(Local_251.f_2);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_257, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_257, 17, true);
				ENTITY::SET_ENTITY_HEALTH(iLocal_257, 130, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_257, true);
				PED::SET_PED_DIES_WHEN_INJURED(iLocal_257, true);
				TASK::CLEAR_PED_TASKS(iLocal_257);
				iLocal_415 = 1;
			}
			break;
		
		case 1:
			if (((!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false) && !ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_257, false)) && !ENTITY::IS_ENTITY_DEAD(Local_251.f_3, false))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_257, 0);
				TASK::TASK_PLAY_ANIM(0, &cLocal_312, "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, &cLocal_321, "exit", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
				TASK::TASK_PERFORM_SEQUENCE(Local_251.f_2, iLocal_232);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_233);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_233);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_251.f_2, 0);
				TASK::TASK_PLAY_ANIM(0, &cLocal_330, "idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_233);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_233);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_233);
				iLocal_415 = 2;
			}
			break;
		
		case 2:
			if (iLocal_273)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_257, false) && !ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_238.f_3, iLocal_259);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_238.f_3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_238.f_3, 13, true);
					PED::SET_PED_SHOOT_RATE(Local_238.f_3, 100);
					PED::SET_PED_ACCURACY(Local_238.f_3, 100);
					ENTITY::SET_ENTITY_HEALTH(Local_238.f_3, 105, 0);
					TASK::CLEAR_PED_TASKS(Local_238.f_3);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					TASK::TASK_STAND_STILL(0, 5000);
					func_347(&Local_238, -691.48f, -1113.31f, 13.53f);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_346(iLocal_231), iLocal_257, 3f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					TASK::TASK_SHOOT_AT_ENTITY(0, iLocal_257, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(Local_238.f_3, iLocal_234);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					iLocal_269 = 1;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					WEAPON::GIVE_WEAPON_TO_PED(Local_238.f_3, joaat("weapon_pistol"), 100, true, true);
					iLocal_415 = 3;
				}
			}
			else if (!iLocal_276)
			{
				if (!PED::IS_PED_INJURED(Local_251.f_2) && !PED::IS_PED_INJURED(iLocal_257))
				{
					if (func_233(Local_251.f_2, 1) < 2f || func_233(iLocal_257, 1) < 2f)
					{
						TASK::CLEAR_PED_TASKS(Local_251.f_2);
						TASK::CLEAR_PED_TASKS(iLocal_257);
						TASK::TASK_LOOK_AT_ENTITY(Local_251.f_2, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(Local_251.f_2, iLocal_232);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_257, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_233);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_233);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_233);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_233);
						iLocal_276 = 1;
					}
				}
				else
				{
					if (PED::IS_PED_INJURED(Local_251.f_2))
					{
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_251.f_2);
						TASK::TASK_SMART_FLEE_PED(Local_251.f_2, PLAYER::PLAYER_PED_ID(), 100f, 20000, false, false);
					}
					if (PED::IS_PED_INJURED(iLocal_257))
					{
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_257);
						TASK::TASK_SMART_FLEE_PED(iLocal_257, PLAYER::PLAYER_PED_ID(), 100f, 20000, false, false);
					}
				}
			}
			break;
		
		case 3:
			func_143("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_263, 1000);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_238.f_3, 242628503) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(Local_238.f_3) > 0 && iLocal_269)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						iLocal_269 = 0;
					}
				}
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (((!PED::IS_PED_INJURED(iLocal_257) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_257)) && !ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false)) && !bLocal_275)
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_251.f_2, Local_238.f_3, -1, 2048, 4);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_PLAY_ANIM(0, "MOVE_DUCK_FOR_COVER", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_238.f_3, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
				TASK::TASK_PERFORM_SEQUENCE(Local_251.f_2, iLocal_232);
				bLocal_275 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false) && !ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
			{
				if (TASK::GET_SEQUENCE_PROGRESS(Local_238.f_3) > 2)
				{
					func_254(&Local_238, 58, 1, 0, 0);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_251.f_2, 2000, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(Local_238.f_3, iLocal_234);
					iLocal_415 = 4;
				}
			}
			break;
		
		case 4:
			func_143("FINAL_SCENE_KILL_WOMAN", &iLocal_263, 1000);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false))
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_233);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_233);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -691.48f, -1113.31f, 13.53f, Local_251.f_2, 1f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_251.f_2, -1, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_233);
						TASK::TASK_PERFORM_SEQUENCE(Local_238.f_3, iLocal_233);
					}
				}
				iLocal_415 = 6;
			}
			break;
		
		case 6:
			func_143("FINAL_SCENE_KILL_MAN", &iLocal_263, 1000);
			if (!func_211())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false) && !ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
				{
					TASK::TASK_SHOOT_AT_ENTITY(Local_238.f_3, Local_251.f_2, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					iLocal_415 = 7;
				}
			}
			break;
		
		case 7:
			func_143("FINAL_SCENE_FLEE", &iLocal_263, 1000);
			if (ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false) && !ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_251.f_2, false) };
				TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
				TASK::TASK_AIM_GUN_AT_COORD(0, Var0, 1000, false, false);
				TASK::TASK_SWAP_WEAPON(0, false);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_SMART_FLEE_COORD(0, -691.48f, -1113.31f, 13.53f, 1000f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
				TASK::TASK_PERFORM_SEQUENCE(Local_238.f_3, iLocal_234);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
				PED::SET_PED_KEEP_TASK(Local_238.f_3, true);
				iLocal_272 = 1;
			}
			break;
	}
}

Vector3 func_346(int iParam0)//Position - 0xD5EE
{
	switch (iParam0)
	{
		case 0:
			return -691.48f, -1113.31f, 13.53f;
		
		case 1:
			return -691.48f, -1113.31f, 13.53f;
		
		default:
	}
	return -691.48f, -1113.31f, 13.53f;
}

void func_347(var uParam0, struct<3> Param1)//Position - 0xD63C
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, false) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 1, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(0, uParam0->f_4, 131584);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, false) >= MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 2, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(0, uParam0->f_4, 262656);
			}
			else
			{
				TASK::TASK_LEAVE_VEHICLE(0, uParam0->f_4, 512);
			}
		}
	}
}

int func_348(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD723
{
	func_360(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_349(sParam2, iParam3, 0);
}

int func_349(char* sParam0, int iParam1, bool bParam2)//Position - 0xD771
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
		if (func_359(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_358();
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
				func_357();
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
				if (func_356())
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
			func_355();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_354();
		func_350();
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

void func_350()//Position - 0xDA3F
{
	if (!func_351())
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

int func_351()//Position - 0xDA76
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_171())
	{
		return 0;
	}
	if (func_352(PLAYER::PLAYER_ID()))
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

bool func_352(int iParam0)//Position - 0xDAD9
{
	return func_353(iParam0, 20);
}

var func_353(int iParam0, int iParam1)//Position - 0xDAE9
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

void func_354()//Position - 0xDB01
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

void func_355()//Position - 0xDB33
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

int func_356()//Position - 0xDBC8
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

void func_357()//Position - 0xDC61
{
	if (func_82(14))
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
		Global_20266 = func_103();
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

void func_358()//Position - 0xDD03
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

bool func_359(int iParam0, int iParam1)//Position - 0xDD5B
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

void func_360(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xDD93
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

void func_361(int iParam0, char* sParam1, int iParam2)//Position - 0xDDE9
{
	struct<3> Var0;
	
	func_151();
	func_462(2);
	Var0 = { func_368() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && func_211()) && !MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		StringCopy(&Var0, iParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
		{
			if (!func_223(iParam0))
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
		func_317(iParam0, 3, 0, 0);
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
				func_366(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_274(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
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
			func_366(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_415 == 15)
		{
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_366(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_366(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_366(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_366(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_223(iParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_4))
				{
					func_363(iParam0, 4096, 0);
				}
				else
				{
					func_363(iParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_366(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_366(iParam0, &Var0);
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
				func_366(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_274(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_366(iParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_366(iParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_55(8, 0);
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
				func_366(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_274(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_145, 4);
			}
			func_363(iParam0, 0, 0);
			func_366(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_55(8, 0);
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
				func_366(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_274(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			func_366(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_55(8, 0);
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
				func_366(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_274(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_362(&Var0);
			func_348(&(iParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_366(iParam0, &Var0);
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
					func_366(iParam0, &Var0);
				}
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_274(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_55(3, 0);
		}
		func_317(iParam0, 3, 0f, 1);
	}
}

void func_362(char* sParam0)//Position - 0xE39A
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

void func_363(var uParam0, int iParam1, bool bParam2)//Position - 0xE3ED
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if ((func_53(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_365(uParam0->f_29)) && !bParam2)
		{
			func_364(uParam0);
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

void func_364(var uParam0)//Position - 0xE4E1
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_39(func_40(), uParam0->f_29, 0))
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

int func_365(struct<3> Param0)//Position - 0xE6C8
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_366(var uParam0, char* sParam1)//Position - 0xE6F2
{
	if (func_367(uParam0))
	{
		func_348(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_367(var uParam0)//Position - 0xE71A
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_51(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_368()//Position - 0xE758
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

int func_369(var uParam0)//Position - 0xE79E
{
	return uParam0->f_118;
}

void func_370()//Position - 0xE7AA
{
	func_400(&Local_238);
	if (func_399(&Local_238, &Local_352))
	{
		switch (Local_352.f_27)
		{
			case 0:
				if (Local_238.f_410 == 17)
				{
					if (!func_398(&Local_238))
					{
						if (func_397("TAXI_OBJ_FTC1") || HUD::DOES_BLIP_EXIST(Local_238.f_9))
						{
							Local_352.f_27++;
						}
						else if (func_198(&Local_238) != 10)
						{
							func_254(&Local_238, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_198(&Local_238) > 10 && func_198(&Local_238) != 15) && !func_398(&Local_238))
				{
					func_254(&Local_238, 15, 1, 0, 0);
					func_204(&Local_238, 7);
				}
				break;
			}
	}
	func_371(&Local_238, &uLocal_355, &Local_352, bLocal_351);
}

int func_371(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xE887
{
	func_379(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_189(uParam0, 2))
	{
		if (func_378(uParam1))
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
				if (!func_377(uParam0))
				{
					uParam2->f_7 = { func_376(uParam1) };
					func_348(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_211())
				{
					uParam2->f_13 = { func_257() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_68(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_374(uParam1);
					func_317(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_227(uParam0))
				{
					if (func_211())
					{
						func_317(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_373() };
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
				else if (func_211())
				{
					uParam2->f_19 = { func_368() };
				}
				else
				{
					func_68(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_374(uParam1);
					func_317(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_189(uParam0, 14) && !func_211()) && !func_227(uParam0)) && func_116(uParam0, 18) > 1f)
				{
					func_317(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_211())
				{
					if (func_116(uParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_372(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_211())
				{
					func_68(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_374(uParam1);
					func_317(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_372(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xEB27
{
	func_360(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_349(sParam2, iParam4, 0);
}

struct<6> func_373()//Position - 0xEB7B
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

void func_374(var uParam0)//Position - 0xEC27
{
	int iVar0;
	
	iVar0 = func_375(uParam0);
	if (iVar0 > -1)
	{
		func_20(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_20(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_67(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_148(), 24);
	}
}

int func_375(var uParam0)//Position - 0xEC71
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

struct<6> func_376(var uParam0)//Position - 0xECA1
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_67(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_377(var uParam0)//Position - 0xECE8
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_229("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_229("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_229("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_229("TX_OBJ_GYB_DO", 0, 0) || func_229("TAXI_OBJ_GYB", 0, 0)) || func_229("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_229("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_229("TX_OBJ_CYI_DO", 0, 0) || func_229("TAXI_OBJ_CYI_01", 0, 0)) || func_229("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_229("TX_OBJ_GYN_DO", 0, 0) || func_229("TAXI_OBJ_GYN", 0, 0)) || func_229("TAXI_OBJ_GYN_TG", 0, 0)) || func_229("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_229("TAXI_OBJ_CC1", 0, 0) || func_229("TAXI_OBJ_CC2", 0, 0)) || func_229("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_229("TAXI_OBJ_FTC1", 0, 0) || func_229("TAXI_OBJ_FTC2", 0, 0)) || func_229("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_229("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_229("TAXI_OBJ_GETRUN", 0, 0) || func_229("TAXI_OBJ_DRIVE", 0, 0)) || func_229("TAXI_OBJ_RETURN", 0, 0)) || func_229("TAXI_OBJ_POL", 0, 0)) || func_229("TAXI_OBJ_RUNOUT", 0, 0)) || func_229("TAXI_OBJ_POL", 0, 0));
}

int func_378(var uParam0)//Position - 0xEF08
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

void func_379(var uParam0, var uParam1)//Position - 0xEF37
{
	struct<3> Var0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_377(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_189(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_198(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar1 = { Var0 };
				func_396(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_394(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_211())
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
						func_393(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_390(uParam0, Var0, func_392(uParam0, 2));
				}
				if (func_22(uParam0->f_98, 4))
				{
					func_317(uParam0, 16, 0, 0);
					func_279(uParam0, 0, 0);
				}
				func_238(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_116(uParam0, 16) > 1f)
				{
					func_239(1);
					if (uParam0->f_411 == 9)
					{
						func_278("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_278("TAXI_VIP_RETURN", 7500, 1);
					}
					func_317(uParam0, 16, 0, 0);
					func_279(uParam0, 0, 0);
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
					func_393(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_274(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_116(uParam0, 16) > func_131(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_211()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_198(uParam0))
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
				func_393(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar1 = { Var0 };
				func_396(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_394(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_348(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_254(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_317(uParam0, 16, 0, 0);
				func_254(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar1 = { Var0 };
				if (!func_22(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_396(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_393(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_317(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_278("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_278("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_130(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_254(uParam0, 10, 1, 0, 0);
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
				func_256(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_274(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_130(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_254(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_389(uParam0, 33554432, Var0, "", 1, 8);
				func_317(uParam0, 16, 0, 0);
				func_254(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_211())
				{
					func_388(uParam0, 0);
					func_67(&(uParam0->f_44), 4);
					func_317(uParam0, 16, 0, 0);
					func_254(uParam0, 13, 0, 0, 0);
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
				func_256(&Var0);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_116(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_256(&Var0);
					}
					func_386(Var0, uParam1);
					func_67(&(uParam0->f_81), 67108864);
					func_317(uParam0, 16, 0, 0);
					func_317(uParam0, 11, 0, 0);
					func_279(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_116(uParam0, 11) > uParam0->f_36)
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
							func_256(&Var0);
						}
					}
					func_386(Var0, uParam1);
					func_317(uParam0, 11, 0, 0);
					func_317(uParam0, 16, 0, 0);
					func_279(uParam0, 0, 0);
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
					func_256(&Var0);
				}
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
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
				func_256(&Var0);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
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
				func_256(&Var0);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_256(&Var0);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_279(uParam0, 0, 0);
				func_67(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 1, 0, 8);
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
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
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
					func_385(&(uParam0->f_90), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_385(&(uParam0->f_90), 3, &Var0, &iVar5, 1, 0);
				}
				func_386(Var0, uParam1);
				func_394(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 6, 0f, 1);
				func_279(uParam0, 0, 0);
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
					func_385(&(uParam0->f_89), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_385(&(uParam0->f_89), 3, &Var0, &iVar5, 1, 0);
				}
				func_386(Var0, uParam1);
				func_394(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 6, 0f, 1);
				func_279(uParam0, 0, 0);
				break;
			
			case 12:
				func_278("TAXI_OBJ_GYB", 3500, 1);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_278("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_278("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_278("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
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
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_22(uParam0->f_98, 268435456))
				{
					func_278("TAXI_OBJ_CYI_01", 7500, 1);
					func_67(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_256(&Var0);
				func_386(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_256(&Var0);
				func_386(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_256(&Var0);
				func_386(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 33:
				func_278("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_22(uParam0->f_82, 8192))
				{
					if (func_116(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_256(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_386(Var0, uParam1);
						}
						else
						{
							func_393(uParam0, &Var0, 0, 0, 8);
						}
						func_67(&(uParam0->f_82), 8192);
						func_317(uParam0, 16, 0, 0);
						func_317(uParam0, 11, 0, 0);
						func_279(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_22(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_256(&Var0);
					func_393(uParam0, &Var0, 0, 0, 8);
					func_67(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_22(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_256(&Var0);
					func_393(uParam0, &Var0, 0, 0, 8);
					func_67(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 46, 1, 0, 0);
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
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_279(uParam0, 0, 0);
				break;
			
			case 139:
				func_278("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_254(uParam0, 13, 0, 0, 0);
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
					func_67(&(uParam0->f_82), 268435456);
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
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
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
					func_67(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_278("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_279(uParam0, 0, 0);
				func_254(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_211())
				{
					func_278("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_279(uParam0, 0, 0);
					func_254(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_278("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_279(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_22(uParam0->f_81, 1))
				{
					func_384(uParam0, 1, Var0, "_sick1", 8);
					func_20(&(uParam0->f_81), 2);
				}
				else if (!func_22(uParam0->f_81, 2))
				{
					func_384(uParam0, 2, Var0, "_sick2", 8);
					func_20(&(uParam0->f_81), 1);
				}
				func_394(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
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
				func_67(&(uParam0->f_81), 2097152);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_317(uParam0, 16, 0, 0);
				func_394(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_279(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_394(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_394(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_394(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_22(uParam0->f_81, 4))
				{
					func_384(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_22(uParam0->f_81, 8))
				{
					func_384(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_384(uParam0, 8, Var0, "_turns3", 8);
					func_20(&(uParam0->f_81), 4);
					func_20(&(uParam0->f_81), 8);
				}
				func_394(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_383(uParam0))
				{
					func_390(uParam0, Var0, func_392(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_274(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar1 = { Var0 };
					func_396(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					func_348(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar1 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_396(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_396(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				func_394(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_22(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 128);
					func_20(&(uParam0->f_83), 256);
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 256);
					func_20(&(uParam0->f_83), 512);
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 512);
					func_20(&(uParam0->f_83), 128);
					func_317(uParam0, 16, 0, 0);
				}
				func_279(uParam0, 0, 0);
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
						func_256(&Var0);
					}
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 1);
					func_20(&(uParam0->f_83), 2);
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar6)
					{
						func_256(&Var0);
					}
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_20(&(uParam0->f_83), 4);
					}
					else
					{
						func_20(&(uParam0->f_83), 1);
					}
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar6)
					{
						func_256(&Var0);
					}
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 4);
					func_20(&(uParam0->f_83), 1);
					func_317(uParam0, 16, 0, 0);
				}
				func_394(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_22(uParam0->f_81, 4096))
				{
					func_389(uParam0, 4096, Var0, "_sideW1", bVar6, 8);
				}
				else if (!func_22(uParam0->f_81, 8192))
				{
					func_389(uParam0, 8192, Var0, "_sideW2", bVar6, 8);
				}
				func_394(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_22(uParam0->f_81, 16384))
				{
					func_389(uParam0, 16384, Var0, "_opLne1", bVar6, 8);
				}
				else if (!func_22(uParam0->f_81, 32768))
				{
					func_389(uParam0, 32768, Var0, "_opLne2", bVar6, 8);
				}
				func_394(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_22(uParam0->f_82, 8))
					{
						func_382(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 16))
					{
						func_382(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 32))
					{
						func_382(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_394(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_279(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar1 = { Var0 };
					func_396(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					func_394(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_317(uParam0, 16, 0, 0);
					func_279(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar1 = { Var0 };
				func_396(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_394(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar1 = { Var0 };
				func_396(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_394(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_22(uParam0->f_81, 65536))
				{
					func_389(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 131072))
				{
					func_389(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_279(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_383(uParam0))
				{
					func_390(uParam0, Var0, func_392(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_274(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_22(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 8);
					func_20(&(uParam0->f_83), 16);
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 16);
					func_20(&(uParam0->f_83), 32);
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_20(&(uParam0->f_83), 64);
					}
					else
					{
						func_20(&(uParam0->f_83), 8);
					}
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 64);
					func_20(&(uParam0->f_83), 8);
					func_317(uParam0, 16, 0, 0);
				}
				func_394(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_211())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_393(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_390(uParam0, Var0, func_392(uParam0, 65));
					func_279(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_211())
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
					func_393(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_390(uParam0, Var0, func_392(uParam0, 66));
					func_279(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_211())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								func_394(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								func_394(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar1 = { Var0 };
								func_396(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
								func_394(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								func_317(uParam0, 16, 0, 0);
								func_279(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar1 = { Var0 };
									func_393(uParam0, &Var0, 0, 0, 8);
									func_317(uParam0, 16, 0, 0);
									func_317(uParam0, 11, 0, 0);
									func_279(uParam0, 0, 0);
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
									func_256(&Var0);
									func_393(uParam0, &Var0, 0, 0, 8);
									func_317(uParam0, 16, 0, 0);
									func_317(uParam0, 11, 0, 0);
									func_279(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_254(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar1 = { Var0 };
				func_396(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_394(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_22(uParam0->f_82, 1))
				{
					func_382(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 2))
				{
					func_382(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 4))
				{
					func_382(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_279(uParam0, 0, 0);
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
				func_396(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_274(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_317(uParam0, 16, 0, 0);
				func_394(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_383(uParam0))
				{
					func_390(uParam0, Var0, func_392(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_274(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_381(uParam0, Var0, 8);
				}
				func_394(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_22(uParam0->f_83, 1024))
				{
					func_67(&(uParam0->f_83), 1024);
					func_317(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2048))
				{
					func_67(&(uParam0->f_83), 2048);
					func_317(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4096))
				{
					func_67(&(uParam0->f_83), 4096);
					func_317(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_279(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_22(uParam0->f_82, 1024))
				{
					func_382(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_20(&(uParam0->f_82), 2048);
				}
				else if (!func_22(uParam0->f_82, 2048))
				{
					func_382(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_279(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar1 = { Var0 };
				func_396(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_394(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 52, 1, 0, 0);
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
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_274(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_383(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar1 = { Var0 };
						cVar1 = { Var0 };
						func_393(uParam0, &Var0, 0, 0, 8);
						func_254(uParam0, 52, 1, 0, 0);
						func_317(uParam0, 16, 0, 0);
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
						func_393(uParam0, &Var0, 0, 0, 8);
						func_317(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar1 = { Var0 };
					func_396(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					func_317(uParam0, 16, 0, 0);
					func_279(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_394(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_317(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					func_278("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_279(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_22(uParam0->f_81, 262144))
				{
					func_389(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_389(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_389(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_394(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_380(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_22(uParam0->f_82, 134217728))
				{
					func_380(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_394(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar1 = { Var0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 100:
				func_278("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_279(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_256(&Var0);
				}
				func_67(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_256(&Var0);
				}
				func_67(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_393(uParam0, &Var0, 0, 0, 8);
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
					func_256(&Var0);
				}
				func_67(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_22(uParam0->f_82, 65536))
				{
					if (func_116(uParam0, 11) > uParam0->f_36)
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
						func_256(&Var0);
						func_386(Var0, uParam1);
						func_67(&(uParam0->f_82), 65536);
						func_317(uParam0, 16, 0, 0);
						func_317(uParam0, 11, 0, 0);
						func_279(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_22(uParam0->f_82, 131072))
				{
					if (func_116(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_256(&Var0);
						func_386(Var0, uParam1);
						func_67(&(uParam0->f_82), 131072);
						func_317(uParam0, 16, 0, 0);
						func_317(uParam0, 11, 0, 0);
						func_279(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_22(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_67(&(uParam0->f_82), 8388608);
				}
				else if (!func_22(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_67(&(uParam0->f_82), 16777216);
				}
				else if (!func_22(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_67(&(uParam0->f_82), 33554432);
				}
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar1 = { Var0 };
					func_396(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					func_256(&Var0);
					func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar1 = { Var0 };
				func_396(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar1 = { Var0 };
				func_396(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_67(&(uParam0->f_81), 2097152);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_256(&Var0);
				func_386(Var0, uParam1);
				func_67(&(uParam0->f_81), 67108864);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_22(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_389(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_274(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_254(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_22(uParam0->f_81, 268435456))
				{
					func_389(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_254(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_278("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_279(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_22(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_389(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							func_274(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_389(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_254(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_278("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_279(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_22(uParam0->f_81, 16777216))
				{
					func_389(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_279(uParam0, 0, 0);
				break;
			
			case 88:
				func_278("TAXI_TIEFLEE", 7500, 1);
				func_279(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_22(uParam0->f_98, 536870912))
				{
					func_278("TAXI_OBJ_CYI_1B", 7500, 1);
					func_67(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_279(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
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
				func_393(uParam0, &Var0, 0, 0, 8);
				func_279(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_279(uParam0, 0, 0);
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
				func_393(uParam0, &Var0, 0, 0, 8);
				func_279(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_393(uParam0, &Var0, 1, 0, 8);
				func_254(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_278("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_254(uParam0, 0, 0, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			}
	}
}

void func_380(var uParam0, int iParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x121F6
{
	func_67(&(uParam0->f_82), iParam1);
	func_317(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_256(&Param2);
	}
	func_348(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_381(var uParam0, struct<6> Param1, int iParam2)//Position - 0x12237
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_22(uParam0->f_82, 64))
	{
		func_67(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_22(uParam0->f_82, 128))
	{
		func_67(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_395(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	func_317(uParam0, 16, 0, 0);
}

void func_382(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0x122BE
{
	func_67(&(uParam0->f_82), iParam1);
	func_317(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			func_256(&Param2);
		}
	}
	func_348(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

int func_383(var uParam0)//Position - 0x1233E
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_384(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0x123A4
{
	func_67(&(uParam0->f_81), iParam1);
	func_317(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	func_348(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_385(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x123DA
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_297(*uParam0, iVar1))
		{
			func_68(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_256(sParam2);
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

void func_386(char[24] cParam0, var uParam1)//Position - 0x1245B
{
	int iVar0;
	
	iVar0 = func_387(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_67(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_387(var uParam0)//Position - 0x1248A
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

void func_388(var uParam0, bool bParam1)//Position - 0x124B7
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_278("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_278("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_278("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_278("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_278("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_278("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_278("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_278("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_278("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_278("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_278("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_278("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_389(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x1266E
{
	func_67(&(uParam0->f_81), iParam1);
	func_317(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_256(&Param2);
	}
	func_348(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_390(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0x126AF
{
	func_317(uParam0, 16, 0, 0);
	func_317(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_391(uParam0));
	}
}

char* func_391(var uParam0)//Position - 0x126ED
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

char* func_392(var uParam0, int iParam1)//Position - 0x12788
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

int func_393(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x12B31
{
	func_317(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_317(uParam0, 17, 0f, 1);
	}
	func_279(uParam0, iParam2, 0);
	return func_348(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_394(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0x12B6E
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
				func_20(uParam2, 4096);
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
				func_20(uParam2, 4096);
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
				func_20(uParam2, 4096);
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
				func_20(uParam2, 4096);
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

int func_395(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13178
{
	func_360(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_349(sParam2, iParam4, 0);
}

void func_396(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x131CC
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_297(*uParam0, iVar1))
		{
			func_68(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_256(sParam2);
				}
				else
				{
					func_256(sParam2);
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

int func_397(char* sParam0)//Position - 0x13263
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (func_229(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_398(var uParam0)//Position - 0x13285
{
	if (func_211())
	{
		return 1;
	}
	if (func_189(uParam0, 17))
	{
		return 1;
	}
	if (func_189(uParam0, 14))
	{
		return 1;
	}
	if (func_227(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_399(var uParam0, var uParam1)//Position - 0x132C4
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_189(uParam0, 9));
}

void func_400(var uParam0)//Position - 0x132EB
{
	if (func_189(uParam0, 17))
	{
		if (!func_189(uParam0, 14))
		{
			if (!func_227(uParam0))
			{
				if (!func_211())
				{
					func_208(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_401(var uParam0)//Position - 0x13325
{
	return uParam0->f_117;
}

void func_402(var uParam0, var uParam1, bool bParam2)//Position - 0x13331
{
	if (!func_22(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_124)) && func_211())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_211())
				{
					StringCopy(&(uParam0->f_124), func_148(), 24);
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

void func_403(var uParam0)//Position - 0x133B7
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_165.f_0 > 0 && !func_297(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165.f_0 - 1))
				{
					if (func_297(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_297(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_68(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_21(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_297(Local_165.f_1[iVar0 /*4*/], 4) && !func_297(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_68(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_361(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_404(var uParam0, var uParam1)//Position - 0x134CA
{
	var uVar0;
	
	if (!func_189(uParam0, 27))
	{
		func_204(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_116(uParam0, 27) > 5f)
	{
		if (func_431(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_317(uParam0, 27, 0, 0);
			func_317(uParam0, 10, 0, 0);
			func_429(uParam0, &uVar0, uParam1);
		}
		func_426(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_405(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_211())
	{
		if (func_116(uParam0, 26) > 10f)
		{
			func_208(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (func_189(uParam0, 26))
	{
		func_208(uParam0, 26, 0);
	}
	return 0;
}

void func_405(var uParam0)//Position - 0x135F4
{
	if (!func_425(uParam0->f_429))
	{
		uParam0->f_429 = func_424();
		func_415(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_406(uParam0->f_429))
	{
		func_361(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_406(int iParam0)//Position - 0x13641
{
	return func_407(func_424(), iParam0);
}

int func_407(int iParam0, int iParam1)//Position - 0x13653
{
	int iVar0;
	int iVar1;
	
	if (!func_425(iParam1) || !func_425(iParam0))
	{
		return 1;
	}
	iVar0 = func_413(iParam0);
	iVar1 = func_413(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_412(iParam0);
	iVar1 = func_412(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_411(iParam0);
	iVar1 = func_411(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_410(iParam0);
	iVar1 = func_410(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_409(iParam0);
	iVar1 = func_409(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_408(iParam0);
	iVar1 = func_408(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0)//Position - 0x1375F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_409(int iParam0)//Position - 0x13772
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_410(int iParam0)//Position - 0x13785
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_411(int iParam0)//Position - 0x13798
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_412(int iParam0)//Position - 0x137AA
{
	return iParam0 & 15;
}

var func_413(int iParam0)//Position - 0x137B7
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_414(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_414(bool bParam0, int iParam1, int iParam2)//Position - 0x137D9
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_415(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x137F0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_413(*uParam0);
	iVar1 = func_412(*uParam0);
	iVar2 = func_411(*uParam0);
	iVar3 = func_410(*uParam0);
	iVar4 = func_409(*uParam0);
	iVar5 = func_408(*uParam0);
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
	iVar6 = func_423(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_423(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_416(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_416(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13972
{
	func_422(uParam0, iParam1);
	func_421(uParam0, iParam2);
	func_420(uParam0, iParam3);
	func_419(uParam0, iParam5);
	func_418(uParam0, iParam4);
	func_417(uParam0, iParam6);
}

void func_417(var uParam0, int iParam1)//Position - 0x139AA
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

void func_418(var uParam0, int iParam1)//Position - 0x13A30
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_412(*uParam0);
	iVar1 = func_413(*uParam0);
	if (iParam1 < 1 || iParam1 > func_423(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_419(var uParam0, int iParam1)//Position - 0x13A81
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_420(var uParam0, int iParam1)//Position - 0x13AB4
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_421(var uParam0, int iParam1)//Position - 0x13AEE
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_422(var uParam0, int iParam1)//Position - 0x13B29
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_423(int iParam0, int iParam1)//Position - 0x13B65
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

int func_424()//Position - 0x13C07
{
	var uVar0;
	
	func_422(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_421(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_420(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_418(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_419(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_417(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_425(int iParam0)//Position - 0x13C4D
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
	iVar0 = func_408(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_409(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_410(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_413(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_412(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_411(iParam0);
	if (iVar5 < 1 || iVar5 > func_423(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_426(var uParam0)//Position - 0x13D29
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_428()) && !func_207(uParam0)) || ((uParam0->f_411 != 9 && func_283(uParam0, 1)) && !func_207(uParam0)))
		{
			uVar0 = func_427(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, false);
			func_242(uParam0);
			func_234(uParam0, 0);
		}
	}
}

var func_427(var uParam0)//Position - 0x13DBF
{
	return uParam0;
}

int func_428()//Position - 0x13DC9
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
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_19()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_429(var uParam0, var uParam1, var uParam2)//Position - 0x13E20
{
	switch (*uParam1)
	{
		case 1:
			if (func_430(uParam0, 0, 1))
			{
				func_361(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_430(uParam0, 0, 4))
			{
				func_361(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_430(uParam0, 0, 8))
			{
				func_361(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_430(uParam0, 1, 1))
			{
				func_361(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_430(uParam0, 0, 1))
			{
				func_361(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_22(*uParam2, 2) && func_223(uParam0))
			{
				func_361(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_430(var uParam0, int iParam1, int iParam2)//Position - 0x13EFB
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
				func_254(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_254(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_431(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x13F78
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_22(*uParam2, 1))
		{
			if (func_437(iParam0, uParam2))
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
			if (func_435(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_22(*uParam2, 8))
		{
			if (func_434(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_22(*uParam2, 128);
		if (bParam4)
		{
			if (func_432(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_22(*uParam2, 16))
		{
			if (func_432(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_432(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x140A3
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
	if (func_433(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_233(iParam0, 1) < 1.5f)
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

int func_433(int iParam0, int iParam1)//Position - 0x1426B
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

int func_434(int iParam0, int iParam1, var uParam2)//Position - 0x142C0
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

int func_435(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x1430E
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
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_436(iVar1))
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

int func_436(int iParam0)//Position - 0x14487
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
						if (func_51(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
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

int func_437(int iParam0, var uParam1)//Position - 0x14555
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_233(iParam0, 1) < uParam1->f_2)
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

void func_438(var uParam0)//Position - 0x145DA
{
	if (!func_22(uParam0->f_98, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (func_53(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_17, 25f, false, false, false, false, false, false, 0);
				func_67(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_439()//Position - 0x14632
{
	func_440(&Local_238);
	func_462(2);
	func_458();
}

void func_440(var uParam0)//Position - 0x1464A
{
	func_54(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_462(2);
	}
}

int func_441(var uParam0, bool bParam1)//Position - 0x14669
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_211() && func_116(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
				{
					if (func_66(uParam0) == 0 || func_297(uParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							func_363(uParam0, 4160, 0);
						}
						else
						{
							func_363(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_363(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_363(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_363(uParam0, 0, 0);
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

void func_442(var uParam0)//Position - 0x14768
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

int func_443(var uParam0)//Position - 0x147A9
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_444()//Position - 0x147CA
{
	func_447(&Local_238, 8);
	Local_238.f_410 = 0;
	func_446(&Local_238, 3, 6);
	Local_238.f_23 = { 1412.324f, -1518.315f, 58.4644f };
	Local_238.f_33 = 114.1f;
	Local_238.f_26 = { Local_286 };
	Local_238.f_34 = 95.93f;
	func_445(&Local_238, &Local_251);
	Local_251.f_0 = joaat("s_m_m_doctor_01");
	Local_251.f_1 = joaat("bison");
}

void func_445(var uParam0, var uParam1)//Position - 0x1483D
{
	int iVar0;
	
	iVar0 = Global_113386.f_19097.f_39[uParam0->f_411];
	uParam1->f_20 = 1;
	uParam1->f_32 = -1817882002;
	uParam1->f_12 = (0.7f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_13 = (0.8f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_14 = (24f + IntToFloat((10 * iVar0)));
}

void func_446(var uParam0, int iParam1, int iParam2)//Position - 0x1489B
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_447(var uParam0, int iParam1)//Position - 0x148AF
{
	func_457(1);
	func_244();
	func_7(&(uParam0->f_244));
	func_456(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_22(Global_113386.f_19097, 4))
	{
		func_67(&(Global_113386.f_19097), 4);
	}
	func_451(uParam0);
	func_449(uParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	uParam0->f_102 = (func_448(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}

int func_448(int iParam0)//Position - 0x14931
{
	return Global_113386.f_19097.f_39[iParam0];
}

void func_449(var uParam0)//Position - 0x14946
{
	switch (func_66(uParam0))
	{
		case 0:
			func_450(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_450(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_450(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_450(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_450(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_450(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_450(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_450(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_450(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_450(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_450(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x14A99
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_451(var uParam0)//Position - 0x14AB3
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_455(uParam0, 3);
			func_454(uParam0, 14);
			break;
		
		case 1:
			func_455(uParam0, 14);
			func_454(uParam0, 8);
			break;
		
		case 2:
			func_455(uParam0, 8);
			func_454(uParam0, 7);
			break;
		
		case 3:
			func_455(uParam0, 15);
			func_454(uParam0, 6);
			break;
		
		case 4:
			func_455(uParam0, 0);
			func_454(uParam0, 3);
			break;
		
		case 5:
			func_455(uParam0, 6);
			func_454(uParam0, 7);
			break;
		
		case 6:
			func_455(uParam0, 8);
			func_454(uParam0, 15);
			break;
		
		case 7:
			func_455(uParam0, 8);
			func_454(uParam0, 14);
			break;
		
		case 8:
			func_455(uParam0, 7);
			func_454(uParam0, 15);
			break;
		
		case 9:
			func_455(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_453((uParam0->f_418.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_454(uParam0, iVar0);
			func_452(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_452(var uParam0)//Position - 0x14BEA
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

int func_453(int iParam0, int iParam1, int iParam2)//Position - 0x14CAB
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

void func_454(var uParam0, int iParam1)//Position - 0x14D4D
{
	uParam0->f_418.f_1 = iParam1;
}

void func_455(var uParam0, int iParam1)//Position - 0x14D5E
{
	uParam0->f_418.f_2 = iParam1;
}

void func_456(var uParam0)//Position - 0x14D6F
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_40() };
	uParam0->f_17 = { func_40() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_208(uParam0, 32, 0);
}

void func_457(bool bParam0)//Position - 0x14DCD
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

void func_458()//Position - 0x14DF9
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_287, Local_288, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_293, Local_294, true, true);
	func_140(Local_299, 60f, 0);
	func_140(Local_300, 60f, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_261, false);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_260);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_259);
	TASK::REMOVE_WAYPOINT_RECORDING(&cLocal_309);
	func_251(385.1685f, -1372.719f, 29.8554f, 1, 50f);
	func_461();
	func_460();
	func_459();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_251.f_1, false);
	func_157(&uLocal_45, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_459()//Position - 0x14E9B
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_254);
	STREAMING::REMOVE_ANIM_DICT("MOVE_DUCK_FOR_COVER");
	STREAMING::REMOVE_ANIM_DICT(&cLocal_312);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_321);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_330);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_339);
}

void func_460()//Position - 0x14ECE
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_251.f_0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_251.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_255);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_256);
	TASK::REMOVE_WAYPOINT_RECORDING(&cLocal_309);
	STREAMING::REMOVE_ANIM_DICT("veh@truck@ds@base");
}

void func_461()//Position - 0x14F03
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_253);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
}

void func_462(int iParam0)//Position - 0x14F1A
{
	Global_112096.f_22 = iParam0;
}

