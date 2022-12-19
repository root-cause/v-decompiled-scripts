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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<8> Local_60 = { 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_61 = 0;
	var uLocal_62 = 1000;
	var uLocal_63 = 1000;
	var uLocal_64 = 0;
	struct<2> Local_65[3];
	struct<2> Local_66[3];
	int iLocal_67[2] = { 0, 0 };
	struct<14> Local_68[9];
	var uLocal_69 = 16;
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
	struct<6> Local_234 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_235 = 0;
	var uLocal_236 = 1092616192;
	var uLocal_237 = 1101004800;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 3;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255[3] = { 0, 0, 0 };
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	float fLocal_261 = 0f;
	float fLocal_262 = 0f;
	float fLocal_263 = 0f;
	float fLocal_264 = 0f;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	bool bLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	bool bLocal_279 = 0;
	bool bLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	float fLocal_284 = 0f;
	float fLocal_285 = 0f;
	float fLocal_286 = 0f;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	bool bLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	char cLocal_296[64] = "";
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	char* sLocal_305 = NULL;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	var uLocal_308 = 30;
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
	var uLocal_459 = 10;
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
	var uLocal_510 = 10;
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
	var uLocal_581 = 20;
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
	var uLocal_682 = 20;
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
	var uLocal_783 = 30;
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
	var uLocal_964 = 5;
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
	var uLocal_995 = 7;
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
	var uLocal_1045 = 5;
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
	var uLocal_1071 = 3;
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
	var uLocal_1087 = 22;
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
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
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
	var uLocal_1217 = 10;
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
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 5;
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
	var uLocal_1294 = 5;
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
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	bool bLocal_1328 = 0;
	int iLocal_1329 = 0;
	float fLocal_1330[3] = { 0f, 0f, 0f };
	bool bLocal_1331 = 0;
	int iLocal_1332 = 0;
	int iLocal_1333 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
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
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_49 = { 1358.1968f, 3618.2341f, 33.89066f };
	Local_50 = { 0f, 5f, -0.5f };
	Local_51 = { 4f, 3f, -0.5f };
	Local_52 = { 4f, -3f, -0.5f };
	Local_53 = { 0f, -5f, -0.5f };
	Local_54 = { -4f, -3f, -0.5f };
	Local_55 = { -4f, 3f, -0.5f };
	Local_56 = { 0f, 2f, -0.5f };
	Local_57 = { 4f, 0f, -0.5f };
	Local_58 = { 0f, -2.2f, -0.5f };
	Local_59 = { -4f, 0f, -0.5f };
	iLocal_274 = joaat("WEAPON_ASSAULTRIFLE");
	Local_283 = { 0f, 0f, 0f };
	iLocal_287 = 30000;
	bLocal_291 = true;
	StringCopy(&cLocal_296, "Rural_prep_trigger1", 64);
	sLocal_305 = "rural_prep_park";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_349();
		func_345();
	}
	MISC::SET_MISSION_FLAG(true);
	func_271();
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePaletoScorePrep", 0);
		func_270(&uLocal_308);
		if (((((iLocal_1324 == 0 && ENTITY::DOES_ENTITY_EXIST(Local_65[0 /*2*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_65[0 /*2*/], false)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], true)) < 5625f)
		{
			bVar0 = false;
			if ((!Local_60.f_7 && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iVar1 = 0;
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
				if (iVar1 != joaat("WEAPON_UNARMED"))
				{
					iVar2 = 0;
					WEAPON::GET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar1, &iVar2);
					if (iVar2 < WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar1, true))
					{
						bVar0 = true;
					}
				}
			}
			if (!bVar0)
			{
				func_243(&Local_60, Local_65[0 /*2*/], 0, 0, 1, 1, 1);
			}
		}
		else
		{
			func_241(&Local_60, 0, 0);
		}
		func_240();
		func_207();
		if (!bLocal_1328)
		{
			func_153();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x27D
{
	switch (iLocal_1324)
	{
		case 0:
			func_151();
			break;
		
		case 1:
			func_117();
			break;
		
		case 2:
			func_8();
			break;
		
		case 3:
			func_2();
			break;
	}
}

void func_2()//Position - 0x2C1
{
	switch (iLocal_1325)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_1325++;
			break;
		
		case 1:
			func_3();
			break;
	}
}

void func_3()//Position - 0x302
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_65[0 /*2*/], false))
	{
		DECORATOR::DECOR_SET_BOOL(Local_65[0 /*2*/], "IgnoredByQuickSave", true);
	}
	func_4(0, 0);
	func_345();
}

void func_4(bool bParam0, int iParam1)//Position - 0x32F
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63364)
	{
		Global_63364 = iParam1;
	}
	if (bParam0)
	{
		if ((func_7(0) && Global_78805.f_1 == 1) && func_6(Global_78805))
		{
		}
		else
		{
			Global_63362 = 1;
		}
	}
	if (Global_113648.f_9087 || func_7(0))
	{
		iVar0 = func_5();
		iVar1 = Global_91433[iVar0 /*5*/];
		uVar2 = Global_78828.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113648.f_9087)
			{
			}
			return;
		}
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_78807, 1);
		Global_78823 = uVar2;
		Global_78824 = MISC::GET_GAME_TIMER();
	}
}

