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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	struct<39> Local_55 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 16;
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
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	float fLocal_268 = 0f;
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
	var uLocal_279 = 21;
	var uLocal_280 = 6;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 1132396544;
	var uLocal_287 = 1132396544;
	var uLocal_288 = 1132396544;
	var uLocal_289 = 0;
	var uLocal_290 = -1082130432;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 8;
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
	var uLocal_350 = -1;
	var uLocal_351 = 1092616192;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	bool bLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	struct<7> Local_358 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	int* iLocal_365 = NULL;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	int iLocal_369 = 0;
	float fLocal_370 = 0f;
	float fLocal_371 = 0f;
	float fLocal_372 = 0f;
	bool bLocal_373 = 0;
	bool bLocal_374 = 0;
	int iLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
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
	var uLocal_418 = 3;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 1;
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
	var uLocal_439 = 2;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 13;
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
	var uLocal_457 = 13;
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
	var uLocal_666 = 13;
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
	var uLocal_875 = 13;
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
	var uLocal_889 = 13;
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
	var uLocal_903 = 13;
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
	var uLocal_917 = 13;
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
	struct<55> Local_967 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_1033 = 0;
	int iLocal_1034 = 0;
	int iLocal_1035[3] = { 0, 0, 0 };
	int iLocal_1039[2] = { 0, 0 };
	int iLocal_1042 = 0;
	int iLocal_1043[2] = { 0, 0 };
	int iLocal_1046 = 0;
	int iLocal_1047 = 0;
	int iLocal_1048 = 0;
	int iLocal_1049[2] = { 0, 0 };
	int iLocal_1052[3] = { 0, 0, 0 };
	int iLocal_1056[2] = { 0, 0 };
	int iLocal_1059 = 0;
	int iLocal_1060 = 0;
	int iLocal_1061 = 0;
	struct<8> Local_1062[3];
	struct<8> Local_1087[2];
	struct<8> Local_1104[2];
	int iLocal_1121 = 0;
	int iLocal_1122 = 0;
	var uLocal_1123[3] = { 0, 0, 0 };
	var uLocal_1127[2] = { 0, 0 };
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
	int iLocal_1134 = 0;
	int iLocal_1135 = 0;
	int iLocal_1136 = 0;
	bool bLocal_1137 = 0;
	int iLocal_1138 = 0;
	bool bLocal_1139 = 0;
	int iLocal_1140 = 0;
	bool bLocal_1141 = 0;
	bool bLocal_1142 = 0;
	bool bLocal_1143 = 0;
	bool bLocal_1144 = 0;
	int iLocal_1145 = 0;
	bool bLocal_1146 = 0;
	bool bLocal_1147 = 0;
	int iLocal_1148 = 0;
	int iLocal_1149 = 0;
	int iLocal_1150 = 0;
	bool bLocal_1151 = 0;
	bool bLocal_1152 = 0;
	bool bLocal_1153 = 0;
	bool bLocal_1154 = 0;
	int iLocal_1155 = 0;
	int iLocal_1156 = 0;
	bool bLocal_1157 = 0;
	int iLocal_1158 = 0;
	bool bLocal_1159 = 0;
	int iLocal_1160 = 0;
	bool bLocal_1161 = 0;
	int iLocal_1162 = 0;
	bool bLocal_1163 = 0;
	int iLocal_1164 = 0;
	int iLocal_1165 = 0;
	bool bLocal_1166 = 0;
	int iLocal_1167 = 0;
	int iLocal_1168 = 0;
	bool bLocal_1169 = 0;
	int iLocal_1170 = 0;
	bool bLocal_1171 = 0;
	int iLocal_1172 = 0;
	int iLocal_1173 = 0;
	int iLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	bool bLocal_1177 = 0;
	int iLocal_1178 = 0;
	int iLocal_1179 = 0;
	int iLocal_1180 = 0;
	int iLocal_1181 = 0;
	int iLocal_1182 = 0;
	bool bLocal_1183 = 0;
	int iLocal_1184 = 0;
	int iLocal_1185 = 0;
	int iLocal_1186 = 0;
	bool bLocal_1187 = 0;
	int iLocal_1188 = 0;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	bool bLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	int iLocal_1194 = 0;
	int iLocal_1195 = 0;
	int iLocal_1196 = 0;
	int iLocal_1197 = 0;
	var uLocal_1198[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1204 = 0;
	var uLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209 = 0;
	int iLocal_1210 = 0;
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	int iLocal_1217 = 0;
	int iLocal_1218 = 0;
	int iLocal_1219 = 0;
	float fLocal_1220 = 0f;
	float fLocal_1221 = 0f;
	float fLocal_1222 = 0f;
	float fLocal_1223[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_1229[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_1235 = 0f;
	float fLocal_1236 = 0f;
	float fLocal_1237[3] = { 0f, 0f, 0f };
	var uLocal_1241[3] = { 0, 0, 0 };
	float fLocal_1245 = 0f;
	float fLocal_1246 = 0f;
	float fLocal_1247 = 0f;
	int iLocal_1248 = 0;
	float fLocal_1249 = 0f;
	struct<3> Local_1250[3];
	struct<3> Local_1260[3];
	struct<3> Local_1270[5];
	struct<3> Local_1286 = { 0, 0, 0 } ;
	struct<3> Local_1289 = { 0, 0, 0 } ;
	struct<3> Local_1292 = { 0, 0, 0 } ;
	struct<3> Local_1295 = { 0, 0, 0 } ;
	struct<3> Local_1298 = { 0, 0, 0 } ;
	struct<3> Local_1301 = { 0, 0, 0 } ;
	struct<3> Local_1304 = { 0, 0, 0 } ;
	struct<3> Local_1307 = { 0, 0, 0 } ;
	struct<3> Local_1310 = { 0, 0, 0 } ;
	float fLocal_1313 = 0f;
	int iLocal_1314 = 0;
	int iLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318[2] = { 0, 0 };
	int iLocal_1321 = 0;
	int iLocal_1322[3] = { 0, 0, 0 };
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	int iLocal_1328 = 0;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	int iLocal_1332 = 0;
	int iLocal_1333 = 0;
	int iLocal_1334 = 0;
	int* iLocal_1335 = NULL;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	int* iLocal_1338 = NULL;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	int* iLocal_1341 = NULL;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	int* iLocal_1344 = NULL;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	int* iLocal_1347 = NULL;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	int* iLocal_1350 = NULL;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	int* iLocal_1353 = NULL;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	int* iLocal_1356 = NULL;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	int* iLocal_1359 = NULL;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	int* iLocal_1362 = NULL;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	bool bLocal_1365 = 0;
	var uLocal_1366 = 16;
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
	var uLocal_1533 = -1;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 1000;
	var uLocal_1541 = 1000;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 8;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 4;
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
	var uLocal_1564 = 4;
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
	var uLocal_1579 = 4;
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
	var uLocal_1594 = 4;
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
	var uLocal_1609 = 4;
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
	var uLocal_1624 = 4;
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
	var uLocal_1639 = 4;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 4;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	struct<3> Local_1667 = { 0, 0, 0 } ;
	float fLocal_1670 = 0f;
	struct<3> Local_1671 = { 0, 0, 0 } ;
	float fLocal_1674 = 0f;
	int iLocal_1675 = 0;
	int iLocal_1676 = 0;
	struct<3> Local_1677 = { 0, 0, 0 } ;
	struct<3> Local_1680 = { 0, 0, 0 } ;
	struct<3> Local_1683 = { 0, 0, 0 } ;
	struct<3> Local_1686 = { 0, 0, 0 } ;
	int* iLocal_1689 = NULL;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	int iLocal_1692 = 0;
	struct<12> Local_1693 = { 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_43 = { 500f, 500f, 500f };
	iLocal_52 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_53 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_266 = -1;
	fLocal_268 = 1f;
	iLocal_381 = 100;
	iLocal_382 = 3;
	iLocal_1033 = 3;
	iLocal_1212 = 37000;
	iLocal_1218 = -1;
	fLocal_1220 = 90000f;
	fLocal_1245 = 135f;
	fLocal_1247 = 0f;
	fLocal_1249 = 0f;
	Local_1295 = { -1162.985f, -161.715f, -38.221f };
	Local_1298 = { -1327.63f, -266.202f, 38.221f };
	Local_1301 = { -1236.6611f, -197.316f, 39.6313f };
	Local_1304 = { -1266.0273f, -218.98291f, 41.44594f };
	Local_1310 = { -1237.7314f, -189.54518f, 40.63728f };
	fLocal_1313 = 40f;
	iLocal_1327 = joaat("A_M_Y_BeachVesp_02");
	iLocal_1328 = joaat("fbi2");
	iLocal_1329 = joaat("S_M_M_HighSec_01");
	iLocal_1330 = joaat("S_M_M_HighSec_02");
	iLocal_1331 = joaat("washington");
	Local_1667 = { -1263.6769f, -222.2767f, 41.446f };
	fLocal_1670 = 304.201f;
	Local_1671 = { -1507.2521f, -934.3307f, 8.6562f };
	fLocal_1674 = 137.9228f;
	Local_1677 = { -1510.7333f, -935.95996f, 10.902136f };
	Local_1680 = { 15.074911f, -0.024198f, -71.861885f };
	Local_1683 = { -1510.8776f, -936.1155f, 9.798549f };
	Local_1686 = { 4.686822f, -0.024198f, -72.45972f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_FAIL");
		func_557(&(Global_113969.f_19966.f_1), 1024);
		func_555();
		func_550();
	}
	MISC::SET_MISSION_FLAG(true);
	iLocal_1047 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (func_549())
	{
		if (func_548())
		{
			iLocal_1155 = 1;
		}
		bLocal_1144 = true;
	}
	else
	{
		bLocal_1144 = false;
	}
	func_547();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
	func_546();
	iLocal_267 = 0;
	Local_55 = { func_544(iLocal_267) };
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1329, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1330, true);
	CAM::INVALIDATE_IDLE_CAM();
	if (func_549())
	{
		bLocal_374 = true;
		iLocal_1211 = func_543();
		if (Global_95690)
		{
			if (iLocal_1211 <= 1)
			{
				iLocal_1211++;
			}
		}
		func_542();
		if (iLocal_1211 == 0)
		{
			if (iLocal_1155)
			{
				func_540();
				while (!func_539())
				{
					SYSTEM::WAIT(0);
				}
				iVar0 = func_474(-1523.1742f, -924.6732f, 9.1221f, 53.0177f);
				if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_BIG_VEHICLE(iVar0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar0);
				}
			}
			func_473(-1510.181f, -946.9595f, 8.2738f, 10f, 1, 0);
		}
		else if (iLocal_1211 == 1)
		{
			if (iLocal_1155)
			{
				func_540();
				while (!func_539())
				{
					SYSTEM::WAIT(0);
				}
				iVar1 = func_474(-1266.4049f, -219.1991f, 41.4459f, 304.8644f);
				if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar1))) && !VEHICLE::IS_BIG_VEHICLE(iVar1))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1, 5f);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar1);
				}
			}
			func_473(-1266.1729f, -214.0011f, 41.4459f, 310.0126f, 1, 0);
		}
		else if (iLocal_1211 == 2)
		{
			if (iLocal_1155)
			{
				func_540();
				while (!func_539())
				{
					SYSTEM::WAIT(0);
				}
				iVar2 = func_474(-1188.4861f, -316.9884f, 36.6841f, 29.9702f);
				if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar2)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar2))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar2))) && !VEHICLE::IS_BIG_VEHICLE(iVar2))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar2);
				}
			}
			func_473(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 1, 0);
		}
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ASS1" /* GXT: Hotel Assassination */, 0);
		if (iLocal_1145)
		{
			if (func_472())
			{
				func_471();
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_1047))
		{
			func_464();
			if (iLocal_1033 < 10)
			{
				Local_358.f_6 = 1;
			}
			else
			{
				Local_358.f_6 = 5;
			}
			func_154();
			func_102();
			if (iLocal_1160)
			{
				func_97();
			}
			if (!bLocal_1143)
			{
				if (iLocal_1033 >= 9 && iLocal_1033 < 11)
				{
					func_93(&uLocal_1205, &fLocal_1220, &bLocal_1142, &bLocal_1143);
				}
			}
			func_61();
			func_59();
			if (((iLocal_1136 || bLocal_1141) && iLocal_1033 < 11) || (bLocal_1171 && iLocal_1033 < 11))
			{
				if (!func_58(&iLocal_1356) && iLocal_1033 > 8)
				{
					func_55(&iLocal_1356);
				}
				else if (iLocal_1033 < 8 || func_52(&iLocal_1356) > 5f)
				{
					if (iLocal_1046 == 1)
					{
						func_37(1);
					}
					else if (iLocal_1046 == 5)
					{
						func_37(5);
					}
					else
					{
						func_37(2);
					}
				}
				else if (func_52(&iLocal_1356) > 2.5f)
				{
					if (!iLocal_1172)
					{
						if (!bLocal_1191)
						{
							iLocal_1059 = func_36(70f, 0);
						}
						else
						{
							iLocal_1059 = func_36(70f, 1);
						}
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!PED::IS_PED_INJURED(iLocal_1059))
							{
								TASK::CLEAR_PED_TASKS(iLocal_1059);
								if (iLocal_1046 == 1)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1316))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1059, false))
										{
											TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_1059, iLocal_1316, iLocal_1316, 2f, false, 0.5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1059) && !PED::IS_PED_INJURED(iLocal_1059))
									{
										func_34(iLocal_1059, 6, "OJAvaGUARD2");
										func_33(&uLocal_1366, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_1046 == 8)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1314) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
									{
										TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_1059, iLocal_1314, iLocal_1314, 2f, false, 0.5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
									}
									func_34(func_31(25f), 6, "OJAvaGUARD2");
									func_33(&uLocal_1366, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_1059, PLAYER::PLAYER_PED_ID(), -1, false);
									func_2(iLocal_1059);
								}
							}
						}
						iLocal_1172 = 1;
					}
				}
			}
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x723
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1047, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_1047, false);
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
		{
			bLocal_1146 = true;
		}
	}
	else
	{
		bLocal_1146 = false;
	}
	if (bLocal_1146)
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iLocal_1314))
		{
			VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iVar0, iLocal_1314);
		}
	}
}

