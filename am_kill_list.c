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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
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
	struct<617> Local_91 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_92 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_93[4] = { 0, 0, 0, 0 };
	struct<18> Local_94[32];
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	float fLocal_101 = 0f;
	int iLocal_102[4] = { 0, 0, 0, 0 };
	struct<8> Local_103[24];
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107[4] = { 0, 0, 0, 0 };
	int iLocal_108[4] = { 0, 0, 0, 0 };
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	int* iLocal_111 = NULL;
	struct<42> Local_112[32];
	struct<104> Local_113 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = -1;
	var uLocal_120 = -1;
	var uLocal_121 = -1;
	var uLocal_122 = -1;
	var uLocal_123 = -1;
	var uLocal_124 = -1;
	var uLocal_125 = 0;
	var uLocal_126 = 32;
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
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
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
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553[4] = { 0, 0, 0, 0 };
	int iLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	int iLocal_558 = 0;
	struct<2> Local_559[10];
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	struct<2> Local_570[5];
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	int iLocal_575 = 0;
	struct<3> Local_576 = { 0, 0, 0 } ;
	int iLocal_577 = 0;
	var uLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_583 = 0;
	int iLocal_584[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_585 = 0;
	var uLocal_586[4] = { 0, 0, 0, 0 };
	var uLocal_587[4] = { 0, 0, 0, 0 };
	struct<21> Local_588 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_101 = -100f;
	iLocal_551 = -1;
	iLocal_552 = -1;
	iLocal_579 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_869(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_857(ScriptParam_588);
	}
	else
	{
		func_811();
	}
	while (true)
	{
		func_810();
		if (func_806())
		{
			func_811();
		}
		else if (func_803(19))
		{
			func_811();
		}
		if (func_802())
		{
			func_811();
		}
		func_777();
		switch (func_776(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if ((func_775() == 1 && Local_91.f_1 != -1) && Local_91.f_2 != -1)
				{
					func_773();
					func_769(129, Local_91.f_1, Local_91.f_2, 0);
					if (Global_2815059.f_5119 == -1)
					{
						if (!func_768())
						{
							Global_2815059.f_5119 = 0;
						}
						else
						{
							Global_2815059.f_5119 = 1;
						}
					}
					func_767(Local_91.f_30[0 /*3*/]);
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 1;
				}
				else if (func_775() == 4)
				{
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_775() == 1)
				{
					func_762();
					func_761();
					func_743();
					func_432();
					func_165();
					func_164();
					func_163();
				}
				else if (func_775() == 4)
				{
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_162(&(Local_91.f_320));
				if (func_161(&(Local_91.f_320)))
				{
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
			
			case 4:
				func_811();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_775())
			{
				case 0:
					if (func_146())
					{
						if (func_141())
						{
							func_137(func_139(129, Local_91.f_1, Local_91.f_2, 0));
							Local_91.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_128();
					func_32();
					func_24();
					if (func_1())
					{
						Local_91.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x27A
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x28E
{
	int iVar0;
	int iVar1;
	
	if ((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2))
	{
		if (!BitTest(Local_91.f_3, 11))
		{
			return 0;
		}
	}
	else if (BitTest(Local_91.f_3, 6))
	{
		if (!BitTest(Local_91.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_91.f_241 > 0)
	{
		if (Local_91.f_0 != 4)
		{
			if (func_23())
			{
				if (Local_91.f_241 == 3)
				{
					if (func_21())
					{
						if (BitTest(Local_91.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_19(&(Local_91.f_322), 3000, 0))
				{
					if (func_21())
					{
						return 1;
					}
				}
			}
		}
		if (Local_91.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_91.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
					{
						if (!func_16(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)), 0))
						{
							if (Local_94[iVar1 /*18*/].f_17 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2)) && !BitTest(Local_91.f_3, 6)) && !BitTest(Local_91.f_3, 14))
				{
					MISC::SET_BIT(&(Local_91.f_3), 15);
				}
				func_7();
			}
			else if (Local_91.f_241 < 3)
			{
				if (func_3())
				{
					MISC::SET_BIT(&(Local_91.f_3), 16);
					MISC::SET_BIT(&(Local_91.f_3), 15);
					func_7();
				}
			}
		}
	}
	return 0;
}

int func_3()//Position - 0x402
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			if (!func_4(NETWORK::NET_TO_VEH(Local_91.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x44C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_6(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_5()) && func_869(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_5()//Position - 0x530
{
	return -1;
}

int func_6(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x539
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_7()//Position - 0x5D4
{
	if (Local_91.f_241 != 3)
	{
		func_9();
		func_8(&(Local_91.f_324), 0, 0);
		Local_91.f_241 = 3;
	}
}

void func_8(var uParam0, bool bParam1, bool bParam2)//Position - 0x5F8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_9()//Position - 0x635
{
	if (!func_15())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574757.f_9)
	{
		return;
	}
	func_10();
}

void func_10()//Position - 0x662
{
	func_12();
	func_11(0);
}

void func_11(bool bParam0)//Position - 0x673
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574757.f_12), "", 16);
	StringCopy(&(Global_1574757.f_16), "", 64);
	StringCopy(&(Global_1574757.f_32), "", 64);
	Global_1574757.f_52 = 0;
	Global_1574757.f_53 = 0;
	Global_1574757.f_54 = 0;
	Global_1574757.f_55 = -1;
	Global_1574757.f_56 = 0;
	Global_1574757.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_12()//Position - 0x701
{
	if (!func_14())
	{
	}
	if (func_15())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
		func_13();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_13()//Position - 0x72A
{
	switch (Global_1574757)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		default:
	}
}

bool func_14()//Position - 0x99C
{
	if (!func_15())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	func_13();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_15()//Position - 0x9C2
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_16(int iParam0, int iParam1)//Position - 0x9D8
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_17(-1, 0) == 8;
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

int func_17(int iParam0, bool bParam1)//Position - 0xA23
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
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

int func_18()//Position - 0xA64
{
	return Global_1574918;
}

int func_19(var uParam0, int iParam1, bool bParam2)//Position - 0xA70
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0, bool bParam1, bool bParam2)//Position - 0xACE
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_21()//Position - 0xB13
{
	int iVar0;
	
	if (!func_22(&(Local_91.f_328)))
	{
		func_20(&(Local_91.f_328), 0, 0);
	}
	else if (func_19(&(Local_91.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar0]))
		{
			if (Local_91.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_22(var uParam0)//Position - 0xB7D
{
	return uParam0->f_1;
}

int func_23()//Position - 0xB89
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_7[iVar0]), false))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_24()//Position - 0xBCC
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	bVar1 = false;
	while (bVar1 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar1]))
		{
			if (!func_31(Local_91.f_48[bVar1]))
			{
				switch (Local_91.f_85[bVar1])
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bVar1]), false))
						{
							Local_91.f_85[bVar1] = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bVar1]), false) && func_30(bVar1))
						{
							Local_91.f_85[bVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_91.f_241 == 1)
						{
							if (!func_23())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bVar1]), false))
								{
									iVar4 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_91.f_48[bVar1]), false);
									if (func_29(iVar4, 250f))
									{
										Local_91.f_85[bVar1] = 2;
									}
									else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)))
									{
										if ((bVar1 % 4) == 0)
										{
											iVar0 = (bVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_91.f_110[iVar0] == -1 || !func_28(bVar1))
												{
													iVar2 = func_27();
													if (iVar2 != func_5())
													{
														iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
														if (!PED::IS_PED_INJURED(iVar3))
														{
															if (func_26(iVar4, iVar3, 1) > 250f)
															{
																Local_91.f_110[iVar0] = iVar2;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									Local_91.f_85[bVar1] = 2;
								}
							}
							else
							{
								Local_91.f_85[bVar1] = 3;
							}
						}
						else
						{
							Local_91.f_85[bVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_91.f_241 == 1)
						{
							if (func_23())
							{
								Local_91.f_85[bVar1] = 3;
							}
							else if (BitTest(Local_91.f_3, 6))
							{
								Local_91.f_85[bVar1] = 3;
							}
							else if (BitTest(Local_91.f_464, bVar1))
							{
								Local_91.f_85[bVar1] = 1;
								MISC::CLEAR_BIT(&(Local_91.f_464), bVar1);
							}
						}
						else
						{
							Local_91.f_85[bVar1] = 3;
						}
						break;
					
					case 3:
						if (PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(Local_91.f_48[bVar1])))
						{
							func_25(&(Local_91.f_48[bVar1]));
							Local_91.f_85[bVar1] = 4;
						}
						break;
					}
				}
		}
		bVar1++;
	}
}

void func_25(var uParam0)//Position - 0xDFB
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

float func_26(int iParam0, int iParam1, bool bParam2)//Position - 0xE1F
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

int func_27()//Position - 0xE7D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_5();
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iVar0 == func_5())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_94[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_94[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_28(int iParam0)//Position - 0xEDE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_91.f_110[iVar0] != -1)
			{
				iVar3 = Local_91.f_110[iVar0];
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (func_869(iVar1, 1, 1))
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
							iVar3 = iVar2;
							if (Local_94[iVar3 /*18*/].f_17 != 1)
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
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_29(int iParam0, float fParam1)//Position - 0xF68
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_94[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_94[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
					iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (func_26(iParam0, iVar2, 1) < fParam1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0xFDE
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[iParam0]), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_91.f_48[iParam0]), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0)//Position - 0x1022
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_32()//Position - 0x1041
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_91.f_463 > 0)
	{
		if (Local_91.f_28 != Local_91.f_463)
		{
			Local_91.f_28 = Local_91.f_463;
		}
	}
	switch (Local_91.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_91.f_28)
			{
				if (Local_91.f_17[iVar0] == func_5())
				{
				}
				else
				{
					iVar1++;
					if (BitTest(Local_91.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_125();
			func_124();
			if (BitTest(Local_91.f_3, 4))
			{
				Local_91.f_463 = iVar1;
			}
			if (func_122())
			{
				func_115();
				Local_91.f_241 = 1;
			}
			else if (BitTest(Local_91.f_3, 4) && func_112() > 1)
			{
				func_111();
				func_115();
				Local_91.f_241 = 1;
			}
			if (!func_768())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[0]))
				{
					if (!func_109(Local_91.f_7[0]))
					{
						Var2.f_2 = -1324280291;
						func_107(Var2, func_108(NETWORK::NET_TO_VEH(Local_91.f_7[0]), 1, 0));
						Local_91.f_241 = 2;
					}
				}
			}
			if (Local_91.f_241 == 0)
			{
				if (!func_22(&(Local_91.f_330)))
				{
					if (!func_22(&(Local_91.f_326)))
					{
						func_20(&(Local_91.f_330), 0, 0);
					}
				}
				else if (func_22(&(Local_91.f_326)))
				{
					func_106(&(Local_91.f_330));
				}
				else if (func_19(&(Local_91.f_330), func_105(), 0))
				{
					Var2.f_2 = -1324280291;
					func_107(Var2, func_104(1));
					MISC::SET_BIT(&(Local_91.f_3), 12);
					func_7();
				}
				if (BitTest(Local_91.f_3, 14))
				{
					func_7();
				}
			}
			break;
		
		case 1:
			func_35();
			func_33();
			func_111();
			if (BitTest(Local_91.f_3, 6))
			{
				Local_91.f_241 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

void func_33()//Position - 0x1215
{
	if (!BitTest(Local_91.f_3, 19))
	{
		return;
	}
	if (!BitTest(Local_91.f_3, 6))
	{
		if (!func_22(&(Local_91.f_332)))
		{
			func_20(&(Local_91.f_332), 0, 0);
			MISC::SET_BIT(&(Local_91.f_3), 7);
		}
		else if (func_19(&(Local_91.f_332), func_34(), 0))
		{
			MISC::SET_BIT(&(Local_91.f_3), 6);
		}
	}
}

int func_34()//Position - 0x1273
{
	if (func_768())
	{
		return Global_262145.f_11581;
	}
	return Global_262145.f_11558;
}

void func_35()//Position - 0x1296
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	
	bVar2 = true;
	bVar3 = false;
	if (Local_91.f_278 > 0)
	{
		if (Local_91.f_279 >= Local_91.f_278)
		{
			if (Local_91.f_254 >= Local_91.f_255)
			{
				MISC::SET_BIT(&(Local_91.f_3), 0);
				MISC::SET_BIT(&(Local_91.f_3), 1);
				MISC::SET_BIT(&(Local_91.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_91.f_278 > 0)
		{
			if (Local_91.f_279 >= Local_91.f_278)
			{
				if (Local_91.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_91.f_256[0]);
				}
				if (Local_91.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_91.f_256[1]);
				}
				if (Local_91.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_91.f_256[2]);
				}
				if (Local_91.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_91.f_256[3]);
				}
				if (iVar5 >= Local_91.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar4]))
						{
							if (!func_31(Local_91.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						MISC::SET_BIT(&(Local_91.f_3), 0);
						MISC::SET_BIT(&(Local_91.f_3), 1);
						MISC::SET_BIT(&(Local_91.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar4]))
					{
						if (!func_31(Local_91.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_22(&(Local_91.f_347)))
					{
						func_20(&(Local_91.f_347), 0, 0);
					}
					else if (func_19(&(Local_91.f_347), 3000, 0))
					{
						MISC::SET_BIT(&(Local_91.f_3), 0);
						MISC::SET_BIT(&(Local_91.f_3), 1);
						MISC::SET_BIT(&(Local_91.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!BitTest(Local_91.f_3, 0) || !BitTest(Local_91.f_3, 1))
	{
		if (Local_91.f_249 >= func_103())
		{
			MISC::SET_BIT(&(Local_91.f_3), 0);
			MISC::SET_BIT(&(Local_91.f_3), 1);
		}
		bVar0 = false;
		while (bVar0 < Local_91.f_242)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_73[bVar0]))
			{
				if (func_102(bVar0))
				{
					if (!BitTest(Local_91.f_245, bVar0))
					{
						if ((Local_91.f_27 != joaat("hydra") && !func_4(NETWORK::NET_TO_VEH(Local_91.f_73[bVar0]), 1, 0, 0, 0, 0, 1, 0, 1)) || Local_91.f_27 == joaat("hydra"))
						{
							MISC::CLEAR_BIT(&(Local_91.f_3), 0);
							if (func_22(&(Local_570[bVar0 /*2*/])))
							{
								func_106(&(Local_570[bVar0 /*2*/]));
							}
						}
						else if (func_4(NETWORK::NET_TO_VEH(Local_91.f_73[bVar0]), 1, 0, 0, 0, 0, 1, 0, 1) && ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bVar0])) == joaat("savage"))
						{
							if (BitTest(Local_91.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_91.f_3), 0);
							}
							if (!BitTest(Local_91.f_3, 18))
							{
								func_101(func_104(1), bVar0);
								MISC::SET_BIT(&(Local_91.f_3), 18);
							}
						}
						else if (func_100(bVar0) || !func_768())
						{
							if (BitTest(Local_91.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_91.f_3), 0);
							}
							if (!BitTest(Local_91.f_303, bVar0))
							{
								func_99(func_104(1), bVar0);
								MISC::SET_BIT(&(Local_91.f_303), bVar0);
							}
						}
						else
						{
							func_25(&(Local_91.f_73[bVar0]));
							if (!BitTest(Local_91.f_253, bVar0))
							{
								Local_91.f_251 = (Local_91.f_251 - 1);
								if (func_98() > 1)
								{
									if (Local_91.f_252 > 0)
									{
										Local_91.f_302++;
										func_97(bVar0, func_104(1));
									}
								}
								MISC::SET_BIT(&(Local_91.f_253), bVar0);
							}
							func_106(&(Local_570[bVar0 /*2*/]));
						}
					}
				}
				else if (func_96(bVar0))
				{
					if (!BitTest(Local_91.f_253, bVar0))
					{
						Local_91.f_251 = (Local_91.f_251 - 1);
						if (func_98() > 1)
						{
							if (Local_91.f_252 > 0)
							{
								Local_91.f_302++;
								func_97(bVar0, func_104(1));
							}
						}
						if (Local_91.f_27 == joaat("hydra"))
						{
							Local_91.f_254++;
						}
						MISC::SET_BIT(&(Local_91.f_253), bVar0);
					}
					if (func_22(&(Local_91.f_336[bVar0 /*2*/])))
					{
						func_106(&(Local_91.f_336[bVar0 /*2*/]));
					}
					func_25(&(Local_91.f_73[bVar0]));
				}
				else
				{
					if (BitTest(Local_91.f_3, 0))
					{
						MISC::CLEAR_BIT(&(Local_91.f_3), 0);
					}
					if (!BitTest(Local_91.f_271, bVar0))
					{
						if (!func_22(&(Local_91.f_336[bVar0 /*2*/])))
						{
							func_20(&(Local_91.f_336[bVar0 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_91.f_336[bVar0 /*2*/]), 5000, 0))
						{
							MISC::SET_BIT(&(Local_91.f_271), bVar0);
						}
						else if (func_19(&(Local_91.f_336[bVar0 /*2*/]), 3000, 0))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bVar0])) == joaat("savage"))
							{
								if (!BitTest(Local_91.f_3, 18))
								{
									func_101(func_104(1), bVar0);
									MISC::SET_BIT(&(Local_91.f_3), 18);
								}
							}
							else if (func_100(bVar0) || !func_768())
							{
								if (!BitTest(Local_91.f_303, bVar0))
								{
									func_99(func_104(1), bVar0);
									MISC::SET_BIT(&(Local_91.f_303), bVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_91.f_116)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[(bVar0 * 4 + iVar1)]))
				{
					bVar6 = (bVar0 * 4 + iVar1);
					if (!func_31(Local_91.f_48[(bVar0 * 4 + iVar1)]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[(bVar0 * 4 + iVar1)]), false))
						{
							if (!func_94((bVar0 * 4 + iVar1)))
							{
								MISC::CLEAR_BIT(&(Local_91.f_3), 0);
							}
							else if (func_93(bVar6))
							{
								if (!func_19(&(Local_91.f_414[(bVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_91.f_48[(bVar0 * 4 + iVar1)])))
								{
									func_92(&(Local_103[(bVar0 * 4 + iVar1) /*8*/]));
								}
								func_25(&(Local_91.f_48[(bVar0 * 4 + iVar1)]));
								if (BitTest(Local_91.f_272[func_91(bVar6)], func_90(bVar6)))
								{
									if (Local_91.f_85[(bVar0 * 4 + iVar1)] > 0)
									{
										func_89((bVar0 * 4 + iVar1), func_104(1));
										Local_91.f_254++;
									}
								}
								Local_91.f_85[(bVar0 * 4 + iVar1)] = 0;
								if (func_22(&(Local_91.f_364[bVar6 /*2*/])))
								{
									func_106(&(Local_91.f_364[bVar6 /*2*/]));
								}
								if (BitTest(Local_91.f_275[func_91(bVar6)], func_90(bVar6)))
								{
									MISC::CLEAR_BIT(&(Local_91.f_275[func_91(bVar6)]), func_90(bVar6));
								}
							}
							else
							{
								if (!BitTest(Local_91.f_272[func_91(bVar6)], func_90(bVar6)))
								{
									if (!func_22(&(Local_91.f_364[bVar6 /*2*/])))
									{
										func_20(&(Local_91.f_364[bVar6 /*2*/]), 0, 0);
									}
									else if (func_19(&(Local_91.f_364[bVar6 /*2*/]), 7000, 0))
									{
										MISC::SET_BIT(&(Local_91.f_272[func_91(bVar6)]), func_90(bVar6));
										func_106(&(Local_91.f_364[bVar6 /*2*/]));
									}
								}
								if (!BitTest(Local_91.f_275[func_91(bVar6)], func_90(bVar6)))
								{
									MISC::SET_BIT(&(Local_91.f_275[func_91(bVar6)]), func_90(bVar6));
								}
							}
						}
					}
					else if (BitTest(Local_91.f_272[func_91(bVar6)], func_90(bVar6)) || Local_91.f_27 == joaat("hydra"))
					{
						if (!func_19(&(Local_91.f_414[(bVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_25(&(Local_91.f_48[(bVar0 * 4 + iVar1)]));
						if (BitTest(Local_91.f_272[func_91(bVar6)], func_90(bVar6)))
						{
							if (Local_91.f_85[(bVar0 * 4 + iVar1)] > 0)
							{
								Local_91.f_254++;
								func_89((bVar0 * 4 + iVar1), func_104(1));
							}
						}
						Local_91.f_85[(bVar0 * 4 + iVar1)] = 0;
						if (BitTest(Local_91.f_275[func_91(bVar6)], func_90(bVar6)))
						{
							MISC::CLEAR_BIT(&(Local_91.f_275[func_91(bVar6)]), func_90(bVar6));
						}
					}
					else
					{
						if (!BitTest(Local_91.f_272[func_91(bVar6)], func_90(bVar6)))
						{
							if (!func_22(&(Local_91.f_364[bVar6 /*2*/])))
							{
								func_20(&(Local_91.f_364[bVar6 /*2*/]), 0, 0);
							}
							else if (func_19(&(Local_91.f_364[bVar6 /*2*/]), 7000, 0))
							{
								MISC::SET_BIT(&(Local_91.f_272[func_91(bVar6)]), func_90(bVar6));
								func_106(&(Local_91.f_364[bVar6 /*2*/]));
							}
						}
						if (!BitTest(Local_91.f_275[func_91(bVar6)], func_90(bVar6)))
						{
							MISC::SET_BIT(&(Local_91.f_275[func_91(bVar6)]), func_90(bVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_91.f_249 < func_103())
			{
				if (func_73(bVar0))
				{
				}
				MISC::CLEAR_BIT(&(Local_91.f_3), 0);
			}
			bVar0++;
		}
	}
	if (!BitTest(Local_91.f_3, 2))
	{
		if (Local_91.f_247 >= Global_262145.f_10673)
		{
			MISC::SET_BIT(&(Local_91.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_91.f_243)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[(20 + iVar1)]))
			{
				bVar7 = (20 + iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iVar1)]), false))
				{
					MISC::CLEAR_BIT(&(Local_91.f_3), 2);
				}
				else if (BitTest(Local_91.f_272[func_91(bVar7)], func_90(bVar7)))
				{
					if (!func_19(&(Local_91.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_22(&(Local_91.f_364[bVar7 /*2*/])))
					{
						func_106(&(Local_91.f_364[bVar7 /*2*/]));
					}
					func_25(&(Local_91.f_48[(20 + iVar1)]));
					if (Local_91.f_85[(20 + iVar1)] > 0)
					{
						Local_91.f_254++;
						if (func_98() > 1)
						{
							if (Local_91.f_317 > 0)
							{
								Local_91.f_316++;
							}
						}
						func_89((20 + iVar1), func_104(1));
					}
					Local_91.f_85[(20 + iVar1)] = 0;
					if (BitTest(Local_91.f_275[func_91(bVar7)], func_90(bVar7)))
					{
						MISC::CLEAR_BIT(&(Local_91.f_275[func_91(bVar7)]), func_90(bVar7));
					}
				}
				else
				{
					if (!BitTest(Local_91.f_272[func_91(bVar7)], func_90(bVar7)))
					{
						if (!func_22(&(Local_91.f_364[bVar7 /*2*/])))
						{
							func_20(&(Local_91.f_364[bVar7 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_91.f_364[bVar7 /*2*/]), 7000, 0))
						{
							MISC::SET_BIT(&(Local_91.f_272[func_91(bVar7)]), func_90(bVar7));
							func_106(&(Local_91.f_364[bVar7 /*2*/]));
						}
					}
					if (!BitTest(Local_91.f_275[func_91(bVar7)], func_90(bVar7)))
					{
						MISC::SET_BIT(&(Local_91.f_275[func_91(bVar7)]), func_90(bVar7));
					}
				}
			}
			if (Local_91.f_247 < func_72())
			{
				if (func_51(iVar1))
				{
				}
				MISC::CLEAR_BIT(&(Local_91.f_3), 2);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()//Position - 0x1D82
{
	int iVar0;
	int iVar1;
	
	if (func_98() == 1)
	{
		return;
	}
	if (func_98() == 2)
	{
		if (Local_91.f_252 > 0)
		{
			if (Local_91.f_302 > 0)
			{
				if (Local_91.f_302 >= (Local_91.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_91.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_91.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_91.f_279++;
									func_40();
								}
								else if (Local_91.f_318 >= func_39())
								{
									func_47();
									Local_91.f_279++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 3)
	{
		if (Local_91.f_317 > 0)
		{
			if (Local_91.f_316 > 0)
			{
				if (Local_91.f_316 >= Local_91.f_317)
				{
					if (Local_91.f_317 >= func_38())
					{
						func_47();
						Local_91.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_98() == 4)
	{
		if (Local_91.f_316 > 0)
		{
			if (Local_91.f_302 > 0)
			{
				if (Local_91.f_317 > 0)
				{
					if (Local_91.f_316 >= (Local_91.f_317 - 2))
					{
						if (Local_91.f_252 > 0)
						{
							if (Local_91.f_302 >= (Local_91.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_91.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_91.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_91.f_279++;
												func_40();
											}
											else if (Local_91.f_318 >= func_39())
											{
												func_47();
												Local_91.f_279++;
												func_40();
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
	}
	else if (func_98() == 5)
	{
		if (Local_91.f_252 > 0)
		{
			if (Local_91.f_302 > 0)
			{
				if (Local_91.f_302 >= (Local_91.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_91.f_279++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()//Position - 0x1F7B
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_91.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_91.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_38()//Position - 0x1FFB
{
	return Local_91.f_305[Local_91.f_279];
}

int func_39()//Position - 0x200F
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_91.f_278)
	{
		iVar0 = (iVar0 + Local_91.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()//Position - 0x203D
{
	int iVar0;
	
	if (Local_91.f_29 == -1)
	{
		iVar0 = func_46(Local_91.f_27);
		Local_91.f_29 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		if (func_768())
		{
			if (Local_91.f_27 == joaat("hydra"))
			{
				if (Local_91.f_29 == 2)
				{
					Local_91.f_29 = 4;
				}
			}
			else if (Local_91.f_27 == joaat("savage"))
			{
				if (Local_91.f_29 == 0)
				{
					Local_91.f_29 = 1;
				}
				else if (Local_91.f_29 == 1)
				{
					Local_91.f_29 = 2;
				}
				else if (Local_91.f_29 == 2)
				{
					Local_91.f_29 = 3;
				}
			}
			else if (Local_91.f_27 == joaat("valkyrie"))
			{
				if (Local_91.f_29 == 2)
				{
					Local_91.f_29 = 3;
				}
				else if (Local_91.f_29 == 3)
				{
					Local_91.f_29 = 4;
				}
			}
			else if (Local_91.f_27 == joaat("buzzard"))
			{
				if (Local_91.f_29 == 0)
				{
					Local_91.f_29 = 1;
				}
				else if (Local_91.f_29 == 1)
				{
					Local_91.f_29 = 2;
				}
				else if (Local_91.f_29 == 2)
				{
					Local_91.f_29 = 3;
				}
				else if (Local_91.f_29 == 3)
				{
					Local_91.f_29 = 4;
				}
			}
		}
		else if (Local_91.f_27 == joaat("savage"))
		{
			if (Local_91.f_29 == 0)
			{
				Local_91.f_29 = 1;
			}
			else if (Local_91.f_29 == 1)
			{
				Local_91.f_29 = 2;
			}
			else if (Local_91.f_29 == 2)
			{
				Local_91.f_29 = 3;
			}
		}
	}
	switch (Local_91.f_27)
	{
		case joaat("rhino"):
			Local_91.f_280[0] = 4;
			Local_91.f_291[0] = func_45(4);
			Local_91.f_305[0] = func_44(4);
			Local_91.f_280[1] = 4;
			Local_91.f_291[1] = func_45(4);
			Local_91.f_305[1] = func_44(4);
			Local_91.f_280[2] = 4;
			Local_91.f_291[2] = func_45(4);
			Local_91.f_305[2] = func_44(4);
			if (Local_91.f_12 <= 2 || !func_768())
			{
				Local_91.f_278 = 3;
			}
			else if (Local_91.f_12 == 3)
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_278 = 4;
			}
			else
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 4;
				Local_91.f_291[4] = func_45(4);
				Local_91.f_305[4] = func_44(4);
				Local_91.f_278 = 5;
			}
			Local_91.f_255 = func_41();
			if (!func_768())
			{
				Local_91.f_1 = 0;
			}
			else
			{
				Local_91.f_1 = 5;
			}
			Local_91.f_2 = Local_91.f_29;
			switch (Local_91.f_29)
			{
				case 0:
					Local_91.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_91.f_43[0] = 269.414f;
					Local_91.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_91.f_43[1] = 3.5491f;
					Local_91.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_91.f_43[2] = 54.4509f;
					Local_91.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_91.f_43[3] = 178.1948f;
					Local_91.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_91.f_175[0] = 270.8322f;
					Local_91.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_91.f_175[1] = 177.3506f;
					Local_91.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_91.f_175[2] = 318.1089f;
					Local_91.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_91.f_175[3] = 272.0801f;
					Local_91.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_91.f_175[4] = 104.0591f;
					Local_91.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_91.f_148[0] = 296.4225f;
					Local_91.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_91.f_148[1] = 164.9695f;
					Local_91.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_91.f_148[2] = 136.0596f;
					Local_91.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_91.f_148[3] = 116.379f;
					Local_91.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_91.f_148[4] = 86.6586f;
					Local_91.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_91.f_148[5] = 74.6822f;
					Local_91.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_91.f_148[6] = 206.8863f;
					Local_91.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_91.f_148[7] = 267.8581f;
					Local_91.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_91.f_148[8] = 267.5856f;
					Local_91.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_91.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_91.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_91.f_43[0] = 194.8062f;
					Local_91.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_91.f_43[1] = 238.9372f;
					Local_91.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_91.f_43[2] = 16.3071f;
					Local_91.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_91.f_43[3] = 209.9883f;
					Local_91.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_91.f_148[0] = 221.3913f;
					Local_91.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_91.f_148[1] = 246.3415f;
					Local_91.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_91.f_148[2] = 213.4087f;
					Local_91.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_91.f_148[3] = 100.5405f;
					Local_91.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_91.f_148[4] = 289.6017f;
					Local_91.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_91.f_148[5] = 285.6456f;
					Local_91.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_91.f_148[6] = 310.9245f;
					Local_91.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_91.f_148[7] = 46.7117f;
					Local_91.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_91.f_148[8] = 35.9192f;
					Local_91.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_91.f_148[9] = 207.53f;
					Local_91.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_91.f_175[0] = 286.6127f;
					Local_91.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_91.f_175[1] = 124.1428f;
					Local_91.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_91.f_175[2] = 275.0147f;
					Local_91.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_91.f_175[3] = 287.91f;
					Local_91.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_91.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_91.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_91.f_43[0] = 172.439f;
					Local_91.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_91.f_43[1] = 53.9805f;
					Local_91.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_91.f_43[2] = 303.2142f;
					Local_91.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_91.f_43[3] = 218.5974f;
					Local_91.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_91.f_148[0] = 264.5842f;
					Local_91.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_91.f_148[1] = 133.7932f;
					Local_91.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_91.f_148[2] = 205.1215f;
					Local_91.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_91.f_148[3] = 66.1065f;
					Local_91.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_91.f_148[4] = 7.8064f;
					Local_91.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_91.f_148[5] = 358.7563f;
					Local_91.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_91.f_148[6] = 142.1748f;
					Local_91.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_91.f_148[7] = 247.816f;
					Local_91.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_91.f_148[8] = 124.4666f;
					Local_91.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_91.f_148[9] = 348.6588f;
					Local_91.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_91.f_175[0] = 89.8563f;
					Local_91.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_91.f_175[1] = 163.8004f;
					Local_91.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_91.f_175[2] = 270.0754f;
					Local_91.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_91.f_175[3] = 184.9752f;
					Local_91.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_91.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_91.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_91.f_43[0] = 0.5044f;
					Local_91.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_91.f_43[1] = 179.2507f;
					Local_91.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_91.f_43[2] = 0.3066f;
					Local_91.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_91.f_43[3] = 180.2973f;
					Local_91.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_91.f_148[0] = 336.7541f;
					Local_91.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_91.f_148[1] = 6.0929f;
					Local_91.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_91.f_148[2] = 4.2803f;
					Local_91.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_91.f_148[3] = 274.985f;
					Local_91.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_91.f_148[4] = 267.2555f;
					Local_91.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_91.f_148[5] = 6.5529f;
					Local_91.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_91.f_148[6] = 89.1724f;
					Local_91.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_91.f_148[7] = 348.279f;
					Local_91.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_91.f_148[8] = 267.8075f;
					Local_91.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_91.f_148[9] = 0.5237f;
					Local_91.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_91.f_175[0] = 357.9713f;
					Local_91.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_91.f_175[1] = 269.3234f;
					Local_91.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_91.f_175[2] = 269.3055f;
					Local_91.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_91.f_175[3] = 359.1497f;
					Local_91.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_91.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_91.f_240 = joaat("insurgent");
			Local_91.f_280[0] = 2;
			Local_91.f_291[0] = func_45(2);
			Local_91.f_280[1] = 4;
			Local_91.f_291[1] = func_45(4);
			Local_91.f_305[1] = func_44(4);
			Local_91.f_280[2] = 2;
			Local_91.f_291[2] = func_45(2);
			if (Local_91.f_12 <= 2 || !func_768())
			{
				Local_91.f_280[3] = 5;
				Local_91.f_291[3] = func_45(5);
				Local_91.f_278 = 4;
			}
			else if (Local_91.f_12 == 3)
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 5;
				Local_91.f_291[5] = func_45(5);
				Local_91.f_278 = 6;
			}
			else
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 4;
				Local_91.f_291[5] = func_45(4);
				Local_91.f_305[5] = func_44(4);
				Local_91.f_280[6] = 5;
				Local_91.f_291[6] = func_45(5);
				Local_91.f_278 = 7;
			}
			Local_91.f_255 = func_41();
			if (!func_768())
			{
				Local_91.f_1 = 2;
			}
			else
			{
				Local_91.f_1 = 7;
			}
			Local_91.f_2 = Local_91.f_29;
			switch (Local_91.f_29)
			{
				case 0:
					Local_91.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_91.f_43[0] = 331.74f;
					Local_91.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_91.f_43[1] = 327.7335f;
					Local_91.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_91.f_43[2] = 149.1604f;
					Local_91.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_91.f_43[3] = 150.6753f;
					Local_91.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_91.f_148[0] = 147.2177f;
					Local_91.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_91.f_148[1] = 103.9461f;
					Local_91.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_91.f_148[2] = 160.822f;
					Local_91.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_91.f_148[3] = 205.8375f;
					Local_91.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_91.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_91.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_91.f_43[0] = 344.2504f;
					Local_91.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_91.f_43[1] = 340.3425f;
					Local_91.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_91.f_43[2] = 351.5693f;
					Local_91.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_91.f_43[3] = 354.2446f;
					Local_91.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_91.f_148[0] = 245.2865f;
					Local_91.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_91.f_148[1] = 74.1185f;
					Local_91.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_91.f_148[2] = 10.2312f;
					Local_91.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_91.f_148[3] = 222.4017f;
					Local_91.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_91.f_148[4] = 150.2763f;
					Local_91.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_91.f_148[5] = 105.4526f;
					Local_91.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_91.f_148[6] = 88.9429f;
					Local_91.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_91.f_148[7] = 51.1733f;
					Local_91.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_91.f_148[8] = 169.7083f;
					Local_91.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_91.f_148[9] = 29.5849f;
					Local_91.f_243 = 3;
					break;
				
				case 2:
					if (!func_768())
					{
						Local_91.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_91.f_43[0] = 319.153f;
					}
					else
					{
						Local_91.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_91.f_43[0] = 319.153f;
						Local_91.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_91.f_43[1] = 316.7079f;
						Local_91.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_91.f_43[2] = 316.9623f;
						Local_91.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_91.f_43[3] = 314.2003f;
					}
					Local_91.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_91.f_148[0] = 326.4292f;
					Local_91.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_91.f_148[1] = 6.8118f;
					Local_91.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_91.f_148[2] = 32.8776f;
					Local_91.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_91.f_148[3] = 8.387f;
					Local_91.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_91.f_148[4] = 291.5504f;
					Local_91.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_91.f_148[5] = 333.1838f;
					Local_91.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_91.f_148[6] = 203.8353f;
					Local_91.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_91.f_148[7] = 32.2329f;
					Local_91.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_91.f_148[8] = 195.4847f;
					Local_91.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_91.f_148[9] = 327.4941f;
					Local_91.f_243 = 4;
					break;
				
				case 3:
					if (!func_768())
					{
						Local_91.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_91.f_43[0] = 156.0209f;
					}
					else
					{
						Local_91.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_91.f_43[0] = 156.0209f;
						Local_91.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_91.f_43[1] = 41.8571f;
						Local_91.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_91.f_43[2] = 305.7411f;
						Local_91.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_91.f_43[3] = 223.2489f;
					}
					if (func_98() == 2 || func_98() == 5)
					{
						Local_91.f_242 = 3;
					}
					else
					{
						Local_91.f_242 = 4;
					}
					Local_91.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_91.f_148[0] = 197.3456f;
					Local_91.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_91.f_148[1] = 140.7211f;
					Local_91.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_91.f_148[2] = 98.9528f;
					Local_91.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_91.f_148[3] = 107.0238f;
					Local_91.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_91.f_148[4] = 202.129f;
					Local_91.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_91.f_148[5] = 230.1207f;
					Local_91.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_91.f_148[6] = 36.194f;
					Local_91.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_91.f_148[7] = 48.2522f;
					Local_91.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_91.f_148[8] = 296.114f;
					Local_91.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_91.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_91.f_240 = joaat("lazer");
			Local_91.f_280[0] = 2;
			Local_91.f_291[0] = func_45(2);
			Local_91.f_280[1] = 2;
			Local_91.f_291[1] = func_45(2);
			Local_91.f_280[2] = 2;
			Local_91.f_291[2] = func_45(2);
			if (Local_91.f_12 <= 2 || !func_768())
			{
				Local_91.f_278 = 3;
			}
			else if (Local_91.f_12 == 3)
			{
				Local_91.f_280[3] = 2;
				Local_91.f_291[3] = func_45(2);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_278 = 5;
			}
			else
			{
				Local_91.f_280[3] = 2;
				Local_91.f_291[3] = func_45(2);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 2;
				Local_91.f_291[5] = func_45(2);
				Local_91.f_278 = 6;
			}
			Local_91.f_255 = func_41();
			if (!func_768())
			{
				Local_91.f_1 = 1;
			}
			else
			{
				Local_91.f_1 = 6;
			}
			Local_91.f_2 = Local_91.f_29;
			switch (Local_91.f_29)
			{
				case 0:
					if (!func_768())
					{
						Local_91.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_91.f_43[0] = 197.4435f;
					}
					else
					{
						Local_91.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_91.f_43[0] = 197.4435f;
						Local_91.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_91.f_43[1] = 197.1133f;
						Local_91.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_91.f_43[2] = 272.2065f;
						Local_91.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_91.f_43[3] = 142.941f;
					}
					Local_91.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_91.f_175[0] = 34.149f;
					Local_91.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_91.f_175[1] = -26.0182f;
					Local_91.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_91.f_175[2] = 88.3998f;
					Local_91.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_91.f_175[3] = -141.7949f;
					Local_91.f_228[0] = 10000;
					Local_91.f_228[1] = 10000;
					Local_91.f_228[2] = 10000;
					Local_91.f_228[3] = 10000;
					Local_91.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_91.f_148[0] = 143.4012f;
					Local_91.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_91.f_148[1] = 212.1136f;
					Local_91.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_91.f_148[2] = 95.8248f;
					Local_91.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_91.f_148[3] = 113.3084f;
					Local_91.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_91.f_148[4] = 260.1329f;
					Local_91.f_242 = 4;
					break;
				
				case 1:
					if (!func_768())
					{
						Local_91.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_91.f_43[0] = 131.0993f;
					}
					else
					{
						Local_91.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_91.f_43[0] = 131.0993f;
						Local_91.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_91.f_43[1] = 127.8408f;
						Local_91.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_91.f_43[2] = 131.1571f;
						Local_91.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_91.f_43[3] = 132.943f;
					}
					Local_91.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_91.f_175[0] = 316.9068f;
					Local_91.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_91.f_175[1] = 142.3075f;
					Local_91.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_91.f_175[2] = 93.1231f;
					Local_91.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_91.f_175[3] = -9.0334f;
					Local_91.f_228[0] = 10000;
					Local_91.f_228[1] = 10000;
					Local_91.f_228[2] = 10000;
					Local_91.f_228[3] = 10000;
					Local_91.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_91.f_148[0] = 236.3566f;
					Local_91.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_91.f_148[1] = 212.7533f;
					Local_91.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_91.f_148[2] = 299.3619f;
					Local_91.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_91.f_148[3] = 115.7556f;
					Local_91.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_91.f_148[4] = 191.3862f;
					Local_91.f_242 = 4;
					break;
				
				case 2:
					Local_91.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_91.f_43[0] = 176.244f;
					Local_91.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_91.f_175[0] = 93.8354f;
					Local_91.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_91.f_175[1] = 250.5173f;
					Local_91.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_91.f_175[2] = 337.8961f;
					Local_91.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_91.f_175[3] = 142.1369f;
					Local_91.f_228[0] = 10000;
					Local_91.f_228[1] = 10000;
					Local_91.f_228[2] = 10000;
					Local_91.f_228[3] = 10000;
					Local_91.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_91.f_148[0] = 208.2624f;
					Local_91.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_91.f_148[1] = 349.048f;
					Local_91.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_91.f_148[2] = 69.8162f;
					Local_91.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_91.f_148[3] = 286.6181f;
					Local_91.f_242 = 4;
					Local_91.f_243 = 4;
					break;
				
				case 3:
					Local_91.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_91.f_43[0] = 292.0822f;
					Local_91.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_91.f_43[1] = 43.3907f;
					Local_91.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_91.f_43[2] = 124.2279f;
					Local_91.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_91.f_43[3] = 129.3366f;
					Local_91.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_91.f_175[0] = 137.5025f;
					Local_91.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_91.f_175[1] = 227.9336f;
					Local_91.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_91.f_175[2] = 6.0299f;
					Local_91.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_91.f_175[3] = -87.5596f;
					Local_91.f_228[0] = 10000;
					Local_91.f_228[1] = 10000;
					Local_91.f_228[2] = 10000;
					Local_91.f_228[3] = 10000;
					Local_91.f_242 = 4;
					Local_91.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_91.f_148[0] = 338.8487f;
					Local_91.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_91.f_148[1] = 272.5443f;
					Local_91.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_91.f_148[2] = 223.0158f;
					Local_91.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_91.f_148[3] = 355.6682f;
					Local_91.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_91.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_768())
					{
						Local_91.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_91.f_43[0] = 331.7771f;
					}
					else
					{
						Local_91.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_91.f_43[0] = 331.7771f;
						Local_91.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_91.f_43[1] = 324.1843f;
						Local_91.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_91.f_43[2] = 330.0586f;
						Local_91.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_91.f_43[3] = 329.5413f;
					}
					Local_91.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_91.f_175[0] = 146.9594f;
					Local_91.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_91.f_175[1] = 137.6555f;
					Local_91.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_91.f_175[2] = 114.7478f;
					Local_91.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_91.f_175[3] = -84.6269f;
					Local_91.f_228[0] = 10000;
					Local_91.f_228[1] = 10000;
					Local_91.f_228[2] = 10000;
					Local_91.f_228[3] = 10000;
					Local_91.f_242 = 4;
					Local_91.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_91.f_148[0] = 153.0449f;
					Local_91.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_91.f_148[1] = 153.1271f;
					Local_91.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_91.f_148[2] = 331.3771f;
					Local_91.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_91.f_148[3] = 183.2579f;
					Local_91.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_91.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_91.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_91.f_43[0] = 184.7817f;
					Local_91.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_91.f_175[0] = 91.7761f;
					Local_91.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_91.f_175[1] = 269.7376f;
					Local_91.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_91.f_175[1] = 211.4614f;
					Local_91.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_91.f_175[3] = 148.9204f;
					Local_91.f_228[0] = 10000;
					Local_91.f_228[1] = 10000;
					Local_91.f_228[2] = 10000;
					Local_91.f_228[3] = 10000;
					Local_91.f_242 = 4;
					Local_91.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_91.f_148[0] = 113.298f;
					Local_91.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_91.f_148[1] = 353.0292f;
					Local_91.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_91.f_148[2] = 216.1793f;
					Local_91.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_91.f_148[3] = 347.4008f;
					Local_91.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_91.f_240 = joaat("buzzard");
			Local_91.f_280[0] = 2;
			Local_91.f_291[0] = func_45(2);
			Local_91.f_305[0] = func_44(4);
			Local_91.f_280[1] = 4;
			Local_91.f_291[1] = func_45(4);
			Local_91.f_305[1] = func_44(4);
			Local_91.f_280[2] = 2;
			Local_91.f_291[2] = func_45(2);
			Local_91.f_305[2] = func_44(4);
			if (Local_91.f_12 <= 2 || !func_768())
			{
				Local_91.f_280[3] = 5;
				Local_91.f_291[3] = func_45(5);
				Local_91.f_278 = 4;
			}
			else if (Local_91.f_12 == 3)
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 5;
				Local_91.f_291[5] = func_45(5);
				Local_91.f_278 = 6;
			}
			else
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 4;
				Local_91.f_291[5] = func_45(4);
				Local_91.f_305[5] = func_44(4);
				Local_91.f_280[6] = 5;
				Local_91.f_291[6] = func_45(5);
				Local_91.f_278 = 7;
			}
			Local_91.f_255 = func_41();
			if (!func_768())
			{
				Local_91.f_1 = 3;
			}
			else
			{
				Local_91.f_1 = 8;
			}
			Local_91.f_2 = Local_91.f_29;
			switch (Local_91.f_29)
			{
				case 0:
					if (!func_768())
					{
						Local_91.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_91.f_43[0] = 290.0732f;
					}
					else
					{
						Local_91.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_91.f_43[0] = 290.0732f;
						Local_91.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_91.f_43[1] = 231.5867f;
						Local_91.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_91.f_43[2] = 49.6234f;
						Local_91.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_91.f_43[3] = 229.3317f;
					}
					Local_91.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_91.f_148[0] = 230.0049f;
					Local_91.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_91.f_148[1] = 147.9421f;
					Local_91.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_91.f_148[2] = 22.3204f;
					Local_91.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_91.f_148[3] = 80.7676f;
					Local_91.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_91.f_148[4] = 162.0507f;
					Local_91.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_91.f_148[5] = 225.9002f;
					Local_91.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_91.f_148[6] = 140.0515f;
					Local_91.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_91.f_148[7] = 90.6966f;
					Local_91.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_91.f_148[8] = 226.042f;
					Local_91.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_91.f_148[9] = 79.7294f;
					Local_91.f_243 = 4;
					break;
				
				case 1:
					Local_91.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_91.f_43[0] = 122.9714f;
					Local_91.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_91.f_43[1] = 118.6931f;
					Local_91.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_91.f_43[2] = 26.5272f;
					Local_91.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_91.f_43[3] = 211.0638f;
					Local_91.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_91.f_148[0] = 203.4084f;
					Local_91.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_91.f_148[1] = 123.7895f;
					Local_91.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_91.f_148[2] = 115.9053f;
					Local_91.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_91.f_148[3] = 330.5807f;
					Local_91.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_91.f_148[4] = 116.311f;
					Local_91.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_91.f_148[5] = 145.855f;
					Local_91.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_91.f_148[6] = 41.353f;
					Local_91.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_91.f_148[7] = 266.0158f;
					Local_91.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_91.f_148[8] = 290.3963f;
					Local_91.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_91.f_148[9] = 243.2495f;
					Local_91.f_243 = 4;
					break;
				
				case 2:
					Local_91.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_91.f_43[0] = 280.2862f;
					Local_91.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_91.f_43[1] = 32.9157f;
					Local_91.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_91.f_43[2] = 106.2954f;
					Local_91.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_91.f_43[3] = 272.3807f;
					Local_91.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_91.f_148[0] = 254.5411f;
					Local_91.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_91.f_148[1] = 183.227f;
					Local_91.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_91.f_148[2] = 338.6039f;
					Local_91.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_91.f_148[3] = 71.8258f;
					Local_91.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_91.f_148[4] = 179.6626f;
					Local_91.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_91.f_148[5] = 272.7491f;
					Local_91.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_91.f_148[6] = 270.8252f;
					Local_91.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_91.f_148[7] = 180.4937f;
					Local_91.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_91.f_148[8] = 107.4297f;
					Local_91.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_91.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_91.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_91.f_43[0] = 117.7311f;
					Local_91.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_91.f_43[1] = 46.3958f;
					Local_91.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_91.f_43[2] = 189.2091f;
					Local_91.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_91.f_43[3] = 50.0778f;
					Local_91.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_91.f_148[0] = 229.5714f;
					Local_91.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_91.f_148[1] = 136.4963f;
					Local_91.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_91.f_148[2] = 88.3908f;
					Local_91.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_91.f_148[3] = 271.8922f;
					Local_91.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_91.f_148[4] = 316.4374f;
					Local_91.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_91.f_148[5] = 246.1521f;
					Local_91.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_91.f_148[6] = 198.8985f;
					Local_91.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_91.f_148[7] = 257.2332f;
					Local_91.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_91.f_148[8] = 104.7808f;
					Local_91.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_91.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_91.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_91.f_43[0] = 306.7662f;
					Local_91.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_91.f_43[1] = 303.3918f;
					Local_91.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_91.f_43[2] = 302.365f;
					Local_91.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_91.f_43[3] = 304.9788f;
					Local_91.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_91.f_148[0] = 30.9787f;
					Local_91.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_91.f_148[1] = 97.3626f;
					Local_91.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_91.f_148[2] = 218.2636f;
					Local_91.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_91.f_148[3] = 257.6324f;
					Local_91.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_91.f_148[4] = 244.6777f;
					Local_91.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_91.f_148[5] = 12.745f;
					Local_91.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_91.f_148[6] = 196.3743f;
					Local_91.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_91.f_148[7] = 283.2556f;
					Local_91.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_91.f_148[8] = 243.4268f;
					Local_91.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_91.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_91.f_240 = joaat("buzzard");
			Local_91.f_280[0] = 2;
			Local_91.f_291[0] = func_45(2);
			Local_91.f_280[1] = 4;
			Local_91.f_291[1] = func_45(4);
			Local_91.f_305[1] = func_44(4);
			Local_91.f_280[2] = 2;
			Local_91.f_291[2] = func_45(2);
			if (Local_91.f_12 <= 2 || !func_768())
			{
				Local_91.f_280[3] = 5;
				Local_91.f_291[3] = func_45(5);
				Local_91.f_278 = 4;
			}
			else if (Local_91.f_12 == 3)
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 5;
				Local_91.f_291[5] = func_45(5);
				Local_91.f_278 = 6;
			}
			else
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 4;
				Local_91.f_291[5] = func_45(4);
				Local_91.f_305[5] = func_44(4);
				Local_91.f_280[6] = 5;
				Local_91.f_291[6] = func_45(5);
				Local_91.f_278 = 7;
			}
			Local_91.f_255 = func_41();
			if (!func_768())
			{
				Local_91.f_1 = 4;
			}
			else
			{
				Local_91.f_1 = 9;
			}
			Local_91.f_2 = Local_91.f_29;
			switch (Local_91.f_29)
			{
				case 0:
					Local_91.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_91.f_43[0] = 180.7904f;
					Local_91.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_91.f_43[1] = 269.3001f;
					Local_91.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_91.f_43[2] = 180.39f;
					Local_91.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_91.f_43[3] = 276.7351f;
					Local_91.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_91.f_148[0] = 329.9165f;
					Local_91.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_91.f_148[1] = 264.7702f;
					Local_91.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_91.f_148[2] = 359.5203f;
					Local_91.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_91.f_148[3] = 111.3101f;
					Local_91.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_91.f_148[4] = 176.3058f;
					Local_91.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_91.f_148[5] = 213.1969f;
					Local_91.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_91.f_148[6] = 275.2275f;
					Local_91.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_91.f_148[7] = 220.0349f;
					Local_91.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_91.f_148[8] = 359.15f;
					Local_91.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_91.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_91.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_91.f_43[0] = 247.4892f;
					Local_91.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_91.f_43[1] = 66.129f;
					Local_91.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_91.f_43[2] = 340.0713f;
					Local_91.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_91.f_43[3] = 245.7466f;
					Local_91.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_91.f_148[0] = 252.6017f;
					Local_91.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_91.f_148[1] = 245.262f;
					Local_91.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_91.f_148[2] = 44.7945f;
					Local_91.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_91.f_148[3] = 255.6518f;
					Local_91.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_91.f_148[4] = 124.8391f;
					Local_91.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_91.f_148[5] = 188.9979f;
					Local_91.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_91.f_148[6] = 159.3613f;
					Local_91.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_91.f_148[7] = 5.7762f;
					Local_91.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_91.f_148[8] = 89.3388f;
					Local_91.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_91.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_91.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_91.f_43[0] = 310.6241f;
					Local_91.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_91.f_43[1] = 166.0191f;
					Local_91.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_91.f_43[2] = 343.1715f;
					Local_91.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_91.f_43[3] = 342.4984f;
					Local_91.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_91.f_148[0] = 248.8594f;
					Local_91.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_91.f_148[1] = 195.7758f;
					Local_91.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_91.f_148[2] = 28.6127f;
					Local_91.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_91.f_148[3] = 296.7476f;
					Local_91.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_91.f_148[4] = 240.9422f;
					Local_91.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_91.f_148[5] = 2.473f;
					Local_91.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_91.f_148[6] = 343.6776f;
					Local_91.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_91.f_148[7] = 0.2495f;
					Local_91.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_91.f_148[8] = 72.7889f;
					Local_91.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_91.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_91.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_91.f_43[0] = 351.0324f;
					Local_91.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_91.f_43[1] = 3.5452f;
					Local_91.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_91.f_43[2] = 7.3237f;
					Local_91.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_91.f_43[3] = 332.0844f;
					Local_91.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_91.f_148[0] = 2.6416f;
					Local_91.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_91.f_148[1] = 171.8638f;
					Local_91.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_91.f_148[2] = 257.0332f;
					Local_91.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_91.f_148[3] = 91.7869f;
					Local_91.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_91.f_148[4] = 4.2016f;
					Local_91.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_91.f_148[5] = 339.729f;
					Local_91.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_91.f_148[6] = 359.2033f;
					Local_91.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_91.f_148[7] = 333.6298f;
					Local_91.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_91.f_148[8] = 73.2788f;
					Local_91.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_91.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_91.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_91.f_43[0] = 42.1535f;
					Local_91.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_91.f_43[1] = 315.0261f;
					Local_91.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_91.f_43[2] = 1.2527f;
					Local_91.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_91.f_43[3] = 1.9403f;
					Local_91.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_91.f_148[0] = 352.9674f;
					Local_91.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_91.f_148[1] = 88.8285f;
					Local_91.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_91.f_148[2] = 177.2297f;
					Local_91.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_91.f_148[3] = 273.1487f;
					Local_91.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_91.f_148[4] = 225.394f;
					Local_91.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_91.f_148[5] = 175.5423f;
					Local_91.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_91.f_148[6] = 191.1842f;
					Local_91.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_91.f_148[7] = 269.6831f;
					Local_91.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_91.f_148[8] = 29.4203f;
					Local_91.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_91.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()//Position - 0x5BB8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_91.f_255 != -1)
	{
		return Local_91.f_255;
	}
	if (Local_91.f_278 == 0)
	{
		return ((4 * Global_262145.f_10672) + Global_262145.f_10673);
	}
	iVar2 = func_98();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_91.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_91.f_278)
			{
				iVar0 = (iVar0 + ((Local_91.f_291[iVar1] * iVar4) + Local_91.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)//Position - 0x5C5F
{
	switch (iParam0)
	{
		case joaat("insurgent"):
			return 2;
			break;
		
		case joaat("lazer"):
			return 1;
			break;
		
		case joaat("buzzard"):
			return 4;
			break;
		
		case joaat("mesa3"):
			return 4;
			break;
		
		case joaat("savage"):
			return 4;
			break;
	}
	return 0;
}

int func_43(int iParam0)//Position - 0x5CB0
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (Local_91.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_91.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else
			{
				iVar0 = joaat("mesa3");
			}
			break;
		
		case 5:
			iVar0 = joaat("savage");
			break;
		
		default:
			if (Local_91.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_91.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)//Position - 0x5D53
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_768())
			{
				iVar0 = Global_262145.f_11854;
			}
			else
			{
				iVar0 = Global_262145.f_11574;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)//Position - 0x5D92
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_768())
			{
				iVar0 = Global_262145.f_11855;
			}
			else
			{
				iVar0 = Global_262145.f_11575;
			}
			break;
		
		case 5:
			if (func_768())
			{
				iVar0 = Global_262145.f_11856;
			}
			else
			{
				iVar0 = Global_262145.f_11576;
			}
			break;
		
		case 4:
			if (func_768())
			{
				iVar0 = Global_262145.f_11853;
			}
			else
			{
				iVar0 = Global_262145.f_11573;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)//Position - 0x5E15
{
	if (!func_768())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 5;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 5;
			
			case joaat("buzzard"):
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 3;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 4;
			
			case joaat("buzzard"):
				return 4;
			}
		
		default:
	}
	return 5;
}

void func_47()//Position - 0x5E9B
{
	Local_91.f_252 = 0;
	Local_91.f_302 = 0;
	Local_91.f_317 = 0;
	Local_91.f_316 = 0;
}

int func_48()//Position - 0x5EBA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_91.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()//Position - 0x5EF2
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_91.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_91.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_50()//Position - 0x5F72
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_109(Local_91.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)//Position - 0x5FA3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	
	if (Local_91.f_318 == 0 || Local_91.f_318 == func_39())
	{
		if (func_98() == 2 || func_98() == 5)
		{
			return 0;
		}
	}
	if (func_98() == 3 || func_98() == 4)
	{
		if (Local_91.f_317 >= func_38())
		{
			iVar0 = Local_91.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_91.f_280[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return 0;
			}
		}
	}
	else if (Local_91.f_317 == 2)
	{
		iVar0 = Local_91.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_91.f_280[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	if (Local_91.f_318 == func_39())
	{
		return 0;
	}
	if (Local_91.f_318 == func_71())
	{
		return 0;
	}
	if (func_98() == 1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[(20 + iParam0)]))
	{
		if (func_70(Local_91.f_239) && NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
		{
			if (func_68(&iVar3))
			{
				if (func_55(Local_91.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_91.f_48[(20 + iParam0)]), 22, Local_91.f_239, Local_91.f_117[iVar3 /*3*/], Local_91.f_148[iVar3], 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), iLocal_105);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), true, 0f);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, true, true);
						}
						else
						{
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, true);
						}
						fVar6 = (30f * func_53());
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), SYSTEM::ROUND(fVar6));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 0, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 42, true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), SYSTEM::ROUND((200f * Global_262145.f_164)), 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), true);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), true);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 151, false);
						iVar4 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = SYSTEM::ROUND((fVar5 * SYSTEM::TO_FLOAT(iVar4)));
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), iVar4, 0);
						bVar7 = (20 + iParam0);
						if (BitTest(Local_91.f_272[func_91(bVar7)], func_90(bVar7)))
						{
							MISC::CLEAR_BIT(&(Local_91.f_272[func_91(bVar7)]), func_90(bVar7));
						}
						Local_91.f_247++;
						Local_91.f_317++;
						Local_91.f_250++;
						Local_91.f_318++;
						func_106(&(Local_91.f_414[bVar7 /*2*/]));
						func_20(&(Local_91.f_414[bVar7 /*2*/]), 0, 0);
						if (func_22(&(Local_91.f_364[bVar7 /*2*/])))
						{
							func_106(&(Local_91.f_364[bVar7 /*2*/]));
						}
						func_20(&(Local_559[iVar3 /*2*/]), 0, 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_91.f_48[bVar7]), true, iLocal_104);
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()//Position - 0x63E3
{
	if (func_768())
	{
		return Global_262145.f_11842;
	}
	return Global_262145.f_11562;
}

float func_53()//Position - 0x6406
{
	if (func_768())
	{
		return Global_262145.f_11844;
	}
	return Global_262145.f_11564;
}

int func_54(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x6429
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam4, bParam6, bParam5);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_55(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)//Position - 0x6488
{
	Global_2667225.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam12 > 0f)
	{
		if (func_62(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_56(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x659A
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_869(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_869(bVar1, 1, 1))
		{
			if (!func_16(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_57(bVar1) || !bParam8) && !Global_2689235[bVar1 /*453*/].f_267)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(bVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(bVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(bVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x6752
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(bool bParam0)//Position - 0x677D
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_61() && Global_1853348[iVar0 /*834*/].f_804) && !func_60(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_59(bParam0);
}

Vector3 func_59(bool bParam0)//Position - 0x67D0
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_60(struct<3> Param0)//Position - 0x67E3
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()//Position - 0x680D
{
	return Global_2714762.f_19;
}

int func_62(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)//Position - 0x681B
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam6 == 0)
		{
			if (func_869(bVar1, bParam2, bParam3))
			{
				if (iParam8 || NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_57(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_63(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(bVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(bool bParam0)//Position - 0x691F
{
	if (func_67(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2787505 = { func_66(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2787505))
	{
		return 1;
	}
	if (func_64(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, bool bParam1)//Position - 0x6966
{
	int iVar0;
	
	iVar0 = func_65(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_65(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x6991
{
	if (iParam0 != func_5())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_5();
}

struct<13> func_66(bool bParam0)//Position - 0x69B4
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_67(int iParam0, int iParam1)//Position - 0x69CB
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { func_66(iParam0) };
		Global_2787518 = { func_66(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787505))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787518))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_68(var uParam0)//Position - 0x6A38
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (!func_69(Local_91.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_22(&(Local_559[iVar0 /*2*/])) || (func_22(&(Local_559[iVar0 /*2*/])) && func_19(&(Local_559[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_69(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x6A9D
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_70(int iParam0)//Position - 0x6AE4
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_71()//Position - 0x6B02
{
	int iVar0;
	int iVar1;
	
	if (Local_91.f_279 == 0)
	{
		iVar0 = Local_91.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_91.f_279)
		{
			iVar0 = (iVar0 + Local_91.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_72()//Position - 0x6B46
{
	int iVar0;
	int iVar1;
	
	switch (Local_91.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_91.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_73(bool bParam0)//Position - 0x6B9B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_98() == 3)
	{
		return 0;
	}
	if (Local_91.f_242 < iVar0)
	{
	}
	if (Local_91.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_98() > 1)
	{
		iVar1 = func_88();
		if (Local_91.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_70(Local_91.f_240) && func_70(Local_91.f_239))
	{
		if (func_74(bParam0))
		{
			if (BitTest(Local_91.f_245, bParam0))
			{
				Local_91.f_249++;
				Local_91.f_251++;
				Local_91.f_252++;
				MISC::CLEAR_BIT(&(Local_91.f_245), bParam0);
				if (!BitTest(Local_91.f_3, 19))
				{
					MISC::SET_BIT(&(Local_91.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_74(bool bParam0)//Position - 0x6C50
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(4, 1, 0, 0))
	{
		if (func_80(bParam0))
		{
			if (func_75(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(bool bParam0)//Position - 0x6C7A
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	
	if (func_109(Local_91.f_73[bParam0]) && BitTest(Local_91.f_245, bParam0))
	{
		if (func_79(Local_91.f_73[bParam0]))
		{
			if (Local_91.f_116 <= 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0])) == joaat("insurgent"))
				{
					Local_91.f_116 = 2;
				}
				else
				{
					Local_91.f_116 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0])) + 1;
					if (Local_91.f_116 > 4)
					{
						Local_91.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_91.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[(bParam0 * 4 + iVar6)]))
				{
					if (func_70(Local_91.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_78(&(Local_91.f_48[(bParam0 * 4 + iVar6)]), Local_91.f_73[bParam0], 22, Local_91.f_239, iVar4, 1, 1, 1))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), iLocal_105);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true, 0f);
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 0);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, false);
							if (func_77())
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, true);
							}
							else
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, true);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 2, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 3, false);
							PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 0, true);
							PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND((200f * Global_262145.f_164)), 0);
							PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 42, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 52, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 53, true);
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_DIES_IN_SINKING_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 151, false);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]))))
							{
								if (iVar6 == 0)
								{
									PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_76());
									PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
									PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 50);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 52, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 53, true);
									PED::SET_PED_FIRING_PATTERN(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), -1857128337);
								}
								fVar0 = Global_262145.f_11826;
								fVar1 = Global_262145.f_11827;
								fVar2 = Global_262145.f_11828;
								fVar3 = Global_262145.f_11829;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 26, fVar3);
							}
							else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]))))
							{
								PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_76());
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
								PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 50);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 52, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 53, true);
								fVar0 = Global_262145.f_11826;
								fVar1 = Global_262145.f_11827;
								fVar2 = Global_262145.f_11828;
								fVar3 = Global_262145.f_11829;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 26, fVar3);
							}
							bVar7 = (bParam0 * 4 + iVar6);
							if (BitTest(Local_91.f_272[func_91(bVar7)], func_90(bVar7)))
							{
								MISC::CLEAR_BIT(&(Local_91.f_272[func_91(bVar7)]), func_90(bVar7));
							}
							PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true, iLocal_104);
							Local_91.f_250++;
							func_106(&(Local_91.f_414[(bParam0 * 4 + iVar6) /*2*/]));
							func_20(&(Local_91.f_414[(bParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_22(&(Local_91.f_364[(bParam0 * 4 + iVar6) /*2*/])))
							{
								func_106(&(Local_91.f_364[(bParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_91.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[(bParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_31(Local_91.f_48[(bParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), NETWORK::NET_TO_VEH(Local_91.f_73[bParam0])))
				{
					return 0;
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

float func_76()//Position - 0x73B6
{
	if (func_768())
	{
		return Global_262145.f_11845;
	}
	return Global_262145.f_11565;
}

int func_77()//Position - 0x73D9
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x73F7
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_79(int iParam0)//Position - 0x747F
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_80(bool bParam0)//Position - 0x74A1
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	struct<3> Var10;
	var uVar11;
	bool bVar12;
	
	iVar0 = func_98();
	Local_91.f_240 = func_43(iVar0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_73[bParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_91.f_116)
		{
			iVar3 = (bParam0 * 4 + iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_70(Local_91.f_240) && !BitTest(Local_91.f_245, bParam0))
		{
			fVar8 = 300f;
			if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_240))
			{
				fVar7 = 300f;
			}
			else
			{
				fVar7 = 100f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_240))
			{
				fVar8 = 800f;
			}
			iVar9 = 0;
			while (iVar9 < Local_91.f_242)
			{
				if (func_87(iVar9))
				{
					func_86(Local_91.f_240, iVar9, &Var10, &uVar11);
					if (!func_69(Var10, 0f, 0f, 0f, 0))
					{
						if (func_55(Var10, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar8, 0, -1, 1, fVar7, 0, 0, 0, 0))
						{
							Var4 = { Var10 };
							fVar5 = uVar11;
							iVar6 = 1;
							func_8(&(Local_91.f_186[iVar9 /*2*/]), 0, 0);
							iVar9 = Local_91.f_242;
						}
					}
				}
				iVar9++;
			}
			if (iVar6 == 1)
			{
				bVar12 = true;
				if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_240))
				{
					bVar12 = false;
				}
				if (func_85(bParam0))
				{
					if (func_82(&(Local_91.f_73[bParam0]), Local_91.f_240, Var4, fVar5, 1, 1, 1, 0, bVar12, 1, 0, 0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), 2);
						VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), 2);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true, true, false);
						VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), false);
						VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), 0);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_240))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]));
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]));
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), false);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_240))
						{
							VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), 3);
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), false);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]));
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), 30f);
							VEHICLE::SET_PLANE_RESIST_TO_EXPLOSION(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true);
							VEHICLE::_0xC361AA040D6637A8(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true);
							fVar1 = 500f;
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), SYSTEM::ROUND(fVar1), 0);
						}
						else
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true, 1);
						}
						if (func_98() == 5)
						{
							fVar1 = SYSTEM::TO_FLOAT(func_81());
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), SYSTEM::ROUND(fVar1), 0);
							ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), SYSTEM::ROUND(fVar1));
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), fVar1);
							VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), fVar1);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), fVar1);
							VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), false);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::_SET_HELI_MAIN_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), fVar1);
							VEHICLE::_SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), fVar1);
						}
						if (func_22(&(Local_91.f_336[bParam0 /*2*/])))
						{
							func_106(&(Local_91.f_336[bParam0 /*2*/]));
						}
						MISC::CLEAR_BIT(&(Local_91.f_253), bParam0);
						MISC::SET_BIT(&(Local_91.f_245), bParam0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true, iLocal_104);
						if (BitTest(Local_91.f_271, bParam0))
						{
							MISC::CLEAR_BIT(&(Local_91.f_271), bParam0);
						}
						if (BitTest(Local_91.f_303, bParam0))
						{
							MISC::CLEAR_BIT(&(Local_91.f_303), bParam0);
						}
						if (Local_91.f_240 == joaat("hydra") || Local_91.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_73[bParam0]))
	{
		return 0;
	}
	return 1;
}

var func_81()//Position - 0x7915
{
	if (func_768())
	{
		return Global_262145.f_11843;
	}
	return Global_262145.f_11563;
}

int func_82(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x7938
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam11)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_83(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_83(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x7A41
{
	int iVar0;
	
	if (func_84(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam3 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_84(int iParam0, struct<3> Param1, int iParam2)//Position - 0x7B14
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_85(bool bParam0)//Position - 0x7BB2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (BitTest(Local_94[iVar0 /*18*/].f_6, bParam0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_86(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x7BFC
{
	bool bVar0;
	
	bVar0 = (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0));
	switch (Local_91.f_27)
	{
		case joaat("rhino"):
			if (!func_69(Local_91.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_91.f_159[iParam1 /*3*/] };
				*uParam3 = Local_91.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_69(Local_91.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_91.f_159[iParam1 /*3*/] };
				*uParam3 = Local_91.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_91.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.189f, -2572.868f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							
							case 1:
								*uParam2 = { -1062.843f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							
							case 2:
								*uParam2 = { -1842.189f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							
							case 3:
								*uParam2 = { -1271.333f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.942f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							
							case 1:
								*uParam2 = { -1290.713f, -2658.844f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							
							case 2:
								*uParam2 = { -1157.682f, -2725.707f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							
							case 1:
								*uParam2 = { 2259.96f, 5608.534f, 63.366f };
								*uParam3 = 171.56f;
								break;
							
							case 2:
								*uParam2 = { 1042.117f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							
							case 3:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							
							case 2:
								*uParam2 = { 1972.487f, 4843.981f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							
							case 3:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							
							case 1:
								*uParam2 = { 22.328f, 6898.096f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							
							case 2:
								*uParam2 = { -313.5567f, 6436.651f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.884f, -1955.97f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							
							case 1:
								*uParam2 = { 594.3433f, -1979.466f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							
							case 2:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							
							case 3:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.797f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							
							case 1:
								*uParam2 = { 992.1669f, -1506.845f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							
							case 2:
								*uParam2 = { 771.2441f, -1620.786f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							
							case 3:
								*uParam2 = { 840.4948f, -1950.51f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("valkyrie"):
			switch (Local_91.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							
							case 1:
								*uParam2 = { -273.1338f, -1627.779f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							
							case 2:
								*uParam2 = { -1157.959f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							
							case 3:
								*uParam2 = { -1150.749f, -1708.635f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							
							case 4:
								*uParam2 = { -1001.754f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.12f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							
							case 1:
								*uParam2 = { -850.9597f, -1194.948f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.463f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							
							case 2:
								*uParam2 = { -390.1283f, 2557.157f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							
							case 3:
								*uParam2 = { 1084.247f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.401f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							
							case 1:
								*uParam2 = { 91.7939f, 3432.573f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							
							case 4:
								*uParam2 = { 142.7533f, 2271.567f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.043f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							
							case 1:
								*uParam2 = { 1002.483f, 3175.867f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							
							case 2:
								*uParam2 = { 2325.472f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							
							case 3:
								*uParam2 = { 1962.95f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							
							case 2:
								*uParam2 = { 128.2849f, 4454.878f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							
							case 3:
								*uParam2 = { -132.4943f, 4295.465f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							
							case 4:
								*uParam2 = { 1908.425f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							
							case 1:
								*uParam2 = { 2836.958f, 5957.465f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							
							case 2:
								*uParam2 = { 2624.236f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							
							case 3:
								*uParam2 = { 2780.447f, 4758.9f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							
							case 4:
								*uParam2 = { 3201.127f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.635f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							
							case 1:
								*uParam2 = { 3680.549f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							
							case 2:
								*uParam2 = { 3337.639f, 5482.484f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							
							case 3:
								*uParam2 = { 2766.238f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.479f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							
							case 1:
								*uParam2 = { -1567.165f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							
							case 3:
								*uParam2 = { -509.8761f, 1187.824f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							
							case 4:
								*uParam2 = { -1265.789f, 1493.722f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.476f, 1366.453f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							
							case 1:
								*uParam2 = { -1581.127f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							
							case 2:
								*uParam2 = { -1813.683f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							
							case 3:
								*uParam2 = { -1912.698f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							
							case 4:
								*uParam2 = { -2298.497f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("buzzard"):
			switch (Local_91.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.441f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							
							case 3:
								*uParam2 = { 375.2908f, -1020.433f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							
							case 4:
								*uParam2 = { 345.1868f, -1426.622f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.49f, -1131.338f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							
							case 1:
								*uParam2 = { 1396.414f, -1518.39f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							
							case 2:
								*uParam2 = { 972.8618f, -1464.828f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							
							case 1:
								*uParam2 = { -1572.228f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							
							case 4:
								*uParam2 = { 821.3636f, 1308.909f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.326f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							
							case 1:
								*uParam2 = { -925.5961f, 1124.77f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							
							case 3:
								*uParam2 = { -303.0683f, 1010.302f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							
							case 4:
								*uParam2 = { 56.7959f, 1080.651f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							
							case 2:
								*uParam2 = { -318.9394f, 3790.772f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							
							case 3:
								*uParam2 = { -236.0281f, 3088.237f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							
							case 4:
								*uParam2 = { 312.2873f, 2783.272f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.445f, 3430.153f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							
							case 1:
								*uParam2 = { 940.4324f, 3582.793f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							
							case 3:
								*uParam2 = { -241.2375f, 3905.453f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.455f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							
							case 2:
								*uParam2 = { 1150.014f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							
							case 3:
								*uParam2 = { 1876.22f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							
							case 4:
								*uParam2 = { 2105.892f, 1586.21f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.866f, 1852.856f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							
							case 1:
								*uParam2 = { 1526.959f, 1717.267f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							
							case 2:
								*uParam2 = { 1962.413f, 1297.095f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							
							case 3:
								*uParam2 = { 958.8857f, 1717.174f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_87(int iParam0)//Position - 0x90A7
{
	if (Local_91.f_228[iParam0] > 0)
	{
		if (!func_22(&(Local_91.f_207[iParam0 /*2*/])))
		{
			func_20(&(Local_91.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_19(&(Local_91.f_207[iParam0 /*2*/]), Local_91.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_22(&(Local_91.f_186[iParam0 /*2*/])))
	{
		if (!func_19(&(Local_91.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_88()//Position - 0x9125
{
	return Local_91.f_291[Local_91.f_279];
}

void func_89(int iParam0, int iParam1)//Position - 0x9139
{
	struct<3> Var0;
	
	Var0.f_0 = -196398508;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam1);
	}
}

int func_90(bool bParam0)//Position - 0x916B
{
	if (bParam0 < 31)
	{
		return bParam0;
	}
	else if (bParam0 < 62)
	{
		return (bParam0 - 31);
	}
	return (bParam0 - func_91(bParam0) * 31);
}

int func_91(bool bParam0)//Position - 0x919C
{
	if (bParam0 < 31)
	{
		return 0;
	}
	else if (bParam0 < 62)
	{
		return 1;
	}
	return (bParam0 / 31);
}

void func_92(int* iParam0)//Position - 0x91C2
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_93(bool bParam0)//Position - 0x9234
{
	if (Local_91.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (BitTest(Local_91.f_272[func_91(bParam0)], func_90(bParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_94(bool bParam0)//Position - 0x9268
{
	return func_95(bParam0);
}

int func_95(int iParam0)//Position - 0x9276
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[iParam0]), false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_91.f_48[iParam0]), false);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 1;
	}
	return 0;
}

int func_96(bool bParam0)//Position - 0x92B9
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (BitTest(Local_91.f_271, bParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (BitTest(Local_91.f_271, bParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_91.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_91.f_27 == joaat("hydra"))
		{
			if (BitTest(Local_91.f_271, bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_97(bool bParam0, int iParam1)//Position - 0x9337
{
	struct<3> Var0;
	
	Var0.f_0 = -1214381365;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam1);
	}
}

int func_98()//Position - 0x9369
{
	return Local_91.f_280[Local_91.f_279];
}

void func_99(int iParam0, bool bParam1)//Position - 0x937D
{
	struct<3> Var0;
	
	Var0.f_0 = 143745567;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam0);
	}
}

int func_100(bool bParam0)//Position - 0x93AF
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), false))
			{
				if (NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (NETWORK::_NETWORK_GET_ASSISTED_DAMAGE_OF_DEAD_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_101(int iParam0, bool bParam1)//Position - 0x9434
{
	struct<3> Var0;
	
	Var0.f_0 = -215033241;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam0);
	}
}

bool func_102(int iParam0)//Position - 0x9466
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[iParam0]));
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_73[iParam0]), false);
	}
	return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_73[iParam0]), false);
}

int func_103()//Position - 0x94BC
{
	int iVar0;
	int iVar1;
	
	switch (Local_91.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_91.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_91.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_104(int iParam0)//Position - 0x9535
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_869(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_105()//Position - 0x9592
{
	if (func_768())
	{
		return Global_262145.f_11836;
	}
	return Global_262145.f_11559;
}

void func_106(var uParam0)//Position - 0x95B5
{
	uParam0->f_1 = 0;
}

void func_107(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x95C2
{
	Param0.f_0 = -1529596656;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam13);
	}
}

int func_108(int iParam0, int iParam1, bool bParam2)//Position - 0x95EF
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_869(iVar2, 1, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar2), iParam0, false))
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar2) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
				{
					if (iVar2 != PLAYER::PLAYER_ID() || iParam1)
					{
						MISC::SET_BIT(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_109(int iParam0)//Position - 0x9665
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_110(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_110(int iParam0)//Position - 0x9685
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_111()//Position - 0x96BE
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_91.f_3, 20))
	{
		return;
	}
	if (!func_22(&uLocal_573))
	{
		func_20(&uLocal_573, 0, 0);
		return;
	}
	if (!func_19(&uLocal_573, 5000, 0))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_25(&(Local_91.f_7[iVar1]));
		}
		iVar1++;
	}
	MISC::SET_BIT(&(Local_91.f_3), 20);
}

int func_112()//Position - 0x9749
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_91.f_12 != 0)
	{
		return Local_91.f_12;
	}
	if (!func_768())
	{
		Local_91.f_12 = 1;
		return Local_91.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (!func_16(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_114())
	{
		Local_91.f_12 = 2;
	}
	else if (iVar1 < func_113())
	{
		Local_91.f_12 = 3;
	}
	else
	{
		Local_91.f_12 = 4;
	}
	return Local_91.f_12;
}

int func_113()//Position - 0x97D4
{
	return Global_262145.f_11584;
}

int func_114()//Position - 0x97E3
{
	return Global_262145.f_11583;
}

void func_115()//Position - 0x97F2
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			func_121(iVar0);
			func_120(iVar0, Local_91.f_256[iVar0], Local_91.f_22[iVar0]);
		}
		else if (Local_91.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_121(iVar0);
		}
		iVar0++;
	}
	func_119();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			func_118(iVar0);
			if (Local_94[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_94[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_94[iVar0 /*18*/].f_9;
					func_117(uVar1, Local_94[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_117(-1, -1, iVar2);
			}
		}
		else if (Local_91.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_118(iVar0);
		}
		iVar0++;
	}
	func_116();
}

void func_116()//Position - 0x98E8
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_91.f_465[iVar1 /*4*/].f_1 > Local_91.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_91.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_91.f_465[iVar1 /*4*/];
					uVar4 = Local_91.f_465[iVar1 /*4*/].f_2;
					Local_91.f_465[iVar1 /*4*/].f_1 = Local_91.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_91.f_465[iVar1 /*4*/] = Local_91.f_465[(iVar1 - 1) /*4*/];
					Local_91.f_465[iVar1 /*4*/].f_2 = Local_91.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_91.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_91.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_91.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_117(int iParam0, int iParam1, int iParam2)//Position - 0x99CD
{
	Local_91.f_465[iParam2 /*4*/] = iParam0;
	Local_91.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_91.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_118(int iParam0)//Position - 0x99FA
{
	Local_91.f_465[iParam0 /*4*/] = -1;
	Local_91.f_465[iParam0 /*4*/].f_2 = -1;
	Local_91.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_119()//Position - 0x9A24
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_91.f_594[iVar1 /*4*/].f_1 > Local_91.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_91.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_91.f_594[iVar1 /*4*/];
					uVar4 = Local_91.f_594[iVar1 /*4*/].f_2;
					Local_91.f_594[iVar1 /*4*/].f_1 = Local_91.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_91.f_594[iVar1 /*4*/] = Local_91.f_594[(iVar1 - 1) /*4*/];
					Local_91.f_594[iVar1 /*4*/].f_2 = Local_91.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_91.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_91.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_91.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_120(int iParam0, var uParam1, var uParam2)//Position - 0x9B07
{
	Local_91.f_594[iParam0 /*4*/] = iParam0;
	Local_91.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_91.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_121(int iParam0)//Position - 0x9B34
{
	Local_91.f_594[iParam0 /*4*/] = -1;
	Local_91.f_594[iParam0 /*4*/].f_1 = -1;
	Local_91.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_122()//Position - 0x9B5E
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_112();
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		if (!func_123(bVar1))
		{
			func_106(&(Local_91.f_5));
			return 0;
		}
		if (!BitTest(Local_91.f_13, bVar1))
		{
			func_106(&(Local_91.f_5));
			return 0;
		}
		else if (func_4(NETWORK::NET_TO_VEH(Local_91.f_7[bVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_106(&(Local_91.f_5));
			return 0;
		}
		bVar1++;
	}
	if (!func_22(&(Local_91.f_5)))
	{
		func_20(&(Local_91.f_5), 0, 0);
	}
	else if (func_19(&(Local_91.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_123(bool bParam0)//Position - 0x9C06
{
	if (func_109(Local_91.f_7[bParam0]))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), -1, false) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_124()//Position - 0x9C38
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_768())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			if (func_109(Local_91.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_91.f_12)
	{
		Local_91.f_12 = iVar1;
	}
	if (Local_91.f_12 <= 1)
	{
		MISC::CLEAR_BIT(&(Local_91.f_3), 8);
		if (!func_109(Local_91.f_7[0]))
		{
			if (func_109(Local_91.f_7[iVar2]))
			{
				func_25(&(Local_91.f_7[0]));
				Local_91.f_7[0] = Local_91.f_7[iVar2];
			}
		}
	}
}

void func_125()//Position - 0x9CDE
{
	bool bVar0;
	
	if (!func_768())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_91.f_15 != false;
			}
			else
			{
				bVar0 = Local_91.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = BitTest(Local_91.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_91.f_413 == -1)
		{
			Local_91.f_413 = func_127();
		}
		if (!func_22(&(Local_91.f_326)))
		{
			func_20(&(Local_91.f_326), 0, 0);
		}
		else if (!BitTest(Local_91.f_3, 4))
		{
			if ((Local_91.f_413 - func_126(&(Local_91.f_326), 0, 0)) < 0)
			{
				MISC::SET_BIT(&(Local_91.f_3), 4);
			}
		}
	}
	else if (func_22(&(Local_91.f_326)))
	{
		func_106(&(Local_91.f_326));
		Local_91.f_413 = (Local_91.f_413 - func_126(&(Local_91.f_326), 0, 0));
	}
}

int func_126(var uParam0, bool bParam1, bool bParam2)//Position - 0x9DBA
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

var func_127()//Position - 0x9E01
{
	if (func_768())
	{
		return Global_262145.f_11846;
	}
	return Global_262145.f_11566;
}

void func_128()//Position - 0x9E24
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar5 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		iLocal_107[bVar0] = 0;
		iLocal_93[bVar0] = -2;
		iLocal_108[bVar0] = 0;
		bVar0++;
	}
	bVar0 = false;
	if (Local_91.f_0 != 4)
	{
		bLocal_98 = false;
		while (bLocal_98 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_98)))
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_98));
				if (!func_16(iVar7, 0))
				{
					if (Local_94[bLocal_98 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					bVar0 = false;
					while (bVar0 < 4)
					{
						func_135(bLocal_98, bVar0, iVar7);
						bVar0++;
					}
					bVar0 = false;
					bVar0 = false;
					while (bVar0 < 5)
					{
						func_134(bLocal_98, bVar0);
						bVar0++;
					}
					if (!BitTest(Local_91.f_3, 14))
					{
						if (!BitTest(Local_94[bLocal_98 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					bVar0 = false;
					while (bVar0 <= 23)
					{
						func_133(bLocal_98, bVar0);
						bVar0++;
					}
					if (!bVar5)
					{
						if (!BitTest(Local_94[bLocal_98 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_131(bLocal_98, iVar7);
					if (func_869(iVar7, 1, 1))
					{
						bVar0 = false;
						bVar0 = false;
						while (bVar0 < 4)
						{
							if (Local_91.f_17[bVar0] == func_5())
							{
								if (BitTest(Local_94[bLocal_98 /*18*/].f_2, (0 + bVar0)))
								{
									Local_91.f_17[bVar0] = iVar7;
								}
							}
							else if (Local_91.f_17[bVar0] == iVar7 && Local_91.f_241 == 0)
							{
								if (!BitTest(Local_94[bLocal_98 /*18*/].f_2, (0 + bVar0)))
								{
									Local_91.f_17[bVar0] = func_5();
								}
							}
							bVar0++;
						}
					}
				}
			}
			bLocal_98++;
		}
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (!BitTest(Local_91.f_13, bVar0))
		{
			if (iLocal_107[bVar0] == func_130() && func_123(bVar0))
			{
				MISC::SET_BIT(&(Local_91.f_13), bVar0);
			}
			if (!BitTest(Local_91.f_14, bVar0))
			{
				if (iLocal_107[bVar0] >= 1 && func_123(bVar0))
				{
					MISC::SET_BIT(&(Local_91.f_14), bVar0);
				}
			}
			else if (iLocal_107[bVar0] == 0 || !func_123(bVar0))
			{
				if (BitTest(Local_91.f_14, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_91.f_14), bVar0);
					if (iLocal_107[bVar0] == 0)
					{
						if (Local_91.f_241 >= 1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bVar0]))
							{
								func_25(&(Local_91.f_7[bVar0]));
							}
						}
					}
				}
			}
			if (!BitTest(Local_91.f_15, bVar0) && func_123(bVar0))
			{
				if (iLocal_107[bVar0] >= 2)
				{
					MISC::SET_BIT(&(Local_91.f_15), bVar0);
				}
			}
			else if (iLocal_107[bVar0] <= 1 || !func_123(bVar0))
			{
				if (BitTest(Local_91.f_15, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_91.f_15), bVar0);
				}
			}
		}
		else if (iLocal_107[bVar0] < func_130() || !func_123(bVar0))
		{
			MISC::CLEAR_BIT(&(Local_91.f_13), bVar0);
		}
		if (Local_91.f_266[bVar0] != iLocal_107[bVar0])
		{
			Local_91.f_266[bVar0] = iLocal_107[bVar0];
			if (Local_91.f_241 == 1)
			{
				if (Local_91.f_266[bVar0] == 0)
				{
					if (!BitTest(Local_91.f_616, bVar0))
					{
						MISC::SET_BIT(&(Local_91.f_616), bVar0);
					}
				}
			}
		}
		if (Local_91.f_241 == 0)
		{
			if (func_768())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bVar0]))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]));
					if (iLocal_107[bVar0] >= func_129(iVar3) && func_123(bVar0))
					{
						iLocal_108[bVar0] = 1;
					}
				}
			}
		}
		if (Local_91.f_241 == 1)
		{
			if (Local_91.f_256[bVar0] != iLocal_93[bVar0])
			{
				if (iLocal_93[bVar0] >= 0)
				{
					if (iLocal_93[bVar0] > Local_91.f_256[bVar0])
					{
						Local_91.f_256[bVar0] = iLocal_93[bVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_91.f_256[bVar0] - iLocal_93[bVar0]);
						if (Local_91.f_261[bVar0] != iVar8)
						{
							Local_91.f_261[bVar0] = iVar8;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar4)
	{
		func_115();
	}
	if (!BitTest(Local_91.f_3, 11))
	{
		if (!bVar5)
		{
			MISC::SET_BIT(&(Local_91.f_3), 11);
		}
	}
	bVar0 = false;
	iVar9 = 0;
	if (Local_91.f_241 == 0)
	{
		if (func_768())
		{
			bVar0 = false;
			while (bVar0 < 4)
			{
				if (iLocal_108[bVar0])
				{
					iVar9++;
				}
				bVar0++;
			}
			if (!BitTest(Local_91.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					MISC::SET_BIT(&(Local_91.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				MISC::CLEAR_BIT(&(Local_91.f_3), 9);
			}
		}
	}
	if (Local_91.f_241 == 0)
	{
		if (!func_22(&(Local_91.f_360)))
		{
			func_20(&(Local_91.f_360), 0, 0);
		}
		else if (func_19(&(Local_91.f_360), 5000, 0))
		{
			if (!BitTest(Local_91.f_3, 14))
			{
				if (func_768())
				{
					if (Local_91.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							MISC::SET_BIT(&(Local_91.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_91.f_3), 14);
					}
				}
				else if (Local_91.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_91.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					MISC::SET_BIT(&(Local_91.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_91.f_614)
	{
		Local_91.f_614 = iVar1;
	}
	else
	{
		Local_91.f_613 = (Local_91.f_614 - iVar1);
	}
	if (iVar2 > Local_91.f_615)
	{
		Local_91.f_615 = iVar2;
	}
}

int func_129(int iParam0)//Position - 0xA3B0
{
	switch (iParam0)
	{
		case joaat("rhino"):
			return 1;
		
		case joaat("hydra"):
			return 1;
		
		case joaat("savage"):
			return 1;
		
		case joaat("valkyrie"):
			return 2;
		
		case joaat("buzzard"):
			return 1;
		
		default:
	}
	return 99;
}

int func_130()//Position - 0xA3F3
{
	return Local_91.f_28;
}

void func_131(bool bParam0, int iParam1)//Position - 0xA3FF
{
	bool bVar0;
	int iVar1;
	
	if (!BitTest(Local_91.f_16, bParam0))
	{
		if (BitTest(Local_94[bParam0 /*18*/].f_2, 12))
		{
			func_132(iParam1, 1);
			MISC::SET_BIT(&(Local_91.f_16), bParam0);
		}
		else if (Local_91.f_241 >= 1)
		{
			if (Local_94[bParam0 /*18*/].f_1 == 0)
			{
				func_132(iParam1, 1);
				MISC::SET_BIT(&(Local_91.f_16), bParam0);
			}
			else if (Local_94[bParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar1]))
					{
						if (func_109(Local_91.f_7[iVar1]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iParam1), NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), false))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_132(iParam1, 1);
					MISC::SET_BIT(&(Local_91.f_16), bParam0);
				}
			}
		}
	}
	else if (Local_91.f_241 < 1)
	{
		if (!BitTest(Local_94[bParam0 /*18*/].f_2, 12))
		{
			func_132(iParam1, 0);
			MISC::CLEAR_BIT(&(Local_91.f_16), bParam0);
		}
	}
}

void func_132(int iParam0, bool bParam1)//Position - 0xA4FB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_91.f_7[iVar0]), iParam0, bParam1);
		}
		iVar0++;
	}
}

void func_133(int iParam0, bool bParam1)//Position - 0xA538
{
	if (!BitTest(Local_91.f_272[func_91(bParam1)], func_90(bParam1)))
	{
		if (BitTest(Local_94[iParam0 /*18*/].f_3[func_91(bParam1)], func_90(bParam1)))
		{
			MISC::SET_BIT(&(Local_91.f_272[func_91(bParam1)]), func_90(bParam1));
			if (Local_94[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bParam1]))
			{
				if (!func_31(Local_91.f_48[bParam1]))
				{
					if (!func_94(bParam1))
					{
						MISC::CLEAR_BIT(&(Local_91.f_272[func_91(bParam1)]), func_90(bParam1));
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bParam1]), false))
					{
						if (bParam1 >= 20)
						{
							MISC::CLEAR_BIT(&(Local_91.f_272[func_91(bParam1)]), func_90(bParam1));
						}
					}
				}
			}
		}
	}
}

void func_134(int iParam0, bool bParam1)//Position - 0xA610
{
	if (!BitTest(Local_91.f_271, bParam1))
	{
		if (BitTest(Local_94[iParam0 /*18*/].f_6, bParam1))
		{
			MISC::SET_BIT(&(Local_91.f_271), bParam1);
			if (Local_94[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (BitTest(Local_91.f_303, bParam1))
			{
				if (!BitTest(Local_91.f_253, bParam1))
				{
					Local_91.f_251 = (Local_91.f_251 - 1);
					if (func_98() > 1)
					{
						if (Local_91.f_252 > 0)
						{
							Local_91.f_302++;
							func_97(bParam1, func_104(1));
						}
					}
					MISC::SET_BIT(&(Local_91.f_253), bParam1);
				}
				if (func_22(&(Local_91.f_336[bParam1 /*2*/])))
				{
					func_106(&(Local_91.f_336[bParam1 /*2*/]));
				}
				func_25(&(Local_91.f_73[bParam1]));
				MISC::CLEAR_BIT(&(Local_91.f_303), bParam1);
			}
		}
	}
}

void func_135(int iParam0, bool bParam1, int iParam2)//Position - 0xA6D3
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_94[iParam0 /*18*/].f_1, bParam1))
	{
		iLocal_107[bParam1]++;
		if (iLocal_93[bParam1] < 0)
		{
			if (Local_94[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_91.f_261[bParam1] > 0)
				{
					iLocal_93[bParam1] = Local_91.f_261[bParam1];
				}
				else
				{
					iLocal_93[bParam1] = 0;
				}
			}
		}
		iLocal_93[bParam1] = (iLocal_93[bParam1] + Local_94[iParam0 /*18*/].f_8);
		if (Local_91.f_241 >= 1)
		{
			if (Local_91.f_22[bParam1] == func_5())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bParam1]))
				{
					if (func_109(Local_91.f_7[bParam1]))
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[bParam1]), -1, false);
						if (iVar1 != 0)
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (iVar0 == iParam2)
								{
									Local_91.f_22[bParam1] = iParam2;
									func_115();
								}
							}
						}
					}
				}
			}
		}
		if (!BitTest(Local_91.f_319, bParam1))
		{
			if (Local_94[iParam0 /*18*/].f_10 > -1)
			{
				MISC::SET_BIT(&(Local_91.f_319), bParam1);
				func_20(&(Local_91.f_349[bParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_91.f_22[bParam1] != func_5())
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_91.f_22[bParam1]))
		{
			iVar0 = func_136(bParam1, 1);
			if (iVar0 != func_5())
			{
				Local_91.f_22[bParam1] = iVar0;
			}
			else
			{
				Local_91.f_22[bParam1] = func_5();
			}
		}
		else if (func_16(Local_91.f_22[bParam1], 0))
		{
			Local_91.f_22[bParam1] = func_5();
			func_115();
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Local_91.f_22[bParam1]);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (func_109(Local_91.f_7[bParam1]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_91.f_7[bParam1]), false))
					{
						iVar0 = func_136(bParam1, 1);
						if (iVar0 != func_5())
						{
							Local_91.f_22[bParam1] = iVar0;
						}
						else
						{
							Local_91.f_22[bParam1] = func_5();
						}
					}
				}
			}
		}
	}
}

int func_136(bool bParam0, bool bParam1)//Position - 0xA8D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_5();
	if (bParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
			{
				if (iVar0 == func_5())
				{
					if (Local_94[iVar3 /*18*/].f_17 == 1)
					{
						if (BitTest(Local_94[iVar3 /*18*/].f_1, bParam0))
						{
							if (!bParam1)
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
							}
							else
							{
								iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
								if (func_109(Local_91.f_7[bParam0]))
								{
									iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
									if (!PED::IS_PED_INJURED(iVar2))
									{
										if (PED::IS_PED_IN_VEHICLE(iVar2, NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), false))
										{
											iVar0 = iVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

void func_137(int iParam0)//Position - 0xA98F
{
	struct<3> Var0;
	int iVar1;
	
	Var0.f_0 = -1257646007;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = func_138(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iVar1);
	}
}

var func_138(int iParam0, bool bParam1)//Position - 0xA9C9
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_869(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_16(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAA2E
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_140(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_140(int iParam0)//Position - 0xB2A8
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		default:
	}
	return -1;
}

int func_141()//Position - 0xB40C
{
	func_112();
	if (func_70(Local_91.f_27))
	{
		if (func_142())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_91.f_27);
			return 1;
		}
	}
	return 0;
}

int func_142()//Position - 0xB438
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	while (bVar0 < Local_91.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[bVar0]))
		{
			if (func_70(Local_91.f_27))
			{
				if (!BitTest(Local_91.f_244, bVar0))
				{
					MISC::CLEAR_AREA(Local_91.f_30[bVar0 /*3*/], 5f, true, false, false, true);
					MISC::SET_BIT(&(Local_91.f_244), bVar0);
				}
				if (func_82(&(Local_91.f_7[bVar0]), Local_91.f_27, Local_91.f_30[bVar0 /*3*/], Local_91.f_43[bVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_91.f_7[bVar0]), true, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), 1);
					VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true, true, false);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
					VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_27) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_27))
					{
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_145());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_143());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_27))
						{
							VEHICLE::SET_PLANE_RESIST_TO_EXPLOSION(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::_SET_HELI_MAIN_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
							VEHICLE::_SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
						}
					}
					else
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_145());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_143());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
					}
					VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
					if (Local_91.f_27 == joaat("savage"))
					{
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), "MPBitset"))
						{
							iVar2 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), "MPBitset");
						}
						MISC::SET_BIT(&iVar2, 10);
						MISC::SET_BIT(&iVar2, 15);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), "MPBitset", iVar2);
					}
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false, iLocal_104);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false, Global_1837161[iVar3]);
						iVar3++;
					}
					VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false, false);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
					VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), 0);
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < Local_91.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[bVar0]))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

var func_143()//Position - 0xB8A4
{
	if (func_768())
	{
		return Global_262145.f_11840;
	}
	return Global_262145.f_11579;
}

var func_144()//Position - 0xB8C7
{
	if (func_768())
	{
		return Global_262145.f_11841;
	}
	return Global_262145.f_11580;
}

var func_145()//Position - 0xB8EA
{
	if (func_768())
	{
		return Global_262145.f_11839;
	}
	return Global_262145.f_11578;
}

int func_146()//Position - 0xB90D
{
	int iVar0;
	int iVar1;
	
	if (!func_22(&(Local_91.f_362)))
	{
		func_20(&(Local_91.f_362), 0, 0);
		return 0;
	}
	else if (!func_19(&(Local_91.f_362), 3000, 0))
	{
		return 0;
	}
	if (!BitTest(Local_91.f_3, 10))
	{
		if (func_160(&iVar0))
		{
			if (iVar0 < func_159())
			{
				MISC::SET_BIT(&(Local_91.f_3), 10);
			}
			else
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_11834) && !Global_262145.f_11832) || Global_262145.f_11833)
				{
					MISC::SET_BIT(&(Local_91.f_3), 8);
					MISC::SET_BIT(&(Local_91.f_3), 10);
				}
				else
				{
					MISC::SET_BIT(&(Local_91.f_3), 10);
				}
			}
		}
	}
	if (BitTest(Local_91.f_3, 10))
	{
		if (Local_91.f_12 == 0)
		{
			func_112();
			return 0;
		}
		if (!BitTest(Local_91.f_3, 13))
		{
			if (func_155())
			{
				if (!func_153(129, Local_91.f_1, Local_91.f_2, 0))
				{
					if (func_147())
					{
						MISC::SET_BIT(&(Local_91.f_3), 13);
					}
					else
					{
						Local_91.f_29 = -1;
					}
				}
				else
				{
					Local_91.f_29 = -1;
				}
			}
		}
	}
	return BitTest(Local_91.f_3, 13);
}

int func_147()//Position - 0xBA36
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_148(Local_91.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_55(Local_91.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_148(struct<3> Param0, float fParam1)//Position - 0xBAB0
{
	int iVar0[32];
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	
	if (Global_2687660.f_372.f_225 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	bVar3 = true;
	while (bVar3)
	{
		if (Global_2687660.f_372[iVar2 /*7*/] != -1)
		{
			iVar0[iVar1] = MISC::GET_HASH_KEY(&(Global_2687660.f_372[iVar2 /*7*/].f_1));
			iVar1++;
			if (iVar1 == Global_2687660.f_372.f_225)
			{
				bVar3 = false;
			}
		}
		iVar2++;
		if (iVar2 >= 32)
		{
			bVar3 = false;
		}
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	Var4 = { 0f, 0f, 0f };
	Var5 = { Param0 };
	iVar6 = 0;
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	iVar8 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1573885)
	{
		if (BitTest(Global_2621865[iVar2 /*26*/].f_12, 11))
		{
			Var4 = { Global_2621865[iVar2 /*26*/].f_3 };
			Var5.f_2 = Var4.f_2;
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var5, true) < fParam1)
			{
				Var7 = { Global_2621865[iVar2 /*26*/].f_15 };
				iVar8 = func_149(&Var7);
				iVar6 = 0;
				while (iVar6 < iVar1)
				{
					if (iVar8 == iVar0[iVar6])
					{
						return 1;
					}
					iVar6++;
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_149(var uParam0)//Position - 0xBBEE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_150(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_177589[iVar1 /*13*/].f_3;
		
		case 62:
			return Global_998606.f_9405[iVar1 /*13*/].f_3;
		
		default:
	}
	return iVar0;
}

int func_150(var uParam0)//Position - 0xBC45
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_152(uParam0->f_1))
	{
		if (func_151(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (BitTest(Global_998606.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (BitTest(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (BitTest(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (BitTest(Global_1020252.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_151(var uParam0)//Position - 0xBE9A
{
	if (Global_2660249)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2660249.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_152(int iParam0)//Position - 0xBEBF
{
	return iParam0 == 9999;
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBECD
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_154(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8576)
		{
			if (Global_2779753.f_136[iVar0 /*2*/] == iVar1 && Global_2779753.f_136[iVar0 /*2*/].f_1 == func_139(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_154(int iParam0)//Position - 0xBF52
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_155()//Position - 0xBFF1
{
	if (func_157(&(Local_91.f_27)))
	{
		if (Local_91.f_4)
		{
			func_156();
		}
		func_40();
		return 1;
	}
	return 0;
}

void func_156()//Position - 0xC01D
{
	Global_1941287 = 1;
	if (!BitTest(Global_2824440, 0))
	{
		MISC::SET_BIT(&Global_2824440, 0);
		MISC::SET_BIT(&Global_1941288, 0);
	}
	if (!BitTest(Global_2824440, 1))
	{
		MISC::SET_BIT(&Global_2824440, 1);
		MISC::SET_BIT(&Global_1941288, 1);
	}
	if (!BitTest(Global_2824440, 5))
	{
		MISC::SET_BIT(&Global_2824440, 5);
		MISC::SET_BIT(&Global_1941288, 5);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, false, false);
	}
}

int func_157(var uParam0)//Position - 0xC126
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_158(joaat("rhino")))
			{
				Local_91.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_158(joaat("hydra")))
			{
				Local_91.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_91.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_158(joaat("savage")))
			{
				Local_91.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_91.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_158(joaat("valkyrie")))
			{
				Local_91.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_158(joaat("buzzard")))
			{
				Local_91.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_158(int iParam0)//Position - 0xC20B
{
	if (!func_768())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11568;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11570;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11569;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11572;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11571;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11848;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11850;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11849;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11852;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11851;
				break;
			}
	}
	return 0;
}

int func_159()//Position - 0xC2EB
{
	return Global_262145.f_11582;
}

int func_160(var uParam0)//Position - 0xC2FA
{
	int iVar0;
	
	if (!func_22(&(Local_91.f_334)))
	{
		func_20(&(Local_91.f_334), 0, 0);
	}
	else if (func_19(&(Local_91.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (!func_16(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 0))
				{
					if (!BitTest(Local_94[iVar0 /*18*/].f_2, 7))
					{
						*uParam0++;
					}
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_161(var uParam0)//Position - 0xC37E
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_162(var uParam0)//Position - 0xC3A7
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_20(uParam0, 0, 0);
		}
	}
}

void func_163()//Position - 0xC3C6
{
	struct<3> Var0;
	
	if (iLocal_580 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iLocal_580]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[iLocal_580]))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[iLocal_580]), false) };
				if (Var0.f_2 < -25f)
				{
					func_25(&(Local_91.f_7[iLocal_580]));
				}
			}
		}
	}
	iLocal_580++;
	if (iLocal_580 >= 4)
	{
		iLocal_580 = 0;
	}
}

void func_164()//Position - 0xC438
{
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
	{
		if (!BitTest(uLocal_96, 13))
		{
			MISC::SET_BIT(&uLocal_96, 13);
			NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
		}
	}
	else if (BitTest(uLocal_96, 13))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				MISC::CLEAR_BIT(&uLocal_96, 13);
			}
		}
	}
}

void func_165()//Position - 0xC4AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (func_430())
	{
		func_278(0);
	}
	iVar0 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_5())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
				iVar2 = iVar1;
				iVar3 = Local_94[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_200();
						func_197(iVar2);
						break;
					
					case 1:
						func_196();
						func_170();
						func_166(1);
						break;
					
					case 2:
						func_166(0);
						break;
					}
				}
			}
	}
}

void func_166(bool bParam0)//Position - 0xC56A
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (bParam0)
		{
			func_167(Local_91.f_48[bVar0], &(Local_103[bVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1, 0);
		}
		else
		{
			func_167(Local_91.f_48[bVar0], &(Local_103[bVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1, 0);
		}
		if (HUD::DOES_BLIP_EXIST(Local_103[bVar0 /*8*/]))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_103[bVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_103[bVar0 /*8*/], true);
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_103[bVar0 /*8*/].f_1))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_103[bVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_103[bVar0 /*8*/].f_1, true);
			}
		}
		if (Local_91.f_27 != joaat("hydra"))
		{
			if (BitTest(Local_91.f_272[func_91(bVar0)], func_90(bVar0)) || BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar0)], func_90(bVar0)))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar0]))
				{
					func_92(&(Local_103[bVar0 /*8*/]));
				}
			}
		}
		else if ((bVar0 % 4) == 0)
		{
			iVar1 = (bVar0 / 4);
			if (BitTest(Local_91.f_271, iVar1) || BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar0]))
				{
					func_92(&(Local_103[bVar0 /*8*/]));
				}
			}
		}
		bVar0++;
	}
}

void func_167(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, int iParam10)//Position - 0xC6DB
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_169(0))
		{
			Global_2703735 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_168(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2703735, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10);
		}
		else
		{
			func_168(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2703735, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_92(iParam1);
	}
}

int func_168(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11)//Position - 0xC75B
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_169(bool bParam0)//Position - 0xC945
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_170()//Position - 0xC956
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar5;
	int iVar6[4];
	var uVar7[4];
	int iVar8;
	int iVar9;
	
	iVar2 = (func_34() - func_126(&(Local_91.f_332), 0, 0));
	if (iLocal_558 == 0)
	{
		if (BitTest(uLocal_95, 26))
		{
			if ((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2))
			{
				iLocal_558 = (func_34() - func_126(&(Local_91.f_332), 0, 0));
				iVar2 = iLocal_558;
			}
		}
	}
	else
	{
		iVar2 = iLocal_558;
	}
	if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		return;
	}
	if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_768())
	{
		iVar0 = (((Local_91.f_256[0] + Local_91.f_256[1]) + Local_91.f_256[2]) + Local_91.f_256[3]);
	}
	else
	{
		iVar0 = Local_91.f_256[0];
	}
	func_192(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_768())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar9 = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_594[iVar1 /*4*/].f_2);
			if (iVar9 != func_5())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9))
				{
					sVar4[iVar1] = PLAYER::GET_PLAYER_NAME(iVar9);
					iVar6[iVar1] = Local_91.f_594[iVar1 /*4*/].f_1;
					uVar7[iVar1] = Local_91.f_594[iVar1 /*4*/];
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 == uVar7[iVar1])
					{
						iVar8 = uVar7[iVar1];
						iVar8++;
					}
					uVar7[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar6[iVar1] = -1;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar6[iVar1] = -1;
			}
			iVar1++;
		}
		if ((func_34() - func_126(&(Local_91.f_332), 0, 0)) >= 0)
		{
			if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
			{
				func_188(sVar4[0], uVar7[0], sVar4[1], uVar7[1], sVar4[2], uVar7[2], sVar4[3], uVar7[3], iVar6[0], iVar6[1], iVar6[2], iVar6[3], iVar2, iVar3, func_189(), iVar8);
			}
			else
			{
				func_186(iVar6[0], uVar7[0], iVar6[1], uVar7[1], iVar6[2], uVar7[2], iVar6[3], uVar7[3], iVar2, iVar3, func_189(), iVar8);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_91.f_255)
		{
			iVar0 = Local_91.f_255;
		}
		if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
		{
			func_185(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), iVar0, iVar0, Local_91.f_255, iVar2, iVar3, 0, func_189());
		}
		else
		{
			func_171(iVar0, iVar0, Local_91.f_255, iVar2, iVar3, 0, func_189(), 1);
		}
		if (bVar5)
		{
			func_115();
		}
	}
}

void func_171(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)//Position - 0xCC3C
{
	struct<8> Var0;
	char* sVar1;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_181();
	func_180();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_177(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_176(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar1 = "HUD_COUNTDOWN";
	if (!func_175(sParam6))
	{
		sVar1 = sParam6;
	}
	func_172(iParam3, sVar1, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0, -1);
}

void func_172(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0xCCCD
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_174(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_173(7, iVar0);
		Global_1649593.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = iParam4;
		Global_1649593.f_4659.f_194[iVar0] = iParam5;
		Global_1649593.f_4659.f_249[iVar0] = iParam6;
		Global_1649593.f_4659.f_260[iVar0] = iParam7;
		Global_1649593.f_4659.f_205[iVar0] = iParam8;
		Global_1649593.f_4659.f_314[iVar0] = iParam9;
		Global_1649593.f_4659.f_325[iVar0] = iParam10;
		Global_1649593.f_4659.f_357[iVar0] = iParam11;
		Global_1649593.f_4659.f_238[iVar0] = iParam12;
		Global_1649593.f_4659.f_271[iVar0] = iParam13;
		Global_1649593.f_4659.f_368[iVar0] = iParam14;
		Global_1649593.f_4659.f_379[iVar0] = iParam15;
		Global_1649593.f_4659.f_390[iVar0] = iParam16;
		Global_1649593.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_173(int iParam0, int iParam1)//Position - 0xCE2A
{
	MISC::SET_BIT(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_174(int iParam0, int iParam1)//Position - 0xCE43
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

int func_175(char* sParam0)//Position - 0xCE59
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_176(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xCE90
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_174(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_173(4, iVar0);
		Global_1649593.f_3347[iVar0] = iParam0;
		Global_1649593.f_3347.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_3347.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_3347.f_183[iVar0] = iParam3;
		Global_1649593.f_3347.f_216[iVar0] = iParam5;
		Global_1649593.f_3347.f_194[iVar0] = iParam4;
		Global_1649593.f_3347.f_227[iVar0] = iParam6;
		Global_1649593.f_3347.f_270[iVar0] = iParam7;
		Global_1649593.f_3347.f_281[iVar0] = iParam8;
		Global_1649593.f_3347.f_292[iVar0] = iParam9;
		Global_1649593.f_3347.f_303[iVar0] = iParam10;
		Global_1649593.f_3347.f_314[iVar0] = iParam11;
		Global_1649593.f_3347.f_325[iVar0] = iParam13;
		Global_1649593.f_3347.f_336[iVar0] = iParam14;
		Global_1649593.f_3347.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1649593.f_1172 = 1;
		}
	}
}

void func_177(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0xCFEA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_174(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_173(6, iVar0);
		Global_1649593.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4041.f_183[iVar0] = iParam3;
		Global_1649593.f_4041.f_172[iVar0] = iParam2;
		Global_1649593.f_4041.f_260[iVar0] = iParam4;
		Global_1649593.f_4041.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_4041.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_4041.f_443[iVar0] = iParam7;
		Global_1649593.f_4041.f_454[iVar0] = iParam8;
		Global_1649593.f_4041.f_497[iVar0] = iParam9;
		Global_1649593.f_4041.f_508[iVar0] = iParam10;
		Global_1649593.f_4041.f_205[iVar0] = iParam11;
		Global_1649593.f_4041.f_216[iVar0] = iParam12;
		Global_1649593.f_4041.f_227[iVar0] = iParam13;
		Global_1649593.f_4041.f_238[iVar0] = iParam14;
		Global_1649593.f_4041.f_249[iVar0] = iParam15;
		Global_1649593.f_4041.f_519[iVar0] = iParam16;
		Global_1649593.f_4041.f_530[iVar0] = iParam17;
		Global_1649593.f_4041.f_541[iVar0] = iParam18;
		Global_1649593.f_4041.f_552[iVar0] = iParam19;
		Global_1649593.f_4041.f_563[iVar0] = iParam20;
		Global_1649593.f_4041.f_574[iVar0] = iParam21;
		Global_1649593.f_4041.f_585[iVar0] = iParam22;
		Global_1649593.f_4041.f_596[iVar0] = iParam23;
		Global_1649593.f_4041.f_607[iVar0] = iParam24;
		Global_1649593.f_4041.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_179())
		{
			Global_1649593.f_1172 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1649593.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1649593.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1649593.f_1172 = 1;
			}
			if (func_178())
			{
				Global_1649593.f_1176 = 1;
			}
		}
	}
}

int func_178()//Position - 0xD25B
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_179()//Position - 0xD27F
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_180()//Position - 0xD2BD
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2727094 = 1;
}

void func_181()//Position - 0xD2E0
{
	Global_1649593.f_1172 = 1;
}

int func_182(bool bParam0)//Position - 0xD2F0
{
	if (func_184())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_869(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_183()//Position - 0xD327
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192 != 0;
}

bool func_184()//Position - 0xD33E
{
	return BitTest(Global_2621446, 12);
}

void func_185(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xD34D
{
	char* sVar0;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_180();
	func_181();
	if (bParam6)
	{
		func_177(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_176(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_175(sParam7))
	{
		sVar0 = sParam7;
	}
	func_172(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0, -1);
}

void func_186(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)//Position - 0xD3D7
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_181();
	func_180();
	if (iParam0 > -1)
	{
		Var0 = { func_187(iParam1) };
		iVar1 = 1;
		if (iParam11 == iParam1)
		{
			iVar1 = 9;
		}
		func_177(iParam0, &Var0, -1, iVar1, 7, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_187(iParam3) };
		iVar2 = 1;
		if (iParam11 == iParam3)
		{
			iVar2 = 9;
		}
		func_177(iParam2, &Var0, -1, iVar2, 6, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_187(iParam5) };
		iVar3 = 1;
		if (iParam11 == iParam5)
		{
			iVar3 = 9;
		}
		func_177(iParam4, &Var0, -1, iVar3, 5, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_187(iParam7) };
		iVar4 = 1;
		if (iParam11 == iParam7)
		{
			iVar4 = 9;
		}
		func_177(iParam6, &Var0, -1, iVar4, 4, 1, "", 0, 0, 0, 0, iVar4, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar5 = "HUD_COUNTDOWN";
	if (!func_175(sParam10))
	{
		sVar5 = sParam10;
	}
	func_172(iParam8, sVar5, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
}

struct<16> func_187(int iParam0)//Position - 0xD52C
{
	struct<16> Var0;
	
	StringConCat(&Var0, HUD::_GET_LABEL_TEXT("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_188(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)//Position - 0xD551
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_181();
	func_180();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_177(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_177(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_177(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_177(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_175(sParam14))
	{
		sVar4 = sParam14;
	}
	func_172(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
}

char* func_189()//Position - 0xD676
{
	return "HUD_COUNTDOWN";
	switch (func_191(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_190())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_190()//Position - 0xD812
{
	if (func_191(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2815059.f_5116;
	}
	return -1;
}

int func_191(int iParam0)//Position - 0xD835
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/];
	}
	return -1;
}

void func_192(int iParam0)//Position - 0xD854
{
	if (func_194(PLAYER::PLAYER_ID()) || func_193(PLAYER::PLAYER_ID()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (BitTest(Global_2815059.f_5032, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2815059.f_5034)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2815059.f_5034));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2815059.f_5042 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2815059.f_5042);
				Global_2815059.f_5042 = -1;
			}
			Global_2815059.f_5032 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2815059.f_5032, 0))
		{
			if (BitTest(Global_2815059.f_5032, 4))
			{
				if (!BitTest(Global_2815059.f_5032, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2815059.f_5034)))
						{
							StringCopy(&(Global_2815059.f_5034), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2815059.f_5032), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && BitTest(Global_2815059.f_5032, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!BitTest(Global_2815059.f_5032, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_2815059.f_5032), 1);
			}
			else if (!BitTest(Global_2815059.f_5032, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2815059.f_5034), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2815059.f_5032), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2815059.f_5032, 3))
				{
					Global_2815059.f_5042 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2815059.f_5042, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2815059.f_5032), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2815059.f_5032, 0))
			{
				Global_2815059.f_5032 = 0;
				Global_2815059.f_5042 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2815059.f_5032), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || BitTest(Global_2815059.f_5032, 2))
				{
					MISC::SET_BIT(&(Global_2815059.f_5032), 2);
					MISC::SET_BIT(&(Global_2815059.f_5032), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2815059.f_5032), 5);
					MISC::CLEAR_BIT(&(Global_2815059.f_5032), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2815059.f_5032, 0))
		{
			Global_2815059.f_5032 = 0;
			Global_2815059.f_5042 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2815059.f_5032), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2815059.f_5032), 2);
				MISC::SET_BIT(&(Global_2815059.f_5032), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_5032), 2);
				MISC::CLEAR_BIT(&(Global_2815059.f_5032), 5);
			}
		}
	}
}

int func_193(int iParam0)//Position - 0xDC34
{
	if (iParam0 != func_5() && func_869(iParam0, 1, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_318.f_16;
	}
	return -1;
}

int func_194(int iParam0)//Position - 0xDC65
{
	if (iParam0 != func_5())
	{
		if (func_869(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_195(Global_2689235[iParam0 /*453*/].f_318.f_6) == 19;
			}
		}
	}
	return 0;
}

int func_195(int iParam0)//Position - 0xDCAC
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

void func_196()//Position - 0xE133
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_102[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_102[iVar0]));
		}
		iVar0++;
	}
}

void func_197(int iParam0)//Position - 0xE166
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_102[bVar0]))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bVar0]))
			{
				if (!BitTest(Local_91.f_13, bVar0))
				{
					if (!BitTest(Local_94[iParam0 /*18*/].f_1, bVar0))
					{
						iLocal_102[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]));
						HUD::SET_BLIP_SPRITE(iLocal_102[bVar0], 429);
						func_198(&(iLocal_102[bVar0]), 29);
						if (func_768())
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_102[bVar0], "UW_BLIPC");
						}
						else
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_102[bVar0], "UW_BLIP");
						}
						HUD::SET_BLIP_PRIORITY(iLocal_102[bVar0], 9);
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_102[bVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_102[bVar0]));
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_102[bVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_102[bVar0]));
				}
			}
		}
		bVar0++;
	}
}

void func_198(var uParam0, int iParam1)//Position - 0xE258
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_199(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_199(int iParam0)//Position - 0xE27E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_200()//Position - 0xE4E6
{
	bool bVar0;
	
	bVar0 = func_270();
	if (bVar0)
	{
		if (Local_91.f_413 > -1)
		{
			if ((Local_91.f_413 - func_126(&(Local_91.f_326), 0, 0)) >= 0)
			{
				if (!func_204())
				{
					func_203((Local_91.f_413 - func_126(&(Local_91.f_326), 0, 0)));
					func_201((Local_91.f_413 - func_126(&(Local_91.f_326), 0, 0)), func_202(-1));
				}
			}
			else
			{
				if (!func_204())
				{
					func_201(0, func_202(-1));
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					MISC::SET_BIT(&(Local_91.f_3), 4);
				}
			}
		}
	}
}

void func_201(int iParam0, char* sParam1)//Position - 0xE573
{
	char* sVar0;
	
	if (func_182(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_175(sParam1))
	{
		sVar0 = sParam1;
	}
	func_172(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_202(int iParam0)//Position - 0xE5B3
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING";
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_203(int iParam0)//Position - 0xE7BB
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2815059.f_5032 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!BitTest(Global_2815059.f_5032, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2815059.f_5032 = 0;
			MISC::SET_BIT(&(Global_2815059.f_5032), 1);
		}
	}
}

bool func_204()//Position - 0xE810
{
	bool bVar0;
	int iVar1;
	
	if (func_268(17))
	{
		bVar0 = true;
	}
	if (!func_258(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_211(0, 1, 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					func_209(0, -1);
					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
	{
		MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
	}
	if (Global_1931426)
	{
		bVar0 = true;
	}
	if (func_208(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	if (func_207(PLAYER::PLAYER_ID(), 2))
	{
		bVar0 = true;
	}
	if (func_205(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	return bVar0;
}

int func_205(int iParam0)//Position - 0xE8EC
{
	if (func_206(iParam0))
	{
		return 1;
	}
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 8);
}

bool func_206(int iParam0)//Position - 0xE90F
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 2);
}

bool func_207(int iParam0, int iParam1)//Position - 0xE924
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

int func_208(int iParam0)//Position - 0xE93A
{
	if (!func_869(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2);
}

void func_209(bool bParam0, int iParam1)//Position - 0xE962
{
	if (bParam0)
	{
		if (!Global_1853221)
		{
			if (!func_268(func_210(iParam1)))
			{
				Global_1853221 = 1;
			}
		}
	}
	else if (Global_1853221)
	{
		Global_1853221 = 0;
	}
}

int func_210(int iParam0)//Position - 0xE999
{
	switch (iParam0)
	{
		case 132:
			return 11;
		
		case 133:
			return 12;
		
		case 136:
			return 19;
		
		case 138:
			return 14;
		
		case 139:
			return 15;
		
		case 129:
			return 17;
		
		case 141:
			return 18;
		
		case 144:
			return 13;
		
		case 146:
			return 16;
		
		case 236:
			return 20;
		
		case 150:
			return 20;
		
		default:
	}
	return Global_262145.f_24170;
}

int func_211(bool bParam0, bool bParam1, bool bParam2)//Position - 0xEA28
{
	if (func_257(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (func_207(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_207(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_255(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_254())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_253(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_252())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_251(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_236(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_235(PLAYER::PLAYER_ID()) != func_5() && func_235(PLAYER::PLAYER_ID()) == func_65(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_232(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (func_230(func_231()) && !func_229(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_228())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_226(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_224())
	{
		return 0;
	}
	if (func_207(PLAYER::PLAYER_ID(), 0) || func_207(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_207(PLAYER::PLAYER_ID(), 12) || func_207(PLAYER::PLAYER_ID(), 14)) || func_207(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_223(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_222() && !Global_2787784)
		{
			return 0;
		}
	}
	if (func_221(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_220())
	{
		return 0;
	}
	if (Global_1931426)
	{
		return 0;
	}
	if (func_208(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_219())
	{
		return 0;
	}
	if (func_217(PLAYER::PLAYER_ID()) && Global_1852994.f_172)
	{
		return 0;
	}
	if (func_216())
	{
		return 0;
	}
	if (func_215())
	{
		return 0;
	}
	if (Global_2814118)
	{
		return 0;
	}
	if (Global_1963980)
	{
		return 0;
	}
	if (func_214(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_213(PLAYER::PLAYER_ID()))
	{
		if (func_212(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_212(int iParam0)//Position - 0xEC94
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_213(int iParam0)//Position - 0xECB8
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

int func_214(int iParam0)//Position - 0xECDB
{
	if (iParam0 != func_5())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 4);
	}
	return 0;
}

bool func_215()//Position - 0xED00
{
	return Global_2788198;
}

bool func_216()//Position - 0xED0C
{
	return Global_1946250.f_519;
}

int func_217(int iParam0)//Position - 0xED1B
{
	if (func_218(Global_1853348[iParam0 /*834*/].f_267.f_32))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)//Position - 0xED3D
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_219()//Position - 0xED6C
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_220()//Position - 0xED84
{
	return Global_100493.f_376 > 0;
}

bool func_221(int iParam0)//Position - 0xED95
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11);
}

bool func_222()//Position - 0xEDAE
{
	return BitTest(Global_1958711, 5);
}

int func_223(int iParam0, bool bParam1, bool bParam2)//Position - 0xEDBC
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_224()//Position - 0xEE20
{
	if (func_225() == 0)
	{
		return 1;
	}
	return 0;
}

int func_225()//Position - 0xEE35
{
	return Global_1574632.f_18;
}

bool func_226(int iParam0)//Position - 0xEE43
{
	return func_227(iParam0);
}

var func_227(int iParam0)//Position - 0xEE51
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

bool func_228()//Position - 0xEE68
{
	return Global_1575058;
}

int func_229(int iParam0)//Position - 0xEE74
{
	if (func_191(iParam0) == 236 || func_191(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_230(int iParam0)//Position - 0xEE9C
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_231()//Position - 0xEEE6
{
	return Global_2703735.f_2400[0 /*80*/].f_1;
}

int func_232(int iParam0, int iParam1)//Position - 0xEEFA
{
	if (func_234(iParam0, 0))
	{
		return func_233(Global_1892703[iParam0 /*599*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_233(int iParam0)//Position - 0xEF24
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
			return 0;
		
		case 276:
		case 267:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_234(int iParam0, int iParam1)//Position - 0xF166
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)//Position - 0xF1A1
{
	return Global_1892703[iParam0 /*599*/].f_10.f_35;
}

int func_236(int iParam0)//Position - 0xF1B6
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_250(iParam0) && !func_206(iParam0)) && !BitTest(Global_1892703[iParam0 /*599*/].f_1, 8));
	bVar2 = func_251(iParam0);
	bVar3 = func_249();
	uVar4 = func_241();
	if ((bVar1 && (func_213(iParam0) || func_240(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_239(iParam0)) && !func_237(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2815059.f_5195.f_220 != iVar0)
	{
		Global_2815059.f_5195.f_220 = iVar0;
	}
	return iVar0;
}

bool func_237(int iParam0)//Position - 0xF271
{
	return func_238(iParam0, 19);
}

var func_238(int iParam0, int iParam1)//Position - 0xF281
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_239(int iParam0)//Position - 0xF299
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_238(iParam0, 9);
	}
	return 0;
}

int func_240(int iParam0)//Position - 0xF2B7
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_241()//Position - 0xF2DA
{
	if ((func_238(PLAYER::PLAYER_ID(), 21) || func_238(PLAYER::PLAYER_ID(), 22)) || func_246())
	{
		return 1;
	}
	if (func_243())
	{
		func_242(22);
		return 1;
	}
	return 0;
}

void func_242(int iParam0)//Position - 0xF31F
{
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

int func_243()//Position - 0xF33C
{
	if (func_234(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_249() && !func_245()) || func_207(PLAYER::PLAYER_ID(), 21)) || func_207(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_244(27);
		}
	}
	return 0;
}

void func_244(int iParam0)//Position - 0xF38F
{
	MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

bool func_245()//Position - 0xF3AC
{
	return Global_1574582.f_1;
}

int func_246()//Position - 0xF3BA
{
	return func_247(424, -1);
}

int func_247(int iParam0, int iParam1)//Position - 0xF3CA
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_248(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_248(int iParam0)//Position - 0xF3F6
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
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

bool func_249()//Position - 0xF42A
{
	return Global_1574582;
}

int func_250(int iParam0)//Position - 0xF436
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/] != -1;
	}
	return 0;
}

bool func_251(int iParam0)//Position - 0xF457
{
	return func_238(iParam0, 20);
}

bool func_252()//Position - 0xF467
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 5;
}

int func_253(int iParam0)//Position - 0xF47C
{
	if (Global_2689235[iParam0 /*453*/].f_269.f_4 != 0 || Global_2689235[iParam0 /*453*/].f_269.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_254()//Position - 0xF4B0
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 0);
}

int func_255(int iParam0)//Position - 0xF4C9
{
	if (func_256(iParam0, 1, 0))
	{
		if (Global_1853348[iParam0 /*834*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0, bool bParam1, bool bParam2)//Position - 0xF4EE
{
	if (bParam1)
	{
		if (func_226(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[iParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_257(int iParam0, int iParam1)//Position - 0xF520
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_5, iParam1);
}

int func_258(int iParam0, bool bParam1, bool bParam2)//Position - 0xF538
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8145 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_262(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4746 == 1)
		{
			return 1;
		}
	}
	if (func_261() || func_260())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_259())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836830[iVar1], iVar0);
}

int func_259()//Position - 0xF6A3
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2815059.f_1794, 23))
	{
		return 1;
	}
	if (func_261())
	{
		return 1;
	}
	if (func_260())
	{
		return 1;
	}
	uVar0 = Global_1659747[func_248(-1)];
	if (BitTest(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2815059.f_1794), 23);
		return 1;
	}
	return 0;
}

bool func_260()//Position - 0xF703
{
	return Global_1575046;
}

bool func_261()//Position - 0xF70F
{
	return Global_1575048;
}

int func_262(int iParam0, int iParam1)//Position - 0xF71B
{
	if (!func_266())
	{
		return 0;
	}
	if (func_265())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_263(&(Global_1853348[iParam0 /*834*/].f_765), func_264(iParam1));
}

var func_263(var uParam0, var uParam1)//Position - 0xF75B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_264(int iParam0)//Position - 0xF77E
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		case 182:
			return 40;
		
		default:
	}
	return 1;
}

bool func_265()//Position - 0xF93E
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143, 3);
}

int func_266()//Position - 0xF955
{
	if (!func_267())
	{
		return 0;
	}
	return 1;
}

int func_267()//Position - 0xF96A
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_261())
	{
		return 1;
	}
	if (func_260())
	{
		return 1;
	}
	return func_247(120, -1);
}

bool func_268(int iParam0)//Position - 0xF99A
{
	var uVar0;
	
	uVar0 = func_269(2483, -1, 0);
	return BitTest(uVar0, iParam0);
}

int func_269(int iParam0, int iParam1, int iParam2)//Position - 0xF9B2
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_248(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_270()//Position - 0xF9EF
{
	bool bVar0;
	
	if (!func_768())
	{
		if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
	{
		if (func_112() == 2)
		{
			return 0;
		}
	}
	if (!func_768())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_91.f_15 != false;
			}
			else
			{
				bVar0 = Local_91.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = BitTest(Local_91.f_3, 9);
	}
	if (!func_16(PLAYER::PLAYER_ID(), 0))
	{
		if (bVar0 && !func_204())
		{
			if (func_768())
			{
				if (!func_277("UW_ABTSC"))
				{
					func_271("UW_ABTSC", 0);
				}
			}
			else if (!func_277("UW_ABTS"))
			{
				func_271("UW_ABTS", 0);
			}
		}
		else if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
		{
			func_9();
		}
	}
	return bVar0;
}

void func_271(char* sParam0, bool bParam1)//Position - 0xFB0A
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_275(sParam0))
	{
		return;
	}
	func_10();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_274();
	func_273(bParam1);
	func_272();
}

void func_272()//Position - 0xFB75
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_273(bool bParam0)//Position - 0xFB88
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_274()//Position - 0xFBAE
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_275(char* sParam0)//Position - 0xFBD3
{
	if (!func_15())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_276(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}

bool func_276(char* sParam0)//Position - 0xFC17
{
	if (!func_15())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_277(char* sParam0)//Position - 0xFC49
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_15())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_275(sParam0);
}

void func_278(bool bParam0)//Position - 0xFC9A
{
	int iVar0;
	struct<4> Var1;
	bool bVar2;
	
	Var1 = { func_429() };
	bVar2 = false;
	if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_112[iVar0 /*42*/] = -1;
			Local_112[iVar0 /*42*/].f_1 = func_5();
			Local_112[iVar0 /*42*/].f_9 = 0;
			Local_112[iVar0 /*42*/].f_31 = -1;
			if (Local_91.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_112[iVar0 /*42*/].f_1 = Local_91.f_465[iVar0 /*4*/].f_2;
				Local_112[iVar0 /*42*/].f_9 = Local_91.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_428())
			{
				if (Local_113.f_103 != 129)
				{
					Local_113.f_103 = 129;
				}
				else
				{
					func_209(1, 129);
				}
			}
		}
		else if (Local_113.f_103 != 129)
		{
			Local_113.f_103 = 129;
		}
		func_283(&Local_112, &iLocal_111, 27, &Local_113, &uLocal_126, -1, 0, 0);
		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_112[0 /*42*/].f_1 != PLAYER::PLAYER_ID())
			{
				if (Local_91.f_465[0 /*4*/].f_1 > 0)
				{
					func_282();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_112[iVar0 /*42*/] = -1;
			Local_112[iVar0 /*42*/].f_1 = func_5();
			Local_112[iVar0 /*42*/].f_9 = 0;
			Local_112[iVar0 /*42*/].f_31 = -1;
			Local_112[iVar0 /*42*/].f_39 = -1;
			if (Local_91.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_112[iVar0 /*42*/].f_39 = Local_91.f_465[iVar0 /*4*/] + 1;
				Local_112[iVar0 /*42*/].f_1 = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[iVar0 /*4*/].f_2);
				Local_112[iVar0 /*42*/].f_40 = Local_91.f_465[iVar0 /*4*/].f_1;
				Local_112[iVar0 /*42*/].f_9 = Local_91.f_465[iVar0 /*4*/].f_1;
				Local_112[iVar0 /*42*/].f_2 = Local_91.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_279();
		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_91.f_594[0 /*4*/] > 0)
			{
				if (Local_91.f_594[0 /*4*/] != Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9)
				{
					if (Local_91.f_256[Local_91.f_594[0 /*4*/]] > 0)
					{
						func_282();
					}
				}
			}
		}
		func_283(&Local_112, &iLocal_111, 27, &Local_113, &uLocal_126, -1, 1, 0);
		if (bParam0)
		{
			if (!func_428())
			{
				if (Local_113.f_103 != 129)
				{
					Local_113.f_103 = 129;
				}
				else
				{
					func_209(1, 129);
				}
			}
		}
		else if (Local_113.f_103 != 129)
		{
			Local_113.f_103 = 129;
		}
	}
}

void func_279()//Position - 0xFF21
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	
	uLocal_586[0] = Local_91.f_594[0 /*4*/];
	uLocal_586[1] = Local_91.f_594[1 /*4*/];
	uLocal_586[2] = Local_91.f_594[2 /*4*/];
	uLocal_586[3] = Local_91.f_594[3 /*4*/];
	iVar3 = Local_91.f_594[0 /*4*/];
	iVar4 = Local_91.f_594[1 /*4*/];
	iVar5 = Local_91.f_594[2 /*4*/];
	iVar6 = Local_91.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_91.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_91.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_91.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_91.f_266[iVar6];
	}
	uLocal_587[0] = uVar7;
	uLocal_587[1] = uVar8;
	uLocal_587[2] = uVar9;
	uLocal_587[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		iVar2 = func_281(uLocal_586[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_112[iVar2 /*42*/].f_9 = Local_91.f_594[iVar0 /*4*/].f_1;
		}
		func_280(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_587[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_280(int iParam0, int iParam1)//Position - 0x10058
{
	struct<42> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_112[iParam1 /*42*/] };
	Local_112[iParam1 /*42*/] = { Local_112[iParam0 /*42*/] };
	Local_112[iParam0 /*42*/] = { Var0 };
}

int func_281(int iParam0, int iParam1)//Position - 0x100A6
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (iParam0 == Local_112[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		}
		iVar0++;
	}
	return iVar1;
}

void func_282()//Position - 0x100E3
{
	MISC::SET_BIT(&(Global_2815059.f_1797), 19);
}

void func_283(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x100F8
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	struct<4> Var7;
	int iVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	struct<2> Var23;
	
	if (func_427(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (func_425() || iParam2 == 28)
	{
		if (func_375(iParam1, iParam2, uParam3, Global_1836357, 0, func_430(), sParam7))
		{
			func_374(1);
			if ((!func_372() && !func_370()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (func_369())
				{
					func_364();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_363(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							func_362(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar18 = 0;
							while (iVar18 < 32)
							{
								iVar1[iVar18] = -1;
								iVar18++;
							}
							iVar18 = 0;
							while (iVar18 < 32)
							{
								if (func_869(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!func_16(bVar4, 0))
									{
										if (func_358(bVar4) || func_356(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (func_355(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												func_352(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!func_349(PLAYER::PLAYER_ID(), 0) && func_348(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (func_347())
							{
								if (func_869(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = func_5();
								}
							}
							else
							{
								bVar4 = (iParam0[iVar18 /*42*/])->f_1;
							}
							if ((func_346(bVar4) && func_343(bVar4, iParam2, bVar3)) && func_869(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { func_337(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { func_66(bVar4) };
								iVar6 = func_331(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
								}
								Global_1836357++;
								if ((iParam0[iVar18 /*42*/])->f_22 != -1f)
								{
									fVar11 = (iParam0[iVar18 /*42*/])->f_22;
								}
								if ((iParam0[iVar18 /*42*/])->f_31 != -1)
								{
									iVar12 = (iParam0[iVar18 /*42*/])->f_31;
								}
								if ((iParam0[iVar18 /*42*/])->f_41 != -1)
								{
									iVar13 = (iParam0[iVar18 /*42*/])->f_41;
								}
								iVar9 = (iParam0[iVar18 /*42*/])->f_9;
								if (((iParam0[iVar18 /*42*/])->f_9 != -1 || (iParam0[iVar18 /*42*/])->f_22 != -1f) || (iParam0[iVar18 /*42*/])->f_31 != -1)
								{
									if (!func_347())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_326(&iVar9, &fVar11, (iParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_325(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (iParam0[iVar18 /*42*/])->f_2 + 1;
									if (iVar20 != iVar14)
									{
										iVar20 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = func_320(bVar4, 0);
								if (bVar2)
								{
									if (func_319(bVar4, 1) && iVar1[bVar10] != -1)
									{
										iVar19 = iVar1[bVar10];
									}
									else
									{
										iVar19 = (iVar0 + iVar22);
										iVar22++;
									}
								}
								uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
								if ((iParam0[iVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (iParam0[iVar18 /*42*/])->f_39, 16);
								}
								if (func_318(iParam5))
								{
									func_317(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (iParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									func_317(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (iParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								MISC::SET_BIT(&iVar15, bVar4);
								iVar19++;
							}
							iVar18++;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							if (func_869(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = func_5();
							}
							if (func_346(bVar4))
							{
								if (func_869(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { func_337(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { func_66(bVar4) };
									iVar6 = func_331(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = func_320(bVar4, 1);
									if (bVar2)
									{
										if (func_319(bVar4, 1))
										{
											iVar19 = iVar1[iVar18];
										}
										else
										{
											iVar19 = (iVar0 + iVar22);
											iVar22++;
										}
									}
									uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
									func_296(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_293(uParam3, iParam1, iParam2);
						}
						func_106(&(uParam3->f_21));
						func_292();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_291(uParam3, iParam1);
							func_290(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_291(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_286(uParam3))
						{
							Global_1836580 = 1;
						}
						func_284(uParam3);
						if (Global_1836580 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836580 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_292();
			func_363(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_284(var uParam0)//Position - 0x10724
{
	if (!func_22(&(uParam0->f_21)))
	{
		func_20(&(uParam0->f_21), 0, 0);
	}
	else if (func_19(&(uParam0->f_21), 250, 0))
	{
		func_106(&(uParam0->f_21));
		func_285(0);
	}
}

void func_285(bool bParam0)//Position - 0x10760
{
	if (bParam0)
	{
		if (Global_1836580 != 2)
		{
			Global_1836580 = 2;
		}
	}
	else
	{
		switch (Global_1836580)
		{
			case 0:
				Global_1836580 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_286(var uParam0)//Position - 0x107A6
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	bVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar3 != func_5() && func_869(bVar3, 0, 1))
	{
		Var2 = { func_66(bVar3) };
		iVar1 = func_289(uParam0, uParam0->f_37);
		if (func_288(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_287(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_287(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_287(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_287(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_287(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_287(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_287(var uParam0, int iParam1, int iParam2)//Position - 0x108D3
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_288(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x108E5
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_289(var uParam0, int iParam1)//Position - 0x108F5
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_290(int* iParam0, bool bParam1, int iParam2)//Position - 0x10905
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_291(var uParam0, int* iParam1)//Position - 0x1093D
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_292()//Position - 0x10972
{
	if (Global_1836580 != 0)
	{
		Global_1836580 = 0;
	}
}

void func_293(var uParam0, int* iParam1, int iParam2)//Position - 0x10987
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_5())
		{
			if (func_869(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_295(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_294(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853348[iVar0 /*834*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_294(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x109FC
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_295(int iParam0, bool bParam1, int iParam2)//Position - 0x10A39
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_296(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x10A80
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_316() && iParam4 < func_315())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836359)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836580 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_314("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_314(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_314("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_314("");
			if (uParam3->f_108 == 6)
			{
				func_314("");
			}
			else
			{
				func_314(&sParam5);
			}
			func_301(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_300(uParam3))
			{
				func_299("DPAD_FRIEND");
			}
			else if (func_298(uParam3))
			{
				func_299("DPAD_FRIEND");
			}
			else if (func_297(uParam3))
			{
				func_299("DPAD_CREW");
			}
			else
			{
				func_299("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_297(var uParam0)//Position - 0x10BA2
{
	return BitTest(uParam0->f_33, 6);
}

bool func_298(var uParam0)//Position - 0x10BB0
{
	return BitTest(uParam0->f_33, 5);
}

void func_299(char* sParam0)//Position - 0x10BBE
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_300(var uParam0)//Position - 0x10BD0
{
	if (func_298(uParam0) && func_297(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_301(var uParam0, int iParam1)//Position - 0x10BF1
{
	if (func_313(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_306(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && iParam1 > -1) && iParam1 < 32) && BitTest(Global_2689235[iParam1 /*453*/].f_425, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_302())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_302()//Position - 0x10C6C
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_304() || func_303())
		{
			return 1;
		}
	}
	return 0;
}

var func_303()//Position - 0x10C91
{
	return Global_2714762.f_17;
}

int func_304()//Position - 0x10C9F
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_303();
	}
	return func_305(Global_4718592.f_116524);
}

int func_305(int iParam0)//Position - 0x10CC3
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5023[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_306(int iParam0)//Position - 0x10CFD
{
	if ((func_869(iParam0, 0, 1) && func_310()) && func_307(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_307(int iParam0, bool bParam1)//Position - 0x10D2A
{
	return func_308(iParam0, bParam1, 1);
}

int func_308(int iParam0, bool bParam1, int iParam2)//Position - 0x10D3B
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_309(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_5() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_309(int iParam0, int iParam1)//Position - 0x10D97
{
	if (iParam0 != func_5())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_5())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_310()//Position - 0x10DE6
{
	if (func_250(PLAYER::PLAYER_ID()) || func_312())
	{
		if (!func_311(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_311(int iParam0)//Position - 0x10E14
{
	if (func_191(iParam0) == 236 || func_191(iParam0) == 150)
	{
		return func_213(iParam0);
	}
	return 0;
}

int func_312()//Position - 0x10E41
{
	switch (func_348(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_313(int iParam0)//Position - 0x10E7F
{
	if (func_302())
	{
		if (func_869(iParam0, 0, 1))
		{
			return func_355(iParam0);
		}
	}
	if ((func_869(iParam0, 0, 1) && func_310()) && func_309(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_314(char* sParam0)//Position - 0x10EC7
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_315()//Position - 0x10ED5
{
	int iVar0;
	
	if (Global_1836359)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_316()//Position - 0x10EF1
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836359)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_317(int iParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x10F09
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_316() && iParam3 < func_315())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836359)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836580 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_314("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_299(sParam16);
				}
				else
				{
					func_314(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_314("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_347())
				{
					func_314("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_299(&(uParam2->f_104));
					}
					else
					{
						func_314("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_314("");
				}
				if (uParam2->f_108 == 6)
				{
					func_314("");
				}
				else
				{
					func_314(&sParam4);
				}
				func_301(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_314("");
					func_314("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_300(uParam2))
				{
					func_299("DPAD_FRIEND");
				}
				else if (func_298(uParam2))
				{
					func_299("DPAD_FRIEND");
				}
				else if (func_297(uParam2))
				{
					func_299("DPAD_CREW");
				}
				else
				{
					func_299("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_318(int iParam0)//Position - 0x11256
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_319(bool bParam0, bool bParam1)//Position - 0x1127A
{
	if (!bParam1)
	{
		if (func_355(bParam0))
		{
			return 0;
		}
	}
	return Global_1892703[bParam0 /*599*/].f_10 != func_5();
}

int func_320(bool bParam0, bool bParam1)//Position - 0x112A5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_250(bParam0)) && !func_251(bParam0))
	{
		iVar0 = func_324();
	}
	iVar1 = func_323(bParam0);
	if (!iVar1 == -1)
	{
		return func_321(iVar1);
	}
	return iVar0;
}

int func_321(int iParam0)//Position - 0x112EF
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_322(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_322(int iParam0)//Position - 0x113B2
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_323(int iParam0)//Position - 0x113C9
{
	if (!iParam0 == func_5())
	{
		if (func_319(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_65(iParam0)];
		}
	}
	return -1;
}

int func_324()//Position - 0x113FB
{
	return 21;
}

char* func_325(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x11405
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_326(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x1158F
{
	if (func_330(iParam3))
	{
		*fParam1 = (func_327(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_318(iParam3))
	{
		*fParam1 = (func_327(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_327(int iParam0, int iParam1)//Position - 0x115DF
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_329(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_328(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_328(float fParam0)//Position - 0x11682
{
	return (fParam0 / 1.609344f);
}

float func_329(float fParam0)//Position - 0x11692
{
	return (fParam0 / 0.3048f);
}

int func_330(int iParam0)//Position - 0x116A2
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_331(bool bParam0)//Position - 0x116FE
{
	int iVar0;
	
	iVar0 = func_334(bParam0);
	if (iVar0 == -1)
	{
		func_332(bParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_332(int iParam0, bool bParam1)//Position - 0x11734
{
	if (!func_869(iParam0, 0, 1))
	{
		return;
	}
	if (func_334(iParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (iParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (func_333(iParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = iParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_333(int iParam0)//Position - 0x117A0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_334(int iParam0)//Position - 0x117D2
{
	int iVar0;
	
	if (!func_869(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1660944 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660944)
	{
		if (Global_1660783[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1660783[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1660783[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_335(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_335(int iParam0)//Position - 0x11851
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1660944)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1660783[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1660783[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1660783[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1660783[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1660944)
	{
		Global_1660783[iVar2 /*5*/] = { Global_1660783[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_336(&(Global_1660783[iVar2 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

void func_336(var uParam0)//Position - 0x11907
{
	*uParam0 = 0;
	uParam0->f_1 = func_5();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_337(bool bParam0)//Position - 0x11934
{
	char cVar0[32];
	
	if (func_869(bParam0, 0, 1))
	{
		Global_2787505 = { func_66(bParam0) };
		if (func_342())
		{
			if (func_288(Global_2787505))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2787505))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_341(&Global_2787505))
		{
			Global_2787435 = { func_339(bParam0) };
			func_338(&Global_2787435, &cVar0);
		}
	}
	return cVar0;
}

void func_338(var* uParam0, char* sParam1)//Position - 0x119B5
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_339(int iParam0)//Position - 0x119C7
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_340(iParam0))
	{
		return Global_1575090[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_66(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_340(int iParam0)//Position - 0x11A03
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_341(var* uParam0)//Position - 0x11A19
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_342()//Position - 0x11A3F
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

int func_343(int iParam0, int iParam1, bool bParam2)//Position - 0x11A55
{
	if (iParam1 == 27)
	{
		if ((func_206(iParam0) || func_345(iParam0)) || func_205(iParam0))
		{
			return 0;
		}
	}
	if (!func_344(iParam0))
	{
		return 0;
	}
	if (!func_358(iParam0) && !func_356(iParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

bool func_344(int iParam0)//Position - 0x11AB4
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_139, 22);
}

int func_345(int iParam0)//Position - 0x11ACA
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1892703[iParam0 /*599*/].f_1, 10) || BitTest(Global_1892703[iParam0 /*599*/].f_1, 9));
	}
	return 0;
}

int func_346(bool bParam0)//Position - 0x11B02
{
	int iVar0;
	
	if (bParam0 == func_5())
	{
		return 0;
	}
	if (func_16(bParam0, 0))
	{
		return 0;
	}
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (BitTest(Global_1853348[iVar0 /*834*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_347()//Position - 0x11B44
{
	switch (func_348(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_191(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_251(PLAYER::PLAYER_ID()))
	{
		switch (func_348(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_311(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_348(int iParam0)//Position - 0x11C7E
{
	if (func_234(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_349(int iParam0, int iParam1)//Position - 0x11CA1
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 && func_350(Global_1892703[iParam0 /*599*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1)
	{
		if (func_350(Global_1892703[iParam0 /*599*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_350(int iParam0)//Position - 0x11D07
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_351(iParam0, 0);
	return 0;
}

int func_351(int iParam0, int iParam1)//Position - 0x11D61
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_352(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x11DB6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_869(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_16(iVar1, 0))
			{
				if (func_358(iVar1) || func_356(iVar1, bParam4))
				{
					if (func_353(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_353(int iParam0, int iParam1, bool bParam2)//Position - 0x11E2F
{
	if (iParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_354(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1892703[iParam0 /*599*/].f_10 != func_5())
		{
			return iParam1 == Global_1892703[iParam0 /*599*/].f_10;
		}
	}
	return 0;
}

int func_354(int iParam0, int iParam1)//Position - 0x11E79
{
	if (iParam1 != func_5())
	{
		if (iParam0 != func_5())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 != func_5())
			{
				if (Global_1892703[iParam0 /*599*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_355(int iParam0)//Position - 0x11EBE
{
	if (iParam0 != func_5())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_5())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_356(int iParam0, bool bParam1)//Position - 0x11EF3
{
	if (bParam1)
	{
		return 0;
	}
	return (Global_2689235[iParam0 /*453*/].f_244 != -1 || func_357(iParam0));
}

bool func_357(int iParam0)//Position - 0x11F1D
{
	return Global_1853348[iParam0 /*834*/].f_192 != 0;
}

int func_358(int iParam0)//Position - 0x11F32
{
	if (!func_869(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_869(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_359(iParam0))
	{
		return 0;
	}
	if ((NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_348(iParam0) == 233) || func_348(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_359(int iParam0)//Position - 0x11F9B
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_360(PLAYER::PLAYER_ID());
	bVar1 = func_360(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_360(int iParam0)//Position - 0x11FD7
{
	return func_361(&(Global_2689235[iParam0 /*453*/].f_434), 0);
}

var func_361(var uParam0, int iParam1)//Position - 0x11FF0
{
	return BitTest(*uParam0, iParam1);
}

void func_362(int* iParam0, int iParam1, int iParam2)//Position - 0x11FFE
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_363(bool bParam0)//Position - 0x1202C
{
	if (bParam0)
	{
		if (Global_1648031.f_2 == 0)
		{
			Global_1648031.f_2 = 1;
		}
	}
	else if (Global_1648031.f_2 == 1)
	{
		Global_1648031.f_2 = 0;
	}
}

void func_364()//Position - 0x1205E
{
	if (BitTest(Global_2815059.f_4657, 1))
	{
		if (func_368())
		{
			func_365();
		}
	}
}

void func_365()//Position - 0x1207D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			func_366(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_366(var uParam0, int iParam1)//Position - 0x120C8
{
	func_367(uParam0, iParam1);
}

void func_367(var uParam0, var uParam1)//Position - 0x120D8
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_368()//Position - 0x120E9
{
	return Global_2703735.f_2400[0 /*80*/].f_1 != 0;
}

int func_369()//Position - 0x120FF
{
	if (BitTest(Global_2815059.f_4657, 0) && func_368())
	{
		return 1;
	}
	if (BitTest(Global_2815059.f_4657, 1) && func_368())
	{
		return 1;
	}
	return 0;
}

int func_370()//Position - 0x1213A
{
	if (func_368())
	{
		if (func_371(Global_2703735.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_371(int iParam0)//Position - 0x12161
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_372()//Position - 0x121E7
{
	if (func_368())
	{
		if (func_373(Global_2703735.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_373(int iParam0)//Position - 0x1220E
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_374(int iParam0)//Position - 0x122A0
{
	if (Global_1648031.f_1 != Global_1648031)
	{
		Global_1648031.f_1 = Global_1648031;
	}
	if (Global_1648031 != iParam0)
	{
		Global_1648031 = iParam0;
	}
}

int func_375(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x122CE
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_424(iParam1);
	fVar4 = func_423();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_422())
		{
			if (func_421() > 0 && Global_1836359)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_408())
		{
			func_407(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2815059.f_4660, 26))
	{
		func_407(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_22(&(uParam2->f_19)))
	{
		if (func_421() == 1)
		{
			func_406(bVar3, iParam0, 0);
			func_20(&(uParam2->f_19), 0, 0);
			func_407(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2815059.f_4662), 5);
		}
	}
	if (func_22(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_19(&(uParam2->f_19), 10000, 0) || (func_421() == 0 && !bParam5))
		{
			func_407(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_405();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_405();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (func_406(bVar3, iParam0, 0))
				{
					func_362(iParam0, 0, 0);
					sVar1 = func_403(iParam1, &(Global_4718592.f_116531), bParam4);
					Var0 = { func_401(iParam1) };
					if (bParam4)
					{
						func_398(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_393(iParam0, func_395(uParam2), func_394(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_386(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						func_384(iParam0, sVar6, func_385(), -1);
					}
					else if (func_302())
					{
						uParam2->f_34 = Global_1836358;
						func_398(iParam0, sVar1, &Var0, 1, -1, Global_1836358, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_377(iParam1);
						uParam2->f_34 = Global_1836358;
						func_398(iParam0, sVar1, "", 0, iVar5, func_376(), 1);
					}
					else
					{
						iVar5 = func_377(iParam1);
						func_398(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836357 = uParam3;
				Global_1836356 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836358)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_376()//Position - 0x1259E
{
	return Global_1836358;
}

int func_377(int iParam0)//Position - 0x125AA
{
	int iVar0;
	
	iVar0 = -1;
	if (func_383())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
		case 42:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_382(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_381(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_380(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_378())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_378()//Position - 0x1270F
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_61();
	}
	return func_379(Global_4718592.f_116524);
}

int func_379(int iParam0)//Position - 0x12733
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5041[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_380(int iParam0)//Position - 0x1276D
{
	return Global_2689235[iParam0 /*453*/].f_119 == 4;
}

bool func_381(int iParam0)//Position - 0x12782
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

bool func_382(int iParam0)//Position - 0x12797
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_383()//Position - 0x127AC
{
	return Global_4718592.f_1 == 0;
}

void func_384(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x127BC
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_299(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_299("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_385()//Position - 0x1281A
{
	switch (func_348(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_386(var uParam0)//Position - 0x12871
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_348(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_389())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_388(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_388(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_387(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_387(int iParam0)//Position - 0x12C9C
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_388(bool bParam0)//Position - 0x12CCE
{
	return func_307(PLAYER::PLAYER_ID(), bParam0);
}

bool func_389()//Position - 0x12CE0
{
	return (func_392() && func_390(func_391()));
}

int func_390(int iParam0)//Position - 0x12CF9
{
	return func_309(iParam0, 1);
}

int func_391()//Position - 0x12D08
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_35;
}

bool func_392()//Position - 0x12D1F
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148;
}

void func_393(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x12D35
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_299(sParam1);
		}
		else if (func_191(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_299("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_394(var uParam0)//Position - 0x12DBB
{
	int iVar0;
	
	iVar0 = func_191(PLAYER::PLAYER_ID());
	if (func_428())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_190())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

char* func_395(var uParam0)//Position - 0x12F61
{
	int iVar0;
	
	iVar0 = func_191(PLAYER::PLAYER_ID());
	if (func_428())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_397() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_397() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_190())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_396() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_396()//Position - 0x13155
{
	return Global_2815059.f_5119;
}

int func_397()//Position - 0x13164
{
	if (func_191(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2815059.f_5114;
	}
	return -1;
}

void func_398(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13187
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_314(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_299(sParam1);
		}
		if (func_422() && iParam6)
		{
			if (func_400())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_299(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_399(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_61())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_399(int iParam0)//Position - 0x13248
{
	if (func_382(iParam0) || func_381(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_400()//Position - 0x1326A
{
	return Global_1836359;
}

struct<4> func_401(int iParam0)//Position - 0x13276
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_402(PLAYER::PLAYER_ID()) || func_380(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_591, 16);
			break;
	}
	if (func_302() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_591, 16);
	}
	return Var0;
}

bool func_402(int iParam0)//Position - 0x13312
{
	return Global_2689235[iParam0 /*453*/].f_119 == 5;
}

char* func_403(int iParam0, char* sParam1, bool bParam2)//Position - 0x13327
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_302() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_404();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1836599 == 0)
		{
			Global_1836599 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1836599 == 1)
		{
			Global_1836599 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836599 == 0)
		{
			Global_1836599 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
			case 42:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_404()//Position - 0x13491
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_405()//Position - 0x134D5
{
	Global_43992 = 1;
}

bool func_406(bool bParam0, int* iParam1, bool bParam2)//Position - 0x134E1
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_407(int* iParam0, var uParam1, bool bParam2)//Position - 0x13521
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836357 = 0;
	func_292();
	Global_1836356 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_22(&(uParam1->f_19)))
		{
			func_106(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2815059.f_4662), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (BitTest(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_408()//Position - 0x13590
{
	if (func_420())
	{
		return 0;
	}
	if (func_252())
	{
		return 0;
	}
	if (!func_418())
	{
		return 0;
	}
	if (!func_224())
	{
		return 0;
	}
	if (func_417(8, -1))
	{
		return 0;
	}
	if (func_421() == 2)
	{
		return 0;
	}
	if (Global_2815059.f_4612)
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	else if (!func_256(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_416(1) || func_414(1)) || Global_23011.f_124) || Global_23011)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_413() && Global_1965530 == 2)
	{
		return 0;
	}
	if (func_411(PLAYER::PLAYER_ID()) && !func_413())
	{
		return 0;
	}
	if (Global_1931426)
	{
		return 0;
	}
	if (Global_1931431)
	{
		return 0;
	}
	if (func_410(0))
	{
		return 0;
	}
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 4))
	{
		return 0;
	}
	if (Global_1640732)
	{
		return 0;
	}
	if ((Global_1959720.f_718.f_5 || Global_1962546.f_718.f_5) || Global_1958748.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1966534.f_724.f_5 || Global_1966534.f_744.f_724.f_5) || Global_1966534.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1973321.f_726.f_5)
	{
		return 0;
	}
	if (func_409(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1640768 || Global_1640769) || Global_1640770)
	{
		return 0;
	}
	return 1;
}

int func_409(int iParam0)//Position - 0x13768
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 6);
}

bool func_410(int iParam0)//Position - 0x1378D
{
	return BitTest(Global_2815059.f_5195.f_47, iParam0);
}

int func_411(int iParam0)//Position - 0x137A1
{
	if (func_16(iParam0, 0))
	{
		return 1;
	}
	if (func_412())
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

bool func_412()//Position - 0x137E0
{
	return BitTest(Global_2621446, 3);
}

bool func_413()//Position - 0x137EE
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 0));
}

int func_414(bool bParam0)//Position - 0x1380A
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_415(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23011.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_415(int iParam0)//Position - 0x138F5
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_416(bool bParam0)//Position - 0x13952
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

bool func_417(int iParam0, int iParam1)//Position - 0x1397B
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

int func_418()//Position - 0x139B3
{
	if (func_419())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_419()//Position - 0x139F2
{
	return Global_1574604;
}

bool func_420()//Position - 0x139FE
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

int func_421()//Position - 0x13A13
{
	return Global_1648034.f_68;
}

int func_422()//Position - 0x13A21
{
	if (Global_1836358 > 16)
	{
		return 1;
	}
	return 0;
}

float func_423()//Position - 0x13A37
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_424(int iParam0)//Position - 0x13A5B
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_425()//Position - 0x13A8D
{
	if (func_430())
	{
		return 1;
	}
	if (func_205(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_428())
	{
		return 1;
	}
	if (func_250(PLAYER::PLAYER_ID()))
	{
		switch (func_191(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_426(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_426(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_426(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_426(int iParam0)//Position - 0x13B68
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 4);
}

int func_427(int iParam0)//Position - 0x13B7D
{
	if (iParam0 == 28)
	{
		if ((func_250(PLAYER::PLAYER_ID()) && !func_251(PLAYER::PLAYER_ID())) && !func_311(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_234(PLAYER::PLAYER_ID(), 0) && func_251(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_236(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_428()//Position - 0x13BEC
{
	return Global_1853221;
}

struct<4> func_429()//Position - 0x13BF8
{
	struct<4> Var0;
	
	switch (Local_91.f_27)
	{
		case joaat("rhino"):
			StringCopy(&Var0, "UW_TMRHN", 16);
			break;
		
		case joaat("hydra"):
			StringCopy(&Var0, "UW_TMHYD", 16);
			break;
		
		case joaat("savage"):
			StringCopy(&Var0, "UW_TMSAV", 16);
			break;
		
		case joaat("valkyrie"):
			StringCopy(&Var0, "UW_TMVALK", 16);
			break;
		
		case joaat("buzzard"):
			StringCopy(&Var0, "UW_TMBUZ", 16);
			break;
	}
	return Var0;
}

int func_430()//Position - 0x13C62
{
	if (func_431(PLAYER::PLAYER_ID()))
	{
		return Global_1581339;
	}
	return 0;
}

int func_431(int iParam0)//Position - 0x13C7D
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_16(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_432()//Position - 0x13CA0
{
	struct<2> Var0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17)
	{
		case 0:
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_91.f_241 == 0)
				{
					func_773();
				}
			}
			if (!BitTest(uLocal_95, 22))
			{
				if (Local_91.f_27 == joaat("rhino") && Local_91.f_29 == 2)
				{
					func_742(Local_91.f_30[0 /*3*/], 1120403456);
					MISC::SET_BIT(&uLocal_95, 22);
				}
				else if (!func_69(Local_91.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_742(Local_91.f_30[0 /*3*/], 1120403456);
					MISC::SET_BIT(&uLocal_95, 22);
				}
			}
			func_741();
			func_735();
			if (Local_91.f_241 == 0)
			{
				func_732(1);
			}
			func_731(0);
			if (Local_91.f_241 == 0)
			{
				if (!Local_91.f_27 == joaat("hydra") && !Local_91.f_27 == joaat("rhino"))
				{
					func_200();
				}
				else if (func_768())
				{
					func_200();
				}
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!BitTest(uLocal_96, 1))
					{
						func_730(129);
						func_703(1);
						MISC::SET_BIT(&uLocal_96, 1);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					}
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 6))
					{
						if (Local_91.f_28 > 1 || (Local_91.f_28 == 1 && func_112() > 1))
						{
							if (BitTest(Local_91.f_3, 4))
							{
								Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
								MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (BitTest(uLocal_96, 1))
				{
					MISC::CLEAR_BIT(&uLocal_96, 1);
					func_702(1);
					func_701();
					func_703(0);
				}
			}
			if (Local_91.f_241 == 1)
			{
				func_700(&bVar1, &uVar2);
				iLocal_552 = bVar1;
				func_699(0);
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!func_698())
					{
						MISC::SET_BIT(&uLocal_96, 19);
					}
					if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
					{
						func_9();
					}
					NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					if ((func_697("UW_MINV") || func_697("UW_TIMELA")) || func_697("UW_TIMEL"))
					{
						HUD::CLEAR_HELP(true);
					}
					func_196();
					func_686(129, 0f, 0f, 1, 1, 1, 0);
					func_675(1);
					func_674();
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					iLocal_100 = PLAYER::GET_MAX_WANTED_LEVEL();
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					func_673(1);
					func_672(1);
					if (Local_91.f_27 != joaat("rhino"))
					{
						func_652(1);
					}
					iLocal_106 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_104);
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
					AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, false);
					func_651(0);
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = iLocal_552;
					if (!func_768())
					{
						func_650(63, "UW_TITLE", "UW_DESC", func_324(), -1, func_324(), 1, 0);
					}
					else if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
					{
						func_650(63, "UW_TITLEC", "UW_DESCC", func_324(), -1, func_324(), 1, 0);
					}
					else
					{
						bVar1++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, bVar1, 16);
						func_649(63, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_324(), func_324(), 0);
					}
					Local_92.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
					func_651(0);
					func_647(3, 0, 1);
					func_20(&uLocal_566, 0, 0);
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 1;
				}
				else
				{
					func_196();
					if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
					{
						func_9();
					}
					if (func_644("UW_HELP1", func_646(), func_645(1)) || func_644("UW_HELP1C", func_646(), func_645(1)))
					{
						HUD::CLEAR_HELP(true);
					}
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					func_651(0);
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
					{
					}
					else if (!func_643())
					{
					}
				}
			}
			else if (Local_91.f_241 == 3)
			{
				func_651(0);
				if (func_644("UW_HELP1", func_646(), func_645(1)) || func_644("UW_HELP1C", func_646(), func_645(1)))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!func_642())
				{
				}
				if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
				{
					func_9();
				}
				func_196();
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_91.f_241 > 3)
			{
				if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
				{
					func_9();
				}
				func_651(0);
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					func_641();
					func_640();
					if (func_122())
					{
						func_674();
					}
				}
				if (func_768())
				{
					if (func_634(2, 0, 1, 0, 0))
					{
						if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
						{
							func_9();
						}
						func_651(0);
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
				else if (Local_91.f_27 == joaat("valkyrie"))
				{
					if (func_634(2, 0, 1, 0, 0))
					{
						if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
						{
							func_9();
						}
						func_651(0);
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_166(1);
			func_735();
			func_558();
			func_170();
			func_556();
			func_544();
			func_278(0);
			func_540();
			func_537();
			func_641();
			func_640();
			if (!BitTest(uLocal_95, 26))
			{
				if (!func_536(55))
				{
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
						{
							if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
							{
								if (!func_768())
								{
									if (!func_277("UW_ATTK"))
									{
										func_271("UW_ATTK", 0);
									}
								}
								else if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
								{
									if (!func_277("UW_ATTK"))
									{
										func_271("UW_ATTK", 0);
									}
								}
								else if (!func_277("UW_ATTK"))
								{
									func_700(&bVar1, &uVar2);
									bVar1++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, bVar1, 16);
									func_271("UW_ATTK", 0);
								}
							}
							else if (func_277("UW_ATTK"))
							{
								func_9();
							}
						}
					}
				}
			}
			func_535();
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
				{
					func_674();
				}
			}
			if (!func_869(PLAYER::PLAYER_ID(), 1, 1))
			{
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_9();
				MISC::SET_BIT(&uLocal_95, 21);
			}
			else if (func_183())
			{
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_9();
			}
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
			{
				if (!func_534())
				{
					MISC::SET_BIT(&uLocal_95, 23);
					func_9();
					if (iLocal_552 > -1)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iLocal_552]))
						{
							func_25(&(Local_91.f_7[iLocal_552]));
						}
					}
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				}
			}
			if (Local_91.f_241 == 3)
			{
				func_702(1);
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_91.f_241 > 3)
			{
				func_702(1);
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else if (func_768())
			{
				if (func_634(2, 0, 1, 0, 0))
				{
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_91.f_241 == 3)
			{
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_91.f_241 > 3)
			{
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			func_467();
			if (func_642())
			{
				if (func_191(PLAYER::PLAYER_ID()) == 129)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !HUD::IS_RADAR_HIDDEN())
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
						if (BitTest(uLocal_95, 22))
						{
							func_466();
							MISC::CLEAR_BIT(&uLocal_95, 22);
						}
						func_701();
						func_463();
						func_461(0);
						func_459(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
						func_703(0);
						func_702(1);
					}
					func_458();
				}
			}
			else if (!BitTest(uLocal_96, 8))
			{
				MISC::SET_BIT(&uLocal_96, 8);
			}
			if (!func_204())
			{
				func_457();
				func_556();
				func_166(0);
				func_544();
				func_278(1);
				func_540();
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_456();
			}
			func_449();
			func_448();
			func_558();
			if (!BitTest(uLocal_96, 7))
			{
				iVar3 = 0;
				while (iVar3 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar3]))
					{
						if (!func_31(Local_91.f_48[iVar3]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_91.f_48[iVar3]), PLAYER::PLAYER_ID(), false);
						}
					}
					iVar3++;
				}
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_80[iVar3]))
					{
						if (!func_31(Local_91.f_80[iVar3]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_91.f_80[iVar3]), PLAYER::PLAYER_ID(), false);
						}
					}
					iVar3++;
				}
				MISC::SET_BIT(&uLocal_96, 7);
			}
			else if (Local_91.f_247 != iLocal_550)
			{
				iLocal_550 = Local_91.f_247;
				MISC::CLEAR_BIT(&uLocal_96, 7);
			}
			if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
			}
			if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
			{
				MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_104)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_106);
			}
			break;
		
		case 3:
			if (!BitTest(uLocal_95, 31))
			{
				if (BitTest(Local_91.f_3, 12))
				{
					func_196();
					MISC::SET_BIT(&uLocal_95, 31);
				}
			}
			func_535();
			func_443();
			if (!func_204())
			{
				if (!BitTest(Local_91.f_3, 14) && !BitTest(Local_91.f_3, 12))
				{
					func_278(1);
				}
				func_544();
				func_556();
				func_540();
				func_434();
			}
			func_467();
			func_448();
			func_558();
			if (Local_91.f_241 > 3)
			{
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_811();
			break;
	}
	func_433();
}

void func_433()//Position - 0x14700
{
	bool bVar0;
	
	if (iLocal_577 != Local_91.f_616)
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (BitTest(Local_91.f_616, bVar0))
			{
				if (!BitTest(iLocal_577, bVar0))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[bVar0]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), 2);
							func_25(&(Local_91.f_7[bVar0]));
							MISC::SET_BIT(&iLocal_577, bVar0);
						}
					}
					else
					{
						MISC::SET_BIT(&iLocal_577, bVar0);
					}
				}
			}
			bVar0++;
		}
	}
}

void func_434()//Position - 0x1478A
{
	if (BitTest(Local_91.f_3, 14))
	{
		if (!BitTest(uLocal_96, 5))
		{
			if (func_437(0, 1, 1, 1))
			{
				if (func_768())
				{
					func_436("UW_TFEWC", 30000);
				}
				else
				{
					func_436("UW_TFEW", 30000);
				}
				func_435(1);
				MISC::SET_BIT(&uLocal_96, 5);
			}
		}
	}
}

void func_435(int iParam0)//Position - 0x147E0
{
	HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_368())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_436(char* sParam0, int iParam1)//Position - 0x1480F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_437(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x14826
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_442())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_420())
	{
		return 0;
	}
	if (func_254())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_256(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_441(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_440())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1836356)
	{
		return 0;
	}
	if (func_439())
	{
		return 0;
	}
	if (func_438())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (Global_2825428)
	{
		return 0;
	}
	if (func_215())
	{
		return 0;
	}
	return 1;
}

bool func_438()//Position - 0x1491F
{
	return Global_2714762.f_691;
}

bool func_439()//Position - 0x1492E
{
	return Global_2714762.f_845;
}

bool func_440()//Position - 0x1493D
{
	return Global_2703735.f_2724.f_582;
}

int func_441(int iParam0)//Position - 0x1494F
{
	if (Global_2689235[iParam0 /*453*/].f_216 == 0)
	{
		return 0;
	}
	return 1;
}

int func_442()//Position - 0x1496B
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_443()//Position - 0x1498D
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_277("UW_EXPL") && !func_277("UW_EXPLC"))
	{
		func_9();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!BitTest(uLocal_95, (27 + iVar2)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_7[iVar2]), false))
				{
					MISC::SET_BIT(&uLocal_95, (27 + iVar2));
					iLocal_553[iVar2] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_553[iVar2], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_91.f_7[iVar2]), "GTAO_FM_Events_Soundset", false, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_553[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_768())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[0]))
		{
			if (!BitTest(Local_91.f_319, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_7[0]), false))
				{
					if ((func_447() - func_126(&(Local_91.f_324), 0, 0)) >= 0)
					{
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_91.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[0]), 50f, 50f, 50f, false, true, 0))
							{
								if (!func_204())
								{
									func_446();
									func_172((func_447() - func_126(&(Local_91.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_91.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[0]), 50f, 50f, 50f, false, true, 0))
							{
								if (!func_204())
								{
									func_446();
									func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							func_702(1);
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[0]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_91.f_7[0]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_91.f_7[0]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[0]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_91.f_7[0]), true, false, -1);
								func_25(&(Local_91.f_7[0]));
							}
							else
							{
								NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_91.f_7[0]), true, false, 0);
								func_25(&(Local_91.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_196();
		if (!func_204())
		{
			if (!BitTest(uLocal_95, 12))
			{
				if (func_109(Local_91.f_7[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[0])))
						{
							if (!func_768())
							{
								if (!func_277("UW_EXPL"))
								{
									func_271("UW_EXPL", 0);
								}
							}
							else if (!func_277("UW_EXPLC"))
							{
								func_271("UW_EXPLC", 0);
							}
							MISC::SET_BIT(&uLocal_95, 12);
						}
					}
				}
			}
			else if (func_277("UW_EXPL") || func_277("UW_EXPLC"))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_9();
					}
				}
			}
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[bVar0]))
			{
				if (!BitTest(Local_91.f_319, bVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false))
					{
						if ((func_447() - func_126(&(Local_91.f_324), 0, 0)) >= 0)
						{
							if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_91.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), 50f, 50f, 50f, false, true, 0))
								{
									if (!func_204())
									{
										if (!bVar1)
										{
											func_446();
											func_172((func_447() - func_126(&(Local_91.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_91.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), 50f, 50f, 50f, false, true, 0))
								{
									if (!func_204())
									{
										if (!bVar1)
										{
											func_446();
											func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
							{
								func_702(1);
							}
							if (func_444(Local_91.f_7[bVar0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[bVar0]))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
									VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
									if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]))))
									{
										NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true, false, -1);
										func_25(&(Local_91.f_7[bVar0]));
									}
									else
									{
										NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true, false, 0);
										func_25(&(Local_91.f_7[bVar0]));
									}
								}
							}
						}
					}
				}
				if (!BitTest(uLocal_95, 12))
				{
					if (func_109(Local_91.f_7[bVar0]))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bVar0])))
							{
								if (!func_204())
								{
									if (!func_768())
									{
										if (!func_277("UW_EXPL"))
										{
											func_271("UW_EXPL", 0);
										}
									}
									else if (!func_277("UW_EXPLC"))
									{
										func_271("UW_EXPLC", 0);
									}
									MISC::SET_BIT(&uLocal_95, 12);
								}
							}
						}
					}
				}
				else if (func_277("UW_EXPL") || func_277("UW_EXPLC"))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							func_9();
						}
					}
				}
			}
			bVar0++;
		}
	}
}

int func_444(int iParam0)//Position - 0x14F82
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (func_445(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_445(int iParam0)//Position - 0x14FA5
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_79(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_446()//Position - 0x14FD5
{
	Global_1649593.f_1173 = 1;
}

int func_447()//Position - 0x14FE5
{
	if (func_768())
	{
		return Global_262145.f_11847;
	}
	return Global_262145.f_11567;
}

void func_448()//Position - 0x15008
{
	if (!BitTest(uLocal_96, 4))
	{
		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_702(1);
					MISC::SET_BIT(&uLocal_96, 4);
				}
			}
		}
	}
}

void func_449()//Position - 0x1504E
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_99);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
		{
			if (iLocal_99 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (!BitTest(uLocal_578, iLocal_99))
				{
					if (!func_204())
					{
						if (Local_94[iLocal_99 /*18*/].f_17 == 1)
						{
							MISC::SET_BIT(&uLocal_578, iLocal_99);
							func_450(bVar1, 55, 1, 0);
						}
					}
				}
				else if (func_204())
				{
					func_450(bVar1, 55, 0, 0);
					MISC::CLEAR_BIT(&uLocal_578, iLocal_99);
				}
				else if (Local_94[iLocal_99 /*18*/].f_17 > 1)
				{
					MISC::CLEAR_BIT(&uLocal_578, iLocal_99);
					func_450(bVar1, 55, 0, 0);
				}
			}
		}
	}
	iLocal_99++;
	if (iLocal_99 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_99 = 0;
	}
}

void func_450(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x15111
{
	var uVar0;
	
	if (func_452(bParam0))
	{
		return;
	}
	if (func_451(&(Global_2678393.f_624[bParam0]), &(Global_2678393.f_987[bParam0]), &(Global_2678393.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678393.f_459[bParam0] = iParam1;
		}
	}
}

int func_451(var uParam0, var uParam1, int* iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6)//Position - 0x15163
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, bParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, bParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_452(int iParam0)//Position - 0x15222
{
	if (iParam0 == func_5())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_453())
	{
		return 1;
	}
	return 0;
}

int func_453()//Position - 0x1524B
{
	switch (func_455())
	{
		case 0:
			return func_454();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_454()//Position - 0x1527E
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_455()//Position - 0x152A2
{
	return Global_31959;
}

void func_456()//Position - 0x152AD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (HUD::DOES_BLIP_EXIST(Local_103[iVar0 /*8*/]))
		{
			HUD::REMOVE_BLIP(&(Local_103[iVar0 /*8*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_103[iVar0 /*8*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_103[iVar0 /*8*/].f_1));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar0]))
		{
			if (!func_31(Local_91.f_48[iVar0]))
			{
				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_91.f_48[iVar0])))
				{
					func_92(&(Local_103[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_457()//Position - 0x1533B
{
	if (!BitTest(uLocal_95, 11))
	{
		if (!BitTest(Local_91.f_3, 6))
		{
			if (!BitTest(uLocal_95, 13))
			{
				if (func_191(PLAYER::PLAYER_ID()) != 129)
				{
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						if (!func_536(65) && !func_536(66))
						{
							if (BitTest(uLocal_96, 11))
							{
								if (!BitTest(uLocal_96, 12))
								{
									if (func_437(0, 1, 1, 1))
									{
										if (func_768())
										{
											func_436("UW_HELIMC", -1);
										}
										else
										{
											func_436("UW_HELIM", -1);
										}
										func_435(1);
										MISC::SET_BIT(&uLocal_96, 12);
									}
								}
							}
							else if (!(Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra")))
							{
								if (func_437(0, 1, 1, 1))
								{
									if (!func_768())
									{
										func_436("UW_TAVAIL", 30000);
									}
									else
									{
										func_436("UW_TAVAILC", 30000);
									}
									func_435(1);
									MISC::SET_BIT(&uLocal_95, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_458()//Position - 0x15439
{
	float fVar0;
	
	if (iLocal_575 != 0)
	{
		return;
	}
	if (func_22(&uLocal_566))
	{
		iLocal_575 = func_126(&uLocal_566, 0, 0);
	}
	fVar0 = SYSTEM::TO_FLOAT(iLocal_575);
	fVar0 = (fVar0 / 60000f);
	iLocal_575 = SYSTEM::FLOOR(fVar0);
	if (iLocal_575 >= 1)
	{
	}
	else
	{
		iLocal_575 = 1;
	}
	if (iLocal_575 > Global_262145.f_11907)
	{
		iLocal_575 = Global_262145.f_11907;
	}
}

void func_459(bool bParam0)//Position - 0x154A2
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100493.f_8 = 1;
	}
	else
	{
		Global_100493.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_460(iVar0);
		iVar0++;
	}
}

void func_460(int iParam0)//Position - 0x154D9
{
	Global_100493.f_196[iParam0] = 1;
	Global_100493.f_195 = 1;
}

void func_461(int iParam0)//Position - 0x154F3
{
	if (func_462() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2653189)
	{
		return;
	}
	Global_2653189 = iParam0;
	Global_2653191 = 0;
	Global_2653192 = 0;
}

int func_462()//Position - 0x15528
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

void func_463()//Position - 0x1556E
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_465();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1836844.f_1), 8);
	func_464();
}

void func_464()//Position - 0x15594
{
	if (Global_1941287)
	{
		if (BitTest(Global_1941288, 0))
		{
			MISC::CLEAR_BIT(&Global_2824440, 0);
		}
		if (BitTest(Global_1941288, 1))
		{
			MISC::CLEAR_BIT(&Global_2824440, 1);
		}
		if (BitTest(Global_1941288, 5))
		{
			MISC::CLEAR_BIT(&Global_2824440, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, false, false);
		}
		Global_1941288 = 0;
	}
	Global_1941287 = 0;
}

void func_465()//Position - 0x1568B
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2815059.f_5191))
	{
		if (!Global_2815059.f_5191 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2815059.f_5190 < 1f)
		{
			return;
		}
	}
	Global_2815059.f_5191 = -1;
	Global_2815059.f_5190 = 1f;
}

void func_466()//Position - 0x156D2
{
	Global_2653193 = { 0f, 0f, 0f };
	Global_2653196 = 0;
	Global_2653197 = 100f;
}

void func_467()//Position - 0x156F1
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (BitTest(uLocal_95, 13))
	{
		return;
	}
	bVar0 = BitTest(Local_91.f_3, 6);
	bVar1 = BitTest(uLocal_95, 21);
	bVar2 = BitTest(uLocal_95, 23);
	bVar3 = Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_642())
	{
		if (!BitTest(uLocal_96, 17))
		{
			if (func_869(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || bVar2)
				{
					if (!func_204())
					{
						if (!func_768())
						{
							if (bVar0)
							{
								func_650(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
							}
							else if (bVar1)
							{
								if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
								{
									func_650(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[0]) && func_109(Local_91.f_7[0]))
								{
									MISC::SET_BIT(&uLocal_96, 11);
									MISC::SET_BIT(&uLocal_96, 16);
									func_650(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_650(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (bVar2)
							{
								func_650(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
							}
							else if (bVar3 || BitTest(Local_91.f_3, 16))
							{
								func_650(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar0)
						{
							func_650(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
						}
						else if (bVar1)
						{
							if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
							{
								if (func_533())
								{
									MISC::SET_BIT(&uLocal_96, 11);
									MISC::SET_BIT(&uLocal_96, 16);
									func_650(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_650(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (func_533())
							{
								MISC::SET_BIT(&uLocal_96, 11);
								MISC::SET_BIT(&uLocal_96, 16);
								func_650(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_650(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar2)
						{
							if (func_533())
							{
								MISC::SET_BIT(&uLocal_96, 11);
								MISC::SET_BIT(&uLocal_96, 16);
								func_650(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_650(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar3 || BitTest(Local_91.f_3, 16))
						{
							func_650(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
						}
					}
					iVar4 = func_532(1);
					Local_92.f_6 = (Local_92.f_6 + iVar4);
					if (!Global_262145.f_11974)
					{
						if (Local_92.f_6 > 0)
						{
							func_531(19, Local_92.f_6);
						}
					}
					Global_2727753 = iVar4;
					if (iVar4 > 0)
					{
						if (func_530())
						{
							func_518(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar7 = func_517(1);
					Local_92.f_7 = (Local_92.f_7 + iVar7);
					func_516();
					func_468(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar7, 1, -1, 0, 0, 0);
					Local_92.f_5 = 2;
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
					if (!BitTest(uLocal_96, 16))
					{
						MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					MISC::SET_BIT(&uLocal_96, 17);
					MISC::SET_BIT(&uLocal_96, 18);
				}
			}
		}
	}
}

int func_468(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x15AA8
{
	return func_469(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_469(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x15ACA
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_479(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_475(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_470(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_470(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x15B5D
{
	struct<3> Var0;
	
	Var0 = { func_473(iParam0, 1) };
	if (iParam0 == func_472(PLAYER::PLAYER_PED_ID()))
	{
		func_471(1);
	}
	func_475(Var0, iParam1, 0, sParam2, iParam3);
}

void func_471(int iParam0)//Position - 0x15B91
{
	Global_2703735.f_1568 = iParam0;
}

int func_472(int iParam0)//Position - 0x15BA2
{
	return iParam0;
}

Vector3 func_473(int iParam0, bool bParam1)//Position - 0x15BAC
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_474(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_474(int iParam0)//Position - 0x15C70
{
	return iParam0;
}

void func_475(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x15C7A
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703735.f_967[iVar0 /*30*/].f_6 == 0 || Global_2703735.f_967[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703735.f_967[iVar1 /*30*/] = { Param0 };
			Global_2703735.f_967[iVar1 /*30*/].f_6 = 1;
			Global_2703735.f_967[iVar1 /*30*/].f_4 = func_478(Global_2703735.f_967[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703735.f_967[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2703735.f_967[iVar1 /*30*/].f_3 = iParam1;
			Global_2703735.f_967[iVar1 /*30*/].f_8 = iParam2;
			Global_2703735.f_967[iVar1 /*30*/].f_9 = func_477();
			Global_2703735.f_967[iVar1 /*30*/].f_10 = func_476();
			StringCopy(&(Global_2703735.f_967[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2703735.f_967[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_476()//Position - 0x15D91
{
	if (Global_2703735.f_1568)
	{
		Global_2703735.f_1568 = 0;
		return 1;
	}
	Global_2703735.f_1568 = 0;
	return 0;
}

var func_477()//Position - 0x15DBB
{
	var uVar0;
	
	uVar0 = Global_2703735.f_1570;
	Global_2703735.f_1570 = 1;
	return uVar0;
}

float func_478(struct<3> Param0, var uParam1, var uParam2)//Position - 0x15DD6
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_479(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x15E6F
{
	var uVar0;
	
	uVar0 = func_480(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_480(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x15E92
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_511();
	if (func_175(sParam2))
	{
	}
	if (func_510())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_508(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_507(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_505(0, &iVar1);
					break;
				
				case 3:
					func_505(1, &iVar1);
					break;
				
				case 1:
					func_502(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_500(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_490((func_499(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_2 != -1)
				{
					func_500(1166, iVar1, -1);
				}
				func_485(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_481((func_483(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_481((func_483(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_481(int iParam0)//Position - 0x15FFD
{
	if (func_510())
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_5 = iParam0;
		func_482(joaat("mpply_globalxp"), iParam0);
	}
}

void func_482(int iParam0, int iParam1)//Position - 0x16028
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_483(int iParam0)//Position - 0x16044
{
	if (iParam0 > -1)
	{
		if (func_869(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_484(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return func_484(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_484(int iParam0)//Position - 0x16095
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_485(int iParam0)//Position - 0x160B3
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_66(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_488(func_489(&Var0));
			if (iVar1 == 0)
			{
				func_487(&Global_1659614, iParam0);
				func_486(joaat("mpply_crew_local_xp_0"), Global_1659614);
			}
			else if (iVar1 == 1)
			{
				func_487(&Global_1659615, iParam0);
				func_486(joaat("mpply_crew_local_xp_1"), Global_1659615);
			}
			else if (iVar1 == 2)
			{
				func_487(&Global_1659616, iParam0);
				func_486(joaat("mpply_crew_local_xp_2"), Global_1659616);
			}
			else if (iVar1 == 3)
			{
				func_487(&Global_1659617, iParam0);
				func_486(joaat("mpply_crew_local_xp_3"), Global_1659617);
			}
			else if (iVar1 == 4)
			{
				func_487(&Global_1659618, iParam0);
				func_486(joaat("mpply_crew_local_xp_4"), Global_1659618);
			}
		}
	}
}

void func_486(int iParam0, int iParam1)//Position - 0x16187
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1659609 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1659612 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1659613 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1659614 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1659615 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1659616 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1659617 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1659618 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1659619 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1659620 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1659621 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1659622 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1659623 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1659624 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1659625 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_487(var uParam0, int iParam1)//Position - 0x162AC
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_488(int iParam0)//Position - 0x162BD
{
	if (iParam0 == Global_1659609)
	{
		return 0;
	}
	else if (iParam0 == Global_1659610)
	{
		return 1;
	}
	else if (iParam0 == Global_1659611)
	{
		return 2;
	}
	else if (iParam0 == Global_1659612)
	{
		return 3;
	}
	else if (iParam0 == Global_1659613)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_489(var* uParam0)//Position - 0x1631A
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2725345;
		}
	}
	return Global_2725345;
}

void func_490(int iParam0, int iParam1, int iParam2)//Position - 0x1633D
{
	if (func_510())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10069 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1659759[func_248(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1659759[func_248(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_498(PLAYER::PLAYER_ID()))
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_1 = iParam0;
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_6 = func_496(iParam0, 1);
		}
		func_495(640, iParam0, -1, 1);
		func_494(641, func_496(iParam0, 1), -1, 1, 0);
		Global_1659759[func_248(-1)] = iParam0;
		func_491(-1109644434, 7, 0);
	}
}

void func_491(int iParam0, int iParam1, int iParam2)//Position - 0x16463
{
	int iVar0;
	
	if (func_493(iParam1, iParam2))
	{
		iVar0 = func_492();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_492()//Position - 0x16490
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_493(int iParam0, var uParam1)//Position - 0x164C5
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_494(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1654B
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_248(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_495(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1657B
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_248(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_248(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1659693[func_248(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1659699[func_248(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1659705[func_248(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1659711[func_248(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1659657[func_248(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1659663[func_248(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1659669[func_248(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1659675[func_248(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1659681[func_248(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1659627[func_248(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1659633[func_248(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1659639[func_248(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1659645[func_248(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1659651[func_248(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1659717[func_248(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1659723[func_248(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1659729[func_248(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1659735[func_248(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1659741[func_248(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1659747[func_248(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1659753[func_248(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1659759[func_248(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1659765[func_248(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 11391:
			Global_2869950[func_248(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1659771[func_248(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1659777[func_248(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1659783[func_248(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1659789[func_248(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1659795[func_248(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1659801[func_248(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2869985[func_248(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2869994[func_248(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2869988[func_248(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2869997[func_248(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2869991[func_248(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2870000[func_248(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2870003[func_248(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2870006[func_248(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2870009[func_248(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2870012[func_248(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2870015[func_248(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2870018[func_248(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2870021[func_248(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2870024[func_248(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2870027[func_248(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2870030[func_248(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2870033[func_248(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2870036[func_248(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2870039[func_248(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2870042[func_248(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2870045[func_248(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_496(int iParam0, bool bParam1)//Position - 0x17096
{
	if (bParam1)
	{
	}
	return func_497(iParam0, 0);
}

int func_497(int iParam0, int iParam1)//Position - 0x170AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_295824[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_295824[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_498(int iParam0)//Position - 0x17169
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

int func_499(int iParam0)//Position - 0x1718B
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1659759[func_248(-1)];
			}
			else if (func_498(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[func_248(-1)];
	}
	return 0;
}

void func_500(int iParam0, int iParam1, int iParam2)//Position - 0x171E8
{
	int iVar0;
	
	iVar0 = func_269(iParam0, func_248(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_501(iParam0))
	{
		func_494(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_495(iParam0, iVar0, iParam2, 1);
	}
}

int func_501(int iParam0)//Position - 0x1722A
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 11391:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

void func_502(int iParam0)//Position - 0x174F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_504(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_67(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_503(*iParam0, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_503(*iParam0, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_503(int iParam0, int iParam1)//Position - 0x175DF
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_504(int iParam0, int iParam1, int iParam2)//Position - 0x17600
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 0);
				
				case 1:
					return BitTest(Global_4718592.f_607, 1);
				
				case 2:
					return BitTest(Global_4718592.f_607, 2);
				
				case 3:
					return BitTest(Global_4718592.f_607, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 4);
				
				case 1:
					return BitTest(Global_4718592.f_607, 5);
				
				case 2:
					return BitTest(Global_4718592.f_607, 6);
				
				case 3:
					return BitTest(Global_4718592.f_607, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 8);
				
				case 1:
					return BitTest(Global_4718592.f_607, 9);
				
				case 2:
					return BitTest(Global_4718592.f_607, 10);
				
				case 3:
					return BitTest(Global_4718592.f_607, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 12);
				
				case 1:
					return BitTest(Global_4718592.f_607, 13);
				
				case 2:
					return BitTest(Global_4718592.f_607, 14);
				
				case 3:
					return BitTest(Global_4718592.f_607, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_505(bool bParam0, int iParam1)//Position - 0x177AB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_869(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_67(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_869(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_506(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_67(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_503(*iParam1, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_503(*iParam1, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_506(int iParam0, int iParam1)//Position - 0x178C3
{
	return SYSTEM::VDIST(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_507(int iParam0)//Position - 0x178DF
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_503(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_508(int iParam0)//Position - 0x17916
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_499(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_499(PLAYER::PLAYER_ID());
		}
	}
	if (func_509(8000, 0, 0) > 0)
	{
		if (func_509(8000, 0, 0) < (iParam0 + func_499(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_509(8000, 0, 0) - func_499(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_509(int iParam0, bool bParam1, int iParam2)//Position - 0x1797A
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_295824[iParam0];
}

int func_510()//Position - 0x179A2
{
	return 1;
}

int func_511()//Position - 0x179AB
{
	int iVar0;
	
	if (func_515(PLAYER::PLAYER_ID()) || func_514(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10101 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10101;
		}
	}
	else if (func_378() || func_512(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23310 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23310;
		}
	}
	else if (Global_262145.f_7094 > 20000)
	{
		iVar0 = 20000;
	}
	else
	{
		iVar0 = Global_262145.f_7094;
	}
	return iVar0;
}

int func_512(int iParam0)//Position - 0x17A43
{
	return func_513(func_348(iParam0));
}

int func_513(int iParam0)//Position - 0x17A55
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_514(int iParam0)//Position - 0x17A6F
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_515(int iParam0)//Position - 0x17A84
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

void func_516()//Position - 0x17A99
{
	Global_2727090 = 1;
}

int func_517(bool bParam0)//Position - 0x17AA6
{
	int iVar0;
	
	if (BitTest(uLocal_96, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_768())
		{
			return Global_262145.f_11788;
		}
		else
		{
			return Global_262145.f_11727;
		}
	}
	func_458();
	if (func_768())
	{
		iVar0 = (Global_262145.f_11788 * iLocal_575);
	}
	else
	{
		iVar0 = (Global_262145.f_11727 * iLocal_575);
	}
	return iVar0;
}

void func_518(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x17B09
{
	int iVar0;
	
	if (!func_530())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_519(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_519(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_519(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
			func_519(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_519(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1831B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_530())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_526(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_525(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_520(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_520(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x184C8
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_521(iParam0);
	}
}

void func_521(int iParam0)//Position - 0x18500
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_530())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_524(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_522(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_522(var uParam0)//Position - 0x18554
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_523(&(uParam0->f_14));
	func_523(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_523(var uParam0)//Position - 0x1865C
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_524(int iParam0)//Position - 0x186A4
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_525(int iParam0, int iParam1)//Position - 0x186CF
{
	Global_2727893 = iParam1;
	Global_2727892 = iParam0;
}

int func_526(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x186E3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_530())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_527(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_527(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x18820
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_529(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_528();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar1);
	}
}

void func_528()//Position - 0x188B2
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_529(int iParam0)//Position - 0x188C2
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_530()//Position - 0x188DA
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_531(int iParam0, int iParam1)//Position - 0x188F1
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_24025 == 0 || Global_262145.f_24025 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_24025 == 1)
			{
				Global_2815059.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7043)
				{
					iParam1 = Global_262145.f_7043;
				}
				Global_2815059.f_284 = iParam1;
				Global_2815059.f_285 = 0;
			}
		}
	}
}

int func_532(bool bParam0)//Position - 0x18963
{
	int iVar0;
	
	if (BitTest(uLocal_96, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_768())
		{
			return Global_262145.f_11787;
		}
		else
		{
			return Global_262145.f_11726;
		}
	}
	func_458();
	if (func_768())
	{
		iVar0 = (Global_262145.f_11787 * iLocal_575);
	}
	else
	{
		iVar0 = (Global_262145.f_11726 * iLocal_575);
	}
	return iVar0;
}

int func_533()//Position - 0x189C6
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iLocal_552]))
	{
		if (func_109(Local_91.f_7[iLocal_552]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_91.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_91.f_256[iLocal_552];
	if (!bVar0)
	{
		if (Local_91.f_594[0 /*4*/] != iLocal_552)
		{
			return 0;
		}
		else if (iVar3 > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (Local_91.f_594[0 /*4*/] == iLocal_552)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_91.f_256[Local_91.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_91.f_255 - iVar2);
		if (iVar5 > iVar6)
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

int func_534()//Position - 0x18A9A
{
	bool bVar0;
	var uVar1;
	
	func_700(&bVar0, &uVar1);
	if (iLocal_552 > -1)
	{
		if (func_109(Local_91.f_7[iLocal_552]))
		{
			return 1;
		}
	}
	return 0;
}

void func_535()//Position - 0x18AC6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_91.f_241 == 1)
	{
		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
			{
				if (!func_22(&uLocal_564) || (func_22(&uLocal_564) && func_19(&uLocal_564, 5000, 0)))
				{
					if (Local_91.f_27 == joaat("savage") || Local_91.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_552;
						if (iVar1 > -1)
						{
							if (func_109(Local_91.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), -1, false);
								if (iVar0 == 0)
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_91.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_552;
						if (iVar1 > -1)
						{
							if (func_109(Local_91.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), -1, false);
								if (iVar0 == 0)
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
								{
									iVar4 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
									bVar2 = false;
									while (bVar2 < iVar4)
									{
										iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), bVar2, false);
										if (iVar0 != 0)
										{
											if (!PED::IS_PED_INJURED(iVar0))
											{
												if (PED::IS_PED_A_PLAYER(iVar0))
												{
													iVar3++;
												}
											}
										}
										bVar2++;
									}
									if (iVar3 == 0)
									{
										Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_106(&uLocal_564);
					func_20(&uLocal_564, 0, 0);
				}
			}
		}
	}
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < 4)
	{
		if (BitTest(Local_91.f_319, bVar2))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[bVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), false))
				{
					if ((func_447() - func_126(&(Local_91.f_349[bVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), false))
							{
								if (!func_204())
								{
									func_446();
									func_172((func_447() - func_126(&(Local_91.f_349[bVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), false))
							{
								if (!func_204())
								{
									func_446();
									func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[bVar2]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), true, false, -1);
								func_25(&(Local_91.f_7[bVar2]));
							}
							else
							{
								NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), true, false, 0);
								func_25(&(Local_91.f_7[bVar2]));
							}
						}
					}
				}
			}
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == bVar2)
			{
				if (!BitTest(uLocal_96, 6))
				{
					if (func_437(0, 1, 1, 1))
					{
						if (func_768())
						{
							if (!BitTest(uLocal_96, 19))
							{
								func_436("UW_NOPILC", 30000);
							}
							else
							{
								func_436("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_436("UW_NOPIL", 30000);
						}
						func_435(1);
						MISC::SET_BIT(&uLocal_96, 6);
					}
					else if (BitTest(uLocal_96, 19))
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar5 = Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10;
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar5]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[iVar5])))
						{
							if (!func_768())
							{
								if (!func_277("UW_EXPL"))
								{
									func_271("UW_EXPL", 0);
								}
							}
							else if (!func_277("UW_EXPLC"))
							{
								func_271("UW_EXPLC", 0);
							}
						}
						else if (func_277("UW_EXPL") || func_277("UW_EXPLC"))
						{
							func_9();
						}
					}
					else if (func_277("UW_EXPL") || func_277("UW_EXPLC"))
					{
						func_9();
					}
				}
			}
		}
		bVar2++;
	}
}

bool func_536(int iParam0)//Position - 0x18F7E
{
	return Global_2703735.f_2400[0 /*80*/].f_1 == iParam0;
}

void func_537()//Position - 0x18F95
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (Local_91.f_27 == joaat("rhino"))
		{
			if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
				{
					if (!func_22(&uLocal_560) || (func_22(&uLocal_560) && func_19(&uLocal_560, 5000, 0)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_69(Local_576, 0f, 0f, 0f, 0))
							{
								Local_576 = { Local_91.f_30[0 /*3*/] };
							}
							fVar0 = func_539(PLAYER::PLAYER_PED_ID(), Local_576, 1);
							if (fVar0 > 750f)
							{
								MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							}
						}
						func_106(&uLocal_560);
						func_20(&uLocal_560, 0, 0);
					}
				}
				else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_277("UW_OOB"))
					{
						func_271("UW_OOB", 0);
					}
					if (!func_22(&uLocal_562))
					{
						iVar2 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar2, "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_91.f_7[func_538()]), "GTAO_FM_Events_Soundset", false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iVar2, "Time", 30f);
						func_20(&uLocal_562, 0, 0);
					}
					if (func_22(&uLocal_562))
					{
						if ((func_447() - func_126(&uLocal_562, 0, 0)) >= 0)
						{
							func_446();
							func_172((func_447() - func_126(&uLocal_562, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
						else
						{
							func_446();
							func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							func_9();
							MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
						}
					}
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						fVar0 = func_539(PLAYER::PLAYER_PED_ID(), Local_91.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							func_106(&uLocal_562);
							AUDIO::STOP_SOUND(iVar2);
						}
					}
				}
			}
		}
	}
	if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		func_702(1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = func_538();
			if (iVar1 > -1)
			{
				if (func_109(Local_91.f_7[iVar1]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[iVar1]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), false);
						VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), true);
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), true, false, -1);
						func_25(&(Local_91.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_538()//Position - 0x19230
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar1]))
			{
				if (func_109(Local_91.f_7[iVar1]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_539(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x1929A
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

void func_540()//Position - 0x192D4
{
	var uVar0;
	bool bVar1;
	
	bVar1 = -1;
	if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!BitTest(uLocal_95, 24))
	{
		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			func_700(&bVar1, &uVar0);
			if (func_543(bVar1))
			{
				if (bVar1 > -1)
				{
					if (Local_91.f_22[bVar1] != func_5())
					{
						fLocal_101 = NETWORK::NETWORK_GET_TALKER_PROXIMITY();
						NETWORK::NETWORK_SET_TALKER_PROXIMITY(-1f);
						func_542(1, bVar1);
						MISC::SET_BIT(&uLocal_95, 24);
						func_541(1);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_95, 24);
				MISC::SET_BIT(&uLocal_95, 25);
			}
		}
	}
	if (!BitTest(uLocal_95, 25))
	{
		if (BitTest(uLocal_95, 24))
		{
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_101);
				func_700(&bVar1, &uVar0);
				if (bVar1 > -1)
				{
					func_542(0, bVar1);
					MISC::SET_BIT(&uLocal_95, 25);
					func_541(0);
				}
			}
		}
	}
}

void func_541(bool bParam0)//Position - 0x193C0
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 15);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 4);
	}
}

void func_542(bool bParam0, bool bParam1)//Position - 0x193F5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_869(iVar1, 0, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (BitTest(Local_94[iVar0 /*18*/].f_1, bParam1) || !bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, true);
				}
				else if (bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, false);
				}
			}
		}
		iVar0++;
	}
}

bool func_543(bool bParam0)//Position - 0x19473
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bVar0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (iVar1 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (BitTest(Local_94[iVar1 /*18*/].f_1, bParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return bVar0;
}

void func_544()//Position - 0x194C0
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return;
	}
	if (!BitTest(uLocal_95, 15))
	{
		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
		{
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_91.f_22[0] != func_5())
				{
					if (func_437(0, 0, 1, 1))
					{
						if (!func_768())
						{
							if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
							{
								if (!func_768())
								{
									func_555("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_91.f_22[0]), 1, 30000);
								}
								else
								{
									func_555("UW_START1PC", PLAYER::GET_PLAYER_NAME(Local_91.f_22[0]), 1, 30000);
								}
								func_435(1);
							}
							else if (BitTest(Local_91.f_15, 0))
							{
								if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 14))
								{
									if (!func_768())
									{
										func_436("UW_STARTM", 30000);
									}
									else
									{
										func_436("UW_STARTMC", 30000);
									}
									func_435(1);
								}
							}
							else
							{
								func_555("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_91.f_22[0]), 1, 30000);
								func_435(1);
							}
						}
						else if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 14))
						{
							if (!func_768())
							{
								func_436("UW_STARTM", 30000);
							}
							else
							{
								func_436("UW_STARTMC", 30000);
							}
							func_435(1);
						}
						MISC::SET_BIT(&uLocal_95, 15);
					}
				}
			}
		}
	}
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
	{
		if (Local_91.f_241 == 1)
		{
			if (Local_91.f_27 != joaat("hydra") && Local_91.f_27 != joaat("rhino"))
			{
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (iLocal_552 >= 0)
					{
						if (!BitTest(uLocal_96, 10))
						{
							if (!BitTest(uLocal_96, 9))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iLocal_552]))
								{
									if (func_109(Local_91.f_7[iLocal_552]))
									{
										MISC::SET_BIT(&uLocal_96, 9);
									}
								}
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iLocal_552]))
							{
								if (!func_109(Local_91.f_7[iLocal_552]))
								{
									func_554("UW_TEAMV", 0);
									MISC::SET_BIT(&uLocal_96, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_768())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!BitTest(Local_91.f_3, 6))
			{
				if (!BitTest(uLocal_95, (16 + iVar1)))
				{
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 >= 2)
					{
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
						{
							if ((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2))
							{
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[0]))
								{
									if (func_109(Local_91.f_7[0]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[0]), -1, false) != 0)
										{
											iVar0 = func_553(iVar1, 0);
											if (iVar0 != func_5())
											{
												func_545("UW_COMP", iVar0, 1, 0, 0, 0, 1, 0);
											}
											MISC::SET_BIT(&uLocal_95, (16 + iVar1));
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_545(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x197BE
{
	int iVar0;
	struct<16> Var1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_551(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2787505 = { func_66(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505))
			{
				bVar2 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
				{
					bVar2 = true;
				}
				if (Global_2787435.f_21 > 0)
				{
					bVar3 = false;
				}
				else
				{
					bVar3 = true;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_550(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar2, false, Global_2787435, &Var1, Global_1576215, Global_1576216, Global_1576217);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar2, false, Global_2787435, Global_1576215, Global_1576216, Global_1576217);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_546(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_546(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1991F
{
	int iVar0;
	
	if ((!func_549() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_547(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1940311.f_5[iVar0 /*53*/] = iParam0;
		Global_1940311.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1940311.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1940311.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1940311.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1940311.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1940311.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_547(int iParam0)//Position - 0x19A27
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			func_548(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1940311++;
	if (Global_1940311 > 5)
	{
		Global_1940311 = 5;
		return Global_1940311;
	}
	return (Global_1940311 - 1);
}

void func_548(int iParam0)//Position - 0x19A89
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_549()//Position - 0x19AC2
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_550(char* sParam0)//Position - 0x19AD3
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_551(char* sParam0)//Position - 0x19AFE
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_552(&cVar0);
}

var func_552(char[4] cParam0)//Position - 0x19B22
{
	return cParam0;
}

int func_553(int iParam0, int iParam1)//Position - 0x19B2C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar2 = (iParam0 - 1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[iParam1]))
	{
		if (func_109(Local_91.f_7[iParam1]))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[iParam1]), iVar2, false);
			if (iVar1 != 0)
			{
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_554(char* sParam0, bool bParam1)//Position - 0x19B8C
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_546(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_555(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x19BC4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

void func_556()//Position - 0x19BEF
{
	if (!BitTest(uLocal_95, 9))
	{
		if (Local_91.f_241 == 1)
		{
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_START_MUSIC"))
				{
					MISC::SET_BIT(&uLocal_95, 9);
				}
			}
		}
	}
	if (!BitTest(uLocal_95, 10))
	{
		if (BitTest(uLocal_95, 9))
		{
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL"))
						{
							MISC::SET_BIT(&uLocal_95, 10);
						}
					}
					else if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC"))
					{
						MISC::SET_BIT(&uLocal_95, 10);
						func_557();
					}
				}
			}
		}
	}
}

void func_557()//Position - 0x19C97
{
	if (BitTest(Global_2815059.f_5032, 1))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_5032), 1);
	}
	if (Global_2815059.f_5032 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2815059.f_5032 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2815059.f_5042 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2815059.f_5042);
				Global_2815059.f_5042 = -1;
			}
		}
	}
}

void func_558()//Position - 0x19D32
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3[2];
	int iVar4;
	int iVar5;
	int iVar6[4];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	bool bVar25;
	int iVar26;
	char* sVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	
	iVar8 = 1;
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
		{
			if (!BitTest(uLocal_95, 26))
			{
				if ((((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2)) || (func_768() && BitTest(Local_91.f_3, 6))) || (func_768() && BitTest(Local_91.f_3, 15)))
				{
					if (!func_22(&uLocal_571))
					{
						func_20(&uLocal_571, 0, 0);
					}
					if (func_19(&uLocal_571, 1000, 0))
					{
						if (func_277("UW_ATTK"))
						{
							func_9();
						}
						func_633();
						if (func_632())
						{
							iVar13 = func_532(1);
							if (iVar13 > 0)
							{
								Local_92.f_6 = (Local_92.f_6 + iVar13);
								if ((!Global_262145.f_11974 && !BitTest(Local_91.f_3, 8)) || (!Global_262145.f_11975 && BitTest(Local_91.f_3, 8)))
								{
									if (Local_92.f_6 > 0)
									{
										func_531(19, Local_92.f_6);
									}
								}
								Global_2727753 = iVar13;
								if (func_530())
								{
									func_518(210955503, iVar13, &uVar15, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar16);
								}
							}
							iVar11 = func_517(1);
							func_516();
							Local_92.f_7 = (Local_92.f_7 + iVar11);
							func_468(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
							Local_92.f_5 = 2;
							func_650(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2, 1, 0);
						}
						else if (!func_768())
						{
							iVar13 = func_645(0);
							func_620(&iVar13, 1);
							iVar13 = (iVar13 + func_532(1));
							if (iVar13 > 0)
							{
								Local_92.f_6 = (Local_92.f_6 + iVar13);
								if (!Global_262145.f_11974)
								{
									if (Local_92.f_6 > 0)
									{
										func_531(19, Local_92.f_6);
									}
								}
								Global_2727753 = iVar13;
								if (func_530())
								{
									func_518(210955503, iVar13, &uVar17, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar18);
								}
							}
							iVar11 = func_517(1);
							iVar11 = (iVar11 + func_619());
							Local_92.f_7 = (Local_92.f_7 + iVar11);
							func_516();
							func_468(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
							Local_92.f_5 = 1;
							func_649(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
						}
						else if (func_618())
						{
							if (!func_617(1))
							{
								if (!func_277("UW_EXPL") && !func_277("UW_EXPLC"))
								{
									func_9();
								}
								iVar13 = func_645(0);
								func_620(&iVar13, 1);
								iVar13 = (iVar13 + func_532(1));
								Local_92.f_6 = (Local_92.f_6 + iVar13);
								if (!Global_262145.f_11975)
								{
									if (Local_92.f_6 > 0)
									{
										func_531(19, Local_92.f_6);
									}
								}
								Global_2727753 = iVar13;
								if (iVar13 > 0)
								{
									if (func_530())
									{
										func_518(210955503, iVar13, &uVar19, 0, 1, 0);
									}
									else
									{
										MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar20);
									}
								}
								if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
								{
									func_649(64, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								else
								{
									func_649(64, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								Local_92.f_5 = 1;
								iVar11 = func_619();
								iVar11 = (iVar11 + func_517(1));
								Local_92.f_7 = (Local_92.f_7 + iVar11);
								func_516();
								func_468(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar13 = func_532(1);
								iVar11 = func_517(1);
								iVar8 = 0;
								iVar10 = 0;
								while (iVar10 <= 3)
								{
									if (Local_91.f_465[iVar10 /*4*/].f_1 == Local_91.f_465[0 /*4*/].f_1)
									{
										iVar8++;
										iVar6[iVar10] = -1;
										if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
										{
											if (Local_91.f_465[iVar10 /*4*/].f_2 > -1)
											{
												if (Local_91.f_465[iVar10 /*4*/].f_2 != PLAYER::PLAYER_ID())
												{
													if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[iVar10 /*4*/].f_2)))
													{
														iVar3[iVar4] = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[iVar10 /*4*/].f_2);
														iVar4++;
													}
												}
											}
										}
										else if (iLocal_552 > -1)
										{
											if (iLocal_552 != Local_91.f_465[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_91.f_465[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
								{
									if (iVar8 > 2)
									{
										bVar9 = true;
									}
									else if (iVar3[0] == func_5())
									{
										bVar9 = true;
									}
									else
									{
										func_616(68, "UW_DRAWP", PLAYER::GET_PLAYER_NAME(iVar3[0]), 1, 15000, "UW_BIGO", 2);
									}
								}
								else if (iVar8 > 2)
								{
									bVar9 = true;
								}
								else if (iVar6[0] == -1)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									func_649(68, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								if (bVar9)
								{
									if (!func_768())
									{
										func_650(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
									}
									else
									{
										func_650(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2, 1, 0);
									}
								}
								iVar14 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_645(0)) / SYSTEM::TO_FLOAT(iVar8)));
								iVar12 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_619()) / SYSTEM::TO_FLOAT(iVar8)));
								func_620(&iVar14, 1);
								iVar13 = (iVar13 + iVar14);
								iVar11 = (iVar11 + iVar12);
								Local_92.f_6 = (Local_92.f_6 + iVar13);
								if (!Global_262145.f_11975)
								{
									if (Local_92.f_6 > 0)
									{
										func_531(19, Local_92.f_6);
									}
								}
								Global_2727753 = iVar13;
								if (iVar13 > 0)
								{
									if (func_530())
									{
										func_518(210955503, iVar13, &uVar21, 0, 1, 0);
									}
									else
									{
										MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar22);
									}
								}
								Local_92.f_7 = (Local_92.f_7 + iVar11);
								func_516();
								func_468(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_614(1);
							iVar13 = func_532(1);
							iVar11 = func_517(1);
							Local_92.f_6 = (Local_92.f_6 + iVar13);
							if (!Global_262145.f_11975)
							{
								if (Local_92.f_6 > 0)
								{
									func_531(19, Local_92.f_6);
								}
							}
							Global_2727753 = iVar13;
							if (iVar13 > 0)
							{
								if (func_530())
								{
									func_518(210955503, iVar13, &uVar23, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar24);
								}
							}
							Local_92.f_7 = (Local_92.f_7 + iVar11);
							func_516();
							func_468(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							if (!func_617(0))
							{
								iVar5 = Local_91.f_465[0 /*4*/];
								if (!func_277("UW_EXPL") && !func_277("UW_EXPLC"))
								{
									func_9();
								}
								if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
								{
									iVar2 = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[0 /*4*/].f_2);
									if (func_319(iVar2, 1))
									{
										iVar26 = func_323(iVar2);
										if (iVar26 > -1)
										{
											uVar28 = func_321(iVar26);
											sVar27 = func_608(iVar2);
											bVar25 = true;
										}
									}
									if (iVar2 != func_5())
									{
										if (!bVar25)
										{
											if (!func_768())
											{
												func_616(65, "UW_FWONP", PLAYER::GET_PLAYER_NAME(iVar2), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_616(65, "UW_FWONPC", PLAYER::GET_PLAYER_NAME(iVar2), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_768())
										{
											func_606(66, "PEN_OVR", "UW_FWONG", sVar27, uVar28, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_606(66, "PEN_OVR", "UW_FWONGC", sVar27, uVar28, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar5 + 1, 16);
									if (!func_768())
									{
										func_649(65, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
									}
									else
									{
										func_649(65, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
									}
								}
							}
							else
							{
								if (!func_277("UW_EXPL") && !func_277("UW_EXPLC"))
								{
									func_9();
								}
								iVar10 = 1;
								while (iVar10 <= 3)
								{
									if (Local_91.f_465[iVar10 /*4*/].f_1 == Local_91.f_465[0 /*4*/].f_1)
									{
										iVar8++;
										if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
										{
											if (Local_91.f_465[iVar10 /*4*/].f_2 > -1)
											{
												if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[iVar10 /*4*/].f_2)))
												{
													iVar3[iVar4] = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[iVar10 /*4*/].f_2);
													iVar4++;
												}
											}
										}
										else if (iLocal_552 > -1)
										{
											if (iLocal_552 != Local_91.f_465[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_91.f_465[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
								{
									if (iVar8 == 2)
									{
										if (iVar3[0] != func_5() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3[0]))
										{
											if (iVar3[1] != func_5() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3[1]))
											{
												func_564(68, func_5(), func_5(), -1, "UW_DRAW2P", "UW_BIGF", func_324(), 15000, func_324(), PLAYER::GET_PLAYER_NAME(iVar3[0]), PLAYER::GET_PLAYER_NAME(iVar3[1]), 0);
											}
											else
											{
												bVar9 = true;
											}
										}
										else
										{
											bVar9 = true;
										}
									}
									else
									{
										bVar9 = true;
									}
								}
								else if (iVar8 == 2)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									StringCopy(&Var1, "UW_TM", 16);
									StringIntConCat(&Var1, iVar6[1] + 1, 16);
									func_649(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var1, 1, 2, 0);
									bVar9 = true;
								}
								else
								{
									bVar9 = true;
								}
								if (bVar9)
								{
									func_650(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
								}
							}
						}
						func_672(0);
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
						{
							Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
						}
						MISC::SET_BIT(&uLocal_95, 13);
						MISC::SET_BIT(&uLocal_95, 26);
					}
				}
				else if (BitTest(Local_91.f_3, 6) || (!func_768() && BitTest(Local_91.f_3, 15)))
				{
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1)
					{
						func_650(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
					}
					else
					{
						func_649(65, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
					}
					func_672(0);
					MISC::SET_BIT(&uLocal_95, 26);
					iVar13 = func_532(1);
					Local_92.f_6 = (Local_92.f_6 + iVar13);
					if (!Global_262145.f_11974)
					{
						if (Local_92.f_6 > 0)
						{
							func_531(19, Local_92.f_6);
						}
					}
					Global_2727753 = iVar13;
					if (iVar13 > 0)
					{
						if (func_530())
						{
							func_518(210955503, iVar13, &uVar29, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar30);
						}
					}
					iVar11 = func_517(1);
					Local_92.f_7 = (Local_92.f_7 + iVar11);
					func_516();
					func_468(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
					Local_92.f_5 = 2;
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (BitTest(Local_91.f_3, 14))
				{
					func_672(0);
					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 3)
					{
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
					}
				}
				else if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
				{
					func_649(65, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
					func_672(0);
					MISC::SET_BIT(&uLocal_95, 26);
					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					iVar13 = func_532(1);
					Local_92.f_6 = (Local_92.f_6 + iVar13);
					if (!Global_262145.f_11974)
					{
						if (Local_92.f_6 > 0)
						{
							func_531(19, Local_92.f_6);
						}
					}
					Global_2727753 = iVar13;
					if (iVar13 > 0)
					{
						if (func_530())
						{
							func_518(210955503, iVar13, &uVar31, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar32);
						}
					}
					iVar11 = func_517(1);
					Local_92.f_7 = (Local_92.f_7 + iVar11);
					func_516();
					func_468(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
					Local_92.f_5 = 2;
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (BitTest(Local_91.f_3, 12))
				{
					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
				}
			}
			if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
			{
				if (BitTest(uLocal_95, 26))
				{
					if (func_277("UW_ATTK"))
					{
						func_9();
					}
					if (func_559(&uLocal_543, 1))
					{
						MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					if (!func_277("UW_EXPL") && !func_277("UW_EXPLC"))
					{
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 > -1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (func_109(Local_91.f_7[Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9])))
										{
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
	else if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
	{
		MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
	}
}

int func_559(var uParam0, bool bParam1)//Position - 0x1AB57
{
	bool bVar0;
	
	if ((((*uParam0 > 0 && !func_368()) && !(func_234(PLAYER::PLAYER_ID(), 0) && (func_239(PLAYER::PLAYER_ID()) || func_237(PLAYER::PLAYER_ID())))) && !func_563(PLAYER::PLAYER_ID())) && !func_214(PLAYER::PLAYER_ID()))
	{
		func_562();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_22(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2815059.f_4657), 0);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_561(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_22(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_560();
				func_561(uParam0, 2);
			}
			break;
		
		case 2:
			func_560();
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_697("AMEV_LBD_HELP"))
				{
					HUD::CLEAR_HELP(true);
				}
				func_561(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
				func_561(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
			return 1;
	}
	return 0;
}

void func_560()//Position - 0x1ACE1
{
	if (BitTest(Global_2815059.f_4657, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && func_869(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2815059.f_4657), 1);
			func_436("AMEV_LBD_HELP", -1);
			func_435(1);
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 0);
		}
	}
}

void func_561(var uParam0, int iParam1)//Position - 0x1AD5E
{
	*uParam0 = iParam1;
}

void func_562()//Position - 0x1AD6B
{
	Global_2727091 = 1;
}

int func_563(int iParam0)//Position - 0x1AD78
{
	if (iParam0 != func_5())
	{
		if (func_869(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_195(Global_2689235[iParam0 /*453*/].f_318.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_564(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1ADBE
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_605(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_565(&Var0);
}

int func_565(var uParam0)//Position - 0x1AE4D
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703735.f_2722)
		{
			return 0;
		}
	}
	func_576(uParam0, uParam0->f_17);
	func_575(uParam0);
	if (func_61())
	{
		func_575(uParam0);
	}
	if (func_574(uParam0->f_1))
	{
		func_567();
		if (Global_2703735.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[0 /*80*/] = { *uParam0 };
			if (func_566(uParam0->f_69, 8192))
			{
				Global_1931432 = 1;
			}
			return 1;
		}
		if (((Global_2703735.f_2400[0 /*80*/].f_1 == 13 || Global_2703735.f_2400[0 /*80*/].f_1 == 53) || Global_2703735.f_2400[0 /*80*/].f_1 == 54) || Global_2703735.f_2400[0 /*80*/].f_1 == 58)
		{
			Global_2703735.f_2400[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703735.f_2400[iVar0 + 1 /*80*/] = { Global_2703735.f_2400[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703735.f_2400[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_567();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_366(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_566(uParam0->f_69, 128))
			{
				if (func_371(Global_2703735.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
					func_366(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_566(var uParam0, int iParam1)//Position - 0x1B032
{
	return (uParam0 && iParam1) != 0;
}

void func_567()//Position - 0x1B041
{
	bool bVar0;
	
	if (Global_2703735.f_2723)
	{
		return;
	}
	if (!Global_78587)
	{
		Global_78587 = 1;
		bVar0 = true;
	}
	func_568();
	if (bVar0)
	{
		Global_78587 = 0;
	}
}

void func_568()//Position - 0x1B074
{
	Global_2703735.f_2724 = 0;
	Global_2703735.f_2724.f_582 = 0;
	func_572(&(Global_2703735.f_2724.f_1));
	Global_2703735.f_2724.f_1.f_1 = 0;
	func_569(&(Global_2703735.f_2724.f_1), 1);
}

void func_569(var uParam0, int iParam1)//Position - 0x1B0B6
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78587)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78588)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_571(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_570(0);
}

void func_570(int iParam0)//Position - 0x1B165
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

int func_571(bool bParam0)//Position - 0x1B179
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_572(var uParam0)//Position - 0x1B1A1
{
	func_573(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_573(var uParam0)//Position - 0x1B1CB
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_574(int iParam0)//Position - 0x1B24A
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

void func_575(var uParam0)//Position - 0x1B362
{
	if (func_373(uParam0->f_1))
	{
		uParam0->f_72 = func_324();
	}
}

void func_576(var uParam0, int iParam1)//Position - 0x1B37D
{
	if (func_373(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_5() || !func_869(iParam1, 0, 1))
	{
		return;
	}
	if (func_371(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_577(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_577(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1B3D4
{
	int iVar0;
	int iVar1;
	
	if (func_411(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_411(PLAYER::PLAYER_ID()) || (func_604() && func_603())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = func_602();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_869(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return func_600(iParam1, iParam0, 0);
							}
							else
							{
								return func_589(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_589(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return func_600(iParam1, iParam0, 0);
				}
				else
				{
					return func_578(0, -1, 0);
				}
			}
			else
			{
				return func_578(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return func_600(iParam1, iParam0, 0);
		}
		else
		{
			return func_589(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_589(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_578(bool bParam0, int iParam1, bool bParam2)//Position - 0x1B5B1
{
	return func_579(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_579(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1B5C7
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_588() || (func_587() && func_585())) && Global_1659814.f_1)
	{
		if (bParam1)
		{
			return func_584(iParam2, iVar0);
		}
		else
		{
			return func_584(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_504(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_583(1);
				}
				else
				{
					return func_583(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_580(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_580(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_583(1);
	}
	return func_583(0);
}

int func_580(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1B6C8
{
	int iVar0;
	
	iVar0 = func_582(iParam0, iParam1, iParam3);
	if (func_581(Global_4718592.f_116524, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_581(int iParam0, bool bParam1)//Position - 0x1B7E0
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_168757 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9485[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_582(int iParam0, int iParam1, int iParam2)//Position - 0x1B831
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_504(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_583(bool bParam0)//Position - 0x1B878
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_584(int iParam0, int iParam1)//Position - 0x1B88F
{
	if (iParam0 == -1)
	{
		iParam0 = func_582(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_585()//Position - 0x1B8DD
{
	if (func_586())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_172946, 4);
}

bool func_586()//Position - 0x1B8FC
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_587()//Position - 0x1B911
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_172946, 0);
	}
	return ((BitTest(Global_4718592.f_172946, 0) || Global_1922895) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_588()//Position - 0x1B958
{
	if (func_586() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_589(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1B975
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853348[iVar2 /*834*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_592())
			{
				iVar3 = func_323(iParam0);
				if (!iVar3 == -1)
				{
					return func_321(iVar3);
				}
			}
			if ((func_591(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_504(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_583(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_590(1);
			}
			else
			{
				return func_579(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[iParam0 /*834*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return func_583(1);
			}
			else
			{
				return func_579(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_323(iParam0);
	if (!iVar4 == -1)
	{
		return func_321(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_590(bool bParam0)//Position - 0x1BB0C
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_591(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1BB23
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_592()//Position - 0x1BB9B
{
	if ((((((func_303() || func_599()) || func_61()) || func_598()) || func_597()) || func_595()) || func_593())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_593()//Position - 0x1BC03
{
	return func_594(Global_4718592.f_116524);
}

int func_594(int iParam0)//Position - 0x1BC19
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31703[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_595()//Position - 0x1BC48
{
	return func_596(Global_4718592.f_116524);
}

int func_596(int iParam0)//Position - 0x1BC5E
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_597()//Position - 0x1BC98
{
	return Global_2714762.f_24;
}

bool func_598()//Position - 0x1BCA6
{
	return Global_2714762.f_21;
}

var func_599()//Position - 0x1BCB4
{
	return Global_2714762.f_18;
}

int func_600(int iParam0, int iParam1, bool bParam2)//Position - 0x1BCC2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058069.f_14[iParam0];
	if (func_592())
	{
		iVar2 = func_323(iParam1);
		if (!iVar2 == -1)
		{
			return func_321(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
	{
		if (Global_4718592.f_111249[iParam0] != -1 && Global_4718592.f_111249[iParam0] <= 4)
		{
			if (Global_4718592.f_111249[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_111249[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_111249[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_111249[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_111249[iParam0];
			}
		}
		else
		{
			iVar0 = func_579(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_601(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_504(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_590(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_601(int iParam0)//Position - 0x1BE41
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_168914;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_168915;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_168916;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_168917;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_602()//Position - 0x1BF16
{
	return Global_2621446.f_2;
}

var func_603()//Position - 0x1BF24
{
	return BitTest(Global_2621446, 4);
}

var func_604()//Position - 0x1BF32
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

void func_605(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x1BF4C
{
	uParam1->f_17 = func_5();
	uParam1->f_18 = func_5();
	uParam1->f_19 = func_5();
	uParam1->f_20 = func_5();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_606(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1BFC8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar1 = func_5();
	iVar2 = func_5();
	return func_607(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_607(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x1C003
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_605(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_366(&(Var0.f_69), 4);
	return func_565(&Var0);
}

char* func_608(int iParam0)//Position - 0x1C0B7
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_613(&(Global_1892703[iParam0 /*599*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1892703[iParam0 /*599*/].f_10.f_121 != Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121)
	{
		sVar0 = func_611(iParam0, 0);
		return sVar0;
	}
	if (((func_238(iParam0, 28) || func_238(PLAYER::PLAYER_ID(), 28)) || func_610(iParam0)) && !func_609(iParam0))
	{
		return func_611(iParam0, 0);
	}
	iVar1 = func_65(iParam0);
	if (iVar1 != func_5())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_342() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_611(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_5())
	{
		sVar0 = func_613(&(Global_1892703[iVar1 /*599*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_611(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_609(int iParam0)//Position - 0x1C1BC
{
	struct<13> Var0;
	
	Var0 = { func_66(iParam0) };
	if (func_342())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_610(int iParam0)//Position - 0x1C1FC
{
	struct<13> Var0;
	
	if (iParam0 != func_5())
	{
		Var0 = { func_66(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::_0x807ABE1AB65C24D2()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_342() || MISC::_0x807ABE1AB65C24D2())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_611(int iParam0, bool bParam1)//Position - 0x1C269
{
	if (!bParam1)
	{
		if (func_307(iParam0, 1))
		{
			return func_612();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_612()//Position - 0x1C290
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_613(var uParam0)//Position - 0x1C2A0
{
	return uParam0;
}

void func_614(bool bParam0)//Position - 0x1C2AA
{
	if (bParam0)
	{
		if (func_615(1))
		{
			MISC::SET_BIT(&Global_1836869, 1);
		}
	}
	else if (func_615(2))
	{
		MISC::SET_BIT(&Global_1836869, 2);
	}
}

int func_615(int iParam0)//Position - 0x1C2DC
{
	var uVar0;
	
	uVar0 = func_269(2537, -1, 0);
	if (iParam0 == 0)
	{
		if ((BitTest(uVar0, 0) && BitTest(uVar0, 1)) && BitTest(uVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((BitTest(uVar0, 3) && BitTest(uVar0, 4)) && BitTest(uVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((BitTest(uVar0, 6) && BitTest(uVar0, 7)) && BitTest(uVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((BitTest(uVar0, 9) && BitTest(uVar0, 10)) && BitTest(uVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_616(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x1C389
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_605(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_565(&Var0);
}

int func_617(bool bParam0)//Position - 0x1C3FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_700(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_91.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
	{
		return Local_91.f_465[0 /*4*/].f_1 == Local_91.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_91.f_594[0 /*4*/].f_1 == Local_91.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_618()//Position - 0x1C48F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_700(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_91.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_619()//Position - 0x1C4CB
{
	if (!func_768())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11723) * Global_262145.f_11913));
	}
	if ((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11784) * Global_262145.f_11915));
	}
	if (BitTest(Local_91.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11784) * Global_262145.f_11915));
	}
	return 0;
}

void func_620(int iParam0, int iParam1)//Position - 0x1C55B
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_631())
		{
			if (func_630(0))
			{
				if (!func_388(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_629()))
					{
						if (func_628() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_628());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_626(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_625("GB_BCUT_TICK1", func_629(), iVar0, 0, 0, 1);
						}
						func_624(20);
						func_621(func_629(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_621(int iParam0, int iParam1, int iParam2)//Position - 0x1C5FB
{
	struct<8> Var0;
	
	if (func_869(iParam0, 0, 1))
	{
		Var0.f_0 = 1146470621;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_623(iParam0);
		func_622(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_529(iParam0));
	}
}

void func_622(var uParam0, var uParam1)//Position - 0x1C651
{
	*uParam0 = Global_1920255.f_9;
	*uParam1 = Global_1920255.f_10;
}

var func_623(int iParam0)//Position - 0x1C66B
{
	return Global_1892703[iParam0 /*599*/].f_510;
}

void func_624(int iParam0)//Position - 0x1C67F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_7[iVar0]), iVar1);
}

int func_625(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x1C6A8
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_577(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_551(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_546(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_626(int iParam0, bool bParam1)//Position - 0x1C740
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_627(1);
	}
	else
	{
		iVar1 = func_627(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_627(bool bParam0)//Position - 0x1C772
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12862;
}

int func_628()//Position - 0x1C798
{
	return Global_262145.f_12861;
}

int func_629()//Position - 0x1C7A7
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
}

bool func_630(bool bParam0)//Position - 0x1C7BC
{
	return func_319(PLAYER::PLAYER_ID(), bParam0);
}

bool func_631()//Position - 0x1C7CE
{
	return func_355(PLAYER::PLAYER_ID());
}

int func_632()//Position - 0x1C7DE
{
	int iVar0;
	
	if (!BitTest(Local_91.f_3, 6) && !BitTest(Local_91.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_91.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_633()//Position - 0x1C825
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_73[iVar0]))
		{
			if (!func_109(Local_91.f_73[iVar0]))
			{
				func_25(&(Local_91.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar0]))
		{
			if (func_31(Local_91.f_48[iVar0]))
			{
				func_25(&(Local_91.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_634(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x1C8AA
{
	if (func_234(PLAYER::PLAYER_ID(), 0) || func_349(PLAYER::PLAYER_ID(), 0))
	{
		if (func_239(PLAYER::PLAYER_ID()) || func_251(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_639(sParam3, sParam4, 1);
		}
		if (func_638(26, -1))
		{
			func_636(26, -1);
		}
		return 1;
	}
	if (func_22(&(Global_1836844.f_18)))
	{
		if (!func_19(&(Global_1836844.f_18), 7500, 0))
		{
			return 0;
		}
		func_106(&(Global_1836844.f_18));
	}
	if (func_635())
	{
		if (bParam2)
		{
			func_639(sParam3, sParam4, 0);
		}
		if (func_638(26, -1))
		{
			func_636(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_639(sParam3, sParam4, 1);
		}
		if (func_638(26, -1))
		{
			func_636(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_635()//Position - 0x1C9A1
{
	return BitTest(Global_1836844.f_1, 0);
}

void func_636(bool bParam0, int iParam1)//Position - 0x1C9B1
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (bParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_637(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_637(int iParam0)//Position - 0x1CA0A
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_638(int iParam0, int iParam1)//Position - 0x1CA6D
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = func_637(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

void func_639(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1CA96
{
	if ((!BitTest(Global_1836844.f_1, 2) && !func_206(PLAYER::PLAYER_ID())) && !func_205(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_650(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836844.f_1), 2);
	}
}

void func_640()//Position - 0x1CB0D
{
	Global_2815059.f_1856.f_56 = 1;
}

void func_641()//Position - 0x1CB1F
{
	Global_2815059.f_1856.f_54 = 1;
}

bool func_642()//Position - 0x1CB31
{
	return BitTest(Global_2815059.f_1797, 11);
}

int func_643()//Position - 0x1CB43
{
	if (iLocal_552 > -1)
	{
		if (func_109(Local_91.f_7[iLocal_552]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[iLocal_552])))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_644(char* sParam0, char* sParam1, int iParam2)//Position - 0x1CB7F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_645(bool bParam0)//Position - 0x1CB9E
{
	if (!func_768())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11722) * Global_262145.f_11912));
	}
	if (bParam0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11783) * Global_262145.f_11914));
	}
	if ((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11783) * Global_262145.f_11914));
	}
	if (BitTest(Local_91.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11783) * Global_262145.f_11914));
	}
	return 0;
}

char* func_646()//Position - 0x1CC50
{
	if (Local_91.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_647(int iParam0, int iParam1, bool bParam2)//Position - 0x1CC84
{
	if (func_249())
	{
		if (iParam1 == 1)
		{
			if (Global_2815059.f_4462 == -1)
			{
				Global_2815059.f_4462 = Global_262145.f_27172;
			}
			func_8(&(Global_2815059.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2815059.f_4465 == -1)
				{
					Global_2815059.f_4465 = Global_262145.f_27173;
				}
				func_8(&(Global_2815059.f_4463), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
				func_702(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
			func_702(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_648()) && !func_255(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

bool func_648()//Position - 0x1CD4E
{
	return Global_2714762.f_841;
}

int func_649(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1CD5D
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_605(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_366(&(Var0.f_69), iParam10);
	}
	return func_565(&Var0);
}

int func_650(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1CDEE
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_605(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_366(&(Var0.f_69), iParam7);
	}
	return func_565(&Var0);
}

void func_651(bool bParam0)//Position - 0x1CE6E
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 4);
	}
}

void func_652(bool bParam0)//Position - 0x1CEA2
{
	int iVar0;
	
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		func_670(PLAYER::PLAYER_ID(), func_269(586, -1, 0), 0);
		if (func_669(3610, -1))
		{
		}
		iVar0 = func_269(2042, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_668(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (func_630(0))
		{
			func_670(PLAYER::PLAYER_ID(), func_269(586, -1, 0), 0);
		}
		else
		{
			func_670(PLAYER::PLAYER_ID(), func_667(Global_2824753), 0);
		}
		func_665(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_658(PLAYER::PLAYER_PED_ID(), iVar0), func_657(PLAYER::PLAYER_PED_ID(), iVar0), false);
		func_656(func_269(2042, -1, 0), 1);
		Global_2815059.f_287 = 1;
		func_653(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_653(int iParam0, int iParam1, int iParam2)//Position - 0x1CF7B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_655();
		if (iParam2 == -1)
		{
			iParam2 = func_269(2042, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_658(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_657(PLAYER::GET_PLAYER_PED(iParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_668(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_658(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_657(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_668(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_269(586, -1, 0);
		}
		if (func_630(1) && func_654(iParam0))
		{
			func_670(iParam0, func_667(Global_2824753), 0);
		}
		else
		{
			func_670(iParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			func_670(iParam0, Global_1836612, 1);
		}
		func_665(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
	}
}

var func_654(int iParam0)//Position - 0x1D06A
{
	return func_238(iParam0, 10);
}

void func_655()//Position - 0x1D07A
{
	Global_78291 = 0;
	Global_78292 = -1;
	Global_78293 = -1;
	Global_78294 = -1;
	Global_78295 = -1;
	Global_78299 = -1;
}

void func_656(int iParam0, int iParam1)//Position - 0x1D0A0
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_655();
		func_494(2042, iParam0, -1, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_658(PLAYER::PLAYER_PED_ID(), iParam0), func_657(PLAYER::PLAYER_PED_ID(), iParam0), false);
		func_665(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_668(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_653(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

int func_657(int iParam0, int iParam1)//Position - 0x1D126
{
	switch (iParam1)
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
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
		
		case 67:
			return 0;
			break;
	}
	return 0;
}

var func_658(int iParam0, int iParam1)//Position - 0x1D4C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
	bVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar6 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if (((((((bVar3 != Global_78291 || iParam1 != Global_78292) || iVar4 != Global_78293) || iVar5 != Global_78294) || iVar6 != Global_78295) || iVar0 != Global_78296) || iVar1 != Global_78297) || iVar2 != Global_78298)
	{
		Global_78291 = bVar3;
		Global_78292 = iParam1;
		Global_78293 = iVar4;
		Global_78294 = iVar5;
		Global_78295 = iVar6;
		Global_78296 = iVar0;
		Global_78297 = iVar1;
		Global_78298 = iVar2;
		Global_78299 = func_659(iParam0, iParam1);
	}
	return Global_78299;
}

int func_659(int iParam0, int iParam1)//Position - 0x1D5D9
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_664(iParam0, iParam1, 1);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8))
			{
				return func_664(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_664(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_664(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_664(iParam0, iParam1, 6);
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_664(iParam0, iParam1, 7);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_664(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_664(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		return func_664(iParam0, iParam1, 9);
	}
	if (func_663(iParam0))
	{
		if (bVar1)
		{
			return func_664(iParam0, iParam1, 7);
		}
		else
		{
			return func_664(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT01"), 0))
		{
			return func_664(iParam0, iParam1, 0);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT02"), 0))
		{
			return func_664(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT03"), 0))
		{
			return func_664(iParam0, iParam1, 2);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1030529416, 0))
		{
			return func_664(iParam0, iParam1, 3);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 873008833, 0))
		{
			return func_664(iParam0, iParam1, 4);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1646534043, 0))
		{
			return func_664(iParam0, iParam1, 5);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT07"), 0))
		{
			return func_664(iParam0, iParam1, 6);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT08"), 0))
		{
			return func_664(iParam0, iParam1, 7);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1741007074, 0))
		{
			return func_664(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT10"), 0))
		{
			return func_664(iParam0, iParam1, 9);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT11"), 0))
		{
			return func_664(iParam0, iParam1, 10);
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MINI_DRESS"), 0))
		{
			return func_664(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_664(iParam0, iParam1, 5);
			}
			else
			{
				return func_664(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_664(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 1);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_662(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_664(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_664(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_661(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_664(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_661(iVar4);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else
			{
				return func_664(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_660(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_664(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_664(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_664(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_664(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_664(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_664(iParam0, iParam1, 9);
					}
					else
					{
						return func_664(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_664(iParam0, iParam1, 9);
					}
					else
					{
						return func_664(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_664(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_661(iVar4);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 1);
			}
			else
			{
				return func_664(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else
			{
				return func_664(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 1);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 8);
			}
			else
			{
				return func_664(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_664(iParam0, iParam1, 10);
				}
				else
				{
					return func_664(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 1);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 6);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else
			{
				return func_664(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 9);
				}
				else
				{
					return func_664(iParam0, iParam1, 1);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 5);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_664(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_664(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_664(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 2);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_664(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else
			{
				return func_664(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else
			{
				return func_664(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_664(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 0);
			}
			else
			{
				return func_664(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_664(iParam0, iParam1, 10);
				}
				else
				{
					return func_664(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 1);
			}
			else
			{
				return func_664(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 3);
			}
			else
			{
				return func_664(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 1);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 9);
			}
			else
			{
				return func_664(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 10);
			}
			else
			{
				return func_664(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_664(iParam0, iParam1, 7);
			}
			else
			{
				return func_664(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_664(iParam0, iParam1, 2);
			}
			else
			{
				return func_664(iParam0, iParam1, 7);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0))
		{
			return func_664(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_661(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 6);
				}
				else
				{
					return func_664(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 2);
				}
				else
				{
					return func_664(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 2);
				}
				else
				{
					return func_664(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 2);
				}
				else
				{
					return func_664(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 2);
				}
				else
				{
					return func_664(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 6);
				}
				else
				{
					return func_664(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 5);
				}
				else
				{
					return func_664(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 6);
				}
				else
				{
					return func_664(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 3);
				}
				else
				{
					return func_664(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 5);
				}
				else
				{
					return func_664(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 6);
				}
				else
				{
					return func_664(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 6);
				}
				else
				{
					return func_664(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 6);
				}
				else
				{
					return func_664(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_664(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 6);
				}
				else
				{
					return func_664(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 7);
				}
				else
				{
					return func_664(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_664(iParam0, iParam1, 1);
				}
				else
				{
					return func_664(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_664(iParam0, iParam1, 0);
	return 0;
}

int func_660(int iParam0, int iParam1)//Position - 0x1FD7B
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_661(int iParam0)//Position - 0x1FF1B
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_662(int iParam0, int iParam1)//Position - 0x20089
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_663(int iParam0)//Position - 0x201CD
{
	if (FILES::_DOES_CUSTOMIZATION_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 4, joaat("DUNGAREES")))
	{
		return 1;
	}
	return 0;
}

int func_664(int iParam0, int iParam1, int iParam2)//Position - 0x201E9
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 19;
					break;
				
				case 9:
					return 48;
					break;
				
				case 10:
					return 62;
					break;
			}
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 13;
					break;
				
				case 4:
					return 14;
					break;
				
				case 5:
					return 15;
					break;
				
				case 6:
					return 16;
					break;
				
				case 7:
					return 17;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 49;
					break;
				
				case 10:
					return 64;
					break;
			}
			break;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				
				case 1:
					return 22;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 24;
					break;
				
				case 4:
					return 25;
					break;
				
				case 5:
					return 26;
					break;
				
				case 6:
					return 27;
					break;
				
				case 7:
					return 28;
					break;
				
				case 8:
					return 29;
					break;
				
				case 9:
					return 50;
					break;
				
				case 10:
					return 65;
					break;
			}
			break;
		
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				
				case 1:
					return 32;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 39;
					break;
				
				case 9:
					return 51;
					break;
				
				case 10:
					return 66;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				
				case 1:
					return 53;
					break;
				
				case 2:
					return 54;
					break;
				
				case 3:
					return 55;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 57;
					break;
				
				case 6:
					return 58;
					break;
				
				case 7:
					return 59;
					break;
				
				case 8:
					return 60;
					break;
				
				case 9:
					return 61;
					break;
				
				case 10:
					return 69;
					break;
			}
			break;
		
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				
				case 1:
					return 71;
					break;
				
				case 2:
					return 72;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 75;
					break;
				
				case 6:
					return 76;
					break;
				
				case 7:
					return 77;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 80;
					break;
			}
			break;
		
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				
				case 1:
					return 90;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 92;
					break;
				
				case 4:
					return 93;
					break;
				
				case 5:
					return 94;
					break;
				
				case 6:
					return 95;
					break;
				
				case 7:
					return 96;
					break;
				
				case 8:
					return 97;
					break;
				
				case 9:
					return 98;
					break;
				
				case 10:
					return 99;
					break;
			}
			break;
		
		case 67:
			switch (iParam2)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 101;
					break;
				
				case 2:
					return 102;
					break;
				
				case 3:
					return 103;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 105;
					break;
				
				case 6:
					return 106;
					break;
				
				case 7:
					return 107;
					break;
				
				case 8:
					return 108;
					break;
				
				case 9:
					return 109;
					break;
				
				case 10:
					return 110;
					break;
			}
			break;
	}
	return 0;
}

void func_665(int iParam0, int iParam1)//Position - 0x208AA
{
	int iVar0;
	
	iVar0 = func_666(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, iVar0);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_666(int iParam0)//Position - 0x208D5
{
	if (iParam0 > 66)
	{
		return joaat("reh_p_para_bag_reh_s_01a");
	}
	else if (iParam0 > 63)
	{
		return 1762874299;
	}
	else if (iParam0 > 61)
	{
		return joaat("vw_p_para_bag_vine_s");
	}
	else if (iParam0 > 51)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	else if (iParam0 > 46)
	{
		return joaat("p_para_bag_xmas_s");
	}
	else if (iParam0 > 26)
	{
		return joaat("lts_p_para_bag_lts_s");
	}
	else if (iParam0 > 0)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	return joaat("p_parachute_s");
}

int func_667(var uParam0)//Position - 0x2095C
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_668(int iParam0, int iParam1)//Position - 0x20A14
{
	return 0;
}

bool func_669(int iParam0, int iParam1)//Position - 0x20A1D
{
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

void func_670(int iParam0, int iParam1, int iParam2)//Position - 0x20A39
{
	int iVar0;
	int iVar1;
	
	if (func_671(iParam1, iParam2, &iVar0, &iVar1))
	{
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, iVar1);
		PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, iVar0);
	}
	else
	{
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, 0);
		PLAYER::CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0);
	}
}

bool func_671(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x20A70
{
	*uParam2 = 0;
	*uParam3 = 0;
	switch (iParam1)
	{
		case 1:
			*uParam2 = joaat("xm_prop_x17_para_sp_s");
			*uParam3 = iParam0;
			break;
		
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 0;
					break;
				
				case 1:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 1;
					break;
				
				case 2:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 2;
					break;
				
				case 3:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 3;
					break;
				
				case 4:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 4;
					break;
				
				case 5:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 5;
					break;
				
				case 6:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 6;
					break;
				
				case 7:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 7;
					break;
				
				case 8:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 8;
					break;
				
				case 9:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 9;
					break;
				
				case 10:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 10;
					break;
				
				case 11:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 11;
					break;
				
				case 12:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 12;
					break;
				
				case 13:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 13;
					break;
				
				case 14:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 1;
					break;
				
				case 15:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 2;
					break;
				
				case 16:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 3;
					break;
				
				case 17:
					*uParam2 = joaat("reh_prop_reh_para_sp_s_01a");
					*uParam3 = 1;
					break;
			}
			break;
	}
	return *uParam2 != 0;
}

void func_672(bool bParam0)//Position - 0x20C2F
{
	if (bParam0)
	{
		if (!BitTest(Global_2815059.f_1797, 11))
		{
			MISC::SET_BIT(&(Global_2815059.f_1797), 11);
		}
	}
	else if (BitTest(Global_2815059.f_1797, 11))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1797), 11);
	}
}

void func_673(bool bParam0)//Position - 0x20C74
{
	if (bParam0)
	{
		if (!BitTest(Global_2815059.f_1797, 9))
		{
			MISC::SET_BIT(&(Global_2815059.f_1797), 9);
		}
	}
	else if (BitTest(Global_2815059.f_1797, 9))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1797), 9);
	}
}

void func_674()//Position - 0x20CB9
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
}

void func_675(bool bParam0)//Position - 0x20CD5
{
	var uVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
		{
			if (((!func_251(PLAYER::PLAYER_ID()) && !func_205(PLAYER::PLAYER_ID())) && !func_685(PLAYER::PLAYER_ID())) && !func_684(PLAYER::PLAYER_ID()))
			{
				if (func_249())
				{
					func_647(2, 0, 1);
					func_683();
				}
				if (func_268(func_210(func_191(PLAYER::PLAYER_ID()))))
				{
					uVar0 = func_269(2483, -1, 0);
					MISC::CLEAR_BIT(&uVar0, func_210(func_191(PLAYER::PLAYER_ID())));
					func_683();
				}
				if (func_682())
				{
					func_683();
				}
				if (func_191(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
					if (func_229(PLAYER::PLAYER_ID()))
					{
						func_681();
					}
					func_678(func_680(func_191(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
		func_676();
	}
}

void func_676()//Position - 0x20DE4
{
	if (func_677())
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 17);
	}
}

bool func_677()//Position - 0x20E06
{
	return BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 17);
}

void func_678(int iParam0)//Position - 0x20E1E
{
	int iVar0;
	
	if (Global_262145.f_9035)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_679() /*5567*/].f_681.f_4241[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_679()//Position - 0x20E81
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_680(int iParam0)//Position - 0x20E8E
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_681()//Position - 0x20EC0
{
	if (!func_677())
	{
		Global_2815059.f_6743 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 17);
	}
}

int func_682()//Position - 0x20EEE
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_683()//Position - 0x20F08
{
	if (func_682())
	{
		Global_2703735.f_833.f_16 = 1;
	}
}

int func_684(int iParam0)//Position - 0x20F21
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_685(int iParam0)//Position - 0x20F8D
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_249() && !func_245()) || func_207(PLAYER::PLAYER_ID(), 21)) || func_207(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_22(&(Global_1836844.f_13)))
		{
			if (!func_19(&(Global_1836844.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_106(&(Global_1836844.f_13));
		}
	}
	else if (BitTest(Global_1892703[iParam0 /*599*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 9);
}

void func_686(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x21029
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2815059.f_5042 = -1;
	bVar0 = (func_234(PLAYER::PLAYER_ID(), 0) && func_239(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_695(func_696(iParam0), 1);
	}
	else
	{
		func_694(iParam0, -1);
		if (func_206(PLAYER::PLAYER_ID()))
		{
			Global_1836844.f_3 = iParam0;
		}
		else
		{
			func_730(iParam0);
		}
		Global_1836844.f_4 = -1;
		if (func_206(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 5);
		}
		if (((func_249() && !func_245()) || func_207(PLAYER::PLAYER_ID(), 21)) || func_207(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 17);
		MISC::SET_BIT(&(Global_1836844.f_1), 20);
		if (func_693(iParam0))
		{
			func_692();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_691(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
		if (func_690(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1836844.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2653189)
			{
				func_461(1);
				if (func_615(0))
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_459(1);
			MISC::SET_BIT(&(Global_1836844.f_1), 12);
		}
		if (bParam5)
		{
			func_689();
			MISC::SET_BIT(&(Global_1836844.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_687(iParam0))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 21);
			}
		}
	}
	Global_2787396 = 1;
}

int func_687(int iParam0)//Position - 0x2120D
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_140(iParam0) == 1)
	{
		return 1;
	}
	if (func_688())
	{
		return 1;
	}
	return 0;
}

int func_688()//Position - 0x2127C
{
	switch (func_190())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_689()//Position - 0x212AA
{
	MISC::SET_BIT(&(Global_2815059.f_5033), 0);
}

int func_690(int iParam0)//Position - 0x212BE
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_240(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_691(float fParam0)//Position - 0x212FC
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_453())
	{
		return;
	}
	fVar0 = (Global_2815059.f_5190 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2815059.f_5191))
	{
		if (!Global_2815059.f_5191 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2815059.f_5190 = fParam0;
	Global_2815059.f_5191 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

void func_692()//Position - 0x21368
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_208 = 0;
	MISC::CLEAR_BIT(&(Global_2815059.f_4630), 1);
}

int func_693(int iParam0)//Position - 0x2138A
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_694(int iParam0, int iParam1)//Position - 0x213A4
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_268(func_210(iVar0)))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 2);
		}
	}
}

void func_695(bool bParam0, bool bParam1)//Position - 0x213FF
{
	if (bParam1)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_216, bParam0))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_216), bParam0);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_216, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_216), bParam0);
	}
}

int func_696(int iParam0)//Position - 0x2145C
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

bool func_697(char* sParam0)//Position - 0x21482
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_698()//Position - 0x21495
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_91.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar2, false);
		if (iVar4 != 0)
		{
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if (PED::IS_PED_A_PLAYER(iVar4))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_699(bool bParam0)//Position - 0x2151C
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, bParam0);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, !bParam0);
		}
	}
}

void func_700(bool bParam0, var uParam1)//Position - 0x21555
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bVar0))
		{
			*bParam0 = bVar0;
			*uParam1 = Local_91.f_256[bVar0];
		}
		bVar0++;
	}
}

void func_701()//Position - 0x21591
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1892703[iVar0 /*599*/] = -1;
	}
}

void func_702(bool bParam0)//Position - 0x215AF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_249())
		{
			if (func_869(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_869(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

void func_703(bool bParam0)//Position - 0x216A8
{
	int iVar0;
	var uVar1;
	
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 0))
		{
			Global_2727723 = func_191(PLAYER::PLAYER_ID());
			if (Global_2727723 == -1)
			{
				Global_2727723 = Global_1836844.f_4;
			}
			if (func_729(Global_2727723) == 0)
			{
				if (func_728(1) > 0)
				{
					func_727(26, -1);
				}
			}
			if (func_249())
			{
				func_647(2, 0, 1);
				func_683();
			}
			if (func_268(func_210(func_191(PLAYER::PLAYER_ID()))))
			{
				uVar1 = func_269(2483, -1, 0);
				MISC::CLEAR_BIT(&uVar1, func_210(func_191(PLAYER::PLAYER_ID())));
				func_683();
			}
			if (func_682())
			{
				func_683();
			}
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 0);
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 0))
	{
		if ((!func_228() && !func_726()) && !func_725())
		{
			Global_2727723 = -1;
			func_636(26, -1);
		}
		else if (func_729(Global_2727723) == 0)
		{
			iVar0 = func_706(1);
			if (iVar0 > 0)
			{
				func_704(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_500(1934, 1, -1);
				func_704(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_638(26, -1))
		{
			Global_2727723 = -1;
			func_636(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 0);
	}
}

void func_704(int iParam0, int iParam1)//Position - 0x2180A
{
	int iVar0;
	
	iVar0 = func_484(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_705(iParam0))
	{
		func_482(iParam0, iVar0);
	}
	else
	{
		func_486(iParam0, iVar0);
	}
}

int func_705(int iParam0)//Position - 0x2183E
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_706(int iParam0)//Position - 0x218C2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = func_719();
	if (Global_2726597 == 0)
	{
		return 0;
	}
	if (func_725())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_718() || func_716()))
		{
			Global_2725407 = 1;
		}
	}
	Global_2726597 = 0;
	if (Global_1577884)
	{
		iVar0 = 1;
	}
	if (Global_2725407)
	{
		iVar0 = 1;
	}
	if (Global_2725406)
	{
		iVar0 = 1;
	}
	if (func_566(Global_112414.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2725346)
	{
		iVar0 = 1;
	}
	if (func_715(512))
	{
		iVar0 = 1;
	}
	if (func_714(128))
	{
		iVar0 = 1;
	}
	if (Global_1577908 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_169(0))
	{
		iVar0 = 0;
	}
	if (Global_2725901)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_712())
		{
			if (Global_4718592.f_117079 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_711())
	{
		iVar0 = 0;
	}
	if ((Global_2725407 || Global_2725406) || Global_1577884)
	{
		if (func_716())
		{
			iVar0 = 0;
		}
	}
	if (Global_1837301)
	{
		iVar0 = 2;
	}
	Global_2725901 = 0;
	Global_2725406 = 0;
	Global_2725407 = 0;
	Global_1577884 = 0;
	Global_2725346 = 0;
	func_709(&(Global_112414.f_1), 32);
	func_708(512);
	func_707(128);
	Global_1837301 = 0;
	return iVar0;
}

void func_707(int iParam0)//Position - 0x21A28
{
	Global_112471 = (Global_112471 - (Global_112471 && iParam0));
}

void func_708(int iParam0)//Position - 0x21A40
{
	Global_112472 = (Global_112472 - (Global_112472 && iParam0));
}

void func_709(var uParam0, int iParam1)//Position - 0x21A58
{
	func_710(uParam0, iParam1);
}

void func_710(var uParam0, var uParam1)//Position - 0x21A68
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_711()//Position - 0x21A7D
{
	if (((Global_1836602 || Global_1836572) || func_16(PLAYER::PLAYER_ID(), 0)) || func_604())
	{
		return 1;
	}
	return 0;
}

int func_712()//Position - 0x21AB4
{
	switch (func_713())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_713()//Position - 0x21AEE
{
	return Global_2715699.f_1.f_2822;
}

bool func_714(int iParam0)//Position - 0x21AFF
{
	return (Global_112471 && iParam0) != 0;
}

bool func_715(int iParam0)//Position - 0x21B10
{
	return (Global_112472 && iParam0) != 0;
}

int func_716()//Position - 0x21B21
{
	if (func_729(Global_2727723))
	{
		return 0;
	}
	if (func_717(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_717(int iParam0, int iParam1)//Position - 0x21B4A
{
	if (Global_1892703[iParam0 /*599*/] == iParam1)
	{
		return func_240(iParam0);
	}
	return 0;
}

int func_718()//Position - 0x21B6A
{
	if (func_729(Global_2727723))
	{
		return 0;
	}
	if (func_240(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_719()//Position - 0x21B91
{
	if (Global_1577908 == 1 && (func_723() || func_720()))
	{
		return 1;
	}
	return 0;
}

int func_720()//Position - 0x21BBA
{
	if (((func_597() || func_595()) || func_593()) || func_721(Global_4718592.f_116524))
	{
		return 1;
	}
	return 0;
}

int func_721(int iParam0)//Position - 0x21BF6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_722(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_722(int iParam0)//Position - 0x21C20
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32760[iParam0];
	}
	return -1;
}

int func_723()//Position - 0x21C3D
{
	return func_724(Global_4718592.f_116524);
}

int func_724(int iParam0)//Position - 0x21C53
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31710[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_725()//Position - 0x21C82
{
	return BitTest(Global_1574589, 0);
}

bool func_726()//Position - 0x21C90
{
	return Global_1575025;
}

void func_727(bool bParam0, int iParam1)//Position - 0x21C9C
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (bParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_637(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				MISC::SET_BIT(&iVar0, bParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_728(int iParam0)//Position - 0x21CF6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = func_719();
	if (Global_1577908 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_169(0))
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_712())
		{
			if (Global_4718592.f_117079 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_711())
	{
		iVar0 = 0;
	}
	Global_2726597 = 1;
	return iVar0;
}

int func_729(int iParam0)//Position - 0x21D66
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11861)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11863)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11860)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11864)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11865)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11866)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11862)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11867)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11868)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11869)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11870)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

void func_730(int iParam0)//Position - 0x21E82
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/] = iParam0;
}

void func_731(int iParam0)//Position - 0x21E97
{
	Global_2726836 = iParam0;
}

void func_732(int iParam0)//Position - 0x21EA5
{
	if (func_204())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!BitTest(uLocal_95, 0))
			{
				if ((((func_734(60000) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_420()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_437(0, 1, 1, 1))
				{
					if (!func_768())
					{
						func_733("UW_HELP1", func_646(), func_645(1), 30000);
					}
					else
					{
						func_733("UW_HELP1C", func_646(), func_645(1), 30000);
					}
					func_435(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
					MISC::SET_BIT(&uLocal_95, 0);
				}
			}
			break;
	}
}

void func_733(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x21F54
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

bool func_734(int iParam0)//Position - 0x21F77
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2676209, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_735()//Position - 0x21F92
{
	bool bVar0;
	
	MISC::CLEAR_BIT(&uLocal_96, 15);
	bVar0 = false;
	while (bVar0 < 4)
	{
		func_736(bVar0);
		bVar0++;
	}
	if (BitTest(uLocal_96, 15))
	{
		if (!BitTest(Global_1836844.f_1, 15))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 15);
		}
	}
	else if (BitTest(Global_1836844.f_1, 15))
	{
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 15);
	}
}

void func_736(bool bParam0)//Position - 0x21FF8
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[bParam0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), false))
		{
			if (Local_91.f_241 == 0)
			{
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), false))
		{
			if (!func_204())
			{
				if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!BitTest(uLocal_96, 15))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]))
							{
								MISC::SET_BIT(&uLocal_96, 15);
							}
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), false))
						{
							if (func_740("UW_HELP2", func_646()) || func_740("UW_HELP2C", func_646()))
							{
								HUD::CLEAR_HELP(true);
							}
							if (!func_426(PLAYER::PLAYER_ID()))
							{
								func_651(1);
							}
							iVar0 = func_739(PLAYER::PLAYER_PED_ID(), 0);
							if (func_644("UW_HELP1", func_646(), func_645(1)) || func_644("UW_HELP1C", func_646(), func_645(1)))
							{
								HUD::CLEAR_HELP(true);
							}
							if (Local_91.f_463 != -1)
							{
								if (iVar0 > (Local_91.f_463 - 2))
								{
									iVar0 = (Local_91.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar0 + 1));
							MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
							Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = bParam0;
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, true);
							func_196();
							iLocal_579 = iVar0;
						}
						else if (Local_91.f_241 == 0)
						{
							if (!BitTest(uLocal_95, 1))
							{
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), true)) < 2500f)
									{
										if (func_437(0, 1, 1, 1))
										{
											if (!func_768())
											{
												func_738("UW_HELP2", func_646(), 30000);
											}
											else
											{
												func_738("UW_HELP2C", func_646(), 30000);
											}
											func_435(1);
											MISC::SET_BIT(&uLocal_95, 1);
										}
									}
								}
							}
							if (!func_249())
							{
								if (BitTest(uLocal_96, 2))
								{
									MISC::CLEAR_BIT(&uLocal_96, 2);
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									if (!BitTest(uLocal_95, 4))
									{
										if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
										{
											MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), true)) < 2500f)
											{
												if (func_437(0, 1, 1, 1))
												{
													if (!func_768())
													{
														func_436("UW_COPS", 30000);
													}
													else
													{
														func_436("UW_COPSC", 30000);
													}
													func_435(1);
													MISC::SET_BIT(&uLocal_95, 4);
												}
											}
										}
									}
									else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), true)) > 10000f)
									{
										MISC::CLEAR_BIT(&uLocal_95, 4);
									}
								}
								else
								{
									if (BitTest(uLocal_95, 4))
									{
										MISC::CLEAR_BIT(&uLocal_95, 4);
									}
									if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
									{
										MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
								{
									MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
								}
								if (!BitTest(uLocal_96, 2))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), true)) < 2500f)
									{
										if (func_437(0, 1, 1, 1))
										{
											if (!func_768())
											{
												func_436("UW_PASSMD", 30000);
											}
											else
											{
												func_436("UW_PASSMD", 30000);
											}
											func_435(1);
											MISC::SET_BIT(&uLocal_96, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), false))
							{
								iVar2 = 0;
								while (iVar2 < Local_91.f_28)
								{
									if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, (0 + iVar2)))
									{
										func_9();
										MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0))
								{
									MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
								}
								if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 != -1)
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
								}
								if (func_697("UW_TIMEL"))
								{
									HUD::CLEAR_HELP(true);
								}
								if (func_697("UW_TIMELA"))
								{
									HUD::CLEAR_HELP(true);
								}
								if (func_426(PLAYER::PLAYER_ID()))
								{
									func_651(0);
								}
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
							}
							else
							{
								if (Local_91.f_241 == 0 && !BitTest(Local_91.f_3, 4))
								{
									iVar0 = func_739(PLAYER::PLAYER_PED_ID(), 0);
									if (Local_91.f_463 != -1)
									{
										if (iVar0 > (Local_91.f_463 - 2))
										{
											iVar0 = (Local_91.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_579)
									{
										MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
										MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iLocal_579 + 1));
									}
								}
								bVar1 = false;
								if (func_270())
								{
									if (Local_91.f_413 > -1)
									{
										iVar3 = (Local_91.f_413 - func_126(&(Local_91.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_737(bVar1);
								if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0])) == joaat("rhino"))
								{
									VEHICLE::_DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]));
								}
								if (!func_22(&uLocal_109))
								{
									func_20(&uLocal_109, 0, 0);
								}
								else if (func_19(&uLocal_109, 2000, 0))
								{
									if (BitTest(Local_91.f_3, 9) || !func_768())
									{
										if (func_697("UW_MINV"))
										{
										}
										if (!BitTest(uLocal_95, 5))
										{
											if (Local_91.f_28 > 1 || (Local_91.f_28 == 1 && func_112() > 1))
											{
												if (func_22(&(Local_91.f_326)))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														if (func_112() > 1)
														{
															func_436("UW_TIMELA", 30000);
														}
														else
														{
															func_436("UW_TIMEL", 30000);
														}
														func_435(1);
														MISC::SET_BIT(&uLocal_95, 5);
													}
												}
											}
										}
									}
									else if (func_768())
									{
										if (!BitTest(Local_91.f_3, 9))
										{
											if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0])) != joaat("valkyrie"))
											{
												if (!BitTest(uLocal_95, 14))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														func_436("UW_MINV", 30000);
														func_435(1);
														MISC::SET_BIT(&uLocal_95, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_91.f_241 == 0)
					{
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0])) == joaat("valkyrie"))
						{
							if (!func_697("UW_VALK") && !func_697("UW_VALKC"))
							{
								HUD::CLEAR_ALL_HELP_MESSAGES();
								if (BitTest(uLocal_95, 8))
								{
									MISC::CLEAR_BIT(&uLocal_95, 8);
								}
							}
							if (!BitTest(uLocal_95, 8))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									iVar6 = 0;
									iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), (iVar5 - 1), false))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_768())
										{
											func_436("UW_VALK", 30000);
										}
										else
										{
											func_436("UW_VALKC", 30000);
										}
										func_435(1);
										MISC::SET_BIT(&uLocal_95, 8);
									}
									if (!BitTest(uLocal_95, 8))
									{
										if (func_768())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != bParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar7]))
														{
															if (func_109(Local_91.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_91.f_7[iVar7]), (iVar5 - 1), false))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_436("UW_VALKC", 30000);
												func_435(1);
												MISC::SET_BIT(&uLocal_95, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_91.f_241 == 1)
					{
						if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0))
						{
							if (!BitTest(uLocal_95, 6))
							{
								if (func_109(Local_91.f_7[bParam0]))
								{
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bParam0])))
										{
											if (!BitTest(uLocal_95, 7))
											{
												if ((PAD::IS_CONTROL_JUST_PRESSED(0, 75) || PAD::IS_CONTROL_PRESSED(0, 75)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75))
												{
													MISC::SET_BIT(&uLocal_95, 7);
												}
											}
											if (BitTest(uLocal_95, 7))
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
												{
													if (func_768())
													{
														func_436("UW_EXITVC", 30000);
													}
													else
													{
														func_436("UW_EXITV", 30000);
													}
													func_435(1);
													MISC::SET_BIT(&uLocal_95, 6);
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
			else
			{
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[iVar10]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_91.f_7[iVar10]), false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[iVar10]), false))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_268(17))
					{
						iVar9 = func_269(2483, -1, 0);
						MISC::CLEAR_BIT(&iVar9, 17);
						func_494(2483, iVar9, -1, 1, 0);
						func_683();
						if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
						{
							MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
					}
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
					{
						MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
					}
				}
				if (!BitTest(uLocal_96, 14))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_109(Local_91.f_7[bParam0]))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), true)) < 2500f)
							{
								if (func_437(0, 1, 1, 1))
								{
									if (!func_258(129, 0, 0))
									{
										if (!func_768())
										{
											func_436("UW_TUT", -1);
										}
										else
										{
											func_436("UW_TUTC", -1);
										}
										func_435(1);
										MISC::SET_BIT(&uLocal_96, 14);
									}
									else
									{
										if (!func_768())
										{
											func_436("UW_HIDE", -1);
										}
										else
										{
											func_436("UW_HIDEC", -1);
										}
										func_435(1);
										MISC::SET_BIT(&uLocal_96, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_869(PLAYER::PLAYER_ID(), 1, 1) && Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (!BitTest(Global_2815059.f_4662, 1))
				{
					MISC::SET_BIT(&(Global_2815059.f_4662), 1);
				}
			}
			else if (BitTest(Global_2815059.f_4662, 1))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4662), 1);
			}
		}
	}
}

void func_737(bool bParam0)//Position - 0x22AE7
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 92, true);
	PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	PAD::DISABLE_CONTROL_ACTION(0, 91, true);
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 99, true);
	PAD::DISABLE_CONTROL_ACTION(0, 100, true);
	PAD::DISABLE_CONTROL_ACTION(0, 65, true);
	PAD::DISABLE_CONTROL_ACTION(0, 105, true);
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
	PAD::DISABLE_CONTROL_ACTION(0, 51, true);
	PAD::DISABLE_CONTROL_ACTION(0, 47, true);
	PAD::DISABLE_CONTROL_ACTION(0, 24, true);
	PAD::DISABLE_CONTROL_ACTION(0, 257, true);
}

void func_738(char* sParam0, char* sParam1, int iParam2)//Position - 0x22C1D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam2);
}

int func_739(int iParam0, bool bParam1)//Position - 0x22C3A
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

bool func_740(char* sParam0, char* sParam1)//Position - 0x22CBF
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_741()//Position - 0x22CD8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_91.f_7[iVar0]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				PHYSICS::_0x15F944730C832252(iVar1, true);
			}
		}
		iVar0++;
	}
}

void func_742(struct<3> Param0, int iParam1)//Position - 0x22D3D
{
	Global_2653193 = { Param0 };
	Global_2653196 = 1;
	Global_2653197 = iParam1;
}

void func_743()//Position - 0x22D5A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_759(iVar0);
				break;
			
			case 174:
				func_744(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_744(int iParam0)//Position - 0x22DA6
{
	int iVar0;
	
	SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case -1214381365:
			func_758(iParam0);
			break;
		
		case -196398508:
			func_757(iParam0);
			break;
		
		case -177677675:
			func_756(iParam0);
			break;
		
		case -902037949:
			func_755(iParam0);
			break;
		
		case 474913336:
			func_754(iParam0);
			break;
		
		case -215033241:
			func_751(iParam0);
			break;
		
		case 143745567:
			func_745(iParam0);
			break;
	}
}

void func_745(int iParam0)//Position - 0x22E29
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		bVar4 = Var0.f_2;
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_73[bVar4]))
		{
			return;
		}
		if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar4))
		{
			if (!BitTest(Local_91.f_271, bVar4))
			{
				if (func_100(bVar4))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]), false))
					{
						if (NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (NETWORK::_NETWORK_GET_ASSISTED_DAMAGE_OF_DEAD_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]), &uVar3))
					{
						bVar6 = true;
					}
				}
				else if (!func_768())
				{
					if (Local_91.f_465[0 /*4*/].f_1 > 0)
					{
						iVar7 = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[0 /*4*/].f_2);
						if (iVar7 != func_5())
						{
							if (iVar7 == PLAYER::PLAYER_ID())
							{
								bVar6 = true;
							}
						}
					}
					else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[0]))
					{
						if (func_109(Local_91.f_7[0]))
						{
							iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[0]), -1, false);
							if (iVar9 != 0)
							{
								if (PED::IS_PED_A_PLAYER(iVar9))
								{
									iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
									if (iVar8 == PLAYER::PLAYER_ID())
									{
										bVar6 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar6)
		{
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
			{
				iVar2 = func_750();
				iVar10 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]));
				iVar5 = bVar4 * 4;
				if (func_749(iVar10))
				{
					iVar1 = func_42(iVar10);
					bVar12 = iVar5;
					while (bVar12 <= (iVar5 + (iVar1 - 1)))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar12]) && !BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar12)], func_90(bVar12)))
						{
							iVar11++;
							MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar12)]), func_90(bVar12));
						}
						bVar12++;
					}
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar11);
					iVar2 = (iVar2 * iVar11);
				}
				else
				{
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
				}
				if (Local_92.f_11 == 0)
				{
					Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
				}
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
				{
					Local_92.f_7 = (Local_92.f_7 + iVar2);
					func_747(0, "", -875716015, 153786435, iVar2, 1, -1, 0);
					func_746();
				}
			}
			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar4);
		}
	}
}

void func_746()//Position - 0x230B9
{
	if (!func_22(&uLocal_568) || (func_22(&uLocal_568) && func_19(&uLocal_568, 2000, 0)))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", false);
		func_106(&uLocal_568);
		func_20(&uLocal_568, 0, 0);
	}
}

var func_747(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x23107
{
	return func_479(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_748()//Position - 0x23123
{
	if (func_768())
	{
		return Global_262145.f_11786;
	}
	return Global_262145.f_11725;
}

bool func_749(int iParam0)//Position - 0x23146
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_750()//Position - 0x23180
{
	if (func_768())
	{
		return Global_262145.f_11785;
	}
	return Global_262145.f_11724;
}

void func_751(int iParam0)//Position - 0x231A3
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		bVar4 = Var0.f_2;
		if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar4))
		{
			if (!BitTest(Local_91.f_271, bVar4))
			{
				if (func_753(bVar4))
				{
					bVar6 = true;
				}
				else if (!func_752(bVar4))
				{
					if (func_100(bVar4))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]), false))
						{
							if (NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]), &uVar3))
							{
								bVar6 = true;
							}
						}
						else if (NETWORK::_NETWORK_GET_ASSISTED_DAMAGE_OF_DEAD_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (!func_768())
					{
						if (Local_91.f_465[0 /*4*/].f_1 > 0)
						{
							iVar7 = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[0 /*4*/].f_2);
							if (iVar7 != func_5())
							{
								if (iVar7 == PLAYER::PLAYER_ID())
								{
									bVar6 = true;
								}
							}
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[0]))
						{
							if (func_109(Local_91.f_7[0]))
							{
								iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[0]), -1, false);
								if (iVar9 != 0)
								{
									if (PED::IS_PED_A_PLAYER(iVar9))
									{
										iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
										if (iVar8 == PLAYER::PLAYER_ID())
										{
											bVar6 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar6)
				{
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						iVar1 = func_42(joaat("savage"));
						iVar5 = bVar4 * 4;
						iVar11 = 0;
						bVar10 = iVar5;
						while (bVar10 <= (iVar5 + (iVar1 - 1)))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar10]) && !BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10)], func_90(bVar10)))
							{
								iVar11++;
								MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10)]), func_90(bVar10));
							}
							bVar10++;
						}
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar11);
						iVar2 = (iVar2 * iVar11);
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
						{
							iVar2 = func_750();
							iVar2 = (iVar2 * iVar1);
							Local_92.f_7 = (Local_92.f_7 + iVar2);
							func_747(0, "", -875716015, 153786435, iVar2, 1, -1, 0);
							func_746();
							if (Local_92.f_11 == 0)
							{
								Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
							}
						}
						MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar4);
					}
				}
			}
		}
	}
}

int func_752(bool bParam0)//Position - 0x23416
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_94[iVar0 /*18*/].f_11[bParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_753(bool bParam0)//Position - 0x23456
{
	int iVar0;
	
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_94[iVar0 /*18*/].f_11[bParam0] > Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_754(int iParam0)//Position - 0x234C4
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("am_kill_list", -1, 0) != func_5())
		{
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			MISC::SET_BIT(&(Local_91.f_464), Var0.f_2);
		}
	}
}

void func_755(int iParam0)//Position - 0x23501
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		MISC::SET_BIT(&uLocal_555, Var0.f_2);
	}
}

void func_756(int iParam0)//Position - 0x23524
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		MISC::SET_BIT(&uLocal_556, Var0.f_2);
	}
}

void func_757(int iParam0)//Position - 0x23547
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(Var0.f_2)], func_90(Var0.f_2)))
		{
			MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(Var0.f_2)]), func_90(Var0.f_2));
		}
	}
}

void func_758(int iParam0)//Position - 0x235A1
{
	struct<3> Var0;
	bool bVar1;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		bVar1 = Var0.f_2;
		if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar1))
		{
			MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
		}
	}
}

void func_759(int iParam0)//Position - 0x235E1
{
	struct<6> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	var uVar12;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar1))
			{
				if (!BitTest(Local_91.f_271, bVar1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_73[bVar1]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_91.f_73[bVar1])))
								{
									if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_VEH(Local_91.f_73[bVar1]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
										{
											if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
											{
												if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
												{
													if (Var0.f_5)
													{
														iVar4 = ENTITY::GET_ENTITY_MODEL(Var0.f_0);
														if (Local_91.f_27 == joaat("hydra"))
														{
															if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
															{
																iVar7 = func_750();
																if (func_749(iVar4))
																{
																	iVar2 = func_42(iVar4);
																	Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
																	iVar7 = (iVar7 * iVar2);
																}
																else
																{
																	Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																}
																if (Local_92.f_11 == 0)
																{
																	Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																}
																if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																{
																	Local_92.f_7 = (Local_92.f_7 + iVar7);
																	func_747(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																	func_746();
																}
															}
															MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
														}
														else if (iVar4 == joaat("buzzard"))
														{
															iVar9 = -1;
															iVar9 = -1;
															while (iVar9 <= 3)
															{
																iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_73[bVar1]), iVar9, false);
																if (iVar6 != 0)
																{
																	iVar8 = func_760(iVar6);
																	if (iVar8 > -1)
																	{
																		if (!BitTest(Local_91.f_272[func_91(iVar8)], func_90(iVar8)))
																		{
																			if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar8)], func_90(iVar8)))
																			{
																				MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar8)]), func_90(iVar8));
																				iVar7 = func_750();
																				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																				{
																					Local_92.f_7 = (Local_92.f_7 + iVar7);
																					func_747(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																					func_746();
																				}
																				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_91.f_48[iVar8])))
																				{
																					func_92(&(Local_103[iVar8 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar9++;
															}
															MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
														}
													}
													else if (!func_109(Local_91.f_73[bVar1]))
													{
													}
												}
												else if (Var0.f_5)
												{
													if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
													{
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
			}
			bVar1++;
		}
		if (Local_91.f_27 != joaat("hydra"))
		{
			bVar1 = false;
			while (bVar1 <= 19)
			{
				if (!BitTest(Local_91.f_272[func_91(bVar1)], func_90(bVar1)))
				{
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar1)], func_90(bVar1)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar1]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_91.f_48[bVar1])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_PED(Local_91.f_48[bVar1]))
										{
											if (Var0.f_5)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar5))
														{
															if (iVar5 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_5)
																{
																	iVar7 = func_750();
																	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																		{
																			func_747(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																			Local_92.f_7 = (Local_92.f_7 + iVar7);
																			func_746();
																		}
																	}
																	if (Local_92.f_11 == 0)
																	{
																		Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																	}
																	MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar1)]), func_90(bVar1));
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
						}
					}
				}
				if (bVar1 < 5)
				{
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar1))
					{
						if (!BitTest(Local_91.f_271, bVar1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_73[bVar1]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_91.f_73[bVar1])))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_VEH(Local_91.f_73[bVar1]))
											{
												if (ENTITY::GET_ENTITY_MODEL(Var0.f_0) == joaat("savage"))
												{
													if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar1)], func_90(bVar1)))
													{
														if (Var0.f_5)
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar5))
																	{
																		if (iVar5 == PLAYER::PLAYER_PED_ID())
																		{
																			if (Var0.f_5)
																			{
																				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																				{
																					iVar2 = func_42(joaat("savage"));
																					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
																					iVar7 = func_750();
																					iVar7 = (iVar7 * iVar2);
																					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																					{
																						func_747(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																						Local_92.f_7 = (Local_92.f_7 + iVar7);
																						func_746();
																						if (Local_92.f_11 == 0)
																						{
																							Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																						}
																					}
																					bVar10 = bVar1 * 4;
																					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10)]), func_90(bVar10));
																					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10 + 1)]), func_90(bVar10 + 1));
																					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10 + 2)]), func_90(bVar10 + 2));
																					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10 + 3)]), func_90(bVar10 + 3));
																					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
																				}
																			}
																		}
																	}
																	else if (func_753(bVar1))
																	{
																		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																		{
																			iVar2 = func_42(joaat("savage"));
																			Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
																			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																			{
																				iVar7 = func_750();
																				iVar7 = (iVar7 * iVar2);
																				Local_92.f_7 = (Local_92.f_7 + iVar7);
																				func_747(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																				func_746();
																				if (Local_92.f_11 == 0)
																				{
																					Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																				}
																			}
																			bVar10 = bVar1 * 4;
																			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10)]), func_90(bVar10));
																			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10 + 1)]), func_90(bVar10 + 1));
																			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10 + 2)]), func_90(bVar10 + 2));
																			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10 + 3)]), func_90(bVar10 + 3));
																			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
																		}
																	}
																	else if (func_752(bVar1))
																	{
																	}
																	else if (NETWORK::_NETWORK_GET_ASSISTED_DAMAGE_OF_DEAD_ENTITY(iVar11, Var0.f_0, &uVar12))
																	{
																		if (iVar11 == PLAYER::PLAYER_ID())
																		{
																			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																			{
																				iVar2 = func_42(joaat("savage"));
																				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
																				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																				{
																					iVar7 = func_750();
																					iVar7 = (iVar7 * iVar2);
																					Local_92.f_7 = (Local_92.f_7 + iVar7);
																					func_747(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																					func_746();
																					if (Local_92.f_11 == 0)
																					{
																						Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																					}
																				}
																				bVar10 = bVar1 * 4;
																				MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10)]), func_90(bVar10));
																				MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10 + 1)]), func_90(bVar10 + 1));
																				MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10 + 2)]), func_90(bVar10 + 2));
																				MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar10 + 3)]), func_90(bVar10 + 3));
																				MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar5))
																	{
																		if (iVar5 == PLAYER::PLAYER_PED_ID())
																		{
																			iVar3 = NETWORK::GET_CLOUD_TIME_AS_INT();
																			Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bVar1] = iVar3;
																		}
																	}
																}
															}
															if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), false))
															{
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
					}
				}
				bVar1++;
			}
			bVar1 = 20;
			while (bVar1 <= 23)
			{
				if (!BitTest(Local_91.f_272[func_91(bVar1)], func_90(bVar1)))
				{
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar1)], func_90(bVar1)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar1]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_91.f_48[bVar1])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_PED(Local_91.f_48[bVar1]))
										{
											if (Var0.f_5)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar5))
														{
															if (iVar5 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_5)
																{
																	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																		{
																			iVar7 = func_750();
																			Local_92.f_7 = (Local_92.f_7 + iVar7);
																			if (Local_92.f_11 == 0)
																			{
																				Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																			}
																			func_747(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																			func_746();
																		}
																	}
																	MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar1)]), func_90(bVar1));
																}
															}
														}
													}
												}
												else
												{
													MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar1)]), func_90(bVar1));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar1]))
				{
				}
				bVar1++;
			}
		}
	}
}

int func_760(int iParam0)//Position - 0x240C4
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar1]))
			{
				if (NETWORK::NET_TO_PED(Local_91.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_761()//Position - 0x2410E
{
	int iVar0;
	int iVar1;
	
	if (Local_91.f_27 != joaat("hydra"))
	{
		if (iLocal_581 == 0)
		{
			iLocal_581 = 20;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iLocal_581]))
		{
			if (!func_31(Local_91.f_48[iLocal_581]))
			{
				iVar0 = NETWORK::_NETWORK_GET_ENTITY_NET_SCRIPT_ID(NETWORK::NET_TO_PED(Local_91.f_48[iLocal_581]));
				if (iLocal_582[iLocal_581] != iVar0)
				{
					iLocal_582[iLocal_581] = iVar0;
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_91.f_48[iLocal_581], true);
				}
			}
		}
		iLocal_581++;
		if (iLocal_581 == 23)
		{
			iLocal_581 = 20;
		}
	}
	if (Local_91.f_27 != joaat("hydra") && Local_91.f_27 != joaat("rhino"))
	{
		if (!bLocal_585)
		{
			if (func_98() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_73[iVar1]))
					{
						if (func_109(Local_91.f_73[iVar1]))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[iVar1])) == joaat("savage"))
							{
								NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_91.f_73[iVar1], true);
								bLocal_585 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_73[iLocal_583]))
	{
		if (func_109(Local_91.f_73[iLocal_583]))
		{
			iVar0 = NETWORK::_NETWORK_GET_ENTITY_NET_SCRIPT_ID(NETWORK::NET_TO_PED(Local_91.f_73[iLocal_583]));
			if (iLocal_584[iLocal_583] != iVar0)
			{
				iLocal_584[iLocal_583] = iVar0;
				if (!bLocal_585)
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_91.f_73[iLocal_583], true);
				}
			}
		}
	}
	iLocal_583++;
	if (iLocal_583 == 5)
	{
		iLocal_583 = 0;
	}
}

void func_762()//Position - 0x24295
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar9 = -1;
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (BitTest(uLocal_557, bVar0))
		{
			if (Local_91.f_85[bVar0] != 2)
			{
				MISC::CLEAR_BIT(&uLocal_557, bVar0);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar0]))
		{
			func_766(bVar0);
			if (!func_31(Local_91.f_48[bVar0]))
			{
				switch (Local_91.f_85[bVar0])
				{
					case 1:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_48[bVar0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), false))
							{
								iVar2 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), false);
								iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
								if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), -1273030092) != 0)
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_91.f_48[bVar0]))
										{
											iVar5 = func_27();
											if (iVar5 != func_5())
											{
												iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
												if (!PED::IS_PED_INJURED(iVar6))
												{
													if (func_26(iVar2, iVar6, 1) > 250f)
													{
														Var3 = { ENTITY::GET_ENTITY_COORDS(iVar6, true) };
														TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), iVar2, 0, iVar6, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar1))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_91.f_48[bVar0]))
									{
										iVar11 = 1;
										iVar10 = (bVar0 / 4);
									}
									if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), -1273030092) != 0) || ((iVar11 && iVar10 < 5) && iLocal_97[iVar10] != Local_91.f_110[iVar10]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_91.f_48[bVar0]))
										{
											iVar9 = Local_91.f_110[iVar10];
											if (iVar9 > -1)
											{
												iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar9);
												if (iVar5 != func_5())
												{
													iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
													if (!PED::IS_PED_INJURED(iVar6))
													{
														Var3 = { ENTITY::GET_ENTITY_COORDS(iVar6, true) };
														TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), iVar2, 0, iVar6, Var3, 4, 50f, 5f, -1f, 1.401298E-43f, 7.006492E-44f, 1);
														if (iLocal_97[iVar10] != Local_91.f_110[iVar10])
														{
															iLocal_97[iVar10] = Local_91.f_110[iVar10];
														}
													}
												}
											}
										}
									}
								}
								else if (((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), -1273030092) != 0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), 1306903184) != 0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), 1306903184) != 1)
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_91.f_48[bVar0]))
									{
										iVar5 = func_27();
										if (iVar5 != func_5())
										{
											iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
											if (!PED::IS_PED_INJURED(iVar6))
											{
												fVar7 = func_26(iVar2, iVar6, 1);
												if (fVar7 > 500f)
												{
													TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), ENTITY::GET_ENTITY_COORDS(iVar6, true), 2f, iVar2, true, 786469, -1f, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar7 > 250f)
												{
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), iVar2, iVar6, 4, 30f, 786469, 5f, 5f, true);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_48[bVar0]))
						{
							if (!func_23())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), -1442466670) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), -1442466670) != 0)
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), false))
									{
										if (!BitTest(uLocal_557, bVar0))
										{
											iVar8 = func_765(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), 1133084672);
											if (iVar8 > -1)
											{
												TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), 299f, 0);
											}
											else if (!BitTest(uLocal_557, bVar0))
											{
												func_764(bVar0, func_104(1));
												MISC::SET_BIT(&uLocal_557, bVar0);
											}
										}
									}
									else
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), -251125078) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), -251125078) != 0)
						{
							Var4 = { func_763() };
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]));
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), true);
							TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), Var4, 10000f, 999999, false, false);
						}
						break;
					}
				}
		}
		bVar0++;
	}
}

Vector3 func_763()//Position - 0x247B4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[iVar0]), false);
		}
		iVar0++;
	}
	return Local_91.f_30[0 /*3*/];
}

void func_764(bool bParam0, int iParam1)//Position - 0x247FA
{
	struct<3> Var0;
	
	Var0.f_0 = 474913336;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam1);
	}
}

int func_765(int iParam0, float fParam1)//Position - 0x2482C
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	
	iVar0 = -1;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar3]))
		{
			if (func_109(Local_91.f_7[iVar3]))
			{
				iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[iVar3]), -1, false);
				if (!PED::IS_PED_INJURED(iVar5))
				{
					if (PED::IS_PED_A_PLAYER(iVar5))
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[iVar3]), true) };
						fVar2 = func_539(iParam0, Var4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_766(bool bParam0)//Position - 0x248D1
{
	int iVar0;
	
	return;
	if (!func_31(Local_91.f_48[bParam0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_48[bParam0]))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bParam0])))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_91.f_48[bParam0]), false);
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_48[bParam0]), 5, 0);
					}
				}
			}
		}
	}
}

void func_767(struct<3> Param0)//Position - 0x2495B
{
	Global_1836844.f_6 = { Param0 };
}

bool func_768()//Position - 0x2496F
{
	return BitTest(Local_91.f_3, 8);
}

void func_769(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2497E
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_770("kwUfKUus6EuQyNSL8KpY-w");
					func_770("yMTOFLfO2UKwzKrmgPP7kg");
					func_770("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_770("tP5HSeCA0UiHnkRzakdO2Q");
					func_770("uEkrqoerQEmQ0uZRtp4rkw");
					func_770("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_770("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_770("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_770("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_770("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_770("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_770("uEkrqoerQEmQ0uZRtp4rkw");
					func_770("92t91kL3Wkqvl2Kc82cNSA");
					func_770("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_770("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_770("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_770("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_770("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_770("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_770("fOfm7nzMLkav0ldcSCNAzA");
					func_770("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_770("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_770("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_770("Ma78E44OMkGfYPmCPZXUNA");
					func_770("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_770("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_770("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_770("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_770("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_770("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_770("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_770("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_770("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_770("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_770("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_770("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_770("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_770("fOfm7nzMLkav0ldcSCNAzA");
							func_770("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_770("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_770("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_770("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_770("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_770("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_770("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_770("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_770("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_770("fOfm7nzMLkav0ldcSCNAzA");
							func_770("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_770("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_770("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_770("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_770("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_770("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_770("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_770("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_770("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_770("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_770("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_770("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_770("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_770("aGBjo2rKi0yMDLl3a2ATGA");
									func_770("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_770("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_770("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_770("f2lnL6wZPkGWUowu0yLm1Q");
									func_770("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_770("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_770("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_770("W-OJzHlM-0ym9PsIASYZtw");
									func_770("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_770("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_770("TjGz31AMYE6bGCjAIitu6w");
									func_770("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_770("QmlvLMLCwkOvoZlkAstYxw");
									func_770("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_770("BktATxH9R0Wp2x0kWSbqjw");
									func_770("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_770("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_770("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_770("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_770("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_770("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_770("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_770("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_770("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_770("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_770("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_770(char* sParam0)//Position - 0x2510C
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		if (BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
		{
			if (func_771(&(Global_2621865[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!BitTest(Global_2621865[iVar1 /*26*/].f_13, 26))
				{
					MISC::SET_BIT(&(Global_2621865[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_771(var uParam0)//Position - 0x2518A
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_150(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_772(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_772(var uParam0)//Position - 0x251F1
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_150(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_177589[iVar1 /*13*/];
		
		case 62:
			return Global_998606.f_9405[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

void func_773()//Position - 0x25268
{
	bool bVar0;
	struct<3> Var1;
	
	if (BitTest(Local_91.f_3, 12))
	{
		func_196();
	}
	if (func_768())
	{
		if (iLocal_551 != Local_91.f_12)
		{
			iLocal_551 = Local_91.f_12;
			func_196();
		}
	}
	if (!func_204())
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_102[bVar0]))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bVar0]))
				{
					if (func_109(Local_91.f_7[bVar0]))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false) };
						if (!func_774(bVar0, Var1))
						{
							if (!BitTest(Local_91.f_13, bVar0))
							{
								iLocal_102[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]));
								HUD::SET_BLIP_SPRITE(iLocal_102[bVar0], 429);
								func_198(&(iLocal_102[bVar0]), 29);
								if (!BitTest(uLocal_95, 20))
								{
									HUD::SET_BLIP_FLASHES(iLocal_102[bVar0], true);
									HUD::SET_BLIP_FLASH_TIMER(iLocal_102[bVar0], 7000);
									MISC::SET_BIT(&uLocal_95, 20);
								}
								HUD::SET_BLIP_PRIORITY(iLocal_102[bVar0], 9);
								if (func_768())
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_102[bVar0], "UW_BLIPC");
								}
								else
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_102[bVar0], "UW_BLIP");
								}
								if (!BitTest(uLocal_96, 3))
								{
									HUD::FLASH_MINIMAP_DISPLAY();
									MISC::SET_BIT(&uLocal_96, 3);
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bVar0]))
			{
				if (!func_109(Local_91.f_7[bVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_102[bVar0]));
				}
				else if (BitTest(Local_91.f_13, bVar0))
				{
					HUD::REMOVE_BLIP(&(iLocal_102[bVar0]));
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&(iLocal_102[bVar0]));
			}
			bVar0++;
		}
	}
	else
	{
		func_196();
	}
}

int func_774(int iParam0, struct<3> Param1)//Position - 0x25412
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[iVar0]), false) };
				if (func_69(Param1, Var1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_102[iVar0]))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_775()//Position - 0x2547A
{
	return Local_91.f_0;
}

int func_776(int iParam0)//Position - 0x25484
{
	return Local_94[iParam0 /*18*/];
}

void func_777()//Position - 0x25493
{
	if (BitTest(Global_1836844.f_1, 6))
	{
		func_463();
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 6);
	}
	if (!BitTest(Global_1836844.f_1, 7))
	{
		if (BitTest(Global_1836844.f_1, 4) || BitTest(Global_1836844.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_368()) && func_869(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 7);
				func_436("FME_PASINT", 30000);
				func_435(1);
			}
		}
		else if (BitTest(Global_1836844.f_1, 17))
		{
			if (func_249() && !func_245())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 17);
				MISC::SET_BIT(&(Global_1836844.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836844.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && func_869(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_800())
			{
				func_436("AMEV_GA_RP", -1);
				if (func_348(PLAYER::PLAYER_ID()) != 200)
				{
					func_435(1);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_240(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (BitTest(Global_1836844.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_368()) && func_869(PLAYER::PLAYER_ID(), 1, 1)) && !func_207(PLAYER::PLAYER_ID(), 21)) && !func_207(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 9);
			func_799(0);
			func_436("FME_TBL00", -1);
			func_435(1);
		}
	}
	if (func_250(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836844.f_1, 18))
		{
			if ((func_207(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836844.f_1, 20)) && !BitTest(Global_1836844.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 18);
			}
		}
		else if (BitTest(Global_1836844.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_368()) && func_869(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !func_798())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 18);
				MISC::SET_BIT(&(Global_1836844.f_1), 19);
				func_436("AMTT_RPAS", -1);
				func_435(1);
			}
		}
	}
	if (((((func_250(PLAYER::PLAYER_ID()) && !func_206(PLAYER::PLAYER_ID())) && func_191(PLAYER::PLAYER_ID()) != 146) && !func_205(PLAYER::PLAYER_ID())) && !func_685(PLAYER::PLAYER_ID())) && !func_788())
	{
		if (func_690(func_191(PLAYER::PLAYER_ID())))
		{
			PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836844.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 22);
		}
		if (func_213(PLAYER::PLAYER_ID()) || func_688())
		{
			if (!BitTest(Global_1836844.f_1, 10))
			{
				if (func_786(func_191(PLAYER::PLAYER_ID())))
				{
					if (func_615(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836844.f_1), 9);
					}
					if (!Global_2653189)
					{
						func_461(1);
						MISC::SET_BIT(&(Global_1836844.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 10);
			}
		}
		if (func_240(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836844.f_1, 11))
			{
				if (!Global_100493.f_8)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 12);
					func_459(1);
				}
				if (!func_785())
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 13);
					func_689();
				}
				if (!Global_2653189)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 14);
					if (func_615(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836844.f_1), 9);
					}
					func_461(1);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 11);
			}
		}
		else
		{
			func_783(0);
		}
	}
	else
	{
		func_783(1);
	}
	func_778();
	if (func_687(func_191(PLAYER::PLAYER_ID())) && !BitTest(Global_1836844.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 21);
	}
	if (((func_249() && !func_245()) || func_207(PLAYER::PLAYER_ID(), 21)) || func_207(PLAYER::PLAYER_ID(), 25))
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 10);
	}
}

void func_778()//Position - 0x2599A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_368())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_536(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (BitTest(Global_1836844.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1836844.f_1), 26);
				}
				func_779(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836844.f_1, 26))
	{
		func_106(&(Global_1836844.f_22));
		MISC::SET_BIT(&(Global_1836844.f_1), 26);
	}
}

void func_779(int iParam0, int iParam1)//Position - 0x25A37
{
	if (!func_22(&(Global_1836844.f_22)))
	{
		func_20(&(Global_1836844.f_22), 0, 0);
	}
	else if (func_19(&(Global_1836844.f_22), iParam1, 0))
	{
		if (func_421() > 0)
		{
			func_782(iParam0);
			if (func_697("AMEV_LBD_HELP"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_106(&(Global_1836844.f_22));
		}
	}
	else
	{
		func_781(0);
		func_780();
	}
}

void func_780()//Position - 0x25AA0
{
	Global_2815059.f_4599 = 0;
}

void func_781(int iParam0)//Position - 0x25AB0
{
	Global_1648034.f_68 = iParam0;
}

void func_782(int iParam0)//Position - 0x25AC0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			func_366(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_783(int iParam0)//Position - 0x25B0C
{
	if ((BitTest(Global_1836844.f_1, 11) || (BitTest(Global_1836844.f_1, 10) && iParam0)) || (BitTest(Global_1836844.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836844.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 12);
			func_459(0);
		}
		if (BitTest(Global_1836844.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 13);
			func_784();
		}
		if (BitTest(Global_1836844.f_1, 14) && !func_234(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 14);
			func_461(0);
		}
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 22);
	}
}

void func_784()//Position - 0x25BD5
{
	MISC::CLEAR_BIT(&(Global_2815059.f_5033), 0);
}

bool func_785()//Position - 0x25BE9
{
	return BitTest(Global_2815059.f_5033, 0);
}

int func_786(int iParam0)//Position - 0x25BFA
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_240(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_688() || func_787(func_190()));
		
		default:
	}
	return 0;
}

int func_787(int iParam0)//Position - 0x25C6A
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_788()//Position - 0x25CA2
{
	if (((((((((func_797() || func_796()) || func_795()) || func_183()) || (func_794() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_791() && !func_790())) || Global_2656879) || Global_2656879.f_1 != 0) || Global_2656953 != 0) || (func_789() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_789()//Position - 0x25D36
{
	return Global_1057409;
}

bool func_790()//Position - 0x25D42
{
	return BitTest(Global_2714762.f_2, 27);
}

int func_791()//Position - 0x25D53
{
	if (func_793() || func_792())
	{
		return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8;
	}
	return 0;
}

var func_792()//Position - 0x25D80
{
	return Global_2714762.f_735;
}

var func_793()//Position - 0x25D8F
{
	return BitTest(Global_2714762.f_2, 11);
}

var func_794()//Position - 0x25DA0
{
	return BitTest(Global_2714762, 5);
}

var func_795()//Position - 0x25DAE
{
	return BitTest(Global_2714762, 2);
}

var func_796()//Position - 0x25DBC
{
	return BitTest(Global_2714762, 20);
}

bool func_797()//Position - 0x25DCB
{
	return Global_2714762.f_698;
}

bool func_798()//Position - 0x25DDA
{
	return Global_2815059.f_5128 != -1;
}

void func_799(int iParam0)//Position - 0x25DEB
{
	int iVar0;
	
	iVar0 = func_269(2537, -1, 0);
	if (iParam0 == 0)
	{
		if (!BitTest(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		else if (!BitTest(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		else if (!BitTest(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!BitTest(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!BitTest(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!BitTest(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!BitTest(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!BitTest(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!BitTest(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!BitTest(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!BitTest(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_494(2537, iVar0, -1, 1, 0);
}

int func_800()//Position - 0x25EFF
{
	int iVar0;
	
	if (!func_22(&(Global_1836844.f_15)))
	{
		func_20(&(Global_1836844.f_15), 0, 0);
		Global_1836844.f_17 = 0;
	}
	else if (func_19(&(Global_1836844.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836844.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836844.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_869(iVar0, 1, 1) && func_801(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_59(PLAYER::PLAYER_ID()), func_59(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836844.f_17++;
		if (Global_1836844.f_17 >= 32)
		{
			Global_1836844.f_17 = 0;
			func_106(&(Global_1836844.f_15));
		}
	}
	return 0;
}

int func_801(int iParam0, int iParam1)//Position - 0x25FC7
{
	int iVar0;
	
	if (func_455() != 0)
	{
		return 0;
	}
	if (!func_498(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853348[iVar0 /*834*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_802()//Position - 0x26000
{
	return Global_1836844.f_24;
}

bool func_803(int iParam0)//Position - 0x2600E
{
	return !func_804(iParam0);
}

int func_804(int iParam0)//Position - 0x2601D
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7119)
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7120)
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7121)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7122)
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_805(4))
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_805(4))
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_805(4))
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_805(4))
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_805(4))
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_805(4))
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_805(bool bParam0)//Position - 0x26351
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_869(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2689235[iVar0 /*453*/].f_216, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_806()//Position - 0x26394
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_809())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_808())
	{
		return 1;
	}
	if (func_807(159))
	{
		if (!func_797())
		{
			return 1;
		}
	}
	if (func_807(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_453() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_453()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_807(int iParam0)//Position - 0x26418
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_808()//Position - 0x2642F
{
	return Global_2725403;
}

bool func_809()//Position - 0x2643B
{
	return Global_2714762.f_693;
}

void func_810()//Position - 0x2644A
{
	SYSTEM::WAIT(0);
}

void func_811()//Position - 0x26457
{
	int iVar0;
	
	func_196();
	if (func_775() == 4 && Local_91.f_27 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_91.f_27, false);
	}
	MISC::CLEAR_BIT(&(Global_2815059.f_4662), 1);
	func_695(19, 0);
	func_673(0);
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_817(129, 0, BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8));
	}
	func_816(129);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (iLocal_100 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_100);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 129)
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/] = -1;
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_104)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_106);
	}
	func_815();
	func_209(0, 129);
	if (BitTest(uLocal_95, 22))
	{
		func_466();
		MISC::CLEAR_BIT(&uLocal_95, 22);
	}
	if (BitTest(uLocal_95, 9))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		if (!BitTest(uLocal_95, 10))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_101 != -100f)
	{
		func_542(0, 0);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_101);
	}
	func_541(0);
	if (func_806())
	{
		Local_92.f_5 = 5;
	}
	else if (func_634(2, 0, 0, 0, 0))
	{
		Local_92.f_5 = 6;
	}
	else if (Local_92.f_5 != 1)
	{
		Local_92.f_5 = 2;
	}
	AUDIO::STOP_SOUND(iLocal_554);
	Local_92.f_0 = Local_91.f_611;
	Local_92.f_1 = Local_91.f_612;
	Local_92.f_4 = Local_91.f_613;
	Local_92.f_3 = Local_91.f_615;
	if (Local_92.f_9 > 0)
	{
		Local_92.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_92.f_9);
	}
	if ((!Global_262145.f_11974 && !BitTest(Local_91.f_3, 8)) || (!Global_262145.f_11975 && BitTest(Local_91.f_3, 8)))
	{
		if (Local_92.f_6 > 0)
		{
		}
	}
	if (BitTest(Local_91.f_3, 8))
	{
		iVar0 = 1;
	}
	if (BitTest(uLocal_96, 1))
	{
		func_702(1);
		NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
	}
	if (iVar0 == 0)
	{
		func_813(Local_92, Local_91.f_27, Local_91.f_279, iVar0, -1, -1, -1);
	}
	else if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_813(Local_92, Local_91.f_279, Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_426(PLAYER::PLAYER_ID()))
	{
		func_651(0);
	}
	func_672(0);
	func_731(1);
	func_812();
}

void func_812()//Position - 0x266BF
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_813(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x266CB
{
	char* sVar0;
	struct<13> Var1;
	struct<15> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_78319)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			STATS::_PLAYSTATS_FREEMODE_VEHICLE_TARGET(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_814()))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			Var2.f_14 = iParam3;
			STATS::_PLAYSTATS_FREEMODE_ATOB(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = iParam4;
			Var3.f_16 = iParam5;
			Var3.f_17 = iParam6;
			STATS::_PLAYSTATS_FREEMODE_CHECKPOINT_COLLECTION(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = SYSTEM::TO_FLOAT(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			STATS::_PLAYSTATS_FREEMODE_CHALLENGES(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::_PLAYSTATS_FREEMODE_PENNED_IN(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			STATS::_PLAYSTATS_FREEMODE_PASS_THE_PARCEL(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			STATS::_PLAYSTATS_FREEMODE_HOT_PROPERTY(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			STATS::_PLAYSTATS_FREEMODE_DEADDROP(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = iParam4;
			STATS::_PLAYSTATS_FREEMODE_KING_OF_THE_CASTLE(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			STATS::_PLAYSTATS_FREEMODE_CRIMINAL_DAMAGE(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				STATS::_PLAYSTATS_FREEMODE_URBAN_WARFARE(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				STATS::_PLAYSTATS_FREEMODE_COMPETITIVE_URBAN_WARFARE(&Var11);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			STATS::_PLAYSTATS_FREEMODE_HUNT_BEAST(&Var12);
		}
	}
}

char* func_814()//Position - 0x26946
{
	switch (Global_2727899)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_815()//Position - 0x26968
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_105);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_104);
}

void func_816(int iParam0)//Position - 0x2697E
{
	if (iParam0 == iParam0)
	{
	}
}

void func_817(int iParam0, bool bParam1, int iParam2)//Position - 0x2698D
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 13);
		}
		if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836844.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 21);
	}
	func_853();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = func_852(func_191(PLAYER::PLAYER_ID()));
		func_695(func_696(iParam0), 0);
	}
	else
	{
		if ((iParam2 && PLAYER::PLAYER_ID() != -1) && func_851(PLAYER::PLAYER_ID()) >= 12)
		{
			func_850(2549, -1);
			iVar1 = func_269(2549, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836870, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836870, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836870, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836870, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836870, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836870, 5);
			}
		}
		func_701();
		func_849();
		func_848();
		if ((!func_239(PLAYER::PLAYER_ID()) && !func_237(PLAYER::PLAYER_ID())) && !func_847())
		{
			func_826();
		}
		func_825();
		if (!BitTest(Global_1943920.f_3, 0) && !BitTest(Global_1943920.f_3, 1))
		{
			func_463();
		}
		func_824();
		MISC::CLEAR_BIT(&(Global_2815059.f_1811), 2);
		func_557();
		func_823();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_207(PLAYER::PLAYER_ID(), 21)) && !func_207(PLAYER::PLAYER_ID(), 25)) && !func_234(PLAYER::PLAYER_ID(), 0))
		{
			func_461(0);
			func_459(0);
			if (!bParam1)
			{
				func_822();
			}
		}
	}
	if (iParam2 && !bParam1)
	{
		if (func_638(26, -1))
		{
			Global_2727723 = -1;
			func_636(26, -1);
		}
	}
	if (!func_818())
	{
		Global_2787396 = 1;
	}
}

int func_818()//Position - 0x26BEA
{
	if (((((((!func_399(PLAYER::PLAYER_ID()) && !func_380(PLAYER::PLAYER_ID())) && func_191(PLAYER::PLAYER_ID()) != 146) && !func_821()) && !func_820()) && !func_819(Global_4718592.f_168757)) && !func_598()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_819(int iParam0)//Position - 0x26C65
{
	return iParam0 == 57;
}

int func_820()//Position - 0x26C72
{
	if (Global_4718592.f_116524 == Global_262145.f_10062)
	{
		return 1;
	}
	return 0;
}

int func_821()//Position - 0x26C93
{
	if ((Global_4718592 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_168757 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_822()//Position - 0x26D2B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_2621865[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_2621865[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_2621865[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_823()//Position - 0x26D7B
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_7 = 0;
}

void func_824()//Position - 0x26D91
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836844 = { Var0 };
}

void func_825()//Position - 0x26DC0
{
	var uVar0;
	
	Global_1581339 = uVar0;
}

void func_826()//Position - 0x26DCE
{
	MISC::_COPY_MEMORY(&(Global_2667225.f_24), &Global_2671509, 2);
	MISC::_COPY_MEMORY(&(Global_2667225.f_26), &Global_2671511, 19);
	func_845();
	func_829(1, 1, 0);
	func_827();
}

void func_827()//Position - 0x26E04
{
	func_828(0, 0);
}

void func_828(int iParam0, int iParam1)//Position - 0x26E12
{
	Global_2667225.f_22 = iParam0;
	Global_2667225.f_23 = iParam1;
}

void func_829(bool bParam0, bool bParam1, bool bParam2)//Position - 0x26E2A
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2667225.f_45), &Global_2671530, 323);
	}
	else
	{
		Global_2667225.f_45 = { Global_2671530 };
		Global_2667225.f_45.f_49 = { Global_2671530.f_49 };
		Global_2667225.f_45.f_52 = Global_2671530.f_52;
		Global_2667225.f_45.f_53 = Global_2671530.f_53;
	}
	if (bParam0)
	{
		func_844();
	}
	if (!bParam2)
	{
		func_832(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_831(0);
	func_830();
}

void func_830()//Position - 0x26ED0
{
	struct<6> Var0;
	
	if (Global_2667225.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2667225.f_490 = { Var0 };
	}
}

void func_831(bool bParam0)//Position - 0x26EF5
{
	if (bParam0)
	{
		Global_2667225.f_713 = 0;
	}
	else
	{
		Global_2667225.f_713 = 1;
	}
}

void func_832(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x26F15
{
	if (bParam0)
	{
		if (func_843())
		{
			func_842();
		}
		Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_714.f_504 = iParam1;
		Global_2667225.f_714.f_505 = iParam2;
		Global_2667225.f_714.f_506 = iParam10;
		func_840();
		func_836(8, 0, 0, 0, 0);
		Global_2667225.f_714.f_507 = iParam11;
		Global_2667225.f_714.f_512 = iParam3;
		Global_2667225.f_714.f_513 = iParam4;
		Global_2667225.f_714.f_510 = iParam5;
		Global_2667225.f_714.f_511 = iParam6;
		Global_2667225.f_714.f_514 = iParam7;
		Global_2667225.f_714.f_515 = iParam8;
		Global_2667225.f_714.f_516 = iParam9;
		Global_2667225.f_714.f_517 = iParam14;
		Global_2667225.f_714.f_508 = iParam12;
		Global_2667225.f_714.f_509 = iParam13;
		Global_2667225.f_1753 = 1;
	}
	else
	{
		func_833();
	}
}

void func_833()//Position - 0x27000
{
	if (func_843() && !func_835())
	{
		func_842();
	}
	if (func_835())
	{
		func_834();
	}
	else
	{
		func_840();
		func_836(0, 0, 0, 0, 0);
		Global_2667225.f_1753 = 0;
		Global_2667225.f_1752 = 0;
	}
}

void func_834()//Position - 0x27048
{
	MISC::_COPY_MEMORY(&(Global_2667225.f_714), &(Global_2667225.f_1233), 519);
	Global_2667225.f_490 = { Global_2667225.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518)
	{
		Global_2667225.f_1752 = 0;
	}
}

int func_835()//Position - 0x27090
{
	if ((Global_2667225.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_1233.f_518))
	{
		return 1;
	}
	return 0;
}

void func_836(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x270CF
{
	if (Global_2703735.f_1571.f_703.f_16 != func_5())
	{
		if (BitTest(Global_2689235[Global_2703735.f_1571.f_703.f_16 /*453*/].f_416, 0) && func_837())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674954 = 0;
	}
	Global_2667225.f_490 = iParam0;
	Global_2667225.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667225.f_490.f_2 = iParam1;
	Global_2667225.f_490.f_3 = iParam2;
	Global_2667225.f_490.f_4 = iParam3;
	Global_2667225.f_490.f_5 = iParam4;
}

int func_837()//Position - 0x2716B
{
	if ((((((func_348(PLAYER::PLAYER_ID()) == 229 || func_348(PLAYER::PLAYER_ID()) == 191) || func_839()) || func_847()) || func_215()) || Global_2788199.f_227 == 1) || (Global_2667225.f_1753 && func_838(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_838(int iParam0)//Position - 0x271DD
{
	if (func_213(iParam0))
	{
		return 1;
	}
	if (func_251(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_839()//Position - 0x27200
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_840()//Position - 0x27215
{
	if (func_843() && !func_835())
	{
		func_842();
	}
	func_841();
	Global_2667225.f_714 = 0;
}

void func_841()//Position - 0x2723E
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2667225.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_842()//Position - 0x27279
{
	if (func_835())
	{
		if (Global_2667225.f_714.f_518 == Global_2667225.f_1233.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2667225.f_1233), &(Global_2667225.f_714), 519);
		Global_2667225.f_496 = { Global_2667225.f_490 };
		Global_2667225.f_1752 = 1;
	}
}

int func_843()//Position - 0x272E7
{
	if ((Global_2667225.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_714.f_518))
	{
		return 1;
	}
	return 0;
}

void func_844()//Position - 0x27326
{
	MISC::_COPY_MEMORY(&(Global_2667225.f_368), &Global_2671853, 121);
}

void func_845()//Position - 0x2733F
{
	func_846();
}

void func_846()//Position - 0x2734B
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2667225.f_2263[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667225.f_2262 = 0;
}

bool func_847()//Position - 0x2737F
{
	return Global_1836579;
}

void func_848()//Position - 0x2738B
{
	Global_2815059.f_5033 = 0;
}

void func_849()//Position - 0x2739B
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1 = 0;
	}
}

void func_850(int iParam0, int iParam1)//Position - 0x273B9
{
	int iVar0;
	
	iVar0 = func_269(iParam0, func_248(iParam1), 0);
	iVar0++;
	if (!func_501(iParam0))
	{
		func_494(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_495(iParam0, iVar0, iParam1, 1);
	}
}

int func_851(int iParam0)//Position - 0x273FA
{
	return Global_1853348[iParam0 /*834*/].f_205.f_6;
}

int func_852(int iParam0)//Position - 0x2740F
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_240(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_853()//Position - 0x27471
{
	if (BitTest(Global_2815059.f_1798, 3) || BitTest(Global_2815059.f_1798, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (BitTest(Global_2815059.f_1798, 5))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1798), 5);
	}
	if (BitTest(Global_2815059.f_1798, 3))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1798), 3);
	}
	if (BitTest(Global_2815059.f_1798, 4))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1798), 4);
	}
	func_856(0);
	func_855(0);
	func_854(0);
}

void func_854(int iParam0)//Position - 0x27503
{
	if (Global_2815059.f_4587 != iParam0)
	{
		Global_2815059.f_4587 = iParam0;
	}
}

void func_855(bool bParam0)//Position - 0x27520
{
	if (Global_2815059.f_4586 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2815059.f_4586 = bParam0;
	}
}

void func_856(int iParam0)//Position - 0x27545
{
	if (Global_2815059.f_4584 != iParam0)
	{
		Global_2815059.f_4584 = iParam0;
	}
}

void func_857(struct<21> Param0)//Position - 0x27562
{
	int iVar0;
	
	func_866(func_867(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(24);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(9);
	func_865(0, -1, 0);
	func_863(129);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_91, 617, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_94, 577, 0);
	func_862(1);
	if (!func_861())
	{
		func_811();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_91.f_17[iVar0] = func_5();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_91.f_22[iVar0] = func_5();
				Local_91.f_256[iVar0] = -1;
				Local_91.f_110[iVar0] = -1;
				iVar0++;
			}
			STATS::_0x6DEE77AFF8C21BD1(&(Local_91.f_611), &(Local_91.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_97[iVar0] = -1;
			iVar0++;
		}
		Local_92.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		Local_92.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_695(19, 1);
		func_858();
		if (func_204())
		{
			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 7);
		}
		Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
		Global_2815059.f_5119 = -1;
		Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 0;
	}
	else
	{
		func_811();
	}
}

void func_858()//Position - 0x276A3
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("relUWPlayer", &iLocal_104);
	PED::ADD_RELATIONSHIP_GROUP("relUWAi", &iLocal_105);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837161[iVar0], iLocal_104);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_104, Global_1837161[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837161[iVar0], iLocal_105);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_105, Global_1837161[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_104, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_104);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_104, Global_1837209[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837209[5], iLocal_104);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_104, Global_1837194);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837194, iLocal_104);
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_104, iLocal_105);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_105, iLocal_104);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_CULT"), iLocal_105);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), iLocal_104);
	func_860(1, &iLocal_105);
	func_859(&iLocal_105);
	func_859(&iLocal_104);
}

void func_859(int iParam0)//Position - 0x277AC
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_MEXICAN"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_MEXICAN"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_CULT"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_CULT"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_HILLBILLY"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_HILLBILLY"));
}

void func_860(int iParam0, int iParam1)//Position - 0x2789E
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("army"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("army"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("SECURITY_GUARD"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("SECURITY_GUARD"));
}

int func_861()//Position - 0x278FA
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_809())
		{
			return 0;
		}
		if (func_807(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_862(bool bParam0)//Position - 0x27953
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_453())
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1317) || Global_2678393.f_1317 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam0)
		{
			Global_2678393.f_1317 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			Global_2678393.f_1317 = -1;
		}
	}
}

void func_863(int iParam0)//Position - 0x279AC
{
	func_824();
	func_864();
	func_848();
	Global_1836844.f_4 = iParam0;
	Global_1836844.f_5 = iParam0;
	func_694(iParam0, -1);
	func_8(&(Global_1836844.f_18), 0, 0);
	Global_2815059.f_4657 = 0;
	Global_2726607[0] = func_5();
	Global_2726607[1] = func_5();
	Global_2726607[2] = func_5();
	Global_2726607[3] = func_5();
	Global_2726607[4] = func_5();
	func_823();
	if (!func_230(func_231()))
	{
		func_365();
	}
	if (func_249() && !func_245())
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 17);
	}
}

void func_864()//Position - 0x27A62
{
	var uVar0;
	
	Global_1836869 = uVar0;
}

int func_865(int iParam0, int iParam1, bool bParam2)//Position - 0x27A70
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_812();
			}
			else
			{
				return 0;
			}
		}
		if (!func_169(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_812();
					}
					else
					{
						return 0;
					}
				}
				if (func_809())
				{
					if (!bParam2)
					{
						func_812();
					}
					else
					{
						return 0;
					}
				}
				if (func_807(157))
				{
					if (!bParam2)
					{
						func_812();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_812();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_812();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_812();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_866(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x27B86
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_812();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_867(int iParam0)//Position - 0x27BA5
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 163:
			return 32;
		
		case 164:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 165:
			return 32;
		
		case 166:
			return 32;
		
		case 170:
			return 32;
		
		case 168:
			return 32;
		
		case 169:
			return 32;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 171:
			return 32;
		
		case 172:
			return 32;
		
		case 177:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 180:
			return 32;
		
		case 181:
			return 2;
		
		case 186:
			return 1;
		
		case 182:
			return 2;
		
		case 183:
			return 4;
		
		case 184:
			return 2;
		
		case 185:
			return 2;
		
		case 167:
			return 1;
		
		case 187:
			return 2;
		
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
			return 0;
		
		case 209:
			return 1;
		
		case 194:
			return 4;
		
		case 197:
			return 4;
		
		case 198:
			return 1;
		
		case 199:
			return 1;
		
		case 205:
			return 1;
		
		case 201:
			return 2;
		
		case 206:
			return 1;
		
		case 202:
			return 1;
		
		case 200:
			return 2;
		
		case 203:
			return 8;
		
		case 204:
			return 8;
		
		case 207:
			return 1;
		
		case 208:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 195:
			return 16;
		
		case 196:
			return 32;
		
		default:
	}
	switch (func_140(func_868(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_868(int iParam0, bool bParam1)//Position - 0x2831C
{
	switch (iParam0)
	{
		case 181:
			return 15;
		
		case 188:
			return 8;
		
		case 182:
			return 14;
		
		case 186:
			return 122;
		
		case 189:
			return 1;
		
		case 187:
			return 5;
		
		case 190:
			return 6;
		
		case 183:
			return 11;
		
		case 191:
			return 0;
		
		case 192:
			return 2;
		
		case 184:
			return 13;
		
		case 193:
			return 3;
		
		case 185:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		default:
	}
	if (bParam1)
	{
	}
	return 304;
}

int func_869(int iParam0, bool bParam1, bool bParam2)//Position - 0x28867
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