int func_5()//Position - 0x3FF
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_6(int iParam0)//Position - 0x431
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_7(bool bParam0)//Position - 0x46F
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_8()//Position - 0x497
{
	int iVar0;
	
	if (!iLocal_265)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_254) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_254, false)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_254, true))
		{
			func_90(iLocal_254, 0, 145);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_254);
			iLocal_265 = 1;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(-94.3112f, 3003.0156f, 2711.2727f, 4857.7627f);
	switch (iLocal_1325)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_89(724, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("RHP1_TRUCK");
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
			iLocal_1325++;
			break;
		
		case 1:
			if (func_46(&Local_234, Local_49, 0.1f, 0.1f, 2f, 1, Local_65[0 /*2*/], "RHP_RTN", "", "RHP_BK", 1, 0, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_234.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65[0 /*2*/], 1359.4762f, 3614.326f, 36.87141f, 1356.748f, 3621.6047f, 33.72731f, 5f, false, true, 0)))
			{
				func_44(Local_65[0 /*2*/], 10.5f, -1, 1056964608, 0, 1, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_65[0 /*2*/], false);
				func_39(&Local_234, 1, 0);
				func_38(1, 724);
				bLocal_275 = false;
				iLocal_276 = 0;
				iLocal_1325++;
			}
			break;
		
		case 2:
			bLocal_280 = true;
			iVar0 = 0;
			while (iVar0 <= (9 - 1))
			{
				if (func_37(Local_68[iVar0 /*14*/]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_68[iVar0 /*14*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 400f)
					{
						if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
						{
							TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						bLocal_280 = false;
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_68[iVar0 /*14*/]));
					}
				}
				iVar0++;
			}
			if (bLocal_280)
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				iLocal_1325++;
			}
			else if (!bLocal_275)
			{
				HUD::CLEAR_PRINTS();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
				func_36("RHP_KILL", 7500, 1);
				bLocal_275 = true;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false))
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_PRINTS();
				}
				if (func_35(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_34(&uLocal_69, 0, PLAYER::PLAYER_PED_ID(), "Trevor", 0, 1);
					if (bLocal_275)
					{
						if (func_12(&uLocal_69, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
						{
							iLocal_1325 = 4;
						}
					}
					else if (func_12(&uLocal_69, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
					{
						iLocal_1325 = 4;
					}
				}
				else if (func_35(PLAYER::PLAYER_PED_ID()) == 0)
				{
					func_34(&uLocal_69, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (bLocal_275)
					{
						if (func_12(&uLocal_69, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
						{
							iLocal_1325 = 4;
						}
					}
					else if (func_12(&uLocal_69, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
					{
						iLocal_1325 = 4;
					}
				}
				if (iLocal_1325 == 4)
				{
					SYSTEM::SETTIMERA(0);
				}
			}
			else if (!iLocal_276 && func_10())
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 7f, 4);
				AUDIO::TRIGGER_MUSIC_EVENT("RHP1_END");
				func_36("RHP_EXIT", 7500, 1);
				iLocal_276 = 1;
			}
			break;
		
		case 4:
			if (!func_9() || SYSTEM::TIMERA() > 6000)
			{
				func_3();
			}
			break;
	}
}

int func_9()//Position - 0x7E1
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0x803
{
	if (HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_9() && !func_11())
		{
			return 0;
		}
	}
	return 1;
}

int func_11()//Position - 0x833
{
	if (Global_22736 == 1)
	{
		return 1;
	}
	return 0;
}

bool func_12(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x84A
{
	func_33(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21732 = 0;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 1;
	Global_22718 = 0;
	Global_22722 = 0;
	StringCopy(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_13(sParam2, iParam4, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)//Position - 0x89E
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_32();
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
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_30();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			MISC::CLEAR_BIT(&Global_8253, 20);
			MISC::CLEAR_BIT(&Global_8254, 17);
			MISC::CLEAR_BIT(&Global_8255, 0);
			if (bParam2)
			{
				func_23();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_22())
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
				if (!Global_78558)
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
			if (func_21())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
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
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_20();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_19();
		func_14();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_32();
	}
	return 0;
}

void func_14()//Position - 0xB6C
{
	if (!func_15())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_15()//Position - 0xBA3
{
	if (!Global_262145.f_28878 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_18())
	{
		return 0;
	}
	if (func_16(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_16(int iParam0)//Position - 0xC06
{
	return func_17(iParam0, 20);
}

var func_17(int iParam0, int iParam1)//Position - 0xC16
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_18()//Position - 0xC2E
{
	return -1;
}

void func_19()//Position - 0xC37
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21725 = 1;
}

void func_20()//Position - 0xC68
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	MISC::CLEAR_BIT(&Global_8254, 16);
}

int func_21()//Position - 0xCFD
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_22()//Position - 0xD24
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
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

void func_23()//Position - 0xDBD
{
	if (func_29(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_24();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

int func_24()//Position - 0xE5F
{
	func_25();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_25()//Position - 0xE78
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_27(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_35(PLAYER::PLAYER_PED_ID());
			if (func_26(iVar0) && (!func_29(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_26(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

bool func_26(int iParam0)//Position - 0xF75
{
	return iParam0 < 3;
}

int func_27(int iParam0)//Position - 0xF81
{
	if (func_26(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_28(int iParam0)//Position - 0xFA6
{
	return Global_2028[iParam0 /*29*/];
}

bool func_29(int iParam0)//Position - 0xFB5
{
	return Global_43257 == iParam0;
}

void func_30()//Position - 0xFC3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_31(int iParam0, int iParam1)//Position - 0x101A
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

void func_32()//Position - 0x1052
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21725 = 6;
		return;
	}
}

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x10A9
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

void func_34(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x10FF
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
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

int func_35(int iParam0)//Position - 0x119A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_36(char* sParam0, int iParam1, int iParam2)//Position - 0x11D7
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

int func_37(int iParam0)//Position - 0x11F0
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
	}
	return 0;
}

void func_38(bool bParam0, int iParam1)//Position - 0x123B
{
	int iVar0;
	
	if (Global_63370)
	{
	}
	Global_63370 = 0;
	if (bParam0)
	{
		Global_63371 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75457)
		{
			if (Global_63587[Global_75458[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_75458[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_75457)
		{
			if (Global_75458[iVar0 /*9*/] > 0)
			{
				if (Global_75458[iVar0 /*9*/] == iParam1)
				{
					Global_75458[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_39(int* iParam0, bool bParam1, bool bParam2)//Position - 0x12D5
{
	int iVar0;
	
	if (BitTest(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_43(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1[iVar0]));
		}
		func_42(iVar0, iParam0);
		func_41(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			MISC::CLEAR_BIT(&(iParam0->f_13), iVar0);
			MISC::CLEAR_BIT(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_17[iVar0], true);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_17[iVar0], true);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 32, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 305, false);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_40()) && iParam0->f_17[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					PED::REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
				}
			}
			if (!BitTest(iParam0->f_13, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(iParam0->f_17[iVar0], false, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

int func_40()//Position - 0x1480
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_41(int iParam0, var uParam1)//Position - 0x1490
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(uParam1->f_13), 17);
			break;
		
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_13), 18);
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_13), 19);
			break;
	}
}

void func_42(int iParam0, var uParam1)//Position - 0x14D8
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(uParam1->f_13), 14);
			break;
		
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_13), 15);
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_43(var uParam0)//Position - 0x1520
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_5));
	}
}

int func_44(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x153B
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 136 /*INPUT_VEH_PUSHBIKE_PEDAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 119 /*INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 352 /*INPUT_VEH_FLY_BOOST*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 131 /*INPUT_VEH_SUB_ASCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 132 /*INPUT_VEH_SUB_DESCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 123 /*INPUT_VEH_SUB_TURN_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 126 /*INPUT_VEH_SUB_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 129 /*INPUT_VEH_SUB_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 130 /*INPUT_VEH_SUB_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 133 /*INPUT_VEH_SUB_TURN_HARD_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 134 /*INPUT_VEH_SUB_TURN_HARD_RIGHT*/, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	func_45(iParam0);
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

void func_45(int iParam0)//Position - 0x16D3
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

int func_46(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x16FF
{
	return func_47(iParam0, Param1, Param2, func_88(), func_88(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_87(), func_87(), func_87(), func_87(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_47(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)//Position - 0x174E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_86(iParam0);
	func_85(iParam0);
	func_84();
	if (func_68(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_67(sParam12);
		func_67(sParam13);
		func_67(sParam14);
		func_67(sParam15);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false))
				{
					MISC::SET_BIT(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					if (BitTest(iParam0->f_13, 23))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 23);
					}
					MISC::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_65(iParam0, iParam21))
				{
					MISC::SET_BIT(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					MISC::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_67(sParam16);
				func_67(sParam19);
				func_67("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
				if (bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						func_67(sParam11);
					}
					if (HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(iParam0);
					}
					if ((!func_63(iParam0, 1) && !func_62(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_61(iParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_59(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						func_67("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_63(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_59(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*iParam0))
						{
							HUD::REMOVE_BLIP(iParam0);
						}
						iParam0->f_5 = func_58(Var3, 0);
						if (!iParam23 == -1)
						{
							HUD::SET_BLIP_SPRITE(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_57(iParam0->f_5, iParam0);
						}
					}
					else if (!func_56(Var3, HUD::GET_BLIP_COORDS(iParam0->f_5), 0.1f, 0))
					{
						HUD::SET_BLIP_COORDS(iParam0->f_5, Var3);
						if (bParam27)
						{
							func_57(iParam0->f_5, iParam0);
						}
					}
					if (!func_63(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 2))
						{
							func_61(iParam0, sParam11, 0);
							MISC::SET_BIT(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (BitTest(iParam0->f_13, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, bParam5, bVar4, iVar5);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param3, Param4, fParam28, false, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iParam10, false))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar2], func_40()) || !func_54(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_51(iParam0))
							{
								func_67(sParam11);
								func_67(sParam16);
								func_67(sParam12);
								func_67(sParam13);
								func_67(sParam14);
								func_67(sParam15);
								func_67("LOSE_WANTED" /* GXT: Lose the Cops. */);
								func_67("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
								func_67(sParam19);
								func_39(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam10))
			{
				if ((bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!BitTest(iParam0->f_13, 9) && !BitTest(iParam0->f_13, 22)))
				{
					func_67(sParam16);
					func_67(sParam19);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5) || HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						HUD::REMOVE_BLIP(iParam0);
						func_67(sParam11);
					}
					if ((!func_63(iParam0, 1) && !func_62(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_61(iParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_59(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						func_67("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_63(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_59(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
					{
						if (!HUD::DOES_BLIP_EXIST(*iParam0))
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_5));
								func_67(sParam11);
							}
							*iParam0 = func_48(iParam10, 0, 0);
							HUD::SET_BLIP_DISPLAY(*iParam0, 2);
							if (!BitTest(iParam0->f_13, 4))
							{
								func_57(*iParam0, iParam0);
							}
						}
						if (!func_63(iParam0, 2))
						{
							if (!BitTest(iParam0->f_13, 3))
							{
								func_61(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (BitTest(iParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam19))
								{
									if (!BitTest(iParam0->f_13, 4))
									{
										func_61(iParam0, sParam19, 0);
										MISC::SET_BIT(&(iParam0->f_13), 4);
									}
								}
								else if (!BitTest(iParam0->f_13, 4))
								{
									func_61(iParam0, sParam16, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
								if (!BitTest(iParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
									{
										func_59(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_5));
					func_67(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_63(iParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!BitTest(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
									if (!PED::IS_PED_INJURED(iParam0->f_17[iVar7]))
									{
										func_59(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_61(iParam0, "MORE_SEATS" /* GXT: A vehicle with more seats is needed. */, 0);
									MISC::SET_BIT(&(iParam0->f_13), 13);
								}
							}
							else if (!BitTest(iParam0->f_13, 3))
							{
								func_61(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								if (BitTest(iParam0->f_13, 9))
								{
									func_61(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_63(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 3))
						{
							func_61(iParam0, sParam16, 0);
							MISC::SET_BIT(&(iParam0->f_13), 3);
							MISC::CLEAR_BIT(&(iParam0->f_13), 4);
						}
						else if (BitTest(iParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam19))
							{
								if (!BitTest(iParam0->f_13, 4))
								{
									func_61(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								func_61(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(iParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(iParam0->f_13), 0);
		}
		func_67(sParam11);
		func_67(sParam16);
		func_67(sParam19);
		func_67(sParam16);
		func_67("LOSE_WANTED" /* GXT: Lose the Cops. */);
		if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*iParam0))
		{
			HUD::REMOVE_BLIP(iParam0);
		}
	}
	MISC::CLEAR_BIT(&(iParam0->f_13), 11);
	MISC::CLEAR_BIT(&(iParam0->f_13), 12);
	return 0;
}

int func_48(int iParam0, bool bParam1, bool bParam2)//Position - 0x2054
{
	return func_49(iParam0, !bParam1, bParam2);
}

int func_49(int iParam0, bool bParam1, bool bParam2)//Position - 0x2067
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_50(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_50(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_50(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_50(bool bParam0, float fParam1, float fParam2)//Position - 0x210B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_51(int* iParam0)//Position - 0x2122
{
	if (BitTest(iParam0->f_13, 12))
	{
		if (func_53(PLAYER::PLAYER_PED_ID()))
		{
			if (func_52(1, 0, 1) || BitTest(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_52(1, 0, 1) || BitTest(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_52(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2177
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

int func_53(int iParam0)//Position - 0x225C
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_54(int iParam0, int iParam1)//Position - 0x2293
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && iParam1)
		{
			if (func_55(PLAYER::PLAYER_PED_ID(), iParam0))
			{
				PED::SET_GROUP_SEPARATION_RANGE(func_40(), 50f);
				return 1;
			}
		}
		else if (PED::IS_PED_GROUP_MEMBER(iParam0, func_40()))
		{
			PED::SET_GROUP_SEPARATION_RANGE(func_40(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0, int iParam1)//Position - 0x22FE
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_56(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x2346
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

void func_57(int iParam0, int* iParam1)//Position - 0x23C1
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (HUD::DOES_BLIP_EXIST(iParam1->f_6))
		{
			HUD::SET_BLIP_ROUTE(iParam1->f_6, false);
		}
		HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		iParam1->f_6 = iParam0;
		HUD::SET_BLIP_ROUTE(iParam0, true);
	}
}

int func_58(struct<3> Param0, bool bParam1)//Position - 0x23FC
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_50(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_59(int iParam0, char* sParam1, int iParam2)//Position - 0x2428
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_60(iParam2), 1);
}

int func_60(int iParam0)//Position - 0x243F
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

void func_61(int* iParam0, char* sParam1, bool bParam2)//Position - 0x2634
{
	if (!bParam2)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_36(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = MISC::GET_GAME_TIMER();
}

int func_62(int* iParam0)//Position - 0x266B
{
	if (!PED::IS_PED_INJURED(iParam0->f_16))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int* iParam0, int iParam1)//Position - 0x268F
{
	if (iParam1 != 1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
		if (func_64(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_9() && !func_11())
		{
			return 1;
		}
	}
	return 0;
}

int func_64(var uParam0)//Position - 0x26E7
{
	int iVar0;
	int iVar1;
	
	iVar1 = MISC::GET_GAME_TIMER();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_65(var uParam0, int iParam1)//Position - 0x270A
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_66(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(int iParam0, var uParam1, int iParam2)//Position - 0x273B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_67(char* sParam0)//Position - 0x27CF
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		HUD::CLEAR_THIS_PRINT(sParam0);
	}
}

int func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x27E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<3> Var19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!BitTest(uParam0->f_13, 29) && !BitTest(uParam0->f_13, 28))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					MISC::SET_BIT(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!BitTest(uParam0->f_13, 29) && BitTest(uParam0->f_13, 28))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (BitTest(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 0, iVar16);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar15, false))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, false))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_21, true)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17)
					{
						if (func_66(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_40()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7 && !func_83(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], true);
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
					}
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_40()))
					{
						if (func_81(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_40());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_80(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar10 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, false))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_63(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar17);
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar18]))
						{
							func_59(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_61(uParam0, "MORE_SEATS" /* GXT: A vehicle with more seats is needed. */, 0);
						MISC::SET_BIT(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			MISC::CLEAR_BIT(&(uParam0->f_13), 13);
			func_67("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(uParam0->f_17[0]) || !PED::IS_PED_INJURED(uParam0->f_17[1])) || !PED::IS_PED_INJURED(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_63(uParam0, 2))
					{
						iVar10 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (func_79(iVar10, uParam0))
						{
							func_61(uParam0, "CMN_VEHSUIT" /* GXT: ~s~Vehicle is not suitable. */, 0);
							MISC::SET_BIT(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::CLEAR_BIT(&(uParam0->f_13), 31);
					func_67("CMN_VEHSUIT" /* GXT: ~s~Vehicle is not suitable. */);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
				{
					MISC::SET_BIT(&(uParam0->f_13), 21);
				}
			}
			else if (BitTest(uParam0->f_13, 21))
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_40()))
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], true);
					}
					else
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], false);
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar10 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, false))
						{
							if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_40()))
							{
								if (!func_80(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (!func_78(uParam0->f_17[iVar0]))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar10, false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iVar10))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(iVar10) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar10))
								{
									Var19 = { ENTITY::GET_ENTITY_COORDS(iVar10, true) };
									if (Var19.f_2 < -1f)
									{
										TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_40()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
						{
							iVar10 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_17[iVar0], false);
							if (!ENTITY::IS_ENTITY_DEAD(iVar10, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
								{
									if (iVar10 != iParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar10))
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar10) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iVar20 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar20, false))
									{
										if (iVar10 != iVar20)
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar10) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_40()))
					{
						iVar21 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (ENTITY::DOES_ENTITY_EXIST(iVar21))
						{
							if (func_66(iVar21, uParam0, 0))
							{
								if (func_77(iVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
									func_41(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										MISC::SET_BIT(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_77(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar21) == joaat("sentinel2"))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
								}
								else
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
								}
								func_76(iVar0, uParam0);
							}
						}
					}
					if ((!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_40()) && !func_75(uParam0->f_17[iVar0], iParam10)) && !func_74(uParam0->f_17[iVar0], iParam10))
					{
						if (func_81(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_40()))
							{
								if (((!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]))
								{
									iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
									if (iVar11 == 7)
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
									}
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_40());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = MISC::GET_GAME_TIMER();
								uParam0->f_1[iVar0] = func_48(uParam0->f_17[iVar0], 0, 0);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_57(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (((func_54(uParam0->f_17[iVar0], 1) || func_75(uParam0->f_17[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false)))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
								func_67(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_57(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iParam10))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, false, true, 0) && !BitTest(uParam0->f_13, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar0], iParam10, false))
									{
										if (!func_54(uParam0->f_17[iVar0], 1))
										{
											if (func_53(uParam0->f_17[iVar0]))
											{
												iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_LEAVE_VEHICLE"));
												if (iVar11 == 7)
												{
													TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_40()))
									{
										if ((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
									if (iVar11 == 7 && !func_83(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !func_73(uParam0->f_17[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], true);
											if (BitTest(uParam0->f_13, 10))
											{
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
											}
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], false);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false))
									{
										uParam0->f_1[iVar0] = func_48(uParam0->f_17[iVar0], 0, 0);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_40()))
							{
								if (func_81(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
									{
										iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
										if (iVar11 == 7)
										{
											TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], false);
										PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_40());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_40()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_40());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
								MISC::SET_BIT(&(uParam0->f_13), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_40()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_67(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_63(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
						{
							if (func_78(uParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, false, true, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, false, true, 0) && !func_78(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = MISC::GET_GAME_TIMER();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!BitTest(uParam0->f_13, 5))
							{
								func_61(uParam0, sParam7, 0);
								MISC::SET_BIT(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_72(iVar0, uParam0))
									{
										if (!MISC::IS_STRING_NULL(uVar13[iVar0]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(uVar13[iVar0], ""))
											{
												func_70(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_69(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_72(iVar0, uParam0))
										{
											func_61(uParam0, uVar12[iVar0], 0);
											func_69(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		MISC::CLEAR_BIT(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_67(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_67("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
			return 1;
		}
	}
	return 0;
}

void func_69(int iParam0, var uParam1)//Position - 0x382B
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_13), 14);
			break;
		
		case 1:
			MISC::SET_BIT(&(uParam1->f_13), 15);
			break;
		
		case 2:
			MISC::SET_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_70(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x3873
{
	if (!bParam3)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_71(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = MISC::GET_GAME_TIMER();
}

void func_71(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x38AC
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

int func_72(int iParam0, var uParam1)//Position - 0x38CB
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 14);
		
		case 1:
			return BitTest(uParam1->f_13, 15);
		
		case 2:
			return BitTest(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_73(int iParam0, float fParam1)//Position - 0x390B
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74(int iParam0, int iParam1)//Position - 0x3942
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(iParam0, func_40()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, false, true, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1)//Position - 0x39A9
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_76(int iParam0, var uParam1)//Position - 0x39DE
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_13), 17);
			break;
		
		case 1:
			MISC::SET_BIT(&(uParam1->f_13), 18);
			break;
		
		case 2:
			MISC::SET_BIT(&(uParam1->f_13), 19);
			break;
	}
}

int func_77(int iParam0, var uParam1)//Position - 0x3A26
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 17);
		
		case 1:
			return BitTest(uParam1->f_13, 18);
		
		case 2:
			return BitTest(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x3A66
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					if (iVar0 == iVar1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 20f, 20f, 20f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iVar1, 20f, 20f, 20f, false, true, 0))
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

int func_79(int iParam0, var uParam1)//Position - 0x3AF3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0, false);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1, false);
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2, false);
			if (!PED::IS_PED_INJURED(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_80(var uParam0)//Position - 0x3C53
{
	int iVar0;
	
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_66(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x3C82
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
					{
						if (func_80(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, false, true, 0))
				{
					return 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, false, true, 0))
		{
			if (!bParam3)
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_66(iVar0, uParam0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (func_82(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_82(int iParam0)//Position - 0x3D60
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0, int iParam1)//Position - 0x3D98
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84()//Position - 0x3DC8
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

void func_85(var uParam0)//Position - 0x3E35
{
	int iVar0;
	
	if (!BitTest(uParam0->f_13, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], false);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_13), 25);
	}
}

void func_86(var uParam0)//Position - 0x3ED5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], false);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], false);
				}
			}
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
			}
		}
	}
}

var func_87()//Position - 0x3F6B
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_88()//Position - 0x3F75
{
	struct<3> Var0;
	
	return Var0;
}

void func_89(int iParam0, bool bParam1)//Position - 0x3F81
{
	int iVar0;
	
	Global_63372 = iParam0;
	if (!Global_63370)
	{
		Global_63370 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75457)
		{
			if (Global_75458[iVar0 /*9*/] == iParam0)
			{
				Global_75458[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_90(int iParam0, int iParam1, int iParam2)//Position - 0x3FCB
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (MISC::GET_HASH_KEY(sVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_91(iParam0, iParam2);
	return 1;
}

void func_91(int iParam0, int iParam1)//Position - 0x400C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_97(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113648.f_2365.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113648.f_32751.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113648.f_32751.f_5590 = iParam1;
	Global_78253 = iParam0;
	Global_113648.f_32751.f_5588 = 1;
	func_92(iParam0, &(Global_113648.f_32751.f_5510));
}

void func_92(int iParam0, var uParam1)//Position - 0x420E
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_96(uParam1);
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
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_95(uParam1->f_66))
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
		func_94(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_93(iVar0 + 1));
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

int func_93(int iParam0)//Position - 0x44B7
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

int func_94(int iParam0, var uParam1, var uParam2)//Position - 0x4567
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
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
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

int func_95(int iParam0)//Position - 0x475A
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

void func_96(var uParam0)//Position - 0x477A
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

int func_97(int iParam0)//Position - 0x482A
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_115(iParam0, 0, 0)) || func_115(iParam0, 1, 0)) || func_115(iParam0, 2, 0)) || func_114(iParam0) != 145) || func_113(iParam0)) || func_112(iParam0)) || func_111(iParam0)) || func_110(iParam0)) || !func_98(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_112(iParam0))
		{
		}
		if (func_112(iParam0))
		{
		}
		if (func_115(iParam0, 0, 0))
		{
		}
		if (func_115(iParam0, 1, 0))
		{
		}
		if (func_115(iParam0, 2, 0))
		{
		}
		if (func_114(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_98(int iParam0)//Position - 0x4907
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_99(iParam0, 0, -1))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_99(int iParam0, bool bParam1, int iParam2)//Position - 0x4AB9
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_109())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_108() && !func_107()) && !func_106()) && !func_105()) && !func_109())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_104() || MISC::IS_PC_VERSION()) || func_103())
		{
		}
		else if (!func_106())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_102(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_100(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_100(int iParam0)//Position - 0x4C3B
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_101())
	{
		return 1;
	}
	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_101()//Position - 0x4D07
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_102(int iParam0, int iParam1)//Position - 0x4D1E
{
	int iVar0;
	int iVar1;
	
	if ((!Global_2764242 && iParam1 >= 0) && iParam1 <= 415)
	{
		if (BitTest(Global_1586468[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	if (Global_2764241)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7059 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !Global_262145.f_13397 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE */) && iVar1 < Global_262145.f_13398 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14737 /* Tunable: ENABLE_LOWRIDER2_FACTION */ && iVar1 < Global_262145.f_14749 /* Tunable: ENABLE_LOWRIDER2_FACTION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14733 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */ && iVar1 < Global_262145.f_14745 /* Tunable: ENABLE_LOWRIDER2_VIRGO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14734 /* Tunable: ENABLE_LOWRIDER2_SABREGT */ && iVar1 < Global_262145.f_14746 /* Tunable: ENABLE_LOWRIDER2_SABREGT_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14735 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */ && iVar1 < Global_262145.f_14747 /* Tunable: ENABLE_LOWRIDER2_TORNADO5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14736 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */ && iVar1 < Global_262145.f_14748 /* Tunable: ENABLE_LOWRIDER2_MINIVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14738 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */ && iVar1 < Global_262145.f_14750 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14739 /* Tunable: ENABLEEXEC1_GROTTI_PROTO */ && iVar1 < Global_262145.f_14742 /* Tunable: ENABLEEXEC1_GROTTI_PROTO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14740 /* Tunable: ENABLEEXEC1_DEWBAUCHEE */ && iVar1 < Global_262145.f_14743 /* Tunable: ENABLEEXEC1_DEWBAUCHEE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14741 /* Tunable: ENABLEEXEC1_PFISTER */ && iVar1 < Global_262145.f_14744 /* Tunable: ENABLEEXEC1_PFISTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17313 /* Tunable: ENABLESTUNT_BF400 */ && iVar1 < Global_262145.f_17278 /* Tunable: ENABLESTUNT_BF400_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17308 /* Tunable: ENABLESTUNT_BRIOSO_RA */ && iVar1 < Global_262145.f_17273 /* Tunable: ENABLESTUNT_BRIOSO_RA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17312 /* Tunable: ENABLESTUNT_CLIFFHANGER */ && iVar1 < Global_262145.f_17277 /* Tunable: ENABLESTUNT_CLIFFHANGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17311 /* Tunable: ENABLESTUNT_CONTENDER */ && iVar1 < Global_262145.f_17276 /* Tunable: ENABLESTUNT_CONTENDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17305 /* Tunable: ENABLESTUNT_LE7B */ && iVar1 < Global_262145.f_17270 /* Tunable: ENABLESTUNT_LE7B_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17306 /* Tunable: ENABLESTUNT_OMNIS */ && iVar1 < Global_262145.f_17271 /* Tunable: ENABLESTUNT_OMNIS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17309 /* Tunable: ENABLESTUNT_TROPHY_TRUCK */ && iVar1 < Global_262145.f_17274 /* Tunable: ENABLESTUNT_TROPHY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17310 /* Tunable: ENABLESTUNT_TROPHY_CAR */ && iVar1 < Global_262145.f_17275 /* Tunable: ENABLESTUNT_TROPHY_CAR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17307 /* Tunable: ENABLESTUNT_TROPOS_RALLYE */ && iVar1 < Global_262145.f_17272 /* Tunable: ENABLESTUNT_TROPOS_RALLYE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17315 /* Tunable: ENABLESTUNT_GARGOYLE */ && iVar1 < Global_262145.f_17280 /* Tunable: ENABLESTUNT_GARGOYLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17316 /* Tunable: ENABLESTUNT_RALLY_TRUCK */ && iVar1 < Global_262145.f_17281 /* Tunable: ENABLESTUNT_RALLY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17304 /* Tunable: ENABLESTUNT_DRIFT_TAMPA */ && iVar1 < Global_262145.f_17269 /* Tunable: ENABLESTUNT_DRIFT_TAMPA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17303 /* Tunable: ENABLESTUNT_TYRUS */ && iVar1 < Global_262145.f_17268 /* Tunable: ENABLESTUNT_TYRUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17302 /* Tunable: ENABLESTUNT_ET1 */ && iVar1 < Global_262145.f_17267 /* Tunable: ENABLESTUNT_ET1_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17314 /* Tunable: ENABLESTUNT_LYNX */ && iVar1 < Global_262145.f_17279 /* Tunable: ENABLESTUNT_LYNX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17317 /* Tunable: ENABLESTUNT_STALLION */ && iVar1 < Global_262145.f_17282 /* Tunable: ENABLESTUNT_STALLION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17318 /* Tunable: ENABLESTUNT_GAUNTLET */ && iVar1 < Global_262145.f_17283 /* Tunable: ENABLESTUNT_GAUNTLET_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17319 /* Tunable: ENABLESTUNT_DOMINATOR */ && iVar1 < Global_262145.f_17284 /* Tunable: ENABLESTUNT_DOMINATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17320 /* Tunable: ENABLESTUNT_BUFFALO */ && iVar1 < Global_262145.f_17285 /* Tunable: ENABLESTUNT_BUFFALO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17474 /* Tunable: ENABLE_BIKER_DEFILER */ && iVar1 < Global_262145.f_17496 /* Tunable: ENABLE_BIKER_DEFILER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17475 /* Tunable: ENABLE_BIKER_NIGHTBLADE */ && iVar1 < Global_262145.f_17497 /* Tunable: ENABLE_BIKER_NIGHTBLADE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17476 /* Tunable: ENABLE_BIKER_ZOMBIEA */ && iVar1 < Global_262145.f_17498 /* Tunable: ENABLE_BIKER_ZOMBIEA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17477 /* Tunable: ENABLE_BIKER_ESSKEY */ && iVar1 < Global_262145.f_17499 /* Tunable: ENABLE_BIKER_ESSKEY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17478 /* Tunable: ENABLE_BIKER_AVARUS */ && iVar1 < Global_262145.f_17500 /* Tunable: ENABLE_BIKER_AVARUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17479 /* Tunable: ENABLE_BIKER_ZOMBIEB */ && iVar1 < Global_262145.f_17501 /* Tunable: ENABLE_BIKER_ZOMBIEB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17481 /* Tunable: ENABLE_BIKER_HAKUCHOU2 */ && iVar1 < Global_262145.f_17502 /* Tunable: ENABLE_BIKER_HAKUCHOU2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17482 /* Tunable: ENABLE_BIKER_VORTEX */ && iVar1 < Global_262145.f_17503 /* Tunable: ENABLE_BIKER_VORTEX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17483 /* Tunable: ENABLE_BIKER_SHOTARO */ && iVar1 < Global_262145.f_17504 /* Tunable: ENABLE_BIKER_SHOTARO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17484 /* Tunable: ENABLE_BIKER_CHIMERA */ && iVar1 < Global_262145.f_17505 /* Tunable: ENABLE_BIKER_CHIMERA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17485 /* Tunable: ENABLE_BIKER_RAPTOR */ && iVar1 < Global_262145.f_17506 /* Tunable: ENABLE_BIKER_RAPTOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17486 /* Tunable: ENABLE_BIKER_WESTERNDAEMON */ && iVar1 < Global_262145.f_17507 /* Tunable: ENABLE_BIKER_WESTERNDAEMON_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17487 /* Tunable: ENABLE_BIKER_BLAZER4 */ && iVar1 < Global_262145.f_17508 /* Tunable: ENABLE_BIKER_BLAZER4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17493 /* Tunable: ENABLE_BIKER_TORNADO6 */ && iVar1 < Global_262145.f_17515 /* Tunable: ENABLE_BIKER_TORNADO6_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17490 /* Tunable: ENABLE_BIKER_YOUGA2 */ && iVar1 < Global_262145.f_17511 /* Tunable: ENABLE_BIKER_YOUGA2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17491 /* Tunable: ENABLE_BIKER_WOLFSBANE */ && iVar1 < Global_262145.f_17512 /* Tunable: ENABLE_BIKER_WOLFSBANE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17492 /* Tunable: ENABLE_BIKER_FAGGIO3 */ && iVar1 < Global_262145.f_17513 /* Tunable: ENABLE_BIKER_FAGGIO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17480 /* Tunable: ENABLE_BIKER_FAGGIO */ && iVar1 < Global_262145.f_17514 /* Tunable: ENABLE_BIKER_FAGGIO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17494 /* Tunable: ENABLE_BIKER_BAGGER */ && iVar1 < Global_262145.f_17516 /* Tunable: ENABLE_BIKER_BAGGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17488 /* Tunable: ENABLE_BIKER_SANCTUS */ && iVar1 < Global_262145.f_17509 /* Tunable: ENABLE_BIKER_SANCTUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17489 /* Tunable: ENABLE_BIKER_MANCHEZ */ && iVar1 < Global_262145.f_17510 /* Tunable: ENABLE_BIKER_MANCHEZ_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17495 /* Tunable: ENABLE_BIKER_RATBIKE */ && iVar1 < Global_262145.f_17517 /* Tunable: ENABLE_BIKER_RATBIKE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19131 /* Tunable: ENABLE_IE_VOLTIC2 */ && iVar1 < Global_262145.f_19228 /* Tunable: ENABLE_IE_VOLTIC2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19132 /* Tunable: ENABLE_IE_RUINER2 */ && iVar1 < Global_262145.f_19229 /* Tunable: ENABLE_IE_RUINER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19133 /* Tunable: ENABLE_IE_DUNE4 */ && iVar1 < Global_262145.f_19230 /* Tunable: ENABLE_IE_DUNE4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19134 /* Tunable: ENABLE_IE_DUNE5 */ && iVar1 < Global_262145.f_19231 /* Tunable: ENABLE_IE_DUNE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19135 /* Tunable: ENABLE_IE_PHANTOM2 */ && iVar1 < Global_262145.f_19232 /* Tunable: ENABLE_IE_PHANTOM2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19136 /* Tunable: ENABLE_IE_TECHNICAL2 */ && iVar1 < Global_262145.f_19233 /* Tunable: ENABLE_IE_TECHNICAL2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19137 /* Tunable: ENABLE_IE_BOXVILLE5 */ && iVar1 < Global_262145.f_19234 /* Tunable: ENABLE_IE_BOXVILLE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19138 /* Tunable: ENABLE_IE_WASTELANDER */ && iVar1 < Global_262145.f_19235 /* Tunable: ENABLE_IE_WASTELANDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19139 /* Tunable: ENABLE_IE_BLAZER5 */ && iVar1 < Global_262145.f_19236 /* Tunable: ENABLE_IE_BLAZER5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19140 /* Tunable: ENABLE_IE_COMET2 */ && iVar1 < Global_262145.f_19237 /* Tunable: ENABLE_IE_COMET2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19141 /* Tunable: ENABLE_IE_COMET3 */ && iVar1 < Global_262145.f_19238 /* Tunable: ENABLE_IE_COMET3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19142 /* Tunable: ENABLE_IE_DIABLOUS */ && iVar1 < Global_262145.f_19239 /* Tunable: ENABLE_IE_DIABLOUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19143 /* Tunable: ENABLE_IE_DIABLOUS2 */ && iVar1 < Global_262145.f_19240 /* Tunable: ENABLE_IE_DIABLOUS2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19144 /* Tunable: ENABLE_IE_ELEGY */ && iVar1 < Global_262145.f_19241 /* Tunable: ENABLE_IE_ELEGY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19145 /* Tunable: ENABLE_IE_ELEGY2 */ && iVar1 < Global_262145.f_19242 /* Tunable: ENABLE_IE_ELEGY2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19146 /* Tunable: ENABLE_IE_FCR */ && iVar1 < Global_262145.f_19243 /* Tunable: ENABLE_IE_FCR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19147 /* Tunable: ENABLE_IE_FCR2 */ && iVar1 < Global_262145.f_19244 /* Tunable: ENABLE_IE_FCR2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19148 /* Tunable: ENABLE_IE_ITALIGTB */ && iVar1 < Global_262145.f_19245 /* Tunable: ENABLE_IE_ITALIGTB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19149 /* Tunable: ENABLE_IE_ITALIGTB2 */ && iVar1 < Global_262145.f_19246 /* Tunable: ENABLE_IE_ITALIGTB2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19150 /* Tunable: ENABLE_IE_NERO */ && iVar1 < Global_262145.f_19247 /* Tunable: ENABLE_IE_NERO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19151 /* Tunable: ENABLE_IE_NERO2 */ && iVar1 < Global_262145.f_19248 /* Tunable: ENABLE_IE_NERO2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19152 /* Tunable: ENABLE_IE_PENETRATOR */ && iVar1 < Global_262145.f_19249 /* Tunable: ENABLE_IE_PENETRATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19153 /* Tunable: ENABLE_IE_SPECTER */ && iVar1 < Global_262145.f_19250 /* Tunable: ENABLE_IE_SPECTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19154 /* Tunable: ENABLE_IE_SPECTER2 */ && iVar1 < Global_262145.f_19251 /* Tunable: ENABLE_IE_SPECTER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19155 /* Tunable: ENABLE_IE_TEMPESTA */ && iVar1 < Global_262145.f_19252 /* Tunable: ENABLE_IE_TEMPESTA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20212 /* Tunable: ENABLEGP1 */ && iVar1 < Global_262145.f_20208 /* Tunable: LAUNCHPOSIXGP1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20213 /* Tunable: ENABLEINFERNUS2 */ && iVar1 < Global_262145.f_20209 /* Tunable: LAUNCHPOSIXINFERNUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20214 /* Tunable: ENABLERUSTON */ && iVar1 < Global_262145.f_20210 /* Tunable: LAUNCHPOSIXRUSTON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20215 /* Tunable: ENABLETURISMO2 */ && iVar1 < Global_262145.f_20211 /* Tunable: LAUNCHPOSIXTURISMO2 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21094 /* Tunable: ENABLE_XA21 */ && iVar1 < Global_262145.f_21102 /* Tunable: LAUNCHPOSIX_XA21 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21095 /* Tunable: ENABLE_CHEETAH2 */ && iVar1 < Global_262145.f_21103 /* Tunable: LAUNCHPOSIX_CHEETAH2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21096 /* Tunable: ENABLE_TORERO */ && iVar1 < Global_262145.f_21104 /* Tunable: LAUNCHPOSIX_TORERO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21097 /* Tunable: ENABLE_VAGNER */ && iVar1 < Global_262145.f_21105 /* Tunable: LAUNCHPOSIX_VAGNER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21098 /* Tunable: ENABLE_ARDENT */ && iVar1 < Global_262145.f_21106 /* Tunable: LAUNCHPOSIX_ARDENT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21099 /* Tunable: ENABLE_NIGHTSHARK */ && iVar1 < Global_262145.f_21107 /* Tunable: LAUNCHPOSIX_NIGHTSHARK */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21893 /* Tunable: ENABLE_ULTRALIGHT */ && iVar1 < Global_262145.f_21913 /* Tunable: LAUNCHPOSIX_ULTRALIGHT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21905 /* Tunable: ENABLE_MOGUL */ && iVar1 < Global_262145.f_21925 /* Tunable: LAUNCHPOSIX_MOGUL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21896 /* Tunable: ENABLE_ROGUE */ && iVar1 < Global_262145.f_21916 /* Tunable: LAUNCHPOSIX_ROGUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21906 /* Tunable: ENABLE_STARLING */ && iVar1 < Global_262145.f_21926 /* Tunable: LAUNCHPOSIX_STARLING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21894 /* Tunable: ENABLE_SEABREEZE */ && iVar1 < Global_262145.f_21914 /* Tunable: LAUNCHPOSIX_SEABREEZE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21910 /* Tunable: ENABLE_TULA */ && iVar1 < Global_262145.f_21930 /* Tunable: LAUNCHPOSIX_TULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21908 /* Tunable: ENABLE_PYRO */ && iVar1 < Global_262145.f_21928 /* Tunable: LAUNCHPOSIX_PYRO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21909 /* Tunable: ENABLE_MOLOTOK */ && iVar1 < Global_262145.f_21929 /* Tunable: LAUNCHPOSIX_MOLOTOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21904 /* Tunable: ENABLE_NOKOTA */ && iVar1 < Global_262145.f_21924 /* Tunable: LAUNCHPOSIX_NOKOTA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21911 /* Tunable: ENABLE_BOMBUSHKA */ && iVar1 < Global_262145.f_21931 /* Tunable: LAUNCHPOSIX_BOMBUSHKA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21907 /* Tunable: ENABLE_HUNTER */ && iVar1 < Global_262145.f_21927 /* Tunable: LAUNCHPOSIX_HUNTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21903 /* Tunable: ENABLE_HAVOK */ && iVar1 < Global_262145.f_21923 /* Tunable: LAUNCHPOSIX_HAVOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21895 /* Tunable: ENABLE_HOWARD */ && iVar1 < Global_262145.f_21915 /* Tunable: LAUNCHPOSIX_HOWARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21897 /* Tunable: ENABLE_ALPHAZ1 */ && iVar1 < Global_262145.f_21917 /* Tunable: LAUNCHPOSIX_ALPHAZ1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21898 /* Tunable: ENABLE_CYCLONE */ && iVar1 < Global_262145.f_21918 /* Tunable: LAUNCHPOSIX_CYCLONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21899 /* Tunable: ENABLE_VISIONE */ && iVar1 < Global_262145.f_21919 /* Tunable: LAUNCHPOSIX_VISIONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21900 /* Tunable: ENABLE_VIGILANTE */ && iVar1 < Global_262145.f_21920 /* Tunable: LAUNCHPOSIX_VIGILANTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21901 /* Tunable: ENABLE_RETINUE */ && iVar1 < Global_262145.f_21921 /* Tunable: LAUNCHPOSIX_RETINUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21902 /* Tunable: ENABLE_RAPIDGT3 */ && iVar1 < Global_262145.f_21922 /* Tunable: LAUNCHPOSIX_RAPIDGT3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22861 /* Tunable: ENABLE_DELUXO */ && iVar1 < Global_262145.f_22889 /* Tunable: LAUNCHPOSIX_DELUXO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22862 /* Tunable: ENABLE_STROMBERG */ && iVar1 < Global_262145.f_22890 /* Tunable: LAUNCHPOSIX_STROMBERG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22863 /* Tunable: ENABLE_RIOT2 */ && iVar1 < Global_262145.f_22891 /* Tunable: LAUNCHPOSIX_RIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22864 /* Tunable: ENABLE_CHERNOBOG */ && iVar1 < Global_262145.f_22892 /* Tunable: LAUNCHPOSIX_CHERNOBOG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22865 /* Tunable: ENABLE_KHANJALI */ && iVar1 < Global_262145.f_22893 /* Tunable: LAUNCHPOSIX_KHANJALI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22866 /* Tunable: ENABLE_AKULA */ && iVar1 < Global_262145.f_22894 /* Tunable: LAUNCHPOSIX_AKULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22867 /* Tunable: ENABLE_THRUSTER */ && iVar1 < Global_262145.f_22895 /* Tunable: LAUNCHPOSIX_THRUSTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22868 /* Tunable: ENABLE_BARRAGE */ && iVar1 < Global_262145.f_22896 /* Tunable: LAUNCHPOSIX_BARRAGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22869 /* Tunable: ENABLE_VOLATOL */ && iVar1 < Global_262145.f_22897 /* Tunable: LAUNCHPOSIX_VOLATOL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22870 /* Tunable: ENABLE_COMET4 */ && iVar1 < Global_262145.f_22898 /* Tunable: LAUNCHPOSIX_COMET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22871 /* Tunable: ENABLE_NEON */ && iVar1 < Global_262145.f_22899 /* Tunable: LAUNCHPOSIX_NEON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22872 /* Tunable: ENABLE_STREITER */ && iVar1 < Global_262145.f_22900 /* Tunable: LAUNCHPOSIX_STREITER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22873 /* Tunable: ENABLE_SENTINEL3 */ && iVar1 < Global_262145.f_22901 /* Tunable: LAUNCHPOSIX_SENTINEL3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22874 /* Tunable: ENABLE_YOSEMITE */ && iVar1 < Global_262145.f_22902 /* Tunable: LAUNCHPOSIX_YOSEMITE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22875 /* Tunable: ENABLE_SC1 */ && iVar1 < Global_262145.f_22903 /* Tunable: LAUNCHPOSIX_SC1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22876 /* Tunable: ENABLE_AUTARCH */ && iVar1 < Global_262145.f_22904 /* Tunable: LAUNCHPOSIX_AUTARCH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22877 /* Tunable: ENABLE_GT500 */ && iVar1 < Global_262145.f_22905 /* Tunable: LAUNCHPOSIX_GT500 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22878 /* Tunable: ENABLE_HUSTLER */ && iVar1 < Global_262145.f_22906 /* Tunable: LAUNCHPOSIX_HUSTLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22879 /* Tunable: ENABLE_REVOLTER */ && iVar1 < Global_262145.f_22907 /* Tunable: LAUNCHPOSIX_REVOLTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22880 /* Tunable: ENABLE_PARIAH */ && iVar1 < Global_262145.f_22908 /* Tunable: LAUNCHPOSIX_PARIAH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22881 /* Tunable: ENABLE_RAIDEN */ && iVar1 < Global_262145.f_22909 /* Tunable: LAUNCHPOSIX_RAIDEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22882 /* Tunable: ENABLE_SAVESTRA */ && iVar1 < Global_262145.f_22910 /* Tunable: LAUNCHPOSIX_SAVESTRA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22883 /* Tunable: ENABLE_RIATA */ && iVar1 < Global_262145.f_22911 /* Tunable: LAUNCHPOSIX_RIATA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22884 /* Tunable: ENABLE_HERMES */ && iVar1 < Global_262145.f_22912 /* Tunable: LAUNCHPOSIX_HERMES */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22885 /* Tunable: ENABLE_COMET5 */ && iVar1 < Global_262145.f_22913 /* Tunable: LAUNCHPOSIX_COMET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22886 /* Tunable: ENABLE_Z190 */ && iVar1 < Global_262145.f_22914 /* Tunable: LAUNCHPOSIX_Z190 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22887 /* Tunable: ENABLE_VISERIS */ && iVar1 < Global_262145.f_22915 /* Tunable: LAUNCHPOSIX_VISERIS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22888 /* Tunable: ENABLE_KAMACHO */ && iVar1 < Global_262145.f_22916 /* Tunable: LAUNCHPOSIX_KAMACHO */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24081 /* Tunable: ENABLE_GB200 */ && iVar1 < Global_262145.f_24097 /* Tunable: LAUNCHPOSIX_GB200 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24082 /* Tunable: ENABLE_FAGALOA */ && iVar1 < Global_262145.f_24098 /* Tunable: LAUNCHPOSIX_FAGALOA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24086 /* Tunable: ENABLE_ELLIE */ && iVar1 < Global_262145.f_24102 /* Tunable: LAUNCHPOSIX_ELLIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24089 /* Tunable: ENABLE_ISSI3 */ && iVar1 < Global_262145.f_24105 /* Tunable: LAUNCHPOSIX_ISSI3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24094 /* Tunable: ENABLE_MICHELLI */ && iVar1 < Global_262145.f_24110 /* Tunable: LAUNCHPOSIX_MICHELLI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24088 /* Tunable: ENABLE_FLASHGT */ && iVar1 < Global_262145.f_24104 /* Tunable: LAUNCHPOSIX_FLASHGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24080 /* Tunable: ENABLE_HOTRING */ && iVar1 < Global_262145.f_24096 /* Tunable: LAUNCHPOSIX_HOTRING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24087 /* Tunable: ENABLE_TEZERACT */ && iVar1 < Global_262145.f_24103 /* Tunable: LAUNCHPOSIX_TEZERACT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24093 /* Tunable: ENABLE_TYRANT */ && iVar1 < Global_262145.f_24109 /* Tunable: LAUNCHPOSIX_TYRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24092 /* Tunable: ENABLE_DOMINATOR3 */ && iVar1 < Global_262145.f_24108 /* Tunable: LAUNCHPOSIX_DOMINATOR3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24083 /* Tunable: ENABLE_TAIPAN */ && iVar1 < Global_262145.f_24099 /* Tunable: LAUNCHPOSIX_TAIPAN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24085 /* Tunable: ENABLE_ENTITY2 */ && iVar1 < Global_262145.f_24101 /* Tunable: LAUNCHPOSIX_ENTITY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24095 /* Tunable: ENABLE_JESTER3 */ && iVar1 < Global_262145.f_24111 /* Tunable: LAUNCHPOSIX_JESTER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24091 /* Tunable: ENABLE_CHEBUREK */ && iVar1 < Global_262145.f_24107 /* Tunable: LAUNCHPOSIX_CHEBUREK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24084 /* Tunable: ENABLE_CARACARA */ && iVar1 < Global_262145.f_24100 /* Tunable: LAUNCHPOSIX_CARACARA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24090 /* Tunable: ENABLE_SEASPARROW */ && iVar1 < Global_262145.f_24106 /* Tunable: LAUNCHPOSIX_SEASPARROW */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24171 /* Tunable: ENABLE_TERBYTE */ && iVar1 < Global_262145.f_24158 /* Tunable: LAUNCHPOSIX_TERBYTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24172 /* Tunable: ENABLE_PBUS2 */ && iVar1 < Global_262145.f_24159 /* Tunable: LAUNCHPOSIX_PBUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24177 /* Tunable: ENABLE_MULE4 */ && iVar1 < Global_262145.f_24164 /* Tunable: LAUNCHPOSIX_MULE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24176 /* Tunable: ENABLE_POUNDER2 */ && iVar1 < Global_262145.f_24163 /* Tunable: LAUNCHPOSIX_POUNDER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24174 /* Tunable: ENABLE_SWINGER */ && iVar1 < Global_262145.f_24161 /* Tunable: LAUNCHPOSIX_SWINGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24180 /* Tunable: ENABLE_MENACER */ && iVar1 < Global_262145.f_24167 /* Tunable: LAUNCHPOSIX_MENACER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24182 /* Tunable: ENABLE_SCRAMJET */ && iVar1 < Global_262145.f_24169 /* Tunable: LAUNCHPOSIX_SCRAMJET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24183 /* Tunable: ENABLE_STRIKEFORCE */ && iVar1 < Global_262145.f_24170 /* Tunable: LAUNCHPOSIX_STRIKEFORCE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24181 /* Tunable: ENABLE_OPPRESSOR2 */ && iVar1 < Global_262145.f_24168 /* Tunable: LAUNCHPOSIX_OPPRESSOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24173 /* Tunable: ENABLE_PATRIOT2 */ && iVar1 < Global_262145.f_24160 /* Tunable: LAUNCHPOSIX_PATRIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24175 /* Tunable: ENABLE_STAFFORD */ && iVar1 < Global_262145.f_24162 /* Tunable: LAUNCHPOSIX_STAFFORD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24179 /* Tunable: ENABLE_FREECRAWLER */ && iVar1 < Global_262145.f_24166 /* Tunable: LAUNCHPOSIX_FREECRAWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24178 /* Tunable: ENABLE_BLIMP3 */ && iVar1 < Global_262145.f_24165 /* Tunable: LAUNCHPOSIX_BLIMP3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26768 /* Tunable: ENABLE_VEHICLE_DEVESTE */ && iVar1 < Global_262145.f_26770 /* Tunable: LAUNCHPOSIX_DEVESTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25781 /* Tunable: ENABLE_VEHICLE_TOROS */ && iVar1 < Global_262145.f_25774 /* Tunable: LAUNCHPOSIX_TOROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25782 /* Tunable: ENABLE_VEHICLE_CLIQUE */ && iVar1 < Global_262145.f_25775 /* Tunable: LAUNCHPOSIX_CLIQUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25783 /* Tunable: ENABLE_VEHICLE_ITALIGTO */ && iVar1 < Global_262145.f_25776 /* Tunable: LAUNCHPOSIX_ITALIGTO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25784 /* Tunable: ENABLE_VEHICLE_DEVIANT */ && iVar1 < Global_262145.f_25777 /* Tunable: LAUNCHPOSIX_DEVIANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26769 /* Tunable: ENABLE_VEHICLE_VAMOS */ && iVar1 < Global_262145.f_26771 /* Tunable: LAUNCHPOSIX_VAMOS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25785 /* Tunable: ENABLE_VEHICLE_TULIP */ && iVar1 < Global_262145.f_25778 /* Tunable: LAUNCHPOSIX_TULIP */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25786 /* Tunable: ENABLE_VEHICLE_SCHLAGEN */ && iVar1 < Global_262145.f_25779 /* Tunable: LAUNCHPOSIX_SCHLAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25787 /* Tunable: ENABLE_VEHICLE_BANDITO */ && iVar1 < Global_262145.f_25780 /* Tunable: LAUNCHPOSIX_BANDITO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25792 /* Tunable: ENABLE_VEHICLE_THRAX */ && iVar1 < Global_262145.f_25813 /* Tunable: LAUNCHPOSIX_THRAX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25793 /* Tunable: ENABLE_VEHICLE_DRAFTER */ && iVar1 < Global_262145.f_25814 /* Tunable: LAUNCHPOSIX_DRAFTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25794 /* Tunable: ENABLE_VEHICLE_LOCUST */ && iVar1 < Global_262145.f_25815 /* Tunable: LAUNCHPOSIX_LOCUST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25795 /* Tunable: ENABLE_VEHICLE_NOVAK */ && iVar1 < Global_262145.f_25816 /* Tunable: LAUNCHPOSIX_NOVAK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25796 /* Tunable: ENABLE_VEHICLE_ZORRUSSO */ && iVar1 < Global_262145.f_25817 /* Tunable: LAUNCHPOSIX_ZORRUSSO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25797 /* Tunable: ENABLE_VEHICLE_GAUNTLET3 */ && iVar1 < Global_262145.f_25818 /* Tunable: LAUNCHPOSIX_GAUNTLET3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25798 /* Tunable: ENABLE_VEHICLE_ISSI7 */ && iVar1 < Global_262145.f_25819 /* Tunable: LAUNCHPOSIX_ISSI7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25799 /* Tunable: ENABLE_VEHICLE_ZION3 */ && iVar1 < Global_262145.f_25820 /* Tunable: LAUNCHPOSIX_ZION3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25800 /* Tunable: ENABLE_VEHICLE_NEBULA */ && iVar1 < Global_262145.f_25821 /* Tunable: LAUNCHPOSIX_NEBULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25801 /* Tunable: ENABLE_VEHICLE_HELLION */ && iVar1 < Global_262145.f_25822 /* Tunable: LAUNCHPOSIX_HELLION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25802 /* Tunable: ENABLE_VEHICLE_DYNASTY */ && iVar1 < Global_262145.f_25823 /* Tunable: LAUNCHPOSIX_DYNASTY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25803 /* Tunable: ENABLE_VEHICLE_RROCKET */ && iVar1 < Global_262145.f_25824 /* Tunable: LAUNCHPOSIX_RROCKET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25804 /* Tunable: ENABLE_VEHICLE_PEYOTE2 */ && iVar1 < Global_262145.f_25825 /* Tunable: LAUNCHPOSIX_PEYOTE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25805 /* Tunable: ENABLE_VEHICLE_GAUNTLET4 */ && iVar1 < Global_262145.f_25826 /* Tunable: LAUNCHPOSIX_GAUNTLET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25806 /* Tunable: ENABLE_VEHICLE_CARACARA2 */ && iVar1 < Global_262145.f_25827 /* Tunable: LAUNCHPOSIX_CARACARA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25807 /* Tunable: ENABLE_VEHICLE_JUGULAR */ && iVar1 < Global_262145.f_25828 /* Tunable: LAUNCHPOSIX_JUGULAR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25808 /* Tunable: ENABLE_VEHICLE_S80 */ && iVar1 < Global_262145.f_25829 /* Tunable: LAUNCHPOSIX_S80 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25809 /* Tunable: ENABLE_VEHICLE_KRIEGER */ && iVar1 < Global_262145.f_25830 /* Tunable: LAUNCHPOSIX_KRIEGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25810 /* Tunable: ENABLE_VEHICLE_EMERUS */ && iVar1 < Global_262145.f_25831 /* Tunable: LAUNCHPOSIX_EMERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25811 /* Tunable: ENABLE_VEHICLE_NEO */ && iVar1 < Global_262145.f_25832 /* Tunable: LAUNCHPOSIX_NEO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25812 /* Tunable: ENABLE_VEHICLE_PARAGON */ && iVar1 < Global_262145.f_25833 /* Tunable: LAUNCHPOSIX_PARAGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28613 /* Tunable: ENABLE_VEHICLE_ASBO */ && iVar1 < Global_262145.f_28634 /* Tunable: LAUNCHPOSIX_ASBO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28614 /* Tunable: ENABLE_VEHICLE_KANJO */ && iVar1 < Global_262145.f_28635 /* Tunable: LAUNCHPOSIX_KANJO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28615 /* Tunable: ENABLE_VEHICLE_EVERON */ && iVar1 < Global_262145.f_28636 /* Tunable: LAUNCHPOSIX_EVERON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28616 /* Tunable: ENABLE_VEHICLE_RETINUE2 */ && iVar1 < Global_262145.f_28637 /* Tunable: LAUNCHPOSIX_RETINUE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28617 /* Tunable: ENABLE_VEHICLE_YOSEMITE2 */ && iVar1 < Global_262145.f_28638 /* Tunable: LAUNCHPOSIX_YOSEMITE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28618 /* Tunable: ENABLE_VEHICLE_SUGOI */ && iVar1 < Global_262145.f_28639 /* Tunable: LAUNCHPOSIX_SUGOI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28619 /* Tunable: ENABLE_VEHICLE_SULTAN2 */ && iVar1 < Global_262145.f_28640 /* Tunable: LAUNCHPOSIX_SULTAN2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28620 /* Tunable: ENABLE_VEHICLE_OUTLAW */ && iVar1 < Global_262145.f_28641 /* Tunable: LAUNCHPOSIX_OUTLAW */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28621 /* Tunable: ENABLE_VEHICLE_VAGRANT */ && iVar1 < Global_262145.f_28642 /* Tunable: LAUNCHPOSIX_VAGRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28622 /* Tunable: ENABLE_VEHICLE_KOMODA */ && iVar1 < Global_262145.f_28643 /* Tunable: LAUNCHPOSIX_KOMODA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28623 /* Tunable: ENABLE_VEHICLE_STRYDER */ && iVar1 < Global_262145.f_28644 /* Tunable: LAUNCHPOSIX_STRYDER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28624 /* Tunable: ENABLE_VEHICLE_FURIA */ && iVar1 < Global_262145.f_28645 /* Tunable: LAUNCHPOSIX_FURIA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28625 /* Tunable: ENABLE_VEHICLE_ZHABA */ && iVar1 < Global_262145.f_28646 /* Tunable: LAUNCHPOSIX_ZHABA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28626 /* Tunable: ENABLE_VEHICLE_JB7002 */ && iVar1 < Global_262145.f_28647 /* Tunable: LAUNCHPOSIX_JB7002 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28627 /* Tunable: ENABLE_VEHICLE_FIRETRUCK */ && iVar1 < Global_262145.f_28648 /* Tunable: LAUNCHPOSIX_FIRETRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28628 /* Tunable: ENABLE_VEHICLE_BURRITO2 */ && iVar1 < Global_262145.f_28649 /* Tunable: LAUNCHPOSIX_BURRITO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28629 /* Tunable: ENABLE_VEHICLE_BOXVILLE */ && iVar1 < Global_262145.f_28650 /* Tunable: LAUNCHPOSIX_BOXVILLE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28630 /* Tunable: ENABLE_VEHICLE_STOCKADE */ && iVar1 < Global_262145.f_28651 /* Tunable: LAUNCHPOSIX_STOCKADE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28631 /* Tunable: ENABLE_VEHICLE_MINITANK */ && iVar1 < Global_262145.f_28652 /* Tunable: LAUNCHPOSIX_MINITANK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28632 /* Tunable: ENABLE_VEHICLE_LGUARD */ && iVar1 < Global_262145.f_28653 /* Tunable: LAUNCHPOSIX_LGUARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28633 /* Tunable: ENABLE_VEHICLE_BLAZER2 */ && iVar1 < Global_262145.f_28654 /* Tunable: LAUNCHPOSIX_BLAZER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28656 /* Tunable: ENABLE_VEHICLE_FORMULA */ && iVar1 < Global_262145.f_28657 /* Tunable: LAUNCHPOSIX_FORMULA */) && !Global_262145.f_28611 /* Tunable: ENABLE_VEHICLE_FORMULA_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28659 /* Tunable: ENABLE_VEHICLE_FORMULA2 */ && iVar1 < Global_262145.f_28660 /* Tunable: LAUNCHPOSIX_FORMULA2 */) && !Global_262145.f_28612 /* Tunable: ENABLE_VEHICLE_FORMULA2_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28664 /* Tunable: ENABLE_VEHICLE_IMORGEN */ && iVar1 < Global_262145.f_28667 /* Tunable: LAUNCHPOSIX_IMORGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28665 /* Tunable: ENABLE_VEHICLE_REBLA */ && iVar1 < Global_262145.f_28668 /* Tunable: LAUNCHPOSIX_REBLA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28666 /* Tunable: ENABLE_VEHICLE_VSTR */ && iVar1 < Global_262145.f_28669 /* Tunable: LAUNCHPOSIX_VSTR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29682 /* Tunable: ENABLE_VEH_GAUNTLET5 */ && iVar1 < Global_262145.f_29347 /* Tunable: LAUNCHPOSIX_GAUNTLET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29333 /* Tunable: ENABLE_VEH_CLUB */ && iVar1 < Global_262145.f_29354 /* Tunable: LAUNCHPOSIX_CLUB */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29334 /* Tunable: ENABLE_VEH_DUKES3 */ && iVar1 < Global_262145.f_29340 /* Tunable: LAUNCHPOSIX_DUKES3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29680 /* Tunable: ENABLE_VEH_YOSEMITE3 */ && iVar1 < Global_262145.f_29348 /* Tunable: LAUNCHPOSIX_YOSEMITE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29681 /* Tunable: ENABLE_VEH_PEYOTE3 */ && iVar1 < Global_262145.f_29349 /* Tunable: LAUNCHPOSIX_PEYOTE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29327 /* Tunable: ENABLE_VEH_GLENDALE2 */ && iVar1 < Global_262145.f_29346 /* Tunable: LAUNCHPOSIX_GLENDALE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29328 /* Tunable: ENABLE_VEH_PENUMBRA2 */ && iVar1 < Global_262145.f_29355 /* Tunable: LAUNCHPOSIX_PENUMBRA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29329 /* Tunable: ENABLE_VEH_LANDSTALKER2 */ && iVar1 < Global_262145.f_29345 /* Tunable: LAUNCHPOSIX_LANDSTALKER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29330 /* Tunable: ENABLE_VEH_SEMINOLE2 */ && iVar1 < Global_262145.f_29343 /* Tunable: LAUNCHPOSIX_SEMINOLE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29676 /* Tunable: ENABLE_VEH_TIGON */ && iVar1 < Global_262145.f_29350 /* Tunable: LAUNCHPOSIX_TIGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29677 /* Tunable: ENABLE_VEH_OPENWHEEL1 */ && iVar1 < Global_262145.f_29351 /* Tunable: LAUNCHPOSIX_OPENWHEEL1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29678 /* Tunable: ENABLE_VEH_OPENWHEEL2 */ && iVar1 < Global_262145.f_29352 /* Tunable: LAUNCHPOSIX_OPENWHEEL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29679 /* Tunable: ENABLE_VEH_COQUETTE4 */ && iVar1 < Global_262145.f_29353 /* Tunable: LAUNCHPOSIX_COQUETTE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29331 /* Tunable: ENABLE_VEH_MANANA2 */ && iVar1 < Global_262145.f_29342 /* Tunable: LAUNCHPOSIX_MANANA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29332 /* Tunable: ENABLE_VEH_YOUGA3 */ && iVar1 < Global_262145.f_29344 /* Tunable: LAUNCHPOSIX_YOUGA3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30141 /* Tunable: ENABLE_VEHICLE_TOREADOR */ && iVar1 < Global_262145.f_30124 /* Tunable: LAUNCHPOSIX_TOREADOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30142 /* Tunable: ENABLE_VEHICLE_ANNIHILATOR2 */ && iVar1 < Global_262145.f_30125 /* Tunable: LAUNCHPOSIX_ANNIHILATOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30143 /* Tunable: ENABLE_VEHICLE_ALKONOST */ && iVar1 < Global_262145.f_30126 /* Tunable: LAUNCHPOSIX_ALKONOST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30144 /* Tunable: ENABLE_VEHICLE_PATROLBOAT */ && iVar1 < Global_262145.f_30127 /* Tunable: LAUNCHPOSIX_PATROLBOAT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30145 /* Tunable: ENABLE_VEHICLE_LONGFIN */ && iVar1 < Global_262145.f_30128 /* Tunable: LAUNCHPOSIX_LONGFIN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30146 /* Tunable: ENABLE_VEHICLE_WINKY */ && iVar1 < Global_262145.f_30129 /* Tunable: LAUNCHPOSIX_WINKY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30147 /* Tunable: ENABLE_VEHICLE_VETO */ && iVar1 < Global_262145.f_30130 /* Tunable: LAUNCHPOSIX_VETO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30148 /* Tunable: ENABLE_VEHICLE_VETO2 */ && iVar1 < Global_262145.f_30131 /* Tunable: LAUNCHPOSIX_VETO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30149 /* Tunable: ENABLE_VEHICLE_ITALIRSX */ && iVar1 < Global_262145.f_30132 /* Tunable: LAUNCHPOSIX_ITALIRSX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30158 /* Tunable: -552682736 */)
		{
		}
		else if (!Global_262145.f_30150 /* Tunable: ENABLE_VEHICLE_WEEVIL */ && iVar1 < Global_262145.f_30133 /* Tunable: LAUNCHPOSIX_WEEVIL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30151 /* Tunable: ENABLE_VEHICLE_MANCHEZ2 */ && iVar1 < Global_262145.f_30134 /* Tunable: LAUNCHPOSIX_MANCHEZ2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30152 /* Tunable: ENABLE_VEHICLE_SLAMTRUCK */ && iVar1 < Global_262145.f_30135 /* Tunable: LAUNCHPOSIX_SLAMTRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30153 /* Tunable: ENABLE_VEHICLE_VETIR */ && iVar1 < Global_262145.f_30136 /* Tunable: LAUNCHPOSIX_VETIR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30154 /* Tunable: ENABLE_VEHICLE_SQUADDIE */ && iVar1 < Global_262145.f_30137 /* Tunable: LAUNCHPOSIX_SQUADDIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30159 /* Tunable: 976860524 */)
		{
		}
		else if (!Global_262145.f_30155 /* Tunable: ENABLE_VEHICLE_BRIOSO2 */ && iVar1 < Global_262145.f_30138 /* Tunable: LAUNCHPOSIX_BRIOSO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30156 /* Tunable: ENABLE_VEHICLE_DINGY5 */ && iVar1 < Global_262145.f_30139 /* Tunable: LAUNCHPOSIX_DINGY5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30157 /* Tunable: ENABLE_VEHICLE_VERUS */ && iVar1 < Global_262145.f_30140 /* Tunable: LAUNCHPOSIX_VERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31009 /* Tunable: ENABLE_VEHICLE_TAILGATER2 */ && iVar1 < Global_262145.f_30992 /* Tunable: LAUNCHPOSIX_TAILGATER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31010 /* Tunable: ENABLE_VEHICLE_EUROS */ && iVar1 < Global_262145.f_30993 /* Tunable: LAUNCHPOSIX_EUROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31011 /* Tunable: ENABLE_VEHICLE_SULTAN3 */ && iVar1 < Global_262145.f_30994 /* Tunable: LAUNCHPOSIX_SULTAN3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31012 /* Tunable: ENABLE_VEHICLE_RT3000 */ && iVar1 < Global_262145.f_30995 /* Tunable: LAUNCHPOSIX_RT3000 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31013 /* Tunable: ENABLE_VEHICLE_VECTRE */ && iVar1 < Global_262145.f_30996 /* Tunable: LAUNCHPOSIX_VECTRE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31014 /* Tunable: ENABLE_VEHICLE_ZR350 */ && iVar1 < Global_262145.f_30997 /* Tunable: LAUNCHPOSIX_ZR350 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31015 /* Tunable: ENABLE_VEHICLE_WARRENER2 */ && iVar1 < Global_262145.f_30998 /* Tunable: LAUNCHPOSIX_WARRENER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31016 /* Tunable: ENABLE_VEHICLE_CALICO */ && iVar1 < Global_262145.f_30999 /* Tunable: LAUNCHPOSIX_CALICO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31017 /* Tunable: ENABLE_VEHICLE_REMUS */ && iVar1 < Global_262145.f_31000 /* Tunable: LAUNCHPOSIX_REMUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31018 /* Tunable: ENABLE_VEHICLE_CYPHER */ && iVar1 < Global_262145.f_31001 /* Tunable: LAUNCHPOSIX_CYPHER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31019 /* Tunable: ENABLE_VEHICLE_DOMINATOR7 */ && iVar1 < Global_262145.f_31002 /* Tunable: LAUNCHPOSIX_DOMINATOR7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31020 /* Tunable: ENABLE_VEHICLE_JESTER4 */ && iVar1 < Global_262145.f_31003 /* Tunable: LAUNCHPOSIX_JESTER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31021 /* Tunable: ENABLE_VEHICLE_FUTO2 */ && iVar1 < Global_262145.f_31004 /* Tunable: LAUNCHPOSIX_FUTO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31022 /* Tunable: ENABLE_VEHICLE_DOMINATOR8 */ && iVar1 < Global_262145.f_31005 /* Tunable: LAUNCHPOSIX_DOMINATOR8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31023 /* Tunable: ENABLE_VEHICLE_PREVION */ && iVar1 < Global_262145.f_31006 /* Tunable: LAUNCHPOSIX_PREVION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31024 /* Tunable: ENABLE_VEHICLE_GROWLER */ && iVar1 < Global_262145.f_31007 /* Tunable: LAUNCHPOSIX_GROWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31025 /* Tunable: ENABLE_VEHICLE_COMET6 */ && iVar1 < Global_262145.f_31008 /* Tunable: LAUNCHPOSIX_COMET6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31889 /* Tunable: ENABLE_VEHICLE_CHAMPION */ && iVar1 < Global_262145.f_31874 /* Tunable: LAUNCHPOSIX_CHAMPION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31890 /* Tunable: ENABLE_VEHICLE_BUFFALO4 */ && iVar1 < Global_262145.f_31875 /* Tunable: LAUNCHPOSIX_BUFFALO4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31891 /* Tunable: ENABLE_VEHICLE_DEITY */ && iVar1 < Global_262145.f_31876 /* Tunable: LAUNCHPOSIX_DEITY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31892 /* Tunable: ENABLE_VEHICLE_JUBILEE */ && iVar1 < Global_262145.f_31877 /* Tunable: LAUNCHPOSIX_JUBILEE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31893 /* Tunable: ENABLE_VEHICLE_IGNUS */ && iVar1 < Global_262145.f_31878 /* Tunable: LAUNCHPOSIX_IGNUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31894 /* Tunable: ENABLE_VEHICLE_CINQUEMILA */ && iVar1 < Global_262145.f_31879 /* Tunable: LAUNCHPOSIX_CINQUEMILA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31895 /* Tunable: ENABLE_VEHICLE_ASTRON */ && iVar1 < Global_262145.f_31880 /* Tunable: LAUNCHPOSIX_ASTRON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31896 /* Tunable: ENABLE_VEHICLE_COMET7 */ && iVar1 < Global_262145.f_31881 /* Tunable: LAUNCHPOSIX_COMET7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31897 /* Tunable: ENABLE_VEHICLE_ZENO */ && iVar1 < Global_262145.f_31882 /* Tunable: LAUNCHPOSIX_ZENO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31898 /* Tunable: ENABLE_VEHICLE_REEVER */ && iVar1 < Global_262145.f_31883 /* Tunable: LAUNCHPOSIX_REEVER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31899 /* Tunable: ENABLE_VEHICLE_IWAGEN */ && iVar1 < Global_262145.f_31884 /* Tunable: LAUNCHPOSIX_IWAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31900 /* Tunable: ENABLE_VEHICLE_GRANGER2 */ && iVar1 < Global_262145.f_31885 /* Tunable: LAUNCHPOSIX_GRANGER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31901 /* Tunable: ENABLE_VEHICLE_PATRIOT3 */ && iVar1 < Global_262145.f_31886 /* Tunable: LAUNCHPOSIX_PATRIOT3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31902 /* Tunable: ENABLE_VEHICLE_SHINOBI */ && iVar1 < Global_262145.f_31887 /* Tunable: LAUNCHPOSIX_FAST_MOTORBIKE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31967 /* Tunable: 991164709 */)
		{
		}
		else if (!Global_262145.f_31903 /* Tunable: ENABLE_VEHICLE_BALLER7 */ && iVar1 < Global_262145.f_31888 /* Tunable: LAUNCHPOSIX_BALLER7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33131 /* Tunable: ENABLE_VEHICLE_BRIOSO3 */ && iVar1 < Global_262145.f_33112 /* Tunable: LAUNCHPOSIX_BRIOSO3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33125 /* Tunable: ENABLE_VEHICLE_CORSITA */ && iVar1 < Global_262145.f_33106 /* Tunable: LAUNCHPOSIX_CORSITA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33129 /* Tunable: ENABLE_VEHICLE_DRAUGUR */ && iVar1 < Global_262145.f_33110 /* Tunable: LAUNCHPOSIX_DRAUGUR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33123 /* Tunable: ENABLE_VEHICLE_GREENWOOD */ && iVar1 < Global_262145.f_33104 /* Tunable: LAUNCHPOSIX_GREENWOOD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33134 /* Tunable: ENABLE_VEHICLE_KANJOSJ */ && iVar1 < Global_262145.f_33115 /* Tunable: LAUNCHPOSIX_KANJOSJ */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33126 /* Tunable: ENABLE_VEHICLE_LM87 */ && iVar1 < Global_262145.f_33107 /* Tunable: LAUNCHPOSIX_LM87 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33135 /* Tunable: ENABLE_VEHICLE_POSTLUDE */ && iVar1 < Global_262145.f_33116 /* Tunable: LAUNCHPOSIX_POSTLUDE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33137 /* Tunable: ENABLE_VEHICLE_RHINEHART */ && iVar1 < Global_262145.f_33118 /* Tunable: LAUNCHPOSIX_RHINEHART */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33128 /* Tunable: ENABLE_VEHICLE_SM722 */ && iVar1 < Global_262145.f_33109 /* Tunable: LAUNCHPOSIX_SM722 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33136 /* Tunable: ENABLE_VEHICLE_TENF */ && iVar1 < Global_262145.f_33117 /* Tunable: LAUNCHPOSIX_TENF */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33139 /* Tunable: ENABLE_VEHICLE_TENF2 */ && iVar1 < Global_262145.f_33120 /* Tunable: LAUNCHPOSIX_TENF2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33124 /* Tunable: ENABLE_VEHICLE_TORERO2 */ && iVar1 < Global_262145.f_33105 /* Tunable: LAUNCHPOSIX_TORERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33132 /* Tunable: ENABLE_VEHICLE_VIGERO2 */ && iVar1 < Global_262145.f_33113 /* Tunable: LAUNCHPOSIX_VIGERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33138 /* Tunable: ENABLE_VEHICLE_WEEVIL2 */ && iVar1 < Global_262145.f_33119 /* Tunable: LAUNCHPOSIX_WEEVIL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33130 /* Tunable: ENABLE_VEHICLE_RUINER4 */ && iVar1 < Global_262145.f_33111 /* Tunable: LAUNCHPOSIX_RUINER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33140 /* Tunable: ENABLE_VEHICLE_SENTINEL4 */ && iVar1 < Global_262145.f_33121 /* Tunable: LAUNCHPOSIX_MODEL_SENTINEL4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33127 /* Tunable: ENABLE_VEHICLE_CONADA */ && iVar1 < Global_262145.f_33108 /* Tunable: LAUNCHPOSIX_CONADA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33122 /* Tunable: ENABLE_VEHICLE_OMNISEGT */ && iVar1 < Global_262145.f_33103 /* Tunable: LAUNCHPOSIX_OMNISEGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez3"))
	{
		if (!Global_262145.f_33962 /* Tunable: ENABLE_VEHICLE_BRICKADE2 */ && iVar1 < Global_262145.f_33946 /* Tunable: LAUNCHPOSIX_BRICKADE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brickade2"))
	{
		if (!Global_262145.f_33962 /* Tunable: ENABLE_VEHICLE_BRICKADE2 */ && iVar1 < Global_262145.f_33946 /* Tunable: LAUNCHPOSIX_BRICKADE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("eudora"))
	{
		if (!Global_262145.f_33971 /* Tunable: ENABLE_VEHICLE_EUDORA */ && iVar1 < Global_262145.f_33954 /* Tunable: LAUNCHPOSIX_EUDORA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("powersurge"))
	{
		if (!Global_262145.f_33965 /* Tunable: ENABLE_VEHICLE_POWERSURGE */ && iVar1 < Global_262145.f_33949 /* Tunable: LAUNCHPOSIX_POWERSURGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("journey2"))
	{
		if (!Global_262145.f_33959 /* Tunable: ENABLE_VEHICLE_JOURNEY2 */ && iVar1 < Global_262145.f_33943 /* Tunable: LAUNCHPOSIX_JOURNEY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surfer3"))
	{
		if (!Global_262145.f_33960 /* Tunable: ENABLE_VEHICLE_SURFER3 */ && iVar1 < Global_262145.f_33944 /* Tunable: LAUNCHPOSIX_SURFER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity3"))
	{
		if (!Global_262145.f_33957 /* Tunable: ENABLE_VEHICLE_ENTITY3 */ && iVar1 < Global_262145.f_33941 /* Tunable: LAUNCHPOSIX_ENTITY3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("panthere"))
	{
		if (!Global_262145.f_33968 /* Tunable: ENABLE_VEHICLE_PANTHERE */ && iVar1 < Global_262145.f_33952 /* Tunable: LAUNCHPOSIX_PANTHERE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boor"))
	{
		if (!Global_262145.f_33972 /* Tunable: ENABLE_VEHICLE_BOOR */ && iVar1 < Global_262145.f_33956 /* Tunable: LAUNCHPOSIX_BOOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon2"))
	{
		if (!Global_262145.f_33969 /* Tunable: ENABLE_VEHICLE_EVERON2 */ && iVar1 < Global_262145.f_33953 /* Tunable: LAUNCHPOSIX_EVERON2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip2"))
	{
		if (!Global_262145.f_33958 /* Tunable: ENABLE_VEHICLE_TULIP2 */ && iVar1 < Global_262145.f_33942 /* Tunable: LAUNCHPOSIX_TULIP2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("r300"))
	{
		if (!Global_262145.f_33961 /* Tunable: ENABLE_VEHICLE_R300 */ && iVar1 < Global_262145.f_33945 /* Tunable: LAUNCHPOSIX_R300 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virtue"))
	{
		if (!Global_262145.f_33970 /* Tunable: ENABLE_VEHICLE_VIRTUE */ && iVar1 < Global_262145.f_33955 /* Tunable: LAUNCHPOSIX_VIRTUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi8"))
	{
		if (!Global_262145.f_33966 /* Tunable: ENABLE_VEHICLE_ISSI8 */ && iVar1 < Global_262145.f_33950 /* Tunable: LAUNCHPOSIX_ISSI8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("broadway"))
	{
		if (!Global_262145.f_33967 /* Tunable: ENABLE_VEHICLE_BROADWAY */ && iVar1 < Global_262145.f_33951 /* Tunable: LAUNCHPOSIX_BROADWAY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tahoma"))
	{
		if (!Global_262145.f_33964 /* Tunable: ENABLE_VEHICLE_TAHOMA */ && iVar1 < Global_262145.f_33948 /* Tunable: LAUNCHPOSIX_TAHOMA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taxi"))
	{
		if (!Global_262145.f_33963 /* Tunable: ENABLE_VEHICLE_TAXI */ && iVar1 < Global_262145.f_33947 /* Tunable: LAUNCHPOSIX_TAXI */)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_103()//Position - 0x834F
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_104()//Position - 0x8365
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_105()//Position - 0x837B
{
	return 0;
}

int func_106()//Position - 0x8384
{
	return 1;
}

int func_107()//Position - 0x838D
{
	return 1;
}

int func_108()//Position - 0x8396
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_109()//Position - 0x83AF
{
	int iVar0;
	
	if (Global_152523 == 2)
	{
		return 1;
	}
	else if (Global_152523 == 3)
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

int func_110(int iParam0)//Position - 0x8467
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_99(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)//Position - 0x84AE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98042[iVar0]))
		{
			if (Global_98042[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_112(int iParam0)//Position - 0x84E9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98012[iVar0], false))
			{
				if (Global_98012[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98012[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_113(int iParam0)//Position - 0x8565
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[24]))
	{
		if (iParam0 == Global_77348.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77348.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x864D
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0]))
		{
			if (Global_98012[iVar0] == iParam0)
			{
				return Global_98022[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_115(int iParam0, int iParam1, bool bParam2)//Position - 0x86B0
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_116(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113648.f_7231[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_116(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x871E
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_117()//Position - 0x87F6
{
	int iVar0;
	
	switch (iLocal_1325)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (func_37(Local_68[iVar0 /*14*/]))
				{
					if (!iLocal_273)
					{
						func_34(&uLocal_69, 1, Local_68[iVar0 /*14*/], "ArmyPed", 0, 1);
						func_149();
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iVar0 /*14*/], "GENERIC_WAR_CRY", func_60(3), 1);
						iLocal_273 = 1;
					}
				}
				iVar0++;
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_307);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
			iLocal_1325++;
			break;
		
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
				func_120(0f, 0f, 0f, -1f, 0, 145);
				if (HUD::DOES_BLIP_EXIST(Local_65[0 /*2*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_65[0 /*2*/].f_1));
				}
				func_119(2);
				iLocal_1325 = 0;
			}
			else if (func_37(Local_65[0 /*2*/]) && !HUD::DOES_BLIP_EXIST(Local_65[0 /*2*/].f_1))
			{
				Local_65[0 /*2*/].f_1 = func_118(Local_65[0 /*2*/], 0, 0);
			}
			break;
	}
}

int func_118(int iParam0, bool bParam1, bool bParam2)//Position - 0x8910
{
	return func_49(iParam0, !bParam1, bParam2);
}

int func_119(int iParam0)//Position - 0x8923
{
	if (iLocal_1323 == 0)
	{
		iLocal_1326 = iParam0;
		iLocal_1323 = 1;
		return 1;
	}
	return 0;
}

void func_120(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x8943
{
	struct<3> Var0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_104212.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104212.f_4, false))
		{
			if (func_148(24) != Global_104212.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_145(ENTITY::GET_ENTITY_COORDS(Global_104212.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_121(Global_104212.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_121(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x89BE
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[25], false))
			{
				if (Global_77348.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_144(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_92(iParam0, &Var0);
		if (func_143(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_78336 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_137(iParam3, &Var0, Param1, fParam2, func_114(iParam0));
		func_122(iParam3, iParam0, 0);
	}
}

void func_122(int iParam0, int iParam1, int iParam2)//Position - 0x8AE7
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_134(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77348.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77348.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77348.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78255 != -1 && Global_78255 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113648.f_32751.f_4801 = func_123();
			}
			if (iParam1 != Global_77348.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_148(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_91(iVar0, 145);
					}
				}
				Global_78254 = iParam1;
				Global_78255 = iParam0;
				Global_78256 = iParam2;
			}
		}
	}
}

var func_123()//Position - 0x8BFE
{
	var uVar0;
	
	func_133(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_132(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_131(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_126(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_125(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_124(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_124(var uParam0, int iParam1)//Position - 0x8C44
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

void func_125(var uParam0, int iParam1)//Position - 0x8CCA
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_126(var uParam0, int iParam1)//Position - 0x8CFD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_130(*uParam0);
	iVar1 = func_128(*uParam0);
	if (iParam1 < 1 || iParam1 > func_127(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_127(int iParam0, int iParam1)//Position - 0x8D4E
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

var func_128(int iParam0)//Position - 0x8DF0
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_129(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_129(bool bParam0, int iParam1, int iParam2)//Position - 0x8E12
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_130(var uParam0)//Position - 0x8E29
{
	return uParam0 & 15;
}

void func_131(var uParam0, int iParam1)//Position - 0x8E36
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_132(var uParam0, int iParam1)//Position - 0x8E70
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_133(var uParam0, int iParam1)//Position - 0x8EAB
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_134(var uParam0, int iParam1)//Position - 0x8EE7
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_135(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_135(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_135(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_135(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_135(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_135(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_135(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_135(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_135(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_109())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_109())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113648.f_32751.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_143(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113648.f_32751.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113648.f_32751.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_143(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_143(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_135(int iParam0, int iParam1)//Position - 0xA5D5
{
	struct<82> Var0;
	
	if (func_26(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_136(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_136(int iParam0, var uParam1, int iParam2)//Position - 0xA617
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113648.f_9087.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113648.f_9087.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_137(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0xA873
{
	if (func_134(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 10))
		{
			func_142(iParam0);
			func_141(uParam1, &(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 11))
			{
				Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_138(iParam0, 1);
		}
	}
}

void func_138(int iParam0, bool bParam1)//Position - 0xA96C
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_140(iParam0, 0))
		{
			func_139(iParam0, 1, 0);
			func_139(iParam0, 2, 0);
			func_139(iParam0, 3, 0);
			func_139(iParam0, 4, 0);
			func_139(iParam0, 0, 1);
			Global_77348[iParam0] = 1;
		}
	}
	else
	{
		func_139(iParam0, 0, 0);
	}
}

void func_139(int iParam0, int iParam1, bool bParam2)//Position - 0xA9C9
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113648.f_32751[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113648.f_32751[iParam0]), iParam1);
	}
}

int func_140(int iParam0, int iParam1)//Position - 0xAA04
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113648.f_32751[iParam0], iParam1);
}

void func_141(var uParam0, var uParam1)//Position - 0xAA24
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_142(int iParam0)//Position - 0xAAF0
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_134(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77348.f_139[iParam0]));
			Global_77348.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 13))
		{
			func_138(iParam0, 0);
		}
	}
}

bool func_143(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0xAB67
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_144(int iParam0)//Position - 0xABAE
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_142(iParam0);
	func_138(iParam0, 0);
}

int func_145(struct<3> Param0, int iParam1, var uParam2, var uParam3)//Position - 0xABD5
{
	int iVar0;
	
	iVar0 = func_146(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.5234f, 3813.9158f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.2582f, -1496.5555f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.9058f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.1265f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.46439f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_146(struct<3> Param0, int iParam1, int iParam2)//Position - 0xACEB
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
		if (Global_95719[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95719[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_147(iVar0) || iParam2 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95719[iVar0 /*10*/].f_3, true);
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

var func_147(int iParam0)//Position - 0xAD7A
{
	return BitTest(Global_113648.f_7231[iParam0], 0);
}

int func_148(int iParam0)//Position - 0xAD8F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77348.f_139[iParam0];
}

void func_149()//Position - 0xADAB
{
	Global_20591 = 0;
	func_150();
}

void func_150()//Position - 0xADBB
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
	}
}

void func_151()//Position - 0xADDC
{
	switch (iLocal_1325)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			while (Global_100681 == 12)
			{
				SYSTEM::WAIT(0);
			}
			if (func_37(Local_65[0 /*2*/]) && !HUD::DOES_BLIP_EXIST(Local_65[0 /*2*/].f_1))
			{
				if (HUD::GET_BLIP_FROM_ENTITY(Local_65[0 /*2*/]) != 0)
				{
					Local_65[0 /*2*/].f_1 = HUD::GET_BLIP_FROM_ENTITY(Local_65[0 /*2*/]);
				}
				else
				{
					Local_65[0 /*2*/].f_1 = func_118(Local_65[0 /*2*/], 0, 0);
				}
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
			func_36("RHP_GOODS", 7500, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("RHP1_START");
			func_152("RHP_HELP", -1);
			iLocal_257 = 0;
			iLocal_1325++;
			break;
		
		case 1:
			if (bLocal_279)
			{
				iLocal_273 = 0;
				func_119(1);
				iLocal_1325 = 0;
			}
			break;
	}
}

void func_152(char* sParam0, int iParam1)//Position - 0xAEB1
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_153()//Position - 0xAEC8
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_66[iLocal_270 /*2*/]))
		{
			if (PED::IS_PED_INJURED(Local_66[iLocal_270 /*2*/]))
			{
				func_206(&(Local_66[iLocal_270 /*2*/]), 1, 0, 1);
			}
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[iLocal_270 /*2*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_65[iLocal_270 /*2*/], false))
			{
				if (iLocal_270 == 0)
				{
					func_195(3);
				}
				func_194(&(Local_65[iLocal_270 /*2*/]));
			}
			else if (Local_65[iLocal_270 /*2*/] == Local_65[0 /*2*/])
			{
				if (func_193(&(Local_65[0 /*2*/])))
				{
					func_195(4);
					func_194(&(Local_65[0 /*2*/]));
				}
			}
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_68[iLocal_270 /*14*/]))
		{
			if (bLocal_279)
			{
				func_192(Local_68[iLocal_270 /*14*/], &(Local_68[iLocal_270 /*14*/].f_2), -1, 0, 0, 0, 400f, 0, -1, -1, 1, 0, 0);
			}
			if (PED::IS_PED_INJURED(Local_68[iLocal_270 /*14*/]))
			{
				if (Local_68[iLocal_270 /*14*/].f_10 == 0)
				{
					func_191(719, 1, 0);
					Local_68[iLocal_270 /*14*/].f_10 = 1;
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_68[iLocal_270 /*14*/]));
			}
		}
		if ((((func_37(Local_68[iLocal_270 /*14*/]) && (MISC::GET_GAME_TIMER() - iLocal_278) > 8000) && bLocal_279) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_68[iLocal_270 /*14*/])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_68[iLocal_270 /*14*/], false))
		{
			if (ENTITY::GET_ENTITY_HEALTH(Local_68[iLocal_270 /*14*/]) < 110)
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "DYING_MOAN", func_60(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			else if (ENTITY::GET_ENTITY_HEALTH(Local_68[iLocal_270 /*14*/]) < 140)
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "DYING_HELP", func_60(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			else if (PED::IS_PED_GOING_INTO_COVER(Local_68[iLocal_270 /*14*/]))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "TAKE_COVER", func_60(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			else if (TASK::IS_PED_RUNNING(Local_68[iLocal_270 /*14*/]))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "COVER_ME", func_60(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			else if (PED::IS_PED_SHOOTING(Local_68[iLocal_270 /*14*/]))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "COVER_YOU", func_60(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			else if (!WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(Local_68[iLocal_270 /*14*/]))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "RELOADING", func_60(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			else if (func_190(Local_68[iLocal_270 /*14*/], joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"), 1) || func_190(Local_68[iLocal_270 /*14*/], joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "GENERIC_WAR_CRY", func_60(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
		}
		iLocal_270++;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_POLICE_RADAR_BLIPS(true);
	}
	else
	{
		PLAYER::SET_POLICE_RADAR_BLIPS(false);
	}
	if (func_37(Local_65[0 /*2*/]) && func_37(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65[0 /*2*/], -1521.8293f, 2725.0034f, 16.64367f, -1600.763f, 2794.8755f, 21.45629f, 30f, false, true, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	}
	if (func_37(Local_65[0 /*2*/]) && func_37(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1324 > 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 650f)
			{
				func_195(5);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 600f)
			{
				if (!iLocal_277)
				{
					func_36("RHP_LWARN", 7500, 1);
					iLocal_277 = 1;
				}
			}
			else
			{
				iLocal_277 = 0;
			}
		}
	}
	if (func_37(Local_65[0 /*2*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (9 - 1))
		{
			if (func_37(Local_68[iVar1 /*14*/]))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false) && !PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/]))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], -1, 2048, 1);
				}
			}
			else if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/]))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	if (!iLocal_267)
	{
		if (iLocal_1324 == 0)
		{
			if (fLocal_264 != 0f)
			{
				fLocal_264 = 0f;
			}
		}
		else if (iLocal_1324 == 1)
		{
			if (fLocal_264 < 5f)
			{
				fLocal_264 = (fLocal_264 + MISC::GET_FRAME_TIME());
			}
		}
		if (fLocal_264 < 3f)
		{
			iVar2 = 0;
			while (iVar2 < Local_65.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_65[iVar2 /*2*/]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_255[iVar2]))
				{
					uLocal_255[iVar2] = Local_65[iVar2 /*2*/];
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_255[iVar2]))
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_255[iVar2], false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_255[iVar2], false))
					{
						iVar3 = VEHICLE::GET_VEHICLE_CAUSE_OF_DESTRUCTION(uLocal_255[iVar2]);
						if (iVar3 == joaat("WEAPON_STICKYBOMB"))
						{
							func_189(726);
							iLocal_267 = 1;
						}
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_97178)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_97178[iVar2]))
				{
					if (ENTITY::IS_ENTITY_DEAD(Global_97178[iVar2], false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97178[iVar2], false))
					{
						iVar4 = VEHICLE::GET_VEHICLE_CAUSE_OF_DESTRUCTION(Global_97178[iVar2]);
						if (iVar4 == joaat("WEAPON_STICKYBOMB"))
						{
							func_189(726);
							iLocal_267 = 1;
						}
					}
				}
				iVar2++;
			}
		}
	}
	func_172();
	func_162();
	func_158();
	func_157();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!iLocal_266)
	{
		if (func_156(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, 0))
		{
			iLocal_266 = 1;
			MISC::RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_POLICE_RADAR_BLIPS(true);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			iLocal_266 = 1;
		}
	}
	else if (!func_156(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(1, false);
			MISC::ENABLE_DISPATCH_SERVICE(10, false);
			MISC::ENABLE_DISPATCH_SERVICE(9, false);
			MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(1, 0);
			MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(2, 0);
			MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(8, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_POLICE_RADAR_BLIPS(false);
			iLocal_266 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!iLocal_1332)
			{
				func_155(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 725);
				func_154(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 718);
				iLocal_1332 = 1;
			}
		}
		else if (iLocal_1332)
		{
			iLocal_1332 = 0;
		}
		if (!iLocal_1333)
		{
			func_155(PLAYER::PLAYER_PED_ID(), 722);
			iLocal_1333 = 1;
		}
	}
	if (!iLocal_265)
	{
		iVar5 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true)) < 10000f)
		{
			iVar5 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		}
		if ((((((ENTITY::DOES_ENTITY_EXIST(iVar5) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar5, false)) && iVar5 != iLocal_254) && iVar5 != Local_65[1 /*2*/]) && iVar5 != Local_65[2 /*2*/]) && iVar5 != Local_65[0 /*2*/]) && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar5)))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, true);
			iLocal_254 = iVar5;
		}
	}
}

void func_154(int iParam0, int iParam1)//Position - 0xB6C4
{
	Global_63373 = iParam0;
	Global_63374 = iParam1;
}

void func_155(int iParam0, int iParam1)//Position - 0xB6D6
{
	int iVar0;
	
	Global_63375 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_75457)
	{
		if (iParam1 == -1 || Global_75458[iVar0 /*9*/] == iParam1)
		{
			if (Global_75458[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_75458[iVar0 /*9*/].f_6 = iParam0;
				Global_75458[iVar0 /*9*/].f_7 = 1;
				Global_75458[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

int func_156(struct<3> Param0, int iParam1, int iParam2, bool bParam3)//Position - 0xB741
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	bVar5 = false;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.2113f, 100.46083f, 40.384373f };
			Var1[0 /*3*/] = { -1094.2382f, 148.42744f, 73f };
			fVar2[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.22309f, 25.257057f };
			Var1[1 /*3*/] = { -1149.4938f, 109.25583f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035.1129f, -84.958855f, 28.274601f };
			Var1[2 /*3*/] = { -1261.1031f, 50.081482f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5005f, 10f };
			Var1[0 /*3*/] = { -1816.9539f, -2768.8933f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911.4879f, -2934.197f, 10f };
			Var1[1 /*3*/] = { -968.6236f, -3477.7476f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.7852f, 10f };
			Var1[2 /*3*/] = { -1011.08105f, -3086.9038f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.0861f, -2952.277f, 10f };
			Var1[3 /*3*/] = { -1599.0082f, -2616.2705f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027.1364f, -2436.457f, 10f };
			Var1[4 /*3*/] = { -1392.6105f, -2226.7634f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.5493f, -2408.7122f, 10f };
			Var1[5 /*3*/] = { -1136.9174f, -2617.9546f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			Var0[6 /*3*/] = { -982.79236f, -2831.7087f, 12.93313f };
			Var1[6 /*3*/] = { -966.46765f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110.0831f, -3496.8057f, 12f };
			Var1[7 /*3*/] = { -1955.2982f, -3010.4314f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886.8994f, -3193.0237f, 12f };
			Var1[8 /*3*/] = { -1836.143f, -3105.2683f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134.3367f, -3535.6482f, 12f };
			Var1[9 /*3*/] = { -1259.6486f, -3463.4863f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			Var0[10 /*3*/] = { -969.12787f, -3463.8994f, 12f };
			Var1[10 /*3*/] = { -896.3734f, -3505.7148f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369.4913f, -2173.5789f, 10f };
			Var1[11 /*3*/] = { -1685.6256f, -2720.3635f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.9256f, -3550.9434f, 10f };
			Var1[12 /*3*/] = { -1110.1978f, -3493.6172f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.3342f, 30f };
			Var1[0 /*3*/] = { -2029.7765f, 2845.0833f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725.8894f, 3291.0986f, 30f };
			Var1[1 /*3*/] = { -2009.1815f, 2879.8352f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442.0261f, 3326.6987f, 30f };
			Var1[2 /*3*/] = { -2033.9279f, 3089.0488f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917.1654f, 3374.209f, 30f };
			Var1[3 /*3*/] = { -2016.7909f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.2778f, 30f };
			Var1[4 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.6633f, 3344.5142f, 30f };
			Var1[5 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.7554f, 3352.6606f, 30f };
			Var1[6 /*3*/] = { -2715.8708f, 3269.9155f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005.5745f, 3364.5327f, 30f };
			Var1[7 /*3*/] = { -1977.5688f, 3330.8882f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.2852f, 30f };
			Var1[8 /*3*/] = { -1942.747f, 2947.4412f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.2954f, 2936.406f, 31.680103f };
			Var1[9 /*3*/] = { -2453.0366f, 3006.863f, 52.310028f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347.1848f, 3023.8298f, 31.56573f };
			Var1[10 /*3*/] = { -2517.3298f, 2989.0635f, 49.956444f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259.9219f, 3358.0398f, 29.999718f };
			Var1[11 /*3*/] = { -2299.772f, 3385.79f, 38.060143f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476.3093f, 3363.914f, 31.679329f };
			Var1[12 /*3*/] = { -2431.9807f, 3287.6694f, 39.978264f };
			fVar2[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.0813f, 2797.7834f, 29.37864f };
			Var1[13 /*3*/] = { -2096.8213f, 2874.4233f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.6072f, 2527.555f, 40f };
			Var1[0 /*3*/] = { 1815.5753f, 2535.0596f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788.8787f, 2445.7273f, 40f };
			Var1[1 /*3*/] = { 1716.9603f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.1575f, 2436.2441f, 40f };
			Var1[2 /*3*/] = { 1650.0776f, 2515.9226f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.3307f, 2407.5972f, 40f };
			Var1[3 /*3*/] = { 1698.5546f, 2460.2078f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.4517f, 2756.2175f, 40f };
			Var1[4 /*3*/] = { 1718.8477f, 2589.1616f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.2278f, 2661.2402f, 40f };
			Var1[5 /*3*/] = { 1774.8124f, 2679.4187f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.0503f, 2632.2205f, 40f };
			Var1[6 /*3*/] = { 1657.2083f, 2595.4844f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.0209f, 2716.869f, 40f };
			Var1[7 /*3*/] = { 1657.1647f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.8721f, 2729.827f, 40f };
			Var1[8 /*3*/] = { 1789.8551f, 2705.0369f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818.7888f, 2605.9478f, 40f };
			Var1[9 /*3*/] = { 1783.1143f, 2606.7832f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.1846f, 20f };
			Var1[0 /*3*/] = { 3615.583f, 3626.1936f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var1[1 /*3*/] = { 3643.8008f, 3694.3618f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446.0364f, 3795.6882f, 20f };
			Var1[2 /*3*/] = { 3650.9143f, 3766.1516f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.05304f, -3391.4968f, -10f };
			Var1[0 /*3*/] = { 523.22894f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.9895f, 4.819676f };
			Var1[1 /*3*/] = { 593.89276f, -3199.998f, 30.069256f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.0537f, 4.819394f };
			Var1[2 /*3*/] = { 585.3137f, -3111.8442f, 17.569231f };
			fVar2[2] = 12.5f;
			Var0[3 /*3*/] = { 598.46655f, -3140.1475f, 4.819257f };
			Var1[3 /*3*/] = { 597.4973f, -3117.0627f, 17.319258f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.5497f, -570.87976f, 20f };
			Var1[0 /*3*/] = { -1187.8108f, -477.50366f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201.3776f, -485.96732f, 20f };
			Var1[1 /*3*/] = { -1215.7959f, -464.82806f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.42334f, 20f };
			Var1[2 /*3*/] = { -1013.3932f, -475.20575f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055.8492f, -477.8226f, 20f };
			Var1[3 /*3*/] = { -1073.3325f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.57196f, 29.439508f };
			Var1[0 /*3*/] = { 471.17004f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.75604f, 34.439507f };
			Var1[1 /*3*/] = { 457.20837f, -993.71893f, 29.389584f };
			fVar2[1] = 14.75f;
			Var0[2 /*3*/] = { 477.62268f, -986.60004f, 40.00819f };
			Var1[2 /*3*/] = { 424.8687f, -986.3279f, 48.712406f };
			fVar2[2] = 31.5f;
			Var0[3 /*3*/] = { 474.38895f, -974.4613f, 39.557606f };
			Var1[3 /*3*/] = { 474.0358f, -1021.9721f, 49.10033f };
			fVar2[3] = 30.5f;
			Var0[4 /*3*/] = { 442.17685f, -974.1888f, 29.689508f };
			Var1[4 /*3*/] = { 442.18552f, -979.8635f, 33.439507f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], bVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

void func_157()//Position - 0xC497
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_1324 < 1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_INTERCEPT_CONVOY"))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_65[iVar0 /*2*/]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_65[iVar0 /*2*/], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) < 1000f)
					{
						AUDIO::START_AUDIO_SCENE("PS_PREP_INTERCEPT_CONVOY");
					}
				}
				iVar0++;
			}
		}
	}
	else if (iLocal_1324 == 1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			AUDIO::START_AUDIO_SCENE("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
	else if (iLocal_1324 >= 1)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_INTERCEPT_CONVOY"))
		{
			AUDIO::STOP_AUDIO_SCENE("PS_PREP_INTERCEPT_CONVOY");
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_65[1 /*2*/]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_65[1 /*2*/], 0f);
				}
				iVar1++;
			}
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_97178[iVar2]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_97178[iVar2], 0f);
				}
				iVar2++;
			}
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			AUDIO::STOP_AUDIO_SCENE("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
}

void func_158()//Position - 0xC5A0
{
	switch (iLocal_260)
	{
		case 1:
			if (fLocal_263 != 0f)
			{
				fLocal_263 = 0f;
			}
			if (fLocal_262 <= 0f)
			{
				fLocal_262 = 0f;
				iLocal_260 = 0;
			}
			else if (fLocal_262 > 0f)
			{
				fLocal_262 = (fLocal_262 - 0.02f);
			}
		
		case 0:
			if (func_161())
			{
				iLocal_260 = 3;
				fLocal_261 = fLocal_262;
				fLocal_263 = 1f;
			}
			break;
		
		case 3:
			if (fLocal_263 != 1f)
			{
				fLocal_263 = 1f;
			}
			if (fLocal_262 >= 1f)
			{
				iLocal_260 = 2;
				fLocal_262 = 1f;
			}
			else if (fLocal_262 < 1f)
			{
				fLocal_262 = (fLocal_262 + 0.02f);
			}
		
		case 2:
			if (!func_161())
			{
				iLocal_260 = 1;
				fLocal_261 = fLocal_262;
				fLocal_263 = 0f;
			}
			break;
	}
	if (iLocal_260 == 3 || iLocal_260 == 1)
	{
		func_159(fLocal_261, fLocal_263, fLocal_262);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41953[20 /*31*/], fLocal_262, false, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41953[20 /*31*/], 4, false, true);
	}
}

float func_159(float fParam0, float fParam1, float fParam2)//Position - 0xC69E
{
	float fVar0;
	
	fVar0 = ((1f - SYSTEM::COS(func_160((fParam2 * 3.1415927f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_160(float fParam0)//Position - 0xC6CD
{
	return (fParam0 * 57.29578f);
}

int func_161()//Position - 0xC6DD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_65[iVar0 /*2*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_65[iVar0 /*2*/], false)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65[iVar0 /*2*/], -1591.0193f, 2803.7307f, 15.418117f, -1569.9202f, 2777.8782f, 22.148561f, 8.25f, false, true, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_162()//Position - 0xC74E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_170(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!func_169(iVar1))
			{
				if (func_168(iVar1, 0))
				{
					if (func_167(iVar1) || func_165(iVar1))
					{
						if (func_164(iVar1, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
							TASK::CLEAR_PED_TASKS(iVar1);
						}
					}
				}
			}
			else if (func_167(iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
			{
				TASK::REQUEST_WAYPOINT_RECORDING(sLocal_305);
				bLocal_1331 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, 1365.7721f, 3625.5823f, 33.692444f, 1374.6617f, 3598.9507f, 36.894703f, 34f, false, true, 0);
				if (!bLocal_1331)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iVar1, PED::GET_VEHICLE_PED_IS_IN(iVar1, false), 1376.77f, 3605.09f, 33.88f, 30f, 786469, 2f);
					}
				}
				else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_65[0 /*2*/]))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_305);
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_305))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar1, Local_65[0 /*2*/], sLocal_305, 786469, 0, 8, -1, 10f, false, 2f);
					}
				}
			}
			else if (func_165(iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
			{
				if (func_37(Local_68[5 /*14*/]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, PED::GET_VEHICLE_PED_IS_IN(iVar1, false), Local_68[5 /*14*/], 7, 15f, 786469, 15f, -1f, true);
					}
				}
			}
			else
			{
				func_163(iVar1);
			}
		}
		iVar0++;
	}
}

int func_163(int iParam0)//Position - 0xC910
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_35(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_170(bVar0) != iParam0)
		{
			return 0;
		}
		if (!BitTest(Global_96535, bVar0))
		{
			return 0;
		}
		MISC::CLEAR_BIT(&Global_96535, bVar0);
		return 1;
	}
	return 0;
}

int func_164(int iParam0, int iParam1)//Position - 0xC965
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_35(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_170(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96535, bVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (BitTest(Global_96534, bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, false, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, false, 1);
			MISC::SET_BIT(&Global_96535, bVar0);
			return 1;
		}
	}
	return 0;
}

int func_165(int iParam0)//Position - 0xC9E6
{
	if (!func_166())
	{
		if (func_37(Local_65[0 /*2*/]) && iLocal_257 == 0)
		{
			if (func_37(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_166()//Position - 0xCA54
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_167(int iParam0)//Position - 0xCA70
{
	if (!func_166())
	{
		if (func_37(Local_65[0 /*2*/]) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65[0 /*2*/], 1364.2483f, 3620.5112f, 33.89069f, 1350.8995f, 3616.2249f, 37.12358f, 6.5f, false, true, 0))
		{
			if (func_37(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, Local_65[0 /*2*/], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_65[0 /*2*/], -1, false) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_168(int iParam0, int iParam1)//Position - 0xCB06
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_35(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_170(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (BitTest(Global_96534, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_169(int iParam0)//Position - 0xCB5F
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_35(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_170(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96535, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_170(int iParam0)//Position - 0xCBA5
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_24())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_98159[func_171(iParam0)];
}

int func_171(int iParam0)//Position - 0xCBD6
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_172()//Position - 0xCC11
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	switch (iLocal_257)
	{
		case 0:
			if (!bLocal_279)
			{
				func_188();
				func_182();
				if (((((func_37(Local_68[4 /*14*/]) && func_37(Local_68[0 /*14*/])) && func_37(Local_68[5 /*14*/])) && func_37(Local_65[1 /*2*/])) && func_37(Local_65[2 /*2*/])) && func_37(Local_65[0 /*2*/]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65[0 /*2*/], -1521.8293f, 2725.0034f, 16.64367f, -1600.763f, 2794.8755f, 21.45629f, 30f, false, true, 0) && PED::IS_PED_IN_VEHICLE(Local_68[4 /*14*/], Local_65[0 /*2*/], false))
					{
						iLocal_257 = 2;
						iLocal_292 = 0;
					}
					fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false));
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false)) > fVar1)
					{
						fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false));
					}
					fVar3 = (11f + ((11f / (100f - 40f)) * 40f));
					fVar2 = func_181((((-11f / (100f - 40f)) * fVar1) + fVar3), 0f, 11f);
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_68[0 /*14*/], Local_65[1 /*2*/]))
					{
						TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_68[0 /*14*/], fVar2);
					}
				}
			}
			else
			{
				if (func_37(Local_65[0 /*2*/]))
				{
					Local_283 = { ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false) };
				}
				iLocal_259 = 0;
				iLocal_258 = 0;
				iLocal_257 = 1;
			}
			break;
		
		case 2:
			if (!bLocal_279)
			{
				func_182();
				if (((((func_37(Local_68[4 /*14*/]) && func_37(Local_68[0 /*14*/])) && func_37(Local_68[5 /*14*/])) && func_37(Local_65[1 /*2*/])) && func_37(Local_65[2 /*2*/])) && func_37(Local_65[0 /*2*/]))
				{
					switch (iLocal_292)
					{
						case 0:
							if (!func_190(Local_68[0 /*14*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
							{
								if (iLocal_260 == 2 || (iLocal_260 == 3 && fLocal_262 > 0.8f))
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar4);
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_65[1 /*2*/], -1785.4601f, 3169.6255f, 31.93f, 4, 10f, 786603, 3f, 3f, true);
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_65[1 /*2*/], -1885.8746f, 3006.1519f, 31.81027f, 4, 10f, 786603, -1f, -1f, true);
									TASK::CLOSE_SEQUENCE_TASK(iVar4);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[0 /*14*/], iVar4);
									TASK::CLEAR_SEQUENCE_TASK(&iVar4);
								}
							}
							if (!func_190(Local_68[4 /*14*/], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
							{
								TASK::TASK_VEHICLE_ESCORT(Local_68[4 /*14*/], Local_65[0 /*2*/], Local_65[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (!func_190(Local_68[5 /*14*/], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
							{
								TASK::TASK_VEHICLE_ESCORT(Local_68[5 /*14*/], Local_65[2 /*2*/], Local_65[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (ENTITY::IS_ENTITY_AT_COORD(Local_68[0 /*14*/], -1885.8746f, 3006.1519f, 31.81027f, 5f, 5f, 5f, false, true, 0))
							{
								iVar0 = 0;
								while (iVar0 <= (9 - 1))
								{
									if (func_37(Local_68[iVar0 /*14*/]))
									{
										PED::SET_PED_AS_COP(Local_68[iVar0 /*14*/], true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 1, true);
										if ((iVar0 == 0 || iVar0 == 5) || iVar0 == 4)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(Local_68[iVar0 /*14*/], 200, 65536);
										}
										else if ((iVar0 == 1 || iVar0 == 6) || iVar0 == 7)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(Local_68[iVar0 /*14*/], 0, 65536);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(Local_68[iVar0 /*14*/], 1000, 65536);
										}
										func_206(&(Local_68[iVar0 /*14*/]), 1, 1, 1);
									}
									iVar0++;
								}
								iLocal_292++;
							}
							break;
						
						case 1:
							break;
						}
				}
			}
			else
			{
				if (func_37(Local_65[0 /*2*/]))
				{
					Local_283 = { ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], true) };
				}
				iLocal_259 = 0;
				iLocal_258 = 0;
				iLocal_257 = 1;
			}
			break;
		
		case 1:
			PED::GET_CLOSEST_PED(Local_283, 50f, true, false, &iVar5, false, false, -1);
			if (func_37(iVar5))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar5, 2, false);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar5, 2048, false);
			}
			switch (iLocal_258)
			{
				case 0:
					switch (iLocal_259)
					{
						case 0:
							iLocal_259 = func_180(Local_65[0 /*2*/]);
							break;
						
						case 1:
							if (func_37(Local_68[0 /*14*/]) && func_37(Local_65[1 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[0 /*14*/], Local_65[1 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									if (ENTITY::GET_ENTITY_SPEED(Local_68[0 /*14*/]) > 5f)
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[1 /*2*/], 5, 1000);
									}
									else
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[1 /*2*/], 14, 1500);
									}
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 720, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[0 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if (func_37(Local_68[4 /*14*/]) && func_37(Local_65[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[4 /*14*/], Local_65[0 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									if (ENTITY::GET_ENTITY_SPEED(Local_68[4 /*14*/]) > 5f)
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[0 /*2*/], 4, 2500);
									}
									else
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[0 /*2*/], 13, 1500);
									}
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[4 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if ((func_37(Local_68[5 /*14*/]) && func_37(Local_65[2 /*2*/])) && func_37(Local_65[1 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[5 /*14*/], Local_65[2 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false)) < 1000f)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_65[2 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[1 /*2*/], -3f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[2 /*2*/], 5, 1000);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[5 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							iLocal_258 = 1;
							break;
						
						case 2:
							if (func_37(Local_68[0 /*14*/]) && func_37(Local_65[1 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[0 /*14*/], Local_65[1 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[1 /*2*/], 5, 1500);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 900, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[0 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if (func_37(Local_68[4 /*14*/]) && func_37(Local_65[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[4 /*14*/], Local_65[0 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[0 /*2*/], 5, 1000);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 100, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[4 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if ((func_37(Local_68[5 /*14*/]) && func_37(Local_65[2 /*2*/])) && func_37(Local_65[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[5 /*14*/], Local_65[2 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false)) < 1000f)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_65[2 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 120, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[5 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							iLocal_258 = 1;
							break;
						
						case 3:
							if ((func_37(Local_68[0 /*14*/]) && func_37(Local_65[1 /*2*/])) && func_37(Local_65[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[0 /*14*/], Local_65[1 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[1 /*2*/], 6, 500);
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false)) < 1000f)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_65[1 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[2 /*2*/], 2f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[1 /*2*/], 5, 1000);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 420, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[0 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if (func_37(Local_68[4 /*14*/]) && func_37(Local_65[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[4 /*14*/], Local_65[0 /*2*/], false))
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_68[4 /*14*/]) > 5f)
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[0 /*2*/], 5, 1500);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 380, 65536);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
										TASK::TASK_PERFORM_SEQUENCE(Local_68[4 /*14*/], iLocal_269);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
									}
								}
							}
							if (func_37(Local_68[5 /*14*/]) && func_37(Local_65[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[5 /*14*/], Local_65[2 /*2*/], false))
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_68[5 /*14*/]) > 5f)
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[2 /*2*/], 4, 1500);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 250, 65536);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
										TASK::TASK_PERFORM_SEQUENCE(Local_68[5 /*14*/], iLocal_269);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
									}
								}
							}
							iLocal_258 = 1;
							break;
						
						case 4:
							if (func_37(Local_68[0 /*14*/]) && func_37(Local_65[1 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[0 /*14*/], Local_65[1 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[1 /*2*/], 4, 1500);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 800, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[0 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if (func_37(Local_68[4 /*14*/]) && func_37(Local_65[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[4 /*14*/], Local_65[0 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[0 /*2*/], 4, 1500);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 50, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[4 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if ((func_37(Local_68[5 /*14*/]) && func_37(Local_65[2 /*2*/])) && func_37(Local_65[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[5 /*14*/], Local_65[2 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false)) < 1000f)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_65[2 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[5 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							iLocal_258 = 1;
							break;
					}
					break;
				
				case 1:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (func_37(Local_68[iVar0 /*14*/]) && func_37(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_ACCURACY(Local_68[iVar0 /*14*/], 10);
							PED::SET_PED_SEEING_RANGE(Local_68[iVar0 /*14*/], 580f);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 0, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 50, true);
							PED::SET_PED_CONFIG_FLAG(Local_68[iVar0 /*14*/], 184, false);
							PED::SET_PED_COMBAT_MOVEMENT(Local_68[iVar0 /*14*/], 1);
							func_179(iVar0);
							if ((iVar0 != 0 && iVar0 != 4) && iVar0 != 5)
							{
								if (iVar0 == 6)
								{
									iVar6 = 300;
								}
								else if (iVar0 == 1)
								{
									iVar6 = 900;
								}
								else if (iVar0 == 7)
								{
									iVar6 = 250;
								}
								else if (iVar0 == 2)
								{
									iVar6 = 350;
								}
								else if (iVar0 == 8)
								{
									iVar6 = 500;
								}
								else if (iVar0 == 3)
								{
									iVar6 = 650;
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_68[iVar0 /*14*/], false))
								{
									TASK::TASK_PAUSE(0, iVar6);
								}
								TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar6, 65536);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
								TASK::TASK_PERFORM_SEQUENCE(Local_68[iVar0 /*14*/], iLocal_269);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, true);
							}
						}
						iVar0++;
					}
					iLocal_258 = func_178();
					break;
				
				case 2:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (func_37(Local_68[iVar0 /*14*/]) && func_37(PLAYER::PLAYER_PED_ID()))
						{
							func_179(iVar0);
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_287 = 8000;
							}
							else
							{
								iLocal_287 = 12000;
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_68[iVar0 /*14*/], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 75f)
							{
								if (!Local_68[iVar0 /*14*/].f_12 && (MISC::GET_GAME_TIMER() - iLocal_288) > iLocal_287)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 51, true);
									Local_68[iVar0 /*14*/].f_12 = 1;
									iLocal_288 = MISC::GET_GAME_TIMER();
								}
							}
							else
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_68[iVar0 /*14*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 51, false);
								Local_68[iVar0 /*14*/].f_12 = 0;
							}
							if (!func_190(Local_68[iVar0 /*14*/], joaat("SCRIPT_TASK_COMBAT"), 1))
							{
								TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_258 = func_178();
					break;
				
				case 3:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (func_37(Local_68[iVar0 /*14*/]) && func_37(PLAYER::PLAYER_PED_ID()))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_68[iVar0 /*14*/], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 120f)
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_68[iVar0 /*14*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 51, false);
								Local_68[iVar0 /*14*/].f_12 = 0;
								func_179(iVar0);
							}
							if (!func_190(Local_68[iVar0 /*14*/], joaat("SCRIPT_TASK_COMBAT"), 1))
							{
								TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_258 = func_178();
					break;
				
				case 4:
					if (func_177(PLAYER::PLAYER_PED_ID(), Local_49, 1) < 30f)
					{
						iVar7 = 1;
					}
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if ((func_37(PLAYER::PLAYER_PED_ID()) && func_37(Local_68[iVar0 /*14*/])) && func_37(Local_65[0 /*2*/]))
						{
							if (iVar7 && func_177(Local_68[iVar0 /*14*/], Local_49, 1) < 30f)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, true);
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_68[iVar0 /*14*/], false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_68[iVar0 /*14*/], 2);
								if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
								{
									TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_68[iVar0 /*14*/], false), true) > (120f / 2f))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 1, true);
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_68[iVar0 /*14*/], false), true) > (120f * 2f))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(Local_68[iVar0 /*14*/], false) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_68[iVar0 /*14*/]))
									{
										iVar9 = func_176(Local_68[iVar0 /*14*/]);
										if (func_37(iVar9))
										{
											iVar8 = -1;
											if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar9, -1, false))
											{
												iVar8 = -1;
											}
											else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar9, 0, false))
											{
												iVar8 = 0;
											}
											else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar9, 1, false))
											{
												iVar8 = 1;
											}
											else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar9, 2, false))
											{
												iVar8 = 2;
											}
											if (func_175(iVar9))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_68[iVar0 /*14*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
												{
													TASK::TASK_ENTER_VEHICLE(Local_68[iVar0 /*14*/], iVar9, 1000, iVar8, 2f, 16, 0);
												}
												PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, false);
											}
											else
											{
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_68[iVar0 /*14*/]));
											}
										}
										else
										{
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_68[iVar0 /*14*/]));
										}
									}
									else if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
									{
										TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
									}
								}
								else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_68[iVar0 /*14*/]))
								{
									if (func_174(PLAYER::PLAYER_PED_ID(), Local_68[iVar0 /*14*/], 1) < 35f)
									{
										if (func_173(Local_68[iVar0 /*14*/], PED::GET_VEHICLE_PED_IS_IN(Local_68[iVar0 /*14*/], false)) == -1)
										{
											if ((MISC::GET_GAME_TIMER() - iLocal_290) > 40000)
											{
												if (bLocal_291)
												{
													bLocal_291 = false;
													iLocal_290 = MISC::GET_GAME_TIMER();
												}
												else
												{
													bLocal_291 = true;
													iLocal_290 = MISC::GET_GAME_TIMER();
												}
											}
											if (bLocal_291)
											{
												if (!func_190(Local_68[iVar0 /*14*/], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
												{
													TASK::TASK_VEHICLE_ESCORT(Local_68[iVar0 /*14*/], PED::GET_VEHICLE_PED_IS_IN(Local_68[iVar0 /*14*/], false), Local_65[0 /*2*/], 1, 11f, 786468, -1f, 20, 0f);
												}
											}
											else if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
											{
												TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
											}
										}
										else if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
										{
											TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 2f && func_174(PLAYER::PLAYER_PED_ID(), Local_68[iVar0 /*14*/], 1) < 20f)
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, true);
										}
										else
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, false);
										}
									}
									else if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
									{
										TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
									}
								}
								else if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
								{
									TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, true);
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_68[iVar0 /*14*/], false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_68[iVar0 /*14*/], 2);
							}
						}
						iVar0++;
					}
					iLocal_258 = func_178();
					break;
			}
			break;
	}
}

