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
	struct<3> Local_41 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int* iLocal_50 = NULL;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	char* sLocal_107 = NULL;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 12;
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
	var uLocal_812 = 1065353216;
	int iLocal_813 = 0;
	struct<9> Local_814 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	struct<3> Local_827[40];
	int iLocal_948 = 0;
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	char cLocal_952[32] = "";
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	struct<3> Local_960 = { 0, 0, 0 } ;
	struct<3> Local_963 = { 0, 0, 0 } ;
	struct<3> Local_966 = { 0, 0, 0 } ;
	struct<3> Local_969 = { 0, 0, 0 } ;
	struct<3> Local_972 = { 0, 0, 0 } ;
	struct<3> Local_975 = { 0, 0, 0 } ;
	struct<3> Local_978 = { 0, 0, 0 } ;
	struct<3> Local_981 = { 0, 0, 0 } ;
	struct<3> Local_984 = { 0, 0, 0 } ;
	struct<3> Local_987 = { 0, 0, 0 } ;
	int iLocal_990 = 0;
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
	iLocal_44 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_45 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_69 = 1076369579;
	iLocal_70 = 1076631591;
	fLocal_73 = 0.22f;
	fLocal_74 = 50f;
	fLocal_75 = -4f;
	fLocal_76 = 4f;
	fLocal_77 = -89f;
	fLocal_78 = 89f;
	fLocal_79 = 4f;
	fLocal_82 = 0f;
	fLocal_84 = 0.4f;
	fLocal_85 = 0.6f;
	fLocal_86 = 0.201f;
	fLocal_87 = 0.351f;
	iLocal_90 = -1;
	iLocal_105 = -1;
	iLocal_106 = -1;
	sLocal_107 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/, true);
	iLocal_108 = joaat("prop_taxi_meter_2");
	iLocal_110 = 3;
	iLocal_824 = -1;
	iLocal_825 = 263;
	StringCopy(&cLocal_952, "oddjobs@taxi@driver", 32);
	Local_963 = { 0f, 0f, 0f };
	Local_966 = { 0f, 0f, 0f };
	Local_978 = { 0f, -0.25f, 0.55f };
	Local_981 = { -0.3f, 1f, 0.35f };
	Local_984 = { -0.01f, 0.6f, 0.24f };
	Local_987 = { -5f, 0f, 0f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 64)
		{
			func_238(0);
		}
		else
		{
			func_238(1);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_231())
	{
		func_238(1);
	}
	while (true)
	{
		if (!func_230())
		{
			func_238(1);
		}
		if (func_229(iLocal_950))
		{
			func_238(1);
		}
		switch (iLocal_950)
		{
			case 1:
				func_64();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1D4
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_113419)
		{
			Global_113419 = 0;
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			}
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
			if ((iLocal_949 == 2 || iLocal_949 == 3) || iLocal_949 == 4)
			{
				func_7();
			}
		}
	}
	func_5();
	if (func_3(Global_113403) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113403, true))
	{
		if (!func_2(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) && !func_2(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
	else
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!PED::IS_PED_INJURED(Global_113404) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_113404, Global_113403, false))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Global_113404, Global_113403, PLAYER::PLAYER_PED_ID(), 8, 25f, 790564, 300f, 15f, true);
					}
				}
				else if (!PED::IS_PED_FLEEING(Global_113404))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_SMART_FLEE_PED(Global_113404, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					}
				}
				PED::SET_PED_KEEP_TASK(Global_113404, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113404, false);
			}
		}
		else if (!PED::IS_PED_INJURED(Global_113404) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
		{
			if (PED::IS_PED_IN_VEHICLE(Global_113404, Global_113403, false))
			{
				if (!func_2(Global_113404, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Global_113404, Global_113403, 12f, 790699);
				}
			}
			PED::SET_PED_KEEP_TASK(Global_113404, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113404, false);
		}
		func_238(1);
	}
}

int func_2(int iParam0, int iParam1)//Position - 0x3A2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_3(int iParam0)//Position - 0x3EA
{
	if (func_4(iParam0))
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

int func_4(int iParam0)//Position - 0x414
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

void func_5()//Position - 0x435
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (PED::DOES_GROUP_EXIST(func_6()))
	{
		PED::GET_GROUP_SIZE(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				TASK::CLEAR_PED_TASKS(iVar2);
				if (!ENTITY::IS_ENTITY_DEAD(Global_113403, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar2, Global_113403, false))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar2, Global_113403, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					TASK::CLEAR_PED_TASKS(iVar2);
					if (!ENTITY::IS_ENTITY_DEAD(Global_113403, false))
					{
						if (PED::IS_PED_IN_VEHICLE(iVar2, Global_113403, false))
						{
							TASK::TASK_LEAVE_VEHICLE(iVar2, Global_113403, 64);
						}
					}
				}
			}
		}
	}
}

int func_6()//Position - 0x4E4
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_7()//Position - 0x4F4
{
	bool bVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
	{
		if (!PED::IS_PED_INJURED(Global_113404))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113404, Global_113403))
			{
				if (!func_62())
				{
					bVar0 = true;
					if (func_55(func_56()) >= iLocal_101)
					{
						if (bLocal_65)
						{
							if (iLocal_101 > 0)
							{
								if (fLocal_72 > 75f)
								{
									iLocal_826 = 6;
								}
								else
								{
									iLocal_826 = 5;
								}
								func_45(Global_113404, &iLocal_826);
								func_9(func_56(), 21, iLocal_101);
								bVar0 = false;
							}
						}
						else if (iLocal_66 || iLocal_949 == 3)
						{
							if (iLocal_101 > 0)
							{
								iLocal_826 = 13;
								func_45(Global_113404, &iLocal_826);
								func_9(func_56(), 21, iLocal_101);
								bVar0 = false;
							}
						}
						else if (ENTITY::GET_ENTITY_SPEED(Global_113403) > 5f)
						{
							if (!func_8())
							{
								iLocal_826 = 12;
								func_45(Global_113404, &iLocal_826);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							}
						}
						else
						{
							iLocal_826 = 13;
							func_45(Global_113404, &iLocal_826);
							if (iLocal_101 > 0)
							{
								func_9(func_56(), 21, iLocal_101);
							}
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						if (iLocal_101 > 0)
						{
							iLocal_826 = 7;
							func_45(Global_113404, &iLocal_826);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						}
					}
				}
			}
		}
	}
}

int func_8()//Position - 0x644
{
	if (((Global_101392 == 13 || Global_101392 == 10) || Global_101392 == 11) || Global_101392 == 12)
	{
		return 0;
	}
	return 1;
}

