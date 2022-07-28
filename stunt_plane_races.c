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
	float fLocal_13 = 0f;
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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	struct<3> Local_30 = { 0, 0, 0 } ;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<328> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 4;
	var uLocal_62 = 0;
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
	var uLocal_76 = 4;
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
	var uLocal_91 = 4;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 4;
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
	var uLocal_121 = 4;
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
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	struct<3> Local_184 = { 0, 0, 0 } ;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int* iLocal_187 = NULL;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	bool bLocal_190 = 0;
	bool bLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196[5] = { 0, 0, 0, 0, 0 };
	float fLocal_197 = 0f;
	float fLocal_198 = 0f;
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
	float fLocal_218 = 0f;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	bool bLocal_222 = 0;
	var uLocal_223 = 35;
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
	var uLocal_539 = 50;
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
	var uLocal_550 = 0;
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
	var uLocal_572 = 0;
	var uLocal_573 = 0;
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
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
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
	var uLocal_614 = 0;
	var uLocal_615 = 0;
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
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 40;
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
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
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
	var uLocal_698 = 0;
	var uLocal_699 = 0;
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
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
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
	var uLocal_740 = 0;
	var uLocal_741 = 0;
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
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
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
	var uLocal_782 = 0;
	var uLocal_783 = 0;
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
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
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
	var uLocal_824 = 0;
	var uLocal_825 = 0;
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
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
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
	var uLocal_866 = 0;
	var uLocal_867 = 0;
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
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
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
	var uLocal_908 = 0;
	var uLocal_909 = 0;
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
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
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
	var uLocal_950 = 0;
	var uLocal_951 = 0;
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
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
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
	var uLocal_992 = 0;
	var uLocal_993 = 0;
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
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
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
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
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
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
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
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
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
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
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
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
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
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
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
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
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
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
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
	var uLocal_1199 = 1;
	var uLocal_1200 = 0;
	var uLocal_1201 = 1;
	var uLocal_1202 = 1;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 1;
	var uLocal_1207 = 1;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 3;
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
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
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
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
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
	var uLocal_1258 = 4;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
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
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
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
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
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
	var uLocal_1323 = 2;
	var uLocal_1324 = 0;
	var uLocal_1325 = 4;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
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
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
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
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
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
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 4;
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
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
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
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
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
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 12;
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
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
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
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
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
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 3;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	int iLocal_1647 = 0;
	var uLocal_1648 = 0;
	int iLocal_1649 = 0;
	int iLocal_1650 = 0;
	int iLocal_1651 = 0;
	int iLocal_1652 = 0;
	int iLocal_1653 = 0;
	int iLocal_1654 = 0;
	int iLocal_1655 = 0;
	int iLocal_1656 = 0;
	int iLocal_1657 = 0;
	int iLocal_1658 = 0;
	int iLocal_1659 = 0;
	int iLocal_1660 = 0;
	int iLocal_1661 = 0;
	int iLocal_1662 = 0;
	int iLocal_1663 = 0;
	int iLocal_1664 = 0;
	int iLocal_1665 = 0;
	int iLocal_1666 = 0;
	int iLocal_1667 = 0;
	int iLocal_1668 = 0;
	int iLocal_1669 = 0;
	int* iLocal_1670 = NULL;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	int* iLocal_1673 = NULL;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	int* iLocal_1676 = NULL;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	int* iLocal_1679 = NULL;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	int* iLocal_1682 = NULL;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	int* iLocal_1685 = NULL;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	int* iLocal_1688 = NULL;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	int* iLocal_1691 = NULL;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	int* iLocal_1694 = NULL;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	int* iLocal_1697 = NULL;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	int* iLocal_1700 = NULL;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	int* iLocal_1703 = NULL;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	int iLocal_1706 = 0;
	int iLocal_1707 = 0;
	int* iLocal_1708 = NULL;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	int iLocal_1713[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1714[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1715[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	int iLocal_1718 = 0;
	float fLocal_1719 = 0f;
	int iLocal_1720 = 0;
	int iLocal_1721 = 0;
	int iLocal_1722 = 0;
	int* iLocal_1723 = NULL;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 16;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	char* sLocal_1892 = NULL;
	float fLocal_1893 = 0f;
	float fLocal_1894 = 0f;
	bool bLocal_1895 = 0;
	bool bLocal_1896 = 0;
	struct<3> Local_1897 = { 0, 0, 0 } ;
	struct<3> Local_1898 = { 0, 0, 0 } ;
	struct<3> Local_1899 = { 0, 0, 0 } ;
	float fLocal_1900 = 0f;
	float fLocal_1901 = 0f;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = -1;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 1000;
	var uLocal_1912 = 1000;
	var uLocal_1913 = 0;
	char[] cLocal_1914[8] = 0;
	char* sLocal_1915 = NULL;
	bool bLocal_1916 = 0;
	int* iLocal_1917 = NULL;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	int* iLocal_1920 = NULL;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	int* iLocal_1923 = NULL;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	bool bLocal_1926 = 0;
	int iLocal_1927 = 0;
	int iLocal_1928 = 0;
	struct<7> Local_1929 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	int iLocal_1935 = 0;
	int iLocal_1936 = 0;
	char* sLocal_1937 = NULL;
	char* sLocal_1938 = NULL;
	char* sLocal_1939 = NULL;
	struct<3> Local_1940 = { 0, 0, 0 } ;
	struct<3> Local_1941 = { 0, 0, 0 } ;
	int iLocal_1942 = 0;
	int iLocal_1943 = 0;
	int iLocal_1944 = 0;
	int iLocal_1945 = 0;
	int iLocal_1946 = 0;
	int iLocal_1947 = 0;
	int iLocal_1948 = 0;
	int iLocal_1949 = 0;
	struct<7> Local_1950 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 1132396544;
	var uLocal_1955 = 1132396544;
	var uLocal_1956 = 1132396544;
	var uLocal_1957 = 0;
	var uLocal_1958 = -1082130432;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 8;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = -1;
	var uLocal_2019 = 1092616192;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	int* iLocal_2022 = NULL;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	int* iLocal_2025 = NULL;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	int iLocal_2028 = 0;
	int iLocal_2029 = 0;
	bool bLocal_2030 = 0;
	bool bLocal_2031 = 0;
	int* iLocal_2032 = NULL;
	bool bLocal_2033 = 0;
	int iLocal_2034 = 0;
	struct<2863> Local_2035 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2036 = 1;
	var uLocal_2037 = 0;
	int* iLocal_2038 = NULL;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	struct<3> Local_2041 = { 0, 0, 0 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_43 = { 1691.228f, 3251.785f, 44.2574f };
	Local_44 = { 2.5652f, 0f, -4.1481f };
	Local_184 = { 500f, 500f, 500f };
	iLocal_185 = -1;
	iLocal_194 = 1;
	fLocal_197 = 0.008f;
	fLocal_198 = 0.013f;
	fLocal_218 = ((0.05f + 0.275f) - 0.01f);
	fLocal_1719 = -1f;
	iLocal_1720 = 1;
	fLocal_1893 = 0.2f;
	fLocal_1894 = 0.2f;
	fLocal_1901 = 0f;
	cLocal_1914 = "SPR_UI_FAILD";
	sLocal_1915 = "SPR_UI_FRETRY";
	sLocal_1937 = "CHECKPOINT_NORMAL";
	sLocal_1938 = "CHECKPOINT_MISSED";
	sLocal_1939 = "CHECKPOINT_PERFECT";
	Local_1940 = { 1694.74f, 3276.502f, 41.2796f };
	Local_1941 = { 8.79494f, 0.59893f, 154.8464f };
	bLocal_2030 = true;
	bLocal_2031 = true;
	bLocal_2033 = true;
	Local_2041 = { -1497.708f, -3449.576f, 7.3477f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114))
	{
		func_614();
	}
	MISC::SET_MISSION_FLAG(true);
	Local_1950.f_1 = 0;
	Local_1950.f_5 = 0;
	Local_1950.f_6 = 0;
	while (true)
	{
		func_613();
		switch (Local_1950.f_1)
		{
			case 0:
				if (!func_602())
				{
					Local_1950.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_1950.f_1 = 2;
				}
				break;
			
			case 2:
				func_614();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x1CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_45.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_45.f_1, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_45.f_1, false))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					Local_45.f_1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		Local_45.f_1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		Local_45.f_1 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, joaat("stunt"), 0);
	}
	if (Local_2035.f_2861 != 0)
	{
		Local_2035.f_2862 = (Local_2035.f_2862 - 25);
		if (Local_2035.f_2862 <= 0)
		{
			GRAPHICS::DELETE_CHECKPOINT(Local_2035.f_2861);
			Local_2035.f_2861 = 0;
			bLocal_1916 = false;
		}
		else
		{
			if (bLocal_1916)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			func_599(func_600(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(Local_2035.f_2861, iVar0, iVar1, iVar2, func_598(SYSTEM::CEIL((1.5f * IntToFloat(Local_2035.f_2862))), 255));
			GRAPHICS::SET_CHECKPOINT_RGBA2(Local_2035.f_2861, iVar0, iVar1, iVar2, Local_2035.f_2862);
		}
	}
	func_597();
	TASK::SET_EXCLUSIVE_SCENARIO_GROUP("AMMUNATION");
	PAD::DISABLE_CONTROL_ACTION(0, 99, true);
	PAD::DISABLE_CONTROL_ACTION(0, 100, true);
	if (Local_1950.f_6 == 4)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45.f_1, false))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(Local_45.f_1))
			{
				FIRE::STOP_ENTITY_FIRE(Local_45.f_1);
			}
		}
	}
	switch (Local_1950.f_6)
	{
		case 0:
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Local_1950.f_0 = -1;
			Local_45.f_10 = 0;
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1734.802f, 3224.105f, 41.3709f, 1762.067f, 3258.69f, 40.5188f, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_45.f_1))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_45.f_1, 1);
				Local_2035.f_2859 = 0;
				Local_1950.f_6 = 3;
			}
			else
			{
				Local_1950.f_6 = 1;
			}
			break;
		
		case 1:
			Local_1950.f_6 = 18;
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_45.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_45.f_1, 1);
				Local_2035.f_2859 = 0;
				Local_1950.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2035.f_0)
			{
			}
			else if ((CAM::DOES_CAM_EXIST(iLocal_1706) && CAM::IS_CAM_ACTIVE(iLocal_1706)) && CAM::IS_SCREEN_FADED_IN())
			{
				if (CAM::DOES_CAM_EXIST(Local_2035.f_2858))
				{
					CAM::DESTROY_CAM(Local_2035.f_2858, false);
				}
				GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionOut");
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
				Local_2035.f_2858 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_43, Local_44, 34.9705f, true, 2);
				CAM::SET_CINEMATIC_MODE_ACTIVE(false);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
				CAM::SET_CAM_COORD(iLocal_1706, Local_43.f_0, Local_43.f_1, (Local_43.f_2 + 1000f));
				CAM::SET_CAM_ROT(iLocal_1706, 90f, Local_44.f_1, Local_44.f_2, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_2035.f_2858, iLocal_1706, 500, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			else
			{
				func_596(500);
				if (CAM::DOES_CAM_EXIST(Local_2035.f_2858))
				{
					CAM::DESTROY_CAM(Local_2035.f_2858, false);
				}
				Local_2035.f_2858 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_43, Local_44, 34.9705f, true, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			func_595(&iLocal_1930);
			func_594(1);
			STREAMING::CLEAR_FOCUS();
			Local_1950.f_6 = 4;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_45.f_1, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_45.f_1, true, false, false);
			}
			if (MISC::IS_PC_VERSION())
			{
				PAD::DISABLE_CONTROL_ACTION(2, 199, true);
			}
			PAD::DISABLE_CONTROL_ACTION(2, 200, true);
			HUD::DISPLAY_RADAR(false);
			Local_2035.f_2 = Local_2035.f_0;
			if (Local_2035.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2035.f_358[0 /*189*/].f_9))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2035.f_358[0 /*189*/].f_9, 4);
				}
				iLocal_1650 = 0;
				Local_2035.f_0 = 0;
				func_563();
				Local_1950.f_6 = 8;
			}
			else if (Local_2035.f_2859)
			{
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					if ((Local_2035.f_2859 && PAD::IS_CONTROL_JUST_RELEASED(2, 202)) && SYSTEM::TIMERA() > 500)
					{
						AUDIO::PLAY_SOUND(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", false, 0, true);
						Local_2035.f_2859 = 0;
						Local_2035.f_2860 = 1;
						func_562(&(Local_45.f_119));
						SYSTEM::SETTIMERA(0);
					}
					if (!Local_2035.f_2860 && func_561(&uLocal_1210))
					{
						Local_2035.f_2860 = 1;
						func_559(Local_2035.f_2860);
					}
					func_492(&(Local_45.f_118), Global_112416, &(Local_45.f_24[Global_112416 /*8*/]));
				}
				else if (func_481(&iLocal_1647, 0))
				{
					Local_2035.f_2859 = 0;
					iLocal_1647 = 0;
					func_562(&(Local_45.f_119));
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if ((func_442(&Local_2035, 0) && !iLocal_192) && !bLocal_191)
				{
					func_562(&(Local_45.f_119));
				}
				if (iLocal_195 && PLAYER::IS_PLAYER_ONLINE())
				{
					func_562(&(Local_45.f_119));
					iLocal_195 = 0;
				}
				if ((((!Local_2035.f_2859 && !iLocal_192) && !bLocal_191) && (iLocal_194 || !PLAYER::IS_PLAYER_ONLINE())) && (PAD::IS_CONTROL_JUST_RELEASED(2, 211) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 211)))
				{
					Local_2035.f_2859 = 1;
					AUDIO::PLAY_SOUND(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", false, 0, true);
					func_441(&uLocal_1210);
					Local_2035.f_2860 = func_561(&uLocal_1210);
					func_559(Local_2035.f_2860);
					SYSTEM::SETTIMERA(0);
				}
				if (func_382(&uLocal_2036, &(Local_2035.f_1)))
				{
					iLocal_1650 = 0;
					if (Local_45.f_10 != -1)
					{
						func_374();
						func_563();
						if (ENTITY::IS_ENTITY_AT_COORD(Local_45.f_1, Local_1940, 5f, 5f, 5f, false, true, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_45.f_1, false))
							{
								func_373(&iLocal_2038);
								Local_1950.f_6 = 8;
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(Local_45.f_1, false))
						{
							Local_1950.f_6 = 8;
						}
					}
					else
					{
						Local_1950.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45.f_1, false))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				Local_1950.f_6 = 18;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2035.f_358[0 /*189*/].f_9))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_2035.f_358[0 /*189*/].f_9, false);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1940, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), Local_1941, 2, true);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2035.f_358[0 /*189*/].f_9))
				{
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_START(Local_1940, ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), 500f, 0);
					}
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						Local_1950.f_6 = 18;
					}
				}
				else
				{
					Local_1950.f_6 = 18;
				}
			}
			break;
		
		case 8:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (Local_45.f_10 == 0)
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_45.f_1);
				if (func_372(iLocal_1927, 16))
				{
					func_370(&iLocal_1927, 16);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_45.f_1, true, true, false);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_45.f_1, -1);
				VEHICLE::SET_VEHICLE_FIXED(Local_45.f_1);
				func_369();
				iLocal_1706 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1702.487f, 3279.545f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, true, 2);
				CAM::SET_CAM_ACTIVE(Local_2035.f_2858, false);
				Local_1950.f_6 = 9;
			}
			else if (func_368(1000))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				VEHICLE::SET_VEHICLE_FIXED(Local_45.f_1);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_45.f_1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_369();
					Local_1950.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((CAM::IS_CAM_ACTIVE(iLocal_1706) && CAM::IS_CAM_INTERPOLATING(iLocal_1706)) || (CAM::IS_CAM_ACTIVE(Local_2035.f_2858) && CAM::IS_CAM_INTERPOLATING(Local_2035.f_2858))))
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(true, 0f, 3, 0);
				func_369();
				Local_1950.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2035.f_25 = 0;
			Local_1950.f_6 = 11;
			break;
		
		case 11:
			if (!func_354(&Local_2035))
			{
				func_594(1);
				if (Local_2035.f_2)
				{
					STREAMING::NEW_LOAD_SCENE_START(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), 500f, 0);
				}
				if (Local_45.f_10 == 0)
				{
					func_353("SPR_TAXI_GATE", 10000, 1);
					if (!func_372(iLocal_1927, 16))
					{
						func_345(&Local_2035, 0, 1);
						func_344(&iLocal_1927, 16);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					Local_1950.f_6 = 13;
				}
				else
				{
					Local_1950.f_6 = 13;
				}
				Local_2035.f_2 = 0;
			}
			break;
		
		case 13:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				CAM::SET_CINEMATIC_MODE_ACTIVE(false);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2035.f_358[0 /*189*/].f_9, false);
				func_369();
				if (func_372(iLocal_1927, 16))
				{
					func_370(&iLocal_1927, 16);
				}
				if (Local_45.f_10 == 0)
				{
					if (func_596(500))
					{
						Local_2035.f_26 = 0;
						Local_1950.f_6 = 14;
					}
				}
				else
				{
					func_343(&Local_2035);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					if (func_596(500))
					{
						Local_2035.f_26 = 0;
						Local_1950.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_1950.f_0 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2035))
			{
				return 1;
			}
			iLocal_1650 = 3;
			func_23();
			func_13();
			if (!Local_2035.f_0)
			{
				func_10(&(Local_2035.f_6));
				func_9(&(Local_2035.f_358[0 /*189*/]), Local_45.f_3, Local_45.f_6, 0f);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2035.f_358[0 /*189*/].f_9))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2035.f_358[0 /*189*/].f_9, 5f);
				}
				if (STREAMING::NEW_LOAD_SCENE_START(Local_43, func_8(Local_44), 4500f, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && func_5(&(Local_2035.f_6)) < 20f)
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_43, func_8(Local_44));
					func_4(&(Local_2035.f_6));
					Local_1950.f_6 = 15;
				}
				else if (func_2(&(Local_2035.f_6), 20f))
				{
					func_4(&(Local_2035.f_6));
					Local_1950.f_6 = 15;
				}
			}
			else
			{
				Local_1950.f_6 = 3;
			}
			break;
		
		case 15:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
			}
			Local_2035.f_2859 = 0;
			Local_1950.f_6 = 3;
			break;
		
		case 18:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
			}
			func_442(&Local_2035, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_596(1000);
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_2(int* iParam0, float fParam1)//Position - 0xCE2
{
	if (func_3(iParam0))
	{
		if (func_5(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(int* iParam0)//Position - 0xD04
{
	return BitTest(*iParam0, 1);
}

void func_4(var uParam0)//Position - 0xD11
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_5(int* iParam0)//Position - 0xD27
{
	if (func_3(iParam0))
	{
		if (func_7(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_6(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_6(bool bParam0)//Position - 0xD63
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

bool func_7(int* iParam0)//Position - 0xDBB
{
	return BitTest(*iParam0, 2);
}

Vector3 func_8(struct<3> Param0)//Position - 0xDC8
{
	return (-SYSTEM::SIN(Param0.f_2) * SYSTEM::COS(Param0.f_0)), (SYSTEM::COS(Param0.f_2) * SYSTEM::COS(Param0.f_0)), SYSTEM::SIN(Param0.f_0);
}

void func_9(var uParam0, struct<3> Param1, float fParam2, float fParam3)//Position - 0xDF5
{
	ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Param1, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_9, fParam2);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_9, fParam3);
}

void func_10(int* iParam0)//Position - 0xE21
{
	if (!func_3(iParam0))
	{
		func_373(iParam0);
	}
	else
	{
		func_11(iParam0);
	}
}

void func_11(int* iParam0)//Position - 0xE42
{
	func_12(iParam0, 0f);
}

void func_12(int* iParam0, float fParam1)//Position - 0xE51
{
	iParam0->f_1 = (func_6(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_13()//Position - 0xE7C
{
	if (Global_113386.f_19043.f_12[4 /*8*/].f_4 == 1)
	{
		if (Global_113386.f_19043.f_6[4] > 0f)
		{
			if (Global_113386.f_19043.f_6[4] <= func_22(4))
			{
				func_14(125, 0, 0);
			}
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2)//Position - 0xECD
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
		func_20((891 + iParam0), 1, -1);
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
		func_15();
	}
}

void func_15()//Position - 0xFB3
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
		func_19(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_18() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_16();
				}
			}
		}
	}
}

int func_16()//Position - 0x1471
{
	if (func_17(0))
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

int func_17(bool bParam0)//Position - 0x14BC
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_18()//Position - 0x14E4
{
	return Global_31959;
}

int func_19(int iParam0, int iParam1)//Position - 0x14EF
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

void func_20(int iParam0, bool bParam1, int iParam2)//Position - 0x1540
{
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_21()//Position - 0x155E
{
	return Global_1574918;
}

float func_22(int iParam0)//Position - 0x156A
{
	switch (iParam0)
	{
		case 0:
			return 130f;
			break;
		
		case 1:
			return 120f;
			break;
		
		case 2:
			return 120f;
			break;
		
		case 3:
			return 170f;
			break;
		
		case 4:
			return 180f;
			break;
	}
	return -1f;
}

void func_23()//Position - 0x15CF
{
	iLocal_1942 = 0;
	iLocal_1943 = 0;
	iLocal_1944 = 0;
	iLocal_1945 = 0;
	iLocal_1946 = 0;
	iLocal_1947 = 0;
	iLocal_1948 = 0;
	iLocal_1949 = 0;
}

int func_24(var uParam0)//Position - 0x15F7
{
	switch (uParam0->f_26)
	{
		case 0:
			func_370(&iLocal_1927, 4);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_342(uParam0);
			uParam0->f_17 = func_341();
			if (Local_45.f_10 == 0)
			{
				if (!func_372(iLocal_1927, 16))
				{
					func_345(uParam0, 0, 1);
					func_345(uParam0, 1, 0);
					func_344(&iLocal_1927, 16);
				}
			}
			else
			{
				func_343(uParam0);
				if (!func_372(iLocal_1927, 16))
				{
					func_345(uParam0, 0, 1);
					func_345(uParam0, 1, 0);
					func_344(&iLocal_1927, 16);
				}
			}
			func_4(&(uParam0->f_14));
			iLocal_1935 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			uParam0->f_26 = 1;
			break;
		
		case 1:
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (Local_45.f_10 == 0)
			{
				if (func_372(iLocal_1927, 16))
				{
					func_370(&iLocal_1927, 16);
				}
				func_339(uParam0);
				uParam0->f_26 = 7;
			}
			else
			{
				func_343(uParam0);
				if (!func_314(&(uParam0->f_14)))
				{
					if (!CAM::_0x3044240D2E0FA842())
					{
						CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					}
					if (func_372(iLocal_1927, 16))
					{
						func_370(&iLocal_1927, 16);
					}
					HUD::DISPLAY_HUD(true);
					func_339(uParam0);
					if (Local_45.f_10 == 0 && (Global_113386.f_19043.f_6[0] > Local_45.f_112[0] || Global_113386.f_19043.f_6[0] == 0f))
					{
						func_313("SPR_HELP_GATE", 10000);
					}
					uParam0->f_26 = 7;
				}
			}
			break;
		
		case 2:
			if (!func_372(iLocal_1927, 1))
			{
				SYSTEM::SETTIMERA(0);
				func_274(uParam0);
				func_273(&(Local_45.f_119), 0, 0, 1, 1);
				func_272(&(Local_45.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_271(&(Local_45.f_119), 1);
				func_344(&iLocal_1927, 1);
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			if (func_270("SPR_RETR_FAIL", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			if (func_270("SPR_RETR_FAIL", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			SYSTEM::SETTIMERA(0);
			func_268();
			func_267(0);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
			PAD::DISABLE_CONTROL_ACTION(0, 75, true);
			func_266(1);
			uParam0->f_26 = 4;
			break;
		
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, 75, true);
			func_264();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_358[0 /*189*/].f_9) && CAM::DOES_CAM_EXIST(iLocal_1707))
				{
					CAM::GET_CAM_ROT(iLocal_1707, 2);
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_358[0 /*189*/].f_9, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_358[0 /*189*/].f_9, true);
					func_263();
				}
			}
			if (!func_249(uParam0, bLocal_2030, bLocal_2031))
			{
				func_263();
				func_248(0);
				HUD::CLEAR_HELP(true);
				if (func_372(iLocal_1927, 1))
				{
					func_370(&iLocal_1927, 1);
				}
				func_247(0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				iLocal_2034 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2034, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
				func_4(&iLocal_1917);
				uParam0->f_26 = 5;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_358[0 /*189*/].f_9, Local_1940, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_358[0 /*189*/].f_9, Local_1941, 2, true);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_358[0 /*189*/].f_9, true, false);
				PAD::DISABLE_CONTROL_ACTION(0, 75, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_358[0 /*189*/].f_9, 5f);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_358[0 /*189*/].f_9, false);
			}
			iLocal_2029 = 0;
			uParam0->f_26 = 6;
			uParam0->f_358[0 /*189*/].f_23 = 7;
			break;
		
		case 6:
			uParam0->f_26 = 8;
			break;
		
		case 7:
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_1930, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_372(iLocal_1927, 16))
			{
				func_345(uParam0, 0, 1);
				func_345(uParam0, 1, 0);
				func_344(&iLocal_1927, 16);
				func_267(1);
				func_246(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/]);
			}
			if (uParam0->f_1)
			{
				func_212(uParam0);
				func_210(uParam0);
			}
			else
			{
				func_207(&uLocal_1902, 0);
				func_263();
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			}
			if (!func_41(uParam0, Local_45.f_0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MGSP_END");
				func_28(uParam0);
				func_4(&(uParam0->f_14));
				uParam0->f_26 = 2;
				func_4(&(uParam0->f_22));
			}
			break;
		
		case 8:
			PAD::DISABLE_CONTROL_ACTION(0, 75, true);
			func_27(&(uParam0->f_17));
			func_263();
			func_25();
			return 0;
			break;
	}
	return 1;
}

void func_25()//Position - 0x1AA5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_372(uLocal_1716, iVar0))
		{
			func_370(&uLocal_1716, iVar0);
		}
		if (func_372(uLocal_1717, iVar0))
		{
			func_370(&uLocal_1717, iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1714[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_1714[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1715[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_1715[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_1713);
	iVar0 = 0;
	while (iVar0 < iLocal_1713)
	{
		iLocal_1713[iVar0] = 0;
		iVar0++;
	}
}

void func_26(var uParam0)//Position - 0x1B3E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(int* iParam0)//Position - 0x1B6E
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
}

void func_28(var uParam0)//Position - 0x1B8A
{
	int iVar0;
	
	if (!func_7(&(uParam0->f_3)))
	{
		func_40(&(uParam0->f_3));
	}
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_358[0 /*189*/].f_9, true);
	PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	func_39(uParam0);
	if (Local_45.f_0 == 0)
	{
		func_38(uParam0);
	}
	func_32(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_30(&(uParam0->f_358[iVar0 /*189*/]));
		if (iVar0 != 0)
		{
			func_29(&(uParam0->f_358[iVar0 /*189*/]));
		}
		iVar0++;
	}
}

void func_29(var uParam0)//Position - 0x1C0A
{
}

void func_30(var uParam0)//Position - 0x1C12
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (Local_45.f_0 != 0)
		{
			func_31();
		}
	}
}

void func_31()//Position - 0x1C31
{
}

void func_32(var uParam0)//Position - 0x1C39
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar0 /*189*/].f_8, false))
		{
			if (uParam0->f_358[iVar0 /*189*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = func_37(Local_45.f_10);
				if (iVar1 <= 0 || iVar1 > uParam0->f_358[iVar0 /*189*/].f_12)
				{
					func_36(Local_45.f_10, uParam0->f_358[iVar0 /*189*/].f_12);
				}
				fVar2 = func_35(Local_45.f_10);
				func_34(Local_45.f_10, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_358[0 /*189*/].f_13)));
				if (fVar2 == 0f || fVar2 > uParam0->f_358[0 /*189*/].f_13)
				{
					func_33(Local_45.f_10, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_358[0 /*189*/].f_13)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)//Position - 0x1D0F
{
	Global_113386.f_19043.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)//Position - 0x1D26
{
	Local_45.f_18[iParam0] = fParam1;
}

var func_35(int iParam0)//Position - 0x1D38
{
	var uVar0;
	
	uVar0 = Global_113386.f_19043.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)//Position - 0x1D51
{
	Global_113386.f_19043[iParam0] = uParam1;
}

int func_37(int iParam0)//Position - 0x1D66
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_113386.f_19043[iParam0];
	return iVar0;
}

void func_38(var uParam0)//Position - 0x1D80
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		iVar2 = 1;
		iVar1 = 0;
		while (iVar1 < uParam0->f_13)
		{
			if (iVar0 != iVar1)
			{
				if (uParam0->f_358[iVar0 /*189*/].f_13 > uParam0->f_358[iVar1 /*189*/].f_13)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		uParam0->f_358[iVar0 /*189*/].f_12 = iVar2;
		iVar0++;
	}
}

void func_39(var uParam0)//Position - 0x1DE9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar0 /*189*/].f_11 != uParam0->f_12)
		{
			uParam0->f_358[iVar0 /*189*/].f_13 = (uParam0->f_358[0 /*189*/].f_13 + (IntToFloat((uParam0->f_12 - uParam0->f_358[iVar0 /*189*/].f_11)) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 2.5f)));
		}
		iVar0++;
	}
}