int func_173(int iParam0, int iParam1)//Position - 0xDE53
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

float func_174(int iParam0, int iParam1, bool bParam2)//Position - 0xDEC5
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

int func_175(int iParam0)//Position - 0xDF23
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2, false))
		{
			return 1;
		}
	}
	return 0;
}

var func_176(int iParam0)//Position - 0xDF73
{
	var uVar0;
	float fVar1;
	
	uVar0 = Local_65[1 /*2*/];
	fVar1 = 9999f;
	if (func_37(Local_65[1 /*2*/]))
	{
		if (func_174(iParam0, Local_65[1 /*2*/], 1) < fVar1)
		{
			fVar1 = func_174(iParam0, Local_65[1 /*2*/], 1);
			if (func_175(Local_65[1 /*2*/]))
			{
				uVar0 = Local_65[1 /*2*/];
			}
			else
			{
				uVar0 = Local_65[2 /*2*/];
			}
		}
	}
	if (func_37(Local_65[2 /*2*/]))
	{
		if (func_174(iParam0, Local_65[2 /*2*/], 1) < fVar1)
		{
			fVar1 = func_174(iParam0, Local_65[2 /*2*/], 1);
			if (func_175(Local_65[2 /*2*/]))
			{
				uVar0 = Local_65[2 /*2*/];
			}
			else
			{
				uVar0 = Local_65[1 /*2*/];
			}
		}
	}
	return uVar0;
}