int func_9(int iParam0, int iParam1, int iParam2)//Position - 0x682
{
	if (func_44(iParam0) == 3)
	{
		return 0;
	}
	if (func_44(iParam0) == 4)
	{
		return 0;
	}
	return func_10(func_44(iParam0), 0, iParam1, iParam2, 0);
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6B6
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_43();
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
					func_42(99, 1);
					func_41(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_41(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_41(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_25(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_22(5))
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
							func_41(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_41(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_41(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_22(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_41(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_41(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_41(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_41(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_41(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_41(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_41(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_41(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_41(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_41(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_41(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_41(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_22(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_41(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_41(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_41(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_41(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_21(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_42(95, iParam3);
					break;
				
				case 1:
					func_42(97, iParam3);
					break;
				
				case 2:
					func_42(96, iParam3);
					break;
			}
			func_42(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_13(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_13(bVar1);
	}
	iVar5 = (Global_61212[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61212[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61212[iVar2] = 2147483647;
				}
				else
				{
					Global_61212[iVar2] = (Global_61212[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_41(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_41(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_41(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61212[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61212[iVar2];
			Global_61212[iVar2] = (Global_61212[iVar2] - iParam3);
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
		Global_114372.f_20567.f_233[iVar2 /*69*/].f_2[Global_114372.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_114372.f_20567.f_233[iVar2 /*69*/].f_2[Global_114372.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114372.f_20567.f_233[iVar2 /*69*/].f_2[Global_114372.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114372.f_20567.f_233[iVar2 /*69*/]++;
		Global_114372.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_114372.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_114372.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_12(iParam0);
	if (Global_43922 == 15)
	{
		func_11(0);
	}
	return 1;
}

void func_11(bool bParam0)//Position - 0xCB5
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
			Global_114372.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_114372.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_114372.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_114372.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_114372.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_114372.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61220[iVar0 /*3*/][0] = Global_114372.f_20567[iVar0];
		Global_61220.f_31[iVar0 /*3*/][0] = Global_114372.f_20567.f_11[iVar0];
		Global_61220.f_62[iVar0 /*3*/][0] = Global_114372.f_20567.f_22[iVar0];
		Global_61220.f_93[iVar0 /*3*/][0] = Global_114372.f_20567.f_33[iVar0];
		Global_61220.f_124[iVar0 /*3*/][0] = Global_114372.f_20567.f_44[iVar0];
		Global_61220.f_155[iVar0 /*3*/][0] = Global_114372.f_20567.f_55[iVar0];
		Global_61220.f_186[iVar0 /*3*/][0] = Global_114372.f_20567.f_66[iVar0];
		Global_61220.f_217[iVar0 /*3*/][0] = Global_114372.f_20567.f_77[iVar0];
		Global_61220.f_248[iVar0 /*3*/][0] = Global_114372.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61220[iVar0 /*3*/][1] = Global_114372.f_20567[iVar0];
			Global_61220.f_31[iVar0 /*3*/][1] = Global_114372.f_20567.f_11[iVar0];
			Global_61220.f_62[iVar0 /*3*/][1] = Global_114372.f_20567.f_22[iVar0];
			Global_61220.f_93[iVar0 /*3*/][1] = Global_114372.f_20567.f_33[iVar0];
			Global_61220.f_124[iVar0 /*3*/][1] = Global_114372.f_20567.f_44[iVar0];
			Global_61220.f_155[iVar0 /*3*/][1] = Global_114372.f_20567.f_55[iVar0];
			Global_61220.f_186[iVar0 /*3*/][1] = Global_114372.f_20567.f_66[iVar0];
			Global_61220.f_217[iVar0 /*3*/][1] = Global_114372.f_20567.f_77[iVar0];
			Global_61220.f_248[iVar0 /*3*/][1] = Global_114372.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_12(int iParam0)//Position - 0xF37
{
	int iVar0;
	
	iVar0 = Global_61212[iParam0];
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

void func_13(bool bParam0)//Position - 0xF91
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_20(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_20(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_20(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_20(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_16(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_16(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_16(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_16(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_16(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_16(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_114372.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_114372.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_114372.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_15() /*5569*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_114372.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_15() /*5569*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_14(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_14(bool bParam0)//Position - 0x1108
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

int func_15()//Position - 0x11FC
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_16(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1209
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_17(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_17(int iParam0, var uParam1)//Position - 0x1237
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_18(uParam1));
}

int func_18(var uParam0)//Position - 0x124C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2750546 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750546 = 1;
		}
	}
	return iVar0;
}

int func_19()//Position - 0x1280
{
	return Global_1574925;
}

void func_20(int iParam0, bool bParam1, int iParam2)//Position - 0x128C
{
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_21(int iParam0)//Position - 0x12AA
{
	func_42(93, iParam0);
	func_42(29, iParam0);
	func_42(30, iParam0);
}

int func_22(int iParam0)//Position - 0x12CA
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
		return func_24(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_24(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_24(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_24(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_23(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_23(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_23(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_23(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_23(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_23(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_114372.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_15() /*5569*/].f_681.f_10, iParam0);
}

int func_23(int iParam0, int iParam1)//Position - 0x146A
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_17(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_24(int iParam0, int iParam1)//Position - 0x1499
{
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_25(bool bParam0)//Position - 0x14B5
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
		func_40(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_26(27, 1);
	return 1;
}

int func_26(int iParam0, int iParam1)//Position - 0x156C
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_27(iParam0, iParam1);
}

int func_27(int iParam0, int iParam1)//Position - 0x1587
{
	if (func_39(14) && !func_38(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33079 != 0 && !Global_79248)
	{
		return 0;
	}
	if (func_37(&Global_4543283))
	{
		if (func_35(&Global_4543283, iParam0))
		{
			return 0;
		}
		if (func_28(&Global_4543283, iParam0))
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

int func_28(var uParam0, int iParam1)//Position - 0x1624
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	func_31(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_29(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_29(var uParam0, int iParam1)//Position - 0x16D5
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_30(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_30(var uParam0, int iParam1)//Position - 0x1750
{
	return (*uParam0)[iParam1] == 78;
}

void func_31(var uParam0)//Position - 0x1761
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_32(uParam0, iVar0);
		iVar0++;
	}
	func_33(uParam0, (Global_4543282 - 0.5f));
}

void func_32(var uParam0, int iParam1)//Position - 0x1795
{
	(*uParam0)[iParam1] = 78;
}

void func_33(var uParam0, float fParam1)//Position - 0x17A5
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

float func_34(var uParam0)//Position - 0x17C2
{
	return uParam0->f_80;
}

bool func_35(var uParam0, int iParam1)//Position - 0x17CE
{
	return func_36(uParam0, iParam1) != -1;
}

int func_36(var uParam0, int iParam1)//Position - 0x17E0
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

bool func_37(var uParam0)//Position - 0x180D
{
	return uParam0->f_79 == 1;
}

int func_38(int iParam0)//Position - 0x181B
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

bool func_39(int iParam0)//Position - 0x186B
{
	return Global_43922 == iParam0;
}

int func_40(int iParam0, int iParam1)//Position - 0x1879
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

void func_41(int iParam0, int iParam1)//Position - 0x18CA
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_42(int iParam0, int iParam1)//Position - 0x18ED
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59780[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59780[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59780[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59780[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_43()//Position - 0x194A
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61212[0] == iVar0)
		{
			Global_61212[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61212[1] == iVar0)
		{
			Global_61212[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61212[2] == iVar0)
		{
			Global_61212[2] = iVar0;
		}
	}
}

int func_44(int iParam0)//Position - 0x19BF
{
	return Global_2139[iParam0 /*29*/].f_17;
}

void func_45(int iParam0, int iParam1)//Position - 0x19D0
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!func_51(iParam0, 0))
		{
			if (!*iParam1 == 0)
			{
				if (*iParam1 == 1)
				{
					func_49(iParam0, "TAXID_WHERE_TO", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 2)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_46();
						*iParam1 = 3;
					}
				}
				else if (*iParam1 == 3)
				{
					func_49(iParam0, "TAXID_BEGIN_JOURNEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 4)
				{
					func_49(iParam0, "TAXID_BANTER", 24);
					*iParam1 = 22;
				}
				else if (*iParam1 == 5)
				{
					func_49(iParam0, "TAXID_ARRIVE_AT_DEST", 7);
					*iParam1 = 23;
				}
				else if (*iParam1 == 6)
				{
					func_49(iParam0, "TAXID_CLOSE_AS_POSS", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 7)
				{
					func_49(iParam0, "TAXID_NO_MONEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 9)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
						}
						func_49(PLAYER::PLAYER_PED_ID(), "TAXI_CHANGE_DEST", 7);
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
						}
						*iParam1 = 10;
					}
				}
				else if (*iParam1 == 10)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_46();
						*iParam1 = 11;
					}
				}
				else if (*iParam1 == 11)
				{
					func_49(iParam0, "TAXID_CHANGE_DEST", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 12)
				{
					func_49(iParam0, "TAXID_RUN_AWAY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 13)
				{
					func_49(iParam0, "TAXID_GET_OUT_EARLY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 14)
				{
					func_49(iParam0, "TAXID_TRASHED", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 15)
				{
					if (!Global_113424)
					{
						func_49(iParam0, "TAXID_AFFORD_PART_JOURNEY", 7);
						Global_113424 = 1;
					}
					*iParam1 = 22;
				}
				else if (*iParam1 == 16)
				{
					func_49(iParam0, "TAXID_TAKE_FIRST_CAB", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 17)
				{
					*iParam1 = 18;
				}
				else if (*iParam1 == 18)
				{
					if (AUDIO::IS_RADIO_RETUNING())
					{
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 4000)
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
							if (bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
							}
							switch (AUDIO::GET_PLAYER_RADIO_STATION_INDEX())
							{
								case 0:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_VIBE", 7);
									break;
								
								case 1:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_LRR", 7);
									break;
								
								case 2:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_JNR", 7);
									break;
								
								case 3:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_MASSIVEB", 7);
									break;
								
								case 4:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_K109", 7);
									break;
								
								case 5:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_WKTT", 7);
									break;
								
								case 6:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_LCHC", 7);
									break;
								
								case 7:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_JOURNEY", 7);
									break;
								
								case 8:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_FUSION", 7);
									break;
								
								case 9:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_BEAT", 7);
									break;
								
								case 10:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_BROKER", 7);
									break;
								
								case 11:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_VLADIVOSTOK", 7);
									break;
								
								case 12:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_PLR", 7);
									break;
								
								case 13:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_SANJUAN", 7);
									break;
								
								case 14:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_FRANCOIS", 7);
									break;
								
								case 15:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_CLASSICS", 7);
									break;
							}
							if (bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
							}
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 19)
				{
					*iParam1 = 22;
				}
				else if (*iParam1 == 20)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
						}
						func_49(PLAYER::PLAYER_PED_ID(), "TAXI_STEP_ON_IT", 7);
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
						}
						*iParam1 = 21;
					}
				}
				else if (*iParam1 == 21)
				{
					func_49(iParam0, "TAXID_SPEED_UP", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 23)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
						}
						func_49(PLAYER::PLAYER_PED_ID(), "THANKS", 7);
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 22)
				{
					if (!func_51(iParam0, 0))
					{
						*iParam1 = 0;
					}
				}
			}
		}
	}
}

void func_46()//Position - 0x1E7D
{
	char* sVar0;
	bool bVar1;
	
	sVar0 = func_47();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		bVar1 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
		}
		func_49(PLAYER::PLAYER_PED_ID(), sVar0, 7);
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
		}
	}
}

char* func_47()//Position - 0x1EC9
{
	char cVar0[32];
	
	StringCopy(&cVar0, ZONE::GET_NAME_OF_ZONE(func_48(Local_41.f_0)), 32);
	if (MISC::ARE_STRINGS_EQUAL("SanAnd" /* GXT: San Andreas */, &cVar0))
	{
		return "LOCATION_SAN_ANDREAS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Alamo" /* GXT: Alamo Sea */, &cVar0))
	{
		return "LOCATION_ALAMO_SEA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Alta" /* GXT: Alta */, &cVar0))
	{
		return "LOCATION_ALTA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Airp" /* GXT: Los Santos International Airport */, &cVar0))
	{
		return "LOCATION_LOS_SANTOS_INTERNATIONAL_AIRPORT";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ArmyB" /* GXT: Fort Zancudo */, &cVar0))
	{
		return "LOCATION_FORT_ZANCUDO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("BhamCa" /* GXT: Banham Canyon */, &cVar0))
	{
		return "LOCATION_BANHAM_CANYON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Banning" /* GXT: Banning */, &cVar0))
	{
		return "LOCATION_BANNING";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Baytre" /* GXT: Baytree Canyon */, &cVar0))
	{
		return "LOCATION_BAYTREE_CANYON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Beach" /* GXT: Vespucci Beach */, &cVar0))
	{
		return "LOCATION_VESPUCCI_BEACH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("BradT" /* GXT: Braddock Tunnel */, &cVar0))
	{
		return "LOCATION_BRADDOCK_TUNNEL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("BradP" /* GXT: Braddock Pass */, &cVar0))
	{
		return "LOCATION_BRADDOCK_PASS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Burton" /* GXT: Burton */, &cVar0))
	{
		return "LOCATION_BURTON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CANNY" /* GXT: Raton Canyon */, &cVar0))
	{
		return "LOCATION_RATON_CANYON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CCreak" /* GXT: Cassidy Creek */, &cVar0))
	{
		return "LOCATION_CASSIDY_CREEK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CalafB" /* GXT: Calafia Bridge */, &cVar0))
	{
		return "LOCATION_CALAFIA_BRIDGE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ChamH" /* GXT: Chamberlain Hills */, &cVar0))
	{
		return "LOCATION_CHAMBERLAIN_HILLS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CHU" /* GXT: Chumash */, &cVar0))
	{
		return "LOCATION_CHUMASH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CHIL" /* GXT: Vinewood Hills */, &cVar0))
	{
		return "LOCATION_VINEWOOD_HILLS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("COSI" /* GXT: Countryside */, &cVar0))
	{
		return "LOCATION_COUNTRYSIDE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CMSW" /* GXT: Chiliad Mountain State Wilderness */, &cVar0))
	{
		return "LOCATION_CHILIAD_MOUNTAIN_STATE_WILDERNESS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Cypre" /* GXT: Cypress Flats */, &cVar0))
	{
		return "LOCATION_CYPRESS_FLATS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Davis" /* GXT: Davis */, &cVar0))
	{
		return "LOCATION_DAVIS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Desrt" /* GXT: Grand Senora Desert */, &cVar0))
	{
		return "LOCATION_GRAND_SENORA_DESERT";
	}
	else if (MISC::ARE_STRINGS_EQUAL("DelBe" /* GXT: Del Perro Beach */, &cVar0))
	{
		return "LOCATION_DEL_PERRO_BEACH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("DelPe" /* GXT: Del Perro */, &cVar0))
	{
		return "LOCATION_DEL_PERRO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("DelSol" /* GXT: La Puerta */, &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Downt" /* GXT: Downtown */, &cVar0))
	{
		return "LOCATION_DOWNTOWN";
	}
	else if (MISC::ARE_STRINGS_EQUAL("DTVine" /* GXT: Downtown Vinewood */, &cVar0))
	{
		return "LOCATION_DOWNTOWN_VINEWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Eclips" /* GXT: Eclipse */, &cVar0))
	{
		return "LOCATION_ECLIPSE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ELSant" /* GXT: East Los Santos */, &cVar0))
	{
		return "LOCATION_EAST_LOS_SANTOS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("EBuro" /* GXT: El Burro Heights */, &cVar0))
	{
		return "LOCATION_EL_BURRO_HEIGHTS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ELGorl" /* GXT: El Gordo Lighthouse */, &cVar0))
	{
		return "LOCATION_EL_GORDO_LIGHTHOUSE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Elysian" /* GXT: Elysian Island */, &cVar0))
	{
		return "LOCATION_ELYSIAN_ISLAND";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Galli" /* GXT: Galileo Park */, &cVar0))
	{
		return "LOCATION_GALILEO_PARK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Galfish" /* GXT: Galilee */, &cVar0))
	{
		return "LOCATION_GALILEE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Greatc" /* GXT: Great Chaparral */, &cVar0))
	{
		return "LOCATION_GREAT_CHAPARRAL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Golf" /* GXT: GWC and Golfing Society */, &cVar0))
	{
		return "LOCATION_GWC_AND_GOLFING_SOCIETY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("GrapeS" /* GXT: Grapeseed */, &cVar0))
	{
		return "LOCATION_GRAPESEED";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Hawick" /* GXT: Hawick */, &cVar0))
	{
		return "LOCATION_HAWICK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Harmo" /* GXT: Harmony */, &cVar0))
	{
		return "LOCATION_HARMONY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Heart" /* GXT: Heart Attacks Beach */, &cVar0))
	{
		return "LOCATION_HEART_ATTACKS_BEACH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("HumLab" /* GXT: Humane Labs and Research */, &cVar0))
	{
		return "LOCATION_HUMANE_LABS_AND_RESEARCH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("HORS" /* GXT: Vinewood Racetrack */, &cVar0))
	{
		return "LOCATION_VINEWOOD_RACETRACK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Koreat" /* GXT: Little Seoul */, &cVar0))
	{
		return "LOCATION_LITTLE_SEOUL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Jail" /* GXT: Bolingbroke Penitentiary */, &cVar0))
	{
		return "LOCATION_BOLINGBROKE_PENITENTIARY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LAct" /* GXT: Land Act Reservoir */, &cVar0))
	{
		return "LOCATION_LAND_ACT_RESERVOIR";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LDam" /* GXT: Land Act Dam */, &cVar0))
	{
		return "LOCATION_LAND_ACT_DAM";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Lago" /* GXT: Lago Zancudo */, &cVar0))
	{
		return "LOCATION_LAGO_ZANCUDO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LegSqu" /* GXT: Legion Square */, &cVar0))
	{
		return "LOCATION_LEGION_SQUARE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LosSF" /* GXT: Los Santos Freeway */, &cVar0))
	{
		return "LOCATION_LOS_SANTOS_FREEWAY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LMesa" /* GXT: La Mesa */, &cVar0))
	{
		return "LOCATION_LA_MESA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LosPuer" /* GXT: La Puerta */, &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LosPFy" /* GXT: La Puerta Fwy */, &cVar0))
	{
		return "LOCATION_LA_PUERTA_FWY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Mirr" /* GXT: Mirror Park */, &cVar0))
	{
		return "LOCATION_MIRROR_PARK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Morn" /* GXT: Morningwood */, &cVar0))
	{
		return "LOCATION_MORNINGWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Murri" /* GXT: Murrieta Heights */, &cVar0))
	{
		return "LOCATION_MURRIETA_HEIGHTS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("MTChil" /* GXT: Mount Chiliad */, &cVar0))
	{
		return "LOCATION_MOUNT_CHILIAD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("MTJose" /* GXT: Mount Josiah */, &cVar0))
	{
		return "LOCATION_MOUNT_JOSIAH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("MTGordo" /* GXT: Mount Gordo */, &cVar0))
	{
		return "LOCATION_MOUNT_GORDO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Movie" /* GXT: Richards Majestic */, &cVar0))
	{
		return "LOCATION_RICHARDS_MAJESTIC";
	}
	else if (MISC::ARE_STRINGS_EQUAL("NCHU" /* GXT: North Chumash */, &cVar0))
	{
		return "LOCATION_NORTH_CHUMASH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Oceana" /* GXT: Pacific Ocean */, &cVar0))
	{
		return "LOCATION_PACIFIC_OCEAN";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Observ" /* GXT: Galileo Observatory */, &cVar0))
	{
		return "LOCATION_GALILEO_OBSERVATORY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Palmpow" /* GXT: Palmer-Taylor Power Station */, &cVar0))
	{
		return "LOCATION_PALMER-TAYLOR_POWER_STATION";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PBOX" /* GXT: Pillbox Hill */, &cVar0))
	{
		return "LOCATION_PILLBOX_HILL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PBluff" /* GXT: Pacific Bluffs */, &cVar0))
	{
		return "LOCATION_PACIFIC_BLUFFS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Paleto" /* GXT: Paleto Bay */, &cVar0))
	{
		return "LOCATION_PALETO_BAY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PalCov" /* GXT: Paleto Cove */, &cVar0))
	{
		return "LOCATION_PALETO_COVE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PalFor" /* GXT: Paleto Forest */, &cVar0))
	{
		return "LOCATION_PALETO_FOREST";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PalHigh" /* GXT: Palomino Highlands */, &cVar0))
	{
		return "LOCATION_PALOMINO_HIGHLANDS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ProcoB" /* GXT: Procopio Beach */, &cVar0))
	{
		return "LOCATION_PROCOPIO_BEACH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Prol" /* GXT: North Yankton */, &cVar0))
	{
		return "LOCATION_NORTH_YANKTON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("RTRAK" /* GXT: Redwood Lights Track */, &cVar0))
	{
		return "LOCATION_REDWOOD_LIGHTS_TRACK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Rancho" /* GXT: Rancho */, &cVar0))
	{
		return "LOCATION_RANCHO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("RGLEN" /* GXT: Richman Glen */, &cVar0))
	{
		return "LOCATION_RICHMAN_GLEN";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Richm" /* GXT: Richman */, &cVar0))
	{
		return "LOCATION_RICHMAN";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Rockf" /* GXT: Rockford Hills */, &cVar0))
	{
		return "LOCATION_ROCKFORD_HILLS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("SANDY" /* GXT: Sandy Shores */, &cVar0))
	{
		return "LOCATION_SANDY_SHORES";
	}
	else if (MISC::ARE_STRINGS_EQUAL("TongvaH" /* GXT: Tongva Hills */, &cVar0))
	{
		return "LOCATION_TONGVA_HILLS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("TongvaV" /* GXT: Tongva Valley */, &cVar0))
	{
		return "LOCATION_TONGVA_VALLEY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("East_V" /* GXT: East Vinewood */, &cVar0))
	{
		return "LOCATION_EAST_VINEWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Zenora" /* GXT: Senora Freeway */, &cVar0))
	{
		return "LOCATION_SENORA_FREEWAY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Slab" /* GXT: Stab City */, &cVar0))
	{
		return "LOCATION_SLAB_CITY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("SKID" /* GXT: Mission Row */, &cVar0))
	{
		return "LOCATION_MISSION_ROW";
	}
	else if (MISC::ARE_STRINGS_EQUAL("SLSant" /* GXT: South Los Santos */, &cVar0))
	{
		return "LOCATION_SOUTH_LOS_SANTOS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Stad" /* GXT: Maze Bank Arena */, &cVar0))
	{
		return "LOCATION_MAZE_BANK_ARENA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Tatamo" /* GXT: Tataviam Mountains */, &cVar0))
	{
		return "LOCATION_TATAVIAM_MOUNTAINS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Termina" /* GXT: Terminal */, &cVar0))
	{
		return "LOCATION_TERMINAL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("TEXTI" /* GXT: Textile City */, &cVar0))
	{
		return "LOCATION_TEXTILE_CITY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("WVine" /* GXT: West Vinewood */, &cVar0))
	{
		return "LOCATION_WEST_VINEWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("UtopiaG" /* GXT: Utopia Gardens */, &cVar0))
	{
		return "LOCATION_UTOPIA_GARDENS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Vesp" /* GXT: Vespucci */, &cVar0))
	{
		return "LOCATION_VESPUCCI";
	}
	else if (MISC::ARE_STRINGS_EQUAL("VCana" /* GXT: Vespucci Canals */, &cVar0))
	{
		return "LOCATION_VESPUCCI_CANALS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Vine" /* GXT: Vinewood */, &cVar0))
	{
		return "LOCATION_VINEWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("WMirror" /* GXT: West Mirror Drive */, &cVar0))
	{
		return "LOCATION_W_MIRROR_DRIVE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("WindF" /* GXT: Ron Alternates Wind Farm */, &cVar0))
	{
		return "LOCATION_RON_ALTERNATES_WIND_WARM";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Zancudo" /* GXT: Zancudo River */, &cVar0))
	{
		return "LOCATION_ZANCUDO_RIVER";
	}
	else if (MISC::ARE_STRINGS_EQUAL("SanChia" /* GXT: San Chianski Mountain Range */, &cVar0))
	{
		return "LOCATION_SAN_CHIANSKI_MOUNTAIN_RANGE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("STRAW" /* GXT: Strawberry */, &cVar0))
	{
		return "LOCATION_STRAWBERRY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("zQ_UAR" /* GXT: Davis Quartz */, &cVar0))
	{
		return "LOCATION_DAVIS_QUARTZ";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ZP_ORT" /* GXT: Port of South Los Santos */, &cVar0))
	{
		return "LOCATION_PORT_OF_SOUTH_LOS_SANTOS";
	}
	return "";
}

Vector3 func_48(int iParam0)//Position - 0x27F2
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var0 = { 0f, 0f, 0f };
	iVar7 = HUD::GET_BLIP_INFO_ID_TYPE(iParam0);
	if (iVar7 == 1)
	{
		iVar3 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar3, true) };
		}
	}
	else if (iVar7 == 2)
	{
		iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0));
		if (!PED::IS_PED_INJURED(iVar4))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar4, true) };
		}
	}
	else if (iVar7 == 3)
	{
		iVar5 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar5, true) };
		}
	}
	else if (iVar7 == 4)
	{
		Var0 = { HUD::GET_BLIP_COORDS(iParam0) };
	}
	else if (iVar7 == 6)
	{
		iVar6 = HUD::GET_BLIP_INFO_ID_PICKUP_INDEX(iParam0);
		if (OBJECT::DOES_PICKUP_EXIST(iVar6))
		{
			Var0 = { OBJECT::GET_PICKUP_COORDS(iVar6) };
		}
	}
	else if (iVar7 == 5)
	{
		Var0 = { HUD::GET_BLIP_COORDS(iParam0) };
	}
	return Var0;
}

void func_49(int iParam0, char* sParam1, int iParam2)//Position - 0x28CD
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_50(iParam2), 1);
}

int func_50(int iParam0)//Position - 0x28E4
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

int func_51(int iParam0, bool bParam1)//Position - 0x2AD9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0))
		{
			func_53("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			func_53("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (func_52())
	{
		func_53("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			func_53("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::DOES_GROUP_EXIST(func_6()))
		{
			PED::GET_GROUP_SIZE(func_6(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = PED::GET_PED_AS_GROUP_MEMBER(func_6(), iVar2);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
						{
							func_53("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

int func_52()//Position - 0x2BB4
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_53(char* sParam0)//Position - 0x2BD6
{
	func_54(sParam0);
}

void func_54(char* sParam0)//Position - 0x2BE4
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

int func_55(int iParam0)//Position - 0x2BF7
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_56()//Position - 0x2C4F
{
	func_57();
	return Global_114372.f_2366.f_539.f_4321;
}

void func_57()//Position - 0x2C68
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_60(Global_114372.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_59(PLAYER::PLAYER_PED_ID());
			if (func_58(iVar0) && (!func_39(14) || Global_113320))
			{
				if (Global_114372.f_2366.f_539.f_4321 != iVar0 && func_58(Global_114372.f_2366.f_539.f_4321))
				{
					Global_114372.f_2366.f_539.f_4322 = Global_114372.f_2366.f_539.f_4321;
				}
				Global_114372.f_2366.f_539.f_4323 = iVar0;
				Global_114372.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114372.f_2366.f_539.f_4321 != 145)
			{
				Global_114372.f_2366.f_539.f_4323 = Global_114372.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114372.f_2366.f_539.f_4321 = 145;
}

bool func_58(int iParam0)//Position - 0x2D65
{
	return iParam0 < 3;
}

int func_59(int iParam0)//Position - 0x2D71
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_60(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_60(int iParam0)//Position - 0x2DAE
{
	if (func_58(iParam0))
	{
		return func_61(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_61(int iParam0)//Position - 0x2DD3
{
	return Global_2139[iParam0 /*29*/];
}

int func_62()//Position - 0x2DE2
{
	if (func_63(1) == func_56())
	{
		return 1;
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x2DFB
{
	return Global_114372.f_24907[iParam0 /*4*/];
}

void func_64()//Position - 0x2E0E
{
	if (func_227())
	{
		func_225();
		func_224();
		func_223();
		if (!func_220())
		{
			func_214();
		}
		func_213();
		if (iLocal_949 != 4)
		{
			func_45(Global_113404, &iLocal_826);
			if (iLocal_949 != 0)
			{
				if (func_211())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_111))
					{
						func_188();
						iLocal_58 = 1;
					}
				}
				func_179();
			}
		}
		switch (iLocal_949)
		{
			case 0:
				if (!PED::IS_PED_INJURED(Global_113404) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113404, Global_113403))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_idle", 3))
						{
							if (!func_2(Global_113404, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_113404, Global_113403, 1, 1000000);
							}
						}
					}
				}
				if (func_178())
				{
					if (func_177() && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_188();
						iLocal_826 = 1;
						iLocal_948 = 0;
						Global_113440 = 0;
						iLocal_88 = 0;
						iLocal_66 = 0;
						iLocal_56 = 0;
						iLocal_58 = 1;
						func_176();
						iLocal_949 = 1;
					}
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(Global_113404) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113404, Global_113403))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_idle", 3))
						{
							if (!func_2(Global_113404, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_113404, Global_113403, 1, 1000000);
							}
						}
					}
				}
				func_175(&Global_113403, iLocal_990);
				if (func_174())
				{
					STATS::STAT_INCREMENT(joaat("SP_NUMBER_OF_TAXIS_USED"), 1f);
					iLocal_58 = 1;
					iLocal_949 = 2;
				}
				break;
			
			case 2:
				if (func_174())
				{
					func_171();
				}
				break;
			
			case 3:
				func_170();
				break;
			
			case 4:
				func_80();
				break;
		}
		func_65();
	}
	else
	{
		iLocal_950 = 2;
	}
}

void func_65()//Position - 0x3012
{
	char* sVar0;
	
	if (!func_220())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_112))
		{
			if (iLocal_949 != 0)
			{
				sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/, true);
				if (!MISC::ARE_STRINGS_EQUAL(sLocal_107, sVar0))
				{
					sLocal_107 = sVar0;
					iLocal_58 = 1;
				}
				if (iLocal_58)
				{
					Local_814 = { func_79() };
					func_77(&uLocal_113);
					func_76(0, 75, "TXM_EXIT" /* GXT: Exit */, &uLocal_113, 0, 365);
					if (iLocal_91 > 1)
					{
						func_76(2, 218, "TXM_CDES" /* GXT: Change Destination */, &uLocal_113, 0, 365);
					}
					if (!bLocal_60)
					{
						if (iLocal_91 > 0)
						{
							func_76(2, 176, "TXM_SLCT" /* GXT: Choose Destination */, &uLocal_113, 0, 365);
						}
					}
					else if (iLocal_949 == 2)
					{
						func_76(2, 177, "TXM_STOP" /* GXT: Stop */, &uLocal_113, 0, 365);
						if (bLocal_59)
						{
							func_76(2, 176, "TXM_SLCT" /* GXT: Choose Destination */, &uLocal_113, 0, 365);
						}
						if (func_75())
						{
							func_76(2, 176, "TXM_SKIP" /* GXT: Skip (Extra Cost) */, &uLocal_113, 0, 365);
						}
						if (!bLocal_64)
						{
							func_76(2, 179, "TXM_HURY" /* GXT: Hurry */, &uLocal_113, 0, 365);
						}
					}
					else if (iLocal_949 == 3)
					{
						func_76(2, 177, "TXM_STRT" /* GXT: Start */, &uLocal_113, 0, 365);
						if (bLocal_59)
						{
							func_76(2, 176, "TXM_SLCT" /* GXT: Choose Destination */, &uLocal_113, 0, 365);
						}
					}
					iLocal_58 = 0;
				}
				HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
				func_74(1);
				func_73(1);
				func_66(&iLocal_112, &Local_814, &uLocal_113, func_72(&uLocal_113));
			}
		}
		else
		{
			iLocal_112 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
	}
	else
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_112);
		iLocal_58 = 1;
	}
}

void func_66(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x317E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_71(uParam2);
	}
	if (Global_1577933 < 2)
	{
		func_73(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_70(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 365)
						{
							func_70(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_70(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_69(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					func_70(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_70(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_69(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		func_68(*iParam0, uParam1);
	}
	func_67();
}

void func_67()//Position - 0x3526
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_68(int iParam0, var uParam1)//Position - 0x3544
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_69(char* sParam0)//Position - 0x3563
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_70(char* sParam0)//Position - 0x3575
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_71(var uParam0)//Position - 0x3583
{
	uParam0->f_692 = 0;
}

int func_72(var uParam0)//Position - 0x3591
{
	return uParam0->f_692;
}

void func_73(int iParam0)//Position - 0x359E
{
	Global_1577933 = iParam0;
}

void func_74(int iParam0)//Position - 0x35AC
{
	Global_1669875.f_1163 = iParam0;
}

int func_75()//Position - 0x35BD
{
	if (iLocal_949 != 2)
	{
		return 0;
	}
	if (bLocal_59)
	{
		return 0;
	}
	if (fLocal_83 < 50f)
	{
		return 0;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_68))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_68))
		{
			return 0;
		}
	}
	return 1;
}

void func_76(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x35FF
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[iVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		MISC::SET_BIT(&(uParam3->f_691), iVar0);
		if (iParam5 < 365)
		{
		}
	}
	uParam3->f_693++;
}

void func_77(var uParam0)//Position - 0x367C
{
	func_78(uParam0);
	uParam0->f_692 = 1;
}

void func_78(var uParam0)//Position - 0x3690
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 365;
		uParam0->f_1[iVar0 /*57*/].f_56 = 365;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

struct<9> func_79()//Position - 0x3775
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_80()//Position - 0x37B9
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	fVar2 = 1f;
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(1 /*CAMERA_CONTROL*/);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(2 /*FRONTEND_CONTROL*/);
	switch (iLocal_951)
	{
		case 0:
			func_162(1);
			if (func_161(iLocal_89, 500))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				AUDIO::START_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
				iLocal_951 = 1;
			}
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && AUDIO::IS_AUDIO_SCENE_ACTIVE("FADE_OUT_WORLD_250MS_SCENE"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_113403, false);
				}
				HUD::CLEAR_PRINTS();
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /* GXT: Taxi */))
				{
					HUD::RELEASE_NAMED_RENDERTARGET("taxi" /* GXT: Taxi */);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
				{
					OBJECT::DELETE_OBJECT(&iLocal_109);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_108);
				}
				if (CAM::IS_CAM_ACTIVE(iLocal_68))
				{
					GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
					Global_113420 = 0;
					CAM::SET_CAM_ACTIVE(iLocal_68, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					HUD::UNLOCK_MINIMAP_POSITION();
					HUD::UNLOCK_MINIMAP_ANGLE();
					HUD::SET_RADAR_ZOOM(0);
				}
				func_159(iLocal_990);
				iLocal_89 = MISC::GET_GAME_TIMER();
				if (bLocal_59)
				{
					bLocal_61 = false;
					bLocal_59 = false;
					Local_41 = { Local_827[iLocal_92 /*3*/] };
				}
				if (!bLocal_61)
				{
					iLocal_88 = 0;
					iLocal_948 = 0;
					iLocal_951 = 2;
				}
				else
				{
					func_158();
					iLocal_951 = 3;
				}
			}
			else
			{
				AUDIO::START_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
			}
			break;
		
		case 2:
			if (func_125(&Local_41, &Global_113410, &Global_113416))
			{
				func_158();
				iLocal_951 = 3;
			}
			break;
		
		case 3:
			if (Global_79264 == -1)
			{
				func_124();
				func_123();
				func_121();
				func_117();
				func_116();
				MISC::CLEAR_AREA(Global_113410, 5f, true, false, false, false);
				func_112(1097859072);
				if (!PED::IS_PED_INJURED(Global_113404) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
				{
					ENTITY::SET_ENTITY_COORDS(Global_113403, Global_113410, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Global_113403, Global_113416);
					ENTITY::FREEZE_ENTITY_POSITION(Global_113403, true);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				STREAMING::NEW_LOAD_SCENE_STOP();
				MISC::CLEAR_AREA(Global_113410, 5000f, true, false, false, false);
				MISC::CLEAR_AREA_OF_OBJECTS(Global_113410, 5000f, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Global_113410, 30f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Global_113410, 5000f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Global_113410, 5000f);
				if (Global_98294 != -1)
				{
					func_111(Global_98294, 1);
					func_110(Global_98294);
				}
				iLocal_823 = func_109(Local_41.f_0);
				if (iLocal_823 != -1)
				{
					func_111(iLocal_823, 1);
				}
				iLocal_57 = 0;
				iLocal_951 = 4;
			}
			break;
		
		case 4:
			if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Global_113410, 4500f, 0))
			{
				iLocal_57 = 1;
				iLocal_951 = 5;
			}
			else if (func_161(iLocal_89, 2500))
			{
				iLocal_951 = 5;
			}
			break;
		
		case 5:
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					if (iLocal_823 != -1)
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_57 = 0;
						func_107(iLocal_823);
						func_111(iLocal_823, 0);
					}
					iLocal_951 = 6;
				}
				else if (func_161(iLocal_89, 20000))
				{
					if (iLocal_823 != -1)
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_57 = 0;
						func_107(iLocal_823);
						func_111(iLocal_823, 0);
					}
					iLocal_951 = 6;
				}
			}
			else
			{
				if (iLocal_823 != -1)
				{
					func_107(iLocal_823);
					func_111(iLocal_823, 0);
				}
				iLocal_57 = 0;
				iLocal_951 = 6;
			}
			break;
		
		case 6:
			func_106();
			PED::INSTANTLY_FILL_PED_POPULATION();
			VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
			MISC::POPULATE_NOW();
			if (iLocal_823 != -1)
			{
				bVar1 = true;
				if (Global_92160[iLocal_823 /*34*/].f_13 == -1 && Global_92160[iLocal_823 /*34*/].f_14 == -1)
				{
					bVar1 = false;
				}
				if (bVar1)
				{
					if (((func_56() == 0 && !BitTest(Global_92160[iLocal_823 /*34*/].f_15, 8)) || (func_56() == 1 && !BitTest(Global_92160[iLocal_823 /*34*/].f_15, 9))) || (func_56() == 2 && !BitTest(Global_92160[iLocal_823 /*34*/].f_15, 10)))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (func_104(Global_92160[iLocal_823 /*34*/].f_13, Global_92160[iLocal_823 /*34*/].f_14))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					CLOCK::ADVANCE_CLOCK_TIME_TO(Global_92160[iLocal_823 /*34*/].f_13, 0, 0);
				}
			}
			iLocal_105 = func_97(1129381888, 1);
			iLocal_951 = 7;
			break;
		
		case 7:
			bVar0 = true;
			if (func_96(iLocal_105))
			{
				bVar0 = false;
			}
			if (!func_86(Global_113410))
			{
				bVar0 = false;
			}
			if (!func_85())
			{
				bVar0 = false;
			}
			if (!VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED())
			{
				bVar0 = false;
			}
			if (iLocal_57)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						bVar0 = false;
					}
				}
			}
			if (iLocal_823 != -1 && Global_98299)
			{
				bVar0 = false;
			}
			if (func_161(iLocal_89, 29500))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (iLocal_57)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					iLocal_57 = 0;
				}
				if (iLocal_67)
				{
					iLocal_67 = 0;
					MISC::GET_GROUND_Z_FOR_3D_COORD(Global_113410 + Vector(100f, 0f, 0f), &fVar2, false, false);
					if (fVar2 > Global_113410.f_2)
					{
						Global_113410.f_2 = (fVar2 + 0.5f);
					}
				}
				func_112(12f);
				func_82();
				if (!PED::IS_PED_INJURED(Global_113404) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_113403, false);
					ENTITY::SET_ENTITY_HEADING(Global_113403, Global_113416);
					ENTITY::SET_ENTITY_COORDS(Global_113403, Global_113410, true, false, false, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_113403, 5f);
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_113404, Global_113403, 24, 5000);
				}
				iLocal_89 = MISC::GET_GAME_TIMER();
				iLocal_951 = 8;
			}
			break;
		
		case 8:
			if (func_161(iLocal_89, 500))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FADE_OUT_WORLD_250MS_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_113403, true);
				}
				if (!func_81())
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				iLocal_951 = 9;
			}
			break;
		
		case 9:
			if (CAM::IS_SCREEN_FADED_IN() || func_81())
			{
				if (((!Global_98300 && iLocal_823 != -1) && iLocal_823 != 72) && iLocal_823 != 87)
				{
					func_110(iLocal_823);
				}
				func_162(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113403, true))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				TASK::TASK_VEHICLE_TEMP_ACTION(Global_113404, Global_113403, 24, 5000);
				PED::SET_PED_KEEP_TASK(Global_113404, true);
				bLocal_65 = true;
				iLocal_950 = 2;
				iLocal_951 = 10;
			}
			break;
		
		case 10:
			break;
	}
}

bool func_81()//Position - 0x3E23
{
	return BitTest(Global_101392.f_20, 13);
}

void func_82()//Position - 0x3E34
{
	struct<3> Var0;
	float fVar3;
	
	switch (iLocal_824)
	{
		case 92:
			Var0 = { func_84(229, 0) };
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_113410, Var0, true);
			if (fVar3 < 100f)
			{
				Var0 = { func_83(Global_113410 - Var0) };
				Var0 = { (Global_113410 + (Var0.f_0 * IntToFloat((100 - SYSTEM::ROUND(fVar3))))), (Global_113410.f_1 + (Var0.f_1 * IntToFloat((100 - SYSTEM::ROUND(fVar3))))), Global_113410.f_2 };
				PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var0, &Global_113410, &Global_113416, 1, 3f, 0f);
				ENTITY::SET_ENTITY_COORDS(Global_113403, Global_113410, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Global_113403, Global_113416);
			}
			break;
	}
}

Vector3 func_83(struct<3> Param0)//Position - 0x3EEF
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

Vector3 func_84(int iParam0, int iParam1)//Position - 0x3F2E
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_33208[iVar0 /*23*/][iParam1 /*3*/];
}

bool func_85()//Position - 0x3F6C
{
	return !Global_78038.f_553;
}

int func_86(struct<3> Param0)//Position - 0x3F7C
{
	int iVar0;
	
	iVar0 = func_94(Param0);
	if (!func_93(&iLocal_50))
	{
		iLocal_49 = 0;
		func_91(&iLocal_50, 0f);
	}
	if (iVar0 == iLocal_49 || func_88(&iLocal_50) > 8f)
	{
		func_87(&iLocal_50);
		iLocal_49 = 0;
		return 1;
	}
	return 0;
}

void func_87(int* iParam0)//Position - 0x3FCA
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_88(int* iParam0)//Position - 0x3FE0
{
	if (func_93(iParam0))
	{
		if (func_90(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_89(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_89(bool bParam0)//Position - 0x401E
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

bool func_90(var uParam0)//Position - 0x4076
{
	return BitTest(*uParam0, 2);
}

void func_91(int* iParam0, float fParam1)//Position - 0x4083
{
	if (!func_93(iParam0))
	{
		func_92(iParam0, fParam1);
	}
}

void func_92(int* iParam0, float fParam1)//Position - 0x409D
{
	iParam0->f_1 = (func_89(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_93(var uParam0)//Position - 0x40C8
{
	return BitTest(*uParam0, 1);
}

int func_94(struct<3> Param0)//Position - 0x40D5
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	if (func_95(0, 4))
	{
		iVar1 = 70;
		while (iVar1 <= 72)
		{
			fVar2 = SYSTEM::VDIST2(func_84(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_95(0, 0))
	{
		iVar1 = 125;
		while (iVar1 <= 137)
		{
			fVar2 = SYSTEM::VDIST2(func_84(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_95(0, 10))
	{
		iVar1 = 125;
		fVar2 = SYSTEM::VDIST2(func_84(iVar1, 0), Param0);
		if (fVar2 <= 1225f)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_95(int iParam0, int iParam1)//Position - 0x4190
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_114372.f_9088.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

int func_96(int iParam0)//Position - 0x41DA
{
	if (iParam0 != -1)
	{
		if (!Global_113459[iParam0 /*10*/].f_1)
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0, bool bParam1)//Position - 0x41FB
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = iParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_58(func_56()))
		{
			iVar36 = func_103();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_114372.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_114372.f_18577[iVar32 /*6*/], 3))
				{
					func_98(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_98(int iParam0, var uParam1)//Position - 0x42AC
{
	switch (iParam0)
	{
		case 0:
			func_99(uParam1, "Abigail1", func_101(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 1:
			func_99(uParam1, "Abigail2", func_101(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 2:
			func_99(uParam1, "Barry1", func_101(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 3:
			func_99(uParam1, "Barry2", func_101(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
		
		case 4:
			func_99(uParam1, "Barry3", func_101(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 5:
			func_99(uParam1, "Barry3A", func_101(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 6:
			func_99(uParam1, "Barry3C", func_101(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 7:
			func_99(uParam1, "Barry4", func_101(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_100(iParam0), 0, 0);
			break;
		
		case 8:
			func_99(uParam1, "Dreyfuss1", func_101(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 9:
			func_99(uParam1, "Epsilon1", func_101(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 10:
			func_99(uParam1, "Epsilon2", func_101(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 11:
			func_99(uParam1, "Epsilon3", func_101(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 12:
			func_99(uParam1, "Epsilon4", func_101(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 13:
			func_99(uParam1, "Epsilon5", func_101(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 14:
			func_99(uParam1, "Epsilon6", func_101(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 15:
			func_99(uParam1, "Epsilon7", func_101(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 16:
			func_99(uParam1, "Epsilon8", func_101(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 17:
			func_99(uParam1, "Extreme1", func_101(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 18:
			func_99(uParam1, "Extreme2", func_101(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 19:
			func_99(uParam1, "Extreme3", func_101(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 20:
			func_99(uParam1, "Extreme4", func_101(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 21:
			func_99(uParam1, "Fanatic1", func_101(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_100(iParam0), 1, 0);
			break;
		
		case 22:
			func_99(uParam1, "Fanatic2", func_101(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_100(iParam0), 1, 0);
			break;
		
		case 23:
			func_99(uParam1, "Fanatic3", func_101(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_100(iParam0), 0, 1);
			break;
		
		case 24:
			func_99(uParam1, "Hao1", func_101(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_100(iParam0), 0, 1);
			break;
		
		case 25:
			func_99(uParam1, "Hunting1", func_101(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 26:
			func_99(uParam1, "Hunting2", func_101(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 27:
			func_99(uParam1, "Josh1", func_101(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 28:
			func_99(uParam1, "Josh2", func_101(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
		
		case 29:
			func_99(uParam1, "Josh3", func_101(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
		
		case 30:
			func_99(uParam1, "Josh4", func_101(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 31:
			func_99(uParam1, "Maude1", func_101(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 32:
			func_99(uParam1, "Minute1", func_101(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 33:
			func_99(uParam1, "Minute2", func_101(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 34:
			func_99(uParam1, "Minute3", func_101(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 35:
			func_99(uParam1, "MrsPhilips1", func_101(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 36:
			func_99(uParam1, "MrsPhilips2", func_101(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 37:
			func_99(uParam1, "Nigel1", func_101(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 38:
			func_99(uParam1, "Nigel1A", func_101(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
		
		case 39:
			func_99(uParam1, "Nigel1B", func_101(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_100(iParam0), 1, 1);
			break;
		
		case 40:
			func_99(uParam1, "Nigel1C", func_101(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_100(iParam0), 1, 1);
			break;
		
		case 41:
			func_99(uParam1, "Nigel1D", func_101(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_100(iParam0), 1, 1);
			break;
		
		case 42:
			func_99(uParam1, "Nigel2", func_101(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
		
		case 43:
			func_99(uParam1, "Nigel3", func_101(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
		
		case 44:
			func_99(uParam1, "Omega1", func_101(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 45:
			func_99(uParam1, "Omega2", func_101(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 46:
			func_99(uParam1, "Paparazzo1", func_101(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 47:
			func_99(uParam1, "Paparazzo2", func_101(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 48:
			func_99(uParam1, "Paparazzo3", func_101(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 49:
			func_99(uParam1, "Paparazzo3A", func_101(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 50:
			func_99(uParam1, "Paparazzo3B", func_101(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 51:
			func_99(uParam1, "Paparazzo4", func_101(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 52:
			func_99(uParam1, "Rampage1", func_101(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 54:
			func_99(uParam1, "Rampage3", func_101(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 55:
			func_99(uParam1, "Rampage4", func_101(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 56:
			func_99(uParam1, "Rampage5", func_101(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 53:
			func_99(uParam1, "Rampage2", func_101(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 57:
			func_99(uParam1, "TheLastOne", func_101(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 58:
			func_99(uParam1, "Tonya1", func_101(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 59:
			func_99(uParam1, "Tonya2", func_101(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 60:
			func_99(uParam1, "Tonya3", func_101(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 61:
			func_99(uParam1, "Tonya4", func_101(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 62:
			func_99(uParam1, "Tonya5", func_101(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_99(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x5461
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

int func_100(int iParam0)//Position - 0x54F2
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

struct<2> func_101(int iParam0)//Position - 0x5838
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_102(iParam0) };
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

struct<2> func_102(int iParam0)//Position - 0x586F
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

int func_103()//Position - 0x5CBB
{
	func_57();
	switch (Global_114372.f_2366.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

bool func_104(int iParam0, int iParam1)//Position - 0x5D01
{
	return func_105(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_105(int iParam0, int iParam1, int iParam2)//Position - 0x5D15
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_106()//Position - 0x5DBE
{
	Global_78038.f_553 = 1;
	Global_78038.f_554 = 0;
}

void func_107(int iParam0)//Position - 0x5DD6
{
	if (func_108(iParam0))
	{
		Global_98295 = iParam0;
		Global_98299 = 1;
		return;
	}
}

int func_108(int iParam0)//Position - 0x5DF5
{
	switch (iParam0)
	{
		case 67:
		case 90:
		case 0:
		case 31:
		case 27:
		case 28:
		case 50:
		case 51:
		case 52:
		case 53:
		case 56:
		case 57:
			return 0;
			break;
	}
	return 1;
}

int func_109(int iParam0)//Position - 0x5E54
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_98305[iVar0 /*17*/])
		{
			if (Global_98305[iVar0 /*17*/].f_9 != 263)
			{
				if (Global_33208[Global_98305[iVar0 /*17*/].f_9 /*23*/].f_19 == iParam0)
				{
					return Global_98305[iVar0 /*17*/].f_5;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_110(int iParam0)//Position - 0x5EAE
{
	if (Global_98294 != -1)
	{
		if (iParam0 == Global_98294)
		{
			Global_98298 = 1;
			return;
		}
	}
}

void func_111(int iParam0, bool bParam1)//Position - 0x5ED2
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_95357[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_95357[iParam0 /*2*/] = 0;
	}
}

void func_112(float fParam0)//Position - 0x5F10
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	if (!(((((((func_115(89) || func_115(88)) || func_115(92)) || func_115(33)) || func_114() == 89) || func_114() == 88) || func_114() == 92) || func_114() == 33))
	{
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar2 = 1;
	Var3 = { Global_113410 };
	while (!bVar1 && iVar2 < 10)
	{
		bVar1 = true;
		if (func_113(&iVar0, Var3, fParam0))
		{
			bVar1 = false;
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Global_113410, iVar2, &Var3, 1, 3f, 0f))
			{
				iVar2++;
			}
		}
	}
	if (SYSTEM::VDIST2(Var3, Global_113410) > 2f)
	{
		PATHFIND::GET_SAFE_COORD_FOR_PED(Var3, false, &Global_113410, 0);
	}
}

int func_113(int iParam0, struct<3> Param1, float fParam4)//Position - 0x5FF8
{
	int iVar0[5];
	int iVar6;
	
	iVar0[0] = joaat("crusader");
	iVar0[1] = joaat("barracks");
	iVar0[2] = joaat("trash");
	iVar0[3] = joaat("boxville3");
	iVar0[4] = joaat("fbi2");
	iVar6 = 0;
	while (iVar6 < iVar0)
	{
		*iParam0 = VEHICLE::GET_CLOSEST_VEHICLE(Param1, fParam4, iVar0[iVar6], 67590);
		if (*iParam0 != 0)
		{
			return 1;
		}
		iVar6++;
	}
	return 0;
}

int func_114()//Position - 0x606D
{
	return Global_79511;
}

int func_115(int iParam0)//Position - 0x6079
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_95357[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_92124)
	{
		if (Global_92124[iVar0 /*5*/] != -1)
		{
			if (Global_79519.f_109[Global_92124[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_116()//Position - 0x60E1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_76133)
	{
		switch (Global_64263[Global_76134[iVar0 /*9*/] /*13*/])
		{
			case 1:
				Global_76134[iVar0 /*9*/].f_3 = 3;
				break;
			
			case 4:
				if (Global_64046)
				{
					Global_76134[iVar0 /*9*/].f_3 = 3;
				}
				break;
		}
		iVar0++;
	}
}

void func_117()//Position - 0x6141
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 0;
	if (iVar1 == 0)
	{
		if (iVar2 == 0)
		{
		}
	}
	fVar0 = func_120(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_113410);
	if (bLocal_64)
	{
		iVar1 = SYSTEM::FLOOR(((fVar0 / 200f) / 60f));
		iVar2 = SYSTEM::ROUND(((fVar0 / 200f) - (60f * SYSTEM::TO_FLOAT(iVar1))));
	}
	else
	{
		iVar1 = SYSTEM::FLOOR(((fVar0 / 100f) / 60f));
		iVar2 = SYSTEM::ROUND(((fVar0 / 100f) - (60f * SYSTEM::TO_FLOAT(iVar1))));
	}
	CLOCK::ADD_TO_CLOCK_TIME(iVar1, iVar2, 0);
	func_118((SYSTEM::TO_FLOAT((iVar1 * 60 + iVar2)) / 60f));
}

void func_118(float fParam0)//Position - 0x61F4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_93(&(Global_114372.f_18106.f_175[iVar0 /*19*/].f_5)))
		{
			func_119(&(Global_114372.f_18106.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_93(&(Global_114372.f_18106.f_362[iVar1 /*3*/])))
		{
			func_119(&(Global_114372.f_18106.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_119(int* iParam0, float fParam1)//Position - 0x6285
{
	if (func_93(iParam0))
	{
		func_92(iParam0, (func_88(iParam0) + fParam1));
	}
}

float func_120(struct<3> Param0, struct<3> Param3)//Position - 0x62A8
{
	return (SYSTEM::VMAG(Param3 - Param0) * 1.3f);
}

void func_121()//Position - 0x62C3
{
	float fVar0;
	int iVar1;
	
	fVar0 = (((func_120(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_113410) / 50f) * fLocal_73) * 2.4f);
	iVar1 = (SYSTEM::FLOOR(fLocal_82) + SYSTEM::ROUND(fVar0));
	fVar0 = SYSTEM::TO_FLOAT(iVar1);
	fVar0 = (fVar0 * 1.33f);
	iVar1 = SYSTEM::ROUND(fVar0);
	iLocal_101 = (iLocal_101 + iVar1);
	fLocal_82 = (fLocal_82 + IntToFloat(iLocal_101));
	func_122();
}

void func_122()//Position - 0x632B
{
	iLocal_103 = (iLocal_103 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (iLocal_103 > 5000)
	{
		fLocal_82 = (fLocal_82 + fLocal_73);
		iLocal_103 = 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_972, false) > 50f)
	{
		fLocal_82 = (fLocal_82 + fLocal_73);
		iLocal_103 = 0;
		Local_972 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	}
	iLocal_101 = SYSTEM::CEIL(fLocal_82);
	if (iLocal_101 != iLocal_102)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SET_TAXI_PRICE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_101);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		fLocal_83 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_113410);
		iLocal_102 = iLocal_101;
	}
}

void func_123()//Position - 0x63C9
{
	int iVar0;
	float fVar1;
	
	switch (iLocal_71)
	{
		case 0:
			iVar0 = joaat("SP0_DIST_AS_PASSENGER_TAXI");
			break;
		
		case 1:
			iVar0 = joaat("SP1_DIST_AS_PASSENGER_TAXI");
			break;
		
		case 2:
			iVar0 = joaat("SP2_DIST_AS_PASSENGER_TAXI");
			break;
		
		default:
			if (!func_39(14))
			{
			}
			break;
	}
	if (!func_39(14))
	{
		fVar1 = PATHFIND::CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_113410);
		STATS::STAT_INCREMENT(iVar0, fVar1);
	}
}

void func_124()//Position - 0x643C
{
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (STREAMING::STREAMVOL_IS_VALID(Global_113079.f_218))
	{
		STREAMING::STREAMVOL_DELETE(Global_113079.f_218);
	}
}

int func_125(int iParam0, var* uParam1, float* fParam2)//Position - 0x645F
{
	struct<3> Var0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		switch (iLocal_948)
		{
			case 0:
				iLocal_110 = 3;
				Local_960 = { func_48(*iParam0) };
				if (HUD::DOES_BLIP_EXIST(Global_113408) && *iParam0 == Global_113408)
				{
					*uParam1 = { Global_113413 };
					*fParam2 = Global_113417;
					Var0 = { Local_960 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_72 = SYSTEM::VMAG(Var0);
					iLocal_110 = 7;
					iLocal_948 = 4;
					return 1;
				}
				else
				{
					if (func_145(Local_960, uParam1, fParam2))
					{
						Var0 = { Local_960 - *uParam1 };
						Var0.f_2 = 0f;
						fLocal_72 = SYSTEM::VMAG(Var0);
						iLocal_110 = 7;
						iLocal_948 = 4;
						return 1;
					}
					iLocal_948 = 1;
					return 0;
				}
				break;
			
			case 1:
				if (func_134(Local_960, uParam1, fParam2, 1))
				{
					Var0 = { Local_960 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_72 = SYSTEM::VMAG(Var0);
					iLocal_110 = 7;
					iLocal_948 = 4;
					return 1;
				}
				else
				{
					iLocal_88 = 0;
					iLocal_948 = 2;
					return 0;
				}
				break;
			
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Global_113403))
				{
					if (func_126(&Global_113403, ENTITY::GET_ENTITY_COORDS(Global_113403, false), Local_960, uParam1, fParam2, &iLocal_88, iParam0, 1000))
					{
						iLocal_948 = 3;
						return 0;
					}
					else
					{
						return 0;
					}
				}
				break;
			
			case 3:
				if (func_145(*uParam1, uParam1, fParam2))
				{
					Var0 = { Local_960 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_72 = SYSTEM::VMAG(Var0);
					iLocal_110 = 7;
				}
				iLocal_948 = 4;
				return 1;
				break;
			
			case 4:
				return 1;
				break;
			
			case 5:
				break;
		}
	}
	return 0;
}

int func_126(var uParam0, struct<3> Param1, struct<3> Param4, var* uParam7, float* fParam8, int iParam9, var uParam10, int iParam11)//Position - 0x661C
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar11 = 0;
	bVar19 = false;
	iVar20 = 1;
	if (!func_133(Param4))
	{
		iVar20 = 9;
	}
	bVar21 = true;
	iVar24 = *iParam9 + 2;
	iVar25 = 50;
	func_131(Param1, Param4, &Local_963, &Local_966, iParam11);
	if (func_130(Local_963, Local_966))
	{
		while (!bVar19 && *iParam9 < iVar24)
		{
			if (Param4.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param4, *iParam9, uParam7, fParam8, &iVar12, iVar20, fVar0, fVar1))
			{
				iVar18 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam7, 1, iVar20, 3f, 0f);
				if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar18))
				{
					if (PATHFIND::GET_CLOSEST_ROAD(*uParam7, 1f, 1, &uVar8, &uVar5, &iVar14, &iVar13, &fVar16, bVar21))
					{
						if (*fParam8 < 90f || *fParam8 >= 270f)
						{
							bVar23 = true;
						}
						else
						{
							bVar23 = false;
						}
						bVar22 = false;
						if (bVar23)
						{
							if (iVar12 == iVar14)
							{
								bVar22 = true;
							}
						}
						else if (iVar12 == iVar13)
						{
							bVar22 = true;
						}
						if (fVar16 < 0f)
						{
							fVar15 = 0f;
						}
						else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar18) || !PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar18))
						{
							fVar15 = 0f;
						}
						else
						{
							if (bVar23)
							{
								if (bVar22)
								{
									fVar15 = (4.2f * (SYSTEM::TO_FLOAT(iVar14) * 0.5f));
								}
								else
								{
									fVar15 = (4.2f * SYSTEM::TO_FLOAT(iVar14));
								}
								if (bVar22)
								{
									if (iVar14 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar14 - 2)) * 1f));
									}
								}
								else if (iVar14 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar14 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar22)
								{
									fVar15 = (4.2f * (SYSTEM::TO_FLOAT(iVar13) * 0.5f));
								}
								else
								{
									fVar15 = (4.2f * SYSTEM::TO_FLOAT(iVar13));
								}
								if (bVar22)
								{
									if (iVar13 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar13 - 2)) * 1f));
									}
								}
								else if (iVar13 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar13 - 1)) * 1f));
								}
							}
							if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(*uParam7, &uVar27, &uVar26))
							{
								if (!uVar26 & 64 == 0)
								{
									fVar15 = (fVar15 + (0.9f * fVar16));
								}
								if (!uVar26 & 4 == 0)
								{
									fVar15 = (fVar15 + -0.7f);
								}
							}
						}
						fVar17 = (Param4.f_2 - uParam7->f_2);
						if (fVar17 < 0f)
						{
							fVar17 = (fVar17 * -1f);
						}
						if ((func_129(Param4, *uParam7) || fVar17 < 0.5f) || func_127(uParam10))
						{
							*uParam7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam7, *fParam8, fVar15, 0f, 0f) };
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
							{
								iVar11 = *uParam0;
							}
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(*uParam7, 3f, 3f, 3f, iVar11))
							{
								if (func_134(*uParam7, uParam7, fParam8, 1))
								{
								}
								bVar19 = true;
							}
						}
					}
				}
			}
			*iParam9++;
			if (*iParam9 >= iVar25)
			{
				*uParam7 = { Param4 };
				if (uParam7->f_2 == 1f)
				{
					fVar17 = 1f;
					fVar17 = PATHFIND::GET_APPROX_FLOOR_FOR_AREA((*uParam7 - 2f), (uParam7->f_1 - 2f), (*uParam7 + 2f), (uParam7->f_1 + 2f));
					if (fVar17 > 1f)
					{
						iLocal_67 = 1;
						uParam7->f_2 = fVar17;
						uParam7->f_2 = (uParam7->f_2 + 0.5f);
					}
				}
				bVar19 = true;
			}
		}
		if (bVar19)
		{
			Var2 = { Param4 - *uParam7 };
			Var2.f_2 = 0f;
			fLocal_72 = SYSTEM::VMAG(Var2);
			if (fLocal_72 != 0f)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_127(var uParam0)//Position - 0x6975
{
	if (HUD::DOES_BLIP_EXIST(*uParam0) && func_128(*uParam0) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)//Position - 0x699D
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = HUD::GET_BLIP_SPRITE(iParam0);
	}
	return iVar0;
}

int func_129(struct<3> Param0, struct<3> Param3)//Position - 0x69B8
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param3.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		func_53("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = SYSTEM::VDIST(Param0, Param3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_53("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_130(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x6A1A
{
	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Param0.f_0, Param0.f_1, Param3.f_0, Param3.f_1))
	{
		return 1;
	}
	return 0;
}

void func_131(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)//Position - 0x6A3A
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param3.f_0 <= Param0.f_0)
	{
		Var0.f_0 = Param3.f_0;
		Var3.f_0 = Param0.f_0;
	}
	else
	{
		Var0.f_0 = Param0.f_0;
		Var3.f_0 = Param3.f_0;
	}
	if (Param3.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param3.f_1;
		Var3.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var3.f_1 = Param3.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	Var3 = { Var3 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	if (!func_132(Var0, *uParam6, 1056964608, 0) || !func_132(Var0, *uParam6, 1056964608, 0))
	{
		*uParam6 = { Var0 };
		*uParam7 = { Var3 };
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

int func_132(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x6B05
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

int func_133(struct<3> Param0)//Position - 0x6B80
{
	char* sVar0;
	
	sVar0 = ZONE::GET_NAME_OF_ZONE(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((MISC::ARE_STRINGS_EQUAL("SanAnd" /* GXT: San Andreas */, sVar0) || MISC::ARE_STRINGS_EQUAL("Alamo" /* GXT: Alamo Sea */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ArmyB" /* GXT: Fort Zancudo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BhamCa" /* GXT: Banham Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Baytre" /* GXT: Baytree Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BradT" /* GXT: Braddock Tunnel */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BradP" /* GXT: Braddock Pass */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CANNY" /* GXT: Raton Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CCreak" /* GXT: Cassidy Creek */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ChamH" /* GXT: Chamberlain Hills */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CHU" /* GXT: Chumash */, sVar0)) || MISC::ARE_STRINGS_EQUAL("COSI" /* GXT: Countryside */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CMSW" /* GXT: Chiliad Mountain State Wilderness */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Cypre" /* GXT: Cypress Flats */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Desrt" /* GXT: Grand Senora Desert */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ELGorl" /* GXT: El Gordo Lighthouse */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Galli" /* GXT: Galileo Park */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Galfish" /* GXT: Galilee */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Harmo" /* GXT: Harmony */, sVar0)) || MISC::ARE_STRINGS_EQUAL("HumLab" /* GXT: Humane Labs and Research */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Jail" /* GXT: Bolingbroke Penitentiary */, sVar0)) || MISC::ARE_STRINGS_EQUAL("LAct" /* GXT: Land Act Reservoir */, sVar0)) || MISC::ARE_STRINGS_EQUAL("LDam" /* GXT: Land Act Dam */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Lago" /* GXT: Lago Zancudo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTChil" /* GXT: Mount Chiliad */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTJose" /* GXT: Mount Josiah */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTGordo" /* GXT: Mount Gordo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("NCHU" /* GXT: North Chumash */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Oceana" /* GXT: Pacific Ocean */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Palmpow" /* GXT: Palmer-Taylor Power Station */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PBluff" /* GXT: Pacific Bluffs */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Paleto" /* GXT: Paleto Bay */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalCov" /* GXT: Paleto Cove */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalFor" /* GXT: Paleto Forest */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalHigh" /* GXT: Palomino Highlands */, sVar0)) || MISC::ARE_STRINGS_EQUAL("RTRAK" /* GXT: Redwood Lights Track */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Rancho" /* GXT: Rancho */, sVar0)) || MISC::ARE_STRINGS_EQUAL("SANDY" /* GXT: Sandy Shores */, sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaH" /* GXT: Tongva Hills */, sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaV" /* GXT: Tongva Valley */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Zenora" /* GXT: Senora Freeway */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Slab" /* GXT: Stab City */, sVar0)) || MISC::ARE_STRINGS_EQUAL("WindF" /* GXT: Ron Alternates Wind Farm */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Zancudo" /* GXT: Zancudo River */, sVar0)) || MISC::ARE_STRINGS_EQUAL("SanChia" /* GXT: San Chianski Mountain Range */, sVar0)) || MISC::ARE_STRINGS_EQUAL("zQ_UAR" /* GXT: Davis Quartz */, sVar0))
	{
		return 1;
	}
	return 0;
}

int func_134(struct<3> Param0, var* uParam3, float* fParam4, int iParam5)//Position - 0x6E74
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4[6];
	int iVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	bool bVar37;
	
	if (func_144(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam3 = { 1261.5804f, -3332.6846f, 5.4191f };
		*fParam4 = 163.87f;
		return 1;
	}
	else if (func_144(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam3 = { -1577.1599f, 5166.5103f, 19.1864f };
		*fParam4 = 0f;
		return 1;
	}
	else if (func_144(Param0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
	{
		*uParam3 = { -856.6151f, 163.7361f, 65.093f };
		*fParam4 = 355.3355f;
		return 1;
	}
	else if (func_144(Param0, -39.2005f, -1473.5498f, -100f, 10.6133f, -1430.0988f, 100f))
	{
		*uParam3 = { -15.5181f, -1456.3999f, 29.4244f };
		*fParam4 = 94.6893f;
		return 1;
	}
	else if (func_144(Param0, 1964.7421f, 3792.59f, -100f, 1992.6361f, 3840.2532f, 100f))
	{
		*uParam3 = { 1996.3718f, 3818.8308f, 31.1612f };
		*fParam4 = 170.0221f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -68.218704f, -1086.951f, -100f, -10.545177f, -1106.8953f, 100f, 43.5f, false, true))
	{
		*uParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*fParam4 = 324.1257f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 398.78986f, -1651.4174f, -100f, 423.83725f, -1619.4325f, 100f, 45f, false, true))
	{
		*uParam3 = { 416.871f, -1613.0814f, 28.1401f };
		*fParam4 = 227.9333f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -988.8535f, -2553.1775f, -100f, -1041.4865f, -2644.97f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam3 = { -1039.5425f, -2574.467f, 12.7566f };
		*fParam4 = 162.2744f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -906.90204f, -2600.4607f, -100f, -959.76514f, -2692.0571f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam3 = { -911.1597f, -2676.1316f, 12.7567f };
		*fParam4 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -209.33719f, -2011.0995f, 26.620369f, -257.22247f, -2076.9631f, 36.620373f, 30f, false, true))
	{
		*uParam3 = { -211.8546f, -2030.7715f, 26.6204f };
		*fParam4 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -804.05005f, 4216.4116f, 204.4872f, -509.06787f, 4135.1904f, 123.25017f, 250f, false, true))
	{
		*uParam3 = { -623.3622f, 3996f, 120.7669f };
		*fParam4 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2203.1675f, 183.35495f, 167.40219f, -2311.5874f, 434.3828f, 195.46692f, 138.5f, false, true))
	{
		*uParam3 = { -2294.9446f, 376.2506f, 173.4669f };
		*fParam4 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2041.478f, -553.21594f, -0.089962f, -1787.0801f, -768.08856f, 37.999176f, 220f, false, true))
	{
		*uParam3 = { -1897.0765f, -557.3334f, 10.7279f };
		*fParam4 = 228.7709f;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1882.8832f, -541.7442f, 4.675224f, -1929.6265f, -598.6026f, 40.4298f, 35f, false, true))
		{
			return 1;
		}
		else
		{
			Var4[0 /*3*/] = { -1962.4679f, -503.4229f, 10.8349f };
			Var4[1 /*3*/] = { -1924.4722f, -534.7357f, 10.8181f };
			Var4[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var4[3 /*3*/] = { -1850.6611f, -595.8367f, 10.4649f };
			Var4[4 /*3*/] = { -1808.9995f, -632.1207f, 10.0016f };
			Var4[5 /*3*/] = { -1745.0428f, -694.4053f, 9.1245f };
			iVar23 = -1;
			fVar24 = 99999f;
			iVar26 = 0;
			while (iVar26 <= 5)
			{
				fVar25 = SYSTEM::VDIST(Var4[iVar26 /*3*/], Var1);
				if (fVar25 < fVar24)
				{
					fVar24 = fVar25;
					iVar23 = iVar26;
				}
				iVar26++;
			}
			*uParam3 = { Var4[iVar23 /*3*/] };
			if (iVar23 == 0)
			{
				*fParam4 = 234.3999f;
			}
			else if (iVar23 == 1)
			{
				*fParam4 = 232.2255f;
			}
			else if (iVar23 == 2)
			{
				*fParam4 = 228.2855f;
			}
			else if (iVar23 == 3)
			{
				*fParam4 = 231.4914f;
			}
			else if (iVar23 == 4)
			{
				*fParam4 = 230.6703f;
			}
			else if (iVar23 == 5)
			{
				*fParam4 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -446.12f, 1057.4515f, 318.61685f, -405.83362f, 1194.4865f, 337.09656f, 106.25f, false, true))
	{
		*uParam3 = { -411.3629f, 1174.5865f, 324.6421f };
		*fParam4 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1362.0906f, -29.26777f, -100f, -1377.9531f, 152.23888f, 100f, 50f, false, true))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { -1380.1006f, 95.1566f, 53.5054f };
				*fParam4 = 4.555f;
				break;
			
			case 2:
				*uParam3 = { -1379.1394f, 84.2472f, 53.0592f };
				*fParam4 = 6.9278f;
				break;
			
			case 3:
				*uParam3 = { -1378.4266f, 74.5077f, 52.6622f };
				*fParam4 = 2.6813f;
				break;
			
			case 4:
				*uParam3 = { -1384.1774f, 73.9207f, 52.7438f };
				*fParam4 = 5.542f;
				break;
			
			case 5:
				*uParam3 = { -1381.1179f, 35.7838f, 52.659f };
				*fParam4 = 7.6687f;
				break;
			
			case 6:
				*uParam3 = { -1383.7413f, 64.1491f, 52.6647f };
				*fParam4 = 2.5572f;
				break;
			
			case 7:
				*uParam3 = { -1382.6162f, 49.6876f, 52.6585f };
				*fParam4 = 3.0185f;
				break;
			
			default:
				*uParam3 = { -1383.2987f, 54.4598f, 52.6562f };
				*fParam4 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 48.31006f, -1120.6694f, 28.030502f, -12.123452f, -1112.0841f, 36.08567f, 60f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { 50.9889f, -1092.5254f, 28.2152f };
					*fParam4 = 150.8833f;
					break;
				
				case 2:
					*uParam3 = { 46.7725f, -1099.7506f, 28.1639f };
					*fParam4 = 149.4322f;
					break;
				
				case 3:
					*uParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*fParam4 = 154.1378f;
					break;
				
				case 4:
					*uParam3 = { 38.1922f, -1113.3936f, 28.1507f };
					*fParam4 = 146.3778f;
					break;
				
				case 5:
					*uParam3 = { 13.0436f, -1124.7668f, 27.7359f };
					*fParam4 = 91.163f;
					break;
				
				case 6:
					*uParam3 = { 1.4336f, -1125.0425f, 27.1705f };
					*fParam4 = 91.0578f;
					break;
				
				case 7:
					*uParam3 = { -11.1811f, -1125.8105f, 26.3688f };
					*fParam4 = 91.866f;
					break;
				
				default:
					*uParam3 = { 21.9431f, -1124.5731f, 27.9417f };
					*fParam4 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0181f, -2540.235f, 18.669323f, -1023.33246f, -2562.1145f, 31.576157f, 250f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1023.9825f, -2489.8818f, 19.0755f };
					*fParam4 = 148.7004f;
					break;
				
				case 2:
					*uParam3 = { -1029.9678f, -2500.4377f, 19.0803f };
					*fParam4 = 148.7144f;
					break;
				
				case 3:
					*uParam3 = { -1070.5457f, -2570.8594f, 19.0836f };
					*fParam4 = 150.0955f;
					break;
				
				case 4:
					*uParam3 = { -1056.0647f, -2545.6619f, 19.0809f };
					*fParam4 = 149.5649f;
					break;
				
				case 5:
					*uParam3 = { -1050.578f, -2536.2185f, 19.0824f };
					*fParam4 = 150.7363f;
					break;
				
				case 6:
					*uParam3 = { -1036.0316f, -2510.902f, 19.0794f };
					*fParam4 = 147.2113f;
					break;
				
				case 7:
					*uParam3 = { -1044.4872f, -2525.5342f, 19.079f };
					*fParam4 = 150.7597f;
					break;
				
				default:
					*uParam3 = { -1064.5002f, -2560.6528f, 19.0905f };
					*fParam4 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0587f, -2540.2537f, 10.944668f, -1023.2968f, -2562.0525f, 18.516848f, 250f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1044.7413f, -2528.786f, 12.7568f };
					*fParam4 = 150.9439f;
					break;
				
				case 2:
					*uParam3 = { -1050.7631f, -2539.4978f, 12.7566f };
					*fParam4 = 150.851f;
					break;
				
				case 3:
					*uParam3 = { -1054.9523f, -2546.8596f, 12.7566f };
					*fParam4 = 149.9285f;
					break;
				
				case 4:
					*uParam3 = { -1060.3972f, -2556.898f, 12.6066f };
					*fParam4 = 150.8244f;
					break;
				
				case 5:
					*uParam3 = { -1020.7437f, -2490.0842f, 12.6396f };
					*fParam4 = 148.6134f;
					break;
				
				case 6:
					*uParam3 = { -1076.9043f, -2589.1794f, 12.6858f };
					*fParam4 = 149.0112f;
					break;
				
				case 7:
					*uParam3 = { -1026.3866f, -2501.9521f, 12.6923f };
					*fParam4 = 149.7553f;
					break;
				
				default:
					*uParam3 = { -1070.5065f, -2578.3892f, 12.6932f };
					*fParam4 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.3641f, -2747.29f, 16.960567f, -991.5368f, -2657.6816f, 69.12349f, 200f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1067.8463f, -2708.9397f, 19.0588f };
					*fParam4 = 230.9025f;
					break;
				
				case 2:
					*uParam3 = { -1058.2238f, -2716.2166f, 19.06f };
					*fParam4 = 237.1285f;
					break;
				
				case 3:
					*uParam3 = { -1004.5667f, -2744.797f, 19.0811f };
					*fParam4 = 255.6885f;
					break;
				
				case 4:
					*uParam3 = { -1049.5092f, -2721.58f, 19.0546f };
					*fParam4 = 242.3581f;
					break;
				
				case 5:
					*uParam3 = { -1017.1544f, -2740.1174f, 19.0525f };
					*fParam4 = 243.5798f;
					break;
				
				case 6:
					*uParam3 = { -1042.0872f, -2726.0767f, 19.0452f };
					*fParam4 = 240.2381f;
					break;
				
				case 7:
					*uParam3 = { -1027.353f, -2734.4617f, 19.0509f };
					*fParam4 = 239.8703f;
					break;
				
				default:
					*uParam3 = { -1033.7404f, -2730.7458f, 19.0521f };
					*fParam4 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.6465f, -2754.947f, 2.941969f, -991.73145f, -2653.1533f, 16.892282f, 200f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*fParam4 = 265.8022f;
					break;
				
				case 2:
					*uParam3 = { -980.6166f, -2748.535f, 12.757f };
					*fParam4 = 263.5472f;
					break;
				
				case 3:
					*uParam3 = { -987.6072f, -2747.2734f, 12.6069f };
					*fParam4 = 257.2886f;
					break;
				
				case 4:
					*uParam3 = { -1006.8151f, -2739.345f, 12.6334f };
					*fParam4 = 242.1315f;
					break;
				
				case 5:
					*uParam3 = { -1051.8304f, -2713.5527f, 12.6333f };
					*fParam4 = 239.9312f;
					break;
				
				case 6:
					*uParam3 = { -1041.0035f, -2719.6467f, 12.6402f };
					*fParam4 = 240.1081f;
					break;
				
				case 7:
					*uParam3 = { -1023.8323f, -2729.4646f, 12.6445f };
					*fParam4 = 239.6737f;
					break;
				
				default:
					*uParam3 = { -1012.8478f, -2735.1724f, 12.6656f };
					*fParam4 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 845.7216f, -990.7473f, 37.469604f, 846.3397f, -1066.8805f, 16.966232f, 90f, false, true))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*fParam4 = 93.132f;
				break;
			
			case 2:
				*uParam3 = { 859.283f, -996.4102f, 28.7865f };
				*fParam4 = 92.2581f;
				break;
			
			case 3:
				*uParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*fParam4 = 92.714f;
				break;
			
			case 4:
				*uParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*fParam4 = 92.8628f;
				break;
			
			case 5:
				*uParam3 = { 831.2605f, -1009.556f, 25.599f };
				*fParam4 = 268.6186f;
				break;
			
			case 6:
				*uParam3 = { 844.6506f, -1010.0903f, 26.9894f };
				*fParam4 = 270.076f;
				break;
			
			case 7:
				*uParam3 = { 852.2498f, -1010.1324f, 27.8091f };
				*fParam4 = 269.722f;
				break;
			
			default:
				*uParam3 = { 861.4028f, -1010.0249f, 28.808f };
				*fParam4 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 767.3736f, -1077.4288f, -10.786545f, 682.82837f, -1080.6858f, 79.673035f, 60f, false, true))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 703.2726f, -1067.6997f, 21.4765f };
				*fParam4 = 181.3629f;
				break;
			
			case 2:
				*uParam3 = { 715.2089f, -1070.3993f, 21.2708f };
				*fParam4 = 175.43623f;
				break;
			
			case 3:
				*uParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*fParam4 = 181.0347f;
				break;
			
			case 4:
				*uParam3 = { 709.6841f, -1086.78f, 21.419f };
				*fParam4 = 233.169f;
				break;
			
			case 5:
				*uParam3 = { 703.807f, -1057.8665f, 21.4152f };
				*fParam4 = 170.1609f;
				break;
			
			case 6:
				*uParam3 = { 708.1994f, -1048.1937f, 21.216f };
				*fParam4 = 134.2729f;
				break;
			
			case 7:
				*uParam3 = { 711.1124f, -1069.4229f, 21.3129f };
				*fParam4 = 177.9198f;
				break;
			
			default:
				*uParam3 = { 703.545f, -1078.7177f, 21.3987f };
				*fParam4 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (func_141(3, Var1))
	{
		if (func_140(Var1, 3, 0, 0))
		{
			*uParam3 = { -1520.1213f, 2731.511f, 16.6437f };
			*fParam4 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1535.9866f, -2041.497f, 68.21275f, 1529.3566f, -2204.4634f, 96.111946f, 105f, false, true))
	{
		*uParam3 = { 1540.75f, -2051.49f, 76.85f };
		*fParam4 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1185.8104f, -1768.3672f, 28.311447f, 1369.068f, -1701.4515f, 66.25389f, 70f, true, true))
	{
		if (func_139(Var1, 1283.3257f, -1731.5222f, 51.78555f, 17f))
		{
			*uParam3 = { 1283.3257f, -1731.5222f, 51.78555f };
			*fParam4 = 275.4274f;
			return 1;
		}
		if (func_139(Var1, 1334.3861f, -1709.7625f, 55.70131f, 41f))
		{
			*uParam3 = { 1334.3861f, -1709.7625f, 55.70131f };
			*fParam4 = 275.4411f;
			return 1;
		}
		if (func_139(Var1, 1246.1661f, -1750.6246f, 45.35691f, 28f))
		{
			*uParam3 = { 1246.1661f, -1750.6246f, 45.35691f };
			*fParam4 = 301.2981f;
			return 1;
		}
		if (func_139(Var1, 1196.2716f, -1753.0505f, 37.63976f, 32f))
		{
			*uParam3 = { 1196.2716f, -1753.0505f, 37.63976f };
			*fParam4 = 209.4354f;
			return 1;
		}
		*uParam3 = { 1283.3257f, -1731.5222f, 51.78555f };
		*fParam4 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (func_139(Var1, -1693.3018f, -1109.1305f, 17.89778f, 240f))
	{
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1538.9806f, -941.1323f, 10.566226f, -1715.5703f, -1139.7659f, 52.203613f, 110f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1739.989f, -1115.973f, 10.087262f, -1800.5149f, -1187.1798f, 52.0172f, 25f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1801.7664f, -1180.2517f, 4.017236f, -1857.7177f, -1244.6284f, 38.49653f, 85f, false, true))
		{
			*uParam3 = { -1624.4452f, -976.9755f, 12.0175f };
			*fParam4 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1140.8896f, -1573.1349f, -6.566939f, -1067.0844f, -1675.9756f, 23.531528f, 52f, false, true))
	{
		*uParam3 = { -1095.63f, -1577.24f, 3.82f };
		*fParam4 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
	{
		iVar0 = 3;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
		{
			case 0:
				*uParam3 = { 1369.246f, 1147.6527f, 112.7592f };
				*fParam4 = 182.0998f;
				break;
			
			case 1:
				*uParam3 = { 1360.8483f, 1139.121f, 112.7592f };
				*fParam4 = 83.3356f;
				break;
			
			case 2:
				*uParam3 = { 1364.7513f, 1154.3668f, 112.7592f };
				*fParam4 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1737.3901f, 3287.7954f, 35.13897f, 1724.3452f, 3337.854f, 57.200382f, 40f, false, true))
	{
		*uParam3 = { 1782.1903f, 3300.076f, 40.4593f };
		*fParam4 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -695.7981f, -1379.6785f, 24.481243f, -777.3731f, -1491.13f, -3.594945f, 72f, false, true))
	{
		*uParam3 = { -658.2056f, -1388.7886f, 9.499f };
		*fParam4 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (SYSTEM::VDIST2(Var1, -75.59782f, -818.60815f, 325.1745f) < (58f * 58f))
	{
		*uParam3 = { -142.367f, -895.0251f, 28.191f };
		*fParam4 = 71.6555f;
		return 1;
	}
	if (!func_137())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_141(7, Var1))
		{
			if (func_140(Var1, 7, 0, 0))
			{
				*uParam3 = { -1012.3105f, -465.1634f, 36.1141f };
				*fParam4 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (func_141(2, Var1))
	{
		if (func_140(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
				{
					case 0:
						*uParam3 = { -979.95f, -2746.1086f, 12.7091f };
						*fParam4 = 91.4929f;
						break;
					
					case 1:
						*uParam3 = { -1025.1935f, -2728.2175f, 12.6647f };
						*fParam4 = 239.0041f;
						break;
					
					case 2:
						*uParam3 = { -1051.315f, -2713.0686f, 12.6676f };
						*fParam4 = 236.4666f;
						break;
					
					case 3:
						*uParam3 = { -1095.7417f, -2637.8713f, 12.6461f };
						*fParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam5 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam3 = { -1023.9825f, -2489.8818f, 19.0755f };
						*fParam4 = 148.7004f;
						break;
					
					case 2:
						*uParam3 = { -1029.9678f, -2500.4377f, 19.0803f };
						*fParam4 = 148.7144f;
						break;
					
					case 3:
						*uParam3 = { -1070.5457f, -2570.8594f, 19.0836f };
						*fParam4 = 150.0955f;
						break;
					
					case 4:
						*uParam3 = { -1056.0647f, -2545.6619f, 19.0809f };
						*fParam4 = 149.5649f;
						break;
					
					case 5:
						*uParam3 = { -1050.578f, -2536.2185f, 19.0824f };
						*fParam4 = 150.7363f;
						break;
					
					case 6:
						*uParam3 = { -1036.0316f, -2510.902f, 19.0794f };
						*fParam4 = 147.2113f;
						break;
					
					case 7:
						*uParam3 = { -1044.4872f, -2525.5342f, 19.079f };
						*fParam4 = 150.7597f;
						break;
					
					default:
						*uParam3 = { -1064.5002f, -2560.6528f, 19.0905f };
						*fParam4 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var27 = { -509.5746f, 4938.9185f, 146.3271f };
	fVar30 = 232.0109f;
	fVar31 = func_136(Param0, Var27);
	Var32 = { 2450.6035f, 5129.2236f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = func_136(Param0, Var32);
	Var1 = { Param0 };
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -148.87766f, 4862.2036f, 305.6442f, 454.62744f, 5573.104f, 804.097f, 250f, false, true))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -482.89307f, 4990.2554f, 155.16011f, 7.830751f, 5009.3706f, 430.76038f, 250f, false, true))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var27 };
		*fParam4 = fVar30;
		if (fVar36 < fVar31)
		{
			*uParam3 = { Var32 };
			*fParam4 = fVar35;
		}
		return 1;
	}
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.26465f, 250f, false, true))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 954.1139f, 5641.051f, 646.50543f, 2140.375f, 5377.7534f, 149.12209f, 250f, false, true))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2117.3477f, 5377.2593f, 173.32973f, 2439.9338f, 5297.445f, 62.686623f, 100f, false, true))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2393.3474f, 5321.5796f, 107.06242f, 2523.9456f, 5124.7456f, 41.68384f, 70f, false, true))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var32 };
		*fParam4 = fVar35;
		if (fVar31 < fVar36)
		{
			*uParam3 = { Var27 };
			*fParam4 = fVar30;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (func_135(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 85.05448f, -2511.8838f, -2.996267f, -57.599766f, -2412.7163f, 15.000947f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 7.516524f, -2546.741f, 1.331557f, -177.32684f, -2417.0466f, 19.160444f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -260.03537f, -2419.9783f, 1.399635f, -27.26375f, -2423.8484f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -187.4256f, -2516.0857f, -6.849975f, -186.7518f, -2438.1487f, 25.001602f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -73.60813f, -2538.5637f, -6.989857f, -183.25558f, -2465.145f, 25.020298f, 70f, false, true))
		{
			iVar0 = 2;
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
			{
				*uParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*fParam4 = 253.9545f;
			}
			else
			{
				*uParam3 = { -189.6824f, -2531.6492f, 5.0031f };
				*fParam4 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 412.27902f, 6481.8677f, 25.808207f, 468.9353f, 6442.7524f, 45.607273f, 24f, false, true))
	{
		*uParam3 = { 445.231f, 6476.948f, 28.4862f };
		*fParam4 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 476.5394f, -1301.548f, 44.824577f, 499.58224f, -1339.0245f, 26.31703f, 35f, false, true))
	{
		*uParam3 = { 498.185f, -1288.5354f, 28.1923f };
		*fParam4 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 496.98163f, -1412.2551f, 43.293907f, 497.269f, -1339.3639f, 26.316479f, 40f, false, true))
	{
		*uParam3 = { 504.1738f, -1421.2511f, 28.2065f };
		*fParam4 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 951.1704f, -147.00467f, 71.54326f, 1005.24493f, -98.44745f, 95.626785f, 70f, false, true))
	{
		*uParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*fParam4 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.0221f, 89.068535f, 74.89022f, 1267.8208f, 292.01062f, 102.99044f, 195f, false, true))
	{
		*uParam3 = { 1118.7509f, 262.0209f, 79.8555f };
		*fParam4 = 52.3086f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.0221f, 89.068535f, 71.89022f, 1010.04596f, -91.566986f, 103.45676f, 180f, false, true))
	{
		*uParam3 = { 1134.0535f, 53.1835f, 79.7553f };
		*fParam4 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 191.87312f, -723.55304f, 40.235764f, 79.586555f, -687.6684f, 29.547338f, 85f, false, true))
	{
		iVar0 = 2;
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
		{
			*uParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*fParam4 = 162.0019f;
		}
		else
		{
			*uParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*fParam4 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, false, true))
	{
		*uParam3 = { -88.4f, -660.9f, 35f };
		*fParam4 = -20f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, false, true))
	{
		*uParam3 = { 61.4f, -653.2f, 32f };
		*fParam4 = 160f;
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.2583f, 5.7109f, 10f, false, true))
	{
		*uParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*fParam4 = 140.7302f;
		return 1;
	}
	return 0;
}

bool func_135(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x8F96
{
	return SYSTEM::VDIST2(Param0, Param3) <= (fParam6 * fParam6);
}

float func_136(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x8FB0
{
	return SYSTEM::VDIST2(Param0.f_0, Param0.f_1, 0f, Param3.f_0, Param3.f_1, 0f);
}

int func_137()//Position - 0x8FCA
{
	int iVar0;
	
	iVar0 = func_56();
	if (iVar0 == 0)
	{
		if (func_138(65))
		{
			return 1;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_138(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_138(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x9029
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114372.f_9088.f_99.f_58[iParam0];
}

bool func_139(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x9056
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_140(struct<3> Param0, int iParam3, int iParam4, bool bParam5)//Position - 0x9080
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	bool bVar110;
	int iVar111;
	
	bVar110 = false;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.2113f, 100.46083f, 40.384373f };
			Var46[0 /*3*/] = { -1094.2382f, 148.42744f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.22309f, 25.257057f };
			Var46[1 /*3*/] = { -1149.4938f, 109.25583f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.1129f, -84.958855f, 28.274601f };
			Var46[2 /*3*/] = { -1261.1031f, 50.081482f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5005f, 10f };
			Var46[0 /*3*/] = { -1816.9539f, -2768.8933f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.4879f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.7476f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.7852f, 10f };
			Var46[2 /*3*/] = { -1011.08105f, -3086.9038f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.0861f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.0082f, -2616.2705f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.1364f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.6105f, -2226.7634f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.5493f, -2408.7122f, 10f };
			Var46[5 /*3*/] = { -1136.9174f, -2617.9546f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.79236f, -2831.7087f, 12.93313f };
			Var46[6 /*3*/] = { -966.46765f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.0831f, -3496.8057f, 12f };
			Var46[7 /*3*/] = { -1955.2982f, -3010.4314f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.8994f, -3193.0237f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.2683f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.3367f, -3535.6482f, 12f };
			Var46[9 /*3*/] = { -1259.6486f, -3463.4863f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.12787f, -3463.8994f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.7148f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.4913f, -2173.5789f, 10f };
			Var46[11 /*3*/] = { -1685.6256f, -2720.3635f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.9256f, -3550.9434f, 10f };
			Var46[12 /*3*/] = { -1110.1978f, -3493.6172f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.3342f, 30f };
			Var46[0 /*3*/] = { -2029.7765f, 2845.0833f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.8894f, 3291.0986f, 30f };
			Var46[1 /*3*/] = { -2009.1815f, 2879.8352f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.0261f, 3326.6987f, 30f };
			Var46[2 /*3*/] = { -2033.9279f, 3089.0488f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.1654f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.7909f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.2778f, 30f };
			Var46[4 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.6633f, 3344.5142f, 30f };
			Var46[5 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.7554f, 3352.6606f, 30f };
			Var46[6 /*3*/] = { -2715.8708f, 3269.9155f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.5745f, 3364.5327f, 30f };
			Var46[7 /*3*/] = { -1977.5688f, 3330.8882f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.2852f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.4412f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.2954f, 2936.406f, 31.680103f };
			Var46[9 /*3*/] = { -2453.0366f, 3006.863f, 52.310028f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.1848f, 3023.8298f, 31.56573f };
			Var46[10 /*3*/] = { -2517.3298f, 2989.0635f, 49.956444f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.9219f, 3358.0398f, 29.999718f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.060143f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.3093f, 3363.914f, 31.679329f };
			Var46[12 /*3*/] = { -2431.9807f, 3287.6694f, 39.978264f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.0813f, 2797.7834f, 29.37864f };
			Var46[13 /*3*/] = { -2096.8213f, 2874.4233f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.6072f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.5753f, 2535.0596f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.8787f, 2445.7273f, 40f };
			Var46[1 /*3*/] = { 1716.9603f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.1575f, 2436.2441f, 40f };
			Var46[2 /*3*/] = { 1650.0776f, 2515.9226f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.3307f, 2407.5972f, 40f };
			Var46[3 /*3*/] = { 1698.5546f, 2460.2078f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.4517f, 2756.2175f, 40f };
			Var46[4 /*3*/] = { 1718.8477f, 2589.1616f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.2278f, 2661.2402f, 40f };
			Var46[5 /*3*/] = { 1774.8124f, 2679.4187f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.0503f, 2632.2205f, 40f };
			Var46[6 /*3*/] = { 1657.2083f, 2595.4844f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.0209f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.1647f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.8721f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.8551f, 2705.0369f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.7888f, 2605.9478f, 40f };
			Var46[9 /*3*/] = { 1783.1143f, 2606.7832f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.1846f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.1936f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.8008f, 3694.3618f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.0364f, 3795.6882f, 20f };
			Var46[2 /*3*/] = { 3650.9143f, 3766.1516f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.05304f, -3391.4968f, -10f };
			Var46[0 /*3*/] = { 523.22894f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.9895f, 4.819676f };
			Var46[1 /*3*/] = { 593.89276f, -3199.998f, 30.069256f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.0537f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.8442f, 17.569231f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.46655f, -3140.1475f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.0627f, 17.319258f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.5497f, -570.87976f, 20f };
			Var46[0 /*3*/] = { -1187.8108f, -477.50366f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.3776f, -485.96732f, 20f };
			Var46[1 /*3*/] = { -1215.7959f, -464.82806f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.42334f, 20f };
			Var46[2 /*3*/] = { -1013.3932f, -475.20575f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.8492f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.3325f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.57196f, 29.439508f };
			Var46[0 /*3*/] = { 471.17004f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.75604f, 34.439507f };
			Var46[1 /*3*/] = { 457.20837f, -993.71893f, 29.389584f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.62268f, -986.60004f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.712406f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.38895f, -974.4613f, 39.557606f };
			Var46[3 /*3*/] = { 474.0358f, -1021.9721f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.17685f, -974.1888f, 29.689508f };
			Var46[4 /*3*/] = { 442.18552f, -979.8635f, 33.439507f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], bVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_141(int iParam0, struct<3> Param1)//Position - 0x9DD4
{
	return SYSTEM::VDIST2(Param1, func_143(iParam0)) < func_142(iParam0);
}

float func_142(int iParam0)//Position - 0x9DF1
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_143(int iParam0)//Position - 0x9E89
{
	switch (iParam0)
	{
		case 1:
			return -1155.8766f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.6664f, 2586.2612f, 51.4925f;
			break;
		
		case 5:
			return 3525.0576f, 3711.3232f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.9612f, 5.0696f;
			break;
		
		case 7:
			return -1142.4111f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_144(struct<3> Param0, struct<3> Param3, struct<3> Param6)//Position - 0x9F73
{
	if (((((Param0.f_0 > Param3.f_0 && Param0.f_0 < Param6.f_0) && Param0.f_1 > Param3.f_1) && Param0.f_1 < Param6.f_1) && Param0.f_2 > Param3.f_2) && Param0.f_2 < Param6.f_2)
	{
		return 1;
	}
	return 0;
}

int func_145(struct<3> Param0, var* uParam3, float* fParam4)//Position - 0x9FCA
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = 100000000f;
	fVar1 = 100000000f;
	fVar2 = 100000000f;
	func_157(&Param0, &iLocal_824, &fVar0);
	func_155(&Param0, &iLocal_106, &fVar1);
	func_152(&Param0, &iLocal_825, &fVar2);
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		if (func_151(iLocal_824, Param0))
		{
			if (func_150(iLocal_824, uParam3, fParam4))
			{
				return 1;
			}
		}
	}
	else if (fVar1 < fVar0 && fVar1 < fVar2)
	{
		if (func_149(iLocal_106, Param0))
		{
			if (func_148(iLocal_106, uParam3, fParam4))
			{
				return 1;
			}
		}
	}
	else if (fVar2 != 100000000f)
	{
		if (func_147(iLocal_825, Param0))
		{
			if (func_146(iLocal_825, uParam3, fParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_146(int iParam0, var uParam1, var uParam2)//Position - 0xA0B0
{
	switch (iParam0)
	{
		case 76:
			*uParam1 = { -1094.7108f, -2641.9817f, 12.7071f };
			*uParam2 = 188.2694f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { -1917.7191f, 4445.7495f, 38.6592f };
			*uParam2 = 45.822f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { -482.5762f, 1993.8499f, 206.3482f };
			*uParam2 = 263.9373f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { -208.3305f, 4195.3413f, 43.1714f };
			*uParam2 = 333.4403f;
			return 1;
			break;
		
		case 74:
			*uParam1 = { 1619.446f, 3820.9602f, 33.9381f };
			*uParam2 = 129.6464f;
			return 1;
			break;
		
		case 75:
			*uParam1 = { 2045.1687f, 2155.8872f, 94.3423f };
			*uParam2 = 347.9475f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 2952.7668f, 2807.028f, 40.7635f };
			*uParam2 = 121.2574f;
			return 1;
			break;
		
		case 105:
		case 106:
			*uParam1 = { 2119.6763f, 4747.1978f, 40.1793f };
			*uParam2 = 305.2213f;
			return 1;
			break;
		
		case 125:
			*uParam1 = { -817.3487f, -1303.8899f, 4.0005f };
			*uParam2 = 253.9379f;
			return 1;
			break;
		
		case 126:
			*uParam1 = { 1118.7509f, 262.0209f, 79.8555f };
			*uParam2 = 52.3086f;
			return 1;
			break;
		
		case 127:
			*uParam1 = { 2414.0632f, 1503.7697f, 35.6614f };
			*uParam2 = 124.0994f;
			return 1;
			break;
		
		case 128:
			*uParam1 = { -203.2552f, 6536.0894f, 10.0979f };
			*uParam2 = 311.0677f;
			return 1;
			break;
		
		case 129:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		
		case 131:
			*uParam1 = { -1214.2524f, 4629.887f, 133.873f };
			*uParam2 = 123.1562f;
			return 1;
			break;
		
		case 132:
			*uParam1 = { -767.9527f, 4521.882f, 91.6871f };
			*uParam2 = 85.6363f;
			return 1;
			break;
		
		case 134:
			*uParam1 = { -1363.1832f, 4468.6914f, 23.1468f };
			*uParam2 = 272.2546f;
			return 1;
			break;
		
		case 135:
			*uParam1 = { 2477.0884f, 4948.6772f, 44.0936f };
			*uParam2 = 49.3948f;
			return 1;
			break;
		
		case 136:
			*uParam1 = { 1047.9314f, -203.879f, 69.0164f };
			*uParam2 = 62.0197f;
			return 1;
			break;
		
		case 107:
			*uParam1 = { -1200.8625f, -2049.4602f, 12.9248f };
			*uParam2 = 334.965f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1960.3881f, 3124.797f, 46.877f };
			*uParam2 = 233.484f;
			return 1;
			break;
	}
	return 0;
}

int func_147(int iParam0, struct<3> Param1)//Position - 0xA3E6
{
	switch (iParam0)
	{
		case 76:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 15f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1157.5951f, -2726.6357f, 12.944641f, -1110.7938f, -2679.33f, 22.944656f, 26f, false, true))
			{
				return 1;
			}
			break;
		
		case 70:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 38.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1908.0653f, 4432.693f, 51.384197f, -1962.2119f, 4473.8f, 22.939892f, 70f, false, true))
			{
				return 1;
			}
			break;
		
		case 71:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 206.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -541.8311f, 2050.5989f, 186.39044f, -499.78702f, 1968.3253f, 228.01833f, 70f, false, true))
			{
				return 1;
			}
			break;
		
		case 73:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 43.1f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -179.85881f, 4216.1665f, 30.265049f, -246.31996f, 4226.6533f, 53.77886f, 70f, false, true))
			{
				return 1;
			}
			break;
		
		case 74:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1634.1221f, 3858.0493f, 28.339115f, 1573.2587f, 3800.4417f, 48.354755f, 70f, false, true))
			{
				return 1;
			}
			break;
		
		case 75:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 94f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2057.873f, 2059.1975f, 63.880737f, 1999.0454f, 2190.5437f, 122.2642f, 110f, false, true))
			{
				return 1;
			}
			break;
		
		case 72:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40.7f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 3028.0845f, 2768.167f, 57.729843f, 2944.284f, 2772.836f, 30.230679f, 85f, false, true))
			{
				return 1;
			}
			break;
		
		case 105:
		case 106:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 305f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2097.951f, 4820.308f, 55.481686f, 2151.2542f, 4726.398f, 31.073204f, 120f, false, true))
			{
				return 1;
			}
			break;
		
		case 125:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 4.7f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -763.5086f, -1297.9799f, 2.000373f, -864.1372f, -1278.0072f, 24.150381f, 85f, false, true))
			{
				return 1;
			}
			break;
		
		case 126:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 52f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1137.0221f, 89.068535f, 74.89022f, 1267.8208f, 292.01062f, 102.99044f, 195f, false, true))
			{
				return 1;
			}
			break;
		
		case 127:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35.6f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2512.3047f, 1519.4615f, 28.555042f, 2380.3738f, 1521.5872f, 58.809845f, 90f, false, true))
			{
				return 1;
			}
			break;
		
		case 128:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 10.0979f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -193.5583f, 6533.4395f, -1.902109f, -299.2512f, 6645.0493f, 20.459734f, 120f, false, true))
			{
				return 1;
			}
			break;
		
		case 129:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (SYSTEM::VDIST2(Param1, -75.59782f, -818.60815f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 131:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 133f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1171.1467f, 4647.8896f, 203.79369f, -1280.1493f, 4457.5967f, 5.653551f, 120f, false, true))
			{
				return 1;
			}
			break;
		
		case 132:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 91.6f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -687.974f, 4499.5195f, 114.78101f, -826.0081f, 4496.864f, 49.883595f, 140f, false, true))
			{
				return 1;
			}
			break;
		
		case 134:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1364.7009f, 4490.626f, 49.52477f, -1367.1693f, 4340.34f, -1.682158f, 100f, false, true))
			{
				return 1;
			}
			break;
		
		case 135:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2566.1895f, 5007.0073f, 97.36896f, 2491.7136f, 4923.261f, 30.434944f, 80f, false, true))
			{
				return 1;
			}
			break;
		
		case 136:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 69f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1009.91705f, -163.46835f, 102.10279f, 1113.4741f, -221.32953f, 49.874504f, 90f, false, true))
			{
				return 1;
			}
			break;
		
		case 107:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 12f;
			}
			if (SYSTEM::VDIST2(Param1, -1230.6222f, -2049.97f, 12.8882f) < (75f * 75f))
			{
				return 1;
			}
			break;
		
		case 65:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 47f;
			}
			if (SYSTEM::VDIST2(Param1, -1968.1f, 3116.7f, 46.8882f) < (30f * 30f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_148(int iParam0, var uParam1, var uParam2)//Position - 0xAA0A
{
	int iVar0;
	
	switch (iParam0)
	{
		case 9:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { -1646.1178f, 4206.7427f, 82.9658f };
					*uParam2 = 251.0217f;
					break;
				
				case 1:
					*uParam1 = { -1582.8895f, 4201.4087f, 79.5905f };
					*uParam2 = 95.4232f;
					break;
			}
			return 1;
			break;
		
		case 11:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.4458f, 4738.6123f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 1:
					*uParam1 = { 1702.4242f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		
		case 12:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.4458f, 4738.6123f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 1:
					*uParam1 = { 1702.4242f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		
		case 14:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { -2934.6604f, 3238.404f, 9.4456f };
					*uParam2 = 228.5574f;
					break;
				
				case 1:
					*uParam1 = { -2842.0232f, 3145.0862f, 9.24f };
					*uParam2 = 45.7287f;
					break;
			}
			return 1;
			break;
		
		case 17:
			*uParam1 = { -204.0333f, 1313.9728f, 303.4189f };
			*uParam2 = 126.7738f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { -906.4329f, -2694.2803f, 12.8182f };
			*uParam2 = 329.3241f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1753.9014f, 107.8206f, 170.2481f };
			*uParam2 = 288.8676f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { -1859.5427f, -411.3196f, 44.9677f };
			*uParam2 = 242.8712f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 827.072f, 1282.2883f, 359.2872f };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -640.2675f, 6050.9805f, 7.4082f };
			*uParam2 = 138.3021f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { -92.2052f, -1254.8276f, 28.1682f };
			*uParam2 = 349.959f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { -701.0541f, 5819.116f, 16.198f };
			*uParam2 = 336.3649f;
			return 1;
			break;
		
		case 28:
		case 29:
			*uParam1 = { 569.276f, -1730.9674f, 28.1277f };
			*uParam2 = 246.5764f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { -1110.0881f, 253.6757f, 63.5431f };
			*uParam2 = 279.1973f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 67.1562f, 4560.1343f, 97.8678f };
			*uParam2 = 113.412f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { -1069.0764f, 789.2375f, 164.9551f };
			*uParam2 = 98.4554f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { -1073.1289f, 364.1223f, 67.3617f };
			*uParam2 = 359.3075f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { -91.4237f, -1305.5577f, 28.1569f };
			*uParam2 = 2.2198f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 2479.249f, 3401.2341f, 48.9551f };
			*uParam2 = 35.1009f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { -60.0571f, 292.1416f, 104.6818f };
			*uParam2 = 74.4771f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 166.2055f, 194.86f, 104.9587f };
			*uParam2 = 247.5814f;
			return 1;
			break;
		
		case 50:
			*uParam1 = { 1149.9778f, -506.4045f, 63.7076f };
			*uParam2 = 97.5469f;
			return 1;
			break;
		
		case 58:
		case 59:
		case 62:
			*uParam1 = { -27.2198f, -1467.9329f, 29.8592f };
			*uParam2 = 273.1409f;
			return 1;
			break;
	}
	return 0;
}

int func_149(int iParam0, struct<3> Param1)//Position - 0xAEDC
{
	switch (iParam0)
	{
		case 9:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 83.3f;
			}
			if (SYSTEM::VDIST2(Param1, -1619.53f, 4204.1f, 83.3f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 11:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1882.7897f, 4725.034f, 34.74373f, 1701.4972f, 4677.47f, 47.89289f, 159.5f, false, true))
			{
				return 1;
			}
			break;
		
		case 12:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1882.7897f, 4725.034f, 34.74373f, 1701.4972f, 4677.47f, 47.89289f, 159.5f, false, true))
			{
				return 1;
			}
			break;
		
		case 14:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 11.66f;
			}
			if (SYSTEM::VDIST2(Param1, -2892.93f, 3192.37f, 11.66f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 17:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 302.86f;
			}
			if (SYSTEM::VDIST2(Param1, -188.22f, 1296.1f, 302.86f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 18:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 14.64f;
			}
			if (SYSTEM::VDIST2(Param1, -954.19f, -2760.05f, 14.64f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 19:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (SYSTEM::VDIST2(Param1, -75.59782f, -818.60815f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 20:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 170.29f;
			}
			if (SYSTEM::VDIST2(Param1, 1732.27f, 96.36f, 170.29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 21:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44.9677f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1903.3223f, -401.2384f, 19.234562f, -1844.8792f, -445.7261f, 73.56197f, 115f, false, true))
			{
				return 1;
			}
			break;
		
		case 22:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 359f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 794.2453f, 1277.4425f, -100f, 833.82153f, 1277.1084f, 400f, 19f, false, true))
			{
				return 1;
			}
			break;
		
		case 23:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1015.5258f, 6287.513f, -10.944491f, -761.3104f, 5895.0137f, 45.337265f, 167.75f, false, true))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -72.13491f, -1267.5868f, 27.683605f, -72.18015f, -1256.7122f, 31f, 30f, false, true))
			{
				return 1;
			}
			break;
		
		case 26:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 16.3f;
			}
			if (SYSTEM::VDIST2(Param1, -683.4159f, 5841.0435f, 16.3306f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 28:
		case 29:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29f;
			}
			if (SYSTEM::VDIST2(Param1, 566.1639f, -1773.8171f, 29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 30:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 63.1146f;
			}
			if (SYSTEM::VDIST2(Param1, -1103.6277f, 288.1084f, 63.1146f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 33:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -21.123615f, 4518.907f, 119.783615f, 43.132828f, 4538.9287f, 72.589554f, 48f, false, true))
			{
				return 1;
			}
			break;
		
		case 37:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (SYSTEM::VDIST2(Param1, -1099.5017f, 790.26135f, 163.39977f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 39:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1088.4253f, 372.07227f, 62.758965f, -967.02997f, 363.59756f, 101.34832f, 75f, false, true))
			{
				return 1;
			}
			break;
		
		case 43:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.2f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -91.456764f, -1296.9753f, 26.154373f, 40.67288f, -1297.4586f, 58.293682f, 110f, false, true))
			{
				return 1;
			}
			break;
		
		case 44:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 49.9f;
			}
			if (SYSTEM::VDIST2(Param1, 2468.51f, 3437.39f, 49.9f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 110f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -78.38029f, 285.52542f, 102.62859f, -51.1546f, 357.5217f, 122.06169f, 40f, false, true))
			{
				return 1;
			}
			break;
		
		case 49:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 420.5196f, 116.28917f, 77.57532f, 212.29375f, 193.67944f, 131.8767f, 250f, false, true))
			{
				return 1;
			}
			break;
		
		case 50:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 64f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1140.158f, -540.9644f, 49.99944f, 972.37164f, -535.1002f, 85.64397f, 168.25f, false, true))
			{
				return 1;
			}
			break;
		
		case 58:
		case 59:
		case 62:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (SYSTEM::VDIST2(Param1, -16.5304f, -1473.1208f, 29.611f) < (8f * 8f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_150(int iParam0, var uParam1, var uParam2)//Position - 0xB5EA
{
	int iVar0;
	
	switch (iParam0)
	{
		case 3:
			*uParam1 = { -1456.3473f, -962.5814f, 6.3112f };
			*uParam2 = 140.57f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { 147.6034f, -404.7993f, 40.0892f };
			*uParam2 = 164.0206f;
			return 1;
			break;
		
		case 32:
		case 38:
			*uParam1 = { 1361.6746f, -2040.5747f, 51.0214f };
			*uParam2 = 281.5022f;
			return 1;
			break;
		
		case 41:
		case 47:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { -43.9252f, -1460.4318f, 30.7052f };
					*uParam2 = 104.5827f;
					break;
				
				case 1:
					*uParam1 = { 14.0313f, -1460.4801f, 29.4397f };
					*uParam2 = 61.9499f;
					break;
			}
			return 1;
			break;
		
		case 48:
			*uParam1 = { -2313.9f, 450.9f, 173.47f };
			*uParam2 = 178.6132f;
			return 1;
			break;
		
		case 45:
			iVar0 = 3;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 1369.246f, 1147.6527f, 112.7592f };
					*uParam2 = 182.0998f;
					break;
				
				case 1:
					*uParam1 = { 1360.8483f, 1139.121f, 112.7592f };
					*uParam2 = 83.3356f;
					break;
				
				case 2:
					*uParam1 = { 1364.7513f, 1154.3668f, 112.7592f };
					*uParam2 = 223.2795f;
					break;
			}
			return 1;
			break;
		
		case 24:
			iVar0 = 2;
			*uParam1 = { 1430.0966f, -2588.0654f, 47.0326f };
			*uParam2 = 353.6747f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { -943.9154f, -487.7569f, 35.7331f };
			*uParam2 = 27.4f;
			return 1;
			break;
		
		case 86:
			*uParam1 = { 764.6179f, -972.5101f, 24.903f };
			*uParam2 = 162.2939f;
			return 1;
			break;
		
		case 87:
			*uParam1 = { 185.1471f, -3047.2285f, 4.7824f };
			*uParam2 = 163.8686f;
			return 1;
			break;
		
		case 78:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 504.1742f, -1652.4719f, 28.1893f };
					*uParam2 = 52.3367f;
					break;
				
				case 1:
					*uParam1 = { 275.9677f, -1554.2201f, 28.0311f };
					*uParam2 = 303.3013f;
					break;
			}
			return 1;
			break;
		
		case 79:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 853.9595f, -1590.9219f, 30.5996f };
					*uParam2 = 7.148f;
					break;
				
				case 1:
					*uParam1 = { 847.5631f, -1559.7194f, 28.7923f };
					*uParam2 = 20.965f;
					break;
			}
			return 1;
			break;
		
		case 83:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 2602.4272f, 2852.1726f, 35.28f };
					*uParam2 = 19.36f;
					break;
				
				case 1:
					*uParam1 = { 2686.4038f, 2957.3896f, 35.4683f };
					*uParam2 = 106.36f;
					break;
			}
			return 1;
			break;
		
		case 76:
		case 84:
			*uParam1 = { 135.4725f, -1309.8962f, 28.0485f };
			*uParam2 = 301.12f;
			return 1;
			break;
	}
	return 0;
}

int func_151(int iParam0, struct<3> Param1)//Position - 0xB98F
{
	switch (iParam0)
	{
		case 3:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 7f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1535.754f, -922.10095f, 4.122119f, -1487.8695f, -961.3929f, 26.71922f, 50f, false, true))
			{
				return 1;
			}
			break;
		
		case 8:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 53.128983f, -463.9999f, 36.9208f, 99.3761f, -329.34763f, 118.04542f, 125f, false, true))
			{
				return 1;
			}
			break;
		
		case 32:
		case 38:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1420.3473f, -2036.5577f, 47.360718f, 1341.1105f, -2103.8438f, 72.32651f, 55f, false, true))
			{
				return 1;
			}
			break;
		
		case 41:
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (SYSTEM::VDIST2(Param1, -13.89061f, -1449.2897f, 29.64636f) < (36f * 36f))
			{
				return 1;
			}
			break;
		
		case 48:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 173.47f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -2306.9802f, 435.30377f, 171.46657f, -2303.291f, 366.31995f, 179.60176f, 65.5f, false, true))
			{
				return 1;
			}
			break;
		
		case 45:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 114f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 46f;
			}
			if (SYSTEM::VDIST2(Param1, 1330.389f, -2553.744f, 45.9221f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 60:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -995.97797f, -517.43243f, 11.377625f, -1060.7251f, -547.55884f, 65.33043f, 35.75f, false, true))
			{
				return 1;
			}
			break;
		
		case 86:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23.18f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 682.6544f, -968.7439f, 19.97575f, 762.8684f, -964.40643f, 43.037125f, 53f, false, true))
			{
				return 1;
			}
			break;
		
		case 87:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 148.8361f, -3029.1465f, 4.277727f, 148.13957f, -3342.3435f, 22.903791f, 97.75f, false, true))
			{
				return 1;
			}
			break;
		
		case 78:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 446.8174f, -1691.7081f, 23.282328f, 288.5565f, -1552.3518f, 108.31166f, 155f, false, true))
			{
				return 1;
			}
			break;
		
		case 79:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 910.9382f, -1749.9097f, 14.506144f, 921.74146f, -1455.2479f, 99.67125f, 210f, false, true))
			{
				return 1;
			}
			break;
		
		case 83:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 37f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2657.3025f, 2974.5286f, 34.53447f, 2591.657f, 2880.2231f, 68.08156f, 78.75f, false, true))
			{
				return 1;
			}
			break;
		
		case 76:
		case 84:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 83.32325f, -1312.1722f, 23.33694f, 148.38303f, -1273.5532f, 49.466507f, 65f, false, true))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_152(var uParam0, int iParam1, float fParam2)//Position - 0xBDE7
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	
	iVar0 = 263;
	fVar1 = 999999f;
	iVar3 = 65;
	while (iVar3 <= 111)
	{
		*iParam1 = iVar3;
		if (func_154(iParam1))
		{
			if (func_153(*iParam1))
			{
				Var4 = { func_84(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	iVar3 = 125;
	while (iVar3 <= 137)
	{
		*iParam1 = iVar3;
		if (func_154(iParam1))
		{
			if (func_153(*iParam1))
			{
				Var4 = { func_84(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar0 != 263)
	{
		*iParam1 = iVar0;
		*fParam2 = fVar1;
		return 1;
	}
	*iParam1 = 263;
	*fParam2 = 999999f;
	return 0;
}

bool func_153(int iParam0)//Position - 0xBF00
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_33208[iVar0 /*23*/].f_19);
}

int func_154(var uParam0)//Position - 0xBF3C
{
	if ((((((((((((((((((((*uParam0 == 70 || *uParam0 == 71) || *uParam0 == 73) || *uParam0 == 74) || *uParam0 == 75) || *uParam0 == 72) || *uParam0 == 76) || *uParam0 == 105) || *uParam0 == 106) || *uParam0 == 125) || *uParam0 == 126) || *uParam0 == 127) || *uParam0 == 128) || *uParam0 == 129) || *uParam0 == 131) || *uParam0 == 132) || *uParam0 == 134) || *uParam0 == 135) || *uParam0 == 136) || *uParam0 == 107) || *uParam0 == 65)
	{
		return 1;
	}
	return 0;
}

int func_155(var uParam0, int iParam1, float fParam2)//Position - 0xC042
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	struct<27> Var7;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < 63)
	{
		*iParam1 = iVar6;
		if (BitTest(Global_114372.f_18577[*iParam1 /*6*/], 0) && !BitTest(Global_114372.f_18577[*iParam1 /*6*/], 3))
		{
			func_98(*iParam1, &Var7);
			if (BitTest(Var7.f_26, func_156()))
			{
				Var3 = { Var7.f_6 };
				if (uParam0->f_2 == 1f)
				{
					Var3.f_2 = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, Var3);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 209f)
					{
						fVar1 = fVar2;
						iVar0 = iVar6;
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = iVar0;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

int func_156()//Position - 0xC10B
{
	if (func_39(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[0 /*29*/])
			{
				return 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[1 /*29*/])
			{
				return 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[2 /*29*/])
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			return 3;
		}
	}
	return func_56();
}

int func_157(var uParam0, int iParam1, float fParam2)//Position - 0xC18F
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar6 = 0;
	while (iVar6 < 8)
	{
		if (Global_98305[iVar6 /*17*/])
		{
			if (Global_98305[iVar6 /*17*/].f_9 != 263)
			{
				if (HUD::DOES_BLIP_EXIST(Global_33208[Global_98305[iVar6 /*17*/].f_9 /*23*/].f_19))
				{
					Var3 = { HUD::GET_BLIP_COORDS(Global_33208[Global_98305[iVar6 /*17*/].f_9 /*23*/].f_19) };
					if (uParam0->f_2 == 1f)
					{
						Var3.f_2 = 1f;
					}
					fVar2 = SYSTEM::VDIST(*uParam0, Var3);
					if (fVar2 < fVar1)
					{
						if (fVar2 < Global_98305[iVar6 /*17*/].f_10.f_2)
						{
							fVar1 = fVar2;
							iVar0 = iVar6;
						}
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = Global_98305[iVar0 /*17*/].f_5;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

void func_158()//Position - 0xC267
{
	if (Global_114372.f_9088)
	{
		Global_79265 = 1;
	}
}

void func_159(int iParam0)//Position - 0xC27E
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (PED::DOES_GROUP_EXIST(func_6()))
	{
		PED::GET_GROUP_SIZE(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(iVar2, Global_113403))
					{
						iVar3 = 0;
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, iVar3, false))
						{
							iVar3 = func_160(&Global_113403);
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, iVar3, false))
							{
								TASK::CLEAR_PED_TASKS(iVar2);
								PED::SET_PED_INTO_VEHICLE(iVar2, Global_113403, iVar3);
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iVar2);
							PED::SET_PED_INTO_VEHICLE(iVar2, Global_113403, iVar3);
						}
					}
				}
			}
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(iVar2, Global_113403))
				{
					TASK::CLEAR_PED_TASKS(iVar2);
					iVar3 = 1;
					if (iParam0 == 1)
					{
						iVar3 = 2;
					}
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, iVar3, false))
					{
						iVar3 = func_160(&Global_113403);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, iVar3, false))
						{
							TASK::CLEAR_PED_TASKS(iVar2);
							PED::SET_PED_INTO_VEHICLE(iVar2, Global_113403, iVar3);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iVar2);
						PED::SET_PED_INTO_VEHICLE(iVar2, Global_113403, iVar3);
					}
				}
			}
		}
	}
}

int func_160(var uParam0)//Position - 0xC3A6
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 0, false))
			{
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 1, false))
			{
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 2, false))
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_161(int iParam0, int iParam1)//Position - 0xC3F7
{
	return (MISC::GET_GAME_TIMER() - iParam0) > iParam1;
}

void func_162(bool bParam0)//Position - 0xC409
{
	if (bParam0)
	{
		func_169();
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8684, 16);
		}
		Global_20813.f_1 = 1;
		if (func_168(0))
		{
			func_163(0);
		}
	}
	else if (Global_20813.f_1 == 1)
	{
		if (!Global_20813.f_1 == 0)
		{
			Global_20813.f_1 = 3;
		}
	}
}

void func_163(int iParam0)//Position - 0xC46C
{
	if (func_167())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_166())
		{
			func_165(1, 1);
		}
		else
		{
			func_165(0, 0);
		}
	}
	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8684, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22166 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 30);
	}
	if (!func_164())
	{
		Global_20813.f_1 = 3;
	}
}

int func_164()//Position - 0xC4F6
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_165(bool bParam0, bool bParam1)//Position - 0xC51D
{
	if (bParam0)
	{
		if (func_168(0))
		{
			Global_21025 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20750);
			}
			Global_20741 = { Global_20759[Global_20758 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
	else if (Global_21025 == 1)
	{
		Global_21025 = 0;
		Global_20741 = { Global_20766[Global_20758 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20750);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
}

bool func_166()//Position - 0xC591
{
	return BitTest(Global_1956030, 5);
}

bool func_167()//Position - 0xC59F
{
	return BitTest(Global_1956030, 19);
}

int func_168(int iParam0)//Position - 0xC5AE
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
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
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_169()//Position - 0xC605
{
	if (Global_20813.f_1 == 9 || Global_20813.f_1 == 10)
	{
		Global_22219 = 0;
		Global_22215 = 1;
	}
}

void func_170()//Position - 0xC62E
{
	struct<3> Var0;
	float fVar3;
	
	if (!PED::IS_PED_INJURED(Global_113404) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113404, Global_113403))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(Global_113403))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_idle", 3))
				{
					if (!func_2(Global_113404, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(Global_113404, Global_113403, 1, 1000000);
					}
					else
					{
						func_176();
					}
				}
				func_175(&Global_113403, iLocal_990);
			}
			else if (!func_2(Global_113404, joaat("SCRIPT_TASK_VEHICLE_PARK")))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Global_113403, true) };
				fVar3 = ENTITY::GET_ENTITY_HEADING(Global_113403);
				TASK::TASK_VEHICLE_PARK(Global_113404, Global_113403, Var0, fVar3, 3, 60f, false);
			}
		}
	}
}

void func_171()//Position - 0xC70D
{
	int iVar0;
	float fVar1;
	
	if (bLocal_60)
	{
		if (bLocal_61)
		{
			func_122();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
			{
				if (!PED::IS_PED_INJURED(Global_113404))
				{
					if (func_173())
					{
						if (ENTITY::GET_ENTITY_SPEED(Global_113403) < 2f)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113403, true))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
							}
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_113404, Global_113403, 24, 5000);
							PED::SET_PED_KEEP_TASK(Global_113404, true);
							bLocal_65 = true;
							iLocal_950 = 2;
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_idle", 3))
					{
						if (PED::IS_PED_HEADTRACKING_PED(Global_113404, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_CLEAR_LOOK_AT(Global_113404);
						}
						TASK::TASK_PLAY_ANIM(Global_113404, &cLocal_952, "leanover_exit", 4f, -4f, -1, 0, 0f, false, false, false);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_exit", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(Global_113404, &cLocal_952, "leanover_exit", 1.2f);
						iLocal_90 = MISC::GET_GAME_TIMER();
						func_175(&Global_113403, iLocal_990);
					}
					else if (!func_2(Global_113404, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						if (func_172(&iLocal_90, iLocal_990))
						{
							if (!func_2(Global_113404, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_113404, Global_113403, 1, 1000000);
							}
						}
						else
						{
							iLocal_56 = 0;
							if (bLocal_64)
							{
								fVar1 = 25f;
								iVar0 = iLocal_70;
							}
							else
							{
								fVar1 = 12f;
								iVar0 = iLocal_69;
							}
							TASK::CLEAR_PED_TASKS(Global_113404);
							TASK::TASK_CLEAR_LOOK_AT(Global_113404);
							PED::SET_DRIVER_ABILITY(Global_113404, 0.5f);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_813);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, Global_113403, Global_113410, fVar1, iVar0, 45f);
							TASK::TASK_VEHICLE_PARK(0, Global_113403, Global_113410, Global_113416, iLocal_110, 60f, true);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_813);
							TASK::TASK_PERFORM_SEQUENCE(Global_113404, iLocal_813);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_813);
						}
					}
				}
			}
		}
	}
}

int func_172(int iParam0, int iParam1)//Position - 0xC905
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	if (func_161(*iParam0, 2000) || *iParam0 == -1)
	{
		return 0;
	}
	if (!PED::DOES_GROUP_EXIST(func_6()))
	{
		*iParam0 = -1;
		return 0;
	}
	PED::GET_GROUP_SIZE(func_6(), &uVar1, &iVar0);
	if (iVar0 < 1)
	{
		*iParam0 = -1;
		return 0;
	}
	bVar4 = true;
	bVar5 = false;
	iVar3 = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 0);
	if (!PED::IS_PED_INJURED(iVar3))
	{
		iVar6 = 1;
		if (iParam1 == 1)
		{
			iVar6 = 2;
		}
		bVar4 = true;
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113403, iVar6, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 == PLAYER::PLAYER_PED_ID())
			{
				bVar4 = false;
			}
			else if (iVar2 == iVar3)
			{
				bVar4 = false;
			}
		}
		if (PED::GET_PED_CONFIG_FLAG(iVar3, 167, false))
		{
			bVar4 = false;
		}
		if (func_2(iVar3, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
		{
			bVar4 = false;
			bVar5 = true;
		}
		if (bVar4)
		{
			TASK::TASK_ENTER_VEHICLE(iVar3, Global_113403, 20000, iVar6, 2f, 9437185, 0, 0);
			bVar5 = true;
		}
	}
	if (iVar0 > 1)
	{
		iVar3 = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 1);
		if (!PED::IS_PED_INJURED(iVar3))
		{
			bVar4 = true;
			iVar6 = 0;
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113403, iVar6, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iVar2 == PLAYER::PLAYER_PED_ID())
				{
					bVar4 = false;
				}
				else if (iVar2 == iVar3)
				{
					bVar4 = false;
				}
			}
			if (PED::GET_PED_CONFIG_FLAG(iVar3, 167, false))
			{
				bVar4 = false;
			}
			if (func_2(iVar3, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
			{
				bVar4 = false;
				bVar5 = true;
			}
			if (bVar4)
			{
				TASK::TASK_ENTER_VEHICLE(iVar3, Global_113403, 20000, iVar6, 2f, 9437185, 0, 0);
				bVar5 = true;
			}
		}
	}
	if (bVar5)
	{
		return 1;
	}
	return 0;
}

int func_173()//Position - 0xCA8C
{
	if ((ENTITY::IS_ENTITY_AT_COORD(Global_113403, Global_113410, 45f, 45f, 20f, false, true, 0) || iLocal_56) || iLocal_949 == 4)
	{
		iLocal_56 = 1;
		if (TASK::GET_SCRIPT_TASK_STATUS(Global_113404, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
		{
			return 1;
		}
	}
	return 0;
}

int func_174()//Position - 0xCAE3
{
	if (bLocal_60)
	{
		if (bLocal_61)
		{
			return 1;
		}
		else if (func_125(&Local_41, &Global_113410, &Global_113416))
		{
			iLocal_103 = 0;
			Local_972 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			fLocal_83 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_113410);
			bLocal_61 = true;
			return 1;
		}
	}
	return 0;
}

void func_175(var uParam0, int iParam1)//Position - 0xCB3B
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (PED::DOES_GROUP_EXIST(func_6()))
	{
		PED::GET_GROUP_SIZE(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				iVar5 = 1;
				if (iParam1 == 1)
				{
					iVar5 = 2;
				}
				bVar4 = true;
				iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar5, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					if (iVar3 == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = false;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = false;
					}
				}
				if (PED::GET_PED_CONFIG_FLAG(iVar2, 167, false))
				{
					bVar4 = false;
				}
				if (func_2(iVar2, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					TASK::TASK_ENTER_VEHICLE(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0, 0);
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					bVar4 = true;
					iVar5 = 0;
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar5, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						if (iVar3 == PLAYER::PLAYER_PED_ID())
						{
							bVar4 = false;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = false;
						}
					}
					if (PED::GET_PED_CONFIG_FLAG(iVar2, 167, false))
					{
						bVar4 = false;
					}
					if (func_2(iVar2, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
					{
						bVar4 = false;
					}
					if (bVar4)
					{
						TASK::TASK_ENTER_VEHICLE(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0, 0);
					}
				}
			}
		}
	}
}

int func_176()//Position - 0xCC75
{
	if (!PED::IS_PED_INJURED(Global_113404) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113404, Global_113403))
		{
			STREAMING::REQUEST_ANIM_DICT(&cLocal_952);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_952))
			{
				if (PED::IS_PED_HEADTRACKING_PED(Global_113404, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_CLEAR_LOOK_AT(Global_113404);
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_813);
				TASK::TASK_PLAY_ANIM(0, &cLocal_952, "leanover_enter", 4f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, &cLocal_952, "leanover_idle", 4f, -8f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_813);
				TASK::TASK_PERFORM_SEQUENCE(Global_113404, iLocal_813);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_813);
				return 1;
			}
		}
	}
	return 0;
}

int func_177()//Position - 0xCD23
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_113403))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
		{
			iLocal_109 = OBJECT::CREATE_OBJECT(iLocal_108, ENTITY::GET_ENTITY_COORDS(Global_113403, true), true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_109, Global_113403, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Global_113403, "Chassis"), Local_984, Local_987, false, false, false, false, 2, true, 0);
			VEHICLE::SET_TAXI_LIGHTS(Global_113403, false);
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /* GXT: Taxi */))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("taxi" /* GXT: Taxi */, false);
				HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(iLocal_109));
			}
			iLocal_93 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("taxi" /* GXT: Taxi */);
		}
	}
	return 0;
}