void func_2(int iParam0)//Position - 0x787
{
	struct<6> Var0;
	
	if (!iLocal_1182)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && func_29(iParam0, 1) < 50f)
		{
			if (!func_28())
			{
				if (iLocal_1046 == 4)
				{
					func_34(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1366, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_1046 == 8)
				{
					func_34(func_31(25f), 6, "OJAvaGUARD2");
					func_33(&uLocal_1366, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else
				{
					func_34(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1366, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				iLocal_1182 = 1;
			}
			else
			{
				Var0 = { func_5() };
				if (!MISC::ARE_STRINGS_EQUAL(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()//Position - 0x85A
{
	Global_21152 = 0;
	func_4();
}

void func_4()//Position - 0x86A
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

struct<6> func_5()//Position - 0x8C1
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

bool func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8E5
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)//Position - 0x933
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_4();
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
		if (func_26(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_25();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
			if (bParam2)
			{
				func_17();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_16())
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
				if (!Global_79389)
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
			if (func_15())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_14();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_13();
		func_8();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_4();
	}
	return 0;
}

void func_8()//Position - 0xC01
{
	if (!func_9())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_9()//Position - 0xC38
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_12())
	{
		return 0;
	}
	if (func_10(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_10(int iParam0)//Position - 0xC9B
{
	return func_11(iParam0, 20);
}

var func_11(int iParam0, int iParam1)//Position - 0xCAB
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_12()//Position - 0xCC3
{
	return -1;
}

void func_13()//Position - 0xCCC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22286 = 1;
}

void func_14()//Position - 0xCFD
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	MISC::CLEAR_BIT(&Global_8801, 16);
}

int func_15()//Position - 0xD92
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()//Position - 0xDB9
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
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

void func_17()//Position - 0xE52
{
	if (func_24(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_18();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

int func_18()//Position - 0xEF4
{
	func_19();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_19()//Position - 0xF0D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_22(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_21(PLAYER::PLAYER_PED_ID());
			if (func_20(iVar0) && (!func_24(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_20(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_20(int iParam0)//Position - 0x100A
{
	return iParam0 < 3;
}

int func_21(int iParam0)//Position - 0x1016
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_22(int iParam0)//Position - 0x1053
{
	if (func_20(iParam0))
	{
		return func_23(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_23(int iParam0)//Position - 0x1078
{
	return Global_2169[iParam0 /*29*/];
}

bool func_24(int iParam0)//Position - 0x1087
{
	return Global_44042 == iParam0;
}

void func_25()//Position - 0x1095
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_26(int iParam0, int iParam1)//Position - 0x10EC
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1124
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

int func_28()//Position - 0x117A
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

float func_29(int iParam0, bool bParam1)//Position - 0x119C
{
	return func_30(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

float func_30(int iParam0, int iParam1, bool bParam2)//Position - 0x11B4
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

int func_31(float fParam0)//Position - 0x1212
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_1052[iVar0]))
		{
			if (func_32(iLocal_1052[iVar0], Local_1292, 1) < fParam0)
			{
				return iLocal_1052[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_1056[iVar0]))
		{
			if (func_32(iLocal_1056[iVar0], Local_1292, 1) < fParam0)
			{
				return iLocal_1056[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}

float func_32(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x129F
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1, bParam4);
}

int func_33(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12C9
{
	func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22293 = 0;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 1;
	Global_23279 = 0;
	Global_23283 = 0;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_7(sParam2, iParam4, 0);
}

void func_34(int iParam0, int iParam1, char* sParam2)//Position - 0x131D
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_35(&uLocal_1366, iParam1, iParam0, sParam2, 0, 1);
	}
}

void func_35(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x133E
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
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

int func_36(int iParam0, bool bParam1)//Position - 0x13D9
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_1052[iVar0]))
		{
			if (bParam1 || (!bParam1 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_1052[iVar0], false)))
			{
				fVar1 = func_29(iLocal_1052[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1052[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_1056[iVar0]))
		{
			if (bParam1 || (!bParam1 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_1056[iVar0], false)))
			{
				fVar1 = func_29(iLocal_1056[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1056[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_1049[iVar0]))
		{
			if (bParam1 || (!bParam1 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_1056[iVar0], false)))
			{
				fVar1 = func_29(iLocal_1049[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1049[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_37(int iParam0)//Position - 0x1513
{
	char* sVar0;
	
	if (iLocal_1145 == 0)
	{
		iLocal_1046 = iParam0;
		func_3();
		HUD::CLEAR_PRINTS();
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_FAIL");
		if (func_51())
		{
			func_49(-1698.51f, -1067.7682f, 12.1417f, 316.3502f);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			Global_101533.f_12[0] = 1;
		}
		else
		{
			Global_101533.f_12[0] = 0;
		}
		switch (iLocal_1046)
		{
			case 0:
				sVar0 = "ASS_VA_FAILED";
				break;
			
			case 1:
				sVar0 = "ASS_VA_VEHICLE";
				break;
			
			case 2:
			case 5:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 8:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 3:
				sVar0 = "ASS_VA_WANTED";
				break;
			
			case 6:
				sVar0 = "ASS_VA_ESCAPED";
				break;
			
			case 7:
				sVar0 = "ASS_VA_ABAND";
				break;
			
			case 9:
				sVar0 = "ASS_VA_LATTACK";
				break;
		}
		iLocal_1145 = 1;
		func_47(sVar0);
		func_38(0);
	}
}

void func_38(int iParam0)//Position - 0x1605
{
	int iVar0;
	
	if (Global_113969.f_9088 || func_46(0))
	{
		iVar0 = func_45();
		if (!func_39(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_92265[iVar0 /*5*/].f_1), 5);
		Global_101569 = iParam0;
	}
}

int func_39(int iParam0)//Position - 0x164A
{
	int iVar0;
	int iVar1;
	
	func_44();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_92265[iParam0 /*5*/];
	iVar1 = Global_79660.f_109[iVar0 /*4*/];
	func_43(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_40(&(Global_113969.f_2366.f_539), iVar1);
	if (Global_95688 == Global_101570)
	{
		Global_113969.f_9088.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_92301[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113969.f_9088.f_330[iVar1 /*6*/].f_2++;
	Global_95688 = Global_101570;
	if (iParam0 == -1)
	{
		if (Global_113969.f_9088)
		{
		}
		return 0;
	}
	if (BitTest(Global_92265[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_92265[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0, int iParam1)//Position - 0x175A
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113969.f_18536[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113969.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_42(Global_113969.f_18536[iVar0], &Var2, &fVar5))
			{
				Global_113969.f_18536[iVar0] = 318;
				func_41(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98903[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_9 = 0f;
				Global_98903[iVar0 /*29*/].f_12 = 0f;
				Global_98903[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_10 = 0f;
				Global_98903[iVar0 /*29*/].f_13 = 0f;
				Global_98903[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_11 = 0f;
				Global_98903[iVar0 /*29*/].f_14 = 0f;
				Global_98903[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_26 = 0f;
				Global_98903[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_27 = 0f;
				Global_98903[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_41(var uParam0)//Position - 0x1920
{
	*uParam0 = -15;
}

int func_42(int iParam0, var uParam1, float fParam2)//Position - 0x192E
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
			return func_42(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_42(8, uParam1, fParam2);
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

void func_43(int iParam0, bool bParam1)//Position - 0x229D
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_95498[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_95498[iParam0 /*2*/] = 0;
	}
}

void func_44()//Position - 0x22DB
{
	Global_101568 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79622))
		{
			switch (func_18())
			{
				case 0:
					StringCopy(&Global_79622, "CMN_MARRE" /* GXT: ~s~Michael was arrested. */, 16);
					break;
				
				case 1:
					StringCopy(&Global_79622, "CMN_FARRE" /* GXT: ~s~Franklin was arrested. */, 16);
					break;
				
				case 2:
					StringCopy(&Global_79622, "CMN_TARRE" /* GXT: ~s~Trevor was arrested. */, 16);
					break;
			}
			StringCopy(&Global_79626, "", 16);
		}
		Global_101568 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79622))
		{
			switch (func_18())
			{
				case 0:
					StringCopy(&Global_79622, "CMN_MDIED" /* GXT: ~s~Michael died. */, 16);
					break;
				
				case 1:
					StringCopy(&Global_79622, "CMN_FDIED" /* GXT: ~s~Franklin died. */, 16);
					break;
				
				case 2:
					StringCopy(&Global_79622, "CMN_TDIED" /* GXT: ~s~Trevor died. */, 16);
					break;
			}
			StringCopy(&Global_79626, "", 16);
		}
		Global_101568 = 0;
		MISC::SET_BIT(&(Global_101533.f_20), 25);
	}
}

int func_45()//Position - 0x23C6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_46(bool bParam0)//Position - 0x23F8
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_47(char* sParam0)//Position - 0x2420
{
	func_557(&(Global_113969.f_19966.f_1), 1024);
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		func_48(sParam0);
	}
}

void func_48(char* sParam0)//Position - 0x2448
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_79622, sParam0, 16);
			StringCopy(&Global_79626, "", 16);
			if (RECORDING::IS_REPLAY_RECORDING())
			{
				RECORDING::STOP_REPLAY_RECORDING();
			}
		}
	}
}

void func_49(struct<3> Param0, float fParam3)//Position - 0x2487
{
	if (func_50(Global_79630, 0f, 0f, 0f, 0))
	{
		Global_79630 = { Param0 };
		Global_79633 = fParam3;
	}
}

bool func_50(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x24B3
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_51()//Position - 0x24FA
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_52(int* iParam0)//Position - 0x252D
{
	if (func_58(iParam0))
	{
		if (func_54(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_53(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_53(bool bParam0)//Position - 0x2569
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

bool func_54(var uParam0)//Position - 0x25C1
{
	return BitTest(*uParam0, 2);
}

void func_55(int* iParam0)//Position - 0x25CE
{
	if (!func_58(iParam0))
	{
		func_56(iParam0);
	}
}

void func_56(int* iParam0)//Position - 0x25E6
{
	func_57(iParam0, 0f);
}

void func_57(int* iParam0, float fParam1)//Position - 0x25F5
{
	iParam0->f_1 = (func_53(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_58(int* iParam0)//Position - 0x2620
{
	return BitTest(*iParam0, 1);
}

void func_59()//Position - 0x262D
{
	if (func_60(&iLocal_1046))
	{
		func_37(6);
	}
}

int func_60(int iParam0)//Position - 0x2644
{
	float fVar0;
	bool bVar1;
	
	if (iLocal_1033 > 11)
	{
		if (!PED::IS_PED_INJURED(iLocal_1048))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_1048, iLocal_1314, false))
				{
					bVar1 = true;
				}
			}
		}
		if (bLocal_1166)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1048))
		{
			if (!PED::IS_PED_INJURED(iLocal_1048))
			{
				if (func_30(iLocal_1047, iLocal_1048, 1) >= fVar0)
				{
					if (bVar1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_1314) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1314))
							{
								*iParam0 = 6;
								return 1;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_1048))
					{
						*iParam0 = 6;
						return 1;
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_1122))
				{
					if (func_30(iLocal_1047, iLocal_1048, 1) >= (fVar0 * 0.5f))
					{
						if (!HUD::IS_BLIP_FLASHING(iLocal_1122))
						{
							HUD::SET_BLIP_FLASHES(iLocal_1122, true);
						}
					}
					else if (HUD::IS_BLIP_FLASHING(iLocal_1122))
					{
						HUD::SET_BLIP_FLASHES(iLocal_1122, false);
					}
				}
			}
		}
	}
	return 0;
}

void func_61()//Position - 0x274A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1048))
	{
		if (!PED::IS_PED_INJURED(iLocal_1048))
		{
			func_62(&uLocal_1531, iLocal_1048, 0, 0, 1, 1, 1);
		}
	}
}

void func_62(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x2776
{
	func_63(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_63(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x2790
{
	func_64(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_64(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x27AD
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_92(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_65(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_65(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x27E5
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
	iVar0 = sParam5;
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
	if (func_91(iVar0))
	{
		func_90();
	}
	if (func_89(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
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
			if (func_84(uParam0, bParam7, bParam9, 0))
			{
				func_81(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_70(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_91(iVar0))
							{
								func_69(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
								{
									func_68(1);
								}
							}
						}
					}
				}
			}
			else if (func_70(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_91(iVar0))
						{
							func_69(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								func_68(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_91(sParam5))
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
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_92(uParam0, iVar0, 1);
				}
			}
			if (!func_84(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_67(uParam0))
				{
					func_66(uParam0);
				}
			}
		}
	}
	else
	{
		func_92(uParam0, iVar0, 0);
	}
}

void func_66(var uParam0)//Position - 0x2B52
{
	if (func_89(PLAYER::PLAYER_PED_ID()))
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

int func_67(var uParam0)//Position - 0x2BBB
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

int func_68(bool bParam0)//Position - 0x2BE6
{
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113969.f_10052.f_100++;
			}
			return Global_113969.f_10052.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113969.f_10052.f_101++;
			}
			return Global_113969.f_10052.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113969.f_10052.f_102++;
			}
			return Global_113969.f_10052.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_69(char* sParam0, int iParam1)//Position - 0x2C90
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_70(char* sParam0)//Position - 0x2CA7
{
	if (!func_71(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_91(sParam0)) || func_91("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_68(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_68(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_68(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_71(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2D40
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
	if (func_80(0))
	{
		return 0;
	}
	if (func_79())
	{
		return 0;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	if (Global_76498)
	{
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_61347)
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
	if ((func_78() || func_77(Global_4718592.f_185586)) || func_76())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_75(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_74(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955929)
	{
		return 0;
	}
	if (func_72(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_72(int iParam0)//Position - 0x2F99
{
	if (iParam0 != func_12())
	{
		if (func_73(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == PLAYER::PLAYER_ID()) && func_73(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

int func_73(int iParam0, bool bParam1, bool bParam2)//Position - 0x2FFF
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
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0, int iParam1)//Position - 0x305F
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

int func_75(int iParam0, bool bParam1)//Position - 0x30C1
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

var func_76()//Position - 0x3146
{
	return Global_2684504.f_19;
}

bool func_77(int iParam0)//Position - 0x3154
{
	return iParam0 == 51;
}

var func_78()//Position - 0x3161
{
	return Global_2684504.f_18;
}

bool func_79()//Position - 0x316F
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

int func_80(int iParam0)//Position - 0x3184
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
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
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_81(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x31DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1582021 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_92(uParam0, 0, 0);
	}
	if (func_50(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_82())
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
	if (iParam5 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
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
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
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

bool func_82()//Position - 0x32EB
{
	return func_83(PLAYER::PLAYER_ID());
}

int func_83(int iParam0)//Position - 0x32FB
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_84(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x331A
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
					if (func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_88(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_67(uParam0))
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
						if (!func_88(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_88(bParam1, bParam2, bParam3))
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
					if (!func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_87(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
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
				else if (!func_88(bParam1, bParam2, bParam3))
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
						if (func_86(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_85(bParam1, bParam2, bParam3))
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
					else if (func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_67(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_71(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_90();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3686
{
	if (!func_71(bParam0, bParam1, bParam2))
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

int func_86(bool bParam0, bool bParam1, bool bParam2)//Position - 0x36D8
{
	if (!func_71(bParam0, bParam1, bParam2))
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

int func_87(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3721
{
	if (!func_71(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_117)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3780
{
	if (!func_71(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_117)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x37D6
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

void func_90()//Position - 0x3831
{
	MISC::SET_BIT(&Global_8801, 4);
}

bool func_91(char* sParam0)//Position - 0x3841
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_92(var uParam0, int iParam1, bool bParam2)//Position - 0x3854
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2738934.f_4712, 26))
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
		if (func_91(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_91(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_93(var uParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x392E
{
	float fVar0;
	
	if (!*bParam2)
	{
		*uParam0 = MISC::GET_GAME_TIMER();
		*fParam1 = (*fParam1 / 1000f);
		if (!func_58(&iLocal_1353))
		{
			func_55(&iLocal_1353);
		}
		*bParam2 = 1;
	}
	if (func_58(&iLocal_1353))
	{
		fVar0 = func_52(&iLocal_1353);
		if (fVar0 >= *fParam1)
		{
			*bParam3 = 1;
		}
	}
	iLocal_1215 = SYSTEM::ROUND((*fParam1 - fVar0));
	iLocal_1215 *= 1000;
	if (iLocal_1215 < 63000)
	{
		iLocal_1149 = 1;
	}
	if (iLocal_1215 < 65000)
	{
		iLocal_1156 = 1;
	}
	if (iLocal_1215 < iLocal_1212)
	{
		iLocal_1179 = 1;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\ASSASSINATION_MULTI", false, -1))
	{
		bLocal_1365 = false;
	}
	else
	{
		bLocal_1365 = true;
	}
	if (iLocal_1215 < 30000)
	{
		iLocal_1170 = 1;
		if (bLocal_1365)
		{
			if (func_58(&iLocal_1362))
			{
				if (func_52(&iLocal_1362) > 1f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", true);
					func_56(&iLocal_1362);
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", true);
				func_55(&iLocal_1362);
			}
		}
		func_94(iLocal_1215, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_94(iLocal_1215, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_94(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x3A6D
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_96(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_95(7, iVar0);
		Global_1670224.f_4714[iVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4714.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4714.f_172[iVar0] = iParam2;
		Global_1670224.f_4714.f_216[iVar0] = iParam3;
		Global_1670224.f_4714.f_183[iVar0] = iParam4;
		Global_1670224.f_4714.f_194[iVar0] = iParam5;
		Global_1670224.f_4714.f_249[iVar0] = iParam6;
		Global_1670224.f_4714.f_260[iVar0] = iParam7;
		Global_1670224.f_4714.f_205[iVar0] = iParam8;
		Global_1670224.f_4714.f_314[iVar0] = iParam9;
		Global_1670224.f_4714.f_325[iVar0] = iParam10;
		Global_1670224.f_4714.f_357[iVar0] = iParam11;
		Global_1670224.f_4714.f_238[iVar0] = iParam12;
		Global_1670224.f_4714.f_271[iVar0] = iParam13;
		Global_1670224.f_4714.f_368[iVar0] = iParam14;
		Global_1670224.f_4714.f_379[iVar0] = iParam15;
		Global_1670224.f_4714.f_390[iVar0] = iParam16;
		Global_1670224.f_4714.f_227[iVar0] = iParam17;
	}
}

void func_95(int iParam0, int iParam1)//Position - 0x3BCA
{
	MISC::SET_BIT(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_96(int iParam0, int iParam1)//Position - 0x3BE3
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

void func_97()//Position - 0x3BF9
{
	int iVar0;
	
	switch (iLocal_1209)
	{
		case 0:
			if (!func_28())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1052[0], false))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_1052[0]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1052[1], false))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_1052[1]);
				}
				iVar0 = func_101();
				if (bLocal_1159)
				{
					if (!iLocal_1175)
					{
						func_34(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1366, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
						{
							iLocal_1175 = 1;
						}
					}
				}
				else if (!bLocal_1166 && PED::IS_PED_INJURED(iLocal_1048))
				{
					if (!iLocal_1175)
					{
						func_34(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1366, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
						{
							iLocal_1175 = 1;
						}
					}
				}
				if (!func_58(&iLocal_1341))
				{
					func_55(&iLocal_1341);
				}
				else
				{
					func_56(&iLocal_1341);
				}
				iLocal_1209 = 1;
			}
			break;
		
		case 1:
			iLocal_1209 = 2;
			break;
		
		case 2:
			if (iLocal_1175 || !PED::IS_PED_INJURED(iLocal_1048))
			{
				if (!func_28() && !bLocal_1159)
				{
					if (!iLocal_1173)
					{
						iVar0 = func_101();
						func_34(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1366, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							iLocal_1173 = 1;
						}
					}
					else if (!bLocal_1183 && PED::IS_PED_INJURED(iLocal_1048))
					{
						iVar0 = func_101();
						func_100(iVar0);
					}
				}
			}
			else if (bLocal_1159)
			{
				if (!iLocal_1175)
				{
					func_34(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1366, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
					{
						iLocal_1175 = 1;
					}
				}
			}
			else if (!bLocal_1166)
			{
				if (!iLocal_1175)
				{
					func_34(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1366, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
					{
						iLocal_1175 = 1;
					}
				}
			}
			if (func_99(iLocal_1047))
			{
				fLocal_1246 = 2.5f;
			}
			else
			{
				fLocal_1246 = 5f;
			}
			if (func_58(&iLocal_1341))
			{
				if ((func_52(&iLocal_1341) > fLocal_1246 && func_98()) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					func_3();
					if (!iLocal_1136)
					{
						iLocal_1136 = 1;
						iLocal_1180 = 1;
					}
					iLocal_1160 = 0;
				}
			}
			break;
		
		case 3:
			break;
	}
}

int func_98()//Position - 0x3E43
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1052[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1052[iVar0], false))
		{
			PED::SET_PED_RESET_FLAG(iLocal_1052[iVar0], 85, true);
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_1052[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1056[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1056[iVar0], false))
		{
			PED::SET_PED_RESET_FLAG(iLocal_1056[iVar0], 85, true);
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_1056[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1049[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1049[iVar0], false))
		{
			PED::SET_PED_RESET_FLAG(iLocal_1049[iVar0], 85, true);
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_1049[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_99(int iParam0)//Position - 0x3F4E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1252.3015f, -213.90327f, 35.112217f, -1205.8076f, -183.06808f, 45.325413f, 51f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1250.8093f, -192.52184f, 35.33125f, -1231.8663f, -161.36552f, 45.025352f, 12.8f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_100(int iParam0)//Position - 0x3FC6
{
	if (!bLocal_1183)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1048) && PED::IS_PED_INJURED(iLocal_1048))
		{
			if (!func_28())
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && func_29(iParam0, 1) < 75f)
				{
					func_34(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1366, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					bLocal_1183 = true;
				}
			}
		}
	}
}

int func_101()//Position - 0x403F
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1052[iVar1]) && !PED::IS_PED_INJURED(iLocal_1052[iVar1]))
		{
			iVar0 = iLocal_1052[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1056[iVar1]) && !PED::IS_PED_INJURED(iLocal_1056[iVar1]))
			{
				iVar0 = iLocal_1056[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1049[iVar1]) && !PED::IS_PED_INJURED(iLocal_1049[iVar1]))
			{
				iVar0 = iLocal_1049[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_102()//Position - 0x4103
{
	func_109();
	if (!iLocal_1160)
	{
		if (!iLocal_1136)
		{
			if (func_103(&iLocal_1046))
			{
				iLocal_1136 = 1;
			}
		}
	}
}

int func_103(int iParam0)//Position - 0x412B
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_1136)
	{
		if (iLocal_1170 && !bLocal_1139)
		{
			if (func_108(&iLocal_1046))
			{
				*iParam0 = 8;
				return 1;
			}
		}
		if (WEAPON::IS_PED_ARMED(iLocal_1047, 4))
		{
			if (PED::IS_PED_SHOOTING(iLocal_1047))
			{
				fVar1 = func_32(PLAYER::PLAYER_PED_ID(), -1230.5994f, -196.5408f, 38.1528f, 1);
				WEAPON::GET_CURRENT_PED_WEAPON(iLocal_1047, &iVar2, true);
				if ((((fVar1 > 15f && iVar2 == joaat("WEAPON_SNIPERRIFLE")) || iVar2 == joaat("WEAPON_HEAVYSNIPER")) || iVar2 == joaat("WEAPON_REMOTESNIPER")) || iVar2 == joaat("WEAPON_MARKSMANRIFLE"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1048))
					{
						iLocal_1160 = 1;
						iLocal_1158 = 1;
					}
				}
				else if (fVar1 < 50f)
				{
					return 1;
				}
			}
		}
		if ((func_107(iLocal_1314) || func_106(iLocal_1314)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1314) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1314, iLocal_1047, true)))
		{
			return 1;
		}
		if (func_107(iLocal_1315) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1315) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1315, iLocal_1047, true)))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1314) && !ENTITY::IS_ENTITY_DEAD(iLocal_1314, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_1047, iLocal_1314, false))
			{
				VEHICLE::SET_VEHICLE_ALARM(iLocal_1314, true);
				VEHICLE::START_VEHICLE_ALARM(iLocal_1314);
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1314))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1047, false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_1047, false);
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_1314) || (bLocal_1146 && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iLocal_1314)))
					{
						*iParam0 = 4;
						return 1;
					}
				}
			}
		}
		if (iLocal_1033 == 12)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
			{
				if (func_30(iLocal_1047, iLocal_1314, 1) <= 15f)
				{
					return 1;
				}
			}
		}
		if ((iLocal_1035[0] == 2 || iLocal_1035[1] == 2) || iLocal_1035[2] == 2)
		{
			if (func_105())
			{
				return 1;
			}
		}
		if (iLocal_1033 < 11)
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_1310, fLocal_1313))
			{
				return 1;
			}
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_1310, fLocal_1313))
		{
			if (func_104())
			{
				iLocal_1190 = 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_104()//Position - 0x438C
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1272.181f, -241.25453f, 62.904064f, -1300.2035f, -201.39682f, 40.404076f, 44.5f, false, false, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1270.1255f, -253.93211f, 62.90407f, -1311.4138f, -193.65883f, 38.232914f, 44.5f, false, false, 0))
	{
		return 1;
	}
	return 0;
}

int func_105()//Position - 0x43FE
{
	int iVar0;
	
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
	{
		if (iVar0 == joaat("WEAPON_STICKYBOMB"))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_106(int iParam0)//Position - 0x4460
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0) == 3 && PED::GET_VEHICLE_PED_IS_ENTERING(iLocal_1047) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_107(int iParam0)//Position - 0x449A
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
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_30(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/)))
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

int func_108(int iParam0)//Position - 0x4568
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
	{
		if (WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_1314, joaat("WEAPON_STICKYBOMB"), -1))
		{
			if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-1223.0242f, -187.3076f, 39.025375f, -1220.3112f, -186.2481f, 40.425377f, 6.5f, joaat("WEAPON_STICKYBOMB"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-1223.0242f, -187.3076f, 38.025375f, -1220.3112f, -186.2481f, 40.425377f, 4.5f, joaat("WEAPON_STICKYBOMB"), false))
			{
				*iParam0 = 8;
				return 1;
			}
		}
	}
	return 0;
}

void func_109()//Position - 0x45FC
{
	int iVar0;
	
	func_150();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1052[iVar0]))
		{
			if (iLocal_1136 && !bLocal_1169)
			{
				func_149(iLocal_1052[iVar0], &(Local_1062[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1, 0, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1056[iVar0]))
		{
			if (iLocal_1136 && !bLocal_1169)
			{
				func_149(iLocal_1056[iVar0], &(Local_1087[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1, 0, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1049[iVar0]))
		{
			if (iLocal_1136 && !bLocal_1169)
			{
				func_149(iLocal_1049[iVar0], &(Local_1104[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_1049[iVar0]))
			{
				if (iLocal_1043[iVar0] == 4)
				{
					PED::SET_PED_RESET_FLAG(iLocal_1049[iVar0], 128, true);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1206 == 0)
	{
		func_147(0);
	}
	else if (iLocal_1206 == 1)
	{
		func_147(1);
	}
	else if (iLocal_1206 == 2)
	{
		if (iLocal_1033 >= 9)
		{
			func_136(0);
		}
	}
	else if (iLocal_1206 == 3)
	{
		if (iLocal_1033 >= 9)
		{
			func_136(1);
		}
	}
	else if (iLocal_1206 == 4)
	{
		if (iLocal_1033 >= 9)
		{
			func_136(2);
			func_135(-1222.5576f, -173.74709f, 38.325413f, -1220.1012f, -169.05315f, 42.075413f, 4f);
		}
	}
	else if (iLocal_1206 == 5)
	{
		func_110(0);
		func_135(-1213.4323f, -191.32614f, 38.325413f, -1208.5529f, -193.86182f, 42.075344f, 4f);
	}
	else if (iLocal_1206 == 6)
	{
		func_110(1);
		func_135(-1219.1403f, -202.31242f, 38.325344f, -1214.2693f, -204.9035f, 42.075344f, 4f);
	}
	iLocal_1206++;
	if (iLocal_1206 > 6)
	{
		iLocal_1206 = 0;
	}
	if (iLocal_1136)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1048, false))
		{
			PED::SET_PED_RESET_FLAG(iLocal_1048, 120, true);
		}
	}
}

void func_110(int iParam0)//Position - 0x4839
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	iVar0 = iLocal_1056[iParam0];
	switch (iLocal_1039[iParam0])
	{
		case 0:
			if (iLocal_1149)
			{
				iLocal_1039[iParam0] = 1;
			}
			else if (bLocal_1147)
			{
				iLocal_1039[iParam0] = 3;
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1315, false))
			{
				if (func_134())
				{
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1315))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1315, -1, false) == iLocal_1056[iParam0])
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_1056[iParam0], iLocal_1315, "OJASva_104", 948, 0, 16, 18, 6f, false, 2f);
						}
					}
					iLocal_1039[iParam0] = 2;
				}
				else
				{
					func_133(iParam0);
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1315, false))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1315))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_1315, true) };
					fVar4 = ENTITY::GET_ENTITY_HEADING(iLocal_1315);
					iLocal_1149 = 0;
					iLocal_1039[iParam0] = 0;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1315, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1056[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_1056[iParam0], iLocal_1315, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
					{
						if (!iLocal_1136)
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1315, -1, false) == iLocal_1056[iParam0])
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1056[iParam0], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
								{
									TASK::TASK_VEHICLE_ESCORT(iLocal_1056[iParam0], iLocal_1315, iLocal_1314, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1315, -1, false) == iLocal_1056[iParam0])
						{
							if (!iLocal_1150)
							{
								if (ENTITY::IS_ENTITY_DEAD(iLocal_1048, false))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
									}
									else
									{
										iLocal_1039[iParam0] = 8;
									}
								}
								else
								{
									TASK::TASK_VEHICLE_ESCORT(iLocal_1056[iParam0], iLocal_1315, iLocal_1314, -1, 45f, 786981, 10f, -1, 10f);
									TASK::ADD_VEHICLE_SUBTASK_ATTACK_PED(iVar0, PLAYER::PLAYER_PED_ID());
									iLocal_1150 = 1;
								}
							}
						}
						else if (!bLocal_1166)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1056[iParam0], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (ENTITY::GET_ENTITY_SPEED(iLocal_1315) < 5f)
									{
										iLocal_1039[iParam0] = 8;
									}
								}
								TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1056[iParam0], joaat("SCRIPT_TASK_COMBAT")) != 1)
						{
							TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					else if (!iLocal_1160)
					{
						iLocal_1039[iParam0] = 8;
					}
				}
			}
			break;
		
		case 4:
			if (!func_58(&iLocal_1335))
			{
				func_56(&iLocal_1335);
			}
			func_130(&(iLocal_1056[iParam0]));
			iLocal_1039[iParam0] = 5;
			break;
		
		case 5:
			if (!func_99(iLocal_1047))
			{
				if (func_52(&iLocal_1335) >= 27f || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1047, iVar0, 5f, 5f, 3f, false, true, 0))
						{
							func_129(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_133(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_1039[iParam0] = 0;
			}
			break;
		
		case 6:
			if (bLocal_1161)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1326);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_LOOK_AT_COORD(0, func_128(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500), 2048, 4);
				TASK::TASK_LOOK_AT_COORD(0, func_128(), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 2048, 4);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(10000, 11000), 30f, 1f, 2f, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_128(), 1f, false, 0.5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1326);
				if (!PED::IS_PED_INJURED(iLocal_1056[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1056[iParam0], iLocal_1326);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1326);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1326);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_128(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), true, false);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_128(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), false, false);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_128(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), false, false);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_128(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), false, false);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_128(), -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1326);
				if (!PED::IS_PED_INJURED(iLocal_1056[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1056[iParam0], iLocal_1326);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1326);
			}
			iLocal_1039[iParam0] = 7;
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(iLocal_1056[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1056[iParam0], joaat("SCRIPT_TASK_ANY")) != 1)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_1056[iParam0], iLocal_1047, iLocal_1047, 1f, false, -1f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 8:
			if (iLocal_1046 != 4 && iLocal_1046 != 5)
			{
				func_127(iVar0);
			}
			else
			{
				func_126(iVar0);
			}
			iLocal_1039[iParam0] = 9;
			break;
		
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_1046 != 4)
				{
					func_125(iLocal_1315, iVar0, 1112014848, 1112014848, 1092616192);
				}
			}
			func_2(iVar0);
			func_100(iVar0);
			break;
	}
	if (!iLocal_1136)
	{
		if (iLocal_1160)
		{
			if (iLocal_1039[iParam0] != 6 && iLocal_1039[iParam0] != 7)
			{
				iLocal_1039[iParam0] = 6;
			}
		}
		else if (func_118(iVar0, iLocal_1315, &Local_358, &iLocal_369, 0, 0, 0, 1, 1) || func_117(iLocal_1315))
		{
			iVar5 = func_36(1116471296, 1);
			if (iVar5 != 0)
			{
				func_116(ENTITY::GET_ENTITY_COORDS(iVar5, true), 1097859072, 1116471296);
			}
			if (!func_115())
			{
				iLocal_1136 = 1;
			}
		}
		else if (!bLocal_1139)
		{
			if (func_114(iVar0, 10f))
			{
				if (iLocal_1039[iParam0] != 4 && iLocal_1039[iParam0] != 5)
				{
					if (!bLocal_1137)
					{
						func_112(&Local_358, 4);
						iLocal_1039[iParam0] = 4;
					}
					else if (!func_99(iLocal_1047))
					{
						iLocal_1136 = 1;
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1048))
						{
							iLocal_1046 = 5;
						}
						iLocal_1039[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1315, false))
		{
			if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1315, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false)) || iLocal_1148) || !bLocal_1139)
			{
				if (iLocal_1039[iParam0] < 8)
				{
					iLocal_1039[iParam0] = 8;
				}
			}
		}
		else if (iLocal_1039[iParam0] < 8)
		{
			iLocal_1039[iParam0] = 8;
		}
	}
	func_111(iVar0, uLocal_1127[iParam0]);
}

void func_111(int iParam0, int iParam1)//Position - 0x4EF1
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(iParam1))
			{
				HUD::REMOVE_BLIP(&iParam1);
			}
		}
	}
}

void func_112(var uParam0, int iParam1)//Position - 0x4F1A
{
	func_113(uParam0, iParam1);
}

void func_113(var uParam0, var uParam1)//Position - 0x4F2A
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_114(int iParam0, float fParam1)//Position - 0x4F3F
{
	if (!iLocal_1136)
	{
		if (!func_99(iLocal_1047))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_29(iParam0, 0) <= fParam1)
					{
						if (PED::IS_PED_FACING_PED(iParam0, iLocal_1047, 120f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_1047, 17))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1251.791f, -147.043f, 42.679f, -1197.245f, -212.232f, 50.679f, 35f, true, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1259.282f, -204.172f, -60.654f, -1304.335f, -235.719f, 60.654f, 85f, true, true, 0))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1047, iParam0, 5f, 5f, 1f, false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(iParam0, iLocal_1047, 120f))
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_1047, 17))
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

int func_115()//Position - 0x5054
{
	if (iLocal_1160 || bLocal_1161)
	{
		return 1;
	}
	return 0;
}

void func_116(struct<3> Param0, float fParam3, float fParam4)//Position - 0x5070
{
	int iVar0;
	float fVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1048))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1314))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1314, false) || iLocal_1190)
	{
		bLocal_1159 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1048))
	{
		if (((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1048, joaat("WEAPON_SNIPERRIFLE"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1048, joaat("WEAPON_HEAVYSNIPER"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1048, joaat("WEAPON_REMOTESNIPER"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1048, joaat("WEAPON_MARKSMANRIFLE"), 0))
		{
			iLocal_1158 = 1;
			iLocal_1034 = 1;
		}
	}
	if (iLocal_369 == 4 || iLocal_369 == 8)
	{
		if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1314))
		{
			fParam3 = (fParam3 * 2f);
			iVar0 = 1;
		}
	}
	if (!iLocal_1136)
	{
		if ((iLocal_1158 || bLocal_1159) || iVar0)
		{
			fVar1 = func_32(PLAYER::PLAYER_PED_ID(), Param0, 1);
			if (fVar1 > fParam3)
			{
				iLocal_1160 = 1;
				if (fVar1 > fParam4)
				{
					bLocal_1161 = true;
				}
			}
		}
	}
}

int func_117(int iParam0)//Position - 0x5177
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
						if (fVar1 > 7f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, iParam0, true))
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

int func_118(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x51F9
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_124(*uParam2, 1))
		{
			if (func_123(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_124(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_124(*uParam2, 4))
		{
			if (func_122(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_124(*uParam2, 8))
		{
			if (func_121(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_124(*uParam2, 128);
		if (bParam4)
		{
			if (func_119(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_124(*uParam2, 16))
		{
			if (func_119(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x5323
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_354)
		{
			iLocal_355 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_354 = true;
		}
		iLocal_356 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_357 = (iLocal_355 - iLocal_356);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_357) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_354)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_357) > 100f)
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
	if (func_120(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_29(iParam0, 1) < 1.5f)
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

int func_120(int iParam0, int iParam1)//Position - 0x54F5
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
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

int func_121(int iParam0, int iParam1, var uParam2)//Position - 0x554A
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

int func_122(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x5598
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
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
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_107(iVar3))
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

int func_123(int iParam0, var uParam1)//Position - 0x5711
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_29(iParam0, 1) < uParam1->f_2)
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

bool func_124(var uParam0, int iParam1)//Position - 0x5796
{
	return (uParam0 && iParam1) != 0;
}

void func_125(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x57A5
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (func_30(iParam1, iParam0, 0) > fParam2 && func_29(iParam1, 1) < fParam3)
				{
					if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam0, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iParam1, iParam0, 20000, -1, 2f, 1, 0, 0);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 6, 35f, 786469, -1f, -1f, true);
						TASK::ADD_VEHICLE_SUBTASK_ATTACK_PED(iParam1, PLAYER::PLAYER_PED_ID());
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam0, false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_COMBAT")) != 1)
					{
						TASK::TASK_COMBAT_PED(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iParam1, iParam0, false))
			{
				if (func_29(iParam1, 1) > fParam4)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iParam0, PLAYER::PLAYER_PED_ID(), 6, 35f, 786469, -1f, -1f, true);
						TASK::ADD_VEHICLE_SUBTASK_ATTACK_PED(iParam1, PLAYER::PLAYER_PED_ID());
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					TASK::TASK_COMBAT_PED(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_COMBAT")) != 1)
		{
			TASK::TASK_COMBAT_PED(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
	}
}

void func_126(int iParam0)//Position - 0x590D
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_1047) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
		}
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_1047, -1, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_127(int iParam0)//Position - 0x5972
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1047, false))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1047, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1326);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1326);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
			TASK::TASK_COMBAT_PED(0, iLocal_1047, 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1326);
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
			{
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_1326);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1326);
		}
		else if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_COMBAT")) != 1)
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				TASK::TASK_COMBAT_PED(iParam0, iLocal_1047, 0, 16);
			}
		}
	}
}

Vector3 func_128()//Position - 0x5A17
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	switch (iVar3)
	{
		case 0:
			Var0 = { -1270.2063f, -200.3586f, 40.8333f };
			break;
		
		case 1:
			Var0 = { -1268.439f, -215.9683f, 59.654f };
			break;
		
		case 2:
			Var0 = { -1241.5585f, -239.3237f, 38.7884f };
			break;
	}
	return Var0;
}

void func_129(int iParam0, struct<3> Param1)//Position - 0x5A8B
{
	if (!iLocal_1136)
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1047, iParam0, Param1, false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, iLocal_1047, 160f))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_1047, 17))
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_1047, iLocal_1047, 1f, false, -1f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_1046 = 5;
						iLocal_1136 = 1;
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 1)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_1047, iLocal_1047, 1f, false, -1f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
}

void func_130(int iParam0)//Position - 0x5B31
{
	int iVar0;
	struct<3> Var1;
	
	if (iLocal_1059 == 0)
	{
		iLocal_1059 = func_36(70f, 0);
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
		{
			if (!iLocal_1138)
			{
				if (*iParam0 == iLocal_1059)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_ENTITY(0, iLocal_1047, 20000, 2f, 1f, 2f, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_1047, -1);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_1138 = 1;
					Var1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iLocal_1047, -1);
				}
			}
			else if (*iParam0 != iLocal_1059)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iLocal_1047, -1);
				}
			}
		}
		PED::SET_PED_CAN_BE_TARGETTED(*iParam0, true);
		func_131();
	}
}

