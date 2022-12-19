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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_102[65];
	float fLocal_103 = 0f;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_106 = { 0, 0, 0 } ;
	struct<3> Local_107 = { 0, 0, 0 } ;
	float fLocal_108 = 0f;
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
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	float fLocal_129 = 0f;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	bool bLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	struct<3> Local_143[65];
	int iLocal_144[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_145[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	struct<68> Local_152 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<535> Local_173 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_174 = -1;
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
	var uLocal_196 = -1082130432;
	var uLocal_197 = 3;
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
	var uLocal_213 = -1;
	var uLocal_214 = 0;
	var uLocal_215 = -1;
	var uLocal_216 = -1;
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
	var uLocal_238 = -1082130432;
	var uLocal_239 = 3;
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
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = -1;
	var uLocal_258 = -1;
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
	var uLocal_280 = -1082130432;
	var uLocal_281 = 3;
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
	var uLocal_297 = -1;
	var uLocal_298 = 0;
	var uLocal_299 = -1;
	var uLocal_300 = -1;
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
	var uLocal_322 = -1082130432;
	var uLocal_323 = 3;
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
	var uLocal_339 = -1;
	var uLocal_340 = 0;
	var uLocal_341 = -1;
	var uLocal_342 = -1;
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
	var uLocal_364 = -1082130432;
	var uLocal_365 = 3;
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
	var uLocal_381 = -1;
	var uLocal_382 = 0;
	var uLocal_383 = -1;
	var uLocal_384 = -1;
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
	var uLocal_406 = -1082130432;
	var uLocal_407 = 3;
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
	var uLocal_423 = -1;
	var uLocal_424 = 0;
	var uLocal_425 = -1;
	var uLocal_426 = -1;
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
	var uLocal_448 = -1082130432;
	var uLocal_449 = 3;
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
	var uLocal_465 = -1;
	var uLocal_466 = 0;
	var uLocal_467 = -1;
	var uLocal_468 = -1;
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
	var uLocal_490 = -1082130432;
	var uLocal_491 = 3;
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
	var uLocal_507 = -1;
	var uLocal_508 = 0;
	var uLocal_509 = -1;
	var uLocal_510 = -1;
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
	var uLocal_532 = -1082130432;
	var uLocal_533 = 3;
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
	var uLocal_549 = -1;
	var uLocal_550 = 0;
	var uLocal_551 = -1;
	var uLocal_552 = -1;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
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
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = -1082130432;
	var uLocal_575 = 3;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = -1;
	var uLocal_592 = 0;
	var uLocal_593 = -1;
	var uLocal_594 = -1;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = -1082130432;
	var uLocal_617 = 3;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = -1;
	var uLocal_634 = 0;
	var uLocal_635 = -1;
	var uLocal_636 = -1;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = -1082130432;
	var uLocal_659 = 3;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = -1;
	var uLocal_676 = 0;
	var uLocal_677 = -1;
	var uLocal_678 = -1;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = -1082130432;
	var uLocal_701 = 3;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = -1;
	var uLocal_718 = 0;
	var uLocal_719 = -1;
	var uLocal_720 = -1;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = -1082130432;
	var uLocal_743 = 3;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = -1;
	var uLocal_760 = 0;
	var uLocal_761 = -1;
	var uLocal_762 = -1;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = -1082130432;
	var uLocal_785 = 3;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = -1;
	var uLocal_802 = 0;
	var uLocal_803 = -1;
	var uLocal_804 = -1;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = -1082130432;
	var uLocal_827 = 3;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = -1;
	var uLocal_844 = 0;
	var uLocal_845 = -1;
	var uLocal_846 = -1;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = -1082130432;
	var uLocal_869 = 3;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = -1;
	var uLocal_886 = 0;
	var uLocal_887 = -1;
	var uLocal_888 = -1;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = -1082130432;
	var uLocal_911 = 3;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = -1;
	var uLocal_928 = 0;
	var uLocal_929 = -1;
	var uLocal_930 = -1;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = -1082130432;
	var uLocal_953 = 3;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = -1;
	var uLocal_970 = 0;
	var uLocal_971 = -1;
	var uLocal_972 = -1;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = -1082130432;
	var uLocal_995 = 3;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = -1;
	var uLocal_1012 = 0;
	var uLocal_1013 = -1;
	var uLocal_1014 = -1;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = -1082130432;
	var uLocal_1037 = 3;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = -1;
	var uLocal_1054 = 0;
	var uLocal_1055 = -1;
	var uLocal_1056 = -1;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = -1082130432;
	var uLocal_1079 = 3;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = -1;
	var uLocal_1096 = 0;
	var uLocal_1097 = -1;
	var uLocal_1098 = -1;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = -1082130432;
	var uLocal_1121 = 3;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = -1;
	var uLocal_1138 = 0;
	var uLocal_1139 = -1;
	var uLocal_1140 = -1;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = -1082130432;
	var uLocal_1163 = 3;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = -1;
	var uLocal_1180 = 0;
	var uLocal_1181 = -1;
	var uLocal_1182 = -1;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = -1082130432;
	var uLocal_1205 = 3;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = -1;
	var uLocal_1222 = 0;
	var uLocal_1223 = -1;
	var uLocal_1224 = -1;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = -1082130432;
	var uLocal_1247 = 3;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = -1;
	var uLocal_1264 = 0;
	var uLocal_1265 = -1;
	var uLocal_1266 = -1;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = -1082130432;
	var uLocal_1289 = 3;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = -1;
	var uLocal_1306 = 0;
	var uLocal_1307 = -1;
	var uLocal_1308 = -1;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = -1082130432;
	var uLocal_1331 = 3;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = -1;
	var uLocal_1348 = 0;
	var uLocal_1349 = -1;
	var uLocal_1350 = -1;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = -1082130432;
	var uLocal_1373 = 3;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = -1;
	var uLocal_1390 = 0;
	var uLocal_1391 = -1;
	var uLocal_1392 = -1;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = -1082130432;
	var uLocal_1415 = 3;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = -1;
	var uLocal_1432 = 0;
	var uLocal_1433 = -1;
	var uLocal_1434 = -1;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = -1082130432;
	var uLocal_1457 = 3;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = -1;
	var uLocal_1474 = 0;
	var uLocal_1475 = -1;
	var uLocal_1476 = -1;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = -1082130432;
	var uLocal_1499 = 3;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = -1;
	var uLocal_1516 = 0;
	var uLocal_1517 = -1;
	struct<12> Local_1518[32];
	struct<12> Local_1519 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_1520 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_103 = 40000f;
	iLocal_131 = AUDIO::GET_SOUND_ID();
	iLocal_132 = AUDIO::GET_SOUND_ID();
	iLocal_133 = -1;
	bLocal_134 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_787(ScriptParam_1520))
		{
			func_749();
		}
	}
	while (true)
	{
		func_748();
		if (func_744() || func_742())
		{
			func_749();
		}
		if (func_740())
		{
			func_749();
		}
		func_713();
		switch (func_712(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_711() == 1)
				{
					if (func_710())
					{
						func_709(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_711() == 1)
				{
					func_147();
					func_135();
				}
				else if (func_711() == 3)
				{
					func_709(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_749();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_711())
			{
				case 0:
					if (func_121())
					{
						func_120(1);
					}
					break;
				
				case 1:
					if (Local_152.f_37 == 6)
					{
						func_120(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_109, 1000, 0))
					{
						func_120(3);
					}
					break;
				
				case 3:
					func_749();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x1BE
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
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

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x21C
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

void func_3()//Position - 0x261
{
	bool bVar0;
	
	if (func_44(2, 0, 0, 0, 0))
	{
		if (!BitTest(Local_152.f_2, 0))
		{
			MISC::SET_BIT(&(Local_152.f_2), 0);
			Local_152.f_1 = NETWORK::GET_NETWORK_TIME();
		}
	}
	switch (Local_152.f_37)
	{
		case 0:
			if (func_43())
			{
				if (!func_31())
				{
					bVar0 = true;
				}
			}
			if (!bVar0)
			{
				func_30(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_152.f_43), func_29(), 0) || BitTest(Local_152.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_152.f_38 = NETWORK::GET_NETWORK_TIME();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_152.f_39), func_28(0), 0) || BitTest(Local_152.f_2, 0))
			{
				if (!BitTest(Local_152.f_2, 1))
				{
					Local_152.f_1 = NETWORK::GET_NETWORK_TIME();
					MISC::SET_BIT(&(Local_152.f_2), 1);
					func_27(&(Local_152.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&bLocal_134, &iLocal_133);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_152.f_41), 20000, 0) || Local_152.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_152.f_3))
				{
					func_27(&(Local_152.f_45), 0, 0);
					func_30(5);
				}
				else
				{
					func_30(6);
				}
			}
			else
			{
				func_31();
			}
			break;
		
		case 5:
			if (func_4())
			{
				func_30(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()//Position - 0x3F4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_152.f_67[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_152.f_67[iVar0 /*2*/].f_1), false))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5(int iParam0)//Position - 0x440
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

int func_6()//Position - 0x478
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!func_7(bVar2))
			{
				if (!BitTest(Local_1518[iVar1 /*12*/].f_1, 1) || Local_1518[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (BitTest(Local_1518[iVar1 /*12*/].f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_7(bool bParam0)//Position - 0x4FB
{
	if (func_8(bParam0))
	{
		return 1;
	}
	return BitTest(Global_1894573[bParam0 /*608*/].f_1, 8);
}

bool func_8(bool bParam0)//Position - 0x51E
{
	return BitTest(Global_1894573[bParam0 /*608*/].f_1, 2);
}

void func_9(bool bParam0, int iParam1)//Position - 0x533
{
	struct<14> Var0;
	int iVar1;
	
	if (*bParam0 >= 0 && *iParam1 >= 0)
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(*bParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = -319775187;
			Var0.f_10 = iVar1;
			func_10(Var0, func_11(1));
		}
		*bParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x586
{
	Param0.f_0 = 548471420;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_11(int iParam0)//Position - 0x5B3
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_12(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_12(bool bParam0, bool bParam1, bool bParam2)//Position - 0x610
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_13()//Position - 0x670
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)))
		{
			MISC::SET_BIT(&uVar3, bVar0);
		}
		else
		{
			func_26(bVar0);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (BitTest(uVar3, bVar0))
		{
			func_23(bVar0);
			MISC::SET_BIT(&(Local_152.f_47), bVar0);
			iVar1++;
			if (func_17(bVar0, 0))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar4) && !func_14(bVar4, 0))
				{
					iVar2++;
				}
			}
		}
		bVar0++;
	}
	if (iVar1 > Local_152.f_50)
	{
		Local_152.f_50 = iVar1;
	}
	else
	{
		Local_152.f_66 = (Local_152.f_50 - iVar1);
	}
	if (iVar2 > Local_152.f_51)
	{
		Local_152.f_51 = iVar2;
	}
}

bool func_14(bool bParam0, int iParam1)//Position - 0x743
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[bParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_15(int iParam0, bool bParam1)//Position - 0x78E
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
	}
	if (Global_1575040[iVar1] == 1)
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

int func_16()//Position - 0x7CF
{
	return Global_1574918;
}

int func_17(bool bParam0, bool bParam1)//Position - 0x7DB
{
	float fVar0;
	
	if (bParam0 >= 0 && bParam0 < 32)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_1518[bParam0 /*12*/].f_4);
	}
	else if (bParam0 == -1)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_19())
		{
			return 1;
		}
	}
	if (func_18())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_152.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_11414 /* Tunable: CHALLENGE_LONGEST_JUMP */)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_11415 /* Tunable: CHALLENGE_HIGHEST_SPEED */)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_11416 /* Tunable: CHALLENGE_LONGEST_STOPPIE */)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_11417 /* Tunable: CHALLENGE_LONGEST_NO_CRASH */)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_11418 /* Tunable: CHALLENGE_LONGEST_WHEELIE */)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_11419 /* Tunable: CHALLENGE_LONGEST_SKYDIVE */)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_11420 /* Tunable: CHALLENGE_LOWEST_PARACHUTE */ && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_11421 /* Tunable: CHALLENGE_REVERSE_DRIVING */)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_11422 /* Tunable: CHALLENGE_LONGEST_FALL */)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_11423 /* Tunable: CHALLENGE_PVP_LONGEST_SNIPE */)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_11424 /* Tunable: CHALLENGE_LONGEST_BAIL */)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_11425 /* Tunable: CHALLENGE_MOST_VEHICLES_STOLEN */))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_11426 /* Tunable: CHALLENGE_MOST_NEAR_MISSES */))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_11538 /* Tunable: CHALLENGE_FURTHEST_DISTANCE_LOW_FLYING */)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_11539 /* Tunable: CHALLENGE_FURTHEST_DISTANCE_LOW_FLYING_INVERTED */)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_11429 /* Tunable: CHALLENGE_MOST_BRIDGES */))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_11431 /* Tunable: CHALLENGE_PVP_HEADSHOTS */))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_11432 /* Tunable: CHALLENGE_PVP_DRIVEBY */))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_11433 /* Tunable: CHALLENGE_PVP_MELEE */))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()//Position - 0xA4D
{
	switch (Local_152.f_3)
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

int func_19()//Position - 0xAAC
{
	if ((func_20(0) || func_20(1)) || func_20(2))
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0)//Position - 0xAD7
{
	if (iParam0 >= 0)
	{
		if (Local_152.f_4[iParam0] == NETWORK::PARTICIPANT_ID_TO_INT() && func_21(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0, int iParam1)//Position - 0xB10
{
	if (!func_22())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0)
	{
		iParam0 = 2147483647;
	}
	if (iParam1 == 0)
	{
		iParam1 = 2147483647;
	}
	return iParam0 < iParam1;
}

int func_22()//Position - 0xB4A
{
	switch (Local_152.f_3)
	{
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_23(bool bParam0)//Position - 0xB67
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_1518[bParam0 /*12*/].f_4;
	iVar1 = Local_1518[bParam0 /*12*/].f_4.f_2;
	if (!BitTest(Local_152.f_48, bParam0))
	{
		fVar2 = SYSTEM::TO_FLOAT(Local_152.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_152.f_49++;
			MISC::SET_BIT(&(Local_152.f_48), bParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_152.f_4[iVar3] == bParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_152.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_152.f_4[iVar3] < 0 || func_21(iVar0, Local_1518[Local_152.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_1518[Local_152.f_4[iVar3] /*12*/].f_4, iVar1, Local_1518[Local_152.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_152.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_133 = iVar3;
				bLocal_134 = bParam0;
			}
			Local_152.f_4[iVar3] = bParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_152.f_4[iVar5] == bParam0)
				{
					Local_152.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCE4
{
	if (Local_152.f_3 == 2)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(var uParam0, int iParam1)//Position - 0xD0C
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_26(bool bParam0)//Position - 0xD32
{
	int iVar0;
	
	if (BitTest(Local_152.f_47, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_152.f_4[iVar0] == bParam0)
			{
				Local_152.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(Local_152.f_48), bParam0);
		MISC::CLEAR_BIT(&(Local_152.f_47), bParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)//Position - 0xD8A
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

int func_28(bool bParam0)//Position - 0xDC7
{
	if (BitTest(Local_152.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_152.f_3)
	{
		case 0:
			return Global_262145.f_10724 /* Tunable: CHALLENGETIME_LONGEST_JUMP */;
		
		case 8:
			return Global_262145.f_10726 /* Tunable: CHALLENGETIME_MOST_NEAR_MISSES */;
		
		case 3:
			return Global_262145.f_10727 /* Tunable: CHALLENGETIME_LONGEST_STOPPIE */;
		
		case 1:
			return Global_262145.f_11524 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_FREEFALL */;
		
		case 6:
			return Global_262145.f_11525 /* Tunable: CHALLENGE_TIME_LIMIT_LOWEST_PARACHUTE_DEPLOY */;
		
		case 10:
			return Global_262145.f_11527 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_FALL_WITHOUT_DYING */;
		
		case 11:
			return Global_262145.f_11529 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_TIME_LOW_FLYING_UNDER_20M */;
		
		case 12:
			return Global_262145.f_11530 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_TIME_LOW_FLYING_INVERTED_UNDER_100M */;
		
		case 15:
			return Global_262145.f_11534 /* Tunable: CHALLENGE_TIME_LIMIT_PVP_HIGHEST_NO_OF_PLAYER_HEADSHOTS */;
		
		case 16:
			return Global_262145.f_11535 /* Tunable: CHALLENGE_TIME_LIMIT_PVP_HIGHEST_NO_OF_PLAYER_DRIVE_BY_KILLS */;
		
		case 17:
			return Global_262145.f_11536 /* Tunable: CHALLENGE_TIME_LIMIT_PVP_HIGHEST_NO_OF_PLAYER_MELEE_KILLS */;
		
		case 18:
			return Global_262145.f_11537 /* Tunable: CHALLENGE_TIME_LIMIT_PVP_SNIPER_PLAYER_KILLS */;
		
		case 13:
			return Global_262145.f_11528 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_VEHICLE_BAIL_WITHOUT_DYING */;
		
		case 14:
			return Global_262145.f_11531 /* Tunable: CHALLENGE_TIME_LIMIT_BRIDGES_FLOWN_UNDER */;
		
		case 2:
			return Global_262145.f_10729 /* Tunable: CHALLENGETIME_HIGHEST_SPEED */;
		
		case 7:
			return Global_262145.f_11526 /* Tunable: CHALLENGE_TIME_LIMIT_HIGHEST_VEHICLES_STOLEN */;
		
		case 9:
			return Global_262145.f_11532 /* Tunable: CHALLENGE_TIME_LIMIT_REVERSE_DRIVING_WITHOUT_CRASHING */;
		
		case 5:
			return Global_262145.f_10730 /* Tunable: CHALLENGETIME_LONGEST_NO_CRASH */;
		
		case 4:
			return Global_262145.f_10728 /* Tunable: CHALLENGETIME_LONGEST_WHEELIE */;
		
		default:
	}
	return -1;
}

int func_29()//Position - 0xF22
{
	return Global_262145.f_11494 /* Tunable: CHALLENGE_EVENT_START_COUNTDOWN_TIME */;
}

void func_30(int iParam0)//Position - 0xF31
{
	Local_152.f_37 = iParam0;
}

int func_31()//Position - 0xF40
{
	struct<2> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	if (func_43() && ((Local_152.f_37 == 0 || func_5(Local_152.f_3)) || Local_152.f_54 < 10))
	{
		Var0 = { Local_152.f_67[iLocal_128 /*2*/] };
		if (func_42(Var0.f_0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
			{
				if (func_40(Local_152.f_3, iLocal_128, &Var1, &fVar2))
				{
					Local_152.f_55[iLocal_128] = func_36(iLocal_128);
					if (BitTest(Local_1518[Local_152.f_55[iLocal_128] /*12*/].f_2, iLocal_128))
					{
						if (func_33(&(Local_152.f_67[iLocal_128 /*2*/].f_1), Var0.f_0, Var1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_152.f_67[iLocal_128 /*2*/].f_1), true, 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), 1);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), true);
							VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), false);
							func_32(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), 1);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), "MPBitset");
								}
								MISC::SET_BIT(&iVar3, 10);
								MISC::SET_BIT(&iVar3, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_152.f_55[iLocal_128] = -1;
							Local_152.f_54++;
						}
					}
				}
			}
		}
		iLocal_128++;
		if (iLocal_128 >= 10)
		{
			iLocal_128 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)//Position - 0x112C
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, 13);
		}
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

int func_33(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x117A
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
		Global_2793044.f_6736 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam8);
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
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_34(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_34(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x1283
{
	int iVar0;
	
	if (func_35(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2635559.f_2921[1 /*6*/].f_5 == iParam3 && Global_2635559.f_2921[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2635559.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635559.f_2921[iVar0 /*6*/] = { Global_2635559.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635559.f_2921[1 /*6*/] = { Param0 };
		Global_2635559.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2635559.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2635559.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_35(int iParam0, struct<3> Param1, int iParam2)//Position - 0x1356
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
			if (Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_36(int iParam0)//Position - 0x13F4
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar5;
	bool bVar6;
	
	fVar2 = 1000000f;
	if (func_39(iParam0, &Var4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (func_12(bVar6, 1, 1))
				{
					fVar3 = func_37(func_38(bVar6), Var4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_37(struct<3> Param0, struct<3> Param1)//Position - 0x146D
{
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	return SYSTEM::VDIST(Param0, Param1);
}

Vector3 func_38(bool bParam0)//Position - 0x148B
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_39(int iParam0, var uParam1, var uParam2)//Position - 0x149E
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.5818f, -2943.7695f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.8894f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.3267f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.6503f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.4066f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.5889f, 2925.5627f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.4181f, -2442.9897f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_40(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x161A
{
	if (func_5(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -1729.5818f, -2943.7695f, 12.9443f };
				*uParam3 = 300.078f;
				break;
			
			case 1:
				*uParam2 = { 677.2984f, 769.7758f, 204.6846f };
				*uParam3 = 82.8903f;
				break;
			
			case 2:
				*uParam2 = { 1073.972f, 3003.8894f, 40.5508f };
				*uParam3 = 333.2717f;
				break;
			
			case 3:
				*uParam2 = { 1928.635f, 4702.3267f, 40.1958f };
				*uParam3 = 327.9112f;
				break;
			
			case 4:
				*uParam2 = { 1278.6503f, 6579.366f, 1.505f };
				*uParam3 = 84.26f;
				break;
			
			case 5:
				*uParam2 = { -1700.4066f, -829.8932f, 8.2542f };
				*uParam3 = 70.1811f;
				break;
			
			case 6:
				*uParam2 = { -2733.5889f, 2925.5627f, 1.2152f };
				*uParam3 = 173.6421f;
				break;
			
			case 7:
				*uParam2 = { 1493.4181f, -2442.9897f, 64.9693f };
				*uParam3 = 52.9918f;
				break;
			
			case 8:
				*uParam2 = { 569.0449f, -772.5692f, 10.4088f };
				*uParam3 = 179.3501f;
				break;
			
			case 9:
				*uParam2 = { -905.1526f, 5548.172f, 5.5251f };
				*uParam3 = 95.8361f;
				break;
			
			default:
				return 0;
		}
	}
	else if (func_41(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -3132.9324f, 1130.5336f, 19.683f };
				*uParam3 = 168.7723f;
				break;
			
			case 1:
				*uParam2 = { -1008.9172f, -1640.0266f, 3.4035f };
				*uParam3 = 235.1491f;
				break;
			
			case 2:
				*uParam2 = { 1075.0626f, -2445.1055f, 28.2896f };
				*uParam3 = 100.2369f;
				break;
			
			case 3:
				*uParam2 = { 1101.1985f, -266.9387f, 68.3046f };
				*uParam3 = 359.2015f;
				break;
			
			case 4:
				*uParam2 = { 2658.8777f, 1667.5808f, 23.4886f };
				*uParam3 = 90.4833f;
				break;
			
			case 5:
				*uParam2 = { -399.1095f, 874.6328f, 230.2586f };
				*uParam3 = 107.5929f;
				break;
			
			case 6:
				*uParam2 = { 156.5429f, 3117.2131f, 41.5677f };
				*uParam3 = 218.5338f;
				break;
			
			case 7:
				*uParam2 = { -2242.9233f, 4315.7485f, 46.7647f };
				*uParam3 = 236.8359f;
				break;
			
			case 8:
				*uParam2 = { -143.7363f, 6500.5728f, 28.7366f };
				*uParam3 = 116.1312f;
				break;
			
			case 9:
				*uParam2 = { 1939.4747f, 4628.652f, 39.3984f };
				*uParam3 = 350.0428f;
				break;
			
			default:
				return 0;
			}
	}
	return 1;
}

int func_41(int iParam0)//Position - 0x191E
{
	switch (iParam0)
	{
		case 4:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

bool func_42(int iParam0)//Position - 0x193E
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_43()//Position - 0x195C
{
	return (func_5(Local_152.f_3) || func_41(Local_152.f_3));
}

int func_44(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x197C
{
	if (func_119(PLAYER::PLAYER_ID(), 0) || func_116(PLAYER::PLAYER_ID(), 0))
	{
		if (func_115(PLAYER::PLAYER_ID()) || func_113(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	if (func_47(&(Global_1836858.f_18)))
	{
		if (!func_1(&(Global_1836858.f_18), 7500, 0))
		{
			return 0;
		}
		func_46(&(Global_1836858.f_18));
	}
	if (func_45())
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 0);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_45()//Position - 0x1A73
{
	return BitTest(Global_1836858.f_1, 0);
}

void func_46(var uParam0)//Position - 0x1A83
{
	uParam0->f_1 = 0;
}

bool func_47(var uParam0)//Position - 0x1A90
{
	return uParam0->f_1;
}

void func_48(bool bParam0, int iParam1)//Position - 0x1A9C
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
			break;
		
		default:
			iVar1 = func_49(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
			}
			break;
	}
}

int func_49(int iParam0)//Position - 0x1AF5
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
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

bool func_50(int iParam0, int iParam1)//Position - 0x1B58
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = func_49(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

void func_51(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1B81
{
	if ((!BitTest(Global_1836858.f_1, 2) && !func_8(PLAYER::PLAYER_ID())) && !func_7(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1" /* GXT: EVENT OVER */;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2" /* GXT: Not enough players in the session */;
			}
			else
			{
				sParam1 = "FMEVEN_NUM3" /* GXT: Not enough players available in the session */;
			}
		}
		func_52(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836858.f_1), 2);
	}
}

int func_52(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1BF5
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
	func_112(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_110(&(Var0.f_69), iParam7);
	}
	return func_53(&Var0);
}

int func_53(var uParam0)//Position - 0x1C75
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672505.f_2835)
		{
			return 0;
		}
	}
	func_68(uParam0, uParam0->f_17);
	func_65(uParam0);
	if (func_64())
	{
		func_65(uParam0);
	}
	if (func_63(uParam0->f_1))
	{
		func_56();
		if (Global_2672505.f_2513[0 /*80*/].f_2 == 0)
		{
			Global_2672505.f_2513[0 /*80*/] = { *uParam0 };
			if (func_55(uParam0->f_69, 8192))
			{
				Global_1935182 = 1;
			}
			return 1;
		}
		if (((Global_2672505.f_2513[0 /*80*/].f_1 == 13 || Global_2672505.f_2513[0 /*80*/].f_1 == 53) || Global_2672505.f_2513[0 /*80*/].f_1 == 54) || Global_2672505.f_2513[0 /*80*/].f_1 == 58)
		{
			Global_2672505.f_2513[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2672505.f_2513[iVar0 + 1 /*80*/] = { Global_2672505.f_2513[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2672505.f_2513[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2672505.f_2513[iVar0 /*80*/].f_2 == 0)
		{
			Global_2672505.f_2513[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_56();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_110(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 2);
				Global_2672505.f_2513[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_55(uParam0->f_69, 128))
			{
				if (func_54(Global_2672505.f_2513[iVar0 /*80*/].f_1))
				{
					Global_2672505.f_2513[iVar0 /*80*/].f_2 = 5;
					func_110(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x1E5A
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

bool func_55(var uParam0, int iParam1)//Position - 0x1EE0
{
	return (uParam0 && iParam1) != 0;
}

void func_56()//Position - 0x1EEF
{
	bool bVar0;
	
	if (Global_2672505.f_2836)
	{
		return;
	}
	if (!Global_78827)
	{
		Global_78827 = 1;
		bVar0 = true;
	}
	func_57();
	if (bVar0)
	{
		Global_78827 = 0;
	}
}

void func_57()//Position - 0x1F22
{
	Global_2672505.f_2837 = 0;
	Global_2672505.f_2837.f_582 = 0;
	func_61(&(Global_2672505.f_2837.f_1));
	Global_2672505.f_2837.f_1.f_1 = 0;
	func_58(&(Global_2672505.f_2837.f_1), 1);
}

void func_58(var uParam0, int iParam1)//Position - 0x1F64
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
	if (!Global_78827)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78828)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_60(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_59(0);
}

void func_59(int iParam0)//Position - 0x2012
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
}

int func_60(bool bParam0)//Position - 0x2026
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_61(var uParam0)//Position - 0x204E
{
	func_62(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_62(var uParam0)//Position - 0x2078
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

int func_63(int iParam0)//Position - 0x20F7
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

bool func_64()//Position - 0x220F
{
	return Global_2683862.f_19;
}

void func_65(var uParam0)//Position - 0x221D
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_72 = func_66();
	}
}

int func_66()//Position - 0x2238
{
	return 21;
}

int func_67(int iParam0)//Position - 0x2242
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

void func_68(var uParam0, bool bParam1)//Position - 0x22D4
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_109() || !func_12(bParam1, 0, 1))
	{
		return;
	}
	if (func_54(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_69(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_69(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x232B
{
	int iVar0;
	int iVar1;
	
	if (func_107(bParam0) && !bParam4)
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
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_108449[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_107(PLAYER::PLAYER_ID()) || (func_106() && func_105())) && !BitTest(Global_2793044.f_4690, 31)) && !bParam4)
	{
		iVar1 = func_104();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_12(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_108449[iParam1] != -1)
							{
								return func_102(iParam1, bParam0, 0);
							}
							else
							{
								return func_84(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_84(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_108449[iParam1] != -1)
				{
					return func_102(iParam1, bParam0, 0);
				}
				else
				{
					return func_70(0, -1, 0);
				}
			}
			else
			{
				return func_70(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_108449[iParam1] != -1)
		{
			return func_102(iParam1, bParam0, 0);
		}
		else
		{
			return func_84(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_84(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_70(bool bParam0, int iParam1, bool bParam2)//Position - 0x2508
{
	return func_71(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_71(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x251E
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_83() || (func_82() && func_80())) && Global_1665699.f_1)
	{
		if (bParam1)
		{
			return func_79(iParam2, iVar0);
		}
		else
		{
			return func_79(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_76(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_75(1);
				}
				else
				{
					return func_75(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_72(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_72(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_75(1);
	}
	return func_75(0);
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x2620
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1, iParam3);
	if (func_73(Global_4718592.f_113724, 1))
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

int func_73(int iParam0, bool bParam1)//Position - 0x2738
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_166301 == 65)
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
		if (iParam0 == Global_262145.f_9486[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2)//Position - 0x2789
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
			if (!func_76(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(bool bParam0)//Position - 0x27D1
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_76(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x27E8
{
	bool bVar0;
	bool bVar1;
	
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
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058070.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, bVar0))
			{
				bVar1 = Global_1058070.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_77(iParam0, bVar0, iParam1, bVar1) || !func_77(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_77(iParam0, bVar0, iParam1, bVar1) || !func_77(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_77(iParam0, bVar0, iParam1, bVar1) || !func_77(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_77(iParam0, bVar0, iParam1, bVar1) || !func_77(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 0);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 1);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 2);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 4);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 5);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 6);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 8);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 9);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 10);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 12);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 13);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 14);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_77(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2B33
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		bVar1 = iVar5;
		if (((!func_12(bVar1, 1, 1) || func_14(bVar1, 0)) || BitTest(Global_2657589[bVar1 /*466*/].f_199, 2)) || func_78(bVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("MP_F_Freemode_01") || iVar4 == joaat("MP_M_Freemode_01"))
				{
					if (iVar3 == joaat("MP_F_Freemode_01") || iVar3 == joaat("MP_M_Freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_78(bool bParam0)//Position - 0x2C5F
{
	return BitTest(Global_1853910[bParam0 /*862*/].f_36.f_18, 14);
}

int func_79(int iParam0, int iParam1)//Position - 0x2C77
{
	if (iParam0 == -1)
	{
		iParam0 = func_74(iParam1, iParam0, 4);
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

int func_80()//Position - 0x2CC5
{
	if (func_81())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_170488, 4);
}

bool func_81()//Position - 0x2CE4
{
	return BitTest(Global_4718592.f_160050, 12);
}

bool func_82()//Position - 0x2CF9
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_170488, 0);
	}
	return ((BitTest(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_83()//Position - 0x2D40
{
	if (func_81() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_84(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2D5D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853910[PLAYER::PLAYER_ID() /*862*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
	if (iVar2 > -1)
	{
		if (Global_1853910[iVar2 /*862*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_93())
			{
				iVar3 = func_89(bParam0);
				if (!iVar3 == -1)
				{
					return func_87(iVar3);
				}
			}
			if ((func_86(bParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_76(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_75(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_85(1);
			}
			else
			{
				return func_71(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836597 || Global_1836587) || Global_1853910[bParam0 /*862*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836597 == 1 && Global_1836607 == 0))
			{
				return func_75(1);
			}
			else
			{
				return func_71(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836591 && Global_1836078.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_89(bParam0);
	if (!iVar4 == -1)
	{
		return func_87(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_85(bool bParam0)//Position - 0x2EF5
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_86(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2F0C
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
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

int func_87(int iParam0)//Position - 0x2F84
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_88(iParam0);
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

var func_88(int iParam0)//Position - 0x3047
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_89(bool bParam0)//Position - 0x305E
{
	if (!bParam0 == func_109())
	{
		if (func_91(bParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_90(bParam0)];
		}
	}
	return -1;
}

int func_90(int iParam0)//Position - 0x3090
{
	if (iParam0 != func_109())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_109();
}

bool func_91(bool bParam0, bool bParam1)//Position - 0x30B3
{
	if (!bParam1)
	{
		if (func_92(bParam0))
		{
			return 0;
		}
	}
	return Global_1894573[bParam0 /*608*/].f_10 != func_109();
}

int func_92(bool bParam0)//Position - 0x30DE
{
	if (bParam0 != func_109())
	{
		if (Global_1894573[bParam0 /*608*/].f_10 != func_109())
		{
			return Global_1894573[bParam0 /*608*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_93()//Position - 0x3113
{
	if ((((((func_101() || func_100()) || func_64()) || func_99()) || func_98()) || func_96()) || func_94())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_94()//Position - 0x317B
{
	return func_95(Global_4718592.f_113724);
}

int func_95(int iParam0)//Position - 0x3191
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31715[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_96()//Position - 0x31C0
{
	return func_97(Global_4718592.f_113724);
}

int func_97(int iParam0)//Position - 0x31D6
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31051[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_98()//Position - 0x3210
{
	return Global_2683862.f_24;
}

bool func_99()//Position - 0x321E
{
	return Global_2683862.f_21;
}

var func_100()//Position - 0x322C
{
	return Global_2683862.f_18;
}

var func_101()//Position - 0x323A
{
	return Global_2683862.f_17;
}

int func_102(int iParam0, bool bParam1, bool bParam2)//Position - 0x3248
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058070.f_14[iParam0];
	if (func_93())
	{
		iVar2 = func_89(bParam1);
		if (!iVar2 == -1)
		{
			return func_87(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_109())
	{
		if (Global_4718592.f_108449[iParam0] != -1 && Global_4718592.f_108449[iParam0] <= 4)
		{
			if (Global_4718592.f_108449[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_108449[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_108449[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_108449[iParam0] == 4)
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
				iVar0 = Global_4718592.f_108449[iParam0];
			}
		}
		else
		{
			iVar0 = func_71(bParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_103(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_76(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0, -1))
		{
			iVar0 = func_85(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_103(int iParam0)//Position - 0x33C8
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_166456;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_166457;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_166458;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_166459;
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

var func_104()//Position - 0x349D
{
	return Global_2621446.f_2;
}

var func_105()//Position - 0x34AB
{
	return BitTest(Global_2621446, 4);
}

var func_106()//Position - 0x34B9
{
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_107(int iParam0)//Position - 0x34D3
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_108())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_108()//Position - 0x3512
{
	return BitTest(Global_2621446, 3);
}

int func_109()//Position - 0x3520
{
	return -1;
}

void func_110(var uParam0, int iParam1)//Position - 0x3529
{
	func_111(uParam0, iParam1);
}

void func_111(var uParam0, var uParam1)//Position - 0x3539
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_112(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x354A
{
	uParam1->f_17 = func_109();
	uParam1->f_18 = func_109();
	uParam1->f_19 = func_109();
	uParam1->f_20 = func_109();
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

bool func_113(bool bParam0)//Position - 0x35C8
{
	return func_114(bParam0, 20);
}

var func_114(int iParam0, int iParam1)//Position - 0x35D8
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_115(bool bParam0)//Position - 0x35F0
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_114(bParam0, 9);
	}
	return 0;
}

int func_116(int iParam0, int iParam1)//Position - 0x360E
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 && func_117(Global_1894573[iParam0 /*608*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1)
	{
		if (func_117(Global_1894573[iParam0 /*608*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0)//Position - 0x3674
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
	return func_118(iParam0, 0);
	return 0;
}

int func_118(int iParam0, int iParam1)//Position - 0x36CE
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

int func_119(int iParam0, int iParam1)//Position - 0x3723
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_120(int iParam0)//Position - 0x375E
{
	Local_152.f_0 = iParam0;
}

int func_121()//Position - 0x376B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_152.f_4[iVar0] = -1;
		iVar0++;
	}
	func_46(&(Local_152.f_39));
	func_126();
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_152.f_55[iVar0] = func_36(iVar0);
			iVar0++;
		}
		func_122();
	}
	return 1;
}

void func_122()//Position - 0x37CB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_41(Local_152.f_3))
		{
			Local_152.f_67[iVar0 /*2*/] = func_125();
		}
		else
		{
			Local_152.f_67[iVar0 /*2*/] = func_123();
		}
		iVar0++;
	}
}

int func_123()//Position - 0x380F
{
	int iVar0;
	
	switch (Local_152.f_3)
	{
		case 12:
			return func_124();
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

int func_124()//Position - 0x385D
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("stunt");
		
		case 1:
			return joaat("besra");
		
		default:
	}
	return 0;
}

int func_125()//Position - 0x3891
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("sanchez");
		
		case 1:
			return joaat("pcj");
		
		default:
	}
	return 0;
}

void func_126()//Position - 0x38C5
{
	int iVar0;
	
	iVar0 = func_131();
	Local_152.f_3 = iVar0;
	func_127(func_129(133, iVar0, 0, 0));
}

void func_127(int iParam0)//Position - 0x38E8
{
	struct<3> Var0;
	int iVar1;
	
	Var0.f_0 = 42967925;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = func_128(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

var func_128(int iParam0, bool bParam1)//Position - 0x3922
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_12(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_14(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3987
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
	if (func_130(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_130(int iParam0)//Position - 0x4207
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
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		default:
	}
	return -1;
}

int func_131()//Position - 0x43CF
{
	int iVar0[19];
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0[0] = Global_262145.f_11823 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_JUMP */;
	iVar0[1] = Global_262145.f_11496 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_FREEFALL */;
	iVar0[2] = Global_262145.f_11827 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_HIGHEST_SPEED */;
	iVar0[3] = Global_262145.f_11825 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_STOPPIE */;
	iVar0[4] = Global_262145.f_11826 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_WHEELIE */;
	iVar0[5] = Global_262145.f_11828 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_NO_CRASH */;
	iVar0[6] = Global_262145.f_11497 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LOWEST_PARACHUTE_DEPLOY */;
	iVar0[7] = Global_262145.f_11498 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_HIGHEST_VEHICLES_STOLEN */;
	iVar0[8] = Global_262145.f_11824 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_MOST_NEAR_MISSES */;
	iVar0[9] = Global_262145.f_11504 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_REVERSE_DRIVING_WITHOUT_CRASHING */;
	iVar0[10] = Global_262145.f_11499 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_FALL_WITHOUT_DYING */;
	iVar0[11] = Global_262145.f_11501 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_TIME_LOW_FLYING_UNDER_20M */;
	iVar0[12] = Global_262145.f_11502 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_TIME_LOW_FLYING_INVERTED_UNDER_100M */;
	iVar0[13] = Global_262145.f_11500 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_VEHICLE_BAIL_WITHOUT_DYING */;
	iVar0[14] = Global_262145.f_11503 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_BRIDGES_FLOWN_UNDER */;
	iVar0[15] = Global_262145.f_11506 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_PVP_HIGHEST_NO_OF_PLAYER_HEADSHOTS */;
	iVar0[16] = Global_262145.f_11507 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_PVP_HIGHEST_NO_OF_PLAYER_DRIVE_BY_KILLS */;
	iVar0[17] = Global_262145.f_11508 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_PVP_HIGHEST_NO_OF_PLAYER_MELEE_KILLS */;
	iVar0[18] = Global_262145.f_11509 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_PVP_SNIPER_PLAYER_KILLS */;
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_134(iVar2) || func_132(133, iVar2, 0, 0))
		{
			iVar0[iVar2] = 0f;
		}
		else
		{
			fVar1 = (fVar1 + iVar0[iVar2]);
		}
		iVar2++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (fVar3 <= iVar0[iVar2])
		{
			return iVar2;
		}
		fVar3 = (fVar3 - iVar0[iVar2]);
		iVar2++;
	}
	return func_131();
}

int func_132(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x454C
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
	iVar1 = func_133(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8577 /* Tunable: NUMBER_OF_SCRIPTS_IN_LAUNCH_HISTORY_LIST */)
		{
			if (Global_2756257.f_136[iVar0 /*2*/] == iVar1 && Global_2756257.f_136[iVar0 /*2*/].f_1 == func_129(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0)//Position - 0x45D1
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

int func_134(int iParam0)//Position - 0x4670
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10717 /* Tunable: DISABLE_LONGEST_JUMP */;
		
		case 1:
			return Global_262145.f_11510 /* Tunable: CHALLENGE_DISABLE_LONGEST_FREEFALL */;
		
		case 6:
			return Global_262145.f_11511 /* Tunable: CHALLENGE_DISABLE_LOWEST_PARACHUTE_DEPLOY */;
		
		case 7:
			return Global_262145.f_11512 /* Tunable: CHALLENGE_DISABLE_HIGHEST_VEHICLES_STOLEN */;
		
		case 8:
			return Global_262145.f_10718 /* Tunable: DISABLE_MOST_NEAR_MISSES */;
		
		case 3:
			return Global_262145.f_10719 /* Tunable: DISABLE_LONGEST_STOPPIE */;
		
		case 4:
			return Global_262145.f_10720 /* Tunable: DISABLE_LONGEST_WHEELIE */;
		
		case 2:
			return Global_262145.f_10721 /* Tunable: DISABLE_HIGHEST_SPEED */;
		
		case 5:
			return Global_262145.f_10723 /* Tunable: DISABLE_LONGEST_NO_CRASH */;
		
		case 9:
			return Global_262145.f_11518 /* Tunable: CHALLENGE_DISABLE_REVERSE_DRIVING_WITHOUT_CRASHING */;
		
		case 10:
			return Global_262145.f_11513 /* Tunable: CHALLENGE_DISABLE_LONGEST_FALL_WITHOUT_DYING */;
		
		case 11:
			return Global_262145.f_11515 /* Tunable: CHALLENGE_DISABLE_LONGEST_TIME_LOW_FLYING_UNDER_20M */;
		
		case 12:
			return Global_262145.f_11516 /* Tunable: CHALLENGE_DISABLE_LONGEST_TIME_LOW_FLYING_INVERTED_UNDER_100M */;
		
		case 15:
			return Global_262145.f_11520 /* Tunable: CHALLENGE_DISABLE_PVP_HIGHEST_NO_OF_PLAYER_HEADSHOTS */;
		
		case 16:
			return Global_262145.f_11521 /* Tunable: CHALLENGE_DISABLE_PVP_HIGHEST_NO_OF_PLAYER_DRIVE_BY_KILLS */;
		
		case 17:
			return Global_262145.f_11522 /* Tunable: CHALLENGE_DISABLE_PVP_HIGHEST_NO_OF_PLAYER_MELEE_KILLS */;
		
		case 18:
			return Global_262145.f_11523 /* Tunable: CHALLENGE_DISABLE_PVP_SNIPER_PLAYER_KILLS */;
		
		case 13:
			return Global_262145.f_11514 /* Tunable: CHALLENGE_DISABLE_LONGEST_VEHICLE_BAIL_WITHOUT_DYING */;
		
		case 14:
			return Global_262145.f_11517 /* Tunable: CHALLENGE_DISABLE_BRIDGES_FLOWN_UNDER */;
		
		default:
	}
	return 1;
}

void func_135()//Position - 0x47B0
{
	bool bVar0;
	
	if (func_43())
	{
		bVar0 = false;
		while (bVar0 < 10)
		{
			if (Local_152.f_55[bVar0] == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (func_136(bVar0))
				{
					if (!BitTest(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
					{
						MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
					}
				}
				else if (BitTest(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
				}
			}
			else if (BitTest(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
			{
				MISC::CLEAR_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
			}
			bVar0++;
		}
	}
}

int func_136(int iParam0)//Position - 0x4858
{
	struct<3> Var0;
	var uVar1;
	
	if (func_39(iParam0, &Var0, &uVar1))
	{
		if (func_137(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_137(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)//Position - 0x489D
{
	Global_2635559.f_2 = 0;
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
	Global_2635559.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (fParam12 > 0f)
	{
		if (func_142(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_138(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635559.f_2++;
	return 1;
}

int func_138(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x49AF
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_140(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam1))
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
		if (func_12(bVar1, 1, 1))
		{
			if (!func_14(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_139(bVar1) || !bParam8) && !Global_2657589[bVar1 /*466*/].f_270)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_140(bVar1), Param0, true) <= (fVar2 + fParam1))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_140(bVar1), Param0, true) <= (fVar2 + fParam1))
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

int func_139(bool bParam0)//Position - 0x4B67
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2657589[bParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

Vector3 func_140(bool bParam0)//Position - 0x4B92
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_64() && Global_1853910[iVar0 /*862*/].f_832) && !func_141(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_38(bParam0);
}

int func_141(struct<3> Param0)//Position - 0x4BE5
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_142(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)//Position - 0x4C0F
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam6 == 0)
		{
			if (func_12(bVar1, bParam2, bParam3))
			{
				if (iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_139(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_143(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_38(bVar1), Param0, true) < fParam1)
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

int func_143(bool bParam0)//Position - 0x4D13
{
	if (func_146(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2764201 = { func_145(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2764201))
	{
		return 1;
	}
	if (func_144(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0, bool bParam1)//Position - 0x4D5A
{
	int iVar0;
	
	iVar0 = func_90(iParam0);
	if (!iVar0 == func_109())
	{
		if (iVar0 == func_90(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_145(bool bParam0)//Position - 0x4D85
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_146(bool bParam0, bool bParam1)//Position - 0x4D9C
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2764201 = { func_145(bParam0) };
		Global_2764214 = { func_145(bParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764201))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764214))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764131, 35, &Global_2764201);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764166, 35, &Global_2764214);
				if (Global_2764131 == Global_2764166)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_147()//Position - 0x4E09
{
	float fVar0;
	float fVar1;
	
	func_706();
	func_705();
	if (func_703())
	{
		func_585();
	}
	if (!func_7(PLAYER::PLAYER_ID()))
	{
		if (func_558(0, 1, 1))
		{
			if (BitTest(uLocal_123, 6))
			{
				MISC::CLEAR_BIT(&uLocal_123, 6);
			}
			switch (Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3)
			{
				case 0:
					if (Local_152.f_37 < 2)
					{
						if (Local_152.f_37 > 0)
						{
							if (Local_152.f_3 != -1)
							{
								func_557(1);
								func_556(1);
							}
						}
					}
					else
					{
						func_556(2);
					}
					break;
				
				case 1:
					func_550(9);
					if (Local_1519.f_8 == 0)
					{
						Local_1519.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
					if (Local_152.f_37 >= 2)
					{
						func_556(2);
						Local_1519.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
					if (func_43())
					{
						func_550(0);
					}
					func_548((func_29() - func_549(&(Local_152.f_43), 0, 0)));
					func_545(func_547((func_29() - func_549(&(Local_152.f_43), 0, 0)), 0), func_546(Local_152.f_3));
					func_475(0, func_544());
					func_459();
					func_437();
					if (func_436())
					{
						func_435();
					}
					break;
				
				case 2:
					if (Local_152.f_37 > 2)
					{
						func_557(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_434())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_416(133, fVar0, fVar1, 0, 0, 0, 0);
						func_415(Local_152.f_3, 1);
						func_414(23, 1);
						if (Local_1519.f_8 == 0)
						{
							Local_1519.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
						if (Local_1519.f_9 == 0)
						{
							Local_1519.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
						func_410();
						VEHICLE::SET_DISABLE_BMX_EXTRA_TRICK_FORCES(1);
						if (func_434())
						{
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							PLAYER::SET_MAX_WANTED_LEVEL(0);
						}
						if (Local_152.f_3 == 14)
						{
							func_409(&Local_143);
						}
						func_408();
						if (!func_7(PLAYER::PLAYER_ID()))
						{
							func_52(63, "AMCH_STARTED" /* GXT: CHALLENGE STARTED */, func_407(Local_152.f_3), func_66(), -1, func_66(), 1, 0);
							if (func_404("AMCH_WARN" /* GXT: The ~a~ Challenge will begin shortly. ~a~ The top 3 players will win cash and RP. */, func_406(Local_152.f_3), func_405(Local_152.f_3)))
							{
								HUD::CLEAR_HELP(true);
							}
						}
						if (func_43())
						{
							func_386(678f, 794f, 206f, 8f, 0);
							func_386(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_386(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_556(3);
					}
					break;
				
				case 3:
					if (Local_152.f_37 > 3)
					{
						iLocal_125 = 0;
						func_556(4);
					}
					else
					{
						if (!BitTest(Local_152.f_2, 1))
						{
							func_344();
							func_341();
							func_340();
						}
						if (func_339(0) && !func_20(0))
						{
							func_338();
						}
					}
					if (func_434())
					{
						PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
					}
					func_337();
					func_312();
					func_585();
					func_475(0, 1);
					func_459();
					func_437();
					func_550(2);
					func_550(5);
					func_550(7);
					break;
				
				case 4:
					if (func_300(&uLocal_135, !BitTest(Local_152.f_2, 0)) || BitTest(Local_152.f_2, 0))
					{
						if (func_5(Local_152.f_3))
						{
							if (Local_152.f_37 == 5)
							{
								func_556(5);
							}
						}
						else
						{
							func_556(6);
						}
					}
					func_287();
					func_179();
					func_312();
					func_585();
					func_475(1, 1);
					func_408();
					break;
				
				case 5:
					if (Local_152.f_37 > 5)
					{
						func_556(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_174();
		}
	}
	else
	{
		func_174();
	}
	func_154();
	func_149();
	func_148();
}

void func_148()//Position - 0x518C
{
	struct<2> Var0;
	int iVar1;
	
	if (func_43())
	{
		Var0 = { Local_152.f_67[iLocal_142 /*2*/] };
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
		{
			iVar1 = NETWORK::NET_TO_VEH(Var0.f_1);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
		iLocal_142++;
		if (iLocal_142 >= 10)
		{
			iLocal_142 = 0;
			iLocal_151 = iLocal_150;
			iLocal_150 = 0;
		}
	}
}

void func_149()//Position - 0x51F8
{
	if (Local_152.f_37 == 5)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_152.f_67[iLocal_142 /*2*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_142 /*2*/].f_1), false))
			{
				if (!BitTest(uLocal_148, iLocal_142))
				{
					MISC::SET_BIT(&uLocal_148, iLocal_142);
					iLocal_149[iLocal_142] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_149[iLocal_142], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_142 /*2*/].f_1), "GTAO_FM_Events_Soundset", false, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_149[iLocal_142], "Time", 30f);
				}
				if ((30000 - func_549(&(Local_152.f_45), 0, 0)) >= 0)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_142 /*2*/].f_1), false))
					{
						func_550(1);
						iLocal_150 = 1;
					}
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_152.f_67[iLocal_142 /*2*/].f_1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_142 /*2*/].f_1));
					NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_142 /*2*/].f_1), true, false, -1);
				}
			}
			else if (BitTest(uLocal_148, iLocal_142) && !AUDIO::HAS_SOUND_FINISHED(iLocal_149[iLocal_142]))
			{
				AUDIO::STOP_SOUND(iLocal_149[iLocal_142]);
			}
		}
		if (iLocal_151)
		{
			if (!func_107(PLAYER::PLAYER_ID()))
			{
				func_151(func_547((30000 - func_549(&(Local_152.f_45), 0, 0)), 0), "HTV_DESTR" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				func_150();
			}
		}
	}
}

void func_150()//Position - 0x5374
{
	Global_1655472.f_1172 = 1;
}

void func_151(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x5384
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_152(7, iVar0);
		Global_1655472.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1655472.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655472.f_4659.f_172[iVar0] = iParam2;
		Global_1655472.f_4659.f_216[iVar0] = iParam3;
		Global_1655472.f_4659.f_183[iVar0] = iParam4;
		Global_1655472.f_4659.f_194[iVar0] = iParam5;
		Global_1655472.f_4659.f_249[iVar0] = iParam6;
		Global_1655472.f_4659.f_260[iVar0] = iParam7;
		Global_1655472.f_4659.f_205[iVar0] = iParam8;
		Global_1655472.f_4659.f_314[iVar0] = iParam9;
		Global_1655472.f_4659.f_325[iVar0] = iParam10;
		Global_1655472.f_4659.f_357[iVar0] = iParam11;
		Global_1655472.f_4659.f_238[iVar0] = iParam12;
		Global_1655472.f_4659.f_271[iVar0] = iParam13;
		Global_1655472.f_4659.f_368[iVar0] = iParam14;
		Global_1655472.f_4659.f_379[iVar0] = iParam15;
		Global_1655472.f_4659.f_390[iVar0] = iParam16;
		Global_1655472.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_152(int iParam0, int iParam1)//Position - 0x54E1
{
	MISC::SET_BIT(&(Global_1655472.f_7009[iParam0]), iParam1);
}

int func_153(int iParam0, int iParam1)//Position - 0x54FA
{
	return BitTest(Global_1655472.f_7009[iParam0], iParam1);
}

void func_154()//Position - 0x5510
{
	if (((func_12(PLAYER::PLAYER_ID(), 1, 1) && !func_7(PLAYER::PLAYER_ID())) && !func_170(PLAYER::PLAYER_ID())) && func_558(0, 1, 1))
	{
		if (Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 1)
		{
			func_167(func_169(Local_152.f_3), func_406(Local_152.f_3), 0, 0);
		}
		else if (Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
		{
			if (!BitTest(uLocal_123, 10))
			{
				func_155(func_405(Local_152.f_3), 0);
			}
			else
			{
				func_155("AMCH_OBJLAND" /* GXT: Fly over land. */, 0);
			}
		}
		else
		{
			func_408();
		}
	}
	else
	{
		func_408();
	}
}

void func_155(char* sParam0, bool bParam1)//Position - 0x55B8
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_165(sParam0))
	{
		return;
	}
	func_159();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_158();
	func_157(bParam1);
	func_156();
}

void func_156()//Position - 0x5623
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_157(bool bParam0)//Position - 0x5636
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_158()//Position - 0x565C
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_159()//Position - 0x5681
{
	func_161();
	func_160(0);
}

void func_160(bool bParam0)//Position - 0x5692
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

void func_161()//Position - 0x5724
{
	if (!func_164())
	{
	}
	if (func_163())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
		func_162();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_162()//Position - 0x574D
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

int func_163()//Position - 0x59BF
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_164()//Position - 0x59D5
{
	if (!func_163())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	func_162();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_165(char* sParam0)//Position - 0x59FB
{
	if (!func_163())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_166(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}

bool func_166(char* sParam0)//Position - 0x5A3F
{
	if (!func_163())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_167(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x5A71
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_168(sParam0, sParam1) && Global_1574757.f_56 == Global_1574757.f_58)
	{
		return 0;
	}
	func_159();
	Global_1574757 = 3;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	Global_1574757.f_58 = iParam3;
	Global_1574757.f_56 = iParam3;
	func_158();
	func_157(bParam2);
	func_156();
	return 1;
}

bool func_168(char* sParam0, char* sParam1)//Position - 0x5B1B
{
	if (!func_163())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

char* func_169(int iParam0)//Position - 0x5B73
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPLAND" /* GXT: Find a land vehicle and prepare for the ~a~ Challenge. */;
				}
				break;
			
			case 9:
				if ((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPCAR" /* GXT: Find a car and prepare for the ~a~ Challenge. */;
				}
				break;
			
			case 3:
			case 4:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					return "AMCH_PREPBIKE" /* GXT: Find a motorcycle and prepare for the ~a~ Challenge. */;
				}
				else
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1))
					{
						return "AMCH_PREPBIKE" /* GXT: Find a motorcycle and prepare for the ~a~ Challenge. */;
					}
				}
				break;
			
			case 12:
				if (!PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPPLANE" /* GXT: Find a plane and prepare for the ~a~ Challenge. */;
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPAIR" /* GXT: Find an air vehicle and prepare for the ~a~ Challenge. */;
				}
				break;
			
			case 18:
				if ((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), false) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER"), false)) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE"), false))
				{
					return "AMCH_PREPSNIPER" /* GXT: Find a sniper rifle and prepare for the ~a~ Challenge. */;
				}
				break;
			
			case 16:
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPLAND" /* GXT: Find a land vehicle and prepare for the ~a~ Challenge. */;
				}
				break;
			}
	}
	return "AMCH_PREPARE" /* GXT: Prepare for the ~a~ Challenge. */;
}

int func_170(int iParam0)//Position - 0x5DC1
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_173() && !func_172()) || func_171(PLAYER::PLAYER_ID(), 21)) || func_171(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_47(&(Global_1836858.f_13)))
		{
			if (!func_1(&(Global_1836858.f_13), Global_262145.f_14 /* Tunable: FM_EVENT_PASSIVE_COOL_DOWN */, 0))
			{
				return 1;
			}
			func_46(&(Global_1836858.f_13));
		}
	}
	else if (BitTest(Global_1894573[iParam0 /*608*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1894573[iParam0 /*608*/].f_1, 9);
}

bool func_171(int iParam0, int iParam1)//Position - 0x5E5D
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

bool func_172()//Position - 0x5E73
{
	return Global_1574582.f_1;
}

bool func_173()//Position - 0x5E81
{
	return Global_1574582;
}

void func_174()//Position - 0x5E8D
{
	if (!BitTest(uLocal_123, 6))
	{
		HUD::CLEAR_ALL_HELP_MESSAGES();
		func_475(1, 1);
		AUDIO::STOP_SOUND(iLocal_131);
		MISC::CLEAR_BIT(&uLocal_123, 4);
		func_178();
		func_176();
		HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
		MISC::SET_BIT(&uLocal_123, 6);
		func_175();
	}
}

void func_175()//Position - 0x5ED3
{
	Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_7 = 0;
}

void func_176()//Position - 0x5EE9
{
	if (Global_2644549.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_177();
	}
}

void func_177()//Position - 0x5F02
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2644549.f_6))
	{
		if (!Global_2644549.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2644549 = { Var0 };
	Global_2644549.f_6 = -1;
}

void func_178()//Position - 0x5F5F
{
	struct<6> Var0;
	
	if (Global_2635559.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2635559.f_490 = { Var0 };
	}
}

void func_179()//Position - 0x5F84
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!BitTest(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 0))
	{
		if (func_7(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 0);
			return;
		}
		if (func_170(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 0);
			return;
		}
		func_248(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_1519.f_6 = (Local_1519.f_6 + iVar0);
			if (!Global_262145.f_11975 /* Tunable: CHALLENGE_DISABLE_SHARE_CASH */)
			{
				func_247(10, Local_1519.f_6);
			}
			Global_2696873 = iVar0;
			if (func_246())
			{
				func_234(joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"), iVar0, &uVar3, 0, 1, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_1519.f_7 = (Local_1519.f_7 + iVar1);
			func_233();
			func_180(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_CHALLENGES"), iVar1, 1, -1, 0, 0, 0);
		}
		MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 0);
	}
}

int func_180(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x607B
{
	return func_181(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_181(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x609D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_191(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_187(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_182(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_182(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x6130
{
	struct<3> Var0;
	
	Var0 = { func_185(iParam0, 1) };
	if (iParam0 == func_184(PLAYER::PLAYER_PED_ID()))
	{
		func_183(1);
	}
	func_187(Var0, iParam1, 0, sParam2, iParam3);
}

void func_183(int iParam0)//Position - 0x6164
{
	Global_2672505.f_1681 = iParam0;
}

int func_184(int iParam0)//Position - 0x6175
{
	return iParam0;
}

Vector3 func_185(int iParam0, bool bParam1)//Position - 0x617F
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
	if (iParam0 == func_186(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
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
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
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
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_186(int iParam0)//Position - 0x6243
{
	return iParam0;
}

void func_187(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x624D
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672505.f_1080[iVar0 /*30*/].f_6 == 0 || Global_2672505.f_1080[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672505.f_1080[iVar1 /*30*/] = { Param0 };
			Global_2672505.f_1080[iVar1 /*30*/].f_6 = 1;
			Global_2672505.f_1080[iVar1 /*30*/].f_4 = func_190(Global_2672505.f_1080[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672505.f_1080[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672505.f_1080[iVar1 /*30*/].f_3 = iParam1;
			Global_2672505.f_1080[iVar1 /*30*/].f_8 = iParam2;
			Global_2672505.f_1080[iVar1 /*30*/].f_9 = func_189();
			Global_2672505.f_1080[iVar1 /*30*/].f_10 = func_188();
			StringCopy(&(Global_2672505.f_1080[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2672505.f_1080[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_188()//Position - 0x6364
{
	if (Global_2672505.f_1681)
	{
		Global_2672505.f_1681 = 0;
		return 1;
	}
	Global_2672505.f_1681 = 0;
	return 0;
}

var func_189()//Position - 0x638E
{
	var uVar0;
	
	uVar0 = Global_2672505.f_1683;
	Global_2672505.f_1683 = 1;
	return uVar0;
}

float func_190(struct<3> Param0, var uParam1, var uParam2)//Position - 0x63A9
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

var func_191(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x6442
{
	var uVar0;
	
	uVar0 = func_192(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_192(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x6465
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_225();
	if (func_224(sParam2))
	{
	}
	if (func_223())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_221(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_220(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_218(0, &iVar1);
					break;
				
				case 3:
					func_218(1, &iVar1);
					break;
				
				case 1:
					func_216(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1961999)
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
			func_213(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_202((func_212(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2 != -1)
				{
					func_213(1166, iVar1, -1);
				}
				func_197(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_193((func_195(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_193((func_195(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_193(int iParam0)//Position - 0x65D0
{
	if (func_223())
	{
		Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_5 = iParam0;
		func_194(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_194(int iParam0, int iParam1)//Position - 0x65FB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_195(bool bParam0)//Position - 0x6617
{
	if (bParam0 > -1)
	{
		if (func_12(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_196(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853910[bParam0 /*862*/].f_205.f_5;
			}
		}
		else
		{
			return func_196(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_196(int iParam0)//Position - 0x6668
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

void func_197(int iParam0)//Position - 0x6686
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_145(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_200(func_201(&Var0));
			if (iVar1 == 0)
			{
				func_199(&Global_1665493, iParam0);
				func_198(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1665493);
			}
			else if (iVar1 == 1)
			{
				func_199(&Global_1665494, iParam0);
				func_198(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1665494);
			}
			else if (iVar1 == 2)
			{
				func_199(&Global_1665495, iParam0);
				func_198(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1665495);
			}
			else if (iVar1 == 3)
			{
				func_199(&Global_1665496, iParam0);
				func_198(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1665496);
			}
			else if (iVar1 == 4)
			{
				func_199(&Global_1665497, iParam0);
				func_198(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1665497);
			}
		}
	}
}

void func_198(int iParam0, int iParam1)//Position - 0x675A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1665488 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1665490 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1665490 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1665491 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1665492 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1665493 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1665494 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1665495 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1665496 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1665497 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1665498 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1665499 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1665500 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1665501 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1665502 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1665503 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1665504 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_199(var uParam0, int iParam1)//Position - 0x687F
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_200(int iParam0)//Position - 0x6890
{
	if (iParam0 == Global_1665488)
	{
		return 0;
	}
	else if (iParam0 == Global_1665489)
	{
		return 1;
	}
	else if (iParam0 == Global_1665490)
	{
		return 2;
	}
	else if (iParam0 == Global_1665491)
	{
		return 3;
	}
	else if (iParam0 == Global_1665492)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_201(var* uParam0)//Position - 0x68ED
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2694466;
		}
	}
	return Global_2694466;
}

void func_202(int iParam0, int iParam1, int iParam2)//Position - 0x6910
{
	if (func_223())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10070 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1665638[func_211(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == Global_1665638[func_211(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
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
		if (Global_262145.f_10069 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_210(PLAYER::PLAYER_ID()))
		{
			Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_1 = iParam0;
			Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_6 = func_208(iParam0, 1);
		}
		func_207(640, iParam0, -1, 1);
		func_206(641, func_208(iParam0, 1), -1, 1, 0);
		Global_1665638[func_211(-1)] = iParam0;
		func_203(-1109644434, 7, 0);
	}
}

void func_203(int iParam0, int iParam1, int iParam2)//Position - 0x6A36
{
	int iVar0;
	
	if (func_205(iParam1, iParam2))
	{
		iVar0 = func_204();
		Global_2694418[iVar0] = iParam1;
		Global_2694429[iVar0] = iParam0;
	}
}

int func_204()//Position - 0x6A63
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_205(int iParam0, var uParam1)//Position - 0x6A98
{
	if (Global_1575048)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575060) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_206(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6B1E
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_211(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_207(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6B4E
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_211(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_211(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_211(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_211(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_211(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_211(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_211(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_211(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_211(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_211(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_211(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_211(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_211(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_211(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_211(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_211(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_211(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_211(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_211(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_211(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_211(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_211(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_211(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_211(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_211(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_211(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_211(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_211(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_211(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_211(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_211(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_211(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_211(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_211(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_211(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_211(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_211(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_211(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_211(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_211(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_211(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_211(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_211(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_211(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_211(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_211(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_211(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_211(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_211(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_211(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_211(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_211(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_211(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_211(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_211(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_208(int iParam0, bool bParam1)//Position - 0x7680
{
	if (bParam1)
	{
	}
	return func_209(iParam0, 0);
}

int func_209(int iParam0, int iParam1)//Position - 0x7694
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
		if (Global_297010[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_297010[iVar3] < iParam0)
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

int func_210(int iParam0)//Position - 0x7753
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2672505.f_1, iParam0);
	}
	return 1;
}

int func_211(int iParam0)//Position - 0x7775
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

int func_212(int iParam0)//Position - 0x77A9
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1665638[func_211(-1)];
			}
			else if (func_210(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_211(-1)];
	}
	return 0;
}

void func_213(int iParam0, int iParam1, int iParam2)//Position - 0x7806
{
	int iVar0;
	
	iVar0 = func_215(iParam0, func_211(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_214(iParam0))
	{
		func_206(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_207(iParam0, iVar0, iParam2, 1);
	}
}

int func_214(int iParam0)//Position - 0x7848
{
	if (Global_1665487)
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
			case 11803:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 12424:
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

int func_215(int iParam0, int iParam1, int iParam2)//Position - 0x7B18
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_211(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_216(int iParam0)//Position - 0x7B55
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(bVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_76(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_146(PLAYER::PLAYER_ID(), bVar5))
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
		iVar6 = SYSTEM::ROUND((func_217(*iParam0, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_217(*iParam0, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_217(int iParam0, int iParam1)//Position - 0x7C41
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_218(bool bParam0, int iParam1)//Position - 0x7C62
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
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
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_12(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_146(PLAYER::PLAYER_ID(), bVar4))
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
			bVar4 = iVar0;
			if (func_12(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_219(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_146(PLAYER::PLAYER_ID(), bVar4))
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
		iVar5 = SYSTEM::ROUND((func_217(*iParam1, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_217(*iParam1, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_219(int iParam0, bool bParam1)//Position - 0x7D7A
{
	return SYSTEM::VDIST(func_38(iParam0), func_38(bParam1));
	return 0f;
}

int func_220(int iParam0)//Position - 0x7D96
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_217(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_221(int iParam0)//Position - 0x7DCD
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_212(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_212(PLAYER::PLAYER_ID());
		}
	}
	if (func_222(8000, 0, 0) > 0)
	{
		if (func_222(8000, 0, 0) < (iParam0 + func_212(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_222(8000, 0, 0) - func_212(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_222(int iParam0, bool bParam1, int iParam2)//Position - 0x7E31
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
	return Global_297010[iParam0];
}

int func_223()//Position - 0x7E59
{
	return 1;
}

int func_224(char* sParam0)//Position - 0x7E62
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

int func_225()//Position - 0x7E9B
{
	int iVar0;
	
	if (func_232(PLAYER::PLAYER_ID()) || func_231(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10102 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10102 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_229() || func_226(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23282 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23282 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (Global_262145.f_7095 /* Tunable: JOB_RP_CAP */ > 30000)
	{
		iVar0 = 30000;
	}
	else
	{
		iVar0 = Global_262145.f_7095 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

int func_226(int iParam0)//Position - 0x7F33
{
	return func_227(func_228(iParam0));
}

int func_227(int iParam0)//Position - 0x7F45
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_228(int iParam0)//Position - 0x7F5F
{
	if (func_119(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

bool func_229()//Position - 0x7F82
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_64();
	}
	return func_230(Global_4718592.f_113724);
}

int func_230(int iParam0)//Position - 0x7FA6
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5042[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_231(int iParam0)//Position - 0x7FE0
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

bool func_232(int iParam0)//Position - 0x7FF5
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

void func_233()//Position - 0x800E
{
	Global_2696210 = 1;
}

void func_234(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x801B
{
	int iVar0;
	
	if (!func_246())
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
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_RENAME_ACID_PRODUCT"):
		case joaat("SERVICE_SPEND_RENAME_ACID_LAB"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			if (iParam1 > 0 || Global_262145.f_28375 /* Tunable: 1103207774 */)
			{
				func_235(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_ROCKSTAR"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_235(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
			if (iParam1 > 0 || Global_262145.f_28375 /* Tunable: 1103207774 */)
			{
				func_235(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case joaat("SERVICE_EARN_TAXI_JOB"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
			func_235(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_235(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x88BC
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_246())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_16()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695819)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535172[iVar2 /*85*/].f_66.f_2 == 0)
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
			*uParam0 = func_242(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536673 = 1;
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_241(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_236(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8A69
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_237(iParam0);
	}
}

void func_237(int iParam0)//Position - 0x8AA1
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_246())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_240(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_238(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_238(var uParam0)//Position - 0x8AF5
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_66.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_239(&(uParam0->f_14));
	func_239(&(uParam0->f_14.f_13));
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

void func_239(var uParam0)//Position - 0x8C01
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

int func_240(int iParam0)//Position - 0x8C49
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_241(int iParam0, int iParam1)//Position - 0x8C74
{
	Global_2697013 = iParam1;
	Global_2697012 = iParam0;
}

int func_242(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x8C88
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_246())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = iParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_243(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_243(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x8DC5
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -444617715;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_245(Var0.f_1);
	if ((Global_262145.f_24076 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24077 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24078 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_244();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

void func_244()//Position - 0x8E57
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_245(bool bParam0)//Position - 0x8E67
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_246()//Position - 0x8E7F
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_247(int iParam0, int iParam1)//Position - 0x8E96
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23997 /* Tunable: 277748102 */ == 0 || Global_262145.f_23997 /* Tunable: 277748102 */ == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23997 /* Tunable: 277748102 */ == 1)
			{
				Global_2793044.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7044 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */)
				{
					iParam1 = Global_262145.f_7044 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */;
				}
				Global_2793044.f_284 = iParam1;
				Global_2793044.f_285 = 0;
			}
		}
	}
}

void func_248(var uParam0, var uParam1)//Position - 0x8F08
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(NETWORK::PARTICIPANT_ID_TO_INT(), 1))
	{
		iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_152.f_1 - iLocal_121)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_11910 /* Tunable: PARTICIPATION_T_CAP */)
		{
			iVar1 = Global_262145.f_11910 /* Tunable: PARTICIPATION_T_CAP */;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_286() * iVar1);
		*uParam1 = (func_285() * iVar1);
		fVar2 = func_284();
		if (fVar2 > 0f && !BitTest(Local_152.f_2, 0))
		{
			iVar3 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_283())
			{
				iVar3 = func_283();
			}
			iVar4 = Local_152.f_51;
			if (iVar4 > func_282())
			{
				iVar4 = func_282();
			}
			*uParam0 = (*uParam0 + SYSTEM::ROUND((IntToFloat(func_275(func_281(), func_280(), iVar3, fVar2, func_279(), func_278(), func_277(), iVar4)) * Global_262145.f_11923 /* Tunable: CHALLENGE_EVENT_MULTIPLIER_CASH */)));
			*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_275(func_274(), func_273(), iVar3, fVar2, func_279(), func_278(), func_277(), iVar4)) * Global_262145.f_11924 /* Tunable: CHALLENGE_EVENT_MULTIPLIER_RP */)));
		}
		else
		{
			func_271(1);
		}
	}
	else
	{
		func_271(0);
	}
	func_249(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_249(var uParam0, int iParam1)//Position - 0x904D
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_270())
		{
			if (func_269(0))
			{
				if (!func_265(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_264()))
					{
						if (func_263() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_263());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_261(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_254("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_264(), iVar0, 0, 0, 1);
						}
						func_253(20);
						func_250(func_264(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_250(bool bParam0, int iParam1, int iParam2)//Position - 0x90ED
{
	struct<8> Var0;
	
	if (func_12(bParam0, 0, 1))
	{
		Var0.f_0 = -1597942809;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_252(bParam0);
		func_251(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, func_245(bParam0));
	}
}

void func_251(var uParam0, var uParam1)//Position - 0x9143
{
	*uParam0 = Global_1923597.f_9;
	*uParam1 = Global_1923597.f_10;
}

var func_252(bool bParam0)//Position - 0x915D
{
	return Global_1894573[bParam0 /*608*/].f_510;
}

void func_253(int iParam0)//Position - 0x9171
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2793044.f_5225.f_7[iVar0]), iVar1);
}

int func_254(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x919A
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_69(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_259(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_255(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_255(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x9232
{
	int iVar0;
	
	if ((!func_258() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_14(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_256(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944061.f_5[iVar0 /*53*/] = iParam0;
		Global_1944061.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944061.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944061.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944061.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944061.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944061.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_256(int iParam0)//Position - 0x933A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944061 - 1))
	{
		if (iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1)
		{
			func_257(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944061++;
	if (Global_1944061 > 5)
	{
		Global_1944061 = 5;
		return Global_1944061;
	}
	return (Global_1944061 - 1);
}

void func_257(int iParam0)//Position - 0x939C
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944061.f_5[iVar0 /*53*/] = { Global_1944061.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_258()//Position - 0x93D5
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_259(char* sParam0)//Position - 0x93E6
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_260(&cVar0);
}

var func_260(char[4] cParam0)//Position - 0x940A
{
	return cParam0;
}

void func_261(int iParam0, bool bParam1)//Position - 0x9414
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_262(1);
	}
	else
	{
		iVar1 = func_262(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_262(bool bParam0)//Position - 0x9446
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12865 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_263()//Position - 0x946C
{
	return Global_262145.f_12864 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

bool func_264()//Position - 0x947B
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

bool func_265(bool bParam0)//Position - 0x9490
{
	return func_266(PLAYER::PLAYER_ID(), bParam0);
}

int func_266(bool bParam0, bool bParam1)//Position - 0x94A2
{
	return func_267(bParam0, bParam1, 1);
}

int func_267(int iParam0, bool bParam1, int iParam2)//Position - 0x94B3
{
	int iVar0;
	
	if (iParam0 == func_109())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_268(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_109() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_268(bool bParam0, int iParam1)//Position - 0x950F
{
	if (bParam0 != func_109())
	{
		if (Global_1894573[bParam0 /*608*/].f_10 != func_109())
		{
			if (Global_1894573[bParam0 /*608*/].f_10 == bParam0 && Global_1894573[bParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_269(bool bParam0)//Position - 0x955E
{
	return func_91(PLAYER::PLAYER_ID(), bParam0);
}

bool func_270()//Position - 0x9570
{
	return func_92(PLAYER::PLAYER_ID());
}

void func_271(bool bParam0)//Position - 0x9580
{
	if (bParam0)
	{
		if (func_272(1))
		{
			MISC::SET_BIT(&Global_1836883, 1);
		}
	}
	else if (func_272(2))
	{
		MISC::SET_BIT(&Global_1836883, 2);
	}
}

int func_272(int iParam0)//Position - 0x95B2
{
	var uVar0;
	
	uVar0 = func_215(2537, -1, 0);
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

int func_273()//Position - 0x965F
{
	return Global_262145.f_11410 /* Tunable: CHALLENGE_RP_REWARD_SCALE */;
}

int func_274()//Position - 0x966E
{
	return Global_262145.f_11408 /* Tunable: CHALLENGE_RP_REWARD_BASE */;
}

int func_275(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)//Position - 0x967D
{
	return func_276(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_276(int iParam0, int iParam1, int iParam2)//Position - 0x96AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_277()//Position - 0x96F6
{
	return Global_262145.f_11413 /* Tunable: CHALLENGE_REWARD_PLAYER_DIVIDER */;
}

float func_278()//Position - 0x9705
{
	return Global_262145.f_11412 /* Tunable: CHALLENGE_REWARD_PLAYER_WEIGHTING */;
}

float func_279()//Position - 0x9714
{
	return Global_262145.f_11411 /* Tunable: CHALLENGE_REWARD_TIME_WEIGHTING */;
}

int func_280()//Position - 0x9723
{
	return Global_262145.f_11409 /* Tunable: CHALLENGE_CASH_REWARD_SCALE */;
}

int func_281()//Position - 0x9732
{
	return Global_262145.f_11407 /* Tunable: CHALLENGE_CASH_REWARD_BASE */;
}

int func_282()//Position - 0x9741
{
	return Global_262145.f_11815 /* Tunable: CHALLENGE_P_CAP */;
}

int func_283()//Position - 0x9750
{
	return Global_262145.f_11814 /* Tunable: CHALLENGE_T_CAP */;
}

var func_284()//Position - 0x975F
{
	if (func_20(0))
	{
		return Global_262145.f_11434 /* Tunable: CHALLENGE_POSITION_MODIFIER_IN_PLACE_0 */;
	}
	if (func_20(1))
	{
		return Global_262145.f_11435 /* Tunable: CHALLENGE_POSITION_MODIFIER_IN_PLACE_1 */;
	}
	if (func_20(2))
	{
		return Global_262145.f_11436 /* Tunable: CHALLENGE_POSITION_MODIFIER_IN_PLACE_2 */;
	}
	return Global_262145.f_11437 /* Tunable: CHALLENGE_POSITION_MODIFIER_IN_PLACE_3 */;
}

int func_285()//Position - 0x97AD
{
	return Global_262145.f_11406 /* Tunable: CHALLENGE_EOM_DEFAULT_RP_REWARD */;
}

int func_286()//Position - 0x97BC
{
	return Global_262145.f_11405 /* Tunable: CHALLENGE_EOM_DEFAULT_CASH_REWARD */;
}

void func_287()//Position - 0x97CB
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (!BitTest(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 1) && (func_299() || BitTest(Local_152.f_2, 0)))
	{
		if (func_67(func_298()))
		{
			func_297();
		}
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(Local_152.f_2, 0))
			{
				if (func_339(0))
				{
					iVar2 = Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4;
					func_293(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_291(64, func_292(Local_152.f_3, 0, 0, 0), "AMCH_WINNER" /* GXT: You won the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_WIN" /* GXT: WINNER */, 15000, -1, fVar1, func_406(Local_152.f_3), 1, 2, 0);
						}
						else if (func_290())
						{
							func_291(69, func_292(Local_152.f_3, 0, 0, 0), "AMCH_WINNER_T" /* GXT: You won the ~a~ Challenge with a time of ~a~ */, "AMCH_WIN" /* GXT: WINNER */, 15000, iVar0, -1f, func_406(Local_152.f_3), 1, 2, 0);
						}
						else
						{
							func_291(64, func_292(Local_152.f_3, 0, 0, iVar0), "AMCH_WINNER" /* GXT: You won the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_WIN" /* GXT: WINNER */, 15000, iVar0, -1f, func_406(Local_152.f_3), 1, 2, 0);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_291(67, func_292(Local_152.f_3, 0, 0, 0), "AMCH_2ND" /* GXT: You came second in the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, -1, fVar1, func_406(Local_152.f_3), 1, 2, 0);
						}
						else if (func_290())
						{
							func_291(75, func_292(Local_152.f_3, 0, 0, 0), "AMCH_2ND_T" /* GXT: You came second in the ~a~ Challenge with a time of ~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, iVar0, -1f, func_406(Local_152.f_3), 1, 2, 0);
						}
						else
						{
							func_291(67, func_292(Local_152.f_3, 0, 0, iVar0), "AMCH_2ND" /* GXT: You came second in the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, iVar0, -1f, func_406(Local_152.f_3), 1, 2, 0);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_291(67, func_292(Local_152.f_3, 0, 0, 0), "AMCH_3RD" /* GXT: You came third in the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, -1, fVar1, func_406(Local_152.f_3), 1, 2, 0);
						}
						else if (func_290())
						{
							func_291(75, func_292(Local_152.f_3, 0, 0, 0), "AMCH_3RD_T" /* GXT: You came third in the ~a~ Challenge with a time of ~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, iVar0, -1f, func_406(Local_152.f_3), 1, 2, 0);
						}
						else
						{
							func_291(67, func_292(Local_152.f_3, 0, 0, iVar0), "AMCH_3RD" /* GXT: You came third in the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, iVar0, -1f, func_406(Local_152.f_3), 1, 2, 0);
						}
					}
					else
					{
						iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_152.f_4[0]);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
						{
							iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
							if (Local_1518[Local_152.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_1518[Local_152.f_4[0] /*12*/].f_4;
							func_293(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE" /* GXT: <C>~a~</C>~s~ won the ~a~ Challenge with a score of ~1~~a~ */;
							if (func_18())
							{
								func_289(76, func_109(), func_292(Local_152.f_3, 0, 0, 0), sVar5, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, func_406(Local_152.f_3), -1, fVar1, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
							else if (func_290())
							{
								func_289(77, func_109(), func_292(Local_152.f_3, 0, 0, 0), "AMCH_LOSE_T" /* GXT: <C>~a~</C>~s~ won the ~a~ Challenge with a time of ~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, func_406(Local_152.f_3), iVar0, -1082130432, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
							else
							{
								func_289(76, func_109(), func_292(Local_152.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, func_406(Local_152.f_3), iVar0, -1082130432, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
						}
					}
				}
				else
				{
					func_52(66, "AMCH_OVER" /* GXT: CHALLENGE OVER */, "AMCH_NOWIN" /* GXT: No players achieved a score */, 1, 15000, 2, 1, 0);
				}
			}
			else
			{
				func_51("", "", 1);
			}
			MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 1);
			func_288(133);
		}
	}
}

void func_288(int iParam0)//Position - 0x9B87
{
	if (iParam0 == iParam0)
	{
	}
}

int func_289(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)//Position - 0x9B96
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
	func_112(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_17 = iParam1;
	StringCopy(&(Var0.f_57), sParam2, 16);
	StringCopy(&(Var0.f_61), sParam6, 16);
	StringCopy(&(Var0.f_25), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_71 = iParam9;
	Var0.f_72 = iParam10;
	return func_53(&Var0);
}

int func_290()//Position - 0x9C25
{
	return 0;
}

int func_291(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x9C2E
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
	func_112(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_110(&(Var0.f_69), iParam10);
	}
	return func_53(&Var0);
}

char* func_292(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x9CBF
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
					return "AMCH_M_LB" /* GXT: m */;
				}
				else if (bParam2)
				{
					return "AMCH_M" /* GXT: ~1~m */;
				}
				else
				{
					return "AMCH_METRES" /* GXT:  meters */;
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB" /* GXT: ft */;
			}
			else if (bParam2)
			{
				return "AMCH_FT" /* GXT: ~1~ft */;
			}
			else
			{
				return "AMCH_FEET" /* GXT:  feet */;
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB" /* GXT: km/h */;
				}
				else if (bParam2)
				{
					return "AMCH_KMHN" /* GXT: ~1~km/h */;
				}
				else
				{
					return "AMCH_KMH" /* GXT:  km/h */;
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB" /* GXT: mph */;
			}
			else if (bParam2)
			{
				return "AMCH_MPHN" /* GXT: ~1~mph */;
			}
			else
			{
				return "AMCH_MPH" /* GXT:  mph */;
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH" /* GXT:  vehicles */;
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
				return "AMCH_KILLS" /* GXT:  kills */;
			}
			else
			{
				return "AMCH_KILL" /* GXT:  kill */;
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY" /* GXT: ~r~~s~ */;
}

int func_293(int iParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x9E4C
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_294(Local_152.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (SYSTEM::TO_FLOAT(iParam2) / 10f);
		}
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_294(int iParam0, int iParam1)//Position - 0x9E93
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
				return func_296(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_295(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_295(float fParam0)//Position - 0x9F36
{
	return (fParam0 / 1.609344f);
}

float func_296(float fParam0)//Position - 0x9F46
{
	return (fParam0 / 0.3048f);
}

void func_297()//Position - 0x9F56
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672505.f_2513[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672505.f_2513[iVar0 /*80*/].f_2 = 5;
			func_110(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_298()//Position - 0x9FA1
{
	return Global_2672505.f_2513[0 /*80*/].f_1;
}

var func_299()//Position - 0x9FB5
{
	return BitTest(Global_1836858.f_1, 25);
}

int func_300(var uParam0, bool bParam1)//Position - 0x9FC6
{
	bool bVar0;
	
	if ((((*uParam0 > 0 && !func_311()) && !(func_119(PLAYER::PLAYER_ID(), 0) && (func_115(PLAYER::PLAYER_ID()) || func_310(PLAYER::PLAYER_ID())))) && !func_308(PLAYER::PLAYER_ID())) && !func_307(PLAYER::PLAYER_ID()))
	{
		func_306();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_47(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836858.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2793044.f_4687), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_305(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_47(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
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
				func_302();
				func_305(uParam0, 2);
			}
			break;
		
		case 2:
			func_302();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_301("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
				{
					HUD::CLEAR_HELP(true);
				}
				func_305(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2793044.f_4687), 1);
				func_305(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2793044.f_4687), 1);
			return 1;
	}
	return 0;
}

bool func_301(char* sParam0)//Position - 0xA150
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_302()//Position - 0xA163
{
	if (BitTest(Global_2793044.f_4687, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2793044.f_848, 2)) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75693) && !Global_60543) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2793044.f_4687), 1);
			func_304("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */, -1);
			func_303(1);
			MISC::CLEAR_BIT(&(Global_2793044.f_4687), 0);
		}
	}
}

void func_303(int iParam0)//Position - 0xA1E0
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_311())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_304(char* sParam0, int iParam1)//Position - 0xA20E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

void func_305(var uParam0, int iParam1)//Position - 0xA225
{
	*uParam0 = iParam1;
}

void func_306()//Position - 0xA232
{
	Global_2696211 = 1;
}

int func_307(int iParam0)//Position - 0xA23F
{
	if (iParam0 != func_109())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 4);
	}
	return 0;
}

int func_308(bool bParam0)//Position - 0xA264
{
	int iVar0;
	
	if (bParam0 != func_109())
	{
		if (func_12(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				iVar0 = func_309(Global_2657589[bParam0 /*466*/].f_321.f_7);
				return (iVar0 == 2 || iVar0 == 25);
			}
		}
	}
	return 0;
}

int func_309(int iParam0)//Position - 0xA2B9
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
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

bool func_310(bool bParam0)//Position - 0xA76D
{
	return func_114(bParam0, 19);
}

bool func_311()//Position - 0xA77D
{
	return Global_2672505.f_2513[0 /*80*/].f_1 != 0;
}

void func_312()//Position - 0xA793
{
	bool bVar0[3];
	bool bVar1;
	var uVar2[3];
	var uVar3[3];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17[3];
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	if (Local_152.f_4[0] > -1)
	{
		iVar11 = 0;
		bVar12 = (func_336() && !func_107(PLAYER::PLAYER_ID()));
		iVar7 = 0;
		while (iVar7 < 3)
		{
			bVar0[iVar7] = func_109();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_152.f_4[iVar7] > -1)
			{
				iVar18 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_152.f_4[iVar7]);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar18))
				{
					bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar18);
					if (func_12(bVar1, 0, 1))
					{
						if (!func_14(bVar1, 0))
						{
							if (Local_1518[Local_152.f_4[iVar7] /*12*/].f_4 != 0)
							{
								bVar0[iVar15] = bVar1;
								func_293(&(uVar2[iVar15]), &(uVar3[iVar15]), Local_1518[Local_152.f_4[iVar7] /*12*/].f_4, 1);
								iVar15++;
								if (func_269(1))
								{
									if (func_91(bVar1, 1))
									{
										uVar17[iVar7] = func_69(bVar1, -2, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (func_107(PLAYER::PLAYER_ID()))
		{
			iVar19 = func_334();
			iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar19);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar20))
			{
				iVar21 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar20);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar21))
				{
					iVar8 = iVar21;
				}
			}
		}
		func_293(&iVar4, &fVar9, iLocal_125, 1);
		func_293(&iVar5, &fVar10, Local_1518[iVar8 /*12*/].f_4, 1);
		iVar22 = func_28(0);
		iVar23 = func_549(&(Local_152.f_39), 0, 0);
		iVar6 = func_547(0, (iVar22 - iVar23));
		if (func_17(-1, 0))
		{
			func_331(iVar6);
		}
		if (iVar6 > 30000)
		{
			iVar13 = 1;
		}
		else
		{
			iVar13 = 6;
		}
		if (BitTest(uLocal_123, 2))
		{
			iVar14 = 2000;
		}
		else
		{
			iVar14 = 0;
		}
		if (func_336() || Local_152.f_3 == 6)
		{
			iVar16 = 2;
		}
		else
		{
			iVar16 = 1;
		}
		if (Local_152.f_37 >= 4)
		{
			iVar6 = 0;
		}
		if (func_18())
		{
			func_327(bVar0[0], bVar0[1], bVar0[2], uVar3[0], uVar3[1], uVar3[2], fVar9, fVar10, iVar6, func_292(Local_152.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_328(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else if (func_290())
		{
			func_326(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, &iVar11, iVar13, bVar12, iVar14, func_328(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else
		{
			func_317(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, func_292(Local_152.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_328(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		func_313();
	}
}

void func_313()//Position - 0xAA83
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_316();
	if (fVar0 >= 0f)
	{
		if (Local_152.f_37 == 3)
		{
			if (func_12(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
					{
						func_315(iVar1, &fLocal_129);
						fVar2 = (fVar0 + fLocal_129);
						HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(fVar2, true, 21);
						func_314(fVar0);
						return;
					}
				}
			}
		}
		if (func_301("AMCH_FLYLOW" /* GXT: You must fly lower to score in the challenge. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (BitTest(uLocal_123, 4))
		{
			AUDIO::STOP_SOUND(iLocal_131);
			MISC::CLEAR_BIT(&uLocal_123, 4);
		}
		HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	}
}

void func_314(float fParam0)//Position - 0xAB2F
{
	float fVar0;
	
	if (STATS::STAT_GET_FLYING_ALTITUDE(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_550(6);
			if (!BitTest(uLocal_123, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_131, "Altitude_Warning", "EXILE_1", true);
				MISC::SET_BIT(&uLocal_123, 4);
			}
		}
		else
		{
			if (func_301("AMCH_FLYLOW" /* GXT: You must fly lower to score in the challenge. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (BitTest(uLocal_123, 4))
			{
				AUDIO::STOP_SOUND(iLocal_131);
				MISC::CLEAR_BIT(&uLocal_123, 4);
			}
		}
	}
}

float func_315(int iParam0, float* fParam1)//Position - 0xAB9B
{
	float fVar0;
	struct<3> Var1;
	var uVar2;
	
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, fParam1, true, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar2, false, false);
	if (STATS::STAT_IS_PLAYER_VEHICLE_ABOVE_OCEAN())
	{
		func_550(3);
		MISC::SET_BIT(&uLocal_123, 10);
		func_27(&uLocal_119, 0, 0);
	}
	else if (BitTest(uLocal_123, 10))
	{
		if (func_1(&uLocal_119, 2000, 0))
		{
			MISC::CLEAR_BIT(&uLocal_123, 10);
		}
	}
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	fVar0 = (Var1.f_2 - *fParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_316()//Position - 0xAC2E
{
	switch (Local_152.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_317(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)//Position - 0xAC5D
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_323(0) == 0)
	{
		return;
	}
	func_322();
	iVar1 = 0;
	if (((Global_2695727[0] != iParam0 || Global_2695727[1] != iParam1) || Global_2695727[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2695727[0] = iParam0;
	Global_2695727[1] = iParam1;
	Global_2695727[2] = iParam2;
	Global_2695727[3] = 0;
	Global_2695727[4] = 0;
	if (Global_2695727[0] != func_109())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695727[0]);
			Global_2695733[0 /*16*/] = { func_321(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_318(iParam3, &(Global_2695733[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2695727[1] != func_109())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695727[1]);
			Global_2695733[1 /*16*/] = { func_321(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_318(iParam4, &(Global_2695733[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2695727[2] != func_109())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695727[2]);
			Global_2695733[2 /*16*/] = { func_321(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_318(iParam5, &(Global_2695733[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_318(iParam6, "HUD_ATTEMPTS" /* GXT: CURRENT ATTEMPT */, -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_109())
			{
				if (func_170(PLAYER::PLAYER_ID()) == 0)
				{
					func_318(iParam7, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_170(PLAYER::PLAYER_ID()) == 0)
			{
				func_318(iParam7, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_170(PLAYER::PLAYER_ID()) == 0)
			{
				func_318(iParam7, "HUD_UBEST" /* GXT: YOUR BEST */, -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_224(sParam14))
	{
		sVar2 = sParam14;
	}
	func_151(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_150();
}

void func_318(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0xAF2C
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
			if (func_153(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_152(6, iVar0);
		Global_1655472.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1655472.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655472.f_4041.f_183[iVar0] = iParam3;
		Global_1655472.f_4041.f_172[iVar0] = iParam2;
		Global_1655472.f_4041.f_260[iVar0] = iParam4;
		Global_1655472.f_4041.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1655472.f_4041.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1655472.f_4041.f_443[iVar0] = iParam7;
		Global_1655472.f_4041.f_454[iVar0] = fParam8;
		Global_1655472.f_4041.f_497[iVar0] = iParam9;
		Global_1655472.f_4041.f_508[iVar0] = iParam10;
		Global_1655472.f_4041.f_205[iVar0] = iParam11;
		Global_1655472.f_4041.f_216[iVar0] = iParam12;
		Global_1655472.f_4041.f_227[iVar0] = iParam13;
		Global_1655472.f_4041.f_238[iVar0] = iParam14;
		Global_1655472.f_4041.f_249[iVar0] = iParam15;
		Global_1655472.f_4041.f_519[iVar0] = iParam16;
		Global_1655472.f_4041.f_530[iVar0] = iParam17;
		Global_1655472.f_4041.f_541[iVar0] = iParam18;
		Global_1655472.f_4041.f_552[iVar0] = iParam19;
		Global_1655472.f_4041.f_563[iVar0] = iParam20;
		Global_1655472.f_4041.f_574[iVar0] = iParam21;
		Global_1655472.f_4041.f_585[iVar0] = iParam22;
		Global_1655472.f_4041.f_596[iVar0] = iParam23;
		Global_1655472.f_4041.f_607[iVar0] = iParam24;
		Global_1655472.f_4041.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_320())
		{
			Global_1655472.f_1172 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1655472.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1655472.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1655472.f_1172 = 1;
			}
			if (func_319())
			{
				Global_1655472.f_1176 = 1;
			}
		}
	}
}

int func_319()//Position - 0xB19D
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_320()//Position - 0xB1C1
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_321(int iParam0, char* sParam1)//Position - 0xB1FF
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFIRST" /* GXT: 1st: */), 64);
			break;
		
		case 2:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSSECOND" /* GXT: 2nd: */), 64);
			break;
		
		case 3:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSTHIRD" /* GXT: 3rd: */), 64);
			break;
		
		case 4:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFOURTH" /* GXT: 4th: */), 64);
			break;
		
		case 5:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFIFTH" /* GXT: 5th: */), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_322()//Position - 0xB2A1
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2696214 = 1;
}

int func_323(bool bParam0)//Position - 0xB2C4
{
	if (func_325())
	{
		return 0;
	}
	if (func_324())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_324()//Position - 0xB2FB
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 != 0;
}

bool func_325()//Position - 0xB312
{
	return BitTest(Global_2621446, 12);
}

void func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0xB321
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_323(0) == 0)
	{
		return;
	}
	func_322();
	iVar1 = 0;
	if (((Global_2695727[0] != iParam0 || Global_2695727[1] != iParam1) || Global_2695727[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2695727[0] = iParam0;
	Global_2695727[1] = iParam1;
	Global_2695727[2] = iParam2;
	Global_2695727[3] = 0;
	Global_2695727[4] = 0;
	if (Global_2695727[0] != func_109())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695727[0]);
			Global_2695733[0 /*16*/] = { func_321(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_151(iParam3, &(Global_2695733[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
		}
	}
	if (Global_2695727[1] != func_109())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695727[1]);
			Global_2695733[1 /*16*/] = { func_321(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_151(iParam4, &(Global_2695733[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
		}
	}
	if (Global_2695727[2] != func_109())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695727[2]);
			Global_2695733[2 /*16*/] = { func_321(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_151(iParam5, &(Global_2695733[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
		}
	}
	if (bParam11)
	{
		func_151(iParam6, "HUD_ATTEMPTS" /* GXT: CURRENT ATTEMPT */, 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iParam14)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_109())
			{
				if (func_170(PLAYER::PLAYER_ID()) == 0)
				{
					func_151(iParam7, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 1:
			if (func_170(PLAYER::PLAYER_ID()) == 0)
			{
				func_151(iParam7, "HUD_USCORE" /* GXT: YOUR SCORE */, 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 2:
			if (func_170(PLAYER::PLAYER_ID()) == 0)
			{
				func_151(iParam7, "HUD_UBEST" /* GXT: YOUR BEST */, 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_224(sParam13))
	{
		sVar2 = sParam13;
	}
	func_151(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
	*iParam9 = 0;
	func_150();
}

void func_327(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)//Position - 0xB5AB
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_323(0) == 0)
	{
		return;
	}
	func_322();
	iVar1 = 0;
	if (((Global_2695727[0] != iParam0 || Global_2695727[1] != iParam1) || Global_2695727[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2695727[0] = iParam0;
	Global_2695727[1] = iParam1;
	Global_2695727[2] = iParam2;
	Global_2695727[3] = 0;
	Global_2695727[4] = 0;
	if (Global_2695727[0] != func_109())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695727[0]);
			Global_2695733[0 /*16*/] = { func_321(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_318(-1, &(Global_2695733[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2695727[1] != func_109())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695727[1]);
			Global_2695733[1 /*16*/] = { func_321(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_318(-1, &(Global_2695733[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2695727[2] != func_109())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695727[2]);
			Global_2695733[2 /*16*/] = { func_321(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_318(-1, &(Global_2695733[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_318(-1, "HUD_ATTEMPTS" /* GXT: CURRENT ATTEMPT */, -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_109())
			{
				if (func_170(PLAYER::PLAYER_ID()) == 0)
				{
					func_318(-1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_170(PLAYER::PLAYER_ID()) == 0)
			{
				func_318(-1, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_170(PLAYER::PLAYER_ID()) == 0)
			{
				func_318(-1, "HUD_UBEST" /* GXT: YOUR BEST */, -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_224(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_151(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	}
	*iParam10 = 0;
	func_150();
}

char* func_328()//Position - 0xB885
{
	return "HUD_COUNTDOWN" /* GXT: EVENT END */;
	switch (func_330(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG" /* GXT: MOVING TARGET END */;
		
		case 132:
			return "AET_CHK_COLL" /* GXT: CHECKPOINTS END */;
		
		case 133:
			switch (func_329())
			{
				case 0:
					return "AET_CHALL_LJ" /* GXT: LONGEST JUMP CHALLENGE END */;
				
				case 1:
					return "AET_CHALL_LS" /* GXT: LONGEST FREEFALL CHALLENGE END */;
				
				case 2:
					return "AET_CHALL_HS" /* GXT: HIGHEST SPEED CHALLENGE END */;
				
				case 3:
					return "AET_CHALL_LST" /* GXT: LONGEST STOPPIE CHALLENGE END */;
				
				case 4:
					return "AET_CHALL_LW" /* GXT: LONGEST WHEELIE CHALLENGE END */;
				
				case 5:
					return "AET_CHALL_NC" /* GXT: NO CRASHES CHALLENGE END */;
				
				case 6:
					return "AET_CHALL_LP" /* GXT: LOWEST PARACHUTE CHALLENGE END */;
				
				case 7:
					return "AET_CHALL_VS" /* GXT: VEHICLES STOLEN CHALLENGE END */;
				
				case 8:
					return "AET_CHALL_NM" /* GXT: NEAR MISSES CHALLENGE END */;
				
				case 9:
					return "AET_CHALL_RD" /* GXT: REVERSE DRIVING CHALLENGE END */;
				
				case 10:
					return "AET_CHALL_LF" /* GXT: LONGEST FALL SURVIVED CHALLENGE END */;
				
				case 11:
					return "AET_CHALL_LFL" /* GXT: LOW FLYING CHALLENGE END */;
				
				case 12:
					return "AET_CHALL_LFI" /* GXT: LOW FLYING INVERTED CHALLENGE END */;
				
				case 13:
					return "AET_CHALL_LB" /* GXT: LONGEST BAIL CHALLENGE END */;
				
				case 14:
					return "AET_CHALL_MB" /* GXT: MOST BRIDGES CHALLENGE END */;
				
				case 15:
					return "AET_CHALL_HSH" /* GXT: HEADSHOTS CHALLENGE END */;
				
				case 16:
					return "AET_CHALL_DB" /* GXT: DRIVE-BY CHALLENGE END */;
				
				case 17:
					return "AET_CHALL_ML" /* GXT: MELEE CHALLENGE END */;
				
				case 18:
					return "AET_CHALL_LSN" /* GXT: SNIPER KILLS CHALLENGE END */;
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED" /* GXT: PENNED IN END */;
		
		case 138:
			return "AET_PARCEL" /* GXT: HOLD THE WHEEL END */;
		
		case 139:
			return "AET_PROPERTY" /* GXT: HOT PROPERTY END */;
		
		case 140:
			return "AET_DDROP" /* GXT: DEAD DROP END */;
		
		case 141:
			return "AET_KCASTLE" /* GXT: KING OF THE CASTLE END */;
		
		case 144:
			return "AET_BLAST" /* GXT: CRIMINAL DAMAGE END */;
		
		case 129:
			return "AET_UWARF" /* GXT: KILL LIST END */;
		
		case 146:
			return "AET_BEAST" /* GXT: HUNT THE BEAST END */;
	}
	return "";
}

int func_329()//Position - 0xBA2F
{
	if (func_330(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2793044.f_5146;
	}
	return -1;
}

int func_330(int iParam0)//Position - 0xBA52
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/];
	}
	return -1;
}

void func_331(int iParam0)//Position - 0xBA71
{
	if (func_333(PLAYER::PLAYER_ID()) || func_332(PLAYER::PLAYER_ID()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (BitTest(Global_2793044.f_5062, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2793044.f_5064)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2793044.f_5064));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2793044.f_5072 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2793044.f_5072);
				Global_2793044.f_5072 = -1;
			}
			Global_2793044.f_5062 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2793044.f_5062, 0))
		{
			if (BitTest(Global_2793044.f_5062, 4))
			{
				if (!BitTest(Global_2793044.f_5062, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2793044.f_5064)))
						{
							StringCopy(&(Global_2793044.f_5064), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2793044.f_5062), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && BitTest(Global_2793044.f_5062, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!BitTest(Global_2793044.f_5062, 1))
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
				MISC::SET_BIT(&(Global_2793044.f_5062), 1);
			}
			else if (!BitTest(Global_2793044.f_5062, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2793044.f_5064), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2793044.f_5062), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2793044.f_5062, 3))
				{
					Global_2793044.f_5072 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2793044.f_5072, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2793044.f_5062), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2793044.f_5062, 0))
			{
				Global_2793044.f_5062 = 0;
				Global_2793044.f_5072 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2793044.f_5062), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || BitTest(Global_2793044.f_5062, 2))
				{
					MISC::SET_BIT(&(Global_2793044.f_5062), 2);
					MISC::SET_BIT(&(Global_2793044.f_5062), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2793044.f_5062), 5);
					MISC::CLEAR_BIT(&(Global_2793044.f_5062), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2793044.f_5062, 0))
		{
			Global_2793044.f_5062 = 0;
			Global_2793044.f_5072 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2793044.f_5062), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2793044.f_5062), 2);
				MISC::SET_BIT(&(Global_2793044.f_5062), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2793044.f_5062), 2);
				MISC::CLEAR_BIT(&(Global_2793044.f_5062), 5);
			}
		}
	}
}

int func_332(bool bParam0)//Position - 0xBE52
{
	if (bParam0 != func_109() && func_12(bParam0, 1, 1))
	{
		return Global_2657589[bParam0 /*466*/].f_321.f_17;
	}
	return -1;
}

int func_333(int iParam0)//Position - 0xBE83
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

var func_334()//Position - 0xBECA
{
	if (ENTITY::DOES_ENTITY_EXIST(func_335()))
	{
		return func_335();
	}
	return func_104();
}

var func_335()//Position - 0xBEE8
{
	return Global_2621446.f_3;
}

int func_336()//Position - 0xBEF6
{
	switch (Local_152.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

void func_337()//Position - 0xBF4F
{
	int iVar0;
	struct<42> Var1;
	bool bVar2;
	int iVar3;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_173.f_534[iVar0 /*42*/] = { Var1 };
		Local_173.f_534[iVar0 /*42*/].f_1 = func_109();
		if (Local_152.f_4[iVar0] > -1)
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_152.f_4[iVar0]);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (!func_14(bVar2, 0))
				{
					Local_173.f_534[iVar0 /*42*/] = Local_152.f_4[iVar0];
					Local_173.f_534[iVar0 /*42*/].f_1 = bVar2;
					Local_173.f_534[iVar0 /*42*/].f_9 = Local_1518[Local_152.f_4[iVar0] /*12*/].f_4;
					Local_173.f_534[iVar0 /*42*/].f_31 = -1;
					Local_173.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_338()//Position - 0xC03E
{
	MISC::SET_BIT(&(Global_2793044.f_1827), 19);
}

int func_339(int iParam0)//Position - 0xC053
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_152.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_1518[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_340()//Position - 0xC088
{
}

void func_341()//Position - 0xC090
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_293(&iVar1, &fVar2, iLocal_125, 1);
	switch (Local_152.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_343(sVar0, fVar2 >= 70f);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = func_342(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = STATS::STAT_GET_CURRENT_SPEED();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_343(sVar0, bVar3);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = SYSTEM::TO_FLOAT(iVar1);
				fVar2 = func_342(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_342(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_130 != iLocal_125)
			{
				if (iLocal_125 > 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_132, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", false);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_132, "Count", SYSTEM::TO_FLOAT(iVar1));
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", false);
				}
			}
			iLocal_130 = iLocal_125;
			break;
	}
	if (func_20(0))
	{
		if (!BitTest(uLocal_123, 3))
		{
			if (func_265(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&uLocal_123, 3);
		}
	}
	else if (BitTest(uLocal_123, 3))
	{
		if (func_265(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&uLocal_123, 3);
	}
}

float func_342(float fParam0, float fParam1)//Position - 0xC247
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_343(char* sParam0, bool bParam1)//Position - 0xC25E
{
	if (bParam1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		{
			AUDIO::START_AUDIO_SCENE(sParam0);
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
}

void func_344()//Position - 0xC28E
{
	int iVar0;
	
	if ((!func_170(PLAYER::PLAYER_ID()) && !func_14(PLAYER::PLAYER_ID(), 0)) && func_12(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = func_370();
		if (iVar0 != Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_122) || func_369(iVar0, iLocal_122))
			{
				if (!func_368() || func_1(&uLocal_111, 1000, 0))
				{
					func_27(&uLocal_111, 0, 0);
					iLocal_122 = iVar0;
					Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4 = iVar0;
					func_347();
					if (iLocal_121 == 0)
					{
						iLocal_121 = NETWORK::GET_NETWORK_TIME();
					}
					if (Local_1519.f_11 == 0)
					{
						Local_1519.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
				}
			}
		}
		iLocal_125 = func_345();
	}
}

int func_345()//Position - 0xC350
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_152.f_3)
	{
		case 0:
			fVar1 = STATS::STAT_GET_CURRENT_JUMP_DISTANCE();
			break;
		
		case 1:
			fVar1 = STATS::STAT_GET_CURRENT_SKYDIVING_DISTANCE();
			break;
		
		case 2:
			fVar1 = STATS::STAT_GET_CURRENT_SPEED();
			break;
		
		case 3:
			fVar1 = STATS::STAT_GET_CURRENT_FRONT_WHEEL_DISTANCE();
			break;
		
		case 4:
			fVar1 = STATS::STAT_GET_CURRENT_REAR_WHEEL_DISTANCE();
			break;
		
		case 5:
			fVar1 = STATS::STAT_GET_CURRENT_DRIVE_NOCRASH_DISTANCE();
			break;
		
		case 8:
			iVar0 = STATS::STAT_GET_CURRENT_NEAR_MISS_NOCRASH_PRECISE();
			break;
		
		case 9:
			fVar1 = STATS::STAT_GET_CURRENT_DRIVING_REVERSE_DISTANCE();
			break;
		
		case 11:
			fVar1 = STATS::STAT_GET_CHALLENGE_FLYING_DIST();
			break;
		
		case 12:
			fVar1 = STATS::STAT_GET_CHALLENGE_FLYING_DIST();
			break;
		
		case 13:
			fVar1 = STATS::STAT_GET_VEHICLE_BAIL_DISTANCE();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	iVar2 = MISC::ABSI(iVar0);
	func_346(&iVar2);
	if (iVar2 == iLocal_124)
	{
		if (func_21(iVar2, 0))
		{
			if (!BitTest(uLocal_123, 1))
			{
				func_27(&uLocal_113, 0, 0);
				Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2 = func_549(&uLocal_113, 0, 0);
				MISC::SET_BIT(&uLocal_123, 1);
			}
			else if ((func_549(&uLocal_113, 0, 0) % 1000) == 0)
			{
				Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2 = func_549(&uLocal_113, 0, 0);
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_123, 1);
	}
	if ((func_21(iLocal_124, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_115, 2000, 0))
	{
		iVar2 = iLocal_124;
		MISC::SET_BIT(&uLocal_123, 2);
	}
	else
	{
		iLocal_124 = iVar2;
		func_46(&uLocal_115);
		MISC::CLEAR_BIT(&uLocal_123, 2);
	}
	return iVar2;
}

void func_346(int iParam0)//Position - 0xC4FD
{
	switch (Local_152.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
						{
							*iParam0 = 0;
						}
					}
					else
					{
						*iParam0 = 0;
					}
				}
			}
			break;
	}
}

void func_347()//Position - 0xC586
{
	if (!BitTest(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 2))
	{
		MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 2);
		func_348(1);
	}
}

void func_348(bool bParam0)//Position - 0xC5B4
{
	var uVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		{
			if (((!func_113(PLAYER::PLAYER_ID()) && !func_7(PLAYER::PLAYER_ID())) && !func_170(PLAYER::PLAYER_ID())) && !func_367(PLAYER::PLAYER_ID()))
			{
				if (func_173())
				{
					func_360(2, 0, 1);
					func_359();
				}
				if (func_357(func_358(func_330(PLAYER::PLAYER_ID()))))
				{
					uVar0 = func_215(2483, -1, 0);
					MISC::CLEAR_BIT(&uVar0, func_358(func_330(PLAYER::PLAYER_ID())));
					func_359();
				}
				if (func_356())
				{
					func_359();
				}
				if (func_330(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 7);
					if (func_355(PLAYER::PLAYER_ID()))
					{
						func_354();
					}
					func_351(func_353(func_330(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 7);
		func_349();
	}
}

void func_349()//Position - 0xC6C3
{
	if (func_350())
	{
		MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 17);
	}
}

bool func_350()//Position - 0xC6E5
{
	return BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 17);
}

void func_351(int iParam0)//Position - 0xC6FD
{
	int iVar0;
	
	if (Global_262145.f_9036 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_352() /*5568*/].f_681.f_4242[iVar0 /*3*/] == iParam0)
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

int func_352()//Position - 0xC760
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_353(int iParam0)//Position - 0xC76D
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

void func_354()//Position - 0xC79F
{
	if (!func_350())
	{
		Global_2793044.f_6866 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 17);
	}
}

int func_355(int iParam0)//Position - 0xC7CD
{
	if (func_330(iParam0) == 236 || func_330(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_356()//Position - 0xC7F5
{
	if (Global_2672505.f_946.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_357(var uParam0)//Position - 0xC80F
{
	var uVar0;
	
	uVar0 = func_215(2483, -1, 0);
	return BitTest(uVar0, uParam0);
}

int func_358(int iParam0)//Position - 0xC827
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
	return Global_262145.f_24142 /* Tunable: -1488550814 */;
}

void func_359()//Position - 0xC8B6
{
	if (func_356())
	{
		Global_2672505.f_946.f_16 = 1;
	}
}

void func_360(int iParam0, int iParam1, bool bParam2)//Position - 0xC8CF
{
	if (func_173())
	{
		if (iParam1 == 1)
		{
			if (Global_2793044.f_4492 == -1)
			{
				Global_2793044.f_4492 = Global_262145.f_27184 /* Tunable: 945146471 */;
			}
			func_27(&(Global_2793044.f_4490), 0, 0);
			if (bParam2)
			{
				if (Global_2793044.f_4495 == -1)
				{
					Global_2793044.f_4495 = Global_262145.f_27185 /* Tunable: -29732167 */;
				}
				func_27(&(Global_2793044.f_4493), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8 = 0;
				func_366(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8 = 0;
			func_366(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_365()) && !func_361(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_361(int iParam0)//Position - 0xC999
{
	if (func_362(iParam0, 1, 0))
	{
		if (Global_1853910[iParam0 /*862*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_362(int iParam0, bool bParam1, bool bParam2)//Position - 0xC9BE
{
	if (bParam1)
	{
		if (func_363(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[iParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_363(int iParam0)//Position - 0xC9F0
{
	return func_364(iParam0);
}

var func_364(int iParam0)//Position - 0xC9FE
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

bool func_365()//Position - 0xCA15
{
	return Global_2683862.f_841;
}

void func_366(bool bParam0)//Position - 0xCA24
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_173())
		{
			if (func_12(PLAYER::PLAYER_ID(), 1, 0))
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
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_12(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

int func_367(int iParam0)//Position - 0xCB1D
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2764905;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
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

int func_368()//Position - 0xCB89
{
	switch (Local_152.f_3)
	{
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_369(int iParam0, int iParam1)//Position - 0xCBE8
{
	if (Local_152.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_370()//Position - 0xCC06
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_385())
	{
		if (Local_152.f_3 == 14)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_384(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if ((!func_383(&iVar2, 0) || ENTITY::GET_ENTITY_MODEL(iVar2) != joaat("dodo")) && ENTITY::IS_ENTITY_IN_AIR(iVar2))
				{
					func_376(Local_152.f_3 != 14, 1, 0);
					if (func_375())
					{
						iVar3 = func_374();
						if (iVar3 >= 0)
						{
							if (!BitTest(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_8[func_373(iVar3)], func_372(iVar3)))
							{
								iLocal_126++;
								MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_8[func_373(iVar3)]), func_372(iVar3));
							}
						}
					}
					iVar0 = iLocal_126;
				}
			}
		}
		else
		{
			iVar0 = func_371();
		}
	}
	else
	{
		STATS::STAT_GET_RECORDED_VALUE(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	return MISC::ABSI(iVar0);
}

int func_371()//Position - 0xCD0C
{
	switch (Local_152.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_372(int iParam0)//Position - 0xCD33
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_373(iParam0) * 31);
}

int func_373(int iParam0)//Position - 0xCD64
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_374()//Position - 0xCD8A
{
	return iLocal_93;
}

int func_375()//Position - 0xCD94
{
	if (iLocal_100 == 1)
	{
		iLocal_100 = 0;
		return 1;
	}
	return 0;
}

void func_376(bool bParam0, bool bParam1, int iParam2)//Position - 0xCDAA
{
	func_378(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_104.f_2 < Local_105.f_2)
		{
			Local_104.f_2 = 0f;
		}
		else
		{
			Local_105.f_2 = 0f;
		}
		if (Local_106.f_2 < Local_107.f_2)
		{
			Local_106.f_2 = 0f;
		}
		else
		{
			Local_107.f_2 = 0f;
		}
	}
	switch (iLocal_94)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_102[iLocal_93 /*3*/]) < fLocal_103)
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, false, true, 0))
							{
								bLocal_95 = true;
								iLocal_94 = 1;
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, false, true, 0))
							{
								bLocal_96 = true;
								iLocal_94 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					func_377();
				}
				else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					func_377();
				}
				else if (!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !bParam1)
				{
					func_377();
				}
				if (bLocal_95)
				{
					if (iLocal_99)
					{
						if (iLocal_98)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, false, true, 0))
							{
								func_377();
								iLocal_100 = 1;
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, false, true, 0))
						{
							iLocal_98 = 1;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, false, true, 0))
						{
							func_377();
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, false, true, 0))
					{
						iLocal_99 = 1;
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, false, true, 0))
					{
						func_377();
					}
				}
				else if (bLocal_96)
				{
					if (iLocal_99)
					{
						if (iLocal_97)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, false, true, 0))
							{
								func_377();
								iLocal_100 = 1;
							}
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, false, true, 0))
						{
							iLocal_97 = 1;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, false, true, 0))
						{
							func_377();
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, false, true, 0))
					{
						iLocal_99 = 1;
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, false, true, 0))
					{
						func_377();
					}
				}
			}
			break;
	}
}

void func_377()//Position - 0xD1AA
{
	bLocal_95 = false;
	bLocal_96 = false;
	iLocal_97 = 0;
	iLocal_98 = 0;
	iLocal_99 = 0;
	iLocal_94 = 0;
}

void func_378(var uParam0, var uParam1)//Position - 0xD1C4
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_101 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	fVar1 = 10000000f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_382(iVar0)) && (uParam1 || !func_381(iVar0)))
		{
			if (func_380(Local_101, Local_102[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = SYSTEM::VDIST(Local_101, Local_102[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_93 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_379(iLocal_93);
}

void func_379(int iParam0)//Position - 0xD25A
{
	switch (iParam0)
	{
		case 0:
			Local_104 = { 1103.0139f, -233.03737f, 56.13004f };
			Local_105 = { 1073.1909f, -214.8478f, 66.059296f };
			fLocal_108 = 30f;
			Local_106 = { 1093.5886f, -248.5926f, 56.88639f };
			Local_107 = { 1063.7744f, -230.14253f, 66.67847f };
			break;
		
		case 1:
			Local_104 = { 1044.1819f, -324.59036f, 49.334076f };
			Local_105 = { 1016.7097f, -307.73825f, 64.81343f };
			fLocal_108 = 30f;
			Local_106 = { 1007.98315f, -320.61588f, 48.454296f };
			Local_107 = { 1036.0067f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_104 = { 916.599f, -419.8782f, 35.62748f };
			Local_105 = { 910.37933f, -383.88257f, 47.54339f };
			fLocal_108 = 7f;
			Local_106 = { 912.13617f, -420.51614f, 35.380337f };
			Local_107 = { 906.8952f, -384.6779f, 47.249256f };
			break;
		
		case 3:
			Local_104 = { 757.7189f, -472.92395f, 19.253498f };
			Local_105 = { 696.5936f, -420.21146f, 35.460842f };
			fLocal_108 = 20.75f;
			Local_106 = { 744.91144f, -480.73734f, 19.065138f };
			Local_107 = { 682.5614f, -429.55334f, 37.0266f };
			break;
		
		case 4:
			Local_104 = { 680.3677f, -581.1792f, 14.214504f };
			Local_105 = { 599.81006f, -528.3059f, 33.40958f };
			fLocal_108 = 45f;
			Local_106 = { 667.3692f, -610.53564f, 13.854013f };
			Local_107 = { 582.84326f, -556.7818f, 33.403355f };
			break;
		
		case 5:
			Local_104 = { 644.2497f, -844.7504f, 12.367073f };
			Local_105 = { 526.86084f, -845.2521f, 35.9896f };
			fLocal_108 = 25f;
			Local_106 = { 644.3659f, -859.38776f, 12.596766f };
			Local_107 = { 526.8615f, -857.52075f, 36.32857f };
			break;
		
		case 6:
			Local_104 = { 634.972f, -1011.6402f, 10.925943f };
			Local_105 = { 539.6501f, -1024.0171f, 35.958515f };
			fLocal_108 = 25f;
			Local_106 = { 634.96124f, -1029.123f, 10.618461f };
			Local_107 = { 543.4893f, -1038.2615f, 35.9593f };
			break;
		
		case 7:
			Local_104 = { 645.7223f, -1191.2153f, 10.451977f };
			Local_105 = { 524.30176f, -1197.1669f, 39.611725f };
			fLocal_108 = 50f;
			Local_106 = { 645.7223f, -1228.9664f, 10.98015f };
			Local_107 = { 521.93787f, -1217.6073f, 39.47172f };
			break;
		
		case 8:
			Local_104 = { 642.12164f, -1295.7301f, 9.005976f };
			Local_105 = { 568.17017f, -1375.3508f, 20.129887f };
			fLocal_108 = 7f;
			Local_106 = { 644.7772f, -1298.1683f, 9.128529f };
			Local_107 = { 571.63416f, -1378.6444f, 20.358023f };
			break;
		
		case 9:
			Local_104 = { 686.5675f, -1444.7098f, 9.065001f };
			Local_105 = { 598.9328f, -1444.438f, 25.688457f };
			fLocal_108 = 25f;
			Local_106 = { 682.3027f, -1429.872f, 9.890836f };
			Local_107 = { 593.82166f, -1432.9955f, 25.600723f };
			break;
		
		case 10:
			Local_104 = { 718.76166f, -1734.3129f, 9.082874f };
			Local_105 = { 615.0017f, -1725.8973f, 27.54585f };
			fLocal_108 = 30f;
			Local_106 = { 717.53546f, -1748.6456f, 9.363478f };
			Local_107 = { 614.21796f, -1734.8475f, 27.357079f };
			break;
		
		case 11:
			Local_104 = { 694.31647f, -2049.8057f, 0.009695f };
			Local_105 = { 618.6845f, -2040.0137f, 25.834118f };
			fLocal_108 = 30f;
			Local_106 = { 693.1836f, -2063.225f, 0.429037f };
			Local_107 = { 607.59436f, -2055.3264f, 26.918158f };
			break;
		
		case 12:
			Local_104 = { 642.66705f, -2494.5513f, 0.468485f };
			Local_105 = { 570.18066f, -2513.9587f, 11.787938f };
			fLocal_108 = 20f;
			Local_106 = { 647.0339f, -2506.2021f, 0.583701f };
			Local_107 = { 571.14154f, -2522.9753f, 10.450453f };
			break;
		
		case 13:
			Local_104 = { 691.82355f, -2558.2185f, 0.363352f };
			Local_105 = { 645.8863f, -2600.3113f, 9.898791f };
			fLocal_108 = 10.25f;
			Local_106 = { 695.79285f, -2561.0337f, 0.346731f };
			Local_107 = { 656.3919f, -2601.9717f, 9.643657f };
			break;
		
		case 14:
			Local_104 = { 723.6254f, -2562.1707f, 0.255647f };
			Local_105 = { 720.75195f, -2619.7695f, 15.732105f };
			fLocal_108 = 15f;
			Local_106 = { 735.76495f, -2561.935f, 0.311182f };
			Local_107 = { 736.1214f, -2618.7666f, 15.790609f };
			break;
		
		case 15:
			Local_104 = { 891.43866f, -2603.12f, 0f };
			Local_105 = { 704.49316f, -2634.7932f, 45f };
			fLocal_108 = 20f;
			Local_106 = { 893.2578f, -2616.235f, 0f };
			Local_107 = { 707.72614f, -2647.6956f, 45f };
			break;
		
		case 16:
			Local_104 = { -2669.587f, 2491.96f, 2.043799f };
			Local_105 = { -2617.7646f, 2841.5947f, 14.082197f };
			fLocal_108 = 26.5f;
			Local_106 = { -2687.6057f, 2494.8682f, 2.608733f };
			Local_107 = { -2637.0847f, 2846.8752f, 14.159884f };
			break;
		
		case 17:
			Local_104 = { -1986.1726f, 4521.799f, 0f };
			Local_105 = { -1809.9026f, 4699.5513f, 53.508797f };
			fLocal_108 = 17f;
			Local_106 = { -1995.6681f, 4531.2593f, 0f };
			Local_107 = { -1817.5435f, 4708.3945f, 53.50917f };
			break;
		
		case 18:
			Local_104 = { -526.0265f, 4472.4424f, 0f };
			Local_105 = { -505.57144f, 4335.7246f, 86.73311f };
			fLocal_108 = 10f;
			Local_106 = { -519.9281f, 4476.3457f, 0f };
			Local_107 = { -500.73132f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_104 = { 98.1615f, 3384.489f, 45.45169f };
			Local_105 = { 154.97403f, 3350.694f, 30.033585f };
			fLocal_108 = 8f;
			Local_106 = { 152.68018f, 3346.7935f, 45.021557f };
			Local_107 = { 95.57188f, 3380.0906f, 30.432842f };
			break;
		
		case 20:
			Local_104 = { 147.86061f, 3406.7961f, 38.036716f };
			Local_105 = { 126.132935f, 3416.9268f, 30.029865f };
			fLocal_108 = 14.5f;
			Local_106 = { 130.09163f, 3425.4172f, 38.056725f };
			Local_107 = { 151.87035f, 3415.3914f, 30.057804f };
			break;
		
		case 21:
			Local_104 = { 2830.9722f, 4967.1396f, 34.560127f };
			Local_105 = { 2818.7188f, 4992.2983f, 51.2909f };
			fLocal_108 = 10f;
			Local_106 = { 2826.7668f, 4964.185f, 34.10636f };
			Local_107 = { 2814.2163f, 4989.9834f, 51.21849f };
			break;
		
		case 22:
			Local_104 = { -151.57642f, 4264.417f, 31.047348f };
			Local_105 = { -193.19623f, 4224.604f, 43.87255f };
			fLocal_108 = 10f;
			Local_106 = { -148.38419f, 4261.0713f, 31.57409f };
			Local_107 = { -190.47188f, 4222.076f, 43.954426f };
			break;
		
		case 23:
			Local_104 = { -426.69186f, 2964.272f, 14.848002f };
			Local_105 = { -396.2298f, 2959.2776f, 23.506374f };
			fLocal_108 = 7f;
			Local_106 = { -425.0283f, 2967.8613f, 15.226991f };
			Local_107 = { -395.60727f, 2962.6067f, 24.38079f };
			break;
		
		case 24:
			Local_104 = { -192.34137f, 2864.9163f, 30.72595f };
			Local_105 = { -170.15094f, 2857.1282f, 43.941822f };
			fLocal_108 = 10f;
			Local_106 = { -192.01286f, 2871.6025f, 29.999426f };
			Local_107 = { -169.59575f, 2863.8384f, 44.032505f };
			break;
		
		case 25:
			Local_104 = { 2539.185f, 2228.7717f, 18.610205f };
			Local_105 = { 2574.3733f, 2169.4014f, 27.265978f };
			fLocal_108 = 10f;
			Local_106 = { 2543.7075f, 2231.4016f, 18.331003f };
			Local_107 = { 2578.0789f, 2171.5837f, 27.26057f };
			break;
		
		case 26:
			Local_104 = { 2954.0867f, 815.7209f, 0.037901f };
			Local_105 = { 2933.1892f, 796.4688f, 12.983917f };
			fLocal_108 = 35f;
			Local_106 = { 2966.1226f, 806.88885f, 0.544056f };
			Local_107 = { 2950.8013f, 786.78156f, 11.745959f };
			break;
		
		case 27:
			Local_104 = { 2329.6726f, -459.66476f, 70.24277f };
			Local_105 = { 2413.3838f, -361.21884f, 91.77886f };
			fLocal_108 = 12f;
			Local_106 = { 2324.752f, -455.52377f, 70.25145f };
			Local_107 = { 2407.4094f, -356.20032f, 91.43083f };
			break;
		
		case 28:
			Local_104 = { 1943.4285f, -753.251f, 80.17905f };
			Local_105 = { 1850.3645f, -760.95874f, 93.025215f };
			fLocal_108 = 7f;
			Local_106 = { 1943.366f, -758.28705f, 80.322914f };
			Local_107 = { 1851.3535f, -765.18066f, 92.935455f };
			break;
		
		case 29:
			Local_104 = { -271.2849f, -2414.9932f, -10f };
			Local_105 = { -542.9096f, -2225.856f, 52.650043f };
			fLocal_108 = 30f;
			Local_106 = { -279.83987f, -2427.2117f, -10f };
			Local_107 = { -551.26556f, -2237.7905f, 52.64634f };
			break;
		
		case 30:
			Local_104 = { -1483.0004f, 2691.4277f, -10f };
			Local_105 = { -1377.1682f, 2600.7688f, 15.955276f };
			fLocal_108 = 12f;
			Local_106 = { -1478.1521f, 2696.688f, -10f };
			Local_107 = { -1378.5032f, 2608.6978f, 15.609236f };
			break;
		
		case 31:
			Local_104 = { 222.15187f, -2343.4866f, 0.039199f };
			Local_105 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_108 = 12f;
			Local_106 = { 216.95901f, -2343.4866f, 0.207734f };
			Local_107 = { 216.60204f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_104 = { 346.46216f, -2244.374f, 0.159779f };
			Local_105 = { 346.83472f, -2389.5906f, 7.852059f };
			fLocal_108 = 20f;
			Local_106 = { 359.60904f, -2244.4678f, 0.129684f };
			Local_107 = { 355.40543f, -2390.2583f, 7.080691f };
			break;
		
		case 33:
			Local_104 = { -1859.6799f, -322.63574f, 56.16368f };
			Local_105 = { -1836.6136f, -335.41412f, 96.116104f };
			fLocal_108 = 7.5f;
			Local_106 = { -1860.2698f, -327.86343f, 57.543f };
			Local_107 = { -1837.2709f, -339.22272f, 95.69325f };
			break;
		
		case 34:
			Local_104 = { -680.26324f, -600.818f, 69.11289f };
			Local_105 = { -706.66125f, -600.7515f, 30.476036f };
			fLocal_108 = 31.5f;
			Local_106 = { -680.6077f, -618.36584f, 69.27496f };
			Local_107 = { -706.3596f, -618.23846f, 30.312347f };
			break;
		
		case 35:
			Local_104 = { -1468.0961f, -591.71576f, 67.055176f };
			Local_105 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_108 = 11.75f;
			Local_106 = { -1474.903f, -591.12146f, 67.08091f };
			Local_107 = { -1457.1731f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_104 = { -1544.9578f, -537.1475f, 72.443474f };
			Local_105 = { -1564.6162f, -551.1829f, 32.861633f };
			fLocal_108 = 11.75f;
			Local_106 = { -1541.0079f, -541.5494f, 71.61972f };
			Local_107 = { -1561.2189f, -555.86804f, 32.927902f };
			break;
		
		case 37:
			Local_104 = { 333.2108f, -2727.2737f, 20.716625f };
			Local_105 = { 333.4297f, -2791.609f, 41.990227f };
			fLocal_108 = 20f;
			Local_106 = { 343.11273f, -2727.2358f, 20.236126f };
			Local_107 = { 343.66782f, -2791.6023f, 41.379284f };
			break;
		
		case 38:
			Local_104 = { 1928.0713f, 6228.3555f, 43.493977f };
			Local_105 = { 2039.8823f, 6167.3975f, 55.46405f };
			fLocal_108 = 13f;
			Local_106 = { 1931.8202f, 6235.634f, 43.373817f };
			Local_107 = { 2039.5975f, 6176.5254f, 55.25597f };
			break;
		
		case 39:
			Local_104 = { -736.4309f, -1590.9208f, 10.808919f };
			Local_105 = { -710.81104f, -1516.3495f, -0.098598f };
			fLocal_108 = 15f;
			Local_106 = { -727.2307f, -1585.2212f, 11.78027f };
			Local_107 = { -700.02014f, -1511.7826f, -0.341655f };
			break;
		
		case 40:
			Local_104 = { -676.3775f, -1548.5526f, 12.337475f };
			Local_105 = { -659.329f, -1507.0629f, -0.788618f };
			fLocal_108 = 25f;
			Local_106 = { -654.203f, -1536.146f, 9.191055f };
			Local_107 = { -645.9954f, -1500.2194f, -2.406948f };
			break;
		
		case 41:
			Local_104 = { -624.2344f, -1537.0453f, 12.601933f };
			Local_105 = { -622.1749f, -1472.8766f, -0.292606f };
			fLocal_108 = 8f;
			Local_106 = { -615.4003f, -1536.65f, 12.402705f };
			Local_107 = { -619.7385f, -1472.9371f, -0.243267f };
			break;
		
		case 42:
			Local_104 = { -492.5057f, -1632.4572f, 24.3307f };
			Local_105 = { -418.2088f, -1487.4521f, 0f };
			fLocal_108 = 25f;
			Local_106 = { -486.2016f, -1636.095f, 24.208052f };
			Local_107 = { -398.76483f, -1490.4403f, 0f };
			break;
		
		case 43:
			Local_104 = { -359.3541f, -1639.6927f, 13.134555f };
			Local_105 = { -388.49548f, -1690.9452f, -0.183164f };
			fLocal_108 = 25f;
			Local_106 = { -378.15182f, -1705.6597f, 12.471957f };
			Local_107 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_104 = { -243.44357f, -1814.6228f, 25.694649f };
			Local_105 = { -183.99873f, -1780.6447f, -0.085802f };
			fLocal_108 = 25f;
			Local_106 = { -235.13191f, -1822.0938f, 25.865416f };
			Local_107 = { -175.51047f, -1788.2748f, -0.506062f };
			break;
		
		case 45:
			Local_104 = { 84.55537f, -2046.1588f, 13.307674f };
			Local_105 = { 17.93164f, -2045.1519f, -0.031946f };
			fLocal_108 = 25f;
			Local_106 = { 17.907875f, -2035.773f, 12.627057f };
			Local_107 = { 84.57207f, -2034.1838f, 0.048385f };
			break;
		
		case 46:
			Local_104 = { 221.50294f, -2232.7664f, 9.88676f };
			Local_105 = { 221.68253f, -2244.081f, 4.479149f };
			fLocal_108 = 8f;
			Local_106 = { 218.58301f, -2232.7664f, 9.886198f };
			Local_107 = { 218.72896f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_104 = { 221.65178f, -2184.6348f, 11.664567f };
			Local_105 = { 221.61394f, -2208.1372f, 5.876424f };
			fLocal_108 = 8f;
			Local_106 = { 217.89954f, -2184.6348f, 11.540504f };
			Local_107 = { 218.33266f, -2208.1372f, 5.864793f };
			break;
		
		case 48:
			Local_104 = { 2326.57f, 1096.0305f, 76.314575f };
			Local_105 = { 2290.332f, 1136.1307f, 58.857056f };
			fLocal_108 = 21f;
			Local_106 = { 2334.4534f, 1103.0668f, 76.26603f };
			Local_107 = { 2297.8457f, 1142.8969f, 58.84243f };
			break;
		
		case 49:
			Local_104 = { 2379.4421f, 1150.7755f, 58.796318f };
			Local_105 = { 2327.658f, 1212.3663f, 72.8333f };
			fLocal_108 = 12f;
			Local_106 = { 2374.0637f, 1146.2821f, 58.833305f };
			Local_107 = { 2320.8945f, 1209.5961f, 72.79299f };
			break;
		
		case 50:
			Local_104 = { -1179.4052f, -355.25543f, 56.53003f };
			Local_105 = { -1198.0641f, -357.8363f, 35.35551f };
			fLocal_108 = 12.5f;
			Local_106 = { -1178.3853f, -361.87842f, 56.150814f };
			Local_107 = { -1197.1038f, -364.70044f, 36.494755f };
			break;
		
		case 51:
			Local_104 = { -921.3846f, -384.93997f, 137.01813f };
			Local_105 = { -912.4324f, -429.22897f, 36.701126f };
			fLocal_108 = 16f;
			Local_106 = { -914.1658f, -387.94437f, 137.07936f };
			Local_107 = { -906.25336f, -424.69104f, 47.11882f };
			break;
		
		case 52:
			Local_104 = { -740.2564f, 246.45285f, 132.29219f };
			Local_105 = { -718.3602f, 201.00415f, 80.95571f };
			fLocal_108 = 22f;
			Local_106 = { -726.6429f, 253.06764f, 132.33194f };
			Local_107 = { -705.5858f, 210.43356f, 78.70573f };
			break;
		
		case 53:
			Local_104 = { -771.2068f, 268.2729f, 132.16891f };
			Local_105 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_108 = 16f;
			Local_106 = { -770.8035f, 310.86252f, 137.41614f };
			Local_107 = { -763.06805f, 269.04404f, 83.31474f };
			break;
		
		case 54:
			Local_104 = { 259.22052f, 135.41461f, 136.70827f };
			Local_105 = { 279.23962f, 128.13794f, 100.8233f };
			fLocal_108 = 16f;
			Local_106 = { 261.96936f, 142.96764f, 136.68892f };
			Local_107 = { 281.72034f, 134.95508f, 100.77042f };
			break;
		
		case 55:
			Local_104 = { 393.54797f, -30.871658f, 152.66345f };
			Local_105 = { 369.9622f, -23.884607f, 88.35776f };
			fLocal_108 = 8f;
			Local_106 = { 390.5358f, -36.088818f, 152.78125f };
			Local_107 = { 368.12747f, -28.818884f, 88.69447f };
			break;
		
		case 56:
			Local_104 = { 114.31391f, -648.42975f, 261.8488f };
			Local_105 = { 131.07816f, -733.7684f, 39.343933f };
			fLocal_108 = 20f;
			Local_106 = { 124.8467f, -646.65753f, 261.8488f };
			Local_107 = { 140.05025f, -737.427f, 39.349304f };
			break;
		
		case 57:
			Local_104 = { -215.91899f, -823.8436f, 126.02239f };
			Local_105 = { -193.22368f, -761.77814f, 27.913818f };
			fLocal_108 = 20f;
			Local_106 = { -225.39696f, -820.39374f, 126.08122f };
			Local_107 = { -202.94325f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_104 = { -296.4725f, -802.08154f, 95.401085f };
			Local_105 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_108 = 20f;
			Local_106 = { -305.46024f, -798.8369f, 95.48194f };
			Local_107 = { -285.73764f, -745.0959f, 49.576508f };
			break;
		
		case 59:
			Local_104 = { -292.30344f, -823.3569f, 95.376205f };
			Local_105 = { -258.59906f, -835.56323f, 27.979462f };
			fLocal_108 = 20f;
			Local_106 = { -288.92062f, -814.02203f, 95.375565f };
			Local_107 = { -255.2116f, -826.25604f, 27.737495f };
			break;
		
		case 60:
			Local_104 = { -256.35886f, -714.78375f, 110.16166f };
			Local_105 = { -212.90544f, -730.53204f, 32.21946f };
			fLocal_108 = 20f;
			Local_106 = { -253.77232f, -705.6632f, 110.17357f };
			Local_107 = { -210.05878f, -722.6748f, 32.465363f };
			break;
		
		case 61:
			Local_104 = { 1808.2145f, 1949.2458f, 71.73707f };
			Local_105 = { 1837.9062f, 2127.2832f, 52.80491f };
			fLocal_108 = 9.75f;
			Local_106 = { 1802.7859f, 1950.2617f, 71.74002f };
			Local_107 = { 1831.9944f, 2127.4326f, 52.83893f };
			break;
		
		case 62:
			Local_104 = { 2388.733f, 2931.941f, 46.62681f };
			Local_105 = { 2426.6807f, 2883.0662f, 36.215237f };
			fLocal_108 = 10f;
			Local_106 = { 2392.5466f, 2934.8672f, 46.626797f };
			Local_107 = { 2430.3325f, 2885.9084f, 36.28148f };
			break;
		
		case 63:
			Local_104 = { 2700.0557f, 4836.381f, 42.078537f };
			Local_105 = { 2685.6733f, 4893.3804f, 30.908669f };
			fLocal_108 = 20.75f;
			Local_106 = { 2685.6719f, 4821.653f, 42.184708f };
			Local_107 = { 2672.8123f, 4880.3564f, 31.133106f };
			break;
		
		case 64:
			Local_104 = { -1053.4464f, 4766.245f, 234.32512f };
			Local_105 = { -1040.2634f, 4737.1567f, 204.49164f };
			fLocal_108 = 5f;
			Local_106 = { -1051.4143f, 4767.193f, 234.4293f };
			Local_107 = { -1037.9542f, 4738.3545f, 204.52815f };
			break;
	}
}

int func_380(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0xEAD6
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (MISC::ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

int func_381(int iParam0)//Position - 0xEB51
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
		case 12:
		case 13:
		case 20:
		case 31:
		case 32:
		case 46:
		case 47:
			return 1;
			break;
	}
	return 0;
}

int func_382(int iParam0)//Position - 0xEBA4
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
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
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_383(int iParam0, int iParam1)//Position - 0xEC15
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(*iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_384(int iParam0, bool bParam1)//Position - 0xEC4A
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

int func_385()//Position - 0xECCF
{
	switch (Local_152.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_386(struct<3> Param0, float fParam1, int iParam2)//Position - 0xED52
{
	int iVar0;
	
	iVar0 = -1;
	if (func_403() < 10)
	{
		iVar0 = func_402();
		func_387(Param0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_387(struct<3> Param0, var uParam1, int iParam2, var uParam3)//Position - 0xED7F
{
	func_388(Param0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_388(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0xED99
{
	struct<12> Var0;
	
	if (func_397(PLAYER::PLAYER_ID()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_396(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_391(Var0))
		{
			Global_2635559.f_45.f_64 = func_390(PLAYER::PLAYER_ID());
			func_389(Var0, iParam4);
		}
	}
}

void func_389(struct<12> Param0, int iParam1)//Position - 0xEE0F
{
	Global_2635559.f_368[iParam1 /*12*/] = { Param0 };
	Global_2635559.f_368[iParam1 /*12*/].f_9 = 1;
}

int func_390(int iParam0)//Position - 0xEE38
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2657589[iParam0 /*466*/].f_1;
	}
	return 0;
}

int func_391(struct<12> Param0)//Position - 0xEE5A
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2635559.f_45[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_392(Global_2635559.f_45[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_392(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0xEEBA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_395(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_393(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_395(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_393(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_393(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0xEFF3
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.70710677f);
	Var0 = { Param2 - Vector(fVar2, fVar2, fVar2) };
	Var1 = { Param2 + Vector(fVar2, fVar2, fVar2) };
	return func_394(Param0, Param1, Var0, Var1);
}

int func_394(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0xF037
{
	if (((((Param0.f_0 >= Param2.f_0 && Param0.f_1 >= Param2.f_1) && Param0.f_2 >= Param2.f_2) && Param1.f_0 <= Param3.f_0) && Param1.f_1 <= Param3.f_1) && Param1.f_2 <= Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_395(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)//Position - 0xF08E
{
	struct<3> Var0;
	
	Var0 = { Param2 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_396(var uParam0, var uParam1)//Position - 0xF0B9
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var1.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var1.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var1.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var1.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var1.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var1.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var1 };
}

int func_397(bool bParam0)//Position - 0xF150
{
	if (((func_400(bParam0, 1) || func_399(bParam0)) || func_119(bParam0, 0)) || func_398(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_398(bool bParam0)//Position - 0xF18C
{
	if (!func_12(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2);
}

int func_399(int iParam0)//Position - 0xF1B4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/] != -1;
	}
	return 0;
}

bool func_400(int iParam0, bool bParam1)//Position - 0xF1D5
{
	if (func_401() != 0)
	{
		return func_390(iParam0) != 0;
	}
	return func_362(iParam0, bParam1, 0);
}

int func_401()//Position - 0xF1FC
{
	return Global_32163;
}

int func_402()//Position - 0xF207
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2635559.f_368[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_403()//Position - 0xF239
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635559.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_404(char* sParam0, char* sParam1, char* sParam2)//Position - 0xF26C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_405(int iParam0)//Position - 0xF28B
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0" /* GXT: Perform the longest jump in a land vehicle. */;
		
		case 1:
			return "AMCH_1" /* GXT: Fall the longest distance with a parachute before opening it. */;
		
		case 2:
			return "AMCH_2" /* GXT: Achieve the highest speed in a land vehicle. */;
		
		case 3:
			return "AMCH_3" /* GXT: Perform the longest stoppie on a motorcycle. */;
		
		case 4:
			return "AMCH_4" /* GXT: Perform the longest wheelie on a motorcycle. */;
		
		case 5:
			return "AMCH_5" /* GXT: Drive the furthest distance in a land vehicle without crashing. */;
		
		case 6:
			return "AMCH_6" /* GXT: Open your parachute closest to the ground while freefalling. */;
		
		case 7:
			return "AMCH_7" /* GXT: Steal the most vehicles. */;
		
		case 8:
			return "AMCH_8" /* GXT: Perform the most near misses with other vehicles in a land vehicle without crashing. */;
		
		case 14:
			return "AMCH_9" /* GXT: Fly under the most ~y~bridges~s~ in the time limit. */;
		
		case 9:
			return "AMCH_12" /* GXT: Reverse the longest distance without crashing. */;
		
		case 10:
			return "AMCH_13" /* GXT: Fall the longest distance without dying. */;
		
		case 11:
			return "AMCH_15" /* GXT: Fly low to the ground for the longest distance. */;
		
		case 12:
			return "AMCH_16" /* GXT: Fly upside-down near the ground for the longest distance. */;
		
		case 15:
			return "AMCH_19" /* GXT: Achieve the highest number of headshot kills on players. */;
		
		case 16:
			return "AMCH_20" /* GXT: Achieve the highest number of driveby kills on players. */;
		
		case 17:
			return "AMCH_21" /* GXT: Achieve the highest number of melee kills on players. */;
		
		case 18:
			return "AMCH_22" /* GXT: Achieve the highest number of sniper rifle kills on players. */;
		
		case 13:
			return "AMCH_23" /* GXT: Travel the furthest distance when bailing from a land vehicle. */;
		
		default:
	}
	return "";
}

char* func_406(int iParam0)//Position - 0xF394
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0SLC" /* GXT: Longest Jump */;
		
		case 1:
			return "AMCH_1SLC" /* GXT: Longest Freefall */;
		
		case 2:
			return "AMCH_2SLC" /* GXT: Highest Speed */;
		
		case 3:
			return "AMCH_3SLC" /* GXT: Longest Stoppie */;
		
		case 4:
			return "AMCH_4SLC" /* GXT: Longest Wheelie */;
		
		case 5:
			return "AMCH_5SLC" /* GXT: No Crashes */;
		
		case 6:
			return "AMCH_6SLC" /* GXT: Lowest Parachute */;
		
		case 7:
			return "AMCH_7SLC" /* GXT: Vehicles Stolen */;
		
		case 8:
			return "AMCH_8SLC" /* GXT: Near Misses */;
		
		case 14:
			return "AMCH_9SLC" /* GXT: Fly Under Bridges */;
		
		case 9:
			return "AMCH_12SLC" /* GXT: Reverse Driving */;
		
		case 10:
			return "AMCH_13SLC" /* GXT: Longest Fall Survived */;
		
		case 11:
			return "AMCH_15SLC" /* GXT: Low Flying */;
		
		case 12:
			return "AMCH_16SLC" /* GXT: Inverted Flying */;
		
		case 15:
			return "AMCH_19SLC" /* GXT: Headshot Kills */;
		
		case 16:
			return "AMCH_20SLC" /* GXT: Driveby */;
		
		case 17:
			return "AMCH_21SLC" /* GXT: Melee */;
		
		case 18:
			return "AMCH_22SLC" /* GXT: Sniper Kills */;
		
		case 13:
			return "AMCH_23SLC" /* GXT: Longest Bail */;
		
		default:
	}
	return "";
}

char* func_407(int iParam0)//Position - 0xF49D
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0" /* GXT: Perform the longest jump in a land vehicle */;
		
		case 1:
			return "AMCH_BIG_1" /* GXT: Fall the longest distance with a parachute before opening it */;
		
		case 2:
			return "AMCH_BIG_2" /* GXT: Achieve the highest speed in a land vehicle */;
		
		case 3:
			return "AMCH_BIG_3" /* GXT: Perform the longest stoppie on a motorcycle */;
		
		case 4:
			return "AMCH_BIG_4" /* GXT: Perform the longest wheelie on a motorcycle */;
		
		case 5:
			return "AMCH_BIG_5" /* GXT: Drive the furthest distance in a land vehicle without crashing */;
		
		case 6:
			return "AMCH_BIG_6" /* GXT: Open your parachute closest to the ground while freefalling */;
		
		case 7:
			return "AMCH_BIG_7" /* GXT: Steal the most vehicles */;
		
		case 8:
			return "AMCH_BIG_8" /* GXT: Perform the most near misses with other vehicles in a land vehicle without crashing */;
		
		case 14:
			return "AMCH_BIG_9" /* GXT: Fly under the most bridges in the time limit */;
		
		case 9:
			return "AMCH_BIG_12" /* GXT: Reverse the longest distance without crashing */;
		
		case 10:
			return "AMCH_BIG_13" /* GXT: Fall the longest distance without dying */;
		
		case 11:
			return "AMCH_BIG_15" /* GXT: Fly low to the ground for the longest distance */;
		
		case 12:
			return "AMCH_BIG_16" /* GXT: Fly upside-down near the ground for the longest distance */;
		
		case 15:
			return "AMCH_BIG_19" /* GXT: Achieve the highest number of headshot kills on players */;
		
		case 16:
			return "AMCH_BIG_20" /* GXT: Achieve the highest number of driveby kills on players */;
		
		case 17:
			return "AMCH_BIG_21" /* GXT: Achieve the highest number of melee kills on players */;
		
		case 18:
			return "AMCH_BIG_22" /* GXT: Achieve the highest number of sniper rifle kills on players */;
		
		case 13:
			return "AMCH_BIG_23" /* GXT: Travel the furthest distance when bailing from a vehicle */;
		
		default:
	}
	return "";
}

void func_408()//Position - 0xF5A6
{
	if (!func_163())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574757.f_9)
	{
		return;
	}
	func_159();
}

void func_409(var uParam0)//Position - 0xF5D3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_382(iVar0) && !func_381(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_102[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_410()//Position - 0xF614
{
	if (!func_385())
	{
		if (Local_152.f_3 == 14)
		{
			func_413();
		}
		Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_1 = func_371();
	}
	else if ((!BitTest(Global_1836858.f_1, 4) && !BitTest(Global_1836858.f_1, 5)) && !func_412(PLAYER::PLAYER_ID()))
	{
		func_411();
	}
}

void func_411()//Position - 0xF672
{
	switch (Local_152.f_3)
	{
		case 0:
			STATS::STAT_START_RECORD_STAT(8, 2);
			break;
		
		case 1:
			STATS::STAT_START_RECORD_STAT(13, 2);
			break;
		
		case 2:
			STATS::STAT_START_RECORD_STAT(4, 2);
			break;
		
		case 4:
			STATS::STAT_START_RECORD_STAT(1, 2);
			break;
		
		case 3:
			STATS::STAT_START_RECORD_STAT(2, 2);
			break;
		
		case 5:
			STATS::STAT_START_RECORD_STAT(3, 2);
			break;
		
		case 6:
			STATS::STAT_START_RECORD_STAT(11, 3);
			break;
		
		case 7:
			STATS::STAT_START_RECORD_STAT(14, 1);
			break;
		
		case 8:
			STATS::STAT_START_RECORD_STAT(29, 2);
			break;
		
		case 9:
			STATS::STAT_START_RECORD_STAT(12, 2);
			break;
		
		case 10:
			STATS::STAT_START_RECORD_STAT(10, 2);
			break;
		
		case 11:
			STATS::STAT_START_RECORD_STAT(18, 2);
			break;
		
		case 12:
			STATS::STAT_START_RECORD_STAT(20, 2);
			break;
		
		case 13:
			STATS::STAT_START_RECORD_STAT(27, 2);
			break;
		
		case 15:
			STATS::STAT_START_RECORD_STAT(26, 1);
			break;
		
		case 16:
			STATS::STAT_START_RECORD_STAT(25, 1);
			break;
		
		case 17:
			STATS::STAT_START_RECORD_STAT(22, 1);
			break;
		
		case 18:
			STATS::STAT_START_RECORD_STAT(24, 1);
			break;
	}
	MISC::SET_BIT(&uLocal_123, 8);
}

bool func_412(bool bParam0)//Position - 0xF7BB
{
	return func_14(bParam0, 0);
}

void func_413()//Position - 0xF7CA
{
	Local_102[0 /*3*/] = { 1083f, -231f, 60f };
	Local_102[1 /*3*/] = { 1024f, -325f, 60f };
	Local_102[2 /*3*/] = { 910f, -401f, 43f };
	Local_102[3 /*3*/] = { 721f, -457f, 26f };
	Local_102[4 /*3*/] = { 643f, -579f, 26f };
	Local_102[5 /*3*/] = { 590f, -851f, 26f };
	Local_102[6 /*3*/] = { 590f, -1023f, 16f };
	Local_102[7 /*3*/] = { 582f, -1205f, 24f };
	Local_102[8 /*3*/] = { 608f, -1335f, 16f };
	Local_102[9 /*3*/] = { 640f, -1434f, 16f };
	Local_102[10 /*3*/] = { 671f, -1742f, 20f };
	Local_102[11 /*3*/] = { 651f, -2046f, 16f };
	Local_102[12 /*3*/] = { 603f, -2505f, 9f };
	Local_102[13 /*3*/] = { 673f, -2582f, 4f };
	Local_102[14 /*3*/] = { 728f, -2594f, 10f };
	Local_102[15 /*3*/] = { 794f, -2624f, 27f };
	Local_102[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_102[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_102[18 /*3*/] = { -513f, 4427f, 40f };
	Local_102[19 /*3*/] = { 126f, 3366f, 40f };
	Local_102[20 /*3*/] = { 143f, 3418f, 36f };
	Local_102[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_102[22 /*3*/] = { -162f, 4249f, 40f };
	Local_102[23 /*3*/] = { -408f, 2964f, 20f };
	Local_102[24 /*3*/] = { -181f, 2862f, 38f };
	Local_102[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_102[26 /*3*/] = { 2950f, 803f, 8f };
	Local_102[27 /*3*/] = { 2369f, -409f, 80f };
	Local_102[28 /*3*/] = { 1906f, -755f, 84f };
	Local_102[29 /*3*/] = { -403f, -2333f, 40f };
	Local_102[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_102[31 /*3*/] = { 219f, -2315f, 5f };
	Local_102[32 /*3*/] = { 350f, -2315f, 5f };
	Local_102[33 /*3*/] = { -1848f, -333f, 75f };
	Local_102[34 /*3*/] = { -693f, -608f, 69f };
	Local_102[35 /*3*/] = { -1461f, -582f, 53f };
	Local_102[36 /*3*/] = { -1553f, -546f, 59f };
	Local_102[37 /*3*/] = { 338f, -2758f, 23f };
	Local_102[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_102[39 /*3*/] = { -713f, -1538f, 13f };
	Local_102[40 /*3*/] = { -659f, -1518f, 13f };
	Local_102[41 /*3*/] = { -620f, -1502f, 16f };
	Local_102[42 /*3*/] = { -445f, -1575f, 26f };
	Local_102[43 /*3*/] = { -373f, -1680f, 19f };
	Local_102[44 /*3*/] = { -212f, -1805f, 29f };
	Local_102[45 /*3*/] = { 47f, -2040f, 18f };
	Local_102[46 /*3*/] = { 223f, -2240f, 6f };
	Local_102[47 /*3*/] = { 218f, -2189f, 6f };
	Local_102[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_102[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_102[50 /*3*/] = { -1186f, -365f, 46f };
	Local_102[51 /*3*/] = { -916f, -407f, 93f };
	Local_102[52 /*3*/] = { -726f, 235f, 105f };
	Local_102[53 /*3*/] = { -774f, 286f, 112f };
	Local_102[54 /*3*/] = { 271f, 134f, 125f };
	Local_102[55 /*3*/] = { 377f, -28f, 125f };
	Local_102[56 /*3*/] = { 121f, -703f, 150f };
	Local_102[57 /*3*/] = { -204f, -784f, 74f };
	Local_102[58 /*3*/] = { -287f, -774f, 72f };
	Local_102[59 /*3*/] = { -272f, -824f, 71f };
	Local_102[60 /*3*/] = { -230f, -723f, 80f };
	Local_102[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_102[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_102[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_102[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_414(bool bParam0, bool bParam1)//Position - 0xFD8D
{
	if (bParam1)
	{
		if (!BitTest(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
	}
}

void func_415(var uParam0, int iParam1)//Position - 0xFDEA
{
	if (func_330(PLAYER::PLAYER_ID()) == 133 && iParam1)
	{
		Global_2793044.f_5146 = uParam0;
	}
	else
	{
		Global_2793044.f_5146 = -1;
	}
}

void func_416(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xFE1B
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2793044.f_5072 = -1;
	bVar0 = (func_119(PLAYER::PLAYER_ID(), 0) && func_115(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_414(func_433(iParam0), 1);
	}
	else
	{
		func_432(iParam0, -1);
		if (func_8(PLAYER::PLAYER_ID()))
		{
			Global_1836858.f_3 = iParam0;
		}
		else
		{
			func_431(iParam0);
		}
		Global_1836858.f_4 = -1;
		if (func_8(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836858.f_1), 5);
		}
		if (((func_173() && !func_172()) || func_171(PLAYER::PLAYER_ID(), 21)) || func_171(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836858.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836858.f_1), 17);
		MISC::SET_BIT(&(Global_1836858.f_1), 20);
		if (func_430(iParam0))
		{
			func_429();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_426(fParam1);
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
		if (func_424(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1836858.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_4585348)
			{
				func_422(1);
				if (func_272(0))
				{
					MISC::SET_BIT(&(Global_1836858.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1836858.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_420(1);
			MISC::SET_BIT(&(Global_1836858.f_1), 12);
		}
		if (bParam5)
		{
			func_419();
			MISC::SET_BIT(&(Global_1836858.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_417(iParam0))
			{
				MISC::SET_BIT(&(Global_1836858.f_1), 21);
			}
		}
	}
	Global_2764092 = 1;
}

int func_417(int iParam0)//Position - 0xFFFF
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
	if (func_130(iParam0) == 1)
	{
		return 1;
	}
	if (func_418())
	{
		return 1;
	}
	return 0;
}

int func_418()//Position - 0x1006F
{
	switch (func_329())
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

void func_419()//Position - 0x1009D
{
	MISC::SET_BIT(&(Global_2793044.f_5063), 0);
}

void func_420(bool bParam0)//Position - 0x100B1
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100733.f_8 = 1;
	}
	else
	{
		Global_100733.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_421(iVar0);
		iVar0++;
	}
}

void func_421(int iParam0)//Position - 0x100E8
{
	Global_100733.f_202[iParam0] = 1;
	Global_100733.f_201 = 1;
}

void func_422(int iParam0)//Position - 0x10102
{
	if (func_423() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_4585348)
	{
		return;
	}
	Global_4585348 = iParam0;
	Global_4585350 = 0;
	Global_4585351 = 0;
}

int func_423()//Position - 0x10137
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

int func_424(int iParam0)//Position - 0x1017D
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_425(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_425(bool bParam0)//Position - 0x101BB
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

void func_426(float fParam0)//Position - 0x101DE
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_427())
	{
		return;
	}
	fVar0 = (Global_2793044.f_5220 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2793044.f_5221))
	{
		if (!Global_2793044.f_5221 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2793044.f_5220 = fParam0;
	Global_2793044.f_5221 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_427()//Position - 0x1024A
{
	switch (func_401())
	{
		case 0:
			return func_428();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_428()//Position - 0x1027D
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_429()//Position - 0x102A1
{
	Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_210 = 0;
	MISC::CLEAR_BIT(&(Global_2793044.f_4660), 1);
}

int func_430(int iParam0)//Position - 0x102C3
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_431(int iParam0)//Position - 0x102DD
{
	Global_1894573[PLAYER::PLAYER_ID() /*608*/] = iParam0;
}

void func_432(int iParam0, int iParam1)//Position - 0x102F2
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_357(func_358(iVar0)))
		{
			MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 2);
		}
	}
}

int func_433(int iParam0)//Position - 0x1034D
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

int func_434()//Position - 0x10373
{
	switch (Local_152.f_3)
	{
		case 18:
		case 16:
		case 15:
		case 17:
			return 1;
		
		default:
	}
	return 0;
}

void func_435()//Position - 0x103A2
{
	Global_1945089 = 1;
	if (!BitTest(Global_2802658, 0))
	{
		MISC::SET_BIT(&Global_2802658, 0);
		MISC::SET_BIT(&Global_1945090, 0);
	}
	if (!BitTest(Global_2802658, 1))
	{
		MISC::SET_BIT(&Global_2802658, 1);
		MISC::SET_BIT(&Global_1945090, 1);
	}
	if (!BitTest(Global_2802658, 5))
	{
		MISC::SET_BIT(&Global_2802658, 5);
		MISC::SET_BIT(&Global_1945090, 5);
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

int func_436()//Position - 0x104AB
{
	switch (Local_152.f_3)
	{
		case 1:
		case 6:
		case 11:
		case 12:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

void func_437()//Position - 0x104E0
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_152.f_3))
	{
		if (Local_152.f_3 == 1 || Local_152.f_3 == 6)
		{
			iVar0 = func_458(PLAYER::PLAYER_ID(), 1);
			iVar1 = func_208(iVar0, 1);
			if (iVar1 < 11)
			{
				if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, false);
					func_438(1);
				}
			}
			else
			{
				PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), true);
			}
		}
	}
}

void func_438(bool bParam0)//Position - 0x10552
{
	int iVar0;
	
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		func_456(PLAYER::PLAYER_ID(), func_215(586, -1, 0), 0);
		if (func_455(3610, -1))
		{
		}
		iVar0 = func_215(2042, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_454(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (func_269(0))
		{
			func_456(PLAYER::PLAYER_ID(), func_215(586, -1, 0), 0);
		}
		else
		{
			func_456(PLAYER::PLAYER_ID(), func_453(Global_2802971), 0);
		}
		func_451(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_444(PLAYER::PLAYER_PED_ID(), iVar0), func_443(PLAYER::PLAYER_PED_ID(), iVar0), false);
		func_442(func_215(2042, -1, 0), 1);
		Global_2793044.f_287 = 1;
		func_439(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_439(int iParam0, int iParam1, int iParam2)//Position - 0x1062B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_441();
		if (iParam2 == -1)
		{
			iParam2 = func_215(2042, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_444(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_443(PLAYER::GET_PLAYER_PED(iParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_454(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_444(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_443(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_454(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_215(586, -1, 0);
		}
		if (func_269(1) && func_440(iParam0))
		{
			func_456(iParam0, func_453(Global_2802971), 0);
		}
		else
		{
			func_456(iParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			func_456(iParam0, Global_1836625, 1);
		}
		func_451(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
	}
}

var func_440(int iParam0)//Position - 0x1071A
{
	return func_114(iParam0, 10);
}

void func_441()//Position - 0x1072A
{
	Global_78530 = 0;
	Global_78531 = -1;
	Global_78532 = -1;
	Global_78533 = -1;
	Global_78534 = -1;
	Global_78538 = -1;
}

void func_442(int iParam0, int iParam1)//Position - 0x10750
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_441();
		func_206(2042, iParam0, -1, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_444(PLAYER::PLAYER_PED_ID(), iParam0), func_443(PLAYER::PLAYER_PED_ID(), iParam0), false);
		func_451(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_454(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_439(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

int func_443(int iParam0, int iParam1)//Position - 0x107D6
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

var func_444(int iParam0, int iParam1)//Position - 0x10B79
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
	if (((((((bVar3 != Global_78530 || iParam1 != Global_78531) || iVar4 != Global_78532) || iVar5 != Global_78533) || iVar6 != Global_78534) || iVar0 != Global_78535) || iVar1 != Global_78536) || iVar2 != Global_78537)
	{
		Global_78530 = bVar3;
		Global_78531 = iParam1;
		Global_78532 = iVar4;
		Global_78533 = iVar5;
		Global_78534 = iVar6;
		Global_78535 = iVar0;
		Global_78536 = iVar1;
		Global_78537 = iVar2;
		Global_78538 = func_445(iParam0, iParam1);
	}
	return Global_78538;
}

int func_445(int iParam0, int iParam1)//Position - 0x10C89
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
		if (iVar2 == joaat("MP_M_Freemode_01"))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_450(iParam0, iParam1, 1);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8))
			{
				return func_450(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_450(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_450(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_450(iParam0, iParam1, 6);
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_450(iParam0, iParam1, 7);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_450(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_450(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		return func_450(iParam0, iParam1, 9);
	}
	if (func_449(iParam0))
	{
		if (bVar1)
		{
			return func_450(iParam0, iParam1, 7);
		}
		else
		{
			return func_450(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT01"), 0))
		{
			return func_450(iParam0, iParam1, 0);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT02"), 0))
		{
			return func_450(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT03"), 0))
		{
			return func_450(iParam0, iParam1, 2);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT04"), 0))
		{
			return func_450(iParam0, iParam1, 3);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT05"), 0))
		{
			return func_450(iParam0, iParam1, 4);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT06"), 0))
		{
			return func_450(iParam0, iParam1, 5);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT07"), 0))
		{
			return func_450(iParam0, iParam1, 6);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT08"), 0))
		{
			return func_450(iParam0, iParam1, 7);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT09"), 0))
		{
			return func_450(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT10"), 0))
		{
			return func_450(iParam0, iParam1, 9);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT11"), 0))
		{
			return func_450(iParam0, iParam1, 10);
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MINI_DRESS"), 0))
		{
			return func_450(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_450(iParam0, iParam1, 5);
			}
			else
			{
				return func_450(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_450(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 1);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_448(iVar4, 0);
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_450(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_450(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_447(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_450(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_447(iVar4);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else
			{
				return func_450(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_446(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_450(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_450(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_450(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_450(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_450(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
						return func_450(iParam0, iParam1, 9);
					}
					else
					{
						return func_450(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
						return func_450(iParam0, iParam1, 9);
					}
					else
					{
						return func_450(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_450(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_447(iVar4);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 1);
			}
			else
			{
				return func_450(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else
			{
				return func_450(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 1);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 8);
			}
			else
			{
				return func_450(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_450(iParam0, iParam1, 10);
				}
				else
				{
					return func_450(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 1);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 6);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else
			{
				return func_450(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_F_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 9);
				}
				else
				{
					return func_450(iParam0, iParam1, 1);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 5);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_13"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_450(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_16"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_450(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_450(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 2);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_450(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else
			{
				return func_450(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else
			{
				return func_450(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_450(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 0);
			}
			else
			{
				return func_450(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("MP_M_Freemode_01"))
				{
					return func_450(iParam0, iParam1, 10);
				}
				else
				{
					return func_450(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 1);
			}
			else
			{
				return func_450(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 3);
			}
			else
			{
				return func_450(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 1);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 9);
			}
			else
			{
				return func_450(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 10);
			}
			else
			{
				return func_450(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("MP_F_Freemode_01"))
		{
			if (bVar1)
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("MP_F_Freemode_01"))
		{
			if (bVar1)
			{
				return func_450(iParam0, iParam1, 7);
			}
			else
			{
				return func_450(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_450(iParam0, iParam1, 2);
			}
			else
			{
				return func_450(iParam0, iParam1, 7);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0))
		{
			return func_450(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_447(iVar4);
		}
	}
	if (iVar2 == joaat("MP_M_Freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 6);
				}
				else
				{
					return func_450(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 2);
				}
				else
				{
					return func_450(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 2);
				}
				else
				{
					return func_450(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 2);
				}
				else
				{
					return func_450(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 2);
				}
				else
				{
					return func_450(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 6);
				}
				else
				{
					return func_450(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 5);
				}
				else
				{
					return func_450(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 4);
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
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 6);
				}
				else
				{
					return func_450(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 3);
				}
				else
				{
					return func_450(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 5);
				}
				else
				{
					return func_450(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 6);
				}
				else
				{
					return func_450(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 6);
				}
				else
				{
					return func_450(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 6);
				}
				else
				{
					return func_450(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_450(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 6);
				}
				else
				{
					return func_450(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 7);
				}
				else
				{
					return func_450(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_450(iParam0, iParam1, 1);
				}
				else
				{
					return func_450(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_450(iParam0, iParam1, 0);
	return 0;
}

int func_446(int iParam0, int iParam1)//Position - 0x1342B
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

int func_447(int iParam0)//Position - 0x135CB
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

int func_448(int iParam0, int iParam1)//Position - 0x13738
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

int func_449(int iParam0)//Position - 0x1387C
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 4, joaat("DUNGAREES")))
	{
		return 1;
	}
	return 0;
}

int func_450(int iParam0, int iParam1, int iParam2)//Position - 0x13898
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

void func_451(int iParam0, int iParam1)//Position - 0x13F59
{
	int iVar0;
	
	iVar0 = func_452(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, iVar0);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_452(int iParam0)//Position - 0x13F84
{
	if (iParam0 > 66)
	{
		return joaat("reh_p_para_bag_reh_s_01a");
	}
	else if (iParam0 > 63)
	{
		return joaat("p_para_bag_tr_s_01a");
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

int func_453(var uParam0)//Position - 0x14010
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

int func_454(int iParam0, int iParam1)//Position - 0x140C8
{
	return 0;
}

bool func_455(int iParam0, int iParam1)//Position - 0x140D1
{
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_456(int iParam0, int iParam1, int iParam2)//Position - 0x140ED
{
	int iVar0;
	int iVar1;
	
	if (func_457(iParam1, iParam2, &iVar0, &iVar1))
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

bool func_457(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x14124
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

int func_458(int iParam0, bool bParam1)//Position - 0x142E3
{
	if (bParam1)
	{
	}
	return func_212(iParam0);
}

void func_459()//Position - 0x142F6
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5;
	struct<3> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	struct<3> Var11;
	float fVar12;
	
	if ((((!func_7(PLAYER::PLAYER_ID()) && !func_170(PLAYER::PLAYER_ID())) && !func_324()) && !func_472(PLAYER::PLAYER_ID(), 0, -1)) && !func_471(PLAYER::PLAYER_ID()))
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			fVar4 = 2.1474836E+09f;
			iVar5 = -1;
			Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			bVar7 = func_5(Local_152.f_3);
			bVar8 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
			bVar9 = func_470();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				iVar10 = Local_152.f_67[iVar2 /*2*/].f_1;
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar10) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iVar10), false))
				{
					if (!bVar9 && bVar7)
					{
						if (bVar8 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == NETWORK::NET_TO_VEH(iVar10))
						{
							func_348(1);
						}
					}
					MISC::SET_BIT(&uVar3, iVar2);
					if (bVar7 && func_40(Local_152.f_3, iVar2, &Var0, &uVar1))
					{
						Var11 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar10), true) };
						if (SYSTEM::VDIST(Var11, Var0) <= 10f)
						{
							fVar12 = SYSTEM::VDIST(Var11, Var6);
							if (fVar12 < fVar4)
							{
								fVar4 = fVar12;
								iVar5 = iVar2;
							}
						}
					}
				}
				iVar2++;
			}
			if (func_41(Local_152.f_3))
			{
				MISC::SET_BIT(&uVar3, 31);
			}
			Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_7 = uVar3;
			if (func_5(Local_152.f_3))
			{
				if ((PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || func_17(-1, 0))
				{
					if ((fVar4 < 2.1474836E+09f && iVar5 >= 0) && iVar5 < 10)
					{
						if (func_40(Local_152.f_3, iVar5, &Var0, &uVar1))
						{
							func_469(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_468(Var0, 1, 0);
							func_461(10, 0, 0, 0, 0);
							MISC::SET_BIT(&uLocal_123, 5);
						}
					}
				}
				else
				{
					func_460();
				}
			}
		}
	}
	else
	{
		func_460();
	}
}

void func_460()//Position - 0x14528
{
	if (BitTest(uLocal_123, 5))
	{
		func_178();
		func_176();
		MISC::CLEAR_BIT(&uLocal_123, 5);
		func_175();
	}
}

void func_461(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1454C
{
	if (Global_2672505.f_1684.f_703.f_16 != func_109())
	{
		if (BitTest(Global_2657589[Global_2672505.f_1684.f_703.f_16 /*466*/].f_427, 0) && func_462())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643290 = 0;
	}
	Global_2635559.f_490 = iParam0;
	Global_2635559.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635559.f_490.f_2 = iParam1;
	Global_2635559.f_490.f_3 = iParam2;
	Global_2635559.f_490.f_4 = iParam3;
	Global_2635559.f_490.f_5 = iParam4;
}

int func_462()//Position - 0x145E8
{
	if ((((((func_228(PLAYER::PLAYER_ID()) == 229 || func_228(PLAYER::PLAYER_ID()) == 191) || func_467()) || func_466()) || func_465()) || Global_2764906.f_227 == 1) || (Global_2635559.f_1753 && func_463(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_463(int iParam0)//Position - 0x1465A
{
	if (func_464(iParam0))
	{
		return 1;
	}
	if (func_113(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_464(bool bParam0)//Position - 0x1467D
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 7);
	}
	return 0;
}

bool func_465()//Position - 0x146A0
{
	return Global_2764905;
}

bool func_466()//Position - 0x146AC
{
	return Global_1836591;
}

int func_467()//Position - 0x146B8
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_468(struct<3> Param0, int iParam1, int iParam2)//Position - 0x146CD
{
	Global_2635559.f_45.f_49 = { Param0 };
	Global_2635559.f_45.f_52 = iParam1;
	Global_2635559.f_45.f_53 = iParam2;
}

void func_469(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x146F7
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2644549.f_6))
	{
		if (!Global_2644549.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2644549.f_6))
	{
		Global_2644549.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2644549.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_397(PLAYER::PLAYER_ID()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2644549 = { Var0 };
}

int func_470()//Position - 0x14820
{
	if ((((((func_464(PLAYER::PLAYER_ID()) || func_173()) || func_172()) || func_171(PLAYER::PLAYER_ID(), 21)) || func_171(PLAYER::PLAYER_ID(), 25)) || func_8(PLAYER::PLAYER_ID())) || func_7(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_471(int iParam0)//Position - 0x14888
{
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 11))
	{
		return 1;
	}
	return 0;
}

int func_472(int iParam0, bool bParam1, int iParam2)//Position - 0x148C1
{
	if (Global_1853910[iParam0 /*862*/].f_267.f_33 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
	{
		if (iParam2 == -1 || func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) != iParam2)
		{
			if (bParam1)
			{
				return func_473(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x14948
{
	int iVar0;
	
	if (iParam0 == func_109())
	{
		return iParam0;
	}
	if (func_474(iParam0) != -1)
	{
		iVar0 = func_309(func_474(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_91(iParam0, 0))
			{
				return func_90(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_109();
		}
		return Global_2657589[iParam0 /*466*/].f_321.f_10;
	}
	return func_109();
}

int func_474(int iParam0)//Position - 0x149D7
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
		else if (((Global_1575060 || Global_2635559.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
	}
	return -1;
}

void func_475(bool bParam0, bool bParam1)//Position - 0x14A46
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_543())
	{
		if (bParam1)
		{
			iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
			if (func_107(PLAYER::PLAYER_ID()))
			{
				iVar1 = func_334();
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
				{
					iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_542())
				{
					switch (Local_152.f_3)
					{
						case 14:
							if (!func_382(iVar4) && !func_381(iVar4))
							{
								func_539("AMCH_BRIDGE" /* GXT: Bridge */, bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_43())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_152.f_67[iVar5 /*2*/].f_1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_152.f_67[iVar5 /*2*/].f_1), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_152.f_67[iVar5 /*2*/].f_1), -1, false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_145[iVar5]))
				{
					iLocal_145[iVar5] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_152.f_67[iVar5 /*2*/].f_1));
					HUD::SET_BLIP_SPRITE(iLocal_145[iVar5], func_538(iVar5));
					HUD::SET_BLIP_PRIORITY(iLocal_145[iVar5], 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_145[iVar5], func_537(iVar5));
					func_535(&(iLocal_145[iVar5]), 9);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (SYSTEM::VDIST(Var6, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_152.f_67[iVar5 /*2*/].f_1), true)) <= 150f)
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_145[iVar5], true);
						}
						else
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_145[iVar5], false);
						}
					}
					func_476(iLocal_145[iVar5], 0, 1152319488, 1137180672);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_145[iVar5]))
			{
				HUD::REMOVE_BLIP(&(iLocal_145[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_476(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x14C44
{
	HUD::SET_BLIP_ALPHA(iParam0, func_477(iParam0, iParam1, fParam2, fParam3));
}

int func_477(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x14C5E
{
	float fVar0;
	
	if (!func_534(Global_2672505) && !func_83())
	{
		fVar0 = func_479(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_478();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_478()//Position - 0x14CAC
{
	if (func_400(Global_2672505, 1))
	{
		return 50;
	}
	return 0;
}

float func_479(int iParam0, float fParam1, float fParam2)//Position - 0x14CC6
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	iVar0 = Global_2672505;
	Var2 = { func_533(iParam0) };
	Var2.f_2 = 0f;
	if (Global_1581962 || func_529())
	{
		if (func_528(iVar0))
		{
			Var3 = { func_482(iVar0) };
		}
		else if (func_481(iVar0))
		{
			Var3 = { func_480(iVar0) };
		}
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false) };
	}
	Var3.f_2 = 0f;
	fVar1 = SYSTEM::VMAG(Var3 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_480(int iParam0)//Position - 0x14D76
{
	int iVar0;
	
	if (func_481(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	return 0f, 0f, 0f;
}

int func_481(int iParam0)//Position - 0x14DAA
{
	int iVar0;
	
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.2039f, 2954.8074f, -70.69892f, 110f, 90f, 15f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_482(int iParam0)//Position - 0x14E06
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (iParam0 == func_109())
	{
	}
	if (func_527(iParam0))
	{
		iVar0 = func_526(iParam0);
		if (iVar0 != func_109())
		{
			if (!func_525(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_253[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_253[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2657589[func_526(iParam0) /*466*/].f_321.f_12;
				}
			}
			else
			{
				iVar1 = func_522(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1950108.f_542[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_521(iParam0))
	{
		iVar2 = func_520(iParam0);
		if (iVar2 != func_109())
		{
			if (!func_519(iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1968145[iVar2]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_1968145[iVar2], false);
				}
				else
				{
					return Global_2657589[func_526(iParam0) /*466*/].f_321.f_12;
				}
			}
			else
			{
				iVar3 = 160;
				if (!iVar3 == -1)
				{
					return Global_1950108.f_542[iVar3 /*3*/];
				}
			}
		}
	}
	else if (func_518(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_308))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2793044.f_308, false);
		}
	}
	else if (func_517(iParam0) && !func_516(iParam0))
	{
		iVar4 = Global_2657589[iParam0 /*466*/].f_321.f_10;
		if (iVar4 != func_109())
		{
			iVar5 = func_522(iVar4);
			if (!iVar5 == -1)
			{
				return Global_1950108.f_542[iVar5 /*3*/];
			}
		}
	}
	else if (func_515(iParam0) && !func_514(iParam0))
	{
		if (func_528(iParam0) && func_513())
		{
			return Global_1950108.f_542[Global_2657589[iParam0 /*466*/].f_321.f_7 /*3*/];
		}
		iVar6 = Global_2657589[iParam0 /*466*/].f_321.f_10;
		if (iVar6 != func_109())
		{
			if (func_512(iVar6))
			{
				iVar7 = func_509(iVar6);
				if (iVar7 != -1)
				{
					return Global_1950108.f_542[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_508(iParam0))
	{
		iVar8 = func_507(iParam0);
		if (iVar8 != func_109())
		{
			if (!func_506(iVar8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_350[iVar8]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_350[iVar8], false);
				}
				else
				{
					return Global_2657589[func_507(iParam0) /*466*/].f_321.f_20;
				}
			}
			else
			{
				iVar9 = func_509(iVar8);
				if (!iVar9 == -1)
				{
					return Global_1950108.f_542[iVar9 /*3*/];
				}
			}
		}
	}
	else if (func_505(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_310))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2793044.f_310, false);
		}
	}
	else if (func_504(iParam0) && !func_503(iParam0))
	{
		iVar10 = Global_2657589[iParam0 /*466*/].f_321.f_10;
		if (iVar10 != func_109())
		{
			if (func_502(iVar10))
			{
				iVar11 = func_499(iVar10);
				if (iVar11 != -1)
				{
					return func_498(iVar11);
				}
			}
		}
	}
	else if (func_497(iParam0) && !func_496(iParam0))
	{
		iVar12 = Global_2657589[iParam0 /*466*/].f_321.f_10;
		if (iVar12 != func_109())
		{
			if (func_495(iVar12))
			{
				iVar13 = func_492(iVar12);
				if (iVar13 != -1)
				{
					return Global_1950108.f_542[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_491(iParam0, 0))
	{
		iVar14 = func_490(iParam0);
		if (iVar14 != func_109())
		{
			if (!func_489(iVar14))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_383[iVar14]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_383[iVar14], false);
				}
				else
				{
					return Global_1894573[func_490(iParam0) /*608*/].f_590;
				}
			}
			else
			{
				iVar15 = func_492(iVar14);
				if (!iVar15 == -1)
				{
					return Global_1950108.f_542[iVar15 /*3*/];
				}
			}
		}
	}
	else if (func_488(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_487(iParam0))
	{
		iVar16 = func_473(iParam0);
		if (iVar16 != func_109())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_416[iVar16]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_416[iVar16], false);
			}
			else
			{
				return Global_1914091[iVar16 /*297*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_504(iParam0))
	{
		return func_498(Global_2657589[iParam0 /*466*/].f_321.f_7);
	}
	if (func_483(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1950108.f_542[Global_2657589[iParam0 /*466*/].f_321.f_7 /*3*/];
}

int func_483(int iParam0)//Position - 0x152F5
{
	if (((func_486(iParam0) || func_485(iParam0)) || func_484(iParam0)) || func_333(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_484(int iParam0)//Position - 0x1532F
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_485(int iParam0)//Position - 0x15376
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

int func_486(int iParam0)//Position - 0x153BD
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

int func_487(int iParam0)//Position - 0x15404
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 20;
			}
		}
		else if (((Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_1575060) && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 20;
		}
	}
	return 0;
}

int func_488(int iParam0)//Position - 0x1549B
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 13;
			}
		}
	}
	return 0;
}

int func_489(int iParam0)//Position - 0x154E2
{
	if (iParam0 != func_109())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_3, 4);
	}
	return 0;
}

int func_490(int iParam0)//Position - 0x15507
{
	if (iParam0 == func_109())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_491(int iParam0, bool bParam1)//Position - 0x1552B
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_109())
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_492(int iParam0)//Position - 0x155B9
{
	int iVar0;
	
	if (iParam0 != func_109())
	{
		iVar0 = func_494(iParam0);
		if (iVar0 != 0)
		{
			return func_493(iVar0);
		}
	}
	return -1;
}

int func_493(int iParam0)//Position - 0x155E2
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_494(int iParam0)//Position - 0x15660
{
	if (iParam0 != func_109())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_310;
	}
	return 0;
}

int func_495(int iParam0)//Position - 0x15684
{
	if (iParam0 != func_109())
	{
		if (Global_1853910[iParam0 /*862*/].f_267.f_310 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_496(int iParam0)//Position - 0x156AD
{
	if (iParam0 != func_109())
	{
		if (func_497(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_497(int iParam0)//Position - 0x156E2
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_498(int iParam0)//Position - 0x15729
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1950108.f_542[iParam0 /*3*/];
}

int func_499(int iParam0)//Position - 0x15835
{
	int iVar0;
	
	if (iParam0 != func_109())
	{
		iVar0 = func_501(iParam0);
		if (iVar0 != 0)
		{
			return func_500(iVar0);
		}
	}
	return -1;
}

int func_500(int iParam0)//Position - 0x1585E
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_501(int iParam0)//Position - 0x158DC
{
	if (iParam0 != func_109())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_353;
	}
	return 0;
}

int func_502(int iParam0)//Position - 0x15900
{
	if (iParam0 != func_109())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_353 != 0;
	}
	return 0;
}

int func_503(int iParam0)//Position - 0x15926
{
	if (iParam0 != func_109())
	{
		if (func_504(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_504(int iParam0)//Position - 0x1595B
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_505(int iParam0)//Position - 0x159A2
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

int func_506(int iParam0)//Position - 0x159E9
{
	if (iParam0 != func_109())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_2, 6);
	}
	return 0;
}

int func_507(int iParam0)//Position - 0x15A0E
{
	if (iParam0 == func_109())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_508(int iParam0)//Position - 0x15A32
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_109())
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_509(int iParam0)//Position - 0x15A92
{
	int iVar0;
	
	if (iParam0 == func_109())
	{
		return -1;
	}
	iVar0 = func_511(iParam0);
	if (!iVar0 == 0)
	{
		return func_510(iVar0);
	}
	return -1;
}

int func_510(int iParam0)//Position - 0x15AC1
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_511(int iParam0)//Position - 0x15B4F
{
	if (iParam0 == func_109())
	{
		return 0;
	}
	return Global_1853910[iParam0 /*862*/].f_267.f_300;
}

int func_512(int iParam0)//Position - 0x15B73
{
	if (iParam0 != func_109())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_300 != 0;
	}
	return 0;
}

int func_513()//Position - 0x15B99
{
	if (BitTest(Global_1950108.f_2, 13) || Global_1950108.f_3347)
	{
		return 1;
	}
	return 0;
}

int func_514(int iParam0)//Position - 0x15BBF
{
	if (iParam0 == func_109())
	{
		return 0;
	}
	if (func_515(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_515(int iParam0)//Position - 0x15BF8
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_516(int iParam0)//Position - 0x15C3F
{
	if (iParam0 == func_109())
	{
		return 0;
	}
	if (func_517(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_517(int iParam0)//Position - 0x15C78
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 4;
			}
		}
	}
	return 0;
}

int func_518(int iParam0)//Position - 0x15CBE
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 6;
			}
		}
	}
	return 0;
}

int func_519(int iParam0)//Position - 0x15D04
{
	if (iParam0 != func_109())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 26);
	}
	return 0;
}

int func_520(int iParam0)//Position - 0x15D2A
{
	if (iParam0 == func_109())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_521(int iParam0)//Position - 0x15D4E
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_109())
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

int func_522(int iParam0)//Position - 0x15DAE
{
	int iVar0;
	
	if (iParam0 == func_109())
	{
		return -1;
	}
	iVar0 = func_524(iParam0);
	if (!iVar0 == 0)
	{
		return func_523(iVar0);
	}
	return -1;
}

int func_523(int iParam0)//Position - 0x15DDD
{
	switch (iParam0)
	{
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
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 32:
			return 159;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_524(int iParam0)//Position - 0x15FAD
{
	if (iParam0 == func_109())
	{
		return 0;
	}
	return Global_1853910[iParam0 /*862*/].f_267.f_193[5 /*13*/];
}

int func_525(int iParam0)//Position - 0x15FD3
{
	if (iParam0 != func_109())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 6);
	}
	return 0;
}

int func_526(int iParam0)//Position - 0x15FF6
{
	if (iParam0 == func_109())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_527(int iParam0)//Position - 0x1601A
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_109())
			{
				return func_309(Global_2657589[iParam0 /*466*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

int func_528(int iParam0)//Position - 0x16079
{
	if (iParam0 != func_109())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_529()//Position - 0x160DF
{
	if ((func_532() || func_531()) || func_530(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_530(int iParam0)//Position - 0x1610B
{
	if (iParam0 == func_109())
	{
		return 0;
	}
	return BitTest(Global_1890444[iParam0 /*129*/].f_29, 20);
}

var func_531()//Position - 0x1612D
{
	return BitTest(Global_1962976, 1);
}

bool func_532()//Position - 0x1613B
{
	return BitTest(Global_1962996, 5);
}

Vector3 func_533(int iParam0)//Position - 0x16149
{
	int iVar0;
	
	switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return ENTITY::GET_ENTITY_COORDS(iVar0, false);
			}
			break;
	}
	return HUD::GET_BLIP_COORDS(iParam0);
}

int func_534(int iParam0)//Position - 0x16192
{
	if ((BitTest(Global_2657589[iParam0 /*466*/].f_73.f_2, 9) && !(BitTest(Global_2657589[iParam0 /*466*/].f_73.f_2, 6) && BitTest(Global_2657589[iParam0 /*466*/].f_73.f_2, 7))) || ((BitTest(Global_2657589[iParam0 /*466*/].f_73.f_2, 6) && !BitTest(Global_2657589[iParam0 /*466*/].f_73.f_2, 7)) && !BitTest(Global_2657589[iParam0 /*466*/].f_73.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_535(var uParam0, int iParam1)//Position - 0x1621B
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_536(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_536(int iParam0)//Position - 0x16241
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

char* func_537(int iParam0)//Position - 0x164A9
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_152.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC" /* GXT: Air Vehicle */;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_152.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC" /* GXT: Air Vehicle */;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_152.f_67[iParam0 /*2*/]) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(Local_152.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE" /* GXT: Motorcycle */;
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_538(int iParam0)//Position - 0x1651C
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_152.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_152.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_152.f_67[iParam0 /*2*/]) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(Local_152.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_539(char* sParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x16583
{
	struct<3> Var0;
	
	if (!BitTest(Local_1518[iParam2 /*12*/].f_8[func_373(iParam3)], func_372(iParam3)) && !bParam1)
	{
		Var0 = { func_541(iParam3) };
		if (!HUD::DOES_BLIP_EXIST(iLocal_144[iParam3]))
		{
			if (!func_540(Var0, 0f, 0f, 0f, 0) && !func_540(Var0, 0f, 0f, -2000f, 0))
			{
				iLocal_144[iParam3] = HUD::ADD_BLIP_FOR_COORD(Var0);
				HUD::SET_BLIP_PRIORITY(iLocal_144[iParam3], 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_144[iParam3], sParam0);
				func_476(iLocal_144[iParam3], 25, 1152319488, 1137180672);
				func_535(&(iLocal_144[iParam3]), 12);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_144[iParam3], true);
			}
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_BLIP_ALPHA(iLocal_144[iParam3], 255);
		}
		else
		{
			func_476(iLocal_144[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_144[iParam3]))
	{
		HUD::REMOVE_BLIP(&(iLocal_144[iParam3]));
		if (!bParam1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", false);
		}
	}
}

bool func_540(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x166A7
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_541(int iParam0)//Position - 0x166EE
{
	switch (Local_152.f_3)
	{
		case 14:
			return Local_143[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_542()//Position - 0x16715
{
	switch (Local_152.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_543()//Position - 0x16733
{
	switch (Local_152.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_544()//Position - 0x16750
{
	switch (Local_152.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_545(var uParam0, char* sParam1)//Position - 0x16770
{
	char* sVar0;
	
	if (func_323(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING" /* GXT: EVENT START */;
	if (!func_224(sParam1))
	{
		sVar0 = sParam1;
	}
	func_151(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_546(int iParam0)//Position - 0x167B0
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING" /* GXT: EVENT START */;
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG" /* GXT: MOVING TARGET START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL" /* GXT: CHECKPOINTS START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ" /* GXT: LONGEST JUMP CHALLENGE START */;
			
			case 1:
				return "AST_CHALL_LS" /* GXT: LONGEST FREEFALL CHALLENGE START */;
			
			case 2:
				return "AST_CHALL_HS" /* GXT: HIGHEST SPEED CHALLENGE START */;
			
			case 3:
				return "AST_CHALL_LST" /* GXT: LONGEST STOPPIE CHALLENGE START */;
			
			case 4:
				return "AST_CHALL_LW" /* GXT: LONGEST WHEELIE CHALLENGE START */;
			
			case 5:
				return "AST_CHALL_NC" /* GXT: NO CRASHES CHALLENGE START */;
			
			case 6:
				return "AST_CHALL_LP" /* GXT: LOWEST PARACHUTE CHALLENGE START */;
			
			case 7:
				return "AST_CHALL_VS" /* GXT: VEHICLES STOLEN CHALLENGE START */;
			
			case 8:
				return "AST_CHALL_NM" /* GXT: NEAR MISSES CHALLENGE START */;
			
			case 9:
				return "AST_CHALL_RD" /* GXT: REVERSE DRIVING CHALLENGE START */;
			
			case 10:
				return "AST_CHALL_LF" /* GXT: LONGEST FALL SURVIVED CHALLENGE START */;
			
			case 11:
				return "AST_CHALL_LFL" /* GXT: LOW FLYING CHALLENGE START */;
			
			case 12:
				return "AST_CHALL_LFI" /* GXT: LOW FLYING INVERTED CHALLENGE START */;
			
			case 13:
				return "AST_CHALL_LB" /* GXT: LONGEST BAIL CHALLENGE START */;
			
			case 14:
				return "AST_CHALL_MB" /* GXT: MOST BRIDGES CHALLENGE START */;
			
			case 15:
				return "AST_CHALL_HSH" /* GXT: HEADSHOTS CHALLENGE START */;
			
			case 16:
				return "AST_CHALL_DB" /* GXT: DRIVE-BY CHALLENGE START */;
			
			case 17:
				return "AST_CHALL_ML" /* GXT: MELEE CHALLENGE START */;
			
			case 18:
				return "AST_CHALL_LSN" /* GXT: SNIPER KILLS CHALLENGE START */;
			
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED" /* GXT: PENNED IN START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL" /* GXT: HOLD THE WHEEL START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY" /* GXT: HOT PROPERTY START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP" /* GXT: DEAD DROP START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE" /* GXT: KING OF THE CASTLE START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST" /* GXT: CRIMINAL DAMAGE START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF" /* GXT: KILL LIST START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST" /* GXT: HUNT THE BEAST START */;
	}
	return "";
}

int func_547(int iParam0, int iParam1)//Position - 0x169B9
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_548(int iParam0)//Position - 0x169CF
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2793044.f_5062 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!BitTest(Global_2793044.f_5062, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2793044.f_5062 = 0;
			MISC::SET_BIT(&(Global_2793044.f_5062), 1);
		}
	}
}

int func_549(var uParam0, bool bParam1, bool bParam2)//Position - 0x16A23
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

void func_550(bool bParam0)//Position - 0x16A6A
{
	if (!HUD::IS_RADAR_HIDDEN() && !CAM::IS_SCREEN_FADED_OUT())
	{
		switch (bParam0)
		{
			case 0:
				if (!BitTest(uLocal_146, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (func_5(Local_152.f_3))
						{
							if (Local_152.f_3 == 12)
							{
								func_304("AMCH_AIRAVI" /* GXT: Air vehicles ~HUD_COLOUR_BLUE~~BLIP_PLANE_DROP~~s~ are available at several locations. These will self-destruct once the event is over. */, 30000);
							}
							else
							{
								func_304("AMCH_AIRAV" /* GXT: Air vehicles ~HUD_COLOUR_BLUE~~BLIP_HELICOPTER~ ~BLIP_PLANE_DROP~~s~ are available at several locations. These will self-destruct once the event is over. */, 30000);
							}
						}
						else if (func_41(Local_152.f_3))
						{
							func_304("AMCH_BIKEAV" /* GXT: Motorcycles ~HUD_COLOUR_BLUE~~BLIP_GANG_BIKE~~s~ are available at several locations. */, 30000);
						}
						func_303(1);
						MISC::SET_BIT(&uLocal_146, bParam0);
					}
				}
				break;
			
			case 1:
				if (!BitTest(uLocal_146, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_304("AMCH_BLOW" /* GXT: This vehicle will now self-destruct. */, 30000);
						func_303(1);
						MISC::SET_BIT(&uLocal_146, bParam0);
					}
				}
				break;
			
			case 2:
				if (!BitTest(uLocal_146, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_555(63))
					{
						switch (Local_152.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										func_304("AMCH_ALTI" /* GXT: When flying close to the ground, a purple box is displayed on the Radar showing the height you must remain within to score in this challenge. */, 30000);
										func_303(1);
										MISC::SET_BIT(&uLocal_146, bParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_304("AMCH_NMIS" /* GXT: Points will be given for passing close to another land vehicle at speed without crashing. You must be driving a land vehicle to score. */, 30000);
									func_303(1);
									MISC::SET_BIT(&uLocal_146, bParam0);
								}
								break;
							
							case 1:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_304("AMCH_FRFALL" /* GXT: Deploy your parachute close to the ground for a higher score. Your score will only be counted if you land safely. Secondary parachutes will not count. */, -1);
									func_303(1);
									MISC::SET_BIT(&uLocal_146, bParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_304("AMCH_PVPO1" /* GXT: Points will only be given for eliminating other players and not the citizens of Los Santos and Blaine County. */, -1);
									func_303(1);
									MISC::SET_BIT(&uLocal_146, bParam0);
								}
								break;
							
							case 17:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_304("AMCH_PVPO2" /* GXT: Points will only be given for eliminating other players and not the citizens of Los Santos and Blaine County. Points will be deducted for kills with guns. */, -1);
									func_303(1);
									MISC::SET_BIT(&uLocal_146, bParam0);
								}
								break;
							
							case 4:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_304("AMCH_WHEELIE" /* GXT: Only wheelies performed on motorcycles will count towards this challenge. */, 30000);
									func_303(1);
									MISC::SET_BIT(&uLocal_146, bParam0);
								}
								break;
							
							case 3:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_304("AMCH_STOPPIE" /* GXT: Only stoppies performed on motorcycles will count towards this challenge. */, 30000);
									func_303(1);
									MISC::SET_BIT(&uLocal_146, bParam0);
								}
								break;
							
							case 10:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_304("AMCH_LFALL" /* GXT: Falls into water will not count towards this challenge. */, 30000);
									func_303(1);
									MISC::SET_BIT(&uLocal_146, bParam0);
								}
								break;
							
							case 6:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_304("AMCH_LPARA" /* GXT: Landing in water will not count towards this challenge. */, 30000);
									func_303(1);
									MISC::SET_BIT(&uLocal_146, bParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!BitTest(uLocal_146, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_555(63))
					{
						switch (Local_152.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										if (func_1(&uLocal_117, 1000, 0))
										{
											func_304("AMCH_OCEAN" /* GXT: Flying low over deep water will not be counted for this challenge. */, 30000);
											func_303(1);
											func_46(&uLocal_117);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!BitTest(uLocal_146, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_555(63))
					{
						switch (Local_152.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										if (func_534(PLAYER::PLAYER_ID()) && !func_552(PLAYER::PLAYER_ID()))
										{
											func_304("AMCH_ALTIEXP" /* GXT: The altimeter won't display on the expanded Radar. Return to the normal Radar to track your height above ground. */, 30000);
											func_303(1);
											MISC::SET_BIT(&uLocal_146, bParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!BitTest(uLocal_146, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_555(63))
					{
						if (func_1(&uLocal_117, 1000, 0))
						{
							func_304("AMCH_FLYLOW" /* GXT: You must fly lower to score in the challenge. */, 30000);
							func_303(1);
							func_46(&uLocal_117);
						}
					}
				}
				break;
			
			case 7:
				if (!BitTest(uLocal_146, bParam0))
				{
					if (Local_152.f_3 == 7)
					{
						if (iLocal_147 == 0)
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_555(63))
							{
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_304("AMCH_MVS1" /* GXT: Points will only be given for stealing vehicles from the citizens of Los Santos and Blaine County. */, 30000);
									func_303(1);
									iLocal_147 = 1;
								}
							}
						}
						else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_555(63))
						{
							if (func_12(PLAYER::PLAYER_ID(), 1, 1))
							{
								func_304("AMCH_MVS2" /* GXT: Points will not be given for stealing from other players or taking vehicles that have already been stolen. */, 30000);
								func_303(1);
								MISC::SET_BIT(&uLocal_146, bParam0);
							}
						}
					}
					if (Local_152.f_3 == 14)
					{
						if (iLocal_147 == 0)
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_555(63))
							{
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_304("AMCH_BRBL" /* GXT: The bridges ~HUD_COLOUR_YELLOW~~BLIP_OBJECTIVE~~s~ that count towards this challenge are displayed on your Radar. */, 30000);
									func_303(1);
									iLocal_147 = 1;
								}
							}
						}
						else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_555(63))
						{
							if (func_12(PLAYER::PLAYER_ID(), 1, 1))
							{
								func_304("AMCH_BRBL2" /* GXT: Flying under a bridge does not deny the points for that bridge to other players. Points will not be given for flying under a bridge more than once. */, 30000);
								func_303(1);
								MISC::SET_BIT(&uLocal_146, bParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!BitTest(uLocal_146, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_551("AMCH_WARN" /* GXT: The ~a~ Challenge will begin shortly. ~a~ The top 3 players will win cash and RP. */, func_406(Local_152.f_3), func_405(Local_152.f_3), 30000);
						func_303(0);
						Local_1519.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
						MISC::SET_BIT(&uLocal_146, bParam0);
					}
				}
				break;
			}
	}
}

void func_551(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x17036
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

bool func_552(int iParam0)//Position - 0x17059
{
	return BitTest(Global_1653913.f_241.f_136[func_554(9) /*33*/][iParam0], func_553(9));
}

int func_553(int iParam0)//Position - 0x1707C
{
	return (iParam0 % 32);
}

int func_554(int iParam0)//Position - 0x17089
{
	return (iParam0 / 32);
}

bool func_555(int iParam0)//Position - 0x17096
{
	return Global_2672505.f_2513[0 /*80*/].f_1 == iParam0;
}

void func_556(int iParam0)//Position - 0x170AD
{
	Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 = iParam0;
}

void func_557(bool bParam0)//Position - 0x170C2
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 4);
	}
}

int func_558(bool bParam0, bool bParam1, bool bParam2)//Position - 0x170F6
{
	if (func_584(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (func_171(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_171(PLAYER::PLAYER_ID(), 25))
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
	if (func_361(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_583())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_582(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_581())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_113(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_574(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_573(PLAYER::PLAYER_ID()) != func_109() && func_573(PLAYER::PLAYER_ID()) == func_90(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_571(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (func_570(func_298()) && !func_355(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_569())
	{
		return 0;
	}
	if (func_324())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_363(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_567())
	{
		return 0;
	}
	if (func_171(PLAYER::PLAYER_ID(), 0) || func_171(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_171(PLAYER::PLAYER_ID(), 12) || func_171(PLAYER::PLAYER_ID(), 14)) || func_171(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_566(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_532() && !Global_2764487)
		{
			return 0;
		}
	}
	if (func_565(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_564())
	{
		return 0;
	}
	if (Global_1935176)
	{
		return 0;
	}
	if (func_398(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_563())
	{
		return 0;
	}
	if (func_561(PLAYER::PLAYER_ID()) && Global_1853556.f_172)
	{
		return 0;
	}
	if (func_560())
	{
		return 0;
	}
	if (func_465())
	{
		return 0;
	}
	if (Global_2792080)
	{
		return 0;
	}
	if (Global_1968331)
	{
		return 0;
	}
	if (func_307(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_464(PLAYER::PLAYER_ID()))
	{
		if (func_559(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_559(int iParam0)//Position - 0x17362
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890444[iVar0 /*129*/].f_77.f_51 != 0;
	}
	return 0;
}

bool func_560()//Position - 0x17386
{
	return Global_1950108.f_528;
}

int func_561(int iParam0)//Position - 0x17395
{
	if (func_562(Global_1853910[iParam0 /*862*/].f_267.f_33))
	{
		return 1;
	}
	return 0;
}

int func_562(int iParam0)//Position - 0x173B7
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

int func_563()//Position - 0x173E6
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_564()//Position - 0x173FE
{
	return Global_100733.f_388 > 0;
}

bool func_565(int iParam0)//Position - 0x1740F
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 11);
}

int func_566(int iParam0, bool bParam1, bool bParam2)//Position - 0x17428
{
	if (iParam0 == func_109())
	{
		return 0;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_567()//Position - 0x1748C
{
	if (func_568() == 0)
	{
		return 1;
	}
	return 0;
}

int func_568()//Position - 0x174A1
{
	return Global_1574632.f_18;
}

bool func_569()//Position - 0x174AF
{
	return Global_1575060;
}

int func_570(int iParam0)//Position - 0x174BB
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

int func_571(int iParam0, int iParam1)//Position - 0x17505
{
	if (func_119(iParam0, 0))
	{
		return func_572(Global_1894573[iParam0 /*608*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_572(int iParam0)//Position - 0x1752F
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
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
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

int func_573(int iParam0)//Position - 0x17795
{
	return Global_1894573[iParam0 /*608*/].f_10.f_35;
}

int func_574(bool bParam0)//Position - 0x177AA
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_399(bParam0) && !func_8(bParam0)) && !BitTest(Global_1894573[bParam0 /*608*/].f_1, 8));
	bVar2 = func_113(bParam0);
	uVar3 = func_173();
	uVar4 = func_575();
	if ((bVar1 && (func_464(bParam0) || func_425(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_115(bParam0)) && !func_310(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2793044.f_5225.f_220 != iVar0)
	{
		Global_2793044.f_5225.f_220 = iVar0;
	}
	return iVar0;
}

int func_575()//Position - 0x17865
{
	if ((func_114(PLAYER::PLAYER_ID(), 21) || func_114(PLAYER::PLAYER_ID(), 22)) || func_579())
	{
		return 1;
	}
	if (func_577())
	{
		func_576(22);
		return 1;
	}
	return 0;
}

void func_576(int iParam0)//Position - 0x178AA
{
	MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}

int func_577()//Position - 0x178C7
{
	if (func_119(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_173() && !func_172()) || func_171(PLAYER::PLAYER_ID(), 21)) || func_171(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_578(27);
		}
	}
	return 0;
}

void func_578(int iParam0)//Position - 0x1791A
{
	MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}

int func_579()//Position - 0x17937
{
	return func_580(424, -1);
}

int func_580(int iParam0, int iParam1)//Position - 0x17947
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2848280[iParam0 /*3*/][func_211(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_581()//Position - 0x17973
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/] == 5;
}

int func_582(int iParam0)//Position - 0x17988
{
	if (Global_2657589[iParam0 /*466*/].f_272.f_4 != 0 || Global_2657589[iParam0 /*466*/].f_272.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_583()//Position - 0x179BC
{
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 0);
}

bool func_584(int iParam0, int iParam1)//Position - 0x179D5
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_5, iParam1);
}

void func_585()//Position - 0x179ED
{
	func_586(&(Local_173.f_534), &Local_173, 27, &(Local_173.f_1), &(Local_173.f_117), Local_152.f_3, 0, 0);
}

void func_586(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x17A15
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
	
	if (func_702(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (func_700() || iParam2 == 28)
	{
		if (func_654(iParam1, iParam2, uParam3, Global_1836368, 0, func_703(), sParam7))
		{
			func_653(1);
			if ((!func_652() && !func_651()) || BitTest(Global_2793044.f_4687, 1))
			{
				if (func_650())
				{
					func_649();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_648(1);
						Global_1836368 = 0;
						iVar20 = -1;
						if (Global_1836592 != 1)
						{
							func_647(iParam1, 0, 0);
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
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!func_14(bVar4, 0))
									{
										if (func_643(bVar4) || func_641(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (func_92(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												func_638(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!func_116(PLAYER::PLAYER_ID(), 0) && func_228(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (func_637())
							{
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = func_109();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((func_636(bVar4) && func_633(bVar4, iParam2, bVar3)) && func_12(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853910[bVar10 /*862*/].f_205.f_6;
								Var7 = { func_627(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { func_145(bVar4) };
								iVar6 = func_621(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
								}
								Global_1836368++;
								if ((uParam0[iVar18 /*42*/])->f_22 != -1f)
								{
									fVar11 = (uParam0[iVar18 /*42*/])->f_22;
								}
								if ((uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									iVar12 = (uParam0[iVar18 /*42*/])->f_31;
								}
								if ((uParam0[iVar18 /*42*/])->f_41 != -1)
								{
									iVar13 = (uParam0[iVar18 /*42*/])->f_41;
								}
								iVar9 = (uParam0[iVar18 /*42*/])->f_9;
								if (((uParam0[iVar18 /*42*/])->f_9 != -1 || (uParam0[iVar18 /*42*/])->f_22 != -1f) || (uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									if (!func_637())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_619(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_292(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (uParam0[iVar18 /*42*/])->f_2 + 1;
									if (iVar20 != iVar14)
									{
										iVar20 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = func_618(bVar4, 0);
								if (bVar2)
								{
									if (func_91(bVar4, 1) && iVar1[bVar10] != -1)
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
								if ((uParam0[iVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (uParam0[iVar18 /*42*/])->f_39, 16);
								}
								if (func_617(iParam5))
								{
									func_616(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									func_616(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
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
							if (func_12(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = func_109();
							}
							if (func_636(bVar4))
							{
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853910[bVar10 /*862*/].f_205.f_6;
									Var7 = { func_627(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { func_145(bVar4) };
									iVar6 = func_621(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836368++;
									iVar17 = func_618(bVar4, 1);
									if (bVar2)
									{
										if (func_91(bVar4, 1))
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
									func_599(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_596(uParam3, iParam1, iParam2);
						}
						func_46(&(uParam3->f_21));
						func_595();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_594(uParam3, iParam1);
							func_593(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_594(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_589(uParam3))
						{
							Global_1836592 = 1;
						}
						func_587(uParam3);
						if (Global_1836592 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836592 == 2)
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
			func_595();
			func_648(0);
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

void func_587(var uParam0)//Position - 0x18047
{
	if (!func_47(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_46(&(uParam0->f_21));
		func_588(0);
	}
}

void func_588(bool bParam0)//Position - 0x18083
{
	if (bParam0)
	{
		if (Global_1836592 != 2)
		{
			Global_1836592 = 2;
		}
	}
	else
	{
		switch (Global_1836592)
		{
			case 0:
				Global_1836592 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_589(var uParam0)//Position - 0x180C9
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	bVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar3 != func_109() && func_12(bVar3, 0, 1))
	{
		Var2 = { func_145(bVar3) };
		iVar1 = func_592(uParam0, uParam0->f_37);
		if (func_591(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_590(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_590(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_590(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_590(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_590(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_590(uParam0, iVar0, 0);
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

void func_590(var uParam0, int iParam1, int iParam2)//Position - 0x181F6
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_591(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x18208
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_592(var uParam0, int iParam1)//Position - 0x18218
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_593(int* iParam0, bool bParam1, int iParam2)//Position - 0x18228
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

void func_594(var uParam0, int* iParam1)//Position - 0x18260
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_595()//Position - 0x18295
{
	if (Global_1836592 != 0)
	{
		Global_1836592 = 0;
	}
}

void func_596(var uParam0, int* iParam1, int iParam2)//Position - 0x182AA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_109())
		{
			if (func_12(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_598(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_597(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853910[iVar0 /*862*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_597(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1831F
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

int func_598(int iParam0, bool bParam1, int iParam2)//Position - 0x1835C
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

void func_599(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x183A3
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_615() && iParam4 < func_614())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836370)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836592 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_613("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_613(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_613("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_613("");
			if (uParam3->f_108 == 6)
			{
				func_613("");
			}
			else
			{
				func_613(&sParam5);
			}
			func_604(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_603(uParam3))
			{
				func_602("DPAD_FRIEND" /* GXT: F */);
			}
			else if (func_601(uParam3))
			{
				func_602("DPAD_FRIEND" /* GXT: F */);
			}
			else if (func_600(uParam3))
			{
				func_602("DPAD_CREW" /* GXT: C */);
			}
			else
			{
				func_602("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_600(var uParam0)//Position - 0x184CA
{
	return BitTest(uParam0->f_33, 6);
}

bool func_601(var uParam0)//Position - 0x184D8
{
	return BitTest(uParam0->f_33, 5);
}

void func_602(char* sParam0)//Position - 0x184E6
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_603(var uParam0)//Position - 0x184F8
{
	if (func_601(uParam0) && func_600(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_604(var uParam0, bool bParam1)//Position - 0x18519
{
	if (func_612(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_608(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && BitTest(Global_2657589[bParam1 /*466*/].f_436, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_605())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_605()//Position - 0x18594
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_606() || func_101())
		{
			return 1;
		}
	}
	return 0;
}

int func_606()//Position - 0x185B9
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_101();
	}
	return func_607(Global_4718592.f_113724);
}

int func_607(int iParam0)//Position - 0x185DD
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5024[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_608(bool bParam0)//Position - 0x18617
{
	if ((func_12(bParam0, 0, 1) && func_609()) && func_266(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_609()//Position - 0x18644
{
	if (func_399(PLAYER::PLAYER_ID()) || func_611())
	{
		if (!func_610(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_610(int iParam0)//Position - 0x18672
{
	if (func_330(iParam0) == 236 || func_330(iParam0) == 150)
	{
		return func_464(iParam0);
	}
	return 0;
}

int func_611()//Position - 0x1869F
{
	switch (func_228(PLAYER::PLAYER_ID()))
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

int func_612(bool bParam0)//Position - 0x186DD
{
	if (func_605())
	{
		if (func_12(bParam0, 0, 1))
		{
			return func_92(bParam0);
		}
	}
	if ((func_12(bParam0, 0, 1) && func_609()) && func_268(bParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_613(char* sParam0)//Position - 0x18725
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_614()//Position - 0x18733
{
	int iVar0;
	
	if (Global_1836370)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_615()//Position - 0x1874F
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836370)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_616(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x18767
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_615() && iParam3 < func_614())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836370)
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
		if (Global_1836592 == 1)
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
					func_613("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_602(sParam16);
				}
				else
				{
					func_613(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_613("");
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
				if (func_637())
				{
					func_613("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT" /* GXT: ~a~ ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT" /* GXT: ~1~~a~ */);
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
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH" /* GXT: -$~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_602(&(uParam2->f_104));
					}
					else
					{
						func_613("");
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
					func_613("");
				}
				if (uParam2->f_108 == 6)
				{
					func_613("");
				}
				else
				{
					func_613(&sParam4);
				}
				func_604(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_613("");
					func_613("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_603(uParam2))
				{
					func_602("DPAD_FRIEND" /* GXT: F */);
				}
				else if (func_601(uParam2))
				{
					func_602("DPAD_FRIEND" /* GXT: F */);
				}
				else if (func_600(uParam2))
				{
					func_602("DPAD_CREW" /* GXT: C */);
				}
				else
				{
					func_602("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_617(int iParam0)//Position - 0x18ABE
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

int func_618(bool bParam0, bool bParam1)//Position - 0x18AE2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_399(bParam0)) && !func_113(bParam0))
	{
		iVar0 = func_66();
	}
	iVar1 = func_89(bParam0);
	if (!iVar1 == -1)
	{
		return func_87(iVar1);
	}
	return iVar0;
}

int func_619(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x18B2C
{
	if (func_620(iParam3))
	{
		*fParam1 = (func_294(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_617(iParam3))
	{
		*fParam1 = (func_294(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_620(int iParam0)//Position - 0x18B7C
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

int func_621(bool bParam0)//Position - 0x18BD8
{
	int iVar0;
	
	iVar0 = func_624(bParam0);
	if (iVar0 == -1)
	{
		func_622(bParam0, 1);
		return 0;
	}
	Global_1666668[iVar0 /*5*/].f_4 = 1;
	return Global_1666668[iVar0 /*5*/].f_2;
}

void func_622(bool bParam0, bool bParam1)//Position - 0x18C0E
{
	if (!func_12(bParam0, 0, 1))
	{
		return;
	}
	if (func_624(bParam0) != -1)
	{
		return;
	}
	if (Global_1666831)
	{
		if (bParam0 == Global_1666831.f_1)
		{
			return;
		}
	}
	if (func_623(bParam0))
	{
		return;
	}
	if (Global_1666869 >= 32)
	{
		return;
	}
	Global_1666836[Global_1666869] = bParam0;
	Global_1666869++;
	if (bParam1)
	{
	}
}

int func_623(bool bParam0)//Position - 0x18C7A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666869)
	{
		if (Global_1666836[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_624(bool bParam0)//Position - 0x18CAC
{
	int iVar0;
	
	if (!func_12(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1666829 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666829)
	{
		if (Global_1666668[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1666668[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666668[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_625(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_625(int iParam0)//Position - 0x18D2B
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1666829)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1666668[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1666668[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666668[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1666668[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1666829)
	{
		Global_1666668[iVar2 /*5*/] = { Global_1666668[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_626(&(Global_1666668[iVar2 /*5*/]));
	Global_1666829 = (Global_1666829 - 1);
}

void func_626(var uParam0)//Position - 0x18DE1
{
	*uParam0 = 0;
	uParam0->f_1 = func_109();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_627(bool bParam0)//Position - 0x18E0E
{
	char cVar0[32];
	
	if (func_12(bParam0, 0, 1))
	{
		Global_2764201 = { func_145(bParam0) };
		if (func_632())
		{
			if (func_591(Global_2764201))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2764201))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_631(&Global_2764201))
		{
			Global_2764131 = { func_629(bParam0) };
			func_628(&Global_2764131, &cVar0);
		}
	}
	return cVar0;
}

void func_628(var* uParam0, char* sParam1)//Position - 0x18E8F
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_629(bool bParam0)//Position - 0x18EA1
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_630(bParam0))
	{
		return Global_1575092[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_145(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_630(int iParam0)//Position - 0x18EDD
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_631(var* uParam0)//Position - 0x18EF3
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

bool func_632()//Position - 0x18F19
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_633(bool bParam0, int iParam1, bool bParam2)//Position - 0x18F2F
{
	if (iParam1 == 27)
	{
		if ((func_8(bParam0) || func_635(bParam0)) || func_7(bParam0))
		{
			return 0;
		}
	}
	if (!func_634(bParam0))
	{
		return 0;
	}
	if (!func_643(bParam0) && !func_641(bParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

bool func_634(bool bParam0)//Position - 0x18F8E
{
	return BitTest(Global_1853910[bParam0 /*862*/].f_139, 22);
}

int func_635(bool bParam0)//Position - 0x18FA4
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1894573[bParam0 /*608*/].f_1, 10) || BitTest(Global_1894573[bParam0 /*608*/].f_1, 9));
	}
	return 0;
}

int func_636(bool bParam0)//Position - 0x18FDC
{
	bool bVar0;
	
	if (bParam0 == func_109())
	{
		return 0;
	}
	if (func_14(bParam0, 0))
	{
		return 0;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (BitTest(Global_1853910[bVar0 /*862*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_637()//Position - 0x1901E
{
	switch (func_228(PLAYER::PLAYER_ID()))
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
	switch (func_330(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_113(PLAYER::PLAYER_ID()))
	{
		switch (func_228(PLAYER::PLAYER_ID()))
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
	if (func_610(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_638(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x19158
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_14(bVar1, 0))
			{
				if (func_643(bVar1) || func_641(bVar1, bParam4))
				{
					if (func_639(bVar1, bParam1, 0))
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

int func_639(bool bParam0, int iParam1, bool bParam2)//Position - 0x191D1
{
	if (iParam1 != func_109())
	{
		if (!bParam2)
		{
			if (func_640(bParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1894573[bParam0 /*608*/].f_10 != func_109())
		{
			return iParam1 == Global_1894573[bParam0 /*608*/].f_10;
		}
	}
	return 0;
}

int func_640(int iParam0, int iParam1)//Position - 0x1921B
{
	if (iParam1 != func_109())
	{
		if (iParam0 != func_109())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 != func_109())
			{
				if (Global_1894573[iParam0 /*608*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_641(bool bParam0, bool bParam1)//Position - 0x19260
{
	if (bParam1)
	{
		return 0;
	}
	return (Global_2657589[bParam0 /*466*/].f_246 != -1 || func_642(bParam0));
}

bool func_642(int iParam0)//Position - 0x1928A
{
	return Global_1853910[iParam0 /*862*/].f_192 != 0;
}

int func_643(bool bParam0)//Position - 0x1929F
{
	if (!func_12(bParam0, 0, 1))
	{
		return 0;
	}
	if (!func_12(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_644(bParam0))
	{
		return 0;
	}
	if ((NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(bParam0, PLAYER::PLAYER_ID()) || func_228(bParam0) == 233) || func_228(bParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_644(int iParam0)//Position - 0x19308
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_645(PLAYER::PLAYER_ID());
	bVar1 = func_645(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_645(int iParam0)//Position - 0x19344
{
	return func_646(&(Global_2657589[iParam0 /*466*/].f_445), 0);
}

var func_646(var uParam0, int iParam1)//Position - 0x1935D
{
	return BitTest(*uParam0, iParam1);
}

void func_647(int* iParam0, int iParam1, int iParam2)//Position - 0x1936B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_648(bool bParam0)//Position - 0x19399
{
	if (bParam0)
	{
		if (Global_1653910.f_2 == 0)
		{
			Global_1653910.f_2 = 1;
		}
	}
	else if (Global_1653910.f_2 == 1)
	{
		Global_1653910.f_2 = 0;
	}
}

void func_649()//Position - 0x193CB
{
	if (BitTest(Global_2793044.f_4687, 1))
	{
		if (func_311())
		{
			func_297();
		}
	}
}

int func_650()//Position - 0x193EA
{
	if (BitTest(Global_2793044.f_4687, 0) && func_311())
	{
		return 1;
	}
	if (BitTest(Global_2793044.f_4687, 1) && func_311())
	{
		return 1;
	}
	return 0;
}

int func_651()//Position - 0x19425
{
	if (func_311())
	{
		if (func_54(Global_2672505.f_2513[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_652()//Position - 0x1944C
{
	if (func_311())
	{
		if (func_67(Global_2672505.f_2513[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_653(int iParam0)//Position - 0x19473
{
	if (Global_1653910.f_1 != Global_1653910)
	{
		Global_1653910.f_1 = Global_1653910;
	}
	if (Global_1653910 != iParam0)
	{
		Global_1653910 = iParam0;
	}
}

int func_654(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x194A1
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
	bVar3 = func_699(iParam1);
	fVar4 = func_698();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_697())
		{
			if (func_696() > 0 && Global_1836370)
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
		if (!func_685())
		{
			func_684(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2793044.f_4690, 26))
	{
		func_684(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_47(&(uParam2->f_19)))
	{
		if (func_696() == 1)
		{
			func_683(bVar3, iParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_684(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2793044.f_4692), 5);
		}
	}
	if (func_47(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_696() == 0 && !bParam5))
		{
			func_684(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_682();
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
					func_682();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (func_683(bVar3, iParam0, 0))
				{
					func_647(iParam0, 0, 0);
					sVar1 = func_680(iParam1, &(Global_4718592.f_113731), bParam4);
					Var0 = { func_678(iParam1) };
					if (bParam4)
					{
						func_675(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_669(iParam0, func_672(uParam2), func_670(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_663(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						func_661(iParam0, sVar6, func_662(), -1);
					}
					else if (func_605())
					{
						uParam2->f_34 = Global_1836369;
						func_675(iParam0, sVar1, &Var0, 1, -1, Global_1836369, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_656(iParam1);
						uParam2->f_34 = Global_1836369;
						func_675(iParam0, sVar1, "", 0, iVar5, func_655(), 1);
					}
					else
					{
						iVar5 = func_656(iParam1);
						func_675(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836368 = uParam3;
				Global_1836367 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836369)
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

int func_655()//Position - 0x19774
{
	return Global_1836369;
}

int func_656(int iParam0)//Position - 0x19780
{
	int iVar0;
	
	iVar0 = -1;
	if (func_660())
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
			if (func_659(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_658(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_657(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_229())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_657(int iParam0)//Position - 0x198E5
{
	return Global_2657589[iParam0 /*466*/].f_121 == 4;
}

bool func_658(int iParam0)//Position - 0x198FA
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

bool func_659(int iParam0)//Position - 0x1990F
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

bool func_660()//Position - 0x19924
{
	return Global_4718592.f_1 == 0;
}

void func_661(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x19934
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_602(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_602("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_662()//Position - 0x19993
{
	switch (func_228(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1" /* GXT: Total Value */;
			break;
		
		case 160:
			return "BD_SORT_4" /* GXT: Packages Collected */;
			break;
		
		case 154:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
		
		case 155:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
	}
	return "";
}

char* func_663(var uParam0)//Position - 0x199EB
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E" /* GXT: Steal Cargo */;
			break;
		
		case 1:
			return "GR_DPD_F" /* GXT: Sell Cargo */;
			break;
		
		case 2:
			return "GR_DPD_S" /* GXT: Business Setup */;
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A" /* GXT: Business Setup */;
			break;
		
		case 1:
			return "GR_DPD_B" /* GXT: Steal Supplies */;
			break;
		
		case 2:
			return "GR_DPD_C" /* GXT: Sell Weapons */;
			break;
		
		case 3:
			return "GR_DPD_D" /* GXT: Defend Business */;
			break;
	}
	switch (func_228(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET" /* GXT: Heist Prep */;
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T" /* GXT: Gunrunning */;
			break;
		
		case 182:
			return "DEAL_DEALN" /* GXT: By the Pound */;
			break;
		
		case 194:
			return "PI_BIK_13_0" /* GXT: Rippin' it Up */;
			break;
		
		case 189:
			return "PI_BIK_4_1" /* GXT: Race to Point */;
			break;
		
		case 193:
			return "PI_BIK_13_1" /* GXT: Hit & Ride */;
			break;
		
		case 205:
			return "PI_BIK_13_3" /* GXT: Criminal Mischief */;
			break;
		
		case 186:
			return "CELL_BIKER_CK" /* GXT: Weapon of Choice */;
			break;
		
		case 207:
			return "DV_SH_TITLE" /* GXT: Fragile Goods */;
			break;
		
		case 208:
			return "BA_SH_TITLE" /* GXT: Torched */;
			break;
		
		case 209:
			return "SHU_SH_TITLE" /* GXT: Outrider */;
			break;
		
		case 210:
			return "PI_BIK_13_4" /* GXT: Wheelie Rider */;
			break;
		
		case 183:
			return "CELL_BIKER_RESC" /* GXT: P.O.W. */;
			break;
		
		case 199:
			return "CELL_BIKER_SEAR" /* GXT: Search and Destroy */;
			break;
		
		case 201:
			return "CELL_BIKER_STAN" /* GXT: Stand Your Ground */;
			break;
		
		case 142:
			return "PIM_MAGM210" /* GXT: Sightseer */;
			break;
		
		case 163:
			return "PIM_MAGM608" /* GXT: Auto Buyout */;
			break;
		
		case 160:
			return "PIM_MAGM604" /* GXT: Due Diligence */;
			break;
		
		case 154:
			return "PIM_MAGM602" /* GXT: Market Manipulation */;
			break;
		
		case 155:
			return "PIM_MAGM603" /* GXT: Courier Service */;
			break;
		
		case 148:
			if (func_665())
			{
				return "LBD_BKVBK" /* GXT: Deathmatch */;
			}
			return "PIM_MAGM201" /* GXT: Executive Deathmatch */;
			break;
		
		case 151:
			if (func_265(1))
			{
				return "GB_DPAD_BMFD" /* GXT: Marked For Death */;
			}
			return "PIM_MAGM202" /* GXT: Put Out a Hit */;
			break;
		
		case 152:
			return "PIM_MAGM204" /* GXT: Piracy Prevention */;
			break;
		
		case 153:
			if (func_265(1))
			{
				return "PI_BIK_3_2" /* GXT: On The Run */;
			}
			return "PIM_MAGM601" /* GXT: Most Wanted */;
			break;
		
		case 157:
			return "PIM_MAGM207" /* GXT: Asset Recovery */;
			break;
		
		case 159:
			return "PIM_MAGM206" /* GXT: Hostile Takeover */;
			break;
		
		case 162:
			return "PIM_MAGM607" /* GXT: Point to Point */;
			break;
		
		case 164:
			return "PIM_MAGM212" /* GXT: Executive Search */;
			break;
		
		case 166:
			return "GB_DPAD_HEAD" /* GXT: Headhunter */;
		
		case 167:
			return "GB_DPAD_BUY" /* GXT: Buy Special Cargo */;
		
		case 168:
			return "GB_DPAD_SELL" /* GXT: Sell Special Cargo */;
		
		case 169:
			return "GB_DPAD_DEF" /* GXT: Defend Special Cargo */;
		
		case 170:
			return "GB_DPAD_AIR" /* GXT: Airfreight */;
		
		case 171:
			return "GB_DPAD_CASH" /* GXT: Cashing Out */;
		
		case 172:
			return "GB_DPAD_SAL" /* GXT: Salvage */;
		
		case 173:
			return "GB_DPAD_FRA" /* GXT: Haulage */;
		
		case 178:
			return "VEX_TITLEa" /* GXT: Steal Vehicle */;
		
		case 188:
			return "VEX_TITLEb" /* GXT: Export Vehicle */;
		
		case 218:
			return "FRT_MODE" /* GXT: Fortified */;
		
		case 217:
			return "FRT_TRNS" /* GXT: Transporter */;
		
		case 214:
			return "MODE_PLW" /* GXT: Plowed */;
		
		case 215:
			return "MODE_FUL" /* GXT: Fully Loaded */;
		
		case 216:
			return "MODE_AA" /* GXT: Amphibious Assault */;
		
		case 219:
			return "MODE_VEL" /* GXT: Velocity */;
		
		case 220:
			return "MODE_RMP" /* GXT: Ramped Up */;
		
		case 221:
			return "MODE_STK" /* GXT: Stockpiling */;
		
		case 225:
			return "GR_TITLEL" /* GXT: Gunrunning */;
		
		case 226:
			return "GRS_TITLEL" /* GXT: Gunrunning Sell */;
		
		case 227:
			return "GRD_TITLEL" /* GXT: Gunrunning Defend */;
		
		case 195:
			return "GB_STEAL_T" /* GXT: Nine Tenths Of The Law */;
		
		case 198:
			return "SC_MENU_TITLE" /* GXT: Cracked */;
		
		case 190:
			return "GB_DPAD_BSEL" /* GXT: Biker Sell */;
		
		case 191:
			return "GB_DPAD_BDEF" /* GXT: Biker Defend */;
		
		case 185:
			return "GB_DPAD_GFH" /* GXT: Guns For Hire */;
		
		case 197:
			return "GB_DPAD_JB" /* GXT: Jailbreak */;
		
		case 179:
			return "CELL_JOUST" /* GXT: Joust */;
		
		case 200:
			return "CAG_BLIP" /* GXT: Caged In */;
		
		case 192:
			if (func_664(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_182))
			{
				return "GB_DPAD_BSET" /* GXT: Business Setup */;
			}
			return "GB_DPAD_BBUY" /* GXT: Resupply */;
			break;
	}
	return "";
}

int func_664(int iParam0)//Position - 0x19E17
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

bool func_665()//Position - 0x19E49
{
	return (func_668() && func_666(func_667()));
}

int func_666(int iParam0)//Position - 0x19E62
{
	return func_268(iParam0, 1);
}

int func_667()//Position - 0x19E71
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_35;
}

bool func_668()//Position - 0x19E88
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/] == 148;
}

void func_669(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x19E9E
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_602(sParam1);
		}
		else if (func_330(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C" /* GXT: ~a~ Challenge (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_602("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_670(var uParam0)//Position - 0x19F25
{
	int iVar0;
	
	iVar0 = func_330(PLAYER::PLAYER_ID());
	if (func_671())
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
			return "FM_AE_SORT_5" /* GXT: Points */;
		
		case 133:
			switch (func_329())
			{
				case 0:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 1:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 2:
					return "FM_AE_SORT_3" /* GXT: Speed */;
				
				case 3:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 4:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 5:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 6:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 7:
					return "FM_AE_SORT_13" /* GXT: Vehicles */;
				
				case 8:
					return "FM_AE_SORT_4" /* GXT: Misses */;
				
				case 9:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 10:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 11:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 12:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 13:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 14:
					return "FM_AE_SORT_5" /* GXT: Points */;
				
				case 15:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				case 16:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				case 17:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				case 18:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10" /* GXT: Possession Time */;
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5" /* GXT: Points */;
		
		case 144:
			return "FM_AE_SORT_1" /* GXT: Destruction Value */;
		
		case 129:
			return "FM_AE_SORT_9" /* GXT: Kills */;
	}
	return "";
}

bool func_671()//Position - 0x1A0D0
{
	return Global_1853783;
}

char* func_672(var uParam0)//Position - 0x1A0DC
{
	int iVar0;
	
	iVar0 = func_330(PLAYER::PLAYER_ID());
	if (func_671())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9" /* GXT: Moving Target */;
		
		case 132:
			if (func_674() == 0)
			{
				return "CPC_TILEL" /* GXT: Checkpoints */;
			}
			else if (func_674() == 1)
			{
				return "CPC_TILELA" /* GXT: Air Checkpoints */;
			}
			return "PIM_TA0" /* GXT: Checkpoints */;
			break;
		
		case 133:
			switch (func_329())
			{
				case 0:
					return "AMCH_0SLC" /* GXT: Longest Jump */;
				
				case 1:
					return "AMCH_1SLC" /* GXT: Longest Freefall */;
				
				case 2:
					return "AMCH_2SLC" /* GXT: Highest Speed */;
				
				case 3:
					return "AMCH_3SLC" /* GXT: Longest Stoppie */;
				
				case 4:
					return "AMCH_4SLC" /* GXT: Longest Wheelie */;
				
				case 5:
					return "AMCH_5SLC" /* GXT: No Crashes */;
				
				case 6:
					return "AMCH_6SLC" /* GXT: Lowest Parachute */;
				
				case 7:
					return "AMCH_7SLC" /* GXT: Vehicles Stolen */;
				
				case 8:
					return "AMCH_8SLC" /* GXT: Near Misses */;
				
				case 9:
					return "AMCH_12SLC" /* GXT: Reverse Driving */;
				
				case 10:
					return "AMCH_13SLC" /* GXT: Longest Fall Survived */;
				
				case 11:
					return "AMCH_15SLC" /* GXT: Low Flying */;
				
				case 12:
					return "AMCH_16SLC" /* GXT: Inverted Flying */;
				
				case 13:
					return "AMCH_23SLC" /* GXT: Longest Bail */;
				
				case 14:
					return "AMCH_9SLC" /* GXT: Fly Under Bridges */;
				
				case 15:
					return "AMCH_19SLC" /* GXT: Headshot Kills */;
				
				case 16:
					return "AMCH_20SLC" /* GXT: Driveby */;
				
				case 17:
					return "AMCH_21SLC" /* GXT: Melee */;
				
				case 18:
					return "AMCH_22SLC" /* GXT: Sniper Kills */;
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10" /* GXT: Penned In */;
		
		case 138:
			return "PIM_TA4" /* GXT: Hold the Wheel */;
		
		case 139:
			return "PIM_TA5" /* GXT: Hot Property */;
		
		case 140:
			return "PIM_TA3" /* GXT: Dead Drop */;
		
		case 141:
			return "PIM_TA8" /* GXT: King of the Castle */;
		
		case 144:
			return "PIM_TA2" /* GXT: Criminal Damage */;
		
		case 129:
			if (func_673() == 1)
			{
				return "FM_AE_TITL_12" /* GXT: Kill List Competitive */;
			}
			else
			{
				return "PIM_TA7" /* GXT: Kill List */;
			}
			break;
		
		case 146:
			return "PIM_TA6" /* GXT: Hunt the Beast */;
	}
	return "";
}

int func_673()//Position - 0x1A2D1
{
	return Global_2793044.f_5149;
}

int func_674()//Position - 0x1A2E0
{
	if (func_330(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2793044.f_5144;
	}
	return -1;
}

void func_675(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1A303
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_613(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_602(sParam1);
		}
		if (func_697() && iParam6)
		{
			if (func_677())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT" /* GXT: (~1~/~1~) */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_602(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_676(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_64())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_676(int iParam0)//Position - 0x1A3C4
{
	if (func_659(iParam0) || func_658(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_677()//Position - 0x1A3E6
{
	return Global_1836370;
}

struct<4> func_678(int iParam0)//Position - 0x1A3F2
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_679(PLAYER::PLAYER_ID()) || func_657(PLAYER::PLAYER_ID()))
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
			StringIntConCat(&Var0, Global_4718592.f_1198, 16);
			break;
	}
	if (func_605() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_1198, 16);
	}
	return Var0;
}

bool func_679(int iParam0)//Position - 0x1A48F
{
	return Global_2657589[iParam0 /*466*/].f_121 == 5;
}

char* func_680(int iParam0, char* sParam1, bool bParam2)//Position - 0x1A4A4
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_605() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_681();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP" /* GXT: One on One Deathmatch */;
	}
	else if (iParam0 == 25)
	{
		if (Global_1836612 == 0)
		{
			Global_1836612 = 1;
		}
		return "HUD_LBD_OVR" /* GXT: Overall Results */;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1836612 == 1)
		{
			Global_1836612 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836612 == 0)
		{
			Global_1836612 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
			case 42:
				return "HUD_LBD_DM" /* GXT: Deathmatch Leaderboard */;
				break;
			
			case 1:
				return "HUD_LBD_TDM" /* GXT: Team Deathmatch Leaderboard */;
				break;
			
			case 5:
				return "HUD_LBD_GRCE" /* GXT: GTA Race Leaderboard */;
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE" /* GXT: Race Leaderboard */;
				break;
			
			case 7:
				return "HUD_LBD_BRCE" /* GXT: Parachute Race Leaderboard */;
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
				return "HUD_LBD_HRD" /* GXT: Survival Leaderboard */;
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_681()//Position - 0x1A60E
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF" /* GXT: GTA Online (Friend, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC" /* GXT: GTA Online (Crew, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS" /* GXT: GTA Online (Solo, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI" /* GXT: GTA Online (Invite, ~1~) */;
	}
	return "HUD_LBD_FMP" /* GXT: GTA Online (Public, ~1~) */;
}

void func_682()//Position - 0x1A652
{
	Global_44200 = 1;
}

bool func_683(bool bParam0, int* iParam1, bool bParam2)//Position - 0x1A65E
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

void func_684(int* iParam0, var uParam1, bool bParam2)//Position - 0x1A69E
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836368 = 0;
	func_595();
	Global_1836367 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_47(&(uParam1->f_19)))
		{
			func_46(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2793044.f_4692), 5);
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

int func_685()//Position - 0x1A70D
{
	if (func_695())
	{
		return 0;
	}
	if (func_581())
	{
		return 0;
	}
	if (!func_693())
	{
		return 0;
	}
	if (!func_567())
	{
		return 0;
	}
	if (func_692(8, -1))
	{
		return 0;
	}
	if (func_696() == 2)
	{
		return 0;
	}
	if (Global_2793044.f_4642)
	{
		return 0;
	}
	if (func_324())
	{
		return 0;
	}
	else if (!func_362(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_691(1) || func_689(1)) || Global_23131.f_124) || Global_23131)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_688() && Global_1969891 == 2)
	{
		return 0;
	}
	if (func_107(PLAYER::PLAYER_ID()) && !func_688())
	{
		return 0;
	}
	if (Global_1935176)
	{
		return 0;
	}
	if (Global_1935181)
	{
		return 0;
	}
	if (func_687(0))
	{
		return 0;
	}
	if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 4))
	{
		return 0;
	}
	if (Global_1648740)
	{
		return 0;
	}
	if ((Global_1964005.f_718.f_5 || Global_1966831.f_718.f_5) || Global_1963033.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1970895.f_724.f_5 || Global_1970895.f_744.f_724.f_5) || Global_1970895.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1977693.f_726.f_5)
	{
		return 0;
	}
	if (func_686(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1648781 || Global_1648782) || Global_1648783)
	{
		return 0;
	}
	return 1;
}

int func_686(int iParam0)//Position - 0x1A8E5
{
	if (iParam0 == func_109())
	{
		return 0;
	}
	return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 6);
}

bool func_687(int iParam0)//Position - 0x1A90A
{
	return BitTest(Global_2793044.f_5225.f_47, iParam0);
}

bool func_688()//Position - 0x1A91E
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1969892, 0));
}

int func_689(bool bParam0)//Position - 0x1A93A
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_690(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23131.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_690(int iParam0)//Position - 0x1AA25
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_691(bool bParam0)//Position - 0x1AA82
{
	if (bParam0)
	{
		return (Global_23131.f_4 && Global_23131.f_104 == 4);
	}
	return Global_23131.f_4;
}

bool func_692(int iParam0, int iParam1)//Position - 0x1AAAB
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

int func_693()//Position - 0x1AAE3
{
	if (func_694())
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

bool func_694()//Position - 0x1AB22
{
	return Global_1574604;
}

bool func_695()//Position - 0x1AB2E
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

int func_696()//Position - 0x1AB43
{
	return Global_1653913.f_68;
}

int func_697()//Position - 0x1AB51
{
	if (Global_1836369 > 16)
	{
		return 1;
	}
	return 0;
}

float func_698()//Position - 0x1AB67
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_699(int iParam0)//Position - 0x1AB8B
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

int func_700()//Position - 0x1ABBD
{
	if (func_703())
	{
		return 1;
	}
	if (func_7(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_671())
	{
		return 1;
	}
	if (func_399(PLAYER::PLAYER_ID()))
	{
		switch (func_330(PLAYER::PLAYER_ID()))
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
				if (!func_701(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_701(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_701(PLAYER::PLAYER_ID()))
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

bool func_701(int iParam0)//Position - 0x1AC98
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_1, 4);
}

int func_702(int iParam0)//Position - 0x1ACAD
{
	if (iParam0 == 28)
	{
		if ((func_399(PLAYER::PLAYER_ID()) && !func_113(PLAYER::PLAYER_ID())) && !func_610(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_119(PLAYER::PLAYER_ID(), 0) && func_113(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_574(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_703()//Position - 0x1AD1C
{
	if (func_704(PLAYER::PLAYER_ID()))
	{
		return Global_1581949;
	}
	return 0;
}

int func_704(bool bParam0)//Position - 0x1AD37
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_14(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return 0;
}

void func_705()//Position - 0x1AD5A
{
	if (Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
	{
		if (!BitTest(uLocal_123, 8))
		{
			if ((!func_7(PLAYER::PLAYER_ID()) && !func_170(PLAYER::PLAYER_ID())) && !func_412(PLAYER::PLAYER_ID()))
			{
				func_411();
			}
		}
		else if (!BitTest(uLocal_123, 9))
		{
			if ((func_7(PLAYER::PLAYER_ID()) || func_170(PLAYER::PLAYER_ID())) || func_412(PLAYER::PLAYER_ID()))
			{
				STATS::STAT_STOP_RECORD_STAT();
				Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4 = 0;
				MISC::SET_BIT(&uLocal_123, 9);
			}
		}
	}
}

void func_706()//Position - 0x1ADF5
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_127)))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_127));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			func_707(bVar0, 2);
		}
	}
	iLocal_127++;
	if (iLocal_127 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_127 = 0;
	}
}

void func_707(bool bParam0, int iParam1)//Position - 0x1AE3E
{
	bool bVar0;
	
	if (BitTest(Global_1836858.f_1, 0))
	{
		return;
	}
	if (func_47(&(Global_1836858.f_18)))
	{
		return;
	}
	if (BitTest(Global_1836858.f_2, bParam0))
	{
		if (Global_1836858 < iParam1 && BitTest(Global_1836858.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1836858.f_1), 0);
			return;
		}
		if (Global_1836858 != 0)
		{
			MISC::SET_BIT(&(Global_1836858.f_1), 1);
		}
		Global_1836858 = 0;
		Global_1836858.f_2 = 0;
	}
	MISC::SET_BIT(&(Global_1836858.f_2), bParam0);
	bVar0 = true;
	if (func_8(bParam0))
	{
		bVar0 = false;
	}
	if (func_708(bParam0))
	{
		bVar0 = false;
	}
	if (func_14(bParam0, 0))
	{
		bVar0 = false;
	}
	if (func_7(bParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1836858++;
	}
}

bool func_708(bool bParam0)//Position - 0x1AF03
{
	return BitTest(Global_1894573[bParam0 /*608*/].f_1, 10);
}

void func_709(int iParam0, int iParam1)//Position - 0x1AF19
{
	Local_1518[iParam0 /*12*/] = iParam1;
}

int func_710()//Position - 0x1AF2A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_173.f_534[iVar0 /*42*/].f_1 = func_109();
		iVar0++;
	}
	return 1;
}

int func_711()//Position - 0x1AF56
{
	return Local_152.f_0;
}

int func_712(int iParam0)//Position - 0x1AF61
{
	return Local_1518[iParam0 /*12*/];
}

void func_713()//Position - 0x1AF70
{
	if (BitTest(Global_1836858.f_1, 6))
	{
		func_737();
		MISC::CLEAR_BIT(&(Global_1836858.f_1), 6);
	}
	if (!BitTest(Global_1836858.f_1, 7))
	{
		if (BitTest(Global_1836858.f_1, 4) || BitTest(Global_1836858.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_311()) && func_12(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836858.f_1), 7);
				func_304("FME_PASINT" /* GXT: You will not be able to take part in this event in Passive Mode. */, 30000);
				func_303(1);
			}
		}
		else if (BitTest(Global_1836858.f_1, 17))
		{
			if (func_173() && !func_172())
			{
				MISC::CLEAR_BIT(&(Global_1836858.f_1), 17);
				MISC::SET_BIT(&(Global_1836858.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836858.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2793044.f_848, 2)) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75693) && !Global_60543) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_735())
			{
				func_304("AMEV_GA_RP" /* GXT: When in an active Gang Attack location, some other players may not be attackable. */, -1);
				if (func_228(PLAYER::PLAYER_ID()) != 200)
				{
					func_303(1);
				}
				MISC::SET_BIT(&(Global_1836858.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_425(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
		}
	}
	if (BitTest(Global_1836858.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_311()) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !func_171(PLAYER::PLAYER_ID(), 21)) && !func_171(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836858.f_1), 9);
			func_734(0);
			func_304("FME_TBL00" /* GXT: Job & Activity Triggers have been temporarily hidden as you are now an active participant in the current Freemode Event. They will return once the Event is over. */, -1);
			func_303(1);
		}
	}
	if (func_399(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836858.f_1, 18))
		{
			if ((func_171(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836858.f_1, 20)) && !BitTest(Global_1836858.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836858.f_1), 18);
			}
		}
		else if (BitTest(Global_1836858.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_311()) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !func_733())
			{
				MISC::CLEAR_BIT(&(Global_1836858.f_1), 18);
				MISC::SET_BIT(&(Global_1836858.f_1), 19);
				func_304("AMTT_RPAS" /* GXT: You have been removed from the current event because you triggered a Time Trial. */, -1);
				func_303(1);
			}
		}
	}
	if (((((func_399(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID())) && func_330(PLAYER::PLAYER_ID()) != 146) && !func_7(PLAYER::PLAYER_ID())) && !func_170(PLAYER::PLAYER_ID())) && !func_723())
	{
		if (func_424(func_330(PLAYER::PLAYER_ID())))
		{
			PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836858.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836858.f_1), 22);
		}
		if (func_464(PLAYER::PLAYER_ID()) || func_418())
		{
			if (!BitTest(Global_1836858.f_1, 10))
			{
				if (func_722(func_330(PLAYER::PLAYER_ID())))
				{
					if (func_272(0) && !Global_4585348)
					{
						MISC::SET_BIT(&(Global_1836858.f_1), 9);
					}
					if (!Global_4585348)
					{
						func_422(1);
						MISC::SET_BIT(&(Global_1836858.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836858.f_1), 10);
			}
		}
		if (func_425(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836858.f_1, 11))
			{
				if (!Global_100733.f_8)
				{
					MISC::SET_BIT(&(Global_1836858.f_1), 12);
					func_420(1);
				}
				if (!func_721())
				{
					MISC::SET_BIT(&(Global_1836858.f_1), 13);
					func_419();
				}
				if (!Global_4585348)
				{
					MISC::SET_BIT(&(Global_1836858.f_1), 14);
					if (func_272(0) && !Global_4585348)
					{
						MISC::SET_BIT(&(Global_1836858.f_1), 9);
					}
					func_422(1);
				}
				MISC::SET_BIT(&(Global_1836858.f_1), 11);
			}
		}
		else
		{
			func_719(0);
		}
	}
	else
	{
		func_719(1);
	}
	func_714();
	if (func_417(func_330(PLAYER::PLAYER_ID())) && !BitTest(Global_1836858.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836858.f_1), 21);
	}
	if (((func_173() && !func_172()) || func_171(PLAYER::PLAYER_ID(), 21)) || func_171(PLAYER::PLAYER_ID(), 25))
	{
		if (!BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 10);
	}
}

void func_714()//Position - 0x1B477
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_311())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_555(iVar2))
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
				if (BitTest(Global_1836858.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1836858.f_1), 26);
				}
				func_715(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836858.f_1, 26))
	{
		func_46(&(Global_1836858.f_22));
		MISC::SET_BIT(&(Global_1836858.f_1), 26);
	}
}

void func_715(int iParam0, int iParam1)//Position - 0x1B514
{
	if (!func_47(&(Global_1836858.f_22)))
	{
		func_2(&(Global_1836858.f_22), 0, 0);
	}
	else if (func_1(&(Global_1836858.f_22), iParam1, 0))
	{
		if (func_696() > 0)
		{
			func_718(iParam0);
			if (func_301("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
			{
				HUD::CLEAR_HELP(true);
			}
			func_46(&(Global_1836858.f_22));
		}
	}
	else
	{
		func_717(0);
		func_716();
	}
}

void func_716()//Position - 0x1B57D
{
	Global_2793044.f_4629 = 0;
}

void func_717(int iParam0)//Position - 0x1B58D
{
	Global_1653913.f_68 = iParam0;
}

void func_718(int iParam0)//Position - 0x1B59D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672505.f_2513[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2672505.f_2513[iVar0 /*80*/].f_2 = 5;
			func_110(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_719(int iParam0)//Position - 0x1B5E9
{
	if ((BitTest(Global_1836858.f_1, 11) || (BitTest(Global_1836858.f_1, 10) && iParam0)) || (BitTest(Global_1836858.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836858.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1836858.f_1), 12);
			func_420(0);
		}
		if (BitTest(Global_1836858.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1836858.f_1), 13);
			func_720();
		}
		if (BitTest(Global_1836858.f_1, 14) && !func_119(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1836858.f_1), 14);
			func_422(0);
		}
		MISC::CLEAR_BIT(&(Global_1836858.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1836858.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1836858.f_1), 22);
	}
}

void func_720()//Position - 0x1B6B2
{
	MISC::CLEAR_BIT(&(Global_2793044.f_5063), 0);
}

bool func_721()//Position - 0x1B6C6
{
	return BitTest(Global_2793044.f_5063, 0);
}

int func_722(int iParam0)//Position - 0x1B6D7
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
			return func_425(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_418() || func_5(func_329()));
		
		default:
	}
	return 0;
}

int func_723()//Position - 0x1B747
{
	if (((((((((func_732() || func_731()) || func_730()) || func_324()) || (func_729() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_726() && !func_725())) || Global_2625211) || Global_2625211.f_1 != 0) || Global_2625286 != 0) || (func_724() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_724()//Position - 0x1B7DB
{
	return Global_1057409;
}

bool func_725()//Position - 0x1B7E7
{
	return BitTest(Global_2683862.f_2, 27);
}

int func_726()//Position - 0x1B7F8
{
	if (func_728() || func_727())
	{
		return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_95 == 8;
	}
	return 0;
}

var func_727()//Position - 0x1B825
{
	return Global_2683862.f_735;
}

var func_728()//Position - 0x1B834
{
	return BitTest(Global_2683862.f_2, 11);
}

var func_729()//Position - 0x1B845
{
	return BitTest(Global_2683862, 5);
}

var func_730()//Position - 0x1B853
{
	return BitTest(Global_2683862, 2);
}

var func_731()//Position - 0x1B861
{
	return BitTest(Global_2683862, 20);
}

bool func_732()//Position - 0x1B870
{
	return Global_2683862.f_698;
}

bool func_733()//Position - 0x1B87F
{
	return Global_2793044.f_5158 != -1;
}

void func_734(int iParam0)//Position - 0x1B890
{
	int iVar0;
	
	iVar0 = func_215(2537, -1, 0);
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
	func_206(2537, iVar0, -1, 1, 0);
}

int func_735()//Position - 0x1B9A4
{
	int iVar0;
	
	if (!func_47(&(Global_1836858.f_15)))
	{
		func_2(&(Global_1836858.f_15), 0, 0);
		Global_1836858.f_17 = 0;
	}
	else if (func_1(&(Global_1836858.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836858.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836858.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_736(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_38(PLAYER::PLAYER_ID()), func_38(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836858.f_17++;
		if (Global_1836858.f_17 >= 32)
		{
			Global_1836858.f_17 = 0;
			func_46(&(Global_1836858.f_15));
		}
	}
	return 0;
}

int func_736(int iParam0, int iParam1)//Position - 0x1BA6C
{
	int iVar0;
	
	if (func_401() != 0)
	{
		return 0;
	}
	if (!func_210(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853910[iVar0 /*862*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_737()//Position - 0x1BAA5
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_739();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1836858.f_1), 8);
	func_738();
}

void func_738()//Position - 0x1BACB
{
	if (Global_1945089)
	{
		if (BitTest(Global_1945090, 0))
		{
			MISC::CLEAR_BIT(&Global_2802658, 0);
		}
		if (BitTest(Global_1945090, 1))
		{
			MISC::CLEAR_BIT(&Global_2802658, 1);
		}
		if (BitTest(Global_1945090, 5))
		{
			MISC::CLEAR_BIT(&Global_2802658, 5);
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
		Global_1945090 = 0;
	}
	Global_1945089 = 0;
}

void func_739()//Position - 0x1BBC2
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2793044.f_5221))
	{
		if (!Global_2793044.f_5221 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2793044.f_5220 < 1f)
		{
			return;
		}
	}
	Global_2793044.f_5221 = -1;
	Global_2793044.f_5220 = 1f;
}

int func_740()//Position - 0x1BC09
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_2793044.f_5061)
	{
		return 0;
	}
	if ((!func_47(&(Local_152.f_39)) && !func_47(&(Local_152.f_41))) && !func_47(&(Local_152.f_43)))
	{
		return 0;
	}
	iVar2 = NETWORK::GET_NETWORK_TIME();
	if (func_47(&(Local_152.f_41)))
	{
		iVar0 = func_741(&iVar2, &(Local_152.f_41));
		iVar1 = 20000;
	}
	else if (func_47(&(Local_152.f_39)))
	{
		iVar0 = func_741(&iVar2, &(Local_152.f_39));
		iVar1 = func_28(0);
	}
	else if (func_47(&(Local_152.f_43)))
	{
		iVar0 = func_741(&iVar2, &(Local_152.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_741(int iParam0, var uParam1)//Position - 0x1BCCC
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*iParam0, *uParam1));
}

int func_742()//Position - 0x1BCE2
{
	if (func_743())
	{
		return 1;
	}
	return 0;
}

bool func_743()//Position - 0x1BCF6
{
	return Global_1836858.f_24;
}

int func_744()//Position - 0x1BD04
{
	if (Global_1575035 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_747())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_746())
	{
		return 1;
	}
	if (func_745(159))
	{
		if (!func_732())
		{
			return 1;
		}
	}
	if (func_745(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_427() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_427()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_745(int iParam0)//Position - 0x1BD88
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_746()//Position - 0x1BD9F
{
	return Global_2694524;
}

bool func_747()//Position - 0x1BDAB
{
	return Global_2683862.f_693;
}

void func_748()//Position - 0x1BDBA
{
	SYSTEM::WAIT(0);
}

void func_749()//Position - 0x1BDC7
{
	int iVar0;
	
	if (func_744())
	{
		Local_1519.f_5 = 5;
	}
	else if (BitTest(Local_152.f_2, 0))
	{
		Local_1519.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_1519.f_5 = 1;
	}
	else
	{
		Local_1519.f_5 = 2;
	}
	Local_1519.f_0 = Local_152.f_52;
	Local_1519.f_1 = Local_152.f_53;
	Local_1519.f_4 = Local_152.f_66;
	Local_1519.f_3 = Local_152.f_51;
	Local_1519.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_1519.f_9);
	if (!Global_262145.f_11975 /* Tunable: CHALLENGE_DISABLE_SHARE_CASH */)
	{
		if (Local_1519.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
		{
			func_785(Local_1519, Local_152.f_3, Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4, iVar0, -1, -1, -1);
		}
	}
	if (BitTest(uLocal_123, 4))
	{
		AUDIO::STOP_SOUND(iLocal_131);
		MISC::CLEAR_BIT(&uLocal_123, 4);
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_131);
	AUDIO::RELEASE_SOUND_ID(iLocal_132);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((BitTest(uLocal_148, iVar0) && iLocal_149[iVar0] != -1) && !AUDIO::HAS_SOUND_FINISHED(iLocal_149[iVar0]))
		{
			AUDIO::STOP_SOUND(iLocal_149[iVar0]);
			AUDIO::RELEASE_SOUND_ID(iLocal_149[iVar0]);
		}
		iVar0++;
	}
	func_408();
	func_475(1, 1);
	VEHICLE::SET_DISABLE_BMX_EXTRA_TRICK_FORCES(0);
	func_557(0);
	func_415(Local_152.f_3, 0);
	func_750(133, 0, Local_152.f_37 == 6);
	func_414(23, 0);
	if (func_316() >= 0f)
	{
		HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	}
	if (!BitTest(uLocal_123, 9))
	{
		STATS::STAT_STOP_RECORD_STAT();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_750(int iParam0, bool bParam1, bool bParam2)//Position - 0x1BF57
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 13);
		}
		if (BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836858.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836858.f_1), 21);
	}
	func_781();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = func_780(func_330(PLAYER::PLAYER_ID()));
		func_414(func_433(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_779(PLAYER::PLAYER_ID()) >= 12)
		{
			func_778(2549, -1);
			iVar1 = func_215(2549, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836884, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836884, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836884, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836884, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836884, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836884, 5);
			}
		}
		func_777();
		func_776();
		func_775();
		if ((!func_115(PLAYER::PLAYER_ID()) && !func_310(PLAYER::PLAYER_ID())) && !func_466())
		{
			func_759();
		}
		func_758();
		if (!BitTest(Global_1947724.f_3, 0) && !BitTest(Global_1947724.f_3, 1))
		{
			func_737();
		}
		func_757();
		MISC::CLEAR_BIT(&(Global_2793044.f_1841), 2);
		func_756();
		func_175();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_171(PLAYER::PLAYER_ID(), 21)) && !func_171(PLAYER::PLAYER_ID(), 25)) && !func_119(PLAYER::PLAYER_ID(), 0))
		{
			func_422(0);
			func_420(0);
			if (!bParam1)
			{
				func_755();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_50(26, -1))
		{
			Global_2696843 = -1;
			func_48(26, -1);
		}
	}
	if (!func_751())
	{
		Global_2764092 = 1;
	}
}

int func_751()//Position - 0x1C1B6
{
	if (((((((!func_676(PLAYER::PLAYER_ID()) && !func_657(PLAYER::PLAYER_ID())) && func_330(PLAYER::PLAYER_ID()) != 146) && !func_754()) && !func_753()) && !func_752(Global_4718592.f_166301)) && !func_99()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_752(int iParam0)//Position - 0x1C231
{
	return iParam0 == 57;
}

int func_753()//Position - 0x1C23E
{
	if (Global_4718592.f_113724 == Global_262145.f_10063 /* Tunable: TRANSFORM_INFERNO */)
	{
		return 1;
	}
	return 0;
}

int func_754()//Position - 0x1C25F
{
	if ((Global_4718592 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_166301 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_755()//Position - 0x1C2F7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_4543624[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_4543624[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_4543624[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_756()//Position - 0x1C347
{
	if (BitTest(Global_2793044.f_5062, 1))
	{
		MISC::CLEAR_BIT(&(Global_2793044.f_5062), 1);
	}
	if (Global_2793044.f_5062 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2793044.f_5062 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2793044.f_5072 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2793044.f_5072);
				Global_2793044.f_5072 = -1;
			}
		}
	}
}

void func_757()//Position - 0x1C3E2
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836858 = { Var0 };
}

void func_758()//Position - 0x1C411
{
	var uVar0;
	
	Global_1581949 = uVar0;
}

void func_759()//Position - 0x1C41F
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_24), &Global_2639845, 2);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_26), &Global_2639847, 19);
	func_773();
	func_762(1, 1, 0);
	func_760();
}

void func_760()//Position - 0x1C455
{
	func_761(0, 0);
}

void func_761(int iParam0, int iParam1)//Position - 0x1C463
{
	Global_2635559.f_22 = iParam0;
	Global_2635559.f_23 = iParam1;
}

void func_762(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1C47B
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_45), &Global_2639866, 323);
	}
	else
	{
		Global_2635559.f_45 = { Global_2639866 };
		Global_2635559.f_45.f_49 = { Global_2639866.f_49 };
		Global_2635559.f_45.f_52 = Global_2639866.f_52;
		Global_2635559.f_45.f_53 = Global_2639866.f_53;
	}
	if (bParam0)
	{
		func_772();
	}
	if (!bParam2)
	{
		func_764(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_763(0);
	func_178();
}

void func_763(bool bParam0)//Position - 0x1C521
{
	if (bParam0)
	{
		Global_2635559.f_713 = 0;
	}
	else
	{
		Global_2635559.f_713 = 1;
	}
}

void func_764(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x1C541
{
	if (bParam0)
	{
		if (func_771())
		{
			func_770();
		}
		Global_2635559.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635559.f_714.f_504 = iParam1;
		Global_2635559.f_714.f_505 = iParam2;
		Global_2635559.f_714.f_506 = iParam10;
		func_768();
		func_461(8, 0, 0, 0, 0);
		Global_2635559.f_714.f_507 = iParam11;
		Global_2635559.f_714.f_512 = iParam3;
		Global_2635559.f_714.f_513 = iParam4;
		Global_2635559.f_714.f_510 = iParam5;
		Global_2635559.f_714.f_511 = iParam6;
		Global_2635559.f_714.f_514 = iParam7;
		Global_2635559.f_714.f_515 = iParam8;
		Global_2635559.f_714.f_516 = iParam9;
		Global_2635559.f_714.f_517 = iParam14;
		Global_2635559.f_714.f_508 = iParam12;
		Global_2635559.f_714.f_509 = iParam13;
		Global_2635559.f_1753 = 1;
	}
	else
	{
		func_765();
	}
}

void func_765()//Position - 0x1C62C
{
	if (func_771() && !func_767())
	{
		func_770();
	}
	if (func_767())
	{
		func_766();
	}
	else
	{
		func_768();
		func_461(0, 0, 0, 0, 0);
		Global_2635559.f_1753 = 0;
		Global_2635559.f_1752 = 0;
	}
}

void func_766()//Position - 0x1C674
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_714), &(Global_2635559.f_1233), 519);
	Global_2635559.f_490 = { Global_2635559.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635559.f_714.f_518)
	{
		Global_2635559.f_1752 = 0;
	}
}

int func_767()//Position - 0x1C6BC
{
	if ((Global_2635559.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635559.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_1233.f_518))
	{
		return 1;
	}
	return 0;
}

void func_768()//Position - 0x1C6FB
{
	if (func_771() && !func_767())
	{
		func_770();
	}
	func_769();
	Global_2635559.f_714 = 0;
}

void func_769()//Position - 0x1C724
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635559.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_770()//Position - 0x1C75F
{
	if (func_767())
	{
		if (Global_2635559.f_714.f_518 == Global_2635559.f_1233.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635559.f_714.f_518)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_1233), &(Global_2635559.f_714), 519);
		Global_2635559.f_496 = { Global_2635559.f_490 };
		Global_2635559.f_1752 = 1;
	}
}

int func_771()//Position - 0x1C7CD
{
	if ((Global_2635559.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635559.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_714.f_518))
	{
		return 1;
	}
	return 0;
}

void func_772()//Position - 0x1C80C
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_368), &Global_2640189, 121);
}

void func_773()//Position - 0x1C825
{
	func_774();
}

void func_774()//Position - 0x1C831
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2635559.f_2263[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635559.f_2262 = 0;
}

void func_775()//Position - 0x1C865
{
	Global_2793044.f_5063 = 0;
}

void func_776()//Position - 0x1C875
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1 = 0;
	}
}

void func_777()//Position - 0x1C893
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1894573[iVar0 /*608*/] = -1;
	}
}

void func_778(int iParam0, int iParam1)//Position - 0x1C8B1
{
	int iVar0;
	
	iVar0 = func_215(iParam0, func_211(iParam1), 0);
	iVar0++;
	if (!func_214(iParam0))
	{
		func_206(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_207(iParam0, iVar0, iParam1, 1);
	}
}

int func_779(int iParam0)//Position - 0x1C8F2
{
	return Global_1853910[iParam0 /*862*/].f_205.f_6;
}

int func_780(int iParam0)//Position - 0x1C907
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
			if (func_425(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_781()//Position - 0x1C969
{
	if (BitTest(Global_2793044.f_1828, 3) || BitTest(Global_2793044.f_1828, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (BitTest(Global_2793044.f_1828, 5))
	{
		MISC::CLEAR_BIT(&(Global_2793044.f_1828), 5);
	}
	if (BitTest(Global_2793044.f_1828, 3))
	{
		MISC::CLEAR_BIT(&(Global_2793044.f_1828), 3);
	}
	if (BitTest(Global_2793044.f_1828, 4))
	{
		MISC::CLEAR_BIT(&(Global_2793044.f_1828), 4);
	}
	func_784(0);
	func_783(0);
	func_782(0);
}

void func_782(int iParam0)//Position - 0x1C9FB
{
	if (Global_2793044.f_4617 != iParam0)
	{
		Global_2793044.f_4617 = iParam0;
	}
}

void func_783(bool bParam0)//Position - 0x1CA18
{
	if (Global_2793044.f_4616 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2793044.f_4616 = bParam0;
	}
}

void func_784(int iParam0)//Position - 0x1CA3D
{
	if (Global_2793044.f_4614 != iParam0)
	{
		Global_2793044.f_4614 = iParam0;
	}
}

void func_785(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1CA5A
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
	if (Global_78558)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			STATS::PLAYSTATS_FM_EVENT_VEHICLETARGET(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_786()))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			Var2.f_14 = iParam3;
			STATS::PLAYSTATS_FM_EVENT_ATOB(&Var2);
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
			STATS::PLAYSTATS_FM_EVENT_CHECKPOINTCOLLECTION(&Var3);
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
			STATS::PLAYSTATS_FM_EVENT_CHALLENGES(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::PLAYSTATS_FM_EVENT_PENNEDIN(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			STATS::PLAYSTATS_FM_EVENT_PASSTHEPARCEL(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			STATS::PLAYSTATS_FM_EVENT_HOTPROPERTY(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			STATS::PLAYSTATS_FM_EVENT_DEADDROP(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = iParam4;
			STATS::PLAYSTATS_FM_EVENT_KINGOFTHECASTLE(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			STATS::PLAYSTATS_FM_EVENT_CRIMINALDAMAGE(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				STATS::PLAYSTATS_FM_EVENT_URBANWARFARE(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				STATS::PLAYSTATS_FM_EVENT_COMPETITIVEURBANWARFARE(&Var11);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			STATS::PLAYSTATS_FM_EVENT_HUNTBEAST(&Var12);
		}
	}
}

char* func_786()//Position - 0x1CCD5
{
	switch (Global_2697019)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_787(struct<21> Param0)//Position - 0x1CCF7
{
	int iVar0;
	
	func_796(func_797(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(func_795(9));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(func_794(9));
	func_791(0, -1, 0);
	func_789(133);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_152, 88, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1518, 385, 0);
	if (!func_788())
	{
		func_749();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_152.f_52), &(Local_152.f_53));
	}
	Local_1519.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_149[iVar0] = -1;
		iVar0++;
	}
	return 1;
}

int func_788()//Position - 0x1CD91
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
		if (func_747())
		{
			return 0;
		}
		if (func_745(157))
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

void func_789(int iParam0)//Position - 0x1CDEA
{
	func_757();
	func_790();
	func_775();
	Global_1836858.f_4 = iParam0;
	Global_1836858.f_5 = iParam0;
	func_432(iParam0, -1);
	func_27(&(Global_1836858.f_18), 0, 0);
	Global_2793044.f_4687 = 0;
	Global_2695727[0] = func_109();
	Global_2695727[1] = func_109();
	Global_2695727[2] = func_109();
	Global_2695727[3] = func_109();
	Global_2695727[4] = func_109();
	func_175();
	if (!func_570(func_298()))
	{
		func_297();
	}
	if (func_173() && !func_172())
	{
		MISC::SET_BIT(&(Global_1836858.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1836858.f_1), 17);
	}
}

void func_790()//Position - 0x1CEA0
{
	var uVar0;
	
	Global_1836883 = uVar0;
}

int func_791(int iParam0, int iParam1, bool bParam2)//Position - 0x1CEAE
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_793();
			}
			else
			{
				return 0;
			}
		}
		if (!func_792(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_793();
					}
					else
					{
						return 0;
					}
				}
				if (func_747())
				{
					if (!bParam2)
					{
						func_793();
					}
					else
					{
						return 0;
					}
				}
				if (func_745(157))
				{
					if (!bParam2)
					{
						func_793();
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
					func_793();
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
				func_793();
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
			func_793();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_792(bool bParam0)//Position - 0x1CFC4
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_793()//Position - 0x1CFD5
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_794(int iParam0)//Position - 0x1CFE1
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

int func_795(int iParam0)//Position - 0x1D0BB
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

void func_796(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1D193
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_793();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_797(int iParam0)//Position - 0x1D1B2
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
		
		case 173:
			return 32;
		
		case 174:
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
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 180:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 183:
			return 32;
		
		case 184:
			return 32;
		
		case 181:
			return 32;
		
		case 182:
			return 32;
		
		case 187:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 2;
		
		case 196:
			return 1;
		
		case 192:
			return 2;
		
		case 193:
			return 4;
		
		case 194:
			return 2;
		
		case 195:
			return 2;
		
		case 177:
			return 1;
		
		case 197:
			return 2;
		
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
			return 0;
		
		case 219:
			return 1;
		
		case 204:
			return 4;
		
		case 207:
			return 4;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 216:
			return 1;
		
		case 212:
			return 1;
		
		case 210:
			return 2;
		
		case 213:
			return 8;
		
		case 214:
			return 8;
		
		case 217:
			return 1;
		
		case 218:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 205:
			return 16;
		
		case 206:
			return 32;
		
		default:
	}
	switch (func_130(func_798(iParam0, 1)))
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

int func_798(int iParam0, bool bParam1)//Position - 0x1D933
{
	switch (iParam0)
	{
		case 191:
			return 15;
		
		case 198:
			return 8;
		
		case 192:
			return 14;
		
		case 196:
			return 122;
		
		case 199:
			return 1;
		
		case 197:
			return 5;
		
		case 200:
			return 6;
		
		case 193:
			return 11;
		
		case 201:
			return 0;
		
		case 202:
			return 2;
		
		case 194:
			return 13;
		
		case 203:
			return 3;
		
		case 195:
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
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		default:
	}
	if (bParam1)
	{
	}
	return 312;
}