float func_177(int iParam0, struct<3> Param1, bool bParam2)//Position - 0xE01D
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

int func_178()//Position - 0xE057
{
	if (func_37(PLAYER::PLAYER_PED_ID()) && func_37(Local_65[0 /*2*/]))
	{
		if (func_177(Local_65[0 /*2*/], Local_283, 1) > 120f)
		{
			return 4;
		}
		else if (func_177(PLAYER::PLAYER_PED_ID(), Local_283, 1) <= 120f)
		{
			return 2;
		}
		else if (func_177(PLAYER::PLAYER_PED_ID(), Local_283, 1) > 120f && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false))
		{
			return 3;
		}
	}
	return 2;
}

void func_179(int iParam0)//Position - 0xE0E5
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_37(Local_68[iParam0 /*14*/]))
	{
		if (iParam0 == 0)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_50 };
				fVar2 = 3.8f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
		}
		else if (iParam0 == 1)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_54 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_54 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[1 /*2*/];
			}
		}
		else if (iParam0 == 2)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_53 };
				fVar2 = 3.8f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
		}
		else if (iParam0 == 3)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_54 };
				fVar2 = 4.5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
		}
		else if (iParam0 == 5)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_56 };
				fVar2 = 2.8f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_51 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
		}
		else if (iParam0 == 6)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_55 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_56 };
				fVar2 = 2.8f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
		}
		else if (iParam0 == 7)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_52 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
		}
		else if (iParam0 == 8)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_51 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_54 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
		}
		else if (iParam0 == 4)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_52 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_55 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_55 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_51 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
		}
		if (!Local_68[iParam0 /*14*/].f_12)
		{
			if (func_37(iVar0))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_68[iParam0 /*14*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Var1), fVar2, false, false);
			}
			else if (func_37(Local_65[0 /*2*/]))
			{
				if (func_180(Local_65[0 /*2*/]) == 1)
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_68[iParam0 /*14*/], Local_65[0 /*2*/], Local_53, 3.8f, false);
				}
				else if (func_180(Local_65[0 /*2*/]) == 2)
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_68[iParam0 /*14*/], Local_65[0 /*2*/], -6f, 0f, -0.5f, 6f, false);
				}
				else if (func_180(Local_65[0 /*2*/]) == 3)
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_68[iParam0 /*14*/], Local_65[0 /*2*/], Local_50, 3.8f, false);
				}
				else if (func_180(Local_65[0 /*2*/]) == 4)
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_68[iParam0 /*14*/], Local_65[0 /*2*/], 6f, 0f, -0.5f, 6f, false);
				}
			}
		}
	}
}

