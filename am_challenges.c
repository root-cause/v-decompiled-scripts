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
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	struct<3> Local_99 = { 0, 0, 0 } ;
	struct<3> Local_100[65];
	float fLocal_101 = 0f;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_103 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	float fLocal_106 = 0f;
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
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	float fLocal_127 = 0f;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	int iLocal_140 = 0;
	struct<3> Local_141[65];
	int iLocal_142[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_143[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_144 = 0;
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	struct<68> Local_150 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<535> Local_171 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_172 = -1;
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
	var uLocal_194 = -1082130432;
	var uLocal_195 = 3;
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
	var uLocal_211 = -1;
	var uLocal_212 = 0;
	var uLocal_213 = -1;
	var uLocal_214 = -1;
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
	var uLocal_236 = -1082130432;
	var uLocal_237 = 3;
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
	var uLocal_253 = -1;
	var uLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = -1;
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
	var uLocal_278 = -1082130432;
	var uLocal_279 = 3;
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
	var uLocal_295 = -1;
	var uLocal_296 = 0;
	var uLocal_297 = -1;
	var uLocal_298 = -1;
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
	var uLocal_320 = -1082130432;
	var uLocal_321 = 3;
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
	var uLocal_337 = -1;
	var uLocal_338 = 0;
	var uLocal_339 = -1;
	var uLocal_340 = -1;
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
	var uLocal_362 = -1082130432;
	var uLocal_363 = 3;
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
	var uLocal_379 = -1;
	var uLocal_380 = 0;
	var uLocal_381 = -1;
	var uLocal_382 = -1;
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
	var uLocal_404 = -1082130432;
	var uLocal_405 = 3;
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
	var uLocal_421 = -1;
	var uLocal_422 = 0;
	var uLocal_423 = -1;
	var uLocal_424 = -1;
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
	var uLocal_446 = -1082130432;
	var uLocal_447 = 3;
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
	var uLocal_463 = -1;
	var uLocal_464 = 0;
	var uLocal_465 = -1;
	var uLocal_466 = -1;
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
	var uLocal_488 = -1082130432;
	var uLocal_489 = 3;
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
	var uLocal_505 = -1;
	var uLocal_506 = 0;
	var uLocal_507 = -1;
	var uLocal_508 = -1;
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
	var uLocal_530 = -1082130432;
	var uLocal_531 = 3;
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
	var uLocal_547 = -1;
	var uLocal_548 = 0;
	var uLocal_549 = -1;
	var uLocal_550 = -1;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
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
	var uLocal_572 = -1082130432;
	var uLocal_573 = 3;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
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
	var uLocal_589 = -1;
	var uLocal_590 = 0;
	var uLocal_591 = -1;
	var uLocal_592 = -1;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
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
	var uLocal_614 = -1082130432;
	var uLocal_615 = 3;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
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
	var uLocal_631 = -1;
	var uLocal_632 = 0;
	var uLocal_633 = -1;
	var uLocal_634 = -1;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
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
	var uLocal_656 = -1082130432;
	var uLocal_657 = 3;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
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
	var uLocal_673 = -1;
	var uLocal_674 = 0;
	var uLocal_675 = -1;
	var uLocal_676 = -1;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
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
	var uLocal_698 = -1082130432;
	var uLocal_699 = 3;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
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
	var uLocal_715 = -1;
	var uLocal_716 = 0;
	var uLocal_717 = -1;
	var uLocal_718 = -1;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
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
	var uLocal_740 = -1082130432;
	var uLocal_741 = 3;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
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
	var uLocal_757 = -1;
	var uLocal_758 = 0;
	var uLocal_759 = -1;
	var uLocal_760 = -1;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
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
	var uLocal_782 = -1082130432;
	var uLocal_783 = 3;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
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
	var uLocal_799 = -1;
	var uLocal_800 = 0;
	var uLocal_801 = -1;
	var uLocal_802 = -1;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
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
	var uLocal_824 = -1082130432;
	var uLocal_825 = 3;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
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
	var uLocal_841 = -1;
	var uLocal_842 = 0;
	var uLocal_843 = -1;
	var uLocal_844 = -1;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
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
	var uLocal_866 = -1082130432;
	var uLocal_867 = 3;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
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
	var uLocal_883 = -1;
	var uLocal_884 = 0;
	var uLocal_885 = -1;
	var uLocal_886 = -1;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
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
	var uLocal_908 = -1082130432;
	var uLocal_909 = 3;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
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
	var uLocal_925 = -1;
	var uLocal_926 = 0;
	var uLocal_927 = -1;
	var uLocal_928 = -1;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
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
	var uLocal_950 = -1082130432;
	var uLocal_951 = 3;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
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
	var uLocal_967 = -1;
	var uLocal_968 = 0;
	var uLocal_969 = -1;
	var uLocal_970 = -1;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
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
	var uLocal_992 = -1082130432;
	var uLocal_993 = 3;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
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
	var uLocal_1009 = -1;
	var uLocal_1010 = 0;
	var uLocal_1011 = -1;
	var uLocal_1012 = -1;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
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
	var uLocal_1034 = -1082130432;
	var uLocal_1035 = 3;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
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
	var uLocal_1051 = -1;
	var uLocal_1052 = 0;
	var uLocal_1053 = -1;
	var uLocal_1054 = -1;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
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
	var uLocal_1076 = -1082130432;
	var uLocal_1077 = 3;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
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
	var uLocal_1093 = -1;
	var uLocal_1094 = 0;
	var uLocal_1095 = -1;
	var uLocal_1096 = -1;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
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
	var uLocal_1118 = -1082130432;
	var uLocal_1119 = 3;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
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
	var uLocal_1135 = -1;
	var uLocal_1136 = 0;
	var uLocal_1137 = -1;
	var uLocal_1138 = -1;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
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
	var uLocal_1160 = -1082130432;
	var uLocal_1161 = 3;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
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
	var uLocal_1177 = -1;
	var uLocal_1178 = 0;
	var uLocal_1179 = -1;
	var uLocal_1180 = -1;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
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
	var uLocal_1202 = -1082130432;
	var uLocal_1203 = 3;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
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
	var uLocal_1219 = -1;
	var uLocal_1220 = 0;
	var uLocal_1221 = -1;
	var uLocal_1222 = -1;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
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
	var uLocal_1244 = -1082130432;
	var uLocal_1245 = 3;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
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
	var uLocal_1261 = -1;
	var uLocal_1262 = 0;
	var uLocal_1263 = -1;
	var uLocal_1264 = -1;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
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
	var uLocal_1286 = -1082130432;
	var uLocal_1287 = 3;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
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
	var uLocal_1303 = -1;
	var uLocal_1304 = 0;
	var uLocal_1305 = -1;
	var uLocal_1306 = -1;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
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
	var uLocal_1328 = -1082130432;
	var uLocal_1329 = 3;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
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
	var uLocal_1345 = -1;
	var uLocal_1346 = 0;
	var uLocal_1347 = -1;
	var uLocal_1348 = -1;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
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
	var uLocal_1370 = -1082130432;
	var uLocal_1371 = 3;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
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
	var uLocal_1387 = -1;
	var uLocal_1388 = 0;
	var uLocal_1389 = -1;
	var uLocal_1390 = -1;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
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
	var uLocal_1412 = -1082130432;
	var uLocal_1413 = 3;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
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
	var uLocal_1429 = -1;
	var uLocal_1430 = 0;
	var uLocal_1431 = -1;
	var uLocal_1432 = -1;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
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
	var uLocal_1454 = -1082130432;
	var uLocal_1455 = 3;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
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
	var uLocal_1471 = -1;
	var uLocal_1472 = 0;
	var uLocal_1473 = -1;
	var uLocal_1474 = -1;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
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
	var uLocal_1496 = -1082130432;
	var uLocal_1497 = 3;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
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
	var uLocal_1513 = -1;
	var uLocal_1514 = 0;
	var uLocal_1515 = -1;
	struct<12> Local_1516[32];
	struct<12> Local_1517 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_1518 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_101 = 40000f;
	iLocal_129 = AUDIO::GET_SOUND_ID();
	iLocal_130 = AUDIO::GET_SOUND_ID();
	iLocal_131 = -1;
	bLocal_132 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_782(ScriptParam_1518))
		{
			func_744();
		}
	}
	while (true)
	{
		func_743();
		if (func_739() || func_737())
		{
			func_744();
		}
		if (func_735())
		{
			func_744();
		}
		func_708();
		switch (func_707(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_706() == 1)
				{
					if (func_705())
					{
						func_704(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_706() == 1)
				{
					func_145();
					func_133();
				}
				else if (func_706() == 3)
				{
					func_704(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_744();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_706())
			{
				case 0:
					if (func_119())
					{
						func_118(1);
					}
					break;
				
				case 1:
					if (Local_150.f_37 == 6)
					{
						func_118(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_107, 1000, 0))
					{
						func_118(3);
					}
					break;
				
				case 3:
					func_744();
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
		if (!BitTest(Local_150.f_2, 0))
		{
			MISC::SET_BIT(&(Local_150.f_2), 0);
			Local_150.f_1 = NETWORK::GET_NETWORK_TIME();
		}
	}
	switch (Local_150.f_37)
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
			if (func_1(&(Local_150.f_43), func_29(), 0) || BitTest(Local_150.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_150.f_38 = NETWORK::GET_NETWORK_TIME();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_150.f_39), func_28(0), 0) || BitTest(Local_150.f_2, 0))
			{
				if (!BitTest(Local_150.f_2, 1))
				{
					Local_150.f_1 = NETWORK::GET_NETWORK_TIME();
					MISC::SET_BIT(&(Local_150.f_2), 1);
					func_27(&(Local_150.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&bLocal_132, &iLocal_131);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_150.f_41), 20000, 0) || Local_150.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_150.f_3))
				{
					func_27(&(Local_150.f_45), 0, 0);
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
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_150.f_67[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_150.f_67[iVar0 /*2*/].f_1), false))
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
				if (!BitTest(Local_1516[iVar1 /*12*/].f_1, 1) || Local_1516[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (BitTest(Local_1516[iVar1 /*12*/].f_1, 0))
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
	return BitTest(Global_1892703[bParam0 /*599*/].f_1, 8);
}

bool func_8(bool bParam0)//Position - 0x51E
{
	return BitTest(Global_1892703[bParam0 /*599*/].f_1, 2);
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
			Var0.f_2 = -1111422293;
			Var0.f_10 = iVar1;
			func_10(Var0, func_11(1));
		}
		*bParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x586
{
	Param0.f_0 = -1529596656;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam13);
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
			MISC::SET_BIT(&(Local_150.f_47), bVar0);
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
	if (iVar1 > Local_150.f_50)
	{
		Local_150.f_50 = iVar1;
	}
	else
	{
		Local_150.f_66 = (Local_150.f_50 - iVar1);
	}
	if (iVar2 > Local_150.f_51)
	{
		Local_150.f_51 = iVar2;
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
		bVar0 = Global_1853348[bParam0 /*834*/].f_205 == 8;
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

int func_16()//Position - 0x7CF
{
	return Global_1574918;
}

int func_17(bool bParam0, bool bParam1)//Position - 0x7DB
{
	float fVar0;
	
	if (bParam0 >= 0 && bParam0 < 32)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_1516[bParam0 /*12*/].f_4);
	}
	else if (bParam0 == -1)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4);
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
	switch (Local_150.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_11411)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_11412)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_11413)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_11414)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_11415)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_11416)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_11417 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_11418)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_11419)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_11420)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_11421)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_11422))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_11423))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_11535)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_11536)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_11426))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_11428))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_11429))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_11430))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()//Position - 0xA4D
{
	switch (Local_150.f_3)
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
		if (Local_150.f_4[iParam0] == NETWORK::PARTICIPANT_ID_TO_INT() && func_21(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4, 0))
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
	switch (Local_150.f_3)
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
	
	iVar0 = Local_1516[bParam0 /*12*/].f_4;
	iVar1 = Local_1516[bParam0 /*12*/].f_4.f_2;
	if (!BitTest(Local_150.f_48, bParam0))
	{
		fVar2 = SYSTEM::TO_FLOAT(Local_150.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_150.f_49++;
			MISC::SET_BIT(&(Local_150.f_48), bParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_150.f_4[iVar3] == bParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_150.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_150.f_4[iVar3] < 0 || func_21(iVar0, Local_1516[Local_150.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_1516[Local_150.f_4[iVar3] /*12*/].f_4, iVar1, Local_1516[Local_150.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_150.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_131 = iVar3;
				bLocal_132 = bParam0;
			}
			Local_150.f_4[iVar3] = bParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_150.f_4[iVar5] == bParam0)
				{
					Local_150.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCE4
{
	if (Local_150.f_3 == 2)
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
	
	if (BitTest(Local_150.f_47, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_150.f_4[iVar0] == bParam0)
			{
				Local_150.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(Local_150.f_48), bParam0);
		MISC::CLEAR_BIT(&(Local_150.f_47), bParam0);
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
	if (BitTest(Local_150.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_150.f_3)
	{
		case 0:
			return Global_262145.f_10723;
		
		case 8:
			return Global_262145.f_10725;
		
		case 3:
			return Global_262145.f_10726;
		
		case 1:
			return Global_262145.f_11521;
		
		case 6:
			return Global_262145.f_11522;
		
		case 10:
			return Global_262145.f_11524;
		
		case 11:
			return Global_262145.f_11526;
		
		case 12:
			return Global_262145.f_11527;
		
		case 15:
			return Global_262145.f_11531;
		
		case 16:
			return Global_262145.f_11532;
		
		case 17:
			return Global_262145.f_11533;
		
		case 18:
			return Global_262145.f_11534;
		
		case 13:
			return Global_262145.f_11525;
		
		case 14:
			return Global_262145.f_11528;
		
		case 2:
			return Global_262145.f_10728;
		
		case 7:
			return Global_262145.f_11523;
		
		case 9:
			return Global_262145.f_11529;
		
		case 5:
			return Global_262145.f_10729;
		
		case 4:
			return Global_262145.f_10727;
		
		default:
	}
	return -1;
}

int func_29()//Position - 0xF22
{
	return Global_262145.f_11491;
}

void func_30(int iParam0)//Position - 0xF31
{
	Local_150.f_37 = iParam0;
}

int func_31()//Position - 0xF40
{
	struct<2> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	if (func_43() && ((Local_150.f_37 == 0 || func_5(Local_150.f_3)) || Local_150.f_54 < 10))
	{
		Var0 = { Local_150.f_67[iLocal_126 /*2*/] };
		if (func_42(Var0.f_0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
			{
				if (func_40(Local_150.f_3, iLocal_126, &Var1, &fVar2))
				{
					Local_150.f_55[iLocal_126] = func_36(iLocal_126);
					if (BitTest(Local_1516[Local_150.f_55[iLocal_126] /*12*/].f_2, iLocal_126))
					{
						if (func_33(&(Local_150.f_67[iLocal_126 /*2*/].f_1), Var0.f_0, Var1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_150.f_67[iLocal_126 /*2*/].f_1), true, 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), 1);
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), true);
							VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), false);
							func_32(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), 1);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), "MPBitset");
								}
								MISC::SET_BIT(&iVar3, 10);
								MISC::SET_BIT(&iVar3, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_150.f_55[iLocal_126] = -1;
							Local_150.f_54++;
						}
					}
				}
			}
		}
		iLocal_126++;
		if (iLocal_126 >= 10)
		{
			iLocal_126 = 0;
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
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
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
				*uParam2 = { -1729.582f, -2943.77f, 12.9443f };
				*uParam3 = 300.078f;
				break;
			
			case 1:
				*uParam2 = { 677.2984f, 769.7758f, 204.6846f };
				*uParam3 = 82.8903f;
				break;
			
			case 2:
				*uParam2 = { 1073.972f, 3003.889f, 40.5508f };
				*uParam3 = 333.2717f;
				break;
			
			case 3:
				*uParam2 = { 1928.635f, 4702.327f, 40.1958f };
				*uParam3 = 327.9112f;
				break;
			
			case 4:
				*uParam2 = { 1278.65f, 6579.366f, 1.505f };
				*uParam3 = 84.26f;
				break;
			
			case 5:
				*uParam2 = { -1700.407f, -829.8932f, 8.2542f };
				*uParam3 = 70.1811f;
				break;
			
			case 6:
				*uParam2 = { -2733.589f, 2925.563f, 1.2152f };
				*uParam3 = 173.6421f;
				break;
			
			case 7:
				*uParam2 = { 1493.418f, -2442.99f, 64.9693f };
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
				*uParam2 = { -3132.932f, 1130.534f, 19.683f };
				*uParam3 = 168.7723f;
				break;
			
			case 1:
				*uParam2 = { -1008.917f, -1640.027f, 3.4035f };
				*uParam3 = 235.1491f;
				break;
			
			case 2:
				*uParam2 = { 1075.063f, -2445.105f, 28.2896f };
				*uParam3 = 100.2369f;
				break;
			
			case 3:
				*uParam2 = { 1101.198f, -266.9387f, 68.3046f };
				*uParam3 = 359.2015f;
				break;
			
			case 4:
				*uParam2 = { 2658.878f, 1667.581f, 23.4886f };
				*uParam3 = 90.4833f;
				break;
			
			case 5:
				*uParam2 = { -399.1095f, 874.6328f, 230.2586f };
				*uParam3 = 107.5929f;
				break;
			
			case 6:
				*uParam2 = { 156.5429f, 3117.213f, 41.5677f };
				*uParam3 = 218.5338f;
				break;
			
			case 7:
				*uParam2 = { -2242.923f, 4315.749f, 46.7647f };
				*uParam3 = 236.8359f;
				break;
			
			case 8:
				*uParam2 = { -143.7363f, 6500.573f, 28.7366f };
				*uParam3 = 116.1312f;
				break;
			
			case 9:
				*uParam2 = { 1939.475f, 4628.652f, 39.3984f };
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
	return (func_5(Local_150.f_3) || func_41(Local_150.f_3));
}

int func_44(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x197C
{
	if (func_117(PLAYER::PLAYER_ID(), 0) || func_114(PLAYER::PLAYER_ID(), 0))
	{
		if (func_113(PLAYER::PLAYER_ID()) || func_111(PLAYER::PLAYER_ID()))
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
	if (func_47(&(Global_1836844.f_18)))
	{
		if (!func_1(&(Global_1836844.f_18), 7500, 0))
		{
			return 0;
		}
		func_46(&(Global_1836844.f_18));
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
	return BitTest(Global_1836844.f_1, 0);
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
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_49(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
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
	if ((!BitTest(Global_1836844.f_1, 2) && !func_8(PLAYER::PLAYER_ID())) && !func_7(PLAYER::PLAYER_ID()))
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
		func_52(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836844.f_1), 2);
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
	func_110(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_108(&(Var0.f_69), iParam7);
	}
	return func_53(&Var0);
}

int func_53(var uParam0)//Position - 0x1C75
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703735.f_2722)
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
		if (Global_2703735.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[0 /*80*/] = { *uParam0 };
			if (func_55(uParam0->f_69, 8192))
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
				func_56();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_108(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_55(uParam0->f_69, 128))
			{
				if (func_54(Global_2703735.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
					func_108(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
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
	
	if (Global_2703735.f_2723)
	{
		return;
	}
	if (!Global_78587)
	{
		Global_78587 = 1;
		bVar0 = true;
	}
	func_57();
	if (bVar0)
	{
		Global_78587 = 0;
	}
}

void func_57()//Position - 0x1F22
{
	Global_2703735.f_2724 = 0;
	Global_2703735.f_2724.f_582 = 0;
	func_61(&(Global_2703735.f_2724.f_1));
	Global_2703735.f_2724.f_1.f_1 = 0;
	func_58(&(Global_2703735.f_2724.f_1), 1);
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
	if (!Global_78587)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78588)
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
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

int func_60(bool bParam0)//Position - 0x2026
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
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
	return Global_2714762.f_19;
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
	if (bParam1 == func_107() || !func_12(bParam1, 0, 1))
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
	
	if (func_105(bParam0) && !bParam4)
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
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_105(PLAYER::PLAYER_ID()) || (func_104() && func_103())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = func_102();
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
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return func_100(iParam1, bParam0, 0);
							}
							else
							{
								return func_82(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_82(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return func_100(iParam1, bParam0, 0);
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
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return func_100(iParam1, bParam0, 0);
		}
		else
		{
			return func_82(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_82(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
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
	if ((func_81() || (func_80() && func_78())) && Global_1659814.f_1)
	{
		if (bParam1)
		{
			return func_77(iParam2, iVar0);
		}
		else
		{
			return func_77(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_76(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
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

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x261F
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1, iParam3);
	if (func_73(Global_4718592.f_116524, 1))
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

int func_73(int iParam0, bool bParam1)//Position - 0x2737
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

int func_74(int iParam0, int iParam1, int iParam2)//Position - 0x2788
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
			if (!func_76(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(bool bParam0)//Position - 0x27CF
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_76(int iParam0, int iParam1, int iParam2)//Position - 0x27E6
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

int func_77(int iParam0, int iParam1)//Position - 0x2991
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

int func_78()//Position - 0x29DF
{
	if (func_79())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_172946, 4);
}

bool func_79()//Position - 0x29FE
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_80()//Position - 0x2A13
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_172946, 0);
	}
	return ((BitTest(Global_4718592.f_172946, 0) || Global_1922895) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_81()//Position - 0x2A5A
{
	if (func_79() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_82(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2A77
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
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
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
			if (func_91())
			{
				iVar3 = func_87(bParam0);
				if (!iVar3 == -1)
				{
					return func_85(iVar3);
				}
			}
			if ((func_84(bParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_76(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_75(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_83(1);
			}
			else
			{
				return func_71(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[bParam0 /*834*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return func_75(1);
			}
			else
			{
				return func_71(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_87(bParam0);
	if (!iVar4 == -1)
	{
		return func_85(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_83(bool bParam0)//Position - 0x2C0E
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_84(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2C25
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

int func_85(int iParam0)//Position - 0x2C9D
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_86(iParam0);
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

var func_86(int iParam0)//Position - 0x2D60
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_87(bool bParam0)//Position - 0x2D77
{
	if (!bParam0 == func_107())
	{
		if (func_89(bParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_88(bParam0)];
		}
	}
	return -1;
}

int func_88(int iParam0)//Position - 0x2DA9
{
	if (iParam0 != func_107())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_107();
}

bool func_89(bool bParam0, bool bParam1)//Position - 0x2DCC
{
	if (!bParam1)
	{
		if (func_90(bParam0))
		{
			return 0;
		}
	}
	return Global_1892703[bParam0 /*599*/].f_10 != func_107();
}

int func_90(bool bParam0)//Position - 0x2DF7
{
	if (bParam0 != func_107())
	{
		if (Global_1892703[bParam0 /*599*/].f_10 != func_107())
		{
			return Global_1892703[bParam0 /*599*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_91()//Position - 0x2E2C
{
	if ((((((func_99() || func_98()) || func_64()) || func_97()) || func_96()) || func_94()) || func_92())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_92()//Position - 0x2E94
{
	return func_93(Global_4718592.f_116524);
}

int func_93(int iParam0)//Position - 0x2EAA
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

int func_94()//Position - 0x2ED9
{
	return func_95(Global_4718592.f_116524);
}

int func_95(int iParam0)//Position - 0x2EEF
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

var func_96()//Position - 0x2F29
{
	return Global_2714762.f_24;
}

bool func_97()//Position - 0x2F37
{
	return Global_2714762.f_21;
}

var func_98()//Position - 0x2F45
{
	return Global_2714762.f_18;
}

var func_99()//Position - 0x2F53
{
	return Global_2714762.f_17;
}

int func_100(int iParam0, bool bParam1, bool bParam2)//Position - 0x2F61
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058069.f_14[iParam0];
	if (func_91())
	{
		iVar2 = func_87(bParam1);
		if (!iVar2 == -1)
		{
			return func_85(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_107())
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
			iVar0 = func_71(bParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_101(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_76(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0))
		{
			iVar0 = func_83(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_101(int iParam0)//Position - 0x30E0
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

var func_102()//Position - 0x31B5
{
	return Global_2621446.f_2;
}

var func_103()//Position - 0x31C3
{
	return BitTest(Global_2621446, 4);
}

var func_104()//Position - 0x31D1
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

int func_105(int iParam0)//Position - 0x31EB
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_106())
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

bool func_106()//Position - 0x322A
{
	return BitTest(Global_2621446, 3);
}

int func_107()//Position - 0x3238
{
	return -1;
}

void func_108(var uParam0, int iParam1)//Position - 0x3241
{
	func_109(uParam0, iParam1);
}

void func_109(var uParam0, var uParam1)//Position - 0x3251
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_110(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x3262
{
	uParam1->f_17 = func_107();
	uParam1->f_18 = func_107();
	uParam1->f_19 = func_107();
	uParam1->f_20 = func_107();
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

bool func_111(bool bParam0)//Position - 0x32E0
{
	return func_112(bParam0, 20);
}

var func_112(int iParam0, int iParam1)//Position - 0x32F0
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_113(bool bParam0)//Position - 0x3308
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_112(bParam0, 9);
	}
	return 0;
}

int func_114(int iParam0, int iParam1)//Position - 0x3326
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 && func_115(Global_1892703[iParam0 /*599*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1)
	{
		if (func_115(Global_1892703[iParam0 /*599*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0)//Position - 0x338C
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
	return func_116(iParam0, 0);
	return 0;
}

int func_116(int iParam0, int iParam1)//Position - 0x33E6
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

int func_117(int iParam0, int iParam1)//Position - 0x343B
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_118(int iParam0)//Position - 0x3476
{
	Local_150.f_0 = iParam0;
}

int func_119()//Position - 0x3483
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_150.f_4[iVar0] = -1;
		iVar0++;
	}
	func_46(&(Local_150.f_39));
	func_124();
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_150.f_55[iVar0] = func_36(iVar0);
			iVar0++;
		}
		func_120();
	}
	return 1;
}

void func_120()//Position - 0x34E3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_41(Local_150.f_3))
		{
			Local_150.f_67[iVar0 /*2*/] = func_123();
		}
		else
		{
			Local_150.f_67[iVar0 /*2*/] = func_121();
		}
		iVar0++;
	}
}

int func_121()//Position - 0x3527
{
	int iVar0;
	
	switch (Local_150.f_3)
	{
		case 12:
			return func_122();
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

int func_122()//Position - 0x3575
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

int func_123()//Position - 0x35A9
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

void func_124()//Position - 0x35DD
{
	int iVar0;
	
	iVar0 = func_129();
	Local_150.f_3 = iVar0;
	func_125(func_127(133, iVar0, 0, 0));
}

void func_125(int iParam0)//Position - 0x3600
{
	struct<3> Var0;
	int iVar1;
	
	Var0.f_0 = -1257646007;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = func_126(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iVar1);
	}
}

var func_126(int iParam0, bool bParam1)//Position - 0x363A
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

int func_127(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x369F
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
	if (func_128(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_128(int iParam0)//Position - 0x3F19
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

int func_129()//Position - 0x407F
{
	int iVar0[19];
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0[0] = Global_262145.f_11820;
	iVar0[1] = Global_262145.f_11493;
	iVar0[2] = Global_262145.f_11824;
	iVar0[3] = Global_262145.f_11822;
	iVar0[4] = Global_262145.f_11823;
	iVar0[5] = Global_262145.f_11825;
	iVar0[6] = Global_262145.f_11494;
	iVar0[7] = Global_262145.f_11495;
	iVar0[8] = Global_262145.f_11821;
	iVar0[9] = Global_262145.f_11501;
	iVar0[10] = Global_262145.f_11496;
	iVar0[11] = Global_262145.f_11498;
	iVar0[12] = Global_262145.f_11499;
	iVar0[13] = Global_262145.f_11497;
	iVar0[14] = Global_262145.f_11500;
	iVar0[15] = Global_262145.f_11503;
	iVar0[16] = Global_262145.f_11504;
	iVar0[17] = Global_262145.f_11505;
	iVar0[18] = Global_262145.f_11506;
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_132(iVar2) || func_130(133, iVar2, 0, 0))
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
	return func_129();
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x41FC
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
	iVar1 = func_131(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8576)
		{
			if (Global_2779753.f_136[iVar0 /*2*/] == iVar1 && Global_2779753.f_136[iVar0 /*2*/].f_1 == func_127(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x4281
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

int func_132(int iParam0)//Position - 0x4320
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10716;
		
		case 1:
			return Global_262145.f_11507;
		
		case 6:
			return Global_262145.f_11508;
		
		case 7:
			return Global_262145.f_11509;
		
		case 8:
			return Global_262145.f_10717;
		
		case 3:
			return Global_262145.f_10718;
		
		case 4:
			return Global_262145.f_10719;
		
		case 2:
			return Global_262145.f_10720;
		
		case 5:
			return Global_262145.f_10722;
		
		case 9:
			return Global_262145.f_11515;
		
		case 10:
			return Global_262145.f_11510;
		
		case 11:
			return Global_262145.f_11512;
		
		case 12:
			return Global_262145.f_11513;
		
		case 15:
			return Global_262145.f_11517;
		
		case 16:
			return Global_262145.f_11518;
		
		case 17:
			return Global_262145.f_11519;
		
		case 18:
			return Global_262145.f_11520;
		
		case 13:
			return Global_262145.f_11511;
		
		case 14:
			return Global_262145.f_11514;
		
		default:
	}
	return 1;
}

void func_133()//Position - 0x4460
{
	bool bVar0;
	
	if (func_43())
	{
		bVar0 = false;
		while (bVar0 < 10)
		{
			if (Local_150.f_55[bVar0] == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (func_134(bVar0))
				{
					if (!BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
					{
						MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
					}
				}
				else if (BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
				}
			}
			else if (BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
			{
				MISC::CLEAR_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
			}
			bVar0++;
		}
	}
}

int func_134(int iParam0)//Position - 0x4508
{
	struct<3> Var0;
	var uVar1;
	
	if (func_39(iParam0, &Var0, &uVar1))
	{
		if (func_135(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)//Position - 0x454D
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
		if (func_140(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_136(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_136(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x465F
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
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_138(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam1))
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
			if (!func_14(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_137(bVar1) || !bParam8) && !Global_2689235[bVar1 /*453*/].f_267)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_138(bVar1), Param0, true) <= (fVar2 + fParam1))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_138(bVar1), Param0, true) <= (fVar2 + fParam1))
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

int func_137(bool bParam0)//Position - 0x4817
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2689235[bParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

Vector3 func_138(bool bParam0)//Position - 0x4842
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_64() && Global_1853348[iVar0 /*834*/].f_804) && !func_139(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_38(bParam0);
}

int func_139(struct<3> Param0)//Position - 0x4895
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_140(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)//Position - 0x48BF
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
				if (iParam8 || NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_137(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_141(bVar1))
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

int func_141(bool bParam0)//Position - 0x49C3
{
	if (func_144(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2787505 = { func_143(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2787505))
	{
		return 1;
	}
	if (func_142(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0, bool bParam1)//Position - 0x4A0A
{
	int iVar0;
	
	iVar0 = func_88(iParam0);
	if (!iVar0 == func_107())
	{
		if (iVar0 == func_88(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_143(bool bParam0)//Position - 0x4A35
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_144(bool bParam0, bool bParam1)//Position - 0x4A4C
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { func_143(bParam0) };
		Global_2787518 = { func_143(bParam1) };
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

void func_145()//Position - 0x4AB9
{
	float fVar0;
	float fVar1;
	
	func_701();
	func_700();
	if (func_698())
	{
		func_580();
	}
	if (!func_7(PLAYER::PLAYER_ID()))
	{
		if (func_553(0, 1, 1))
		{
			if (BitTest(uLocal_121, 6))
			{
				MISC::CLEAR_BIT(&uLocal_121, 6);
			}
			switch (Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3)
			{
				case 0:
					if (Local_150.f_37 < 2)
					{
						if (Local_150.f_37 > 0)
						{
							if (Local_150.f_3 != -1)
							{
								func_552(1);
								func_551(1);
							}
						}
					}
					else
					{
						func_551(2);
					}
					break;
				
				case 1:
					func_545(9);
					if (Local_1517.f_8 == 0)
					{
						Local_1517.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
					if (Local_150.f_37 >= 2)
					{
						func_551(2);
						Local_1517.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
					if (func_43())
					{
						func_545(0);
					}
					func_543((func_29() - func_544(&(Local_150.f_43), 0, 0)));
					func_540(func_542((func_29() - func_544(&(Local_150.f_43), 0, 0)), 0), func_541(Local_150.f_3));
					func_473(0, func_539());
					func_457();
					func_435();
					if (func_434())
					{
						func_433();
					}
					break;
				
				case 2:
					if (Local_150.f_37 > 2)
					{
						func_552(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_432())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_414(133, fVar0, fVar1, 0, 0, 0, 0);
						func_413(Local_150.f_3, 1);
						func_412(23, 1);
						if (Local_1517.f_8 == 0)
						{
							Local_1517.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
						if (Local_1517.f_9 == 0)
						{
							Local_1517.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
						func_408();
						VEHICLE::_0x26D99D5A82FD18E8(1);
						if (func_432())
						{
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							PLAYER::SET_MAX_WANTED_LEVEL(0);
						}
						if (Local_150.f_3 == 14)
						{
							func_407(&Local_141);
						}
						func_406();
						if (!func_7(PLAYER::PLAYER_ID()))
						{
							func_52(63, "AMCH_STARTED", func_405(Local_150.f_3), func_66(), -1, func_66(), 1, 0);
							if (func_402("AMCH_WARN", func_404(Local_150.f_3), func_403(Local_150.f_3)))
							{
								HUD::CLEAR_HELP(true);
							}
						}
						if (func_43())
						{
							func_384(678f, 794f, 206f, 8f, 0);
							func_384(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_384(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_551(3);
					}
					break;
				
				case 3:
					if (Local_150.f_37 > 3)
					{
						iLocal_123 = 0;
						func_551(4);
					}
					else
					{
						if (!BitTest(Local_150.f_2, 1))
						{
							func_342();
							func_339();
							func_338();
						}
						if (func_337(0) && !func_20(0))
						{
							func_336();
						}
					}
					if (func_432())
					{
						PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
					}
					func_335();
					func_310();
					func_580();
					func_473(0, 1);
					func_457();
					func_435();
					func_545(2);
					func_545(5);
					func_545(7);
					break;
				
				case 4:
					if (func_298(&uLocal_133, !BitTest(Local_150.f_2, 0)) || BitTest(Local_150.f_2, 0))
					{
						if (func_5(Local_150.f_3))
						{
							if (Local_150.f_37 == 5)
							{
								func_551(5);
							}
						}
						else
						{
							func_551(6);
						}
					}
					func_285();
					func_177();
					func_310();
					func_580();
					func_473(1, 1);
					func_406();
					break;
				
				case 5:
					if (Local_150.f_37 > 5)
					{
						func_551(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_172();
		}
	}
	else
	{
		func_172();
	}
	func_152();
	func_147();
	func_146();
}

void func_146()//Position - 0x4E3C
{
	struct<2> Var0;
	int iVar1;
	
	if (func_43())
	{
		Var0 = { Local_150.f_67[iLocal_140 /*2*/] };
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
		iLocal_140++;
		if (iLocal_140 >= 10)
		{
			iLocal_140 = 0;
			iLocal_149 = iLocal_148;
			iLocal_148 = 0;
		}
	}
}

void func_147()//Position - 0x4EA8
{
	if (Local_150.f_37 == 5)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_150.f_67[iLocal_140 /*2*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_140 /*2*/].f_1), false))
			{
				if (!BitTest(uLocal_146, iLocal_140))
				{
					MISC::SET_BIT(&uLocal_146, iLocal_140);
					iLocal_147[iLocal_140] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_147[iLocal_140], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_140 /*2*/].f_1), "GTAO_FM_Events_Soundset", false, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_147[iLocal_140], "Time", 30f);
				}
				if ((30000 - func_544(&(Local_150.f_45), 0, 0)) >= 0)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_140 /*2*/].f_1), false))
					{
						func_545(1);
						iLocal_148 = 1;
					}
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_150.f_67[iLocal_140 /*2*/].f_1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_140 /*2*/].f_1));
					NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_140 /*2*/].f_1), true, false, -1);
				}
			}
			else if (BitTest(uLocal_146, iLocal_140) && !AUDIO::HAS_SOUND_FINISHED(iLocal_147[iLocal_140]))
			{
				AUDIO::STOP_SOUND(iLocal_147[iLocal_140]);
			}
		}
		if (iLocal_149)
		{
			if (!func_105(PLAYER::PLAYER_ID()))
			{
				func_149(func_542((30000 - func_544(&(Local_150.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				func_148();
			}
		}
	}
}

void func_148()//Position - 0x5024
{
	Global_1649593.f_1172 = 1;
}

void func_149(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x5034
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_151(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_150(7, iVar0);
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

void func_150(int iParam0, int iParam1)//Position - 0x5191
{
	MISC::SET_BIT(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_151(int iParam0, int iParam1)//Position - 0x51AA
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

void func_152()//Position - 0x51C0
{
	if (((func_12(PLAYER::PLAYER_ID(), 1, 1) && !func_7(PLAYER::PLAYER_ID())) && !func_168(PLAYER::PLAYER_ID())) && func_553(0, 1, 1))
	{
		if (Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 1)
		{
			func_165(func_167(Local_150.f_3), func_404(Local_150.f_3), 0, 0);
		}
		else if (Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
		{
			if (!BitTest(uLocal_121, 10))
			{
				func_153(func_403(Local_150.f_3), 0);
			}
			else
			{
				func_153("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_406();
		}
	}
	else
	{
		func_406();
	}
}

void func_153(char* sParam0, bool bParam1)//Position - 0x5268
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_163(sParam0))
	{
		return;
	}
	func_157();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_156();
	func_155(bParam1);
	func_154();
}

void func_154()//Position - 0x52D3
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_155(bool bParam0)//Position - 0x52E6
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_156()//Position - 0x530C
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_157()//Position - 0x5331
{
	func_159();
	func_158(0);
}

void func_158(bool bParam0)//Position - 0x5342
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

void func_159()//Position - 0x53D4
{
	if (!func_162())
	{
	}
	if (func_161())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
		func_160();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_160()//Position - 0x53FD
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

int func_161()//Position - 0x566F
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_162()//Position - 0x5685
{
	if (!func_161())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	func_160();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_163(char* sParam0)//Position - 0x56AB
{
	if (!func_161())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_164(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}

bool func_164(char* sParam0)//Position - 0x56EF
{
	if (!func_161())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_165(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x5721
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
	if (func_166(sParam0, sParam1) && Global_1574757.f_56 == Global_1574757.f_58)
	{
		return 0;
	}
	func_157();
	Global_1574757 = 3;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	Global_1574757.f_58 = iParam3;
	Global_1574757.f_56 = iParam3;
	func_156();
	func_155(bParam2);
	func_154();
	return 1;
}

bool func_166(char* sParam0, char* sParam1)//Position - 0x57CB
{
	if (!func_161())
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

char* func_167(int iParam0)//Position - 0x5823
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
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), false) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), false)) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_marksmanrifle"), false))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

int func_168(int iParam0)//Position - 0x5A71
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_171() && !func_170()) || func_169(PLAYER::PLAYER_ID(), 21)) || func_169(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_47(&(Global_1836844.f_13)))
		{
			if (!func_1(&(Global_1836844.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_46(&(Global_1836844.f_13));
		}
	}
	else if (BitTest(Global_1892703[iParam0 /*599*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 9);
}

bool func_169(int iParam0, int iParam1)//Position - 0x5B0D
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

bool func_170()//Position - 0x5B23
{
	return Global_1574582.f_1;
}

bool func_171()//Position - 0x5B31
{
	return Global_1574582;
}

void func_172()//Position - 0x5B3D
{
	if (!BitTest(uLocal_121, 6))
	{
		HUD::CLEAR_ALL_HELP_MESSAGES();
		func_473(1, 1);
		AUDIO::STOP_SOUND(iLocal_129);
		MISC::CLEAR_BIT(&uLocal_121, 4);
		func_176();
		func_174();
		HUD::_SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL(0f, false, 21);
		MISC::SET_BIT(&uLocal_121, 6);
		func_173();
	}
}

void func_173()//Position - 0x5B83
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_7 = 0;
}

void func_174()//Position - 0x5B99
{
	if (Global_2676213.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_175();
	}
}

void func_175()//Position - 0x5BB2
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2676213.f_6))
	{
		if (!Global_2676213.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2676213 = { Var0 };
	Global_2676213.f_6 = -1;
}

void func_176()//Position - 0x5C0F
{
	struct<6> Var0;
	
	if (Global_2667225.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2667225.f_490 = { Var0 };
	}
}

void func_177()//Position - 0x5C34
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 0))
	{
		if (func_7(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 0);
			return;
		}
		if (func_168(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 0);
			return;
		}
		func_246(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_1517.f_6 = (Local_1517.f_6 + iVar0);
			if (!Global_262145.f_11972)
			{
				func_245(10, Local_1517.f_6);
			}
			Global_2727753 = iVar0;
			if (func_244())
			{
				func_232(-1468524125, iVar0, &uVar3, 0, 1, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_1517.f_7 = (Local_1517.f_7 + iVar1);
			func_231();
			func_178(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 0);
	}
}

int func_178(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x5D2B
{
	return func_179(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_179(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x5D4D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_189(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
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
				func_185(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_180(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_180(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x5DE0
{
	struct<3> Var0;
	
	Var0 = { func_183(iParam0, 1) };
	if (iParam0 == func_182(PLAYER::PLAYER_PED_ID()))
	{
		func_181(1);
	}
	func_185(Var0, iParam1, 0, sParam2, iParam3);
}

void func_181(int iParam0)//Position - 0x5E14
{
	Global_2703735.f_1568 = iParam0;
}

int func_182(int iParam0)//Position - 0x5E25
{
	return iParam0;
}

Vector3 func_183(int iParam0, bool bParam1)//Position - 0x5E2F
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
	if (iParam0 == func_184(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
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

int func_184(int iParam0)//Position - 0x5EF3
{
	return iParam0;
}

void func_185(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x5EFD
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
			Global_2703735.f_967[iVar1 /*30*/].f_4 = func_188(Global_2703735.f_967[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703735.f_967[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2703735.f_967[iVar1 /*30*/].f_3 = iParam1;
			Global_2703735.f_967[iVar1 /*30*/].f_8 = iParam2;
			Global_2703735.f_967[iVar1 /*30*/].f_9 = func_187();
			Global_2703735.f_967[iVar1 /*30*/].f_10 = func_186();
			StringCopy(&(Global_2703735.f_967[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2703735.f_967[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_186()//Position - 0x6014
{
	if (Global_2703735.f_1568)
	{
		Global_2703735.f_1568 = 0;
		return 1;
	}
	Global_2703735.f_1568 = 0;
	return 0;
}

var func_187()//Position - 0x603E
{
	var uVar0;
	
	uVar0 = Global_2703735.f_1570;
	Global_2703735.f_1570 = 1;
	return uVar0;
}

float func_188(struct<3> Param0, var uParam1, var uParam2)//Position - 0x6059
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

var func_189(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x60F2
{
	var uVar0;
	
	uVar0 = func_190(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_190(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x6115
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_223();
	if (func_222(sParam2))
	{
	}
	if (func_221())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_219(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_218(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_216(0, &iVar1);
					break;
				
				case 3:
					func_216(1, &iVar1);
					break;
				
				case 1:
					func_214(&iVar1);
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
			func_211(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_200((func_210(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_2 != -1)
				{
					func_211(1166, iVar1, -1);
				}
				func_195(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_191((func_193(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_191((func_193(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_191(int iParam0)//Position - 0x6280
{
	if (func_221())
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_5 = iParam0;
		func_192(joaat("mpply_globalxp"), iParam0);
	}
}

void func_192(int iParam0, int iParam1)//Position - 0x62AB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_193(bool bParam0)//Position - 0x62C7
{
	if (bParam0 > -1)
	{
		if (func_12(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_194(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853348[bParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return func_194(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_194(int iParam0)//Position - 0x6318
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

void func_195(int iParam0)//Position - 0x6336
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_143(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_198(func_199(&Var0));
			if (iVar1 == 0)
			{
				func_197(&Global_1659614, iParam0);
				func_196(joaat("mpply_crew_local_xp_0"), Global_1659614);
			}
			else if (iVar1 == 1)
			{
				func_197(&Global_1659615, iParam0);
				func_196(joaat("mpply_crew_local_xp_1"), Global_1659615);
			}
			else if (iVar1 == 2)
			{
				func_197(&Global_1659616, iParam0);
				func_196(joaat("mpply_crew_local_xp_2"), Global_1659616);
			}
			else if (iVar1 == 3)
			{
				func_197(&Global_1659617, iParam0);
				func_196(joaat("mpply_crew_local_xp_3"), Global_1659617);
			}
			else if (iVar1 == 4)
			{
				func_197(&Global_1659618, iParam0);
				func_196(joaat("mpply_crew_local_xp_4"), Global_1659618);
			}
		}
	}
}

void func_196(int iParam0, int iParam1)//Position - 0x640A
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

void func_197(var uParam0, int iParam1)//Position - 0x652F
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_198(int iParam0)//Position - 0x6540
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

int func_199(var* uParam0)//Position - 0x659D
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

void func_200(int iParam0, int iParam1, int iParam2)//Position - 0x65C0
{
	if (func_221())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10069 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1659759[func_209(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1659759[func_209(-1)])
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
		if (func_208(PLAYER::PLAYER_ID()))
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_1 = iParam0;
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_6 = func_206(iParam0, 1);
		}
		func_205(640, iParam0, -1, 1);
		func_204(641, func_206(iParam0, 1), -1, 1, 0);
		Global_1659759[func_209(-1)] = iParam0;
		func_201(-1109644434, 7, 0);
	}
}

void func_201(int iParam0, int iParam1, int iParam2)//Position - 0x66E6
{
	int iVar0;
	
	if (func_203(iParam1, iParam2))
	{
		iVar0 = func_202();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_202()//Position - 0x6713
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

int func_203(int iParam0, var uParam1)//Position - 0x6748
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

void func_204(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x67CE
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_209(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_205(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x67FE
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_209(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_209(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1659693[func_209(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1659699[func_209(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1659705[func_209(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1659711[func_209(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1659657[func_209(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1659663[func_209(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1659669[func_209(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1659675[func_209(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1659681[func_209(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1659627[func_209(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1659633[func_209(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1659639[func_209(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1659645[func_209(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1659651[func_209(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1659717[func_209(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1659723[func_209(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1659729[func_209(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1659735[func_209(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1659741[func_209(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1659747[func_209(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1659753[func_209(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1659759[func_209(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1659765[func_209(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 11391:
			Global_2869950[func_209(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1659771[func_209(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1659777[func_209(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1659783[func_209(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1659789[func_209(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1659795[func_209(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1659801[func_209(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2869985[func_209(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2869994[func_209(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2869988[func_209(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2869997[func_209(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2869991[func_209(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2870000[func_209(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2870003[func_209(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2870006[func_209(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2870009[func_209(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2870012[func_209(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2870015[func_209(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2870018[func_209(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2870021[func_209(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2870024[func_209(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2870027[func_209(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2870030[func_209(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2870033[func_209(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2870036[func_209(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2870039[func_209(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2870042[func_209(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2870045[func_209(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_206(int iParam0, bool bParam1)//Position - 0x7319
{
	if (bParam1)
	{
	}
	return func_207(iParam0, 0);
}

int func_207(int iParam0, int iParam1)//Position - 0x732D
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

int func_208(int iParam0)//Position - 0x73EC
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

int func_209(int iParam0)//Position - 0x740E
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
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

int func_210(int iParam0)//Position - 0x7442
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1659759[func_209(-1)];
			}
			else if (func_208(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[func_209(-1)];
	}
	return 0;
}

void func_211(int iParam0, int iParam1, int iParam2)//Position - 0x749F
{
	int iVar0;
	
	iVar0 = func_213(iParam0, func_209(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_212(iParam0))
	{
		func_204(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_205(iParam0, iVar0, iParam2, 1);
	}
}

int func_212(int iParam0)//Position - 0x74E1
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

int func_213(int iParam0, int iParam1, int iParam2)//Position - 0x77AB
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_209(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_214(int iParam0)//Position - 0x77E8
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
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_76(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_144(PLAYER::PLAYER_ID(), bVar5))
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
		iVar6 = SYSTEM::ROUND((func_215(*iParam0, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_215(*iParam0, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_215(int iParam0, int iParam1)//Position - 0x78D3
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_216(bool bParam0, int iParam1)//Position - 0x78F4
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
						if (func_144(PLAYER::PLAYER_ID(), bVar4))
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
					if (func_217(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_144(PLAYER::PLAYER_ID(), bVar4))
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
		iVar5 = SYSTEM::ROUND((func_215(*iParam1, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_215(*iParam1, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_217(int iParam0, bool bParam1)//Position - 0x7A0C
{
	return SYSTEM::VDIST(func_38(iParam0), func_38(bParam1));
	return 0f;
}

int func_218(int iParam0)//Position - 0x7A28
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_215(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_219(int iParam0)//Position - 0x7A5F
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_210(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_210(PLAYER::PLAYER_ID());
		}
	}
	if (func_220(8000, 0, 0) > 0)
	{
		if (func_220(8000, 0, 0) < (iParam0 + func_210(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_220(8000, 0, 0) - func_210(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_220(int iParam0, bool bParam1, int iParam2)//Position - 0x7AC3
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

int func_221()//Position - 0x7AEB
{
	return 1;
}

int func_222(char* sParam0)//Position - 0x7AF4
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

int func_223()//Position - 0x7B2D
{
	int iVar0;
	
	if (func_230(PLAYER::PLAYER_ID()) || func_229(PLAYER::PLAYER_ID()))
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
	else if (func_227() || func_224(PLAYER::PLAYER_ID()))
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

int func_224(int iParam0)//Position - 0x7BC5
{
	return func_225(func_226(iParam0));
}

int func_225(int iParam0)//Position - 0x7BD7
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x7BF1
{
	if (func_117(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

bool func_227()//Position - 0x7C14
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_64();
	}
	return func_228(Global_4718592.f_116524);
}

int func_228(int iParam0)//Position - 0x7C38
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

bool func_229(int iParam0)//Position - 0x7C72
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_230(int iParam0)//Position - 0x7C87
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

void func_231()//Position - 0x7C9C
{
	Global_2727090 = 1;
}

void func_232(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x7CA9
{
	int iVar0;
	
	if (!func_244())
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
				func_233(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_233(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_233(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_233(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_233(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x87DD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_244())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_16()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_240(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_239(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_234(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x898A
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_235(iParam0);
	}
}

void func_235(int iParam0)//Position - 0x89C2
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_244())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_238(iParam0))
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
		func_236(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_236(var uParam0)//Position - 0x8A16
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
	func_237(&(uParam0->f_14));
	func_237(&(uParam0->f_14.f_13));
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

void func_237(var uParam0)//Position - 0x8B22
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

int func_238(int iParam0)//Position - 0x8B6A
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_239(int iParam0, int iParam1)//Position - 0x8B95
{
	Global_2727893 = iParam1;
	Global_2727892 = iParam0;
}

int func_240(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x8BA9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_244())
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
				func_241(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_241(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x8CE6
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
	iVar1 = func_243(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_242();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar1);
	}
}

void func_242()//Position - 0x8D78
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_243(bool bParam0)//Position - 0x8D88
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_244()//Position - 0x8DA0
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_245(int iParam0, int iParam1)//Position - 0x8DB7
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

void func_246(var uParam0, var uParam1)//Position - 0x8E29
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(NETWORK::PARTICIPANT_ID_TO_INT(), 1))
	{
		iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_150.f_1 - iLocal_119)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_11907)
		{
			iVar1 = Global_262145.f_11907;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_284() * iVar1);
		*uParam1 = (func_283() * iVar1);
		fVar2 = func_282();
		if (fVar2 > 0f && !BitTest(Local_150.f_2, 0))
		{
			iVar3 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_281())
			{
				iVar3 = func_281();
			}
			iVar4 = Local_150.f_51;
			if (iVar4 > func_280())
			{
				iVar4 = func_280();
			}
			*uParam0 = (*uParam0 + SYSTEM::ROUND((IntToFloat(func_273(func_279(), func_278(), iVar3, fVar2, func_277(), func_276(), func_275(), iVar4)) * Global_262145.f_11920)));
			*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_273(func_272(), func_271(), iVar3, fVar2, func_277(), func_276(), func_275(), iVar4)) * Global_262145.f_11921)));
		}
		else
		{
			func_269(1);
		}
	}
	else
	{
		func_269(0);
	}
	func_247(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_247(var uParam0, int iParam1)//Position - 0x8F6E
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_268())
		{
			if (func_267(0))
			{
				if (!func_263(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_262()))
					{
						if (func_261() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_261());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_259(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_252("GB_BCUT_TICK1", func_262(), iVar0, 0, 0, 1);
						}
						func_251(20);
						func_248(func_262(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_248(bool bParam0, int iParam1, int iParam2)//Position - 0x900E
{
	struct<8> Var0;
	
	if (func_12(bParam0, 0, 1))
	{
		Var0.f_0 = 1146470621;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_250(bParam0);
		func_249(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_243(bParam0));
	}
}

void func_249(var uParam0, var uParam1)//Position - 0x9064
{
	*uParam0 = Global_1920255.f_9;
	*uParam1 = Global_1920255.f_10;
}

var func_250(bool bParam0)//Position - 0x907E
{
	return Global_1892703[bParam0 /*599*/].f_510;
}

void func_251(int iParam0)//Position - 0x9092
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_7[iVar0]), iVar1);
}

int func_252(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x90BB
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bParam1) || iParam5)
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
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_257(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_253(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_253(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x9153
{
	int iVar0;
	
	if ((!func_256() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_14(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_254(iParam2);
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

int func_254(int iParam0)//Position - 0x925B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			func_255(iVar0);
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

void func_255(int iParam0)//Position - 0x92BD
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_256()//Position - 0x92F6
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_257(char* sParam0)//Position - 0x9307
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_258(&cVar0);
}

var func_258(char[4] cParam0)//Position - 0x932B
{
	return cParam0;
}

void func_259(int iParam0, bool bParam1)//Position - 0x9335
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_260(1);
	}
	else
	{
		iVar1 = func_260(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_260(bool bParam0)//Position - 0x9367
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12862;
}

int func_261()//Position - 0x938D
{
	return Global_262145.f_12861;
}

bool func_262()//Position - 0x939C
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
}

bool func_263(bool bParam0)//Position - 0x93B1
{
	return func_264(PLAYER::PLAYER_ID(), bParam0);
}

int func_264(bool bParam0, bool bParam1)//Position - 0x93C3
{
	return func_265(bParam0, bParam1, 1);
}

int func_265(int iParam0, bool bParam1, int iParam2)//Position - 0x93D4
{
	int iVar0;
	
	if (iParam0 == func_107())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_266(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_107() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_266(bool bParam0, int iParam1)//Position - 0x9430
{
	if (bParam0 != func_107())
	{
		if (Global_1892703[bParam0 /*599*/].f_10 != func_107())
		{
			if (Global_1892703[bParam0 /*599*/].f_10 == bParam0 && Global_1892703[bParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_267(bool bParam0)//Position - 0x947F
{
	return func_89(PLAYER::PLAYER_ID(), bParam0);
}

bool func_268()//Position - 0x9491
{
	return func_90(PLAYER::PLAYER_ID());
}

void func_269(bool bParam0)//Position - 0x94A1
{
	if (bParam0)
	{
		if (func_270(1))
		{
			MISC::SET_BIT(&Global_1836869, 1);
		}
	}
	else if (func_270(2))
	{
		MISC::SET_BIT(&Global_1836869, 2);
	}
}

int func_270(int iParam0)//Position - 0x94D3
{
	var uVar0;
	
	uVar0 = func_213(2537, -1, 0);
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

int func_271()//Position - 0x9580
{
	return Global_262145.f_11407;
}

int func_272()//Position - 0x958F
{
	return Global_262145.f_11405;
}

int func_273(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)//Position - 0x959E
{
	return func_274(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_274(int iParam0, int iParam1, int iParam2)//Position - 0x95CF
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

float func_275()//Position - 0x9617
{
	return Global_262145.f_11410;
}

float func_276()//Position - 0x9626
{
	return Global_262145.f_11409;
}

float func_277()//Position - 0x9635
{
	return Global_262145.f_11408;
}

int func_278()//Position - 0x9644
{
	return Global_262145.f_11406;
}

int func_279()//Position - 0x9653
{
	return Global_262145.f_11404;
}

int func_280()//Position - 0x9662
{
	return Global_262145.f_11812;
}

int func_281()//Position - 0x9671
{
	return Global_262145.f_11811;
}

var func_282()//Position - 0x9680
{
	if (func_20(0))
	{
		return Global_262145.f_11431;
	}
	if (func_20(1))
	{
		return Global_262145.f_11432;
	}
	if (func_20(2))
	{
		return Global_262145.f_11433;
	}
	return Global_262145.f_11434;
}

int func_283()//Position - 0x96CE
{
	return Global_262145.f_11403;
}

int func_284()//Position - 0x96DD
{
	return Global_262145.f_11402;
}

void func_285()//Position - 0x96EC
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (!BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 1) && (func_297() || BitTest(Local_150.f_2, 0)))
	{
		if (func_67(func_296()))
		{
			func_295();
		}
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(Local_150.f_2, 0))
			{
				if (func_337(0))
				{
					iVar2 = Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4;
					func_291(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_289(64, func_290(Local_150.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_404(Local_150.f_3), 1, 2, 0);
						}
						else if (func_288())
						{
							func_289(69, func_290(Local_150.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_404(Local_150.f_3), 1, 2, 0);
						}
						else
						{
							func_289(64, func_290(Local_150.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_404(Local_150.f_3), 1, 2, 0);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_289(67, func_290(Local_150.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_404(Local_150.f_3), 1, 2, 0);
						}
						else if (func_288())
						{
							func_289(75, func_290(Local_150.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_404(Local_150.f_3), 1, 2, 0);
						}
						else
						{
							func_289(67, func_290(Local_150.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_404(Local_150.f_3), 1, 2, 0);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_289(67, func_290(Local_150.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_404(Local_150.f_3), 1, 2, 0);
						}
						else if (func_288())
						{
							func_289(75, func_290(Local_150.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_404(Local_150.f_3), 1, 2, 0);
						}
						else
						{
							func_289(67, func_290(Local_150.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_404(Local_150.f_3), 1, 2, 0);
						}
					}
					else
					{
						iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_150.f_4[0]);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
						{
							iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
							if (Local_1516[Local_150.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_1516[Local_150.f_4[0] /*12*/].f_4;
							func_291(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_287(76, func_107(), func_290(Local_150.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_404(Local_150.f_3), -1, fVar1, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
							else if (func_288())
							{
								func_287(77, func_107(), func_290(Local_150.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_404(Local_150.f_3), iVar0, -1082130432, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
							else
							{
								func_287(76, func_107(), func_290(Local_150.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_404(Local_150.f_3), iVar0, -1082130432, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
						}
					}
				}
				else
				{
					func_52(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1, 0);
				}
			}
			else
			{
				func_51("", "", 1);
			}
			MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 1);
			func_286(133);
		}
	}
}

void func_286(int iParam0)//Position - 0x9AA8
{
	if (iParam0 == iParam0)
	{
	}
}

int func_287(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)//Position - 0x9AB7
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
	func_110(iParam0, &Var0, iParam7, sParam3, sParam4);
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

int func_288()//Position - 0x9B46
{
	return 0;
}

int func_289(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x9B4F
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
	func_110(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_108(&(Var0.f_69), iParam10);
	}
	return func_53(&Var0);
}

char* func_290(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x9BE0
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

int func_291(int iParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x9D6D
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_292(Local_150.f_3, iParam2) / 10f);
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

float func_292(int iParam0, int iParam1)//Position - 0x9DB4
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
				return func_294(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_293(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_293(float fParam0)//Position - 0x9E57
{
	return (fParam0 / 1.609344f);
}

float func_294(float fParam0)//Position - 0x9E67
{
	return (fParam0 / 0.3048f);
}

void func_295()//Position - 0x9E77
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			func_108(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_296()//Position - 0x9EC2
{
	return Global_2703735.f_2400[0 /*80*/].f_1;
}

var func_297()//Position - 0x9ED6
{
	return BitTest(Global_1836844.f_1, 25);
}

int func_298(var uParam0, bool bParam1)//Position - 0x9EE7
{
	bool bVar0;
	
	if ((((*uParam0 > 0 && !func_309()) && !(func_117(PLAYER::PLAYER_ID(), 0) && (func_113(PLAYER::PLAYER_ID()) || func_308(PLAYER::PLAYER_ID())))) && !func_306(PLAYER::PLAYER_ID())) && !func_305(PLAYER::PLAYER_ID()))
	{
		func_304();
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
				MISC::SET_BIT(&(Global_1836844.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2815059.f_4657), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_303(uParam0, 1);
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
				func_300();
				func_303(uParam0, 2);
			}
			break;
		
		case 2:
			func_300();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_299("AMEV_LBD_HELP"))
				{
					HUD::CLEAR_HELP(true);
				}
				func_303(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
				func_303(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
			return 1;
	}
	return 0;
}

bool func_299(char* sParam0)//Position - 0xA071
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_300()//Position - 0xA084
{
	if (BitTest(Global_2815059.f_4657, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2815059.f_4657), 1);
			func_302("AMEV_LBD_HELP", -1);
			func_301(1);
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 0);
		}
	}
}

void func_301(int iParam0)//Position - 0xA101
{
	HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_309())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_302(char* sParam0, int iParam1)//Position - 0xA12F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

void func_303(var uParam0, int iParam1)//Position - 0xA146
{
	*uParam0 = iParam1;
}

void func_304()//Position - 0xA153
{
	Global_2727091 = 1;
}

int func_305(int iParam0)//Position - 0xA160
{
	if (iParam0 != func_107())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 4);
	}
	return 0;
}

int func_306(bool bParam0)//Position - 0xA185
{
	if (bParam0 != func_107())
	{
		if (func_12(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[bParam0 /*453*/].f_318.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_307(int iParam0)//Position - 0xA1CB
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

bool func_308(bool bParam0)//Position - 0xA652
{
	return func_112(bParam0, 19);
}

bool func_309()//Position - 0xA662
{
	return Global_2703735.f_2400[0 /*80*/].f_1 != 0;
}

void func_310()//Position - 0xA678
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
	
	if (Local_150.f_4[0] > -1)
	{
		iVar11 = 0;
		bVar12 = (func_334() && !func_105(PLAYER::PLAYER_ID()));
		iVar7 = 0;
		while (iVar7 < 3)
		{
			bVar0[iVar7] = func_107();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_150.f_4[iVar7] > -1)
			{
				iVar18 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_150.f_4[iVar7]);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar18))
				{
					bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar18);
					if (func_12(bVar1, 0, 1))
					{
						if (!func_14(bVar1, 0))
						{
							if (Local_1516[Local_150.f_4[iVar7] /*12*/].f_4 != 0)
							{
								bVar0[iVar15] = bVar1;
								func_291(&(uVar2[iVar15]), &(uVar3[iVar15]), Local_1516[Local_150.f_4[iVar7] /*12*/].f_4, 1);
								iVar15++;
								if (func_267(1))
								{
									if (func_89(bVar1, 1))
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
		if (func_105(PLAYER::PLAYER_ID()))
		{
			iVar19 = func_332();
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
		func_291(&iVar4, &fVar9, iLocal_123, 1);
		func_291(&iVar5, &fVar10, Local_1516[iVar8 /*12*/].f_4, 1);
		iVar22 = func_28(0);
		iVar23 = func_544(&(Local_150.f_39), 0, 0);
		iVar6 = func_542(0, (iVar22 - iVar23));
		if (func_17(-1, 0))
		{
			func_329(iVar6);
		}
		if (iVar6 > 30000)
		{
			iVar13 = 1;
		}
		else
		{
			iVar13 = 6;
		}
		if (BitTest(uLocal_121, 2))
		{
			iVar14 = 2000;
		}
		else
		{
			iVar14 = 0;
		}
		if (func_334() || Local_150.f_3 == 6)
		{
			iVar16 = 2;
		}
		else
		{
			iVar16 = 1;
		}
		if (Local_150.f_37 >= 4)
		{
			iVar6 = 0;
		}
		if (func_18())
		{
			func_325(bVar0[0], bVar0[1], bVar0[2], uVar3[0], uVar3[1], uVar3[2], fVar9, fVar10, iVar6, func_290(Local_150.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_326(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else if (func_288())
		{
			func_324(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, &iVar11, iVar13, bVar12, iVar14, func_326(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else
		{
			func_315(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, func_290(Local_150.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_326(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		func_311();
	}
}

void func_311()//Position - 0xA968
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_314();
	if (fVar0 >= 0f)
	{
		if (Local_150.f_37 == 3)
		{
			if (func_12(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
					{
						func_313(iVar1, &fLocal_127);
						fVar2 = (fVar0 + fLocal_127);
						HUD::_SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL(fVar2, true, 21);
						func_312(fVar0);
						return;
					}
				}
			}
		}
		if (func_299("AMCH_FLYLOW"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (BitTest(uLocal_121, 4))
		{
			AUDIO::STOP_SOUND(iLocal_129);
			MISC::CLEAR_BIT(&uLocal_121, 4);
		}
		HUD::_SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL(0f, false, 21);
	}
}

void func_312(float fParam0)//Position - 0xAA14
{
	float fVar0;
	
	if (STATS::_STAT_GET_HEIGHT_ABOVE_GROUND(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_545(6);
			if (!BitTest(uLocal_121, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_129, "Altitude_Warning", "EXILE_1", true);
				MISC::SET_BIT(&uLocal_121, 4);
			}
		}
		else
		{
			if (func_299("AMCH_FLYLOW"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (BitTest(uLocal_121, 4))
			{
				AUDIO::STOP_SOUND(iLocal_129);
				MISC::CLEAR_BIT(&uLocal_121, 4);
			}
		}
	}
}

float func_313(int iParam0, float* fParam1)//Position - 0xAA80
{
	float fVar0;
	struct<3> Var1;
	var uVar2;
	
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, fParam1, true, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar2, false, false);
	if (STATS::_STAT_IS_ABOVE_DEEP_WATER())
	{
		func_545(3);
		MISC::SET_BIT(&uLocal_121, 10);
		func_27(&uLocal_117, 0, 0);
	}
	else if (BitTest(uLocal_121, 10))
	{
		if (func_1(&uLocal_117, 2000, 0))
		{
			MISC::CLEAR_BIT(&uLocal_121, 10);
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

float func_314()//Position - 0xAB13
{
	switch (Local_150.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_315(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)//Position - 0xAB42
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_321(0) == 0)
	{
		return;
	}
	func_320();
	iVar1 = 0;
	if (((Global_2726607[0] != iParam0 || Global_2726607[1] != iParam1) || Global_2726607[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2726607[0] = iParam0;
	Global_2726607[1] = iParam1;
	Global_2726607[2] = iParam2;
	Global_2726607[3] = 0;
	Global_2726607[4] = 0;
	if (Global_2726607[0] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[0]);
			Global_2726613[0 /*16*/] = { func_319(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_316(iParam3, &(Global_2726613[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[1] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[1]);
			Global_2726613[1 /*16*/] = { func_319(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_316(iParam4, &(Global_2726613[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[2] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[2]);
			Global_2726613[2 /*16*/] = { func_319(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_316(iParam5, &(Global_2726613[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_316(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_107())
			{
				if (func_168(PLAYER::PLAYER_ID()) == 0)
				{
					func_316(iParam7, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_168(PLAYER::PLAYER_ID()) == 0)
			{
				func_316(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_168(PLAYER::PLAYER_ID()) == 0)
			{
				func_316(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_222(sParam14))
	{
		sVar2 = sParam14;
	}
	func_149(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_148();
}

void func_316(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0xAE11
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
			if (func_151(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_150(6, iVar0);
		Global_1649593.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4041.f_183[iVar0] = iParam3;
		Global_1649593.f_4041.f_172[iVar0] = iParam2;
		Global_1649593.f_4041.f_260[iVar0] = iParam4;
		Global_1649593.f_4041.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_4041.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_4041.f_443[iVar0] = iParam7;
		Global_1649593.f_4041.f_454[iVar0] = fParam8;
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
		if (iParam15 == 5 && func_318())
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
			if (func_317())
			{
				Global_1649593.f_1176 = 1;
			}
		}
	}
}

int func_317()//Position - 0xB082
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

int func_318()//Position - 0xB0A6
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_319(int iParam0, char* sParam1)//Position - 0xB0E4
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_320()//Position - 0xB186
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2727094 = 1;
}

int func_321(bool bParam0)//Position - 0xB1A9
{
	if (func_323())
	{
		return 0;
	}
	if (func_322())
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

bool func_322()//Position - 0xB1E0
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192 != 0;
}

bool func_323()//Position - 0xB1F7
{
	return BitTest(Global_2621446, 12);
}

void func_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0xB206
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_321(0) == 0)
	{
		return;
	}
	func_320();
	iVar1 = 0;
	if (((Global_2726607[0] != iParam0 || Global_2726607[1] != iParam1) || Global_2726607[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2726607[0] = iParam0;
	Global_2726607[1] = iParam1;
	Global_2726607[2] = iParam2;
	Global_2726607[3] = 0;
	Global_2726607[4] = 0;
	if (Global_2726607[0] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[0]);
			Global_2726613[0 /*16*/] = { func_319(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_149(iParam3, &(Global_2726613[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
		}
	}
	if (Global_2726607[1] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[1]);
			Global_2726613[1 /*16*/] = { func_319(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_149(iParam4, &(Global_2726613[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
		}
	}
	if (Global_2726607[2] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[2]);
			Global_2726613[2 /*16*/] = { func_319(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_149(iParam5, &(Global_2726613[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
		}
	}
	if (bParam11)
	{
		func_149(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iParam14)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_107())
			{
				if (func_168(PLAYER::PLAYER_ID()) == 0)
				{
					func_149(iParam7, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 1:
			if (func_168(PLAYER::PLAYER_ID()) == 0)
			{
				func_149(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 2:
			if (func_168(PLAYER::PLAYER_ID()) == 0)
			{
				func_149(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_222(sParam13))
	{
		sVar2 = sParam13;
	}
	func_149(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
	*iParam9 = 0;
	func_148();
}

void func_325(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)//Position - 0xB490
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_321(0) == 0)
	{
		return;
	}
	func_320();
	iVar1 = 0;
	if (((Global_2726607[0] != iParam0 || Global_2726607[1] != iParam1) || Global_2726607[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2726607[0] = iParam0;
	Global_2726607[1] = iParam1;
	Global_2726607[2] = iParam2;
	Global_2726607[3] = 0;
	Global_2726607[4] = 0;
	if (Global_2726607[0] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[0]);
			Global_2726613[0 /*16*/] = { func_319(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_316(-1, &(Global_2726613[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[1] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[1]);
			Global_2726613[1 /*16*/] = { func_319(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_316(-1, &(Global_2726613[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[2] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[2]);
			Global_2726613[2 /*16*/] = { func_319(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_316(-1, &(Global_2726613[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_316(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_107())
			{
				if (func_168(PLAYER::PLAYER_ID()) == 0)
				{
					func_316(-1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_168(PLAYER::PLAYER_ID()) == 0)
			{
				func_316(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_168(PLAYER::PLAYER_ID()) == 0)
			{
				func_316(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_222(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_149(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	}
	*iParam10 = 0;
	func_148();
}

char* func_326()//Position - 0xB76A
{
	return "HUD_COUNTDOWN";
	switch (func_328(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_327())
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

int func_327()//Position - 0xB914
{
	if (func_328(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2815059.f_5116;
	}
	return -1;
}

int func_328(int iParam0)//Position - 0xB937
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/];
	}
	return -1;
}

void func_329(int iParam0)//Position - 0xB956
{
	if (func_331(PLAYER::PLAYER_ID()) || func_330(PLAYER::PLAYER_ID()) == 146)
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

int func_330(bool bParam0)//Position - 0xBD37
{
	if (bParam0 != func_107() && func_12(bParam0, 1, 1))
	{
		return Global_2689235[bParam0 /*453*/].f_318.f_16;
	}
	return -1;
}

int func_331(int iParam0)//Position - 0xBD68
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 19;
			}
		}
	}
	return 0;
}

var func_332()//Position - 0xBDAF
{
	if (ENTITY::DOES_ENTITY_EXIST(func_333()))
	{
		return func_333();
	}
	return func_102();
}

var func_333()//Position - 0xBDCD
{
	return Global_2621446.f_3;
}

int func_334()//Position - 0xBDDB
{
	switch (Local_150.f_3)
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

void func_335()//Position - 0xBE34
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
		Local_171.f_534[iVar0 /*42*/] = { Var1 };
		Local_171.f_534[iVar0 /*42*/].f_1 = func_107();
		if (Local_150.f_4[iVar0] > -1)
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_150.f_4[iVar0]);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (!func_14(bVar2, 0))
				{
					Local_171.f_534[iVar0 /*42*/] = Local_150.f_4[iVar0];
					Local_171.f_534[iVar0 /*42*/].f_1 = bVar2;
					Local_171.f_534[iVar0 /*42*/].f_9 = Local_1516[Local_150.f_4[iVar0] /*12*/].f_4;
					Local_171.f_534[iVar0 /*42*/].f_31 = -1;
					Local_171.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_336()//Position - 0xBF21
{
	MISC::SET_BIT(&(Global_2815059.f_1797), 19);
}

int func_337(int iParam0)//Position - 0xBF36
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_150.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_1516[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_338()//Position - 0xBF6B
{
}

void func_339()//Position - 0xBF73
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_291(&iVar1, &fVar2, iLocal_123, 1);
	switch (Local_150.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_341(sVar0, fVar2 >= 70f);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = func_340(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = STATS::_STAT_GET_CHALLENGE_HIGHEST_SPEED();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_341(sVar0, bVar3);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = SYSTEM::TO_FLOAT(iVar1);
				fVar2 = func_340(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_340(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_128 != iLocal_123)
			{
				if (iLocal_123 > 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_130, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", false);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_130, "Count", SYSTEM::TO_FLOAT(iVar1));
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", false);
				}
			}
			iLocal_128 = iLocal_123;
			break;
	}
	if (func_20(0))
	{
		if (!BitTest(uLocal_121, 3))
		{
			if (func_263(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&uLocal_121, 3);
		}
	}
	else if (BitTest(uLocal_121, 3))
	{
		if (func_263(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&uLocal_121, 3);
	}
}

float func_340(float fParam0, float fParam1)//Position - 0xC12F
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_341(char* sParam0, bool bParam1)//Position - 0xC146
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

void func_342()//Position - 0xC176
{
	int iVar0;
	
	if ((!func_168(PLAYER::PLAYER_ID()) && !func_14(PLAYER::PLAYER_ID(), 0)) && func_12(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = func_368();
		if (iVar0 != Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_120) || func_367(iVar0, iLocal_120))
			{
				if (!func_366() || func_1(&uLocal_109, 1000, 0))
				{
					func_27(&uLocal_109, 0, 0);
					iLocal_120 = iVar0;
					Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4 = iVar0;
					func_345();
					if (iLocal_119 == 0)
					{
						iLocal_119 = NETWORK::GET_NETWORK_TIME();
					}
					if (Local_1517.f_11 == 0)
					{
						Local_1517.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
				}
			}
		}
		iLocal_123 = func_343();
	}
}

int func_343()//Position - 0xC238
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_150.f_3)
	{
		case 0:
			fVar1 = STATS::_STAT_GET_CHALLENGE_LONGEST_JUMP();
			break;
		
		case 1:
			fVar1 = STATS::_STAT_GET_CHALLENGE_LONGEST_FREEFALL();
			break;
		
		case 2:
			fVar1 = STATS::_STAT_GET_CHALLENGE_HIGHEST_SPEED();
			break;
		
		case 3:
			fVar1 = STATS::_STAT_GET_CHALLENGE_LONGEST_STOPPIE();
			break;
		
		case 4:
			fVar1 = STATS::_STAT_GET_CHALLENGE_LONGEST_WHEELIE();
			break;
		
		case 5:
			fVar1 = STATS::_STAT_GET_CHALLENGE_NO_CRASHES();
			break;
		
		case 8:
			iVar0 = STATS::_STAT_GET_CHALLENGE_NEAR_MISSES();
			break;
		
		case 9:
			fVar1 = STATS::_STAT_GET_CHALLENGE_REVERSE_DRIVING();
			break;
		
		case 11:
			fVar1 = STATS::_STAT_GET_CHALLENGE_LOW_FLYING();
			break;
		
		case 12:
			fVar1 = STATS::_STAT_GET_CHALLENGE_LOW_FLYING();
			break;
		
		case 13:
			fVar1 = STATS::_STAT_GET_LONGEST_BAIL();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	iVar2 = MISC::ABSI(iVar0);
	func_344(&iVar2);
	if (iVar2 == iLocal_122)
	{
		if (func_21(iVar2, 0))
		{
			if (!BitTest(uLocal_121, 1))
			{
				func_27(&uLocal_111, 0, 0);
				Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2 = func_544(&uLocal_111, 0, 0);
				MISC::SET_BIT(&uLocal_121, 1);
			}
			else if ((func_544(&uLocal_111, 0, 0) % 1000) == 0)
			{
				Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2 = func_544(&uLocal_111, 0, 0);
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_121, 1);
	}
	if ((func_21(iLocal_122, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_113, 2000, 0))
	{
		iVar2 = iLocal_122;
		MISC::SET_BIT(&uLocal_121, 2);
	}
	else
	{
		iLocal_122 = iVar2;
		func_46(&uLocal_113);
		MISC::CLEAR_BIT(&uLocal_121, 2);
	}
	return iVar2;
}

void func_344(int iParam0)//Position - 0xC3E5
{
	switch (Local_150.f_3)
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

void func_345()//Position - 0xC46E
{
	if (!BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 2))
	{
		MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 2);
		func_346(1);
	}
}

void func_346(bool bParam0)//Position - 0xC49C
{
	var uVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
		{
			if (((!func_111(PLAYER::PLAYER_ID()) && !func_7(PLAYER::PLAYER_ID())) && !func_168(PLAYER::PLAYER_ID())) && !func_365(PLAYER::PLAYER_ID()))
			{
				if (func_171())
				{
					func_358(2, 0, 1);
					func_357();
				}
				if (func_355(func_356(func_328(PLAYER::PLAYER_ID()))))
				{
					uVar0 = func_213(2483, -1, 0);
					MISC::CLEAR_BIT(&uVar0, func_356(func_328(PLAYER::PLAYER_ID())));
					func_357();
				}
				if (func_354())
				{
					func_357();
				}
				if (func_328(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
					if (func_353(PLAYER::PLAYER_ID()))
					{
						func_352();
					}
					func_349(func_351(func_328(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
		func_347();
	}
}

void func_347()//Position - 0xC5AB
{
	if (func_348())
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 17);
	}
}

bool func_348()//Position - 0xC5CD
{
	return BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 17);
}

void func_349(int iParam0)//Position - 0xC5E5
{
	int iVar0;
	
	if (Global_262145.f_9035)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_350() /*5567*/].f_681.f_4241[iVar0 /*3*/] == iParam0)
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

int func_350()//Position - 0xC648
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_351(int iParam0)//Position - 0xC655
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

void func_352()//Position - 0xC687
{
	if (!func_348())
	{
		Global_2815059.f_6743 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 17);
	}
}

int func_353(int iParam0)//Position - 0xC6B5
{
	if (func_328(iParam0) == 236 || func_328(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_354()//Position - 0xC6DD
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_355(var uParam0)//Position - 0xC6F7
{
	var uVar0;
	
	uVar0 = func_213(2483, -1, 0);
	return BitTest(uVar0, uParam0);
}

int func_356(int iParam0)//Position - 0xC70F
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

void func_357()//Position - 0xC79E
{
	if (func_354())
	{
		Global_2703735.f_833.f_16 = 1;
	}
}

void func_358(int iParam0, int iParam1, bool bParam2)//Position - 0xC7B7
{
	if (func_171())
	{
		if (iParam1 == 1)
		{
			if (Global_2815059.f_4462 == -1)
			{
				Global_2815059.f_4462 = Global_262145.f_27172;
			}
			func_27(&(Global_2815059.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2815059.f_4465 == -1)
				{
					Global_2815059.f_4465 = Global_262145.f_27173;
				}
				func_27(&(Global_2815059.f_4463), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
				func_364(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
			func_364(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_363()) && !func_359(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_359(int iParam0)//Position - 0xC881
{
	if (func_360(iParam0, 1, 0))
	{
		if (Global_1853348[iParam0 /*834*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_360(int iParam0, bool bParam1, bool bParam2)//Position - 0xC8A6
{
	if (bParam1)
	{
		if (func_361(iParam0))
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

bool func_361(int iParam0)//Position - 0xC8D8
{
	return func_362(iParam0);
}

var func_362(int iParam0)//Position - 0xC8E6
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

bool func_363()//Position - 0xC8FD
{
	return Global_2714762.f_841;
}

void func_364(bool bParam0)//Position - 0xC90C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_171())
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
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_12(PLAYER::PLAYER_ID(), 1, 1))
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

int func_365(int iParam0)//Position - 0xCA05
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

int func_366()//Position - 0xCA71
{
	switch (Local_150.f_3)
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

int func_367(int iParam0, int iParam1)//Position - 0xCAD0
{
	if (Local_150.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_368()//Position - 0xCAEE
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_383())
	{
		if (Local_150.f_3 == 14)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_382(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if ((!func_381(&iVar2, 0) || ENTITY::GET_ENTITY_MODEL(iVar2) != joaat("dodo")) && ENTITY::IS_ENTITY_IN_AIR(iVar2))
				{
					func_374(Local_150.f_3 != 14, 1, 0);
					if (func_373())
					{
						iVar3 = func_372();
						if (iVar3 >= 0)
						{
							if (!BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_8[func_371(iVar3)], func_370(iVar3)))
							{
								iLocal_124++;
								MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_8[func_371(iVar3)]), func_370(iVar3));
							}
						}
					}
					iVar0 = iLocal_124;
				}
			}
		}
		else
		{
			iVar0 = func_369();
		}
	}
	else
	{
		STATS::_STAT_GET_PROGRESS_OF_TRACKED_STAT(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	return MISC::ABSI(iVar0);
}

int func_369()//Position - 0xCBF4
{
	switch (Local_150.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_370(int iParam0)//Position - 0xCC1B
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_371(iParam0) * 31);
}

int func_371(int iParam0)//Position - 0xCC4C
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

int func_372()//Position - 0xCC72
{
	return iLocal_91;
}

int func_373()//Position - 0xCC7C
{
	if (iLocal_98 == 1)
	{
		iLocal_98 = 0;
		return 1;
	}
	return 0;
}

void func_374(bool bParam0, bool bParam1, int iParam2)//Position - 0xCC92
{
	func_376(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_102.f_2 < Local_103.f_2)
		{
			Local_102.f_2 = 0f;
		}
		else
		{
			Local_103.f_2 = 0f;
		}
		if (Local_104.f_2 < Local_105.f_2)
		{
			Local_104.f_2 = 0f;
		}
		else
		{
			Local_105.f_2 = 0f;
		}
	}
	switch (iLocal_92)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_100[iLocal_91 /*3*/]) < fLocal_101)
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0))
							{
								bLocal_93 = true;
								iLocal_92 = 1;
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
							{
								bLocal_94 = true;
								iLocal_92 = 1;
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
					func_375();
				}
				else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					func_375();
				}
				else if (!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !bParam1)
				{
					func_375();
				}
				if (bLocal_93)
				{
					if (iLocal_97)
					{
						if (iLocal_96)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
							{
								func_375();
								iLocal_98 = 1;
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
						{
							iLocal_96 = 1;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
						{
							func_375();
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
					{
						iLocal_97 = 1;
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
					{
						func_375();
					}
				}
				else if (bLocal_94)
				{
					if (iLocal_97)
					{
						if (iLocal_95)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
							{
								func_375();
								iLocal_98 = 1;
							}
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
						{
							iLocal_95 = 1;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
						{
							func_375();
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
					{
						iLocal_97 = 1;
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
					{
						func_375();
					}
				}
			}
			break;
	}
}

void func_375()//Position - 0xD092
{
	bLocal_93 = false;
	bLocal_94 = false;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_92 = 0;
}

void func_376(var uParam0, var uParam1)//Position - 0xD0AC
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_99 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_380(iVar0)) && (uParam1 || !func_379(iVar0)))
		{
			if (func_378(Local_99, Local_100[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = SYSTEM::VDIST(Local_99, Local_100[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_91 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_377(iLocal_91);
}

void func_377(int iParam0)//Position - 0xD142
{
	switch (iParam0)
	{
		case 0:
			Local_102 = { 1103.014f, -233.0374f, 56.13004f };
			Local_103 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_106 = 30f;
			Local_104 = { 1093.589f, -248.5926f, 56.88639f };
			Local_105 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_102 = { 1044.182f, -324.5904f, 49.33408f };
			Local_103 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_106 = 30f;
			Local_104 = { 1007.983f, -320.6159f, 48.4543f };
			Local_105 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_102 = { 916.599f, -419.8782f, 35.62748f };
			Local_103 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_106 = 7f;
			Local_104 = { 912.1362f, -420.5161f, 35.38034f };
			Local_105 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_102 = { 757.7189f, -472.924f, 19.2535f };
			Local_103 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_106 = 20.75f;
			Local_104 = { 744.9114f, -480.7373f, 19.06514f };
			Local_105 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_102 = { 680.3677f, -581.1792f, 14.2145f };
			Local_103 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_106 = 45f;
			Local_104 = { 667.3692f, -610.5356f, 13.85401f };
			Local_105 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_102 = { 644.2497f, -844.7504f, 12.36707f };
			Local_103 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_106 = 25f;
			Local_104 = { 644.3659f, -859.3878f, 12.59677f };
			Local_105 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_102 = { 634.972f, -1011.64f, 10.92594f };
			Local_103 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_106 = 25f;
			Local_104 = { 634.9612f, -1029.123f, 10.61846f };
			Local_105 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_102 = { 645.7223f, -1191.215f, 10.45198f };
			Local_103 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_106 = 50f;
			Local_104 = { 645.7223f, -1228.966f, 10.98015f };
			Local_105 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_102 = { 642.1216f, -1295.73f, 9.005976f };
			Local_103 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_106 = 7f;
			Local_104 = { 644.7772f, -1298.168f, 9.128529f };
			Local_105 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_102 = { 686.5675f, -1444.71f, 9.065001f };
			Local_103 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_106 = 25f;
			Local_104 = { 682.3027f, -1429.872f, 9.890836f };
			Local_105 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_102 = { 718.7617f, -1734.313f, 9.082874f };
			Local_103 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_106 = 30f;
			Local_104 = { 717.5355f, -1748.646f, 9.363478f };
			Local_105 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_102 = { 694.3165f, -2049.806f, 0.009695f };
			Local_103 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_106 = 30f;
			Local_104 = { 693.1836f, -2063.225f, 0.429037f };
			Local_105 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_102 = { 642.6671f, -2494.551f, 0.468485f };
			Local_103 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_106 = 20f;
			Local_104 = { 647.0339f, -2506.202f, 0.583701f };
			Local_105 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_102 = { 691.8235f, -2558.219f, 0.363352f };
			Local_103 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_106 = 10.25f;
			Local_104 = { 695.7928f, -2561.034f, 0.346731f };
			Local_105 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_102 = { 723.6254f, -2562.171f, 0.255647f };
			Local_103 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_106 = 15f;
			Local_104 = { 735.765f, -2561.935f, 0.311182f };
			Local_105 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_102 = { 891.4387f, -2603.12f, 0f };
			Local_103 = { 704.4932f, -2634.793f, 45f };
			fLocal_106 = 20f;
			Local_104 = { 893.2578f, -2616.235f, 0f };
			Local_105 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_102 = { -2669.587f, 2491.96f, 2.043799f };
			Local_103 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_106 = 26.5f;
			Local_104 = { -2687.606f, 2494.868f, 2.608733f };
			Local_105 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_102 = { -1986.173f, 4521.799f, 0f };
			Local_103 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_106 = 17f;
			Local_104 = { -1995.668f, 4531.259f, 0f };
			Local_105 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_102 = { -526.0265f, 4472.442f, 0f };
			Local_103 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_106 = 10f;
			Local_104 = { -519.9281f, 4476.346f, 0f };
			Local_105 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_102 = { 98.1615f, 3384.489f, 45.45169f };
			Local_103 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_106 = 8f;
			Local_104 = { 152.6802f, 3346.793f, 45.02156f };
			Local_105 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_102 = { 147.8606f, 3406.796f, 38.03672f };
			Local_103 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_106 = 14.5f;
			Local_104 = { 130.0916f, 3425.417f, 38.05672f };
			Local_105 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_102 = { 2830.972f, 4967.14f, 34.56013f };
			Local_103 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_106 = 10f;
			Local_104 = { 2826.767f, 4964.185f, 34.10636f };
			Local_105 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_102 = { -151.5764f, 4264.417f, 31.04735f };
			Local_103 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_106 = 10f;
			Local_104 = { -148.3842f, 4261.071f, 31.57409f };
			Local_105 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_102 = { -426.6919f, 2964.272f, 14.848f };
			Local_103 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_106 = 7f;
			Local_104 = { -425.0283f, 2967.861f, 15.22699f };
			Local_105 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_102 = { -192.3414f, 2864.916f, 30.72595f };
			Local_103 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_106 = 10f;
			Local_104 = { -192.0129f, 2871.603f, 29.99943f };
			Local_105 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_102 = { 2539.185f, 2228.772f, 18.6102f };
			Local_103 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_106 = 10f;
			Local_104 = { 2543.708f, 2231.402f, 18.331f };
			Local_105 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_102 = { 2954.087f, 815.7209f, 0.037901f };
			Local_103 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_106 = 35f;
			Local_104 = { 2966.123f, 806.8889f, 0.544056f };
			Local_105 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_102 = { 2329.673f, -459.6648f, 70.24277f };
			Local_103 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_106 = 12f;
			Local_104 = { 2324.752f, -455.5238f, 70.25145f };
			Local_105 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_102 = { 1943.428f, -753.251f, 80.17905f };
			Local_103 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_106 = 7f;
			Local_104 = { 1943.366f, -758.287f, 80.32291f };
			Local_105 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_102 = { -271.2849f, -2414.993f, -10f };
			Local_103 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_106 = 30f;
			Local_104 = { -279.8399f, -2427.212f, -10f };
			Local_105 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_102 = { -1483f, 2691.428f, -10f };
			Local_103 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_106 = 12f;
			Local_104 = { -1478.152f, 2696.688f, -10f };
			Local_105 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_102 = { 222.1519f, -2343.487f, 0.039199f };
			Local_103 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_106 = 12f;
			Local_104 = { 216.959f, -2343.487f, 0.207734f };
			Local_105 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_102 = { 346.4622f, -2244.374f, 0.159779f };
			Local_103 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_106 = 20f;
			Local_104 = { 359.609f, -2244.468f, 0.129684f };
			Local_105 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_102 = { -1859.68f, -322.6357f, 56.16368f };
			Local_103 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_106 = 7.5f;
			Local_104 = { -1860.27f, -327.8634f, 57.543f };
			Local_105 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_102 = { -680.2632f, -600.818f, 69.11289f };
			Local_103 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_106 = 31.5f;
			Local_104 = { -680.6077f, -618.3658f, 69.27496f };
			Local_105 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_102 = { -1468.096f, -591.7158f, 67.05518f };
			Local_103 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_106 = 11.75f;
			Local_104 = { -1474.903f, -591.1215f, 67.08091f };
			Local_105 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_102 = { -1544.958f, -537.1475f, 72.44347f };
			Local_103 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_106 = 11.75f;
			Local_104 = { -1541.008f, -541.5494f, 71.61972f };
			Local_105 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_102 = { 333.2108f, -2727.274f, 20.71663f };
			Local_103 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_106 = 20f;
			Local_104 = { 343.1127f, -2727.236f, 20.23613f };
			Local_105 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_102 = { 1928.071f, 6228.355f, 43.49398f };
			Local_103 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_106 = 13f;
			Local_104 = { 1931.82f, 6235.634f, 43.37382f };
			Local_105 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_102 = { -736.4309f, -1590.921f, 10.80892f };
			Local_103 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_106 = 15f;
			Local_104 = { -727.2307f, -1585.221f, 11.78027f };
			Local_105 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_102 = { -676.3775f, -1548.553f, 12.33747f };
			Local_103 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_106 = 25f;
			Local_104 = { -654.203f, -1536.146f, 9.191055f };
			Local_105 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_102 = { -624.2344f, -1537.045f, 12.60193f };
			Local_103 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_106 = 8f;
			Local_104 = { -615.4003f, -1536.65f, 12.40271f };
			Local_105 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_102 = { -492.5057f, -1632.457f, 24.3307f };
			Local_103 = { -418.2088f, -1487.452f, 0f };
			fLocal_106 = 25f;
			Local_104 = { -486.2016f, -1636.095f, 24.20805f };
			Local_105 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_102 = { -359.3541f, -1639.693f, 13.13455f };
			Local_103 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_106 = 25f;
			Local_104 = { -378.1518f, -1705.66f, 12.47196f };
			Local_105 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_102 = { -243.4436f, -1814.623f, 25.69465f };
			Local_103 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_106 = 25f;
			Local_104 = { -235.1319f, -1822.094f, 25.86542f };
			Local_105 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_102 = { 84.55537f, -2046.159f, 13.30767f };
			Local_103 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_106 = 25f;
			Local_104 = { 17.90788f, -2035.773f, 12.62706f };
			Local_105 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_102 = { 221.5029f, -2232.766f, 9.88676f };
			Local_103 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_106 = 8f;
			Local_104 = { 218.583f, -2232.766f, 9.886198f };
			Local_105 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_102 = { 221.6518f, -2184.635f, 11.66457f };
			Local_103 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_106 = 8f;
			Local_104 = { 217.8995f, -2184.635f, 11.5405f };
			Local_105 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_102 = { 2326.57f, 1096.031f, 76.31458f };
			Local_103 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_106 = 21f;
			Local_104 = { 2334.453f, 1103.067f, 76.26603f };
			Local_105 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_102 = { 2379.442f, 1150.776f, 58.79632f };
			Local_103 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_106 = 12f;
			Local_104 = { 2374.064f, 1146.282f, 58.83331f };
			Local_105 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_102 = { -1179.405f, -355.2554f, 56.53003f };
			Local_103 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_106 = 12.5f;
			Local_104 = { -1178.385f, -361.8784f, 56.15081f };
			Local_105 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_102 = { -921.3846f, -384.94f, 137.0181f };
			Local_103 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_106 = 16f;
			Local_104 = { -914.1658f, -387.9444f, 137.0794f };
			Local_105 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_102 = { -740.2564f, 246.4529f, 132.2922f };
			Local_103 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_106 = 22f;
			Local_104 = { -726.6429f, 253.0676f, 132.3319f };
			Local_105 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_102 = { -771.2068f, 268.2729f, 132.1689f };
			Local_103 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_106 = 16f;
			Local_104 = { -770.8035f, 310.8625f, 137.4161f };
			Local_105 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_102 = { 259.2205f, 135.4146f, 136.7083f };
			Local_103 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_106 = 16f;
			Local_104 = { 261.9694f, 142.9676f, 136.6889f };
			Local_105 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_102 = { 393.548f, -30.87166f, 152.6635f };
			Local_103 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_106 = 8f;
			Local_104 = { 390.5358f, -36.08882f, 152.7813f };
			Local_105 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_102 = { 114.3139f, -648.4297f, 261.8488f };
			Local_103 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_106 = 20f;
			Local_104 = { 124.8467f, -646.6575f, 261.8488f };
			Local_105 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_102 = { -215.919f, -823.8436f, 126.0224f };
			Local_103 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_106 = 20f;
			Local_104 = { -225.397f, -820.3937f, 126.0812f };
			Local_105 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_102 = { -296.4725f, -802.0815f, 95.40108f };
			Local_103 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_106 = 20f;
			Local_104 = { -305.4602f, -798.8369f, 95.48194f };
			Local_105 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_102 = { -292.3034f, -823.3569f, 95.37621f };
			Local_103 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_106 = 20f;
			Local_104 = { -288.9206f, -814.022f, 95.37556f };
			Local_105 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_102 = { -256.3589f, -714.7838f, 110.1617f };
			Local_103 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_106 = 20f;
			Local_104 = { -253.7723f, -705.6632f, 110.1736f };
			Local_105 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_102 = { 1808.214f, 1949.246f, 71.73707f };
			Local_103 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_106 = 9.75f;
			Local_104 = { 1802.786f, 1950.262f, 71.74002f };
			Local_105 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_102 = { 2388.733f, 2931.941f, 46.62681f };
			Local_103 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_106 = 10f;
			Local_104 = { 2392.547f, 2934.867f, 46.6268f };
			Local_105 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_102 = { 2700.056f, 4836.381f, 42.07854f };
			Local_103 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_106 = 20.75f;
			Local_104 = { 2685.672f, 4821.653f, 42.18471f };
			Local_105 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_102 = { -1053.446f, 4766.245f, 234.3251f };
			Local_103 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_106 = 5f;
			Local_104 = { -1051.414f, 4767.193f, 234.4293f };
			Local_105 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_378(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0xE9BE
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

int func_379(int iParam0)//Position - 0xEA39
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

int func_380(int iParam0)//Position - 0xEA8C
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

int func_381(int iParam0, int iParam1)//Position - 0xEAFD
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

int func_382(int iParam0, bool bParam1)//Position - 0xEB32
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

int func_383()//Position - 0xEBB7
{
	switch (Local_150.f_3)
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

int func_384(struct<3> Param0, float fParam1, int iParam2)//Position - 0xEC3A
{
	int iVar0;
	
	iVar0 = -1;
	if (func_401() < 10)
	{
		iVar0 = func_400();
		func_385(Param0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_385(struct<3> Param0, var uParam1, int iParam2, var uParam3)//Position - 0xEC67
{
	func_386(Param0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_386(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0xEC81
{
	struct<12> Var0;
	
	if (func_395(PLAYER::PLAYER_ID()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_394(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_389(Var0))
		{
			Global_2667225.f_45.f_64 = func_388(PLAYER::PLAYER_ID());
			func_387(Var0, iParam4);
		}
	}
}

void func_387(struct<12> Param0, int iParam1)//Position - 0xECF7
{
	Global_2667225.f_368[iParam1 /*12*/] = { Param0 };
	Global_2667225.f_368[iParam1 /*12*/].f_9 = 1;
}

int func_388(int iParam0)//Position - 0xED20
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_1;
	}
	return 0;
}

int func_389(struct<12> Param0)//Position - 0xED42
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2667225.f_45[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_390(Global_2667225.f_45[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_390(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0xEDA2
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
							if (func_393(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_391(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
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
							if (func_393(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_391(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
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

bool func_391(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0xEEDB
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	Var0 = { Param2 - Vector(fVar2, fVar2, fVar2) };
	Var1 = { Param2 + Vector(fVar2, fVar2, fVar2) };
	return func_392(Param0, Param1, Var0, Var1);
}

int func_392(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0xEF1F
{
	if (((((Param0.f_0 >= Param2.f_0 && Param0.f_1 >= Param2.f_1) && Param0.f_2 >= Param2.f_2) && Param1.f_0 <= Param3.f_0) && Param1.f_1 <= Param3.f_1) && Param1.f_2 <= Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_393(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)//Position - 0xEF76
{
	struct<3> Var0;
	
	Var0 = { Param2 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_394(var uParam0, var uParam1)//Position - 0xEFA1
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

int func_395(bool bParam0)//Position - 0xF038
{
	if (((func_398(bParam0, 1) || func_397(bParam0)) || func_117(bParam0, 0)) || func_396(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_396(bool bParam0)//Position - 0xF074
{
	if (!func_12(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2);
}

int func_397(int iParam0)//Position - 0xF09C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/] != -1;
	}
	return 0;
}

bool func_398(int iParam0, bool bParam1)//Position - 0xF0BD
{
	if (func_399() != 0)
	{
		return func_388(iParam0) != 0;
	}
	return func_360(iParam0, bParam1, 0);
}

int func_399()//Position - 0xF0E4
{
	return Global_31959;
}

int func_400()//Position - 0xF0EF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2667225.f_368[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_401()//Position - 0xF121
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2667225.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_402(char* sParam0, char* sParam1, char* sParam2)//Position - 0xF154
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_403(int iParam0)//Position - 0xF173
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0";
		
		case 1:
			return "AMCH_1";
		
		case 2:
			return "AMCH_2";
		
		case 3:
			return "AMCH_3";
		
		case 4:
			return "AMCH_4";
		
		case 5:
			return "AMCH_5";
		
		case 6:
			return "AMCH_6";
		
		case 7:
			return "AMCH_7";
		
		case 8:
			return "AMCH_8";
		
		case 14:
			return "AMCH_9";
		
		case 9:
			return "AMCH_12";
		
		case 10:
			return "AMCH_13";
		
		case 11:
			return "AMCH_15";
		
		case 12:
			return "AMCH_16";
		
		case 15:
			return "AMCH_19";
		
		case 16:
			return "AMCH_20";
		
		case 17:
			return "AMCH_21";
		
		case 18:
			return "AMCH_22";
		
		case 13:
			return "AMCH_23";
		
		default:
	}
	return "";
}

char* func_404(int iParam0)//Position - 0xF27C
{
	switch (iParam0)
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
		
		case 14:
			return "AMCH_9SLC";
		
		case 9:
			return "AMCH_12SLC";
		
		case 10:
			return "AMCH_13SLC";
		
		case 11:
			return "AMCH_15SLC";
		
		case 12:
			return "AMCH_16SLC";
		
		case 15:
			return "AMCH_19SLC";
		
		case 16:
			return "AMCH_20SLC";
		
		case 17:
			return "AMCH_21SLC";
		
		case 18:
			return "AMCH_22SLC";
		
		case 13:
			return "AMCH_23SLC";
		
		default:
	}
	return "";
}

char* func_405(int iParam0)//Position - 0xF385
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0";
		
		case 1:
			return "AMCH_BIG_1";
		
		case 2:
			return "AMCH_BIG_2";
		
		case 3:
			return "AMCH_BIG_3";
		
		case 4:
			return "AMCH_BIG_4";
		
		case 5:
			return "AMCH_BIG_5";
		
		case 6:
			return "AMCH_BIG_6";
		
		case 7:
			return "AMCH_BIG_7";
		
		case 8:
			return "AMCH_BIG_8";
		
		case 14:
			return "AMCH_BIG_9";
		
		case 9:
			return "AMCH_BIG_12";
		
		case 10:
			return "AMCH_BIG_13";
		
		case 11:
			return "AMCH_BIG_15";
		
		case 12:
			return "AMCH_BIG_16";
		
		case 15:
			return "AMCH_BIG_19";
		
		case 16:
			return "AMCH_BIG_20";
		
		case 17:
			return "AMCH_BIG_21";
		
		case 18:
			return "AMCH_BIG_22";
		
		case 13:
			return "AMCH_BIG_23";
		
		default:
	}
	return "";
}

void func_406()//Position - 0xF48E
{
	if (!func_161())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574757.f_9)
	{
		return;
	}
	func_157();
}

void func_407(var uParam0)//Position - 0xF4BB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_380(iVar0) && !func_379(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_100[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_408()//Position - 0xF4FC
{
	if (!func_383())
	{
		if (Local_150.f_3 == 14)
		{
			func_411();
		}
		Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_1 = func_369();
	}
	else if ((!BitTest(Global_1836844.f_1, 4) && !BitTest(Global_1836844.f_1, 5)) && !func_410(PLAYER::PLAYER_ID()))
	{
		func_409();
	}
}

void func_409()//Position - 0xF55A
{
	switch (Local_150.f_3)
	{
		case 0:
			STATS::_STAT_TRACKING_ENABLE(8, 2);
			break;
		
		case 1:
			STATS::_STAT_TRACKING_ENABLE(13, 2);
			break;
		
		case 2:
			STATS::_STAT_TRACKING_ENABLE(4, 2);
			break;
		
		case 4:
			STATS::_STAT_TRACKING_ENABLE(1, 2);
			break;
		
		case 3:
			STATS::_STAT_TRACKING_ENABLE(2, 2);
			break;
		
		case 5:
			STATS::_STAT_TRACKING_ENABLE(3, 2);
			break;
		
		case 6:
			STATS::_STAT_TRACKING_ENABLE(11, 3);
			break;
		
		case 7:
			STATS::_STAT_TRACKING_ENABLE(14, 1);
			break;
		
		case 8:
			STATS::_STAT_TRACKING_ENABLE(29, 2);
			break;
		
		case 9:
			STATS::_STAT_TRACKING_ENABLE(12, 2);
			break;
		
		case 10:
			STATS::_STAT_TRACKING_ENABLE(10, 2);
			break;
		
		case 11:
			STATS::_STAT_TRACKING_ENABLE(18, 2);
			break;
		
		case 12:
			STATS::_STAT_TRACKING_ENABLE(20, 2);
			break;
		
		case 13:
			STATS::_STAT_TRACKING_ENABLE(27, 2);
			break;
		
		case 15:
			STATS::_STAT_TRACKING_ENABLE(26, 1);
			break;
		
		case 16:
			STATS::_STAT_TRACKING_ENABLE(25, 1);
			break;
		
		case 17:
			STATS::_STAT_TRACKING_ENABLE(22, 1);
			break;
		
		case 18:
			STATS::_STAT_TRACKING_ENABLE(24, 1);
			break;
	}
	MISC::SET_BIT(&uLocal_121, 8);
}

bool func_410(bool bParam0)//Position - 0xF6A3
{
	return func_14(bParam0, 0);
}

void func_411()//Position - 0xF6B2
{
	Local_100[0 /*3*/] = { 1083f, -231f, 60f };
	Local_100[1 /*3*/] = { 1024f, -325f, 60f };
	Local_100[2 /*3*/] = { 910f, -401f, 43f };
	Local_100[3 /*3*/] = { 721f, -457f, 26f };
	Local_100[4 /*3*/] = { 643f, -579f, 26f };
	Local_100[5 /*3*/] = { 590f, -851f, 26f };
	Local_100[6 /*3*/] = { 590f, -1023f, 16f };
	Local_100[7 /*3*/] = { 582f, -1205f, 24f };
	Local_100[8 /*3*/] = { 608f, -1335f, 16f };
	Local_100[9 /*3*/] = { 640f, -1434f, 16f };
	Local_100[10 /*3*/] = { 671f, -1742f, 20f };
	Local_100[11 /*3*/] = { 651f, -2046f, 16f };
	Local_100[12 /*3*/] = { 603f, -2505f, 9f };
	Local_100[13 /*3*/] = { 673f, -2582f, 4f };
	Local_100[14 /*3*/] = { 728f, -2594f, 10f };
	Local_100[15 /*3*/] = { 794f, -2624f, 27f };
	Local_100[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_100[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_100[18 /*3*/] = { -513f, 4427f, 40f };
	Local_100[19 /*3*/] = { 126f, 3366f, 40f };
	Local_100[20 /*3*/] = { 143f, 3418f, 36f };
	Local_100[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_100[22 /*3*/] = { -162f, 4249f, 40f };
	Local_100[23 /*3*/] = { -408f, 2964f, 20f };
	Local_100[24 /*3*/] = { -181f, 2862f, 38f };
	Local_100[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_100[26 /*3*/] = { 2950f, 803f, 8f };
	Local_100[27 /*3*/] = { 2369f, -409f, 80f };
	Local_100[28 /*3*/] = { 1906f, -755f, 84f };
	Local_100[29 /*3*/] = { -403f, -2333f, 40f };
	Local_100[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_100[31 /*3*/] = { 219f, -2315f, 5f };
	Local_100[32 /*3*/] = { 350f, -2315f, 5f };
	Local_100[33 /*3*/] = { -1848f, -333f, 75f };
	Local_100[34 /*3*/] = { -693f, -608f, 69f };
	Local_100[35 /*3*/] = { -1461f, -582f, 53f };
	Local_100[36 /*3*/] = { -1553f, -546f, 59f };
	Local_100[37 /*3*/] = { 338f, -2758f, 23f };
	Local_100[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_100[39 /*3*/] = { -713f, -1538f, 13f };
	Local_100[40 /*3*/] = { -659f, -1518f, 13f };
	Local_100[41 /*3*/] = { -620f, -1502f, 16f };
	Local_100[42 /*3*/] = { -445f, -1575f, 26f };
	Local_100[43 /*3*/] = { -373f, -1680f, 19f };
	Local_100[44 /*3*/] = { -212f, -1805f, 29f };
	Local_100[45 /*3*/] = { 47f, -2040f, 18f };
	Local_100[46 /*3*/] = { 223f, -2240f, 6f };
	Local_100[47 /*3*/] = { 218f, -2189f, 6f };
	Local_100[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_100[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_100[50 /*3*/] = { -1186f, -365f, 46f };
	Local_100[51 /*3*/] = { -916f, -407f, 93f };
	Local_100[52 /*3*/] = { -726f, 235f, 105f };
	Local_100[53 /*3*/] = { -774f, 286f, 112f };
	Local_100[54 /*3*/] = { 271f, 134f, 125f };
	Local_100[55 /*3*/] = { 377f, -28f, 125f };
	Local_100[56 /*3*/] = { 121f, -703f, 150f };
	Local_100[57 /*3*/] = { -204f, -784f, 74f };
	Local_100[58 /*3*/] = { -287f, -774f, 72f };
	Local_100[59 /*3*/] = { -272f, -824f, 71f };
	Local_100[60 /*3*/] = { -230f, -723f, 80f };
	Local_100[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_100[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_100[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_100[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_412(bool bParam0, bool bParam1)//Position - 0xFC75
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

void func_413(var uParam0, int iParam1)//Position - 0xFCD2
{
	if (func_328(PLAYER::PLAYER_ID()) == 133 && iParam1)
	{
		Global_2815059.f_5116 = uParam0;
	}
	else
	{
		Global_2815059.f_5116 = -1;
	}
}

void func_414(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xFD03
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2815059.f_5042 = -1;
	bVar0 = (func_117(PLAYER::PLAYER_ID(), 0) && func_113(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_412(func_431(iParam0), 1);
	}
	else
	{
		func_430(iParam0, -1);
		if (func_8(PLAYER::PLAYER_ID()))
		{
			Global_1836844.f_3 = iParam0;
		}
		else
		{
			func_429(iParam0);
		}
		Global_1836844.f_4 = -1;
		if (func_8(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 5);
		}
		if (((func_171() && !func_170()) || func_169(PLAYER::PLAYER_ID(), 21)) || func_169(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 17);
		MISC::SET_BIT(&(Global_1836844.f_1), 20);
		if (func_428(iParam0))
		{
			func_427();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_424(fParam1);
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
		if (func_422(iParam0))
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
				func_420(1);
				if (func_270(0))
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
			func_418(1);
			MISC::SET_BIT(&(Global_1836844.f_1), 12);
		}
		if (bParam5)
		{
			func_417();
			MISC::SET_BIT(&(Global_1836844.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_415(iParam0))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 21);
			}
		}
	}
	Global_2787396 = 1;
}

int func_415(int iParam0)//Position - 0xFEE7
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
	if (func_128(iParam0) == 1)
	{
		return 1;
	}
	if (func_416())
	{
		return 1;
	}
	return 0;
}

int func_416()//Position - 0xFF56
{
	switch (func_327())
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

void func_417()//Position - 0xFF84
{
	MISC::SET_BIT(&(Global_2815059.f_5033), 0);
}

void func_418(bool bParam0)//Position - 0xFF98
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
		func_419(iVar0);
		iVar0++;
	}
}

void func_419(int iParam0)//Position - 0xFFCF
{
	Global_100493.f_196[iParam0] = 1;
	Global_100493.f_195 = 1;
}

void func_420(int iParam0)//Position - 0xFFE9
{
	if (func_421() && iParam0)
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

int func_421()//Position - 0x1001F
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

int func_422(int iParam0)//Position - 0x10065
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_423(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_423(bool bParam0)//Position - 0x100A3
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

void func_424(float fParam0)//Position - 0x100C6
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_425())
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

int func_425()//Position - 0x10132
{
	switch (func_399())
	{
		case 0:
			return func_426();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_426()//Position - 0x10165
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_427()//Position - 0x10189
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_208 = 0;
	MISC::CLEAR_BIT(&(Global_2815059.f_4630), 1);
}

int func_428(int iParam0)//Position - 0x101AB
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_429(int iParam0)//Position - 0x101C5
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/] = iParam0;
}

void func_430(int iParam0, int iParam1)//Position - 0x101DA
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_355(func_356(iVar0)))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 2);
		}
	}
}

int func_431(int iParam0)//Position - 0x10235
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

int func_432()//Position - 0x1025B
{
	switch (Local_150.f_3)
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

void func_433()//Position - 0x1028A
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

int func_434()//Position - 0x10393
{
	switch (Local_150.f_3)
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

void func_435()//Position - 0x103C8
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_150.f_3))
	{
		if (Local_150.f_3 == 1 || Local_150.f_3 == 6)
		{
			iVar0 = func_456(PLAYER::PLAYER_ID(), 1);
			iVar1 = func_206(iVar0, 1);
			if (iVar1 < 11)
			{
				if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, false, false);
					func_436(1);
				}
			}
			else
			{
				PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), true);
			}
		}
	}
}

void func_436(bool bParam0)//Position - 0x1043A
{
	int iVar0;
	
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		func_454(PLAYER::PLAYER_ID(), func_213(586, -1, 0), 0);
		if (func_453(3610, -1))
		{
		}
		iVar0 = func_213(2042, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_452(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (func_267(0))
		{
			func_454(PLAYER::PLAYER_ID(), func_213(586, -1, 0), 0);
		}
		else
		{
			func_454(PLAYER::PLAYER_ID(), func_451(Global_2824753), 0);
		}
		func_449(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_442(PLAYER::PLAYER_PED_ID(), iVar0), func_441(PLAYER::PLAYER_PED_ID(), iVar0), false);
		func_440(func_213(2042, -1, 0), 1);
		Global_2815059.f_287 = 1;
		func_437(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_437(int iParam0, int iParam1, int iParam2)//Position - 0x10513
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_439();
		if (iParam2 == -1)
		{
			iParam2 = func_213(2042, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_442(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_441(PLAYER::GET_PLAYER_PED(iParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_452(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_442(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_441(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_452(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_213(586, -1, 0);
		}
		if (func_267(1) && func_438(iParam0))
		{
			func_454(iParam0, func_451(Global_2824753), 0);
		}
		else
		{
			func_454(iParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			func_454(iParam0, Global_1836612, 1);
		}
		func_449(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
	}
}

var func_438(int iParam0)//Position - 0x10602
{
	return func_112(iParam0, 10);
}

void func_439()//Position - 0x10612
{
	Global_78291 = 0;
	Global_78292 = -1;
	Global_78293 = -1;
	Global_78294 = -1;
	Global_78295 = -1;
	Global_78299 = -1;
}

void func_440(int iParam0, int iParam1)//Position - 0x10638
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_439();
		func_204(2042, iParam0, -1, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_442(PLAYER::PLAYER_PED_ID(), iParam0), func_441(PLAYER::PLAYER_PED_ID(), iParam0), false);
		func_449(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_452(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_437(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

int func_441(int iParam0, int iParam1)//Position - 0x106BE
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

var func_442(int iParam0, int iParam1)//Position - 0x10A61
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
		Global_78299 = func_443(iParam0, iParam1);
	}
	return Global_78299;
}

int func_443(int iParam0, int iParam1)//Position - 0x10B71
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
				return func_448(iParam0, iParam1, 1);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8))
			{
				return func_448(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_448(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_448(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_448(iParam0, iParam1, 6);
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_448(iParam0, iParam1, 7);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_448(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_448(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		return func_448(iParam0, iParam1, 9);
	}
	if (func_447(iParam0))
	{
		if (bVar1)
		{
			return func_448(iParam0, iParam1, 7);
		}
		else
		{
			return func_448(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT01"), 0))
		{
			return func_448(iParam0, iParam1, 0);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT02"), 0))
		{
			return func_448(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT03"), 0))
		{
			return func_448(iParam0, iParam1, 2);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1030529416, 0))
		{
			return func_448(iParam0, iParam1, 3);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 873008833, 0))
		{
			return func_448(iParam0, iParam1, 4);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1646534043, 0))
		{
			return func_448(iParam0, iParam1, 5);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT07"), 0))
		{
			return func_448(iParam0, iParam1, 6);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT08"), 0))
		{
			return func_448(iParam0, iParam1, 7);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1741007074, 0))
		{
			return func_448(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT10"), 0))
		{
			return func_448(iParam0, iParam1, 9);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT11"), 0))
		{
			return func_448(iParam0, iParam1, 10);
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MINI_DRESS"), 0))
		{
			return func_448(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_448(iParam0, iParam1, 5);
			}
			else
			{
				return func_448(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_448(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 1);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_446(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_448(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_448(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_445(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_448(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_445(iVar4);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else
			{
				return func_448(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_444(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_448(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_448(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_448(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_448(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_448(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_448(iParam0, iParam1, 9);
					}
					else
					{
						return func_448(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_448(iParam0, iParam1, 9);
					}
					else
					{
						return func_448(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_448(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_445(iVar4);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 1);
			}
			else
			{
				return func_448(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else
			{
				return func_448(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 1);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 8);
			}
			else
			{
				return func_448(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_448(iParam0, iParam1, 10);
				}
				else
				{
					return func_448(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 1);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 6);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else
			{
				return func_448(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 9);
				}
				else
				{
					return func_448(iParam0, iParam1, 1);
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
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 5);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_448(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_448(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_448(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 2);
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
				return func_448(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else
			{
				return func_448(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else
			{
				return func_448(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_448(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
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
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 0);
			}
			else
			{
				return func_448(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_448(iParam0, iParam1, 10);
				}
				else
				{
					return func_448(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 1);
			}
			else
			{
				return func_448(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 3);
			}
			else
			{
				return func_448(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 1);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 9);
			}
			else
			{
				return func_448(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 10);
			}
			else
			{
				return func_448(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_448(iParam0, iParam1, 7);
			}
			else
			{
				return func_448(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_448(iParam0, iParam1, 2);
			}
			else
			{
				return func_448(iParam0, iParam1, 7);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0))
		{
			return func_448(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_445(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 6);
				}
				else
				{
					return func_448(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 2);
				}
				else
				{
					return func_448(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 2);
				}
				else
				{
					return func_448(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 2);
				}
				else
				{
					return func_448(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 2);
				}
				else
				{
					return func_448(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 6);
				}
				else
				{
					return func_448(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 5);
				}
				else
				{
					return func_448(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 4);
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
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 6);
				}
				else
				{
					return func_448(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 3);
				}
				else
				{
					return func_448(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 5);
				}
				else
				{
					return func_448(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 6);
				}
				else
				{
					return func_448(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 6);
				}
				else
				{
					return func_448(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 6);
				}
				else
				{
					return func_448(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_448(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 6);
				}
				else
				{
					return func_448(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 7);
				}
				else
				{
					return func_448(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_448(iParam0, iParam1, 1);
				}
				else
				{
					return func_448(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_448(iParam0, iParam1, 0);
	return 0;
}

int func_444(int iParam0, int iParam1)//Position - 0x13313
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

int func_445(int iParam0)//Position - 0x134B3
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

int func_446(int iParam0, int iParam1)//Position - 0x13620
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

int func_447(int iParam0)//Position - 0x13764
{
	if (FILES::_DOES_CUSTOMIZATION_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 4, joaat("DUNGAREES")))
	{
		return 1;
	}
	return 0;
}

int func_448(int iParam0, int iParam1, int iParam2)//Position - 0x13780
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

void func_449(int iParam0, int iParam1)//Position - 0x13E41
{
	int iVar0;
	
	iVar0 = func_450(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, iVar0);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_450(int iParam0)//Position - 0x13E6C
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

int func_451(var uParam0)//Position - 0x13EF3
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

int func_452(int iParam0, int iParam1)//Position - 0x13FAB
{
	return 0;
}

bool func_453(int iParam0, int iParam1)//Position - 0x13FB4
{
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

void func_454(int iParam0, int iParam1, int iParam2)//Position - 0x13FD0
{
	int iVar0;
	int iVar1;
	
	if (func_455(iParam1, iParam2, &iVar0, &iVar1))
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

bool func_455(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x14009
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

int func_456(int iParam0, bool bParam1)//Position - 0x141C8
{
	if (bParam1)
	{
	}
	return func_210(iParam0);
}

void func_457()//Position - 0x141DB
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
	
	if ((((!func_7(PLAYER::PLAYER_ID()) && !func_168(PLAYER::PLAYER_ID())) && !func_322()) && !func_470(PLAYER::PLAYER_ID(), 0, -1)) && !func_469(PLAYER::PLAYER_ID()))
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			fVar4 = 2.147484E+09f;
			iVar5 = -1;
			Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			bVar7 = func_5(Local_150.f_3);
			bVar8 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
			bVar9 = func_468();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				iVar10 = Local_150.f_67[iVar2 /*2*/].f_1;
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar10) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iVar10), false))
				{
					if (!bVar9 && bVar7)
					{
						if (bVar8 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == NETWORK::NET_TO_VEH(iVar10))
						{
							func_346(1);
						}
					}
					MISC::SET_BIT(&uVar3, iVar2);
					if (bVar7 && func_40(Local_150.f_3, iVar2, &Var0, &uVar1))
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
			if (func_41(Local_150.f_3))
			{
				MISC::SET_BIT(&uVar3, 31);
			}
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_7 = uVar3;
			if (func_5(Local_150.f_3))
			{
				if ((PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || func_17(-1, 0))
				{
					if ((fVar4 < 2.147484E+09f && iVar5 >= 0) && iVar5 < 10)
					{
						if (func_40(Local_150.f_3, iVar5, &Var0, &uVar1))
						{
							func_467(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_466(Var0, 1, 0);
							func_459(10, 0, 0, 0, 0);
							MISC::SET_BIT(&uLocal_121, 5);
						}
					}
				}
				else
				{
					func_458();
				}
			}
		}
	}
	else
	{
		func_458();
	}
}

void func_458()//Position - 0x1440D
{
	if (BitTest(uLocal_121, 5))
	{
		func_176();
		func_174();
		MISC::CLEAR_BIT(&uLocal_121, 5);
		func_173();
	}
}

void func_459(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x14431
{
	if (Global_2703735.f_1571.f_703.f_16 != func_107())
	{
		if (BitTest(Global_2689235[Global_2703735.f_1571.f_703.f_16 /*453*/].f_416, 0) && func_460())
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

int func_460()//Position - 0x144CD
{
	if ((((((func_226(PLAYER::PLAYER_ID()) == 229 || func_226(PLAYER::PLAYER_ID()) == 191) || func_465()) || func_464()) || func_463()) || Global_2788199.f_227 == 1) || (Global_2667225.f_1753 && func_461(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_461(int iParam0)//Position - 0x1453F
{
	if (func_462(iParam0))
	{
		return 1;
	}
	if (func_111(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_462(bool bParam0)//Position - 0x14562
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

bool func_463()//Position - 0x14585
{
	return Global_2788198;
}

bool func_464()//Position - 0x14591
{
	return Global_1836579;
}

int func_465()//Position - 0x1459D
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_466(struct<3> Param0, int iParam1, int iParam2)//Position - 0x145B2
{
	Global_2667225.f_45.f_49 = { Param0 };
	Global_2667225.f_45.f_52 = iParam1;
	Global_2667225.f_45.f_53 = iParam2;
}

void func_467(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x145DC
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2676213.f_6))
	{
		if (!Global_2676213.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2676213.f_6))
	{
		Global_2676213.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2676213.f_6;
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
	if (func_395(PLAYER::PLAYER_ID()))
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
	Global_2676213 = { Var0 };
}

int func_468()//Position - 0x14705
{
	if ((((((func_462(PLAYER::PLAYER_ID()) || func_171()) || func_170()) || func_169(PLAYER::PLAYER_ID(), 21)) || func_169(PLAYER::PLAYER_ID(), 25)) || func_8(PLAYER::PLAYER_ID())) || func_7(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_469(int iParam0)//Position - 0x1476D
{
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11))
	{
		return 1;
	}
	return 0;
}

int func_470(int iParam0, bool bParam1, int iParam2)//Position - 0x147A6
{
	if (Global_1853348[iParam0 /*834*/].f_267.f_32 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
	{
		if (iParam2 == -1 || func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_471(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_471(int iParam0)//Position - 0x1482D
{
	int iVar0;
	
	if (iParam0 == func_107())
	{
		return iParam0;
	}
	if (func_472(iParam0) != -1)
	{
		iVar0 = func_307(func_472(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_89(iParam0, 0))
			{
				return func_88(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_107();
		}
		return Global_2689235[iParam0 /*453*/].f_318.f_9;
	}
	return func_107();
}

int func_472(int iParam0)//Position - 0x148B1
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
		else if (((Global_1575058 || Global_2667225.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
	}
	return -1;
}

void func_473(bool bParam0, bool bParam1)//Position - 0x14920
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_538())
	{
		if (bParam1)
		{
			iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
			if (func_105(PLAYER::PLAYER_ID()))
			{
				iVar1 = func_332();
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
				while (iVar4 < func_537())
				{
					switch (Local_150.f_3)
					{
						case 14:
							if (!func_380(iVar4) && !func_379(iVar4))
							{
								func_534("AMCH_BRIDGE", bParam0, iVar0, iVar4);
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
			if (((!bParam0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_150.f_67[iVar5 /*2*/].f_1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_150.f_67[iVar5 /*2*/].f_1), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_150.f_67[iVar5 /*2*/].f_1), -1, false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_143[iVar5]))
				{
					iLocal_143[iVar5] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_150.f_67[iVar5 /*2*/].f_1));
					HUD::SET_BLIP_SPRITE(iLocal_143[iVar5], func_533(iVar5));
					HUD::SET_BLIP_PRIORITY(iLocal_143[iVar5], 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_143[iVar5], func_532(iVar5));
					func_530(&(iLocal_143[iVar5]), 9);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (SYSTEM::VDIST(Var6, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_150.f_67[iVar5 /*2*/].f_1), true)) <= 150f)
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_143[iVar5], true);
						}
						else
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_143[iVar5], false);
						}
					}
					func_474(iLocal_143[iVar5], 0, 1152319488, 1137180672);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_143[iVar5]))
			{
				HUD::REMOVE_BLIP(&(iLocal_143[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_474(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x14B1E
{
	HUD::SET_BLIP_ALPHA(iParam0, func_475(iParam0, iParam1, fParam2, fParam3));
}

int func_475(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x14B38
{
	float fVar0;
	
	if (!func_529(Global_2703735) && !func_81())
	{
		fVar0 = func_477(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_476();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_476()//Position - 0x14B86
{
	if (func_398(Global_2703735, 1))
	{
		return 50;
	}
	return 0;
}

float func_477(int iParam0, float fParam1, float fParam2)//Position - 0x14BA0
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	iVar0 = Global_2703735;
	Var2 = { func_528(iParam0) };
	Var2.f_2 = 0f;
	if (Global_1581351 || func_524())
	{
		if (func_523(iVar0))
		{
			Var3 = { func_480(iVar0) };
		}
		else if (func_479(iVar0))
		{
			Var3 = { func_478(iVar0) };
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

Vector3 func_478(int iParam0)//Position - 0x14C50
{
	int iVar0;
	
	if (func_479(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	return 0f, 0f, 0f;
}

int func_479(int iParam0)//Position - 0x14C84
{
	int iVar0;
	
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_480(int iParam0)//Position - 0x14CE0
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
	
	if (iParam0 == func_107())
	{
	}
	if (func_522(iParam0))
	{
		iVar0 = func_521(iParam0);
		if (iVar0 != func_107())
		{
			if (!func_520(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_239[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_239[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2689235[func_521(iParam0) /*453*/].f_318.f_11;
				}
			}
			else
			{
				iVar1 = func_517(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1946250.f_533[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_516(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_307))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_307, false);
		}
	}
	else if (func_515(iParam0) && !func_514(iParam0))
	{
		iVar2 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar2 != func_107())
		{
			iVar3 = func_517(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1946250.f_533[iVar3 /*3*/];
			}
		}
	}
	else if (func_513(iParam0) && !func_512(iParam0))
	{
		if (func_523(iParam0) && func_511())
		{
			return Global_1946250.f_533[Global_2689235[iParam0 /*453*/].f_318.f_6 /*3*/];
		}
		iVar4 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar4 != func_107())
		{
			if (func_510(iVar4))
			{
				iVar5 = func_507(iVar4);
				if (iVar5 != -1)
				{
					return Global_1946250.f_533[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_506(iParam0))
	{
		iVar6 = func_505(iParam0);
		if (iVar6 != func_107())
		{
			if (!func_504(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_336[iVar6]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_336[iVar6], false);
				}
				else
				{
					return Global_2689235[func_505(iParam0) /*453*/].f_318.f_18;
				}
			}
			else
			{
				iVar7 = func_507(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1946250.f_533[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_503(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_309))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_309, false);
		}
	}
	else if (func_502(iParam0) && !func_501(iParam0))
	{
		iVar8 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar8 != func_107())
		{
			if (func_500(iVar8))
			{
				iVar9 = func_497(iVar8);
				if (iVar9 != -1)
				{
					return func_496(iVar9);
				}
			}
		}
	}
	else if (func_495(iParam0) && !func_494(iParam0))
	{
		iVar10 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar10 != func_107())
		{
			if (func_493(iVar10))
			{
				iVar11 = func_490(iVar10);
				if (iVar11 != -1)
				{
					return Global_1946250.f_533[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_489(iParam0, 0))
	{
		iVar12 = func_488(iParam0);
		if (iVar12 != func_107())
		{
			if (!func_487(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_369[iVar12]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_369[iVar12], false);
				}
				else
				{
					return Global_1892703[func_488(iParam0) /*599*/].f_584;
				}
			}
			else
			{
				iVar13 = func_490(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1946250.f_533[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_486(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_485(iParam0))
	{
		iVar14 = func_471(iParam0);
		if (iVar14 != func_107())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_402[iVar14]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_402[iVar14], false);
			}
			else
			{
				return Global_1911933[iVar14 /*260*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_502(iParam0))
	{
		return func_496(Global_2689235[iParam0 /*453*/].f_318.f_6);
	}
	if (func_481(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1946250.f_533[Global_2689235[iParam0 /*453*/].f_318.f_6 /*3*/];
}

int func_481(int iParam0)//Position - 0x1514A
{
	if (((func_484(iParam0) || func_483(iParam0)) || func_482(iParam0)) || func_331(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_482(int iParam0)//Position - 0x15184
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_483(int iParam0)//Position - 0x151CB
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_484(int iParam0)//Position - 0x15212
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_485(int iParam0)//Position - 0x15259
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 20;
			}
		}
		else if (((Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_1575058) && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 20;
		}
	}
	return 0;
}

int func_486(int iParam0)//Position - 0x152F0
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_487(int iParam0)//Position - 0x15337
{
	if (iParam0 != func_107())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 4);
	}
	return 0;
}

int func_488(int iParam0)//Position - 0x1535C
{
	if (iParam0 == func_107())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_489(int iParam0, bool bParam1)//Position - 0x15380
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
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_107())
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_490(int iParam0)//Position - 0x1540E
{
	int iVar0;
	
	if (iParam0 != func_107())
	{
		iVar0 = func_492(iParam0);
		if (iVar0 != 0)
		{
			return func_491(iVar0);
		}
	}
	return -1;
}

int func_491(int iParam0)//Position - 0x15437
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

int func_492(int iParam0)//Position - 0x154B5
{
	if (iParam0 != func_107())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_295;
	}
	return 0;
}

int func_493(int iParam0)//Position - 0x154D9
{
	if (iParam0 != func_107())
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_295 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_494(int iParam0)//Position - 0x15502
{
	if (iParam0 != func_107())
	{
		if (func_495(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_495(int iParam0)//Position - 0x15537
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_496(int iParam0)//Position - 0x1557E
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
	return Global_1946250.f_533[iParam0 /*3*/];
}

int func_497(int iParam0)//Position - 0x1568A
{
	int iVar0;
	
	if (iParam0 != func_107())
	{
		iVar0 = func_499(iParam0);
		if (iVar0 != 0)
		{
			return func_498(iVar0);
		}
	}
	return -1;
}

int func_498(int iParam0)//Position - 0x156B3
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

int func_499(int iParam0)//Position - 0x15731
{
	if (iParam0 != func_107())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_336;
	}
	return 0;
}

int func_500(int iParam0)//Position - 0x15755
{
	if (iParam0 != func_107())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_336 != 0;
	}
	return 0;
}

int func_501(int iParam0)//Position - 0x1577B
{
	if (iParam0 != func_107())
	{
		if (func_502(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_502(int iParam0)//Position - 0x157B0
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_503(int iParam0)//Position - 0x157F7
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_504(int iParam0)//Position - 0x1583E
{
	if (iParam0 != func_107())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_2, 6);
	}
	return 0;
}

int func_505(int iParam0)//Position - 0x15863
{
	if (iParam0 == func_107())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_506(int iParam0)//Position - 0x15887
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_107())
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_507(int iParam0)//Position - 0x158E7
{
	int iVar0;
	
	if (iParam0 == func_107())
	{
		return -1;
	}
	iVar0 = func_509(iParam0);
	if (!iVar0 == 0)
	{
		return func_508(iVar0);
	}
	return -1;
}

int func_508(int iParam0)//Position - 0x15916
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

int func_509(int iParam0)//Position - 0x159A4
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_285;
}

int func_510(int iParam0)//Position - 0x159C8
{
	if (iParam0 != func_107())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_285 != 0;
	}
	return 0;
}

int func_511()//Position - 0x159EE
{
	if (BitTest(Global_1946250.f_2, 13) || Global_1946250.f_3281)
	{
		return 1;
	}
	return 0;
}

int func_512(int iParam0)//Position - 0x15A14
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	if (func_513(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_513(int iParam0)//Position - 0x15A4D
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_514(int iParam0)//Position - 0x15A94
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	if (func_515(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_515(int iParam0)//Position - 0x15ACD
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_516(int iParam0)//Position - 0x15B13
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_517(int iParam0)//Position - 0x15B59
{
	int iVar0;
	
	if (iParam0 == func_107())
	{
		return -1;
	}
	iVar0 = func_519(iParam0);
	if (!iVar0 == 0)
	{
		return func_518(iVar0);
	}
	return -1;
}

int func_518(int iParam0)//Position - 0x15B88
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

int func_519(int iParam0)//Position - 0x15D4A
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_191[5 /*13*/];
}

int func_520(int iParam0)//Position - 0x15D70
{
	if (iParam0 != func_107())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 6);
	}
	return 0;
}

int func_521(int iParam0)//Position - 0x15D93
{
	if (iParam0 == func_107())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_522(int iParam0)//Position - 0x15DB7
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_107())
			{
				return func_307(Global_2689235[iParam0 /*453*/].f_318.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_523(int iParam0)//Position - 0x15E16
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_524()//Position - 0x15E7C
{
	if ((func_527() || func_526()) || func_525(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_525(int iParam0)//Position - 0x15EA8
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return BitTest(Global_1888862[iParam0 /*120*/].f_29, 20);
}

var func_526()//Position - 0x15ECA
{
	return BitTest(Global_1958691, 1);
}

bool func_527()//Position - 0x15ED8
{
	return BitTest(Global_1958711, 5);
}

Vector3 func_528(int iParam0)//Position - 0x15EE6
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

int func_529(int iParam0)//Position - 0x15F2F
{
	if ((BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 9) && !(BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 6) && BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 7))) || ((BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 6) && !BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 7)) && !BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_530(var uParam0, int iParam1)//Position - 0x15FB8
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_531(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_531(int iParam0)//Position - 0x15FDE
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

char* func_532(int iParam0)//Position - 0x16246
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_150.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_150.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_150.f_67[iParam0 /*2*/]) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(Local_150.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_533(int iParam0)//Position - 0x162B9
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_150.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_150.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_150.f_67[iParam0 /*2*/]) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(Local_150.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_534(char* sParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x16320
{
	struct<3> Var0;
	
	if (!BitTest(Local_1516[iParam2 /*12*/].f_8[func_371(iParam3)], func_370(iParam3)) && !bParam1)
	{
		Var0 = { func_536(iParam3) };
		if (!HUD::DOES_BLIP_EXIST(iLocal_142[iParam3]))
		{
			if (!func_535(Var0, 0f, 0f, 0f, 0) && !func_535(Var0, 0f, 0f, -2000f, 0))
			{
				iLocal_142[iParam3] = HUD::ADD_BLIP_FOR_COORD(Var0);
				HUD::SET_BLIP_PRIORITY(iLocal_142[iParam3], 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_142[iParam3], sParam0);
				func_474(iLocal_142[iParam3], 25, 1152319488, 1137180672);
				func_530(&(iLocal_142[iParam3]), 12);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_142[iParam3], true);
			}
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_BLIP_ALPHA(iLocal_142[iParam3], 255);
		}
		else
		{
			func_474(iLocal_142[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_142[iParam3]))
	{
		HUD::REMOVE_BLIP(&(iLocal_142[iParam3]));
		if (!bParam1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", false);
		}
	}
}

bool func_535(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x16444
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_536(int iParam0)//Position - 0x1648B
{
	switch (Local_150.f_3)
	{
		case 14:
			return Local_141[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_537()//Position - 0x164B2
{
	switch (Local_150.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_538()//Position - 0x164D0
{
	switch (Local_150.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_539()//Position - 0x164ED
{
	switch (Local_150.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_540(var uParam0, char* sParam1)//Position - 0x1650D
{
	char* sVar0;
	
	if (func_321(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_222(sParam1))
	{
		sVar0 = sParam1;
	}
	func_149(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_541(int iParam0)//Position - 0x1654D
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

int func_542(int iParam0, int iParam1)//Position - 0x16756
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_543(int iParam0)//Position - 0x1676C
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

int func_544(var uParam0, bool bParam1, bool bParam2)//Position - 0x167C0
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

void func_545(bool bParam0)//Position - 0x16807
{
	if (!HUD::IS_RADAR_HIDDEN() && !CAM::IS_SCREEN_FADED_OUT())
	{
		switch (bParam0)
		{
			case 0:
				if (!BitTest(uLocal_144, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (func_5(Local_150.f_3))
						{
							if (Local_150.f_3 == 12)
							{
								func_302("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_302("AMCH_AIRAV", 30000);
							}
						}
						else if (func_41(Local_150.f_3))
						{
							func_302("AMCH_BIKEAV", 30000);
						}
						func_301(1);
						MISC::SET_BIT(&uLocal_144, bParam0);
					}
				}
				break;
			
			case 1:
				if (!BitTest(uLocal_144, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_302("AMCH_BLOW", 30000);
						func_301(1);
						MISC::SET_BIT(&uLocal_144, bParam0);
					}
				}
				break;
			
			case 2:
				if (!BitTest(uLocal_144, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_550(63))
					{
						switch (Local_150.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										func_302("AMCH_ALTI", 30000);
										func_301(1);
										MISC::SET_BIT(&uLocal_144, bParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_302("AMCH_NMIS", 30000);
									func_301(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							
							case 1:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_302("AMCH_FRFALL", -1);
									func_301(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_302("AMCH_PVPO1", -1);
									func_301(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							
							case 17:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_302("AMCH_PVPO2", -1);
									func_301(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							
							case 4:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_302("AMCH_WHEELIE", 30000);
									func_301(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							
							case 3:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_302("AMCH_STOPPIE", 30000);
									func_301(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							
							case 10:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_302("AMCH_LFALL", 30000);
									func_301(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							
							case 6:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_302("AMCH_LPARA", 30000);
									func_301(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!BitTest(uLocal_144, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_550(63))
					{
						switch (Local_150.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										if (func_1(&uLocal_115, 1000, 0))
										{
											func_302("AMCH_OCEAN", 30000);
											func_301(1);
											func_46(&uLocal_115);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!BitTest(uLocal_144, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_550(63))
					{
						switch (Local_150.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										if (func_529(PLAYER::PLAYER_ID()) && !func_547(PLAYER::PLAYER_ID()))
										{
											func_302("AMCH_ALTIEXP", 30000);
											func_301(1);
											MISC::SET_BIT(&uLocal_144, bParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!BitTest(uLocal_144, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_550(63))
					{
						if (func_1(&uLocal_115, 1000, 0))
						{
							func_302("AMCH_FLYLOW", 30000);
							func_301(1);
							func_46(&uLocal_115);
						}
					}
				}
				break;
			
			case 7:
				if (!BitTest(uLocal_144, bParam0))
				{
					if (Local_150.f_3 == 7)
					{
						if (iLocal_145 == 0)
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_550(63))
							{
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_302("AMCH_MVS1", 30000);
									func_301(1);
									iLocal_145 = 1;
								}
							}
						}
						else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_550(63))
						{
							if (func_12(PLAYER::PLAYER_ID(), 1, 1))
							{
								func_302("AMCH_MVS2", 30000);
								func_301(1);
								MISC::SET_BIT(&uLocal_144, bParam0);
							}
						}
					}
					if (Local_150.f_3 == 14)
					{
						if (iLocal_145 == 0)
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_550(63))
							{
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_302("AMCH_BRBL", 30000);
									func_301(1);
									iLocal_145 = 1;
								}
							}
						}
						else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_550(63))
						{
							if (func_12(PLAYER::PLAYER_ID(), 1, 1))
							{
								func_302("AMCH_BRBL2", 30000);
								func_301(1);
								MISC::SET_BIT(&uLocal_144, bParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!BitTest(uLocal_144, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_546("AMCH_WARN", func_404(Local_150.f_3), func_403(Local_150.f_3), 30000);
						func_301(0);
						Local_1517.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
						MISC::SET_BIT(&uLocal_144, bParam0);
					}
				}
				break;
			}
	}
}

void func_546(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x16DD3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

bool func_547(int iParam0)//Position - 0x16DF6
{
	return BitTest(Global_1648034.f_241.f_136[func_549(9) /*33*/][iParam0], func_548(9));
}

int func_548(int iParam0)//Position - 0x16E19
{
	return (iParam0 % 32);
}

int func_549(int iParam0)//Position - 0x16E26
{
	return (iParam0 / 32);
}

bool func_550(int iParam0)//Position - 0x16E33
{
	return Global_2703735.f_2400[0 /*80*/].f_1 == iParam0;
}

void func_551(int iParam0)//Position - 0x16E4A
{
	Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 = iParam0;
}

void func_552(bool bParam0)//Position - 0x16E5F
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

int func_553(bool bParam0, bool bParam1, bool bParam2)//Position - 0x16E93
{
	if (func_579(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (func_169(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_169(PLAYER::PLAYER_ID(), 25))
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
	if (func_359(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_578())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_577(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_576())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_111(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_569(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_568(PLAYER::PLAYER_ID()) != func_107() && func_568(PLAYER::PLAYER_ID()) == func_88(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_566(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (func_565(func_296()) && !func_353(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_564())
	{
		return 0;
	}
	if (func_322())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_361(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_562())
	{
		return 0;
	}
	if (func_169(PLAYER::PLAYER_ID(), 0) || func_169(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_169(PLAYER::PLAYER_ID(), 12) || func_169(PLAYER::PLAYER_ID(), 14)) || func_169(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_561(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_527() && !Global_2787784)
		{
			return 0;
		}
	}
	if (func_560(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_559())
	{
		return 0;
	}
	if (Global_1931426)
	{
		return 0;
	}
	if (func_396(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_558())
	{
		return 0;
	}
	if (func_556(PLAYER::PLAYER_ID()) && Global_1852994.f_172)
	{
		return 0;
	}
	if (func_555())
	{
		return 0;
	}
	if (func_463())
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
	if (func_305(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_462(PLAYER::PLAYER_ID()))
	{
		if (func_554(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_554(int iParam0)//Position - 0x170FF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

bool func_555()//Position - 0x17123
{
	return Global_1946250.f_519;
}

int func_556(int iParam0)//Position - 0x17132
{
	if (func_557(Global_1853348[iParam0 /*834*/].f_267.f_32))
	{
		return 1;
	}
	return 0;
}

int func_557(int iParam0)//Position - 0x17154
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

int func_558()//Position - 0x17183
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_559()//Position - 0x1719B
{
	return Global_100493.f_376 > 0;
}

bool func_560(int iParam0)//Position - 0x171AC
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11);
}

int func_561(int iParam0, bool bParam1, bool bParam2)//Position - 0x171C5
{
	if (iParam0 == func_107())
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

int func_562()//Position - 0x17229
{
	if (func_563() == 0)
	{
		return 1;
	}
	return 0;
}

int func_563()//Position - 0x1723E
{
	return Global_1574632.f_18;
}

bool func_564()//Position - 0x1724C
{
	return Global_1575058;
}

int func_565(int iParam0)//Position - 0x17258
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

int func_566(int iParam0, int iParam1)//Position - 0x172A2
{
	if (func_117(iParam0, 0))
	{
		return func_567(Global_1892703[iParam0 /*599*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_567(int iParam0)//Position - 0x172CC
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

int func_568(int iParam0)//Position - 0x1750E
{
	return Global_1892703[iParam0 /*599*/].f_10.f_35;
}

int func_569(bool bParam0)//Position - 0x17523
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_397(bParam0) && !func_8(bParam0)) && !BitTest(Global_1892703[bParam0 /*599*/].f_1, 8));
	bVar2 = func_111(bParam0);
	uVar3 = func_171();
	uVar4 = func_570();
	if ((bVar1 && (func_462(bParam0) || func_423(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_113(bParam0)) && !func_308(bParam0)))
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

int func_570()//Position - 0x175DE
{
	if ((func_112(PLAYER::PLAYER_ID(), 21) || func_112(PLAYER::PLAYER_ID(), 22)) || func_574())
	{
		return 1;
	}
	if (func_572())
	{
		func_571(22);
		return 1;
	}
	return 0;
}

void func_571(int iParam0)//Position - 0x17623
{
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

int func_572()//Position - 0x17640
{
	if (func_117(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_171() && !func_170()) || func_169(PLAYER::PLAYER_ID(), 21)) || func_169(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_573(27);
		}
	}
	return 0;
}

void func_573(int iParam0)//Position - 0x17693
{
	MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

int func_574()//Position - 0x176B0
{
	return func_575(424, -1);
}

int func_575(int iParam0, int iParam1)//Position - 0x176C0
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_209(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_576()//Position - 0x176EC
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 5;
}

int func_577(int iParam0)//Position - 0x17701
{
	if (Global_2689235[iParam0 /*453*/].f_269.f_4 != 0 || Global_2689235[iParam0 /*453*/].f_269.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_578()//Position - 0x17735
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 0);
}

bool func_579(int iParam0, int iParam1)//Position - 0x1774E
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_5, iParam1);
}

void func_580()//Position - 0x17766
{
	func_581(&(Local_171.f_534), &Local_171, 27, &(Local_171.f_1), &(Local_171.f_117), Local_150.f_3, 0, 0);
}

void func_581(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x1778E
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
	
	if (func_697(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (func_695() || iParam2 == 28)
	{
		if (func_649(iParam1, iParam2, uParam3, Global_1836357, 0, func_698(), sParam7))
		{
			func_648(1);
			if ((!func_647() && !func_646()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (func_645())
				{
					func_644();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_643(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							func_642(iParam1, 0, 0);
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
										if (func_638(bVar4) || func_636(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (func_90(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												func_633(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!func_114(PLAYER::PLAYER_ID(), 0) && func_226(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (func_632())
							{
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = func_107();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((func_631(bVar4) && func_628(bVar4, iParam2, bVar3)) && func_12(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { func_622(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { func_143(bVar4) };
								iVar6 = func_616(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
								}
								Global_1836357++;
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
									if (!func_632())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_614(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_290(iParam5, 1, 0, 0), 16);
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
								iVar17 = func_613(bVar4, 0);
								if (bVar2)
								{
									if (func_89(bVar4, 1) && iVar1[bVar10] != -1)
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
								if (func_612(iParam5))
								{
									func_611(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									func_611(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
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
								bVar4 = func_107();
							}
							if (func_631(bVar4))
							{
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { func_622(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { func_143(bVar4) };
									iVar6 = func_616(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = func_613(bVar4, 1);
									if (bVar2)
									{
										if (func_89(bVar4, 1))
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
									func_594(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_591(uParam3, iParam1, iParam2);
						}
						func_46(&(uParam3->f_21));
						func_590();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_589(uParam3, iParam1);
							func_588(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_589(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_584(uParam3))
						{
							Global_1836580 = 1;
						}
						func_582(uParam3);
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
			func_590();
			func_643(0);
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

void func_582(var uParam0)//Position - 0x17DBC
{
	if (!func_47(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_46(&(uParam0->f_21));
		func_583(0);
	}
}

void func_583(bool bParam0)//Position - 0x17DF8
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

int func_584(var uParam0)//Position - 0x17E3E
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	bVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar3 != func_107() && func_12(bVar3, 0, 1))
	{
		Var2 = { func_143(bVar3) };
		iVar1 = func_587(uParam0, uParam0->f_37);
		if (func_586(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_585(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_585(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_585(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_585(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_585(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_585(uParam0, iVar0, 0);
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

void func_585(var uParam0, int iParam1, int iParam2)//Position - 0x17F6B
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_586(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x17F7D
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_587(var uParam0, int iParam1)//Position - 0x17F8D
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_588(int* iParam0, bool bParam1, int iParam2)//Position - 0x17F9D
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

void func_589(var uParam0, int* iParam1)//Position - 0x17FD5
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_590()//Position - 0x1800B
{
	if (Global_1836580 != 0)
	{
		Global_1836580 = 0;
	}
}

void func_591(var uParam0, int* iParam1, int iParam2)//Position - 0x18020
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_107())
		{
			if (func_12(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_593(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_592(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853348[iVar0 /*834*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_592(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x18095
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

int func_593(int iParam0, bool bParam1, int iParam2)//Position - 0x180D2
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

void func_594(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x18119
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_610() && iParam4 < func_609())
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
				func_608("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_608(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_608("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_608("");
			if (uParam3->f_108 == 6)
			{
				func_608("");
			}
			else
			{
				func_608(&sParam5);
			}
			func_599(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_598(uParam3))
			{
				func_597("DPAD_FRIEND");
			}
			else if (func_596(uParam3))
			{
				func_597("DPAD_FRIEND");
			}
			else if (func_595(uParam3))
			{
				func_597("DPAD_CREW");
			}
			else
			{
				func_597("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_595(var uParam0)//Position - 0x18240
{
	return BitTest(uParam0->f_33, 6);
}

bool func_596(var uParam0)//Position - 0x1824E
{
	return BitTest(uParam0->f_33, 5);
}

void func_597(char* sParam0)//Position - 0x1825C
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_598(var uParam0)//Position - 0x1826E
{
	if (func_596(uParam0) && func_595(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_599(var uParam0, bool bParam1)//Position - 0x1828F
{
	if (func_607(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_603(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && BitTest(Global_2689235[bParam1 /*453*/].f_425, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_600())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_600()//Position - 0x1830A
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_601() || func_99())
		{
			return 1;
		}
	}
	return 0;
}

int func_601()//Position - 0x1832F
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_99();
	}
	return func_602(Global_4718592.f_116524);
}

int func_602(int iParam0)//Position - 0x18353
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

int func_603(bool bParam0)//Position - 0x1838D
{
	if ((func_12(bParam0, 0, 1) && func_604()) && func_264(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_604()//Position - 0x183BA
{
	if (func_397(PLAYER::PLAYER_ID()) || func_606())
	{
		if (!func_605(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_605(int iParam0)//Position - 0x183E8
{
	if (func_328(iParam0) == 236 || func_328(iParam0) == 150)
	{
		return func_462(iParam0);
	}
	return 0;
}

int func_606()//Position - 0x18415
{
	switch (func_226(PLAYER::PLAYER_ID()))
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

int func_607(bool bParam0)//Position - 0x18453
{
	if (func_600())
	{
		if (func_12(bParam0, 0, 1))
		{
			return func_90(bParam0);
		}
	}
	if ((func_12(bParam0, 0, 1) && func_604()) && func_266(bParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_608(char* sParam0)//Position - 0x1849B
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_609()//Position - 0x184A9
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

int func_610()//Position - 0x184C5
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836359)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_611(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x184DD
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_610() && iParam3 < func_609())
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
					func_608("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_597(sParam16);
				}
				else
				{
					func_608(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_608("");
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
				if (func_632())
				{
					func_608("");
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
						func_597(&(uParam2->f_104));
					}
					else
					{
						func_608("");
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
					func_608("");
				}
				if (uParam2->f_108 == 6)
				{
					func_608("");
				}
				else
				{
					func_608(&sParam4);
				}
				func_599(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_608("");
					func_608("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_598(uParam2))
				{
					func_597("DPAD_FRIEND");
				}
				else if (func_596(uParam2))
				{
					func_597("DPAD_FRIEND");
				}
				else if (func_595(uParam2))
				{
					func_597("DPAD_CREW");
				}
				else
				{
					func_597("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_612(int iParam0)//Position - 0x18834
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

int func_613(bool bParam0, bool bParam1)//Position - 0x18858
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_397(bParam0)) && !func_111(bParam0))
	{
		iVar0 = func_66();
	}
	iVar1 = func_87(bParam0);
	if (!iVar1 == -1)
	{
		return func_85(iVar1);
	}
	return iVar0;
}

int func_614(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x188A2
{
	if (func_615(iParam3))
	{
		*fParam1 = (func_292(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_612(iParam3))
	{
		*fParam1 = (func_292(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_615(int iParam0)//Position - 0x188F2
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

int func_616(bool bParam0)//Position - 0x1894E
{
	int iVar0;
	
	iVar0 = func_619(bParam0);
	if (iVar0 == -1)
	{
		func_617(bParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_617(bool bParam0, bool bParam1)//Position - 0x18984
{
	if (!func_12(bParam0, 0, 1))
	{
		return;
	}
	if (func_619(bParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (bParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (func_618(bParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = bParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_618(bool bParam0)//Position - 0x189F0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_619(bool bParam0)//Position - 0x18A22
{
	int iVar0;
	
	if (!func_12(bParam0, 0, 1))
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
		if (Global_1660783[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1660783[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1660783[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_620(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_620(int iParam0)//Position - 0x18AA1
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
	func_621(&(Global_1660783[iVar2 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

void func_621(var uParam0)//Position - 0x18B57
{
	*uParam0 = 0;
	uParam0->f_1 = func_107();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_622(bool bParam0)//Position - 0x18B84
{
	char cVar0[32];
	
	if (func_12(bParam0, 0, 1))
	{
		Global_2787505 = { func_143(bParam0) };
		if (func_627())
		{
			if (func_586(Global_2787505))
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
		if (func_626(&Global_2787505))
		{
			Global_2787435 = { func_624(bParam0) };
			func_623(&Global_2787435, &cVar0);
		}
	}
	return cVar0;
}

void func_623(var* uParam0, char* sParam1)//Position - 0x18C05
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_624(bool bParam0)//Position - 0x18C17
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_625(bParam0))
	{
		return Global_1575090[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_143(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_625(int iParam0)//Position - 0x18C53
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_626(var* uParam0)//Position - 0x18C69
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

bool func_627()//Position - 0x18C8F
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

int func_628(bool bParam0, int iParam1, bool bParam2)//Position - 0x18CA5
{
	if (iParam1 == 27)
	{
		if ((func_8(bParam0) || func_630(bParam0)) || func_7(bParam0))
		{
			return 0;
		}
	}
	if (!func_629(bParam0))
	{
		return 0;
	}
	if (!func_638(bParam0) && !func_636(bParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

bool func_629(bool bParam0)//Position - 0x18D04
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_139, 22);
}

int func_630(bool bParam0)//Position - 0x18D1A
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1892703[bParam0 /*599*/].f_1, 10) || BitTest(Global_1892703[bParam0 /*599*/].f_1, 9));
	}
	return 0;
}

int func_631(bool bParam0)//Position - 0x18D52
{
	bool bVar0;
	
	if (bParam0 == func_107())
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
		if (BitTest(Global_1853348[bVar0 /*834*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_632()//Position - 0x18D94
{
	switch (func_226(PLAYER::PLAYER_ID()))
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
	switch (func_328(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_111(PLAYER::PLAYER_ID()))
	{
		switch (func_226(PLAYER::PLAYER_ID()))
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
	if (func_605(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_633(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x18ECE
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
				if (func_638(bVar1) || func_636(bVar1, bParam4))
				{
					if (func_634(bVar1, bParam1, 0))
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

int func_634(bool bParam0, int iParam1, bool bParam2)//Position - 0x18F47
{
	if (iParam1 != func_107())
	{
		if (!bParam2)
		{
			if (func_635(bParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1892703[bParam0 /*599*/].f_10 != func_107())
		{
			return iParam1 == Global_1892703[bParam0 /*599*/].f_10;
		}
	}
	return 0;
}

int func_635(int iParam0, int iParam1)//Position - 0x18F91
{
	if (iParam1 != func_107())
	{
		if (iParam0 != func_107())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 != func_107())
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

bool func_636(bool bParam0, bool bParam1)//Position - 0x18FD6
{
	if (bParam1)
	{
		return 0;
	}
	return (Global_2689235[bParam0 /*453*/].f_244 != -1 || func_637(bParam0));
}

bool func_637(int iParam0)//Position - 0x19000
{
	return Global_1853348[iParam0 /*834*/].f_192 != 0;
}

int func_638(bool bParam0)//Position - 0x19015
{
	if (!func_12(bParam0, 0, 1))
	{
		return 0;
	}
	if (!func_12(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_639(bParam0))
	{
		return 0;
	}
	if ((NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(bParam0, PLAYER::PLAYER_ID()) || func_226(bParam0) == 233) || func_226(bParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_639(int iParam0)//Position - 0x1907E
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_640(PLAYER::PLAYER_ID());
	bVar1 = func_640(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_640(int iParam0)//Position - 0x190BA
{
	return func_641(&(Global_2689235[iParam0 /*453*/].f_434), 0);
}

var func_641(var uParam0, int iParam1)//Position - 0x190D3
{
	return BitTest(*uParam0, iParam1);
}

void func_642(int* iParam0, int iParam1, int iParam2)//Position - 0x190E1
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_643(bool bParam0)//Position - 0x1910F
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

void func_644()//Position - 0x19141
{
	if (BitTest(Global_2815059.f_4657, 1))
	{
		if (func_309())
		{
			func_295();
		}
	}
}

int func_645()//Position - 0x19160
{
	if (BitTest(Global_2815059.f_4657, 0) && func_309())
	{
		return 1;
	}
	if (BitTest(Global_2815059.f_4657, 1) && func_309())
	{
		return 1;
	}
	return 0;
}

int func_646()//Position - 0x1919B
{
	if (func_309())
	{
		if (func_54(Global_2703735.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_647()//Position - 0x191C2
{
	if (func_309())
	{
		if (func_67(Global_2703735.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_648(int iParam0)//Position - 0x191E9
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

int func_649(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x19217
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
	bVar3 = func_694(iParam1);
	fVar4 = func_693();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_692())
		{
			if (func_691() > 0 && Global_1836359)
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
		if (!func_680())
		{
			func_679(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2815059.f_4660, 26))
	{
		func_679(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_47(&(uParam2->f_19)))
	{
		if (func_691() == 1)
		{
			func_678(bVar3, iParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_679(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2815059.f_4662), 5);
		}
	}
	if (func_47(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_691() == 0 && !bParam5))
		{
			func_679(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_677();
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
					func_677();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (func_678(bVar3, iParam0, 0))
				{
					func_642(iParam0, 0, 0);
					sVar1 = func_675(iParam1, &(Global_4718592.f_116531), bParam4);
					Var0 = { func_673(iParam1) };
					if (bParam4)
					{
						func_670(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_664(iParam0, func_667(uParam2), func_665(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_658(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						func_656(iParam0, sVar6, func_657(), -1);
					}
					else if (func_600())
					{
						uParam2->f_34 = Global_1836358;
						func_670(iParam0, sVar1, &Var0, 1, -1, Global_1836358, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_651(iParam1);
						uParam2->f_34 = Global_1836358;
						func_670(iParam0, sVar1, "", 0, iVar5, func_650(), 1);
					}
					else
					{
						iVar5 = func_651(iParam1);
						func_670(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
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

int func_650()//Position - 0x194EA
{
	return Global_1836358;
}

int func_651(int iParam0)//Position - 0x194F6
{
	int iVar0;
	
	iVar0 = -1;
	if (func_655())
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
			if (func_654(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_653(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_652(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_227())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_652(int iParam0)//Position - 0x1965B
{
	return Global_2689235[iParam0 /*453*/].f_119 == 4;
}

bool func_653(int iParam0)//Position - 0x19670
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

bool func_654(int iParam0)//Position - 0x19685
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_655()//Position - 0x1969A
{
	return Global_4718592.f_1 == 0;
}

void func_656(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x196AA
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_597(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_597("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_657()//Position - 0x19709
{
	switch (func_226(PLAYER::PLAYER_ID()))
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

char* func_658(var uParam0)//Position - 0x19761
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
	switch (func_226(PLAYER::PLAYER_ID()))
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
			if (func_660())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_263(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_263(1))
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
			if (func_659(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_659(int iParam0)//Position - 0x19B8D
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

bool func_660()//Position - 0x19BBF
{
	return (func_663() && func_661(func_662()));
}

int func_661(int iParam0)//Position - 0x19BD8
{
	return func_266(iParam0, 1);
}

int func_662()//Position - 0x19BE7
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_35;
}

bool func_663()//Position - 0x19BFE
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148;
}

void func_664(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x19C14
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_597(sParam1);
		}
		else if (func_328(PLAYER::PLAYER_ID()) == 133)
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
		func_597("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_665(var uParam0)//Position - 0x19C9B
{
	int iVar0;
	
	iVar0 = func_328(PLAYER::PLAYER_ID());
	if (func_666())
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
			switch (func_327())
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

bool func_666()//Position - 0x19E46
{
	return Global_1853221;
}

char* func_667(var uParam0)//Position - 0x19E52
{
	int iVar0;
	
	iVar0 = func_328(PLAYER::PLAYER_ID());
	if (func_666())
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
			if (func_669() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_669() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_327())
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
			if (func_668() == 1)
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

int func_668()//Position - 0x1A047
{
	return Global_2815059.f_5119;
}

int func_669()//Position - 0x1A056
{
	if (func_328(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2815059.f_5114;
	}
	return -1;
}

void func_670(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1A079
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_608(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_597(sParam1);
		}
		if (func_692() && iParam6)
		{
			if (func_672())
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
			func_597(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_671(PLAYER::PLAYER_ID()))
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

int func_671(int iParam0)//Position - 0x1A13A
{
	if (func_654(iParam0) || func_653(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_672()//Position - 0x1A15C
{
	return Global_1836359;
}

struct<4> func_673(int iParam0)//Position - 0x1A168
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_674(PLAYER::PLAYER_ID()) || func_652(PLAYER::PLAYER_ID()))
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
	if (func_600() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_591, 16);
	}
	return Var0;
}

bool func_674(int iParam0)//Position - 0x1A205
{
	return Global_2689235[iParam0 /*453*/].f_119 == 5;
}

char* func_675(int iParam0, char* sParam1, bool bParam2)//Position - 0x1A21A
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_600() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_676();
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

char* func_676()//Position - 0x1A384
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

void func_677()//Position - 0x1A3C8
{
	Global_43992 = 1;
}

bool func_678(bool bParam0, int* iParam1, bool bParam2)//Position - 0x1A3D4
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

void func_679(int* iParam0, var uParam1, bool bParam2)//Position - 0x1A414
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836357 = 0;
	func_590();
	Global_1836356 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_47(&(uParam1->f_19)))
		{
			func_46(&(uParam1->f_19));
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

int func_680()//Position - 0x1A483
{
	if (func_690())
	{
		return 0;
	}
	if (func_576())
	{
		return 0;
	}
	if (!func_688())
	{
		return 0;
	}
	if (!func_562())
	{
		return 0;
	}
	if (func_687(8, -1))
	{
		return 0;
	}
	if (func_691() == 2)
	{
		return 0;
	}
	if (Global_2815059.f_4612)
	{
		return 0;
	}
	if (func_322())
	{
		return 0;
	}
	else if (!func_360(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_686(1) || func_684(1)) || Global_23011.f_124) || Global_23011)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_683() && Global_1965530 == 2)
	{
		return 0;
	}
	if (func_105(PLAYER::PLAYER_ID()) && !func_683())
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
	if (func_682(0))
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
	if (func_681(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1640768 || Global_1640769) || Global_1640770)
	{
		return 0;
	}
	return 1;
}

int func_681(int iParam0)//Position - 0x1A65B
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 6);
}

bool func_682(int iParam0)//Position - 0x1A680
{
	return BitTest(Global_2815059.f_5195.f_47, iParam0);
}

bool func_683()//Position - 0x1A694
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 0));
}

int func_684(bool bParam0)//Position - 0x1A6B0
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_685(PLAYER::PLAYER_PED_ID()))
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

int func_685(int iParam0)//Position - 0x1A79B
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

bool func_686(bool bParam0)//Position - 0x1A7F8
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

bool func_687(int iParam0, int iParam1)//Position - 0x1A821
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

int func_688()//Position - 0x1A859
{
	if (func_689())
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

bool func_689()//Position - 0x1A898
{
	return Global_1574604;
}

bool func_690()//Position - 0x1A8A4
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

int func_691()//Position - 0x1A8B9
{
	return Global_1648034.f_68;
}

int func_692()//Position - 0x1A8C7
{
	if (Global_1836358 > 16)
	{
		return 1;
	}
	return 0;
}

float func_693()//Position - 0x1A8DD
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_694(int iParam0)//Position - 0x1A901
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

int func_695()//Position - 0x1A933
{
	if (func_698())
	{
		return 1;
	}
	if (func_7(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_666())
	{
		return 1;
	}
	if (func_397(PLAYER::PLAYER_ID()))
	{
		switch (func_328(PLAYER::PLAYER_ID()))
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
				if (!func_696(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_696(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_696(PLAYER::PLAYER_ID()))
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

bool func_696(int iParam0)//Position - 0x1AA0E
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 4);
}

int func_697(int iParam0)//Position - 0x1AA23
{
	if (iParam0 == 28)
	{
		if ((func_397(PLAYER::PLAYER_ID()) && !func_111(PLAYER::PLAYER_ID())) && !func_605(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_117(PLAYER::PLAYER_ID(), 0) && func_111(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_569(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_698()//Position - 0x1AA92
{
	if (func_699(PLAYER::PLAYER_ID()))
	{
		return Global_1581339;
	}
	return 0;
}

int func_699(bool bParam0)//Position - 0x1AAAD
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

void func_700()//Position - 0x1AAD0
{
	if (Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
	{
		if (!BitTest(uLocal_121, 8))
		{
			if ((!func_7(PLAYER::PLAYER_ID()) && !func_168(PLAYER::PLAYER_ID())) && !func_410(PLAYER::PLAYER_ID()))
			{
				func_409();
			}
		}
		else if (!BitTest(uLocal_121, 9))
		{
			if ((func_7(PLAYER::PLAYER_ID()) || func_168(PLAYER::PLAYER_ID())) || func_410(PLAYER::PLAYER_ID()))
			{
				STATS::_STAT_TRACKING_CLEAR_PROGRESS();
				Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4 = 0;
				MISC::SET_BIT(&uLocal_121, 9);
			}
		}
	}
}

void func_701()//Position - 0x1AB6B
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_125)))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_125));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			func_702(bVar0, 2);
		}
	}
	iLocal_125++;
	if (iLocal_125 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_125 = 0;
	}
}

void func_702(bool bParam0, int iParam1)//Position - 0x1ABB4
{
	bool bVar0;
	
	if (BitTest(Global_1836844.f_1, 0))
	{
		return;
	}
	if (func_47(&(Global_1836844.f_18)))
	{
		return;
	}
	if (BitTest(Global_1836844.f_2, bParam0))
	{
		if (Global_1836844 < iParam1 && BitTest(Global_1836844.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 0);
			return;
		}
		if (Global_1836844 != 0)
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 1);
		}
		Global_1836844 = 0;
		Global_1836844.f_2 = 0;
	}
	MISC::SET_BIT(&(Global_1836844.f_2), bParam0);
	bVar0 = true;
	if (func_8(bParam0))
	{
		bVar0 = false;
	}
	if (func_703(bParam0))
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
		Global_1836844++;
	}
}

bool func_703(bool bParam0)//Position - 0x1AC79
{
	return BitTest(Global_1892703[bParam0 /*599*/].f_1, 10);
}

void func_704(int iParam0, int iParam1)//Position - 0x1AC8F
{
	Local_1516[iParam0 /*12*/] = iParam1;
}

int func_705()//Position - 0x1ACA0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_171.f_534[iVar0 /*42*/].f_1 = func_107();
		iVar0++;
	}
	return 1;
}

int func_706()//Position - 0x1ACCC
{
	return Local_150.f_0;
}

int func_707(int iParam0)//Position - 0x1ACD7
{
	return Local_1516[iParam0 /*12*/];
}

void func_708()//Position - 0x1ACE6
{
	if (BitTest(Global_1836844.f_1, 6))
	{
		func_732();
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 6);
	}
	if (!BitTest(Global_1836844.f_1, 7))
	{
		if (BitTest(Global_1836844.f_1, 4) || BitTest(Global_1836844.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_309()) && func_12(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 7);
				func_302("FME_PASINT", 30000);
				func_301(1);
			}
		}
		else if (BitTest(Global_1836844.f_1, 17))
		{
			if (func_171() && !func_170())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 17);
				MISC::SET_BIT(&(Global_1836844.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836844.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_730())
			{
				func_302("AMEV_GA_RP", -1);
				if (func_226(PLAYER::PLAYER_ID()) != 200)
				{
					func_301(1);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_423(PLAYER::PLAYER_ID()))
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
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_309()) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !func_169(PLAYER::PLAYER_ID(), 21)) && !func_169(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 9);
			func_729(0);
			func_302("FME_TBL00", -1);
			func_301(1);
		}
	}
	if (func_397(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836844.f_1, 18))
		{
			if ((func_169(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836844.f_1, 20)) && !BitTest(Global_1836844.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 18);
			}
		}
		else if (BitTest(Global_1836844.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_309()) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !func_728())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 18);
				MISC::SET_BIT(&(Global_1836844.f_1), 19);
				func_302("AMTT_RPAS", -1);
				func_301(1);
			}
		}
	}
	if (((((func_397(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID())) && func_328(PLAYER::PLAYER_ID()) != 146) && !func_7(PLAYER::PLAYER_ID())) && !func_168(PLAYER::PLAYER_ID())) && !func_718())
	{
		if (func_422(func_328(PLAYER::PLAYER_ID())))
		{
			PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836844.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 22);
		}
		if (func_462(PLAYER::PLAYER_ID()) || func_416())
		{
			if (!BitTest(Global_1836844.f_1, 10))
			{
				if (func_717(func_328(PLAYER::PLAYER_ID())))
				{
					if (func_270(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836844.f_1), 9);
					}
					if (!Global_2653189)
					{
						func_420(1);
						MISC::SET_BIT(&(Global_1836844.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 10);
			}
		}
		if (func_423(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836844.f_1, 11))
			{
				if (!Global_100493.f_8)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 12);
					func_418(1);
				}
				if (!func_716())
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 13);
					func_417();
				}
				if (!Global_2653189)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 14);
					if (func_270(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836844.f_1), 9);
					}
					func_420(1);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 11);
			}
		}
		else
		{
			func_714(0);
		}
	}
	else
	{
		func_714(1);
	}
	func_709();
	if (func_415(func_328(PLAYER::PLAYER_ID())) && !BitTest(Global_1836844.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 21);
	}
	if (((func_171() && !func_170()) || func_169(PLAYER::PLAYER_ID(), 21)) || func_169(PLAYER::PLAYER_ID(), 25))
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

void func_709()//Position - 0x1B1ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_309())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_550(iVar2))
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
				func_710(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836844.f_1, 26))
	{
		func_46(&(Global_1836844.f_22));
		MISC::SET_BIT(&(Global_1836844.f_1), 26);
	}
}

void func_710(int iParam0, int iParam1)//Position - 0x1B28A
{
	if (!func_47(&(Global_1836844.f_22)))
	{
		func_2(&(Global_1836844.f_22), 0, 0);
	}
	else if (func_1(&(Global_1836844.f_22), iParam1, 0))
	{
		if (func_691() > 0)
		{
			func_713(iParam0);
			if (func_299("AMEV_LBD_HELP"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_46(&(Global_1836844.f_22));
		}
	}
	else
	{
		func_712(0);
		func_711();
	}
}

void func_711()//Position - 0x1B2F3
{
	Global_2815059.f_4599 = 0;
}

void func_712(int iParam0)//Position - 0x1B303
{
	Global_1648034.f_68 = iParam0;
}

void func_713(int iParam0)//Position - 0x1B313
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			func_108(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_714(int iParam0)//Position - 0x1B35F
{
	if ((BitTest(Global_1836844.f_1, 11) || (BitTest(Global_1836844.f_1, 10) && iParam0)) || (BitTest(Global_1836844.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836844.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 12);
			func_418(0);
		}
		if (BitTest(Global_1836844.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 13);
			func_715();
		}
		if (BitTest(Global_1836844.f_1, 14) && !func_117(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 14);
			func_420(0);
		}
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 22);
	}
}

void func_715()//Position - 0x1B428
{
	MISC::CLEAR_BIT(&(Global_2815059.f_5033), 0);
}

bool func_716()//Position - 0x1B43C
{
	return BitTest(Global_2815059.f_5033, 0);
}

int func_717(int iParam0)//Position - 0x1B44D
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
			return func_423(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_416() || func_5(func_327()));
		
		default:
	}
	return 0;
}

int func_718()//Position - 0x1B4BD
{
	if (((((((((func_727() || func_726()) || func_725()) || func_322()) || (func_724() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_721() && !func_720())) || Global_2656879) || Global_2656879.f_1 != 0) || Global_2656953 != 0) || (func_719() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_719()//Position - 0x1B551
{
	return Global_1057409;
}

bool func_720()//Position - 0x1B55D
{
	return BitTest(Global_2714762.f_2, 27);
}

int func_721()//Position - 0x1B56E
{
	if (func_723() || func_722())
	{
		return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8;
	}
	return 0;
}

var func_722()//Position - 0x1B59B
{
	return Global_2714762.f_735;
}

var func_723()//Position - 0x1B5AA
{
	return BitTest(Global_2714762.f_2, 11);
}

var func_724()//Position - 0x1B5BB
{
	return BitTest(Global_2714762, 5);
}

var func_725()//Position - 0x1B5C9
{
	return BitTest(Global_2714762, 2);
}

var func_726()//Position - 0x1B5D7
{
	return BitTest(Global_2714762, 20);
}

bool func_727()//Position - 0x1B5E6
{
	return Global_2714762.f_698;
}

bool func_728()//Position - 0x1B5F5
{
	return Global_2815059.f_5128 != -1;
}

void func_729(int iParam0)//Position - 0x1B606
{
	int iVar0;
	
	iVar0 = func_213(2537, -1, 0);
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
	func_204(2537, iVar0, -1, 1, 0);
}

int func_730()//Position - 0x1B71A
{
	int iVar0;
	
	if (!func_47(&(Global_1836844.f_15)))
	{
		func_2(&(Global_1836844.f_15), 0, 0);
		Global_1836844.f_17 = 0;
	}
	else if (func_1(&(Global_1836844.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836844.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836844.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_731(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_38(PLAYER::PLAYER_ID()), func_38(iVar0)) < 80f)
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
			func_46(&(Global_1836844.f_15));
		}
	}
	return 0;
}

int func_731(int iParam0, int iParam1)//Position - 0x1B7E2
{
	int iVar0;
	
	if (func_399() != 0)
	{
		return 0;
	}
	if (!func_208(iParam0))
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

void func_732()//Position - 0x1B81B
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_734();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1836844.f_1), 8);
	func_733();
}

void func_733()//Position - 0x1B841
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

void func_734()//Position - 0x1B938
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

int func_735()//Position - 0x1B97F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_2815059.f_5031)
	{
		return 0;
	}
	if ((!func_47(&(Local_150.f_39)) && !func_47(&(Local_150.f_41))) && !func_47(&(Local_150.f_43)))
	{
		return 0;
	}
	iVar2 = NETWORK::GET_NETWORK_TIME();
	if (func_47(&(Local_150.f_41)))
	{
		iVar0 = func_736(&iVar2, &(Local_150.f_41));
		iVar1 = 20000;
	}
	else if (func_47(&(Local_150.f_39)))
	{
		iVar0 = func_736(&iVar2, &(Local_150.f_39));
		iVar1 = func_28(0);
	}
	else if (func_47(&(Local_150.f_43)))
	{
		iVar0 = func_736(&iVar2, &(Local_150.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_736(int iParam0, var uParam1)//Position - 0x1BA42
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*iParam0, *uParam1));
}

int func_737()//Position - 0x1BA58
{
	if (func_738())
	{
		return 1;
	}
	return 0;
}

bool func_738()//Position - 0x1BA6C
{
	return Global_1836844.f_24;
}

int func_739()//Position - 0x1BA7A
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_742())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_741())
	{
		return 1;
	}
	if (func_740(159))
	{
		if (!func_727())
		{
			return 1;
		}
	}
	if (func_740(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_425() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_425()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_740(int iParam0)//Position - 0x1BAFE
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_741()//Position - 0x1BB15
{
	return Global_2725403;
}

bool func_742()//Position - 0x1BB21
{
	return Global_2714762.f_693;
}

void func_743()//Position - 0x1BB30
{
	SYSTEM::WAIT(0);
}

void func_744()//Position - 0x1BB3D
{
	int iVar0;
	
	if (func_739())
	{
		Local_1517.f_5 = 5;
	}
	else if (BitTest(Local_150.f_2, 0))
	{
		Local_1517.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_1517.f_5 = 1;
	}
	else
	{
		Local_1517.f_5 = 2;
	}
	Local_1517.f_0 = Local_150.f_52;
	Local_1517.f_1 = Local_150.f_53;
	Local_1517.f_4 = Local_150.f_66;
	Local_1517.f_3 = Local_150.f_51;
	Local_1517.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_1517.f_9);
	if (!Global_262145.f_11972)
	{
		if (Local_1517.f_6 > 0)
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
			func_780(Local_1517, Local_150.f_3, Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4, iVar0, -1, -1, -1);
		}
	}
	if (BitTest(uLocal_121, 4))
	{
		AUDIO::STOP_SOUND(iLocal_129);
		MISC::CLEAR_BIT(&uLocal_121, 4);
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_129);
	AUDIO::RELEASE_SOUND_ID(iLocal_130);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((BitTest(uLocal_146, iVar0) && iLocal_147[iVar0] != -1) && !AUDIO::HAS_SOUND_FINISHED(iLocal_147[iVar0]))
		{
			AUDIO::STOP_SOUND(iLocal_147[iVar0]);
			AUDIO::RELEASE_SOUND_ID(iLocal_147[iVar0]);
		}
		iVar0++;
	}
	func_406();
	func_473(1, 1);
	VEHICLE::_0x26D99D5A82FD18E8(0);
	func_552(0);
	func_413(Local_150.f_3, 0);
	func_745(133, 0, Local_150.f_37 == 6);
	func_412(23, 0);
	if (func_314() >= 0f)
	{
		HUD::_SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL(0f, false, 21);
	}
	if (!BitTest(uLocal_121, 9))
	{
		STATS::_STAT_TRACKING_CLEAR_PROGRESS();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_745(int iParam0, bool bParam1, bool bParam2)//Position - 0x1BCCD
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
	func_776();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = func_775(func_328(PLAYER::PLAYER_ID()));
		func_412(func_431(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_774(PLAYER::PLAYER_ID()) >= 12)
		{
			func_773(2549, -1);
			iVar1 = func_213(2549, -1, 0);
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
		func_772();
		func_771();
		func_770();
		if ((!func_113(PLAYER::PLAYER_ID()) && !func_308(PLAYER::PLAYER_ID())) && !func_464())
		{
			func_754();
		}
		func_753();
		if (!BitTest(Global_1943920.f_3, 0) && !BitTest(Global_1943920.f_3, 1))
		{
			func_732();
		}
		func_752();
		MISC::CLEAR_BIT(&(Global_2815059.f_1811), 2);
		func_751();
		func_173();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_169(PLAYER::PLAYER_ID(), 21)) && !func_169(PLAYER::PLAYER_ID(), 25)) && !func_117(PLAYER::PLAYER_ID(), 0))
		{
			func_420(0);
			func_418(0);
			if (!bParam1)
			{
				func_750();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_50(26, -1))
		{
			Global_2727723 = -1;
			func_48(26, -1);
		}
	}
	if (!func_746())
	{
		Global_2787396 = 1;
	}
}

int func_746()//Position - 0x1BF2A
{
	if (((((((!func_671(PLAYER::PLAYER_ID()) && !func_652(PLAYER::PLAYER_ID())) && func_328(PLAYER::PLAYER_ID()) != 146) && !func_749()) && !func_748()) && !func_747(Global_4718592.f_168757)) && !func_97()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_747(int iParam0)//Position - 0x1BFA5
{
	return iParam0 == 57;
}

int func_748()//Position - 0x1BFB2
{
	if (Global_4718592.f_116524 == Global_262145.f_10062)
	{
		return 1;
	}
	return 0;
}

int func_749()//Position - 0x1BFD3
{
	if ((Global_4718592 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_168757 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_750()//Position - 0x1C06F
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

void func_751()//Position - 0x1C0BF
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

void func_752()//Position - 0x1C15A
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836844 = { Var0 };
}

void func_753()//Position - 0x1C189
{
	var uVar0;
	
	Global_1581339 = uVar0;
}

void func_754()//Position - 0x1C197
{
	MISC::_COPY_MEMORY(&(Global_2667225.f_24), &Global_2671509, 2);
	MISC::_COPY_MEMORY(&(Global_2667225.f_26), &Global_2671511, 19);
	func_768();
	func_757(1, 1, 0);
	func_755();
}

void func_755()//Position - 0x1C1CD
{
	func_756(0, 0);
}

void func_756(int iParam0, int iParam1)//Position - 0x1C1DB
{
	Global_2667225.f_22 = iParam0;
	Global_2667225.f_23 = iParam1;
}

void func_757(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1C1F3
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
		func_767();
	}
	if (!bParam2)
	{
		func_759(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_758(0);
	func_176();
}

void func_758(bool bParam0)//Position - 0x1C299
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

void func_759(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x1C2B9
{
	if (bParam0)
	{
		if (func_766())
		{
			func_765();
		}
		Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_714.f_504 = iParam1;
		Global_2667225.f_714.f_505 = iParam2;
		Global_2667225.f_714.f_506 = iParam10;
		func_763();
		func_459(8, 0, 0, 0, 0);
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
		func_760();
	}
}

void func_760()//Position - 0x1C3A4
{
	if (func_766() && !func_762())
	{
		func_765();
	}
	if (func_762())
	{
		func_761();
	}
	else
	{
		func_763();
		func_459(0, 0, 0, 0, 0);
		Global_2667225.f_1753 = 0;
		Global_2667225.f_1752 = 0;
	}
}

void func_761()//Position - 0x1C3EC
{
	MISC::_COPY_MEMORY(&(Global_2667225.f_714), &(Global_2667225.f_1233), 519);
	Global_2667225.f_490 = { Global_2667225.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518)
	{
		Global_2667225.f_1752 = 0;
	}
}

int func_762()//Position - 0x1C434
{
	if ((Global_2667225.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_1233.f_518))
	{
		return 1;
	}
	return 0;
}

void func_763()//Position - 0x1C473
{
	if (func_766() && !func_762())
	{
		func_765();
	}
	func_764();
	Global_2667225.f_714 = 0;
}

void func_764()//Position - 0x1C49C
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

void func_765()//Position - 0x1C4D7
{
	if (func_762())
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

int func_766()//Position - 0x1C545
{
	if ((Global_2667225.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_714.f_518))
	{
		return 1;
	}
	return 0;
}

void func_767()//Position - 0x1C584
{
	MISC::_COPY_MEMORY(&(Global_2667225.f_368), &Global_2671853, 121);
}

void func_768()//Position - 0x1C59D
{
	func_769();
}

void func_769()//Position - 0x1C5A9
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

void func_770()//Position - 0x1C5DD
{
	Global_2815059.f_5033 = 0;
}

void func_771()//Position - 0x1C5ED
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1 = 0;
	}
}

void func_772()//Position - 0x1C60B
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1892703[iVar0 /*599*/] = -1;
	}
}

void func_773(int iParam0, int iParam1)//Position - 0x1C629
{
	int iVar0;
	
	iVar0 = func_213(iParam0, func_209(iParam1), 0);
	iVar0++;
	if (!func_212(iParam0))
	{
		func_204(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_205(iParam0, iVar0, iParam1, 1);
	}
}

int func_774(int iParam0)//Position - 0x1C66A
{
	return Global_1853348[iParam0 /*834*/].f_205.f_6;
}

int func_775(int iParam0)//Position - 0x1C67F
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
			if (func_423(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_776()//Position - 0x1C6E1
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
	func_779(0);
	func_778(0);
	func_777(0);
}

void func_777(int iParam0)//Position - 0x1C773
{
	if (Global_2815059.f_4587 != iParam0)
	{
		Global_2815059.f_4587 = iParam0;
	}
}

void func_778(bool bParam0)//Position - 0x1C790
{
	if (Global_2815059.f_4586 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2815059.f_4586 = bParam0;
	}
}

void func_779(int iParam0)//Position - 0x1C7B5
{
	if (Global_2815059.f_4584 != iParam0)
	{
		Global_2815059.f_4584 = iParam0;
	}
}

void func_780(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1C7D2
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
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_781()))
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

char* func_781()//Position - 0x1CA4D
{
	switch (Global_2727899)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_782(struct<21> Param0)//Position - 0x1CA6F
{
	int iVar0;
	
	func_791(func_792(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(func_790(9));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(func_789(9));
	func_786(0, -1, 0);
	func_784(133);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_150, 88, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1516, 385, 0);
	if (!func_783())
	{
		func_744();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		STATS::_0x6DEE77AFF8C21BD1(&(Local_150.f_52), &(Local_150.f_53));
	}
	Local_1517.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_147[iVar0] = -1;
		iVar0++;
	}
	return 1;
}

int func_783()//Position - 0x1CB09
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
		if (func_742())
		{
			return 0;
		}
		if (func_740(157))
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

void func_784(int iParam0)//Position - 0x1CB62
{
	func_752();
	func_785();
	func_770();
	Global_1836844.f_4 = iParam0;
	Global_1836844.f_5 = iParam0;
	func_430(iParam0, -1);
	func_27(&(Global_1836844.f_18), 0, 0);
	Global_2815059.f_4657 = 0;
	Global_2726607[0] = func_107();
	Global_2726607[1] = func_107();
	Global_2726607[2] = func_107();
	Global_2726607[3] = func_107();
	Global_2726607[4] = func_107();
	func_173();
	if (!func_565(func_296()))
	{
		func_295();
	}
	if (func_171() && !func_170())
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 17);
	}
}

void func_785()//Position - 0x1CC18
{
	var uVar0;
	
	Global_1836869 = uVar0;
}

int func_786(int iParam0, int iParam1, bool bParam2)//Position - 0x1CC26
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_788();
			}
			else
			{
				return 0;
			}
		}
		if (!func_787(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_788();
					}
					else
					{
						return 0;
					}
				}
				if (func_742())
				{
					if (!bParam2)
					{
						func_788();
					}
					else
					{
						return 0;
					}
				}
				if (func_740(157))
				{
					if (!bParam2)
					{
						func_788();
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
					func_788();
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
				func_788();
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
			func_788();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_787(bool bParam0)//Position - 0x1CD3C
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_788()//Position - 0x1CD4D
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_789(int iParam0)//Position - 0x1CD59
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

int func_790(int iParam0)//Position - 0x1CE33
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

void func_791(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1CF0B
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_788();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_792(int iParam0)//Position - 0x1CF2A
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
	switch (func_128(func_793(iParam0, 1)))
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

int func_793(int iParam0, bool bParam1)//Position - 0x1D6A1
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

