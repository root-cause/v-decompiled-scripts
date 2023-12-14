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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	char[] cLocal_47[8] = 0;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int* iLocal_69 = NULL;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
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
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 47;
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
	var uLocal_285 = 47;
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
	var uLocal_333 = 47;
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
	var uLocal_522 = 47;
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
	var uLocal_711 = 27;
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
	var uLocal_739 = 27;
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
	var uLocal_767 = 27;
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
	var uLocal_876 = 27;
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
	var uLocal_985 = 27;
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
	var uLocal_1013 = 27;
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
	var uLocal_1041 = 27;
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
	var uLocal_1150 = 27;
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
	int iLocal_1259 = 0;
	int iLocal_1260 = 0;
	int iLocal_1261 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_138();
		func_133();
	}
	iLocal_68 = func_132();
	func_131(&cLocal_47, iLocal_68);
	bVar1 = func_130(0) < func_129(iLocal_68);
	while (true)
	{
		SYSTEM::WAIT(0);
		switch (iLocal_46)
		{
			case 0:
				if (bVar1)
				{
					if (func_125(&uLocal_72, &uLocal_333, &uLocal_522, &iLocal_1259))
					{
						func_123(&uLocal_237, &uLocal_333, iLocal_1259);
						func_123(&uLocal_285, &uLocal_522, iLocal_1259);
						bVar2 = true;
					}
				}
				else
				{
					func_89(&uLocal_72, &uLocal_333, &uLocal_522, &iLocal_1259, &uLocal_767, &uLocal_876, &iLocal_1260, &uLocal_1041, &uLocal_1150, &iLocal_1261, &cLocal_47, iLocal_68);
					Global_97833 = 0;
					func_123(&uLocal_237, &uLocal_333, iLocal_1259);
					func_123(&uLocal_285, &uLocal_522, iLocal_1259);
					func_123(&uLocal_711, &uLocal_767, iLocal_1260);
					func_123(&uLocal_739, &uLocal_876, iLocal_1260);
					func_123(&uLocal_985, &uLocal_1041, iLocal_1261);
					func_123(&uLocal_1013, &uLocal_1150, iLocal_1261);
					iVar3 = 0;
				}
				iLocal_46 = 1;
				break;
			
			case 1:
				if (bVar1)
				{
					if (bVar2)
					{
						func_88(iLocal_1259, &uLocal_72, 36, "DrfAud", &uLocal_237, &uLocal_285, 9, 1, 0, 0, 0);
						iLocal_46 = 3;
					}
					else
					{
						iLocal_46 = 2;
					}
				}
				else if (func_76(iLocal_1259, &uLocal_72, 36, "DrfAud", &uLocal_237, &uLocal_285, "SHRINK_CELL_Q" /* GXT: Accept advice? */, 9, 1, 0, 0, 0))
				{
					func_75(iLocal_1260, iLocal_1261, &uLocal_711, &uLocal_739, &uLocal_985, &uLocal_1013);
					iLocal_46 = 3;
				}
				break;
			
			case 2:
				if (!MOBILE::CAN_PHONE_BE_SEEN_ON_SCREEN())
				{
					while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
					{
						SYSTEM::WAIT(0);
					}
					func_74("SHRINK_BROKE", -1);
					iLocal_46 = 5;
				}
				break;
			
			case 3:
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > iVar0)
				{
					iVar0 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
				}
				if (func_73())
				{
					func_70(&iLocal_69);
					iVar3 = 1;
					iVar0 = -1;
					if (func_63(&iLocal_69, 30f))
					{
						func_62(1);
					}
				}
				if (PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					func_56(0);
				}
				if (func_55())
				{
					if ((!bVar1 && iVar3) && ((func_132() == 2 && iVar0 >= 8) || (func_132() == 3 && iVar0 >= 10)))
					{
						iLocal_46 = 4;
					}
					else
					{
						if (bVar1)
						{
							while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
							{
								SYSTEM::WAIT(0);
							}
							func_74("SHRINK_BROKE", -1);
						}
						iLocal_46 = 5;
					}
				}
				break;
			
			case 4:
				func_13(func_49(), 24, func_129(iLocal_68));
				func_11(0, 0);
				func_133();
				break;
			
			case 5:
				if (!bVar1 || !func_10("SHRINK_BROKE"))
				{
					func_1(0);
					func_133();
				}
				break;
		}
	}
}

void func_1(int iParam0)//Position - 0x316
{
	int iVar0;
	
	if (Global_114370.f_9088 || func_9(0))
	{
		iVar0 = func_8();
		if (!func_2(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_92124[iVar0 /*5*/].f_1), 5);
		Global_101428 = iParam0;
	}
}