int func_178()//Position - 0xCDBE
{
	STREAMING::REQUEST_MODEL(iLocal_108);
	iLocal_111 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("taxi_display");
	iLocal_112 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_952);
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_108) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_111)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_112)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_952))
	{
		return 1;
	}
	return 0;
}

void func_179()//Position - 0xCE17
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
	{
		return;
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_68))
	{
		if (!func_187() && !func_186(8, -1))
		{
			iLocal_68 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_68, Global_113403, Local_978, true);
			func_183();
			CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iLocal_68, true);
		}
	}
	else if (!bLocal_60 || bLocal_59)
	{
		if (!func_187() && !func_186(8, -1))
		{
			if (!CAM::IS_CAM_ACTIVE(iLocal_68))
			{
				func_182(4, 1, -1);
				CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iLocal_68, true);
				func_181();
				CAM::SET_CAM_ACTIVE(iLocal_68, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				Global_113420 = 1;
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(true);
				func_183();
				iLocal_58 = 1;
			}
			else
			{
				func_183();
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
		}
	}
	else if (CAM::IS_CAM_ACTIVE(iLocal_68))
	{
		CAM::SET_CAM_ACTIVE(iLocal_68, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		Global_113420 = 0;
		GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
		HUD::UNLOCK_MINIMAP_POSITION();
		HUD::UNLOCK_MINIMAP_ANGLE();
		HUD::SET_RADAR_ZOOM(0);
		iLocal_58 = 1;
		func_180();
	}
}

void func_180()//Position - 0xCF34
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		if (bLocal_60)
		{
			if (Local_41.f_0 == Local_827[iVar0 /*3*/])
			{
				iLocal_92 = iVar0;
			}
		}
		iVar0++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "HIGHLIGHT_DESTINATION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_92);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_181()//Position - 0xCF7C
{
	struct<3> Var0;
	
	if (HUD::DOES_BLIP_EXIST(Local_41.f_0))
	{
		Var0 = { HUD::GET_BLIP_COORDS(Local_41.f_0) };
		if (CAM::DOES_CAM_EXIST(iLocal_68) && CAM::IS_CAM_ACTIVE(iLocal_68))
		{
			HUD::LOCK_MINIMAP_POSITION(Var0.f_0, Var0.f_1);
			HUD::LOCK_MINIMAP_ANGLE(0);
			HUD::SET_RADAR_ZOOM(1400);
		}
	}
}

void func_182(int iParam0, bool bParam1, int iParam2)//Position - 0xCFC1
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1668317.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1668317.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1668317.f_1046), iParam0);
			}
			break;
	}
}