void func_131()//Position - 0x5C18
{
	int iVar0;
	
	if (!iLocal_1140)
	{
		if (!bLocal_1151)
		{
			if (!func_28())
			{
				iVar0 = func_36(1116471296, 1);
				func_34(iVar0, 3, "OJAvaGUARD");
				if (func_132())
				{
					func_6(&uLocal_1366, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					iLocal_1140 = 1;
				}
				else
				{
					func_33(&uLocal_1366, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					iLocal_1140 = 1;
				}
			}
		}
	}
}

int func_132()//Position - 0x5C89
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1314, false))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_1314, true) };
		}
		fVar6 = SYSTEM::VDIST2(Var0, Var3);
		if (fVar6 <= 25f)
		{
			return 1;
		}
	}
	return 0;
}

void func_133(int iParam0)//Position - 0x5CE0
{
	int iVar0;
	
	bLocal_1137 = true;
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1056[iParam0], false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1315, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_1056[iParam0], iLocal_1315, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1056[iParam0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_1056[iParam0], iLocal_1315, 20000, iVar0, 2f, 1, 0, 0);
				}
			}
		}
	}
}

int func_134()//Position - 0x5D5E
{
	if (!PED::IS_PED_INJURED(iLocal_1056[0]) && !PED::IS_PED_INJURED(iLocal_1056[1]))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_1056[0], iLocal_1315, false) && PED::IS_PED_IN_VEHICLE(iLocal_1056[1], iLocal_1315, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_135(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x5DAD
{
	if (!iLocal_1136)
	{
		if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Param0, Param3, fParam6, joaat("WEAPON_STICKYBOMB"), false))
		{
			iLocal_1136 = 1;
		}
	}
}

void func_136(int iParam0)//Position - 0x5DD7
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = iLocal_1052[iParam0];
	switch (iLocal_1035[iParam0])
	{
		case 0:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1326);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1326);
				TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Local_1270[iParam0 /*3*/], 1f, 0, false, 786603, -1f);
				TASK::TASK_ACHIEVE_HEADING(0, fLocal_1223[iParam0], 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1326);
				TASK::TASK_PERFORM_SEQUENCE(iVar0, iLocal_1326);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1326);
				iLocal_1035[iParam0] = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (!bLocal_1171)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_PLAY_ANIM")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_1270[iParam0 /*3*/], 3f, 3f, 3f, false, true, 0))
							{
								func_144(iVar0, &(uLocal_1198[iParam0]), 1);
							}
							else
							{
								iLocal_1035[iParam0] = 0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_58(&iLocal_1335))
			{
				func_56(&iLocal_1335);
				func_130(&iVar0);
				iLocal_1035[iParam0] = 2;
			}
			else if (func_52(&iLocal_1335) > fLocal_1229[iParam0] || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_130(&iVar0);
				iLocal_1035[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!func_99(iLocal_1047))
			{
				iLocal_1164 = 1;
				if (bLocal_1163)
				{
					iLocal_1035[iParam0] = 4;
					break;
				}
				else if (func_52(&iLocal_1335) >= 27f && iLocal_1140)
				{
					func_129(iVar0, 15f, 15f, 3f);
				}
				else if (func_52(&iLocal_1335) >= 15f)
				{
					func_142(iVar0);
				}
			}
			else
			{
				iLocal_1164 = 0;
				bLocal_1137 = true;
				if (!bLocal_1157)
				{
					iLocal_1035[iParam0] = 0;
				}
				else
				{
					iLocal_1035[iParam0] = 4;
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				PED::SET_PED_RESET_FLAG(iVar0, 60, true);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					if (iParam0 == 0)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_1052[0], iLocal_1052[1], -1, 0, 2);
						if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1314, false))
						{
							TASK::TASK_ENTER_VEHICLE(iVar0, iLocal_1314, 30000, -1, 1f, 1, 0, 0);
						}
					}
					else if (iParam0 == 1)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_1052[1], iLocal_1052[0], -1, 0, 2);
						if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1314, false))
						{
							TASK::TASK_ENTER_VEHICLE(iVar0, iLocal_1314, 30000, 0, 1f, 1, 0, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1315, false))
						{
							if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1315, false))
							{
								TASK::TASK_ENTER_VEHICLE(iVar0, iLocal_1315, 30000, 1, 1f, 1, 0, 0);
							}
						}
					}
				}
				iLocal_1035[iParam0] = 5;
			}
			else
			{
				iLocal_1035[iParam0] = 10;
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_RESET_FLAG(iVar0, 60, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) != 1)
				{
					if (iParam0 == 0)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_1052[iParam0], iLocal_1052[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_1052[iParam0], iLocal_1052[0], -1, 2048, 4);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
			{
				if (!func_140())
				{
					if (iLocal_1136)
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								if (func_139(iLocal_1052[0]))
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_1052[0]);
								}
								if (func_139(iLocal_1052[1]))
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_1052[1]);
								}
								TASK::TASK_COMBAT_PED(iVar0, iLocal_1047, 0, 16);
							}
						}
					}
				}
				else
				{
					iLocal_1035[iParam0] = 6;
				}
			}
			else
			{
				iLocal_1035[iParam0] = 10;
			}
			if (bLocal_1152)
			{
				if (iLocal_1035[iParam0] != 10 && iLocal_1035[iParam0] != 11)
				{
					iLocal_1035[iParam0] = 10;
				}
			}
			break;
		
		case 6:
			if (!iLocal_1136)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1314, -1, false) == iVar0)
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1314, true, true, false);
							if (func_138())
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar0, iLocal_1314, "OJASva_101a", 181, 0, 16, -1, 10f, false, 2f);
							}
							else
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar0, iLocal_1314, "OJASva_101", 181, 0, 0, -1, -1f, false, 2f);
							}
						}
					}
					iLocal_1035[iParam0] = 7;
				}
			}
			else
			{
				if (func_139(iLocal_1052[0]))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_1052[0]);
				}
				if (func_139(iLocal_1052[1]))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_1052[1]);
				}
				iLocal_1035[iParam0] = 7;
			}
			break;
		
		case 7:
			if (iLocal_1136)
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1314, -1, false) == iVar0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1314, 1, false) == iLocal_1048)
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (bLocal_1151 || (iLocal_1165 && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1314)))
						{
							TASK::CLEAR_PED_TASKS(iVar0);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
									{
										TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_1314, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 8, 35f, 786469, -1f, -1f, true);
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
								{
									TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, iLocal_1314, PLAYER::PLAYER_PED_ID(), 8, 35f, 786469, -1f, -1f, true);
								}
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_COMBAT")) != 1)
					{
						TASK::TASK_COMBAT_PED(iVar0, iLocal_1047, 0, 16);
					}
				}
			}
			else if (bLocal_1151 || (iLocal_1165 && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1314)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1314, -1, false) == iVar0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, iLocal_1314, Local_1292, 8, 25f, 786603, -1f, -1f, true);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (bLocal_1161)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1326);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_LOOK_AT_COORD(0, func_128(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500), 2048, 4);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000), 30f, 1f, 2f, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_128(), 1f, false, 0.5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1326);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1052[iParam0], false))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1052[iParam0], iLocal_1326);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1326);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1326);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_128(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), true, false);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_128(), 1f, false, 0.5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1326);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1052[iParam0], false))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1052[iParam0], iLocal_1326);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1326);
			}
			iLocal_1035[iParam0] = 9;
			break;
		
		case 9:
			if (!PED::IS_PED_INJURED(iLocal_1052[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1052[iParam0], joaat("SCRIPT_TASK_ANY")) != 1)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_1052[iParam0], iLocal_1047, iLocal_1047, 1f, false, -1f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 10:
			if (iLocal_1046 == 4 || iLocal_1046 == 5)
			{
				func_126(iVar0);
			}
			else if (iLocal_1046 != 8)
			{
				func_127(iVar0);
				iLocal_1035[iParam0] = 11;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				func_125(iLocal_1314, iVar0, 1112014848, 1112014848, 1092616192);
			}
			func_2(iVar0);
			func_100(iVar0);
			break;
	}
	if (iLocal_1033 < 10)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1236;
	}
	if (!iLocal_1136)
	{
		if (iLocal_1160)
		{
			if (iLocal_1035[iParam0] != 8 && iLocal_1035[iParam0] != 9)
			{
				iLocal_1035[iParam0] = 8;
			}
		}
		else if (func_137(iVar0))
		{
			iVar2 = func_36(1116471296, 1);
			if (iVar2 != 0)
			{
				func_116(ENTITY::GET_ENTITY_COORDS(iVar2, true), 1097859072, 1116471296);
			}
			if (!func_115())
			{
				iLocal_1136 = 1;
			}
		}
		else if (!bLocal_1139)
		{
			if (func_114(iVar0, fVar1))
			{
				if ((iLocal_1035[iParam0] != 3 && iLocal_1035[iParam0] != 2) && !bLocal_1163)
				{
					if (!bLocal_1137)
					{
						func_112(&Local_358, 4);
						iLocal_1035[iParam0] = 3;
					}
					else if (!func_99(iLocal_1047))
					{
						iLocal_1136 = 1;
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1048))
						{
							iLocal_1046 = 5;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_1035[iParam0] != 10 && iLocal_1035[iParam0] != 11) && iLocal_1035[iParam0] != 7)
	{
		iLocal_1035[iParam0] = 10;
	}
	func_111(iVar0, uLocal_1123[iParam0]);
}

int func_137(int iParam0)//Position - 0x6716
{
	int iVar0;
	
	if (!iLocal_1136)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				}
				else
				{
					iVar0 = 0;
				}
			}
			if (func_118(iParam0, iVar0, &Local_358, &iLocal_369, 0, 0, 0, 1, 1) || (PED::IS_PED_RAGDOLL(iParam0) && func_29(iParam0, 1) < 1.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_138()//Position - 0x678A
{
	int iVar0;
	int iVar1[10];
	
	iLocal_1214 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &iVar1);
	iLocal_1214 = iLocal_1214;
	iLocal_1214 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iVar1[iVar0], false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1[iVar0], -1218.8435f, -278.623f, 36.819595f, -1248.4033f, -225.84673f, 43.15606f, 8.5f, false, true, 0))
			{
				iLocal_1213++;
			}
		}
		iVar0++;
	}
	if (iLocal_1213 >= 1)
	{
		iLocal_1165 = 1;
		return 1;
	}
	return 0;
}

int func_139(int iParam0)//Position - 0x682F
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

int func_140()//Position - 0x6850
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_1048))
		{
			if (!iLocal_1136)
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_1048, iLocal_1314, false) && func_141())
				{
					return 1;
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iLocal_1048, iLocal_1314, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_141()//Position - 0x68A6
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_1049[iVar0]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1049[iVar0], false))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_142(int iParam0)//Position - 0x68E7
{
	switch (iLocal_1210)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, false);
				}
				func_34(iParam0, 3, "OJAvaGUARD");
				func_6(&uLocal_1366, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				iLocal_1140 = 1;
				iLocal_1210 = 1;
			}
			break;
		
		case 1:
			func_143(iParam0);
			break;
	}
}

void func_143(int iParam0)//Position - 0x695B
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_29(iParam0, 1) < 5f)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iLocal_1047, -1, false);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 1)
		{
			if (iParam0 == iLocal_1059)
			{
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_1047, iLocal_1047, 1f, false, -1f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iLocal_1047, -1, false);
			}
		}
	}
}

void func_144(int iParam0, var uParam1, bool bParam2)//Position - 0x69F8
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (bParam2)
		{
			func_145(iParam0, uParam1);
		}
	}
}

void func_145(int iParam0, var uParam1)//Position - 0x6A17
{
	int iVar0;
	
	iVar0 = func_146(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), true, false, false);
	}
	else if (iVar0 == 1)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), true, false, false);
	}
	else if (iVar0 == 2)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), true, false, false);
	}
	else if (iVar0 == 3)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), true, false, false);
	}
	*uParam1 = iVar0;
}

int func_146(int iParam0, int iParam1, int iParam2)//Position - 0x6AEC
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	}
	return iVar0;
}

void func_147(int iParam0)//Position - 0x6B34
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1049[iParam0]))
	{
		return;
	}
	switch (iLocal_1043[iParam0])
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1048, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1048, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_1049[iParam0]))
					{
						if (iParam0 == 0)
						{
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_1049[iParam0], iLocal_1048, 1.5f, 0f, 0f, 1f, -1, 0.1f, true);
						}
						else if (iParam0 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1315, false))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar2);
								TASK::TASK_GO_TO_COORD_ANY_MEANS(0, -1222.9921f, -191.09319f, 38.17538f, 1f, 0, false, 786603, -1f);
								TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_GUARD_STAND", 0, false);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_1315, 30000, 2, 1f, 1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar2);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_1049[iParam0], iVar2);
								TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							}
						}
						iLocal_1043[iParam0] = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1314;
				iVar1 = 2;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1315;
				iVar1 = 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1049[iParam0], false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1049[iParam0], false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_1049[iParam0], iVar0, false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1048, false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1049[iParam0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_1049[iParam0], iVar0, 30000, iVar1, 1f, 1, 0, 0);
								}
							}
						}
						else
						{
							iLocal_1043[iParam0] = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1314;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1315;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1049[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_1049[iParam0], iVar0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
					{
						if (iLocal_1136)
						{
							if (!bLocal_1166)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1049[iParam0], joaat("SCRIPT_TASK_COMBAT")) != 1)
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar0) < 5f)
										{
											iLocal_1043[iParam0] = 5;
										}
									}
									TASK::TASK_COMBAT_PED(iLocal_1049[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1049[iParam0], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(iLocal_1049[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
					else if (!iLocal_1160)
					{
						iLocal_1043[iParam0] = 5;
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_1049[iParam0]))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_1049[iParam0]))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_1049[iParam0]);
				}
			}
			if (bLocal_1161)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1326);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_LOOK_AT_COORD(0, func_128(), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 2048, 4);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000), 30f, 1f, 2f, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_128(), 1f, false, 0.5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1326);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1049[iParam0], iLocal_1326);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1326);
			}
			else if (!PED::IS_PED_INJURED(iLocal_1049[iParam0]))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1049[iParam0], Local_1307, 15f, false, false);
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_1049[iParam0], 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1049[iParam0], 0, true);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1049[iParam0], 2f);
				if (!iLocal_1133 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_1049[iParam0], false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1326);
					if (PED::IS_PED_INJURED(iLocal_1048))
					{
						TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0f, false, false, false);
						TASK::TASK_AIM_GUN_AT_COORD(0, func_128(), 3000, false, true);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0f, false, false, false);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_1048, 1.5f, 0f, 0f, 2f, -1, 0.1f, true);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1326);
					iLocal_1133 = 1;
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1314) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
					{
						Var4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_1314, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1314, "wheel_lr")) };
						Var7 = { ENTITY::GET_ENTITY_COORDS(iLocal_1314, true) };
						Var7 = { Var4 - Var7 };
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_1049[iParam0], iLocal_1314, Var7, 1.5f, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1326);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					if (PED::IS_PED_INJURED(iLocal_1048) && !func_50(func_148(), Var4, 0))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Var4, func_128(), 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Var4, -1, false, 0.25f, false, false, 0, true);
					}
					else
					{
						TASK::TASK_AIM_GUN_AT_COORD(0, func_128(), 1500, true, false);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1048, false))
						{
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_1048, 0f, -1.5f, 0f, 2f, -1, 0.1f, true);
						}
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1326);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1049[iParam0], false))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1049[iParam0], iLocal_1326);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1326);
			}
			iLocal_1043[iParam0] = 4;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1049[iParam0], false))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1049[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1049[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0.5f)
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_1049[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
					}
					else
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_1049[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1314;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1315;
			}
			if (!PED::IS_PED_INJURED(iLocal_1048))
			{
				if (!PED::IS_PED_INJURED(iLocal_1049[iParam0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1048, false))
					{
						TASK::TASK_COMBAT_PED(iLocal_1049[iParam0], iLocal_1047, 0, 16);
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_1049[iParam0], iLocal_1048, PLAYER::PLAYER_PED_ID(), 3f, true, 0.005f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
				}
				iLocal_1043[iParam0] = 6;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iVar0) < 5f)
				{
					func_127(iLocal_1049[iParam0]);
					iLocal_1043[iParam0] = 6;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1049[iParam0], joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					TASK::TASK_COMBAT_PED(iLocal_1049[iParam0], iLocal_1047, 0, 16);
				}
			}
			else
			{
				func_127(iLocal_1049[iParam0]);
				iLocal_1043[iParam0] = 6;
			}
			break;
		
		case 6:
			func_2(iLocal_1049[iParam0]);
			func_100(iLocal_1049[iParam0]);
			break;
	}
	if (!iLocal_1136)
	{
		if (iLocal_1160)
		{
			if (iLocal_1043[iParam0] != 3 && iLocal_1043[iParam0] != 4)
			{
				iLocal_1043[iParam0] = 3;
			}
		}
		else if (func_137(iLocal_1049[iParam0]))
		{
			iLocal_1136 = 1;
		}
	}
	else if (iLocal_1043[iParam0] < 5)
	{
		if (!PED::IS_PED_INJURED(iLocal_1049[iParam0]))
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_1049[iParam0]))
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_1049[iParam0]);
			}
			TASK::TASK_CLEAR_DEFENSIVE_AREA(iLocal_1049[iParam0]);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_1049[iParam0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1049[iParam0], 13, true);
		}
		iLocal_1043[iParam0] = 5;
	}
}

Vector3 func_148()//Position - 0x72BC
{
	struct<3> Var0;
	
	return Var0;
}

int func_149(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)//Position - 0x72C8
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

void func_150()//Position - 0x74BC
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1048))
	{
		Local_1307 = { ENTITY::GET_ENTITY_COORDS(iLocal_1048, false) };
	}
	switch (iLocal_1042)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1048, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_1052[0], false))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_1048, iLocal_1314, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1048, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
						{
							if (!iLocal_1136 && !iLocal_1160)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_1048, iLocal_1314, 30000, 1, 1f, 1, 0, 0);
							}
							else
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_1048, iLocal_1314, 30000, 1, 2f, 1, 0, 0);
							}
							if (!func_58(&iLocal_1344))
							{
								func_55(&iLocal_1344);
							}
							else
							{
								func_56(&iLocal_1344);
							}
						}
						if (!iLocal_1162)
						{
							if (func_58(&iLocal_1344))
							{
								if (func_52(&iLocal_1344) > 3.5f)
								{
									if (!PED::IS_PED_INJURED(iLocal_1048))
									{
										func_35(&uLocal_1366, 4, iLocal_1048, "OJAva_TARGET", 0, 1);
										if (func_6(&uLocal_1366, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
										{
											iLocal_1162 = 1;
										}
									}
								}
							}
						}
						if (func_153(iLocal_1048))
						{
							func_3();
							iLocal_1042 = 4;
						}
					}
					else
					{
						bLocal_1139 = true;
						iLocal_1042 = 1;
					}
				}
				else
				{
					iLocal_1042 = 4;
				}
			}
			break;
		
		case 1:
			if (!iLocal_1162)
			{
				if (!PED::IS_PED_INJURED(iLocal_1048))
				{
					func_35(&uLocal_1366, 4, iLocal_1048, "OJAva_TARGET", 0, 1);
					if (func_6(&uLocal_1366, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
					{
						iLocal_1162 = 1;
					}
				}
			}
			if (!iLocal_1181)
			{
				if (func_152())
				{
					if (func_30(iLocal_1048, PLAYER::PLAYER_PED_ID(), 1) <= 5f && !func_28())
					{
						if (func_36(25f, 1) == 0)
						{
							if (func_151())
							{
								iLocal_1181 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1048, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_1048, iLocal_1314, false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1048, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_1048, 0, 256);
					}
				}
				else if (!bLocal_1166)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1048, 2f);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0f, false, false, false);
					TASK::TASK_SMART_FLEE_PED(0, iLocal_1047, 200f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1048, false))
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_1048, iVar0);
					}
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					bLocal_1166 = true;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1048, joaat("SCRIPT_TASK_ANY")) != 1)
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_1048, iLocal_1047, 200f, -1, false, false);
				}
				if (!iLocal_1181)
				{
					if (!func_28() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_6(&uLocal_1366, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
						iLocal_1181 = 1;
					}
				}
			}
			break;
	}
	if (!iLocal_1136)
	{
		if (iLocal_1160)
		{
		}
		else if (func_137(iLocal_1048) || iLocal_1190)
		{
			iVar1 = func_36(1116471296, 1);
			if (iVar1 != 0)
			{
				func_116(ENTITY::GET_ENTITY_COORDS(iVar1, true), 1097859072, 1116471296);
			}
			if (!func_115())
			{
				iLocal_1136 = 1;
			}
		}
	}
}

int func_151()//Position - 0x77E5
{
	switch (iLocal_1216)
	{
		case 0:
			if (!func_28())
			{
				func_33(&uLocal_1366, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
				func_56(&iLocal_1344);
				iLocal_1216++;
			}
			break;
		
		case 1:
			if (!func_28() && func_52(&iLocal_1344) > 7f)
			{
				func_33(&uLocal_1366, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
				func_56(&iLocal_1344);
				iLocal_1216++;
			}
			break;
		
		case 2:
			if (!func_28() && func_52(&iLocal_1344) > 8f)
			{
				func_33(&uLocal_1366, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_152()//Position - 0x78B0
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1314, -1, false);
		if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1314, 0, false);
			if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1314, 2, false);
				if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_153(int iParam0)//Position - 0x793D
{
	int iVar0;
	
	if ((iLocal_1136 || iLocal_1160) || bLocal_1161)
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (func_28())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				if (!bLocal_1166)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0f, false, false, false);
					TASK::TASK_SMART_FLEE_PED(0, iLocal_1047, 200f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1048, false))
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_1048, iVar0);
					}
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					bLocal_1166 = true;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_154()//Position - 0x79EE
{
	if (!iLocal_1167)
	{
		if (iLocal_1033 > 15)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("ASS1_ALERT");
			iLocal_1167 = 1;
		}
	}
	if (!iLocal_1168)
	{
		if (iLocal_1136 && !func_28())
		{
			func_463();
			iLocal_1168 = 1;
			if (!iLocal_1167)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("ASS1_ALERT");
				iLocal_1167 = 1;
			}
		}
	}
	func_462();
	switch (iLocal_1033)
	{
		case 3:
			if (func_549())
			{
				iLocal_1033 = 4;
				break;
			}
			func_461();
			func_459();
			break;
		
		case 4:
			if (func_549())
			{
				if (func_548())
				{
					iLocal_1155 = 1;
				}
				bLocal_1144 = true;
			}
			func_458();
			func_457();
			func_456();
			func_455(1);
			func_454();
			func_557(&Local_358, 2);
			iLocal_1033 = 5;
			break;
		
		case 5:
			if (func_453())
			{
				iLocal_1033 = 6;
			}
			break;
		
		case 6:
			func_452();
			func_451();
			if (bLocal_1144)
			{
				if (Global_113969.f_19966.f_5 != 0f)
				{
					func_57(&iLocal_1338, Global_113969.f_19966.f_5);
				}
				iLocal_1211 = func_543();
				if (Global_95690)
				{
					if (iLocal_1211 <= 2)
					{
						iLocal_1211++;
					}
				}
				if (iLocal_1211 == 0)
				{
					func_450();
				}
				else if (iLocal_1211 == 1)
				{
					func_449();
				}
				else if (iLocal_1211 == 2)
				{
					func_445();
				}
			}
			else
			{
				if (!func_58(&iLocal_1338))
				{
					func_55(&iLocal_1338);
					Global_113969.f_19966.f_5 = 0f;
				}
				iLocal_1033 = 7;
			}
			break;
		
		case 7:
			func_439();
			func_424();
			break;
		
		case 8:
			func_389();
			break;
		
		case 9:
			func_439();
			func_388();
			func_290();
			break;
		
		case 10:
			func_388();
			func_286();
			break;
		
		case 11:
			func_272();
			func_271();
			break;
		
		case 12:
			func_270();
			func_271();
			break;
		
		case 13:
			func_266();
			func_271();
			break;
		
		case 15:
			func_264();
			break;
		
		case 16:
			func_261();
			break;
		
		case 17:
			func_255();
			break;
		
		case 18:
			func_155();
			break;
	}
}

void func_155()//Position - 0x7C0E
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_156();
}

void func_156()//Position - 0x7C22
{
	func_254();
	switch (iLocal_1217)
	{
		case 0:
			if (!iLocal_375)
			{
				if (iLocal_1034 == 1)
				{
					bLocal_373 = true;
					func_253();
				}
				Global_113969.f_19966.f_5 = func_52(&iLocal_1338);
				fLocal_370 = Global_113969.f_19966.f_5;
				func_246();
				iLocal_375 = 1;
				iLocal_1217 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1189)
			{
				AUDIO::PLAY_MISSION_COMPLETE_AUDIO("FRANKLIN_BIG_01");
				iLocal_1189 = 1;
			}
			if (func_242(&uLocal_386, 1, 0) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
			{
				func_241(&uLocal_1543, 0, 0, 0, 1);
				func_240(&uLocal_1543, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				func_240(&uLocal_1543, "ES_XPAND" /* GXT: Expand */, 2, 216, 1, 1, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_1217 = 2;
			}
			break;
		
		case 2:
			if (func_210(&uLocal_386, 0, 1065353216, 0, 0, 0))
			{
				bLocal_1187 = true;
			}
			if (!bLocal_1187)
			{
				func_202(&uLocal_1543, 1128792064, 1, 0, 1, 1065353216);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/))
			{
				if (!bLocal_1187)
				{
					bLocal_1187 = true;
					func_201(&uLocal_386);
				}
			}
			if (bLocal_1187)
			{
				if (func_210(&uLocal_386, 0, 1065353216, 0, 0, 0))
				{
					func_199(&uLocal_386, 0);
					Global_113969.f_19966++;
					func_198();
					func_161(Local_55);
					func_159(0, 0);
					func_157();
					func_550();
				}
			}
			break;
	}
}

void func_157()//Position - 0x7D96
{
	func_158();
}

int func_158()//Position - 0x7DA3
{
	if (func_46(0))
	{
		return 0;
	}
	if (Global_101572.f_8)
	{
		if (Global_101572.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101572.f_10 > 1)
	{
		return 0;
	}
	Global_101572.f_10++;
	return 1;
}

void func_159(bool bParam0, int iParam1)//Position - 0x7DEE
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_64168)
	{
		Global_64168 = iParam1;
	}
	if (bParam0)
	{
		if ((func_46(0) && Global_79636.f_1 == 1) && func_160(Global_79636))
		{
		}
		else
		{
			Global_64166 = 1;
		}
	}
	if (Global_113969.f_9088 || func_46(0))
	{
		iVar0 = func_45();
		iVar1 = Global_92265[iVar0 /*5*/];
		uVar2 = Global_79660.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113969.f_9088)
			{
			}
			return;
		}
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_92265[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_79638, 1);
		Global_79654 = uVar2;
		Global_79655 = MISC::GET_GAME_TIMER();
	}
}