int func_180(int iParam0)//Position - 0xE6A9
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (iParam0 == 0)
	{
		iParam0 = Local_65[0 /*2*/];
	}
	if (func_37(PLAYER::PLAYER_PED_ID()) && func_37(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, Var0) };
		fVar2 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1);
		if (Var1.f_0 < 0f)
		{
			fVar2 = (fVar2 * -1f);
		}
	}
	if ((fVar2 <= 45f && fVar2 >= 0f) || (fVar2 >= -45f && fVar2 <= 0f))
	{
		return 1;
	}
	else if (fVar2 <= 135f && fVar2 >= 0f)
	{
		return 2;
	}
	else if (fVar2 >= -135f && fVar2 <= 0f)
	{
		return 4;
	}
	else
	{
		return 3;
	}
	return 1;
}

float func_181(float fParam0, float fParam1, float fParam2)//Position - 0xE77B
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_182()//Position - 0xE7A2
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	struct<3> Var8;
	struct<3> Var9;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_282, true);
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (func_37(Local_68[iVar0 /*14*/]))
		{
			if (((((PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0) || PED::IS_PED_IN_MELEE_COMBAT(Local_68[iVar0 /*14*/])) || PED::IS_PED_BEING_STUNNED(Local_68[iVar0 /*14*/], 0)) || PED::IS_PED_BEING_STEALTH_KILLED(Local_68[iVar0 /*14*/])) || PED::IS_PED_BEING_JACKED(Local_68[iVar0 /*14*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), true))
			{
				bLocal_279 = true;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_289) > 800)
			{
				if (PED::HAS_PED_RECEIVED_EVENT(Local_68[iVar0 /*14*/], 125) || PED::HAS_PED_RECEIVED_EVENT(Local_68[iVar0 /*14*/], 126))
				{
					bLocal_279 = true;
				}
			}
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID()) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_68[iVar0 /*14*/]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_68[iVar0 /*14*/])))
			{
				if (iLocal_282 != 0)
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iLocal_282) != joaat("GROUP_MELEE") && iLocal_282 != joaat("WEAPON_UNARMED"))
					{
						if ((MISC::GET_GAME_TIMER() - Local_68[iVar0 /*14*/].f_11) > 800)
						{
							bLocal_279 = true;
						}
					}
				}
			}
			else
			{
				Local_68[iVar0 /*14*/].f_11 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			bLocal_279 = true;
		}
		iVar0++;
	}
	if (func_37(Local_65[1 /*2*/]))
	{
		if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_65[1 /*2*/], PLAYER::PLAYER_PED_ID(), false) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), Local_65[1 /*2*/], 0, -1)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[1 /*2*/], true)) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[1 /*2*/]))
		{
			bLocal_279 = true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Local_65[1 /*2*/]))
				{
					bLocal_279 = true;
				}
			}
		}
		if (func_186(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false), 30f, 0))
		{
			bLocal_279 = true;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65[1 /*2*/]) && fLocal_284 >= 7f)
			{
				bLocal_279 = true;
			}
			Var1 = { func_185(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) - ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false)) };
			Var2 = { ENTITY::GET_ENTITY_VELOCITY(Local_65[1 /*2*/]) - ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) };
			fLocal_284 = func_184(Var2, Var1);
		}
	}
	else
	{
		bLocal_279 = true;
	}
	if (func_37(Local_65[2 /*2*/]))
	{
		if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_65[2 /*2*/], PLAYER::PLAYER_PED_ID(), false) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), Local_65[2 /*2*/], 0, -1)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[2 /*2*/], true)) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[2 /*2*/]))
		{
			bLocal_279 = true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Local_65[2 /*2*/]))
				{
					bLocal_279 = true;
				}
			}
		}
		if (func_186(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false), 30f, 0))
		{
			bLocal_279 = true;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65[2 /*2*/]) && fLocal_286 >= 7f)
			{
				bLocal_279 = true;
			}
			Var3 = { func_185(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) - ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false)) };
			Var4 = { ENTITY::GET_ENTITY_VELOCITY(Local_65[2 /*2*/]) - ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) };
			fLocal_286 = func_184(Var4, Var3);
		}
	}
	else
	{
		bLocal_279 = true;
	}
	if (func_37(Local_65[0 /*2*/]))
	{
		if (func_174(PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1) < 45f && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			bLocal_279 = true;
		}
		if (func_186(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false), 30f, 0))
		{
			bLocal_279 = true;
		}
		if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_65[0 /*2*/], PLAYER::PLAYER_PED_ID(), false) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], 0, -1)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], true)) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/]))
		{
			bLocal_279 = true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Local_65[0 /*2*/]))
				{
					bLocal_279 = true;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/]) && fLocal_285 >= 7f)
			{
				bLocal_279 = true;
			}
			Var5 = { func_185(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) - ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false)) };
			Var6 = { ENTITY::GET_ENTITY_VELOCITY(Local_65[0 /*2*/]) - ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) };
			fLocal_285 = func_184(Var6, Var5);
		}
		if (func_183())
		{
			iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, false))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, Local_65[0 /*2*/]))
				{
					bLocal_279 = true;
				}
				Var8 = { func_185(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) - ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false)) };
				Var9 = { ENTITY::GET_ENTITY_VELOCITY(Local_65[0 /*2*/]) - ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) };
				fLocal_285 = func_184(Var9, Var8);
			}
		}
	}
	else
	{
		bLocal_279 = true;
	}
}