void func_183()//Position - 0xD010
{
	if (CAM::DOES_CAM_EXIST(iLocal_68))
	{
		func_184(Global_113403, &iLocal_68, Local_981);
		CAM::SET_CAM_FOV(iLocal_68, fLocal_74);
		CAM::SET_CAM_NEAR_CLIP(iLocal_68, 0.01f);
		CAM::SET_CAM_IS_INSIDE_VEHICLE(iLocal_68, true);
		CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
	}
}

void func_184(int iParam0, int iParam1, struct<3> Param2)//Position - 0xD04F
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (CAM::DOES_CAM_EXIST(*iParam1))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
			fVar5 = Var0.f_1;
			Var6 = { func_83(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_113403, Param2) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_113403, Local_978)) };
			func_185(Var6, &fVar3, &fVar4, 1);
			CAM::SET_CAM_ROT(*iParam1, fVar3, fVar5, fVar4, 2);
		}
	}
}

void func_185(struct<3> Param0, var uParam3, var uParam4, int iParam5)//Position - 0xD0BA
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam4 = MISC::ATAN2(Param0.f_0, Param0.f_1);
	}
	else if (Param0.f_0 < 0f)
	{
		*uParam4 = -90f;
	}
	else
	{
		*uParam4 = 90f;
	}
	if (iParam5 == 1)
	{
		*uParam4 = (*uParam4 * -1f);
		if (*uParam4 < 0f)
		{
			*uParam4 = (*uParam4 + 360f);
		}
	}
	fVar0 = SYSTEM::SQRT(((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)));
	if (fVar0 != 0f)
	{
		*uParam3 = MISC::ATAN2(Param0.f_2, fVar0);
	}
	else if (Param0.f_2 < 0f)
	{
		*uParam3 = -90f;
	}
	else
	{
		*uParam3 = 90f;
	}
}