int func_160(int iParam0)//Position - 0x7EBE
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

void func_161(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38)//Position - 0x7EFC
{
	float fVar0;
	
	fVar0 = (1f + func_197());
	fVar0 = (fVar0 * Param0.f_23);
	if (func_124(Global_113969.f_19966.f_1, 4194304))
	{
		fVar0 = (fVar0 + Param0.f_24);
	}
	func_162(func_18(), 97, SYSTEM::ROUND(fVar0), 0, 0);
}

void func_162(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7F47
{
	int iVar0;
	int iVar1;
	
	if (func_196(iParam0) == 3)
	{
		return;
	}
	if (func_196(iParam0) == 4)
	{
		return;
	}
	func_163(func_196(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
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
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
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

int func_163(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x801A
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_195();
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
					func_194(99, 1);
					func_193(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_193(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_193(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_178(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_175(5))
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
							func_193(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_193(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_193(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_175(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_193(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_193(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_193(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_193(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_193(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_193(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_193(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_193(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_193(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_193(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_193(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_193(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_193(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_193(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_193(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_175(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_193(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_193(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_193(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_193(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_193(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_193(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_174(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_194(95, iParam3);
					break;
				
				case 1:
					func_194(97, iParam3);
					break;
				
				case 2:
					func_194(96, iParam3);
					break;
			}
			func_194(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_166(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_166(bVar1);
	}
	iVar5 = (Global_61340[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61340[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61340[iVar2] = 2147483647;
				}
				else
				{
					Global_61340[iVar2] = (Global_61340[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_193(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_193(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_193(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61340[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61340[iVar2];
			Global_61340[iVar2] = (Global_61340[iVar2] - iParam3);
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
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113969.f_20567.f_233[iVar2 /*69*/]++;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_165(iParam0);
	if (Global_44042 == 15)
	{
		func_164(0);
	}
	return 1;
}

void func_164(bool bParam0)//Position - 0x8619
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
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61348[iVar0 /*3*/][0] = Global_113969.f_20567[iVar0];
		Global_61348.f_31[iVar0 /*3*/][0] = Global_113969.f_20567.f_11[iVar0];
		Global_61348.f_62[iVar0 /*3*/][0] = Global_113969.f_20567.f_22[iVar0];
		Global_61348.f_93[iVar0 /*3*/][0] = Global_113969.f_20567.f_33[iVar0];
		Global_61348.f_124[iVar0 /*3*/][0] = Global_113969.f_20567.f_44[iVar0];
		Global_61348.f_155[iVar0 /*3*/][0] = Global_113969.f_20567.f_55[iVar0];
		Global_61348.f_186[iVar0 /*3*/][0] = Global_113969.f_20567.f_66[iVar0];
		Global_61348.f_217[iVar0 /*3*/][0] = Global_113969.f_20567.f_77[iVar0];
		Global_61348.f_248[iVar0 /*3*/][0] = Global_113969.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61348[iVar0 /*3*/][1] = Global_113969.f_20567[iVar0];
			Global_61348.f_31[iVar0 /*3*/][1] = Global_113969.f_20567.f_11[iVar0];
			Global_61348.f_62[iVar0 /*3*/][1] = Global_113969.f_20567.f_22[iVar0];
			Global_61348.f_93[iVar0 /*3*/][1] = Global_113969.f_20567.f_33[iVar0];
			Global_61348.f_124[iVar0 /*3*/][1] = Global_113969.f_20567.f_44[iVar0];
			Global_61348.f_155[iVar0 /*3*/][1] = Global_113969.f_20567.f_55[iVar0];
			Global_61348.f_186[iVar0 /*3*/][1] = Global_113969.f_20567.f_66[iVar0];
			Global_61348.f_217[iVar0 /*3*/][1] = Global_113969.f_20567.f_77[iVar0];
			Global_61348.f_248[iVar0 /*3*/][1] = Global_113969.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_165(int iParam0)//Position - 0x889B
{
	int iVar0;
	
	iVar0 = Global_61340[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, true);
			break;
	}
}

void func_166(bool bParam0)//Position - 0x88F5
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_173(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_173(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_173(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_173(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_169(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_169(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_169(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_169(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_169(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_169(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113969.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_168() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_168() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_167(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_167(bool bParam0)//Position - 0x8A6E
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC" /* GXT: one free haircut. */;
		
		case 1:
			return "COUP_TATTOO" /* GXT: one free tattoo. */;
		
		case 2:
			return "COUP_WARSTOCK" /* GXT: 10% off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 3:
			return "COUP_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 4:
			return "COUP_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 5:
			return "COUP_MEDSPENS" /* GXT: 10 percent off your next medical expenses. */;
		
		case 6:
			return "COUP_SPRUNK" /* GXT: one free can of Sprunk. */;
		
		case 7:
			return "COUP_RESPRAY" /* GXT: one free respray. */;
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 13:
			return "COUP_CAS_DOCKTEASE" /* GXT: 10 percent off your next purchase at DockTease.com. */;
		
		case 14:
			return "COUP_CAS_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 15:
			return "COUP_CAS_SSASA" /* GXT: 10 percent off your next purchase at southernsanandreassuperautos.com. */;
		
		case 16:
			return "COUP_CAS_WARSTOCK" /* GXT: 10 percent off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 17:
			return "COUP_CAS_PANDM" /* GXT: 10 percent off your next purchase at pandmcycles.com. */;
			break;
		
		default:
			break;
	}
	return "";
}

int func_168()//Position - 0x8B70
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_169(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8B7D
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_170(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_170(int iParam0, var uParam1)//Position - 0x8BAB
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_171(uParam1));
}

int func_171(var uParam0)//Position - 0x8BC0
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_172();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_172()//Position - 0x8BF4
{
	return Global_1574926;
}

void func_173(int iParam0, bool bParam1, int iParam2)//Position - 0x8C00
{
	if (iParam2 == -1)
	{
		iParam2 = func_172();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_174(int iParam0)//Position - 0x8C1E
{
	func_194(93, iParam0);
	func_194(29, iParam0);
	func_194(30, iParam0);
}

int func_175(int iParam0)//Position - 0x8C3E
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
		return func_177(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_177(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_177(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_177(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_176(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_176(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_176(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_176(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_176(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_176(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113969.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_168() /*5570*/].f_681.f_10, iParam0);
}

int func_176(int iParam0, int iParam1)//Position - 0x8DDE
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_170(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_177(int iParam0, int iParam1)//Position - 0x8E0D
{
	if (iParam1 == -1)
	{
		iParam1 = func_172();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_178(bool bParam0)//Position - 0x8E29
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		func_192(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_179(27, 1);
	return 1;
}

int func_179(int iParam0, int iParam1)//Position - 0x8EE0
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_180(iParam0, iParam1);
}

int func_180(int iParam0, int iParam1)//Position - 0x8EFB
{
	if (func_24(14) && !func_191(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33199 != 0 && !Global_79389)
	{
		return 0;
	}
	if (func_190(&Global_4543384))
	{
		if (func_188(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_181(&Global_4543384, iParam0))
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

int func_181(var uParam0, int iParam1)//Position - 0x8F98
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_191(iParam1))
	{
		return 0;
	}
	if (func_188(uParam0, iParam1))
	{
		return 0;
	}
	if (func_187(uParam0) < 0f)
	{
		func_186(uParam0, 0);
	}
	func_184(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_182(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_182(var uParam0, int iParam1)//Position - 0x9049
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_191(iParam1))
	{
		return 0;
	}
	if (func_188(uParam0, iParam1))
	{
		return 0;
	}
	if (func_187(uParam0) < 0f)
	{
		func_186(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_183(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_183(var uParam0, int iParam1)//Position - 0x90C4
{
	return (*uParam0)[iParam1] == 78;
}

void func_184(var uParam0)//Position - 0x90D5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_185(uParam0, iVar0);
		iVar0++;
	}
	func_186(uParam0, (Global_4543383 - 0.5f));
}

void func_185(var uParam0, int iParam1)//Position - 0x9109
{
	(*uParam0)[iParam1] = 78;
}

void func_186(var uParam0, float fParam1)//Position - 0x9119
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

float func_187(var uParam0)//Position - 0x9136
{
	return uParam0->f_80;
}

bool func_188(var uParam0, int iParam1)//Position - 0x9142
{
	return func_189(uParam0, iParam1) != -1;
}

int func_189(var uParam0, int iParam1)//Position - 0x9154
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

bool func_190(var uParam0)//Position - 0x9181
{
	return uParam0->f_79 == 1;
}

int func_191(int iParam0)//Position - 0x918F
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

int func_192(int iParam0, int iParam1)//Position - 0x91DF
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

void func_193(int iParam0, int iParam1)//Position - 0x9230
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_194(int iParam0, int iParam1)//Position - 0x9253
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59908[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59908[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_195()//Position - 0x92B0
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61340[0] == iVar0)
		{
			Global_61340[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61340[1] == iVar0)
		{
			Global_61340[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61340[2] == iVar0)
		{
			Global_61340[2] = iVar0;
		}
	}
}

int func_196(int iParam0)//Position - 0x9325
{
	return Global_2169[iParam0 /*29*/].f_17;
}

float func_197()//Position - 0x9336
{
	float fVar0;
	
	fVar0 = 0f;
	if (func_124(Global_113969.f_19966.f_1, 8192))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_124(Global_113969.f_19966.f_1, 16384))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_124(Global_113969.f_19966.f_1, 32768))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_124(Global_113969.f_19966.f_1, 65536))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_124(Global_113969.f_19966.f_1, 131072))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_124(Global_113969.f_19966.f_1, 262144))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_124(Global_113969.f_19966.f_1, 524288))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_124(Global_113969.f_19966.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_124(Global_113969.f_19966.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	return fVar0;
}

void func_198()//Position - 0x944F
{
	func_557(&(Global_113969.f_19966.f_1), 2048);
}

void func_199(var uParam0, int iParam1)//Position - 0x9467
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
	if (!Global_79658)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_79660)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_46(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_200(0);
}

void func_200(int iParam0)//Position - 0x9516
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

void func_201(var uParam0)//Position - 0x952A
{
	if (uParam0->f_565 || uParam0->f_576 <= uParam0->f_562)
	{
		uParam0->f_565 = 0;
		uParam0->f_562 = (uParam0->f_576 - 1);
	}
}

void func_202(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x955D
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
	if (!func_209(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_208(uParam0->f_1, 256) || (func_208(uParam0->f_1, 8192) && PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/)))
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
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_208(uParam0->f_1, 4096));
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
					bVar4 = PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/);
					break;
				
				case 2:
					bVar4 = !PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/);
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
							sVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_207(sVar3);
						}
						bVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_206(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_208(uParam0->f_1, 4096))
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
		fVar8 = func_205(bParam4, func_205(func_208(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_204(&(uParam0->f_1), 256);
		func_203(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_203(var uParam0, int iParam1)//Position - 0x9817
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_204(var uParam0, int iParam1)//Position - 0x982C
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_205(bool bParam0, float fParam1, float fParam2)//Position - 0x983D
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_206(char* sParam0)//Position - 0x9854
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_207(char* sParam0)//Position - 0x9866
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_208(var uParam0, int iParam1)//Position - 0x9874
{
	return (uParam0 && iParam1) != 0;
}

int func_209(var uParam0)//Position - 0x9883
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_204(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_210(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x98AA
{
	bool bVar0;
	
	if (MISC::GET_FRAME_COUNT() == uParam0->f_578)
	{
		return uParam0->f_579;
	}
	uParam0->f_578 = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), true))
		{
			uParam0->f_579 = 1;
			return 1;
		}
		if (TASK::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_579 = 1;
			return 1;
		}
	}
	if (!uParam0->f_568)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			uParam0->f_568 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 29 /*INPUT_SPECIAL_ABILITY_SECONDARY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 171 /*INPUT_SPECIAL_ABILITY_PC*/, true);
	func_235(0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PLAYER::GET_ARE_CAMERA_CONTROLS_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::SET_MOUSE_CURSOR_THIS_FRAME();
		}
	}
	Global_44592 = 1;
	if (!uParam0->f_567)
	{
		switch (func_21(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, false);
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, false);
				break;
			
			default:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, false);
				break;
		}
		uParam0->f_567 = 1;
	}
	if (uParam0->f_562 == 0)
	{
		uParam0->f_562 = (uParam0->f_576 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_576 >= (uParam0->f_562 - 1500))
	{
		uParam0->f_562 = uParam0->f_576 + 3000;
	}
	if (uParam0->f_564 == 0f)
	{
		uParam0->f_564 = (uParam0->f_564 + func_234(30f));
		uParam0->f_564 = (uParam0->f_564 + (IntToFloat(uParam0->f_56) * func_234(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_564 = (uParam0->f_564 + func_234((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_564 = (uParam0->f_564 + (func_234(30f) - func_234(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_200(1);
		uParam0->f_576 = (uParam0->f_576 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_213(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_212(uParam0->f_30, 0f, 1f);
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_569)
				{
					uParam0->f_569 = 0;
					uParam0->f_570 = 0;
					uParam0->f_577 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_212(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_546 = uParam0->f_576;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_212(uParam0->f_548, 0f, 1f);
		if (uParam0->f_566)
		{
			if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_571)
					{
						func_211(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/) && uParam0->f_562 > uParam0->f_576 + 333)
		{
			if (((!uParam0->f_570 && uParam0->f_56 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_569)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					if (uParam0->f_576 > (uParam0->f_562 - 5000))
					{
						uParam0->f_562 = uParam0->f_576 + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_569 = 0;
					uParam0->f_577 = 0.75f;
				}
				func_211(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_569 || uParam0->f_570) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_570 && !uParam0->f_569)
				{
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_563 = func_212((uParam0->f_563 + (((1f / 0.3f) * uParam0->f_577) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_577 = func_212((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_563 = func_212((uParam0->f_563 - ((((1f / 0.3f) * uParam0->f_577) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_577 = func_212((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_576 > uParam0->f_562)
		{
			if (uParam0->f_565)
			{
				if (!uParam0->f_571)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/))
					{
						uParam0->f_565 = 0;
					}
				}
			}
			else if ((uParam0->f_576 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_579 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_200(0);
			}
			return !bVar0;
		}
	}
	func_200(0);
	return 1;
}

void func_211(var uParam0, bool bParam1)//Position - 0x9F05
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/, true));
	func_206("ES_HELP" /* GXT: Continue */);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(215);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/, true));
		func_206("ES_XPAND" /* GXT: Expand */);
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(216);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_212(float fParam0, float fParam1, float fParam2)//Position - 0x9FC9
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

void func_213(var uParam0, float fParam1, bool bParam2)//Position - 0x9FF0
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_233() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_206(&(uParam0->f_5));
				if (uParam0->f_560 == 4)
				{
					func_232(&(uParam0->f_13));
				}
				else
				{
					func_206(&(uParam0->f_13));
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(150);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				if (uParam0->f_560 == 4)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((uParam0->f_56 - 1));
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_56);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
				if (uParam0->f_560 == 4 || uParam0->f_560 == 3)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_576 > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		func_231();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_564 * uParam0->f_563) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_571)
	{
		fVar3 = (((0.13888888f + func_234((2f * 2f))) * uParam0->f_572) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_233());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_560 != 4)
	{
		fVar7 = func_230(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (GRAPHICS::GET_ASPECT_RATIO(false) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_554)))
		{
			fVar7 = func_229(&(uParam0->f_550), &(uParam0->f_554));
		}
		else
		{
			fVar7 = func_230(&(uParam0->f_550));
		}
		fVar8 = (((0.119f + 0.05f) / func_233()) / 2.5f);
		if ((uParam0->f_560 == 1 || uParam0->f_560 == 0) && uParam0->f_561 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_560 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	if (uParam0->f_566 || uParam0->f_571)
	{
		if ((IntToFloat(uParam0->f_562) - (14000f * fParam1)) < IntToFloat(uParam0->f_576) || ((uParam0->f_571 && uParam0->f_563 > 0.95f) && (uParam0->f_562 - 10000) < uParam0->f_576))
		{
			if (uParam0->f_571)
			{
				if (uParam0->f_574 < 0)
				{
					uParam0->f_574 = (uParam0->f_574 * -1);
					uParam0->f_574 = (uParam0->f_576 + uParam0->f_574);
				}
				if (uParam0->f_574 > 0)
				{
					if ((uParam0->f_574 - uParam0->f_576) > 0)
					{
						func_94((uParam0->f_574 - uParam0->f_576), "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_574 = 0;
						uParam0->f_573 = 1;
						uParam0->f_571 = 0;
						uParam0->f_565 = 0;
						uParam0->f_566 = 0;
						uParam0->f_562 = uParam0->f_576 + 500;
						uParam0->f_574 = 0;
					}
				}
				if (uParam0->f_572 < 1f)
				{
					uParam0->f_572 = (uParam0->f_572 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_572 > 1f)
					{
						uParam0->f_572 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_576 <= uParam0->f_562)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_571)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 3;
					uParam0->f_574 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 4;
					uParam0->f_574 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 2;
					uParam0->f_574 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
			else if (uParam0->f_566)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_566 = 0;
					uParam0->f_565 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &iVar13, &iVar14, &iVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_234(6f));
	fVar1 = (fVar1 + (func_234(30f) - func_234((2f * 2f))));
	fVar11 = (fVar2 - func_234((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_212((fVar11 / (0.6f * func_234(25f))), 0f, 1f);
		func_231();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_234((2f - 0.5f)) - 0.0013888889f)), fVar6, func_228(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), false);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_234((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_234((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_233())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_212((fVar11 / (0.8f * func_234(25f))), 0f, 1f);
			func_225(uParam0, iVar17, (fVar1 + func_234(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_234(25f));
		if (uParam0->f_560 == 4)
		{
			if (iVar17 == (uParam0->f_580 - 1))
			{
				fVar1 = (fVar1 + func_234((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_233())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_234(2f));
					fVar12 = func_212((fVar11 / (0.6f * func_234(25f))), 0f, 1f);
					func_231();
					GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_234((2f * 0.5f))), fVar6, func_228(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), false);
					fVar1 = (fVar1 + func_234((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_234((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_560 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_234((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_233())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_234(2f));
			fVar12 = func_212((fVar11 / (0.6f * func_234(25f))), 0f, 1f);
			func_231();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_234((2f * 0.5f))), fVar6, func_228(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), false);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_234((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_233())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_212((fVar11 / (0.8f * func_234(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_217(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_233()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_233()) / 2.5f));
				if (uParam0->f_560 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_233()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_233()) / 2.5f));
				}
			}
			if (uParam0->f_561 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_560 != 3)
			{
				HUD::SET_TEXT_WRAP(fVar20, fVar21);
				HUD::SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				fVar20 = 0.5f;
				HUD::SET_TEXT_JUSTIFICATION(0);
			}
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_554)))
			{
				func_216(&(uParam0->f_550), fVar20, (fVar1 + func_234((2f * 2f))), 0, 0, 0);
			}
			else
			{
				func_215(&(uParam0->f_550), &(uParam0->f_554), fVar20, (fVar1 + func_234((2f * 2f))), 0, 0);
			}
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(false);
			func_231();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_560)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE" /* GXT: ~1~% */);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_558);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_234((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM" /* GXT: ~1~/~1~ */);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_558);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_559);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_234((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO" /* GXT: ~1~RP */);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_558);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_234((2f * 2f))), 0);
					break;
				
				case 5:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA" /* GXT: $~a~ */);
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_558, true);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_234((2f * 2f))), 0);
					break;
			}
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar23, false);
			if (uParam0->f_561 != 0 && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar23))
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_561)
				{
					case 1:
						HUD::GET_HUD_COLOUR(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						HUD::GET_HUD_COLOUR(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.0013888889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.0013888889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_214(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_234(10f)) + fVar39);
				if (uParam0->f_560 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), false, 0);
			}
			fVar1 = (fVar1 + (func_234(30f) - 2f));
		}
	}
}

float func_214(float fParam0)//Position - 0xACE0
{
	return (fParam0 * 0.00078125f);
}

void func_215(char* sParam0, char* sParam1, float fParam2, float fParam3, bool bParam4, int iParam5)//Position - 0xACF0
{
	HUD::SET_TEXT_CENTRE(bParam4);
	HUD::SET_TEXT_FONT(iParam5);
	func_231();
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
}

void func_216(char* sParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0xAD1D
{
	HUD::SET_TEXT_CENTRE(bParam3);
	HUD::SET_TEXT_FONT(iParam5);
	func_231();
	if (bParam4)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_217(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xAD5A
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_224(iParam0), 64);
	StringCopy(&cVar16, func_221(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_219(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_218(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23831.f_7680[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23830)
			{
				*fParam4 = (*fParam4 * (Global_23830 / *fParam3));
				*fParam3 = Global_23830;
			}
		}
		return 1;
	}
	return 0;
}

float func_218(int iParam0)//Position - 0xAE86
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0.5f;
			break;
		
		case 64:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_219(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0xAF5A
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (func_220(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = SYSTEM::ROUND((fVar1 * fVar2));
		*iParam2 = SYSTEM::ROUND(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = SYSTEM::ROUND((fVar0 / *fParam3));
	*iParam2 = SYSTEM::ROUND((fVar1 / *fParam3));
}

bool func_220(int iParam0, int iParam1)//Position - 0xAFE2
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

var func_221(int iParam0, bool bParam1)//Position - 0xAFFD
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_7680[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23831.f_7680[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_223(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_222(&uVar3);
			}
		}
		else
		{
			return func_222(&(Global_23831.f_7680[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 54:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 55:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 57:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 58:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 64:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_222(var uParam0)//Position - 0xB525
{
	return uParam0;
}

struct<13> func_223(int iParam0)//Position - 0xB52F
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_224(int iParam0)//Position - 0xB546
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_6623[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23831.f_6623[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_223(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_222(&uVar0);
		}
		else
		{
			return func_222(&(Global_23831.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 54)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_225(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0xB5BB
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	HUD::SET_TEXT_WRAP(fParam3, fParam4);
	HUD::SET_TEXT_JUSTIFICATION(1);
	HUD::SET_TEXT_SCALE(1f, func_227(14f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_FONT(0);
	func_231();
	if (uParam0->f_531[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_217(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_221(7, 0), (fParam4 - 0.006f), ((fParam2 + func_234(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, false, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_217(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_221(5, 0), (fParam4 - 0.006f), ((fParam2 + func_234(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, false, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_217(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_221(6, 0), (fParam4 - 0.006f), ((fParam2 + func_234(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, false, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		HUD::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		HUD::SET_TEXT_JUSTIFICATION(2);
	}
	HUD::SET_TEXT_SCALE(1f, func_227(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	func_226(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_226(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0xB849
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_FONT(0);
	func_231();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.0013888889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_227(18f));
			HUD::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("ESMINDOLLA" /* GXT: -$~a~ */);
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), true);
				fVar1 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(false);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("ESDOLLA" /* GXT: $~a~ */);
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, true);
				fVar1 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(false);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.0013888889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, false, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.0013888889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, false, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.0013888889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, false, 0);
			HUD::SET_TEXT_SCALE(1f, func_227(14f));
			break;
	}
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iVar0);
	switch (iParam5)
	{
		case 11:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE" /* GXT: ~1~% */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM" /* GXT: ~1~ */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM" /* GXT: ~1~/~1~ */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_227(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA" /* GXT: -$~a~ */);
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), true);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA" /* GXT: $~a~ */);
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, true);
			}
			break;
		
		case 6:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 20:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			HUD::SET_TEXT_SCALE(1f, func_227(14f));
		}
		else
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_227(float fParam0)//Position - 0xBBD4
{
	return (fParam0 * 0.025f);
}

float func_228(float fParam0)//Position - 0xBBE4
{
	return (fParam0 * 0.0009259259f);
}

float func_229(char* sParam0, char* sParam1)//Position - 0xBBF4
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	return (HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true) / 2f);
}

float func_230(char* sParam0)//Position - 0xBC0F
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return (HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true) / 2f);
}

void func_231()//Position - 0xBC24
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
}

void func_232(char* sParam0)//Position - 0xBC4C
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

float func_233()//Position - 0xBC5A
{
	float fVar0;
	
	fVar0 = 1f;
	if (MISC::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_234(float fParam0)//Position - 0xBC6E
{
	return (fParam0 * 0.0013888889f);
}

void func_235(int iParam0)//Position - 0xBC7E
{
	if (func_239())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_80(0))
		{
			func_236(iParam0);
		}
		MISC::SET_BIT(&Global_8801, 2);
	}
}

void func_236(int iParam0)//Position - 0xBCB1
{
	if (func_239())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_238())
		{
			func_237(1, 1);
		}
		else
		{
			func_237(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8801, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 30);
	}
	if (!func_15())
	{
		Global_20930.f_1 = 3;
	}
}

void func_237(bool bParam0, bool bParam1)//Position - 0xBD3B
{
	if (bParam0)
	{
		if (func_80(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
}

bool func_238()//Position - 0xBDAF
{
	return BitTest(Global_1956920, 5);
}

bool func_239()//Position - 0xBDBD
{
	return BitTest(Global_1956920, 19);
}

int func_240(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBDCC
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

void func_241(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xBE95
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_204(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_204(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_204(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_204(&(uParam0->f_1), 8192);
	}
}

int func_242(var uParam0, bool bParam1, int iParam2)//Position - 0xBF0F
{
	uParam0->f_12 = iParam2;
	func_245(uParam0);
	func_244(uParam0);
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_570 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
		uParam0->f_1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_566 || uParam0->f_571)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_566)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_566)
	{
		if (uParam0->f_571)
		{
			func_243(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_211(uParam0, 1);
		}
		else
		{
			func_211(uParam0, 0);
		}
	}
	Global_79651 = 1;
	return 1;
}

void func_243(var uParam0)//Position - 0xC0B0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true));
	func_206("ES_HELP_TU" /* GXT: Like */);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true));
	func_206("ES_HELP_TD" /* GXT: Dislike */);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true));
	func_206("ES_HELP_AB" /* GXT: Don't Vote */);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_244(var uParam0)//Position - 0xC175
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, func_227(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(uParam0->f_13));
			fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
		}
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_245(var uParam0)//Position - 0xC27D
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

void func_246()//Position - 0xC2FC
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_375)
	{
		func_252(&uLocal_386, &Local_967, &Global_64181, 0);
		fLocal_370 = (fLocal_370 * 1000f);
		if (Global_95690)
		{
			func_251(&uLocal_386, 6, &(Local_967.f_12), "MTPHPERSKI" /* GXT: Skip */, SYSTEM::FLOOR(fLocal_370), 0, 3, 0);
			func_251(&uLocal_386, 6, &(Local_967.f_24), "MTPHPERSKI" /* GXT: Skip */, 0, 0, 3, 0);
			func_251(&uLocal_386, 6, &(Local_967.f_30), "MTPHPERSKI" /* GXT: Skip */, SYSTEM::ROUND((fLocal_372 + fLocal_371)), 0, 3, 0);
			func_250();
		}
		else
		{
			if (bLocal_374)
			{
				func_251(&uLocal_386, 6, &(Local_967.f_12), "MTPHPERRET" /* GXT: Checkpoint */, SYSTEM::FLOOR(fLocal_370), 0, 3, 0);
			}
			else
			{
				func_251(&uLocal_386, 9, &(Local_967.f_12), "", SYSTEM::FLOOR(fLocal_370), 0, 0, 0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_967.f_18)))
			{
				if (bLocal_373)
				{
					func_251(&uLocal_386, 6, &(Local_967.f_24), "", 0, 0, 2, 0);
					func_251(&uLocal_386, 3, &(Local_967.f_30), "", SYSTEM::ROUND((fLocal_372 + fLocal_371)), 0, 2, 0);
				}
				else
				{
					func_251(&uLocal_386, 6, &(Local_967.f_24), "", 0, 0, 1, 0);
					func_251(&uLocal_386, 3, &(Local_967.f_30), "", SYSTEM::ROUND(fLocal_371), 0, 0, 0);
				}
			}
			else
			{
				func_251(&uLocal_386, 3, &(Local_967.f_30), "", SYSTEM::ROUND(fLocal_371), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_95690)
		{
			iVar1 = 0;
			while (iVar1 < Global_76261)
			{
				if (Global_76262[iVar1 /*9*/] >= 0 && !Global_64391[Global_76262[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_76262[iVar1 /*9*/].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_381 = 50;
			iLocal_382 = 1;
			func_249(&uLocal_386, 1, &(Local_967.f_48), iLocal_381, 0, 0, 1, 0);
		}
		else if (bLocal_373)
		{
			if (bLocal_374)
			{
				iLocal_381 = 75;
				iLocal_382 = 2;
				func_249(&uLocal_386, 1, &(Local_967.f_42), iLocal_381, 0, 0, 2, 0);
			}
			else
			{
				iLocal_381 = 100;
				iLocal_382 = 3;
				func_249(&uLocal_386, 1, &(Local_967.f_36), iLocal_381, 0, 0, 3, 0);
			}
		}
		else if (!bLocal_373 && !bLocal_374)
		{
			iLocal_381 = 75;
			iLocal_382 = 2;
			func_249(&uLocal_386, 1, &(Local_967.f_42), iLocal_381, 0, 0, 2, 0);
		}
		else
		{
			iLocal_381 = 50;
			iLocal_382 = 1;
			func_249(&uLocal_386, 1, &(Local_967.f_48), iLocal_381, 0, 0, 1, 0);
		}
		func_247();
		iLocal_375 = 1;
	}
}

void func_247()//Position - 0xC56D
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) == 1)
	{
		func_248(38, SYSTEM::FLOOR(fLocal_370), 1);
		if (bLocal_373)
		{
			func_248(39, 1, 1);
		}
		else
		{
			func_248(39, 0, 1);
		}
		if (bLocal_373)
		{
			func_248(40, SYSTEM::ROUND((fLocal_372 + fLocal_371)), 1);
		}
		else
		{
			func_248(40, SYSTEM::ROUND(fLocal_371), 1);
		}
		func_248(41, iLocal_381, 1);
		func_248(42, iLocal_382, 1);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_multi")) == 1)
	{
		func_248(52, SYSTEM::FLOOR(fLocal_370), 1);
		if (bLocal_373)
		{
			func_248(53, 1, 1);
		}
		else
		{
			func_248(53, 0, 1);
		}
		if (bLocal_373)
		{
			func_248(56, SYSTEM::ROUND((fLocal_372 + fLocal_371)), 1);
		}
		else
		{
			func_248(56, SYSTEM::ROUND(fLocal_371), 1);
		}
		func_248(54, iLocal_381, 1);
		func_248(55, iLocal_382, 1);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_hooker")) == 1)
	{
		func_248(66, SYSTEM::FLOOR(fLocal_370), 1);
		if (bLocal_373)
		{
			func_248(67, 1, 1);
		}
		else
		{
			func_248(67, 0, 1);
		}
		if (bLocal_373)
		{
			func_248(68, SYSTEM::ROUND((fLocal_372 + fLocal_371)), 1);
		}
		else
		{
			func_248(68, SYSTEM::ROUND(fLocal_371), 1);
		}
		func_248(69, iLocal_381, 1);
		func_248(70, iLocal_382, 1);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_bus")) == 1)
	{
		func_248(81, SYSTEM::FLOOR(fLocal_370), 1);
		if (bLocal_373)
		{
			func_248(82, 1, 1);
		}
		else
		{
			func_248(82, 0, 1);
		}
		if (bLocal_373)
		{
			func_248(83, SYSTEM::ROUND((fLocal_372 + fLocal_371)), 1);
		}
		else
		{
			func_248(83, SYSTEM::ROUND(fLocal_371), 1);
		}
		func_248(84, iLocal_381, 1);
		func_248(85, iLocal_382, 1);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_construction")) == 1)
	{
		func_248(97, SYSTEM::FLOOR(fLocal_370), 1);
		if (bLocal_373)
		{
			func_248(98, 1, 1);
		}
		else
		{
			func_248(98, 0, 1);
		}
		if (bLocal_373)
		{
			func_248(99, SYSTEM::ROUND((fLocal_372 + fLocal_371)), 1);
		}
		else
		{
			func_248(99, SYSTEM::ROUND(fLocal_371), 1);
		}
		func_248(100, iLocal_381, 1);
		func_248(101, iLocal_382, 1);
	}
}

void func_248(int iParam0, int iParam1, bool bParam2)//Position - 0xC7B9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		if (Global_76262[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_76262[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_76262[iVar0 /*9*/].f_1 = (Global_76262[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_76262[iVar0 /*9*/] != -1)
	{
		if (Global_64391[Global_76262[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_76262[iVar0 /*9*/].f_1 > 1)
			{
				Global_76262[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_76262[iVar0 /*9*/].f_1 < 0)
			{
				Global_76262[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_249(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xC863
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = iParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

void func_250()//Position - 0xC8A8
{
	Global_95689 = 0;
	Global_95690 = 0;
}

void func_251(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xC8BA
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_252(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xC92D
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_253()//Position - 0xC950
{
	func_557(&(Global_113969.f_19966.f_1), 4194304);
}

void func_254()//Position - 0xC969
{
	int iVar0;
	
	if (!bLocal_1177)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0))
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("ASS1_LOST"))
						{
							bLocal_1177 = true;
						}
					}
				}
			}
		}
	}
}

void func_255()//Position - 0xC9CA
{
	float fVar0;
	
	if (!iLocal_1174)
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!func_28())
			{
				func_260("ASS_VA_GO", 7500, -1);
				iLocal_1174 = 1;
			}
		}
	}
	func_259(&iLocal_1186, &uLocal_1366, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1195)
	{
		case 0:
			iLocal_1195++;
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				fVar0 = func_32(PLAYER::PLAYER_PED_ID(), Local_1301, 1);
				if (fVar0 > 155f && func_36(1116471296, 1) == 0)
				{
					bLocal_1169 = true;
					func_257();
					iLocal_1195++;
				}
				else
				{
					PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
				}
			}
			break;
		
		case 2:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (func_36(1116471296, 1) == 0)
				{
					func_254();
					if (func_256())
					{
						iLocal_1033 = 18;
					}
				}
			}
			else if (!iLocal_1185)
			{
				if (!func_28())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_260("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1195++;
						iLocal_1185 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_1195 = 2;
			}
			break;
	}
}

int func_256()//Position - 0xCB05
{
	if (bLocal_1177)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_LOST");
		iLocal_1178 = 1;
	}
	func_257();
	return 1;
}

void func_257()//Position - 0xCB28
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1049[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_1049[iVar0]))
			{
				func_258(&(Local_1104[iVar0 /*8*/]));
				TASK::CLEAR_PED_TASKS(iLocal_1049[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_1049[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1048))
	{
		if (!PED::IS_PED_INJURED(iLocal_1048))
		{
			TASK::CLEAR_PED_TASKS(iLocal_1048);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_1048);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1052[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_1052[iVar0]))
			{
				func_258(&(Local_1062[iVar0 /*8*/]));
				TASK::CLEAR_PED_TASKS(iLocal_1052[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_1052[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1056[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_1056[iVar0]))
			{
				func_258(&(Local_1087[iVar0 /*8*/]));
				TASK::CLEAR_PED_TASKS(iLocal_1056[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_1056[iVar0]));
			}
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1327);
}

void func_258(int* iParam0)//Position - 0xCC4A
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

int func_259(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xCCBC
{
	if (!*iParam0)
	{
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_260(char* sParam0, int iParam1, int iParam2)//Position - 0xCCE9
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_261()//Position - 0xCD02
{
	func_259(&iLocal_1186, &uLocal_1366, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1195)
	{
		case 0:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!iLocal_1185)
				{
					if (!func_28())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							func_260("ASS_VA_LOSECOPS", 7500, 1);
							iLocal_1195++;
							iLocal_1185 = 1;
						}
					}
				}
			}
			else if (func_36(1116471296, 1) != 0)
			{
				if (!iLocal_1174)
				{
					if (!func_28())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							func_260("ASS_VA_GO", 7500, -1);
							iLocal_1195++;
							iLocal_1174 = 1;
						}
					}
				}
			}
			else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && func_36(125f, 1) == 0)
			{
				iLocal_1195++;
			}
			break;
		
		case 1:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && func_36(125f, 1) == 0)
			{
				func_254();
				func_257();
				func_263(1);
				func_262();
				iLocal_1195++;
			}
			break;
		
		case 2:
			func_254();
			iLocal_1033 = 18;
			break;
	}
}

void func_262()//Position - 0xCE28
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1314))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1314, 1);
		}
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1314);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1315))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1315, false))
		{
			if ((ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1315) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_1315)) && !CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1315);
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1056[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1056[0], false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1315, false))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_1056[0], iLocal_1315, false))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1056[0]);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1056[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1056[1], false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1315, false))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_1056[1], iLocal_1315, false))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1056[1]);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1315, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1315);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1318[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1318[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1318[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1318[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1321) && !ENTITY::IS_ENTITY_DEAD(iLocal_1321, false))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1321) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1321, true))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1321);
		}
	}
}

void func_263(bool bParam0)//Position - 0xCFAE
{
	int iVar0;
	
	if (bParam0)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_1122))
		{
			HUD::REMOVE_BLIP(&iLocal_1122);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_1123[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_1123[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_1127[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_1127[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_1127[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_1127[iVar0]));
		}
		iVar0++;
	}
}

void func_264()//Position - 0xD04D
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_1295, Local_1298, fLocal_1245, true, false, 0))
	{
		bLocal_1154 = true;
	}
	else
	{
		bLocal_1154 = false;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_1122))
	{
		HUD::REMOVE_BLIP(&iLocal_1122);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	if (bLocal_1154)
	{
		func_265();
		iLocal_1033 = 17;
	}
	else
	{
		func_265();
		iLocal_1033 = 16;
	}
	func_92(&uLocal_1531, 0, 0);
}

void func_265()//Position - 0xD0B9
{
	iLocal_1195 = 0;
}

void func_266()//Position - 0xD0C5
{
	if (!bLocal_1151)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1314))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1314, 3);
				if (func_268(iLocal_1314, 5f))
				{
					bLocal_1151 = true;
				}
			}
		}
	}
	if (!iLocal_1148)
	{
		if (func_267(iLocal_1314, 10000))
		{
			iLocal_1148 = 1;
		}
	}
}

int func_267(int iParam0, int iParam1)//Position - 0xD118
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, iParam1) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, iParam1)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, iParam1)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_268(int iParam0, float fParam1)//Position - 0xD168
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_269(iParam0, -1217.4419f, -281.5099f, 36.7495f, 1) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_269(int iParam0, struct<3> Param1, bool bParam4)//Position - 0xD19A
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
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

void func_270()//Position - 0xD1D4
{
	switch (iLocal_1195)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
			{
				if (func_140())
				{
					if (!PED::IS_PED_INJURED(iLocal_1052[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_1052[0], iLocal_1314, false))
							{
								bLocal_1147 = true;
								func_265();
								iLocal_1033 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_271()//Position - 0xD236
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1048))
	{
		if (PED::IS_PED_INJURED(iLocal_1048))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_1048, false))
			{
				bLocal_1152 = true;
				if (HUD::DOES_BLIP_EXIST(iLocal_1122))
				{
					HUD::REMOVE_BLIP(&iLocal_1122);
				}
				func_116(Local_1307, 1097859072, 1116471296);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
			func_265();
			iLocal_1033 = 15;
		}
	}
}

void func_272()//Position - 0xD299
{
	func_263(0);
	func_279();
	func_277();
	func_274();
	func_273();
	func_260("ASS_VA_KILL", 7500, -1);
	SYSTEM::SETTIMERA(0);
	bLocal_1163 = true;
	func_265();
	iLocal_1033 = 12;
}

void func_273()//Position - 0xD2D4
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1329);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1330);
}

void func_274()//Position - 0xD2EA
{
	func_276(&(Local_1693.f_4));
	func_275(&(Local_1693[0]));
	func_275(&(Local_1693[1]));
	func_275(&(Local_1693.f_8[0]));
	func_275(&(Local_1693.f_8[1]));
	func_275(&(Local_1693.f_5[0]));
	func_275(&(Local_1693.f_5[1]));
	func_275(&(Local_1693.f_3));
}

void func_275(int* iParam0)//Position - 0xD348
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(*iParam0))
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_276(int* iParam0)//Position - 0xD373
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(*iParam0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_277()//Position - 0xD395
{
	struct<3> Var0[2];
	struct<3> Var7;
	float fVar10;
	int iVar11;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1048) && !ENTITY::IS_ENTITY_DEAD(iLocal_1048, false))
	{
		Var7 = { ENTITY::GET_ENTITY_COORDS(iLocal_1048, true) };
		fVar10 = ENTITY::GET_ENTITY_HEADING(iLocal_1048);
	}
	Var0[0 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var7, fVar10, 1f, -1f, 0f) };
	Var0[1 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var7, fVar10, -1f, -1f, 0f) };
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (iVar11 == 0)
		{
			iLocal_1049[iVar11] = PED::CREATE_PED(26, iLocal_1329, Var0[0 /*3*/], Var0[0 /*3*/].f_1, 38.3253f, uLocal_1241[iLocal_1204], true, true);
		}
		else
		{
			iLocal_1049[iVar11] = PED::CREATE_PED(26, iLocal_1330, Var0[1 /*3*/], Var0[1 /*3*/].f_1, 38.3253f, uLocal_1241[iLocal_1204], true, true);
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1049[iVar11], true, 1);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_1049[iVar11]);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1049[iVar11], 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1049[iVar11], 23, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1049[iVar11], 30, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1049[iVar11], 13, true);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_1049[iVar11], 2);
		PED::SET_PED_KEEP_TASK(iLocal_1049[iVar11], true);
		func_278(iLocal_1049[iVar11], 1);
		PED::SET_PED_TO_LOAD_COVER(iLocal_1049[iVar11], true);
		iVar11++;
	}
}

void func_278(int iParam0, bool bParam1)//Position - 0xD4EA
{
	if (iParam0 != iLocal_1048)
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_PISTOL"), -1, false, true);
	}
	if (!bParam1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, true);
	}
	else
	{
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, true);
	}
	PED::SET_PED_ACCURACY(iParam0, 60);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 2);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	PED::SET_PED_AS_ENEMY(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_1334);
}

void func_279()//Position - 0xD556
{
	func_281();
	iLocal_1204 = MISC::GET_RANDOM_INT_IN_RANGE(0, iLocal_1197);
	iLocal_1048 = PED::CREATE_PED(26, iLocal_1327, Local_1260[iLocal_1204 /*3*/], uLocal_1241[iLocal_1204], true, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1048, true, 1);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_1048);
	func_278(iLocal_1048, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1327);
	if (!HUD::DOES_BLIP_EXIST(iLocal_1122))
	{
		iLocal_1122 = func_280(iLocal_1048, 0, 0);
	}
	HUD::SET_BLIP_SCALE(iLocal_1122, 1f);
}

int func_280(int iParam0, bool bParam1, bool bParam2)//Position - 0xD5CB
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_205(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_205(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_205(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_281()//Position - 0xD66F
{
	int iVar0;
	
	iLocal_1197 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!CAM::IS_SPHERE_VISIBLE(Local_1250[iVar0 /*3*/], 5f) && !func_285(iVar0, 6f))
		{
			Local_1260[iLocal_1197 /*3*/] = { Local_1250[iVar0 /*3*/] };
			uLocal_1241[iLocal_1197] = fLocal_1237[iVar0];
			iLocal_1197++;
		}
		iVar0++;
	}
	if (iLocal_1197 == 0)
	{
		if (func_104())
		{
			Local_1260[0 /*3*/] = { Local_1250[1 /*3*/] };
			uLocal_1241[0] = fLocal_1237[1];
			iLocal_1197++;
		}
		else if (func_284())
		{
			Local_1260[0 /*3*/] = { Local_1250[0 /*3*/] };
			uLocal_1241[0] = fLocal_1237[0];
			iLocal_1197++;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (func_283(Local_1250[iVar0 /*3*/], 1) > 30f && !func_285(iVar0, 6f))
				{
					Local_1260[iLocal_1197 /*3*/] = { Local_1250[iVar0 /*3*/] };
					uLocal_1241[iLocal_1197] = fLocal_1237[iVar0];
					iLocal_1197++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1197 == 0)
	{
		func_282();
	}
}

void func_282()//Position - 0xD7A7
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		fVar4 = SYSTEM::VDIST(Var1, Local_1250[iVar0 /*3*/]);
		if (fVar4 > fLocal_1249)
		{
			fLocal_1249 = fVar4;
			iLocal_1248 = iVar0;
		}
		iVar0++;
	}
	Local_1260[0 /*3*/] = { Local_1250[iLocal_1248 /*3*/] };
	uLocal_1241[0] = fLocal_1237[iLocal_1248];
}

float func_283(struct<3> Param0, bool bParam3)//Position - 0xD821
{
	return func_32(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, bParam3);
}

int func_284()//Position - 0xD83B
{
	if (func_32(PLAYER::PLAYER_PED_ID(), -1237.566f, -156.88245f, 39.41317f, 1) < 13f)
	{
		return 1;
	}
	return 0;
}

int func_285(int iParam0, float fParam1)//Position - 0xD869
{
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_1250[iParam0 /*3*/], fParam1))
	{
		return 1;
	}
	return 0;
}

void func_286()//Position - 0xD888
{
	switch (iLocal_1195)
	{
		case 0:
			if (!iLocal_1164)
			{
				func_112(&Local_358, 4);
				func_289();
				SYSTEM::SETTIMERA(0);
				iLocal_1195++;
			}
			break;
		
		case 1:
			if (((bLocal_1143 && !bLocal_1141) && func_288()) && func_287())
			{
				func_265();
				iLocal_1033 = 11;
			}
			break;
	}
}

int func_287()//Position - 0xD8F4
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(iLocal_1327);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1327))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_288()//Position - 0xD918
{
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1052[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1052[1])) && !PED::IS_PED_INJURED(iLocal_1052[0])) && !PED::IS_PED_INJURED(iLocal_1052[1]))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_1052[0], iLocal_1314, false) && PED::IS_PED_IN_VEHICLE(iLocal_1052[1], iLocal_1314, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_289()//Position - 0xD98B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1035[iVar0] = 4;
		iVar0++;
	}
	bLocal_1157 = true;
}

void func_290()//Position - 0xD9B1
{
	switch (iLocal_1195)
	{
		case 0:
			func_312(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			func_112(&Local_358, 2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1314, false, true, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1321) && !ENTITY::IS_ENTITY_DEAD(iLocal_1321, false))
					{
						func_298(iLocal_1321);
					}
				}
			}
			func_295();
			func_294();
			AUDIO::TRIGGER_MUSIC_EVENT("ASS1_START");
			MISC::SET_BIT(&Local_358, 4);
			func_260("ASS_VA_PLANT", 7500, 1);
			iLocal_1195++;
			break;
		
		case 1:
			if (iLocal_1170)
			{
				if (((!func_293(&iLocal_1316) && !func_292(&(iLocal_1322[0]), &bLocal_1191)) && !func_292(&(iLocal_1322[1]), &bLocal_1191)) && !func_292(&(iLocal_1322[2]), &bLocal_1191))
				{
					SYSTEM::SETTIMERA(0);
					func_265();
					iLocal_1033 = 10;
				}
				else
				{
					func_291();
				}
			}
			break;
	}
}

void func_291()//Position - 0xDAC2
{
	iLocal_1046 = 1;
	bLocal_1141 = true;
}

int func_292(var uParam0, int iParam1)//Position - 0xDAD2
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1315))
	{
		return 0;
	}
	if (func_30(*uParam0, iLocal_1315, 1) <= 5f)
	{
		iLocal_1316 = *uParam0;
		*iParam1 = 1;
		return 1;
	}
	return 0;
}

int func_293(var uParam0)//Position - 0xDB17
{
	struct<3> Var0;
	
	*uParam0 = VEHICLE::GET_CLOSEST_VEHICLE(-1221.954f, -210.746f, 38.638f, 27f, 0, 4);
	if (((*uParam0 != 0 && *uParam0 != iLocal_1314) && *uParam0 != iLocal_1315) && *uParam0 != Local_1693.f_4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, -1, false) == 0)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
				Var0 = { Var0 };
				return 1;
			}
		}
	}
	if (iLocal_1321 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1321) && !ENTITY::IS_ENTITY_DEAD(iLocal_1321, false))
		{
			if (!func_99(iLocal_1321))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1321, true) };
				return 1;
			}
		}
	}
	return 0;
}

void func_294()//Position - 0xDBE2
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1052[iVar1]))
		{
			if (iVar1 == 2)
			{
				iVar0 = iLocal_1330;
			}
			else
			{
				iVar0 = iLocal_1329;
			}
			iLocal_1052[iVar1] = PED::CREATE_PED(26, iVar0, Local_1270[iVar1 /*3*/], fLocal_1223[iVar1], true, true);
			if (iVar1 == 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iVar1], 11, 1, 1, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_1052[iVar1]))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_1052[iVar1], false);
			PED::SET_PED_KEEP_TASK(iLocal_1052[iVar1], true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1052[iVar1], 23, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1052[iVar1], 30, false);
			PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_1052[iVar1], 2);
			PED::SET_PED_CONFIG_FLAG(iLocal_1052[iVar1], 104, true);
			func_278(iLocal_1052[iVar1], 1);
		}
		iVar1++;
	}
}

void func_295()//Position - 0xDDA7
{
	func_297();
	func_296();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1331);
}

void func_296()//Position - 0xDDBE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1056[iVar0]))
		{
			if (iVar0 == 0)
			{
				iLocal_1056[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1315, 26, iLocal_1329, -1, true, true);
			}
			else if (iVar0 == 1)
			{
				iLocal_1056[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1315, 26, iLocal_1330, 0, true, true);
			}
			func_278(iLocal_1056[iVar0], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1056[iVar0], 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1056[iVar0], 23, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1056[iVar0], 30, false);
			PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_1056[iVar0], 2);
			PED::SET_PED_KEEP_TASK(iLocal_1056[iVar0], true);
		}
		iVar0++;
	}
}

void func_297()//Position - 0xDE72
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1315))
	{
		iLocal_1315 = VEHICLE::CREATE_VEHICLE(iLocal_1331, Local_1286, fLocal_1235, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_1315, 0);
	}
}