void func_40(int* iParam0)//Position - 0x1E4E
{
	if (func_3(iParam0))
	{
		if (!func_7(iParam0))
		{
			iParam0->f_2 = (func_6(BitTest(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

int func_41(var uParam0, int iParam1)//Position - 0x1E85
{
	float fVar0;
	int iVar1;
	struct<10> Var2;
	struct<10> Var3;
	int iVar4;
	bool bVar5;
	int iVar6;
	char cVar7[16];
	
	if (Local_45.f_10 == 0)
	{
		if (uParam0->f_358[0 /*189*/].f_11 == 0)
		{
			func_11(&(uParam0->f_3));
			if (func_372(iLocal_1928, 131072))
			{
				VEHICLE::RESET_VEHICLE_STUCK_TIMER(uParam0->f_358[0 /*189*/].f_9, 4);
				func_370(&iLocal_1928, 131072);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 1 && !func_372(iLocal_1928, 131072))
		{
			func_313("SPR_INFO_BON", 10000);
			func_344(&iLocal_1928, 131072);
			if (func_372(iLocal_1928, 262144))
			{
				func_370(&iLocal_1928, 262144);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 4 && !func_372(iLocal_1928, 262144))
		{
			func_313("SPR_INFO_RESET", 10000);
			func_344(&iLocal_1928, 262144);
		}
	}
	if (func_3(&(uParam0->f_3)))
	{
		fVar0 = func_5(&(uParam0->f_3));
	}
	func_189(uParam0->f_358[0 /*189*/].f_11, uParam0->f_1);
	PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar1 /*189*/].f_11 < uParam0->f_12)
		{
			bVar5 = false;
			if (uParam0->f_358[iVar1 /*189*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				bVar5 = true;
			}
			iVar4 = uParam0->f_358[iVar1 /*189*/].f_11;
			if (uParam0->f_358[iVar1 /*189*/].f_11 >= uParam0->f_12)
			{
				Var2 = { uParam0->f_27[(uParam0->f_12 - 1) /*10*/] };
			}
			else
			{
				Var2 = { uParam0->f_27[iVar4 /*10*/] };
			}
			if (iVar4 < (uParam0->f_12 - 1))
			{
				Var3 = { uParam0->f_27[iVar4 + 1 /*10*/] };
			}
			else
			{
				Var3 = { Var2 };
			}
			if (iVar4 != uParam0->f_12)
			{
				uParam0->f_358[iVar1 /*189*/].f_13 = (fVar0 - uParam0->f_358[iVar1 /*189*/].f_15);
				if (uParam0->f_358[iVar1 /*189*/].f_13 < 0f)
				{
					uParam0->f_358[iVar1 /*189*/].f_13 = 0f;
				}
			}
			if (!func_105(uParam0, &(uParam0->f_358[iVar1 /*189*/]), bVar5))
			{
				if ((bVar5 && uParam0->f_1) && (Local_45.f_10 != 0 || uParam0->f_358[0 /*189*/].f_11 > 0))
				{
					if (!func_3(&iLocal_2022))
					{
						func_373(&iLocal_2022);
					}
					if (func_5(&iLocal_2025) >= 6.5f)
					{
						if (!PAD::IS_CONTROL_PRESSED(2, 222))
						{
							func_11(&iLocal_2022);
						}
						else if (func_5(&iLocal_2022) >= 1.5f)
						{
							uParam0->f_1 = 0;
							func_370(&iLocal_1928, 32768);
							uParam0->f_358[0 /*189*/].f_23 = 6;
						}
					}
					else if (PAD::IS_CONTROL_PRESSED(2, 222))
					{
						if (func_5(&(uParam0->f_3)) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_1928, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_1928, 32768, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(uParam0->f_358[iVar1 /*189*/].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_45.f_0 == 0 && func_3(&iLocal_1923))
					{
						return 1;
					}
					if (bVar5)
					{
						if (uParam0->f_358[iVar1 /*189*/].f_14 != 0f)
						{
							func_373(&(uParam0->f_14));
						}
						if (func_372(iLocal_1927, 8))
						{
							func_345(uParam0, iVar4, 1);
							if (iVar4 < (uParam0->f_12 - 1))
							{
								func_345(uParam0, iVar4 + 1, 0);
							}
							func_370(&iLocal_1927, 8);
						}
					}
					if (uParam0->f_1)
					{
						uParam0->f_11 = func_93(uParam0, &Var2, &Var3, uParam0->f_358[iVar1 /*189*/].f_8);
						func_90(&Var2, &Var3);
					}
					if (uParam0->f_11 != -1)
					{
						if (iParam1 == 0)
						{
							func_85(&(uParam0->f_358[iVar1 /*189*/]), bVar5, uParam0->f_11);
						}
						bLocal_1916 = func_84(uParam0->f_11);
						uParam0->f_358[iVar1 /*189*/].f_11++;
						iVar4 = uParam0->f_358[iVar1 /*189*/].f_11;
						if (iVar4 >= (uParam0->f_12 - 1))
						{
							Var2 = { uParam0->f_27[(uParam0->f_12 - 1) /*10*/] };
						}
						else
						{
							Var2 = { uParam0->f_27[iVar4 /*10*/] };
						}
						if (bVar5)
						{
							func_78(uParam0, (iVar4 - 1));
							if (iVar4 == uParam0->f_12)
							{
								iVar6 = 0;
								if (func_3(&(uParam0->f_3)))
								{
									if (!func_7(&(uParam0->f_3)))
									{
										func_40(&(uParam0->f_3));
									}
									if (uParam0->f_358[0 /*189*/].f_13 > 0f)
									{
										if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_106[Local_45.f_10])
										{
											iVar6 = 1;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_45.f_112[Local_45.f_10] - Local_45.f_106[Local_45.f_10]) / 2f) + Local_45.f_106[Local_45.f_10]))
										{
											iVar6 = 2;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_112[Local_45.f_10])
										{
											iVar6 = 3;
										}
									}
								}
								if (iVar6 == 0)
								{
								}
								if (iVar6 > 0)
								{
									return 0;
								}
								else
								{
									uParam0->f_1 = 0;
									uParam0->f_358[iVar1 /*189*/].f_11 = (uParam0->f_358[iVar1 /*189*/].f_11 - 1);
									HUD::CLEAR_PRINTS();
									sLocal_1915 = "SPR_TIME_FAIL";
									uParam0->f_358[0 /*189*/].f_23 = 0;
								}
							}
							else
							{
								func_345(uParam0, iVar4, 1);
								if (iVar4 < (uParam0->f_12 - 1))
								{
									func_345(uParam0, iVar4 + 1, 0);
								}
							}
							if (uParam0->f_358[iVar1 /*189*/].f_14 == 0f)
							{
								if (func_3(&(uParam0->f_14)))
								{
									func_4(&(uParam0->f_14));
								}
							}
							if (uParam0->f_12 > 0)
							{
								if (uParam0->f_10 > 0f)
								{
									if (iVar4 == SYSTEM::ROUND((IntToFloat(uParam0->f_12) / 2f)))
									{
										uParam0->f_358[iVar1 /*189*/].f_14 = 0f;
										func_11(&(uParam0->f_14));
									}
								}
							}
						}
						else if (uParam0->f_358[iVar1 /*189*/].f_11 >= uParam0->f_12)
						{
							if (Local_45.f_0 != 2)
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_8, false))
								{
									func_29(&(uParam0->f_358[iVar1 /*189*/]));
								}
							}
						}
						else
						{
							if (Local_45.f_0 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar7, "Offroad_", 16);
								StringIntConCat(&cVar7, Local_45.f_10 + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar7, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (bLocal_2033)
									{
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_9, false))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_358[iVar1 /*189*/].f_8, -235832601) == 1)
											{
											}
											else
											{
												TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar7, 262144, 0, 8, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_358[iVar1 /*189*/].f_9), false, 2f);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
									}
								}
							}
							if (Local_45.f_0 != 2)
							{
								func_75(uParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0)
					{
						if (bVar5)
						{
							func_74();
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (uParam0->f_1 == 1)
	{
		func_67(uParam0);
		func_65(uParam0, &iLocal_2032);
		func_64(uParam0, &iLocal_2032);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (uParam0->f_358[0 /*189*/].f_23 != 0)
		{
			if (Local_45.f_10 == 0)
			{
				if (uParam0->f_358[0 /*189*/].f_11 > 0)
				{
					func_42(uParam0);
				}
			}
			else
			{
				func_42(uParam0);
			}
		}
	}
	return 1;
}

void func_42(var uParam0)//Position - 0x2615
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(true);
	}
	if (!func_3(&iLocal_1723))
	{
		iLocal_1721 = 0;
		iLocal_1722 = 0;
		func_373(&iLocal_1723);
	}
	if (SYSTEM::CEIL((uParam0->f_358[0 /*189*/].f_15 * 1000f)) != iLocal_1722)
	{
		iLocal_1721 = (SYSTEM::CEIL((uParam0->f_358[0 /*189*/].f_15 * 1000f)) - iLocal_1722);
		iLocal_1722 = SYSTEM::CEIL((uParam0->f_358[0 /*189*/].f_15 * 1000f));
		func_11(&iLocal_1723);
	}
	iVar0 = (SYSTEM::FLOOR((func_5(&(uParam0->f_3)) * 100f)) * 10 - SYSTEM::CEIL((uParam0->f_358[0 /*189*/].f_15 * 1000f)));
	iVar1 = 0;
	if (func_5(&iLocal_1723) <= 2f)
	{
		if (uParam0->f_358[0 /*189*/].f_11 > 0)
		{
			iVar1 = -iLocal_1721;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = SYSTEM::FLOOR((Global_113386.f_19043.f_6[Local_45.f_10] * 100f)) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= (Local_45.f_106[Local_45.f_10] * 1000f))
	{
		iVar3 = SYSTEM::FLOOR((Local_45.f_106[Local_45.f_10] * 1000f));
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= ((((Local_45.f_112[Local_45.f_10] - Local_45.f_106[Local_45.f_10]) / 2f) + Local_45.f_106[Local_45.f_10]) * 1000f))
	{
		iVar6 = 2;
		iVar3 = SYSTEM::FLOOR(((((Local_45.f_112[Local_45.f_10] - Local_45.f_106[Local_45.f_10]) / 2f) + Local_45.f_106[Local_45.f_10]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= (Local_45.f_112[Local_45.f_10] * 1000f))
	{
		iVar6 = 1;
		iVar3 = SYSTEM::FLOOR((Local_45.f_112[Local_45.f_10] * 1000f));
		sVar4 = "SPR_BBEST";
		iVar5 = 107;
	}
	else
	{
		iVar3 = -1;
	}
	func_55();
	func_43(iVar0, "", -1, -1, "", -1, -1, "", iVar1, 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0, 1, 1, -1, "", -1f, func_54());
}

void func_43(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, var uParam30)//Position - 0x2842
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	struct<8> Var6;
	int iVar7;
	
	if (fParam29 > -1f)
	{
		func_51(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (func_50(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_48((iParam11 - iParam10), sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (func_50(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_47(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0, 1, 0, 0, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (func_50(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (func_50(sVar4))
		{
			sVar4 = "TIMER_BESTIME";
		}
		func_44(iParam18, sVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (func_50(sVar5))
		{
			sVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	StringCopy(&Var6, sParam1, 64);
	if (iParam8 < 0)
	{
		StringCopy(&Var6, "TIMER_REWARD", 64);
	}
	else if (iParam8 > 0)
	{
		StringCopy(&Var6, "TIMER_PENAL", 64);
	}
	else if (func_50(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER", 64);
	}
	iParam26 = iParam26;
	iVar7 = 4;
	func_44(iParam0, &Var6, iParam8, iVar7, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x2A0E
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_45(7, iVar0);
		Global_1649593.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = uParam4;
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

void func_45(int iParam0, int iParam1)//Position - 0x2B6B
{
	MISC::SET_BIT(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_46(int iParam0, int iParam1)//Position - 0x2B84
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

void func_47(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x2B9A
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_45(5, iVar0);
		Global_1649593.f_3705[iVar0] = iParam0;
		Global_1649593.f_3705.f_172[iVar0] = uParam1;
		StringCopy(&(Global_1649593.f_3705.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_3705.f_194[iVar0] = uParam3;
		Global_1649593.f_3705.f_183[iVar0] = uParam4;
		Global_1649593.f_3705.f_216[iVar0] = iParam5;
		Global_1649593.f_3705.f_227[iVar0] = iParam6;
		Global_1649593.f_3705.f_270[iVar0] = iParam7;
		Global_1649593.f_3705.f_281[iVar0] = iParam8;
		Global_1649593.f_3705.f_292[iVar0] = iParam9;
		Global_1649593.f_3705.f_303[iVar0] = iParam10;
		Global_1649593.f_3705.f_314[iVar0] = iParam11;
		Global_1649593.f_3705.f_325[iVar0] = iParam12;
	}
}

void func_48(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x2CAA
{
	int iVar0;
	int iVar1;
	
	if (func_50(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_45(3, iVar0);
		Global_1649593.f_2839[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2839.f_183[iVar0] = uParam3;
		Global_1649593.f_2839.f_172[iVar0] = uParam2;
		Global_1649593.f_2839.f_205[iVar0] = iParam4;
		Global_1649593.f_2839.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_2839.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_2839.f_420[iVar0] = iParam7;
		Global_1649593.f_2839.f_453[iVar0] = iParam8;
		Global_1649593.f_2839.f_431[iVar0] = iParam9;
		Global_1649593.f_2839.f_442[iVar0] = iParam10;
		Global_1649593.f_2839.f_464[iVar0] = iParam11;
		Global_1649593.f_2839.f_475[iVar0] = iParam12;
		Global_1649593.f_2839.f_486[iVar0] = iParam13;
		Global_1649593.f_2839.f_497[iVar0] = iParam14;
	}
}

void func_49(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)//Position - 0x2DEC
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_45(0, iVar0);
		Global_1649593.f_1177[iVar0] = iParam0;
		Global_1649593.f_1177.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1649593.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1177.f_194[iVar0] = uParam3;
		Global_1649593.f_1177.f_183[iVar0] = uParam4;
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

int func_50(char* sParam0)//Position - 0x3084
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

void func_51(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x30BE
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
			if (func_46(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_45(6, iVar0);
		Global_1649593.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4041.f_183[iVar0] = uParam3;
		Global_1649593.f_4041.f_172[iVar0] = uParam2;
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
		if (iParam15 == 5 && func_53())
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
			if (func_52())
			{
				Global_1649593.f_1176 = 1;
			}
		}
	}
}

int func_52()//Position - 0x332F
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

int func_53()//Position - 0x3353
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

int func_54()//Position - 0x3391
{
	return iLocal_1720;
}

void func_55()//Position - 0x339C
{
	Global_1649593.f_1172 = 1;
}

void func_56(var uParam0)//Position - 0x33AC
{
	if (uParam0->f_13 == -1)
	{
	}
}

void func_57()//Position - 0x33BC
{
	if (Local_45.f_0 == 0)
	{
		HUD::SET_MINIMAP_COMPONENT(0, false, -1);
		HUD::SET_MINIMAP_COMPONENT(1, false, -1);
		HUD::SET_MINIMAP_COMPONENT(2, false, -1);
		HUD::SET_MINIMAP_COMPONENT(3, false, -1);
	}
}

void func_58(var uParam0)//Position - 0x33EA
{
	if (func_5(&(uParam0->f_3)) > 15f)
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_358[0 /*189*/].f_9) < 5f)
		{
			if (!func_3(&iLocal_1920))
			{
				func_10(&iLocal_1920);
			}
			else if (func_5(&iLocal_1920) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_1928, 8192);
				if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
					{
						HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
					}
				}
				if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
					{
						HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
					}
				}
				func_11(&iLocal_1920);
				func_11(&iLocal_1917);
				uParam0->f_1 = 0;
				HUD::CLEAR_PRINTS();
				sLocal_1915 = "SPR_RETR_IDLE";
				uParam0->f_358[0 /*189*/].f_23 = 0;
			}
			else if (func_5(&iLocal_1920) > 30f)
			{
				if (!func_372(iLocal_1927, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_1927, 32, 0);
				}
			}
		}
		else if (func_3(&iLocal_1920))
		{
			func_370(&iLocal_1927, 32);
			func_11(&iLocal_1920);
		}
	}
	else if (func_3(&iLocal_1920))
	{
		func_370(&iLocal_1927, 32);
		func_11(&iLocal_1920);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x356A
{
	if (func_62(*iParam3, iParam4))
	{
		return;
	}
	func_61(sParam0, iParam1, iParam2);
	func_60(iParam3, iParam4);
}

void func_60(var uParam0, var uParam1)//Position - 0x3593
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_61(char* sParam0, int iParam1, int iParam2)//Position - 0x35A4
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

bool func_62(var uParam0, var uParam1)//Position - 0x35BD
{
	return (uParam0 && uParam1) != 0;
}

void func_63()//Position - 0x35CC
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

void func_64(var uParam0, int* iParam1)//Position - 0x35E8
{
	if (uParam0->f_1)
	{
		if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, false) || ENTITY::GET_ENTITY_HEALTH(uParam0->f_358[0 /*189*/].f_9) < 5) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_11(&iLocal_1917);
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
				{
					HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
				}
			}
			if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
				{
					HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			HUD::CLEAR_PRINTS();
			sLocal_1915 = "SPR_RETR_DES";
			uParam0->f_358[0 /*189*/].f_23 = 0;
		}
		return;
	}
}

void func_65(var uParam0, int* iParam1)//Position - 0x36EF
{
	if (Local_45.f_0 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				HUD::CLEAR_PRINTS();
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (HUD::DOES_BLIP_EXIST(*iParam1))
				{
					HUD::REMOVE_BLIP(iParam1);
					if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
					{
						if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
						{
							HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
						}
					}
					if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
					{
						if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
						{
							HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				HUD::CLEAR_PRINTS();
				sLocal_1915 = "SPR_RETR_DES";
				func_66(&(Local_45.f_321), 1);
				uParam0->f_358[0 /*189*/].f_23 = 7;
			}
		}
	}
}

void func_66(var uParam0, int iParam1)//Position - 0x37F1
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, -1);
}

void func_67(var uParam0)//Position - 0x3813
{
	if (uParam0->f_1)
	{
		func_72(uParam0);
		func_68(uParam0);
	}
}

void func_68(var uParam0)//Position - 0x382E
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_358[0 /*189*/].f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
	{
		iVar1 = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_358[0 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_45.f_0 == 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_358[0 /*189*/].f_9, false))
				{
					bLocal_1926 = true;
				}
			}
			if (bLocal_1926)
			{
				if (uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 6 || uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 10)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1928, 2);
					}
				}
			}
		}
		else
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1928, 2);
		}
	}
	if (Local_45.f_0 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1928, 2);
		}
	}
}

void func_69()//Position - 0x3961
{
	Global_20471 = 0;
	func_70();
}

void func_70()//Position - 0x3971
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

int func_71()//Position - 0x39C8
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_72(var uParam0)//Position - 0x39EA
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	
	Var0 = { uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/] };
	if (uParam0->f_358[0 /*189*/].f_11 > 0)
	{
		Var1 = { uParam0->f_27[(uParam0->f_358[0 /*189*/].f_11 - 1) /*10*/] };
	}
	else
	{
		Var1 = { 0f, 0f, 0f };
	}
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
	fVar3 = fVar2;
	if (uParam0->f_358[0 /*189*/].f_11 == 0)
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	else
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	Var4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_358[0 /*189*/].f_8, true) };
	if (func_73(Var1, 0f, 0f, 0f, 1056964608, 0))
	{
		Var5 = { Var0 };
	}
	else
	{
		Var5 = { MISC::GET_CLOSEST_POINT_ON_LINE(Var4, Var1, Var0, true) };
	}
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, Var4, true);
	bVar7 = fVar6 >= fVar2;
	bVar8 = fVar6 >= fVar3;
	if (Local_45.f_0 == 1)
	{
		if (MISC::ABSF((Var5.f_2 - Var4.f_2)) > 15f)
		{
			bVar7 = true;
		}
	}
	if (bVar8)
	{
		func_11(&iLocal_1917);
		uParam0->f_1 = 0;
		HUD::CLEAR_PRINTS();
		func_266(1);
		uParam0->f_358[0 /*189*/].f_23 = 0;
		func_273(&(Local_45.f_119), 0, 0, 1, 1);
		func_272(&(Local_45.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
		func_272(&(Local_45.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("MGSP_FAIL");
		sLocal_1915 = "SPR_HELP_FAIL";
	}
	else if (bVar7)
	{
		if (fVar6 <= (fVar3 - 15f))
		{
			func_313("SPR_HELP_RESET", -1);
		}
		if (fVar6 <= (fVar3 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_1928, 4);
		}
	}
	else
	{
		HUD::CLEAR_THIS_PRINT("SPR_HELP_WARN");
		if (func_372(iLocal_1928, 4))
		{
			func_370(&iLocal_1928, 4);
		}
	}
}

int func_73(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x3BC9
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

void func_74()//Position - 0x3C44
{
	if (iLocal_1652 == 1)
	{
		if (func_3(&iLocal_1682))
		{
			if (func_5(&iLocal_1682) <= 2.5f)
			{
				iLocal_1718 = "GATEMISS";
				fLocal_1719 = 5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1652 = 0;
			}
		}
	}
	if (iLocal_1653 == 1)
	{
		if (func_3(&iLocal_1688))
		{
			if (func_5(&iLocal_1688) <= 2.5f)
			{
				iLocal_1718 = "GATEINNER";
				fLocal_1719 = 1f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1653 = 0;
			}
		}
	}
	if (iLocal_1654 == 1)
	{
		if (func_3(&iLocal_1685))
		{
			if (func_5(&iLocal_1685) <= 2.5f)
			{
				iLocal_1718 = "GATEOUTTER";
				fLocal_1719 = 0f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1654 = 0;
			}
		}
	}
	if (iLocal_1655 == 1)
	{
		if (func_3(&iLocal_1697))
		{
			if (func_5(&iLocal_1697) <= 2.5f)
			{
				iLocal_1718 = "GATEKNIFEINNER";
				fLocal_1719 = 2.5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1655 = 0;
			}
		}
	}
	if (iLocal_1656 == 1)
	{
		if (func_3(&iLocal_1700))
		{
			if (func_5(&iLocal_1700) <= 2.5f)
			{
				iLocal_1718 = "GATEINVERTEDIN";
				fLocal_1719 = 3f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1656 = 0;
			}
		}
	}
	if (iLocal_1657 == 1)
	{
		if (func_3(&iLocal_1691))
		{
			if (func_5(&iLocal_1691) <= 2.5f)
			{
				iLocal_1718 = "GATEKNIFEOUTTER";
				fLocal_1719 = 1.5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1657 = 0;
			}
		}
	}
	if (iLocal_1658 == 1)
	{
		if (func_3(&iLocal_1694))
		{
			if (func_5(&iLocal_1694) <= 2.5f)
			{
				iLocal_1718 = "GATEINVERTEDOUT";
				fLocal_1719 = 2f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1658 = 0;
			}
		}
	}
	if (iLocal_1659 == 1)
	{
		if (func_3(&iLocal_1670))
		{
			if (func_5(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFELEFT";
				fLocal_1719 = 4f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1659 = 0;
			}
		}
	}
	if (iLocal_1660 == 1)
	{
		if (func_3(&iLocal_1670))
		{
			if (func_5(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFELEFTHIT";
				fLocal_1719 = 1.5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1660 = 0;
			}
		}
	}
	if (iLocal_1661 == 1)
	{
		if (func_3(&iLocal_1670))
		{
			if (func_5(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFELEFTMISS";
				fLocal_1719 = 5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1661 = 0;
			}
		}
	}
	if (iLocal_1662 == 1)
	{
		if (func_3(&iLocal_1670))
		{
			if (func_5(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFERIGHT";
				fLocal_1719 = 4f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1662 = 0;
			}
		}
	}
	if (iLocal_1663 == 1)
	{
		if (func_3(&iLocal_1670))
		{
			if (func_5(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFERIGHTHIT";
				fLocal_1719 = 1.5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1663 = 0;
			}
		}
	}
	if (iLocal_1664 == 1)
	{
		if (func_3(&iLocal_1670))
		{
			if (func_5(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFERIGHTMISS";
				fLocal_1719 = 5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1664 = 0;
			}
		}
	}
	if (iLocal_1665 == 1)
	{
		if (func_3(&iLocal_1673))
		{
			if (func_5(&iLocal_1673) <= 2.5f)
			{
				iLocal_1718 = "STUNTINVERTED";
				fLocal_1719 = 4f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1665 = 0;
			}
		}
	}
	if (iLocal_1666 == 1)
	{
		if (func_3(&iLocal_1673))
		{
			if (func_5(&iLocal_1673) <= 2.5f)
			{
				iLocal_1718 = "STUNTINVERTEDHIT";
				fLocal_1719 = 1.5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1666 = 0;
			}
		}
	}
	if (iLocal_1667 == 1)
	{
		if (func_3(&iLocal_1673))
		{
			if (func_5(&iLocal_1673) <= 2.5f)
			{
				iLocal_1718 = "STUNTINVERTEDMISS";
				fLocal_1719 = 5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1667 = 0;
			}
		}
	}
}

void func_75(var uParam0, int iParam1)//Position - 0x4091
{
	float fVar0;
	
	if (iParam1 < 0 || iParam1 > uParam0->f_358)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1 /*189*/].f_8, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1 /*189*/].f_9, false))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, false))
			{
				fVar0 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_358[iParam1 /*189*/].f_9);
				if (uParam0->f_358[0 /*189*/].f_11 == uParam0->f_358[iParam1 /*189*/].f_11)
				{
				}
				else if (uParam0->f_358[iParam1 /*189*/].f_11 > uParam0->f_358[0 /*189*/].f_11)
				{
					fVar0 = (fVar0 * 0.69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_358[iParam1 /*189*/].f_9, -1, false))
					{
						PED::SET_PED_INTO_VEHICLE(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, -1);
						TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_358[iParam1 /*189*/].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, int iParam5)//Position - 0x41AB
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (Local_45.f_0 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam2, false))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam1, iParam2, Param3, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam2), 1, 0, 786469, 5f, -1f);
			}
		}
		else if (Local_45.f_0 == 2)
		{
			uParam4 = uParam4;
			func_77(uParam0, Param3, iParam5);
		}
	}
}

void func_77(var uParam0, struct<3> Param1, var uParam2)//Position - 0x4202
{
	uParam0->f_12 = uParam0->f_12;
	Param1 = { Param1 };
	uParam2 = uParam2;
}

void func_78(var uParam0, int iParam1)//Position - 0x421E
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_81(&(uParam0->f_27[iParam1 /*10*/].f_6), &(uParam0->f_2861), &(uParam0->f_2862), uParam0->f_27[iParam1 /*10*/].f_7 == 4);
	if (iParam1 + 1 < uParam0->f_12)
	{
		func_82(&(uParam0->f_27[iParam1 + 1 /*10*/]));
		func_79(&(uParam0->f_27[iParam1 + 1 /*10*/]));
	}
}

void func_79(var uParam0)//Position - 0x4292
{
	func_80(&(uParam0->f_6));
}

void func_80(var uParam0)//Position - 0x42A2
{
	if (*uParam0 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(*uParam0);
		*uParam0 = 0;
	}
}

void func_81(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x42BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_80(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		if (bLocal_1916)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		func_599(func_600(iVar3), &iVar0, &iVar1, &iVar2, uParam2);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam1, iVar0, iVar1, iVar2, *uParam2);
		GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam1, iVar0, iVar1, iVar2, *uParam2);
	}
}

void func_82(var uParam0)//Position - 0x432A
{
	func_83(&(uParam0->f_5));
}

void func_83(int* iParam0)//Position - 0x433A
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
}

int func_84(int iParam0)//Position - 0x4352
{
	if ((((((iParam0 == 9 || iParam0 == 12) || iParam0 == 15) || iParam0 == 10) || iParam0 == 13) || iParam0 == 16) || iParam0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_85(var uParam0, bool bParam1, int iParam2)//Position - 0x43A8
{
	if (bParam1)
	{
		if (Local_45.f_0 == 0)
		{
			if (func_3(&iLocal_1682))
			{
				func_89(&iLocal_1682, 3f);
			}
			if (func_3(&iLocal_1676))
			{
				func_89(&iLocal_1676, 3f);
			}
			if (func_3(&iLocal_1670))
			{
				func_89(&iLocal_1670, 3f);
			}
			if (func_3(&iLocal_1679))
			{
				func_89(&iLocal_1679, 3f);
			}
			if (func_3(&iLocal_1673))
			{
				func_89(&iLocal_1673, 3f);
			}
			if (func_3(&iLocal_1685))
			{
				func_89(&iLocal_1685, 3f);
			}
			if (func_3(&iLocal_1688))
			{
				func_89(&iLocal_1688, 3f);
			}
			if (func_3(&iLocal_1691))
			{
				func_89(&iLocal_1691, 3f);
			}
			if (func_3(&iLocal_1694))
			{
				func_89(&iLocal_1694, 3f);
			}
			if (func_3(&iLocal_1697))
			{
				func_89(&iLocal_1697, 3f);
			}
			if (func_3(&iLocal_1700))
			{
				func_89(&iLocal_1700, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_1652 = 1;
					func_11(&iLocal_1682);
					break;
				
				case 1:
					iLocal_1653 = 1;
					func_11(&iLocal_1688);
					break;
				
				case 2:
					iLocal_1654 = 1;
					func_11(&iLocal_1685);
					break;
				
				case 3:
					iLocal_1655 = 1;
					func_11(&iLocal_1697);
					break;
				
				case 4:
					iLocal_1656 = 1;
					func_11(&iLocal_1700);
					break;
				
				case 5:
					iLocal_1657 = 1;
					func_11(&iLocal_1691);
					break;
				
				case 6:
					iLocal_1658 = 1;
					func_11(&iLocal_1694);
					break;
				
				case 8:
					iLocal_1659 = 1;
					func_11(&iLocal_1670);
					break;
				
				case 9:
					iLocal_1660 = 1;
					func_11(&iLocal_1679);
					break;
				
				case 10:
					iLocal_1661 = 1;
					func_11(&iLocal_1682);
					break;
				
				case 11:
					iLocal_1662 = 1;
					func_11(&iLocal_1670);
					break;
				
				case 12:
					iLocal_1663 = 1;
					func_11(&iLocal_1679);
					break;
				
				case 13:
					iLocal_1664 = 1;
					func_11(&iLocal_1682);
					break;
				
				case 14:
					iLocal_1665 = 1;
					func_11(&iLocal_1673);
					break;
				
				case 15:
					iLocal_1666 = 1;
					func_11(&iLocal_1679);
					break;
				
				case 16:
					iLocal_1667 = 1;
					func_11(&iLocal_1682);
					break;
				}
			}
	}
}

void func_86(var uParam0, int iParam1)//Position - 0x45D0
{
	switch (iParam1)
	{
		case 7:
			func_88(uParam0, 5f);
			break;
		
		case 0:
			break;
		
		case 1:
			func_87(uParam0, 1f);
			break;
		
		case 2:
			func_87(uParam0, 0f);
			break;
		
		case 5:
			func_87(uParam0, 1.5f);
			break;
		
		case 6:
			func_87(uParam0, 2f);
			break;
		
		case 3:
			func_87(uParam0, 2.5f);
			break;
		
		case 4:
			func_87(uParam0, 3f);
			break;
		
		case 8:
			func_87(uParam0, 4f);
			break;
		
		case 9:
			func_88(uParam0, 1.5f);
			break;
		
		case 10:
			func_88(uParam0, 5f);
			break;
		
		case 11:
			func_87(uParam0, 4f);
			break;
		
		case 12:
			func_88(uParam0, 1.5f);
			break;
		
		case 13:
			func_88(uParam0, 5f);
			break;
		
		case 14:
			func_87(uParam0, 4f);
			break;
		
		case 15:
			func_88(uParam0, 1.5f);
			break;
		
		case 16:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(var uParam0, float fParam1)//Position - 0x46FC
{
	uParam0->f_14 = fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_88(var uParam0, float fParam1)//Position - 0x4717
{
	uParam0->f_14 = -fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_89(int* iParam0, float fParam1)//Position - 0x4733
{
	if (func_3(iParam0))
	{
		func_12(iParam0, (func_5(iParam0) + fParam1));
	}
}

void func_90(var uParam0, var uParam1)//Position - 0x4756
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (uParam0->f_6 != 0)
	{
		iVar4 = func_92();
		if (uParam0->f_8 == 2 || uParam0->f_8 == 3)
		{
			iVar4 = 18;
		}
		else if (uParam0->f_8 == 1)
		{
			iVar4 = 9;
		}
		func_599(func_600(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_6, iVar0, iVar1, iVar2, func_91(*uParam0, 25, 200));
	}
	if (uParam1->f_6 != 0)
	{
		iVar5 = func_92();
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			iVar5 = 18;
		}
		else if (uParam1->f_8 == 1)
		{
			iVar5 = 9;
		}
		func_599(func_600(iVar5), &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam1->f_6, iVar0, iVar1, iVar2, func_91(*uParam1, 25, 200));
	}
}

int func_91(struct<3> Param0, int iParam1, int iParam2)//Position - 0x4820
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - SYSTEM::CEIL((IntToFloat((iParam2 - iParam1)) * fVar3)));
		}
	}
	if (iVar1 < iParam1)
	{
		iVar1 = iParam1;
	}
	return iVar1;
}

int func_92()//Position - 0x488C
{
	return 12;
}

int func_93(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x4896
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	var uVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
	{
		return -1;
	}
	iVar4 = func_100(uParam1, iParam3);
	if (Local_45.f_0 == 0)
	{
		if (iVar4 != 17)
		{
			if (iVar4 == 1)
			{
				if (func_99(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 8;
							return iVar4;
						}
						if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 3;
						if (!func_372(iLocal_1949, 262144))
						{
							func_98("Gate_PK", &iLocal_1948);
							iLocal_1949 = 0;
							func_344(&iLocal_1949, 262144);
							return iVar4;
						}
						else if (!func_372(iLocal_1949, 524288))
						{
							func_98("Con_PK", &iLocal_1948);
							func_344(&iLocal_1949, 524288);
							return iVar4;
						}
						else if (!func_372(iLocal_1949, 1048576))
						{
							func_98("Con_PK", &iLocal_1948);
							func_344(&iLocal_1949, 1048576);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1948);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar4 = 11;
							return iVar4;
						}
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 3;
						if (!func_372(iLocal_1949, 262144))
						{
							func_98("Gate_PK", &iLocal_1948);
							iLocal_1949 = 0;
							func_344(&iLocal_1949, 262144);
							return iVar4;
						}
						else if (!func_372(iLocal_1949, 524288))
						{
							func_98("Con_PK", &iLocal_1948);
							func_344(&iLocal_1949, 524288);
							return iVar4;
						}
						else if (!func_372(iLocal_1949, 1048576))
						{
							func_98("Con_PK", &iLocal_1948);
							func_344(&iLocal_1949, 1048576);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1948);
							return iVar4;
						}
					}
				}
				else
				{
					ENTITY::GET_ENTITY_MATRIX(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar1, &Var2, &uVar3);
					if (Var2.f_2 <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar4 = 14;
								return iVar4;
							}
							if (uParam1->f_8 == 2)
							{
								iVar4 = 9;
								return iVar4;
							}
							if (uParam1->f_8 == 3)
							{
								iVar4 = 12;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 4;
							if (!func_372(iLocal_1949, 32768))
							{
								func_98("Gate_PI", &iLocal_1947);
								iLocal_1949 = 0;
								func_344(&iLocal_1949, 32768);
								return iVar4;
							}
							else if (!func_372(iLocal_1949, 65536))
							{
								func_98("Con_PI", &iLocal_1947);
								func_344(&iLocal_1949, 65536);
								return iVar4;
							}
							else if (!func_372(iLocal_1949, 131072))
							{
								func_98("Con_PI", &iLocal_1947);
								func_344(&iLocal_1949, 131072);
								return iVar4;
							}
							else
							{
								func_98("Con_PI", &iLocal_1947);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 1;
						if (!func_372(iLocal_1949, 4096))
						{
							func_98("Get_Perf", &iLocal_1944);
							iLocal_1949 = 0;
							func_344(&iLocal_1949, 4096);
							return iVar4;
						}
						else if (!func_372(iLocal_1949, 8192))
						{
							func_98("Con_Perf", &iLocal_1944);
							func_344(&iLocal_1949, 8192);
							return iVar4;
						}
						else if (!func_372(iLocal_1949, 16384))
						{
							func_98("Con_Perf", &iLocal_1944);
							func_344(&iLocal_1949, 16384);
							return iVar4;
						}
						else
						{
							func_98("Con_Perf", &iLocal_1944);
							return iVar4;
						}
					}
				}
			}
			if (iVar4 == 2)
			{
				if (func_99(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 8;
							return iVar4;
						}
						if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 5;
						if (!func_372(iLocal_1949, 64))
						{
							func_98("Gate_Kni", &iLocal_1946);
							iLocal_1949 = 0;
							func_344(&iLocal_1949, 64);
							return iVar4;
						}
						else if (!func_372(iLocal_1949, 128))
						{
							func_98("Con_Kni", &iLocal_1946);
							func_344(&iLocal_1949, 128);
							return iVar4;
						}
						else if (!func_372(iLocal_1949, 256))
						{
							func_98("Con_Kni", &iLocal_1946);
							func_344(&iLocal_1949, 256);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1946);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar4 = 11;
							return iVar4;
						}
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 5;
						if (!func_372(iLocal_1949, 64))
						{
							func_98("Gate_Kni", &iLocal_1946);
							iLocal_1949 = 0;
							func_344(&iLocal_1949, 64);
							return iVar4;
						}
						else if (!func_372(iLocal_1949, 128))
						{
							func_98("Con_Kni", &iLocal_1946);
							func_344(&iLocal_1949, 128);
							return iVar4;
						}
						else if (!func_372(iLocal_1949, 256))
						{
							func_98("Con_Kni", &iLocal_1946);
							func_344(&iLocal_1949, 256);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1946);
							return iVar4;
						}
					}
				}
				else
				{
					ENTITY::GET_ENTITY_MATRIX(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar1, &Var2, &uVar3);
					if (Var2.f_2 <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar4 = 14;
								return iVar4;
							}
							if (uParam1->f_8 == 2)
							{
								iVar4 = 8;
								return iVar4;
							}
							if (uParam1->f_8 == 3)
							{
								iVar4 = 12;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 6;
							if (!func_372(iLocal_1949, 512))
							{
								func_98("Gate_Inv", &iLocal_1945);
								iLocal_1949 = 0;
								func_344(&iLocal_1949, 512);
								return iVar4;
							}
							else if (!func_372(iLocal_1949, 1024))
							{
								func_98("Con_Inv", &iLocal_1945);
								func_344(&iLocal_1949, 1024);
								return iVar4;
							}
							else if (!func_372(iLocal_1949, 2048))
							{
								func_98("Con_Inv", &iLocal_1945);
								func_344(&iLocal_1949, 2048);
								return iVar4;
							}
							else
							{
								func_98("Con_Inv", &iLocal_1945);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 2;
						if (!func_372(iLocal_1949, 8))
						{
							func_98("Gate_Hit", &iLocal_1943);
							iLocal_1949 = 0;
							func_344(&iLocal_1949, 8);
							return iVar4;
						}
						else if (!func_372(iLocal_1949, 16))
						{
							func_98("Con_Hit", &iLocal_1943);
							func_344(&iLocal_1949, 16);
							return iVar4;
						}
						else if (!func_372(iLocal_1949, 32))
						{
							func_98("Con_Hit", &iLocal_1943);
							func_344(&iLocal_1949, 32);
							return iVar4;
						}
						else
						{
							func_98("Con_Hit", &iLocal_1943);
							return iVar4;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, iParam3))
			{
				if (uParam1->f_8 != 0)
				{
					if (uParam1->f_8 == 2)
					{
						iVar4 = 10;
						return iVar4;
					}
					if (uParam1->f_8 == 3)
					{
						iVar4 = 13;
						return iVar4;
					}
					if (uParam1->f_8 == 1)
					{
						iVar4 = 16;
						return iVar4;
					}
				}
				else
				{
					iVar4 = 7;
					if (!func_372(iLocal_1949, 1))
					{
						func_98("Gate_Miss", &iLocal_1942);
						iLocal_1949 = 0;
						func_344(&iLocal_1949, 1);
						return iVar4;
					}
					else if (!func_372(iLocal_1949, 2))
					{
						func_98("Con_Miss", &iLocal_1942);
						func_344(&iLocal_1949, 2);
						return iVar4;
					}
					else if (!func_372(iLocal_1949, 4))
					{
						func_98("Con_Miss", &iLocal_1942);
						func_344(&iLocal_1949, 4);
						return iVar4;
					}
					else
					{
						func_98("Con_Miss", &iLocal_1942);
						return iVar4;
					}
				}
			}
			return iVar4;
		}
		if (func_94(uParam1, uParam2, iParam3))
		{
			if (uParam1->f_8 != 0)
			{
				if (uParam1->f_8 == 2)
				{
					iVar4 = 10;
					return iVar4;
				}
				if (uParam1->f_8 == 3)
				{
					iVar4 = 13;
					return iVar4;
				}
				if (uParam1->f_8 == 1)
				{
					iVar4 = 16;
					return iVar4;
				}
			}
			else
			{
				iVar4 = 7;
				if (!func_372(iLocal_1949, 1))
				{
					func_98("Gate_Miss", &iLocal_1942);
					iLocal_1949 = 0;
					func_344(&iLocal_1949, 1);
					return iVar4;
				}
				else if (!func_372(iLocal_1949, 2))
				{
					func_98("Con_Miss", &iLocal_1942);
					func_344(&iLocal_1949, 2);
					return iVar4;
				}
				else if (!func_372(iLocal_1949, 4))
				{
					func_98("Con_Miss", &iLocal_1942);
					func_344(&iLocal_1949, 4);
					return iVar4;
				}
				else
				{
					func_98("Con_Miss", &iLocal_1942);
					return iVar4;
				}
			}
			return iVar4;
		}
	}
	else if (iVar4 != 17)
	{
		return iVar4;
	}
	return -1;
}

int func_94(var uParam0, var uParam1, int iParam2)//Position - 0x51FB
{
	float fVar0;
	struct<3> Var1;
	
	if (!func_73(*uParam0, *uParam1, 1056964608, 0))
	{
		fVar0 = (uParam0->f_3 * 5f);
		if (ENTITY::IS_ENTITY_AT_COORD(iParam2, *uParam0, fVar0, fVar0, fVar0, false, true, 0))
		{
			Var1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(ENTITY::GET_ENTITY_COORDS(iParam2, true), Var1) - func_95(*uParam0, Var1)) > 15f)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_1938, "HUD_MINI_GAME_SOUNDSET", true);
				return 1;
			}
		}
	}
	return 0;
}

