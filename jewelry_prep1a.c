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
	struct<110> Local_28[4];
	struct<94> Local_29 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = -1;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = -1;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	struct<8> Local_46[5];
	int iLocal_47[1] = { 0 };
	struct<4> Local_48 = { 0, 0, 0, 0 } ;
	char cLocal_49[64] = "";
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	struct<3> Local_58 = { 0, 0, 0 } ;
	char cLocal_59[24] = "";
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 30;
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
	var uLocal_221 = 10;
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
	var uLocal_272 = 10;
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
	var uLocal_343 = 20;
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
	var uLocal_444 = 20;
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
	var uLocal_545 = 30;
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
	var uLocal_726 = 5;
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
	var uLocal_757 = 7;
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
	var uLocal_807 = 5;
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
	var uLocal_833 = 3;
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
	var uLocal_849 = 21;
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
	var uLocal_974 = 10;
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
	var uLocal_1025 = 5;
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
	var uLocal_1051 = 5;
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
	int* iLocal_1080 = NULL;
	var uLocal_1081 = 3;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 1092616192;
	var uLocal_1088 = 1101004800;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 3;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	struct<8> Local_1105[5];
	struct<32> Local_1106[20];
	char cLocal_1107[32] = "";
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 16;
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
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	bool bLocal_1277 = 0;
	int iLocal_1278 = 0;
	int iLocal_1279 = 0;
	int iLocal_1280 = 0;
	int iLocal_1281 = 0;
	int iLocal_1282 = 0;
	int iLocal_1283 = 0;
	char cLocal_1284[16] = "";
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	char cLocal_1287[16] = "";
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	int iLocal_1290 = 0;
	float fLocal_1291 = 0f;
	int iLocal_1292 = 0;
	int iLocal_1293 = 0;
	int iLocal_1294 = 0;
	int iLocal_1295 = 0;
	int iLocal_1296 = 0;
	int iLocal_1297 = 0;
	char cLocal_1298[16] = "";
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	bool bLocal_1303 = 0;
	int iLocal_1304 = 0;
	int iLocal_1305 = 0;
	int iLocal_1306 = 0;
	int iLocal_1307 = 0;
	struct<2> Local_1308 = { 0, 0 } ;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	struct<2> Local_1311 = { 0, 0 } ;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	int iLocal_1314 = 0;
	bool bLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	bool bLocal_1319 = 0;
	int iLocal_1320 = 0;
	int iLocal_1321 = 0;
	int iLocal_1322 = 0;
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
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
	StringCopy(&Local_48, "JHP1ADS", 16);
	StringCopy(&cLocal_49, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	Local_58 = { 154.9478f, -3092.523f, 4.911984f };
	StringCopy(&cLocal_59, "jhp1a_sec_arrive", 24);
	iLocal_63 = 0;
	iLocal_69 = 6;
	iLocal_1278 = -1;
	iLocal_1282 = -1;
	iLocal_1283 = -1;
	StringCopy(&cLocal_1284, "", 16);
	StringCopy(&cLocal_1287, "", 16);
	fLocal_1291 = 1E+08f;
	iLocal_1294 = 1;
	iLocal_1297 = -1;
	StringCopy(&cLocal_1298, "", 16);
	iLocal_1301 = -1;
	iLocal_1302 = 1;
	iLocal_1306 = -1;
	iLocal_1307 = -1;
	StringCopy(&Local_1308, "", 16);
	StringCopy(&Local_1311, "", 16);
	iLocal_1314 = 1;
	iLocal_1316 = 1;
	iLocal_1320 = -1;
	iLocal_1322 = -1;
	iLocal_1323 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_300(6);
	}
	MISC::SET_MISSION_FLAG(true);
	func_293();
	func_252();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_JewelStoreJobPrep1A", 0);
		if (bLocal_68)
		{
			func_250();
		}
		func_247(&uLocal_70);
		func_189();
		if (!bLocal_66)
		{
			func_187();
			func_176();
			func_175(&Local_1105);
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x143
{
	switch (iLocal_63)
	{
		case 0:
			if (func_25())
			{
				func_24(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0x175
{
	int iVar0;
	
	if ((iLocal_1323 != -1 && ENTITY::DOES_ENTITY_EXIST(Local_46[iLocal_1323 /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iLocal_1323 /*8*/], false))
	{
		iVar0 = ENTITY::GET_ENTITY_HEALTH(Local_46[iLocal_1323 /*8*/]);
		func_23(Local_46[iLocal_1323 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_96866 = 1000;
	}
	else
	{
		Global_96866 = iVar0;
	}
	if (!func_22(&(Local_1105[3 /*8*/])))
	{
		func_21(699);
	}
	func_8(0);
	if (func_7(88))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(bool bParam0, int iParam1)//Position - 0x21C
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63156)
	{
		Global_63156 = iParam1;
	}
	if (bParam0)
	{
		if ((func_6(0) && Global_78565.f_1 == 1) && func_5(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_91193[iVar0 /*5*/];
		uVar2 = Global_78588.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113386.f_9085)
			{
			}
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_78567, 1);
		Global_78583 = uVar2;
		Global_78584 = MISC::GET_GAME_TIMER();
	}
}

int func_4()//Position - 0x2EC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(int iParam0)//Position - 0x31E
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

int func_6(bool bParam0)//Position - 0x35C
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_7(int iParam0)//Position - 0x384
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)//Position - 0x3B0
{
	int iVar0;
	int iVar1;
	
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	if (bParam0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
	PED::SET_CREATE_RANDOM_COPS(true);
	func_18(&Local_1105);
	func_13(&iLocal_1080, 1, 0);
	bLocal_1277 = false;
	iLocal_1278 = -1;
	iLocal_1317 = 0;
	iLocal_1318 = 0;
	bLocal_1319 = false;
	iLocal_1320 = -1;
	iLocal_1322 = -1;
	iLocal_1323 = -1;
	iLocal_1324 = 0;
	iLocal_1325 = 0;
	iLocal_1321 = 0;
	if (bParam0)
	{
		func_11();
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		MISC::CLEAR_AREA_OF_PEDS(158.78f, -3100.44f, 6.0019f, 100f, 0);
		MISC::CLEAR_AREA_OF_COPS(158.78f, -3100.44f, 6.0019f, 100f, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(158.78f, -3100.44f, 6.0019f, 100f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(158.78f, -3100.44f, 6.0019f, 100f, false, false, false, false, false, false, 0);
		MISC::CLEAR_AREA_OF_PROJECTILES(158.78f, -3100.44f, 6.0019f, 100f, 0);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_47)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[iVar0]))
		{
			if (bParam0)
			{
				OBJECT::DELETE_OBJECT(&(iLocal_47[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_47[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		func_10(&(Local_28[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_29, bParam0);
	iVar0 = 0;
	while (iVar0 < Local_46.f_0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					PED::DELETE_PED(&(Local_46[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_46[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_46[iVar0 /*8*/]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_46[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (AUDIO::IS_ALARM_PLAYING(&cLocal_49))
	{
		AUDIO::STOP_ALARM(&cLocal_49, bParam0);
	}
	if (iLocal_1327 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1327, false);
	}
	func_9();
}

void func_9()//Position - 0x608
{
	Global_96296 = 0;
}

void func_10(int* iParam0, bool bParam1)//Position - 0x615
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
	iParam0->f_5 = 0;
	iParam0->f_6 = -1;
	iParam0->f_7 = -1;
	iParam0->f_39 = 0;
	iParam0->f_41 = 0;
	iParam0->f_93 = 1;
	iParam0->f_102 = 0;
	iParam0->f_47 = 0;
	iParam0->f_46 = 0;
	iParam0->f_48 = 0;
	iParam0->f_37 = -1;
	iParam0->f_103 = -1;
	iParam0->f_40 = 0;
	iParam0->f_92 = -1;
	iParam0->f_43 = { 0f, 0f, 0f };
	iParam0->f_88 = { 0f, 0f, 0f };
	iParam0->f_91 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_105))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0->f_105))
		{
			ENTITY::DETACH_ENTITY(iParam0->f_105, true, true);
		}
		if (bParam1)
		{
			OBJECT::DELETE_OBJECT(&(iParam0->f_105));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_105));
		}
	}
	iParam0->f_106 = -1;
	iParam0->f_107 = 0;
	iParam0->f_109 = 0;
	iParam0->f_104 = 0;
}

void func_11()//Position - 0x6E4
{
	Global_20471 = 0;
	func_12();
}

void func_12()//Position - 0x6F4
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

void func_13(int* iParam0, bool bParam1, bool bParam2)//Position - 0x715
{
	int iVar0;
	
	if (BitTest(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_17(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1[iVar0]));
		}
		func_16(iVar0, iParam0);
		func_15(iVar0, iParam0);
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
				if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_14()) && iParam0->f_17[iVar0] != PLAYER::PLAYER_PED_ID())
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

int func_14()//Position - 0x8C0
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_15(int iParam0, var uParam1)//Position - 0x8D0
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

void func_16(int iParam0, var uParam1)//Position - 0x918
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

void func_17(int* iParam0)//Position - 0x960
{
	if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_5));
	}
}

void func_18(var uParam0)//Position - 0x97B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_19(var uParam0)//Position - 0x9A1
{
	if (!func_20(uParam0))
	{
		*uParam0 = 0;
	}
}

int func_20(var uParam0)//Position - 0x9B7
{
	if (*uParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)//Position - 0x9CE
{
	bool bVar0;
	int iVar1;
	
	Global_63155 = 0;
	if (!Global_63379[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_75249)
	{
		if (Global_75250[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_75250[iVar1 /*9*/].f_1 = 1;
			Global_75250[iVar1 /*9*/].f_2 = 0f;
			if (Global_75250[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_22(var uParam0)//Position - 0xA3F
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0, int iParam1)//Position - 0xA6D
{
	int iVar0;
	
	Global_63167 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (iParam1 == -1 || Global_75250[iVar0 /*9*/] == iParam1)
		{
			if (Global_75250[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_75250[iVar0 /*9*/].f_6 = iParam0;
				Global_75250[iVar0 /*9*/].f_7 = 1;
				Global_75250[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)//Position - 0xAD8
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_64 = 0;
		bLocal_65 = false;
		iLocal_63 = iParam0;
	}
}

int func_25()//Position - 0xAF6
{
	bool bVar0;
	
	if (!bLocal_65)
	{
		func_174(&uLocal_70, "SCRIPT\JWL_HA_RAID_STORE");
		func_173(&uLocal_70, joaat("s_m_m_security_01"));
		func_172(&(Local_1105[1 /*8*/]), 0, 0, 1);
		func_172(&(Local_1105[0 /*8*/]), 0, 0, 1);
		func_172(&(Local_1105[4 /*8*/]), 0, 0, 1);
		func_111(0f, 0f, 0f, 0f, 1, func_167());
		Global_96866 = 1000;
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		func_110("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_65 = true;
	}
	if (bLocal_65)
	{
		switch (iLocal_64)
		{
			case 0:
				if (func_105(1) == 0)
				{
					func_13(&iLocal_1080, 1, 0);
					func_23(0, -1);
					func_104(0, -1);
				}
				else if ((func_103() && ENTITY::DOES_ENTITY_EXIST(Local_46[func_102() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[func_102() /*8*/], false))
				{
					VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
					if (iLocal_1323 != func_102())
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
						func_23(Local_46[func_102() /*8*/], -1);
						func_104(Local_46[func_102() /*8*/], -1);
						iLocal_1323 = func_102();
					}
					if (func_100(&iLocal_1080, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_46[func_102() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_64++;
					}
				}
				else if (func_99())
				{
					VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
					func_55(&iLocal_1080, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_1324, "", "", "", 1, 0, 1, -1);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_46[func_54() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, false, true, 0))
					{
						iLocal_64++;
					}
				}
				else
				{
					func_17(&iLocal_1080);
					func_23(0, -1);
					func_104(0, -1);
				}
				break;
			
			case 1:
				if (func_103())
				{
					if (func_52(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				else if (func_99())
				{
					if (func_52(iLocal_1324, 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (func_7(88))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
						ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
						func_51(1);
						func_50(1, 0);
						iLocal_64 = 1000;
					}
					else
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
						iLocal_64++;
					}
					if (func_103())
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_46[iLocal_1323 /*8*/], false);
					}
					else if (func_99())
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_46[func_54() /*8*/], false);
						VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_46[func_54() /*8*/], true);
						VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Local_46[func_54() /*8*/]);
					}
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
				break;
			
			case 1000:
				func_50(1, 0);
				if (!func_48())
				{
					func_46();
				}
				else
				{
					func_45(&uLocal_1112, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_1112, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_64++;
					}
				}
				break;
			
			case 1001:
				func_50(1, 0);
				if (func_27())
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
					iLocal_64++;
				}
				break;
			
			case 1002:
				func_50(1, 0);
				if (!func_27())
				{
					func_26();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_26()//Position - 0xEA8
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, true);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97810[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_97810[iVar0], false))
			{
				ENTITY::SET_ENTITY_PROOFS(Global_97810[iVar0], false, false, false, false, false, false, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_97810[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_43052 != 0 && Global_43052 != 3) && Global_43052 != 2)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
}

int func_27()//Position - 0xF5B
{
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0xF84
{
	func_44(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	if (iParam5 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	Global_2883585 = 0;
	return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2)//Position - 0xFE3
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
					func_43();
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
		if (func_42(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_41();
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
				func_39();
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
				if (func_38())
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
			if (func_37())
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
			func_36();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_35();
		func_30();
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
		func_43();
	}
	return 0;
}

void func_30()//Position - 0x12B1
{
	if (!func_31())
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

int func_31()//Position - 0x12E8
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_34())
	{
		return 0;
	}
	if (func_32(PLAYER::PLAYER_ID()))
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

bool func_32(int iParam0)//Position - 0x134B
{
	return func_33(iParam0, 20);
}

var func_33(int iParam0, int iParam1)//Position - 0x135B
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_34()//Position - 0x1373
{
	return -1;
}

void func_35()//Position - 0x137C
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

void func_36()//Position - 0x13AD
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

int func_37()//Position - 0x1442
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_38()//Position - 0x1469
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

void func_39()//Position - 0x1502
{
	if (func_40(14))
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
		Global_20266 = func_167();
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

bool func_40(int iParam0)//Position - 0x15A4
{
	return Global_43052 == iParam0;
}

void func_41()//Position - 0x15B2
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

bool func_42(int iParam0, int iParam1)//Position - 0x1609
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

void func_43()//Position - 0x1641
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

void func_44(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1698
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

void func_45(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x16EE
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

void func_46()//Position - 0x1789
{
	Global_20471 = 0;
	func_47();
}

void func_47()//Position - 0x1799
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

int func_48()//Position - 0x17BD
{
	if (func_49())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 0;
		}
	}
	return 1;
}

int func_49()//Position - 0x17E3
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_50(bool bParam0, bool bParam1)//Position - 0x1805
{
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 21, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 25, true);
	PAD::DISABLE_CONTROL_ACTION(0, 24, true);
	PAD::DISABLE_CONTROL_ACTION(0, 257, true);
	PAD::DISABLE_CONTROL_ACTION(0, 141, true);
	PAD::DISABLE_CONTROL_ACTION(0, 140, true);
	PAD::DISABLE_CONTROL_ACTION(0, 22, true);
	PAD::DISABLE_CONTROL_ACTION(0, 44, true);
	PAD::DISABLE_CONTROL_ACTION(0, 23, true);
	PAD::DISABLE_CONTROL_ACTION(0, 47, true);
	PAD::DISABLE_CONTROL_ACTION(0, 36, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 37, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (bParam1)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

void func_51(bool bParam0)//Position - 0x18BF
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		if (bParam0)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), false);
		}
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
}

int func_52(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x193B
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
	func_53(iParam0);
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

void func_53(int iParam0)//Position - 0x1AD3
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

int func_54()//Position - 0x1AFF
{
	int iVar0;
	
	if (func_99())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1324, Local_46[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_55(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x1B56
{
	return func_56(iParam0, Param1, Param2, func_98(), func_98(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_97(), func_97(), func_97(), func_97(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_56(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)//Position - 0x1BA5
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
	func_96(iParam0);
	func_95(iParam0);
	func_94();
	if (func_78(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_77(sParam12);
		func_77(sParam13);
		func_77(sParam14);
		func_77(sParam15);
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
				if (func_75(iParam0, iParam21))
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
				func_77(sParam16);
				func_77(sParam19);
				func_77("MORE_SEATS");
				if (bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						func_77(sParam11);
					}
					if (HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(iParam0);
					}
					if ((!func_72(iParam0, 1) && !func_71(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_70(iParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_68(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_77("LOSE_WANTED");
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_72(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_68(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
						iParam0->f_5 = func_67(Var3, 0);
						if (!iParam23 == -1)
						{
							HUD::SET_BLIP_SPRITE(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_66(iParam0->f_5, iParam0);
						}
					}
					else if (!func_65(Var3, HUD::GET_BLIP_COORDS(iParam0->f_5), 0.1f, 0))
					{
						HUD::SET_BLIP_COORDS(iParam0->f_5, Var3);
						if (bParam27)
						{
							func_66(iParam0->f_5, iParam0);
						}
					}
					if (!func_72(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 2))
						{
							func_70(iParam0, sParam11, 0);
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
								else if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar2], func_14()) || !func_63(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_60(iParam0))
							{
								func_77(sParam11);
								func_77(sParam16);
								func_77(sParam12);
								func_77(sParam13);
								func_77(sParam14);
								func_77(sParam15);
								func_77("LOSE_WANTED");
								func_77("MORE_SEATS");
								func_77(sParam19);
								func_13(iParam0, 1, 0);
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
					func_77(sParam16);
					func_77(sParam19);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5) || HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						HUD::REMOVE_BLIP(iParam0);
						func_77(sParam11);
					}
					if ((!func_72(iParam0, 1) && !func_71(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_70(iParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_68(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_77("LOSE_WANTED");
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_72(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_68(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
								func_77(sParam11);
							}
							*iParam0 = func_57(iParam10, 0, 0);
							HUD::SET_BLIP_DISPLAY(*iParam0, 2);
							if (!BitTest(iParam0->f_13, 4))
							{
								func_66(*iParam0, iParam0);
							}
						}
						if (!func_72(iParam0, 2))
						{
							if (!BitTest(iParam0->f_13, 3))
							{
								func_70(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (BitTest(iParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam19))
								{
									if (!BitTest(iParam0->f_13, 4))
									{
										func_70(iParam0, sParam19, 0);
										MISC::SET_BIT(&(iParam0->f_13), 4);
									}
								}
								else if (!BitTest(iParam0->f_13, 4))
								{
									func_70(iParam0, sParam16, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
								if (!BitTest(iParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
									{
										func_68(iParam0->f_17[0], "GET_IN_CAR", 3);
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
					func_77(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_72(iParam0, 2))
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
										func_68(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_70(iParam0, "MORE_SEATS", 0);
									MISC::SET_BIT(&(iParam0->f_13), 13);
								}
							}
							else if (!BitTest(iParam0->f_13, 3))
							{
								func_70(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								if (BitTest(iParam0->f_13, 9))
								{
									func_70(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_72(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 3))
						{
							func_70(iParam0, sParam16, 0);
							MISC::SET_BIT(&(iParam0->f_13), 3);
							MISC::CLEAR_BIT(&(iParam0->f_13), 4);
						}
						else if (BitTest(iParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam19))
							{
								if (!BitTest(iParam0->f_13, 4))
								{
									func_70(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								func_70(iParam0, sParam16, 0);
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
		func_77(sParam11);
		func_77(sParam16);
		func_77(sParam19);
		func_77(sParam16);
		func_77("LOSE_WANTED");
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

int func_57(int iParam0, bool bParam1, bool bParam2)//Position - 0x24AA
{
	return func_58(iParam0, !bParam1, bParam2);
}

int func_58(int iParam0, bool bParam1, bool bParam2)//Position - 0x24BD
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_59(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_59(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_59(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_59(bool bParam0, float fParam1, float fParam2)//Position - 0x2561
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_60(int* iParam0)//Position - 0x2578
{
	if (BitTest(iParam0->f_13, 12))
	{
		if (func_62(PLAYER::PLAYER_PED_ID()))
		{
			if (func_61(1, 0, 1) || BitTest(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_61(1, 0, 1) || BitTest(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_61(bool bParam0, bool bParam1, bool bParam2)//Position - 0x25CD
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

int func_62(int iParam0)//Position - 0x26B2
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

int func_63(int iParam0, int iParam1)//Position - 0x26E9
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && iParam1)
		{
			if (func_64(PLAYER::PLAYER_PED_ID(), iParam0))
			{
				PED::SET_GROUP_SEPARATION_RANGE(func_14(), 50f);
				return 1;
			}
		}
		else if (PED::IS_PED_GROUP_MEMBER(iParam0, func_14()))
		{
			PED::SET_GROUP_SEPARATION_RANGE(func_14(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)//Position - 0x2754
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

int func_65(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x279C
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

void func_66(int iParam0, int* iParam1)//Position - 0x2817
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

int func_67(struct<3> Param0, bool bParam1)//Position - 0x2852
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_59(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_68(int iParam0, char* sParam1, int iParam2)//Position - 0x287E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_69(iParam2), 1);
}

int func_69(int iParam0)//Position - 0x2895
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

void func_70(int* iParam0, char* sParam1, bool bParam2)//Position - 0x2A8A
{
	if (!bParam2)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_110(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = MISC::GET_GAME_TIMER();
}

int func_71(int* iParam0)//Position - 0x2AC1
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

int func_72(int* iParam0, int iParam1)//Position - 0x2AE5
{
	if (iParam1 != 1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
		if (func_74(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_49() && !func_73())
		{
			return 1;
		}
	}
	return 0;
}

int func_73()//Position - 0x2B3D
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

int func_74(var uParam0)//Position - 0x2B54
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

int func_75(var uParam0, int iParam1)//Position - 0x2B77
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_76(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0, var uParam1, int iParam2)//Position - 0x2BA8
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

void func_77(char* sParam0)//Position - 0x2C3C
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		HUD::CLEAR_THIS_PRINT(sParam0);
	}
}

int func_78(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x2C54
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
						if (func_76(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470) == 7 && !func_93(uParam0->f_17[iVar0], uParam0->f_21))
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
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()))
					{
						if (func_91(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_14());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_90(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar10 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, false))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_72(uParam0, 2))
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
							func_68(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_70(uParam0, "MORE_SEATS", 0);
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
			func_77("MORE_SEATS");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(uParam0->f_17[0]) || !PED::IS_PED_INJURED(uParam0->f_17[1])) || !PED::IS_PED_INJURED(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_72(uParam0, 2))
					{
						iVar10 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (func_89(iVar10, uParam0))
						{
							func_70(uParam0, "CMN_VEHSUIT", 0);
							MISC::SET_BIT(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::CLEAR_BIT(&(uParam0->f_13), 31);
					func_77("CMN_VEHSUIT");
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 75))
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
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()))
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
							if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()))
							{
								if (!func_90(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (!func_88(uParam0->f_17[iVar0]))
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
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()))
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
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()))
					{
						iVar21 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (ENTITY::DOES_ENTITY_EXIST(iVar21))
						{
							if (func_76(iVar21, uParam0, 0))
							{
								if (func_87(iVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
									func_15(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										MISC::SET_BIT(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_87(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar21) == joaat("sentinel2"))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
								}
								else
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
								}
								func_86(iVar0, uParam0);
							}
						}
					}
					if ((!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()) && !func_85(uParam0->f_17[iVar0], iParam10)) && !func_84(uParam0->f_17[iVar0], iParam10))
					{
						if (func_91(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()))
							{
								if (((!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]))
								{
									iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
									}
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_14());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = MISC::GET_GAME_TIMER();
								uParam0->f_1[iVar0] = func_57(uParam0->f_17[iVar0], 0, 0);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_66(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (((func_63(uParam0->f_17[iVar0], 1) || func_85(uParam0->f_17[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false)))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
								func_77(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_66(uParam0->f_1[iVar0], uParam0);
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
										if (!func_63(uParam0->f_17[iVar0], 1))
										{
											if (func_62(uParam0->f_17[iVar0]))
											{
												iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], 451360105);
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
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()))
									{
										if ((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_93(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !func_83(uParam0->f_17[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
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
										uParam0->f_1[iVar0] = func_57(uParam0->f_17[iVar0], 0, 0);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()))
							{
								if (func_91(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
									{
										iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], false);
										PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_14());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_14());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
								MISC::SET_BIT(&(uParam0->f_13), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_77(uVar12[iVar0]);
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
		if (!func_72(uParam0, 2))
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
							if (func_88(uParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, false, true, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, false, true, 0) && !func_88(uParam0->f_17[iVar0]))
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
								func_70(uParam0, sParam7, 0);
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
									if (!func_82(iVar0, uParam0))
									{
										if (!MISC::IS_STRING_NULL(uVar13[iVar0]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(uVar13[iVar0], ""))
											{
												func_80(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_79(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_82(iVar0, uParam0))
										{
											func_70(uParam0, uVar12[iVar0], 0);
											func_79(iVar0, uParam0);
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
					func_77(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_77("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_79(int iParam0, var uParam1)//Position - 0x3C97
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

void func_80(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x3CDF
{
	if (!bParam3)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_81(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = MISC::GET_GAME_TIMER();
}

void func_81(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x3D18
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

int func_82(int iParam0, var uParam1)//Position - 0x3D37
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

int func_83(int iParam0, float fParam1)//Position - 0x3D77
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

int func_84(int iParam0, int iParam1)//Position - 0x3DAE
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(iParam0, func_14()))
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

int func_85(int iParam0, int iParam1)//Position - 0x3E15
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

void func_86(int iParam0, var uParam1)//Position - 0x3E4A
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

int func_87(int iParam0, var uParam1)//Position - 0x3E92
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

int func_88(int iParam0)//Position - 0x3ED2
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

int func_89(int iParam0, var uParam1)//Position - 0x3F5F
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

int func_90(var uParam0)//Position - 0x40C1
{
	int iVar0;
	
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_76(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x40F0
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
						if (func_90(uParam0))
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
					if (func_76(iVar0, uParam0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (func_92(iVar0))
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

int func_92(int iParam0)//Position - 0x41CE
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

int func_93(int iParam0, int iParam1)//Position - 0x4206
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

void func_94()//Position - 0x4236
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

void func_95(var uParam0)//Position - 0x42A3
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

void func_96(var uParam0)//Position - 0x4343
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

var func_97()//Position - 0x43D9
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_98()//Position - 0x43E3
{
	struct<3> Var0;
	
	return Var0;
}

int func_99()//Position - 0x43EF
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1324) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1324, false))
	{
		return 1;
	}
	return 0;
}

bool func_100(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)//Position - 0x4413
{
	return func_56(iParam0, Param1, func_101(), Param2, Param3, bParam5, 5, 0, 0, 0, iParam6, sParam7, func_97(), func_97(), func_97(), func_97(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_97(), func_97(), func_97(), 1, fParam4);
}

Vector3 func_101()//Position - 0x4468
{
	return 0f, 0f, 2f;
}

int func_102()//Position - 0x4473
{
	int iVar0;
	
	if (func_103())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_46[iVar0 /*8*/], true))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_103()//Position - 0x44DA
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_46[iVar0 /*8*/], false))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_104(int iParam0, int iParam1)//Position - 0x4537
{
	Global_63165 = iParam0;
	Global_63166 = iParam1;
}

int func_105(bool bParam0)//Position - 0x4549
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(Local_46[iVar1 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar1 /*8*/], false)) && !func_109(Local_46[iVar1 /*8*/])) && (!bParam0 || func_106(Local_46[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_106(int iParam0)//Position - 0x45B4
{
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == iLocal_1281)
	{
		if (func_108(PLAYER::PLAYER_PED_ID(), Local_58, 1) < 500f)
		{
			return 1;
		}
	}
	else if (func_107(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}

float func_107(int iParam0, int iParam1, bool bParam2)//Position - 0x45FF
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

float func_108(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x465D
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

int func_109(int iParam0)//Position - 0x4697
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_110(char* sParam0, int iParam1, int iParam2)//Position - 0x46DB
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_111(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x46F4
{
	struct<3> Var0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_103950.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_103950.f_4, false))
		{
			if (func_166(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_163(ENTITY::GET_ENTITY_COORDS(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_112(Global_103950.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_112(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x476F
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
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == iParam0)
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
		func_162(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_157(iParam0, &Var0);
		if (func_156(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_149(iParam3, &Var0, Param1, fParam2, func_155(iParam0));
		func_113(iParam3, iParam0, 0);
	}
}

void func_113(int iParam0, int iParam1, int iParam2)//Position - 0x4898
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_145(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
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
				Global_113386.f_32749.f_4801 = func_134();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_166(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_114(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_114(int iParam0, int iParam1)//Position - 0x49AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_115(iParam0))
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
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
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
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_157(iParam0, &(Global_113386.f_32749.f_5510));
}

int func_115(int iParam0)//Position - 0x4BB1
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_132(iParam0, 0, 0)) || func_132(iParam0, 1, 0)) || func_132(iParam0, 2, 0)) || func_155(iParam0) != 145) || func_131(iParam0)) || func_130(iParam0)) || func_129(iParam0)) || func_128(iParam0)) || !func_116(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_130(iParam0))
		{
		}
		if (func_130(iParam0))
		{
		}
		if (func_132(iParam0, 0, 0))
		{
		}
		if (func_132(iParam0, 1, 0))
		{
		}
		if (func_132(iParam0, 2, 0))
		{
		}
		if (func_155(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_116(int iParam0)//Position - 0x4C8E
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_117(iParam0, 0))
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

int func_117(int iParam0, bool bParam1)//Position - 0x4E3F
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
		if (!func_127())
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
		if ((((!func_126() && !func_125()) && !func_124()) && !func_123()) && !func_127())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_122() || MISC::IS_PC_VERSION()) || func_121())
		{
		}
		else if (!func_124())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_120(iParam0))
		{
			return 0;
		}
	}
	if (!func_118(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_118(int iParam0)//Position - 0x4FBF
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_119())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
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
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_119()//Position - 0x508B
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x50A2
{
	int iVar0;
	int iVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && iVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && iVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && iVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && iVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && iVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && iVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && iVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && iVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && iVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && iVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && iVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && iVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && iVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && iVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && iVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && iVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && iVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && iVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && iVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && iVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && iVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && iVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && iVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && iVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && iVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && iVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && iVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && iVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && iVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && iVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && iVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && iVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && iVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && iVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && iVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && iVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && iVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && iVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && iVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && iVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && iVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && iVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && iVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && iVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && iVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && iVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && iVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && iVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && iVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && iVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && iVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && iVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && iVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && iVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && iVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && iVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && iVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && iVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && iVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && iVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && iVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && iVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && iVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && iVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && iVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && iVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && iVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && iVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && iVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && iVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && iVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && iVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && iVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && iVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && iVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && iVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && iVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && iVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && iVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && iVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && iVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && iVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && iVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && iVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && iVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && iVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && iVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && iVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && iVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && iVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && iVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && iVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && iVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && iVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && iVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && iVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && iVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && iVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && iVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && iVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && iVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && iVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && iVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && iVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && iVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && iVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && iVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && iVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && iVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && iVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && iVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && iVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && iVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && iVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && iVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && iVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && iVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && iVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && iVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && iVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && iVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && iVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && iVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && iVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && iVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && iVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && iVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && iVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && iVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && iVar1 < Global_262145.f_24193)
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
		if (!Global_262145.f_26756 && iVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && iVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && iVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && iVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && iVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && iVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && iVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && iVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && iVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && iVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && iVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && iVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && iVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && iVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && iVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && iVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && iVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && iVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && iVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && iVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && iVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && iVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && iVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && iVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && iVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && iVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && iVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && iVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && iVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && iVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && iVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && iVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && iVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && iVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && iVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && iVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && iVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && iVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && iVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && iVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && iVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && iVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && iVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && iVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && iVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && iVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && iVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && iVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && iVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && iVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && iVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && iVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && iVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && iVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && iVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && iVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && iVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && iVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && iVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && iVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && iVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && iVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && iVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && iVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && iVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && iVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && iVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && iVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && iVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && iVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && iVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && iVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && iVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && iVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && iVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && iVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && iVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && iVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && iVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && iVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO3"))
	{
		if (!Global_262145.f_33037 && iVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CORSITA"))
	{
		if (!Global_262145.f_33031 && iVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DRAUGUR"))
	{
		if (!Global_262145.f_33035 && iVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GREENWOOD"))
	{
		if (!Global_262145.f_33029 && iVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KANJOSJ"))
	{
		if (!Global_262145.f_33040 && iVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LM87"))
	{
		if (!Global_262145.f_33032 && iVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POSTLUDE"))
	{
		if (!Global_262145.f_33041 && iVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RHINEHART"))
	{
		if (!Global_262145.f_33043 && iVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SM722"))
	{
		if (!Global_262145.f_33034 && iVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TENF"))
	{
		if (!Global_262145.f_33042 && iVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TENF2"))
	{
		if (!Global_262145.f_33045 && iVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO2"))
	{
		if (!Global_262145.f_33030 && iVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGERO2"))
	{
		if (!Global_262145.f_33038 && iVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WEEVIL2"))
	{
		if (!Global_262145.f_33044 && iVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER4"))
	{
		if (!Global_262145.f_33036 && iVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL4"))
	{
		if (!Global_262145.f_33046 && iVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONADA"))
	{
		if (!Global_262145.f_33033 && iVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNISEGT"))
	{
		if (!Global_262145.f_33028 && iVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_121()//Position - 0x8375
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

bool func_122()//Position - 0x838B
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

int func_123()//Position - 0x83A1
{
	return 0;
}

int func_124()//Position - 0x83AA
{
	return 1;
}

int func_125()//Position - 0x83B3
{
	return 1;
}

int func_126()//Position - 0x83BC
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_127()//Position - 0x83D5
{
	int iVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
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

int func_128(int iParam0)//Position - 0x848D
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_117(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x84D3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0x850E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar0], false))
			{
				if (Global_97772[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x858A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[24]))
	{
		if (iParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_132(int iParam0, int iParam1, bool bParam2)//Position - 0x8672
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_133(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
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

int func_133(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x86E0
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

var func_134()//Position - 0x87B8
{
	var uVar0;
	
	func_144(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_143(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_142(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_137(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_136(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_135(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_135(var uParam0, int iParam1)//Position - 0x87FE
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

void func_136(var uParam0, int iParam1)//Position - 0x8884
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_137(var uParam0, int iParam1)//Position - 0x88B7
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_139(*uParam0);
	if (iParam1 < 1 || iParam1 > func_138(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_138(int iParam0, int iParam1)//Position - 0x8908
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

var func_139(int iParam0)//Position - 0x89AA
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_140(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_140(bool bParam0, int iParam1, int iParam2)//Position - 0x89CC
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_141(var uParam0)//Position - 0x89E3
{
	return uParam0 & 15;
}

void func_142(var uParam0, int iParam1)//Position - 0x89F0
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_143(var uParam0, int iParam1)//Position - 0x8A2A
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_144(var uParam0, int iParam1)//Position - 0x8A65
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_145(var uParam0, int iParam1)//Position - 0x8AA1
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
			uParam0->f_4 = func_146(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_146(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_146(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_146(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_146(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_146(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_146(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_146(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_146(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
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
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
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
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
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
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
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
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
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
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
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
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
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
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
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
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
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
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
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
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
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
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
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
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
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
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_127())
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
			if (func_127())
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
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
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
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
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
		uParam0->f_4 = Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_156(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113386.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113386.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_156(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_156(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_146(int iParam0, int iParam1)//Position - 0xA18F
{
	struct<82> Var0;
	
	if (func_148(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_147(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_147(int iParam0, var uParam1, int iParam2)//Position - 0xA1D1
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
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
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
					if (Global_113386.f_9085.f_99.f_58[119])
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
			else if (Global_113386.f_9085.f_99.f_58[118])
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

bool func_148(int iParam0)//Position - 0xA42D
{
	return iParam0 < 3;
}

void func_149(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0xA439
{
	if (func_145(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			func_154(iParam0);
			func_153(uParam1, &(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 11))
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_150(iParam0, 1);
		}
	}
}

void func_150(int iParam0, bool bParam1)//Position - 0xA532
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_152(iParam0, 0))
		{
			func_151(iParam0, 1, 0);
			func_151(iParam0, 2, 0);
			func_151(iParam0, 3, 0);
			func_151(iParam0, 4, 0);
			func_151(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_151(iParam0, 0, 0);
	}
}

void func_151(int iParam0, int iParam1, bool bParam2)//Position - 0xA58F
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113386.f_32749[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_32749[iParam0]), iParam1);
	}
}

int func_152(int iParam0, int iParam1)//Position - 0xA5CA
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_153(var uParam0, var uParam1)//Position - 0xA5EA
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

void func_154(int iParam0)//Position - 0xA6B6
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_145(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
			Global_77137.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			func_150(iParam0, 0);
		}
	}
}

int func_155(int iParam0)//Position - 0xA72D
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
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_156(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0xA790
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_157(int iParam0, var uParam1)//Position - 0xA7D7
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_161(uParam1);
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
		if (uParam1->f_65 == -1 && !func_160(uParam1->f_66))
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
		func_159(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_158(iVar0 + 1));
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

int func_158(int iParam0)//Position - 0xAA82
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

int func_159(int iParam0, var uParam1, var uParam2)//Position - 0xAB32
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

int func_160(int iParam0)//Position - 0xAD25
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

void func_161(var uParam0)//Position - 0xAD45
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

void func_162(int iParam0)//Position - 0xADF5
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_154(iParam0);
	func_150(iParam0, 0);
}

int func_163(struct<3> Param0, int iParam1, var uParam2, var uParam3)//Position - 0xAE1C
{
	int iVar0;
	
	iVar0 = func_164(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_164(struct<3> Param0, int iParam1, int iParam2)//Position - 0xAF32
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
				if (func_165(iVar0) || iParam2 == 0)
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

var func_165(int iParam0)//Position - 0xAFC1
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_166(int iParam0)//Position - 0xAFD6
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77137.f_139[iParam0];
}

int func_167()//Position - 0xAFF2
{
	func_168();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_168()//Position - 0xB00B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_170(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_169(PLAYER::PLAYER_PED_ID());
			if (func_148(iVar0) && (!func_40(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_148(Global_113386.f_2363.f_539.f_4321))
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

int func_169(int iParam0)//Position - 0xB108
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_170(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_170(int iParam0)//Position - 0xB145
{
	if (func_148(iParam0))
	{
		return func_171(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_171(int iParam0)//Position - 0xB16A
{
	return Global_1998[iParam0 /*29*/];
}

int func_172(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB179
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = MISC::GET_GAME_TIMER();
		uParam0->f_5 = MISC::GET_GAME_TIMER();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

int func_173(var uParam0, int iParam1)//Position - 0xB1F9
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
					uParam0->f_1007 = 1;
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
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_174(var uParam0, char* sParam1)//Position - 0xB2A2
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
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
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, false, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_175(var uParam0)//Position - 0xB36C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_176()//Position - 0xB3DC
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = false;
	if (func_108(PLAYER::PLAYER_PED_ID(), Local_58, 1) < 70f)
	{
		HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	if (iLocal_1322 == 9)
	{
		if (!iLocal_1321)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_1321 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_29.f_0))
		{
			if (func_107(Local_29.f_0, PLAYER::PLAYER_PED_ID(), 1) > 300f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_29);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1324) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1324, false))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1324, Local_46[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iLocal_1324 = 0;
		}
	}
	if (func_186())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Local_46[iVar0 /*8*/]))
				{
					iLocal_1324 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				}
			}
			iVar0++;
		}
	}
	func_179();
	if (iLocal_63 == 0)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, false, true, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_28[iVar1 /*110*/]))
			{
				if ((Local_28[iVar1 /*110*/].f_5 == 5 && func_107(PLAYER::PLAYER_PED_ID(), Local_28[iVar1 /*110*/], 1) > 300f) && func_108(PLAYER::PLAYER_PED_ID(), Local_58, 1) > 300f)
				{
					PED::DELETE_PED(&(Local_28[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_46[iVar0 /*8*/]));
					if (HUD::DOES_BLIP_EXIST(Local_46[iVar0 /*8*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_46[iVar0 /*8*/].f_1));
					}
					if (bVar3)
					{
						iVar4 = 1;
					}
					else
					{
						iVar4 = 2;
					}
				}
				else if (func_109(Local_46[iVar0 /*8*/]))
				{
					if (HUD::DOES_BLIP_EXIST(Local_46[iVar0 /*8*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_46[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_106(Local_46[iVar0 /*8*/]))
				{
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_46[iVar0 /*8*/]) == iLocal_1281)
					{
						if (iVar4 != 4)
						{
							iVar4 = 5;
						}
					}
					else
					{
						iVar4 = 4;
					}
				}
			}
			if (((((iLocal_1322 == 9 && func_102() != -1) && ENTITY::DOES_ENTITY_EXIST(Local_46[func_102() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[func_102() /*8*/], false)) && !func_109(Local_46[func_102() /*8*/])) || (((iLocal_1322 == 10 && func_54() != -1) && ENTITY::DOES_ENTITY_EXIST(Local_46[func_54() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[func_54() /*8*/], false)))
			{
				if (HUD::DOES_BLIP_EXIST(Local_46[iVar0 /*8*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_46[iVar0 /*8*/].f_1));
				}
			}
			else if ((((ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false)) && !func_109(Local_46[iVar0 /*8*/])) && func_106(Local_46[iVar0 /*8*/])) && iLocal_64 == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_46[iVar0 /*8*/].f_1))
				{
					Local_46[iVar0 /*8*/].f_1 = func_178(Local_46[iVar0 /*8*/], 0, 0);
					HUD::SET_BLIP_PRIORITY(Local_46[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_1322 == 9 || iLocal_1322 == 10)
		{
			if (func_177("JHP1A_BKIN", 0, 0) || func_177("JHP1A_BKINANY", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
		}
		else if (iLocal_64 == 0)
		{
			if (!iLocal_1316)
			{
				if (func_105(1) == 1)
				{
					func_110("JHP1A_BKIN", 7500, 1);
				}
				iLocal_1316 = 1;
			}
		}
		if (func_105(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_300(iVar4);
			}
		}
	}
}

bool func_177(char* sParam0, int iParam1, char* sParam2)//Position - 0xB820
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_178(int iParam0, bool bParam1, bool bParam2)//Position - 0xB83E
{
	return func_58(iParam0, !bParam1, bParam2);
}

void func_179()//Position - 0xB851
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_46[3 /*8*/], true))
		{
			iLocal_1322 = 11;
		}
		else if (func_185())
		{
			iLocal_1322 = 7;
		}
		else if (func_184())
		{
			iLocal_1322 = 6;
		}
		else if (func_103())
		{
			iLocal_1322 = 9;
			iLocal_1316 = 0;
		}
		else if (func_99())
		{
			iLocal_1322 = 10;
		}
		else if (func_183())
		{
			iLocal_1322 = 8;
		}
		else if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1325) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1325, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1325, true)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1325, Local_58, 119.7228f, -3092.472f, 13.46126f, 44f, false, true, 0))
		{
			iLocal_1322 = 5;
		}
		else if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !func_182()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_58, 119.7228f, -3092.472f, 13.46126f, 44f, false, true, 0))
		{
			iLocal_1325 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_1322 = 5;
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_58, 119.7228f, -3092.472f, 13.46126f, 44f, false, true, 0))
		{
			iLocal_1322 = 2;
		}
		else if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1325) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1325, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1325, true)) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1325, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_1325, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_1322 = 4;
		}
		else if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !func_182()) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_1325 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_1322 = 4;
		}
		else if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !func_182()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_58, 119.7228f, -3092.472f, 13.46126f, 44f, false, true, 0))
		{
			iLocal_1325 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_1322 = 3;
		}
		else if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !func_182()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, false, true, 0))
		{
			iLocal_1325 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_1322 = 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
		{
			iLocal_1322 = 1;
		}
		else
		{
			iLocal_1325 = 0;
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, false, true, 0))
			{
				iLocal_1322 = 0;
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
			{
				iLocal_1322 = 0;
			}
			else
			{
				iLocal_1322 = -1;
			}
		}
		if (iLocal_1322 == 1)
		{
			if (func_181(Local_28[0 /*110*/]))
			{
				func_180(Local_28[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_181(Local_28[0 /*110*/]))
		{
			func_180(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_1319)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 155, true);
		}
		if ((iLocal_1322 != -1 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && PED::IS_COP_PED_IN_AREA_3D(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_180(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0xBD25
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
	}
}

int func_181(int iParam0)//Position - 0xBD61
{
	if (iParam0 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (ENTITY::GET_ENTITY_TYPE(iParam0))
		{
			case 1:
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
				{
					return 1;
				}
				break;
			
			default:
				if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_182()//Position - 0xBDCF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
		{
			if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_46[iVar0 /*8*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_183()//Position - 0xBE1B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_46[iVar0 /*8*/], PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_184()//Position - 0xBE5D
{
	int iVar0;
	
	if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false)) && PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == Local_46[iVar0 /*8*/])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_185()//Position - 0xBEBB
{
	int iVar0;
	
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_46[iVar0 /*8*/], true))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_186()//Position - 0xBF34
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_187()//Position - 0xBF85
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_300(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_28[iVar0 /*110*/]))
		{
			if (Local_28[iVar0 /*110*/].f_93)
			{
				if (Local_28[iVar0 /*110*/].f_102)
				{
					func_188(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
				else
				{
					func_188(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
			}
			if (!func_181(Local_28[iVar0 /*110*/]))
			{
				if (Local_28[iVar0 /*110*/].f_103 == -1)
				{
					Local_28[iVar0 /*110*/].f_103 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - Local_28[iVar0 /*110*/].f_103) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_46.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && Local_46[iVar0 /*8*/].f_7)
		{
			if (!func_181(Local_46[iVar0 /*8*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_46[iVar0 /*8*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_46[iVar0 /*8*/].f_1));
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_46[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_188(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11)//Position - 0xC0BE
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

void func_189()//Position - 0xC2AA
{
	struct<3> Var0;
	float fVar1;
	
	if (bLocal_66 == 1)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
		}
		else
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::STOP_CUTSCENE(false);
				CUTSCENE::REMOVE_CUTSCENE();
			}
			func_24(iLocal_67);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_8(1);
			if (!func_246())
			{
				func_245(iLocal_63, &Var0, &fVar1);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				func_243(&uLocal_70, Var0, 50f, 0);
			}
			func_242(&uLocal_70);
			switch (iLocal_63)
			{
				case 0:
					func_173(&uLocal_70, joaat("burrito2"));
					func_173(&uLocal_70, joaat("s_m_y_pestcont_01"));
					func_173(&uLocal_70, joaat("s_m_m_security_01"));
					func_173(&uLocal_70, joaat("dilettante2"));
					func_173(&uLocal_70, joaat("p_amb_clipboard_01"));
					func_241(&uLocal_70, &cLocal_59);
					func_240(&uLocal_70, "misslsdhsclipboard@base");
					func_240(&uLocal_70, "misslsdhsclipboard@idle_a");
					func_240(&uLocal_70, "misstrevor3");
					func_239(&uLocal_70, iLocal_1281);
					if (((func_238() && !VEHICLE::IS_THIS_MODEL_A_BOAT(func_237())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_237())) && !VEHICLE::IS_THIS_MODEL_A_HELI(func_237()))
					{
						func_173(&uLocal_70, func_237());
					}
					break;
				
				case 1:
					func_173(&uLocal_70, joaat("burrito2"));
					break;
			}
			while (!func_236(&uLocal_70))
			{
				SYSTEM::WAIT(0);
				func_187();
			}
			switch (iLocal_63)
			{
				case 0:
					if (((func_238() && !VEHICLE::IS_THIS_MODEL_A_BOAT(func_237())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_237())) && !VEHICLE::IS_THIS_MODEL_A_HELI(func_237()))
					{
						while (!func_235())
						{
							SYSTEM::WAIT(0);
						}
						Local_46[4 /*8*/] = func_196(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_246())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_46[4 /*8*/]))
						{
							func_193(Local_46[4 /*8*/], -1, 1);
						}
						else
						{
							func_193(0, -1, 1);
						}
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						if (ENTITY::DOES_ENTITY_EXIST(Local_46[4 /*8*/]))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_46[4 /*8*/], -1);
						}
					}
					while (!func_190(0))
					{
						SYSTEM::WAIT(0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				
				case 1:
					if (!func_7(88))
					{
						Local_46[0 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, true, true, false);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_46[0 /*8*/], false);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_46[0 /*8*/], 5f);
					}
					if (func_246())
					{
						func_193(0, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					}
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 692.067f, -1004.812f, 21.9059f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 359.5735f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
			}
			if (CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN())
			{
				if (!func_7(88) || iLocal_63 != 1)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			bLocal_66 = false;
		}
	}
}

int func_190(bool bParam0)//Position - 0xC602
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
		{
			Local_46[0 /*8*/] = Global_96938[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_46[0 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
		{
			Local_46[1 /*8*/] = Global_96938[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_46[1 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
		{
			Local_46[2 /*8*/] = Global_96938[2];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_46[2 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			Local_28[1 /*110*/] = Global_96938.f_9[0];
			if (!PED::IS_PED_INJURED(Local_28[1 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_28[1 /*110*/], false, 1);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_28[1 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
		{
			Local_28[1 /*110*/].f_105 = Global_96938.f_28[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_28[1 /*110*/].f_105, true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
		{
			Local_28[0 /*110*/] = Global_96938.f_9[2];
			if (!PED::IS_PED_INJURED(Local_28[0 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_28[0 /*110*/], false, 1);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_28[0 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
		{
			Local_28[2 /*110*/] = Global_96938.f_9[3];
			if (!PED::IS_PED_INJURED(Local_28[3 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_28[2 /*110*/], false, 1);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_28[2 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
		{
			Local_28[3 /*110*/] = Global_96938.f_9[4];
			if (!PED::IS_PED_INJURED(Local_28[3 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_28[3 /*110*/], false, 1);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_28[3 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[5]))
		{
			Local_29.f_0 = Global_96938.f_9[5];
			if (!PED::IS_PED_INJURED(Local_29.f_0))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_29.f_0, false, 1);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_29.f_0, true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[3]))
		{
			Local_46[3 /*8*/] = Global_96938[3];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_46[3 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_46[0 /*8*/]))
		{
			Local_46[0 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, true, true, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_46[1 /*8*/]))
		{
			Local_46[1 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, true, true, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_46[2 /*8*/]))
		{
			Local_46[2 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, true, true, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_28[1 /*110*/]))
		{
			Local_28[1 /*110*/] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, true, true);
			ENTITY::SET_ENTITY_HEALTH(Local_28[1 /*110*/], 150, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[1 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[1 /*110*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[1 /*110*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[1 /*110*/], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[1 /*110*/], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[1 /*110*/], 10, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_28[1 /*110*/], 0, 1, 0, false);
			PED::SET_PED_PROP_INDEX(Local_28[1 /*110*/], 1, 0, 0, false);
			PED::SET_PED_LOD_MULTIPLIER(Local_28[1 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_28[1 /*110*/].f_105))
		{
			Local_28[1 /*110*/].f_105 = OBJECT::CREATE_OBJECT(joaat("p_amb_clipboard_01"), PED::GET_PED_BONE_COORDS(Local_28[1 /*110*/], 60309, 0f, 0f, 0f), true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_28[1 /*110*/].f_105, Local_28[1 /*110*/], PED::GET_PED_BONE_INDEX(Local_28[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, true, false, 2, true, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_28[0 /*110*/]))
		{
			Local_28[0 /*110*/] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[0 /*110*/], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[0 /*110*/], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[0 /*110*/], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[0 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[0 /*110*/], 10, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_28[0 /*110*/], 0, 0, 0, false);
			PED::SET_PED_LOD_MULTIPLIER(Local_28[0 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_28[2 /*110*/]))
		{
			Local_28[2 /*110*/] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[2 /*110*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[2 /*110*/], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[2 /*110*/], 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[2 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[2 /*110*/], 10, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_28[2 /*110*/], 1, 0, 0, false);
			PED::SET_PED_LOD_MULTIPLIER(Local_28[2 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_28[3 /*110*/]))
		{
			Local_28[3 /*110*/] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[3 /*110*/], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[3 /*110*/], 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[3 /*110*/], 4, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[3 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[3 /*110*/], 10, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_28[3 /*110*/], 0, 0, 0, false);
			PED::SET_PED_LOD_MULTIPLIER(Local_28[3 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_29.f_0) && !ENTITY::DOES_ENTITY_EXIST(Local_46[3 /*8*/]))
		{
			if (CLOCK::GET_CLOCK_HOURS() >= 5 && CLOCK::GET_CLOCK_HOURS() < 21)
			{
				Local_46[3 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, true, true, false);
				Local_29.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_46[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, true, true);
			}
			else
			{
				Local_46[3 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, true, true, false);
				Local_29.f_0 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, true, true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_46[0 /*8*/]))
	{
		func_192(Local_46[0 /*8*/], 0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_46[0 /*8*/], 7);
		VEHICLE::SET_VEHICLE_ALARM(Local_46[0 /*8*/], true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_46[0 /*8*/], true);
		Local_46[0 /*8*/].f_7 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_46[1 /*8*/]))
	{
		func_192(Local_46[1 /*8*/], 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_46[1 /*8*/], true, true, false);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_46[1 /*8*/], 4, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_46[1 /*8*/], 0, true, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_46[1 /*8*/], 4, false, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_46[1 /*8*/], true);
		Local_46[1 /*8*/].f_7 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_46[2 /*8*/]))
	{
		func_192(Local_46[2 /*8*/], 2);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_46[2 /*8*/], 2, true, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_46[2 /*8*/], 3, true, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_46[2 /*8*/], true);
		Local_46[2 /*8*/].f_7 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_28[1 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_28[1 /*110*/], &(Local_28[1 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_28[1 /*110*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_28[1 /*110*/], iLocal_1279);
		AUDIO::STOP_PED_SPEAKING(Local_28[1 /*110*/], true);
		func_180(Local_28[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		PED::SET_PED_HEARING_RANGE(Local_28[1 /*110*/], 50f);
		StringCopy(&(Local_28[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_28[1 /*110*/].f_42 = 20f;
		Local_28[1 /*110*/].f_86 = 1;
		Local_28[1 /*110*/].f_87 = 1;
		Local_28[1 /*110*/].f_107 = joaat("p_amb_clipboard_01");
		Local_28[1 /*110*/].f_106 = 60309;
		Local_28[1 /*110*/].f_108 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_28[0 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_28[0 /*110*/], &(Local_28[0 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_28[0 /*110*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_28[0 /*110*/], iLocal_1279);
		AUDIO::STOP_PED_SPEAKING(Local_28[0 /*110*/], true);
		func_180(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		PED::SET_PED_HEARING_RANGE(Local_28[0 /*110*/], 50f);
		StringCopy(&(Local_28[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_28[0 /*110*/].f_86 = 1;
		Local_28[0 /*110*/].f_87 = 1;
		Local_28[0 /*110*/].f_42 = 17.5f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_28[2 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_28[2 /*110*/], &(Local_28[2 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_28[2 /*110*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_28[2 /*110*/], iLocal_1279);
		func_180(Local_28[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		AUDIO::STOP_PED_SPEAKING(Local_28[2 /*110*/], true);
		PED::SET_PED_HEARING_RANGE(Local_28[2 /*110*/], 50f);
		StringCopy(&(Local_28[2 /*110*/].f_1), "front 1", 16);
		Local_28[2 /*110*/].f_86 = 0;
		Local_28[2 /*110*/].f_87 = 0;
		Local_28[2 /*110*/].f_42 = 17.5f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_28[3 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_28[3 /*110*/], &(Local_28[3 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_28[3 /*110*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_28[3 /*110*/], iLocal_1279);
		PED::SET_PED_HEARING_RANGE(Local_28[3 /*110*/], 50f);
		func_180(Local_28[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		AUDIO::STOP_PED_SPEAKING(Local_28[3 /*110*/], true);
		StringCopy(&(Local_28[3 /*110*/].f_1), "front 2", 16);
		Local_28[3 /*110*/].f_86 = 0;
		Local_28[3 /*110*/].f_87 = 0;
		Local_28[3 /*110*/].f_42 = 17.5f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_29.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_46[3 /*8*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_29.f_0, &(Local_29.f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_29.f_0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_29.f_0, iLocal_1279);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_29.f_0, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_29.f_0, 2, false);
		WEAPON::GIVE_WEAPON_TO_PED(Local_29.f_0, joaat("weapon_nightstick"), -1, false, true);
		PED::SET_PED_ACCURACY(Local_29.f_0, 5);
		func_180(Local_29.f_0, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_29.f_1), "sec", 16);
		Local_29.f_86 = 1;
		Local_29.f_87 = 1;
		Local_29.f_93 = 0;
		if (Global_96938.f_357 == 1)
		{
			if (!func_191(Local_29.f_0, 242628503, 1))
			{
				if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, true))
				{
					iLocal_1326 = 0;
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, Local_46[3 /*8*/], &cLocal_59, 786599, 0, 0, -1, -1f, false, 2f);
					TASK::TASK_LEAVE_VEHICLE(0, Local_46[3 /*8*/], 0);
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(Local_29.f_0, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!func_191(Local_29.f_0, -1680762137, 1))
		{
			if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, true))
			{
				iLocal_1326 = 1;
				TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Local_29.f_0, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((ENTITY::DOES_ENTITY_EXIST(Local_46[0 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_46[1 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_46[2 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_46[3 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_28[1 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_28[0 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_28[2 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_28[3 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_29.f_0)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}

int func_191(int iParam0, int iParam1, bool bParam2)//Position - 0xD1C4
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

void func_192(var uParam0, int iParam1)//Position - 0xD20A
{
	Global_100441.f_22[iParam1] = uParam0;
}

void func_193(int iParam0, int iParam1, int iParam2)//Position - 0xD21E
{
	if (func_195() && func_246())
	{
		while (Global_100436 != 6)
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
		func_194(0);
	}
}

void func_194(int iParam0)//Position - 0xD2E2
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_100441.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_100441.f_20), 13);
	}
}

int func_195()//Position - 0xD30B
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

int func_196(struct<3> Param0, float fParam1)//Position - 0xD32F
{
	return func_197(&(Global_106934.f_2890), Param0, fParam1, 0);
}

int func_197(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0xD349
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_234(uParam0))
	{
		if (func_156(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_233(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
			func_232(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, false, false, true);
				}
				func_206(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_205(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_205(uParam0->f_11, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					func_204(iVar0, uParam0->f_11);
				}
				else if ((!func_202(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = func_201(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_198(iVar4);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							func_150(24, 0);
							func_198(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_114(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_198(int iParam0)//Position - 0xD5FB
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_145(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&(Global_77137.f_139[iParam0]));
			}
		}
		Global_77137[iParam0] = 1;
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_152(iParam0, 0)) && Global_78046.f_66 == 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] != 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] > 3) && (!func_199(0, Global_77137.f_555[0 /*21*/].f_12) || !func_199(1, Global_77137.f_555[0 /*21*/].f_12)))
			{
				func_153(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), &Global_78046);
				Global_78124 = Global_113386.f_32749.f_5591;
			}
			func_150(iParam0, 0);
		}
	}
}

int func_199(int iParam0, int iParam1)//Position - 0xD76A
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_200(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_117(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_200(var uParam0)//Position - 0xD7DC
{
	return *uParam0;
}

int func_201(int iParam0)//Position - 0xD7E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_77137.f_484[iVar0], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[iVar0], false))
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_77137.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77137.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_202(int iParam0, struct<3> Param1, bool bParam2)//Position - 0xD8AA
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_203(iParam0, Global_77137.f_139[38], 0))
			{
				func_198(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_203(iParam0, Global_77137.f_139[43], 1))
			{
				func_198(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_203(iParam0, uVar1[iVar3], 1) && func_65(ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_156(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], true), true) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[14], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77137.f_484[14]))
				{
					func_198(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[20], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77137.f_484[20]))
				{
					func_198(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_203(int iParam0, int iParam1, bool bParam2)//Position - 0xDAB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_204(int iParam0, int iParam1)//Position - 0xDB13
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			Global_97772[iVar0] = iParam0;
			Global_97782[iVar0] = iParam1;
			Global_97792[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_97792[iVar0]))
			{
				Global_97820[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_97820[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_205(int iParam0, int iParam1)//Position - 0xDB95
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			if (iParam0 == 145 || Global_97782[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0]) == func_146(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_97772[iVar0], false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97772[iVar0], false, true);
						VEHICLE::DELETE_VEHICLE(&(Global_97772[iVar0]));
						Global_97782[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_206(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xDC33
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
		if (!func_224(iParam0))
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
			if (BitTest(uParam1->f_77, func_158(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_158(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_158(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_158(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_158(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_158(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_158(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_158(iVar3));
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
					if (BitTest(uParam1->f_77, func_158(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_158(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_158(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_158(4));
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
			MISC::SET_BIT(&(uParam1->f_77), func_158(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_158(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_158(iVar5));
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
			if (func_222(uParam1->f_5) || func_222(uParam1->f_6))
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
		if (((BitTest(uParam1->f_77, 15) || func_221(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_220())
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
		if (uParam1->f_65 == -1 && !func_160(uParam1->f_66))
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
						func_219(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_219(iParam0, uParam1->f_69);
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
			func_212(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_158(iVar6 + 1)))
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
		if (((func_207() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
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

int func_207()//Position - 0xE2DA
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_210(7))
	{
		if (func_209(Global_2703735.f_4.f_16) || func_208(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_208(var uParam0)//Position - 0xE369
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_209(int iParam0)//Position - 0xE38D
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_33(iParam0, 9);
	}
	return 0;
}

bool func_210(int iParam0)//Position - 0xE3AB
{
	return func_211(&(Global_2703735.f_169), iParam0);
}

var func_211(var uParam0, var uParam1)//Position - 0xE3BF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_212(int iParam0, var uParam1, var uParam2)//Position - 0xE3E2
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
				else if (func_217(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
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
	if (func_216(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_215(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_215(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_214(iParam0);
	if (func_213(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_213(int iParam0)//Position - 0xE5BC
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

void func_214(var uParam0)//Position - 0xE698
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

int func_215(int iParam0, int iParam1)//Position - 0xE6EF
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

int func_216(int iParam0, int iParam1)//Position - 0xE7D4
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

int func_217(int iParam0, int iParam1, int iParam2)//Position - 0xEBB3
{
	if (!func_218() && VEHICLE::_0x00834EAC4A96E010(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_218()//Position - 0xEBD7
{
	return 0;
}

void func_219(int iParam0, int iParam1)//Position - 0xEBE0
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

bool func_220()//Position - 0xEC58
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_221(int iParam0)//Position - 0xEC69
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

int func_222(int iParam0)//Position - 0xECB1
{
	if (!func_218() && func_223(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0)//Position - 0xECD1
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

int func_224(int iParam0)//Position - 0xED24
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_230(PLAYER::PLAYER_ID(), -1))
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
	if (func_226(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_225(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_225(int iParam0)//Position - 0xEDAB
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

int func_226(int iParam0)//Position - 0xEDDA
{
	if (func_229(iParam0) == 233)
	{
		return func_227(iParam0);
	}
	return -1;
}

int func_227(int iParam0)//Position - 0xEDF7
{
	if (func_228(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_228(int iParam0, int iParam1)//Position - 0xEE1A
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)//Position - 0xEE55
{
	if (func_228(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_230(int iParam0, int iParam1)//Position - 0xEE78
{
	int iVar0;
	
	if (func_231(iParam0, 1, 1))
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

int func_231(int iParam0, bool bParam1, bool bParam2)//Position - 0xEEC5
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

void func_232(struct<3> Param0, float fParam1, bool bParam2)//Position - 0xEF25
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_145(&(Global_77137.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77137.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_198(iVar0);
			}
		}
		iVar0++;
	}
}

int func_233(var uParam0)//Position - 0xEF75
{
	if (func_234(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_234(var uParam0)//Position - 0xEFAA
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_117(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_65(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_235()//Position - 0xF009
{
	return func_233(&(Global_106934.f_2890));
}

int func_236(var uParam0)//Position - 0xF01C
{
	if (func_247(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_237()//Position - 0xF035
{
	return Global_106934.f_2890.f_12.f_66;
}

int func_238()//Position - 0xF048
{
	return func_234(&(Global_106934.f_2890));
}

int func_239(var uParam0, int iParam1)//Position - 0xF05B
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_VALID_INTERIOR(iParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_763)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			if (uParam0->f_763[iVar0 /*5*/].f_4 == iParam1)
			{
				uParam0->f_763[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_763[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
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
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam1);
		uParam0->f_763[iVar1 /*5*/] = 1;
		uParam0->f_763[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_763[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_240(var uParam0, char* sParam1)//Position - 0xF11F
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
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
		STREAMING::REQUEST_ANIM_DICT(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_241(var uParam0, char* sParam1)//Position - 0xF1E6
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
					uParam0->f_1007 = 1;
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
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_242(var uParam0)//Position - 0xF2AD
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
		if (uParam0->f_904[iVar0 /*5*/])
		{
			uParam0->f_904[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_955[iVar0 /*5*/])
		{
			uParam0->f_955[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_893)
	{
		uParam0->f_893.f_2 = 1;
	}
	if (uParam0->f_885)
	{
		uParam0->f_885.f_2 = 1;
	}
	if (uParam0->f_889)
	{
		uParam0->f_889.f_2 = 1;
	}
}

int func_243(var uParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xF505
{
	if (func_244(Param1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_893)
	{
		if (func_156(uParam0->f_893.f_4, Param1, 0) && uParam0->f_893.f_10 == fParam2)
		{
			uParam0->f_893.f_2 = 0;
			if (!uParam0->f_893.f_1)
			{
				uParam0->f_1007 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param1, fParam2, iParam3);
	uParam0->f_893 = 1;
	uParam0->f_893.f_3 = MISC::GET_GAME_TIMER();
	uParam0->f_893.f_4 = { Param1 };
	uParam0->f_893.f_7 = { 0f, 0f, 0f };
	uParam0->f_893.f_10 = fParam2;
	uParam0->f_1007 = 1;
	return 1;
}

int func_244(struct<3> Param0)//Position - 0xF5BD
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_245(int iParam0, var uParam1, var uParam2)//Position - 0xF5E7
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 183.533f, -2946.199f, 5.5113f };
			*uParam2 = 177.8164f;
			break;
		
		case 1:
			*uParam1 = { 692.067f, -1004.812f, 21.9059f };
			*uParam2 = 359.5735f;
			break;
	}
}

bool func_246()//Position - 0xF63E
{
	return BitTest(Global_100441.f_20, 13);
}

int func_247(var uParam0)//Position - 0xF64F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_1007)
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
						func_249(uParam0[iVar1 /*5*/]);
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
						func_249(&(uParam0->f_273[iVar1 /*5*/]));
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
						func_249(&(uParam0->f_374[iVar1 /*5*/]));
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
						func_249(&(uParam0->f_656[iVar1 /*6*/]));
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
						func_249(&(uParam0->f_475[iVar1 /*6*/]));
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
						func_249(&(uParam0->f_202[iVar1 /*7*/]));
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
						func_249(&(uParam0->f_151[iVar1 /*5*/]));
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
						func_249(&(uParam0->f_737[iVar1 /*5*/]));
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
						func_249(&(uParam0->f_763[iVar1 /*5*/]));
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
								func_249(&(uParam0->f_687[iVar1 /*7*/]));
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
							func_249(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_249(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_904[iVar1 /*5*/])
			{
				if (!uParam0->f_904[iVar1 /*5*/].f_1)
				{
					if (TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED(uParam0->f_904[iVar1 /*5*/].f_4))
					{
						uParam0->f_904[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_904[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_904[iVar1 /*5*/].f_1)
					{
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(uParam0->f_904[iVar1 /*5*/].f_4);
						func_249(&(uParam0->f_904[iVar1 /*5*/]));
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
			if (uParam0->f_955[iVar1 /*5*/])
			{
				if (!uParam0->f_955[iVar1 /*5*/].f_1)
				{
					if (AUDIO::PREPARE_ALARM(uParam0->f_955[iVar1 /*5*/].f_4))
					{
						uParam0->f_955[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_955[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_955[iVar1 /*5*/].f_1)
					{
						func_249(&(uParam0->f_955[iVar1 /*5*/]));
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
						func_249(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_885)
		{
			if (!uParam0->f_885.f_1)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					uParam0->f_885.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_885.f_2)
			{
				if (uParam0->f_885.f_1)
				{
					STREAMING::REMOVE_PTFX_ASSET();
					func_249(&(uParam0->f_885));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_889)
		{
			if (!uParam0->f_889.f_1)
			{
				if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
				{
					uParam0->f_889.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_889.f_2)
			{
				if (uParam0->f_889.f_1)
				{
					PHYSICS::ROPE_UNLOAD_TEXTURES();
					func_249(&(uParam0->f_889));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_893 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!uParam0->f_893.f_1)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					uParam0->f_893.f_1 = 1;
					if (uParam0->f_1008)
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						func_248(uParam0);
						uParam0->f_1008 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_893.f_2)
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				func_249(&(uParam0->f_893));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_981[iVar1 /*5*/])
			{
				if (!uParam0->f_981[iVar1 /*5*/].f_1)
				{
					if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam0->f_981[iVar1 /*5*/].f_4))
					{
						uParam0->f_981[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_981[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_981[iVar1 /*5*/].f_1)
					{
						func_249(&(uParam0->f_981[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1 = (iVar1 + 1);
		}
		if (bVar0)
		{
			uParam0->f_1007 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_248(var uParam0)//Position - 0x10020
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		func_249(&(uParam0->f_893));
	}
}

void func_249(var uParam0)//Position - 0x1003C
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_250()//Position - 0x10057
{
	if (func_251())
	{
		func_8(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

int func_251()//Position - 0x1006F
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100441 == 7 || Global_100441 == 8)
	{
		return 1;
	}
	return 0;
}

void func_252()//Position - 0x1009C
{
	func_270(&(Local_1105[1 /*8*/]), 68936/*func_271*/, "AI Controller");
	func_270(&(Local_1105[0 /*8*/]), 67301/*func_262*/, "Dialogue");
	func_270(&(Local_1105[3 /*8*/]), 66328/*func_257*/, "Alarms & Wanted Level");
	func_270(&(Local_1105[4 /*8*/]), 65776/*func_253*/, "Music Manager");
}

void func_253(var uParam0)//Position - 0x100F0
{
	if (!func_256(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((AUDIO::IS_ALARM_PLAYING(&cLocal_49) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || func_22(&(Local_1105[3 /*8*/])))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_ATTACK");
				func_255(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (func_108(PLAYER::PLAYER_PED_ID(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_START");
					func_255(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_1322 == 3 || iLocal_1322 == 2)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_WAREHOUSE");
					func_255(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_1322 == 6 || iLocal_1322 == 9)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_VAN");
					func_255(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (iLocal_1322 == 9 && func_108(PLAYER::PLAYER_PED_ID(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("JHP1A_RADIO_1"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_RADIO_1");
							func_254(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((AUDIO::IS_ALARM_PLAYING(&cLocal_49) && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && iLocal_1318)
				{
					func_255(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("JHP1A_RADIO_2"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_RADIO_2");
						func_255(uParam0, 6, 0);
						func_254(uParam0);
					}
				}
				break;
			}
	}
	if (func_256(uParam0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
}

void func_254(var uParam0)//Position - 0x102B6
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = MISC::GET_GAME_TIMER();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_255(var uParam0, int iParam1, int iParam2)//Position - 0x102DB
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = MISC::GET_GAME_TIMER();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_256(var uParam0)//Position - 0x10301
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

void func_257(var uParam0)//Position - 0x10318
{
	if (!func_256(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_255(uParam0, 2, 2000);
				break;
			
			case 2:
				if (AUDIO::PREPARE_ALARM(&cLocal_49))
				{
					AUDIO::START_ALARM(&cLocal_49, false);
					func_260(&cLocal_1107, Local_58, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_1107, "", 32);
					func_255(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_258(&Local_29, 3, 1, "ALARM EVENT SET IT", 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
				PED::SET_CREATE_RANDOM_COPS(false);
				PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				uParam0->f_2 = MISC::GET_GAME_TIMER() + 15000;
				func_255(uParam0, 4, 0);
				break;
			
			case 4:
				if (MISC::GET_GAME_TIMER() > uParam0->f_2)
				{
					PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
					PED::SET_CREATE_RANDOM_COPS(true);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					iLocal_1318 = 1;
					func_254(uParam0);
				}
				PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				break;
			}
	}
}

int func_258(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)//Position - 0x1042D
{
	return func_259(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_259(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x10449
{
	if (func_181(*uParam0))
	{
		if (!bParam5 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_38 = MISC::GET_GAME_TIMER();
			if (iParam1 != uParam0->f_5 || !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), sParam2))
			{
				uParam0->f_6 = uParam0->f_5;
				uParam0->f_5 = iParam1;
				uParam0->f_17 = { uParam0->f_9 };
				StringCopy(&(uParam0->f_9), sParam2, 32);
				if (bParam7)
				{
					uParam0->f_36 = 1;
					uParam0->f_35 = 0;
				}
				else
				{
					uParam0->f_36 = 0;
					uParam0->f_35 = uParam6;
				}
				uParam0->f_47 = 0;
				uParam0->f_46 = 0;
				uParam0->f_48 = 0;
				uParam0->f_37 = MISC::GET_GAME_TIMER();
				if (!func_244(Param3))
				{
					uParam0->f_88 = { Param3 };
				}
				if (iParam4 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam4))
				{
					uParam0->f_91 = iParam4;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_260(char* sParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1051C
{
	struct<32> Var0;
	
	Var0.f_0 = -1;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_17), "", 24);
	Var0.f_28 = iParam3;
	Var0.f_26 = fParam2;
	Var0.f_29 = iParam4;
	Var0.f_30 = iParam5;
	Var0.f_31 = iParam6;
	Var0.f_23 = { Param1 };
	func_261(&Var0, 0);
}

int func_261(var uParam0, char* sParam1)//Position - 0x10568
{
	int iVar0;
	int iVar1;
	
	if ((MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)) && *uParam0 != -1) && (!ENTITY::DOES_ENTITY_EXIST(Local_28[*uParam0 /*110*/]) || PED::IS_PED_INJURED(Local_28[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1106[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1106.f_0 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (MISC::IS_STRING_NULL_OR_EMPTY(sParam1) || MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_17))))
		{
			Local_1106[iVar0 /*32*/] = *uParam0;
			Local_1106[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1106[iVar0 /*32*/].f_23 = { ENTITY::GET_ENTITY_COORDS(Local_28[*uParam0 /*110*/], true) };
			}
			else
			{
				Local_1106[iVar0 /*32*/].f_23 = { uParam0->f_23 };
			}
			Local_1106[iVar0 /*32*/].f_26 = uParam0->f_26;
			Local_1106[iVar0 /*32*/].f_28 = uParam0->f_28;
			Local_1106[iVar0 /*32*/].f_29 = uParam0->f_29;
			Local_1106[iVar0 /*32*/].f_27 = MISC::GET_GAME_TIMER();
			Local_1106[iVar0 /*32*/].f_30 = uParam0->f_30;
			Local_1106[iVar0 /*32*/].f_31 = uParam0->f_31;
			iVar1 = 1;
		}
		else
		{
			iVar1 = 0;
		}
		*uParam0 = -1;
		StringCopy(&(uParam0->f_1), "", 64);
		uParam0->f_23 = { 0f, 0f, 0f };
		uParam0->f_26 = 0f;
		uParam0->f_28 = 0;
		uParam0->f_29 = 0;
		uParam0->f_27 = 0;
		uParam0->f_30 = 0;
		uParam0->f_31 = 0;
		return iVar1;
	}
	return 0;
}

void func_262(var uParam0)//Position - 0x106E5
{
	char cVar0[24];
	bool bVar1;
	struct<3> Var2;
	
	if (!func_256(uParam0))
	{
		if (func_49())
		{
			iLocal_1278 = -1;
		}
		else if (iLocal_1278 == -1)
		{
			iLocal_1278 = MISC::GET_GAME_TIMER();
			iLocal_1301 = -1;
			iLocal_1302 = 1;
		}
		if (iLocal_1282 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1284))
		{
			if (((Local_28[iLocal_1282 /*110*/] != 0 && ENTITY::DOES_ENTITY_EXIST(Local_28[iLocal_1282 /*110*/])) && !PED::IS_PED_INJURED(Local_28[iLocal_1282 /*110*/])) && !PED::IS_CONVERSATION_PED_DEAD(Local_28[iLocal_1282 /*110*/]))
			{
				if (!PED::IS_PED_RAGDOLL(Local_28[iLocal_1282 /*110*/]))
				{
					if (func_49())
					{
						if (iLocal_1292 && (iLocal_1302 || iLocal_1283 > iLocal_1301))
						{
							if (bLocal_1303)
							{
								iLocal_1306 = iLocal_1297;
								iLocal_1307 = iLocal_1301;
								MemCopy(&Local_1308, {func_269()}, 4);
								MemCopy(&Local_1311, {func_268()}, 4);
								iLocal_1314 = iLocal_1302;
								bLocal_1315 = iLocal_1304;
							}
							if (iLocal_1293)
							{
								func_11();
							}
							else
							{
								func_46();
							}
						}
					}
					if (func_48())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1278) > iLocal_1290)
						{
							if (func_267(iLocal_1282))
							{
								MemCopy(&cVar0, {Local_48}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_1282)
							{
								case 0:
									func_45(&uLocal_1112, 4, Local_28[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								
								case 1:
									func_45(&uLocal_1112, 5, Local_28[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								
								case 2:
									func_45(&uLocal_1112, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								
								case 3:
									func_45(&uLocal_1112, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1287))
							{
								if (func_266(&uLocal_1112, &cVar0, &cLocal_1284, 8, 0, 0, 0))
								{
									bVar1 = true;
								}
							}
							else if (func_265(&uLocal_1112, &cVar0, &cLocal_1284, &cLocal_1287, 8, 0, 0))
							{
								bVar1 = true;
							}
							if (bVar1)
							{
								func_261(&(Local_28[iLocal_1282 /*110*/].f_50), &cLocal_1284);
								iLocal_1301 = iLocal_1283;
								iLocal_1302 = iLocal_1294;
								bLocal_1303 = iLocal_1296;
								iLocal_1304 = iLocal_1295;
								iLocal_1282 = -1;
								iLocal_1283 = -1;
								StringCopy(&cLocal_1284, "", 16);
								iLocal_1290 = 0;
								fLocal_1291 = 9999999f;
								iLocal_1292 = 0;
								iLocal_1293 = 0;
								iLocal_1294 = 1;
								iLocal_1296 = 0;
								iLocal_1295 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_1282 = -1;
				iLocal_1283 = -1;
				StringCopy(&cLocal_1284, "", 16);
				iLocal_1290 = 0;
				fLocal_1291 = 9999999f;
				iLocal_1292 = 0;
				iLocal_1293 = 0;
				iLocal_1294 = 1;
				iLocal_1295 = 0;
			}
		}
		if (((func_49() && iLocal_1297 != -1) && iLocal_1304) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1298))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(Local_28[iLocal_1297 /*110*/], true) };
			if (func_108(PLAYER::PLAYER_PED_ID(), Var2, 1) >= 25f)
			{
				iLocal_1306 = iLocal_1297;
				iLocal_1307 = iLocal_1301;
				MemCopy(&Local_1308, {func_269()}, 4);
				MemCopy(&Local_1311, {func_268()}, 4);
				iLocal_1314 = iLocal_1302;
				bLocal_1315 = iLocal_1304;
				func_11();
				iLocal_1297 = -1;
				iLocal_1301 = -1;
				StringCopy(&cLocal_1298, "", 16);
				iLocal_1302 = 0;
				iLocal_1304 = 0;
			}
		}
		if (iLocal_1306 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_1308))
		{
			if (Local_28[iLocal_1306 /*110*/].f_5 > iLocal_1307)
			{
				iLocal_1306 = -1;
				iLocal_1307 = -1;
				StringCopy(&Local_1308, "", 16);
				StringCopy(&Local_1311, "", 16);
				iLocal_1314 = 1;
			}
		}
		if (iLocal_1282 == -1 && MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1284))
		{
			if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 10000)
			{
				if (iLocal_1306 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_1308))
				{
					func_264(iLocal_1306, &Local_1308, iLocal_1307, 0, 0, iLocal_1314, 0, 1, &Local_1311, bLocal_1315);
					iLocal_1306 = -1;
					iLocal_1307 = -1;
					StringCopy(&Local_1308, "", 16);
					StringCopy(&Local_1311, "", 16);
					iLocal_1314 = 1;
				}
			}
		}
	}
	func_263(bLocal_1315);
}

void func_263(bool bParam0)//Position - 0x10AAB
{
	if (bParam0)
	{
	}
}

int func_264(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)//Position - 0x10AB8
{
	float fVar0;
	bool bVar1;
	
	fVar0 = func_107(Local_28[iParam0 /*110*/], PLAYER::PLAYER_PED_ID(), 1);
	if ((iParam2 > iLocal_1283 || iParam2 == 4) || ((iParam2 == iLocal_1283 && (fVar0 < fLocal_1291 || (func_267(iParam0) && !func_267(iLocal_1282)))) && iParam2 != 5))
	{
		switch (iParam2)
		{
			case 0:
				if (fVar0 < 20f)
				{
					bVar1 = true;
				}
				break;
			
			default:
				if (fVar0 < 40f)
				{
					bVar1 = true;
				}
				break;
		}
		if (bVar1)
		{
			iLocal_1282 = iParam0;
			iLocal_1283 = iParam2;
			StringCopy(&cLocal_1284, sParam1, 16);
			StringCopy(&cLocal_1287, sParam8, 16);
			fLocal_1291 = fVar0;
			iLocal_1292 = iParam3;
			iLocal_1293 = iParam4;
			iLocal_1290 = iParam6;
			iLocal_1294 = iParam5;
			iLocal_1296 = iParam7;
			iLocal_1295 = iParam9;
			return 1;
		}
	}
	return 0;
}

bool func_265(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10B91
{
	func_44(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_29(sParam2, iParam4, 0);
}

bool func_266(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10BE5
{
	func_44(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0);
}

int func_267(int iParam0)//Position - 0x10C33
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

struct<6> func_268()//Position - 0x10C51
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

struct<6> func_269()//Position - 0x10CFD
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_270(var uParam0, int iParam1, char* sParam2)//Position - 0x10D21
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_271(var uParam0)//Position - 0x10D48
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	
	if (!func_256(uParam0))
	{
		bLocal_1319 = true;
		if (!iLocal_1317)
		{
			if (func_183())
			{
				iLocal_1317 = 1;
				iLocal_1320 = MISC::GET_GAME_TIMER();
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_1320) > 3000)
		{
			iLocal_1317 = 0;
			iLocal_1320 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_181(Local_28[iVar0 /*110*/]))
			{
				func_291(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_181(Local_29.f_0))
		{
			func_291(&Local_29);
		}
		iVar1 = 0;
		while (iVar1 < Local_1106.f_0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1106[iVar1 /*32*/].f_1)) && Local_1106[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1106[iVar1 /*32*/].f_28 == -1 || (MISC::GET_GAME_TIMER() - Local_1106[iVar1 /*32*/].f_27) < Local_1106[iVar1 /*32*/].f_28)
				{
					if (Local_1106[iVar1 /*32*/].f_29 <= 0 || (MISC::GET_GAME_TIMER() - Local_1106[iVar1 /*32*/].f_27) > Local_1106[iVar1 /*32*/].f_29)
					{
						if (Local_1106[iVar1 /*32*/] != -1 && func_181(Local_28[Local_1106[iVar1 /*32*/] /*110*/]))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(Local_28[Local_1106[iVar1 /*32*/] /*110*/], true) };
							Local_1106[iVar1 /*32*/].f_23 = { Var2 };
						}
						else
						{
							Var2 = { Local_1106[iVar1 /*32*/].f_23 };
						}
						if (!func_22(&(Local_1105[3 /*8*/])))
						{
							if (Local_1106[iVar1 /*32*/].f_31 && MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Local_58, true) < 35f)
							{
								func_172(&(Local_1105[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_28.f_0)
						{
							if (Local_1106[iVar1 /*32*/] == -1 || (iVar0 != Local_1106[iVar1 /*32*/] && Local_28[Local_1106[iVar1 /*32*/] /*110*/].f_5 >= Local_28[iVar0 /*110*/].f_5))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_28[iVar0 /*110*/]) && !PED::IS_PED_INJURED(Local_28[iVar0 /*110*/]))
								{
									if (func_108(Local_28[iVar0 /*110*/], Var2, 1) < (Local_1106[iVar1 /*32*/].f_26 + Local_28[iVar0 /*110*/].f_42))
									{
										Local_28[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1106[iVar1 /*32*/].f_30)
										{
											if (!func_22(&(Local_1105[3 /*8*/])))
											{
												func_172(&(Local_1105[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_1107, {Local_1106[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - Local_1106[iVar1 /*32*/].f_27) > Local_1106[iVar1 /*32*/].f_28 + 2000)
				{
					StringCopy(&(Local_1106[iVar1 /*32*/].f_1), "", 64);
					Local_1106[iVar1 /*32*/] = -1;
					Local_1106[iVar1 /*32*/].f_23 = { 0f, 0f, 0f };
					Local_1106[iVar1 /*32*/].f_26 = 0f;
					Local_1106[iVar1 /*32*/].f_27 = -1;
					Local_1106[iVar1 /*32*/].f_28 = -1;
					Local_1106[iVar1 /*32*/].f_29 = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_181(Local_28[iVar0 /*110*/]))
			{
				func_285(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_181(Local_29.f_0))
		{
			func_276(&Local_29);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_181(Local_28[iVar0 /*110*/]))
			{
				func_275(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_181(Local_29.f_0))
		{
			func_273(&Local_29);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_28[iVar0 /*110*/].f_105))
			{
				if (((!ENTITY::DOES_ENTITY_EXIST(Local_28[iVar0 /*110*/]) || PED::IS_PED_INJURED(Local_28[iVar0 /*110*/])) || PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_28[iVar0 /*110*/])) || (Local_28[iVar0 /*110*/].f_108 && Local_28[iVar0 /*110*/].f_5 != 0))
				{
					bVar3 = true;
				}
				else if (Local_28[iVar0 /*110*/].f_5 != 0)
				{
					bVar4 = true;
				}
				if (bVar3 || bVar4)
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/]))
					{
						ENTITY::DETACH_ENTITY(Local_28[iVar0 /*110*/].f_105, true, true);
					}
					if (bVar3)
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_28[iVar0 /*110*/].f_105));
					}
					else if (bVar4)
					{
						OBJECT::DELETE_OBJECT(&(Local_28[iVar0 /*110*/].f_105));
					}
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_28[iVar0 /*110*/].f_107 != 0 && Local_28[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_28[iVar0 /*110*/].f_109 && STREAMING::HAS_MODEL_LOADED(Local_28[iVar0 /*110*/].f_107))
				{
					Local_28[iVar0 /*110*/].f_105 = OBJECT::CREATE_OBJECT(Local_28[iVar0 /*110*/].f_107, PED::GET_PED_BONE_COORDS(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106, 0f, 0f, 0f), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/], PED::GET_PED_BONE_INDEX(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, true, true, true, false, 2, true, 0);
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_28[iVar1 /*110*/]) && !PED::IS_PED_INJURED(Local_28[iVar1 /*110*/]))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_28[iVar1 /*110*/]);
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_28[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_272();
	}
	if (func_256(uParam0))
	{
	}
}

void func_272()//Position - 0x11273
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_181(Local_46[iVar0 /*8*/]))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_46[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_273(int iParam0)//Position - 0x112A6
{
	int iVar0;
	int iVar1;
	
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*iParam0);
	if (func_274(*iParam0))
	{
		Local_29.f_46 = 0;
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (CLOCK::GET_CLOCK_HOURS() >= 5 && CLOCK::GET_CLOCK_HOURS() < 21)
			{
				if ((!func_191(*iParam0, 1647992574, 1) && !func_191(*iParam0, 242628503, 1)) || iLocal_1326)
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(203.68f, -3132.46f, 4.79f, 1f, true))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_1326 = 0;
					}
				}
			}
			else if (!func_191(*iParam0, -1680762137, 1) || !iLocal_1326)
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(162.69f, -3115.67f, 4.95f, 1f, true))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_1326 = 1;
				}
			}
			break;
		
		case 3:
			PED::SET_PED_USING_ACTION_MODE(*iParam0, true, -1, "DEFAULT_ACTION");
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if (WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_pistol"), false))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(*iParam0, joaat("weapon_pistol"));
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_nightstick"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_nightstick"), -1, true, true);
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, true))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("weapon_nightstick"), false);
						}
					}
					break;
				
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case joaat("gunshot"):
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_nightstick"), false))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(*iParam0, joaat("weapon_nightstick"));
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_pistol"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_pistol"), -1, true, true);
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, true))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("weapon_pistol"), false);
						}
					}
					break;
			}
			if (!func_191(*iParam0, 780511057, 1) || func_274(*iParam0))
			{
				TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::TASK_LOOK_AT_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 686645495:
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_91))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*iParam0, ENTITY::GET_ENTITY_COORDS(iParam0->f_91, true), 180f) && (MISC::GET_GAME_TIMER() - iParam0->f_37) < 5000)
						{
							if (!func_191(*iParam0, -875674219, 1) || func_274(*iParam0))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iParam0->f_91, -1);
								TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_191(*iParam0, -2015108952, 1) || func_274(*iParam0))
						{
							TASK::TASK_GOTO_ENTITY_OFFSET_XY(*iParam0, iParam0->f_91, -1, 2f, -1f, 2.5f, 1f, true);
						}
					}
					break;
				
				case -1225951737:
					if (iParam0->f_41 && !func_65(iParam0->f_88, iParam0->f_43, 1f, 0))
					{
						iParam0->f_88 = { iParam0->f_43 };
						iVar1 = 1;
					}
					if (!func_244(iParam0->f_88))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*iParam0, iParam0->f_88, 90f) && (MISC::GET_GAME_TIMER() - iParam0->f_37) < 5000)
						{
							if ((!func_191(*iParam0, 1464580341, 1) || func_274(*iParam0)) || iVar1)
							{
								TASK::TASK_TURN_PED_TO_FACE_COORD(*iParam0, iParam0->f_88, 0);
								TASK::TASK_LOOK_AT_COORD(*iParam0, iParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_191(*iParam0, 713668775, 1) || func_274(*iParam0)) || iVar1)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, iParam0->f_43, 1f, -1, 3f, false, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_244(iParam0->f_88))
					{
						if (!func_191(*iParam0, 1464580341, 1) || func_274(*iParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(*iParam0, iParam0->f_88, -1);
							TASK::TASK_LOOK_AT_COORD(*iParam0, iParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*iParam0, -1);
					}
					break;
				
				case 58299323:
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_91))
					{
						if (!func_191(*iParam0, -875674219, 1) || func_274(*iParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iParam0->f_91, -1);
							TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_274(struct<26> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84)//Position - 0x117A1
{
	if (Param0.f_5 != Param0.f_7 || !MISC::ARE_STRINGS_EQUAL(&(Param0.f_9), &(Param0.f_25)))
	{
		return 1;
	}
	return 0;
}

void func_275(var uParam0)//Position - 0x117CD
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*uParam0);
	if (func_274(*uParam0))
	{
		uParam0->f_46 = 0;
	}
	switch (uParam0->f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_28.f_0)
			{
				if (Local_28[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						if (!func_191(*uParam0, 1647992574, 1))
						{
							if (TASK::DOES_SCENARIO_EXIST_IN_AREA(155.74f, -3098.89f, 4.93f, 0.5f, true))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!func_191(*uParam0, 242628503, 1) || func_274(*uParam0)) && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base"))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_1280);
								if (!func_65(ENTITY::GET_ENTITY_COORDS(*uParam0, true), 126.8496f, -3089.249f, 4.9141f, 0.75f, 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, false, 264.2812f);
								}
								TASK::TASK_ACHIEVE_HEADING(0, 264.2812f, 0);
								TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_1280);
								TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_1280);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_1280);
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_46[2 /*8*/]))
							{
								TASK::TASK_LOOK_AT_COORD(*uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_46[2 /*8*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_46[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_46 = 0;
						}
						else if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_46)
							{
								case 0:
								case 2:
									if (uParam0->f_46 == 0 && TASK::GET_SEQUENCE_PROGRESS(*uParam0) == 2)
									{
										uParam0->f_109 = 1;
									}
									if (((uParam0->f_46 == 0 && TASK::GET_SEQUENCE_PROGRESS(*uParam0) == 2) || uParam0->f_46 == 2) && MISC::GET_GAME_TIMER() > uParam0->f_37)
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_1280);
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											
											case 1:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											
											case 2:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0f, false, false, false);
										TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0f, false, false, false);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_1280);
										TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_1280);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_1280);
										uParam0->f_46 = 1;
									}
									break;
								
								case 1:
									if (TASK::GET_SEQUENCE_PROGRESS(*uParam0) == 1)
									{
										uParam0->f_46++;
									}
									break;
								}
						}
						break;
					
					case 2:
					case 3:
						if (!func_191(*uParam0, 1647992574, 1))
						{
							if (TASK::DOES_SCENARIO_EXIST_IN_AREA(159.82f, -3085.93f, 5f, 0.1f, true))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (TASK::DOES_SCENARIO_EXIST_IN_AREA(160.15f, -3084.79f, 4.99f, 0.1f, true))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (TASK::DOES_SCENARIO_EXIST_IN_AREA(159.09f, -3085.02f, 5.01f, 0.1f, true))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (MISC::GET_HASH_KEY(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*uParam0, ENTITY::GET_ENTITY_COORDS(uParam0->f_91, true), 180f) && (MISC::GET_GAME_TIMER() - uParam0->f_37) < 5000)
						{
							if (!func_191(*uParam0, -875674219, 1) || func_274(*uParam0))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, uParam0->f_91, -1);
								TASK::TASK_LOOK_AT_ENTITY(*uParam0, uParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_191(*uParam0, -2015108952, 1) || func_274(*uParam0))
						{
							TASK::TASK_GOTO_ENTITY_OFFSET_XY(*uParam0, uParam0->f_91, -1, 2f, -1f, 2.5f, 1f, true);
						}
					}
					break;
				
				case -1225951737:
					if (uParam0->f_41 && !func_65(uParam0->f_88, uParam0->f_43, 1f, 0))
					{
						uParam0->f_88 = { uParam0->f_43 };
						iVar3 = 1;
					}
					if (!func_244(uParam0->f_88))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*uParam0, uParam0->f_88, 90f) && (MISC::GET_GAME_TIMER() - uParam0->f_37) < 5000)
						{
							if ((!func_191(*uParam0, 1464580341, 1) || func_274(*uParam0)) || iVar3)
							{
								TASK::TASK_TURN_PED_TO_FACE_COORD(*uParam0, uParam0->f_88, 0);
								TASK::TASK_LOOK_AT_COORD(*uParam0, uParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_191(*uParam0, 713668775, 1) || func_274(*uParam0)) || iVar3)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, uParam0->f_43, 1f, -1, 3f, false, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_244(uParam0->f_88))
					{
						if (!func_191(*uParam0, 1464580341, 1) || func_274(*uParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(*uParam0, uParam0->f_88, -1);
							TASK::TASK_LOOK_AT_COORD(*uParam0, uParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
					{
						if (!func_191(*uParam0, -875674219, 1) || func_274(*uParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, uParam0->f_91, -1);
							TASK::TASK_LOOK_AT_ENTITY(*uParam0, uParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "ENT_FOOT_LEAVE") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "ENT_VEH_LEAVE")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "WH_FOOT_LEAVE")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_191(*uParam0, 242628503, 1) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_274(*uParam0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1280);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_1280, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1280);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_1280);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1280);
					TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1325) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1325, false))
				{
					fVar6 = func_107(PLAYER::PLAYER_PED_ID(), iLocal_1325, 1);
				}
				if ((iLocal_1322 == 3 || iLocal_1322 == 2) || iLocal_1322 == 8)
				{
					iVar4 = PLAYER::PLAYER_PED_ID();
					fVar7 = 2f;
				}
				else if (iLocal_1322 == 0 || iLocal_1322 == 1)
				{
					iVar4 = PLAYER::PLAYER_PED_ID();
					fVar7 = 1f;
				}
				else if (iLocal_1322 == 5 && ENTITY::DOES_ENTITY_EXIST(iLocal_1325))
				{
					if (fVar6 > 10f)
					{
						iVar4 = PLAYER::PLAYER_PED_ID();
						fVar7 = 2f;
					}
					else
					{
						iVar4 = iLocal_1325;
						fVar7 = 2f;
					}
				}
				else if (iLocal_1322 == 4 && ENTITY::DOES_ENTITY_EXIST(iLocal_1325))
				{
					iVar4 = iLocal_1325;
					fVar7 = 1f;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					fVar5 = func_107(*uParam0, iVar4, 1);
				}
				if (fVar5 <= 7.5f)
				{
					if (((!func_191(*uParam0, 242628503, 1) && !func_191(*uParam0, 1227113341, 1)) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_274(*uParam0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1280);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 2000);
						TASK::SET_SEQUENCE_TO_REPEAT(iLocal_1280, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1280);
						TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_1280);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1280);
						TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					}
				}
				else if (!func_191(*uParam0, 1227113341, 1) || func_274(*uParam0))
				{
					if (fVar7 > 1f)
					{
						fVar8 = 6f;
					}
					else
					{
						fVar8 = 3f;
					}
					TASK::TASK_GO_TO_ENTITY(*uParam0, iVar4, -1, fVar8, fVar7, 2f, 0);
					TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (MISC::GET_HASH_KEY(&(uParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar9, true))
					{
						if (iVar9 != joaat("weapon_unarmed"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), false);
						}
					}
					if (!func_191(*uParam0, 780511057, 1))
					{
						TASK::TASK_COMBAT_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!func_191(*uParam0, 242628503, 1) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_274(*uParam0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1280);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 2000);
						TASK::SET_SEQUENCE_TO_REPEAT(iLocal_1280, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1280);
						TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_1280);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1280);
						TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (func_108(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!func_191(*uParam0, 1805844857, 1))
				{
					TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				}
			}
			else if ((!func_191(*uParam0, 1805844857, 1) && !func_191(*uParam0, 713668775, 1)) || func_274(*uParam0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 0.25f, true, 40000f);
			}
			break;
		
		case 4:
			switch (MISC::GET_HASH_KEY(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!func_191(*uParam0, -1519143300, 1) || func_274(*uParam0))
					{
						TASK::TASK_HANDS_UP(*uParam0, -1, PLAYER::PLAYER_PED_ID(), 0, true);
					}
					break;
			}
			break;
	}
}

void func_276(int iParam0)//Position - 0x122B8
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, true);
	fVar1 = func_107(PLAYER::PLAYER_PED_ID(), *iParam0, 1);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0))
	{
		iVar3 = 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_283(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_258(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_258(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((PED::HAS_PED_RECEIVED_EVENT(*iParam0, 124) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 125)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 126)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 22)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 23)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 88))
	{
		func_258(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (iParam0->f_39 && func_282(4))
	{
		func_258(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_281(*iParam0, 2))
	{
		func_258(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((iParam0->f_39 && fVar1 < 8f) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 5))
	{
		func_258(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1322 == 11)
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_SEC_CAR", Local_46[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1322 == 6)
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_VAN", Local_46[func_102() /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1322 == 10)
	{
		if (iParam0->f_39)
		{
			func_280(iParam0, 3, "STEALING_VAN", Local_46[func_54() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_VAN", Local_46[func_54() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 42)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 114)) || func_278(*iParam0, 0))
	{
		func_258(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 103)) || func_278(*iParam0, 1))
	{
		func_258(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_108(PLAYER::PLAYER_PED_ID(), Local_58, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_277(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_258(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_258(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1106.f_0 - 1))
	{
		bVar8 = Local_1106[iParam0->f_34 /*32*/].f_30;
		switch (MISC::GET_HASH_KEY(&(Local_1106[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
			case 185995093:
			case -1645534839:
			case 880647822:
			case 1921975061:
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case 1682434916:
			case -924218668:
			case joaat("gunshot"):
			case 600040296:
				func_258(iParam0, 3, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar8);
				break;
			
			case -1225951737:
				func_277(iParam0, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 0, bVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_280(iParam0, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), Local_46[func_102() /*8*/], 1, 0, bVar8);
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!MISC::ARE_STRINGS_EQUAL(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	switch (iParam0->f_5)
	{
		case 0:
			break;
		
		case 1:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 58299323:
					if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 3000)
					{
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if (((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && func_108(*iParam0, iParam0->f_88, 1) < 3f) && TASK::IS_PED_STILL(*iParam0))
					{
						func_258(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if ((((MISC::GET_GAME_TIMER() - iParam0->f_38) > 8000 && func_108(PLAYER::PLAYER_PED_ID(), Local_58, 1) > 65f) && (func_107(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 10f || (MISC::GET_GAME_TIMER() - iParam0->f_38) > 16000)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_258(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
				
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case joaat("gunshot"):
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (func_108(PLAYER::PLAYER_PED_ID(), Local_58, 1) > 300f && func_107(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 150f)
					{
						func_258(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_277(int iParam0, int iParam1, char* sParam2, struct<3> Param3, bool bParam4, int iParam5, bool bParam6)//Position - 0x129DC
{
	return func_259(iParam0, iParam1, sParam2, Param3, 0, bParam4, iParam5, bParam6);
}

int func_278(struct<110> Param0, bool bParam1)//Position - 0x129F9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_279(Param0, Local_28[iVar0 /*110*/], bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_279(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, bool bParam220)//Position - 0x12A30
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam110) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam110, PLAYER::PLAYER_PED_ID(), bParam220))
	{
		if (func_107(iParam0, iParam110, 1) < 15f)
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_280(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x12A74
{
	return func_259(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_281(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)//Position - 0x12A91
{
	if ((iParam0 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam0)) && !PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam110) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_282(int iParam0)//Position - 0x12AE8
{
	if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam0) && (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())))
	{
		return 1;
	}
	return 0;
}

int func_283(struct<110> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x12B1D
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_284(Param0, Local_28[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_28[iVar0 /*110*/].f_85 = 1;
			}
			if (!bVar1)
			{
				bVar1 = true;
				*uParam1 = bVar2;
				*uParam2 = bVar3;
				*uParam3 = bVar4;
			}
			else
			{
				if (bVar2)
				{
					*uParam1 = 1;
				}
				if (bVar3)
				{
					*uParam2 = 1;
				}
				if (bVar4)
				{
					*uParam3 = 1;
				}
			}
			if (Local_28[iVar0 /*110*/].f_85)
			{
				*uParam2 = 1;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_284(struct<40> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, struct<104> Param71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80)//Position - 0x12BC6
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Param71.f_0) && PED::IS_PED_INJURED(Param71.f_0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Param71.f_0, false) };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Param0.f_0, true), Var0, true) < 10f)
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Param0.f_0, Param71.f_0))
			{
				if ((MISC::GET_GAME_TIMER() - Param71.f_103) < 3000)
				{
					*uParam78 = 1;
				}
				else
				{
					*uParam78 = 0;
				}
				if (*uParam78)
				{
					iVar1 = PED::GET_PED_SOURCE_OF_DEATH(Param71.f_0);
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if ((iVar2 == PLAYER::PLAYER_PED_ID() && !PED::IS_PED_INJURED(iVar2)) && Param0.f_39)
						{
							*uParam79 = 1;
						}
						else
						{
							*uParam79 = 0;
						}
					}
					else
					{
						*uParam79 = 0;
					}
				}
				else
				{
					*uParam79 = 0;
				}
				iVar3 = PED::GET_PED_CAUSE_OF_DEATH(Param71.f_0);
				if (iVar3 == joaat("weapon_unarmed") || (iVar3 != joaat("weapon_unarmed") && WEAPON::GET_WEAPON_DAMAGE_TYPE(iVar3) == 2))
				{
					*uParam80 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_285(int iParam0)//Position - 0x12CB9
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	var uVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<6> Var12;
	bool bVar13;
	float fVar14;
	float fVar15;
	struct<3> Var16;
	struct<3> Var17;
	struct<4> Var18;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, true);
	fVar1 = func_107(PLAYER::PLAYER_PED_ID(), *iParam0, 1);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0))
	{
		iVar3 = 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar5 = func_283(*iParam0, &uVar6, &bVar7, &bVar8);
	if (((iParam0->f_5 != 5 && uVar5) && uVar6) && !bVar8)
	{
		if (bVar7)
		{
			func_258(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_258(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((PED::HAS_PED_RECEIVED_EVENT(*iParam0, 124) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 125)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 126)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 22)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 23)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 88))
	{
		func_258(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((iParam0->f_39 && iParam0->f_5 != 4) && func_282(4))
	{
		func_258(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_281(*iParam0, 2))
	{
		func_258(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((iParam0->f_39 && fVar1 < 8f) && iParam0->f_5 != 4) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 5))
	{
		func_258(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1322 == 7)
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_277(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1322 == 6)
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_277(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1322 == 10)
	{
		if (iParam0->f_39)
		{
			func_280(iParam0, 3, "STEALING_VAN", Local_46[func_54() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_VAN", Local_46[func_54() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 42)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 114)) || func_278(*iParam0, 0))
	{
		func_258(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 103)) || func_278(*iParam0, 1))
	{
		func_258(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_108(PLAYER::PLAYER_PED_ID(), Local_58, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_277(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar5)
	{
		if ((uVar6 && bVar7) && bVar8)
		{
			func_258(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar7)
		{
			func_258(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((iParam0->f_39 || iParam0->f_41) && (iParam0->f_86 || iParam0->f_87)) && iLocal_1322 == 9) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "CHECK_DRIVER")) && func_108(PLAYER::PLAYER_PED_ID(), Local_58, 1) < 15f)
	{
		if (iParam0->f_39)
		{
			func_280(iParam0, 1, "SEE_VAN_LEAVING", Local_46[func_102() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_VAN", Local_46[func_102() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_1322 != 9)
	{
		if ((iParam0->f_86 && (((iLocal_1322 == 0 || iLocal_1322 == 1) || iLocal_1322 == 4) || iParam0->f_5 == 1)) || (iParam0->f_87 && ((iLocal_1322 == 3 || iLocal_1322 == 2) || iLocal_1322 == 5)))
		{
			if ((iLocal_1322 == 5 || iLocal_1322 == 4) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(*iParam0, iLocal_1325, 19))
			{
				switch (iLocal_1322)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_258(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_39)
			{
				switch (iLocal_1322)
				{
					case 0:
						StringCopy(&Var4, "ENT_FOOT", 64);
						break;
					
					case 1:
						StringCopy(&Var4, "ENT_VEH", 64);
						break;
					
					case 2:
						StringCopy(&Var4, "WH_FOOT", 64);
						break;
					
					case 3:
						StringCopy(&Var4, "WH_VEH", 64);
						break;
					
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
					
					case -1:
						if (iParam0->f_5 == 1)
						{
							StringCopy(&Var4, "ENT_FOOT", 64);
						}
						break;
				}
				func_258(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_41)
			{
				func_277(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 1, 0);
			}
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1106.f_0 - 1))
	{
		bVar9 = Local_1106[iParam0->f_34 /*32*/].f_30;
		switch (MISC::GET_HASH_KEY(&(Local_1106[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 5, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 185995093:
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 3, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1645534839:
				if (iParam0->f_5 != 4)
				{
					if (func_108(*iParam0, Local_1106[iParam0->f_34 /*32*/].f_23, 1) < 5f)
					{
						func_258(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar9);
					}
					else
					{
						func_258(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar9);
					}
				}
				break;
			
			case 880647822:
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 5, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1921975061:
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 5, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 3, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((iParam0->f_5 != 4 && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "STEALING_VAN")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "GET_IN_VAN")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_258(iParam0, 3, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case joaat("gunshot"):
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 5, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -426892158:
				if (iParam0->f_86)
				{
					func_258(iParam0, 2, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1461435341:
				if (iParam0->f_86)
				{
					func_258(iParam0, 2, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -972653884:
				if (iParam0->f_87)
				{
					func_258(iParam0, 2, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -520621538:
				if (iParam0->f_87)
				{
					func_258(iParam0, 2, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1349994105:
				if (iParam0->f_87)
				{
					func_258(iParam0, 2, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1225951737:
				if (iParam0->f_87)
				{
					func_277(iParam0, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 0, bVar9);
				}
				break;
			
			case 2074432461:
				if (iParam0->f_87)
				{
					func_280(iParam0, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), Local_46[func_102() /*8*/], 1, 0, bVar9);
				}
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!MISC::ARE_STRINGS_EQUAL(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	iVar10 = 0;
	while (iVar10 < Local_28.f_0)
	{
		if (Local_28[iVar10 /*110*/] == *iParam0)
		{
			iVar11 = iVar10;
		}
		iVar10++;
	}
	switch (iParam0->f_5)
	{
		case 5:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case joaat("gunshot"):
				case 1921975061:
				case 880647822:
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
					if ((func_290(*iParam0) || (iParam0->f_48 % 2) == 0) || !func_181(Local_29.f_0))
					{
						if ((MISC::GET_HASH_KEY(&(iParam0->f_9)) == joaat("gunshot") || MISC::GET_HASH_KEY(&(iParam0->f_9)) == 1921975061) || MISC::GET_HASH_KEY(&(iParam0->f_9)) == 880647822)
						{
							if (func_267(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_GUN1") };
								if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_ARM1", 24);
										break;
									
									case 3:
										StringCopy(&Var12, "SOL1_ARM2", 24);
										break;
								}
								if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((MISC::GET_HASH_KEY(&(iParam0->f_9)) == joaat("killed") || MISC::GET_HASH_KEY(&(iParam0->f_9)) == 1518302817) || MISC::GET_HASH_KEY(&(iParam0->f_9)) == -1298712083)
						{
							if (func_267(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_KILL") };
								if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_GETSEC") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SECIN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SECIN2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 4:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 1224761252:
					if (func_281(*iParam0, 4))
					{
						func_258(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 1000)
					{
						func_258(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_281(*iParam0, 4))
					{
						func_258(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((MISC::GET_GAME_TIMER() - iParam0->f_37) > 15000 || (MISC::GET_GAME_TIMER() - iParam0->f_38) > 3000) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_258(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_290(*iParam0) || iParam0->f_48 == 0)
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_HND1") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_HND1") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 0:
			switch (iVar11)
			{
				case 1:
					if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
					{
						switch (iLocal_1305)
						{
							case 0:
								func_264(iVar11, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 1:
								func_264(iVar11, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 2:
								func_264(iVar11, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 3:
								func_264(iVar11, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 4:
								func_264(iVar11, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 5:
								func_264(iVar11, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 6:
								func_264(iVar11, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 7:
								func_264(iVar11, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 8:
								func_264(iVar11, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 9:
								func_264(iVar11, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 10:
								func_264(iVar11, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!iParam0->f_49)
					{
						if (func_264(iVar11, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							func_45(&uLocal_1112, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
							func_45(&uLocal_1112, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
							iParam0->f_49 = 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				Var16 = { func_287(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1f, 0f) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
				Var17 = { func_287(ENTITY::GET_ENTITY_COORDS(Local_28[iVar11 /*110*/], true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
				fVar14 = func_286(Var16, Var17);
				fVar15 = MISC::ACOS(fVar14);
				if ((fVar15 < 90f && fVar1 < 8f) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
				{
					bVar13 = true;
				}
			}
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_290(*iParam0) && MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_LVE1") };
							func_264(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar13)
					{
						func_280(iParam0, 1, "CHECK_DRIVER", Local_46[func_102() /*8*/], 0, 1, 0);
					}
					else if (func_108(PLAYER::PLAYER_PED_ID(), Local_58, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_258(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_290(*iParam0))
					{
						Var12 = { func_289(iVar11, "JS_VAN_LVE2") };
						func_264(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 3000)
					{
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (bVar13)
					{
						if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 2000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
						{
							func_258(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_280(iParam0, 1, "SEE_VAN_LEAVING_1", Local_46[func_102() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if (((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && func_108(*iParam0, iParam0->f_88, 1) < 3f) && TASK::IS_PED_STILL(*iParam0))
					{
						func_258(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_290(*iParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_SND_INV") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_SNDLOST2") };
							func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_290(*iParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_SNDLOST1") };
							func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((MISC::GET_GAME_TIMER() - iParam0->f_38) > 8000 && func_108(PLAYER::PLAYER_PED_ID(), Local_58, 1) > 65f) && (func_107(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 10f || (MISC::GET_GAME_TIMER() - iParam0->f_38) > 16000)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_258(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_290(*iParam0) && iParam0->f_35)
					{
						if (!iParam0->f_84)
						{
							if (func_267(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_MELE_1") };
								if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_FIGHT1", 24);
										break;
									
									case 3:
										StringCopy(&Var12, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							iParam0->f_84 = 1;
						}
						else if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_MELE_2") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_FIGHT1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000)
					{
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_290(*iParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_MELE_ESC") };
							func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if (((((MISC::GET_GAME_TIMER() - iParam0->f_37) > 2000 && iParam0->f_39) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)) && iLocal_1322 != 9) && iLocal_1322 != 10)
					{
						func_258(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_290(*iParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_IN2") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 2000)
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_TK") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_290(*iParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_IN1") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 2000)
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_TK") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_290(*iParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_IN2") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_38) > 5000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
			{
				if (iVar11 == 1)
				{
					func_264(iVar11, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_1305 = 0;
				}
				func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (iParam0->f_39)
				{
					if ((MISC::GET_GAME_TIMER() - iParam0->f_38) > 1000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						if (((MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "ENT_FOOT") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "ENT_VEH")) || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_FOOT")) || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_VEH"))
						{
							Var18 = { iParam0->f_9 };
							StringConCat(&Var18, "_LEAVE", 32);
							func_258(iParam0, 2, 0, &Var18, 1, 0);
						}
					}
					if ((MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_FOOT") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_VEH")) || (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_DITCH_VEH") && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)))
					{
						if (((iParam0->f_104 >= 6 && iLocal_1278 != -1) && (MISC::GET_GAME_TIMER() - iLocal_1278) > 7000) && (MISC::GET_GAME_TIMER() - iParam0->f_38) == 0)
						{
							func_258(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
				{
					case -426892158:
						if (func_290(*iParam0))
						{
							if (!iParam0->f_82)
							{
								if (func_267(iVar11))
								{
									if (!iParam0->f_83)
									{
										Var12 = { func_289(iVar11, "JS_ENT_F1") };
										func_264(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_ENT_F1_P") };
										func_264(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_267(iVar11))
							{
								if (!iParam0->f_83)
								{
									Var12 = { func_289(iVar11, "JS_ENT_F2") };
									func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var12 = { func_289(iVar11, "JS_ENT_F2_P") };
									func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							iParam0->f_82 = 1;
						}
						else if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
						{
							if (func_267(iVar11))
							{
								if (!iParam0->f_83)
								{
									Var12 = { func_289(iVar11, "JS_ENT_F") };
									func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var12 = { func_289(iVar11, "JS_ENT_F_P") };
									func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_290(*iParam0) || iParam0->f_48 == 0)
						{
							if (!iParam0->f_82)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_ENT_V1") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
								iParam0->f_82 = 1;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_17), "WH_VEH"))
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_ENT_V") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
							}
							else if (func_267(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_ENT_V3") };
								if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									iParam0->f_48++;
								}
							}
						}
						else if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
						{
							if (func_267(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_ENT_V3") };
								func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_290(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH1") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH2") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
							{
								if (func_267(iVar11))
								{
									if (iParam0->f_104 < 5)
									{
										Var12 = { func_289(iVar11, "JS_WH") };
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_WH_F") };
									}
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_290(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH1") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH2") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
							{
								if (func_267(iVar11))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var12 = { func_289(iVar11, "JS_ENT_V4") };
										}
										else
										{
											Var12 = { func_289(iVar11, "JS_ENT_V3") };
										}
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_WH_F") };
									}
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_290(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH1") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH2") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
							{
								if (func_267(iVar11))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var12 = { func_289(iVar11, "JS_ENT_V3") };
										}
										else
										{
											Var12 = { func_289(iVar11, "JS_WH") };
										}
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_WH_F") };
									}
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case 778765338:
						if (iParam0->f_48 == 0)
						{
							if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 1000)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_ENT_V4") };
									func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						else if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
						{
							if (((iParam0->f_48 - 1) % 3) == 0)
							{
								Var12 = { func_289(iVar11, "JS_ENT_V4") };
							}
							else
							{
								Var12 = { func_289(iVar11, "JS_ENT_V3") };
							}
							func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							iParam0->f_48++;
						}
						break;
					
					case 1580556320:
						if (iParam0->f_48 == 0)
						{
							if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 1000)
							{
								if (func_267(iVar11))
								{
									if (!iParam0->f_83)
									{
										Var12 = { func_289(iVar11, "JS_ENT_F3") };
										func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_ENT_F3_P") };
										func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
								}
								iParam0->f_48++;
							}
						}
						break;
					
					case -1697689838:
					case -628260985:
					case -1891358342:
						if (iParam0->f_48 == 0)
						{
							if (func_48() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 1000)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_ENT_V5") };
									func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						break;
					}
			}
			break;
	}
}

float func_286(struct<3> Param0, struct<3> Param1)//Position - 0x1538D
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_287(struct<3> Param0)//Position - 0x153AE
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

void func_288(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x153ED
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (Local_28[iVar0 /*110*/] == *iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	iParam0->f_50 = iVar1;
	StringCopy(&(iParam0->f_50.f_1), sParam1, 64);
	StringCopy(&(iParam0->f_50.f_17), sParam2, 24);
	iParam0->f_50.f_28 = iParam4;
	iParam0->f_50.f_26 = fParam3;
	iParam0->f_50.f_29 = iParam5;
	iParam0->f_50.f_30 = iParam7;
	iParam0->f_50.f_31 = iParam8;
	if (bParam6)
	{
		func_261(&(iParam0->f_50), 0);
	}
}

struct<6> func_289(int iParam0, char* sParam1)//Position - 0x15469
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_290(struct<34> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76)//Position - 0x15489
{
	if (Param0.f_8 || Param0.f_33)
	{
		return 1;
	}
	return 0;
}

void func_291(int iParam0)//Position - 0x154A7
{
	if (PED::CAN_PED_SEE_HATED_PED(*iParam0, PLAYER::PLAYER_PED_ID()))
	{
		iParam0->f_40 = MISC::GET_GAME_TIMER();
		iParam0->f_39 = 1;
	}
	else if ((MISC::GET_GAME_TIMER() - iParam0->f_40) > 2000 || !PED::IS_PED_FACING_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 90f))
	{
		iParam0->f_40 = MISC::GET_GAME_TIMER();
		iParam0->f_39 = 0;
	}
	if (iParam0->f_39)
	{
		bLocal_1319 = false;
	}
	if (bLocal_1319)
	{
		PED::SET_PED_RESET_FLAG(*iParam0, 188, true);
	}
	if (!func_292())
	{
		iParam0->f_41 = PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), *iParam0);
		if (iParam0->f_41)
		{
			iParam0->f_43 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
	}
	else
	{
		iParam0->f_41 = 0;
	}
	switch (iParam0->f_5)
	{
		case 5:
		case 4:
		case 3:
			iParam0->f_102 = 1;
			break;
		
		default:
			iParam0->f_102 = 0;
			break;
	}
}

int func_292()//Position - 0x1557C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
		{
			if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(Local_46[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_293()//Position - 0x155C8
{
	struct<3> Var0;
	var uVar1;
	
	PED::ADD_RELATIONSHIP_GROUP("BUGSTAR", &iLocal_1279);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("player"), iLocal_1279);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1279, joaat("player"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1279);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1279, joaat("COP"));
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f), 0);
	MISC::CLEAR_AREA(138.43f, -3092.47f, 4.9f, 28.375f, true, false, false, false);
	if (func_195() || func_6(0))
	{
		iLocal_67 = 0;
		if (func_195())
		{
			if (Global_94618)
			{
				iLocal_67++;
			}
		}
		if (func_195())
		{
			func_245(iLocal_67, &Var0, &uVar1);
			func_299(Var0, uVar1, 1, 0);
		}
		bLocal_66 = true;
	}
	else
	{
		while (!func_190(1))
		{
			SYSTEM::WAIT(0);
			func_298(&uLocal_70);
		}
	}
	func_297(&uLocal_70, "JHP1A", 0);
	func_240(&uLocal_70, "misslsdhsclipboard@base");
	func_240(&uLocal_70, "misslsdhsclipboard@idle_a");
	func_240(&uLocal_70, "misstrevor3");
	func_173(&uLocal_70, joaat("p_amb_clipboard_01"));
	func_239(&uLocal_70, iLocal_1281);
	func_241(&uLocal_70, &cLocal_59);
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.15f);
	func_295(87);
	func_45(&uLocal_1112, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	func_45(&uLocal_1112, 3, 0, "LESTER", 0, 1);
	func_263(bLocal_1277);
	func_294();
	iLocal_1281 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_58, "po1_08_warehouseint1");
	AUDIO::PREPARE_ALARM(&cLocal_49);
	iLocal_1327 = PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, false, true, true, true);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_294()//Position - 0x15800
{
	Global_94619 = 1;
}

void func_295(int iParam0)//Position - 0x1580D
{
	Global_96296 = 0;
	switch (iParam0)
	{
		case 72:
			func_296(2);
			func_296(4);
			break;
		
		case 73:
			func_296(0);
			func_296(1);
			func_296(7);
			break;
		
		case 92:
			func_296(10);
			func_296(9);
			func_296(13);
			func_296(6);
			break;
		
		case 68:
			func_296(11);
			break;
		
		case 78:
			func_296(14);
			break;
		
		case 79:
			func_296(3);
			break;
		
		default:
			break;
	}
}

void func_296(int iParam0)//Position - 0x1589B
{
	MISC::SET_BIT(&Global_96296, iParam0);
}

int func_297(var uParam0, char* sParam1, int iParam2)//Position - 0x158AD
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (MISC::ARE_STRINGS_EQUAL(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_779[iParam2 /*5*/].f_2 = 0;
			uParam0->f_1007 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 11)
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(sParam1, iParam2);
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_298(var uParam0)//Position - 0x15951
{
	func_247(uParam0);
}

void func_299(struct<3> Param0, var uParam1, int iParam2, int iParam3)//Position - 0x15960
{
	if (func_195())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_100441.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_100437 = { Param0 };
		Global_100440 = uParam1;
		Global_100436 = 1;
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(Global_100441.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_100441.f_20), 14);
		}
		if (iParam3 == 1)
		{
			MISC::SET_BIT(&(Global_100441.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_100441.f_20), 24);
		}
		func_194(1);
	}
}

void func_300(int iParam0)//Position - 0x159F5
{
	struct<3> Var0;
	char[] cVar1[8];
	
	if (iParam0 == 6)
	{
		func_312();
		func_8(0);
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (!bLocal_68)
	{
		bLocal_68 = true;
		iLocal_69 = iParam0;
		switch (iLocal_69)
		{
			case 1:
				StringCopy(&Var0, "JHP1A_VAN_DEAD", 24);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP1A_VAN_STUCK", 24);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP1A_VANS_DEAD", 24);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP1A_VAN_ABAN", 24);
				break;
			
			case 5:
				StringCopy(&Var0, "JHP1A_ABAN", 24);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP1A_FF", 24);
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
			func_310(&Var0);
		}
		else
		{
			func_301(&Var0, &cVar1);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
	}
}

void func_301(char* sParam0, char* sParam1)//Position - 0x15ABB
{
	func_309(sParam0, sParam1);
	func_302(0);
}

void func_302(int iParam0)//Position - 0x15AD0
{
	int iVar0;
	
	if (Global_113386.f_9085 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_303(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_303(int iParam0)//Position - 0x15B15
{
	int iVar0;
	int iVar1;
	
	func_308();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_307(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_304(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_304(var uParam0, int iParam1)//Position - 0x15C25
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
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_306(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_305(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_305(var uParam0)//Position - 0x15DEB
{
	*uParam0 = -15;
}

int func_306(int iParam0, var uParam1, float fParam2)//Position - 0x15DF9
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_306(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_306(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
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
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
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
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
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
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
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
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
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
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
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
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
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
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
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
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
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

void func_307(int iParam0, bool bParam1)//Position - 0x16768
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

void func_308()//Position - 0x167A6
{
	Global_100476 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78551))
		{
			switch (func_167())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78551))
		{
			switch (func_167())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
		MISC::SET_BIT(&(Global_100441.f_20), 25);
	}
}

void func_309(char* sParam0, char* sParam1)//Position - 0x16893
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1) <= 16)
			{
				StringCopy(&Global_78551, sParam0, 16);
				StringCopy(&Global_78555, sParam1, 16);
			}
		}
	}
}

void func_310(char* sParam0)//Position - 0x168D1
{
	func_311(sParam0);
	func_302(0);
}

void func_311(char* sParam0)//Position - 0x168E4
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_78551, sParam0, 16);
			StringCopy(&Global_78555, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_312()//Position - 0x16923
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_6(0))
	{
		if (!func_313())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_303(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_308();
		}
	}
}

int func_313()//Position - 0x16994
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