void func_298(int iParam0)//Position - 0xDEA2
{
	func_299(&(Global_107514.f_2890), &Global_107514, iParam0, 1);
}

int func_299(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0xDEBD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
	{
		func_301(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_300(iParam2))
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

int func_300(int iParam0)//Position - 0xDEFD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_101533.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_301(var uParam0, int iParam1, int iParam2)//Position - 0xDF2B
{
	func_307(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_304(iParam1, 145, 0);
	uParam0->f_11 = func_303(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_302(iParam1);
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
		if (Global_79084 == iParam1)
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

int func_302(int iParam0)//Position - 0xE007
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[iVar0]))
		{
			if (iParam0 == Global_78179.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_303(int iParam0)//Position - 0xE049
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
		if (ENTITY::DOES_ENTITY_EXIST(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				return Global_98854[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_304(int iParam0, int iParam1, int iParam2)//Position - 0xE0AC
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
		if (ENTITY::DOES_ENTITY_EXIST(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_98854[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_305(iParam1, iParam2))
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

int func_305(int iParam0, int iParam1)//Position - 0xE13A
{
	struct<82> Var0;
	
	if (func_20(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_306(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_306(int iParam0, var uParam1, int iParam2)//Position - 0xE17C
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
			if (Global_113969.f_9088.f_99.f_58[128] && !Global_113969.f_9088.f_99.f_58[131])
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
					if (Global_113969.f_9088.f_99.f_58[119])
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
			else if (Global_113969.f_9088.f_99.f_58[118])
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

void func_307(int iParam0, var uParam1)//Position - 0xE3D8
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_311(uParam1);
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
		if (uParam1->f_65 == -1 && !func_310(uParam1->f_66))
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
		func_309(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_308(iVar0 + 1));
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

int func_308(int iParam0)//Position - 0xE683
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

int func_309(int iParam0, var uParam1, var uParam2)//Position - 0xE733
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

int func_310(int iParam0)//Position - 0xE926
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

void func_311(var uParam0)//Position - 0xE946
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

void func_312(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xE9F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_101570)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_101570)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_164(1);
		if (iParam0 <= Global_101570)
		{
		}
		iVar1 = func_386(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113969.f_9088.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_384(iVar1);
			cVar3 = { Global_92301[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113969.f_9088.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_101570, iParam0);
		}
		else
		{
			iVar5 = func_379(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_113969.f_18577[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_378(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_101570, iParam0);
			}
			else
			{
				iVar10 = func_377(&(Global_101533.f_3));
				if (iVar10 > -1)
				{
					Global_113969.f_24989.f_4[iVar10] = 0;
				}
			}
		}
		Global_95691 = iParam2;
		Global_101570 = iParam0;
		func_313(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_101570)
	{
	}
}

void func_313(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xEB6B
{
	func_314(&Global_107514, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_314(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0xEB87
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_18();
	uParam0->f_1 = func_366();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_334(&(uParam0->f_2884), 0);
		func_333(PLAYER::PLAYER_PED_ID());
		func_326(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113969.f_2366.f_539.f_294[iVar1];
		if (iVar1 == func_325())
		{
			func_320(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_101258[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_101258[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_101258[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_101258[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_101258[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_101258[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_101258[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_101258[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_101258[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_101258[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113969.f_2366.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113969.f_2366.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
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
		uParam0->f_9[iVar1] = Global_113969.f_20567.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_61340[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113969.f_2366.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113969.f_2366.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113969.f_2366[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_160[iVar0];
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
		func_316(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_315(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_315(var uParam0)//Position - 0xFA10
{
	*uParam0 = Global_97362;
	uParam0->f_1 = Global_97363;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_316(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xFA32
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_21(iParam2);
	}
	if (func_317(iParam2, &iVar0, iParam3, iParam5))
	{
		func_299(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				func_299(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_317(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xFABA
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
						if (func_318(*uParam1, func_18(), 1))
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

int func_318(int iParam0, int iParam1, bool bParam2)//Position - 0xFBE9
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_319(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113969.f_7232[iVar9], 0))
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

int func_319(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xFC57
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

void func_320(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xFD2F
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_21(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_324(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_323(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_20(iVar0))
		{
			uParam1->f_59 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_321(161, iParam3))
			{
				uParam1->f_59 = func_176(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_176(753, iParam3);
			}
			uParam1->f_60 = func_176(754, iParam3);
			uParam1->f_61 = func_176(755, iParam3);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_321(161, iParam3))
			{
				uParam1->f_59 = func_176(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_176(753, iParam3);
			}
		}
	}
}

int func_321(int iParam0, int iParam1)//Position - 0xFEC9
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_322(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_322(int iParam0, var uParam1)//Position - 0xFEED
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_171(uParam1));
}

void func_323(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0xFF02
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
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

void func_324(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x1044C
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
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

int func_325()//Position - 0x1068D
{
	func_19();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_326(int iParam0, bool bParam1)//Position - 0x106A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_21(iParam0);
	if (func_20(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_327(iParam0, &(Global_113969.f_2366.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113969.f_2366.f_539.f_1730[iVar2 /*4*/][iVar0] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
					if (Global_113969.f_2366.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113969.f_2366.f_539.f_1763 = iVar2;
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

void func_327(int iParam0, var uParam1)//Position - 0x10799
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
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
			iVar3 = func_332(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_332(iVar0));
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
					iVar2 = func_330(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_330(Var4.f_0, iVar1);
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
		iVar10 = FILES::GET_NUM_DLC_WEAPONS_SP();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((FILES::GET_DLC_WEAPON_DATA_SP(iVar9, &Var11) && !func_329(Var11.f_1)) && iVar72 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
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
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar9))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar9, iVar1, &Var50))
						{
							if (!func_328(Var50.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var50.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar73);
								}
								iVar73++;
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
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_328(int iParam0)//Position - 0x10A21
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

int func_329(int iParam0)//Position - 0x10AC2
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
			case joaat("WEAPON_TECPISTOL"):
			case joaat("WEAPON_BATTLERIFLE"):
			case joaat("WEAPON_SNOWLAUNCHER"):
			case joaat("WEAPON_STUNROD"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_330(int iParam0, int iParam1)//Position - 0x10CB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var43;
	
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
				
				case 5:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_XMAS23");
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
				
				case 7:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_XM3");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_FRN");
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
				
				case 10:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH");
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
				
				case 4:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_VARMOD_XMAS23");
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
				
				case 8:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_XMAS23");
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
		
		case joaat("WEAPON_RPG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_RPG_VARMOD_TVR");
					break;
			}
			break;
		
		case joaat("WEAPON_BATTLERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BATTLERIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BATTLERIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_STUNGUN_MP"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_STUNGUN_VARMOD_BAIL");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_331(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_328(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
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

int func_331(int iParam0, var* uParam1)//Position - 0x119F5
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

int func_332(int iParam0)//Position - 0x11A30
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

void func_333(int iParam0)//Position - 0x11CA4
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
	if (func_20(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113969.f_2366.f_539.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_334(var uParam0, int iParam1)//Position - 0x11CE0
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
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
	else if (BitTest(Global_79638, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_79638, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_79638, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_79638, 7))
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
		if (func_337(&iVar0))
		{
			if (func_336(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar5 = func_18();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
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
		else if (func_335(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_335(struct<3> Param0, char* sParam3, struct<3> Param4)//Position - 0x1222F
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam3);
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

bool func_336(int iParam0, var uParam1, var uParam2)//Position - 0x12273
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
	return !func_50(*uParam1, 0f, 0f, 0f, 0);
}

int func_337(var uParam0)//Position - 0x129F2
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_365())
		{
			*uParam0 = func_343(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, 0, 1, -1);
			if (func_342(*uParam0) && !func_338(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_338(int iParam0)//Position - 0x12A4D
{
	return func_339(iParam0, 0, 1);
}

int func_339(int iParam0, int iParam1, bool bParam2)//Position - 0x12A5D
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_341() == 0)
		{
			return BitTest(func_176(func_340(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_340(int iParam0)//Position - 0x12ABD
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
			return 12924;
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
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_341()//Position - 0x12E65
{
	return Global_32948;
}

int func_342(int iParam0)//Position - 0x12E70
{
	return func_339(iParam0, 5, 1);
}

int func_343(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x12E80
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (iParam3 == 6 || iParam3 == func_364(iVar0))
		{
			if (!bParam5 || func_363(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_344(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
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

Vector3 func_344(int iParam0, bool bParam1)//Position - 0x12F22
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
			return func_360(Global_103686);
			break;
		
		case 46:
			if (Global_1845111 != func_12())
			{
				if (func_359(Global_1845111))
				{
					return func_352(2, 2);
				}
				else if (func_351(Global_1845111))
				{
					return func_352(45, 3);
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
			return func_349(-9.9f, -0.5f, 1f);
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
			return Global_1964427;
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
			switch (func_348())
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
			return func_345();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
		
		case 60:
			return -1299.6909f, -3017.1646f, -48.2612f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_345()//Position - 0x13681
{
	if (!func_347(Global_1949748))
	{
		return Global_1949748;
	}
	switch (func_346())
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

int func_346()//Position - 0x1397C
{
	return Global_2652592.f_2671;
}

int func_347(struct<3> Param0)//Position - 0x1398B
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_348()//Position - 0x139B5
{
	return Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_8;
}

Vector3 func_349(struct<3> Param0)//Position - 0x139CD
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_350(), 0f, Param0);
}

Vector3 func_350()//Position - 0x139E2
{
	return -880f, -2770f, -50f;
}

int func_351(int iParam0)//Position - 0x139F9
{
	if (iParam0 != func_12())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 0) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 1)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_352(int iParam0, int iParam1)//Position - 0x13A51
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1845111 != func_12())
	{
		if (iParam1 == 3)
		{
			if (func_353(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 4))
			{
				if (func_353(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 5))
			{
				if (func_353(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_353(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x13AFB
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_358(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_358(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_356(iParam0) };
	}
	else
	{
		Var12 = { func_355(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_354(Var18, -Var0.f_3.f_2) };
	Var18 = { func_354(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_354(struct<3> Param0, float fParam3)//Position - 0x13B90
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_355(int iParam0)//Position - 0x13BD4
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

struct<6> func_356(int iParam0)//Position - 0x13D58
{
	return func_357(iParam0);
}

struct<6> func_357(int iParam0)//Position - 0x13D66
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

int func_358(int iParam0, var uParam1)//Position - 0x1482F
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

int func_359(int iParam0)//Position - 0x148B1
{
	if (iParam0 != func_12())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 3) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 4)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_360(int iParam0)//Position - 0x14909
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
			return func_350();
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
			if (func_361() == 0)
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

int func_361()//Position - 0x14B75
{
	return func_362(PLAYER::PLAYER_ID());
}

int func_362(int iParam0)//Position - 0x14B85
{
	return MISC::GET_BITS_IN_RANGE(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

int func_363(int iParam0)//Position - 0x14BA2
{
	return func_339(iParam0, 0, 0);
}

int func_364(int iParam0)//Position - 0x14BB2
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
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

bool func_365()//Position - 0x14EE8
{
	return Global_101585.f_393 > 0;
}

var func_366()//Position - 0x14EF9
{
	var uVar0;
	
	func_376(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_375(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_374(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_369(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_368(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_367(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_367(var uParam0, int iParam1)//Position - 0x14F3F
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

void func_368(var uParam0, int iParam1)//Position - 0x14FC5
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_369(var uParam0, int iParam1)//Position - 0x14FF8
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_373(*uParam0);
	iVar1 = func_371(*uParam0);
	if (iParam1 < 1 || iParam1 > func_370(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_370(int iParam0, int iParam1)//Position - 0x15049
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

var func_371(int iParam0)//Position - 0x150EB
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_372(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_372(bool bParam0, int iParam1, int iParam2)//Position - 0x1510D
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_373(var uParam0)//Position - 0x15124
{
	return uParam0 & 15;
}

void func_374(var uParam0, int iParam1)//Position - 0x15131
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_375(var uParam0, int iParam1)//Position - 0x1516B
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_376(var uParam0, int iParam1)//Position - 0x151A6
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_377(char* sParam0)//Position - 0x151E2
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

struct<2> func_378(int iParam0)//Position - 0x15238
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

int func_379(char* sParam0, int iParam1)//Position - 0x15684
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = MISC::GET_HASH_KEY(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_380(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_380(int iParam0, var uParam1)//Position - 0x156CD
{
	switch (iParam0)
	{
		case 0:
			func_381(uParam1, "Abigail1", func_383(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 1:
			func_381(uParam1, "Abigail2", func_383(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 2:
			func_381(uParam1, "Barry1", func_383(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 3:
			func_381(uParam1, "Barry2", func_383(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_382(iParam0), 1, 1);
			break;
		
		case 4:
			func_381(uParam1, "Barry3", func_383(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 5:
			func_381(uParam1, "Barry3A", func_383(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 6:
			func_381(uParam1, "Barry3C", func_383(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 7:
			func_381(uParam1, "Barry4", func_383(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_382(iParam0), 0, 0);
			break;
		
		case 8:
			func_381(uParam1, "Dreyfuss1", func_383(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 9:
			func_381(uParam1, "Epsilon1", func_383(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 10:
			func_381(uParam1, "Epsilon2", func_383(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 11:
			func_381(uParam1, "Epsilon3", func_383(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 12:
			func_381(uParam1, "Epsilon4", func_383(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 13:
			func_381(uParam1, "Epsilon5", func_383(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 14:
			func_381(uParam1, "Epsilon6", func_383(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 15:
			func_381(uParam1, "Epsilon7", func_383(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 16:
			func_381(uParam1, "Epsilon8", func_383(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 17:
			func_381(uParam1, "Extreme1", func_383(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 18:
			func_381(uParam1, "Extreme2", func_383(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 19:
			func_381(uParam1, "Extreme3", func_383(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 20:
			func_381(uParam1, "Extreme4", func_383(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 21:
			func_381(uParam1, "Fanatic1", func_383(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_382(iParam0), 1, 0);
			break;
		
		case 22:
			func_381(uParam1, "Fanatic2", func_383(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_382(iParam0), 1, 0);
			break;
		
		case 23:
			func_381(uParam1, "Fanatic3", func_383(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_382(iParam0), 0, 1);
			break;
		
		case 24:
			func_381(uParam1, "Hao1", func_383(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_382(iParam0), 0, 1);
			break;
		
		case 25:
			func_381(uParam1, "Hunting1", func_383(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 26:
			func_381(uParam1, "Hunting2", func_383(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 27:
			func_381(uParam1, "Josh1", func_383(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 28:
			func_381(uParam1, "Josh2", func_383(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_382(iParam0), 1, 1);
			break;
		
		case 29:
			func_381(uParam1, "Josh3", func_383(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_382(iParam0), 1, 1);
			break;
		
		case 30:
			func_381(uParam1, "Josh4", func_383(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 31:
			func_381(uParam1, "Maude1", func_383(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 32:
			func_381(uParam1, "Minute1", func_383(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 33:
			func_381(uParam1, "Minute2", func_383(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 34:
			func_381(uParam1, "Minute3", func_383(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 35:
			func_381(uParam1, "MrsPhilips1", func_383(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 36:
			func_381(uParam1, "MrsPhilips2", func_383(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 37:
			func_381(uParam1, "Nigel1", func_383(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 38:
			func_381(uParam1, "Nigel1A", func_383(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_382(iParam0), 1, 1);
			break;
		
		case 39:
			func_381(uParam1, "Nigel1B", func_383(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_382(iParam0), 1, 1);
			break;
		
		case 40:
			func_381(uParam1, "Nigel1C", func_383(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_382(iParam0), 1, 1);
			break;
		
		case 41:
			func_381(uParam1, "Nigel1D", func_383(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_382(iParam0), 1, 1);
			break;
		
		case 42:
			func_381(uParam1, "Nigel2", func_383(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_382(iParam0), 1, 1);
			break;
		
		case 43:
			func_381(uParam1, "Nigel3", func_383(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_382(iParam0), 1, 1);
			break;
		
		case 44:
			func_381(uParam1, "Omega1", func_383(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 45:
			func_381(uParam1, "Omega2", func_383(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 46:
			func_381(uParam1, "Paparazzo1", func_383(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 47:
			func_381(uParam1, "Paparazzo2", func_383(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 48:
			func_381(uParam1, "Paparazzo3", func_383(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 49:
			func_381(uParam1, "Paparazzo3A", func_383(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 50:
			func_381(uParam1, "Paparazzo3B", func_383(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 51:
			func_381(uParam1, "Paparazzo4", func_383(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 52:
			func_381(uParam1, "Rampage1", func_383(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 54:
			func_381(uParam1, "Rampage3", func_383(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 55:
			func_381(uParam1, "Rampage4", func_383(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 56:
			func_381(uParam1, "Rampage5", func_383(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 53:
			func_381(uParam1, "Rampage2", func_383(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 57:
			func_381(uParam1, "TheLastOne", func_383(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 58:
			func_381(uParam1, "Tonya1", func_383(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 59:
			func_381(uParam1, "Tonya2", func_383(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 60:
			func_381(uParam1, "Tonya3", func_383(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 61:
			func_381(uParam1, "Tonya4", func_383(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 62:
			func_381(uParam1, "Tonya5", func_383(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_381(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x16882
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

int func_382(int iParam0)//Position - 0x16913
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

struct<2> func_383(int iParam0)//Position - 0x16C59
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_378(iParam0) };
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

int func_384(int iParam0)//Position - 0x16C90
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_385(Global_113969.f_9088.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_385(Global_113969.f_9088.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_385(Global_113969.f_9088.f_99.f_205[11]);
			break;
		
		case 90:
			return func_385(Global_113969.f_9088.f_99.f_205[7]);
			break;
		
		case 93:
			return func_385(Global_113969.f_9088.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_385(int iParam0)//Position - 0x16D4C
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

int func_386(char* sParam0, bool bParam1)//Position - 0x16DA0
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = func_387(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_387(int iParam0, bool bParam1)//Position - 0x16DCA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_92301[iVar0 /*34*/].f_6 == iParam0)
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

void func_388()//Position - 0x16E00
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f, 15f, false, false, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iVar0) <= 0.5f)
				{
					if (!func_58(&iLocal_1347))
					{
						func_55(&iLocal_1347);
					}
				}
				else if (func_58(&iLocal_1347))
				{
					func_56(&iLocal_1347);
				}
				if (func_58(&iLocal_1347))
				{
					if (func_52(&iLocal_1347) > 10f)
					{
						func_37(2);
					}
				}
			}
			else if (func_58(&iLocal_1347))
			{
				func_56(&iLocal_1347);
			}
		}
	}
}

void func_389()//Position - 0x16EDC
{
	switch (iLocal_1195)
	{
		case 0:
			if (func_420(1084227584, 1) || (bLocal_1153 && STREAMING::STREAMVOL_HAS_LOADED(iLocal_1132)))
			{
				func_419(-1248.3976f, -183.36601f, 37.72881f, -1216.4368f, -196.87273f, 44.075413f, 59.25f, Local_1667, fLocal_1670, 1, 1, 1, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1220.57f, -185.96f, 38.4f, 50f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(-1220.57f, -185.96f, 38.4f, 50f, 0);
				func_418();
				func_417();
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1314, false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1314, 107, "ASSOJva", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1314, 2500f);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::SET_VEH_RADIO_STATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), "OFF");
					}
				}
				iLocal_1195++;
			}
			else if (STREAMING::STREAMVOL_HAS_LOADED(iLocal_1132))
			{
			}
			break;
		
		case 1:
			if (func_390())
			{
				iLocal_1196 = 0;
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				func_542();
				func_265();
				iLocal_1033 = 9;
			}
			break;
	}
}

int func_390()//Position - 0x17029
{
	int iVar0;
	
	switch (iLocal_1196)
	{
		case 0:
			func_416(0, 0, 1);
			func_415();
			CAM::SHAKE_CAM(iLocal_1332, "HAND_SHAKE", 0.2f);
			CAM::SHAKE_CAM(iLocal_1333, "HAND_SHAKE", 0.2f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1333, iLocal_1332, 6000, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			func_260("ASS_VA_SNIPE1", 7500, 1);
			if (bLocal_1153)
			{
				func_414();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			else
			{
				func_406();
			}
			SYSTEM::SETTIMERA(0);
			iLocal_1196++;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1314, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
				{
					if (SYSTEM::TIMERA() > 6000)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1314))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1314);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1314, 102, "ASSOJva", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1314, 4500f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_1314, true);
						func_260("ASS_VA_SNIPE2", 7500, 1);
						CAM::SET_CAM_PARAMS(iLocal_1332, -1218.8607f, -191.0496f, 38.83616f, 3.519839f, -0.000706f, 42.27108f, 38f, 0, 1, 1, 2);
						CAM::SET_CAM_NEAR_DOF(iLocal_1332, 0.5f);
						CAM::SET_CAM_FAR_DOF(iLocal_1332, 7f);
						CAM::SHAKE_CAM(iLocal_1332, "HAND_SHAKE", 0.2f);
						CAM::SET_CAM_PARAMS(iLocal_1333, -1218.9097f, -190.87914f, 38.84585f, 3.519839f, -0.000706f, 43.338146f, 38f, 0, 1, 1, 2);
						CAM::SET_CAM_NEAR_DOF(iLocal_1333, 0.7f);
						CAM::SET_CAM_FAR_DOF(iLocal_1333, 10f);
						CAM::SHAKE_CAM(iLocal_1333, "HAND_SHAKE", 0.2f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1333, iLocal_1332, 2000, 3, 3);
						iLocal_1196++;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1314, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1314) >= 7000f)
					{
						VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_1314);
						iLocal_1194 = 0;
						while (iLocal_1194 < 3)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_1052[iLocal_1194], false))
							{
								if (iLocal_1194 == 0)
								{
									iVar0 = 1250;
								}
								else if (iLocal_1194 == 1)
								{
									iVar0 = 400;
								}
								else
								{
									iVar0 = 0;
								}
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1052[iLocal_1194], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
								{
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_1326);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_1326);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar0, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1250[iLocal_1194 /*3*/], 1f, 20000, 0.25f, 0, 40000f);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_1326);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_1052[iLocal_1194], iLocal_1326);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_1326);
								}
							}
							iLocal_1194++;
						}
						SYSTEM::SETTIMERA(0);
						iLocal_1196++;
					}
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() >= 2000)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					CAM::SET_CAM_PARAMS(iLocal_1332, -1265.5488f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_1332, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_PARAMS(iLocal_1333, -1266.0629f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_1333, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1333, iLocal_1332, 4000, 3, 3);
					iLocal_1219 = 4000;
				}
				else
				{
					CAM::SET_CAM_PARAMS(iLocal_1332, -1266.1925f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_1332, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_PARAMS(iLocal_1333, -1267.5302f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_1333, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1333, iLocal_1332, 4000, 3, 3);
					iLocal_1219 = 4000;
				}
				SYSTEM::SETTIMERA(0);
				iLocal_1196++;
			}
			break;
		
		case 4:
			if (!iLocal_1192)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					if (SYSTEM::TIMERA() >= (iLocal_1219 - 300))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_1192 = 1;
					}
				}
			}
			if (SYSTEM::TIMERA() >= iLocal_1219)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1314))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1314);
					}
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(102, "ASSOJva");
				VEHICLE::REMOVE_VEHICLE_RECORDING(107, "ASSOJva");
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1314, 1, true);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1314, 0, true);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1314, 2, true);
				HUD::CLEAR_HELP(true);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
				else
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(true, 0f, 1, 0);
				}
				func_395(1, 1, 1);
				return 1;
			}
			break;
	}
	if (func_393(iLocal_380))
	{
		HUD::CLEAR_HELP(true);
		func_391(1);
		return 1;
	}
	return 0;
}

void func_391(bool bParam0)//Position - 0x17511
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1314))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1314);
		}
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "ASSOJva");
		VEHICLE::REMOVE_VEHICLE_RECORDING(107, "ASSOJva");
		ENTITY::SET_ENTITY_COORDS(iLocal_1314, Local_1292, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_1314, fLocal_1222);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1314, 0, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1314, 1, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1314, 2, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1314, 2, true);
		iLocal_1196 = 0;
		HUD::CLEAR_PRINTS();
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_395(1, 1, 1);
		if (bParam0)
		{
			func_392();
		}
	}
}

void func_392()//Position - 0x175BA
{
	CAM::DO_SCREEN_FADE_IN(1000);
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
}

int func_393(int iParam0)//Position - 0x175D9
{
	if (func_394() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_236(0);
		func_3();
		return 1;
	}
	return 0;
}

int func_394()//Position - 0x1761C
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

void func_395(bool bParam0, bool bParam1, int iParam2)//Position - 0x1764E
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	func_397(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_396(23, 0);
}

void func_396(int iParam0, bool bParam1)//Position - 0x1768C
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_33197, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_33197, iParam0);
	}
}

void func_397(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x176AE
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_405(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_15())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_404(1, bParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_405(0);
		HUD::THEFEED_RESUME();
		Global_64172 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_404(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_402(PLAYER::PLAYER_ID())) && !func_399(PLAYER::PLAYER_ID(), 0)) && !func_398()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_402(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79387 = 0;
	}
}

bool func_398()//Position - 0x177FB
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_399(int iParam0, int iParam1)//Position - 0x17815
{
	bool bVar0;
	
	if (!func_401(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_400(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
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

int func_400(int iParam0, bool bParam1)//Position - 0x1786E
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_172();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_401(var uParam0)//Position - 0x178AF
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

int func_402(int iParam0)//Position - 0x178D1
{
	if (func_399(iParam0, 0))
	{
		return 1;
	}
	if (func_403())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_403()//Position - 0x17910
{
	return BitTest(Global_2621446, 3);
}

int func_404(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x1791E
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

void func_405(int iParam0)//Position - 0x17951
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 13);
	}
}

void func_406()//Position - 0x17974
{
	func_407(-1252.4628f, -227.58939f, 39.032867f, -1267.2388f, -207.99245f, 44.673515f, 17f, -1266.4049f, -219.1991f, 41.4459f, 304.8644f, func_413(), 1, 1, 1, 0, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1266.1729f, -214.0011f, 41.4459f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 310.0126f);
	}
}

void func_407(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x179FC
{
	func_408(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_408(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x17A26
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (bParam18)
			{
				func_412(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param3, fParam6, false, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_409(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_318(iVar0, func_18(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_347(Param11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::GET_VEHICLE_SIZE(iVar0, &Var4, &Var7);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param7, 5f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam10);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param7, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, true), true, false, false, true);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param3, fParam6, false, false, false, false, false, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			}
			iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
			}
			iVar15 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
				}
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_409(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x17E1C
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_411(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_410(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_410(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_410(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_410(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_410(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_410(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_410(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_410(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_410(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_410(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_410(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_410(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_410(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_410(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_410(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_410(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_410(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)//Position - 0x18113
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_411(struct<3> Param0)//Position - 0x181C7
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

void func_412(int iParam0)//Position - 0x18206
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

Vector3 func_413()//Position - 0x1826B
{
	return 2.55f, 5.665f, 2.55f;
}

void func_414()//Position - 0x18282
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1304, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 299.4985f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1317))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1317, false))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1317, false, true, false);
			ENTITY::SET_ENTITY_COORDS(iLocal_1317, -1251.8732f, -256.7999f, 38.2695f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_1317, 296.7603f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1317, 5f);
		}
	}
}

int func_415()//Position - 0x1830E
{
	iLocal_380 = MISC::GET_GAME_TIMER();
	return iLocal_380;
}

void func_416(int iParam0, bool bParam1, int iParam2)//Position - 0x18320
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(bParam1);
	func_236(0);
	func_397(1, 1, iParam2, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_396(23, 1);
}

void func_417()//Position - 0x18379
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1314))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1314, false))
		{
			iLocal_1194 = 0;
			while (iLocal_1194 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1052[iLocal_1194]))
				{
					if (iLocal_1194 == 0)
					{
						iLocal_1052[iLocal_1194] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1314, 26, iLocal_1329, -1, true, true);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 0, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 11, 0, 0, 0);
					}
					else if (iLocal_1194 == 1)
					{
						iLocal_1052[iLocal_1194] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1314, 26, iLocal_1329, 0, true, true);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 0, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 3, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 11, 0, 2, 0);
					}
					else if (iLocal_1194 == 2)
					{
						iLocal_1052[iLocal_1194] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1314, 26, iLocal_1330, 1, true, true);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 0, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 3, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_1052[iLocal_1194], 11, 1, 1, 0);
					}
				}
				iLocal_1194++;
			}
		}
	}
}

void func_418()//Position - 0x18512
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1314))
	{
		iLocal_1314 = VEHICLE::CREATE_VEHICLE(iLocal_1328, Local_1289, fLocal_1221, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1328);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_1314, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1314, true, 1);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_1314, true);
	}
}

void func_419(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x1855A
{
	func_408(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

int func_420(float fParam0, int iParam1)//Position - 0x18583
{
	int iVar0;
	
	if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_421(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fParam0, 1, 1056964608, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_58(&iLocal_365))
		{
			func_56(&iLocal_365);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		else if (func_52(&iLocal_365) > 1f || iParam1 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_421(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1862E
{
	func_423(bParam5, bParam6);
	func_422(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_30) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_30 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_422(int iParam0)//Position - 0x18685
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

void func_423(bool bParam0, bool bParam1)//Position - 0x186B1
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!bParam1)
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
}

void func_424()//Position - 0x18802
{
	int iVar0;
	
	switch (iLocal_1195)
	{
		case 0:
			func_438(500);
			func_312(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_260("ASS_VA_LOSECOPS", 7500, 1);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(-1220.57f, -185.96f, 38.4f, 50f, false, false, false, false, false, false, 0);
			iLocal_1195++;
			break;
		
		case 1:
			func_437();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1321))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_1321 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1321) && !ENTITY::IS_ENTITY_DEAD(iLocal_1321, false))
							{
								func_298(iLocal_1321);
							}
						}
					}
				}
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!func_434())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_1121))
					{
						iLocal_1121 = func_433(Local_1304, 1);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1121, "ASS_VA_DESTBLIP");
						func_432(&iLocal_1121, -1234.3065f, -250.6783f, 38.2238f, 28.914f);
						if (!iLocal_1135)
						{
							func_260("ASS_VA_GOHOTEL", 7500, 1);
							iLocal_1135 = 1;
						}
						else if (func_431("ASS_VA_LOSECOPS", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
					}
				}
				else if (STREAMING::STREAMVOL_HAS_LOADED(iLocal_1132) && func_430())
				{
					func_429();
					func_265();
					iLocal_1033 = 8;
				}
			}
			else if (!func_434())
			{
				func_428(iLocal_1121, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_37(3);
			}
			func_425();
			break;
	}
}

void func_425()//Position - 0x189A7
{
	if (!iLocal_1134)
	{
		if (func_283(Local_1304, 1) <= 100f)
		{
			func_427();
			iLocal_1132 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-1244.3435f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 80f, 12, 127);
			iLocal_1134 = 1;
		}
	}
	else if (func_283(Local_1304, 1) > 120f)
	{
		if (STREAMING::STREAMVOL_IS_VALID(iLocal_1132))
		{
			STREAMING::STREAMVOL_DELETE(iLocal_1132);
			func_273();
			iLocal_1134 = 0;
		}
	}
	else if (!STREAMING::STREAMVOL_IS_VALID(iLocal_1132))
	{
		if (!func_426())
		{
			iLocal_1134 = 0;
		}
	}
}

int func_426()//Position - 0x18A47
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("taxi")))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) != PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_427()//Position - 0x18A8B
{
	STREAMING::REQUEST_MODEL(iLocal_1329);
	STREAMING::REQUEST_MODEL(iLocal_1330);
}

void func_428(int iParam0, char* sParam1)//Position - 0x18AA1
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (HUD::DOES_BLIP_EXIST(iParam0))
		{
			HUD::REMOVE_BLIP(&iParam0);
			HUD::CLEAR_PRINTS();
			func_260(sParam1, 7500, 1);
		}
	}
}

void func_429()//Position - 0x18AD2
{
	if (HUD::DOES_BLIP_EXIST(iLocal_1121))
	{
		HUD::REMOVE_BLIP(&iLocal_1121);
	}
}

int func_430()//Position - 0x18AEB
{
	int iVar0;
	
	func_427();
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1329) && STREAMING::HAS_MODEL_LOADED(iLocal_1330))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_431(char* sParam0, int iParam1, char* sParam2)//Position - 0x18B18
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_432(int iParam0, struct<3> Param1, float fParam4)//Position - 0x18B36
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		Global_113005 = *iParam0;
		Global_113010 = { Param1 };
		Global_113014 = fParam4;
	}
}

int func_433(struct<3> Param0, bool bParam3)//Position - 0x18B5F
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_205(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

int func_434()//Position - 0x18B8B
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	fVar0 = func_32(iLocal_1047, Local_1304, 1);
	if (fVar0 < 200f)
	{
		func_436();
	}
	if (func_435())
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1047, Local_1304, 25f, 25f, 90f, true, true, 0))
		{
			iVar1 = 1;
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((fVar0 < 2f || ENTITY::IS_ENTITY_AT_COORD(iLocal_1047, Local_1304, 2f, 2f, 2f, true, true, 0)) || iVar1)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1141.085f, -192.66f, 75.756f, -1246.085f, -192.66f, 100.756f, 115f, false, true, 0))
			{
				if (func_435() && iVar1)
				{
					return 1;
				}
				else if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_435()//Position - 0x18C6A
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_1317 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_1317);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2"))
		{
			bLocal_1153 = true;
			return 1;
		}
	}
	return 0;
}

void func_436()//Position - 0x18CE1
{
	int iVar0;
	
	switch (iLocal_1207)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("A_M_M_BevHills_01"));
			STREAMING::REQUEST_MODEL(joaat("A_F_M_BevHills_01"));
			STREAMING::REQUEST_MODEL(joaat("A_F_M_BevHills_02"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Hipster_01"));
			STREAMING::REQUEST_MODEL(joaat("taxi"));
			TASK::REQUEST_WAYPOINT_RECORDING("OJAS_HotelTaxi01");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@");
			if ((((((STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_BevHills_01")) && STREAMING::HAS_MODEL_LOADED(joaat("A_F_M_BevHills_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_F_M_BevHills_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("taxi"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Hipster_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJAS_HotelTaxi01"))
			{
				iLocal_1207++;
			}
			break;
		
		case 1:
			Local_1693[0] = PED::CREATE_PED(4, joaat("A_F_M_BevHills_01"), -1220.6788f, -203.2689f, 38.3251f, 321.2841f, true, true);
			Local_1693[1] = PED::CREATE_PED(4, joaat("A_F_M_BevHills_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1693[0], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1693[1], true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, Local_1693[1], -1, 0, 2);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_TOURIST_MOBILE", -1220.6788f, -203.2689f, 38.3251f, 321.2841f, 0, false, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_1693[0], false))
			{
				TASK::TASK_PERFORM_SEQUENCE(Local_1693[0], iVar0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, Local_1693[0], -1, 0, 2);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0, false, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_1693[1], false))
			{
				TASK::TASK_PERFORM_SEQUENCE(Local_1693[1], iVar0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			Local_1693.f_4 = VEHICLE::CREATE_VEHICLE(joaat("taxi"), -1221.7302f, -199.0665f, 38.1751f, 152.5038f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1693.f_4, 5f);
			Local_1693.f_3 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1693.f_4, 4, joaat("A_M_Y_Hipster_01"), -1, true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1693.f_3, true);
			TASK::TASK_LOOK_AT_ENTITY(Local_1693.f_3, Local_1693[0], -1, 0, 2);
			Local_1693.f_8[0] = PED::CREATE_PED(4, joaat("A_M_M_BevHills_01"), -1211.5972f, -184.5331f, 38.3255f, 4.5193f, true, true);
			Local_1693.f_8[1] = PED::CREATE_PED(4, joaat("A_M_Y_Hipster_01"), -1211.6544f, -182.7625f, 38.3255f, 166.2532f, true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1693.f_8[0], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1693.f_8[1], true);
			TASK::TASK_PLAY_ANIM(Local_1693.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(Local_1693.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0f, false, false, false);
			Local_1693.f_5[0] = PED::CREATE_PED(4, joaat("A_M_M_BevHills_01"), -1229.0994f, -176.3197f, 38.3255f, 231.8036f, true, true);
			Local_1693.f_5[1] = PED::CREATE_PED(4, joaat("A_F_M_BevHills_02"), -1249.7793f, -162.4767f, 39.4131f, 220.1651f, true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1693.f_5[0], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1693.f_5[1], true);
			TASK::TASK_PLAY_ANIM(Local_1693.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(Local_1693.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0f, false, false, false);
			Local_1693.f_11 = 1;
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_BevHills_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_M_BevHills_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_M_BevHills_02"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Hipster_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("taxi"));
			iLocal_1207++;
			break;
		
		case 2:
			break;
	}
}

void func_437()//Position - 0x190D0
{
	struct<3> Var0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		iLocal_1188 = 1;
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (iLocal_1188)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			fLocal_1247 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1304);
			iLocal_1188 = 0;
		}
	}
	else if (fLocal_1247 == 0f)
	{
		fLocal_1247 = SYSTEM::VDIST(-1510.2909f, -946.9932f, 8.278f, Local_1304);
	}
	if (SYSTEM::VDIST(Var0, Local_1304) > (fLocal_1247 + 400f))
	{
		func_37(7);
	}
	else if (SYSTEM::VDIST(Var0, Local_1304) > (fLocal_1247 + 200f))
	{
		if (!iLocal_1184)
		{
			func_260("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1184 = 1;
		}
	}
}

void func_438(int iParam0)//Position - 0x191AA
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_439()//Position - 0x191D0
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1060))
	{
		func_444();
		if (!PED::IS_PED_INJURED(iLocal_1060))
		{
			fVar1 = func_29(iLocal_1060, 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_1060, false);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_1060, false);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_1060, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_1060, 16);
			PED::SET_PED_CONFIG_FLAG(iLocal_1060, 208, true);
			if (fVar1 < 5f)
			{
				if (func_58(&iLocal_1359))
				{
					if (!func_28())
					{
						if (func_441(&iLocal_1359, 10f))
						{
							func_35(&uLocal_1366, 3, iLocal_1060, "LESTER", 0, 1);
							func_6(&uLocal_1366, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_1060) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1060))
				{
					func_440();
				}
			}
			switch (iLocal_1193)
			{
				case 0:
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1060) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1060, PLAYER::PLAYER_PED_ID(), true))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1692, PLAYER::PLAYER_PED_ID(), true))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1692, PLAYER::PLAYER_PED_ID(), true))
							{
							}
							PED::SET_PED_MOVEMENT_CLIPSET(iLocal_1060, "move_lester_CaneUp", 0.25f);
							TASK::TASK_PLAY_ANIM(iLocal_1060, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, 0f, false, false, false);
							iLocal_1193 = 1;
						}
					}
					break;
				
				case 1:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1060, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1060, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0.376f)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1502.0286f, -948.687f, 7.65061f, 1f, 20000, 1f, 1, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1462.3389f, -964.178f, 6.3394f, 1f, -1, 1f, 1, 40000f);
							TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_1060), 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_1060, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							PED::FORCE_PED_MOTION_STATE(iLocal_1060, joaat("MotionState_Walk"), false, 0, false);
							iLocal_1193 = 2;
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_440()//Position - 0x193F0
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1060))
	{
		PED::DELETE_PED(&iLocal_1060);
	}
}

int func_441(int* iParam0, float fParam1)//Position - 0x19409
{
	if (func_443(iParam0, fParam1))
	{
		func_442(iParam0);
		return 1;
	}
	return 0;
}

void func_442(int* iParam0)//Position - 0x19427
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_443(int* iParam0, float fParam1)//Position - 0x1943D
{
	if (func_58(iParam0))
	{
		if (func_52(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_444()//Position - 0x1945F
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1060))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1060, PLAYER::PLAYER_PED_ID(), true))
		{
			func_37(9);
		}
	}
}

void func_445()//Position - 0x19489
{
	AUDIO::TRIGGER_MUSIC_EVENT("ASS1_STOP");
	if (!BitTest(Global_101533.f_20, 13))
	{
		func_542();
	}
	func_446(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	iLocal_1033 = 18;
	func_438(500);
}

void func_446(int iParam0, int iParam1, int iParam2)//Position - 0x194CD
{
	if (func_549() && func_448())
	{
		while (Global_101528 != 6)
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
		func_447(0);
	}
}

void func_447(int iParam0)//Position - 0x19591
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_101533.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_101533.f_20), 13);
	}
}

var func_448()//Position - 0x195BA
{
	return BitTest(Global_101533.f_20, 13);
}

void func_449()//Position - 0x195CB
{
	while (iLocal_1207 < 2)
	{
		func_436();
		SYSTEM::WAIT(0);
	}
	func_418();
	func_391(0);
	if (!BitTest(Global_101533.f_20, 13))
	{
		func_542();
	}
	iLocal_1162 = 0;
	iLocal_1186 = 0;
	MISC::CLEAR_AREA_OF_VEHICLES(-1220.57f, -185.96f, 38.4f, 50f, false, false, false, false, false, false, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	AUDIO::TRIGGER_MUSIC_EVENT("ASS1_RESTART1");
	while (!func_430())
	{
		SYSTEM::WAIT(0);
	}
	func_446(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	iLocal_1033 = 9;
	func_438(500);
}

void func_450()//Position - 0x19675
{
	func_446(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	func_438(500);
	iLocal_1033 = 7;
}

void func_451()//Position - 0x1969E
{
	iLocal_1318[0] = VEHICLE::CREATE_VEHICLE(iLocal_1331, -1270.0448f, -251.4953f, 41.4459f, 214.63f, true, true, false);
	iLocal_1318[1] = VEHICLE::CREATE_VEHICLE(iLocal_1331, -1265.1992f, -218.4823f, 45.9981f, 127.85f, true, true, false);
}

void func_452()//Position - 0x196EE
{
	iLocal_1332 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1244.3435f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 38f, false, 2);
	iLocal_1333 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1243.5876f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f, 38f, false, 2);
}

int func_453()//Position - 0x19758
{
	int iVar0;
	
	iVar0 = 0;
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_1328) && STREAMING::HAS_MODEL_LOADED(iLocal_1331)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "ASSOJva")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(107, "ASSOJva")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASva_101")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASva_101a")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASva_104")) && STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@ASSASSINATE@GUARD")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_454()//Position - 0x197EA
{
	STREAMING::REQUEST_MODEL(iLocal_1328);
	STREAMING::REQUEST_MODEL(iLocal_1331);
	STREAMING::REQUEST_ANIM_DICT("ODDJOBS@ASSASSINATE@GUARD");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@");
	HUD::REQUEST_ADDITIONAL_TEXT("ASS_VA", 3);
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "ASSOJva");
	VEHICLE::REQUEST_VEHICLE_RECORDING(107, "ASSOJva");
	TASK::REQUEST_WAYPOINT_RECORDING("OJASva_101");
	TASK::REQUEST_WAYPOINT_RECORDING("OJASva_101a");
	TASK::REQUEST_WAYPOINT_RECORDING("OJASva_104");
}

void func_455(bool bParam0)//Position - 0x19845
{
	if (bParam0)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(39.1642f, -193.934f, -1237.3966f) - Vector(150f, 150f, 150f), Vector(39.1642f, -193.934f, -1237.3966f) + Vector(150f, 150f, 150f), false, true);
		PATHFIND::SET_ROADS_IN_AREA(-1349.1761f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, false, true);
	}
	else
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1340.9053f, -68.1138f, -100.7554f, -1176.6222f, -287.8646f, 100.8606f, true, true);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-1349.1761f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 1);
	}
}

void func_456()//Position - 0x19904
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -1220.344f, -193.4014f, 38.1754f };
	Var3 = { -1279.6578f, -222.0533f, 41.446f };
	func_35(&uLocal_1366, 1, iLocal_1047, "FRANKLIN", 0, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	PED::ADD_RELATIONSHIP_GROUP("Guards", &iLocal_1334);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1334);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1334, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1334, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_1334);
	MISC::CLEAR_AREA(-1220.57f, -185.96f, 38.4f, 200f, true, false, false, false);
	PED::SET_PED_NON_CREATION_AREA(-1298.6843f, -324.0442f, -35.578f, -1113.3724f, -46.1583f, 55.609f);
	iLocal_1130 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0 - Vector(15f, 15f, 15f), Var0 + Vector(15f, 15f, 15f), false, true, true, true, 1);
	iLocal_1131 = PED::ADD_SCENARIO_BLOCKING_AREA(Var3 - Vector(45f, 35f, 35f), Var3 + Vector(45f, 35f, 35f), false, true, true, true, 1);
}

void func_457()//Position - 0x19A32
{
	StringCopy(&Local_967, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_967.f_6), {Global_64181}, 6);
	StringCopy(&(Local_967.f_12), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_967.f_18), "ASS_VA_BASE", 24);
	StringCopy(&(Local_967.f_24), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_967.f_30), "ASS_VA_CASH", 24);
	StringCopy(&(Local_967.f_36), "ASS_VA_COMP", 24);
	StringCopy(&(Local_967.f_42), "ASS_VA_COMP", 24);
	StringCopy(&(Local_967.f_48), "ASS_VA_COMP", 24);
	StringCopy(&(Local_967.f_54), "ASS_VA_COMP", 24);
}

void func_458()//Position - 0x19AA8
{
	Local_1286 = { -1343.4927f, -153.199f, 47.1825f };
	fLocal_1235 = 260.3612f;
	Local_1289 = { -1242.2126f, -241.5975f, 38.71f };
	fLocal_1221 = 96.8755f;
	Local_1292 = { -1221.6313f, -186.88194f, 38.799603f };
	fLocal_1222 = 201.0763f;
	fLocal_1236 = 40f;
	Local_358.f_2 = 40f;
	Local_1250[0 /*3*/] = { -1221.1538f, -170.9907f, 38.3253f };
	Local_1250[1 /*3*/] = { -1210.5562f, -192.882f, 38.3253f };
	Local_1250[2 /*3*/] = { -1216.3691f, -203.6806f, 38.3253f };
	fLocal_1237[0] = 157.3177f;
	fLocal_1237[1] = 58.3594f;
	fLocal_1237[2] = 65.6443f;
	Local_1270[0 /*3*/] = { -1220.3773f, -169.407f, 38.3253f };
	Local_1270[1 /*3*/] = { -1208.963f, -193.8791f, 38.3253f };
	Local_1270[2 /*3*/] = { -1214.9547f, -205.0824f, 38.3253f };
	Local_1270[3 /*3*/] = { -1217.5182f, -197.13f, 38.3254f };
	Local_1270[4 /*3*/] = { -1231.8916f, -194.382f, 38.1753f };
	fLocal_1223[0] = 160.0748f;
	fLocal_1223[1] = 58.3365f;
	fLocal_1223[2] = 58.0214f;
	fLocal_1223[3] = 97.6664f;
	fLocal_1223[4] = 225.8689f;
	iLocal_1194 = 0;
	while (iLocal_1194 <= 4)
	{
		fLocal_1229[iLocal_1194] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f);
		iLocal_1194++;
	}
	fLocal_371 = 7000f;
	fLocal_372 = 2000f;
	iLocal_1046 = 0;
	iLocal_1182 = 0;
	bLocal_1183 = false;
	iLocal_1168 = 0;
	bLocal_1191 = false;
	iLocal_1190 = 0;
}

void func_459()//Position - 0x19C72
{
	switch (iLocal_1195)
	{
		case 0:
			CUTSCENE::REQUEST_CUTSCENE("ASS_INT_2_ALT1", 8);
			STREAMING::REQUEST_MODEL(joaat("IG_LesterCrest"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@leadin");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@leaning@");
			STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("IG_LesterCrest")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@leadin")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@leaning@")) && STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
			{
				iLocal_1195++;
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_416(56, 0, 1);
				func_419(-1514.6115f, -927.4667f, 7.133712f, -1496.9481f, -942.224f, 16.18723f, 30f, -1523.1742f, -924.6732f, 9.1221f, 53.0177f, 1, 1, 1, 1, 0);
				MISC::CLEAR_AREA(-1507.715f, -941.13135f, 8.37286f, 10f, true, false, false, false);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1671, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_1674);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, 0f, false, false, false);
				if (!CAM::DOES_CAM_EXIST(iLocal_1675))
				{
					iLocal_1675 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_1677, Local_1680, 42.203197f, true, 2);
					CAM::SHAKE_CAM(iLocal_1675, "HAND_SHAKE", 0.3f);
				}
				if (!CAM::DOES_CAM_EXIST(iLocal_1676))
				{
					iLocal_1676 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_1683, Local_1686, 42.203197f, false, 2);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1676, iLocal_1675, 5000, 1, 1);
					CAM::SHAKE_CAM(iLocal_1675, "HAND_SHAKE", 0.3f);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (func_46(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_1195++;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
				{
					if (!func_58(&iLocal_1689))
					{
						func_55(&iLocal_1689);
					}
				}
				if (func_58(&iLocal_1689))
				{
					if (func_52(&iLocal_1689) > 6f)
					{
						iLocal_1195++;
					}
				}
			}
			break;
		
		case 3:
			if (func_460())
			{
				iLocal_1195++;
			}
			break;
		
		case 4:
			func_397(1, 1, 1, 0, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1060, "Lester", 2, joaat("IG_LesterCrest"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
			CUTSCENE::START_CUTSCENE(0);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_1195++;
			break;
		
		case 5:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::DESTROY_ALL_CAMS(false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				iLocal_1195++;
			}
			break;
		
		case 6:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1060))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
					{
						iLocal_1060 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1061))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("WalkingStick_Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", 0)))
					{
						iLocal_1061 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", 0);
					}
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1060) && !PED::IS_PED_INJURED(iLocal_1060))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_1060, -1509.458f, -948.195f, 7.75f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_1060, -11f);
						TASK::TASK_PLAY_ANIM(iLocal_1060, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, false, true, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1060, false, false);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("WalkingStick_Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1060) && !PED::IS_PED_INJURED(iLocal_1060))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1061, iLocal_1060, PED::GET_PED_BONE_INDEX(iLocal_1060, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_397(0, 1, 1, 0, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_1060))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_1060, false, false, false, false, false, false, false, false);
					PED::SET_PED_CAN_RAGDOLL(iLocal_1060, true);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
					CAM::DO_SCREEN_FADE_IN(500);
				}
				func_395(1, 1, 1);
				iLocal_1195++;
			}
			break;
		
		case 7:
			func_56(&iLocal_1359);
			func_265();
			iLocal_1033 = 4;
			break;
	}
}

bool func_460()//Position - 0x1A18A
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_79388)
	{
		if (!bVar0)
		{
			Global_79388 = 1;
		}
	}
	return bVar0;
}

void func_461()//Position - 0x1A1AD
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1692))
	{
		iLocal_1692 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1510.1029f, -947.7194f, 8.2332f, 5f, joaat("prop_bench_08"), true, false, true);
	}
}

void func_462()//Position - 0x1A1DF
{
	int iVar0;
	
	if (iLocal_1033 > 7)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if ((iVar0 != iLocal_1322[0] && iVar0 != iLocal_1322[1]) && iVar0 != iLocal_1322[2])
						{
							if (iLocal_1218 >= 2)
							{
								iLocal_1218 = -1;
							}
							iLocal_1322[iLocal_1218 + 1] = iVar0;
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1322[iLocal_1218 + 1], true, false);
							VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_1322[iLocal_1218 + 1], false);
							iLocal_1218++;
						}
					}
				}
			}
		}
	}
}

void func_463()//Position - 0x1A286
{
	int iVar0;
	
	if (iLocal_1180)
	{
		iVar0 = func_36(1116471296, 1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			func_34(iVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1366, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_464()//Position - 0x1A2C8
{
	int iVar0;
	struct<3> Var1;
	
	if (Local_1693.f_11)
	{
		if (!bLocal_1171)
		{
			if (iLocal_1033 < 10)
			{
				if (func_470())
				{
					iVar0 = func_36(1116471296, 1);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						if (func_29(iVar0, 0) < 10f)
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
							Var1 = { Var1 };
							func_35(&uLocal_1366, 3, iVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1366, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_469();
					bLocal_1171 = true;
				}
				if (iLocal_1136)
				{
					func_469();
					bLocal_1171 = true;
				}
				else
				{
					func_468();
					func_465();
				}
			}
		}
	}
}

void func_465()//Position - 0x1A37C
{
	if (bLocal_1142)
	{
		if (IntToFloat(iLocal_1215) < (IntToFloat(iLocal_1212) - 5f))
		{
			func_467(Local_1693.f_8[0], 1);
			func_467(Local_1693.f_8[1], 1);
			func_467(Local_1693.f_5[0], 1);
			func_467(Local_1693.f_5[1], 1);
		}
		else
		{
			if ((func_29(Local_1693.f_8[0], 0) < 1f || func_29(Local_1693.f_8[1], 0) < 1f) || iLocal_1140)
			{
				func_466(Local_1693.f_8[0], 1);
				func_466(Local_1693.f_8[1], 1);
			}
			if (!iLocal_1140)
			{
				func_466(Local_1693.f_5[0], 0);
				func_466(Local_1693.f_5[1], 0);
			}
			else
			{
				func_466(Local_1693.f_5[0], 1);
				func_466(Local_1693.f_5[1], 1);
			}
		}
	}
}

void func_466(int iParam0, int iParam1)//Position - 0x1A457
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
		{
			if (func_29(iParam0, 0) < 1f || iParam1)
			{
				func_467(iParam0, 1);
			}
		}
	}
}

void func_467(int iParam0, bool bParam1)//Position - 0x1A493
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((bParam1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1) || !bParam1)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_TO_COORD_ANY_MEANS(0, -1214.3433f, -132.1107f, 40.2416f, 1f, 0, false, 786603, -1f);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
}

void func_468()//Position - 0x1A50A
{
	int iVar0;
	
	switch (iLocal_1208)
	{
		case 0:
			if (((iLocal_1156 || iLocal_1140) || func_29(Local_1693[0], 0) < 1f) || func_29(Local_1693[1], 0) < 1f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1693[0], false) && !ENTITY::IS_ENTITY_DEAD(Local_1693[1], false))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_1693[0], Local_1693[1], -1, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(Local_1693[1], Local_1693[0], -1, 0, 2);
				}
				if (((ENTITY::DOES_ENTITY_EXIST(Local_1693[1]) && ENTITY::DOES_ENTITY_EXIST(Local_1693.f_4)) && !PED::IS_PED_INJURED(Local_1693[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1693.f_4, false))
				{
					TASK::CLEAR_PED_TASKS(Local_1693[1]);
					TASK::TASK_ENTER_VEHICLE(Local_1693[1], Local_1693.f_4, 20000, 2, 1f, 1, 0, 0);
				}
				if (!func_58(&iLocal_1350))
				{
					func_55(&iLocal_1350);
				}
				iLocal_1208++;
			}
			break;
		
		case 1:
			if (!iLocal_1176)
			{
				if (func_58(&iLocal_1350))
				{
					if (func_52(&iLocal_1350) > 3f)
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_1693[0]) && ENTITY::DOES_ENTITY_EXIST(Local_1693.f_4)) && !PED::IS_PED_INJURED(Local_1693[0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1693.f_4, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_1693[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
							{
								TASK::CLEAR_PED_TASKS(Local_1693[0]);
								TASK::TASK_ENTER_VEHICLE(Local_1693[0], Local_1693.f_4, 20000, 1, 1f, 1, 0, 0);
								iLocal_1176 = 1;
							}
						}
					}
				}
				else
				{
					func_55(&iLocal_1350);
				}
			}
			if (!PED::IS_PED_INJURED(Local_1693[0]) && !PED::IS_PED_INJURED(Local_1693[1]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_1693[0], Local_1693.f_4, false) && PED::IS_PED_IN_VEHICLE(Local_1693[1], Local_1693.f_4, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1693.f_3, false) && !ENTITY::IS_ENTITY_DEAD(Local_1693.f_4, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_1693.f_3);
						func_56(&iLocal_1350);
					}
					iLocal_1208++;
				}
			}
			break;
		
		case 2:
			if (func_58(&iLocal_1350))
			{
				if (func_52(&iLocal_1350) > 3f)
				{
					if (!PED::IS_PED_INJURED(Local_1693.f_3) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1693.f_4, false))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1693.f_3, Local_1693.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, false, 2f);
						iLocal_1208++;
					}
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_1693.f_3, false) && !ENTITY::IS_ENTITY_DEAD(Local_1693.f_4, false))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1693.f_4) || iLocal_1179)
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_1693.f_3, Local_1693.f_4, 10f, 786603);
					iLocal_1208++;
				}
			}
			break;
		
		case 4:
			if (iLocal_1179)
			{
				if (!PED::IS_PED_INJURED(iLocal_1056[0]))
				{
					iVar0 = iLocal_1056[0];
				}
				else
				{
					iVar0 = func_31(25f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!func_28())
						{
							func_34(iVar0, 5, "OJAvaGUARD");
							func_6(&uLocal_1366, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
						}
					}
				}
				func_56(&iLocal_1350);
				iLocal_1208++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_469()//Position - 0x1A879
{
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1693.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_1693.f_3, false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1693.f_3, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1693[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1693[0], false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1693[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_1693[0], 2, false);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1693[1]) && !ENTITY::IS_ENTITY_DEAD(Local_1693[1], false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1693[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_1693[1], 2, false);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1693.f_8[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1693.f_8[0], false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1693.f_8[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1693.f_8[1]) && !ENTITY::IS_ENTITY_DEAD(Local_1693.f_8[1], false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1693.f_8[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1693.f_5[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1693.f_5[0], false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1693.f_5[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1693.f_5[1]) && !ENTITY::IS_ENTITY_DEAD(Local_1693.f_5[1], false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1693.f_5[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
	}
}

int func_470()//Position - 0x1AA83
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_1693.f_3, false))
	{
		if (PED::IS_PED_BEING_JACKED(Local_1693.f_3))
		{
			if (PED::GET_PEDS_JACKER(Local_1693.f_3) == PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_1693.f_4, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1693.f_4, false))
		{
			return 1;
		}
	}
	if (func_118(Local_1693[0], 0, &Local_358, &iLocal_369, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1693[1], 0, &Local_358, &iLocal_369, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1693.f_8[0], 0, &Local_358, &iLocal_369, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1693.f_8[1], 0, &Local_358, &iLocal_369, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1693.f_5[0], 0, &Local_358, &iLocal_369, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1693.f_5[1], 0, &Local_358, &iLocal_369, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_117(Local_1693.f_4))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -1231.326f, -201.7195f, 38.2114f, 20f))
	{
		return 1;
	}
	return 0;
}

void func_471()//Position - 0x1ABD2
{
	func_550();
}

int func_472()//Position - 0x1ABDE
{
	if (Global_4)
	{
		return 1;
	}
	if (Global_101533 == 7 || Global_101533 == 8)
	{
		return 1;
	}
	return 0;
}

void func_473(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x1AC0B
{
	if (func_549())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_101533.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_101529 = { Param0 };
		Global_101532 = fParam3;
		Global_101528 = 1;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(Global_101533.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_101533.f_20), 14);
		}
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_101533.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_101533.f_20), 24);
		}
		func_447(1);
	}
}

int func_474(struct<3> Param0, float fParam3)//Position - 0x1ACA0
{
	return func_475(&(Global_107514.f_2890), Param0, fParam3, 0);
}

int func_475(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x1ACBA
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_538(uParam0))
	{
		if (func_50(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.87164f, 185.62384f, 71.40275f, -807.48944f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_537(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
			func_536(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam4, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, false, false, true);
				}
				func_508(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_507(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_507(uParam0->f_11, 2);
						}
					}
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					func_506(iVar0, uParam0->f_11);
				}
				else if ((!func_503(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = func_502(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_497(iVar8);
					}
				}
				if (((Global_101533 != 13 && Global_101533 != 10) && Global_101533 != 11) && Global_101533 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_101533.f_3)) == Global_79167)
					{
						if (uParam0->f_12.f_66 == Global_113969.f_32753.f_69[21 /*78*/].f_66)
						{
							func_494(24, 0);
							func_497(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_476(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_476(int iParam0, int iParam1)//Position - 0x1AF6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_477(iParam0))
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
			iParam1 = Global_113969.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113969.f_32753.f_5592[iVar1] = iVar2;
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
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113969.f_32753.f_5590 = iParam1;
	Global_79084 = iParam0;
	Global_113969.f_32753.f_5588 = 1;
	func_307(iParam0, &(Global_113969.f_32753.f_5510));
}

int func_477(int iParam0)//Position - 0x1B16E
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_318(iParam0, 0, 0)) || func_318(iParam0, 1, 0)) || func_318(iParam0, 2, 0)) || func_303(iParam0) != 145) || func_493(iParam0)) || func_492(iParam0)) || func_491(iParam0)) || func_490(iParam0)) || !func_478(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_492(iParam0))
		{
		}
		if (func_492(iParam0))
		{
		}
		if (func_318(iParam0, 0, 0))
		{
		}
		if (func_318(iParam0, 1, 0))
		{
		}
		if (func_318(iParam0, 2, 0))
		{
		}
		if (func_303(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_478(int iParam0)//Position - 0x1B24B
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_479(iParam0, 0, -1))
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
		case joaat("towtruck3"):
		case joaat("towtruck4"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_479(int iParam0, bool bParam1, int iParam2)//Position - 0x1B409
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
		if (!func_489())
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
				else
				{
					iVar0++;
				}
				if (iParam0 == joaat("blimp"))
				{
					if ((((!func_488() && !func_487()) && !func_486()) && !func_485()) && !func_489())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_484() || MISC::IS_PC_VERSION()) || func_483())
					{
					}
					else if (!func_486())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_482(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_480(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_480(int iParam0)//Position - 0x1B58E
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_481())
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

int func_481()//Position - 0x1B65A
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_482(int iParam0, int iParam1)//Position - 0x1B671
{
	int iVar0;
	int iVar1;
	
	if (Global_2707347)
	{
		return 1;
	}
	if ((!Global_2707348 && iParam1 >= 0) && iParam1 <= 517)
	{
		if (BitTest(Global_1586521[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar1 = 0;
	switch (iParam0)
	{
		case joaat("vorschlaghammer"):
			iVar1 = Global_262145.f_35588[0] /* Tunable: LAUNCHPOSIX_VEHICLE_0 */;
			break;
		
		case joaat("driftvorschlag"):
			iVar1 = Global_262145.f_35588[1] /* Tunable: LAUNCHPOSIX_VEHICLE_1 */;
			break;
		
		case joaat("driftnebula"):
			iVar1 = Global_262145.f_35588[2] /* Tunable: LAUNCHPOSIX_VEHICLE_2 */;
			break;
		
		case joaat("driftcypher"):
			iVar1 = Global_262145.f_35588[3] /* Tunable: LAUNCHPOSIX_VEHICLE_3 */;
			break;
		
		case joaat("polimpaler5"):
			iVar1 = Global_262145.f_35588[4] /* Tunable: LAUNCHPOSIX_VEHICLE_4 */;
			break;
		
		case joaat("driftsentinel"):
			iVar1 = Global_262145.f_35588[5] /* Tunable: LAUNCHPOSIX_VEHICLE_5 */;
			break;
		
		case joaat("castigator"):
			iVar1 = Global_262145.f_35588[6] /* Tunable: LAUNCHPOSIX_VEHICLE_6 */;
			break;
		
		case joaat("polgreenwood"):
			iVar1 = Global_262145.f_35588[7] /* Tunable: LAUNCHPOSIX_VEHICLE_7 */;
			break;
		
		case joaat("pipistrello"):
			iVar1 = Global_262145.f_35588[8] /* Tunable: LAUNCHPOSIX_VEHICLE_8 */;
			break;
		
		case joaat("envisage"):
			iVar1 = Global_262145.f_35588[9] /* Tunable: LAUNCHPOSIX_VEHICLE_9 */;
			break;
		
		case joaat("poldorado"):
			iVar1 = Global_262145.f_35588[10] /* Tunable: LAUNCHPOSIX_VEHICLE_10 */;
			break;
		
		case joaat("paragon3"):
			iVar1 = Global_262145.f_35588[11] /* Tunable: LAUNCHPOSIX_VEHICLE_11 */;
			break;
		
		case joaat("dominator10"):
			iVar1 = Global_262145.f_35588[12] /* Tunable: LAUNCHPOSIX_VEHICLE_12 */;
			break;
		
		case joaat("poldominator10"):
			iVar1 = Global_262145.f_35588[13] /* Tunable: LAUNCHPOSIX_VEHICLE_13 */;
			break;
		
		case joaat("pizzaboy"):
			iVar1 = Global_262145.f_35588[14] /* Tunable: LAUNCHPOSIX_VEHICLE_14 */;
			break;
		
		case joaat("coquette5"):
			iVar1 = Global_262145.f_35588[15] /* Tunable: LAUNCHPOSIX_VEHICLE_15 */;
			break;
		
		case joaat("niobe"):
			iVar1 = Global_262145.f_35588[16] /* Tunable: LAUNCHPOSIX_VEHICLE_16 */;
			break;
		
		case joaat("eurosx32"):
			iVar1 = Global_262145.f_35588[17] /* Tunable: LAUNCHPOSIX_VEHICLE_17 */;
			break;
		
		case joaat("yosemite1500"):
			iVar1 = Global_262145.f_35588[18] /* Tunable: LAUNCHPOSIX_VEHICLE_18 */;
			break;
		
		case joaat("polimpaler6"):
			iVar1 = Global_262145.f_35588[19] /* Tunable: LAUNCHPOSIX_VEHICLE_19 */;
			break;
		
		case joaat("policet3"):
			iVar1 = Global_262145.f_35588[20] /* Tunable: LAUNCHPOSIX_VEHICLE_20 */;
			break;
	}
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_483()//Position - 0x1B8C2
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_484()//Position - 0x1B8D8
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_485()//Position - 0x1B8EE
{
	return 0;
}

int func_486()//Position - 0x1B8F7
{
	return 1;
}

int func_487()//Position - 0x1B900
{
	return 1;
}

int func_488()//Position - 0x1B909
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_489()//Position - 0x1B922
{
	int iVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
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
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
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

int func_490(int iParam0)//Position - 0x1B9DA
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_479(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_491(int iParam0)//Position - 0x1BA21
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98874[iVar0]))
		{
			if (Global_98874[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_492(int iParam0)//Position - 0x1BA5C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98844[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98844[iVar0], false))
			{
				if (Global_98844[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98844[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_493(int iParam0)//Position - 0x1BAD8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[24]))
	{
		if (iParam0 == Global_78179.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_78179.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_494(int iParam0, bool bParam1)//Position - 0x1BBC0
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_496(iParam0, 0))
		{
			func_495(iParam0, 1, 0);
			func_495(iParam0, 2, 0);
			func_495(iParam0, 3, 0);
			func_495(iParam0, 4, 0);
			func_495(iParam0, 0, 1);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_495(iParam0, 0, 0);
	}
}

void func_495(int iParam0, int iParam1, bool bParam2)//Position - 0x1BC1D
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113969.f_32753[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_32753[iParam0]), iParam1);
	}
}

int func_496(int iParam0, int iParam1)//Position - 0x1BC58
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

void func_497(int iParam0)//Position - 0x1BC78
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_501(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78179.f_139[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_78179.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_78179.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&(Global_78179.f_139[iParam0]));
			}
		}
		Global_78179[iParam0] = 1;
		if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_496(iParam0, 0)) && Global_79088.f_66 == 0) && Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] != 0) && Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] > 3) && (!func_499(0, Global_78179.f_555[0 /*21*/].f_12) || !func_499(1, Global_78179.f_555[0 /*21*/].f_12)))
			{
				func_498(&(Global_113969.f_32753.f_69[Global_78179.f_555[0 /*21*/].f_14 /*78*/]), &Global_79088);
				Global_79166 = Global_113969.f_32753.f_5591;
			}
			func_494(iParam0, 0);
		}
	}
}

void func_498(var uParam0, var uParam1)//Position - 0x1BDE7
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

int func_499(int iParam0, int iParam1)//Position - 0x1BEB3
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
	if (iParam0 < 0 || iParam0 >= func_500(&(Global_113969.f_32753.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_479(Global_113969.f_32753.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_500(var uParam0)//Position - 0x1BF26
{
	return *uParam0;
}

int func_501(var uParam0, int iParam1)//Position - 0x1BF31
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
			uParam0->f_4 = func_305(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_305(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_305(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_305(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_305(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_305(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_305(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_305(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_305(2, 1);
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
			if (func_489())
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
			if (func_489())
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
		uParam0->f_4 = Global_113969.f_32753.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_50(Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113969.f_32753.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113969.f_32753.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_50(Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_50(Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_502(int iParam0)//Position - 0x1D69C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_78179.f_484[iVar0], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78179.f_484[iVar0], false))
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_78179.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_78179.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_78179.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_503(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x1D75F
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_505(iParam0, Global_78179.f_139[38], 0))
			{
				func_497(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_505(iParam0, Global_78179.f_139[43], 1))
			{
				func_497(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_505(iParam0, uVar1[iVar6], 1) && func_504(ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], true), 2136.133f, 4780.5635f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_50(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], true), true) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78179.f_484[14], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_78179.f_484[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_78179.f_484[14]))
				{
					func_497(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78179.f_484[20], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_78179.f_484[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_78179.f_484[20]))
				{
					func_497(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_504(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x1D967
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_505(int iParam0, int iParam1, bool bParam2)//Position - 0x1D9E2
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

void func_506(int iParam0, int iParam1)//Position - 0x1DA43
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_98844[iVar0]))
		{
			Global_98844[iVar0] = iParam0;
			Global_98854[iVar0] = iParam1;
			Global_98864[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_98864[iVar0]))
			{
				Global_98892[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_98892[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_507(int iParam0, int iParam1)//Position - 0x1DAC5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98844[iVar0]))
		{
			if (iParam0 == 145 || Global_98854[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_98844[iVar0]) == func_305(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98844[iVar0], false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98844[iVar0], false, true);
						VEHICLE::DELETE_VEHICLE(&(Global_98844[iVar0]));
						Global_98854[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_508(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1DB63
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_529(iParam0))
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
			if (BitTest(uParam1->f_77, func_308(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_308(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_308(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_308(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_308(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_308(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_308(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_308(iVar3));
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
					if (BitTest(uParam1->f_77, func_308(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_308(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_308(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_308(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_308(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_308(4));
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
			MISC::SET_BIT(&(uParam1->f_77), func_308(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_308(iVar6)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_308(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
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
			if (func_527(uParam1->f_5) || func_527(uParam1->f_6))
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
		if (((BitTest(uParam1->f_77, 15) || func_526(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_525())
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
		if (uParam1->f_65 == -1 && !func_310(uParam1->f_66))
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
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
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
						func_524(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_524(iParam0, uParam1->f_69);
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
			func_516(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_308(iVar7 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, true);
				}
				iVar7++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if ((((func_511() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_510(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (!BitTest(uParam1->f_77, 22) && func_509(iParam0, 5f))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
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

int func_509(int iParam0, float fParam1)//Position - 0x1E268
{
	struct<3> Var0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3, false, false))
		{
			if (MISC::ABSF((Var0.f_2 - fVar3)) > fParam1)
			{
				return 1;
			}
		}
		else if (Var0.f_2 > (PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Var0.f_0, Var0.f_1) + fParam1))
		{
			return 1;
		}
		else if (Var0.f_2 > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_510(bool bParam0)//Position - 0x1E2D9
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_511()//Position - 0x1E2F3
{
	if ((((Global_4718592.f_117195 == 6 || Global_4718592.f_117195 == 7) || Global_4718592.f_117195 == 18) || Global_4718592.f_117195 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_514(7))
	{
		if (func_513(Global_2672855.f_4.f_16) || func_512(Global_2672855.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_512(var uParam0)//Position - 0x1E382
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882632[iVar0 /*146*/].f_82.f_63 != 0;
	}
	return 0;
}

int func_513(int iParam0)//Position - 0x1E3A6
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_11(iParam0, 9);
	}
	return 0;
}

bool func_514(int iParam0)//Position - 0x1E3C4
{
	return func_515(&(Global_2672855.f_194), iParam0);
}

var func_515(var uParam0, var uParam1)//Position - 0x1E3D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_516(int iParam0, var uParam1, var uParam2)//Position - 0x1E3FB
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
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, 255);
				}
				else
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, ((*uParam1)[iVar0] - 2));
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
				else if (func_522(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
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
	if (func_521(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_519(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_519(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_518(iParam0);
	if (func_517(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_517(int iParam0)//Position - 0x1E5D5
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
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE" /* GXT: Roll Cage and Chassis Upgrade */) || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG" /* GXT: Stunt Cage */))
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

void func_518(var uParam0)//Position - 0x1E6B1
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

int func_519(int iParam0, int iParam1)//Position - 0x1E708
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
		iVar0 = func_520(iParam0, 38) + 1;
		iVar1 = func_520(iParam0, 24) + 1;
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

int func_520(int iParam0, int iParam1)//Position - 0x1E7F1
{
	int iVar0;
	
	if ((STREAMING::IS_MODEL_VALID(Global_152860) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152860)) && Global_152861 == iParam1)
	{
		return Global_152862;
	}
	iVar0 = (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_522(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_521(int iParam0, int iParam1)//Position - 0x1E853
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
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14701 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14702 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14700 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14703 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14705 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14704 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
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
			if (Global_262145.f_18948 /* Tunable: ENABLE_IE_COMET3 */)
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
			if (Global_262145.f_18950 /* Tunable: ENABLE_IE_DIABLOUS2 */)
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
			if (Global_262145.f_18954 /* Tunable: ENABLE_IE_FCR2 */)
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
			if (Global_262145.f_18951 /* Tunable: ENABLE_IE_ELEGY */)
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
			if (Global_262145.f_18958 /* Tunable: ENABLE_IE_NERO2 */)
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
			if (Global_262145.f_18956 /* Tunable: ENABLE_IE_ITALIGTB2 */)
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
			if (Global_262145.f_18961 /* Tunable: ENABLE_IE_SPECTER2 */)
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
			if (Global_262145.f_20834 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
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
			if (Global_262145.f_20835 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
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

int func_522(int iParam0, int iParam1, int iParam2)//Position - 0x1EC32
{
	if (!func_523() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_523()//Position - 0x1EC56
{
	return 0;
}

void func_524(int iParam0, int iParam1)//Position - 0x1EC5F
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
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
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_525()//Position - 0x1ECD7
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_526(int iParam0)//Position - 0x1ECE8
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

int func_527(int iParam0)//Position - 0x1ED30
{
	if (!func_523() && func_528(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_528(int iParam0)//Position - 0x1ED50
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

int func_529(int iParam0)//Position - 0x1EDA3
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_535(PLAYER::PLAYER_ID(), -1))
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
	if (func_531(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_530(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_530(int iParam0)//Position - 0x1EE2A
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

int func_531(int iParam0)//Position - 0x1EE59
{
	if (func_534(iParam0) == 233)
	{
		return func_532(iParam0);
	}
	return -1;
}

int func_532(int iParam0)//Position - 0x1EE76
{
	if (func_533(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_533(int iParam0, int iParam1)//Position - 0x1EE99
{
	if (func_401(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_534(int iParam0)//Position - 0x1EEDD
{
	if (func_401(iParam0))
	{
		if (func_533(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_535(int iParam0, int iParam1)//Position - 0x1EF09
{
	int iVar0;
	
	if (func_73(iParam0, 1, 1))
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

void func_536(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x1EF56
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_501(&(Global_78179.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_78179.f_555[0 /*21*/], bParam4) <= fParam3)
			{
				func_497(iVar0);
			}
		}
		iVar0++;
	}
}

int func_537(var uParam0)//Position - 0x1EFA6
{
	if (func_538(uParam0))
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

int func_538(var uParam0)//Position - 0x1EFDB
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_479(uParam0->f_12.f_66, 0, -1))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_504(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_539()//Position - 0x1F03B
{
	return func_537(&(Global_107514.f_2890));
}

void func_540()//Position - 0x1F04E
{
	func_541(&(Global_107514.f_2890));
}

void func_541(var uParam0)//Position - 0x1F061
{
	if (func_538(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);
	}
}

void func_542()//Position - 0x1F07F
{
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_1132))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_1132);
	}
}

int func_543()//Position - 0x1F098
{
	if (!Global_101533 == 10 && !Global_101533 == 9)
	{
		return 0;
	}
	return Global_101533.f_2;
}

struct<39> func_544(int iParam0)//Position - 0x1F0C2
{
	struct<39> Var0;
	
	if (iParam0 == 0)
	{
		Var0.f_0 = 1;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_545(0) };
		Var0.f_22 = "Assassin_Valet";
		Var0.f_23 = 7000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -1700.0151f, -1066.335f, 12.144f };
		Var0.f_28 = { -1691.5642f, -1066.5138f, 12.076f };
		Var0.f_31 = 35.4714f;
		Var0.f_10 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_13 = { -4.8332f, 0f, -177.1283f };
		Var0.f_16 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_19 = { -4.8332f, 0f, -177.1283f };
		Var0.f_33 = { -1700.0983f, -1067.9395f, 12.1547f };
		Var0.f_36 = 162.4559f;
		Var0.f_37 = 1;
	}
	else if (iParam0 == 1)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { -699.3992f, -917.5043f, 18.2143f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_545(1) };
		Var0.f_22 = "Assassin_Multi";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -700.1855f, -917.9558f, 18.2143f };
		Var0.f_28 = { -699.9455f, -921.7786f, 18.0144f };
		Var0.f_31 = 78.0874f;
		Var0.f_10 = { -697.8064f, -921.4629f, 20.5104f };
		Var0.f_13 = { -13.5249f, 0f, 30.6033f };
		Var0.f_16 = { -702.4851f, -921.2747f, 21.1235f };
		Var0.f_19 = { -22.5196f, 0f, -43.0435f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 2)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { 215.1206f, -853.3143f, 29.3684f };
		Var0.f_4 = { 0f, 0f, 87.1787f };
		Var0.f_7 = { func_545(2) };
		Var0.f_22 = "Assassin_Hooker";
		Var0.f_23 = 3000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { 213.7994f, -853.9389f, 29.3929f };
		Var0.f_28 = { 205.2641f, -847.2667f, 29.4903f };
		Var0.f_31 = 140.1039f;
		Var0.f_10 = { 216.7391f, -856.0031f, 32.7127f };
		Var0.f_13 = { -25.1365f, 0f, 41.3912f };
		Var0.f_16 = { 210.4668f, -851.3092f, 32.1099f };
		Var0.f_19 = { -16.3326f, 0f, -127.0114f };
		Var0.f_33 = { 213.8733f, -853.8161f, 29.3922f };
		Var0.f_36 = 344.0112f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 3)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { -22.5499f, -107.3546f, 56.0161f };
		Var0.f_4 = { 0f, 0f, 269.7924f };
		Var0.f_7 = { func_545(3) };
		Var0.f_22 = "Assassin_Bus";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -22.3125f, -108.9183f, 56.0068f };
		Var0.f_28 = { -17.2677f, -118.5915f, 55.8734f };
		Var0.f_31 = 1.4374f;
		Var0.f_10 = { -26.1094f, -108.0298f, 59.052f };
		Var0.f_13 = { -21.2059f, 0f, -109.0176f };
		Var0.f_16 = { -20.1189f, -111.9639f, 59.4377f };
		Var0.f_19 = { -27.0037f, 0f, 29.464f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 4)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { 806.1469f, -1070.2103f, 27.3361f };
		Var0.f_4 = { 0f, 0f, 90f };
		Var0.f_7 = { func_545(4) };
		Var0.f_22 = "Assassin_Construction";
		Var0.f_23 = 8000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = 1;
		Var0.f_25 = { 804.9559f, -1070.4604f, 27.3361f };
		Var0.f_28 = { 799.8408f, -1079.1416f, 27.321f };
		Var0.f_31 = 69.6524f;
		Var0.f_10 = { 801.8048f, -1068.0675f, 30.3496f };
		Var0.f_13 = { -20.8953f, 0f, -132.9451f };
		Var0.f_16 = { 805.8168f, -1074.4961f, 28.9803f };
		Var0.f_19 = { -1.5585f, 0f, 6.9143f };
		Var0.f_33 = { 804.8776f, -1070.5231f, 27.3416f };
		Var0.f_36 = 287.8741f;
		Var0.f_37 = 0;
	}
	return Var0;
}

Vector3 func_545(int iParam0)//Position - 0x1F57A
{
	switch (iParam0)
	{
		case 0:
			return -1704.4268f, -1077.3157f, 12.1111f;
		
		case 1:
			return -700.429f, -916.7467f, 18.2143f;
		
		case 2:
			return 214.1641f, -852.8006f, 29.3929f;
		
		case 3:
			return -21.9871f, -107.4823f, 55.997f;
		
		case 4:
			return 806.1469f, -1070.2103f, 27.3361f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_546()//Position - 0x1F604
{
	bool bVar0;
	
	bVar0 = func_124(Global_113969.f_19966.f_1, 4096);
	Global_113969.f_19966.f_1 = 0;
	if (bVar0)
	{
		func_557(&(Global_113969.f_19966.f_1), 4096);
	}
}

void func_547()//Position - 0x1F63D
{
}

bool func_548()//Position - 0x1F645
{
	return func_538(&(Global_107514.f_2890));
}

int func_549()//Position - 0x1F658
{
	if (Global_101533 == 10 || Global_101533 == 9)
	{
		return 1;
	}
	return 0;
}

void func_550()//Position - 0x1F67C
{
	if (func_58(&iLocal_1338))
	{
		Global_113969.f_19966.f_5 = func_52(&iLocal_1338);
	}
	if (!iLocal_1178)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_LOST");
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\ASSASSINATION_MULTI");
	func_274();
	func_257();
	func_262();
	func_263(1);
	func_429();
	func_554();
	func_455(0);
	func_3();
	if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_28[0]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010.f_28[0], true, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Global_98010.f_28[0]));
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1130, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1131, false);
	func_542();
	func_92(&uLocal_1531, 0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_552(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1329, false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1330, false);
	func_551();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_551()//Position - 0x1F766
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_283(Local_1250[iVar0 /*3*/], 1) < 5f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1223.1853f, -185.4723f, 38.1753f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 119.5633f);
			}
		}
		iVar0++;
	}
}

void func_552(int iParam0, int iParam1)//Position - 0x1F7D6
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false))
		{
			if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (!func_553(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_101570 > 0)
	{
		Global_107514.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_104530.f_21[iParam1] = iVar0;
	}
}

int func_553(int iParam0, int iParam1)//Position - 0x1F83C
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_101570 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_107514.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_107514.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_107514.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_107514.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_104530.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_104530.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_104530.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_104530.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_554()//Position - 0x1F96F
{
	VEHICLE::REMOVE_VEHICLE_RECORDING(102, "ASSOJva");
	VEHICLE::REMOVE_VEHICLE_RECORDING(107, "ASSOJva");
	TASK::REMOVE_WAYPOINT_RECORDING("OJASva_101");
	TASK::REMOVE_WAYPOINT_RECORDING("OJASva_101a");
	TASK::REMOVE_WAYPOINT_RECORDING("OJASva_104");
}

void func_555()//Position - 0x1F9A3
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113969.f_9088 || func_46(0))
	{
		if (!func_556())
		{
			iVar0 = func_45();
			if (iVar0 != -1)
			{
				if (!func_39(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_92265[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_44();
		}
	}
}

int func_556()//Position - 0x1FA14
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

void func_557(var uParam0, int iParam1)//Position - 0x1FA52
{
	func_558(uParam0, iParam1);
}

void func_558(var uParam0, var uParam1)//Position - 0x1FA62
{
	*uParam0 = (*uParam0 || uParam1);
}