bool func_183()//Position - 0xED6F
{
	return BitTest(Global_2793044.f_848, 2);
}

float func_184(struct<3> Param0, struct<3> Param1)//Position - 0xED80
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_185(struct<3> Param0)//Position - 0xEDA1
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

int func_186(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0xEDE0
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_187(Param0 + Param1))
	{
		if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_AREA(5, Param1, Param0) || (FIRE::IS_EXPLOSION_IN_AREA(2, Param1, Param0) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_AREA(20, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(4, Param1, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(28, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(32, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(25, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(9, Param1, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(3, Param1, Param0) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_AREA(6, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(0, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(1, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(23, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(34, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(14, Param1, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(30, Param1, Param0) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_AREA(12, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(7, Param1, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(21, Param1, Param0) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_AREA(18, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(15, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(10, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(27, Param1, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_SPHERE(5, Param2, fParam3) || (FIRE::IS_EXPLOSION_IN_SPHERE(2, Param2, fParam3) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_SPHERE(20, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(4, Param2, fParam3)) || (FIRE::IS_EXPLOSION_IN_SPHERE(28, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(32, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(25, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(9, Param2, fParam3)) || (FIRE::IS_EXPLOSION_IN_SPHERE(3, Param2, fParam3) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_SPHERE(6, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(23, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(34, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(14, Param2, fParam3)) || (FIRE::IS_EXPLOSION_IN_SPHERE(30, Param2, fParam3) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_SPHERE(12, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, Param2, fParam3)) || (FIRE::IS_EXPLOSION_IN_SPHERE(21, Param2, fParam3) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_SPHERE(18, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(15, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(27, Param2, fParam3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_187(struct<3> Param0)//Position - 0xF1EB
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_188()//Position - 0xF215
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	if (((((func_37(Local_65[0 /*2*/]) && func_37(Local_65[1 /*2*/])) && func_37(Local_65[2 /*2*/])) && func_37(Local_68[4 /*14*/])) && func_37(Local_68[0 /*14*/])) && func_37(Local_68[5 /*14*/]))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[0 /*2*/], 0f, func_181(func_174(Local_65[0 /*2*/], Local_65[1 /*2*/], 1), 3f, 25f), 5.5f) };
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[0 /*2*/], 0f, 0f, -6f) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[1 /*2*/], 0f, 20f, 5f) };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[1 /*2*/], 0f, 0f, -6f) };
		Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[2 /*2*/], 0f, func_181(func_174(Local_65[2 /*2*/], Local_65[0 /*2*/], 1), 3f, 25f), 5f) };
		Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[2 /*2*/], 0f, 0f, -6f) };
		switch (iLocal_256)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var2, Var3, 9f, false, true, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_65[1 /*2*/]) < 1f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
					{
						fLocal_1330[1] = (fLocal_1330[1] + MISC::GET_FRAME_TIME());
					}
					else if (fLocal_1330[1] > 0f)
					{
						fLocal_1330[1] = (fLocal_1330[1] - (MISC::GET_FRAME_TIME() * 10f));
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, 9f, false, true, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_65[0 /*2*/]) < 1f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
					{
						fLocal_1330[0] = (fLocal_1330[0] + MISC::GET_FRAME_TIME());
					}
					else if (fLocal_1330[0] > 0f)
					{
						fLocal_1330[0] = (fLocal_1330[0] - (MISC::GET_FRAME_TIME() * 10f));
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var5, 9f, false, true, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_65[2 /*2*/]) < 1f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
					{
						fLocal_1330[2] = (fLocal_1330[2] + MISC::GET_FRAME_TIME());
					}
					else if (fLocal_1330[2] > 0f)
					{
						fLocal_1330[2] = (fLocal_1330[2] - (MISC::GET_FRAME_TIME() * 10f));
					}
				}
				if (fLocal_1330[1] > 1.5f)
				{
					iLocal_295 = Local_68[0 /*14*/];
					TASK::CLEAR_PED_TASKS(Local_68[4 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_68[0 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_68[5 /*14*/]);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[0 /*2*/], 4f, 1, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[1 /*2*/], 4f, 1, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[2 /*2*/], 4f, 1, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_68[0 /*14*/], false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000, false, true);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 3f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
					TASK::TASK_PERFORM_SEQUENCE(Local_68[0 /*14*/], iLocal_269);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
					iLocal_256 = 1;
				}
				else if (fLocal_1330[0] > 1.5f)
				{
					iLocal_295 = Local_68[4 /*14*/];
					TASK::CLEAR_PED_TASKS(Local_68[4 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_68[0 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_68[5 /*14*/]);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[0 /*2*/], 4f, 1, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[1 /*2*/], 4f, 1, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[2 /*2*/], 4f, 1, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_68[4 /*14*/], false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000, false, true);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 3f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
					TASK::TASK_PERFORM_SEQUENCE(Local_68[4 /*14*/], iLocal_269);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
					iLocal_256 = 1;
				}
				else if (fLocal_1330[2] > 1.5f)
				{
					iLocal_295 = Local_68[5 /*14*/];
					TASK::CLEAR_PED_TASKS(Local_68[4 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_68[0 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_68[5 /*14*/]);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[0 /*2*/], 4f, 1, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[1 /*2*/], 4f, 1, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[2 /*2*/], 4f, 1, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_68[5 /*14*/], false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000, false, true);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 3f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
					TASK::TASK_PERFORM_SEQUENCE(Local_68[5 /*14*/], iLocal_269);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
					iLocal_256 = 1;
				}
				else
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(Local_68[5 /*14*/], false) && PED::IS_PED_IN_ANY_VEHICLE(Local_68[0 /*14*/], false)) && PED::IS_PED_IN_ANY_VEHICLE(Local_68[4 /*14*/], false))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_65[1 /*2*/]))
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_68[0 /*14*/], Local_65[1 /*2*/], &cLocal_296, 786603, 0, 24, -1, 11f, false, 2f);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_68[4 /*14*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
						{
							TASK::TASK_VEHICLE_ESCORT(Local_68[4 /*14*/], Local_65[0 /*2*/], Local_65[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_68[5 /*14*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
						{
							TASK::TASK_VEHICLE_ESCORT(Local_68[5 /*14*/], Local_65[2 /*2*/], Local_65[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Local_65[0 /*2*/], true);
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_65[0 /*2*/], true);
						VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Local_65[0 /*2*/], true);
						VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Local_65[1 /*2*/], true);
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_65[1 /*2*/], true);
						VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Local_65[1 /*2*/], true);
						VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Local_65[2 /*2*/], true);
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_65[2 /*2*/], true);
						VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Local_65[2 /*2*/], true);
					}
					iLocal_294 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 1:
				switch (iLocal_293)
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_295, false))
						{
							func_34(&uLocal_69, 1, iLocal_295, "Armyped", 0, 1);
							iLocal_294 = MISC::GET_GAME_TIMER();
							fLocal_1330[1] = 0f;
							fLocal_1330[2] = 0f;
							fLocal_1330[0] = 0f;
							iLocal_293++;
						}
						break;
					
					case 1:
						if ((MISC::GET_GAME_TIMER() - iLocal_294) > 8000 && !func_9())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_295, false))
							{
								func_34(&uLocal_69, 1, iLocal_295, "Armyped", 0, 1);
								if (iLocal_281)
								{
									iLocal_281 = 0;
								}
								else
								{
									iLocal_294 = MISC::GET_GAME_TIMER();
									iLocal_293++;
								}
							}
						}
						break;
					
					case 2:
						if ((MISC::GET_GAME_TIMER() - iLocal_294) > 8000 && !func_9())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_295, false))
							{
								func_34(&uLocal_69, 1, iLocal_295, "Armyped", 0, 1);
								if (iLocal_281)
								{
									iLocal_281 = 0;
								}
								else
								{
									iLocal_294 = MISC::GET_GAME_TIMER();
									iLocal_293++;
								}
							}
						}
						break;
					
					case 3:
						if ((MISC::GET_GAME_TIMER() - iLocal_294) > 8000 && !func_9())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_295, false))
							{
								func_34(&uLocal_69, 1, iLocal_295, "Armyped", 0, 1);
								if (iLocal_281)
								{
									iLocal_281 = 0;
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, 0f, -1f), 1000, joaat("FIRING_PATTERN_SINGLE_SHOT"));
									TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 4f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
									TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_295, iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
									iLocal_294 = MISC::GET_GAME_TIMER();
									iLocal_289 = MISC::GET_GAME_TIMER();
									iLocal_293++;
								}
							}
						}
						break;
					
					case 4:
						break;
				}
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, 9f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var2, Var3, 9f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var5, 9f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_295, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_295, PLAYER::PLAYER_PED_ID(), -1, false);
					}
					if (SYSTEM::TIMERA() > 3000)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_295, false))
						{
							if (iLocal_295 == Local_68[4 /*14*/])
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_295, Local_65[0 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_295 == Local_68[0 /*14*/])
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_295, Local_65[1 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_295 == Local_68[5 /*14*/])
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_295, Local_65[2 /*2*/], 20000, -1, 2f, 1, 0);
							}
						}
						iLocal_256 = 2;
					}
				}
				else
				{
					if (iLocal_293 == 4)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_294) > 9000 && !func_9())
						{
							bLocal_279 = true;
						}
					}
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, 9f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var2, Var3, 9f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var5, 9f, false, true, 0))
				{
					iLocal_281 = 0;
					iLocal_256 = 0;
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_295, false))
				{
					TASK::TASK_VEHICLE_ESCORT(Local_68[4 /*14*/], Local_65[0 /*2*/], Local_65[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_68[0 /*14*/], Local_65[1 /*2*/], &cLocal_296, 786603, 0, 24, -1, 11f, false, 2f);
					TASK::TASK_VEHICLE_ESCORT(Local_68[5 /*14*/], Local_65[2 /*2*/], Local_65[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					iLocal_281 = 1;
					iLocal_256 = 0;
				}
				break;
			}
	}
}