int func_2(int iParam0)//Position - 0x35B
{
	int iVar0;
	int iVar1;
	
	func_7();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_92124[iParam0 /*5*/];
	iVar1 = Global_79519.f_109[iVar0 /*4*/];
	func_6(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_3(&(Global_114370.f_2366.f_539), iVar1);
	if (Global_95547 == Global_101429)
	{
		Global_114370.f_9088.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_92160[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_114370.f_9088.f_330[iVar1 /*6*/].f_2++;
	Global_95547 = Global_101429;
	if (iParam0 == -1)
	{
		if (Global_114370.f_9088)
		{
		}
		return 0;
	}
	if (BitTest(Global_92124[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_92124[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_3(var uParam0, int iParam1)//Position - 0x46B
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
		iVar1 = Global_114370.f_18536[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_114370.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_5(Global_114370.f_18536[iVar0], &Var2, &fVar5))
			{
				Global_114370.f_18536[iVar0] = 318;
				func_4(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98762[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98762[iVar0 /*29*/].f_9 = 0f;
				Global_98762[iVar0 /*29*/].f_12 = 0f;
				Global_98762[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98762[iVar0 /*29*/].f_10 = 0f;
				Global_98762[iVar0 /*29*/].f_13 = 0f;
				Global_98762[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98762[iVar0 /*29*/].f_11 = 0f;
				Global_98762[iVar0 /*29*/].f_14 = 0f;
				Global_98762[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98762[iVar0 /*29*/].f_26 = 0f;
				Global_98762[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98762[iVar0 /*29*/].f_27 = 0f;
				Global_98762[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98762[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_4(var uParam0)//Position - 0x631
{
	*uParam0 = -15;
}

int func_5(int iParam0, var uParam1, float fParam2)//Position - 0x63F
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
			return func_5(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_5(8, uParam1, fParam2);
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

void func_6(int iParam0, bool bParam1)//Position - 0xFAE
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

void func_7()//Position - 0xFEC
{
	Global_101427 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79481))
		{
			switch (func_49())
			{
				case 0:
					StringCopy(&Global_79481, "CMN_MARRE" /* GXT: ~s~Michael was arrested. */, 16);
					break;
				
				case 1:
					StringCopy(&Global_79481, "CMN_FARRE" /* GXT: ~s~Franklin was arrested. */, 16);
					break;
				
				case 2:
					StringCopy(&Global_79481, "CMN_TARRE" /* GXT: ~s~Trevor was arrested. */, 16);
					break;
			}
			StringCopy(&Global_79485, "", 16);
		}
		Global_101427 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79481))
		{
			switch (func_49())
			{
				case 0:
					StringCopy(&Global_79481, "CMN_MDIED" /* GXT: ~s~Michael died. */, 16);
					break;
				
				case 1:
					StringCopy(&Global_79481, "CMN_FDIED" /* GXT: ~s~Franklin died. */, 16);
					break;
				
				case 2:
					StringCopy(&Global_79481, "CMN_TDIED" /* GXT: ~s~Trevor died. */, 16);
					break;
			}
			StringCopy(&Global_79485, "", 16);
		}
		Global_101427 = 0;
		MISC::SET_BIT(&(Global_101392.f_20), 25);
	}
}

int func_8()//Position - 0x10D3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_92124[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(bool bParam0)//Position - 0x1105
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

bool func_10(char* sParam0)//Position - 0x112D
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_11(bool bParam0, int iParam1)//Position - 0x1140
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_64040)
	{
		Global_64040 = iParam1;
	}
	if (bParam0)
	{
		if ((func_9(0) && Global_79495.f_1 == 1) && func_12(Global_79495))
		{
		}
		else
		{
			Global_64038 = 1;
		}
	}
	if (Global_114370.f_9088 || func_9(0))
	{
		iVar0 = func_8();
		iVar1 = Global_92124[iVar0 /*5*/];
		uVar2 = Global_79519.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_114370.f_9088)
			{
			}
			return;
		}
		if (BitTest(Global_92124[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_92124[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_92124[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_79497, 1);
		Global_79513 = uVar2;
		Global_79514 = MISC::GET_GAME_TIMER();
	}
}

int func_12(int iParam0)//Position - 0x1210
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

int func_13(int iParam0, int iParam1, int iParam2)//Position - 0x124E
{
	if (func_48(iParam0) == 3)
	{
		return 0;
	}
	if (func_48(iParam0) == 4)
	{
		return 0;
	}
	return func_14(func_48(iParam0), 0, iParam1, iParam2, 0);
}

int func_14(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1282
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_47();
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
					func_46(99, 1);
					func_45(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_45(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_45(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_29(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_26(5))
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
							func_45(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_45(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_45(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_26(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_45(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_45(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_45(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_45(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_45(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_45(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_45(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_45(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_45(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_45(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_45(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_45(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_45(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_45(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_45(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_26(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_45(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_45(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_45(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_45(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_45(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_45(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_25(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_46(95, iParam3);
					break;
				
				case 1:
					func_46(97, iParam3);
					break;
				
				case 2:
					func_46(96, iParam3);
					break;
			}
			func_46(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_17(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_17(bVar1);
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
					func_45(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_45(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_45(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_2[Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_2[Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_2[Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114370.f_20567.f_233[iVar2 /*69*/]++;
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_16(iParam0);
	if (Global_43922 == 15)
	{
		func_15(0);
	}
	return 1;
}

void func_15(bool bParam0)//Position - 0x1881
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
			Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61220[iVar0 /*3*/][0] = Global_114370.f_20567[iVar0];
		Global_61220.f_31[iVar0 /*3*/][0] = Global_114370.f_20567.f_11[iVar0];
		Global_61220.f_62[iVar0 /*3*/][0] = Global_114370.f_20567.f_22[iVar0];
		Global_61220.f_93[iVar0 /*3*/][0] = Global_114370.f_20567.f_33[iVar0];
		Global_61220.f_124[iVar0 /*3*/][0] = Global_114370.f_20567.f_44[iVar0];
		Global_61220.f_155[iVar0 /*3*/][0] = Global_114370.f_20567.f_55[iVar0];
		Global_61220.f_186[iVar0 /*3*/][0] = Global_114370.f_20567.f_66[iVar0];
		Global_61220.f_217[iVar0 /*3*/][0] = Global_114370.f_20567.f_77[iVar0];
		Global_61220.f_248[iVar0 /*3*/][0] = Global_114370.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61220[iVar0 /*3*/][1] = Global_114370.f_20567[iVar0];
			Global_61220.f_31[iVar0 /*3*/][1] = Global_114370.f_20567.f_11[iVar0];
			Global_61220.f_62[iVar0 /*3*/][1] = Global_114370.f_20567.f_22[iVar0];
			Global_61220.f_93[iVar0 /*3*/][1] = Global_114370.f_20567.f_33[iVar0];
			Global_61220.f_124[iVar0 /*3*/][1] = Global_114370.f_20567.f_44[iVar0];
			Global_61220.f_155[iVar0 /*3*/][1] = Global_114370.f_20567.f_55[iVar0];
			Global_61220.f_186[iVar0 /*3*/][1] = Global_114370.f_20567.f_66[iVar0];
			Global_61220.f_217[iVar0 /*3*/][1] = Global_114370.f_20567.f_77[iVar0];
			Global_61220.f_248[iVar0 /*3*/][1] = Global_114370.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_16(int iParam0)//Position - 0x1B03
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

void func_17(bool bParam0)//Position - 0x1B5D
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_24(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_24(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_24(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_24(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_20(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_20(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_20(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_20(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_20(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_20(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_114370.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_114370.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_114370.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_19() /*5569*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_114370.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_19() /*5569*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_18(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_18(bool bParam0)//Position - 0x1CD4
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

int func_19()//Position - 0x1DCC
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_20(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1DD9
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_21(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_21(int iParam0, var uParam1)//Position - 0x1E07
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_22(uParam1));
}

int func_22(var uParam0)//Position - 0x1E1C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_23()//Position - 0x1E50
{
	return Global_1574925;
}

void func_24(int iParam0, bool bParam1, int iParam2)//Position - 0x1E5C
{
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_25(int iParam0)//Position - 0x1E7A
{
	func_46(93, iParam0);
	func_46(29, iParam0);
	func_46(30, iParam0);
}

int func_26(int iParam0)//Position - 0x1E9A
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
		return func_28(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_28(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_28(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_28(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_27(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_27(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_27(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_27(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_27(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_27(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_114370.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_19() /*5569*/].f_681.f_10, iParam0);
}

int func_27(int iParam0, int iParam1)//Position - 0x203A
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_21(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_28(int iParam0, int iParam1)//Position - 0x2069
{
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_29(bool bParam0)//Position - 0x2085
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
		func_44(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_30(27, 1);
	return 1;
}

int func_30(int iParam0, int iParam1)//Position - 0x213C
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_31(iParam0, iParam1);
}

int func_31(int iParam0, int iParam1)//Position - 0x2157
{
	if (func_43(14) && !func_42(iParam0))
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
	if (func_41(&Global_4543283))
	{
		if (func_39(&Global_4543283, iParam0))
		{
			return 0;
		}
		if (func_32(&Global_4543283, iParam0))
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

int func_32(var uParam0, int iParam1)//Position - 0x21F4
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_43(14) && !func_42(iParam1))
	{
		return 0;
	}
	if (func_39(uParam0, iParam1))
	{
		return 0;
	}
	if (func_38(uParam0) < 0f)
	{
		func_37(uParam0, 0);
	}
	func_35(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_33(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_33(var uParam0, int iParam1)//Position - 0x22A5
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_43(14) && !func_42(iParam1))
	{
		return 0;
	}
	if (func_39(uParam0, iParam1))
	{
		return 0;
	}
	if (func_38(uParam0) < 0f)
	{
		func_37(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_34(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_34(var uParam0, int iParam1)//Position - 0x2320
{
	return (*uParam0)[iParam1] == 78;
}

void func_35(var uParam0)//Position - 0x2331
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_36(uParam0, iVar0);
		iVar0++;
	}
	func_37(uParam0, (Global_4543282 - 0.5f));
}

void func_36(var uParam0, int iParam1)//Position - 0x2365
{
	(*uParam0)[iParam1] = 78;
}

void func_37(var uParam0, float fParam1)//Position - 0x2375
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

float func_38(var uParam0)//Position - 0x2392
{
	return uParam0->f_80;
}

bool func_39(var uParam0, int iParam1)//Position - 0x239E
{
	return func_40(uParam0, iParam1) != -1;
}

int func_40(var uParam0, int iParam1)//Position - 0x23B0
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

bool func_41(var uParam0)//Position - 0x23DD
{
	return uParam0->f_79 == 1;
}

int func_42(int iParam0)//Position - 0x23EB
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

bool func_43(int iParam0)//Position - 0x243B
{
	return Global_43922 == iParam0;
}

int func_44(int iParam0, int iParam1)//Position - 0x2449
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

void func_45(int iParam0, int iParam1)//Position - 0x249A
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_46(int iParam0, int iParam1)//Position - 0x24BD
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

void func_47()//Position - 0x251A
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

int func_48(int iParam0)//Position - 0x258F
{
	return Global_2139[iParam0 /*29*/].f_17;
}

int func_49()//Position - 0x25A0
{
	func_50();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_50()//Position - 0x25B9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_53(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_52(PLAYER::PLAYER_PED_ID());
			if (func_51(iVar0) && (!func_43(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_51(Global_114370.f_2366.f_539.f_4321))
				{
					Global_114370.f_2366.f_539.f_4322 = Global_114370.f_2366.f_539.f_4321;
				}
				Global_114370.f_2366.f_539.f_4323 = iVar0;
				Global_114370.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_4321 != 145)
			{
				Global_114370.f_2366.f_539.f_4323 = Global_114370.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114370.f_2366.f_539.f_4321 = 145;
}

bool func_51(int iParam0)//Position - 0x26B6
{
	return iParam0 < 3;
}

int func_52(int iParam0)//Position - 0x26C2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_53(int iParam0)//Position - 0x26FF
{
	if (func_51(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)//Position - 0x2724
{
	return Global_2139[iParam0 /*29*/];
}

int func_55()//Position - 0x2733
{
	if (Global_22166 == 0)
	{
		return 1;
	}
	return 0;
}

void func_56(int iParam0)//Position - 0x274A
{
	if (func_61())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_60())
		{
			func_58(1, 1);
		}
		else
		{
			func_58(0, 0);
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
	if (!func_57())
	{
		Global_20813.f_1 = 3;
	}
}

int func_57()//Position - 0x27D4
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1)//Position - 0x27FB
{
	if (bParam0)
	{
		if (func_59(0))
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

int func_59(int iParam0)//Position - 0x286F
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

bool func_60()//Position - 0x28C6
{
	return BitTest(Global_1956030, 5);
}

bool func_61()//Position - 0x28D4
{
	return BitTest(Global_1956030, 19);
}

void func_62(int iParam0)//Position - 0x28E3
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 24);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 24);
	}
}

int func_63(int* iParam0, float fParam1)//Position - 0x2906
{
	if (func_65(iParam0, fParam1))
	{
		func_64(iParam0);
		return 1;
	}
	return 0;
}

void func_64(var uParam0)//Position - 0x2924
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_65(var uParam0, float fParam1)//Position - 0x293A
{
	if (func_69(uParam0))
	{
		if (func_66(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_66(var uParam0)//Position - 0x295C
{
	if (func_69(uParam0))
	{
		if (func_68(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_67(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_67(bool bParam0)//Position - 0x2998
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

bool func_68(var uParam0)//Position - 0x29F0
{
	return BitTest(*uParam0, 2);
}

bool func_69(var uParam0)//Position - 0x29FD
{
	return BitTest(*uParam0, 1);
}

void func_70(int* iParam0)//Position - 0x2A0A
{
	if (!func_69(iParam0))
	{
		func_71(iParam0);
	}
}

void func_71(int* iParam0)//Position - 0x2A22
{
	func_72(iParam0, 0f);
}

void func_72(int* iParam0, float fParam1)//Position - 0x2A31
{
	iParam0->f_1 = (func_67(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_73()//Position - 0x2A5C
{
	if (BitTest(Global_8684, 23))
	{
		if (Global_22219 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_74(char* sParam0, int iParam1)//Position - 0x2A83
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_75(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x2A9A
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Global_8684, 9))
	{
		return 0;
	}
	MISC::SET_BIT(&Global_8684, 9);
	Global_23150 = iParam0;
	iVar0 = 0;
	while (iVar0 < iParam0 + 1)
	{
		StringCopy(&(Global_22425[iVar0 /*6*/]), (*uParam2)[iVar0], 24);
		StringCopy(&(Global_22787[iVar0 /*6*/]), (*uParam3)[iVar0], 24);
		iVar0++;
	}
	Global_23149 = iParam1;
	iVar1 = 0;
	while (iVar1 < iParam1 + 1)
	{
		StringCopy(&(Global_22606[iVar1 /*6*/]), (*uParam4)[iVar1], 24);
		StringCopy(&(Global_22968[iVar1 /*6*/]), (*uParam5)[iVar1], 24);
		iVar1++;
	}
	return 1;
}

bool func_76(int iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x2B2C
{
	func_87(uParam1, iParam2, sParam3, iParam9, iParam10, 0);
	func_86();
	if (iParam8 == 1)
	{
		Global_22178 = 1;
	}
	else
	{
		Global_22178 = 0;
	}
	func_85(iParam0);
	Global_22218 = 1;
	StringCopy(&Global_22314, sParam6, 24);
	Global_22165 = 3;
	return func_77(uParam4, uParam5, iParam7, bParam11);
}

int func_77(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x2B79
{
	int iVar0;
	
	Global_22167 = 0;
	if (Global_22166 == 0 || Global_22168 == 2)
	{
		if (Global_22166 != 0)
		{
			if (iParam2 > Global_22168)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20813.f_1 = 3;
					Global_22166 = 0;
					Global_22167 = 1;
					Global_22219 = 0;
					Global_22162 = 0;
					Global_22163 = 0;
				}
				else
				{
					func_84();
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
		if (func_83(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_82();
		Global_21455 = { Global_21620 };
		Global_22172 = Global_22173;
		Global_22179 = Global_22180;
		Global_2883586 = Global_2883585;
		Global_22181 = { Global_22197 };
		Global_22174 = Global_22175;
		Global_23156 = Global_23157;
		Global_23164 = { Global_23170 };
		Global_23162 = Global_23163;
		Global_23158 = Global_23159;
		Global_23160 = Global_23161;
		Global_21785.f_368 = Global_23153;
		Global_21785.f_369 = Global_23154;
		Global_21785.f_370 = Global_23155;
		Global_22162 = Global_22163;
		Global_22164 = Global_22165;
		if (Global_22424 == 0)
		{
			Global_22320[0 /*6*/] = { Global_22346[0 /*6*/] };
			Global_22320[1 /*6*/] = { Global_22346[1 /*6*/] };
			Global_22372[0 /*6*/] = { Global_22398[0 /*6*/] };
			Global_22372[1 /*6*/] = { Global_22398[1 /*6*/] };
			Global_22333[0 /*6*/] = { Global_22359[0 /*6*/] };
			Global_22333[1 /*6*/] = { Global_22359[1 /*6*/] };
			Global_22385[0 /*6*/] = { Global_22411[0 /*6*/] };
			Global_22385[1 /*6*/] = { Global_22411[1 /*6*/] };
		}
		if (Global_22172)
		{
			MISC::CLEAR_BIT(&Global_8683, 20);
			MISC::CLEAR_BIT(&Global_8684, 17);
			MISC::CLEAR_BIT(&Global_8685, 0);
			if (bParam3)
			{
				func_81();
				if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20813.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20779 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_80())
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
				if (!Global_79248)
				{
					if (Global_22424 == 0)
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
			}
			if (func_57())
			{
				return 0;
			}
			else
			{
				switch (Global_20813.f_1)
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
			}
			func_79();
			Global_22176 = bParam3;
		}
		Global_22168 = iParam2;
		if (Global_22162 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_22162)
			{
				StringCopy(&(Global_21785.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21785.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_21032 = 0;
		func_78();
		return 1;
	}
	if (Global_22166 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_22168 || iParam2 == Global_22168)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_84();
	}
	return 0;
}

void func_78()//Position - 0x2EE4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21034[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22166 = 1;
}

void func_79()//Position - 0x2F15
{
	Global_22219 = Global_22218;
	Global_22213 = Global_22214;
	Global_22260 = { Global_22248 };
	Global_22266 = { Global_22254 };
	Global_22221 = Global_22220;
	Global_22290 = { Global_22272 };
	Global_22296 = { Global_22278 };
	Global_22302 = { Global_22284 };
	Global_22308 = { Global_22314 };
	Global_7998 = Global_7999;
	Global_8000 = Global_8001;
	Global_22177 = Global_22178;
	Global_22179 = Global_22180;
	Global_22181 = { Global_22197 };
	Global_22170 = Global_22171;
	Global_23182 = 0;
	Global_22215 = 0;
	Global_22216 = 0;
	MISC::CLEAR_BIT(&Global_8684, 16);
}

int func_80()//Position - 0x2FAA
{
	int iVar0;
	int iVar1;
	
	if (Global_79248)
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

void func_81()//Position - 0x3043
{
	if (func_43(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[2 /*29*/])
			{
				Global_20813 = 2;
			}
			else
			{
				Global_20813 = 0;
			}
		}
	}
	else
	{
		Global_20813 = func_49();
		if (Global_20813 == 145)
		{
			Global_20813 = 3;
		}
		if (Global_79248)
		{
			Global_20813 = 3;
		}
		if (Global_20813 > 3)
		{
			Global_20813 = 3;
		}
	}
}

void func_82()//Position - 0x30E5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21455[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21455[iVar0 /*10*/].f_1), "", 24);
		Global_21455[iVar0 /*10*/].f_7 = 0;
		Global_21455[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21455.f_161 = -99;
	Global_21455.f_162 = { 0f, 0f, 0f };
}

bool func_83(int iParam0, int iParam1)//Position - 0x313C
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

void func_84()//Position - 0x3174
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20813.f_1 == 9) || Global_20812 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
		Global_20813.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22166 = 6;
		return;
	}
}

void func_85(var uParam0)//Position - 0x31CB
{
	Global_22163 = uParam0;
	Global_22173 = 1;
	Global_22180 = 0;
	Global_22175 = 0;
	Global_23157 = 0;
	Global_23163 = 0;
	Global_2883585 = 0;
}

void func_86()//Position - 0x31F1
{
	Global_22214 = 0;
	Global_22173 = 1;
	Global_22180 = 0;
	Global_22175 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_22180 = 0;
	Global_23163 = 0;
	Global_22171 = 0;
	Global_22218 = 0;
	Global_22220 = 0;
	Global_2883585 = 0;
}

void func_87(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x322A
{
	Global_21620 = { *uParam0 };
	Global_7999 = uParam1;
	StringCopy(&Global_22236, sParam2, 24);
	Global_23155 = iParam5;
	if (iParam3 == 0)
	{
		Global_23153 = 1;
		Global_23151 = 0;
	}
	else
	{
		Global_23153 = 0;
		Global_23151 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23154 = 1;
		Global_23152 = 0;
	}
	else
	{
		Global_23154 = 0;
		Global_23152 = 1;
	}
}

int func_88(int iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3280
{
	func_87(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_86();
	if (iParam7 == 1)
	{
		Global_22178 = 1;
	}
	else
	{
		Global_22178 = 0;
	}
	func_85(iParam0);
	return func_77(uParam4, uParam5, iParam6, bParam10);
}

void func_89(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, char* sParam10, int iParam11)//Position - 0x32BE
{
	int iVar0;
	struct<4> Var1;
	var uVar5;
	var uVar6;
	int iVar7;
	
	HUD::REQUEST_ADDITIONAL_TEXT("SHRINK", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("DrfAud", 6);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
	func_122(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	func_122(uParam0, 1, 0, "FRIEDLANDER", 0, 1);
	func_121(uParam1, uParam2, iParam3, iParam11);
	Var1 = { func_117(iParam11, &uVar5, &uVar6, 1) };
	iVar0 = func_116(&Var1);
	func_112(uParam1, uParam2, iParam3, iVar0);
	func_111(uParam1, uParam2, iParam3, iParam11);
	func_104(uParam1, uParam2, iParam3, iParam11);
	func_103(uParam4, uParam5, uParam7, uParam8, uParam6, uParam9, iParam11);
	func_93(uParam4, uParam5, uParam7, uParam8, uParam6, uParam9, sParam10, iParam11);
	func_92(uParam4, uParam5, uParam7, uParam8, uParam6, uParam9, sParam10);
	func_90(uParam4, uParam5, uParam7, uParam8, uParam6, uParam9, iParam11);
	iVar7 = 0;
	while (iVar7 < 47)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1[iVar7 /*4*/]))
		{
			iVar7 = 47;
		}
		iVar7++;
	}
	iVar7 = 0;
	while (iVar7 < 27)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam4[iVar7 /*4*/]))
		{
			iVar7 = 27;
		}
		iVar7++;
	}
	iVar7 = 0;
	while (iVar7 < 27)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam7[iVar7 /*4*/]))
		{
			iVar7 = 27;
		}
		iVar7++;
	}
}

void func_90(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x3418
{
	struct<2> Var0;
	int iVar4;
	int iVar5;
	
	switch (iParam6)
	{
		case 2:
			StringCopy(&Var0, "DRF_3", 16);
			iVar4 = 17;
			iVar5 = 7;
			break;
		
		case 3:
			StringCopy(&Var0, "DRF_4", 16);
			iVar4 = 6;
			iVar5 = 17;
			break;
		
		default:
			break;
	}
	func_91(uParam0, uParam1, uParam4, &Var0, iVar4, iVar5, 0);
	func_91(uParam2, uParam3, uParam5, &Var0, iVar4, iVar5, 0);
}

void func_91(var uParam0, var uParam1, var uParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x347C
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar4 = iParam4;
	while (iVar4 <= ((iParam4 + iParam5) - 1))
	{
		StringCopy(&Var0, sParam3, 16);
		StringConCat(&Var0, "_", 16);
		if (iVar4 < 9 && iParam6)
		{
			StringConCat(&Var0, "0", 16);
		}
		StringIntConCat(&Var0, iVar4 + 1, 16);
		if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
		{
			iVar5 = (*uParam2 + iVar6);
			StringCopy(uParam0[iVar5 /*4*/], sParam3, 16);
			*(uParam1[iVar5 /*4*/]) = { Var0 };
			iVar6++;
		}
		iVar4++;
	}
	*uParam2 = (*uParam2 + iVar6);
}

void func_92(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x3503
{
	int iVar0;
	
	switch (uParam6->f_19)
	{
		case 1:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					iVar0 = 6;
					break;
				
				case 1:
					iVar0 = 7;
					break;
				
				case 2:
					iVar0 = 8;
					break;
				
				case 3:
					iVar0 = 9;
					break;
			}
			break;
		
		case 2:
		case 4:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					iVar0 = 6;
					break;
				
				case 1:
					iVar0 = 7;
					break;
				
				case 2:
					iVar0 = 9;
					break;
			}
			break;
		
		case 3:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					iVar0 = 2;
					break;
				
				case 1:
					iVar0 = 6;
					break;
				
				case 2:
					iVar0 = 7;
					break;
				
				case 3:
					iVar0 = 9;
					break;
			}
			break;
		
		case 5:
		case 6:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					iVar0 = 3;
					break;
				
				case 1:
					iVar0 = 6;
					break;
				
				case 2:
					iVar0 = 7;
					break;
				
				case 3:
					iVar0 = 9;
					break;
			}
			break;
		
		case 7:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
			{
				case 0:
					iVar0 = 2;
					break;
				
				case 1:
					iVar0 = 4;
					break;
				
				case 2:
					iVar0 = 6;
					break;
				
				case 3:
					iVar0 = 7;
					break;
				
				case 4:
					iVar0 = 8;
					break;
				
				case 5:
					iVar0 = 9;
					break;
			}
			break;
		
		case 8:
		case 9:
		case 11:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					iVar0 = 2;
					break;
				
				case 1:
					iVar0 = 3;
					break;
				
				case 2:
					iVar0 = 4;
					break;
				
				case 3:
					iVar0 = 6;
					break;
				
				case 4:
					iVar0 = 7;
					break;
				
				case 5:
					iVar0 = 8;
					break;
				
				case 6:
					iVar0 = 9;
					break;
				
				case 7:
					iVar0 = 11;
					break;
			}
			break;
		
		case 10:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
			{
				case 0:
					iVar0 = 3;
					break;
				
				case 1:
					iVar0 = 4;
					break;
				
				case 2:
					iVar0 = 6;
					break;
				
				case 3:
					iVar0 = 7;
					break;
				
				case 4:
					iVar0 = 8;
					break;
				
				case 5:
					iVar0 = 9;
					break;
				
				case 6:
					iVar0 = 11;
					break;
			}
			break;
		
		case 12:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					iVar0 = 6;
					break;
				
				case 1:
					iVar0 = 7;
					break;
				
				case 2:
					iVar0 = 9;
					break;
				
				case 3:
					iVar0 = 11;
					break;
			}
			break;
	}
	func_91(uParam0, uParam1, uParam4, "PMCSUM", (iVar0 - 1), 1, 0);
	func_91(uParam2, uParam3, uParam5, "PMCSUM", (iVar0 - 1), 1, 0);
}

void func_93(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x37E4
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	
	switch (iParam7)
	{
		case 2:
			iVar4 = 1;
			break;
		
		case 3:
			iVar4 = 3;
			break;
	}
	func_91(uParam0, uParam1, uParam4, "DRF_SEX", iVar4, 1, 0);
	func_91(uParam2, uParam3, uParam5, "DRF_SEX", iVar4, 1, 0);
	Var0 = { func_94(uParam6, &iVar5, iParam7, 1) };
	func_91(uParam0, uParam1, uParam4, &Var0, 0, iVar5, 0);
	func_91(uParam2, uParam3, uParam5, &Var0, 0, iVar5, 0);
}

struct<4> func_94(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x385E
{
	struct<4> Var0;
	int iVar4;
	
	if (func_102() <= 0)
	{
		if (!func_101())
		{
			iVar4 = func_98(1, 2, 3, 4, 12);
		}
		else if (func_97() >= 1)
		{
			iVar4 = func_98(5, 6, 7, 0, 0);
		}
		else
		{
			iVar4 = func_98(5, 7, 0, 0, 0);
		}
	}
	else if (func_102() >= 2)
	{
		iVar4 = func_98(10, 11, 0, 0, 0);
	}
	else if (!func_101())
	{
		if (iParam2 != 4)
		{
			iVar4 = func_98(8, 9, 0, 0, 0);
		}
		else
		{
			iVar4 = 9;
		}
	}
	else if (iParam2 != 4)
	{
		iVar4 = func_98(8, 9, 10, 0, 0);
	}
	else
	{
		iVar4 = func_98(9, 10, 0, 0, 0);
	}
	func_96(uParam0, iVar4);
	if (bParam3)
	{
		func_95(&(Global_114370.f_19964), iVar4, 1);
	}
	StringCopy(&Var0, "DRF_PR_", 16);
	switch (iVar4)
	{
		case 1:
			StringConCat(&Var0, "1_A", 16);
			*uParam1 = 3;
			break;
		
		case 2:
			StringConCat(&Var0, "1_B", 16);
			*uParam1 = 5;
			break;
		
		case 3:
			StringConCat(&Var0, "1_C", 16);
			*uParam1 = 3;
			break;
		
		case 4:
			StringConCat(&Var0, "1_D", 16);
			*uParam1 = 3;
			break;
		
		case 5:
			StringConCat(&Var0, "1_STR", 16);
			*uParam1 = 3;
			break;
		
		case 6:
			StringConCat(&Var0, "5_T1B", 16);
			*uParam1 = 5;
			break;
		
		case 7:
			StringCopy(&Var0, "5_T1C", 16);
			*uParam1 = 4;
			break;
		
		case 8:
			StringConCat(&Var0, "5PROA", 16);
			*uParam1 = 5;
			break;
		
		case 9:
			StringConCat(&Var0, "5PROB", 16);
			*uParam1 = 5;
			break;
		
		case 10:
			StringConCat(&Var0, "5STRA", 16);
			*uParam1 = 7;
			break;
		
		case 11:
			StringConCat(&Var0, "5STRB", 16);
			*uParam1 = 4;
			break;
		
		case 12:
			StringConCat(&Var0, "5_NON", 16);
			*uParam1 = 5;
			break;
	}
	return Var0;
}

void func_95(var uParam0, int iParam1, bool bParam2)//Position - 0x3A2F
{
	if (iParam1 < 0 || iParam1 > 12)
	{
		return;
	}
	iParam1 += 11;
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_1), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), iParam1);
	}
}

void func_96(var uParam0, int iParam1)//Position - 0x3A6E
{
	uParam0->f_19 = iParam1;
}

int func_97()//Position - 0x3A7C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_97837[iVar0] > 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_98(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3AAA
{
	int iVar0;
	int iVar1;
	int iVar2[13];
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iVar2[iVar0] = iVar0;
		iVar0++;
	}
	if ((iParam0 > 0 && iParam0 < 13) && !func_100(&(Global_114370.f_19964), iParam0))
	{
		iVar2[iParam0] = 0;
	}
	else if ((iParam1 > 0 && iParam1 < 13) && !func_100(&(Global_114370.f_19964), iParam1))
	{
		iVar2[iParam1] = 0;
	}
	else if ((iParam2 > 0 && iParam2 < 13) && !func_100(&(Global_114370.f_19964), iParam2))
	{
		iVar2[iParam2] = 0;
	}
	else if ((iParam3 > 0 && iParam3 < 13) && !func_100(&(Global_114370.f_19964), iParam3))
	{
		iVar2[iParam3] = 0;
	}
	else if ((iParam4 > 0 && iParam4 < 13) && !func_100(&(Global_114370.f_19964), iParam4))
	{
		iVar2[iParam4] = 0;
	}
	iVar1 = func_99(&iVar2, 13, 1, 13);
	if (iVar1 > 0)
	{
		return iVar1;
	}
	if (iParam2 <= 0 || iParam2 >= 13)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	}
	else if (iParam3 <= 0 || iParam3 >= 13)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	}
	else if (iParam4 <= 0 || iParam4 >= 13)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	}
	switch (iVar1)
	{
		case 1:
			return iParam0;
		
		case 2:
			return iParam1;
		
		case 3:
			return iParam2;
		
		case 4:
			return iParam3;
		
		case 5:
			return iParam4;
		
		default:
	}
	return 0;
}

int func_99(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3C6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 1;
	iVar2 = 0;
	while (iVar0 && iVar2 < 50)
	{
		iVar0 = 0;
		iVar3 = ((MISC::GET_RANDOM_INT_IN_RANGE(0, 50000) % (iParam3 - iParam2)) + iParam2);
		iVar1 = 0;
		while (iVar1 <= (iParam1 - 1))
		{
			if ((*iParam0)[iVar1] == iVar3)
			{
				iVar0 = 1;
				iVar1 = 999999;
			}
			iVar1++;
		}
		iVar2++;
	}
	if (iVar2 == 50)
	{
		return -1;
	}
	return iVar3;
}

int func_100(var uParam0, int iParam1)//Position - 0x3CDF
{
	if (iParam1 < 0 || iParam1 > 12)
	{
		return 0;
	}
	iParam1 += 11;
	return BitTest(uParam0->f_1, iParam1);
}

bool func_101()//Position - 0x3D0A
{
	return Global_97839 > 0;
}

int func_102()//Position - 0x3D18
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_97834[iVar0] > 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_103(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x3D46
{
	int iVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 2:
			iVar0 = 3;
			iVar1 = 1;
			break;
		
		case 3:
			iVar0 = 0;
			iVar1 = 3;
			break;
	}
	func_91(uParam0, uParam1, uParam4, "DRF_ACC", iVar0, 1, 0);
	func_91(uParam2, uParam3, uParam5, "DRF_DEN", iVar1, 1, 0);
}

void func_104(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x3D97
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	
	switch (iParam3)
	{
		case 2:
			iVar4 = 2;
			break;
		
		case 3:
			iVar4 = 3;
			break;
	}
	func_91(uParam0, uParam1, uParam2, "DRF_OPW", iVar4, 1, 0);
	Var0 = { func_105(iParam3, 0, 1, &iVar5) };
	func_91(uParam0, uParam1, uParam2, &Var0, 0, iVar5, 0);
}

struct<4> func_105(int iParam0, int iParam1, bool bParam2, var uParam3)//Position - 0x3DEE
{
	struct<4> Var0;
	bool bVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if ((((!func_110(&(Global_114370.f_19964), 8) && iParam1) && iParam0 != 4) && func_108(3) > 0) && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.75f)
	{
		bVar4 = 8;
		*uParam3 = 4;
	}
	else
	{
		if (!func_110(&(Global_114370.f_19964), 1) && func_108(5) > 0)
		{
			MISC::SET_BIT(&uVar5, 1);
			iVar6++;
		}
		if (!func_110(&(Global_114370.f_19964), 2) && func_108(7) >= 2)
		{
			MISC::SET_BIT(&uVar5, 2);
			iVar6++;
		}
		if (!func_110(&(Global_114370.f_19964), 3) && ((((func_108(8) > 0 || func_108(9) > 0) && func_108(7) > 0) && iParam1) && iParam0 != 4))
		{
			MISC::SET_BIT(&uVar5, 3);
			iVar6++;
		}
		if ((!func_110(&(Global_114370.f_19964), 4) && func_108(1) > 0) && func_108(1) < 3)
		{
			MISC::SET_BIT(&uVar5, 4);
			iVar6++;
		}
		if (!func_110(&(Global_114370.f_19964), 5) && func_108(1) >= 3)
		{
			MISC::SET_BIT(&uVar5, 5);
			iVar6++;
		}
		if (!func_110(&(Global_114370.f_19964), 6) && func_108(0) > 0)
		{
			MISC::SET_BIT(&uVar5, 6);
			iVar6++;
		}
		if (!func_110(&(Global_114370.f_19964), 7))
		{
			MISC::SET_BIT(&uVar5, 7);
			iVar6++;
		}
		if (((!func_110(&(Global_114370.f_19964), 8) && iParam1) && func_108(3) > 0) && iParam0 != 4)
		{
			MISC::SET_BIT(&uVar5, 8);
			iVar6++;
		}
		if (!func_110(&(Global_114370.f_19964), 9))
		{
			MISC::SET_BIT(&uVar5, 9);
			iVar6++;
		}
		if (!func_110(&(Global_114370.f_19964), 10))
		{
			MISC::SET_BIT(&uVar5, 10);
			iVar6++;
		}
		if (!func_110(&(Global_114370.f_19964), 11))
		{
			MISC::SET_BIT(&uVar5, 11);
			iVar6++;
		}
		if (iVar6 <= 0)
		{
			if (iParam0 != 4)
			{
				bVar4 = func_107(7, 9, 10, 11, 0);
			}
			else
			{
				bVar4 = func_107(7, 9, 10, 0, 0);
			}
		}
		else
		{
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar6 + 1);
			bVar8 = true;
			while (iVar7 > 0)
			{
				if (BitTest(uVar5, bVar8))
				{
					iVar7 = (iVar7 - 1);
					if (iVar7 == 0)
					{
						bVar4 = bVar8;
					}
				}
				bVar8++;
			}
		}
		switch (bVar4)
		{
			case 1:
				*uParam3 = 5;
				break;
			
			case 2:
				*uParam3 = 5;
				break;
			
			case 3:
				*uParam3 = 7;
				break;
			
			case 4:
				*uParam3 = 4;
				break;
			
			case 5:
				*uParam3 = 4;
				break;
			
			case 6:
				*uParam3 = 5;
				break;
			
			case 7:
				*uParam3 = 4;
				break;
			
			case 8:
				*uParam3 = 4;
				break;
			
			case 9:
				*uParam3 = 4;
				break;
			
			case 10:
				*uParam3 = 5;
				break;
			
			case 11:
				*uParam3 = 7;
				break;
			}
	}
	if (bParam2)
	{
		func_106(&(Global_114370.f_19964), bVar4, 1);
	}
	StringCopy(&Var0, "DRF_OWR_", 16);
	if (bVar4 >= 1 && bVar4 <= 3)
	{
		StringIntConCat(&Var0, bVar4, 16);
	}
	else if (bVar4 < 7)
	{
		StringIntConCat(&Var0, 4, 16);
		if (bVar4 == 4)
		{
			StringConCat(&Var0, "A", 16);
		}
		else if (bVar4 == 5)
		{
			StringConCat(&Var0, "B", 16);
		}
		else
		{
			StringConCat(&Var0, "C", 16);
		}
	}
	else
	{
		StringIntConCat(&Var0, 7, 16);
		if (bVar4 == 7)
		{
			StringConCat(&Var0, "A", 16);
		}
		else if (bVar4 == 8)
		{
			StringConCat(&Var0, "B", 16);
		}
		else if (bVar4 == 9)
		{
			StringConCat(&Var0, "C", 16);
		}
		else if (bVar4 == 10)
		{
			StringConCat(&Var0, "D", 16);
		}
		else
		{
			StringConCat(&Var0, "E", 16);
		}
	}
	return Var0;
}

void func_106(var uParam0, bool bParam1, bool bParam2)//Position - 0x41DF
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_1), bParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), bParam1);
	}
}

int func_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4218
{
	int iVar0;
	int iVar1;
	int iVar2[12];
	bool bVar15;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar2[iVar0] = iVar0;
		iVar0++;
	}
	if ((iParam0 > 0 && iParam0 < 12) && !func_110(&(Global_114370.f_19964), iParam0))
	{
		iVar2[iParam0] = 0;
		bVar15 = true;
	}
	if ((iParam1 > 0 && iParam1 < 12) && !func_110(&(Global_114370.f_19964), iParam1))
	{
		iVar2[iParam1] = 0;
		bVar15 = true;
	}
	if ((iParam2 > 0 && iParam2 < 12) && !func_110(&(Global_114370.f_19964), iParam2))
	{
		iVar2[iParam2] = 0;
		bVar15 = true;
	}
	if ((iParam3 > 0 && iParam3 < 12) && !func_110(&(Global_114370.f_19964), iParam3))
	{
		iVar2[iParam3] = 0;
		bVar15 = true;
	}
	if ((iParam4 > 0 && iParam4 < 12) && !func_110(&(Global_114370.f_19964), iParam4))
	{
		iVar2[iParam4] = 0;
		bVar15 = true;
	}
	if (!bVar15)
	{
		if (iParam0 > 0 && iParam0 < 12)
		{
			iVar2[iParam0] = 0;
		}
		if (iParam1 > 0 && iParam1 < 12)
		{
			iVar2[iParam1] = 0;
		}
		if (iParam2 > 0 && iParam2 < 12)
		{
			iVar2[iParam2] = 0;
		}
		if (iParam3 > 0 && iParam3 < 12)
		{
			iVar2[iParam3] = 0;
		}
		if (iParam4 > 0 && iParam4 < 12)
		{
			iVar2[iParam4] = 0;
		}
	}
	iVar1 = func_99(&iVar2, 12, 1, 12);
	if (iVar1 > 0)
	{
		return iVar1;
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	switch (iVar1)
	{
		case 1:
			return iParam0;
		
		case 2:
			return iParam1;
		
		default:
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x43E3
{
	switch (iParam0)
	{
		case 0:
			return func_109(&Global_97840, 1);
			break;
		
		case 1:
			return func_109(&Global_97842, 3);
			break;
		
		case 2:
			return func_109(&Global_97846, 1);
			break;
		
		case 3:
			return func_109(&Global_97848, 1);
			break;
		
		case 4:
			return func_109(&Global_97850, 1);
			break;
		
		case 5:
			return func_109(&Global_97852, 1);
			break;
		
		case 6:
			return func_109(&Global_97854, 1);
			break;
		
		case 7:
			return func_109(&Global_97856, 2);
			break;
		
		case 8:
			return func_109(&Global_97859, 1);
			break;
		
		case 9:
			return func_109(&Global_97861, 1);
			break;
	}
	return 0;
}

int func_109(var uParam0, int iParam1)//Position - 0x44C5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if ((*uParam0)[iVar0] > 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_110(var uParam0, int iParam1)//Position - 0x44F2
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return 0;
	}
	return BitTest(uParam0->f_1, iParam1);
}

void func_111(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x4517
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	
	Var0 = { func_117(iParam3, &iVar4, &iVar5, 1) };
	func_91(uParam0, uParam1, uParam2, &Var0, iVar4, iVar5, 0);
}

void func_112(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x453F
{
	if (iParam3 == 0)
	{
		func_91(uParam0, uParam1, uParam2, "DRF_OVG", MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 1, 0);
		func_91(uParam0, uParam1, uParam2, "DRF_TMG", func_114(func_115(), 0, 2), 1, 0);
	}
	else if (iParam3 == 1)
	{
		func_91(uParam0, uParam1, uParam2, "DRF_OVO", MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 1, 0);
		func_113(uParam0, uParam1, uParam2, "PDRTMO", 3);
	}
	else
	{
		func_91(uParam0, uParam1, uParam2, "DRF_OVB", 0, 1, 0);
		func_91(uParam0, uParam1, uParam2, "DRF_TMB", 2, 1, 0);
	}
}

void func_113(var uParam0, var uParam1, var uParam2, char* sParam3, int iParam4)//Position - 0x45D0
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, iParam4 + 1);
	StringCopy(uParam0[*uParam2 /*4*/], sParam3, 16);
	StringCopy(uParam1[*uParam2 /*4*/], sParam3, 16);
	StringConCat(uParam1[*uParam2 /*4*/], "_", 16);
	if (iVar0 < 10)
	{
		StringConCat(uParam1[*uParam2 /*4*/], "0", 16);
	}
	StringIntConCat(uParam1[*uParam2 /*4*/], iVar0, 16);
	*uParam2++;
}

int func_114(bool bParam0, int iParam1, int iParam2)//Position - 0x462D
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_115()//Position - 0x4644
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_116(char* sParam0)//Position - 0x4662
{
	int iVar0;
	
	iVar0 = 2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return iVar0;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_SOL1"))
	{
		iVar0 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_EXILE"))
	{
		iVar0 = 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_SOL2"))
	{
		iVar0 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_MIC2"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

struct<4> func_117(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x46C6
{
	struct<4> Var0;
	
	if (func_120(59) && !func_120(45))
	{
		if (iParam0 == 2)
		{
			StringCopy(&Var0, "DRF_SOL1", 16);
			*uParam1 = 0;
			*uParam2 = 19;
			if (bParam3)
			{
				func_119(&(Global_114370.f_19964), 6);
			}
		}
	}
	else if (func_120(14) && !func_120(16))
	{
		StringCopy(&Var0, "DRF_EXILE", 16);
		*uParam1 = 0;
		*uParam2 = 9;
		if (bParam3)
		{
			func_119(&(Global_114370.f_19964), 7);
		}
	}
	else if (func_120(16) && !func_120(39))
	{
		StringCopy(&Var0, "DRF_EXILE", 16);
		*uParam1 = 9;
		*uParam2 = 10;
		if (bParam3)
		{
			func_119(&(Global_114370.f_19964), 8);
		}
	}
	else if ((func_120(39) && !func_120(47)) && !func_118(518202687))
	{
		StringCopy(&Var0, "DRF_SOL2", 16);
		*uParam1 = 0;
		*uParam2 = 15;
		if (bParam3)
		{
			func_119(&(Global_114370.f_19964), 9);
		}
	}
	else if (func_120(47) && !func_120(22))
	{
		StringCopy(&Var0, "DRF_MIC2", 16);
		*uParam1 = 0;
		*uParam2 = 13;
		if (bParam3)
		{
			func_119(&(Global_114370.f_19964), 10);
		}
	}
	return Var0;
}

int func_118(int iParam0)//Position - 0x480A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_136)
	{
		if (Global_114370.f_7691[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_650)
	{
		if (Global_114370.f_7691.f_199[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_198)
	{
		if (Global_114370.f_7691.f_137[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_764)
	{
		if (Global_114370.f_7691.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_866)
	{
		if (Global_114370.f_7691.f_765[iVar0 /*10*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_119(var uParam0, int iParam1)//Position - 0x4906
{
	if (iParam1 < 0 || iParam1 > 12)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 31);
	*uParam0 = (*uParam0 || iParam1);
}

int func_120(int iParam0)//Position - 0x4939
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114370.f_9088.f_330[iParam0 /*6*/];
}

void func_121(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x4965
{
	struct<4> Var0;
	int iVar4;
	
	switch (iParam3)
	{
		case 2:
			StringCopy(&Var0, "DRF_3", 16);
			iVar4 = 17;
			break;
		
		case 3:
			StringCopy(&Var0, "DRF_4", 16);
			iVar4 = 6;
			break;
		
		default:
			break;
	}
	func_91(uParam0, uParam1, uParam2, &Var0, 0, iVar4, 0);
	switch (iParam3)
	{
		case 2:
			StringCopy(&Var0, "DRF_OVR_2", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "DRF_OVR_5", 16);
			break;
	}
	StringCopy(uParam0[*uParam2 /*4*/], "DRF_OVR", 16);
	*(uParam1[*uParam2 /*4*/]) = { Var0 };
	*uParam2++;
}

void func_122(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x49FB
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79248)
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

void func_123(var uParam0, var uParam1, int iParam2)//Position - 0x4A96
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		(*uParam0)[iVar0] = func_124(uParam1[iVar0 /*4*/]);
		iVar0++;
	}
}

var func_124(var uParam0)//Position - 0x4AC1
{
	return uParam0;
}

int func_125(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x4ACB
{
	if (Global_97833 != 0 && (MISC::GET_GAME_TIMER() - Global_97833) < 1800000)
	{
		return 0;
	}
	HUD::REQUEST_ADDITIONAL_TEXT("SHRINK", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("DrfAud", 6);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
	if (!func_126(uParam1, uParam2, uParam3))
	{
		return 0;
	}
	func_122(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	func_122(uParam0, 1, 0, "FRIEDLANDER", 0, 1);
	Global_97833 = MISC::GET_GAME_TIMER();
	return 1;
}

int func_126(var uParam0, var uParam1, var uParam2)//Position - 0x4B5A
{
	int iVar0;
	
	iVar0 = func_128(&(Global_114370.f_19964));
	switch (iVar0)
	{
		case 0:
			func_91(uParam0, uParam1, uParam2, "PBTNM", 0, 11, 0);
			func_127(&(Global_114370.f_19964), 1);
			break;
		
		case 1:
			func_91(uParam0, uParam1, uParam2, "PBTNM2", 0, 10, 0);
			func_127(&(Global_114370.f_19964), 2);
			break;
		
		case 2:
			func_91(uParam0, uParam1, uParam2, "PBTNM3", 0, 12, 0);
			func_127(&(Global_114370.f_19964), 3);
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

void func_127(var uParam0, int iParam1)//Position - 0x4BF3
{
	if (iParam1 < 0 || iParam1 > 3)
	{
		return;
	}
	*uParam0 = (*uParam0 - (*uParam0 && SYSTEM::SHIFT_LEFT(3, 5)));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 5));
}

int func_128(var uParam0)//Position - 0x4C2E
{
	return SYSTEM::SHIFT_RIGHT(*uParam0, 5) & 3;
}

int func_129(int iParam0)//Position - 0x4C40
{
	switch (iParam0)
	{
		case 0:
			return 500;
			break;
		
		case 1:
			return 1000;
			break;
		
		case 2:
			return 1500;
			break;
		
		case 3:
			return 1500;
			break;
		
		case 4:
			return 2000;
			break;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0x4C9B
{
	return Global_61212[iParam0];
}

void func_131(char* sParam0, int iParam1)//Position - 0x4CAA
{
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam0, "DRF_MIC_1_CS_1", 24);
			StringCopy(&(sParam0->f_6), "OBTNR1", 24);
			StringCopy(&(sParam0->f_12), "DRF_MIC_1_CS_2", 24);
			sParam0->f_18 = 293200;
			break;
		
		case 1:
			StringCopy(sParam0, "DRF_MIC_2_CS_1", 24);
			StringCopy(&(sParam0->f_6), "OBTNR2", 24);
			StringCopy(&(sParam0->f_12), "DRF_MIC_2_CS_2", 24);
			sParam0->f_18 = 243600;
			break;
		
		case 2:
			StringCopy(sParam0, "PBTINT1", 24);
			StringCopy(&(sParam0->f_6), "PBTNR2", 24);
			StringCopy(&(sParam0->f_12), "PBTOUT1", 24);
			break;
		
		case 3:
			StringCopy(sParam0, "PBTINT2", 24);
			StringCopy(&(sParam0->f_6), "PBTNR3", 24);
			StringCopy(&(sParam0->f_12), "PBTOUT2", 24);
			break;
		
		case 4:
			StringCopy(sParam0, "DRF_MIC_3_CS_1", 24);
			StringCopy(&(sParam0->f_6), "OBTNR1", 24);
			StringCopy(&(sParam0->f_12), "DRF_MIC_3_CS_2", 24);
			sParam0->f_18 = 252700;
			break;
		
		default:
			break;
	}
}

int func_132()//Position - 0x4D8D
{
	return 2;
}

void func_133()//Position - 0x4D96
{
	func_137();
	func_135();
	func_134();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_134()//Position - 0x4DAE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_97837[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_97834[iVar0] = 0;
		iVar0++;
	}
}

void func_135()//Position - 0x4DEC
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar0 = iVar1;
		switch (iVar0)
		{
			case 0:
				func_136(&Global_97840, 1);
				break;
			
			case 1:
				func_136(&Global_97842, 3);
				break;
			
			case 2:
				func_136(&Global_97846, 1);
				break;
			
			case 3:
				func_136(&Global_97848, 1);
				break;
			
			case 4:
				func_136(&Global_97850, 1);
				break;
			
			case 5:
				func_136(&Global_97852, 1);
				break;
			
			case 6:
				func_136(&Global_97854, 1);
				break;
			
			case 7:
				func_136(&Global_97856, 2);
				break;
			
			case 8:
				func_136(&Global_97859, 1);
				break;
			
			case 9:
				func_136(&Global_97861, 1);
				break;
		}
		iVar1++;
	}
}

void func_136(var uParam0, int iParam1)//Position - 0x4EC6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_137()//Position - 0x4EE8
{
	Global_21032 = 0;
	func_84();
}

void func_138()//Position - 0x4EF8
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_114370.f_9088 || func_9(0))
	{
		if (!func_139())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_2(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_92124[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_7();
		}
	}
}

int func_139()//Position - 0x4F69
{
	if (((Global_101392 == 13 || Global_101392 == 10) || Global_101392 == 11) || Global_101392 == 12)
	{
		return 0;
	}
	return 1;
}