bool func_186(int iParam0, int iParam1)//Position - 0xD15F
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

bool func_187()//Position - 0xD197
{
	return Global_23570;
}

void func_188()//Position - 0xD1A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	int iVar8;
	
	iVar0 = 0;
	func_193();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "CLEAR_TAXI_DISPLAY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_827[iVar0 /*3*/]))
		{
		}
		else if (func_128(Local_827[iVar0 /*3*/]) == -1)
		{
		}
		else if (func_132(HUD::GET_BLIP_COORDS(Local_827[iVar0 /*3*/]), 0f, 0f, 0f, 1056964608, 0))
		{
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "ADD_TAXI_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(HUD::GET_BLIP_SPRITE(Local_827[iVar0 /*3*/]));
			HUD::GET_HUD_COLOUR(HUD::GET_BLIP_HUD_COLOUR(Local_827[iVar0 /*3*/]), &iVar1, &iVar2, &iVar3, &uVar4);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			iVar8 = func_191(Local_827[iVar0 /*3*/]);
			if (iVar8 == -1)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(Local_827[iVar0 /*3*/]);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_189(iVar8));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			if (HUD::GET_BLIP_INFO_ID_TYPE(Local_827[iVar0 /*3*/]) == 2)
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_827[iVar0 /*3*/]))))
				{
					Var5 = { ENTITY::GET_ENTITY_COORDS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_827[iVar0 /*3*/])), true) };
				}
			}
			else if (HUD::GET_BLIP_INFO_ID_TYPE(Local_827[iVar0 /*3*/]) == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_827[iVar0 /*3*/]), false))
				{
					Var5 = { ENTITY::GET_ENTITY_COORDS(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_827[iVar0 /*3*/]), true) };
				}
			}
			else
			{
				Var5 = { HUD::GET_BLIP_COORDS(Local_827[iVar0 /*3*/]) };
			}
			func_69(ZONE::GET_NAME_OF_ZONE(Var5));
			if (Local_827[iVar0 /*3*/].f_2 == 0)
			{
				if (Local_827[iVar0 /*3*/].f_1 != 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Local_827[iVar0 /*3*/].f_1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM2" /* GXT: ~a~ and ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Local_827[iVar0 /*3*/].f_1);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Local_827[iVar0 /*3*/].f_2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (bLocal_60)
			{
				if (Local_41.f_0 == Local_827[iVar0 /*3*/])
				{
					iLocal_92 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_60)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SHOW_TAXI_DESTINATION");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "HIGHLIGHT_DESTINATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_92);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SET_TAXI_PRICE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_101);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SHOW_TAXI_DESTINATION");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "HIGHLIGHT_DESTINATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_92);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_189(int iParam0)//Position - 0xD410
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL" /* GXT: Barber Shop */;
			break;
		
		case 1:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 2:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 3:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 4:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 5:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 6:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 7:
			return func_190(iParam0, 0, 0);
			break;
		
		case 8:
			return func_190(iParam0, 0, 0);
			break;
		
		case 9:
			return func_190(iParam0, 0, 0);
			break;
		
		case 10:
			return func_190(iParam0, 0, 0);
			break;
		
		case 11:
			return func_190(iParam0, 0, 0);
			break;
		
		case 12:
			return func_190(iParam0, 0, 0);
			break;
		
		case 13:
			return func_190(iParam0, 0, 0);
			break;
		
		case 14:
			return func_190(iParam0, 0, 0);
			break;
		
		case 15:
			return func_190(iParam0, 0, 0);
			break;
		
		case 16:
			return func_190(iParam0, 0, 0);
			break;
		
		case 17:
			return func_190(iParam0, 0, 0);
			break;
		
		case 18:
			return func_190(iParam0, 0, 0);
			break;
		
		case 19:
			return func_190(iParam0, 0, 0);
			break;
		
		case 20:
			return func_190(iParam0, 0, 0);
			break;
		
		case 21:
			return func_190(iParam0, 0, 0);
			break;
		
		case 22:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 23:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 24:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 25:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 26:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 27:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 28:
			return "SB_AMU2" /* GXT: Ammu-Nation with Range */;
			break;
		
		case 29:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 30:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 31:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 32:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 33:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 34:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 35:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 36:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 37:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 38:
			return "SB_AMU2" /* GXT: Ammu-Nation with Range */;
			break;
		
		case 39:
			return func_190(iParam0, 0, 0);
			break;
		
		case 40:
			return func_190(iParam0, 0, 0);
			break;
		
		case 41:
			return func_190(iParam0, 0, 0);
			break;
		
		case 42:
			return func_190(iParam0, 0, 0);
			break;
		
		case 43:
			return func_190(iParam0, 0, 0);
			break;
		
		case 44:
			return func_190(iParam0, 0, 0);
			break;
		
		case 45:
			return func_190(iParam0, 0, 0);
			break;
		
		case 46:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 47:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 48:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 49:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 52:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 50:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 51:
			return "S_CL_BL" /* GXT: Casino Store */;
			break;
		
		case 53:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 54:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 55:
			return func_190(iParam0, 0, 0);
			break;
		
		case 56:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 57:
			return func_190(iParam0, 0, 0);
			break;
		
		case 58:
			return func_190(iParam0, 0, 0);
			break;
		
		case 59:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 60:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_190(int iParam0, int iParam1, bool bParam2)//Position - 0xD857
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM" /* GXT: Empty Shop */;
			break;
		
		case 0:
			return "S_H_01" /* GXT: Bob Mulét Hair & Beauty */;
			break;
		
		case 1:
			return "S_H_02" /* GXT: Herr Kutz Barber */;
			break;
		
		case 2:
			return "S_H_03" /* GXT: Beachcombover Barbers */;
			break;
		
		case 3:
			return "S_H_04" /* GXT: O'Sheas Barbers */;
			break;
		
		case 4:
			return "S_H_05" /* GXT: Herr Kutz Barber */;
			break;
		
		case 5:
			return "S_H_06" /* GXT: Hair On Hawick Barbers */;
			break;
		
		case 6:
			return "S_H_07" /* GXT: Herr Kutz Barber */;
			break;
		
		case 7:
			return "S_CL_01" /* GXT: Discount Store */;
			break;
		
		case 8:
			return "S_CL_02" /* GXT: Discount Store */;
			break;
		
		case 9:
			return "S_CL_03" /* GXT: Binco Clothing */;
			break;
		
		case 10:
			return "S_CL_04" /* GXT: Discount Store */;
			break;
		
		case 11:
			return "S_CL_05" /* GXT: Discount Store */;
			break;
		
		case 12:
			return "S_CL_06" /* GXT: Binco Clothing */;
			break;
		
		case 13:
			return "S_CL_07" /* GXT: Discount Store */;
			break;
		
		case 14:
			return "S_CM_01" /* GXT: Suburban */;
			break;
		
		case 15:
			return "S_CM_03" /* GXT: Suburban */;
			break;
		
		case 16:
			return "S_CM_04" /* GXT: Suburban */;
			break;
		
		case 17:
			return "S_CM_05" /* GXT: Suburban */;
			break;
		
		case 18:
			return "S_CH_01" /* GXT: Ponsonbys */;
			break;
		
		case 19:
			return "S_CH_02" /* GXT: Ponsonbys */;
			break;
		
		case 20:
			return "S_CH_03" /* GXT: Ponsonbys */;
			break;
		
		case 21:
			return "S_CA_01" /* GXT: Vespucci Movie Masks */;
			break;
		
		case 22:
			return "S_T_01" /* GXT: Blazing Tattoo */;
			break;
		
		case 23:
			return "S_T_02" /* GXT: Alamo Tattoo Studio */;
			break;
		
		case 24:
			return "S_T_03" /* GXT: Paleto Tattoo Studio */;
			break;
		
		case 25:
			return "S_T_04" /* GXT: The Pit */;
			break;
		
		case 26:
			return "S_T_05" /* GXT: Los Santos Tattoos */;
			break;
		
		case 27:
			return "S_T_06" /* GXT: Ink Inc Tattoos */;
			break;
		
		case 28:
			return "S_G_01" /* GXT: Ammu-Nation */;
			break;
		
		case 29:
			return "S_G_02" /* GXT: Ammu-Nation */;
			break;
		
		case 30:
			return "S_G_03" /* GXT: Ammu-Nation */;
			break;
		
		case 31:
			return "S_G_04" /* GXT: Ammu-Nation */;
			break;
		
		case 32:
			return "S_G_05" /* GXT: Ammu-Nation */;
			break;
		
		case 33:
			return "S_G_06" /* GXT: Ammu-Nation */;
			break;
		
		case 34:
			return "S_G_07" /* GXT: Ammu-Nation */;
			break;
		
		case 35:
			return "S_G_08" /* GXT: Ammu-Nation */;
			break;
		
		case 36:
			return "S_G_09" /* GXT: Ammu-Nation */;
			break;
		
		case 37:
			return "S_G_10" /* GXT: Ammu-Nation */;
			break;
		
		case 38:
			return "S_G_11" /* GXT: Ammu-Nation */;
			break;
		
		case 39:
			return "S_MO_01" /* GXT: Los Santos Customs */;
			break;
		
		case 40:
			return "S_MO_05" /* GXT: Los Santos Customs */;
			break;
		
		case 41:
			return "S_MO_06" /* GXT: Los Santos Customs */;
			break;
		
		case 42:
			return "S_MO_07" /* GXT: Beeker's Garage */;
			break;
		
		case 43:
			return "S_MO_08" /* GXT: Los Santos Customs */;
			break;
		
		case 44:
			return "S_MO_09" /* GXT: Benny's Original Motor Works */;
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					}
					else
					{
						return "S_MO_10" /* GXT: Custom Mod Shop */;
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					}
					else
					{
						return "S_MO_10" /* GXT: Custom Mod Shop */;
					}
					break;
				
				case 11:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					}
					else
					{
						return "S_MO_B" /* GXT: Bunker Vehicle Workshop */;
					}
					break;
				
				case 10:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					}
					else
					{
						return "S_MO_T" /* GXT: Weapon & Vehicle Workshop */;
					}
					break;
				
				case 12:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					}
					else
					{
						return "S_MO_HA" /* GXT: Hangar Aircraft Workshop */;
					}
					break;
				
				case 13:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 14:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 15:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 16:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 17:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 18:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 19:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 20:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 21:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
			}
			return "S_MO_11" /* GXT: Custom Auto Shop */;
			break;
		
		case 46:
			return "S_G_12" /* GXT: MOC Armory */;
			break;
		
		case 47:
			return "S_G_13" /* GXT: Avenger Armory */;
			break;
		
		case 48:
			return "S_G_14" /* GXT: Terrorbyte Armory */;
			break;
		
		case 49:
			return "S_G_15" /* GXT: Arena Armory */;
			break;
		
		case 52:
			return "S_G_16" /* GXT: Arcade Armory */;
			break;
		
		case 53:
			return "S_G_17" /* GXT: Kosatka Armory */;
			break;
		
		case 50:
			return "S_H_08" /* GXT: Penthouse Barber */;
			break;
		
		case 51:
			return "S_CL_09" /* GXT: Casino Store */;
			break;
		
		case 54:
			return "S_T_07" /* GXT: LS Car Meet Tattoos */;
			break;
		
		case 55:
			return "S_CL_10" /* GXT: Merch Shop */;
			break;
		
		case 56:
			return "S_G_18" /* GXT: Fixer Armory */;
			break;
		
		case 57:
			return "S_CL_11" /* GXT: Record A Studios */;
			break;
		
		case 58:
			return "S_G_19" /* GXT: Gun Van */;
			break;
		
		case 59:
			return "S_G_20";
			break;
		
		case 60:
			return "S_G_21";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_191(int iParam0)//Position - 0xDE03
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		iVar1 = iVar0;
		iVar2 = func_192(iVar1);
		if (Global_33208[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_192(int iParam0)//Position - 0xDE3E
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		case 45:
			return 64;
			break;
		
		case 46:
			return 48;
			break;
		
		case 47:
			return 48;
			break;
		
		case 48:
			return 48;
			break;
		
		case 49:
			return 48;
			break;
		
		case 52:
			return 48;
			break;
		
		case 50:
			return 25;
			break;
		
		case 51:
			return 40;
			break;
		
		case 53:
			return 48;
			break;
		
		case 54:
			return 42;
			break;
		
		case 55:
			return 40;
			break;
		
		case 56:
			return 48;
			break;
		
		case 57:
			return 40;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 48;
			break;
		
		case 60:
			return 48;
			break;
		
		default:
			break;
	}
	return 263;
}