void func_189(int iParam0)//Position - 0xFBD7
{
	bool bVar0;
	int iVar1;
	
	Global_63363 = 0;
	if (!Global_63587[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_75457)
	{
		if (Global_75458[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_75458[iVar1 /*9*/].f_1 = 1;
			Global_75458[iVar1 /*9*/].f_2 = 0f;
			if (Global_75458[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_190(int iParam0, int iParam1, bool bParam2)//Position - 0xFC48
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_191(int iParam0, int iParam1, bool bParam2)//Position - 0xFC8E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75457)
	{
		if (Global_75458[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_75458[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_75458[iVar0 /*9*/].f_1 = (Global_75458[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_75458[iVar0 /*9*/] != -1)
	{
		if (Global_63587[Global_75458[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_75458[iVar0 /*9*/].f_1 > 1)
			{
				Global_75458[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_75458[iVar0 /*9*/].f_1 < 0)
			{
				Global_75458[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

int func_192(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)//Position - 0xFD38
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
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && iParam11)
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
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, true, iParam8);
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
			HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
		if (!iParam9 == -1 || iParam12)
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
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
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

int func_193(var uParam0)//Position - 0xFF2C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_194(int* iParam0)//Position - 0xFF86
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

void func_195(int iParam0)//Position - 0xFFBE
{
	char* sVar0;
	
	AUDIO::TRIGGER_MUSIC_EVENT("RHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 3:
			sVar0 = "RHP_FDES";
			break;
		
		case 4:
			sVar0 = "RHP_TRKSTCK";
			break;
		
		case 2:
			sVar0 = "RHP_FEND";
			break;
		
		case 5:
			sVar0 = "RHP_FABN";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	func_197(sVar0);
	while (!func_196())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_67[iLocal_270]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_67[iLocal_270]));
		}
		iLocal_270++;
	}
	func_345();
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_196()//Position - 0x1007E
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100681 == 7 || Global_100681 == 8)
	{
		return 1;
	}
	return 0;
}

void func_197(char* sParam0)//Position - 0x100AB
{
	func_205(sParam0);
	func_198(0);
}

void func_198(int iParam0)//Position - 0x100BE
{
	int iVar0;
	
	if (Global_113648.f_9087 || func_7(0))
	{
		iVar0 = func_5();
		if (!func_199(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 5);
		Global_100717 = iParam0;
	}
}

int func_199(int iParam0)//Position - 0x10103
{
	int iVar0;
	int iVar1;
	
	func_204();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91433[iParam0 /*5*/];
	iVar1 = Global_78828.f_109[iVar0 /*4*/];
	func_203(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_200(&(Global_113648.f_2365.f_539), iVar1);
	if (Global_94856 == Global_100718)
	{
		Global_113648.f_9087.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91469[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113648.f_9087.f_330[iVar1 /*6*/].f_2++;
	Global_94856 = Global_100718;
	if (iParam0 == -1)
	{
		if (Global_113648.f_9087)
		{
		}
		return 0;
	}
	if (BitTest(Global_91433[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91433[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_200(var uParam0, int iParam1)//Position - 0x10213
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113648.f_18535[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113648.f_9087.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_202(Global_113648.f_18535[iVar0], &Var2, &fVar3))
			{
				Global_113648.f_18535[iVar0] = 318;
				func_201(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98071[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_9 = 0f;
				Global_98071[iVar0 /*29*/].f_12 = 0f;
				Global_98071[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_10 = 0f;
				Global_98071[iVar0 /*29*/].f_13 = 0f;
				Global_98071[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_11 = 0f;
				Global_98071[iVar0 /*29*/].f_14 = 0f;
				Global_98071[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_26 = 0f;
				Global_98071[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_27 = 0f;
				Global_98071[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_201(var uParam0)//Position - 0x103D9
{
	*uParam0 = -15;
}

int func_202(int iParam0, var uParam1, float fParam2)//Position - 0x103E7
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_202(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_202(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_203(int iParam0, bool bParam1)//Position - 0x10D56
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94666[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94666[iParam0 /*2*/] = 0;
	}
}

void func_204()//Position - 0x10D94
{
	Global_100716 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791))
		{
			switch (func_24())
			{
				case 0:
					StringCopy(&Global_78791, "CMN_MARRE" /* GXT: ~s~Michael was arrested. */, 16);
					break;
				
				case 1:
					StringCopy(&Global_78791, "CMN_FARRE" /* GXT: ~s~Franklin was arrested. */, 16);
					break;
				
				case 2:
					StringCopy(&Global_78791, "CMN_TARRE" /* GXT: ~s~Trevor was arrested. */, 16);
					break;
			}
			StringCopy(&Global_78795, "", 16);
		}
		Global_100716 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791))
		{
			switch (func_24())
			{
				case 0:
					StringCopy(&Global_78791, "CMN_MDIED" /* GXT: ~s~Michael died. */, 16);
					break;
				
				case 1:
					StringCopy(&Global_78791, "CMN_FDIED" /* GXT: ~s~Franklin died. */, 16);
					break;
				
				case 2:
					StringCopy(&Global_78791, "CMN_TDIED" /* GXT: ~s~Trevor died. */, 16);
					break;
			}
			StringCopy(&Global_78795, "", 16);
		}
		Global_100716 = 0;
		MISC::SET_BIT(&(Global_100681.f_20), 25);
	}
}

void func_205(char* sParam0)//Position - 0x10E81
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_78791, sParam0, 16);
			StringCopy(&Global_78795, "", 16);
			if (RECORDING::IS_REPLAY_RECORDING())
			{
				RECORDING::STOP_REPLAY_RECORDING();
			}
		}
	}
}

void func_206(int* iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x10EC0
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

void func_207()//Position - 0x10F10
{
	struct<3> Var0;
	float fVar1;
	
	if (bLocal_1328 == 1)
	{
		if (iLocal_1323 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
			else
			{
				func_119(iLocal_1329);
			}
		}
		else if (iLocal_1323 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_232();
			func_231(&uLocal_308);
			if (!func_230())
			{
				func_229(iLocal_1329, &Var0, &fVar1);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				func_228(&uLocal_308, Var0, 50f, 0);
			}
			func_225(iLocal_1324);
			while (!func_221(&uLocal_308))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_1324)
			{
				case 0:
					func_220();
					break;
				
				case 1:
					func_215();
					break;
				
				case 2:
					func_214();
					break;
				
				case 3:
					func_208();
					break;
			}
			bLocal_1328 = false;
			if (!func_230())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
}

void func_208()//Position - 0x11021
{
	func_212(1357.7001f, 3618.2803f, 33.8905f, 110.4135f);
	bLocal_279 = true;
	if (func_230())
	{
		func_209(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
}

void func_209(int iParam0, int iParam1, int iParam2)//Position - 0x1105F
{
	if (func_211() && func_230())
	{
		while (Global_100676 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_210(0);
	}
}

void func_210(int iParam0)//Position - 0x11123
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_100681.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_100681.f_20), 13);
	}
}

int func_211()//Position - 0x1114C
{
	if (Global_100681 == 10 || Global_100681 == 9)
	{
		return 1;
	}
	return 0;
}

void func_212(struct<3> Param0, float fParam1)//Position - 0x11170
{
	Local_65[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("barracks"), Param0, fParam1, true, true, false);
	ENTITY::SET_ENTITY_HEALTH(Local_65[0 /*2*/], ENTITY::GET_ENTITY_HEALTH(Local_65[0 /*2*/]) * 2, 0);
	VEHICLE::SET_VEHICLE_STRONG(Local_65[0 /*2*/], true);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_65[0 /*2*/], (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_65[0 /*2*/]) * 2f));
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Local_65[0 /*2*/], false);
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_65[0 /*2*/], (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_65[0 /*2*/]) * 2f));
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_65[0 /*2*/], false);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_65[0 /*2*/], false);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_65[0 /*2*/], true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_65[0 /*2*/], false, 0);
	func_213(Local_65[0 /*2*/], 0);
	iLocal_67[0] = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_01"), 1006.7649f, 2128.3196f, 48.0929f, true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_67[0], Local_65[0 /*2*/], 0, 0f, -0.5f, 1.5f, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
	iLocal_67[1] = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_01"), 1006.7649f, 2128.3196f, 48.0929f, true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_67[1], Local_65[0 /*2*/], 0, 0f, -2.85f, 1.5f, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_65[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
}

void func_213(var uParam0, int iParam1)//Position - 0x112B2
{
	Global_100681.f_22[iParam1] = uParam0;
}

void func_214()//Position - 0x112C6
{
	func_212(-248.6621f, 2950.0369f, 28.9996f, 93.5394f);
	bLocal_279 = true;
	if (func_230())
	{
		func_209(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
}

void func_215()//Position - 0x11304
{
	int iVar0;
	
	func_219(-284.0175f, 2949.1035f, 28.3715f, 46.1483f);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_218(iVar0, Local_65[1 /*2*/]);
		func_217(Local_68[iVar0 /*14*/], 0);
		iVar0++;
	}
	func_212(-248.6621f, 2950.0369f, 28.9996f, 93.5394f);
	func_216(-223.1415f, 2952.188f, 28.8053f, 121.2339f);
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		func_218(iVar0, Local_65[2 /*2*/]);
		func_217(Local_68[iVar0 /*14*/], 0);
		iVar0++;
	}
	bLocal_279 = true;
	if (func_230())
	{
		func_209(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
}

void func_216(struct<3> Param0, float fParam1)//Position - 0x113C3
{
	Local_65[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("crusader"), Param0, fParam1, true, true, false);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_65[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
}

void func_217(int iParam0, bool bParam1)//Position - 0x113F0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_63392[iVar0 /*2*/] != 0)
			{
				if (Global_63392[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_63391)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_63392[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_63392[iVar1 /*2*/] = iParam0;
	Global_63392[iVar1 /*2*/].f_1 = 7;
	Global_63391++;
}

void func_218(int iParam0, int iParam1)//Position - 0x1148B
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == Local_65[1 /*2*/] || iParam1 == Local_65[2 /*2*/])
	{
		iVar0 = joaat("S_M_Y_Marine_03");
	}
	else if (iParam1 == Local_65[0 /*2*/])
	{
		iVar0 = joaat("S_M_M_Marine_01");
	}
	if ((iParam0 == 0 || iParam0 == 5) || iParam0 == 4)
	{
		iVar1 = -1;
		iLocal_274 = joaat("WEAPON_PISTOL");
	}
	else if (iParam0 == 1 || iParam0 == 6)
	{
		iVar1 = 0;
		iLocal_274 = joaat("WEAPON_CARBINERIFLE");
	}
	else if (iParam0 == 2 || iParam0 == 7)
	{
		iVar1 = 1;
		iLocal_274 = joaat("WEAPON_SMG");
	}
	else if (iParam0 == 3 || iParam0 == 8)
	{
		iVar1 = 2;
		iLocal_274 = joaat("WEAPON_CARBINERIFLE");
	}
	Local_68[iParam0 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iParam1, 26, iVar0, iVar1, true, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_68[iParam0 /*14*/], iLocal_307);
	PED::SET_PED_AS_ENEMY(Local_68[iParam0 /*14*/], true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_68[iParam0 /*14*/], iLocal_274, -1, true, true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_68[iParam0 /*14*/], joaat("WEAPON_PISTOL"), -1, true, true);
	PED::SET_PED_MONEY(Local_68[iParam0 /*14*/], 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_68[iParam0 /*14*/], 2, 1, 0, 0);
	PED::SET_PED_ALERTNESS(Local_68[iParam0 /*14*/], 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_68[iParam0 /*14*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iParam0 /*14*/], 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iParam0 /*14*/], 1, false);
	PED::SET_PED_COMBAT_MOVEMENT(Local_68[iParam0 /*14*/], 1);
	PED::SET_PED_CONFIG_FLAG(Local_68[iParam0 /*14*/], 184, true);
	PED::SET_PED_CONFIG_FLAG(Local_68[iParam0 /*14*/], 272, true);
	AUDIO::STOP_PED_SPEAKING(Local_68[iParam0 /*14*/], true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_68[iParam0 /*14*/], true, 1);
	PED::SET_PED_ACCURACY(Local_68[iParam0 /*14*/], 10);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68[iParam0 /*14*/], true);
	Local_68[iParam0 /*14*/].f_10 = 0;
}

void func_219(struct<3> Param0, float fParam1)//Position - 0x1163D
{
	Local_65[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("crusader"), Param0, fParam1, true, true, false);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_65[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
}

void func_220()//Position - 0x1166A
{
	int iVar0;
	
	if (!func_37(Local_65[1 /*2*/]))
	{
		func_219(996.9448f, 2140.02f, 47.9112f, 39.7091f);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_37(Local_68[iVar0 /*14*/]))
		{
			func_218(iVar0, Local_65[1 /*2*/]);
			func_217(Local_68[iVar0 /*14*/], 0);
			if (iVar0 == 0)
			{
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_68[0 /*14*/], Local_65[1 /*2*/], &cLocal_296, 786603, 0, 24, -1, 11f, false, 2f);
			}
		}
		iVar0++;
	}
	if (!func_37(Local_65[0 /*2*/]))
	{
		func_212(1006.7649f, 2128.3196f, 48.0929f, 39.898f);
	}
	if (!func_37(Local_68[4 /*14*/]))
	{
		func_218(4, Local_65[0 /*2*/]);
		TASK::TASK_VEHICLE_ESCORT(Local_68[4 /*14*/], Local_65[0 /*2*/], Local_65[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
		func_217(Local_68[4 /*14*/], 0);
	}
	if (!func_37(Local_65[2 /*2*/]))
	{
		func_216(1018.9946f, 2112.9512f, 48.4754f, 34.6812f);
	}
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		if (!func_37(Local_68[iVar0 /*14*/]))
		{
			func_218(iVar0, Local_65[2 /*2*/]);
			func_217(Local_68[iVar0 /*14*/], 0);
			if (iVar0 == 5)
			{
				TASK::TASK_VEHICLE_ESCORT(Local_68[5 /*14*/], Local_65[2 /*2*/], Local_65[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
			}
		}
		iVar0++;
	}
	if (func_230())
	{
		func_209(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
}

int func_221(var uParam0)//Position - 0x117FB
{
	if (func_222(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_222(var uParam0)//Position - 0x11814
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_1012)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (STREAMING::HAS_MODEL_LOADED((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0[iVar1 /*5*/])->f_4);
						func_224(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						STREAMING::REMOVE_ANIM_DICT(uParam0->f_273[iVar1 /*5*/].f_4);
						func_224(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						TASK::REMOVE_WAYPOINT_RECORDING(uParam0->f_374[iVar1 /*5*/].f_4);
						func_224(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_224(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_224(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (WEAPON::HAS_WEAPON_ASSET_LOADED(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						WEAPON::REMOVE_WEAPON_ASSET(uParam0->f_202[iVar1 /*7*/].f_4);
						func_224(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						VEHICLE::REMOVE_VEHICLE_ASSET(uParam0->f_151[iVar1 /*5*/].f_4);
						func_224(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam0->f_737[iVar1 /*5*/].f_4, false, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(uParam0->f_737[iVar1 /*5*/].f_4);
						func_224(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (INTERIOR::IS_INTERIOR_READY(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						INTERIOR::UNPIN_INTERIOR(uParam0->f_763[iVar1 /*5*/].f_4);
						func_224(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = GRAPHICS::QUERY_MOVIE_MESH_SET_STATE(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_224(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (INTERIOR::IS_INTERIOR_READY(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = GRAPHICS::LOAD_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = MISC::GET_GAME_TIMER();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_5);
							func_224(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_224(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_909[iVar1 /*5*/])
			{
				if (!uParam0->f_909[iVar1 /*5*/].f_1)
				{
					if (TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED(uParam0->f_909[iVar1 /*5*/].f_4))
					{
						uParam0->f_909[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_909[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_909[iVar1 /*5*/].f_1)
					{
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(uParam0->f_909[iVar1 /*5*/].f_4);
						func_224(&(uParam0->f_909[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_960[iVar1 /*5*/])
			{
				if (!uParam0->f_960[iVar1 /*5*/].f_1)
				{
					if (AUDIO::PREPARE_ALARM(uParam0->f_960[iVar1 /*5*/].f_4))
					{
						uParam0->f_960[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_960[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_960[iVar1 /*5*/].f_1)
					{
						func_224(&(uParam0->f_960[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (HUD::HAS_ADDITIONAL_TEXT_LOADED(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						HUD::CLEAR_ADDITIONAL_TEXT(iVar1, true);
						func_224(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_890)
		{
			if (!uParam0->f_890.f_1)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					uParam0->f_890.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_890.f_2)
			{
				if (uParam0->f_890.f_1)
				{
					STREAMING::REMOVE_PTFX_ASSET();
					func_224(&(uParam0->f_890));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_894)
		{
			if (!uParam0->f_894.f_1)
			{
				if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
				{
					uParam0->f_894.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_894.f_2)
			{
				if (uParam0->f_894.f_1)
				{
					PHYSICS::ROPE_UNLOAD_TEXTURES();
					func_224(&(uParam0->f_894));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_898 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!uParam0->f_898.f_1)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					uParam0->f_898.f_1 = 1;
					if (uParam0->f_1013)
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						func_223(uParam0);
						uParam0->f_1013 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_898.f_2)
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				func_224(&(uParam0->f_898));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_986[iVar1 /*5*/])
			{
				if (!uParam0->f_986[iVar1 /*5*/].f_1)
				{
					if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam0->f_986[iVar1 /*5*/].f_4))
					{
						uParam0->f_986[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_986[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_986[iVar1 /*5*/].f_1)
					{
						func_224(&(uParam0->f_986[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_1012 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_223(var uParam0)//Position - 0x121E4
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		func_224(&(uParam0->f_898));
	}
}

void func_224(var uParam0)//Position - 0x12200
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_225(int iParam0)//Position - 0x1221B
{
	switch (iParam0)
	{
		case 0:
			func_227(&uLocal_308, joaat("S_M_M_Marine_01"));
			func_227(&uLocal_308, joaat("S_M_Y_Marine_03"));
			func_227(&uLocal_308, joaat("crusader"));
			func_227(&uLocal_308, joaat("barracks"));
			func_226(&uLocal_308, &cLocal_296);
			func_227(&uLocal_308, joaat("prop_mil_crate_01"));
			break;
		
		case 1:
			func_227(&uLocal_308, joaat("S_M_Y_Marine_03"));
			func_227(&uLocal_308, joaat("S_M_M_Marine_01"));
			func_227(&uLocal_308, joaat("crusader"));
			func_227(&uLocal_308, joaat("barracks"));
			func_227(&uLocal_308, joaat("prop_mil_crate_01"));
			break;
		
		case 2:
		case 3:
			func_227(&uLocal_308, joaat("barracks"));
			func_227(&uLocal_308, joaat("prop_mil_crate_01"));
			break;
	}
}

int func_226(var uParam0, char* sParam1)//Position - 0x122F2
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_1012 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

int func_227(var uParam0, int iParam1)//Position - 0x123B9
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_1012 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		STREAMING::REQUEST_MODEL(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = MISC::GET_GAME_TIMER();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

int func_228(var uParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x12462
{
	if (func_187(Param1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_898)
	{
		if (func_143(uParam0->f_898.f_4, Param1, 0) && uParam0->f_898.f_10 == fParam2)
		{
			uParam0->f_898.f_2 = 0;
			if (!uParam0->f_898.f_1)
			{
				uParam0->f_1012 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param1, fParam2, iParam3);
	uParam0->f_898 = 1;
	uParam0->f_898.f_3 = MISC::GET_GAME_TIMER();
	uParam0->f_898.f_4 = { Param1 };
	uParam0->f_898.f_7 = { 0f, 0f, 0f };
	uParam0->f_898.f_10 = fParam2;
	uParam0->f_1012 = 1;
	return 1;
}

void func_229(int iParam0, var uParam1, var uParam2)//Position - 0x1251A
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -260.5082f, 2925.4458f, 40.1977f };
			*uParam2 = 303.6227f;
			break;
		
		case 1:
			*uParam1 = { -276.0887f, 2920.386f, 40.1317f };
			*uParam2 = 0f;
			break;
		
		case 2:
			*uParam1 = { -253.7471f, 2941.4854f, 29.131f };
			*uParam2 = 330.8292f;
			break;
		
		case 3:
			*uParam1 = { 1367.3243f, 3618.3743f, 33.8914f };
			*uParam2 = -118.28f;
			break;
	}
}

bool func_230()//Position - 0x125B5
{
	return BitTest(Global_100681.f_20, 13);
}

void func_231(var uParam0)//Position - 0x125C6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_909[iVar0 /*5*/])
		{
			uParam0->f_909[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_960[iVar0 /*5*/])
		{
			uParam0->f_960[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_898)
	{
		uParam0->f_898.f_2 = 1;
	}
	if (uParam0->f_890)
	{
		uParam0->f_890.f_2 = 1;
	}
	if (uParam0->f_894)
	{
		uParam0->f_894.f_2 = 1;
	}
}

void func_232()//Position - 0x1281E
{
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_66[iLocal_270 /*2*/]) && !PED::IS_PED_INJURED(Local_66[iLocal_270 /*2*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_66[iLocal_270 /*2*/], false))
			{
				PED::SET_PED_COORDS_NO_GANG(Local_66[iLocal_270 /*2*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_66[iLocal_270 /*2*/], false), true) + Vector(0f, -2f, 0f));
			}
			func_239(&(Local_66[iLocal_270 /*2*/]));
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_68[iLocal_270 /*14*/]))
		{
			func_238(&(Local_68[iLocal_270 /*14*/].f_2));
			Local_68[iLocal_270 /*14*/].f_12 = 0;
			if (!PED::IS_PED_INJURED(Local_68[iLocal_270 /*14*/]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_68[iLocal_270 /*14*/], false))
				{
					PED::SET_PED_COORDS_NO_GANG(Local_68[iLocal_270 /*14*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_68[iLocal_270 /*14*/], false), true) + Vector(0f, -2f, 0f));
				}
				func_239(&(Local_68[iLocal_270 /*14*/]));
			}
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_67[iLocal_270]))
		{
			func_237(&(iLocal_67[iLocal_270]));
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[iLocal_270 /*2*/]))
		{
			func_236(Local_65[iLocal_270 /*2*/]);
			func_233(&(Local_65[iLocal_270 /*2*/]));
		}
		iLocal_270++;
	}
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	CAM::DESTROY_ALL_CAMS(false);
	func_39(&Local_234, 1, 0);
	if (func_37(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	iLocal_257 = 0;
	iLocal_259 = 0;
	iLocal_258 = 0;
	iLocal_256 = 0;
	iLocal_293 = 0;
	bLocal_279 = false;
	bLocal_280 = false;
	StringCopy(&cLocal_296, "Rural_prep_trigger1", 64);
}

void func_233(int* iParam0)//Position - 0x12A08
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		if (func_235(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
			{
				if (func_234(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(iParam0);
			}
		}
		else
		{
			if (func_234(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
	}
}

int func_234(int iParam0)//Position - 0x12AA4
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

int func_235(int iParam0)//Position - 0x12AC5
{
	if (func_234(iParam0))
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

void func_236(int iParam0)//Position - 0x12AEF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
				}
				else
				{
					PED::DELETE_PED(&iVar0);
				}
			}
			iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar1, false))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
						}
						else
						{
							PED::DELETE_PED(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_237(int* iParam0)//Position - 0x12B8B
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_238(int* iParam0)//Position - 0x12BB6
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

void func_239(int* iParam0)//Position - 0x12C28
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

void func_240()//Position - 0x12C69
{
	switch (iLocal_1323)
	{
		case 1:
			iLocal_1323 = 2;
			iLocal_1325 = -1;
			break;
		
		case 2:
			iLocal_1323 = 3;
			iLocal_1325 = 0;
			iLocal_1324 = iLocal_1326;
			break;
		
		case 3:
			iLocal_1326 = -1;
			iLocal_1323 = 0;
			break;
		
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_1327) > 2500)
			{
				iLocal_1327 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

void func_241(var uParam0, int iParam1, bool bParam2)//Position - 0x12CD0
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2793044.f_4690, 26))
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
			sVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			sVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_242(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_242(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

bool func_242(char* sParam0)//Position - 0x12DAA
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_243(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x12DBD
{
	func_244(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_244(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x12DD7
{
	uParam0->f_6 = 0;
	func_245(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_245(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x12DF9
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
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (func_242(iVar0))
	{
		func_269();
	}
	if (func_268(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
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
			if (func_263(uParam0, bParam5, bParam7, 0))
			{
				func_260(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_249(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_242(iVar0))
							{
								func_152(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
								{
									func_248(1);
								}
							}
						}
					}
				}
			}
			else if (func_249(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_242(iVar0))
						{
							func_152(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								func_248(1);
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
				if (func_242(sParam3))
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
						func_241(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_241(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_241(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_241(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_241(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_241(uParam0, iVar0, 1);
				}
			}
			if (!func_263(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_247(uParam0))
				{
					func_246(uParam0);
				}
			}
		}
	}
	else
	{
		func_241(uParam0, iVar0, 0);
	}
}

void func_246(var uParam0)//Position - 0x13166
{
	if (func_268(PLAYER::PLAYER_PED_ID()))
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

int func_247(var uParam0)//Position - 0x131CF
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

int func_248(bool bParam0)//Position - 0x131FA
{
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113648.f_10051.f_100++;
			}
			return Global_113648.f_10051.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113648.f_10051.f_101++;
			}
			return Global_113648.f_10051.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113648.f_10051.f_102++;
			}
			return Global_113648.f_10051.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_249(char* sParam0)//Position - 0x132A4
{
	if (!func_250(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_242(sParam0)) || func_242("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (func_248(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_248(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_248(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_250(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1333D
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
	if (func_259(0))
	{
		return 0;
	}
	if (func_258())
	{
		return 0;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60543)
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
	if ((func_257() || func_256(Global_4718592.f_166301)) || func_255())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_254(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_253(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1962010)
	{
		return 0;
	}
	if (func_251(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_251(int iParam0)//Position - 0x13596
{
	if (iParam0 != func_18())
	{
		if (func_252(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == PLAYER::PLAYER_ID()) && func_252(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_252(int iParam0, bool bParam1, bool bParam2)//Position - 0x135FC
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

int func_253(int iParam0, int iParam1)//Position - 0x1365C
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

int func_254(int iParam0, bool bParam1)//Position - 0x136BE
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

var func_255()//Position - 0x13743
{
	return Global_2683862.f_19;
}

bool func_256(int iParam0)//Position - 0x13751
{
	return iParam0 == 51;
}

var func_257()//Position - 0x1375E
{
	return Global_2683862.f_18;
}

bool func_258()//Position - 0x1376C
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

int func_259(int iParam0)//Position - 0x13781
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
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
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_260(var uParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x137D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581968 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_241(uParam0, 0, 0);
	}
	if (func_143(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_261())
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
	if (iParam3 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
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

bool func_261()//Position - 0x138E8
{
	return func_262(PLAYER::PLAYER_ID());
}

int func_262(int iParam0)//Position - 0x138F8
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_263(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x13917
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
					if (func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_247(uParam0))
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
						if (!func_267(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_267(bParam1, bParam2, bParam3))
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
					if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_266(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
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
				else if (!func_267(bParam1, bParam2, bParam3))
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
						if (func_265(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_264(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_264(bParam1, bParam2, bParam3))
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
					else if (func_265(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_247(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_250(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_269();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_264(bool bParam0, bool bParam1, bool bParam2)//Position - 0x13C83
{
	if (!func_250(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_265(bool bParam0, bool bParam1, bool bParam2)//Position - 0x13CD5
{
	if (!func_250(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_266(bool bParam0, bool bParam1, bool bParam2)//Position - 0x13D1E
{
	if (!func_250(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_267(bool bParam0, bool bParam1, bool bParam2)//Position - 0x13D7D
{
	if (!func_250(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_268(int iParam0)//Position - 0x13DD3
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

void func_269()//Position - 0x13E2E
{
	MISC::SET_BIT(&Global_8254, 4);
}

void func_270(var uParam0)//Position - 0x13E3E
{
	func_222(uParam0);
}

void func_271()//Position - 0x13E4D
{
	struct<3> Var0;
	var uVar1;
	
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_306);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_307);
	PED::ADD_RELATIONSHIP_GROUP("trevor", &iLocal_306);
	PED::ADD_RELATIONSHIP_GROUP("enemies", &iLocal_307);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_307, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_307, iLocal_306);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_306, iLocal_307);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_307, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_307);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_307, iLocal_307);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_307, joaat("ARMY"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("ARMY"), iLocal_307);
	HUD::REQUEST_ADDITIONAL_TEXT("ruralp", 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(1, false);
	MISC::ENABLE_DISPATCH_SERVICE(10, false);
	MISC::ENABLE_DISPATCH_SERVICE(9, false);
	MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(1, 0);
	MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(2, 0);
	MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(8, 0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PLAYER::SET_POLICE_RADAR_BLIPS(false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("crusader"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("barracks"), true);
	iLocal_268 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(35.394558f, 3600.5378f, 1375.234f) - Vector(0f, 7f, 14.25f), Vector(35.394558f, 3600.5378f, 1375.234f) + Vector(3f, 7f, 14.25f), false, true, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(33.8865f, 3596.518f, 1383.5099f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.5099f) + Vector(2f, 5f, 5f), false, true);
	if (func_211() || func_7(0))
	{
		if (func_211())
		{
			iLocal_1329 = func_344();
			if (Global_94858)
			{
				iLocal_1329++;
			}
			if (iLocal_1329 >= 3)
			{
				iLocal_1329 = 3;
			}
		}
		else if (func_7(0))
		{
			iLocal_1329 = 0;
		}
		if (func_211())
		{
			func_229(iLocal_1329, &Var0, &uVar1);
			func_343(Var0, uVar1, 1, 0);
		}
		bLocal_1328 = true;
	}
	else
	{
		while (!func_341())
		{
			SYSTEM::WAIT(0);
		}
		func_274(0, "stage 0: reached ambush", 0, 0, 0, 1);
		iLocal_1324 = 0;
		func_225(0);
	}
	iLocal_1325 = 0;
	func_272(92);
}

void func_272(int iParam0)//Position - 0x1405C
{
	Global_96536 = 0;
	switch (iParam0)
	{
		case 72:
			func_273(2);
			func_273(4);
			break;
		
		case 73:
			func_273(0);
			func_273(1);
			func_273(7);
			break;
		
		case 92:
			func_273(10);
			func_273(9);
			func_273(13);
			func_273(6);
			break;
		
		case 68:
			func_273(11);
			break;
		
		case 78:
			func_273(14);
			break;
		
		case 79:
			func_273(3);
			break;
		
		default:
			break;
	}
}

void func_273(int iParam0)//Position - 0x140EA
{
	MISC::SET_BIT(&Global_96536, iParam0);
}

void func_274(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x140FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100718)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100718)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_340(1);
		if (iParam0 <= Global_100718)
		{
		}
		iVar1 = func_338(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113648.f_9087.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_336(iVar1);
			cVar3 = { Global_91469[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113648.f_9087.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100718, iParam0);
		}
		else
		{
			iVar4 = func_331(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113648.f_18576[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_330(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100718, iParam0);
			}
			else
			{
				iVar6 = func_329(&(Global_100681.f_3));
				if (iVar6 > -1)
				{
					Global_113648.f_24988.f_4[iVar6] = 0;
				}
			}
		}
		Global_94859 = iParam2;
		Global_100718 = iParam0;
		func_275(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100718)
	{
	}
}

void func_275(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x14271
{
	func_276(&Global_107196, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_276(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x1428D
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_24();
	uParam0->f_1 = func_123();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_301(&(uParam0->f_2884), 0);
		func_300(PLAYER::PLAYER_PED_ID());
		func_293(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113648.f_2365.f_539.f_294[iVar1];
		if (iVar1 == func_292())
		{
			func_285(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100406[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100406[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100406[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100406[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100406[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100406[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100406[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100406[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100406[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100406[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113648.f_2365.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113648.f_2365.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113648.f_20566.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60536[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113648.f_2365.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113648.f_2365.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113648.f_2365.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113648.f_2365.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113648.f_2365.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113648.f_2365[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_278(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_277(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_277(var uParam0)//Position - 0x15116
{
	*uParam0 = Global_96530;
	uParam0->f_1 = Global_96531;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_278(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x15138
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_35(iParam2);
	}
	if (func_284(iParam2, &iVar0, iParam3, iParam5))
	{
		func_279(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				func_279(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_279(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x151C0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
	{
		func_281(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_280(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_280(int iParam0)//Position - 0x15200
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_100681.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_281(var uParam0, int iParam1, int iParam2)//Position - 0x1522E
{
	func_92(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_283(iParam1, 145, 0);
	uParam0->f_11 = func_114(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_282(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_78253 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_282(int iParam0)//Position - 0x1530A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[iVar0]))
		{
			if (iParam0 == Global_77348.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_283(int iParam0, int iParam1, int iParam2)//Position - 0x1534C
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0]))
		{
			if (Global_98012[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_98022[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_135(iParam1, iParam2))
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

int func_284(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x153DA
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (func_115(*uParam1, func_24(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_285(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x15507
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_35(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_291(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_290(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_26(iVar0))
		{
			uParam1->f_59 = Global_113648.f_2365.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113648.f_2365.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113648.f_2365.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113648.f_2365.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113648.f_2365.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113648.f_2365.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_289(161, iParam3))
			{
				uParam1->f_59 = func_286(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_286(753, iParam3, 0);
			}
			uParam1->f_60 = func_286(754, iParam3, 0);
			uParam1->f_61 = func_286(755, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_289(161, iParam3))
			{
				uParam1->f_59 = func_286(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_286(753, iParam3, 0);
			}
		}
	}
}

int func_286(int iParam0, int iParam1, int iParam2)//Position - 0x156A7
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_287(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_287(var uParam0)//Position - 0x156E4
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_288();
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

var func_288()//Position - 0x15718
{
	return Global_1574918;
}

int func_289(int iParam0, int iParam1)//Position - 0x15724
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2848280[iParam0 /*3*/][func_287(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_290(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x15750
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_291(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x15C99
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_292()//Position - 0x15EDA
{
	func_25();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_293(int iParam0, bool bParam1)//Position - 0x15EF3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_35(iParam0);
	if (func_26(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_294(iParam0, &(Global_113648.f_2365.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113648.f_2365.f_539.f_1730[iVar2 /*4*/][iVar0] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
					if (Global_113648.f_2365.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113648.f_2365.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
		}
	}
}

void func_294(int iParam0, var uParam1)//Position - 0x15FE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_299(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_299(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
					Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_297(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_297(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = FILES::GET_NUM_DLC_WEAPONS_SP();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILES::GET_DLC_WEAPON_DATA_SP(iVar5, &Var7) && !func_296(Var7.f_1)) && iVar9 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
						Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar5))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar5, iVar1, &Var8))
						{
							if (!func_295(Var8.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var8.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_295(int iParam0)//Position - 0x1626E
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_296(int iParam0)//Position - 0x1630F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return 0;
				break;
			
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return 0;
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE"):
				return 0;
				break;
			
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return 0;
				break;
			
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return 0;
				break;
			
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return 0;
				break;
			
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case joaat("WEAPON_PISTOLXM3"):
			case joaat("WEAPON_CANDYCANE"):
			case joaat("WEAPON_RAILGUNXM3"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_297(int iParam0, int iParam1)//Position - 0x164E9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_04");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_05");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_06");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_07");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_08");
					break;
				
				case 9:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_09");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_298(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!func_295(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_298(int iParam0, var* uParam1)//Position - 0x1714A
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

int func_299(int iParam0)//Position - 0x17185
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

void func_300(int iParam0)//Position - 0x173F9
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	if (func_26(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113648.f_2365.f_539.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_301(var uParam0, int iParam1)//Position - 0x17435
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78807, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78807, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78807, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78807, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_304(&iVar0))
		{
			if (func_303(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar3 = func_24();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_302(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_302(struct<3> Param0, char* sParam1, struct<3> Param2)//Position - 0x17984
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param2, sParam1);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_303(int iParam0, var uParam1, var uParam2)//Position - 0x179C8
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.5278f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.9128f, -1120.9985f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.0281f, 3718.7358f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.8656f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.0806f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.1599f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.4451f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.0536f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.6436f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.0271f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.3027f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.4172f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.3552f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.7391f, -1278.5734f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.3928f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.8022f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.5958f, -1417.6997f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.9523f, -1660.6111f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.2136f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.8136f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.9661f, 3749.7092f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.9628f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.0597f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.1018f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.9321f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.8818f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.8745f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.0531f, -1993.9161f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.0814f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.7089f, 2664.8135f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.5024f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_143(*uParam1, 0f, 0f, 0f, 0);
}

int func_304(var uParam0)//Position - 0x18149
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_328())
		{
			*uParam0 = func_310(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, 0, 1, -1);
			if (func_309(*uParam0) && !func_305(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_305(int iParam0)//Position - 0x181A4
{
	return func_306(iParam0, 0, 1);
}

int func_306(int iParam0, int iParam1, bool bParam2)//Position - 0x181B4
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_308() == 0)
		{
			return BitTest(func_286(func_307(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_307(int iParam0)//Position - 0x18215
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
			return 12385;
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
		
		default:
			break;
	}
	return 14192;
}

int func_308()//Position - 0x185AE
{
	return Global_32163;
}

int func_309(int iParam0)//Position - 0x185B9
{
	return func_306(iParam0, 5, 1);
}

int func_310(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x185C9
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		if (iParam1 == 6 || iParam1 == func_327(iVar0))
		{
			if (!bParam3 || func_326(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_311(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_311(int iParam0, bool bParam1)//Position - 0x1866B
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.0822f, -1116.5576f, 5.9901f;
			break;
		
		case 3:
			return 1933.1191f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.3335f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.7705f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.6694f, 28.3761f;
			break;
		
		case 8:
			return 1687.8812f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.0487f, 2704.1707f, 18.0873f;
			break;
		
		case 11:
			return 1197.9722f, 2704.2205f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.0454f, 30.8684f;
			break;
		
		case 14:
			return -1199.8092f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.5667f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.9663f, 1055.2869f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.0045f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.5549f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.6853f, 3750.0798f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.0947f, 30.4871f;
			break;
		
		case 25:
			return -1153.9481f, -1425.0186f, 3.9544f;
			break;
		
		case 26:
			return 1322.4547f, -1651.1252f, 51.1885f;
			break;
		
		case 27:
			return -3169.4204f, 1074.7272f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.9788f, 3753.2002f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.5707f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.0264f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.9485f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.2375f, 2688.4626f, 17.6131f;
			break;
		
		case 36:
			return -3165.2307f, 1082.8551f, 19.8438f;
			break;
		
		case 37:
			return 2569.6116f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.1016f, 28.6363f;
			break;
		
		case 39:
			return -1147.3138f, -1992.4344f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.2803f, 30.7871f;
			break;
		
		case 43:
			return 1174.7074f, 2644.4497f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.1127f, 30.296f;
			}
			break;
		
		case 45:
			return func_323(Global_102825);
			break;
		
		case 46:
			if (Global_1853747 != func_18())
			{
				if (func_322(Global_1853747))
				{
					return func_315(2, 2);
				}
				else if (func_314(Global_1853747))
				{
					return func_315(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.1969f, -3015.8027f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.5466f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1970473;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.2125f, -25.361736f;
			break;
		
		case 55:
			return -2194.1226f, 1103.8047f, -24.2451f;
			break;
		
		case 56:
			switch (Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.1659f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.7179f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_312();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_312()//Position - 0x18DBB
{
	if (!func_187(Global_1956117))
	{
		return Global_1956117;
	}
	switch (func_313())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
		
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
		
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
		
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
		
		case 4:
			return 795.583f, 1210.78f, 338.962f;
		
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
		
		case 6:
			return -789.719f, 5400.921f, 33.915f;
		
		case 7:
			return -24.384f, 3048.167f, 40.703f;
		
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
		
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
		
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
		
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
		
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
		
		case 13:
			return -57.208f, -2658.793f, 5.737f;
		
		case 14:
			return 1905.017f, 565.222f, 175.558f;
		
		case 15:
			return 974.484f, -1718.798f, 30.296f;
		
		case 16:
			return 779.077f, -3266.297f, 5.719f;
		
		case 17:
			return -587.728f, -1637.208f, 19.611f;
		
		case 18:
			return 733.99f, -736.803f, 26.165f;
		
		case 19:
			return -1694.632f, -454.082f, 40.712f;
		
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
		
		case 21:
			return -496.618f, 40.231f, 52.316f;
		
		case 22:
			return 275.527f, 66.509f, 94.108f;
		
		case 23:
			return 260.928f, -763.35f, 30.559f;
		
		case 24:
			return -478.025f, -741.45f, 30.299f;
		
		case 25:
			return 894.94f, 3603.911f, 32.56f;
		
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
		
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
		
		case 28:
			return 1101.032f, -335.172f, 66.944f;
		
		case 29:
			return 149.683f, -1655.674f, 29.028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_313()//Position - 0x190B6
{
	return Global_2652258.f_2650;
}

int func_314(int iParam0)//Position - 0x190C5
{
	if (iParam0 != func_18())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 0) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_315(int iParam0, int iParam1)//Position - 0x1911D
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853747 != func_18())
	{
		if (iParam1 == 3)
		{
			if (func_316(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4))
			{
				if (func_316(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5))
			{
				if (func_316(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_316(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x191C7
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_321(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_321(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_319(iParam0) };
	}
	else
	{
		Var2 = { func_318(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_317(Var3, -Var0.f_3.f_2) };
	Var3 = { func_317(Var3, Var1.f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_317(struct<3> Param0, float fParam1)//Position - 0x1925C
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_318(int iParam0)//Position - 0x192A0
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_319(int iParam0)//Position - 0x19424
{
	return func_320(iParam0);
}

struct<6> func_320(int iParam0)//Position - 0x19432
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.4084f, -3012.3198f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.0374f, -3012.3184f, -39.998745f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.0634f, -3012.3677f, -39.998753f };
			break;
		
		case 9:
			Var0 = { 1105.6648f, -3012.3345f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.9282f, -3012.6934f, -39.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.9421f, -3011.315f, -37.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.9943f, -3012.8777f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.1519f, -3013.0325f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.9167f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.9218f, -3010.8872f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.6818f, -3009.227f, -39.949997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.4534f, -3008.5105f, -38.199997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.3401f, -3008.6982f, -39.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.3442f, -3009.618f, -37.981716f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.4595f, -3009.7935f, -39.949997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.7828f, -3010.433f, -38.199997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.0251f, -3007.3157f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.1602f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.1749f, -3005.818f, -37.919476f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.5996f, -3000.8472f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.6013f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.4756f, -3008.5076f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.5076f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.5928f, -3008.2698f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_321(int iParam0, var uParam1)//Position - 0x19EF9
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_322(int iParam0)//Position - 0x19F7B
{
	if (iParam0 != func_18())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 3) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 4)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_323(int iParam0)//Position - 0x19FD3
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.0908f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.5149f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.5624f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.1116f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.8364f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.6643f, -3012.5828f, -79.9999f;
			break;
		
		case 16:
			return -1421.0149f, -3012.5867f, -80f;
			break;
		
		case 17:
			if (func_324() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_324()//Position - 0x1A24A
{
	return func_325(PLAYER::PLAYER_ID());
}

int func_325(int iParam0)//Position - 0x1A25A
{
	return MISC::GET_BITS_IN_RANGE(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}

int func_326(int iParam0)//Position - 0x1A277
{
	return func_306(iParam0, 0, 0);
}

int func_327(int iParam0)//Position - 0x1A287
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
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
	}
	return 6;
}

bool func_328()//Position - 0x1A5B0
{
	return Global_100733.f_387 > 0;
}

int func_329(char* sParam0)//Position - 0x1A5C1
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_330(int iParam0)//Position - 0x1A617
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

int func_331(char* sParam0, int iParam1)//Position - 0x1AA63
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = MISC::GET_HASH_KEY(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_332(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_332(int iParam0, var uParam1)//Position - 0x1AAAC
{
	switch (iParam0)
	{
		case 0:
			func_333(uParam1, "Abigail1", func_335(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_334(iParam0), 1, 0);
			break;
		
		case 1:
			func_333(uParam1, "Abigail2", func_335(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_334(iParam0), 1, 0);
			break;
		
		case 2:
			func_333(uParam1, "Barry1", func_335(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_334(iParam0), 1, 0);
			break;
		
		case 3:
			func_333(uParam1, "Barry2", func_335(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_334(iParam0), 1, 1);
			break;
		
		case 4:
			func_333(uParam1, "Barry3", func_335(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 5:
			func_333(uParam1, "Barry3A", func_335(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 6:
			func_333(uParam1, "Barry3C", func_335(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 7:
			func_333(uParam1, "Barry4", func_335(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_334(iParam0), 0, 0);
			break;
		
		case 8:
			func_333(uParam1, "Dreyfuss1", func_335(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 9:
			func_333(uParam1, "Epsilon1", func_335(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 10:
			func_333(uParam1, "Epsilon2", func_335(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_334(iParam0), 1, 0);
			break;
		
		case 11:
			func_333(uParam1, "Epsilon3", func_335(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 12:
			func_333(uParam1, "Epsilon4", func_335(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 13:
			func_333(uParam1, "Epsilon5", func_335(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_334(iParam0), 1, 0);
			break;
		
		case 14:
			func_333(uParam1, "Epsilon6", func_335(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 15:
			func_333(uParam1, "Epsilon7", func_335(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 16:
			func_333(uParam1, "Epsilon8", func_335(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_334(iParam0), 1, 0);
			break;
		
		case 17:
			func_333(uParam1, "Extreme1", func_335(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 18:
			func_333(uParam1, "Extreme2", func_335(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 19:
			func_333(uParam1, "Extreme3", func_335(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 20:
			func_333(uParam1, "Extreme4", func_335(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 21:
			func_333(uParam1, "Fanatic1", func_335(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_334(iParam0), 1, 0);
			break;
		
		case 22:
			func_333(uParam1, "Fanatic2", func_335(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_334(iParam0), 1, 0);
			break;
		
		case 23:
			func_333(uParam1, "Fanatic3", func_335(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_334(iParam0), 0, 1);
			break;
		
		case 24:
			func_333(uParam1, "Hao1", func_335(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_334(iParam0), 0, 1);
			break;
		
		case 25:
			func_333(uParam1, "Hunting1", func_335(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 26:
			func_333(uParam1, "Hunting2", func_335(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 27:
			func_333(uParam1, "Josh1", func_335(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_334(iParam0), 1, 0);
			break;
		
		case 28:
			func_333(uParam1, "Josh2", func_335(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_334(iParam0), 1, 1);
			break;
		
		case 29:
			func_333(uParam1, "Josh3", func_335(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_334(iParam0), 1, 1);
			break;
		
		case 30:
			func_333(uParam1, "Josh4", func_335(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_334(iParam0), 1, 0);
			break;
		
		case 31:
			func_333(uParam1, "Maude1", func_335(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 32:
			func_333(uParam1, "Minute1", func_335(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 33:
			func_333(uParam1, "Minute2", func_335(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 34:
			func_333(uParam1, "Minute3", func_335(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 35:
			func_333(uParam1, "MrsPhilips1", func_335(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 36:
			func_333(uParam1, "MrsPhilips2", func_335(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 37:
			func_333(uParam1, "Nigel1", func_335(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_334(iParam0), 1, 0);
			break;
		
		case 38:
			func_333(uParam1, "Nigel1A", func_335(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_334(iParam0), 1, 1);
			break;
		
		case 39:
			func_333(uParam1, "Nigel1B", func_335(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_334(iParam0), 1, 1);
			break;
		
		case 40:
			func_333(uParam1, "Nigel1C", func_335(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_334(iParam0), 1, 1);
			break;
		
		case 41:
			func_333(uParam1, "Nigel1D", func_335(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_334(iParam0), 1, 1);
			break;
		
		case 42:
			func_333(uParam1, "Nigel2", func_335(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_334(iParam0), 1, 1);
			break;
		
		case 43:
			func_333(uParam1, "Nigel3", func_335(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_334(iParam0), 1, 1);
			break;
		
		case 44:
			func_333(uParam1, "Omega1", func_335(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 45:
			func_333(uParam1, "Omega2", func_335(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 46:
			func_333(uParam1, "Paparazzo1", func_335(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 47:
			func_333(uParam1, "Paparazzo2", func_335(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 48:
			func_333(uParam1, "Paparazzo3", func_335(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 49:
			func_333(uParam1, "Paparazzo3A", func_335(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 50:
			func_333(uParam1, "Paparazzo3B", func_335(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 51:
			func_333(uParam1, "Paparazzo4", func_335(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 52:
			func_333(uParam1, "Rampage1", func_335(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 54:
			func_333(uParam1, "Rampage3", func_335(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_334(iParam0), 1, 0);
			break;
		
		case 55:
			func_333(uParam1, "Rampage4", func_335(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_334(iParam0), 1, 0);
			break;
		
		case 56:
			func_333(uParam1, "Rampage5", func_335(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_334(iParam0), 0, 0);
			break;
		
		case 53:
			func_333(uParam1, "Rampage2", func_335(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_334(iParam0), 1, 0);
			break;
		
		case 57:
			func_333(uParam1, "TheLastOne", func_335(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 58:
			func_333(uParam1, "Tonya1", func_335(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 59:
			func_333(uParam1, "Tonya2", func_335(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 60:
			func_333(uParam1, "Tonya3", func_335(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 61:
			func_333(uParam1, "Tonya4", func_335(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		case 62:
			func_333(uParam1, "Tonya5", func_335(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_334(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_333(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x1BC61
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_334(int iParam0)//Position - 0x1BCF2
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

struct<2> func_335(int iParam0)//Position - 0x1C038
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_330(iParam0) };
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

int func_336(int iParam0)//Position - 0x1C06F
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_337(Global_113648.f_9087.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_337(Global_113648.f_9087.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_337(Global_113648.f_9087.f_99.f_205[11]);
			break;
		
		case 90:
			return func_337(Global_113648.f_9087.f_99.f_205[7]);
			break;
		
		case 93:
			return func_337(Global_113648.f_9087.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_337(int iParam0)//Position - 0x1C12B
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_338(char* sParam0, bool bParam1)//Position - 0x1C17F
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = func_339(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_339(int iParam0, bool bParam1)//Position - 0x1C1A9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_91469[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_340(bool bParam0)//Position - 0x1C1DF
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
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60544[iVar0 /*3*/][0] = Global_113648.f_20566[iVar0];
		Global_60544.f_31[iVar0 /*3*/][0] = Global_113648.f_20566.f_11[iVar0];
		Global_60544.f_62[iVar0 /*3*/][0] = Global_113648.f_20566.f_22[iVar0];
		Global_60544.f_93[iVar0 /*3*/][0] = Global_113648.f_20566.f_33[iVar0];
		Global_60544.f_124[iVar0 /*3*/][0] = Global_113648.f_20566.f_44[iVar0];
		Global_60544.f_155[iVar0 /*3*/][0] = Global_113648.f_20566.f_55[iVar0];
		Global_60544.f_186[iVar0 /*3*/][0] = Global_113648.f_20566.f_66[iVar0];
		Global_60544.f_217[iVar0 /*3*/][0] = Global_113648.f_20566.f_77[iVar0];
		Global_60544.f_248[iVar0 /*3*/][0] = Global_113648.f_20566.f_88[iVar0];
		if (!bParam0)
		{
			Global_60544[iVar0 /*3*/][1] = Global_113648.f_20566[iVar0];
			Global_60544.f_31[iVar0 /*3*/][1] = Global_113648.f_20566.f_11[iVar0];
			Global_60544.f_62[iVar0 /*3*/][1] = Global_113648.f_20566.f_22[iVar0];
			Global_60544.f_93[iVar0 /*3*/][1] = Global_113648.f_20566.f_33[iVar0];
			Global_60544.f_124[iVar0 /*3*/][1] = Global_113648.f_20566.f_44[iVar0];
			Global_60544.f_155[iVar0 /*3*/][1] = Global_113648.f_20566.f_55[iVar0];
			Global_60544.f_186[iVar0 /*3*/][1] = Global_113648.f_20566.f_66[iVar0];
			Global_60544.f_217[iVar0 /*3*/][1] = Global_113648.f_20566.f_77[iVar0];
			Global_60544.f_248[iVar0 /*3*/][1] = Global_113648.f_20566.f_88[iVar0];
		}
		iVar0++;
	}
}

int func_341()//Position - 0x1C461
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_65[0 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[0], true, true);
			Local_65[0 /*2*/] = Global_97178[0];
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_97178[0], 0f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_65[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
			func_213(Local_65[0 /*2*/], 0);
			ENTITY::RESET_ENTITY_ALPHA(Local_65[0 /*2*/]);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_65[1 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[1], true, true);
			Local_65[1 /*2*/] = Global_97178[1];
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_97178[1], 0f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_65[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
			ENTITY::RESET_ENTITY_ALPHA(Local_65[1 /*2*/]);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_65[2 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[2], true, true);
			Local_65[2 /*2*/] = Global_97178[2];
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_97178[2], 0f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_65[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
			ENTITY::RESET_ENTITY_ALPHA(Local_65[2 /*2*/]);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[4 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[0], true, true);
			Local_68[4 /*14*/] = Global_97178.f_9[0];
			func_217(Local_68[4 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[0 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[2], true, true);
			Local_68[0 /*14*/] = Global_97178.f_9[2];
			func_217(Local_68[0 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[1 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[3], true, true);
			Local_68[1 /*14*/] = Global_97178.f_9[3];
			func_217(Local_68[1 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[2 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[4]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[4], true, true);
			Local_68[2 /*14*/] = Global_97178.f_9[4];
			func_217(Local_68[2 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[3 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[5]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[5], true, true);
			Local_68[3 /*14*/] = Global_97178.f_9[5];
			func_217(Local_68[3 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[5 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[6]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[6], true, true);
			Local_68[5 /*14*/] = Global_97178.f_9[6];
			func_217(Local_68[5 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[6 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[7]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[7], true, true);
			Local_68[6 /*14*/] = Global_97178.f_9[7];
			func_217(Local_68[6 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[7 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[8]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[8], true, true);
			Local_68[7 /*14*/] = Global_97178.f_9[8];
			func_217(Local_68[7 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[8 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[9]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[9], true, true);
			Local_68[8 /*14*/] = Global_97178.f_9[9];
			func_217(Local_68[8 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_28[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_28[0], true, true);
			iLocal_67[0] = Global_97178.f_28[0];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_28[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_28[1], true, true);
			iLocal_67[1] = Global_97178.f_28[1];
		}
	}
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (func_37(Local_68[iVar0 /*14*/]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_68[iVar0 /*14*/], iLocal_307);
			ENTITY::RESET_ENTITY_ALPHA(Local_68[iVar0 /*14*/]);
		}
		iVar0++;
	}
	cLocal_296 = { Global_97579 };
	StringCopy(&Global_97579, "", 64);
	func_342(229, 0f, 0f, 2000f);
	if (((((((((((((ENTITY::DOES_ENTITY_EXIST(Local_65[0 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(Local_65[1 /*2*/])) && ENTITY::DOES_ENTITY_EXIST(Local_65[2 /*2*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[4 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[0 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[1 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[2 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[3 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[5 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[6 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[7 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[8 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(iLocal_67[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_67[1]))
	{
		return 1;
	}
	return 0;
}

void func_342(int iParam0, struct<3> Param1)//Position - 0x1C97D
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(Global_32543[iParam0 /*23*/].f_19))
	{
		HUD::SET_BLIP_COORDS(Global_32543[iParam0 /*23*/].f_19, Param1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_32543[iParam0 /*23*/][iVar0 /*3*/] = { Param1 };
		iVar0++;
	}
}

void func_343(struct<3> Param0, var uParam1, int iParam2, int iParam3)//Position - 0x1C9CC
{
	if (func_211())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_100681.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_100677 = { Param0 };
		Global_100680 = uParam1;
		Global_100676 = 1;
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(Global_100681.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_100681.f_20), 14);
		}
		if (iParam3 == 1)
		{
			MISC::SET_BIT(&(Global_100681.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_100681.f_20), 24);
		}
		func_210(1);
	}
}

int func_344()//Position - 0x1CA61
{
	if (!Global_100681 == 10 && !Global_100681 == 9)
	{
		return 0;
	}
	return Global_100681.f_2;
}

void func_345()//Position - 0x1CA8B
{
	func_39(&Local_234, 1, 0);
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (func_37(Local_66[iLocal_270 /*2*/]))
		{
			if (Local_66[iLocal_270 /*2*/] != PLAYER::PLAYER_PED_ID())
			{
				PED::SET_PED_KEEP_TASK(Local_66[iLocal_270 /*2*/], true);
				func_206(&(Local_66[iLocal_270 /*2*/]), 1, 0, 1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_66[iLocal_270 /*2*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_66[iLocal_270 /*2*/].f_1));
			}
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (9 - 1))
	{
		if (func_37(Local_68[iLocal_270 /*14*/]))
		{
			func_206(&(Local_68[iLocal_270 /*14*/]), 1, 0, 1);
			if (HUD::DOES_BLIP_EXIST(Local_68[iLocal_270 /*14*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_68[iLocal_270 /*14*/].f_1));
			}
			func_238(&(Local_68[iLocal_270 /*14*/].f_2));
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_67[iLocal_270]))
		{
			func_348(&(iLocal_67[iLocal_270]), 0);
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (func_37(Local_65[iLocal_270 /*2*/]))
		{
			func_194(&(Local_65[iLocal_270 /*2*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_65[iLocal_270 /*2*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_65[iLocal_270 /*2*/].f_1));
		}
		iLocal_270++;
	}
	func_347(0);
	HUD::CLEAR_PRINTS();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	func_346();
	if (func_37(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_268, false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(10, true);
	MISC::ENABLE_DISPATCH_SERVICE(9, true);
	MISC::RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(33.8865f, 3596.518f, 1383.5099f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.5099f) + Vector(2f, 5f, 5f), true, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("crusader"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("barracks"), false);
	iLocal_257 = 0;
	bLocal_279 = false;
	PLAYER::SET_POLICE_RADAR_BLIPS(true);
	func_241(&Local_60, 0, 0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_346()//Position - 0x1CCAE
{
	Global_96536 = 0;
}

void func_347(bool bParam0)//Position - 0x1CCBB
{
	if (bParam0)
	{
		StringCopy(&Global_112704, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_112698 = 1;
	}
	else
	{
		StringCopy(&Global_112704, "NULL", 24);
		Global_112698 = 0;
	}
}

void func_348(int* iParam0, bool bParam1)//Position - 0x1CCE7
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
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*iParam0);
		}
	}
}

void func_349()//Position - 0x1CD22
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113648.f_9087 || func_7(0))
	{
		if (!func_350())
		{
			iVar0 = func_5();
			if (iVar0 != -1)
			{
				if (!func_199(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_204();
		}
	}
}

int func_350()//Position - 0x1CD93
{
	if (((Global_100681 == 13 || Global_100681 == 10) || Global_100681 == 11) || Global_100681 == 12)
	{
		return 0;
	}
	return 1;
}