float func_95(struct<3> Param0, struct<3> Param1)//Position - 0x527E
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_96(struct<3> Param0)//Position - 0x529F
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

bool func_97(int iParam0)//Position - 0x52DE
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar0, &Var1, &Var2, &uVar3);
	if (MISC::ABSF(Var2.f_2) > 0.342f)
	{
		return 0;
	}
	return Var1.f_2 < 0f;
}

void func_98(char* sParam0, var uParam1)//Position - 0x531D
{
	char cVar0[16];
	
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_372(*uParam1, 1))
	{
		if (!iLocal_1651)
		{
			iLocal_1651 = 1;
			func_344(uParam1, 1);
			return;
		}
		else
		{
			iLocal_1651 = 0;
			if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_372(*uParam1, 1))
	{
		if (!func_372(*uParam1, 2))
		{
			if (!iLocal_1651)
			{
				iLocal_1651 = 1;
				func_344(uParam1, 2);
				return;
			}
			else
			{
				iLocal_1651 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_372(*uParam1, 2))
	{
		if (!func_372(*uParam1, 4))
		{
			if (!iLocal_1651)
			{
				iLocal_1651 = 1;
				func_344(uParam1, 4);
				return;
			}
			else
			{
				iLocal_1651 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_372(*uParam1, 4))
	{
		if (!func_372(*uParam1, 8))
		{
			if (!iLocal_1651)
			{
				iLocal_1651 = 1;
				func_344(uParam1, 8);
				return;
			}
			else
			{
				iLocal_1651 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_372(*uParam1, 8))
	{
		if (!func_372(*uParam1, 16))
		{
			if (!iLocal_1651)
			{
				iLocal_1651 = 1;
				func_344(uParam1, 16);
				return;
			}
			else
			{
				iLocal_1651 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
}

bool func_99(int iParam0)//Position - 0x54A8
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar0, &Var1, &Var2, &uVar3);
	if (MISC::ABSF(Var2.f_2) > 0.342f)
	{
		return 0;
	}
	return Var1.f_2 > 0f;
}

int func_100(var uParam0, int iParam1)//Position - 0x54E7
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	Var0 = { *uParam0 };
	ENTITY::GET_ENTITY_MATRIX(iParam1, &Var4, &Var2, &Var3, &Var1);
	Var5 = { Var0 - Var1 };
	fVar6 = MISC::ABSF(func_95(Var5, Var4));
	fVar7 = MISC::ABSF(func_95(Var5, Var3));
	fVar8 = MISC::ABSF(func_95(Var5, Var2));
	fVar9 = ((fVar7 * fVar7) + (fVar8 * fVar8));
	if (fVar6 > 6.5f)
	{
		return 17;
	}
	else
	{
		if (fVar9 > 900f)
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				func_207(&uLocal_1902, 0);
			}
			return 17;
		}
		if (fVar9 > 110f)
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				func_207(&uLocal_1902, 0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_1937, "HUD_MINI_GAME_SOUNDSET", true);
			return 2;
		}
		else
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				func_207(&uLocal_1902, 0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_1937, "HUD_MINI_GAME_SOUNDSET", true);
			return 1;
		}
	}
	return -1;
}

void func_101(var uParam0, int iParam1)//Position - 0x55DA
{
	int iVar0;
	int iVar1;
	struct<189> Var2;
	float fVar3;
	float fVar4;
	
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	iVar0 = uParam0->f_13;
	Var2 = { uParam0->f_358[iParam1 /*189*/] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (Var2.f_8 != uParam0->f_358[iVar1 /*189*/].f_8)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(Var2.f_8, false))
			{
				if (Var2.f_11 > uParam0->f_358[iVar1 /*189*/].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == uParam0->f_358[iVar1 /*189*/].f_11)
				{
					fVar3 = func_102(Var2.f_8, uParam0->f_27[Var2.f_11 /*10*/], 1);
					fVar4 = func_102(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], 1);
					if (fVar3 < fVar4)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	uParam0->f_358[iParam1 /*189*/].f_12 = iVar0;
}

float func_102(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x56E9
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1, bParam2);
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5713
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_313(sParam0, -1);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)//Position - 0x5748
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_105(var uParam0, var uParam1, bool bParam2)//Position - 0x575E
{
	int iVar0;
	
	switch (uParam1->f_23)
	{
		case 0:
			func_188(uParam0);
			func_263();
			func_273(&(Local_45.f_119), 0, 0, 1, 1);
			func_272(&(Local_45.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
			func_272(&(Local_45.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
			func_266(1);
			AUDIO::TRIGGER_MUSIC_EVENT("MGSP_FAIL");
			uParam1->f_23 = 1;
			break;
		
		case 1:
			if (func_182(&(Local_45.f_321), &(Local_45.f_327), &(uParam0->f_17), cLocal_1914, sLocal_1915, uParam0, 78))
			{
				iLocal_2029 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_358[0 /*189*/].f_9, 4);
				}
				if (func_270("SPR_HELP_DAMG", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				func_66(&(Local_45.f_321), 1);
				if (*uParam0)
				{
					func_174(0, 0);
					func_173(0, 0);
					func_172();
					if (func_270("SPR_RETR_DES", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("SPR_RETR_DES");
					}
					func_266(0);
					*uParam0 = 1;
					uParam1->f_23 = 6;
				}
				else
				{
					func_174(0, 0);
					func_173(0, 0);
					func_172();
					func_89(&iLocal_1917, 10f);
					func_266(0);
					*uParam0 = 0;
					uParam1->f_23 = 7;
				}
			}
			break;
		
		case 2:
			func_164(&(Local_45.f_119), 1128792064, 7, 1, 1, 1065353216);
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				func_174(0, 0);
				func_173(0, 0);
				func_172();
				iLocal_2034 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2034, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
				if (func_270("SPR_RETR_DES", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("SPR_RETR_DES");
				}
				func_266(0);
				*uParam0 = 1;
				uParam1->f_23 = 6;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
			{
				func_174(0, 0);
				func_173(0, 0);
				func_172();
				iLocal_2034 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2034, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", true);
				func_89(&iLocal_1917, 10f);
				func_266(0);
				*uParam0 = 0;
				uParam1->f_23 = 7;
			}
			break;
		
		case 4:
			if (*uParam0 == 1)
			{
				uParam0->f_1 = 0;
			}
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { uParam0->f_27[uParam1->f_11 /*10*/] };
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, false))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					func_273(&(Local_45.f_119), 0, 0, 1, 1);
					func_272(&(Local_45.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_272(&(Local_45.f_119), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, false))
				{
					uParam1->f_23 = 5;
				}
			}
			else
			{
				uParam1->f_23 = 8;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_358[0 /*189*/].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (func_5(&iLocal_1917) <= 10f)
			{
				if (bParam2)
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					PAD::DISABLE_CONTROL_ACTION(0, 99, true);
					PAD::DISABLE_CONTROL_ACTION(0, 100, true);
					func_164(&(Local_45.f_119), 1128792064, 1, 0, 1, 1065353216);
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						*uParam0 = 1;
						iLocal_2034 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2034, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
						uParam1->f_23 = 6;
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						*uParam0 = 0;
						func_89(&iLocal_1917, 10f);
						iLocal_2034 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2034, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", true);
						uParam1->f_23 = 6;
					}
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				sLocal_1915 = "SPR_RETR_DES";
				func_66(&(Local_45.f_321), 1);
				uParam1->f_23 = 14;
			}
			break;
		
		case 6:
			if (func_368(500))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				uParam1->f_23 = 8;
			}
			break;
		
		case 7:
			if (func_3(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3));
			}
			if (func_145())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_188(uParam0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_358[0 /*189*/].f_9))
					{
						ENTITY::SET_ENTITY_VELOCITY(uParam0->f_358[0 /*189*/].f_9, 0f, 0f, 0f);
						ENTITY::SET_ENTITY_HEALTH(uParam0->f_358[0 /*189*/].f_9, ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_358[0 /*189*/].f_9), 0);
					}
					uParam1->f_23 = 10;
				}
			}
			break;
		
		case 8:
			if (func_143(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_26 = 8;
				}
				else
				{
					if (bParam2)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						if (Local_45.f_0 == 0)
						{
							PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
						}
					}
					uParam1->f_23 = 9;
				}
			}
			break;
		
		case 9:
			iVar0 = 0;
			while (iVar0 < uParam0->f_13)
			{
				if (uParam0->f_358[iVar0 /*189*/].f_8 == uParam1->f_8)
				{
					func_141(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false) && uParam0->f_358[0 /*189*/].f_11 != -1)
				{
					func_140(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/], uParam0->f_358[0 /*189*/].f_9, uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/], uParam0->f_358[0 /*189*/].f_11 == 0);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				func_11(&iLocal_2025);
				uParam1->f_23 = 11;
			}
			else
			{
				uParam1->f_23 = 13;
			}
			break;
		
		case 10:
			func_174(0, 0);
			func_173(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_45.f_3, Local_45.f_6, 0f);
			SYSTEM::SETTIMERA(0);
			uParam1->f_23 = 12;
			break;
		
		case 11:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				uParam0->f_1 = 1;
				func_11(&iLocal_2025);
				func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 0);
				if (func_596(500))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
					{
						PED::SET_PED_INTO_VEHICLE(uParam0->f_358[0 /*189*/].f_8, uParam0->f_358[0 /*189*/].f_9, -1);
					}
					if (bParam2 && Local_45.f_0 == 0)
					{
						func_88(&(uParam0->f_358[0 /*189*/]), 5f);
					}
					uParam1->f_23 = 13;
				}
				return 0;
			}
			else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (uParam0->f_358[0 /*189*/].f_11 < uParam0->f_12)
				{
					if (func_3(&iLocal_2025))
					{
						if (func_107(&iLocal_2025) >= 3f)
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					else
					{
						func_10(&iLocal_2025);
					}
				}
			}
			break;
		
		case 12:
			uParam0->f_26 = 8;
			return 0;
			break;
		
		case 13:
			if (uParam1->f_22 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8, false))
				{
					if (func_106(uParam1))
					{
						func_11(&iLocal_1917);
						sLocal_1915 = "SPR_RETR_STUK";
						uParam1->f_23 = 0;
						return 1;
					}
				}
			}
			return 0;
		
		case 14:
			func_188(uParam0);
			func_4(&(uParam0->f_3));
			uParam0->f_26 = 8;
			break;
	}
	return 1;
}

int func_106(var uParam0)//Position - 0x5E2E
{
	if (uParam0->f_22 != 0)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_9, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_22 == joaat("stunt"))
					{
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) < 3f || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_9))
						{
							if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_9) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 3, 10000))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_107(int* iParam0)//Position - 0x5EFD
{
	if (func_3(iParam0))
	{
		if (func_7(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_6(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, float fParam1, bool bParam2)//Position - 0x5F36
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_22))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_9, 2) };
			func_109(uParam0->f_9, fParam1, bParam2, Var0.f_0, 0);
		}
	}
}

void func_109(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x5F72
{
	struct<3> Var0;
	bool bVar1;
	float fVar2;
	
	PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0) < fParam1)
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, fParam1);
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	bVar1 = false;
	if (bParam2)
	{
		fVar2 = (MISC::GET_FRAME_TIME() * 45f);
		if (Var0.f_0 < -fVar2)
		{
			bVar1 = true;
			Var0.f_0 = (Var0.f_0 + fVar2);
		}
		else if (Var0.f_0 < fParam3)
		{
			bVar1 = true;
			Var0.f_0 = fParam3;
		}
		else if (Var0.f_0 > fVar2)
		{
			bVar1 = true;
			Var0.f_0 = (Var0.f_0 - fVar2);
		}
		else if (Var0.f_0 > fParam3)
		{
			bVar1 = true;
			Var0.f_0 = fParam3;
		}
		if (Var0.f_1 < -fVar2)
		{
			bVar1 = true;
			Var0.f_1 = (Var0.f_1 + fVar2);
		}
		else if (Var0.f_1 < fParam4)
		{
			bVar1 = true;
			Var0.f_1 = fParam4;
		}
		else if (Var0.f_1 > fVar2)
		{
			bVar1 = true;
			Var0.f_1 = (Var0.f_1 - fVar2);
		}
		else if (Var0.f_1 > fParam4)
		{
			bVar1 = true;
			Var0.f_1 = fParam4;
		}
	}
	else
	{
		if (Var0.f_0 != fParam3)
		{
			bVar1 = true;
			Var0.f_0 = fParam3;
		}
		if (Var0.f_1 != fParam4)
		{
			bVar1 = true;
			Var0.f_1 = fParam4;
		}
	}
	if (bVar1)
	{
		ENTITY::SET_ENTITY_ROTATION(iParam0, Var0, 2, true);
	}
}