void func_193()//Position - 0xE1B8
{
	int iVar0;
	
	iLocal_91 = 0;
	func_210();
	func_197(iLocal_44, 0);
	func_197(iLocal_45, 0);
	func_197(32, 0);
	func_197(143, 0);
	func_197(144, 0);
	func_197(145, 0);
	func_197(146, 0);
	func_197(78, 0);
	func_197(79, 0);
	func_197(88, 0);
	func_197(124, 0);
	func_197(112, 0);
	func_197(123, 0);
	func_197(293, 0);
	func_197(86, 0);
	func_197(77, 0);
	func_197(89, 0);
	func_197(106, 0);
	func_197(108, 0);
	func_197(120, 0);
	func_197(352, 0);
	func_197(107, 0);
	func_197(96, 0);
	func_197(104, 0);
	func_197(105, 0);
	func_197(80, 0);
	func_197(113, 0);
	func_197(118, 0);
	func_197(207, 1);
	func_197(208, 1);
	func_197(209, 1);
	func_197(210, 1);
	func_197(211, 1);
	func_197(212, 1);
	func_197(213, 1);
	func_197(214, 1);
	func_197(321, 1);
	func_197(320, 1);
	func_197(319, 1);
	func_197(322, 1);
	func_197(325, 1);
	func_197(324, 1);
	func_197(349, 1);
	func_197(323, 1);
	func_197(326, 1);
	func_197(317, 1);
	func_197(318, 1);
	func_197(363, 0);
	func_197(355, 0);
	func_197(263, 1);
	func_197(262, 1);
	func_197(267, 1);
	func_197(266, 1);
	func_197(265, 1);
	func_197(400, 0);
	func_197(381, 0);
	func_197(384, 0);
	func_197(382, 0);
	func_197(206, 0);
	func_197(405, 0);
	func_197(385, 0);
	func_197(383, 0);
	func_197(386, 0);
	func_197(387, 0);
	func_197(389, 0);
	func_197(388, 0);
	func_197(149, 0);
	func_197(66, 0);
	func_197(115, 0);
	func_197(114, 0);
	func_197(205, 1);
	func_197(48, 0);
	func_197(40, 1);
	func_197(357, 1);
	func_197(356, 1);
	func_197(359, 1);
	func_197(110, 1);
	func_197(60, 1);
	func_197(41, 1);
	func_197(61, 1);
	func_197(374, 1);
	func_197(375, 1);
	func_197(64, 1);
	func_197(165, 1);
	func_197(166, 1);
	func_197(167, 1);
	func_197(168, 1);
	func_197(169, 1);
	func_197(170, 1);
	func_197(172, 1);
	func_197(280, 1);
	func_197(37, 1);
	func_197(147, 1);
	func_197(62, 0);
	func_197(95, 1);
	func_197(99, 1);
	func_197(102, 1);
	func_197(135, 1);
	func_197(103, 1);
	func_197(90, 1);
	func_197(109, 1);
	func_197(141, 1);
	func_197(136, 1);
	func_197(127, 1);
	func_197(142, 1);
	func_197(38, 1);
	func_197(84, 1);
	func_197(119, 1);
	func_197(121, 1);
	func_197(122, 1);
	func_197(68, 1);
	func_197(126, 1);
	func_197(85, 1);
	func_197(140, 1);
	func_197(197, 1);
	func_197(162, 1);
	func_197(315, 1);
	func_197(71, 1);
	func_197(72, 1);
	func_197(446, 1);
	func_197(225, 1);
	func_197(73, 1);
	func_197(111, 1);
	func_197(75, 1);
	func_197(93, 1);
	func_197(98, 1);
	func_197(117, 1);
	iLocal_94 = func_194();
	iLocal_95 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
	if (MISC::GET_MISSION_FLAG())
	{
		if (iLocal_94 == 0)
		{
			if (HUD::DOES_BLIP_EXIST(Global_113407))
			{
				iVar0 = 0;
				while (iVar0 < 40)
				{
					if (HUD::DOES_BLIP_EXIST(Local_827[iVar0 /*3*/]))
					{
						if (Local_827[iVar0 /*3*/] == Global_113407)
						{
							iLocal_92 = iVar0;
							iVar0 = 40;
						}
					}
					iVar0++;
				}
			}
		}
	}
	else if (!Global_113407 == 0)
	{
		Global_113407 = 0;
	}
	if (MISC::GET_MISSION_FLAG())
	{
		if (!Global_113409 == -1)
		{
			iVar0 = 0;
			while (iVar0 < 40)
			{
				if (HUD::DOES_BLIP_EXIST(Local_827[iVar0 /*3*/]))
				{
					if (func_128(Local_827[iVar0 /*3*/]) == Global_113409)
					{
						iLocal_92 = iVar0;
						iVar0 = 40;
					}
				}
				iVar0++;
			}
		}
	}
	else if (!Global_113409 == -1)
	{
		Global_113409 = -1;
	}
}