int func_110(var uParam0, bool bParam1)//Position - 0x60A4
{
	char cVar0[16];
	
	if (bParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_9, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, true, true);
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
				}
			}
			else
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, true, false, false, true);
				}
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
				{
				}
				else
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, true, true);
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000, 0);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_9);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_9, uParam0->f_16, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_9, uParam0->f_19);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9, 5f);
	}
	else
	{
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		uParam0->f_9 = VEHICLE::CREATE_VEHICLE(joaat("stunt"), uParam0->f_16, uParam0->f_19, true, true, false);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4);
		}
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_9, true);
		func_111(uParam0->f_9, &(Local_45.f_243), 0, 1);
	}
	AUDIO::ENABLE_STALL_WARNING_SOUNDS(uParam0->f_9, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, true, true, false);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
		{
			PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, true, false);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_9, &cVar0);
	if (uParam0->f_20 <= 3)
	{
		VEHICLE::_0xC50CE861B55EAB8B(uParam0->f_9, false);
		Local_45.f_1 = uParam0->f_9;
	}
	return 1;
}

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x62A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_132(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_131(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_131(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_131(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_131(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_131(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_131(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_131(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_131(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_131(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_131(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_131(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_131(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_131(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_131(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_131(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_129(uParam1->f_5) || func_129(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_128(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_127())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_126(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_125(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_125(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			func_118(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_131(iVar6 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((func_112() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_112()//Position - 0x694B
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_116(7))
	{
		if (func_114(Global_2703735.f_4.f_16) || func_113(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_113(var uParam0)//Position - 0x69DA
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x69FE
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_115(iParam0, 9);
	}
	return 0;
}

var func_115(int iParam0, int iParam1)//Position - 0x6A1C
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

bool func_116(int iParam0)//Position - 0x6A34
{
	return func_117(&(Global_2703735.f_169), iParam0);
}

var func_117(var uParam0, var uParam1)//Position - 0x6A48
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_118(int iParam0, var uParam1, var uParam2)//Position - 0x6A6B
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, 255);
				}
				else
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_123(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_122(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_121(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_121(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_120(iParam0);
	if (func_119(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_119(int iParam0)//Position - 0x6C45
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_120(var uParam0)//Position - 0x6D21
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_121(int iParam0, int iParam1)//Position - 0x6D78
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
		iVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_122(int iParam0, int iParam1)//Position - 0x6E5D
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("TENF2"):
		case joaat("WEEVIL2"):
		case joaat("BRIOSO3"):
		case joaat("SENTINEL4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19186)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19188)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19192)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19189)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19196)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19194)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19199)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21145)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_123(int iParam0, int iParam1, int iParam2)//Position - 0x723C
{
	if (!func_124() && VEHICLE::_0x00834EAC4A96E010(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_124()//Position - 0x7260
{
	return 0;
}

void func_125(int iParam0, int iParam1)//Position - 0x7269
{
	int iVar0;
	bool bVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		bVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, bVar1 == 1);
		}
	}
}

int func_126(int iParam0)//Position - 0x72E1
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_127()//Position - 0x7301
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_128(int iParam0)//Position - 0x7312
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x735A
{
	if (!func_124() && func_130(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0x737A
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x73CD
{
	switch (iParam0)
	{
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
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_132(int iParam0)//Position - 0x747D
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_138(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (func_134(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_133(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_133(int iParam0)//Position - 0x7504
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_134(int iParam0)//Position - 0x7533
{
	if (func_137(iParam0) == 233)
	{
		return func_135(iParam0);
	}
	return -1;
}

int func_135(int iParam0)//Position - 0x7550
{
	if (func_136(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_136(int iParam0, int iParam1)//Position - 0x7573
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)//Position - 0x75AE
{
	if (func_136(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_138(int iParam0, int iParam1)//Position - 0x75D1
{
	int iVar0;
	
	if (func_139(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_139(int iParam0, bool bParam1, bool bParam2)//Position - 0x761E
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

void func_140(struct<3> Param0, int iParam1, struct<3> Param2, bool bParam3)//Position - 0x767E
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (bParam3 && Local_45.f_10 == 0)
		{
			ENTITY::SET_ENTITY_COORDS(iParam1, 1705.039f, 3251.13f, 40.0016f, true, false, false, true);
		}
		Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		STREAMING::REQUEST_COLLISION_AT_COORD(Var6);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var6, &fVar5, false, false);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		if (bParam3)
		{
			Var4 = { Param0 - Param2 };
		}
		else
		{
			Var4 = { Param2 - Var3 };
		}
		fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(Var4.f_0, Var4.f_1);
		fVar1 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var4.f_0, Var4.f_2) - 270f);
		while (fVar1 > 180f)
		{
			fVar1 = (fVar1 - 360f);
		}
		while (fVar1 < -180f)
		{
			fVar1 = (fVar1 + 360f);
		}
		if (fVar1 < -90f)
		{
			fVar1 = -(180f - MISC::ABSF(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - MISC::ABSF(fVar1));
		}
		if (MISC::ABSF((Var6.f_2 - fVar5)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			Var6.f_2 = (fVar5 + 25f);
			ENTITY::SET_ENTITY_COORDS(iParam1, Var6, true, false, false, true);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
		Var2 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) };
		Var2.f_0 = fVar1;
		Var2.f_2 = fVar0;
		ENTITY::SET_ENTITY_ROTATION(iParam1, Var2, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
		STREAMING::NEW_LOAD_SCENE_START(Var6, ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1), 500f, 0);
	}
}

void func_141(var uParam0, int iParam1, bool bParam2)//Position - 0x7815
{
	func_142(uParam0, iParam1, (uParam0->f_358[iParam1 /*189*/].f_11 - 1), bParam2);
}

void func_142(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7834
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	if (iParam2 < 0 || iParam2 > (uParam0->f_12 - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1 /*189*/].f_8, false))
	{
		return;
	}
	if (uParam0->f_358[iParam1 /*189*/].f_22 != 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1 /*189*/].f_9, false))
		{
			return;
		}
	}
	Var0 = { uParam0->f_27[iParam2 + 1 /*10*/] - uParam0->f_27[iParam2 /*10*/] };
	fVar1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1);
	fVar2 = 0f;
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar2 = 0f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar2 = 25f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar2 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_358[iParam1 /*189*/]), uParam0->f_27[iParam2 /*10*/], fVar1, fVar2);
}

int func_143(var uParam0, bool bParam1)//Position - 0x7940
{
	if (!func_110(uParam0, bParam1) || !func_144(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_144(var uParam0)//Position - 0x7966
{
	char cVar0[16];
	
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_8, 1000, 0);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
			{
				PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		uParam0->f_8 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, true, true);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = PED::CREATE_PED(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, true, true);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			return 0;
		}
	}
	if (uParam0->f_20 > 3)
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_8))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, true, false);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		PED::SET_PED_NAME_DEBUG(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_145()//Position - 0x7A80
{
	if (!BitTest(iLocal_41, 0) && !BitTest(iLocal_41, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_174(1, 0);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		HUD::CLEAR_PRINTS();
	}
	PAD::DISABLE_CONTROL_ACTION(2, 199, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	PAD::DISABLE_CONTROL_ACTION(0, 37, true);
	PAD::DISABLE_CONTROL_ACTION(0, 25, true);
	PED::_0x5A7F62FDA59759BD();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!BitTest(iLocal_41, 1))
		{
			func_173(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_42 == 0)
			{
				iLocal_42 = MISC::GET_GAME_TIMER() + 1000;
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				func_163(0, 2, 1);
				func_155(1, 1, 1, 0, 0, 0, 0);
				func_147(1);
				HUD::SET_FRONTEND_ACTIVE(false);
				HUD::SET_PAUSE_MENU_ACTIVE(false);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				func_174(0, 0);
				func_146(0);
			}
			else if (MISC::GET_GAME_TIMER() < iLocal_42)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_146(int iParam0)//Position - 0x7BBE
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(iLocal_41, 3))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&iLocal_41, 3);
			}
		}
		else if (BitTest(iLocal_41, 3))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&iLocal_41, 3);
		}
	}
}

void func_147(bool bParam0)//Position - 0x7BFF
{
	if (bParam0)
	{
		func_154();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_153(0))
		{
			func_148(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_148(int iParam0)//Position - 0x7C62
{
	if (func_152())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_151())
		{
			func_150(1, 1);
		}
		else
		{
			func_150(0, 0);
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
	if (!func_149())
	{
		Global_20266.f_1 = 3;
	}
}

int func_149()//Position - 0x7CEC
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_150(bool bParam0, bool bParam1)//Position - 0x7D13
{
	if (bParam0)
	{
		if (func_153(0))
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

bool func_151()//Position - 0x7D87
{
	return BitTest(Global_1958711, 5);
}

bool func_152()//Position - 0x7D95
{
	return BitTest(Global_1958711, 19);
}

int func_153(int iParam0)//Position - 0x7DA4
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

void func_154()//Position - 0x7DFB
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_155(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7E24
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_162(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_149())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_161(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_162(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_161(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_159(PLAYER::PLAYER_ID())) && !func_157(PLAYER::PLAYER_ID(), 0)) && !func_156()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_159(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

bool func_156()//Position - 0x7F67
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

bool func_157(int iParam0, int iParam1)//Position - 0x7F81
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_158(-1, 0) == 8;
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

int func_158(int iParam0, bool bParam1)//Position - 0x7FCC
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

int func_159(int iParam0)//Position - 0x800E
{
	if (func_157(iParam0, 0))
	{
		return 1;
	}
	if (func_160())
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

bool func_160()//Position - 0x804D
{
	return BitTest(Global_2621446, 3);
}

int func_161(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x805B
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

void func_162(int iParam0)//Position - 0x808E
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

void func_163(int iParam0, int iParam1, int iParam2)//Position - 0x80B1
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&iLocal_41, 2);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				MISC::SET_TIME_SCALE(0.2f);
			}
			else
			{
				MISC::SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (BitTest(iLocal_41, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		MISC::CLEAR_BIT(&iLocal_41, 2);
	}
}

void func_164(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x810F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_171(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_170(uParam0->f_1, 256) || (func_170(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_170(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_USING_KEYBOARD(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_USING_KEYBOARD(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						bVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							sVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_169(sVar3);
						}
						bVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_168(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_170(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_167(bParam4, func_167(func_170(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_166(&(uParam0->f_1), 256);
		func_165(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_165(var uParam0, int iParam1)//Position - 0x83C9
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_166(var uParam0, int iParam1)//Position - 0x83DE
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_167(bool bParam0, float fParam1, float fParam2)//Position - 0x83EF
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_168(char* sParam0)//Position - 0x8406
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_169(char* sParam0)//Position - 0x8418
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_170(var uParam0, int iParam1)//Position - 0x8426
{
	return (uParam0 && iParam1) != 0;
}

int func_171(var uParam0)//Position - 0x8435
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_166(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_172()//Position - 0x845C
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	func_155(0, 1, 1, 0, 0, 0, 0);
	func_147(1);
}

void func_173(int iParam0, int iParam1)//Position - 0x847A
{
	if (iParam0 == 1)
	{
		func_174(0, 0);
		GRAPHICS::ANIMPOSTFX_PLAY("DeathFailOut", 0, false);
		MISC::SET_BIT(&iLocal_41, 1);
		func_163(1, 2, 0);
		CAM::_SET_CAM_EFFECT(2);
	}
	else
	{
		if (BitTest(iLocal_41, 1) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
			func_163(0, 2, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		MISC::CLEAR_BIT(&iLocal_41, 1);
	}
}

void func_174(int iParam0, int iParam1)//Position - 0x84D8
{
	char* sVar0;
	
	switch (func_175())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(iLocal_41, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, false);
			MISC::SET_BIT(&iLocal_41, 0);
			func_163(1, 1, 0);
			CAM::_SET_CAM_EFFECT(1);
		}
	}
	else
	{
		if (BitTest(iLocal_41, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP(sVar0);
			func_163(0, 1, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		MISC::CLEAR_BIT(&iLocal_41, 0);
	}
}

int func_175()//Position - 0x8572
{
	func_176();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_176()//Position - 0x858B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_180(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_179(PLAYER::PLAYER_PED_ID());
			if (func_178(iVar0) && (!func_177(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_178(Global_113386.f_2363.f_539.f_4321))
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

bool func_177(int iParam0)//Position - 0x8688
{
	return Global_43052 == iParam0;
}

bool func_178(int iParam0)//Position - 0x8696
{
	return iParam0 < 3;
}

int func_179(int iParam0)//Position - 0x86A2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_180(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_180(int iParam0)//Position - 0x86DF
{
	if (func_178(iParam0))
	{
		return func_181(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_181(int iParam0)//Position - 0x8704
{
	return Global_1998[iParam0 /*29*/];
}

int func_182(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)//Position - 0x8713
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", true);
			func_10(&(uParam0->f_1));
			func_172();
			func_187(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			break;
		
		case 1:
			if (func_145() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!func_372(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", true);
					func_344(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_372(uParam0->f_4, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", true);
					func_344(&(uParam0->f_4), 2);
				}
				func_184(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_184(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_174(0, 1);
				func_173(0, 1);
				func_172();
				if (*uParam5)
				{
					MISC::IGNORE_NEXT_RESTART(true);
				}
				else if (!uParam0->f_5)
				{
					func_183(0);
				}
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				MISC::PAUSE_DEATH_ARREST_RESTART(false);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
				func_174(0, 1);
				func_173(0, 1);
				AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				return 1;
			}
			break;
		
		case 4:
			SCRIPT::SET_NO_LOADING_SCREEN(false);
			return 1;
			break;
	}
	return 0;
}

void func_183(bool bParam0)//Position - 0x88D4
{
	if ((Global_43052 == 9 || Global_43052 == 10) || Global_43052 == 5)
	{
		Global_112035 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_112035 = 0;
	}
}

int func_184(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0x891A
{
	switch (*uParam1)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
				RECORDING::_STOP_RECORDING_THIS_FRAME();
			}
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(true);
			}
			MISC::SET_TIME_SCALE(0.2f);
			if (func_170(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", false, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(6);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			func_168(sParam3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			if (func_170(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			if (!func_170(iParam5, 1))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			func_273(&(uParam1->f_10), 0, 1, 1, 1);
			func_272(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_272(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_170(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", true);
			}
			if (func_170(iParam5, 8))
			{
				switch (func_175())
				{
					case 0:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 500, false);
						break;
					
					case 1:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 500, false);
						break;
					
					case 2:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 500, false);
						break;
					}
			}
			if (!func_3(&(uParam1->f_1)))
			{
				func_373(&(uParam1->f_1));
			}
			if (func_170(iParam5, 2))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_373(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (func_170(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam6);
			func_186(uParam0, 0, 0);
			if (!func_170(iParam5, 16) && (func_5(&(uParam1->f_1)) >= uParam1->f_135 || CAM::IS_SCREEN_FADED_OUT()))
			{
				func_164(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_138 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_170(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_185(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_170(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_185(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_170(iParam5, 2))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_170(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_185(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_186(uParam0, 0, 0);
			MISC::SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((MISC::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || MISC::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (MISC::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (func_170(iParam5, 64) && uParam1->f_138)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_5(&(uParam1->f_4)) <= 0.1f)
			{
				func_186(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_185(int* iParam0)//Position - 0x8CFD
{
	if (*iParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

int func_186(var uParam0, bool bParam1, bool bParam2)//Position - 0x8D20
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_5(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_4(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_187(var uParam0, float fParam1, float fParam2)//Position - 0x8DB2
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_185(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_188(var uParam0)//Position - 0x8E02
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_189(int iParam0, bool bParam1)//Position - 0x8E27
{
	switch (iLocal_1650)
	{
		case 0:
			func_25();
			func_206();
			func_202();
			iLocal_1650 = 1;
			break;
		
		case 1:
			if (func_201())
			{
				iLocal_1650 = 2;
			}
			break;
		
		case 2:
			func_190(iParam0);
			break;
		
		case 3:
			if (bParam1)
			{
				iLocal_1650 = 0;
			}
			break;
	}
}

void func_190(int iParam0)//Position - 0x8E85
{
	switch (Local_45.f_10)
	{
		case 3:
			func_200(iParam0);
			func_199(iParam0);
			break;
		
		case 0:
			func_198(iParam0);
			func_197(iParam0);
			break;
		
		case 1:
			func_196(iParam0);
			func_194(iParam0);
			break;
		
		case 2:
			func_193(iParam0);
			func_192(iParam0);
			break;
		
		case 4:
			func_191(iParam0);
			break;
	}
}

void func_191(int iParam0)//Position - 0x8EF9
{
	if (iParam0 == 5)
	{
		if (!func_372(uLocal_1726, 1))
		{
			func_344(&uLocal_1726, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_372(uLocal_1726, 2))
		{
			func_344(&uLocal_1726, 2);
		}
	}
}

void func_192(int iParam0)//Position - 0x8F36
{
	if (iParam0 >= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[0]) && !func_372(uLocal_1716, 1))
		{
			iLocal_1714[0] = VEHICLE::CREATE_VEHICLE(joaat("hauler"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, true, true, false);
			iLocal_1714[1] = VEHICLE::CREATE_VEHICLE(joaat("tanker"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, true, true, false);
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_1714[0], iLocal_1714[1], 1f);
			iLocal_1715[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1714[0], 4, joaat("s_m_m_dockwork_01"), -1, true, true);
			func_344(&uLocal_1716, 1);
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("SPR_Fluff_01"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_1715[0], false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1715[0], -235832601) == 1)
				{
				}
				else
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_1715[0], iLocal_1714[0], "SPR_Fluff_01", 786469, 0, 8, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iLocal_1714[0]), false, 2f);
				}
			}
		}
	}
}

void func_193(int iParam0)//Position - 0x9052
{
	if (iParam0 == 4)
	{
		if (!func_372(uLocal_1726, 1))
		{
			func_344(&uLocal_1726, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_372(uLocal_1726, 2))
		{
			func_344(&uLocal_1726, 2);
		}
	}
}

void func_194(int iParam0)//Position - 0x908F
{
	if (iParam0 >= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[0]))
		{
			if (!func_372(uLocal_1716, 1))
			{
				if (func_195(&iLocal_1713))
				{
					iLocal_1714[0] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), -2586.901f, 386.4225f, 208.0505f, 349.0836f, true, true, false);
					func_344(&uLocal_1716, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1714[0]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1715[0]))
			{
				if (!func_372(uLocal_1716, 2))
				{
					iLocal_1715[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1714[0], 4, joaat("a_m_y_motox_01"), -1, true, true);
					func_344(&uLocal_1716, 2);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1715[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_1715[0], false))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_1714[0], -2530.873f, 608.701f, 238.9111f, 3f, 3f, 3f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1715[0], -1817882002) == 1)
					{
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_1715[0], iLocal_1714[0], -2530.873f, 608.701f, 238.9111f, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iLocal_1714[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[1]))
		{
			if (!func_372(uLocal_1717, 1))
			{
				if (func_195(&iLocal_1713))
				{
					iLocal_1714[1] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), -2582.93f, 384.918f, 208.5764f, 336.8248f, true, true, false);
					func_344(&uLocal_1717, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1714[1]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1715[1]))
			{
				if (!func_372(uLocal_1717, 2))
				{
					iLocal_1715[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1714[1], 4, joaat("a_m_y_motox_01"), -1, true, true);
					func_344(&uLocal_1717, 2);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1715[1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[1], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_1715[1], false))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_1714[1], -2527.712f, 609.6833f, 239.2568f, 3f, 3f, 3f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1715[1], -1817882002) == 1)
					{
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_1715[1], iLocal_1714[1], -2527.712f, 609.6833f, 239.2568f, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iLocal_1714[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_195(int iParam0)//Position - 0x9333
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_196(int iParam0)//Position - 0x937A
{
	if (iParam0 == 9)
	{
		if (!func_372(uLocal_1726, 1))
		{
			func_344(&uLocal_1726, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_372(uLocal_1726, 2))
		{
			func_344(&uLocal_1726, 2);
		}
	}
}

void func_197(int iParam0)//Position - 0x93B8
{
	if (iParam0 == 6)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[0]) && !func_372(uLocal_1716, 1))
		{
			iLocal_1714[0] = VEHICLE::CREATE_VEHICLE(joaat("jetmax"), -1429.102f, 2602.645f, -1.0709f, 85.2614f, true, true, false);
			iLocal_1715[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1714[0], 4, joaat("s_m_m_dockwork_01"), -1, true, true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_1715[0], false))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_1714[0], -1552.281f, 2641.609f, -0.8283f, 3f, 3f, 3f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1715[0], -1273030092) == 1)
					{
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_1715[0], iLocal_1714[0], -1552.281f, 2641.609f, -0.8283f, 4, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iLocal_1714[0]), 262144, 3f, -1f, true);
					}
				}
			}
			func_344(&uLocal_1716, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_372(uLocal_1716, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1715[0], false))
			{
				PED::DELETE_PED(&(iLocal_1715[0]));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1714[0]));
			}
		}
	}
}

void func_198(int iParam0)//Position - 0x94FD
{
	if (iParam0 == 7)
	{
		if (!func_372(uLocal_1726, 1))
		{
			func_344(&uLocal_1726, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_372(uLocal_1726, 2))
		{
			func_344(&uLocal_1726, 2);
		}
	}
}

void func_199(int iParam0)//Position - 0x953A
{
	if (!func_372(uLocal_1716, 1))
	{
		if (iParam0 < 3)
		{
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "SPRStuntAF"))
			{
				STREAMING::REQUEST_COLLISION_AT_COORD(-943.8105f, -3173.692f, 12.9445f);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[0]))
				{
					iLocal_1714[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), -943.8105f, -3173.692f, 12.9445f, 60.537f, true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1714[0], 5f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1714[0], true, true, false);
					if (Local_45.f_0 == 0)
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_1714[0]);
					}
					iLocal_1715[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1714[0], 4, joaat("s_m_m_highsec_01"), -1, true, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1714[0], -943.8105f, -3173.692f, 12.9445f, 20f, 20f, 20f, false, true, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1714[0]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1714[0], 101, "SPRStuntAF", true);
						}
					}
					else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1714[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1715[0], false))
						{
							if (!TASK::GET_SCRIPT_TASK_STATUS(iLocal_1715[0], -1817882002) == 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_1715[0], iLocal_1714[0], -6793.876f, -557.0385f, 781.0172f, 50f, 0, joaat("jet"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1714[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1714[0]);
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1714[0]));
				func_344(&uLocal_1716, 1);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false))
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_1714[0], true));
	}
}

void func_200(int iParam0)//Position - 0x970E
{
	if (iParam0 == 6)
	{
		if (!func_372(uLocal_1726, 1))
		{
			func_344(&uLocal_1726, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_372(uLocal_1726, 2))
		{
			func_344(&uLocal_1726, 2);
		}
	}
}

int func_201()//Position - 0x974B
{
	switch (Local_45.f_10)
	{
		case 3:
			if (func_195(&iLocal_1713) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_195(&iLocal_1713))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_195(&iLocal_1713))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_195(&iLocal_1713) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("SPR_Fluff_01"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			break;
	}
	return 1;
}

void func_202()//Position - 0x97FA
{
	switch (Local_45.f_10)
	{
		case 3:
			func_204(&iLocal_1713, joaat("jet"));
			func_204(&iLocal_1713, joaat("s_m_m_highsec_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "SPRStuntAF");
			break;
		
		case 0:
			func_204(&iLocal_1713, joaat("jetmax"));
			func_204(&iLocal_1713, joaat("s_m_m_dockwork_01"));
			break;
		
		case 1:
			func_204(&iLocal_1713, joaat("sanchez"));
			func_204(&iLocal_1713, joaat("a_m_y_motox_01"));
			break;
		
		case 2:
			func_204(&iLocal_1713, joaat("hauler"));
			func_204(&iLocal_1713, joaat("tanker"));
			func_204(&iLocal_1713, joaat("s_m_m_dockwork_01"));
			TASK::REQUEST_WAYPOINT_RECORDING("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_203(&iLocal_1713);
}

void func_203(int iParam0)//Position - 0x98C6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_204(int iParam0, int iParam1)//Position - 0x98F6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_205(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

int func_205(var uParam0)//Position - 0x9953
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_206()//Position - 0x997F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_372(uLocal_1726, iVar0))
		{
			func_370(&uLocal_1726, iVar0);
		}
		iVar0++;
	}
}

void func_207(var uParam0, int iParam1)//Position - 0x99AE
{
	func_208(uParam0, iParam1, 0);
}

void func_208(var uParam0, int iParam1, bool bParam2)//Position - 0x99BF
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
		if (func_209(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_209(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

bool func_209(char* sParam0)//Position - 0x9A99
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_210(var uParam0)//Position - 0x9AAC
{
	float fVar0;
	
	if (uParam0->f_358[0 /*189*/].f_11 >= (uParam0->f_12 - 2))
	{
		fVar0 = SYSTEM::VDIST(uParam0->f_27[(uParam0->f_12 - 2) /*10*/], func_211());
		if (!STREAMING::STREAMVOL_IS_VALID(iLocal_1936))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_211()) <= ((fVar0 * 1.5f) * (fVar0 * 1.5f)))
			{
				iLocal_1936 = STREAMING::STREAMVOL_CREATE_FRUSTUM(func_211(), uParam0->f_27[(uParam0->f_12 - 1) /*10*/] - func_211(), 2000f, 12, 127);
			}
		}
		else if (!SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_211()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_263();
		}
	}
}

Vector3 func_211()//Position - 0x9B5C
{
	switch (Local_45.f_10)
	{
		case 0:
			return -2591.965f, 2483.167f, 60.8904f;
			break;
		
		case 1:
			return 1827.956f, 585.8948f, 287.6289f;
			break;
		
		case 2:
			return 991.1072f, -2389.983f, 83.3701f;
			break;
		
		case 3:
			return -1721.049f, -2792.948f, 75.4149f;
			break;
		
		case 4:
			return -578.6125f, 5436.721f, 150.1292f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_212(var uParam0)//Position - 0x9BF7
{
	if (func_245())
	{
		if (!Local_1929.f_0)
		{
			Local_1929.f_0 = 1;
			Local_1929.f_1 = 1;
		}
		else
		{
			Local_1929.f_1 = 0;
		}
	}
	else if (func_244())
	{
		if (!Local_1929.f_1 || func_243() >= 1f)
		{
			if (Local_1929.f_0)
			{
				Local_1929.f_0 = 0;
			}
		}
	}
	if (func_244())
	{
		func_242();
	}
	else
	{
		func_241();
	}
	if (Local_1929.f_0)
	{
		if (!func_240(Local_1929.f_2) && !func_238(Local_1929.f_2))
		{
			func_214(&uLocal_1902, Local_1929.f_2);
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(Local_1929.f_6))
			{
				CAM::DESTROY_CAM(Local_1929.f_6, false);
			}
			if (func_238(Local_1929.f_2))
			{
				Local_1929.f_2 = { func_213(uParam0) };
			}
			func_207(&uLocal_1902, 0);
			Local_1929.f_0 = 0;
		}
	}
	else if (CAM::DOES_CAM_EXIST(Local_1929.f_6))
	{
		CAM::DESTROY_CAM(Local_1929.f_6, false);
	}
	else
	{
		if (func_238(Local_1929.f_2))
		{
			Local_1929.f_2 = { func_213(uParam0) };
		}
		func_207(&uLocal_1902, 0);
		Local_1929.f_0 = 0;
	}
}

Vector3 func_213(var uParam0)//Position - 0x9D12
{
	if (uParam0->f_358[0 /*189*/].f_11 < (Local_45.f_11 - 1))
	{
		return uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_214(var uParam0, struct<3> Param1)//Position - 0x9D47
{
	func_215(uParam0, Param1, 0, 0, 1, 1, 1);
}

void func_215(var uParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x9D5E
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_208(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_216(uParam0, Param1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_216(var uParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x9D94
{
	int iVar0;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam2;
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
	if (func_209(iVar0))
	{
		func_237();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_232(uParam0, bParam4, bParam6, 0))
		{
			func_231(uParam0, Param1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_221(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam5)
					{
						if (!func_209(iVar0))
						{
							func_313(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_220(1);
							}
						}
					}
				}
			}
		}
		else if (func_221(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam5)
				{
					if (!func_209(iVar0))
					{
						func_313(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							func_220(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (func_209(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
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
					func_208(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					func_208(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					func_208(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					func_208(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					func_208(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_208(uParam0, iVar0, 1);
			}
		}
		if (!func_232(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_219(uParam0))
			{
				func_217(uParam0);
			}
		}
	}
}

void func_217(var uParam0)//Position - 0xA06E
{
	if (func_218(PLAYER::PLAYER_PED_ID()))
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

int func_218(int iParam0)//Position - 0xA0D7
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

int func_219(var uParam0)//Position - 0xA132
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

int func_220(bool bParam0)//Position - 0xA15D
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

int func_221(char* sParam0)//Position - 0xA207
{
	if (!func_222(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_209(sParam0)) || func_209("CMN_HINT"))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (func_220(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_220(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_220(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_222(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA2A0
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
	if (func_153(0))
	{
		return 0;
	}
	if (func_230())
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
	if ((func_229() || func_228(Global_4718592.f_168757)) || func_227())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_226(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_225(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_223(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_223(int iParam0)//Position - 0xA4F9
{
	if (iParam0 != func_224())
	{
		if (func_139(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == PLAYER::PLAYER_ID()) && func_139(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_224()//Position - 0xA55F
{
	return -1;
}

int func_225(int iParam0, int iParam1)//Position - 0xA568
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

int func_226(int iParam0, bool bParam1)//Position - 0xA5CA
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

var func_227()//Position - 0xA64F
{
	return Global_2714762.f_19;
}

bool func_228(int iParam0)//Position - 0xA65D
{
	return iParam0 == 51;
}

var func_229()//Position - 0xA66A
{
	return Global_2714762.f_18;
}

bool func_230()//Position - 0xA678
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

void func_231(var uParam0, struct<3> Param1, int iParam2)//Position - 0xA68D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_COORD_HINT(Param1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, -1, iVar2, iVar3);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_232(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xA729
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
					if (func_236(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_235(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_235(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_236(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_219(uParam0))
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
						if (!func_236(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_235(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_235(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_236(bParam1, bParam2, bParam3))
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
					if (!func_236(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_235(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_235(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
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
				else if (!func_236(bParam1, bParam2, bParam3))
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
						if (func_234(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_233(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_233(bParam1, bParam2, bParam3))
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
					else if (func_234(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_219(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_222(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_237();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_233(bool bParam0, bool bParam1, bool bParam2)//Position - 0xAA95
{
	if (!func_222(bParam0, bParam1, bParam2))
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

int func_234(bool bParam0, bool bParam1, bool bParam2)//Position - 0xAAE7
{
	if (!func_222(bParam0, bParam1, bParam2))
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

int func_235(bool bParam0, bool bParam1, bool bParam2)//Position - 0xAB30
{
	if (!func_222(bParam0, bParam1, bParam2))
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

int func_236(bool bParam0, bool bParam1, bool bParam2)//Position - 0xAB8F
{
	if (!func_222(bParam0, bParam1, bParam2))
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

void func_237()//Position - 0xABE5
{
	MISC::SET_BIT(&Global_8137, 4);
}

int func_238(struct<3> Param0)//Position - 0xABF5
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	if (SYSTEM::VDIST2(Param0, func_239(PLAYER::PLAYER_ID())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_239(int iParam0)//Position - 0xAC2B
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_240(struct<3> Param0)//Position - 0xAC3E
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_241()//Position - 0xAC68
{
	Local_1929.f_5 = 0f;
}

void func_242()//Position - 0xAC76
{
	Local_1929.f_5 = (Local_1929.f_5 + MISC::GET_FRAME_TIME());
}

float func_243()//Position - 0xAC8D
{
	return Local_1929.f_5;
}

bool func_244()//Position - 0xAC9A
{
	return PAD::IS_CONTROL_JUST_RELEASED(0, 80);
}

bool func_245()//Position - 0xACA9
{
	return PAD::IS_CONTROL_PRESSED(0, 80);
}

void func_246(struct<3> Param0)//Position - 0xACB8
{
	func_207(&uLocal_1902, 0);
	Local_1929.f_2 = { Param0 };
}

void func_247(int iParam0, int iParam1)//Position - 0xACD3
{
	Global_100480.f_7 = iParam0;
	Global_100480.f_8 = iParam1;
}

void func_248(int iParam0)//Position - 0xACEB
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

int func_249(var uParam0, bool bParam1, bool bParam2)//Position - 0xACFF
{
	PAD::STOP_PAD_SHAKE(0);
	switch (iLocal_1649)
	{
		case 0:
			iLocal_194 = 0;
			Local_1898 = { func_211() };
			Local_1899 = { func_262() };
			fLocal_1900 = func_261();
			HUD::DISPLAY_RADAR(false);
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			iLocal_1649 = 1;
			break;
		
		case 1:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_175() == 0)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 0, false);
				}
				else if (func_175() == 1)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 0, false);
				}
				else if (func_175() == 2)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 0, false);
				}
				iLocal_1707 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1898, Local_1899, fLocal_1900, true, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (bParam2)
				{
					CAM::SHAKE_CAM(iLocal_1707, "HAND_SHAKE", 0.07f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, false) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_358[0 /*189*/].f_9))
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(PLAYER::PLAYER_PED_ID(), uParam0->f_358[0 /*189*/].f_9, Local_1898.f_0, Local_1898.f_1, (Local_1898.f_2 + 15f), 4, ENTITY::GET_ENTITY_SPEED(uParam0->f_358[0 /*189*/].f_9), 262144, 10f, 10f, true);
				}
				CAM::POINT_CAM_AT_COORD(iLocal_1707, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				iLocal_1649 = 2;
			}
			break;
		
		case 2:
			CAM::STOP_CAM_POINTING(iLocal_1707);
			func_260(iLocal_1707);
			func_10(&iLocal_1703);
			iLocal_1649 = 3;
			break;
		
		case 3:
			if (func_259(&iLocal_1703, fLocal_1901))
			{
				func_10(&iLocal_1703);
				func_260(iLocal_1707);
				iLocal_1649 = 4;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_358[0 /*189*/].f_9) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_358[0 /*189*/].f_9))
				{
					Local_1897 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_358[0 /*189*/].f_9, true) };
					func_10(&iLocal_1703);
				}
				func_256(iLocal_1707, Local_1897);
			}
			if (func_107(&iLocal_1703) >= 1f)
			{
				iLocal_1649 = 5;
			}
			break;
		
		case 5:
			func_11(&iLocal_1703);
			if (CAM::DOES_CAM_EXIST(iLocal_1706))
			{
				CAM::DESTROY_CAM(iLocal_1706, false);
			}
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
			CAM::STOP_CAM_SHAKING(iLocal_1707, false);
			Local_1898 = { CAM::GET_CAM_COORD(iLocal_1707) };
			Local_1899 = { CAM::GET_CAM_ROT(iLocal_1707, 2) };
			iLocal_1706 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1898.f_0, Local_1898.f_1, (Local_1898.f_2 + 1000f), 90f, Local_1899.f_1, Local_1899.f_2, fLocal_1900, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1706, iLocal_1707, 500, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_1649 = 6;
			break;
		
		case 6:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_1706) && !CAM::IS_CAM_INTERPOLATING(iLocal_1707))
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_106[Local_45.f_10])
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_GOLD", "HUD_AWARDS", true);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_45.f_106[Local_45.f_10] - Local_45.f_112[Local_45.f_10]) / 2f) + Local_45.f_112[Local_45.f_10]))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_SILVER", "HUD_AWARDS", true);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_112[Local_45.f_10])
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_BRONZE", "HUD_AWARDS", true);
				}
				else
				{
					func_255(1);
				}
				iLocal_1649 = 7;
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			}
			func_253(uParam0);
			func_66(&(Local_45.f_321), 1);
			func_11(&iLocal_1703);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, false))
			{
				sLocal_1892 = AUDIO::GET_PLAYER_RADIO_STATION_NAME();
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_358[0 /*189*/].f_9, false);
			}
			iLocal_1649 = 8;
			break;
		
		case 8:
			if (func_252(uParam0))
			{
				iLocal_1649 = 9;
			}
			break;
		
		case 9:
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
			func_251(&iLocal_1708);
			func_247(1, 0);
			func_250(uParam0);
			func_16();
			func_247(0, 0);
			iLocal_1649 = 0;
			return 0;
			break;
	}
	func_442(uParam0, 0);
	return 1;
}

int func_250(var uParam0)//Position - 0xB11C
{
	if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_106[Local_45.f_10])
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_45.f_24[Local_45.f_10 /*8*/]));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_45.f_106[Local_45.f_10] - Local_45.f_112[Local_45.f_10]) / 2f) + Local_45.f_112[Local_45.f_10]))
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_45.f_24[Local_45.f_10 /*8*/]));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_112[Local_45.f_10])
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_45.f_24[Local_45.f_10 /*8*/]));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_251(int* iParam0)//Position - 0xB1F7
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	*iParam0 = 0;
}

int func_252(var uParam0)//Position - 0xB209
{
	float fVar0;
	
	fVar0 = 0f;
	if (!func_3(&(uParam0->f_17.f_2)))
	{
		func_11(&(uParam0->f_17.f_2));
	}
	else
	{
		fVar0 = func_5(&(uParam0->f_17.f_2));
	}
	if (!iLocal_1668)
	{
		if (fVar0 > 1f)
		{
			iLocal_1668 = 1;
		}
	}
	if (!iLocal_1669)
	{
		if (fVar0 > 4.25f)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_17, "TRANSITION_OUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.5f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_1669 = 1;
		}
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(&(uParam0->f_17.f_2));
		iLocal_1668 = 0;
		iLocal_1669 = 0;
		return 1;
	}
	return 0;
}

void func_253(var uParam0)//Position - 0xB2AA
{
	char* sVar0;
	
	sVar0 = func_254(2);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_17, "RESET_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_17, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("SPR_UI_PASS");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Local_45.f_24[Local_45.f_10 /*8*/]));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(100f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	uParam0->f_17.f_1 = 5000;
	func_4(&(uParam0->f_17.f_2));
	iLocal_1668 = 0;
	iLocal_1669 = 0;
}

char* func_254(int iParam0)//Position - 0xB328
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_255(bool bParam0)//Position - 0xB3A3
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_175())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

void func_256(int iParam0, struct<3> Param1)//Position - 0xB416
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		return;
	}
	if (!CAM::IS_CAM_ACTIVE(iParam0))
	{
		return;
	}
	Var1 = { CAM::GET_CAM_ROT(iParam0, 2) };
	Var2 = { CAM::GET_CAM_COORD(iParam0) };
	Var3 = { func_8(Var1.f_0, Var1.f_1, (Var1.f_2 + 90f)) };
	Var4 = { Param1 - Var2 };
	Var4 = { func_96(Var4) };
	fVar5 = MISC::ATAN2((Param1.f_2 - Var2.f_2), MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Var2, false));
	fVar6 = MISC::GET_HEADING_FROM_VECTOR_2D((Param1.f_0 - Var2.f_0), (Param1.f_1 - Var2.f_1));
	fVar6 = func_258(fVar6, -180f, 180f);
	fVar0 = func_95(func_8(fVar5, Var1.f_1, Var1.f_2), Var3);
	fVar7 = (fVar5 - Var1.f_0);
	if (fVar7 > 270f)
	{
		fVar7 = (fVar7 - 360f);
	}
	else if (fVar7 < -270f)
	{
		fVar7 = (fVar7 + 360f);
	}
	fVar5 = (Var1.f_0 + fVar7);
	if ((bLocal_1896 && fVar5 > Var1.f_0) || (!bLocal_1896 && fVar5 < Var1.f_0))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_1893 = (fLocal_1893 * 0.9f);
		Var1.f_0 = func_257(Var1.f_0, fVar5, fLocal_1893);
	}
	fVar8 = (fVar6 - Var1.f_2);
	if (fVar8 > 270f)
	{
		fVar8 = (fVar8 - 360f);
	}
	else if (fVar8 < -270f)
	{
		fVar8 = (fVar8 + 360f);
	}
	fVar6 = (Var1.f_2 + fVar8);
	if ((bLocal_1895 && (Var1.f_2 - fVar6) < 0f) || (!bLocal_1895 && (Var1.f_2 - fVar6) > 0f))
	{
		if (!bLocal_1895 && (Var1.f_2 - fVar6) > 0f)
		{
		}
		else if (bLocal_1895 && (Var1.f_2 - fVar6) < 0f)
		{
		}
		fLocal_1894 = (fLocal_1894 * 0.9f);
		Var1.f_2 = func_257(Var1.f_2, fVar6, fLocal_1894);
	}
	CAM::SET_CAM_ROT(iParam0, Var1, 2);
}

float func_257(float fParam0, float fParam1, float fParam2)//Position - 0xB62C
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_258(float fParam0, float fParam1, float fParam2)//Position - 0xB641
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

int func_259(int* iParam0, float fParam1)//Position - 0xB683
{
	if (func_2(iParam0, fParam1))
	{
		func_4(iParam0);
		return 1;
	}
	return 0;
}

void func_260(int iParam0)//Position - 0xB6A1
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	
	ENTITY::GET_ENTITY_MATRIX(PLAYER::PLAYER_PED_ID(), &Var0, &uVar6, &uVar6, &Var1);
	Var5 = { CAM::GET_CAM_ROT(iParam0, 2) };
	Var4 = { CAM::GET_CAM_COORD(iParam0) };
	Var2 = { func_8((Var5.f_0 + 90f), Var5.f_1, Var5.f_2) };
	Var3 = { func_8(Var5.f_0, Var5.f_1, (Var5.f_2 + 90f)) };
	fLocal_1893 = 0.2f;
	fLocal_1894 = 0.5f;
	Var7 = { CAM::GET_CAM_COORD(iParam0) - Var1 };
	Var8 = { Var1 + FtoV(func_95(Var7, Var0)) * Var0 };
	if (Var8.f_2 > Var4.f_2)
	{
		bLocal_1896 = true;
	}
	else
	{
		bLocal_1896 = false;
	}
	fVar9 = func_95(Var8, Var2);
	fVar10 = func_95(Var8, Var3);
	if (fVar9 < 0f)
	{
		bLocal_1895 = true;
	}
	else
	{
		bLocal_1895 = false;
	}
}

float func_261()//Position - 0xB77D
{
	switch (Local_45.f_10)
	{
		case 0:
			return 46.9415f;
			break;
		
		case 1:
			return 37.9558f;
			break;
		
		case 2:
			return 48.4122f;
			break;
		
		case 3:
			return 35.2464f;
			break;
		
		case 4:
			return 42.5338f;
			break;
	}
	return 0f;
}

Vector3 func_262()//Position - 0xB7E4
{
	switch (Local_45.f_10)
	{
		case 0:
			return -7.5758f, 0f, 148.5448f;
			break;
		
		case 1:
			return -1.0194f, 0.7478f, 23.0628f;
			break;
		
		case 2:
			return -5.3368f, 0.0006f, 158.257f;
			break;
		
		case 3:
			return -1.3523f, 0f, 0.0891f;
			break;
		
		case 4:
			return 18.1009f, -0.5992f, -103.0214f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_263()//Position - 0xB877
{
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_1936))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_1936);
	}
}

void func_264()//Position - 0xB894
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_265();
}

void func_265()//Position - 0xB8A4
{
	Global_23011.f_134 = 1;
}

void func_266(int iParam0)//Position - 0xB8B2
{
	if (Global_43052 == 9 || Global_43052 == 10)
	{
		Global_112036 = iParam0;
	}
	else
	{
		Global_112036 = 0;
	}
}

void func_267(bool bParam0)//Position - 0xB8DD
{
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(!bParam0);
}

void func_268()//Position - 0xB8EC
{
	func_269();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
}

void func_269()//Position - 0xB8FD
{
	Local_1929.f_0 = 0;
	Local_1929.f_1 = 0;
	Local_1929.f_2 = { 0f, 0f, 0f };
	Local_1929.f_6 = 0;
	Local_1929.f_5 = 0f;
}

bool func_270(char* sParam0, int iParam1, char* sParam2)//Position - 0xB925
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_271(var uParam0, bool bParam1)//Position - 0xB943
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 16);
	}
	else
	{
		func_165(&(uParam0->f_1), 16);
	}
}

int func_272(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB967
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_273(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xBA30
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_166(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_166(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_166(&(uParam0->f_1), 8192);
	}
}

void func_274(var uParam0)//Position - 0xBAAA
{
	func_275(uParam0);
	SYSTEM::SETTIMERA(0);
	func_247(1, 0);
	func_16();
}

void func_275(var uParam0)//Position - 0xBAC8
{
	func_312(&(uParam0->f_1871));
	func_290(&(uParam0->f_1871.f_741));
	func_276(&(uParam0->f_1871));
}

void func_276(var uParam0)//Position - 0xBAEE
{
	func_289(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	func_289(&(uParam0->f_316[1 /*2*/]), (257f + func_288(0.0047f, 1280, 1)), 127f, 1);
	func_289(&(uParam0->f_316[2 /*2*/]), (257f + func_288(0.0047f, 1280, 1)), 297f, 1);
	func_289(&(uParam0->f_316[3 /*2*/]), (257f + func_288(0.0047f, 1280, 1)), 324f, 1);
	func_289(&(uParam0->f_316[4 /*2*/]), (257f + func_288(0.0047f, 1280, 1)), 351f, 1);
	func_289(&(uParam0->f_316[5 /*2*/]), (257f + func_288(0.0047f, 1280, 1)), 378f, 1);
	func_289(&(uParam0->f_316[6 /*2*/]), (257f + func_288(0.0047f, 1280, 1)), 405f, 1);
	func_289(&(uParam0->f_316[11 /*2*/]), 257f, 297f, 1);
	func_289(&(uParam0->f_316[12 /*2*/]), 257f, 324f, 1);
	func_289(&(uParam0->f_316[13 /*2*/]), 257f, 351f, 1);
	func_289(&(uParam0->f_316[14 /*2*/]), 257f, 378f, 1);
	func_289(&(uParam0->f_316[15 /*2*/]), 257f, 405f, 1);
	func_289(&(uParam0->f_316[18 /*2*/]), 298f, 567f, 1);
	func_289(&(uParam0->f_316[17 /*2*/]), 384f, 567f, 1);
	func_289(&(uParam0->f_316[16 /*2*/]), 470f, 567f, 1);
	func_285(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_284(uParam0[0 /*9*/], 0, 0, 0, 255);
	func_285(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_284(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_284(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[6 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	func_284(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[5 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	func_284(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[4 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	func_284(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_279(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	func_278(&(uParam0->f_420[1 /*8*/]), 70, 70, 130, 255);
	func_279(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	func_278(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	func_279(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	func_277(&(uParam0->f_420[2 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[3 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[4 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[5 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[6 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[8 /*8*/]), 257f, 429f, 254f, 52f, 1);
	func_277(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	func_277(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	func_277(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	func_277(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[14 /*8*/]), 428f, 564f, 83f, 25f, 1);
	func_277(&(uParam0->f_420[14 /*8*/]), 107, 1);
	func_279(&(uParam0->f_420[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	func_277(&(uParam0->f_420[15 /*8*/]), 108, 1);
	func_279(&(uParam0->f_420[16 /*8*/]), 257f, 564f, 83f, 25f, 1);
	func_277(&(uParam0->f_420[16 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}

void func_277(var uParam0, int iParam1, bool bParam2)//Position - 0xC09F
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_278(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xC0D2
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_279(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xC0F2
{
	func_283(uParam0, fParam3, fParam4);
	func_280(uParam0, fParam1, fParam2, bParam5);
}

void func_280(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xC110
{
	*uParam0 = func_282(fParam1, 1280);
	uParam0->f_1 = func_281(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_281(float fParam0, int iParam1)//Position - 0xC152
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_282(float fParam0, int iParam1)//Position - 0xC16E
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_283(var uParam0, float fParam1, float fParam2)//Position - 0xC18A
{
	uParam0->f_2 = func_282(fParam1, 1280);
	uParam0->f_3 = func_281(fParam2, 720);
}

void func_284(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xC1AC
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_285(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xC1CC
{
	func_287(fParam0, fParam3, fParam4);
	func_286(fParam0, fParam1, fParam2, bParam5);
}

void func_286(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xC1EA
{
	*uParam0 = func_282(fParam1, 1280);
	uParam0->f_1 = func_281(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_287(var uParam0, float fParam1, float fParam2)//Position - 0xC22C
{
	uParam0->f_2 = func_282(fParam1, 1280);
	uParam0->f_3 = func_281(fParam2, 720);
}

float func_288(float fParam0, int iParam1, bool bParam2)//Position - 0xC24E
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_289(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xC280
{
	*uParam0 = func_282(fParam1, 1280);
	uParam0->f_1 = func_281(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_290(var uParam0)//Position - 0xC2A7
{
	func_311(uParam0, 0);
	func_310(&(uParam0->f_11), 0);
	func_309(&(uParam0->f_66), 0);
	func_308(&(uParam0->f_77), 0);
	func_307(&(uParam0->f_33), 0);
	func_306(&(uParam0->f_44), 0);
	func_305(&(uParam0->f_55), 0);
	func_304(&(uParam0->f_143), 0);
	func_303(&(uParam0->f_22), 0);
	func_302(&(uParam0->f_154), 0);
	func_301(&(uParam0->f_88), 0, 0);
	func_300(&(uParam0->f_99), 0, 5);
	func_299(&(uParam0->f_110), 0);
	func_298(&(uParam0->f_121), 0);
	func_297(&(uParam0->f_132), 0);
	func_296(&(uParam0->f_165), 0);
	func_295(&(uParam0->f_176), 0);
	func_294(&(uParam0->f_187), 0);
	func_293(&(uParam0->f_198), 0);
	func_292(&(uParam0->f_209), 0);
	func_291(&(uParam0->f_220), 0);
}

void func_291(var uParam0, int iParam1)//Position - 0xC36C
{
	*uParam0 = 4;
	uParam0->f_1 = 0.45f;
	uParam0->f_2 = 0.45f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 29;
}

void func_292(var uParam0, int iParam1)//Position - 0xC3B5
{
	*uParam0 = 0;
	uParam0->f_1 = 0.275f;
	uParam0->f_2 = 0.275f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 28;
}

void func_293(var uParam0, int iParam1)//Position - 0xC3FE
{
	*uParam0 = 0;
	uParam0->f_1 = 0.3375f;
	uParam0->f_2 = 0.3375f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 27;
}

void func_294(var uParam0, int iParam1)//Position - 0xC447
{
	*uParam0 = 0;
	uParam0->f_1 = 0.35f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 26;
}

void func_295(var uParam0, int iParam1)//Position - 0xC490
{
	*uParam0 = 0;
	uParam0->f_1 = 0.325f;
	uParam0->f_2 = 0.325f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 25;
}

void func_296(var uParam0, int iParam1)//Position - 0xC4D9
{
	*uParam0 = 0;
	uParam0->f_1 = 0.6f;
	uParam0->f_2 = 0.6f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 24;
}

void func_297(var uParam0, int iParam1)//Position - 0xC525
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_298(var uParam0, int iParam1)//Position - 0xC577
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.5f + 0.004f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 13;
}

void func_299(var uParam0, int iParam1)//Position - 0xC5C9
{
	*uParam0 = 5;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.628f - 0.18f) - 0.058f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 12;
}

void func_300(var uParam0, int iParam1, int iParam2)//Position - 0xC621
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.889f - 0.01f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 10;
}

void func_301(var uParam0, int iParam1, int iParam2)//Position - 0xC674
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_302(var uParam0, int iParam1)//Position - 0xC6E5
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_303(var uParam0, int iParam1)//Position - 0xC731
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.383f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 2;
}

void func_304(var uParam0, int iParam1)//Position - 0xC77C
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.368f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 22;
}

void func_305(var uParam0, int iParam1)//Position - 0xC7C8
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.485f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 5;
}

void func_306(var uParam0, int iParam1)//Position - 0xC813
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 4;
}

void func_307(var uParam0, int iParam1)//Position - 0xC85E
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.409f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 3;
}

void func_308(var uParam0, int iParam1)//Position - 0xC8A9
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.655f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 8;
}

void func_309(var uParam0, int iParam1)//Position - 0xC8F5
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.628f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 7;
}

void func_310(var uParam0, int iParam1)//Position - 0xC940
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.346f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 1;
}

void func_311(var uParam0, int iParam1)//Position - 0xC98B
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.781f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
}

void func_312(var uParam0)//Position - 0xC9D6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0 /*9*/] = 0f;
		(uParam0[iVar0 /*9*/])->f_1 = 0f;
		(uParam0[iVar0 /*9*/])->f_2 = 0f;
		(uParam0[iVar0 /*9*/])->f_3 = 0f;
		(uParam0[iVar0 /*9*/])->f_4 = 0;
		(uParam0[iVar0 /*9*/])->f_5 = 0;
		(uParam0[iVar0 /*9*/])->f_6 = 0;
		(uParam0[iVar0 /*9*/])->f_7 = 0;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_313(char* sParam0, int iParam1)//Position - 0xCA41
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_314(int* iParam0)//Position - 0xCA58
{
	func_319();
	switch (iLocal_1935)
	{
		case 0:
			func_10(iParam0);
			func_318(&iLocal_1930, 3);
			iLocal_1935 = 1;
			break;
		
		case 1:
			if (func_2(iParam0, 1f))
			{
				func_315(&iLocal_1930, 1, 0, 1, 3, 1, 0, 0);
				iLocal_1935 = 2;
			}
			break;
		
		case 2:
			if (func_315(&iLocal_1930, 0, 0, 1, 3, 1, 0, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_315(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xCAD0
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	if (bParam7)
	{
		func_317(&(uParam0->f_2), 1);
	}
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (func_3(&(uParam0->f_2)))
		{
			if (func_7(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_6(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_4(&(uParam0->f_2));
					if (func_372(uParam0->f_1, 1))
					{
						func_344(&(uParam0->f_1), 8);
						HUD::GET_HUD_COLOUR(18, &iVar5, &iVar6, &iVar7, &uVar8);
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
						func_168("CNTDWN_GO");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						return 1;
					}
					func_11(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = SYSTEM::FLOOR(fVar3);
	}
	else
	{
		iVar4 = SYSTEM::FLOOR(func_5(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!func_372(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !func_372(uParam0->f_1, 1))
		{
			func_344(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			func_318(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !func_372(uParam0->f_1, 2))
		{
			func_344(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			func_318(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_372(uParam0->f_1, 4))
		{
			func_344(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			func_318(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_372(uParam0->f_1, 16))
		{
			if (MISC::ABSF((func_5(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_344(&(uParam0->f_1), 16);
					AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, true);
				}
			}
		}
		else if (iVar9 >= 0 && !func_372(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, true);
			}
			func_344(&(uParam0->f_1), 8);
			HUD::GET_HUD_COLOUR(18, &iVar11, &iVar12, &iVar13, &uVar14);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
			func_168("CNTDWN_GO");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar11);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && func_316()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			func_4(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

int func_316()//Position - 0xCDF0
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 18) || PAD::IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_317(int* iParam0, bool bParam1)//Position - 0xCE22
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 4);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 4);
	}
	if (BitTest(*iParam0, 4))
	{
	}
}

void func_318(var uParam0, int iParam1)//Position - 0xCE4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(-1);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_319()//Position - 0xCEA3
{
	struct<6> Var0;
	int iVar1;
	
	iVar1 = Global_112416;
	func_320(Var0, 0, 0, 0, 0, iVar1);
}

void func_320(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCEBF
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (Global_78573 != 6)
	{
		if (Global_78575 == -1)
		{
			if (func_334(1, Param0))
			{
				if (Global_78576 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_29 > fVar0)
				{
					Global_78575 = MISC::GET_GAME_TIMER();
					Local_30 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_29 = 0f;
				}
				else
				{
					fLocal_29 = (fLocal_29 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_29 = 0f;
			}
		}
		else
		{
			if (!func_334(0, Param0))
			{
				Global_78575 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_78575);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_78573)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar11 = func_175();
				if (Global_78576 == 1 && Global_78574 == 62)
				{
					iVar11 = Global_113386.f_2363.f_539.f_4322;
				}
				switch (iVar11)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { func_323(Global_78574, Global_78576, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar5, fVar6, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_32 = 0.14f;
				}
				else
				{
					fLocal_32 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_322(&Var4) > fLocal_32)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_30.f_0, (Local_30.f_1 + fLocal_31));
							Global_78578 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_78577 == 1)
				{
					func_321();
					fLocal_29 = 0f;
				}
			}
			else
			{
				func_321();
				fLocal_29 = 0f;
			}
		}
	}
}

void func_321()//Position - 0xD1A4
{
	if (Global_78573 != 6)
	{
	}
	if (Global_78578)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_78578 = 0;
		Global_23150.f_8808 = 0;
	}
	Global_78573 = 6;
	Global_78575 = -1;
	Global_78574 = -1;
}

float func_322(char* sParam0)//Position - 0xD1DC
{
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

struct<2> func_323(int iParam0, int iParam1, int iParam2)//Position - 0xD1EF
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_333(iParam0) };
			break;
		
		case 7:
			Var0 = { func_331(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_330(iParam2) };
					break;
				
				case 8:
					Var0 = { func_329(iParam2) };
					break;
				
				case 7:
					Var0 = { func_328(iParam2) };
					break;
				
				case 10:
					Var0 = { func_327(iParam2) };
					break;
				
				case 5:
					Var0 = { func_326(iParam2) };
					break;
				
				case 4:
					Var0 = { func_325(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_324(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_324(int iParam0)//Position - 0xD2C6
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_325(int iParam0)//Position - 0xD419
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_326(int iParam0)//Position - 0xD44D
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_327(int iParam0)//Position - 0xD481
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_328(int iParam0)//Position - 0xD4B5
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_329(int iParam0)//Position - 0xD4E9
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_330(int iParam0)//Position - 0xD527
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_331(int iParam0)//Position - 0xD55B
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_332(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_332(int iParam0)//Position - 0xD593
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

struct<2> func_333(int iParam0)//Position - 0xD9E0
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_91229[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_113386.f_9085.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_334(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xDA49
{
	if (((!func_336(0) || Global_78588) || Global_78577 == 1) || !CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	switch (Global_78573)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(&uParam1, "NONE") || MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
			{
				Global_78573 = 3;
			}
			else
			{
				Global_78573 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				Global_78573 = 2;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				Global_78573 = 4;
				return 1;
			}
			else if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				Global_78573 = 3;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
			}
			else
			{
				Global_78573 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_78573 = 5;
			}
			break;
		
		case 5:
			if ((CUTSCENE::IS_CUTSCENE_PLAYING() || func_153(0)) || func_335(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_335(bool bParam0)//Position - 0xDB61
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_336(int iParam0)//Position - 0xDB8A
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_337(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_337(int iParam0)//Position - 0xDBAC
{
	return func_338(iParam0, Global_43052);
}

int func_338(int iParam0, int iParam1)//Position - 0xDBBD
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

void func_339(var uParam0)//Position - 0xDD9E
{
	char cVar0[16];
	int iVar1;
	
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_45.f_10 + 1, 16);
	func_11(&(uParam0->f_3));
	uParam0->f_358[0 /*189*/].f_15 = 0f;
	iLocal_1722 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (Local_45.f_0 == 0)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	}
	uParam0->f_1 = 1;
	func_11(&iLocal_2025);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		func_340(&(uParam0->f_358[iVar1 /*189*/]));
		if (Local_45.f_0 != 1)
		{
			if (iVar1 != 0)
			{
				func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
			}
		}
		else if (bLocal_2033)
		{
			if (iVar1 > 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_9, false))
				{
					if (iVar1 == 1 && Local_45.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar0, 262144, 0, 8, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_358[iVar1 /*189*/].f_9), false, 2f);
				}
			}
		}
		else if (iVar1 != 0)
		{
			func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
		}
		iVar1++;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, false))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_358[0 /*189*/].f_9, true);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1892))
		{
			AUDIO::SET_RADIO_TO_STATION_NAME(sLocal_1892);
			AUDIO::SET_VEH_RADIO_STATION(uParam0->f_358[0 /*189*/].f_9, sLocal_1892);
		}
	}
}

void func_340(var uParam0)//Position - 0xDF83
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_9))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_9);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_8, true);
		}
	}
	uParam0->f_11 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_22))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, true, true, false);
		}
	}
}

int func_341()//Position - 0xDFEA
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
}

void func_342(var uParam0)//Position - 0xDFFA
{
	uParam0->f_12 = uParam0->f_12;
}

void func_343(var uParam0)//Position - 0xE00A
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 1);
		iVar0++;
	}
}

void func_344(int iParam0, int iParam1)//Position - 0xE051
{
	func_60(iParam0, iParam1);
}

int func_345(var uParam0, int iParam1, bool bParam2)//Position - 0xE061
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (iParam1 < 0 || iParam1 > 32)
	{
		return 0;
	}
	iVar1 = -1;
	if (iParam1 == (uParam0->f_12 - 1))
	{
		iVar1 = 38;
	}
	fVar2 = 1.2f;
	if (!bParam2)
	{
		fVar2 = 0.7f;
	}
	if (!func_351(&(uParam0->f_27[iParam1 /*10*/]), iVar1, fVar2, iParam1, uParam0->f_12))
	{
		return 0;
	}
	if (bParam2)
	{
		Var3 = { uParam0->f_27[iParam1 /*10*/] };
		Var4 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_12 - 1))
		{
			if (!func_73(uParam0->f_27[iParam1 /*10*/], uParam0->f_27[iParam1 + 1 /*10*/], 1056964608, 0))
			{
				Var3 = { uParam0->f_27[iParam1 + 1 /*10*/] };
			}
		}
		if (Local_45.f_0 == 1)
		{
			if (Local_45.f_10 == 1)
			{
				if (func_372(uParam0->f_27[8 /*10*/].f_9, 4))
				{
					func_370(&(uParam0->f_27[8 /*10*/].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var4 = { uParam0->f_27[(iParam1 - 1) /*10*/] };
		}
		if (!func_346(Var4, &(uParam0->f_27[iParam1 /*10*/]), Var3, 16f))
		{
			return 0;
		}
		if (iParam1 + 1 < uParam0->f_12)
		{
			if (iParam1 + 2 >= 33)
			{
				Var0 = { uParam0->f_27[0 /*10*/] };
			}
			else
			{
				Var0 = { uParam0->f_27[iParam1 + 2 /*10*/] };
			}
			if (!func_346(uParam0->f_27[iParam1 /*10*/], &(uParam0->f_27[iParam1 + 1 /*10*/]), Var0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_346(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3)//Position - 0xE1E0
{
	if (!func_347(Param0, uParam1, Param2, fParam3))
	{
		return 0;
	}
	return 1;
}

int func_347(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3)//Position - 0xE201
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	Param0 = { Param0 };
	func_80(&(uParam1->f_6));
	if (uParam1->f_7 == 2)
	{
		iVar0 = func_349(uParam1->f_7, Param0, *uParam1, Param2);
		func_599(func_600(func_92()), &iVar1, &iVar2, &iVar3, &uVar4);
		uParam1->f_6 = GRAPHICS::CREATE_CHECKPOINT(iVar0, *uParam1, Param2, fParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
	}
	else if (uParam1->f_7 == 3)
	{
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			func_599(func_600(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = GRAPHICS::CREATE_CHECKPOINT(func_348(uParam1->f_7, uParam1->f_8), *uParam1, Param2, fParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
		}
		else if (uParam1->f_8 == 1)
		{
			func_599(func_600(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = GRAPHICS::CREATE_CHECKPOINT(func_348(uParam1->f_7, uParam1->f_8), *uParam1, Param2, fParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
		}
	}
	else
	{
		uParam1->f_6 = GRAPHICS::CREATE_CHECKPOINT(func_348(uParam1->f_7, uParam1->f_8), *uParam1, Param2, fParam3, 254, 207, 12, func_91(*uParam1, 25, 200), 0);
	}
	if (uParam1->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_348(int iParam0, int iParam1)//Position - 0xE35E
{
	switch (iParam0)
	{
		case 0:
			return 6;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 37;
			break;
		
		case 3:
			if (iParam1 == 2)
			{
				return 38;
			}
			else if (iParam1 == 3)
			{
				return 39;
			}
			else if (iParam1 == 1)
			{
				return 40;
			}
			break;
		
		case 4:
			return 16;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 32;
			break;
		
		case 7:
			return 22;
			break;
		
		case 8:
			return 26;
			break;
		
		case 9:
			return 31;
			break;
		
		case 10:
			return 36;
			break;
	}
	return 6;
}

int func_349(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0xE429
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	fVar3 = 180f;
	fVar4 = 140f;
	fVar5 = 80f;
	if (iParam0 == 0)
	{
		iVar6 = 6;
		iVar7 = 7;
		iVar8 = 8;
	}
	else if (iParam0 == 2)
	{
		iVar6 = 12;
		iVar7 = 13;
		iVar8 = 14;
	}
	else if (iParam0 == 5)
	{
		iVar6 = 27;
		iVar7 = 28;
		iVar8 = 29;
	}
	else if (iParam0 == 6)
	{
		iVar6 = 32;
		iVar7 = 33;
		iVar8 = 34;
	}
	else if (iParam0 == 7)
	{
		iVar6 = 22;
		iVar7 = 23;
		iVar8 = 24;
	}
	if (!func_350(Param1, 0f, 0f, 0f, 0))
	{
		Var0 = { Param1 - Param2 };
		Var1 = { Param3 - Param2 };
		fVar2 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1);
		if (fVar2 > 180f)
		{
			fVar2 = (360f - fVar2);
		}
		if (fVar2 < fVar5)
		{
			return iVar8;
		}
		else if (fVar2 < fVar4)
		{
			return iVar7;
		}
		else if (fVar2 < fVar3)
		{
			return iVar6;
		}
	}
	return iVar6;
}

bool func_350(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0xE52A
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_351(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)//Position - 0xE571
{
	if (!func_352(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_352(int* iParam0, struct<3> Param1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE59A
{
	func_83(iParam0);
	*iParam0 = HUD::ADD_BLIP_FOR_COORD(Param1);
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		HUD::SET_BLIP_SPRITE(*iParam0, iParam2);
	}
	HUD::SET_BLIP_SCALE(*iParam0, fParam3);
	HUD::SET_BLIP_DISPLAY(*iParam0, 4);
	if (iParam6 == 2 || iParam6 == 3)
	{
		HUD::SET_BLIP_COLOUR(*iParam0, 2);
	}
	if (iParam6 == 1)
	{
		HUD::SET_BLIP_COLOUR(*iParam0, 3);
	}
	if (iParam4 == (iParam5 - 1))
	{
		HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPFIN");
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*iParam0);
	}
	else
	{
		if (iParam6 == 1)
		{
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPINV");
		}
		else if (iParam6 == 2 || iParam6 == 3)
		{
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPKNF");
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPDEF");
		}
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*iParam0);
	}
	return 1;
}

void func_353(char* sParam0, int iParam1, int iParam2)//Position - 0xE661
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, false);
}

int func_354(var uParam0)//Position - 0xE67A
{
	switch (uParam0->f_25)
	{
		case 0:
			func_147(1);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", false);
			Local_45.f_118 = func_367();
			switch (Local_45.f_0)
			{
				case 0:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", false);
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMedals_FEED", false);
					break;
				
				case 1:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPROffroad", false);
					break;
				
				case 2:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Triathlon", false);
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMedals_FEED", false);
					break;
			}
			uParam0->f_25 = 1;
			break;
		
		case 1:
			func_362(uParam0);
			uParam0->f_25 = 2;
			break;
		
		case 2:
			if (func_357(uParam0))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_45.f_118))
					{
						switch (Local_45.f_0)
						{
							case 0:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPRRaces") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 1:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPROffroad"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 2:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Triathlon") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 3:
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			if (Local_45.f_10 == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_355(uParam0);
			}
			uParam0->f_25 = 4;
			break;
		
		case 4:
			if (Local_45.f_10 == 0)
			{
				return 0;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_358[0 /*189*/].f_9))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_358[0 /*189*/].f_9, true);
				}
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::REQUEST_COLLISION_AT_COORD(uParam0->f_358[0 /*189*/].f_16);
					STREAMING::NEW_LOAD_SCENE_START(uParam0->f_358[0 /*189*/].f_16, ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_358[0 /*189*/].f_9), 5000f, 0);
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_358[0 /*189*/].f_9))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_358[0 /*189*/].f_9, false);
					}
					func_343(uParam0);
					return 0;
				}
			}
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
	}
	return 1;
}

int func_355(var uParam0)//Position - 0xE89E
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_356(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_356(var uParam0, int iParam1)//Position - 0xE8CF
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_143(&(uParam0->f_358[iParam1 /*189*/]), 1);
	}
	return func_143(&(uParam0->f_358[iParam1 /*189*/]), 0);
}

int func_357(var uParam0)//Position - 0xE914
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_358(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_358(var uParam0, int iParam1)//Position - 0xE945
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_359(&(uParam0->f_358[iParam1 /*189*/]));
}

int func_359(var uParam0)//Position - 0xE96F
{
	if (!func_361(uParam0) || !func_360(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_360(var uParam0)//Position - 0xE993
{
	if (uParam0->f_22 == 0)
	{
		return 1;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_22);
}

bool func_361(var uParam0)//Position - 0xE9AF
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_21);
}

void func_362(var uParam0)//Position - 0xE9CB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_363(uParam0, iVar0);
		iVar0++;
	}
}

void func_363(var uParam0, int iParam1)//Position - 0xE9F0
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_364(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_364(var uParam0)//Position - 0xEA19
{
	func_366(uParam0);
	func_365(uParam0);
}

void func_365(var uParam0)//Position - 0xEA2D
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_22);
}

void func_366(var uParam0)//Position - 0xEA48
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_21);
}

int func_367()//Position - 0xEA63
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("SC_LEADERBOARD");
}

int func_368(int iParam0)//Position - 0xEA73
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam0);
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	return 0;
}

void func_369()//Position - 0xEA97
{
	if (CAM::DOES_CAM_EXIST(iLocal_1706))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_1706))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE(iLocal_1706, false);
		}
		CAM::DESTROY_CAM(iLocal_1706, false);
	}
}

void func_370(int iParam0, int iParam1)//Position - 0xEACF
{
	func_371(iParam0, iParam1);
}

void func_371(var uParam0, var uParam1)//Position - 0xEADF
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_372(int iParam0, int iParam1)//Position - 0xEAF4
{
	return (iParam0 && iParam1) != 0;
}

void func_373(int* iParam0)//Position - 0xEB03
{
	if (!func_3(iParam0))
	{
		func_11(iParam0);
	}
}

void func_374()//Position - 0xEB1B
{
	func_375(&uLocal_1210, 0);
}

void func_375(var uParam0, int iParam1)//Position - 0xEB2B
{
	if (uParam0->f_4 != 0)
	{
		func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_441(uParam0);
		func_380(uParam0);
		func_379(&Global_2101867);
	}
	if (Global_2097536.f_2708 != 0 || Global_2097536.f_3184)
	{
		func_377();
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_376(&(Global_2103068.f_49));
	}
	Global_2815059.f_4032 = 0;
}

void func_376(var uParam0)//Position - 0xEBD6
{
	uParam0->f_1 = 0;
}

void func_377()//Position - 0xEBE3
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_2097536[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_2097536.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2708 = 0;
	Global_2097536.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_2097536.f_2710[iVar0] = 0;
		StringCopy(&(Global_2097536.f_2717[iVar0 /*6*/]), "", 24);
		Global_2097536.f_2754[iVar0] = 0;
		Global_2097536.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2768 = 0;
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2097536.f_2771[iVar0] = 0;
		Global_2097536.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2779 = 0;
	func_378(&(Global_2097536.f_2780));
	func_376(&(Global_2097536.f_2823));
	Global_2097536.f_2825 = -1;
	Global_2097536.f_2826 = 0;
	func_376(&(Global_2097536.f_2827));
	Global_2097536.f_2829 = 0;
	func_376(&(Global_2097536.f_2830));
	Global_2097536.f_2832 = 0;
	Global_2097536.f_2780.f_28 = 0;
	Global_2097536.f_2780.f_27 = 0;
	Global_2097536.f_3184 = 0;
}

void func_378(var uParam0)//Position - 0xED4F
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_379(var uParam0)//Position - 0xEDA7
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
		(uParam0[iVar1 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_58 = 0;
		(uParam0[iVar1 /*100*/])->f_59 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_60[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_67[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_75 = 0;
		(uParam0[iVar1 /*100*/])->f_74 = 0;
		(uParam0[iVar1 /*100*/])->f_76 = 0;
		(uParam0[iVar1 /*100*/])->f_77 = 0;
		(uParam0[iVar1 /*100*/])->f_78 = 0;
		(uParam0[iVar1 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
		iVar1++;
	}
	func_376(&(Global_2097536.f_2830));
}

void func_380(var uParam0)//Position - 0xEE89
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_376(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_381(var uParam0, var uParam1, var uParam2)//Position - 0xEF11
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_2097152 = 0;
	func_376(&(Global_2097152.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
}

int func_382(var uParam0, var uParam1)//Position - 0xEF3D
{
	if (!func_433())
	{
		return 0;
	}
	if (func_427(&bLocal_190, uParam0))
	{
		if (iLocal_192 || bLocal_191)
		{
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, false, -1, 0, 0, true, 0);
			if (!*uParam1)
			{
				if (iLocal_192)
				{
					if (func_3(&iLocal_187))
					{
						if (func_259(&iLocal_187, SYSTEM::TO_FLOAT(0)))
						{
							iLocal_192 = 0;
							bLocal_191 = !bLocal_191;
						}
					}
					else
					{
						func_11(&iLocal_187);
					}
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					func_164(&(Local_45.f_119), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_387();
		}
		return 0;
	}
	if (bLocal_190)
	{
		func_386();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
		}
	}
	else
	{
		Local_45.f_10 = -1;
	}
	func_383();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
	}
	return 1;
}

void func_383()//Position - 0xF039
{
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MinigameTransitionIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
	}
	GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
	iLocal_186 = 0;
	MISC::SET_GAME_PAUSED(false);
	func_147(0);
	func_384();
}

void func_384()//Position - 0xF08E
{
	Global_20471 = 0;
	func_385();
}

void func_385()//Position - 0xF09E
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

void func_386()//Position - 0xF0C2
{
	switch (Global_112416)
	{
		case 0:
			Local_45.f_10 = 0;
			break;
		
		case 1:
			Local_45.f_10 = 1;
			break;
		
		case 2:
			Local_45.f_10 = 2;
			break;
		
		case 3:
			Local_45.f_10 = 3;
			break;
		
		case 4:
			Local_45.f_10 = 4;
			break;
	}
}

void func_387()//Position - 0xF119
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_388(&uLocal_223);
}

void func_388(var uParam0)//Position - 0xF12C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var6;
	int iVar7;
	struct<2> Var8;
	struct<11> Var9;
	struct<2> Var10;
	char cVar11[16];
	struct<2> Var12;
	struct<11> Var13;
	
	if (!bLocal_222)
	{
		if (!MISC::IS_PC_VERSION())
		{
			HUD::SET_WIDESCREEN_FORMAT(1);
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	func_164(&(Local_45.f_119), 1128792064, 1, 0, 1, 1065353216);
	func_419("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	func_414(uParam0->f_420[0 /*8*/], 0, 0);
	func_414(uParam0->f_420[1 /*8*/], 0, 0);
	func_414(uParam0->f_420[2 /*8*/], 0, 0);
	func_414(uParam0->f_420[3 /*8*/], 0, 0);
	func_414(uParam0->f_420[4 /*8*/], 0, 0);
	func_414(uParam0->f_420[5 /*8*/], 0, 0);
	func_414(uParam0->f_420[6 /*8*/], 0, 0);
	func_414(uParam0->f_420[7 /*8*/], 0, 0);
	func_414(uParam0->f_420[8 /*8*/], 0, 0);
	func_414(uParam0->f_420[6 /*8*/], 0, 0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	func_413(&(uParam0->f_741.f_165));
	func_412(&(uParam0->f_316[0 /*2*/]), &(uParam0->f_741.f_165), "SPR_TITLE", 0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	func_410(&(uParam0->f_741.f_176));
	func_409(&(uParam0->f_741.f_176), &(uParam0->f_420[0 /*8*/]), 0f, 0f);
	func_407(&(uParam0->f_316[1 /*2*/]), &(uParam0->f_741.f_176), "SPR_CHALLENGES", 1, 0);
	func_406(&(uParam0->f_741.f_176));
	func_409(&(uParam0->f_741.f_176), &(uParam0->f_420[1 /*8*/]), 0f, 0f);
	func_407(&(uParam0->f_316[2 /*2*/]), &(uParam0->f_741.f_176), "SPR_INFO", 1, 0);
	func_406(&(uParam0->f_741.f_176));
	func_409(&(uParam0->f_741.f_176), &(uParam0->f_420[5 /*8*/]), 0f, 0f);
	func_407(&(uParam0->f_316[3 /*2*/]), &(uParam0->f_741.f_176), "SPR_AWARD_TITLE", 1, 0);
	func_406(&(uParam0->f_741.f_176));
	func_413(&(uParam0->f_741.f_198));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_414(uParam0->f_420[16 /*8*/], 0, 0);
	func_414(uParam0->f_420[17 /*8*/], 0, 0);
	func_414(uParam0->f_420[18 /*8*/], 0, 0);
	func_414(uParam0->f_420[19 /*8*/], 0, 0);
	func_414(uParam0->f_420[20 /*8*/], 0, 0);
	func_414(uParam0->f_420[21 /*8*/], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var6 = { uParam0->f_316[iVar2 /*2*/] };
			if (Global_113386.f_19043.f_6[iVar0] > 0f)
			{
				iLocal_196[iVar0] = SYSTEM::CEIL(Global_113386.f_19043.f_6[iVar0]);
			}
			else
			{
				iLocal_196[iVar0] = -1;
			}
			if (iVar0 == Global_112416)
			{
				func_277(&(uParam0->f_420[iVar1 /*8*/]), 1, 1);
				func_414(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_410(&(uParam0->f_741.f_198));
				switch (Global_113386.f_19043.f_12[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_113386.f_19043.f_6[iVar0] <= 0f)
							{
								func_285(&Var5, 269f, 0f, 32f, 32f, 0);
								func_284(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_198);
								Var6.f_0 = (Var5.f_0 + fLocal_197);
								if (!bLocal_222)
								{
									func_405(&Var5, 0);
								}
								func_404(&Var5, 1);
								func_419("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_222)
								{
									func_403(&Var6, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
					
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_112416)
				{
					func_410(&(uParam0->f_741.f_198));
				}
				func_406(&(uParam0->f_741.f_198));
				func_412(&Var6, &(uParam0->f_741.f_198), &(Local_45.f_24[iVar0 /*8*/]), 0);
				func_413(&(uParam0->f_741.f_198));
				func_404(uParam0[iVar3 /*9*/], 1);
				if (bVar4)
				{
					func_413(&(uParam0->f_741.f_198));
				}
				else
				{
					func_413(&(uParam0->f_741.f_198));
				}
				func_413(&(uParam0->f_741.f_198));
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_106[iVar0] && iLocal_196[iVar0] > 1)
				{
					func_404(uParam0[iVar3 /*9*/], 1);
					func_404(uParam0[9 /*9*/], 1);
					func_419("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					func_412(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sGOLD", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					func_406(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_112[iVar0] - Local_45.f_106[iVar0]) / 2f) + Local_45.f_106[iVar0]) && IntToFloat(iLocal_196[iVar0]) > Local_45.f_106[iVar0])
				{
					func_404(uParam0[iVar3 /*9*/], 1);
					func_404(uParam0[9 /*9*/], 1);
					func_419("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					func_412(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sSILVER", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					func_406(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_112[iVar0] && IntToFloat(iLocal_196[iVar0]) > (((Local_45.f_112[iVar0] - Local_45.f_106[iVar0]) / 2f) + Local_45.f_106[iVar0]))
				{
					func_404(uParam0[iVar3 /*9*/], 1);
					func_404(uParam0[9 /*9*/], 1);
					func_419("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					func_412(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sBRONZE", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					func_406(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_196[iVar0]) > Local_45.f_112[iVar0] || iLocal_196[iVar0] == -1)
				{
					func_404(uParam0[iVar3 /*9*/], 1);
					func_404(uParam0[9 /*9*/], 1);
					func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					func_412(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					func_419("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_402(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_106[iVar0] && !iLocal_196[iVar0] == -1)
				{
					func_404(uParam0[13 /*9*/], 1);
				}
				else
				{
					(uParam0[13 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_112[iVar0] - Local_45.f_106[iVar0]) / 2f) + Local_45.f_106[iVar0]) && !iLocal_196[iVar0] == -1)
				{
					func_404(uParam0[12 /*9*/], 1);
				}
				else
				{
					(uParam0[12 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_112[iVar0] && !iLocal_196[iVar0] == -1)
				{
					func_404(uParam0[11 /*9*/], 1);
				}
				else
				{
					(uParam0[11 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				func_419("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				func_419("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				func_419("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				func_413(&(uParam0->f_741.f_198));
				if (Global_113386.f_19043.f_6[Global_112416] > 0f)
				{
					func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					func_397(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((Global_113386.f_19043.f_6[Global_112416] * 1000f)), 6, "", 0, 1);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					func_406(&(uParam0->f_741.f_198));
				}
				else
				{
					func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					func_412(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					func_406(&(uParam0->f_741.f_198));
				}
				func_412(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_198), "SPR_RTIME", 0);
				if (Local_45.f_18[Global_112416] > 0f)
				{
					func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					func_397(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((Local_45.f_18[Global_112416] * 1000f)), 6, "", 0, 1);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					func_406(&(uParam0->f_741.f_198));
					func_413(&(uParam0->f_741.f_198));
				}
				else
				{
					func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					func_407(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0, 1);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					func_406(&(uParam0->f_741.f_198));
					func_413(&(uParam0->f_741.f_198));
				}
			}
			else
			{
				func_396(&(uParam0->f_420[iVar1 /*8*/]));
				func_277(&(uParam0->f_420[iVar1 /*8*/]), 117, 1);
				func_414(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_404(uParam0[iVar3 /*9*/], 1);
				switch (Global_113386.f_19043.f_12[iVar0 /*8*/].f_4)
				{
					case 0:
						func_404(uParam0[iVar3 /*9*/], 1);
						func_413(&(uParam0->f_741.f_198));
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							func_413(&(uParam0->f_741.f_198));
							if (Global_113386.f_19043.f_6[iVar0] <= 0f)
							{
								func_285(&Var5, 269f, 0f, 32f, 32f, 0);
								func_284(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_198);
								Var6.f_0 = (Var5.f_0 + fLocal_197);
								if (!bLocal_222)
								{
									func_405(&Var5, 0);
								}
								func_404(&Var5, 1);
								func_419("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_222)
								{
									func_403(&Var6, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_112416)
				{
					func_410(&(uParam0->f_741.f_198));
				}
				func_406(&(uParam0->f_741.f_198));
				func_412(&Var6, &(uParam0->f_741.f_198), &(Local_45.f_24[iVar0 /*8*/]), 0);
				func_413(&(uParam0->f_741.f_198));
				func_404(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_113386.f_19043.f_12[iVar0 /*8*/].f_4 == 0)
			{
				func_419("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_196[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_106[iVar0] && IntToFloat(iLocal_196[iVar0]) <= Local_45.f_112[iVar0])
				{
					func_395(uParam0[iVar3 /*9*/]);
					func_419("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_112[iVar0] - Local_45.f_106[iVar0]) / 2f) + Local_45.f_106[iVar0]))
				{
					func_394(uParam0[iVar3 /*9*/]);
					func_419("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_112[iVar0])
				{
					func_392(uParam0[iVar3 /*9*/]);
					func_419("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar7 = 0;
	if (func_391(0))
	{
		STATS::STAT_GET_INT(joaat("sp0_flying_ability"), &iVar7, -1);
	}
	else if (func_391(1))
	{
		STATS::STAT_GET_INT(joaat("sp1_flying_ability"), &iVar7, -1);
	}
	else if (func_391(2))
	{
		STATS::STAT_GET_INT(joaat("sp2_flying_ability"), &iVar7, -1);
	}
	if (iVar7 < 40)
	{
		func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[15 /*8*/]), 0.0047f, 0.0055f);
		HUD::SET_TEXT_LEADING(1);
		Var8 = { uParam0->f_316[22 /*2*/] };
		Var9 = { uParam0->f_741.f_198 };
		if (!bLocal_222)
		{
			Var9.f_9 = (Var9.f_9 - 0.08f);
			func_403(&Var8, &Var9);
		}
		if (bLocal_222)
		{
			func_389(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 27f, 2f, 5, 159f);
		}
		else
		{
			func_389(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 18f, 1.55f, 5, 106f);
		}
		func_414(uParam0->f_420[14 /*8*/], 0, 0);
		func_419("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		func_412(&(uParam0->f_316[22 /*2*/]), &(uParam0->f_741.f_198), "FLY_STAT_WARN", 0);
		func_406(&(uParam0->f_741.f_198));
	}
	StringCopy(&Var10, "SPR_DESC_", 16);
	StringIntConCat(&Var10, Global_112416 + 1, 16);
	func_404(uParam0[7 /*9*/], 1);
	func_419("SPRRaces", &Var10, uParam0[7 /*9*/], 0, 0, 5, 0);
	func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[25 /*8*/]), 0.0047f, 0.0055f);
	HUD::SET_TEXT_LEADING(1);
	StringCopy(&cVar11, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar11, Global_112416 + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar11, 0, 16);
	}
	Var12 = { uParam0->f_316[16 /*2*/] };
	Var13 = { uParam0->f_741.f_198 };
	if (!bLocal_222)
	{
		Var13.f_9 = (Var13.f_9 - 0.108f);
		func_403(&Var12, &Var13);
	}
	if (bLocal_222)
	{
		func_389(&(uParam0->f_420[25 /*8*/]), &cVar11, &Var12, &Var13, 27f, 2f, 5, 159f);
	}
	else
	{
		func_389(&(uParam0->f_420[25 /*8*/]), &cVar11, &Var12, &Var13, 18f, 1.55f, 5, 106f);
	}
	func_414(uParam0->f_420[25 /*8*/], 0, 0);
	func_412(&(uParam0->f_316[16 /*2*/]), &(uParam0->f_741.f_198), &cVar11, 0);
	func_406(&(uParam0->f_741.f_198));
	func_413(&(uParam0->f_741.f_198));
	func_412(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_198), "SPR_AWARDS_SUB", 0);
	func_412(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_198), "SPR_BEST", 0);
	func_410(&(uParam0->f_741.f_198));
	func_414(uParam0->f_420[22 /*8*/], 0, 0);
	func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[22 /*8*/]), 0, 0);
	func_397(&(uParam0->f_316[13 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR(Local_45.f_112[Global_112416]) * 1000, 6, "", 1, 0);
	func_406(&(uParam0->f_741.f_198));
	func_414(uParam0->f_420[23 /*8*/], 0, 0);
	func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[23 /*8*/]), 0, 0);
	func_397(&(uParam0->f_316[14 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((((Local_45.f_112[Global_112416] - Local_45.f_106[Global_112416]) / 2f) + Local_45.f_106[Global_112416])) * 1000, 6, "", 1, 0);
	func_406(&(uParam0->f_741.f_198));
	func_414(uParam0->f_420[24 /*8*/], 0, 0);
	func_409(&(uParam0->f_741.f_198), &(uParam0->f_420[24 /*8*/]), 0, 0);
	func_397(&(uParam0->f_316[15 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR(Local_45.f_106[Global_112416]) * 1000, 6, "", 1, 0);
	func_406(&(uParam0->f_741.f_198));
	func_413(&(uParam0->f_741.f_198));
}

float func_389(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)//Position - 0x1015D
{
	int iVar0;
	int iVar1;
	
	func_390(uParam3, 0);
	HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(sParam1);
	iVar0 = HUD::_END_TEXT_COMMAND_LINE_COUNT(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!GRAPHICS::GET_IS_WIDESCREEN())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = func_281(((SYSTEM::TO_FLOAT(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_281(((fParam7 + ((SYSTEM::TO_FLOAT(iParam6) + (SYSTEM::TO_FLOAT(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
	return 0f;
}

void func_390(var uParam0, bool bParam1)//Position - 0x101D4
{
	HUD::SET_TEXT_FONT(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
	}
	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

bool func_391(int iParam0)//Position - 0x1026D
{
	func_176();
	return iParam0 == Global_113386.f_2363.f_539.f_4321;
}

void func_392(var uParam0)//Position - 0x10289
{
	func_393(uParam0, 107);
}

void func_393(var uParam0, int iParam1)//Position - 0x10299
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_394(var uParam0)//Position - 0x102C1
{
	func_393(uParam0, 108);
}

void func_395(var uParam0)//Position - 0x102D1
{
	func_393(uParam0, 109);
}

void func_396(var uParam0)//Position - 0x102E1
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

void func_397(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6)//Position - 0x102FE
{
	char* sVar0;
	
	if (func_400())
	{
		func_390(uParam1, 0);
		HUD::SET_TEXT_RIGHT_JUSTIFY(bParam6);
		HUD::SET_TEXT_CENTRE(bParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, iParam3);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_399(*uParam0), func_398(uParam0->f_1), 0);
	}
}

float func_398(float fParam0)//Position - 0x10358
{
	return (fParam0 + fLocal_13);
}

float func_399(float fParam0)//Position - 0x10365
{
	return (fParam0 + fLocal_12);
}

int func_400()//Position - 0x10372
{
	if (func_401())
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

bool func_401()//Position - 0x103B1
{
	return Global_1574604;
}

void func_402(var uParam0)//Position - 0x103BD
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_403(float fParam0, var uParam1)//Position - 0x103DA
{
	*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_8 = (((uParam1->f_8 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_9 = (((uParam1->f_9 - 0.5f) * 1.33f) + 0.5f);
}

void func_404(float fParam0, int iParam1)//Position - 0x1042E
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_405(float fParam0, bool bParam1)//Position - 0x10454
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1.33f);
}

void func_406(var uParam0)//Position - 0x10488
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_407(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4)//Position - 0x1049A
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_50(sVar0))
	{
		if (func_400())
		{
			func_390(uParam1, 0);
			HUD::SET_TEXT_RIGHT_JUSTIFY(bParam4);
			HUD::SET_TEXT_CENTRE(bParam3);
			func_408(func_399(*uParam0), func_398(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_408(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x104E0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_409(var uParam0, var uParam1, float fParam2, float fParam3)//Position - 0x104F8
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_410(var uParam0)//Position - 0x10532
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_411(uParam0, 2);
}

void func_411(var uParam0, int iParam1)//Position - 0x10550
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_412(float fParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x10578
{
	if (bParam3)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	}
	func_407(fParam0, uParam1, sParam2, 0, 0);
}

void func_413(var uParam0)//Position - 0x10596
{
	func_411(uParam0, 1);
}

void func_414(struct<8> Param0, int iParam1, int iParam2)//Position - 0x105A5
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam1)
	{
		case 2:
			func_418(&Var0);
			break;
		
		case 1:
			func_417(&Var0);
			break;
		
		case 3:
			func_416(&Var0);
			break;
		
		case 4:
			func_415(&Var0);
			break;
	}
	if (func_400())
	{
		if (iParam2 == 1)
		{
			GRAPHICS::DRAW_RECT(func_399(Var0.f_0), func_398(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, false);
		}
		else
		{
			GRAPHICS::DRAW_RECT(func_399(Var0.f_0), func_398(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, false);
		}
	}
}

void func_415(var uParam0)//Position - 0x10660
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_416(var uParam0)//Position - 0x10680
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_417(var uParam0)//Position - 0x106A0
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_418(var uParam0)//Position - 0x106C9
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_419(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x106E6
{
	struct<9> Var0;
	
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_426(&Var0);
			break;
		
		case 1:
			func_425(&Var0);
			break;
		
		case 5:
			func_424(&Var0);
			break;
		
		case 6:
			func_423(&Var0);
			break;
		
		case 7:
			func_422(&Var0);
			break;
		
		case 8:
			func_421(&Var0);
			break;
		
		case 9:
			func_420(&Var0);
			break;
	}
	if (func_400())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_399(Var0.f_0), func_398(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6, 0);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_399(Var0.f_0), func_398(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6, 0);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_420(var uParam0)//Position - 0x107ED
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_421(var uParam0)//Position - 0x10807
{
	uParam0->f_7 = 2;
}

void func_422(var uParam0)//Position - 0x10814
{
	uParam0->f_7 = 5;
}

void func_423(var uParam0)//Position - 0x10821
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_424(var uParam0)//Position - 0x1083E
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_425(var uParam0)//Position - 0x1085B
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_426(var uParam0)//Position - 0x10884
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_427(var uParam0, var uParam1)//Position - 0x108AC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_192 == 1)
	{
		return 1;
	}
	if (iLocal_193)
	{
		return 0;
	}
	if (SYSTEM::TIMERA() < 500)
	{
		return 1;
	}
	if (bLocal_191)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			iLocal_185 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_185, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_192 = 1;
			iLocal_193 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			iLocal_185 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_185, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			HUD::CLEAR_HELP(true);
			func_562(&(Local_45.f_119));
			iLocal_192 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
	{
		iLocal_185 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_185, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_273(&(Local_45.f_119), 0, 0, 1, 1);
		func_272(&(Local_45.f_119), "FE_HLP29", 2, 201, 1, 1, 0);
		func_272(&(Local_45.f_119), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&iLocal_187);
		iLocal_192 = 1;
		HUD::CLEAR_HELP(true);
		return 1;
	}
	iVar0 = 0;
	if (MISC::IS_PC_VERSION() && bLocal_191 == 0)
	{
		if (PAD::_IS_USING_KEYBOARD_2(2))
		{
			Global_4539961 = func_431(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 5, 255, 0, 1);
			func_430(0, Global_112416, 1);
			if (func_429())
			{
				if (Global_4539961 == Global_112416)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_185 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", false, 0, true);
					Global_112416 = Global_4539961;
					func_562(&(Local_45.f_119));
				}
			}
		}
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_113386.f_19043.f_12[Global_112416 /*8*/].f_4 == 0)
		{
			iLocal_185 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND(iLocal_185, "CANCEL", "HUD_MINI_GAME_SOUNDSET", false, 0, true);
		}
		else
		{
			iLocal_185 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND(iLocal_185, "SELECT", "HUD_MINI_GAME_SOUNDSET", false, 0, true);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, 188) || func_428(0, uParam1)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		iVar1 = (Global_112416 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_185 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", false, 0, true);
		Global_112416 = iVar1;
		func_562(&(Local_45.f_119));
	}
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, 187) || func_428(1, uParam1)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		iVar2 = Global_112416 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_185 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", false, 0, true);
		Global_112416 = iVar2;
		func_562(&(Local_45.f_119));
	}
	return 1;
}

bool func_428(int iParam0, var uParam1)//Position - 0x10B6A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = PAD::GET_CONTROL_VALUE(2, 195);
	iVar2 = PAD::GET_CONTROL_VALUE(2, 196);
	if (MISC::ABSI(iVar1) < 28 && MISC::ABSI(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (MISC::GET_GAME_TIMER() < uParam1->f_1 + 250)
	{
		*uParam1 = 0;
		return 0;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = iVar2 < 100;
			break;
		
		case 1:
			bVar0 = iVar2 > 156;
			break;
		
		case 2:
			bVar0 = iVar1 < 100;
			break;
		
		case 3:
			bVar0 = iVar1 > 156;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = MISC::GET_GAME_TIMER();
		*uParam1 = 0;
	}
	return bVar0;
}

int func_429()//Position - 0x10C2F
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4539961 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_430(int iParam0, var uParam1, bool bParam2)//Position - 0x10C56
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	if (Global_4539961 == -6)
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4539961 = -1;
			return 0;
		}
	}
	if (((Global_4539961 > -1 || Global_4539961 == -3) || Global_4539961 == -2) || HUD::_IS_MOUSE_CURSOR_ABOVE_INSTRUCTIONAL_BUTTONS())
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_4539961 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(4);
			Global_4539961 = -6;
			return 1;
		}
		else
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	return 0;
}

int func_431(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x10D36
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	iVar7 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return -1;
	}
	PAD::DISABLE_CONTROL_ACTION(2, 200, true);
	HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	if (bParam8)
	{
		if (!GRAPHICS::GET_IS_WIDESCREEN())
		{
			fParam0 = (((fParam0 - 0.5f) * 1.33f) + 0.5f);
			fParam2 = (fParam2 * 1.33f);
		}
	}
	if (bParam7)
	{
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		GRAPHICS::_GET_SCRIPT_GFX_POSITION(fParam0, fParam1, &fParam0, &fParam1);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = PAD::GET_CONTROL_NORMAL(2, 239);
	fVar3 = PAD::GET_CONTROL_NORMAL(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = SYSTEM::FLOOR((fVar4 / fParam3));
		if (bParam7)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
			func_432(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			func_432(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_432(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x10E72
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

int func_433()//Position - 0x10EA1
{
	int iVar0;
	
	switch (iLocal_186)
	{
		case 0:
			HUD::CLEAR_HELP(true);
			HUD::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", false);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", false);
			iLocal_186 = 1;
			break;
		
		case 1:
			if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("SP_SPR", 3))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPRRaces"))
				{
					if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
					{
						iLocal_186 = 2;
					}
				}
			}
			break;
		
		case 2:
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_45.f_119));
			Local_45.f_119 = 0;
			func_562(&(Local_45.f_119));
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
			}
			func_147(1);
			GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_45.f_1, 4);
			func_384();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_45.f_11)
			{
				iLocal_196[iVar0] = -1;
				iVar0++;
			}
			func_437(&uLocal_223);
			func_434();
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
			iLocal_186 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_434()//Position - 0x10FA9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_113386.f_19043.f_12[iVar0 /*8*/] = { func_436(iVar0) };
		MemCopy(&(Local_45.f_24[iVar0 /*8*/]), {Global_113386.f_19043.f_12[iVar0 /*8*/]}, 8);
		Local_45.f_106[iVar0] = func_435(iVar0);
		Local_45.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_113386.f_19043.f_6[iVar0] > Local_45.f_112[iVar0] || Global_113386.f_19043.f_6[iVar0] <= 0f)
			{
				Global_113386.f_19043.f_12[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_113386.f_19043.f_12[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_113386.f_19043.f_12[0 /*8*/].f_4 = 1;
}

float func_435(int iParam0)//Position - 0x1107E
{
	switch (iParam0)
	{
		case 0:
			return 70f;
			break;
		
		case 1:
			return 75f;
			break;
		
		case 2:
			return 72f;
			break;
		
		case 3:
			return 120f;
			break;
		
		case 4:
			return 115f;
			break;
	}
	return -1f;
}

struct<4> func_436(int iParam0)//Position - 0x110E3
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BRIDGEBINGE", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "VINEWOOD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BRIDGEWORK", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "AIRPORT", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "ALTITUDE", 16);
			break;
	}
	return Var0;
}

void func_437(var uParam0)//Position - 0x11153
{
	func_440();
	bLocal_222 = GRAPHICS::GET_IS_WIDESCREEN();
	func_312(uParam0);
	func_290(&(uParam0->f_741));
	func_438(uParam0);
}

void func_438(var uParam0)//Position - 0x1117B
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	bVar0 = GRAPHICS::GET_IS_WIDESCREEN();
	func_289(&(uParam0->f_316[0 /*2*/]), 262f, (71f - func_439(0.00278f, 720, 1)), 1);
	func_289(&(uParam0->f_316[1 /*2*/]), (257f + 127f), (125f - func_439(0.00417f, 720, 1)), 1);
	func_289(&(uParam0->f_316[2 /*2*/]), (513f + 127f), (125f - func_439(0.00417f, 720, 1)), 1);
	func_289(&(uParam0->f_316[3 /*2*/]), (769f + 127f), (125f - func_439(0.00417f, 720, 1)), 1);
	func_289(&(uParam0->f_316[17 /*2*/]), (257f + func_288(0.0047f, 1280, 1)), 162f, 1);
	func_289(&(uParam0->f_316[18 /*2*/]), (257f + func_288(0.0047f, 1280, 1)), 189f, 1);
	func_289(&(uParam0->f_316[19 /*2*/]), (257f + func_288(0.0047f, 1280, 1)), 216f, 1);
	func_289(&(uParam0->f_316[20 /*2*/]), (257f + func_288(0.0047f, 1280, 1)), 243f, 1);
	func_289(&(uParam0->f_316[21 /*2*/]), (257f + func_288(0.0047f, 1280, 1)), 270f, 1);
	func_289(&(uParam0->f_316[22 /*2*/]), (257f + func_288(0.0047f, 1280, 1)), 297f, 1);
	func_289(&(uParam0->f_316[16 /*2*/]), (513f + func_288(0.0047f, 1280, 1)), (299f - func_439(0.00278f, 720, 1)), 1);
	func_289(&(uParam0->f_316[4 /*2*/]), (769f + func_288(0.0047f, 1280, 1)), 297f, 1);
	func_289(&(uParam0->f_316[5 /*2*/]), 769f, 297f, 1);
	func_289(&(uParam0->f_316[8 /*2*/]), (769f + func_288(0.0047f, 1280, 1)), 351f, 1);
	func_289(&(uParam0->f_316[9 /*2*/]), 324f, 351f, 1);
	func_289(&(uParam0->f_316[6 /*2*/]), (769f + func_288(0.0047f, 1280, 1)), (324f - func_439(0.00278f, 720, 1)), 1);
	func_289(&(uParam0->f_316[7 /*2*/]), 324f, (324f - func_439(0.00278f, 720, 1)), 1);
	func_289(&(uParam0->f_316[15 /*2*/]), 810f, 459f, 1);
	func_289(&(uParam0->f_316[14 /*2*/]), 896f, 459f, 1);
	func_289(&(uParam0->f_316[13 /*2*/]), 982f, 459f, 1);
	func_285(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	HUD::GET_HUD_COLOUR(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_284(uParam0[0 /*9*/], uVar1, uVar2, uVar3, uVar4);
	func_285(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_284(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_284(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_284(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_284(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_284(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[6 /*9*/], (486f + func_288(0.0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_284(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_284(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_284(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[13 /*9*/], 770.5f, 374.5f, 80f, 80f, 1);
	func_284(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[12 /*9*/], 856f, 374.5f, 80f, 80f, 1);
	func_284(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_285(uParam0[11 /*9*/], 941.5f, 374.5f, 80f, 80f, 1);
	func_284(uParam0[11 /*9*/], 255, 255, 255, 255);
	func_279(&(uParam0->f_420[3 /*8*/]), 257f, 114f, 254f, 5f, 1);
	func_278(&(uParam0->f_420[3 /*8*/]), 70, 70, 130, 255);
	func_279(&(uParam0->f_420[4 /*8*/]), 513f, 114f, 254f, 5f, 1);
	func_278(&(uParam0->f_420[4 /*8*/]), 70, 70, 130, 255);
	func_279(&(uParam0->f_420[5 /*8*/]), 769f, 114f, 254f, 5f, 1);
	func_278(&(uParam0->f_420[5 /*8*/]), 70, 70, 130, 255);
	func_279(&(uParam0->f_420[0 /*8*/]), 257f, 119f, 254f, 26f, 1);
	func_277(&(uParam0->f_420[0 /*8*/]), 1, 1);
	func_279(&(uParam0->f_420[1 /*8*/]), 513f, 119f, 254f, 26f, 1);
	func_277(&(uParam0->f_420[1 /*8*/]), 1, 1);
	func_279(&(uParam0->f_420[2 /*8*/]), 769f, 119f, 254f, 26f, 1);
	func_277(&(uParam0->f_420[2 /*8*/]), 1, 1);
	func_279(&(uParam0->f_420[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	func_277(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	func_277(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[9 /*8*/]), 257f, 159f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[9 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[10 /*8*/]), 257f, 186f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[10 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[11 /*8*/]), 257f, 213f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[12 /*8*/]), 257f, 240f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[13 /*8*/]), 257f, 267f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[26 /*8*/]), 257f, 294f, 254f, 2f, 1);
	func_277(&(uParam0->f_420[26 /*8*/]), 1, 1);
	func_279(&(uParam0->f_420[14 /*8*/]), 257f, 294f, 254f, 75f, 1);
	func_277(&(uParam0->f_420[14 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[15 /*8*/]), 257f, 294f, (254f - 32f), 75f, 1);
	func_277(&(uParam0->f_420[15 /*8*/]), 1, 1);
	func_279(&(uParam0->f_420[25 /*8*/]), 513f, 294f, 254f, 133f, 1);
	func_277(&(uParam0->f_420[25 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[16 /*8*/]), 769f, 294f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[16 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[17 /*8*/]), 769f, 321f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[17 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[18 /*8*/]), 769f, 348f, 254f, 25f, 1);
	func_277(&(uParam0->f_420[18 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[21 /*8*/]), 769f, 375f, 83f, 84f, 1);
	func_277(&(uParam0->f_420[21 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[20 /*8*/]), 854f, 375f, 84f, 84f, 1);
	func_277(&(uParam0->f_420[20 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[19 /*8*/]), 940f, 375f, 83f, 84f, 1);
	func_277(&(uParam0->f_420[19 /*8*/]), 117, 1);
	func_279(&(uParam0->f_420[22 /*8*/]), 769f, 456f, 83f, 25f, 1);
	func_277(&(uParam0->f_420[22 /*8*/]), 109, 1);
	func_279(&(uParam0->f_420[23 /*8*/]), 854f, 456f, 84f, 25f, 1);
	func_277(&(uParam0->f_420[23 /*8*/]), 108, 1);
	func_279(&(uParam0->f_420[24 /*8*/]), 940f, 456f, 83f, 25f, 1);
	func_277(&(uParam0->f_420[24 /*8*/]), 107, 1);
	if (!bVar0)
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			(*uParam0)[iVar5 /*9*/] = ((((*uParam0)[iVar5 /*9*/] - 0.5f) * 1.33f) + 0.5f);
			(uParam0[iVar5 /*9*/])->f_2 = ((uParam0[iVar5 /*9*/])->f_2 * 1.33f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 23)
		{
			uParam0->f_316[iVar5 /*2*/] = (((uParam0->f_316[iVar5 /*2*/] - 0.5f) * 1.33f) + 0.5f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 27)
		{
			uParam0->f_420[iVar5 /*8*/] = (((uParam0->f_420[iVar5 /*8*/] - 0.5f) * 1.33f) + 0.5f);
			uParam0->f_420[iVar5 /*8*/].f_2 = (uParam0->f_420[iVar5 /*8*/].f_2 * 1.33f);
			iVar5++;
		}
	}
	uParam0->f_986 = 1;
}

float func_439(float fParam0, int iParam1, bool bParam2)//Position - 0x11C80
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_440()//Position - 0x11CB2
{
	int iVar0;
	
	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_2100721.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_441(var uParam0)//Position - 0x11CDB
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

int func_442(var uParam0, bool bParam1)//Position - 0x11DA9
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (!iLocal_194)
		{
			iVar0 = 0;
			if (uParam0->f_358[0 /*189*/].f_13 > 0f)
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_106[Local_45.f_10])
				{
					iVar0 = 1;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_45.f_112[Local_45.f_10] - Local_45.f_106[Local_45.f_10]) / 2f) + Local_45.f_106[Local_45.f_10]))
				{
					iVar0 = 2;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_112[Local_45.f_10])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_470(Local_45.f_10, &(Local_45.f_65[Local_45.f_10 /*8*/]));
			if (bParam1)
			{
				func_467(Local_45.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0);
				iLocal_194 = 1;
				return 1;
			}
			else if (func_443(Local_45.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0))
			{
				iLocal_194 = 1;
				return 1;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_194 = 1;
	}
	return 0;
}

int func_443(int iParam0, float fParam1, int iParam2)//Position - 0x11EA8
{
	if (Global_2097157.f_1 && !Global_2097157.f_2)
	{
		func_467(iParam0, fParam1, iParam2);
		Global_2097157.f_2 = 1;
	}
	if (func_444(&uLocal_1210))
	{
		Global_2097532 = 1;
		return 1;
	}
	return 0;
}

int func_444(var uParam0)//Position - 0x11EEA
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_19.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_36 = 32;
	if (func_466(uParam0->f_44))
	{
		Var3 = { Global_2097157.f_361 };
	}
	else
	{
		Var3 = { func_465(PLAYER::PLAYER_ID()) };
	}
	switch (Global_2097157)
	{
		case 0:
			if (func_464(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var3))
			{
				func_463(&Var1, &(uParam0->f_44));
				Global_2097157.f_142 = uParam0->f_44;
				Global_2097157.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_44, 0);
				iVar4 = 0;
				while (iVar4 < Global_2097157.f_142.f_1)
				{
					if (!func_462(uParam0->f_44, iVar4))
					{
						if (func_461(uParam0->f_44, 4, iVar4))
						{
							MISC::SET_BIT(&(Global_2097157.f_142.f_2), iVar4);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_START(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(0, &Var0);
						if (Var0.f_97 != Global_2097157.f_142.f_1)
						{
						}
						if (!func_460(Var0))
						{
							Global_2097157.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_2097157.f_142.f_1)
							{
								if (!func_462(uParam0->f_44, iVar4))
								{
									if (func_461(uParam0->f_44, 4, iVar4))
									{
										Global_2097157.f_73.f_36[iVar4] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(0, iVar4);
										if (Global_2097157.f_73.f_36[iVar4] == -1)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_2097157.f_73.f_36[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_2097157.f_73.f_3[iVar4] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(0, iVar4);
										if (Global_2097157.f_73.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_2097157.f_73.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_2097157.f_4 = 1;
					}
					STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_END();
				}
				else
				{
					Global_2097157.f_4 = 1;
				}
				Global_2097157 = 1;
				func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_2097157.f_1 = 1;
			if (Global_2097157.f_2)
			{
				func_459();
				if (Global_2097157.f_4)
				{
					if (func_458(uParam0->f_44))
					{
						Global_2097157 = 3;
					}
					else
					{
						Global_2097157 = 2;
					}
				}
				else
				{
					Global_2097157 = 2;
				}
			}
			break;
		
		case 2:
			STATS::LEADERBOARDS2_READ_RANK_PREDICTION(&(Global_2097157.f_73), &(Global_2097157.f_142), &(Global_2097157.f_211));
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_2097157.f_211 = { Global_2097157.f_142 };
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_457())
			{
				if (func_456())
				{
					Global_2097157 = 99;
				}
				else
				{
					Global_2097157 = 999;
					return 1;
				}
			}
			else
			{
				Global_2097157 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_458(uParam0->f_44))
			{
				Global_2097157.f_280 = { Global_2097157.f_142 };
			}
			else
			{
				Var2.f_0 = Global_2097157.f_142;
				Var2.f_1 = Global_2097157.f_142.f_1;
				Var2.f_2 = Global_2097157.f_142.f_2;
				STATS::LEADERBOARDS2_READ_RANK_PREDICTION(&Var2, &(Global_2097157.f_142), &(Global_2097157.f_280));
			}
			Global_2097157 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_445(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var3, 1, 1, Global_2097157.f_280.f_36[0], Global_2097157.f_280.f_3[0]))
			{
				func_463(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_START(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(0, &Var0);
						if (MISC::ARE_STRINGS_EQUAL(&(Var0.f_13), ""))
						{
							Global_1057163.f_1 = -1;
						}
						else
						{
							Global_1057163.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_1057163.f_1 = -1;
					}
					STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_END();
				}
				else
				{
					Global_1057163.f_1 = -1;
				}
				Global_2097157 = 999;
				func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

int func_445(var uParam0, var uParam1, var* uParam2, int iParam3, var* uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x1230E
{
	int iVar0;
	float fVar1;
	
	iVar0 = Global_2097157.f_211.f_36[0];
	fVar1 = Global_2097157.f_211.f_3[0];
	if (bParam6)
	{
		iVar0 = iParam7;
		fVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_452() && !func_448())
			{
				func_446(*uParam2);
				if (bParam5)
				{
					if (BitTest(Global_2097157.f_142.f_2, 0))
					{
						if (STATS::LEADERBOARDS2_READ_BY_SCORE_INT(uParam2, iVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (STATS::LEADERBOARDS2_READ_BY_SCORE_FLOAT(uParam2, fVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (STATS::LEADERBOARDS2_READ_BY_RADIUS(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_446(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)//Position - 0x12443
{
	Global_2097152 = 1;
	func_447(&(Global_2097152.f_1), 1, 0);
	Global_2097152.f_3 = Param0.f_0;
	Global_2097152.f_4 = Param0.f_1;
}

void func_447(var uParam0, bool bParam1, bool bParam2)//Position - 0x1246E
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

int func_448()//Position - 0x124AB
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_449())
	{
		return 1;
	}
	return 0;
}

bool func_449()//Position - 0x124C9
{
	return func_450(PLAYER::PLAYER_ID());
}

int func_450(int iParam0)//Position - 0x124D9
{
	switch (func_451(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return 0;
		
		default:
	}
	return 1;
}

int func_451(int iParam0)//Position - 0x12539
{
	return Global_1853348[iParam0 /*834*/].f_192;
}

int func_452()//Position - 0x1254C
{
	if (STATS::LEADERBOARDS_READ_ANY_PENDING() || Global_2097152)
	{
		func_453();
		return 1;
	}
	return 0;
}

void func_453()//Position - 0x1256E
{
	if (func_454(&(Global_2097152.f_1), 120000, 1))
	{
		STATS::LEADERBOARDS_READ_CLEAR(Global_2097152.f_3, Global_2097152.f_4, -1);
		Global_2097152 = 0;
		func_376(&(Global_2097152.f_1));
	}
}

int func_454(var uParam0, int iParam1, bool bParam2)//Position - 0x125A9
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_455(uParam0, bParam2, 0);
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

void func_455(var uParam0, bool bParam1, bool bParam2)//Position - 0x12607
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

bool func_456()//Position - 0x1264C
{
	return BitTest(Global_1048576.f_10, 1);
}

var func_457()//Position - 0x1265C
{
	return Global_2723612.f_3;
}

int func_458(int iParam0)//Position - 0x1266A
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_459()//Position - 0x1273B
{
	Global_2097157.f_73 = Global_2097157.f_142;
	Global_2097157.f_73.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_73.f_2 = Global_2097157.f_142.f_2;
	Global_2097157.f_211 = Global_2097157.f_142;
	Global_2097157.f_211.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_211.f_2 = Global_2097157.f_142.f_2;
}

bool func_460(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x1279B
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_461(int iParam0, int iParam1, int iParam2)//Position - 0x127AB
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = STATS::LEADERBOARDS_GET_COLUMN_TYPE(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_462(int iParam0, int iParam1)//Position - 0x128AD
{
	if (STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_463(var uParam0, var uParam1)//Position - 0x12908
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_464(var uParam0, var uParam1, var* uParam2, var* uParam3)//Position - 0x12923
{
	switch (*uParam0)
	{
		case 0:
			if (!func_452() && !func_448())
			{
				func_446(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_HANDLE(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

struct<13> func_465(int iParam0)//Position - 0x129D7
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_466(int iParam0)//Position - 0x129EE
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_467(int iParam0, float fParam1, int iParam2)//Position - 0x12A10
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3[3];
	struct<8> Var4[3];
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 == 1)
	{
		iVar2++;
	}
	else if (iParam2 == 2)
	{
		iVar1++;
	}
	else if (iParam2 == 3)
	{
		iVar0++;
	}
	StringCopy(&(Var4[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var4[1 /*8*/]), "Location", 32);
	StringCopy(&(Var4[2 /*8*/]), "Type", 32);
	StringCopy(&(Var3[0 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[2 /*6*/]), "StuntPlaneRace", 24);
	if (func_469(817, &Var3, &Var4, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_468(817, 131, -SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			func_468(817, 131, 0, 0f, 0);
		}
		func_468(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		func_468(817, 2, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		func_468(817, 147, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		func_468(817, 149, 0, 0f, 0);
		func_468(817, 148, 0, 0f, 0);
		func_468(817, 109, 1, 0f, 0);
		func_468(817, 157, iVar0, 0f, 0);
		func_468(817, 158, iVar1, 0f, 0);
		func_468(817, 86, iVar2, 0f, 0);
	}
}

void func_468(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0x12BD7
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(iParam1, iParam2, fParam3);
	}
	if (!Global_2097157.f_3)
	{
		Global_2097157.f_142 = iParam0;
		Global_2097157.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_2097157.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_2097157.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_461(iParam0, 4, iVar1))
				{
					MISC::SET_BIT(&(Global_2097157.f_142.f_2), iVar1);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar1);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_2097157.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_2097157.f_142.f_36[iVar0] = iParam2;
	Global_2097157.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		MISC::SET_BIT(&(Global_2097157.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar0);
	}
}

int func_469(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x12CF2
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var2 = { func_465(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723612.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1931618.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

void func_470(int iParam0, char[4] cParam1)//Position - 0x12E26
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TRIAL_01", 24);
			cParam1 = "SPTTLB_1";
			break;
		
		case 1:
			StringCopy(&Var0, "TRIAL_02", 24);
			cParam1 = "SPTTLB_2";
			break;
		
		case 2:
			StringCopy(&Var0, "TRIAL_03", 24);
			cParam1 = "SPTTLB_3";
			break;
		
		case 3:
			StringCopy(&Var0, "TRIAL_04", 24);
			cParam1 = "SPTTLB_4";
			break;
		
		case 4:
			StringCopy(&Var0, "TRIAL_05", 24);
			cParam1 = "SPTTLB_5";
			break;
	}
	func_471(&uLocal_1210, 86, &Var0, cParam1, -1, -1, 0, 0);
}

void func_471(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x12EB9
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	Global_2097536.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_480())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_480())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_2097536.f_2780.f_26 = -1;
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_480())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_480())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_480())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_480())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 5;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 6;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 5;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 6;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_480())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &Var3);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_2097536.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_480())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_480())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 4;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_480())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_480())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_480())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 0;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 0;
					Global_2097536.f_2708 = 1;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_480())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_480())
				{
					Global_2097536.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_2097536.f_2780.f_26 = -1;
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_480())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), "CMSW", 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2710[4] = 6;
			Global_2097536.f_2708 = 5;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 6;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 6;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2710[2] = 5;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_2097536.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 1;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_2097536.f_2780.f_9), {func_479(iParam1)}, 16);
			Global_2097536.f_2780.f_25 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2708 = 2;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 0;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 1;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 0;
			Global_2097536.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_2097536.f_2710[0] = 3;
			Global_2097536.f_2708 = 1;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 5;
				Global_2097536.f_2710[4] = 6;
				Global_2097536.f_2708 = 3;
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				Global_2097536.f_2780.f_28 = 6;
				Global_2097536.f_2780.f_29[0] = 5;
				Global_2097536.f_2780.f_29[1] = 11;
				Global_2097536.f_2780.f_29[2] = 4;
				Global_2097536.f_2780.f_29[3] = 5;
				Global_2097536.f_2780.f_29[4] = 5;
			}
			else if (Global_4718592.f_614 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4718592.f_2 == 5)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 2;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2708 = 3;
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 2;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4718592.f_2 == 5)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_478(Global_4718592.f_168757) || func_475(Global_4718592.f_168757))
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else if (func_474(Global_4718592.f_168757))
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			MISC::SET_BIT(&(Global_2097536.f_2768), 1);
			Global_2097536.f_2754[1] = -1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 11;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 3;
			Global_2097536.f_2708 = 2;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 1;
					Global_2097536.f_2708 = 4;
					MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 12;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 4;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 17;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 2;
			Global_2097536.f_2708 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 10;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 4;
			Global_2097536.f_2710[5] = 3;
			Global_2097536.f_2708 = 6;
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 9;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			Global_2097536.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2708 = 1;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 1;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2709 = 6;
				Global_2097536.f_2708 = 2;
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				Global_2097536.f_2780.f_28 = 4;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 2;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 1;
				Global_2097536.f_2709 = 4;
				Global_2097536.f_2708 = 3;
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 1;
				Global_2097536.f_2780.f_29[2] = 3;
			}
			Global_2097536.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_473(iParam4)}, 8);
			Global_2097536.f_2708 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			Global_2097536.f_2780.f_28 = 5;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 21;
			break;
		
		case 890:
			uParam0->f_44 = 1203;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_CCM_CAREER", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CCMLVL", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RACES", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 22;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			break;
		
		case 276:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&Var0, "TUNER_SANDB_SVAR", 32);
			if (iParam4 == 2 || iParam4 == 3)
			{
				StringIntConCat(&Var0, 2, 32);
			}
			else
			{
				StringIntConCat(&Var0, iParam4, 32);
			}
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_TT", 32);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
					Global_2097536.f_2708 = 2;
					Global_2097536.f_2780.f_28 = 3;
					Global_2097536.f_2780.f_29[0] = 2;
					Global_2097536.f_2780.f_29[1] = 3;
					break;
				
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_CD", 32);
					break;
				
				case 2:
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_HH1", 32);
					break;
			}
			break;
		
		case 278:
		case 279:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			if (iParam1 == 278)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_SRS", 32);
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_SRS", 32);
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_PS", 32);
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_PURS", 32);
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
			}
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			Global_2097536.f_2780 = 1;
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
		{
			MISC::SET_BIT(&(Global_2097536.f_2770), iVar2);
		}
		iVar2++;
	}
	Global_2097536.f_2826 = func_472(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_472(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x17F20
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_466(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

struct<6> func_473(int iParam0)//Position - 0x17F92
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_474(int iParam0)//Position - 0x18041
{
	return iParam0 == 74;
}

var func_475(int iParam0)//Position - 0x1804E
{
	return (func_477(iParam0) || func_476(iParam0));
}

bool func_476(int iParam0)//Position - 0x18068
{
	return iParam0 == 44;
}

bool func_477(int iParam0)//Position - 0x18075
{
	return iParam0 == 45;
}

bool func_478(int iParam0)//Position - 0x18082
{
	return iParam0 == 12;
}

struct<6> func_479(int iParam0)//Position - 0x1808F
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_480()//Position - 0x18218
{
	if ((((((((((((Global_4718592.f_107227 == 1 || Global_4718592.f_107227 == 3) || Global_4718592.f_107227 == 5) || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 19) || Global_4718592.f_107227 == 8) || Global_4718592.f_107227 == 9) || Global_4718592.f_107227 == 11) || Global_4718592.f_107227 == 13) || Global_4718592.f_107227 == 21) || Global_4718592.f_107227 == 23) || Global_4718592.f_107227 == 25) || Global_4718592.f_107227 == 26)
	{
		return 1;
	}
	return 0;
}

int func_481(int* iParam0, bool bParam1)//Position - 0x18315
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_2103068.f_2 + 5 < MISC::GET_FRAME_COUNT() && Global_2103068.f_2 > 0)
	{
		func_376(&Global_2103068);
		func_376(&(Global_2103068.f_49));
		*iParam0 = 0;
		Global_2103068.f_2 = 0;
		func_491(0);
	}
	Global_2103068.f_2 = MISC::GET_FRAME_COUNT();
	iVar1 = -1;
	if (func_490())
	{
		if (NETWORK::_0xBD545D44CCE70597() == 0)
		{
			iVar1 = NETWORK::_0x74FB3E29E6D10FA9();
		}
	}
	if ((func_490() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_488() && NETWORK::NETWORK_IS_SIGNED_ONLINE()))
	{
		if (NETWORK::_0x8D11E61A4ABF49CC())
		{
			func_485(&(Global_2103068.f_3), func_487(&(Global_2103068.f_3)));
			if (!BitTest(*iParam0, 4))
			{
				MISC::SET_BIT(iParam0, 4);
				StringCopy(&(Global_2103068.f_3.f_1), "", 64);
				func_483(&(Global_2103068.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 2)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 1)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 5)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (!func_488())
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			if (!BitTest(*iParam0, 0))
			{
				if (!PAD::IS_CONTROL_PRESSED(2, 201))
				{
					MISC::SET_BIT(iParam0, 0);
				}
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
			{
				func_376(&(Global_2103068.f_49));
				func_376(&Global_2103068);
				*iParam0 = 0;
				Global_2103068.f_2 = 0;
				func_491(0);
				return 1;
			}
		}
	}
	else
	{
		func_485(&(Global_2103068.f_3), func_487(&(Global_2103068.f_3)));
		if ((func_482(&(Global_2103068.f_49)) && !func_454(&(Global_2103068.f_49), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			MISC::SET_BIT(iParam0, 3);
			StringCopy(&(Global_2103068.f_3.f_1), "", 64);
			func_483(&(Global_2103068.f_3), 0);
		}
		else if (!BitTest(*iParam0, 3))
		{
			if (!BitTest(*iParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(false);
				MISC::SET_BIT(iParam0, 1);
				StringCopy(&(Global_2103068.f_3.f_1), "", 64);
				func_483(&(Global_2103068.f_3), 0);
			}
		}
		if (func_482(&Global_2103068))
		{
			if (!func_454(&Global_2103068, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						if (!BitTest(*iParam0, 0))
						{
							if (!PAD::IS_CONTROL_PRESSED(2, 201))
							{
								MISC::SET_BIT(iParam0, 0);
							}
						}
						else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							func_376(&Global_2103068);
							*iParam0 = 0;
							Global_2103068.f_2 = 0;
							func_491(0);
							return 1;
						}
					}
				}
				else
				{
					func_376(&Global_2103068);
					*iParam0 = 0;
					Global_2103068.f_2 = 0;
					func_491(0);
					return 1;
				}
			}
			else if (BitTest(*iParam0, 3))
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!BitTest(*iParam0, 0))
				{
					if (!PAD::IS_CONTROL_PRESSED(2, 201))
					{
						MISC::SET_BIT(iParam0, 0);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					func_376(&(Global_2103068.f_49));
					func_376(&Global_2103068);
					*iParam0 = 0;
					Global_2103068.f_2 = 0;
					func_491(0);
					return 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
					if (!BitTest(*iParam0, 0))
					{
						if (!PAD::IS_CONTROL_PRESSED(2, 201))
						{
							MISC::SET_BIT(iParam0, 0);
						}
					}
					else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_376(&(Global_2103068.f_49));
						func_376(&Global_2103068);
						*iParam0 = 0;
						Global_2103068.f_2 = 0;
						func_491(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_482(var uParam0)//Position - 0x18774
{
	return uParam0->f_1;
}

void func_483(var uParam0, bool bParam1)//Position - 0x18780
{
	func_484(uParam0);
	if (bParam1)
	{
		func_491(0);
	}
	uParam0->f_35 = 1;
}

void func_484(var uParam0)//Position - 0x1879D
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_485(var uParam0, int iParam1)//Position - 0x187B8
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_486(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_486(var uParam0)//Position - 0x188B6
{
	uParam0->f_35 = 0;
}

int func_487(var uParam0)//Position - 0x188C3
{
	return uParam0->f_35;
}

int func_488()//Position - 0x188CF
{
	if (func_489())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_489()//Position - 0x188EF
{
	return Global_2725911;
}

bool func_490()//Position - 0x188FB
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

void func_491(bool bParam0)//Position - 0x18911
{
	HUD::BUSYSPINNER_OFF();
	if (bParam0)
	{
		HUD::PRELOAD_BUSYSPINNER();
	}
}

void func_492(var uParam0, int iParam1, char[4] cParam2)//Position - 0x18926
{
	func_164(&(Local_45.f_119), 1128792064, 1, 0, 1, 1065353216);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	func_470(iParam1, cParam2);
	func_493(uParam0, &uLocal_1210);
}

void func_493(var uParam0, var uParam1)//Position - 0x1895F
{
	int iVar0;
	bool bVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	struct<3> Var12;
	struct<3> Var13;
	bool bVar14;
	
	func_447(&(Global_2103068.f_49), 1, 0);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_558();
	func_557(0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_555(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	func_554(1);
	func_553(1);
	if (!func_449())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!BitTest(uParam1->f_42, 3))
	{
		*uParam0 = func_367();
		MISC::SET_BIT(&(uParam1->f_42), 3);
	}
	Var10 = { func_465(PLAYER::PLAYER_ID()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) || Global_2097536.f_2832 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_2097536.f_2829 != 2)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
			{
				if (Global_2097536.f_2829 != 3)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 3;
				}
			}
			else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
			{
				if (Global_2097536.f_2829 != 4)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 4;
				}
			}
			else if (Global_2097536.f_2832 != 0)
			{
				if (Global_2097536.f_2829 != 5)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 5;
				}
			}
			if (!BitTest(uParam1->f_42, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_552(*uParam0, Global_2097536.f_2780);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
				{
					if (!func_466(uParam1->f_44))
					{
						if (Global_2097536.f_2780.f_26 > 0)
						{
							Var6 = { Global_2097536.f_2780.f_9 };
							func_551(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_551(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else if (!Global_2097536.f_2780.f_27)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							func_551(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_551(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							func_551(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_551(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					func_550(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
				}
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 4);
				func_549(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 5);
				func_549(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 6);
				func_549(*uParam0, &iVar3, iVar9, 1, 1);
				MISC::SET_BIT(&(uParam1->f_42), 1);
				func_548(*uParam0);
				MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				HUD::CLEAR_HELP(true);
			}
			else
			{
				func_548(*uParam0);
			}
		}
		else
		{
			if (Global_2097536.f_2829 != 1)
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_2097536.f_2829 = 1;
			}
			if (!func_519(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				if (!BitTest(uParam1->f_42, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_552(*uParam0, Global_2097536.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_466(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								Var6 = { Global_2097536.f_2780.f_9 };
								func_551(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_551(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_551(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_551(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_551(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_551(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						func_550(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					MISC::SET_BIT(&(uParam1->f_42), 0);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_2097536.f_2825 == -1)
				{
					StringCopy(&Var12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_549(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_549(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_549(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						func_518(*uParam0, iVar3, iVar9, &Var12);
						iVar3++;
						iVar0++;
					}
					Global_2097536.f_2825 = 1;
					func_376(&(Global_2097536.f_2823));
				}
				else if (func_454(&(Global_2097536.f_2823), 300, 0))
				{
					StringCopy(&Var13, "SC_LB_DL", 24);
					StringIntConCat(&Var13, Global_2097536.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_549(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_549(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_549(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						func_518(*uParam0, iVar3, iVar9, &Var13);
						iVar3++;
						iVar0++;
					}
					Global_2097536.f_2825++;
					if (Global_2097536.f_2825 > 3)
					{
						Global_2097536.f_2825 = 0;
					}
					func_376(&(Global_2097536.f_2823));
				}
				func_548(*uParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 0);
				if (!BitTest(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_552(*uParam0, Global_2097536.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_466(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								Var6 = { Global_2097536.f_2780.f_9 };
								func_551(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_551(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_551(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_551(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_551(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_551(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						func_550(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					if (!BitTest(uParam1->f_42, 6))
					{
						func_379(&Global_2101867);
						func_514(uParam1, &Global_2101867);
						func_513(uParam1, &Global_2101867);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_2097536.f_2704[0] > 1 || (Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] != -1)) || (((Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27) && func_466(uParam1->f_44)) && Global_2097536.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_2101867[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 4);
									func_549(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 5);
									if ((Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1] == -1) && !(((Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27) && func_466(uParam1->f_44)) && Global_2097536.f_2775[1] != -1))
									{
										func_549(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_549(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 6);
									if (!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
									{
										bVar14 = true;
									}
									else if (!NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
									{
										bVar14 = true;
									}
									if ((Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2] == -1) && !(((Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27) && func_466(uParam1->f_44)) && Global_2097536.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_549(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_549(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_460(Global_2101867[iVar0 /*100*/].f_32))
							{
								if (func_466(uParam1->f_44))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar11);
									if (!Global_2101867[iVar0 /*100*/].f_74 && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_2097536.f_2780.f_27)
									{
										if (func_512(&(Global_2101867[iVar0 /*100*/].f_32), &Var10))
										{
											MISC::SET_BIT(&iVar9, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												MISC::SET_BIT(&iVar9, 3);
											}
										}
									}
									if (func_466(uParam1->f_44))
									{
										Var6 = { Global_2101867[iVar0 /*100*/] };
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2101867[iVar0 /*100*/].f_84)) && !MISC::ARE_STRINGS_EQUAL(&(Global_2101867[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_2101867[iVar0 /*100*/].f_84), 64);
										}
										func_511(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &Var6, &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_511(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &(Global_2101867[iVar0 /*100*/]), &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									bVar1 = false;
									while (bVar1 < Global_2097536.f_2708)
									{
										bVar5 = false;
										if (BitTest(Global_2097536.f_2770, bVar1))
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2754[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_502(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], 0, Global_2101867[iVar0 /*100*/].f_58);
											}
											else
											{
												func_502(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], Global_2101867[iVar0 /*100*/].f_74, Global_2101867[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2761[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_499(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												func_499(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], Global_2101867[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									func_498();
									uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_2101867[iVar0 /*100*/].f_59 > 2)
										{
											MISC::SET_BIT(&iVar9, 2);
											MISC::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_497(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 4);
						func_549(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 5);
						func_549(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 6);
						func_549(*uParam0, &iVar3, iVar9, 1, 0);
					}
					MISC::SET_BIT(&(uParam1->f_42), 1);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
					func_548(*uParam0);
					HUD::CLEAR_HELP(true);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_2097536.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_497(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_548(*uParam0);
					func_494(uParam0, uParam1);
				}
			}
		}
	}
}

void func_494(var uParam0, var uParam1)//Position - 0x19925
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		PAD::SET_INPUT_EXCLUSIVE(2, 239);
		PAD::SET_INPUT_EXCLUSIVE(2, 240);
		PAD::SET_INPUT_EXCLUSIVE(2, 237);
		PAD::SET_INPUT_EXCLUSIVE(2, 238);
		PAD::DISABLE_CONTROL_ACTION(2, 200, true);
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241))
		{
			PAD::_SET_CONTROL_NORMAL(2, 188, 1f);
		}
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242))
		{
			PAD::_SET_CONTROL_NORMAL(2, 187, 1f);
		}
		if (HUD::_0x632B2940C67F4EA9(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					bVar0 = true;
				}
				else
				{
					PAD::_SET_CONTROL_NORMAL(2, 217, 1f);
				}
			}
		}
	}
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		func_496(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!BitTest(uParam1->f_246, 0))
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 188) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 188)) || iVar6 < -100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				MISC::SET_BIT(&(uParam1->f_246), 0);
				func_376(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_495(uParam1, 188))
		{
			MISC::CLEAR_BIT(&(uParam1->f_246), 0);
		}
		if (!BitTest(uParam1->f_246, 1))
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 187) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 187)) || iVar6 > 100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1++;
				MISC::SET_BIT(&(uParam1->f_246), 1);
				func_376(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_495(uParam1, 187))
		{
			MISC::CLEAR_BIT(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!BitTest(uParam1->f_246, 3))
	{
		if ((PAD::IS_CONTROL_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			MISC::SET_BIT(&(uParam1->f_246), 3);
			func_376(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_495(uParam1, 204))
	{
		MISC::CLEAR_BIT(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				MISC::CLEAR_BIT(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_497(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_497(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			MISC::CLEAR_BIT(&(uParam1->f_42), 2);
		}
		if (func_460(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!BitTest(uParam1->f_246, 2))
			{
				if (PAD::IS_CONTROL_PRESSED(2, 217) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 217))
				{
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", true);
						MISC::SET_BIT(&(uParam1->f_246), 2);
						NETWORK::NETWORK_SHOW_PROFILE_UI(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!PAD::IS_CONTROL_PRESSED(2, 217))
			{
				MISC::CLEAR_BIT(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_495(var uParam0, int iParam1)//Position - 0x19CBA
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_496(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_454(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) || func_454(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_496(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x19D59
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_497(int iParam0, int iParam1, int iParam2)//Position - 0x19E2E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_498()//Position - 0x19E51
{
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_499(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, float fParam15, bool bParam16)//Position - 0x19E5D
{
	switch (Param0.f_29[bParam14])
	{
		case 4:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(SYSTEM::FLOOR(fParam15));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_29[bParam14] == 18 || Param0.f_29[bParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_29[bParam14] == 19 || Param0.f_29[bParam14] == 20)
					{
						fParam15 = func_501(fParam15);
					}
					else
					{
						fParam15 = func_500(fParam15);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

float func_500(float fParam0)//Position - 0x19F7F
{
	return (fParam0 / 0.3048f);
}

float func_501(float fParam0)//Position - 0x19F8F
{
	return (fParam0 / 1609.344f);
}

void func_502(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17)//Position - 0x19F9F
{
	struct<4> Var0;
	
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[bParam14])
	{
		case 5:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(-iParam15);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_29[bParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_29[bParam14] == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_29[bParam14] == 10)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam15))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SCLB_VEH_CUST");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam15))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 8:
			if (func_510(iParam15) != 0)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_507(func_510(iParam15), 0));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_29[bParam14] == 14 || Param0.f_29[bParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_29[bParam14] == 15 || Param0.f_29[bParam14] == 16)
					{
						iParam15 = SYSTEM::FLOOR(func_501(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_500(SYSTEM::TO_FLOAT(iParam15)));
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 21:
			if (iParam15 > 20)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				Var0 = { func_506(iParam15) };
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Var0);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 22:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(func_503(iParam15));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

int func_503(int iParam0)//Position - 0x1A3A7
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	iVar0 = func_505(199);
	if (iParam0 < 100)
	{
		return 1;
	}
	else if (iParam0 > iVar0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam0) - SYSTEM::TO_FLOAT(iVar0));
		iVar2 = SYSTEM::FLOOR((fVar1 / SYSTEM::TO_FLOAT(Global_262145.f_31077)));
		return (199 + iVar2);
	}
	fVar3 = (SYSTEM::TO_FLOAT(Global_262145.f_31076) / 2f);
	fVar4 = (-(fVar3 * 3f) + fVar3);
	fVar5 = fVar3;
	fVar6 = ((-(fVar3 * 3f) + fVar4) + 100f);
	fVar7 = ((-3f * fVar4) - 100f);
	fVar7 = (IntToFloat(iParam0) - fVar7);
	return SYSTEM::FLOOR(func_504(-fVar5, -fVar6, fVar7, 1));
}

float func_504(float fParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x1A44D
{
	if (bParam3)
	{
		return ((-fParam1 - SYSTEM::SQRT(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
	}
	return ((-fParam1 + SYSTEM::SQRT(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

int func_505(int iParam0)//Position - 0x1A491
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (SYSTEM::TO_FLOAT(Global_262145.f_31076) / 2f);
	return SYSTEM::ROUND((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}

struct<4> func_506(int iParam0)//Position - 0x1A4D2
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_507(int iParam0, bool bParam1)//Position - 0x1A50B
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("weapon_doubleaction"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case joaat("weapon_stone_hatchet"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case joaat("weapon_raypistol"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case joaat("weapon_raycarbine"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case joaat("weapon_rayminigun"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case joaat("weapon_navyrevolver"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		case joaat("weapon_gadgetpistol"):
			if (bParam1)
			{
				return "WTU_GDGTPST";
			}
			else
			{
				return "WT_GDGTPST";
			}
			break;
		
		case joaat("weapon_militaryrifle"):
			if (bParam1)
			{
				return "WTU_MLTRYRFL";
			}
			else
			{
				return "WT_MLTRYRFL";
			}
			break;
		
		case joaat("weapon_combatshotgun"):
			if (bParam1)
			{
				return "WTU_CMBSHGN";
			}
			else
			{
				return "WT_CMBSHGN";
			}
			break;
		
		case joaat("vehicle_weapon_turret_dinghy5_50cal"):
			if (bParam1)
			{
				return "WTU_VEH_DINGHY_50C";
			}
			else
			{
				return "WTU_VEH_DINGHY_50C";
			}
			break;
		
		case joaat("weapon_fertilizercan"):
			if (bParam1)
			{
				return "WTU_FERTCAN";
			}
			else
			{
				return "WT_FERTCAN";
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			if (bParam1)
			{
				return "WTU_HEAVYRIFLE";
			}
			else
			{
				return "WT_HEAVYRIFLE";
			}
			break;
		
		case joaat("weapon_emplauncher"):
			if (bParam1)
			{
				return "WTU_EMPL";
			}
			else
			{
				return "WT_EMPL";
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			if (bParam1)
			{
				return "WTU_STNGUNMP";
			}
			else
			{
				return "WT_STNGUNMP";
			}
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			if (bParam1)
			{
				return "WTU_TACRIFLE";
			}
			else
			{
				return "WT_TACRIFLE";
			}
			break;
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			if (bParam1)
			{
				return "WTU_PRCSRIFLE";
			}
			else
			{
				return "WT_PRCSRIFLE";
			}
			break;
		
		case joaat("weapon_bzgas"):
			if (bParam1)
			{
				return "WTU_BZGAS";
			}
			else
			{
				return "WTU_BZGAS";
			}
			break;
		
		case joaat("weapon_stinger"):
			if (bParam1)
			{
				return "WTU_STINGER";
			}
			else
			{
				return "WTU_STINGER";
			}
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			if (bParam1)
			{
				return "WTU_GR_LAUN_SM";
			}
			else
			{
				return "WTU_GR_LAUN_SM";
			}
			break;
		
		default:
			if (func_509(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_508(&(Var0.f_31));
				}
				else
				{
					return func_508(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_508(var uParam0)//Position - 0x1B358
{
	return uParam0;
}

int func_509(int iParam0, var* uParam1)//Position - 0x1B362
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_510(int iParam0)//Position - 0x1B39D
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return joaat("weapon_heavyrifle");
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_511(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)//Position - 0x1B510
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (iParam3 > 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam5);
}

int func_512(var* uParam0, var* uParam1)//Position - 0x1B562
{
	if (!func_460(*uParam0))
	{
		return 0;
	}
	if (!func_460(*uParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

void func_513(var uParam0, var uParam1)//Position - 0x1B59C
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!BitTest(uParam0->f_42, 5) && !BitTest(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_514(var uParam0, var uParam1)//Position - 0x1B707
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!BitTest(uParam0->f_42, 5) && !BitTest(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_517(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_517(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_517(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_515(uParam1);
	}
}

void func_515(var uParam0)//Position - 0x1B7B6
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2097536.f_2704[iVar0] = 0;
		Global_2097536.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_465(PLAYER::PLAYER_ID()) };
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2097536.f_2826))
	{
		iVar4 = STATS::LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Global_2097536.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_516(&Global_2101737);
				iVar2 = 0;
				STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(Global_2097536.f_2826, iVar0, &Global_2101737);
				*(uParam0[iVar0 /*100*/]) = { Global_2101737.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_2101737.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_2101737.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_2101737.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_2101737.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_2101737.f_60;
				Global_2097536.f_2708 = Global_2101737.f_62;
				Global_2097536.f_2769 = Global_2101737.f_63;
				iVar2 = 0;
				if (BitTest(Global_2101737.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (BitTest(Global_2101737.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (BitTest(Global_2101737.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_2097536.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (BitTest(Global_2101737.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_512(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_2097536.f_2775[(iVar2 - 1)] = 0;
					}
				}
				bVar1 = false;
				while (bVar1 < Global_2101737.f_62)
				{
					if (BitTest(Global_2101737.f_63, bVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[bVar1] = Global_2101737.f_97[bVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[bVar1] = Global_2101737.f_64[bVar1];
					}
					bVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_516(var uParam0)//Position - 0x1B9C7
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_64[iVar1] = 0f;
		uParam0->f_97[iVar1] = 0;
		iVar1++;
	}
}

int func_517(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1BA3D
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_2097536[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680[iParam3 /*16*/] = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680.f_49[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_67[Global_2097536.f_2779];
			Global_2101680.f_53[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_60[Global_2097536.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_2097536.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_2097536.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_465(PLAYER::PLAYER_ID()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_2097536.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_2097536.f_2775[iParam3] + iVar0) < 12 && (Global_2097536.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_518(int iParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x1BCE6
{
	MISC::SET_BIT(&iParam2, 7);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_519(var uParam0)//Position - 0x1BD1A
{
	if (!Global_2097532)
	{
		if (!func_482(&(Global_2097536.f_2827)))
		{
			func_455(&(Global_2097536.f_2827), 1, 0);
			return 0;
		}
		else if (!func_454(&(Global_2097536.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) || Global_2097536.f_2832 != 0)
	{
		MISC::CLEAR_BIT(&(uParam0->f_42), 4);
		return 1;
	}
	if (!BitTest(uParam0->f_42, 4))
	{
		func_547(uParam0);
		MISC::SET_BIT(&(uParam0->f_42), 4);
		return 0;
	}
	else if (BitTest(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_545(uParam0))
	{
		return 0;
	}
	if (!func_543(uParam0))
	{
		return 0;
	}
	if (!func_536(uParam0))
	{
		return 0;
	}
	if (!BitTest(uParam0->f_42, 6))
	{
		func_379(&Global_2101867);
		func_514(uParam0, &Global_2101867);
		func_513(uParam0, &Global_2101867);
		MISC::SET_BIT(&(uParam0->f_42), 6);
	}
	if (!BitTest(uParam0->f_42, 7))
	{
		if (!func_482(&(Global_2097536.f_2830)))
		{
			func_455(&(Global_2097536.f_2830), 1, 0);
		}
		else if (func_454(&(Global_2097536.f_2830), 30000, 1))
		{
			MISC::SET_BIT(&(uParam0->f_42), 7);
		}
		if (func_533(&Global_2101867))
		{
		}
		else
		{
			return 0;
		}
		if (func_530(&Global_2101867))
		{
		}
		else
		{
			return 0;
		}
		if (func_523(&Global_2101867))
		{
			func_520(&Global_2101867);
			MISC::SET_BIT(&(uParam0->f_42), 7);
			func_520(&Global_2101867);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_520(var uParam0)//Position - 0x1BED3
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = func_522(Global_2097536.f_2826);
	if (Global_2100721.f_81[iVar2] != 0)
	{
		func_521(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_516(&Global_2101737);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_2101737 = Global_2097536.f_2826;
			Global_2101737.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_2101737.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_2101737.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_2101737.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_460((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_2101737.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_2101737.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_2101737.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_2101737.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_2101737.f_62 = Global_2097536.f_2708;
			Global_2101737.f_63 = Global_2097536.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				MISC::SET_BIT(&(Global_2101737.f_61), 0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2101737.f_61), 0);
			}
			MISC::SET_BIT(&(Global_2101737.f_61), (uParam0[iVar0 /*100*/])->f_75);
			bVar1 = false;
			while (bVar1 < Global_2101737.f_62)
			{
				if (BitTest(Global_2101737.f_63, bVar1))
				{
					Global_2101737.f_97[bVar1] = (uParam0[iVar0 /*100*/])->f_67[bVar1];
				}
				else
				{
					Global_2101737.f_64[bVar1] = (uParam0[iVar0 /*100*/])->f_60[bVar1];
				}
				bVar1++;
			}
			Global_2100721.f_81[iVar2] = Global_2097536.f_2826;
			STATS::LEADERBOARDS_CACHE_DATA_ROW(&Global_2101737);
		}
		iVar0++;
	}
	Global_2100721.f_87[iVar2 /*3*/] = { func_239(PLAYER::PLAYER_ID()) };
}

void func_521(int iParam0, int iParam1)//Position - 0x1C0BC
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2100721.f_81[iParam1]))
		{
			STATS::LEADERBOARDS_CLEAR_CACHE_DATA_ID(Global_2100721.f_81[iParam1]);
		}
		Global_2100721.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0))
		{
			STATS::LEADERBOARDS_CLEAR_CACHE_DATA_ID(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_2100721.f_81[iVar0] == iParam0)
			{
				Global_2100721.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_522(int iParam0)//Position - 0x1C138
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2100721.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2100721.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2100721.f_81[iVar0]))
		{
			iVar3 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_2100721.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_523(var uParam0)//Position - 0x1C1CB
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_528(uParam0);
			if ((func_490() || func_527()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_460((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_526(&((uParam0[iVar0 /*100*/])->f_32), &Global_2103169))
					{
						Global_2103169[Global_2103169.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_2103169.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_2103169.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_524(&((uParam0[1 /*100*/])->f_76), &(Global_2103169.f_206), &Global_2103169, &(Global_2103169.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_2103169.f_206 > 12)
			{
				Global_2103169.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_2103169.f_206)
				{
					if (func_460((uParam0[iVar0 /*100*/])->f_32) && func_460(Global_2103169[iVar1 /*13*/]))
					{
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((uParam0[iVar0 /*100*/])->f_32), &(Global_2103169[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_2103169.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_524(var uParam0, var uParam1, var* uParam2, var uParam3)//Position - 0x1C378
{
	var* uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_START(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_NEW(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_525(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_525(var* uParam0, char* sParam1)//Position - 0x1C431
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

int func_526(var* uParam0, var uParam1)//Position - 0x1C443
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_460(*(uParam1[iVar0 /*13*/])))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_527()//Position - 0x1C482
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

void func_528(var uParam0)//Position - 0x1C498
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_529(&(Global_2103169[iVar0 /*13*/]));
		StringCopy(&(Global_2103169.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
		{
			NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
		}
	}
	if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
	{
		NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
	}
	Global_2103169.f_206 = 0;
}

void func_529(var uParam0)//Position - 0x1C509
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

int func_530(var uParam0)//Position - 0x1C551
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	else if (func_527() || func_490())
	{
		if (!func_532(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_531(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_531(var uParam0, var* uParam1, char* sParam2)//Position - 0x1C5BF
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_460(*uParam1))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
				{
					if (func_527() || func_490())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (MISC::IS_XBOX360_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (func_490())
						{
						}
						else if (MISC::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_532(var uParam0)//Position - 0x1C6D0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_527() && !func_490())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_2097536.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_2097536.f_2833[iVar1 /*16*/]), "", 64);
				func_529(&(Global_2097536.f_3026[iVar1 /*13*/]));
				if (func_460((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_2097536.f_3026[Global_2097536.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_2097536.f_3183++;
				}
				iVar1++;
			}
			if (Global_2097536.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&(Global_2097536.f_3026), Global_2097536.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES((uParam0[0 /*100*/])->f_79, &(Global_2097536.f_2833), Global_2097536.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_460((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_2097536.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_533(var uParam0)//Position - 0x1C866
{
	int iVar0;
	
	if (func_527() || func_490())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_535(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_2097536.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_534(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_534(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)//Position - 0x1C903
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_460(Var0))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
				{
					if ((MISC::IS_XBOX360_VERSION() || func_527()) || func_490())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (func_490())
						{
						}
						else if (MISC::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_535(var uParam0, char* sParam1, char* sParam2, int iParam3, var uParam4)//Position - 0x1CA25
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!func_527() && !func_490())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(iParam3[0 /*16*/], "", 64);
			if (func_460(Var1[0 /*13*/]))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var1[0 /*13*/])))
				{
					*uParam4 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(*uParam4, iParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(iParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_536(var uParam0)//Position - 0x1CB2B
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_19.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_465(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_2097536.f_2775[iVar9] = -1;
			Global_2097536.f_2704[iVar9] = 0;
			Global_2097157.f_374 = -1;
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var12))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var1.f_0 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_445(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_542(), 0, 0, 0))
			{
				func_463(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_START(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_542())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(iVar7, &Var0);
								if (Global_2097157.f_374 < 0)
								{
									if (func_512(&Var0, &Var12) || func_512(&Var0, &(Global_2097157.f_361)))
									{
										Global_2097157.f_374 = Var0.f_96;
									}
								}
								if (iVar5 < 0)
								{
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_541(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_2097536.f_2704[iVar9] < 11)
							{
								if (func_542() && iVar5 == 0)
								{
									func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Var0.f_96);
									Global_2097536.f_2775[iVar9] = 0;
									Global_2097536.f_2704[iVar9]++;
								}
								if (func_542() && (func_512(&Var0, &Var12) || func_512(&Var0, &(Global_2097157.f_361))))
								{
								}
								else
								{
									if (func_512(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_2097536.f_2775[iVar9] = 0;
									}
									MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									if (func_539(uParam0->f_44))
									{
										iVar4 = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(0, Global_2097536.f_2709);
										if (iVar4 == 1)
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_466(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar3] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(0, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar3] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(0, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_2097536.f_2704[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_2097536.f_2704[iVar9]++;
						}
						if (!func_542())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_541(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(iVar7, &Var0);
							if (Global_2097536.f_2704[iVar9] < 11 && Var0.f_96 > 1)
							{
								if (func_542() && iVar5 == iVar7)
								{
									if (!func_512(&(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32), &Var12))
									{
										func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
										Global_2097536.f_2704[iVar9]++;
									}
								}
								if (func_542() && (func_512(&Var0, &Var12) || func_512(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[iVar9] < 11)
								{
									if (func_460(Var0) && !func_512(&Var0, &(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_512(&Var0, &Var12))
										{
											if (Global_2097536.f_2775[iVar9] < 0)
											{
												Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
											}
										}
										MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
										Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32 = { Var0 };
										Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
										Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74 = 1;
										if (func_539(uParam0->f_44))
										{
											iVar4 = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar7, Global_2097536.f_2709);
											if (iVar4 == 1)
											{
												Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 0;
											}
										}
										if (func_466(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
											{
												Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar2] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar7, Global_2097536.f_2710[iVar2]);
											}
											else
											{
												Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar2] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(iVar7, Global_2097536.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_2097536.f_2704[iVar9]++;
									}
								}
							}
							func_541(&Var0);
							iVar7++;
						}
						STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_END();
						func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar8)
						{
							if (Global_2097536.f_2775[iVar9] == -1 && func_542())
							{
								if (Global_2097536.f_2704[iVar9] >= 1)
								{
									func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
								Global_2097536.f_2704[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_2097536.f_2704[iVar9]++;
						}
						STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_END();
						func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					MISC::SET_BIT(&(Global_2097536.f_2832), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_2097536.f_2775[iVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var1.f_0 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_538(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11))
			{
				func_463(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_START(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(iVar2, &Var0);
							bVar10 = false;
							if (Global_2097536[iVar9 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[iVar9 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar10 = true;
							}
							if (Global_2097536.f_2704[iVar9] < 11 || bVar10)
							{
								if (func_542() && (func_512(&Var0, &Var12) || func_512(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_2097536[iVar9 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar9 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_2097536[iVar9 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_539(uParam0->f_44))
									{
										iVar4 = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(0, Global_2097536.f_2709);
										if (iVar4 == 1)
										{
											Global_2097536[iVar9 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar9 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_466(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar9 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar9 /*901*/][0 /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[iVar9 /*901*/][0 /*75*/].f_67[iVar3] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(0, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[iVar9 /*901*/][0 /*75*/].f_60[iVar3] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(0, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (Global_2097536.f_2704[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_2097536.f_2704[iVar9]++;
										}
									}
								}
								else if (Global_2097536.f_2704[iVar9] < 11)
								{
									MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									if (func_539(uParam0->f_44))
									{
										iVar4 = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar2, Global_2097536.f_2709);
										if (iVar4 == 1)
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_466(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar3] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar2, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar3] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(iVar2, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_2097536.f_2704[iVar9]++;
									}
								}
							}
							func_541(&Var0);
							iVar2++;
						}
					}
					STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_END();
					func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_END();
					func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					MISC::SET_BIT(&(Global_2097536.f_2832), iVar9);
					Global_2097536.f_2704[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_2097536.f_2775[iVar9] == -1 && func_542())
				{
					if (Global_2097536.f_2704[iVar9] >= 1)
					{
						func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
					}
					Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
					Global_2097536.f_2704[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_537(iVar9, Global_2097157.f_374);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_537(int iParam0, int iParam1)//Position - 0x1D94F
{
	int iVar0;
	
	if ((func_542() && Global_2097536.f_2704[iParam0] > Global_2097536.f_2775[iParam0]) && Global_2097536.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_2097536.f_2704[iParam0])
			{
				if (iVar0 != Global_2097536.f_2775[iParam0])
				{
					if (Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_542())
		{
		}
		if (Global_2097536.f_2704[iParam0] <= Global_2097536.f_2775[iParam0])
		{
		}
		if (Global_2097536.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_538(var uParam0, var uParam1, var* uParam2, int iParam3, int iParam4)//Position - 0x1DA74
{
	switch (*uParam0)
	{
		case 0:
			if (!func_452() && !func_448())
			{
				func_446(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_RANK(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_539(int iParam0)//Position - 0x1DB2A
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_540(var uParam0, char* sParam1, int iParam2)//Position - 0x1DB88
{
	int iVar0;
	int iVar1;
	
	if (func_466(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_2097157.f_355}, 16);
		sParam1->f_32 = { Global_2097157.f_361 };
		MemCopy(&(sParam1->f_16), {Global_2097157.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
		sParam1->f_32 = { func_465(PLAYER::PLAYER_ID()) };
	}
	sParam1->f_59 = iParam2;
	if (func_539(uParam0->f_44))
	{
		iVar0 = Global_2097157.f_211.f_36[Global_2097536.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097157.f_142.f_2, Global_2097536.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_2097157.f_211.f_36[Global_2097536.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_2097157.f_211.f_3[Global_2097536.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_541(var uParam0)//Position - 0x1DC92
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

int func_542()//Position - 0x1DD40
{
	if (Global_2097532 && Global_2097533)
	{
		return 1;
	}
	return 0;
}

int func_543(var uParam0)//Position - 0x1DD5D
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_19.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_465(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = NETWORK::NETWORK_GET_FRIEND_COUNT();
			Global_2097536.f_2775[1] = -1;
			Global_2097157.f_374 = -1;
			Global_2097536.f_2704[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_542())
				{
					bVar8 = false;
				}
				else
				{
					bVar8 = true;
				}
				if (func_544(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar8, 0, 100))
				{
					func_463(&Var1, &(uParam0->f_44));
					if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_START(&Var1))
					{
						if (func_542())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(iVar6, &Var0);
									if (func_466(uParam0->f_44))
									{
										if (Global_2097157.f_374 < 0)
										{
											if (func_512(&Var0, &(Global_2097157.f_361)))
											{
												Global_2097157.f_374 = Var0.f_96;
											}
										}
									}
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_541(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_542() && iVar4 == 0)
						{
							if (Global_2097536.f_2704[iVar9] < 11)
							{
								func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
								Global_2097536.f_2775[iVar9] = 0;
								Global_2097536.f_2704[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(0, &Var0);
							if (func_542() && (func_512(&Var0, &Var10) || func_512(&Var0, &(Global_2097157.f_361))))
							{
							}
							else if (func_460(Var0) && Global_2097536.f_2704[iVar9] < 11)
							{
								if (func_512(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_2097536.f_2775[1] = 0;
								}
								MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32 = { Var0 };
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59 = 1;
								if (func_539(uParam0->f_44))
								{
									iVar7 = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(0, Global_2097536.f_2709);
									if (iVar7 == 1)
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 1;
									}
									else
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 0;
									}
								}
								if (func_466(uParam0->f_44))
								{
									MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74 = 1;
								iVar2 = 0;
								while (iVar2 < Global_2097536.f_2708)
								{
									if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar2] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(0, Global_2097536.f_2710[iVar2]);
									}
									else
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar2] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(0, Global_2097536.f_2710[iVar2]);
									}
									iVar2++;
								}
								Global_2097536.f_2704[1]++;
							}
							else
							{
								func_541(&Var0);
								STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_END();
								func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_2097536.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_2097536.f_2775[iVar9] == -1 && func_542())
								{
									if (Global_2097536.f_2704[iVar9] >= 1)
									{
										func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
									}
									Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
									Global_2097536.f_2704[iVar9]++;
								}
								return 0;
							}
							func_541(&Var0);
						}
						else
						{
							Global_2097536.f_2704[1] = 0;
							func_541(&Var0);
							STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_END();
							func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_2097536.f_2775[iVar9] == -1 && func_542())
							{
								if (Global_2097536.f_2704[iVar9] >= 1)
								{
									func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
								Global_2097536.f_2704[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_542())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(iVar6, &Var0);
							if (Global_2097536.f_2704[iVar9] < 11 && Var0.f_96 > 1)
							{
								if (func_542() && iVar4 == iVar6)
								{
									if (!func_512(&(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32), &Var10))
									{
										func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
										Global_2097536.f_2704[iVar9]++;
									}
								}
								if (func_542() && (func_512(&Var0, &Var10) || func_512(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[1] < 12)
								{
									if (func_460(Var0) && !func_512(&Var0, &(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_512(&Var0, &Var10))
										{
											if (Global_2097536.f_2775[1] < 0)
											{
												Global_2097536.f_2775[1] = Global_2097536.f_2704[1];
											}
										}
										MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_74 = 1;
										if (func_539(uParam0->f_44))
										{
											iVar7 = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar6, Global_2097536.f_2709);
											if (iVar7 == 1)
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_466(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_67[iVar2] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar6, Global_2097536.f_2710[iVar2]);
											}
											else
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_60[iVar2] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(iVar6, Global_2097536.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_2097536.f_2704[1]++;
									}
								}
							}
							func_541(&Var0);
							iVar6++;
						}
						STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_END();
						func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_2097536.f_2775[iVar9] == -1 && func_542())
						{
							if (Global_2097536.f_2704[iVar9] >= 1)
							{
								func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_540(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
							}
							Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
							Global_2097536.f_2704[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						MISC::SET_BIT(&(Global_2097536.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_2097536.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_537(iVar9, Global_2097157.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_544(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x1E757
{
	switch (*uParam0)
	{
		case 0:
			if (!func_452() && !func_448())
			{
				func_446(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_545(var uParam0)//Position - 0x1E813
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_19.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_465(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_2097536.f_2775[iVar10] = -1;
			Global_2097536.f_2704[iVar10] = 0;
			Global_2097157.f_374 = -1;
			Global_2097533 = 0;
			if (func_546(uParam0->f_44))
			{
				if (!Global_2097533)
				{
					Global_2097533 = 1;
				}
			}
			else if (Global_2097533)
			{
				Global_2097533 = 0;
			}
			if (!Global_2097533)
			{
			}
			if (func_445(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_542(), 0, 0, 0))
			{
				func_463(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_START(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_542())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(iVar8, &Var1);
								if (Global_2097157.f_374 < 0)
								{
									if (func_512(&Var1, &Var0) || func_512(&Var1, &(Global_2097157.f_361)))
									{
										Global_2097157.f_374 = Var1.f_96;
									}
								}
								if (iVar6 < 0)
								{
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_541(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(0, &Var1);
						if (Var1.f_96 <= 1)
						{
							if (Global_2097536.f_2704[iVar10] < 11)
							{
								if (func_542() && iVar6 == 0)
								{
									func_540(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Var1.f_96);
									Global_2097536.f_2775[iVar10] = 0;
									Global_2097536.f_2704[iVar10]++;
								}
								if (func_542() && (func_512(&Var1, &Var0) || func_512(&Var1, &(Global_2097157.f_361))))
								{
								}
								else
								{
									if (func_512(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_2097536.f_2775[iVar10] = 0;
									}
									MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
									Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_32 = { Var1 };
									Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
									if (func_539(uParam0->f_44))
									{
										iVar5 = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(0, Global_2097536.f_2709);
										if (iVar5 == 1)
										{
											Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 0;
										}
									}
									if (func_466(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_74 = 1;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_67[iVar3] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(0, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_60[iVar3] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(0, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_2097536.f_2704[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_2097536.f_2704[iVar10]++;
						}
						if (!func_542())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_541(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(iVar8, &Var1);
							if (Global_2097536.f_2704[iVar10] < 11 && Var1.f_96 > 1)
							{
								if (func_542() && iVar6 == iVar8)
								{
									if (!func_512(&(Global_2097536[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										func_540(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Var1.f_96);
										Global_2097536.f_2775[iVar10] = Global_2097536.f_2704[iVar10];
										Global_2097536.f_2704[iVar10]++;
									}
								}
								if (func_542() && (func_512(&Var1, &Var0) || func_512(&Var1, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[iVar10] < 11)
								{
									if (func_460(Var1) && !func_512(&(Global_2097536[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										if (func_512(&Var1, &Var0))
										{
											if (Global_2097536.f_2775[iVar10] < 0)
											{
												Global_2097536.f_2775[iVar10] = Global_2097536.f_2704[iVar10];
											}
										}
										MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_74 = 1;
										if (func_539(uParam0->f_44))
										{
											iVar5 = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar8, Global_2097536.f_2709);
											if (iVar5 == 1)
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_466(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_67[iVar3] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar8, Global_2097536.f_2710[iVar3]);
											}
											else
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_60[iVar3] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(iVar8, Global_2097536.f_2710[iVar3]);
											}
											iVar3++;
										}
										Global_2097536.f_2704[iVar10]++;
									}
								}
							}
							func_541(&Var1);
							iVar8++;
						}
						STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_END();
						func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar9)
						{
							if (Global_2097536.f_2775[iVar10] == -1 && func_542())
							{
								if (Global_2097536.f_2704[iVar10] >= 1)
								{
									func_540(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Global_2097536[iVar10 /*901*/][(Global_2097536.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_540(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar10] = Global_2097536.f_2704[iVar10];
								Global_2097536.f_2704[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_2097536.f_2704[iVar10]++;
						}
						STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_END();
						func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					MISC::SET_BIT(&(Global_2097536.f_2832), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_2097536.f_2775[iVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_538(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12))
			{
				func_463(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_START(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INFO(iVar3, &Var1);
							if (func_542() && (func_512(&Var1, &Var0) || func_512(&Var1, &(Global_2097157.f_361))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_2097536[iVar10 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[iVar10 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar11 = true;
								}
								if (Global_2097536.f_2704[iVar10] < 11 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_2097536[iVar10 /*901*/][0 /*75*/]), {Var1.f_13}, 16);
										Global_2097536[iVar10 /*901*/][0 /*75*/].f_32 = { Var1 };
										Global_2097536[iVar10 /*901*/][0 /*75*/].f_59 = Var1.f_96;
										if (func_539(uParam0->f_44))
										{
											iVar5 = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(0, Global_2097536.f_2709);
											if (iVar5 == 1)
											{
												Global_2097536[iVar10 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar10 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_466(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar10 /*901*/][0 /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_2097536[iVar10 /*901*/][0 /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar4]))
											{
												Global_2097536[iVar10 /*901*/][iVar3 /*75*/].f_67[iVar4] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar3, Global_2097536.f_2710[iVar4]);
											}
											else
											{
												Global_2097536[iVar10 /*901*/][iVar3 /*75*/].f_60[iVar4] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(iVar3, Global_2097536.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (Global_2097536.f_2704[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_2097536.f_2704[iVar10]++;
											}
										}
										else if (Global_2097536.f_2704[iVar10] == 1 && Global_2097536.f_2775[iVar10] == -1)
										{
											Global_2097536.f_2704[iVar10]++;
										}
									}
									else if (Global_2097536.f_2704[iVar10] < 11)
									{
										MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										if (func_539(uParam0->f_44))
										{
											iVar5 = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar3, Global_2097536.f_2709);
											if (iVar5 == 1)
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_466(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar4]))
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_67[iVar4] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_INT(iVar3, Global_2097536.f_2710[iVar4]);
											}
											else
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_60[iVar4] = STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_FLOAT(iVar3, Global_2097536.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_2097536.f_2704[iVar10]++;
										}
									}
								}
							}
							func_541(&Var1);
							iVar3++;
						}
					}
					STATS::LEADERBOARDS2_READ_BY_HELP_PURPLE_END();
					func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					MISC::SET_BIT(&(Global_2097536.f_2832), iVar10);
					func_381(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2704[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_2097536.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_2097536.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_2097536.f_2775[iVar10] == -1 && func_542())
			{
				if (Global_2097536.f_2704[iVar10] >= 1)
				{
					func_540(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Global_2097536[iVar10 /*901*/][(Global_2097536.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_540(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), 1);
				}
				Global_2097536.f_2775[iVar10] = Global_2097536.f_2704[iVar10];
				Global_2097536.f_2704[iVar10]++;
			}
			break;
		
		case 2:
			func_537(iVar10, Global_2097157.f_374);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_546(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)//Position - 0x1F63F
{
	int iVar0;
	
	if (Global_2097532)
	{
		if (Global_2097157.f_5 != 0)
		{
			if (Global_2097157.f_5 == Param0.f_0)
			{
				if (Global_2097157.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_547(var uParam0)//Position - 0x1F6D7
{
	int iVar0;
	
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2097536.f_2826))
	{
		iVar0 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_2097536.f_2826);
		if (iVar0 < 300000)
		{
			MISC::SET_BIT(&(uParam0->f_42), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_42), 5);
			func_521(Global_2097536.f_2826, -1);
		}
	}
}

void func_548(int iParam0)//Position - 0x1F727
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_549(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1F747
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (BitTest(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (BitTest(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (BitTest(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if ((func_490() || func_527()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_465(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var4))
				{
					NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var4);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bVar3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		MISC::SET_BIT(&iVar5, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_2097536.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (BitTest(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (BitTest(iParam2, 5))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (BitTest(iParam2, 6))
		{
			if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				if (NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
					{
						if ((func_490() || func_527()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_465(PLAYER::PLAYER_ID()) };
							if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var6))
							{
								NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var6);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		MISC::SET_BIT(&iVar7, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
		if (bVar3)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
}

void func_550(int iParam0, char* sParam1, var uParam2, int iParam3)//Position - 0x1FA1F
{
	int iVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam2[iVar0 /*6*/]);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		iVar0++;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_551(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x1FA61
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MULTIPLAYER_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_552(int iParam0, int iParam1)//Position - 0x1FAF1
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_553(int iParam0)//Position - 0x1FB0E
{
	Global_1577896 = iParam0;
}

void func_554(int iParam0)//Position - 0x1FB1C
{
	Global_1649593.f_1163 = iParam0;
}

void func_555(bool bParam0)//Position - 0x1FB2D
{
	if (bParam0)
	{
		func_558();
	}
	func_556(4, -1);
	func_556(6, -1);
	func_556(7, -1);
	func_556(3, -1);
	func_556(1, -1);
	func_556(2, -1);
	func_556(11, -1);
	func_556(13, -1);
	func_556(14, -1);
	func_556(16, -1);
}

void func_556(int iParam0, int iParam1)//Position - 0x1FB7E
{
	MISC::SET_BIT(&(Global_1648034.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1648034.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_557(int iParam0)//Position - 0x1FBB4
{
	if (func_152())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_153(0))
		{
			func_148(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_558()//Position - 0x1FBE7
{
	Global_2815059.f_4599 = 0;
}

void func_559(bool bParam0)//Position - 0x1FBF7
{
	if (bParam0)
	{
		func_273(&(Local_45.f_119), 0, 0, 1, 1);
		func_272(&(Local_45.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_272(&(Local_45.f_119), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_560(&(Local_45.f_119), 1);
	}
	else
	{
		func_273(&(Local_45.f_119), 0, 0, 1, 1);
		func_272(&(Local_45.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_560(&(Local_45.f_119), 1);
	}
}

void func_560(var uParam0, bool bParam1)//Position - 0x1FC6A
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 1024);
	}
	else
	{
		func_165(&(uParam0->f_1), 1024);
	}
}

int func_561(var uParam0)//Position - 0x1FC90
{
	if ((BitTest(uParam0->f_42, 1) && Global_2097536.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_562(var uParam0)//Position - 0x1FCC4
{
	if (Global_112416 != 0 && Global_113386.f_19043.f_12[Global_112416 /*8*/].f_4 == 0)
	{
		func_273(uParam0, 0, 0, 1, 1);
		func_272(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			func_272(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_195 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && iLocal_194)
		{
			func_272(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_195 = 0;
		}
		else
		{
			iLocal_195 = 0;
		}
	}
	else
	{
		func_273(uParam0, 0, 0, 1, 1);
		func_272(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_272(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			func_272(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_195 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && iLocal_194)
		{
			func_272(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_195 = 0;
		}
		else
		{
			iLocal_195 = 0;
		}
	}
	func_560(&(Local_45.f_119), 1);
}

void func_563()//Position - 0x1FDD6
{
	func_592();
	func_440();
	func_591(&(Local_2035.f_358[0 /*189*/].f_24), 0, 0, "PilotDispatch", 0, 1);
	func_591(&uLocal_1727, 0, 0, "PilotDispatch", 0, 1);
	func_580(&Local_2035);
	func_564(&Local_2035, Local_45.f_10);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2035.f_358[0 /*189*/].f_9))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2035.f_358[0 /*189*/].f_9, 4);
	}
}

void func_564(var uParam0, int iParam1)//Position - 0x1FE40
{
	switch (iParam1)
	{
		case 0:
			func_579(&Local_2035);
			break;
		
		case 1:
			func_578(&Local_2035);
			break;
		
		case 2:
			func_577(&Local_2035);
			func_576(&(Local_2035.f_27[2 /*10*/]), 1);
			func_576(&(Local_2035.f_27[3 /*10*/]), 1);
			break;
		
		case 3:
			func_575(&Local_2035);
			break;
		
		case 4:
			func_565(&Local_2035);
			break;
	}
}

void func_565(var uParam0)//Position - 0x1FEB9
{
	func_580(uParam0);
	uParam0->f_12 = 32;
	func_574(&(uParam0->f_27[0 /*10*/]), 947.1314f, 4146.46f, 80.494f, 30f, 2, 0);
	func_574(&(uParam0->f_27[1 /*10*/]), 762.498f, 4589.213f, 105.5935f, 30f, 2, 0);
	func_574(&(uParam0->f_27[2 /*10*/]), 659.2919f, 4806.028f, 175.759f, 30f, 2, 0);
	func_574(&(uParam0->f_27[3 /*10*/]), 621.3849f, 5032.051f, 343.6387f, 30f, 2, 0);
	func_574(&(uParam0->f_27[4 /*10*/]), 503.8404f, 5297.335f, 508.6478f, 30f, 2, 0);
	func_574(&(uParam0->f_27[5 /*10*/]), 555.4404f, 5426.935f, 708.948f, 30f, 2, 0);
	func_574(&(uParam0->f_27[6 /*10*/]), 637.6946f, 5491.08f, 717.522f, 30f, 2, 0);
	func_574(&(uParam0->f_27[7 /*10*/]), 790.3913f, 5491.866f, 566.103f, 30f, 2, 0);
	func_574(&(uParam0->f_27[8 /*10*/]), 910.6804f, 5313.552f, 388.8567f, 30f, 2, 0);
	func_574(&(uParam0->f_27[9 /*10*/]), 1159.749f, 5183.155f, 253.1068f, 30f, 2, 0);
	func_574(&(uParam0->f_27[10 /*10*/]), 1354.13f, 4998.078f, 141.6288f, 30f, 2, 0);
	func_574(&(uParam0->f_27[11 /*10*/]), 1612.532f, 4941.23f, 61.8549f, 30f, 2, 0);
	func_574(&(uParam0->f_27[12 /*10*/]), 2200.396f, 4800.332f, 69.9321f, 30f, 3, 2);
	func_574(&(uParam0->f_27[13 /*10*/]), 2527.632f, 5144.98f, 66.763f, 30f, 3, 2);
	func_574(&(uParam0->f_27[14 /*10*/]), 2527.131f, 5275.334f, 62.3622f, 30f, 2, 0);
	func_574(&(uParam0->f_27[15 /*10*/]), 2413.345f, 5443.203f, 99.4297f, 30f, 2, 0);
	func_574(&(uParam0->f_27[16 /*10*/]), 2236.067f, 5524.246f, 108.3291f, 30f, 2, 0);
	func_574(&(uParam0->f_27[17 /*10*/]), 1944.463f, 5520.007f, 177.2808f, 30f, 2, 0);
	func_574(&(uParam0->f_27[18 /*10*/]), 1712.477f, 5624.937f, 324.9427f, 30f, 2, 0);
	func_574(&(uParam0->f_27[19 /*10*/]), 1601.158f, 5663.75f, 335.8832f, 30f, 2, 0);
	func_574(&(uParam0->f_27[20 /*10*/]), 1410.764f, 5675.836f, 425.9678f, 30f, 2, 0);
	func_574(&(uParam0->f_27[21 /*10*/]), 1225.682f, 5678.654f, 497.3169f, 30f, 2, 0);
	func_574(&(uParam0->f_27[22 /*10*/]), 1094.47f, 5664.07f, 563.0829f, 30f, 2, 0);
	func_574(&(uParam0->f_27[23 /*10*/]), 1001.427f, 5633.827f, 633.2537f, 30f, 2, 0);
	func_574(&(uParam0->f_27[24 /*10*/]), 875.5358f, 5642.667f, 682.5352f, 30f, 2, 0);
	func_574(&(uParam0->f_27[25 /*10*/]), 741.3275f, 5688.046f, 709.5683f, 30f, 2, 0);
	func_574(&(uParam0->f_27[26 /*10*/]), 487.2532f, 5654.821f, 802.0096f, 30f, 3, 1);
	func_574(&(uParam0->f_27[27 /*10*/]), 362.6602f, 5620.538f, 723.2353f, 30f, 2, 0);
	func_574(&(uParam0->f_27[28 /*10*/]), 134.4865f, 5555.637f, 520.3109f, 30f, 2, 0);
	func_574(&(uParam0->f_27[29 /*10*/]), -128.2242f, 5510.46f, 307.4505f, 30f, 2, 0);
	func_574(&(uParam0->f_27[30 /*10*/]), -397.7556f, 5438.69f, 175.4529f, 30f, 2, 0);
	func_574(&(uParam0->f_27[31 /*10*/]), -520.8975f, 5424.283f, 165.285f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_573(&(uParam0->f_358[0 /*189*/]));
	func_572(&(uParam0->f_358[0 /*189*/]), "Player");
	func_568(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_45.f_1);
	func_567(&(uParam0->f_358[0 /*189*/]), 1135.682f, 3700.644f, 80.494f, 22.3451f);
	func_566(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_566(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x20375
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_567(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2038F
{
	uParam0->f_16 = { Param1 };
	uParam0->f_19 = fParam2;
}

void func_568(var uParam0, int iParam1, int iParam2)//Position - 0x203A7
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = iParam2;
	func_569(iParam2, &(Local_45.f_243));
}

void func_569(int iParam0, var uParam1)//Position - 0x203C5
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_571(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_126(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_570(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_131(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_570(int iParam0, var uParam1, var uParam2)//Position - 0x20670
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_571(var uParam0)//Position - 0x20863
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_572(char* sParam0, char* sParam1)//Position - 0x20914
{
	StringCopy(sParam0, sParam1, 32);
}

void func_573(var uParam0)//Position - 0x20922
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_574(var uParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4)//Position - 0x20944
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam2;
	uParam0->f_7 = iParam3;
	uParam0->f_8 = iParam4;
}

void func_575(var uParam0)//Position - 0x20966
{
	func_580(uParam0);
	uParam0->f_12 = 28;
	func_574(&(uParam0->f_27[0 /*10*/]), -1737.725f, -2720.967f, 38f, 30f, 2, 0);
	func_574(&(uParam0->f_27[1 /*10*/]), -1384.515f, -2880.773f, 38f, 30f, 2, 0);
	func_574(&(uParam0->f_27[2 /*10*/]), -1156.435f, -2957.284f, 40f, 30f, 2, 0);
	func_574(&(uParam0->f_27[3 /*10*/]), -795.3043f, -2987.754f, 60f, 30f, 2, 0);
	func_574(&(uParam0->f_27[4 /*10*/]), -429.0231f, -2969.528f, 30f, 30f, 3, 1);
	func_574(&(uParam0->f_27[5 /*10*/]), -15.5168f, -2912.484f, 60f, 30f, 2, 0);
	func_574(&(uParam0->f_27[6 /*10*/]), 656.9059f, -2798.444f, 80f, 30f, 3, 2);
	func_574(&(uParam0->f_27[7 /*10*/]), 990.7529f, -2452.092f, 70f, 30f, 2, 0);
	func_574(&(uParam0->f_27[8 /*10*/]), 1019.531f, -2182.119f, 60f, 30f, 2, 0);
	func_574(&(uParam0->f_27[9 /*10*/]), 1019.899f, -1886.15f, 60f, 30f, 2, 0);
	func_574(&(uParam0->f_27[10 /*10*/]), 944.9045f, -1488.589f, 107.7f, 30f, 2, 0);
	func_574(&(uParam0->f_27[11 /*10*/]), 698.908f, -1013.024f, 100.5f, 30f, 3, 2);
	func_574(&(uParam0->f_27[12 /*10*/]), 388.7276f, -822.8241f, 90f, 30f, 2, 0);
	func_574(&(uParam0->f_27[13 /*10*/]), 20.7016f, -653.9637f, 101.8f, 30f, 3, 2);
	func_574(&(uParam0->f_27[14 /*10*/]), -135.3874f, -670.6069f, 112f, 30f, 3, 3);
	func_574(&(uParam0->f_27[15 /*10*/]), -360.3365f, -655.137f, 90f, 30f, 2, 0);
	func_574(&(uParam0->f_27[16 /*10*/]), -700.3533f, -657.1476f, 70f, 30f, 2, 0);
	func_574(&(uParam0->f_27[17 /*10*/]), -951.5859f, -654.0262f, 68f, 30f, 3, 2);
	func_574(&(uParam0->f_27[18 /*10*/]), -1125.587f, -769.7247f, 67f, 30f, 2, 0);
	func_574(&(uParam0->f_27[19 /*10*/]), -1281.291f, -851.0229f, 82f, 30f, 3, 1);
	func_574(&(uParam0->f_27[20 /*10*/]), -1580.865f, -1009.944f, 40f, 30f, 2, 0);
	func_574(&(uParam0->f_27[21 /*10*/]), -1877.52f, -1152.927f, 30f, 30f, 2, 0);
	func_574(&(uParam0->f_27[22 /*10*/]), -2101.111f, -1330.267f, 20f, 30f, 2, 0);
	func_574(&(uParam0->f_27[23 /*10*/]), -2230.15f, -1555.89f, 10f, 30f, 3, 2);
	func_574(&(uParam0->f_27[24 /*10*/]), -2214.946f, -1978.262f, 10f, 30f, 2, 0);
	func_574(&(uParam0->f_27[25 /*10*/]), -2055.091f, -2359.626f, 20f, 30f, 2, 0);
	func_574(&(uParam0->f_27[26 /*10*/]), -1893.392f, -2559.46f, 22f, 30f, 2, 0);
	func_574(&(uParam0->f_27[27 /*10*/]), -1737.725f, -2720.967f, 83.7f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_573(&(uParam0->f_358[0 /*189*/]));
	func_572(&(uParam0->f_358[0 /*189*/]), "Player");
	func_568(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_45.f_1);
	func_567(&(uParam0->f_358[0 /*189*/]), -2102.16f, -2556.082f, 38f, 245.6561f);
	func_566(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_576(var uParam0, int iParam1)//Position - 0x20D96
{
	func_344(&(uParam0->f_9), iParam1);
}

void func_577(var uParam0)//Position - 0x20DA8
{
	func_580(uParam0);
	uParam0->f_12 = 21;
	func_574(&(uParam0->f_27[0 /*10*/]), 1167.2f, -2557.195f, 90f, 30f, 2, 0);
	func_574(&(uParam0->f_27[1 /*10*/]), 869.9235f, -2613.705f, 57.8325f, 30f, 2, 0);
	func_574(&(uParam0->f_27[2 /*10*/]), 652.3818f, -2651.991f, 54.935f, 30f, 2, 0);
	func_574(&(uParam0->f_27[3 /*10*/]), 249.3849f, -2579.821f, 60.1264f, 30f, 3, 2);
	func_574(&(uParam0->f_27[4 /*10*/]), -31.7179f, -2590.793f, 19.9452f, 30f, 2, 0);
	func_574(&(uParam0->f_27[5 /*10*/]), -317.409f, -2582.66f, 48.7654f, 30f, 3, 3);
	func_574(&(uParam0->f_27[6 /*10*/]), -395.6915f, -2334.057f, 39.3612f, 30f, 2, 0);
	func_574(&(uParam0->f_27[7 /*10*/]), -300.2367f, -2118.431f, 53.3728f, 30f, 2, 0);
	func_574(&(uParam0->f_27[8 /*10*/]), -157.1812f, -1967.885f, 56.4093f, 30f, 3, 2);
	func_574(&(uParam0->f_27[9 /*10*/]), -199.4688f, -1803.328f, 13.6363f, 30f, 2, 0);
	func_574(&(uParam0->f_27[10 /*10*/]), -383.5264f, -1738.067f, 60.8194f, 30f, 2, 0);
	func_574(&(uParam0->f_27[11 /*10*/]), -649.8698f, -1710.374f, 61.3036f, 30f, 2, 0);
	func_574(&(uParam0->f_27[12 /*10*/]), -861.6902f, -1857.194f, 77.0621f, 30f, 3, 2);
	func_574(&(uParam0->f_27[13 /*10*/]), -716.8034f, -2111.744f, 65.9868f, 30f, 2, 0);
	func_574(&(uParam0->f_27[14 /*10*/]), -548.7557f, -2230.616f, 97.2887f, 30f, 2, 0);
	func_574(&(uParam0->f_27[15 /*10*/]), -270.7834f, -2425.144f, 96.7744f, 30f, 3, 1);
	func_574(&(uParam0->f_27[16 /*10*/]), 5.435f, -2665.31f, 46.2903f, 30f, 2, 0);
	func_574(&(uParam0->f_27[17 /*10*/]), 299.0821f, -2834.288f, 27.0191f, 30f, 2, 0);
	func_574(&(uParam0->f_27[18 /*10*/]), 514.295f, -2880.863f, 42.0956f, 30f, 3, 2);
	func_574(&(uParam0->f_27[19 /*10*/]), 842.6024f, -2599.042f, 25.978f, 30f, 2, 0);
	func_574(&(uParam0->f_27[20 /*10*/]), 991.974f, -2468.436f, 87.493f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_573(&(uParam0->f_358[0 /*189*/]));
	func_572(&(uParam0->f_358[0 /*189*/]), "Player");
	func_568(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_45.f_1);
	func_567(&(uParam0->f_358[0 /*189*/]), 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	func_566(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_578(var uParam0)//Position - 0x210EA
{
	func_580(uParam0);
	uParam0->f_12 = 19;
	func_574(&(uParam0->f_27[0 /*10*/]), -2819.07f, -81.2779f, 76.1411f, 30f, 2, 0);
	func_574(&(uParam0->f_27[1 /*10*/]), -2737.77f, 342.665f, 175.645f, 30f, 2, 0);
	func_574(&(uParam0->f_27[2 /*10*/]), -2631.929f, 499.7495f, 210.0935f, 30f, 2, 0);
	func_574(&(uParam0->f_27[3 /*10*/]), -2438.01f, 692.3843f, 285.745f, 30f, 3, 3);
	func_574(&(uParam0->f_27[4 /*10*/]), -2039.406f, 708.7898f, 170.6556f, 30f, 2, 0);
	func_574(&(uParam0->f_27[5 /*10*/]), -1633.076f, 751.8171f, 220.188f, 30f, 2, 0);
	func_574(&(uParam0->f_27[6 /*10*/]), -1187.955f, 874.4288f, 246.4972f, 30f, 3, 1);
	func_574(&(uParam0->f_27[7 /*10*/]), -893.826f, 994.239f, 239.512f, 30f, 2, 0);
	func_574(&(uParam0->f_27[8 /*10*/]), -565.788f, 1098.308f, 349.0507f, 30f, 2, 0);
	func_574(&(uParam0->f_27[9 /*10*/]), -326.8564f, 1129.9f, 336.1296f, 30f, 2, 0);
	func_574(&(uParam0->f_27[10 /*10*/]), -155.9212f, 1149.858f, 312.2522f, 30f, 2, 0);
	func_574(&(uParam0->f_27[11 /*10*/]), 145.603f, 1162.599f, 277.7465f, 30f, 3, 1);
	func_574(&(uParam0->f_27[12 /*10*/]), 355.6647f, 1234.464f, 287.6501f, 30f, 2, 0);
	func_574(&(uParam0->f_27[13 /*10*/]), 640.85f, 1191.643f, 329.783f, 30f, 2, 0);
	func_574(&(uParam0->f_27[14 /*10*/]), 783.3697f, 1157.395f, 329.0691f, 30f, 3, 3);
	func_574(&(uParam0->f_27[15 /*10*/]), 1016.378f, 1000.386f, 252.4894f, 30f, 2, 0);
	func_574(&(uParam0->f_27[16 /*10*/]), 1243.37f, 945.084f, 150.5214f, 30f, 2, 0);
	func_574(&(uParam0->f_27[17 /*10*/]), 1494.048f, 863.8886f, 110.4097f, 30f, 2, 0);
	func_574(&(uParam0->f_27[18 /*10*/]), 1751.842f, 687.7875f, 296.787f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_573(&(uParam0->f_358[0 /*189*/]));
	func_572(&(uParam0->f_358[0 /*189*/]), "Player");
	func_568(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_45.f_1);
	func_567(&(uParam0->f_358[0 /*189*/]), -2818.17f, -500.178f, 76.1411f, 0f);
	func_566(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_579(var uParam0)//Position - 0x213E4
{
	func_580(uParam0);
	uParam0->f_12 = 18;
	func_574(&(uParam0->f_27[0 /*10*/]), 1025.724f, 3073.133f, 70f, 30f, 2, 0);
	func_574(&(uParam0->f_27[1 /*10*/]), 847.4132f, 3025.239f, 80f, 30f, 2, 0);
	func_574(&(uParam0->f_27[2 /*10*/]), 624.897f, 2968.416f, 80f, 30f, 3, 1);
	func_574(&(uParam0->f_27[3 /*10*/]), 398.5529f, 2921.654f, 75f, 30f, 2, 0);
	func_574(&(uParam0->f_27[4 /*10*/]), 68.1f, 2896.4f, 80f, 30f, 2, 0);
	func_574(&(uParam0->f_27[5 /*10*/]), -290.7f, 2895.4f, 80f, 30f, 2, 0);
	func_574(&(uParam0->f_27[6 /*10*/]), -1033.31f, 2832.959f, 37.5f, 30f, 3, 2);
	func_574(&(uParam0->f_27[7 /*10*/]), -1195.153f, 2729.109f, 18f, 30f, 2, 0);
	func_574(&(uParam0->f_27[8 /*10*/]), -1414.6f, 2636.365f, 8.25f, 30f, 2, 0);
	func_574(&(uParam0->f_27[9 /*10*/]), -1684.856f, 2630.035f, 10f, 30f, 2, 0);
	func_574(&(uParam0->f_27[10 /*10*/]), -2024.536f, 2677.336f, 30f, 30f, 3, 1);
	func_574(&(uParam0->f_27[11 /*10*/]), -2659.106f, 2670.574f, 5.4745f, 30f, 2, 0);
	func_574(&(uParam0->f_27[12 /*10*/]), -2880.136f, 2732.084f, 21.0365f, 30f, 2, 0);
	func_574(&(uParam0->f_27[13 /*10*/]), -3200.826f, 2826.548f, 40f, 30f, 3, 2);
	func_574(&(uParam0->f_27[14 /*10*/]), -3363.374f, 2580.812f, 50f, 30f, 2, 0);
	func_574(&(uParam0->f_27[15 /*10*/]), -3242.432f, 2370.19f, 40f, 30f, 2, 0);
	func_574(&(uParam0->f_27[16 /*10*/]), -2879.09f, 2382.111f, 20f, 30f, 2, 0);
	func_574(&(uParam0->f_27[17 /*10*/]), -2650.532f, 2450.207f, 66.6f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_573(&(uParam0->f_358[0 /*189*/]));
	func_572(&(uParam0->f_358[0 /*189*/]), "Player");
	func_568(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_45.f_1);
	func_567(&(uParam0->f_358[0 /*189*/]), Local_1940, 154.8464f);
	func_566(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_580(var uParam0)//Position - 0x216B6
{
	float fVar0;
	
	func_4(&(uParam0->f_3));
	if (Local_45.f_10 != -1)
	{
		fVar0 = func_35(Local_45.f_10);
		if (fVar0 <= 0f || fVar0 > Local_45.f_12[Local_45.f_10])
		{
			fVar0 = Local_45.f_12[Local_45.f_10];
		}
		uParam0->f_9 = fVar0;
		uParam0->f_10 = (uParam0->f_9 / 2f);
	}
	func_588(uParam0);
	uParam0->f_12 = 0;
	func_581(uParam0);
	uParam0->f_13 = 0;
}

void func_581(var uParam0)//Position - 0x21724
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_582(uParam0, iVar0);
		iVar0++;
	}
}

void func_582(var uParam0, int iParam1)//Position - 0x21749
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_584(&(uParam0->f_358[iParam1 /*189*/]));
	func_583(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_583(char* sParam0)//Position - 0x2177F
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_10 = 0;
	sParam0->f_11 = -1;
	sParam0->f_12 = 0;
	sParam0->f_13 = 0f;
	sParam0->f_14 = 0f;
	sParam0->f_15 = 0f;
	sParam0->f_23 = 13;
	sParam0->f_16 = { Local_45.f_3 };
	sParam0->f_19 = Local_45.f_6;
	sParam0->f_20 = Local_45.f_7;
	sParam0->f_21 = Local_45.f_8;
	sParam0->f_22 = Local_45.f_9;
}

void func_584(var uParam0)//Position - 0x217E9
{
	func_587(uParam0);
	func_586(uParam0);
	func_585(uParam0);
}

void func_585(var uParam0)//Position - 0x21803
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_45.f_1)
		{
			if (!(ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false) || ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false)))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
				}
			}
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
		}
	}
}

void func_586(var uParam0)//Position - 0x2185D
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
		{
			PED::DELETE_PED(&(uParam0->f_8));
		}
	}
}

void func_587(var uParam0)//Position - 0x21883
{
	func_83(&(uParam0->f_10));
}

void func_588(var uParam0)//Position - 0x21893
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_589(uParam0, iVar0);
		iVar0++;
	}
}

void func_589(var uParam0, int iParam1)//Position - 0x218B8
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_79(&(uParam0->f_27[iParam1 /*10*/]));
	func_590(&(uParam0->f_27[iParam1 /*10*/]));
}

void func_590(var uParam0)//Position - 0x218F9
{
	*uParam0 = { Local_45.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_591(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x21922
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

void func_592()//Position - 0x219BD
{
	struct<68> Var0;
	
	Global_2097157 = 0;
	Global_2097157.f_1 = 0;
	Global_2097157.f_2 = 0;
	Global_2097157.f_3 = 0;
	Global_2097157.f_4 = 0;
	func_593(&(Global_2097157.f_73));
	func_593(&(Global_2097157.f_142));
	func_593(&(Global_2097157.f_211));
	func_593(&(Global_2097157.f_280));
	StringCopy(&(Global_2097157.f_349), "", 24);
	StringCopy(&(Global_2097157.f_355), "", 24);
	func_529(&(Global_2097157.f_361));
	Global_2097157.f_374 = -1;
	Global_2097532 = 0;
	Global_2097533 = 0;
	Var0.f_2.f_1 = 4;
	Global_2097157.f_5 = { Var0 };
}

void func_593(var uParam0)//Position - 0x21A61
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_594(bool bParam0)//Position - 0x21A9C
{
	if (bParam0)
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		MISC::PAUSE_DEATH_ARREST_RESTART(true);
		MISC::SET_FADE_OUT_AFTER_DEATH(false);
		func_183(1);
		Global_95699 = 1;
	}
	else
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
		MISC::PAUSE_DEATH_ARREST_RESTART(false);
		MISC::SET_FADE_OUT_AFTER_DEATH(true);
		func_183(0);
		Global_95699 = 0;
	}
}

void func_595(var uParam0)//Position - 0x21ADE
{
	*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", false, -1);
}

int func_596(int iParam0)//Position - 0x21AFC
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	return 0;
}

void func_597()//Position - 0x21B20
{
	int iVar0;
	
	if (!iLocal_2029)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
					{
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							AUDIO::TRIGGER_MUSIC_EVENT("MGSP_START");
							iLocal_2029 = 1;
						}
					}
				}
			}
		}
	}
}

int func_598(int iParam0, int iParam1)//Position - 0x21B87
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_599(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x21B9D
{
	*iParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 24, 31);
	*iParam2 = MISC::GET_BITS_IN_RANGE(iParam0, 16, 23);
	*iParam3 = MISC::GET_BITS_IN_RANGE(iParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 7);
}

int func_600(int iParam0)//Position - 0x21BD4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return func_601(iVar0, iVar1, iVar2, iVar3);
}

var func_601(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x21BF6
{
	var uVar0;
	
	MISC::SET_BITS_IN_RANGE(&uVar0, 24, 31, iParam0);
	MISC::SET_BITS_IN_RANGE(&uVar0, 16, 23, iParam1);
	MISC::SET_BITS_IN_RANGE(&uVar0, 8, 15, iParam2);
	MISC::SET_BITS_IN_RANGE(&uVar0, 0, 7, iParam3);
	return uVar0;
}

int func_602()//Position - 0x21C2B
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	func_612(23, 1);
	func_611(10);
	switch (Local_1950.f_5)
	{
		case 0:
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 10f);
			func_610();
			func_609(2, 0);
			func_609(1, 0);
			func_609(3, 0);
			func_609(4, 0);
			func_609(5, 0);
			func_609(6, 0);
			func_609(7, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(Local_2041, 600f, false, false, false, false, false, false, 0);
			func_603(&Local_2035, Local_45.f_10);
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				Local_1950.f_5 = 2;
			}
			else
			{
				Local_1950.f_5 = 1;
			}
			break;
		
		case 1:
			if (func_368(1000))
			{
				Local_1950.f_5 = 2;
			}
			break;
		
		case 2:
			HUD::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", false);
			while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
			{
				SYSTEM::WAIT(0);
			}
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AWARDS", false, -1);
			Local_1950.f_5 = 3;
			break;
		
		case 3:
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
			{
				Local_1950.f_5 = 4;
			}
			break;
		
		case 4:
			Local_1950.f_5 = 5;
			func_11(&(Local_1950.f_2));
			break;
		
		case 5:
			if (func_2(&(Local_1950.f_2), 0.5f))
			{
				Local_1950.f_5 = 6;
			}
			break;
		
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_1950.f_5 = 9;
			}
			else
			{
				Local_1950.f_5 = 7;
				func_11(&(Local_1950.f_2));
			}
			break;
		
		case 7:
			if (func_2(&(Local_1950.f_2), 0.5f))
			{
				Local_1950.f_5 = 8;
			}
			break;
		
		case 8:
			if (func_596(5000))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				Local_1950.f_5 = 9;
			}
			break;
		
		case 9:
			func_4(&(Local_1950.f_2));
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_603(var uParam0, int iParam1)//Position - 0x21E54
{
	Local_45.f_0 = 0;
	Local_45.f_1 = 0;
	Local_45.f_2 = 2;
	Local_45.f_3 = { Local_1940 };
	Local_45.f_6 = 154.8464f;
	Local_45.f_7 = 4;
	Local_45.f_8 = joaat("a_m_y_genstreet_01");
	Local_45.f_9 = joaat("stunt");
	StringCopy(&(Local_45.f_24[0 /*8*/]), "AIRPORT", 32);
	Local_45.f_12[0] = 165f;
	StringCopy(&(Local_45.f_24[1 /*8*/]), "BRIDGEBINGE", 32);
	Local_45.f_12[1] = 80f;
	StringCopy(&(Local_45.f_24[2 /*8*/]), "VINEWOOD", 32);
	Local_45.f_12[2] = 165f;
	StringCopy(&(Local_45.f_24[3 /*8*/]), "BRIDGEWORK", 32);
	Local_45.f_12[3] = 165f;
	StringCopy(&(Local_45.f_24[4 /*8*/]), "ALTITUDE", 32);
	Local_45.f_12[4] = 165f;
	switch (iParam1)
	{
		case 0:
			func_608(&Local_2035);
			break;
		
		case 1:
			func_607(&Local_2035);
			break;
		
		case 2:
			func_606(&Local_2035);
			break;
		
		case 3:
			func_605(&Local_2035);
			break;
		
		case 4:
			func_604(&Local_2035);
			break;
	}
}

void func_604(var uParam0)//Position - 0x21F68
{
}

void func_605(var uParam0)//Position - 0x21F70
{
}

void func_606(var uParam0)//Position - 0x21F78
{
}

void func_607(var uParam0)//Position - 0x21F80
{
}

void func_608(var uParam0)//Position - 0x21F88
{
}

void func_609(int iParam0, int iParam1)//Position - 0x21F90
{
	MISC::SET_BIT(&Global_32118, iParam0);
	StringCopy(&(Global_32119[iParam0 /*6*/]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_32174[iParam0] = iParam1;
}

void func_610()//Position - 0x21FB7
{
	Global_23011.f_5 = 1;
}

void func_611(int iParam0)//Position - 0x21FC5
{
	func_321();
	Global_78574 = iParam0;
	Global_78573 = 0;
	Global_78576 = 3;
}

void func_612(int iParam0, bool bParam1)//Position - 0x21FE1
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

void func_613()//Position - 0x22003
{
}

void func_614()//Position - 0x2200B
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_374();
	func_440();
	func_592();
	func_612(23, 0);
	func_594(0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	STREAMING::CLEAR_FOCUS();
	func_321();
	func_248(0);
	func_266(0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	AUDIO::CANCEL_MUSIC_EVENT("MGSP_START");
	AUDIO::CANCEL_MUSIC_EVENT("MGSP_FAIL");
	AUDIO::CANCEL_MUSIC_EVENT("MGTR_COMPLETE");
	AUDIO::TRIGGER_MUSIC_EVENT("MGSP_END");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_622(2, 0);
	func_622(1, 0);
	func_622(3, 0);
	func_622(4, 0);
	func_622(5, 0);
	func_622(6, 0);
	func_622(7, 0);
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_620(&(Local_45.f_118));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("PilotSchool");
	func_618(&Local_2035, 1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(103, "SPRTaxi");
	VEHICLE::REMOVE_VEHICLE_RECORDING(104, "SPRTaxi");
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	func_617();
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	func_263();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	func_615();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_615()//Position - 0x22117
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
					func_616(Global_97374[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_616(int iParam0, bool bParam1)//Position - 0x2219E
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

void func_617()//Position - 0x221DC
{
	Global_23011.f_5 = 0;
}

void func_618(var uParam0, bool bParam1)//Position - 0x221EA
{
	if (bParam1)
	{
		func_580(uParam0);
	}
	else
	{
		func_619(uParam0);
	}
	func_147(0);
	func_27(&(uParam0->f_17));
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	if (iLocal_2028)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2028 = 0;
	}
}

void func_619(var uParam0)//Position - 0x22232
{
}

void func_620(var uParam0)//Position - 0x2223A
{
	func_621(*uParam0);
}

void func_621(var uParam0)//Position - 0x22249
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}

void func_622(bool bParam0, bool bParam1)//Position - 0x22257
{
	if (BitTest(Global_32118, bParam0))
	{
		if (!bParam1)
		{
			MISC::CLEAR_BIT(&Global_32118, bParam0);
			StringCopy(&(Global_32119[bParam0 /*6*/]), "NULL", 24);
			Global_32174[bParam0] = bParam1;
		}
	}
}