int func_194()//Position - 0xE632
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = HUD::GET_FIRST_BLIP_INFO_ID(iLocal_44);
	while (HUD::DOES_BLIP_EXIST(iVar1))
	{
		if (func_196(iVar1))
		{
			if ((HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 4 || HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 6) || HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 3)
			{
				iVar0++;
			}
			if (HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 2 || HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 1)
			{
				if (func_195(iVar1))
				{
					iVar0++;
				}
			}
		}
		iVar1 = HUD::GET_NEXT_BLIP_INFO_ID(iLocal_44);
	}
	iVar1 = HUD::GET_FIRST_BLIP_INFO_ID(iLocal_45);
	while (HUD::DOES_BLIP_EXIST(iVar1))
	{
		if (func_196(iVar1))
		{
			if (HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 4)
			{
				iVar0++;
			}
		}
		iVar1 = HUD::GET_NEXT_BLIP_INFO_ID(iLocal_45);
	}
	return iVar0;
}

int func_195(int iParam0)//Position - 0xE6EE
{
	if (((HUD::GET_BLIP_HUD_COLOUR(iParam0) == 9 || HUD::GET_BLIP_HUD_COLOUR(iParam0) == 11) || HUD::GET_BLIP_HUD_COLOUR(iParam0) == 10) || HUD::GET_BLIP_HUD_COLOUR(iParam0) == 61)
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)//Position - 0xE734
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = HUD::GET_BLIP_INFO_ID_DISPLAY(iParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_197(int iParam0, bool bParam1)//Position - 0xE764
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar4 = HUD::GET_FIRST_BLIP_INFO_ID(iParam0);
	iVar5 = 20;
	while (HUD::DOES_BLIP_EXIST(iVar4))
	{
		if (iLocal_98 >= iVar5)
		{
			SYSTEM::WAIT(0);
			iLocal_98 = 0;
			if (!func_230())
			{
				func_238(1);
			}
			func_183();
			func_225();
			func_224();
		}
		if (iLocal_91 < 40)
		{
			if (func_196(iVar4))
			{
				if (func_209(iVar4))
				{
					if (!func_207(&iVar4))
					{
						bVar3 = false;
						switch (iParam0)
						{
							case 32:
							case 143:
							case 144:
							case 145:
							case 146:
							case 78:
							case 79:
							case 88:
							case 124:
							case 112:
							case 123:
							case 293:
							case 86:
							case 77:
							case 89:
							case 106:
							case 108:
							case 120:
							case 352:
							case 107:
							case 96:
							case 104:
							case 105:
							case 80:
							case 113:
							case 118:
							case 62:
							case 400:
							case 381:
							case 384:
							case 382:
							case 206:
							case 405:
							case 385:
							case 383:
							case 386:
							case 387:
							case 389:
							case 388:
							case 149:
							case 66:
							case 115:
							case 114:
							case 48:
							case 40:
							case 357:
							case 356:
							case 359:
							case 110:
							case 60:
							case 41:
							case 61:
							case 374:
							case 375:
							case 64:
							case 37:
							case 147:
							case 95:
							case 99:
							case 102:
							case 135:
							case 103:
							case 90:
							case 109:
							case 141:
							case 136:
							case 127:
							case 142:
							case 38:
							case 84:
							case 119:
							case 121:
							case 122:
							case 68:
							case 126:
							case 85:
							case 140:
							case 71:
							case 72:
							case 446:
							case 225:
							case 73:
							case 111:
							case 75:
							case 93:
							case 98:
							case 117:
							case 315:
							case 197:
							case 162:
							case 205:
							case 207:
							case 208:
							case 209:
							case 210:
							case 211:
							case 212:
							case 213:
							case 214:
							case 165:
							case 166:
							case 167:
							case 168:
							case 169:
							case 170:
							case 172:
							case 280:
							case 355:
							case 263:
							case 262:
							case 267:
							case 266:
							case 265:
							case 321:
							case 320:
							case 319:
							case 322:
							case 325:
							case 324:
							case 349:
							case 323:
							case 326:
							case 317:
							case 318:
								bVar3 = true;
								break;
							
							case 363:
								iVar7 = func_206(&iVar4);
								if (((iVar7 == 33 || iVar7 == 92) || iVar7 == 89) || iVar7 == 88)
								{
									bVar3 = false;
								}
								else
								{
									bVar3 = true;
								}
								break;
							
							default:
								bVar3 = false;
								if (iParam0 == iLocal_45)
								{
									bVar3 = true;
								}
								else if (iParam0 == iLocal_44)
								{
									if (func_205(&iVar4))
									{
										bVar3 = true;
									}
								}
								break;
						}
						if (HUD::DOES_BLIP_EXIST(Global_113406))
						{
							if (func_128(iVar4) == iLocal_44)
							{
								if (!Global_113406 == iVar4)
								{
									bVar3 = false;
								}
							}
						}
						if (bVar3)
						{
							bVar3 = false;
							if (func_196(iVar4))
							{
								iVar6 = HUD::GET_BLIP_INFO_ID_TYPE(iVar4);
								if (((iVar6 == 4 || iVar6 == 5) || iVar6 == 2) || iVar6 == 1)
								{
									bVar3 = true;
								}
							}
							if (bVar3)
							{
								func_204(&iVar4, &Var0);
								func_198(Var0, bParam1);
							}
						}
					}
				}
			}
		}
		iLocal_98++;
		iVar4 = HUD::GET_NEXT_BLIP_INFO_ID(iParam0);
	}
}

void func_198(struct<3> Param0, bool bParam3)//Position - 0xEBBA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	if (func_128(Param0.f_0) == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_128(Local_827[iVar0 /*3*/]) == func_128(Param0.f_0))
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		else if (iVar0 == iLocal_91)
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_91)
		{
			if (func_128(Local_827[iVar0 /*3*/]) == func_128(Param0.f_0))
			{
				if (func_202(Param0, Local_827[iVar0 /*3*/]))
				{
					if (bParam3)
					{
						func_201(Param0, iVar0);
						iVar0 = 40;
						return;
					}
					else
					{
						func_199(Param0, iVar0);
						iLocal_91++;
						iVar0 = 40;
						return;
					}
				}
				else if (bParam3)
				{
					iVar0 = 40;
					return;
				}
			}
			else
			{
				func_199(Param0, iVar0);
				iLocal_91++;
				iVar0 = 40;
				return;
			}
		}
		else
		{
			func_199(Param0, iVar0);
			iLocal_91++;
			iVar0 = 40;
			return;
		}
		iVar0++;
	}
}

void func_199(struct<3> Param0, int iParam3)//Position - 0xECD9
{
	func_200(iParam3);
	Local_827[iParam3 /*3*/] = { Param0 };
	if (func_128(Local_827[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		iLocal_97 = iParam3;
		Local_975 = { HUD::GET_BLIP_COORDS(Local_827[iParam3 /*3*/]) };
	}
}

void func_200(int iParam0)//Position - 0xED1A
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 39;
	while (iVar0 > iParam0)
	{
		Var1 = { Local_827[(iVar0 - 1) /*3*/] };
		Local_827[iVar0 /*3*/] = { Var1 };
		if ((iVar0 - 1) == iLocal_97)
		{
			iLocal_97 = iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
}

void func_201(struct<3> Param0, int iParam3)//Position - 0xED5F
{
	Local_827[iParam3 /*3*/] = { Param0 };
	if (func_128(Local_827[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		iLocal_97 = iParam3;
		Local_975 = { HUD::GET_BLIP_COORDS(Local_827[iParam3 /*3*/]) };
	}
}

int func_202(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5)//Position - 0xED9A
{
	if (func_203(iParam0) < func_203(iParam3))
	{
		return 1;
	}
	return 0;
}

float func_203(int iParam0)//Position - 0xEDB7
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 10000000f };
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (HUD::DOES_BLIP_EXIST(iParam0))
		{
			Var0 = { func_48(iParam0) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
	}
	return SYSTEM::VMAG(Var0);
}

void func_204(int iParam0, var uParam1)//Position - 0xEDFA
{
	struct<3> Var0;
	
	*uParam1 = *iParam0;
	if (!*uParam1 == Global_113408)
	{
		Var0 = { func_48(*uParam1) };
		PATHFIND::GET_STREET_NAME_AT_COORD(Var0, &(uParam1->f_1), &(uParam1->f_2));
	}
	else
	{
		PATHFIND::GET_STREET_NAME_AT_COORD(Global_113410, &(uParam1->f_1), &(uParam1->f_2));
	}
}

int func_205(int iParam0)//Position - 0xEE44
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = HUD::GET_BLIP_HUD_COLOUR(*iParam0);
		if (((iVar0 == 9 || iVar0 == 11) || iVar0 == 10) || iVar0 == 61)
		{
			return 1;
		}
		else if ((iVar0 == 12 || iVar0 == 14) || iVar0 == 13)
		{
			return 1;
		}
	}
	return 0;
}

int func_206(int iParam0)//Position - 0xEEB2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_98305[iVar0 /*17*/])
		{
			if (Global_98305[iVar0 /*17*/].f_9 != 263)
			{
				if (HUD::DOES_BLIP_EXIST(Global_33208[Global_98305[iVar0 /*17*/].f_9 /*23*/].f_19))
				{
					if (Global_33208[Global_98305[iVar0 /*17*/].f_9 /*23*/].f_19 == *iParam0)
					{
						return Global_98305[iVar0 /*17*/].f_5;
					}
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_207(int iParam0)//Position - 0xEF25
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		return 1;
	}
	if (Global_113405 == *iParam0)
	{
		return 1;
	}
	if (HUD::GET_BLIP_COLOUR(*iParam0) == 39)
	{
		return 1;
	}
	if (func_208(HUD::GET_BLIP_COORDS(*iParam0), 0f, 0f, 0f, 0))
	{
		return 1;
	}
	if (func_128(*iParam0) == -1)
	{
		return 1;
	}
	return 0;
}

bool func_208(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xEF80
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_209(int iParam0)//Position - 0xEFC7
{
	float fVar0;
	
	if (!func_128(iParam0) == iLocal_44)
	{
		fVar0 = func_203(iParam0);
		if (fVar0 > 50f)
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

void func_210()//Position - 0xEFFB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		Local_827[iVar0 /*3*/] = 0;
		iVar0++;
	}
	iLocal_91 = 0;
	iLocal_97 = -1;
	Local_975 = { 0f, 0f, 0f };
	iLocal_98 = 0;
}

bool func_211()//Position - 0xF02F
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	
	bVar0 = false;
	if (!HUD::DOES_BLIP_EXIST(Local_827[iLocal_92 /*3*/]))
	{
		if (iLocal_92 != iLocal_97)
		{
			return 1;
		}
	}
	if (SYSTEM::TIMERB() > 250)
	{
		if (!bVar0)
		{
			if (iLocal_95 != HUD::GET_NUMBER_OF_ACTIVE_BLIPS())
			{
				bVar0 = true;
			}
			iLocal_95 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
			if (iLocal_96 != func_212())
			{
				bVar0 = true;
			}
			iLocal_96 = func_212();
		}
		if (!bVar0)
		{
			if (iLocal_97 != -1)
			{
				if (HUD::DOES_BLIP_EXIST(Local_827[iLocal_97 /*3*/]))
				{
					if (func_128(Local_827[iLocal_97 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
					{
						Var1 = { HUD::GET_BLIP_COORDS(Local_827[iLocal_97 /*3*/]) };
						if (!func_132(Var1, Local_975, 1056964608, 0))
						{
							bVar0 = true;
						}
					}
				}
				else
				{
					iVar4 = HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID());
					if (HUD::DOES_BLIP_EXIST(iVar4))
					{
						Var1 = { HUD::GET_BLIP_COORDS(iVar4) };
						if (!func_132(Var1, Local_975, 1056964608, 0))
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		SYSTEM::SETTIMERB(0);
	}
	return bVar0;
}

int func_212()//Position - 0xF123
{
	int iVar0;
	
	iVar0 = 0;
	if (func_3(Global_113403))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, -1, false))
		{
			iVar0++;
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, 0, false))
		{
			iVar0++;
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, 1, false))
		{
			iVar0++;
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, 2, false))
		{
			iVar0++;
		}
	}
	return iVar0;
}

void func_213()//Position - 0xF18B
{
	if (iLocal_949 != 0)
	{
		HUD::SET_TEXT_RENDER_ID(iLocal_93);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_111, fLocal_86, fLocal_87, fLocal_84, fLocal_85, 0, 0, 0, 255, 0);
		}
	}
}

void func_214()//Position - 0xF1CA
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (iLocal_949 != 0)
	{
		if (iLocal_91 > 1)
		{
			func_219(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/);
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/);
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/);
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/);
			}
			if (iVar0 > 28 || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
			{
				if (!iLocal_62)
				{
					if (bLocal_60)
					{
						if (bLocal_59)
						{
							func_218();
						}
						else
						{
							iLocal_58 = 1;
						}
						bLocal_59 = true;
					}
					else
					{
						func_218();
					}
					iLocal_104 = MISC::GET_GAME_TIMER();
					iLocal_62 = 1;
				}
			}
			else
			{
				iLocal_62 = 0;
			}
			if (iVar0 < -28 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
			{
				if (!iLocal_63)
				{
					if (bLocal_60)
					{
						if (bLocal_59)
						{
							func_216();
						}
						else
						{
							iLocal_58 = 1;
						}
						bLocal_59 = true;
					}
					else
					{
						func_216();
					}
					iLocal_104 = MISC::GET_GAME_TIMER();
					iLocal_63 = 1;
				}
			}
			else
			{
				iLocal_63 = 0;
			}
		}
		if (!bLocal_60)
		{
			if (iLocal_91 > 0)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
				{
					if (HUD::DOES_BLIP_EXIST(Local_827[iLocal_92 /*3*/]))
					{
						iLocal_826 = 2;
						Local_41 = { Local_827[iLocal_92 /*3*/] };
						iLocal_56 = 0;
						iLocal_90 = MISC::GET_GAME_TIMER();
						iLocal_99 = MISC::GET_GAME_TIMER();
						iLocal_100 = MISC::GET_GAME_TIMER();
						iLocal_88 = 0;
						iLocal_948 = 0;
						bLocal_60 = true;
						iLocal_58 = 1;
						bLocal_59 = false;
					}
				}
			}
		}
		else
		{
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			if (iLocal_949 == 2)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
				{
					iLocal_826 = 13;
					iLocal_58 = 1;
					if (!PED::IS_PED_INJURED(Global_113404))
					{
						TASK::CLEAR_PED_TASKS(Global_113404);
					}
					iLocal_949 = 3;
				}
				if (!bLocal_64)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/))
					{
						iLocal_826 = 20;
						bLocal_64 = true;
						iLocal_58 = 1;
						fLocal_73 = (0.22f * 2f);
						if (!PED::IS_PED_INJURED(Global_113404))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_enter", 3))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_idle", 3))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_exit", 3))
									{
										TASK::CLEAR_PED_TASKS(Global_113404);
									}
								}
							}
						}
					}
				}
				if (func_75())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
					{
						if (bLocal_61)
						{
							iLocal_58 = 1;
							iLocal_89 = MISC::GET_GAME_TIMER();
							iLocal_951 = 0;
							iLocal_949 = 4;
						}
					}
				}
				if (iLocal_826 == 0)
				{
					if (iLocal_99 != -1)
					{
						if (func_161(iLocal_99, 68000))
						{
							iLocal_826 = 4;
							iLocal_99 = -1;
						}
					}
				}
				if (iLocal_826 == 0)
				{
					if (iLocal_100 != -1)
					{
						if (func_161(iLocal_100, 5000))
						{
							if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/))
							{
								iLocal_826 = 17;
								iLocal_99 = -1;
							}
						}
					}
				}
			}
			else if (iLocal_949 == 3)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
				{
					iLocal_826 = 3;
					iLocal_58 = 1;
					iLocal_949 = 2;
				}
			}
			if (bLocal_59)
			{
				if (func_215())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
					{
						if (HUD::DOES_BLIP_EXIST(Local_827[iLocal_92 /*3*/]))
						{
							iLocal_826 = 9;
							bLocal_61 = false;
							if (iLocal_949 == 3)
							{
								iLocal_949 = 2;
							}
							iLocal_58 = 1;
							Local_41 = { Local_827[iLocal_92 /*3*/] };
							iLocal_56 = 0;
							iLocal_90 = MISC::GET_GAME_TIMER();
							iLocal_88 = 0;
							iLocal_948 = 0;
							if (!PED::IS_PED_INJURED(Global_113404))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_enter", 3))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_idle", 3))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_exit", 3))
										{
											TASK::CLEAR_PED_TASKS(Global_113404);
										}
									}
								}
							}
							iLocal_104 = MISC::GET_GAME_TIMER();
							bLocal_59 = false;
						}
					}
					if (func_161(iLocal_104, 3000))
					{
						bLocal_59 = false;
					}
				}
			}
		}
	}
}

int func_215()//Position - 0xF533
{
	if (CAM::DOES_CAM_EXIST(iLocal_68))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_68))
		{
			return 1;
		}
	}
	if (bLocal_59)
	{
		return 1;
	}
	return 0;
}

void func_216()//Position - 0xF55B
{
	struct<3> Var0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_92 = (iLocal_92 - 1);
	if (iLocal_92 < 0)
	{
		iLocal_92 = (iLocal_91 - 1);
	}
	if (HUD::DOES_BLIP_EXIST(Local_827[iLocal_92 /*3*/]))
	{
		Var0 = { HUD::GET_BLIP_COORDS(Local_827[iLocal_92 /*3*/]) };
		if (!func_217(Var0))
		{
			HUD::LOCK_MINIMAP_POSITION(Var0.f_0, Var0.f_1);
		}
	}
}

int func_217(struct<3> Param0)//Position - 0xF5C0
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_218()//Position - 0xF5EA
{
	struct<3> Var0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_92++;
	if (iLocal_92 > (iLocal_91 - 1))
	{
		iLocal_92 = 0;
	}
	if (HUD::DOES_BLIP_EXIST(Local_827[iLocal_92 /*3*/]))
	{
		Var0 = { HUD::GET_BLIP_COORDS(Local_827[iLocal_92 /*3*/]) };
		if (!func_217(Var0))
		{
			HUD::LOCK_MINIMAP_POSITION(Var0.f_0, Var0.f_1);
		}
	}
}

void func_219(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0xF64F
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
		}
	}
}

int func_220()//Position - 0xF724
{
	if (iLocal_949 == 4)
	{
		return 1;
	}
	if (func_222())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_221())
	{
		return 1;
	}
	if (func_186(8, -1))
	{
		return 1;
	}
	if (func_168(0))
	{
		return 1;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return 1;
	}
	if (func_187())
	{
		return 1;
	}
	if (Global_79509 || Global_79510)
	{
		return 1;
	}
	return 0;
}

bool func_221()//Position - 0xF79E
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

bool func_222()//Position - 0xF7B3
{
	return Global_76369;
}

void func_223()//Position - 0xF7BF
{
	if (!Global_113408 == 0)
	{
		if (!HUD::DOES_BLIP_EXIST(Global_113408))
		{
			Global_113408 = 0;
		}
	}
}

void func_224()//Position - 0xF7E2
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 2);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 3);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 4);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 5);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 15);
	}
}

void func_225()//Position - 0xF833
{
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(1 /*CAMERA_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	func_226();
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	if (func_222() || func_168(0))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
}

void func_226()//Position - 0xF8A0
{
	MISC::SET_BIT(&Global_8684, 4);
}

int func_227()//Position - 0xF8B0
{
	int iVar0;
	
	if (Global_113404 == 0)
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(Global_113404))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Global_113404, Global_113403))
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
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (func_228(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
					if (!iVar0 == PLAYER::PLAYER_PED_ID())
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							Global_113419 = 1;
							PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
							return 1;
						}
					}
				}
			}
		}
	}
	if (CAM::DOES_CAM_EXIST(iLocal_68))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_68))
		{
			GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
			Global_113420 = 0;
		}
		CAM::SET_CAM_ACTIVE(iLocal_68, false);
		CAM::DESTROY_CAM(iLocal_68, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::UNLOCK_MINIMAP_POSITION();
		HUD::UNLOCK_MINIMAP_ANGLE();
		HUD::SET_RADAR_ZOOM(0);
	}
	return 0;
}

int func_228(int iParam0)//Position - 0xF9BF
{
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("taxi")))
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)//Position - 0xF9DA
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (func_59(PLAYER::PLAYER_PED_ID()) != iLocal_71)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_113403))
	{
		return 1;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_113404))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(Global_113404))
	{
		return 1;
	}
	if (iLocal_949 != 4)
	{
		if (iParam0 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return 1;
			}
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_113403, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_113403, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_113403, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_113403, 1, 7000))
			{
				return 1;
			}
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(Global_113403, false) };
		if (MISC::IS_BULLET_IN_AREA(Var0, 7f, false))
		{
			return 1;
		}
		fVar3 = 15f;
		Var4 = { Var0 };
		Var7 = { Var4 };
		Var4.f_0 = (Var4.f_0 - fVar3);
		Var4.f_1 = (Var4.f_1 - fVar3);
		Var4.f_2 = (Var4.f_2 - fVar3);
		Var7.f_0 = (Var7.f_0 + fVar3);
		Var7.f_1 = (Var7.f_1 + fVar3);
		Var7.f_2 = (Var7.f_2 + fVar3);
		if (MISC::IS_PROJECTILE_IN_AREA(Var4, Var7, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_230()//Position - 0xFB2C
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (Global_98292 == 1)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_113423)
	{
		return 0;
	}
	if (Global_5)
	{
		return 0;
	}
	if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
	{
		return 0;
	}
	return 1;
}

int func_231()//Position - 0xFB7B
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iLocal_95 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
		if (func_235(&iVar0, func_237(), func_236()))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			func_223();
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false) == PLAYER::PLAYER_PED_ID())
			{
				iLocal_990 = 1;
			}
			else
			{
				iLocal_990 = 2;
			}
			if (func_233(&iVar0, &iVar1, 1))
			{
				Local_969 = { ENTITY::GET_ENTITY_COORDS(Global_113403, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Local_969.f_2 = 0f;
				fLocal_72 = SYSTEM::VMAG(Local_969);
				iLocal_71 = func_59(PLAYER::PLAYER_PED_ID());
				func_232();
				iLocal_96 = func_212();
				iLocal_58 = 1;
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				Global_113419 = 1;
				iLocal_949 = 0;
				iLocal_950 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_232()//Position - 0xFC5F
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, 1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113403, 1, false);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
			}
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, 2, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113403, 2, false);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
			}
		}
	}
}

int func_233(int iParam0, int iParam1, bool bParam2)//Position - 0xFD01
{
	if (!*iParam0 == Global_113403 && !Global_113403 == 0)
	{
		func_234();
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(*iParam1))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam1, *iParam0))
				{
					Global_113403 = *iParam0;
					Global_113404 = *iParam1;
					Global_113418 = 1;
					if (bParam2)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113404, true, true);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113403, true, true);
						StringCopy(&Global_113434, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_113404))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113404, true, false);
						}
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_113403))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113403, true, false);
							StringCopy(&Global_113434, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
						}
					}
					PED::SET_PED_CONFIG_FLAG(Global_113404, 251, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_113404, 5, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_113404, 17, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Global_113404, 512, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113404, true);
					AUDIO::SET_AMBIENT_VOICE_NAME(Global_113404, "A_M_M_EASTSA_02_LATINO_FULL_01");
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_113403, 1);
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_113403, true);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_113403, false, 0);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_113403, true);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_234()//Position - 0xFE45
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_113404))
	{
		if (!PED::IS_PED_INJURED(Global_113404))
		{
			PED::SET_PED_CONFIG_FLAG(Global_113404, 251, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113404, false);
			if (!PED::IS_PED_FLEEING(Global_113404) && !PED::IS_PED_IN_COMBAT(Global_113404, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_113404, false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_113403))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113404, Global_113403))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Global_113404, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_113404, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, 1, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, 2, false)) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113403, 0, false))
									{
										TASK::TASK_PAUSE(0, 2000);
									}
									else
									{
										TASK::TASK_PAUSE(0, 500);
									}
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, Global_113403, 12f, 790699);
									TASK::CLOSE_SEQUENCE_TASK(iVar0);
									TASK::TASK_PERFORM_SEQUENCE(Global_113404, iVar0);
									TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Global_113404, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							}
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Global_113404, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Global_113404, joaat("SCRIPT_TASK_WANDER_STANDARD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_113404, joaat("SCRIPT_TASK_WANDER_STANDARD")) != 0)
				{
					TASK::TASK_WANDER_STANDARD(Global_113404, 40000f, 0);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_113404))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_113404))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_113404, false))
			{
				if (!PED::IS_PED_INJURED(Global_113404))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_113404, false, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113404, false);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Global_113404);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_113403))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_113403))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_113403, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_113403, false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_113403, true, 0);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_113403, false);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_113403);
			}
		}
	}
	Global_113404 = 0;
	Global_113403 = 0;
	StringCopy(&Global_113434, "NULL", 24);
	Global_113440 = -1;
}

int func_235(int iParam0, int iParam1, int iParam2)//Position - 0x10085
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == iParam1)
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_IN_COMBAT(iVar0, 0))
							{
								if (PED::IS_PED_MODEL(iVar0, iParam2))
								{
									if (ENTITY::IS_ENTITY_UPRIGHT(*iParam0, 90f))
									{
										iVar1 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(*iParam0);
										if (iVar1 != 3 && iVar1 != 2)
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
	}
	return 0;
}

int func_236()//Position - 0x10119
{
	return joaat("A_M_Y_StLat_01");
}

int func_237()//Position - 0x10126
{
	return joaat("taxi");
}

void func_238(bool bParam0)//Position - 0x10133
{
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /* GXT: Taxi */))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("taxi" /* GXT: Taxi */);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_68))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_68))
		{
			GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
		}
		CAM::SET_CAM_ACTIVE(iLocal_68, false);
		CAM::DESTROY_CAM(iLocal_68, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::UNLOCK_MINIMAP_POSITION();
		HUD::UNLOCK_MINIMAP_ANGLE();
		HUD::SET_RADAR_ZOOM(0);
	}
	Global_113420 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
	{
		OBJECT::DELETE_OBJECT(&iLocal_109);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_108);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_111);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_112);
	if (func_239(Global_113404))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_enter", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Global_113404, "leanover_enter", &cLocal_952, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_idle", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Global_113404, "leanover_idle", &cLocal_952, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113404, &cLocal_952, "leanover_exit", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Global_113404, "leanover_exit", &cLocal_952, -2f);
		}
		if (PED::IS_PED_HEADTRACKING_PED(Global_113404, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_CLEAR_LOOK_AT(Global_113404);
		}
	}
	STREAMING::REMOVE_ANIM_DICT(&cLocal_952);
	if (iLocal_949 == 4)
	{
		if (iLocal_951 != 10)
		{
			if (iLocal_57)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				iLocal_57 = 0;
			}
			func_162(0);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FADE_OUT_WORLD_250MS_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_113403))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113403, false))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_113403, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_113403, false);
				}
			}
			if (bParam0)
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if ((!func_81() && !func_8()) && Global_101392 != 10)
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
					}
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_3(Global_113403))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113403, true))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113403, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					if (!func_2(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) && !func_2(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
			}
		}
	}
	func_5();
	func_234();
	Global_113440 = -1;
	Global_113419 = 0;
	Global_113423 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_239(int iParam0)//Position - 0x10391
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

