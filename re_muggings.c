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
	int iLocal_18 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	struct<3> Local_74 = { 0, 0, 0 } ;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	bool bLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	char[] cLocal_85[8] = 0;
	char* sLocal_86 = NULL;
	char* sLocal_87 = NULL;
	char* sLocal_88 = NULL;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	char* sLocal_95 = NULL;
	char* sLocal_96 = NULL;
	char* sLocal_97 = NULL;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	char* sLocal_102 = NULL;
	int iLocal_103 = 0;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_106 = { 0, 0, 0 } ;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	struct<3> Local_121 = { 0, 0, 0 } ;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	float fLocal_139 = 0f;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	struct<3> Local_145 = { 0, 0, 0 } ;
	struct<3> Local_146 = { 0, 0, 0 } ;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 16;
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
	char[] cLocal_319[8] = 0;
	char[] cLocal_320[8] = 0;
	char[] cLocal_321[8] = 0;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	struct<3> Local_331 = { 0, 0, 0 } ;
	struct<3> Local_332 = { 0, 0, 0 } ;
	char[] cLocal_333[8] = 0;
	char[] cLocal_334[8] = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 1000;
	var uLocal_346 = 1000;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 15;
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
	var uLocal_622 = 1;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	struct<3> Local_626 = { 0, 0, 0 } ;
	struct<2> Local_627 = { 0, 5 } ;
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
	var uLocal_643 = 5;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_81 = { -131.052f, -1627f, 31.1755f };
	Local_82 = { 287.888f, -284.603f, 52.967f };
	Local_83 = { -319.66f, -832.28f, 31.61f };
	Local_84 = { 31f, -1019f, 28.5f };
	sLocal_102 = "";
	cLocal_319 = "RANDOM@MUGGING3";
	cLocal_320 = "pickup_object";
	cLocal_333 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_335 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (iLocal_46 == 5 || iLocal_46 == 12)
		{
			func_296(25, bLocal_80);
			func_278();
		}
		else
		{
			func_278();
		}
	}
	Local_104 = { ScriptParam_627.f_1[0 /*3*/] };
	func_277(&uLocal_349, 3);
	func_276();
	if ((bLocal_80 == 1 && func_275(55)) && !func_274(55))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_233(Local_104, 25, bLocal_80, 0, 0))
	{
		func_230(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	while (true)
	{
		SYSTEM::WAIT(0);
		func_227(&uLocal_349);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		func_226(iLocal_63, &uLocal_348);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_123)
		{
			switch (iLocal_44)
			{
				case 0:
					if (func_212())
					{
						PED::SET_CREATE_RANDOM_COPS(false);
						MISC::CLEAR_AREA_OF_VEHICLES(-127.9025f, -1574.084f, 36.4128f, 10f, false, false, false, false, false, false, 0);
						iLocal_130 = 1;
						iLocal_44 = 1;
					}
					else if (func_211())
					{
						func_278();
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (iLocal_117 == 0)
						{
							iLocal_117 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(101, Local_104, 0f);
						}
						PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
						switch (iLocal_46)
						{
							case 1:
								func_203();
								break;
							
							case 2:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_47)
								{
									case 0:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (PED::IS_PED_INJURED(iLocal_61) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), false))
										{
											bVar0 = PED::IS_PED_INJURED(iLocal_60);
											if (!OBJECT::DOES_PICKUP_EXIST(iLocal_151))
											{
											}
											if (bVar0 == 0 && bLocal_80 == 1)
											{
												PED::SET_PED_TO_RAGDOLL(iLocal_60, 500, 1000, 0, false, false, false);
												TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
												PED::SET_PED_KEEP_TASK(iLocal_60, true);
												func_202(1);
												func_197();
											}
										}
										else
										{
											func_167();
										}
										if (iLocal_625 == 1 && bLocal_123 == 1)
										{
											iLocal_46 = 4;
										}
										else if (bLocal_123)
										{
											iLocal_47 = 2;
										}
										break;
									
									case 2:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_166();
										if (iLocal_52 && !func_165())
										{
											iLocal_47 = 4;
										}
										break;
									
									case 4:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_164())
										{
											func_163();
										}
										if (bLocal_129)
										{
											iLocal_47 = 5;
										}
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, 242628503) == 7)
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
											TASK::TASK_LOOK_AT_ENTITY(0, iLocal_61, 5000, 0, 2);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000);
											TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 4f, -4f, -1, 0, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
										}
										break;
									
									case 5:
										func_160();
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, 242628503) == 7)
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_61, 0);
												TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0f, false, false, false);
												TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
												TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
											}
										}
										break;
								}
								if (func_159())
								{
									iLocal_46 = 11;
								}
								if (bLocal_123)
								{
								}
								func_158();
								if (iLocal_47 == 0)
								{
									if (func_156())
									{
										if (iLocal_119 == 4)
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_64))
											{
												HUD::REMOVE_BLIP(&iLocal_64);
											}
											if (HUD::DOES_BLIP_EXIST(iLocal_63))
											{
												HUD::REMOVE_BLIP(&iLocal_63);
											}
											if (!HUD::DOES_BLIP_EXIST(iLocal_65))
											{
												iLocal_65 = func_154(iLocal_151);
											}
											iLocal_46 = 4;
										}
										else
										{
											iLocal_46 = 3;
										}
									}
									if (func_153())
									{
										func_152();
									}
								}
								if (func_151())
								{
									func_150();
									func_149();
									if (ENTITY::IS_ENTITY_AT_COORD(iLocal_60, Local_146, 7f, 7f, 7f, false, true, 0))
									{
										iLocal_119 = 2;
										iLocal_46 = 3;
									}
									else
									{
										iLocal_46 = 4;
									}
								}
								if (bLocal_123)
								{
									if (!PED::IS_PED_IN_COMBAT(iLocal_61, 0))
									{
										func_147(iLocal_64, &uLocal_118);
									}
									else if (HUD::DOES_BLIP_EXIST(iLocal_64))
									{
										if (HUD::GET_BLIP_COLOUR(iLocal_64) == 1)
										{
										}
										else
										{
											HUD::SET_BLIP_AS_FRIENDLY(iLocal_64, false);
											HUD::SET_BLIP_COLOUR(iLocal_64, 1);
										}
									}
								}
								if (func_146())
								{
									iLocal_46 = 10;
								}
								break;
							
							case 4:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_145(1);
								if (func_164())
								{
									func_163();
									func_160();
								}
								if (func_159())
								{
									iLocal_46 = 11;
								}
								func_137();
								break;
							
							case 5:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_145(1);
								if (!bLocal_126)
								{
									func_136(iLocal_60, &uLocal_153);
									uLocal_153 = uLocal_153;
									func_135();
									func_134();
									func_133();
									if (func_132())
									{
										func_131();
										func_197();
									}
									if (func_124(func_125()) < iLocal_152)
									{
										iLocal_46 = 12;
									}
								}
								func_61();
								break;
							
							case 10:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_60();
								break;
							
							case 3:
								func_59();
								break;
							
							case 11:
								func_58();
								break;
							
							case 6:
								if (func_159())
								{
									iLocal_46 = 11;
								}
								func_41();
								break;
							
							case 8:
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
									{
										iLocal_46 = 6;
									}
									else
									{
										func_278();
									}
								}
								break;
							
							case 9:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
								{
									if (PED::IS_PED_INJURED(iLocal_61))
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_64))
										{
											HUD::REMOVE_BLIP(&iLocal_64);
										}
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_60))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
											{
												OBJECT::DELETE_OBJECT(&iLocal_62);
											}
											func_40();
											iLocal_54 = 1;
											func_137();
										}
									}
								}
								break;
							
							case 12:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
								{
									OBJECT::DELETE_OBJECT(&iLocal_62);
								}
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								func_197();
								break;
							
							case 13:
								func_39();
								break;
							}
					}
					if (bLocal_58)
					{
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
							{
								if (SYSTEM::VDIST(Local_146, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 150f)
								{
									func_278();
								}
							}
						}
					}
					else if (bLocal_123)
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							if (iLocal_46 != 6)
							{
								if (func_38(PLAYER::PLAYER_PED_ID(), iLocal_61, 1) > 150f && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_61) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_61)))
								{
									func_37(&uLocal_336, 0, 0);
									iLocal_46 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_64, iLocal_61, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							func_37(&uLocal_336, 0, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
					{
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), true))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
								{
									if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_62, iLocal_60))
									{
										ENTITY::DETACH_ENTITY(iLocal_62, true, true);
									}
								}
							}
						}
					}
					if (iLocal_124)
					{
						if (!iLocal_137)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), ENTITY::GET_ENTITY_COORDS(iLocal_60, true), true) > 100f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
									iLocal_137 = 1;
								}
							}
						}
					}
					if (bLocal_123 && !iLocal_124)
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							if (bLocal_80 == 3)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, 1805844857) != 1)
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iLocal_61);
									TASK::TASK_SMART_FLEE_PED(iLocal_61, iLocal_60, 200f, -1, false, false);
									PED::FORCE_PED_MOTION_STATE(iLocal_61, joaat("MotionState_Run"), true, 0, false);
									iLocal_124 = 1;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, 1805844857) != 1)
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_61);
								TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
								PED::FORCE_PED_MOTION_STATE(iLocal_61, joaat("MotionState_Run"), true, 0, false);
								iLocal_124 = 1;
							}
							if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_61, -2134635134))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_61, iLocal_60, 200f, -1, false, false);
								PED::FORCE_PED_MOTION_STATE(iLocal_61, joaat("MotionState_Run"), true, 0, false);
								iLocal_124 = 1;
							}
							if (bLocal_80 == 1 || bLocal_80 == 4)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_319, sLocal_329, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_319, sLocal_329) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										PED::FORCE_PED_MOTION_STATE(iLocal_61, joaat("MotionState_Run"), true, 0, false);
										iLocal_124 = 1;
									}
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_319, sLocal_327, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_319, sLocal_327) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										PED::FORCE_PED_MOTION_STATE(iLocal_61, joaat("MotionState_Run"), true, 0, false);
										iLocal_124 = 1;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_278();
		}
	}
}

void func_1()//Position - 0xA1F
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		if (PED::IS_PED_INJURED(iLocal_60))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (PED::IS_PED_INJURED(iLocal_61))
				{
					func_278();
				}
			}
		}
	}
	if (PED::IS_PED_INJURED(iLocal_60))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
	}
	if (PED::IS_PED_INJURED(iLocal_61))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
	}
	if (!iLocal_135)
	{
		if (PED::IS_PED_INJURED(iLocal_61))
		{
			func_2(&uLocal_154, 1);
			iLocal_135 = 1;
		}
	}
	if (!iLocal_136)
	{
		if (PED::IS_PED_INJURED(iLocal_60))
		{
			func_2(&uLocal_154, 2);
			iLocal_136 = 1;
		}
	}
}

void func_2(var uParam0, int iParam1)//Position - 0xAB1
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_3(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0xACE
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), false))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, true);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, false);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, true);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, false);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_4()//Position - 0xC27
{
	if (!PED::IS_PED_INJURED(iLocal_61) || !bLocal_109)
	{
		func_5(&uLocal_336, iLocal_61, 0, 0, 1, 1, 1);
	}
	else
	{
		func_37(&uLocal_336, 0, 0);
	}
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0xC5C
{
	func_6(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_6(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0xC76
{
	func_7(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_7(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0xC93
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_37(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_8(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_8(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0xCCB
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
	if (func_36(iVar0))
	{
		func_35();
	}
	if (func_34(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
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
			if (func_29(uParam0, bParam5, bParam7, 0))
			{
				func_25(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_36(iVar0))
							{
								func_12(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_11(1);
								}
							}
						}
					}
				}
			}
			else if (func_13(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_36(iVar0))
						{
							func_12(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_11(1);
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
				if (func_36(sParam3))
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
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_37(uParam0, iVar0, 1);
				}
			}
			if (!func_29(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_37(uParam0, iVar0, 0);
	}
}

void func_9(var uParam0)//Position - 0x1034
{
	if (func_34(PLAYER::PLAYER_PED_ID()))
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

int func_10(var uParam0)//Position - 0x109D
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

int func_11(bool bParam0)//Position - 0x10C8
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

void func_12(char* sParam0, int iParam1)//Position - 0x1172
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_13(char* sParam0)//Position - 0x1189
{
	if (!func_14(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_36(sParam0)) || func_36("CMN_HINT"))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (func_11(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_14(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1221
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
	if (func_24(0))
	{
		return 0;
	}
	if (func_23())
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
	if ((func_22() || func_21(Global_4718592.f_168757)) || func_20())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_19(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_18(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_15(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)//Position - 0x147A
{
	if (iParam0 != func_17())
	{
		if (func_16(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == PLAYER::PLAYER_ID()) && func_16(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_16(int iParam0, bool bParam1, bool bParam2)//Position - 0x14E0
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

int func_17()//Position - 0x1540
{
	return -1;
}

int func_18(int iParam0, int iParam1)//Position - 0x1549
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

int func_19(int iParam0, bool bParam1)//Position - 0x15AB
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

var func_20()//Position - 0x1630
{
	return Global_2714762.f_19;
}

bool func_21(int iParam0)//Position - 0x163E
{
	return iParam0 == 51;
}

var func_22()//Position - 0x164B
{
	return Global_2714762.f_18;
}

bool func_23()//Position - 0x1659
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

int func_24(int iParam0)//Position - 0x166E
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

void func_25(var uParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x16C5
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
		func_37(uParam0, 0, 0);
	}
	if (func_28(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_26())
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

bool func_26()//Position - 0x17D5
{
	return func_27(PLAYER::PLAYER_ID());
}

int func_27(int iParam0)//Position - 0x17E5
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_28(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x1804
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_29(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x184B
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
					if (func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_10(uParam0))
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
						if (!func_33(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_33(bParam1, bParam2, bParam3))
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
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_32(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
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
				else if (!func_33(bParam1, bParam2, bParam3))
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
						if (func_31(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_30(bParam1, bParam2, bParam3))
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
					else if (func_31(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_10(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_35();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_30(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1BB7
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_31(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1C09
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_32(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1C52
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_33(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1CB1
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_34(int iParam0)//Position - 0x1D07
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

void func_35()//Position - 0x1D62
{
	MISC::SET_BIT(&Global_8137, 4);
}

bool func_36(char* sParam0)//Position - 0x1D72
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_37(var uParam0, int iParam1, bool bParam2)//Position - 0x1D85
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
		if (func_36(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_36(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

float func_38(int iParam0, int iParam1, bool bParam2)//Position - 0x1E5D
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

void func_39()//Position - 0x1EBB
{
	func_278();
}

void func_40()//Position - 0x1EC7
{
	if (!OBJECT::DOES_PICKUP_EXIST(iLocal_151))
	{
		if (PED::IS_PED_INJURED(iLocal_61))
		{
			Local_146 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_61, 1.2f, 1.5f) };
		}
		else
		{
			Local_146 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), 1.2f, 1.5f) };
		}
		iLocal_151 = OBJECT::CREATE_PICKUP(joaat("pickup_money_wallet"), Local_146, iLocal_120, iLocal_152, true, iLocal_77);
		iLocal_65 = func_154(iLocal_151);
		func_37(&uLocal_336, 0, 0);
		bLocal_58 = true;
	}
}

void func_41()//Position - 0x1F3C
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0f, false, false, false);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0f, false, false, false);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		func_42(&uLocal_154, cLocal_85, sLocal_92, 4, 0, 0, 0);
		iLocal_128 = 1;
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		SYSTEM::WAIT(0);
		func_278();
	}
}

int func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2019
{
	func_57(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)//Position - 0x2067
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
					func_56();
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
		if (func_55(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_54();
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
				func_52();
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
				if (func_51())
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
			if (func_50())
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
			func_49();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_48();
		func_44();
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
		func_56();
	}
	return 0;
}

void func_44()//Position - 0x2335
{
	if (!func_45())
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

int func_45()//Position - 0x236C
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_17())
	{
		return 0;
	}
	if (func_46(PLAYER::PLAYER_ID()))
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

bool func_46(int iParam0)//Position - 0x23CF
{
	return func_47(iParam0, 20);
}

var func_47(int iParam0, int iParam1)//Position - 0x23DF
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

void func_48()//Position - 0x23F7
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

void func_49()//Position - 0x2427
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

int func_50()//Position - 0x24BC
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_51()//Position - 0x24E3
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

void func_52()//Position - 0x257C
{
	if (func_53(14))
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
		Global_20266 = func_125();
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

bool func_53(int iParam0)//Position - 0x261E
{
	return Global_43052 == iParam0;
}

void func_54()//Position - 0x262C
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

bool func_55(int iParam0, int iParam1)//Position - 0x2682
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

void func_56()//Position - 0x26BA
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

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2711
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
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

void func_58()//Position - 0x2767
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		TASK::CLEAR_PED_TASKS(iLocal_60);
		TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			OBJECT::DELETE_OBJECT(&iLocal_62);
		}
		SYSTEM::WAIT(0);
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
	}
	if (PED::IS_PED_INJURED(iLocal_61) || PED::IS_PED_INJURED(iLocal_60))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
		{
			if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
			{
				iLocal_54 = 1;
				func_137();
			}
			else
			{
				func_145(0);
				func_278();
			}
		}
		else
		{
			func_278();
		}
	}
}

void func_59()//Position - 0x2820
{
	bool bVar0;
	
	func_137();
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
		{
		}
	}
	if (iLocal_119 == 1)
	{
		if (!iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				TASK::CLEAR_PED_TASKS(iLocal_61);
				TASK::TASK_COMBAT_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_61, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
					{
						TASK::CLEAR_PED_TASKS(iLocal_60);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_151), 1f, 20000, 0.25f, false, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
					}
				}
			}
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 2)
	{
		if (!iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				TASK::CLEAR_PED_TASKS(iLocal_61);
				TASK::TASK_COMBAT_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_61, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
			}
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_60, OBJECT::GET_PICKUP_COORDS(iLocal_151), 10f, 10f, 10f, false, true, 0))
						{
							if (bLocal_80 == 3)
							{
								if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
								{
									TASK::CLEAR_PED_TASKS(iLocal_60);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_151), 1f, 20000, 0.25f, false, 40000f);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
									iLocal_49 = 1;
								}
							}
							else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_330, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_326, 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_328, 3))
							{
								TASK::CLEAR_PED_TASKS(iLocal_60);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_151), 1f, 20000, 0.25f, false, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
								iLocal_49 = 1;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
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
					if (bLocal_80 == 3)
					{
						if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
						{
							TASK::CLEAR_PED_TASKS(iLocal_60);
							TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
							if (HUD::DOES_BLIP_EXIST(iLocal_63))
							{
								HUD::REMOVE_BLIP(&iLocal_63);
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
							iLocal_49 = 1;
							iLocal_46 = 9;
						}
					}
					else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_330, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_326, 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_328, 3))
					{
						TASK::CLEAR_PED_TASKS(iLocal_60);
						TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_60, true);
						if (HUD::DOES_BLIP_EXIST(iLocal_63))
						{
							HUD::REMOVE_BLIP(&iLocal_63);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 9;
					}
				}
			}
		}
	}
	if (iLocal_119 == 3)
	{
		if (!iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				TASK::CLEAR_PED_TASKS(iLocal_61);
				TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_61, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
			}
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				TASK::CLEAR_PED_TASKS(iLocal_60);
				TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_60, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
			}
			iLocal_54 = 1;
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 1 || iLocal_119 == 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_60))
		{
			if (iLocal_49)
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_320, "pickup_low", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_60, cLocal_320, "pickup_low") > 0.5f)
							{
								if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
								{
									if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
									{
										func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
										OBJECT::REMOVE_PICKUP(iLocal_151);
										bLocal_50 = true;
									}
								}
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, 242628503) == 7)
						{
							TASK::CLEAR_PED_TASKS(iLocal_60);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
							TASK::TASK_PLAY_ANIM(0, cLocal_320, "pickup_low", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
						}
					}
					else if (bLocal_50)
					{
						PED::SET_PED_MONEY(iLocal_60, iLocal_152);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
						func_202(3);
						func_197();
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_60, true);
						if (HUD::DOES_BLIP_EXIST(iLocal_63))
						{
							HUD::REMOVE_BLIP(&iLocal_63);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 12;
					}
				}
				else if (bLocal_50)
				{
					PED::SET_PED_MONEY(iLocal_60, iLocal_152);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
					func_202(3);
					func_197();
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_60, true);
					if (HUD::DOES_BLIP_EXIST(iLocal_63))
					{
						HUD::REMOVE_BLIP(&iLocal_63);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
					iLocal_49 = 1;
					iLocal_46 = 12;
				}
			}
		}
		else
		{
			iLocal_46 = 9;
		}
	}
}

void func_60()//Position - 0x2D53
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		TASK::CLEAR_PED_TASKS(iLocal_60);
		TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
	}
}

void func_61()//Position - 0x2D8A
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	struct<2> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (!bLocal_126)
		{
			if (iLocal_127)
			{
				Var7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				iVar8 = 1;
				if (bLocal_80 == 1)
				{
					if (Var7.f_2 > 33.5f)
					{
						iVar8 = 0;
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 5f, 5f, 5f, false, true, 0) && iVar8 == 1)
				{
					if (func_122(2))
					{
						HUD::CLEAR_HELP(true);
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (func_121(1, 0, 1))
						{
							if (!func_120())
							{
								if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
								{
									func_112(1, 1, 1, 0, 0, 0, 0);
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										while (!func_110(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_71, 1, 1056964608, 0, 1, 0) || func_165())
										{
											HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
											SYSTEM::WAIT(0);
										}
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
									}
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									if (!PED::IS_PED_INJURED(iLocal_60))
									{
										PED::SET_PED_CAN_RAGDOLL(iLocal_60, false);
									}
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
									EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
									EVENT::REMOVE_SHOCKING_EVENT(iLocal_117);
									if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										func_108();
									}
									bLocal_126 = true;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
				}
				else
				{
					func_106(ENTITY::GET_ENTITY_COORDS(iLocal_60, true), &uLocal_70, &fLocal_71);
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 15f, 15f, 15f, false, true, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				if (iLocal_45 == 2)
				{
					TASK::TASK_PLAY_ANIM(0, cLocal_333, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0f, false, false, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
				PED::FORCE_PED_MOTION_STATE(iLocal_60, joaat("MotionState_Walk"), false, 0, false);
				iLocal_127 = 1;
			}
		}
		if (bLocal_126)
		{
			switch (iLocal_125)
			{
				case 0:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							func_103(iLocal_60, &Local_105, &Local_106, cLocal_321, sLocal_323);
							if (bLocal_80 == 1)
							{
								if (Local_106.f_2 > 225f && Local_106.f_2 < 265f)
								{
									if (Local_106.f_2 < 245f)
									{
										Local_106.f_2 = 225f;
									}
									else
									{
										Local_106.f_2 = 265f;
									}
								}
								else if (Local_106.f_2 > 45f && Local_106.f_2 < 85f)
								{
									if (Local_106.f_2 < 65f)
									{
										Local_106.f_2 = 45f;
									}
									else
									{
										Local_106.f_2 = 85f;
									}
								}
							}
							Local_105.f_2 = (Local_105.f_2 + 2f);
							MISC::GET_GROUND_Z_FOR_3D_COORD(Local_105, &(Local_105.f_2), false, false);
							Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_321, sLocal_323, Local_105, Local_106, 0f, 2) };
							Var4 = { Var1 - Local_105 };
							Var4.f_2 = 0f;
							fVar5 = SYSTEM::VMAG(Var4);
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &(Var1.f_2), false, false);
							fVar6 = (Local_105.f_2 - Var1.f_2);
							Local_106.f_0 = MISC::ATAN2(fVar6, fVar5);
							if (Local_106.f_0 > 30f || Local_106.f_0 < -30f)
							{
								Local_106.f_0 = 0f;
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
							{
								iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &uVar2, &Var3);
								if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_105, (Var3.f_1 + 1.5f), (Var3.f_1 + 1.5f), 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_321, sLocal_323, Local_105, Local_106, 0f, 2), (Var3.f_1 + 1f), (Var3.f_1 + 1f), 3f, false, true, 0))
								{
									if (bLocal_80 == 1)
									{
										if (Local_106.f_2 > 40f && Local_106.f_2 < 220f)
										{
											Local_74 = { -148.3897f, -1647.215f, 31.5867f };
											fLocal_73 = 331.9427f;
										}
										else
										{
											Local_74 = { -129.5632f, -1622.282f, 31.1122f };
											fLocal_73 = 148.9075f;
										}
									}
									else if (bLocal_80 == 3)
									{
										if (Local_106.f_2 > 160f && Local_106.f_2 < 340f)
										{
											Local_74 = { -319.709f, -837.0066f, 30.449f };
											fLocal_73 = 61.7986f;
										}
										else
										{
											Local_74 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_73 = 269.6216f;
										}
									}
									else if (bLocal_80 == 4)
									{
										if (Local_106.f_2 > 240f || Local_106.f_2 < 60f)
										{
											Local_74 = { 37.222f, -1005.04f, 28.4648f };
											fLocal_73 = 156.7986f;
										}
										else
										{
											Local_74 = { 29.9887f, -1033.184f, 28.3794f };
											fLocal_73 = 344.6216f;
										}
									}
									else
									{
										fLocal_73 = ENTITY::GET_ENTITY_HEADING(iVar0);
										Local_74 = { func_101(Local_105, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_321, sLocal_323, Local_105, Local_106, 0f, 2)) };
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
									{
										ENTITY::SET_ENTITY_COORDS(iVar0, Local_74, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_73);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
									}
								}
							}
						}
						MISC::CLEAR_AREA_OF_OBJECTS(Local_105, 20f, 2);
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_105, 20f, 0);
						MISC::CLEAR_AREA(Local_105, 2f, true, true, false, false);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
						iLocal_62 = OBJECT::CREATE_OBJECT(iLocal_77, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, true, false);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						}
						iLocal_107 = PED::CREATE_SYNCHRONIZED_SCENE(Local_105, Local_106, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_107, false);
						iLocal_108 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_108, iLocal_107, sLocal_324, cLocal_321);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_107, cLocal_321, sLocal_322, 1000f, -8f, 0, 0, 1000f, 0);
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_60);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_60, iLocal_107, cLocal_321, sLocal_323, 1000f, -8f, 0, 0, 1000f, 0);
						}
						CAM::SET_CAM_ACTIVE(iLocal_108, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						func_42(&uLocal_154, cLocal_85, sLocal_97, 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_125++;
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				
				case 1:
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_107) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_107) > 0.9f) || func_99(1000))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(iLocal_108, false);
						CAM::DESTROY_CAM(iLocal_108, false);
						func_98();
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_60);
							PED::SET_PED_MONEY(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_321, sLocal_323, Local_105, Local_106, 1f, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &(Var1.f_2), false, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_60, Var1, true, false, false, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_60, false);
							Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_321, sLocal_323, Local_105, Local_106, 1f, 2) };
							ENTITY::SET_ENTITY_HEADING(iLocal_60, Var1.f_2);
							if (bLocal_80 == 4)
							{
								if (func_97(Var1.f_2, 0f, 90f))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 0.25f, false, 40000f);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_60), 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 0.25f, false, 40000f);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_60), 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
								}
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
								TASK::TASK_WANDER_STANDARD(0, Var1.f_2, 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							}
							PED::SET_PED_MOVEMENT_CLIPSET(iLocal_60, cLocal_334, 0.25f);
							PED::FORCE_PED_MOTION_STATE(iLocal_60, joaat("MotionState_Walk"), true, 0, false);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
						{
							OBJECT::DELETE_OBJECT(&iLocal_62);
						}
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							PED::SET_PED_MONEY(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							PED::SET_PED_CAN_RAGDOLL(iLocal_60, true);
						}
						iVar9 = (iLocal_152 / 100);
						iVar9 *= 90;
						SYSTEM::WAIT(0);
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
						func_64(func_125(), 1, iVar9);
						func_63(joaat("rc_wallets_returned"), 1);
						func_202(3);
						func_197();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("detach")))
					{
						if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::DETACH_ENTITY(iLocal_62, false, true);
								if (PED::IS_PED_MALE(iLocal_60))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_62, iLocal_60, PED::GET_PED_BONE_INDEX(iLocal_60, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_62, iLocal_60, PED::GET_PED_BONE_INDEX(iLocal_60, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								}
								if (!iLocal_59)
								{
									if (func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || func_62())
									{
										iLocal_59 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_59)
					{
						if (func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || func_62())
						{
							iLocal_59 = 1;
						}
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				}
		}
	}
	else
	{
		func_278();
	}
}

int func_62()//Position - 0x36EF
{
	if (Global_21605 == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
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

void func_63(int iParam0, int iParam1)//Position - 0x3714
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

int func_64(int iParam0, int iParam1, int iParam2)//Position - 0x3737
{
	if (func_96(iParam0) == 3)
	{
		return 0;
	}
	if (func_96(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_96(iParam0), 0, iParam1, iParam2, 0);
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x376B
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_95();
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
					func_94(99, 1);
					func_63(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_79(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_76(5))
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
							func_63(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_76(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_63(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_property"), iParam3);
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
									func_63(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_76(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_75(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_94(95, iParam3);
					break;
				
				case 1:
					func_94(97, iParam3);
					break;
				
				case 2:
					func_94(96, iParam3);
					break;
			}
			func_94(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_68(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_68(bVar1);
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
					func_63(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_total_cash_earned"), iParam3);
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
	func_67(iParam0);
	if (Global_43052 == 15)
	{
		func_66(0);
	}
	return 1;
}

void func_66(bool bParam0)//Position - 0x3D6A
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

void func_67(int iParam0)//Position - 0x3FEC
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

void func_68(bool bParam0)//Position - 0x404A
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_74(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_74(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_74(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_74(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_71(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_71(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_71(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_71(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_71(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_71(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_70() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_70() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_69(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_69(bool bParam0)//Position - 0x41C8
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

int func_70()//Position - 0x42C9
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_71(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x42D6
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_72(var uParam0)//Position - 0x4306
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_73();
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

int func_73()//Position - 0x433A
{
	return Global_1574918;
}

void func_74(int iParam0, bool bParam1, int iParam2)//Position - 0x4346
{
	if (iParam2 == -1)
	{
		iParam2 = func_73();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_75(int iParam0)//Position - 0x4364
{
	func_94(93, iParam0);
	func_94(29, iParam0);
	func_94(30, iParam0);
}

int func_76(int iParam0)//Position - 0x4384
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
		return func_78(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_78(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_78(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_78(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_77(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_77(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_77(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_77(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_77(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_77(8277, -1, 0);
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
	return BitTest(Global_2359296[func_70() /*5567*/].f_681.f_10, iParam0);
}

int func_77(int iParam0, int iParam1, int iParam2)//Position - 0x452A
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_72(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_78(int iParam0, int iParam1)//Position - 0x4567
{
	if (iParam1 == -1)
	{
		iParam1 = func_73();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_79(bool bParam0)//Position - 0x4583
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
		func_93(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_80(27, 1);
	return 1;
}

int func_80(int iParam0, int iParam1)//Position - 0x463A
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_81(iParam0, iParam1);
}

int func_81(int iParam0, int iParam1)//Position - 0x4655
{
	if (func_53(14) && !func_92(iParam0))
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
	if (func_91(&Global_4541529))
	{
		if (func_89(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_82(&Global_4541529, iParam0))
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

int func_82(var uParam0, int iParam1)//Position - 0x46F2
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_92(iParam1))
	{
		return 0;
	}
	if (func_89(uParam0, iParam1))
	{
		return 0;
	}
	if (func_88(uParam0) < 0f)
	{
		func_87(uParam0, 0);
	}
	func_85(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_83(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_83(var uParam0, int iParam1)//Position - 0x47A3
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_92(iParam1))
	{
		return 0;
	}
	if (func_89(uParam0, iParam1))
	{
		return 0;
	}
	if (func_88(uParam0) < 0f)
	{
		func_87(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_84(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_84(var uParam0, int iParam1)//Position - 0x481E
{
	return (*uParam0)[iParam1] == 78;
}

void func_85(var uParam0)//Position - 0x482F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_86(uParam0, iVar0);
		iVar0++;
	}
	func_87(uParam0, (Global_4541528 - 0.5f));
}

void func_86(var uParam0, int iParam1)//Position - 0x4863
{
	(*uParam0)[iParam1] = 78;
}

void func_87(var uParam0, float fParam1)//Position - 0x4873
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

float func_88(var uParam0)//Position - 0x4890
{
	return uParam0->f_80;
}

bool func_89(var uParam0, int iParam1)//Position - 0x489C
{
	return func_90(uParam0, iParam1) != -1;
}

int func_90(var uParam0, int iParam1)//Position - 0x48AE
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

bool func_91(var uParam0)//Position - 0x48DB
{
	return uParam0->f_79 == 1;
}

int func_92(int iParam0)//Position - 0x48E9
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

int func_93(int iParam0, int iParam1)//Position - 0x4939
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

void func_94(int iParam0, int iParam1)//Position - 0x498A
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

void func_95()//Position - 0x49E7
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

int func_96(int iParam0)//Position - 0x4A5C
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_97(float fParam0, float fParam1, float fParam2)//Position - 0x4A6D
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_98()//Position - 0x4AE2
{
	int iVar0;
	
	iVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 65f, true, 2);
	CAM::SET_CAM_ACTIVE(iVar0, true);
}

int func_99(int iParam0)//Position - 0x4B20
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_100())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_100()//Position - 0x4B6A
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

Vector3 func_101(struct<3> Param0, struct<3> Param1)//Position - 0x4B9C
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	int iVar13;
	
	iVar5 = 0;
	iVar6 = 1;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Var3, &Var4);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, 3, &Var2, 1, 1077936128, 0);
	if (SYSTEM::VDIST(Param0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		Var1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 8;
	}
	else if (SYSTEM::VDIST(Param0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		Var1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						Var10 = { func_102(Var1, 0f, Var4) };
						Var11 = { func_102(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						Var10 = { func_102(Var1, 0f, Var4) };
						Var11 = { func_102(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 3:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 + IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 + IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						Var10 = { func_102(Var1, 0f, Var4) };
						Var11 = { func_102(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 5:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 6:
				if (SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 - IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 - IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						Var10 = { func_102(Var1, 0f, Var4) };
						Var11 = { func_102(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 7:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		SYSTEM::WAIT(0);
	}
	return Var1;
}

Vector3 func_102(struct<3> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x519D
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

void func_103(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x51EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	var uVar11;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	uParam2->f_2 = func_105(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar3 = func_105(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar4 = func_105(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	Var10 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam3))
	{
		Var9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam3, sParam4, *uParam1, *uParam2, 0f, 2) };
	}
	else
	{
		Var9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_104(ENTITY::GET_ENTITY_COORDS(iParam0, false), *uParam1, 1);
					*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false), uParam2->f_2, Var10) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1, Var9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar5, &iVar6, &Var8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (Var8.f_2 > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar4, Var10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_104(Var9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

float func_104(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3, int iParam4)//Position - 0x53A2
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_105(int iParam0, int iParam1, int iParam2)//Position - 0x5407
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	return func_104(Var0, Var1, iParam2);
}

void func_106(struct<3> Param0, var uParam1, float fParam2)//Position - 0x5433
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Param0 };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
		if (func_107(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fVar2, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
		if (func_107(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f)
		{
			*uParam1 = (6f * 4f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f)
		{
			*uParam1 = (6f * 3f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			*uParam1 = (6f * 2f);
		}
		else
		{
			*uParam1 = 6f;
		}
		*fParam2 = ((*uParam1 / 1.33f) - 1f);
	}
	else
	{
		*uParam1 = 6f;
		*fParam2 = ((*uParam1 / 1.33f) - 1f);
	}
}

int func_107(int iParam0, float fParam1, float fParam2)//Position - 0x5534
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_108()//Position - 0x55BB
{
	Global_20471 = 0;
	func_109();
}

void func_109()//Position - 0x55CB
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

int func_110(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x55EC
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
	func_111(iParam0);
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

void func_111(int iParam0)//Position - 0x5784
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

void func_112(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x57B0
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_119(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_50())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_118(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_119(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_118(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_116(PLAYER::PLAYER_ID())) && !func_114(PLAYER::PLAYER_ID(), 0)) && !func_113()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_116(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

bool func_113()//Position - 0x58F3
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

bool func_114(int iParam0, int iParam1)//Position - 0x590D
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_115(-1, 0) == 8;
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

int func_115(int iParam0, bool bParam1)//Position - 0x5958
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_73();
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

int func_116(int iParam0)//Position - 0x5999
{
	if (func_114(iParam0, 0))
	{
		return 1;
	}
	if (func_117())
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

bool func_117()//Position - 0x59D8
{
	return BitTest(Global_2621446, 3);
}

int func_118(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x59E6
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

void func_119(int iParam0)//Position - 0x5A19
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

int func_120()//Position - 0x5A3C
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_165())
		{
			return 1;
		}
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5A5D
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

bool func_122(int iParam0)//Position - 0x5B42
{
	return func_36(func_123(iParam0));
}

char* func_123(int iParam0)//Position - 0x5B54
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_124(int iParam0)//Position - 0x5B96
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_125()//Position - 0x5BEE
{
	func_126();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_126()//Position - 0x5C07
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_129(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_128(PLAYER::PLAYER_PED_ID());
			if (func_127(iVar0) && (!func_53(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_127(Global_113386.f_2363.f_539.f_4321))
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

bool func_127(int iParam0)//Position - 0x5D04
{
	return iParam0 < 3;
}

int func_128(int iParam0)//Position - 0x5D10
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_129(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_129(int iParam0)//Position - 0x5D4D
{
	if (func_127(iParam0))
	{
		return func_130(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_130(int iParam0)//Position - 0x5D72
{
	return Global_1998[iParam0 /*29*/];
}

void func_131()//Position - 0x5D81
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		SYSTEM::WAIT(0);
	}
}

int func_132()//Position - 0x5DB1
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 3f, 3f, 3f };
	Var1 = { -3f, -3f, -3f };
	if (PED::IS_PED_INJURED(iLocal_60))
	{
		return 1;
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 5f, true))
		{
			return 1;
		}
		Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f) };
		Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("weapon_smokegrenade"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("weapon_grenade"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("weapon_stickybomb"), true))
		{
			return 1;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_133()//Position - 0x5E9A
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_60, true)) > (fLocal_139 + 50f))
		{
			func_197();
		}
		else if (func_124(func_125()) < iLocal_152)
		{
			func_197();
		}
	}
}

void func_134()//Position - 0x5EE5
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, Global_19, false, true, 0))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 3000, 0, 2);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
		}
	}
}

void func_135()//Position - 0x5F2A
{
	float fVar0;
	
	if (bLocal_80 == 1)
	{
		fVar0 = 13f;
	}
	if (bLocal_80 == 4)
	{
		fVar0 = 5.75f;
	}
	if (bLocal_80 == 1 || bLocal_80 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_140, Local_141, fVar0, false, true, 0))
		{
			if (!iLocal_131)
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_131 = 1;
					iLocal_132 = 0;
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_142, Local_143, fVar0, false, true, 0))
		{
			if (!iLocal_132)
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_132 = 1;
					iLocal_131 = 0;
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_144, Local_145, fVar0, false, true, 0))
		{
			if (!iLocal_133)
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					iLocal_133 = 1;
				}
			}
		}
	}
	if (!iLocal_134)
	{
		if (!PED::IS_PED_INJURED(iLocal_60))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 25f, 25f, 5f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (func_42(&uLocal_154, cLocal_85, sLocal_90, 4, 0, 0, 0) || func_62())
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_forward_outro_shopkeeper", 3))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						if (iLocal_45 == 2)
						{
							TASK::TASK_PLAY_ANIM(0, cLocal_333, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0f, false, false, false);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
						iLocal_134 = 1;
					}
				}
			}
		}
	}
}

void func_136(int iParam0, var uParam1)//Position - 0x60AC
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_103);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
				SYSTEM::SETTIMERA(0);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_137()//Position - 0x6164
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_151))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
		{
			fLocal_139 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_60, true));
		}
		func_63(joaat("rc_wallets_recovered"), 1);
		PAD::SET_PAD_SHAKE(0, 200, 250);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			OBJECT::DELETE_OBJECT(&iLocal_62);
		}
		func_140();
		func_139(&uLocal_348);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
		{
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_60, false);
			}
		}
		func_145(0);
		OBJECT::REMOVE_PICKUP(iLocal_151);
		if (!iLocal_54)
		{
			iLocal_46 = 5;
			func_138(2);
		}
		else
		{
			iLocal_46 = 12;
		}
	}
}

void func_138(int iParam0)//Position - 0x61FC
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_12(func_123(iParam0), -1);
					Global_113386.f_24995.f_2++;
					MISC::SET_BIT(&Global_113382, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_12(func_123(iParam0), -1);
					Global_113386.f_24995.f_3++;
					MISC::SET_BIT(&Global_113382, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_12(func_123(iParam0), -1);
					Global_113386.f_24995.f_4++;
					MISC::SET_BIT(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_139(var uParam0)//Position - 0x62D7
{
	*uParam0 = -99;
}

void func_140()//Position - 0x62E5
{
	iLocal_65 = 0;
	if (!HUD::DOES_BLIP_EXIST(iLocal_63))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
		{
			iLocal_63 = func_141(iLocal_60, 0, 0);
		}
	}
}

int func_141(int iParam0, bool bParam1, int iParam2)//Position - 0x630F
{
	iParam2 = iParam2;
	return func_142(iParam0, bParam1, 145);
}

int func_142(int iParam0, bool bParam1, int iParam2)//Position - 0x6325
{
	int iVar0;
	
	iVar0 = func_143(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_143(int iParam0, bool bParam1, bool bParam2)//Position - 0x636F
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_144(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_144(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_144(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_144(bool bParam0, float fParam1, float fParam2)//Position - 0x6413
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_145(bool bParam0)//Position - 0x642A
{
	if (!PED::IS_PED_INJURED(iLocal_60) && bLocal_80 == 4)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0f, false, false, false);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			if (bParam0)
			{
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0f, false, false, false);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::CLEAR_PED_TASKS(iLocal_60);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
	}
}

int func_146()//Position - 0x6510
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_62))
		{
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_62, iLocal_60))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 18f, 18f, 18f, false, true, 0))
					{
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
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

void func_147(int iParam0, var uParam1)//Position - 0x656E
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (MISC::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (HUD::GET_BLIP_COLOUR(iParam0) == 1)
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, true);
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, false);
				HUD::SET_BLIP_COLOUR(iParam0, 1);
			}
			*uParam1 = MISC::GET_GAME_TIMER();
		}
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_148(0))
		{
			func_138(1);
		}
	}
}

var func_148(int iParam0)//Position - 0x65CC
{
	return BitTest(Global_113382, iParam0);
}

void func_149()//Position - 0x65DB
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 8f, 8f, 18f, false, true, 0) || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_60))
		{
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_150()//Position - 0x661C
{
	if (HUD::DOES_BLIP_EXIST(iLocal_64))
	{
		HUD::REMOVE_BLIP(&iLocal_64);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_62))
		{
			ENTITY::DETACH_ENTITY(iLocal_62, true, true);
			OBJECT::DELETE_OBJECT(&iLocal_62);
			func_40();
		}
	}
	else
	{
		func_40();
	}
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (func_42(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || func_62())
		{
			if (iLocal_45 == 2)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 128, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 2, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 1, false);
				TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
			}
			PED::SET_PED_KEEP_TASK(iLocal_61, true);
		}
	}
}

int func_151()//Position - 0x66BB
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), true))
		{
			if (bLocal_123)
			{
				return 1;
			}
		}
	}
	else if (bLocal_123)
	{
		return 1;
	}
	return 0;
}

void func_152()//Position - 0x66F2
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		TASK::CLEAR_PED_TASKS(iLocal_60);
		TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		SYSTEM::WAIT(0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
	}
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
		TASK::TASK_CLEAR_LOOK_AT(0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		PED::SET_PED_KEEP_TASK(iLocal_61, true);
		SYSTEM::WAIT(0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
	}
}

int func_153()//Position - 0x678C
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_60))
		{
			return 1;
		}
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x67AC
{
	return func_155(iParam0);
}

int func_155(int iParam0)//Position - 0x67BA
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_144(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

int func_156()//Position - 0x67F2
{
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 18f, 18f, 18f, false, true, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), true))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_119 = 1;
							return 1;
						}
					}
				}
				if (func_157())
				{
					SYSTEM::SETTIMERB(0);
					iLocal_119 = 2;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_61))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), true))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
						{
							if (!PED::IS_PED_INJURED(iLocal_60))
							{
								TASK::CLEAR_PED_TASKS(iLocal_60);
								PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_60, false);
							}
						}
						SYSTEM::SETTIMERB(0);
						iLocal_119 = 2;
						return 1;
					}
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), true))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_119 = 2;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
					{
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							TASK::CLEAR_PED_TASKS(iLocal_60);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_60, false);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						TASK::CLEAR_PED_TASKS(iLocal_61);
						TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_61, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
					}
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 5.3f, 5.3f, 6f, false, true, 0))
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
							{
								SYSTEM::SETTIMERB(0);
								iLocal_119 = 3;
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

int func_157()//Position - 0x6996
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (PED::CAN_PED_SEE_HATED_PED(iLocal_61, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 20f, 20f, 20f, false, true, 0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_61) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_61))
				{
					return 1;
				}
			}
		}
		if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_61))
		{
			return 1;
		}
	}
	return 0;
}

void func_158()//Position - 0x6A20
{
	if (iLocal_56)
	{
		if (!iLocal_57)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				if (WEAPON::IS_PED_ARMED(iLocal_61, 4))
				{
					if ((func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0) || func_62()) || func_62())
					{
						iLocal_57 = 1;
					}
				}
				else if ((func_42(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || func_62()) || func_62())
				{
					iLocal_57 = 1;
				}
			}
		}
	}
	else if (func_157())
	{
		if ((func_42(&uLocal_154, cLocal_85, sLocal_98, 4, 0, 0, 0) || func_62()) || func_62())
		{
			if (WEAPON::IS_PED_ARMED(iLocal_61, 4))
			{
				TASK::TASK_COMBAT_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			else
			{
				func_150();
			}
			iLocal_56 = 1;
		}
	}
}

int func_159()//Position - 0x6AEA
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 20f, 20f, 20f, false, true, 0))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
				{
					return 1;
				}
			}
		}
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_60, joaat("weapon_stungun"), 0))
				{
					return 1;
				}
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 3f, true))
	{
		return 1;
	}
	return 0;
}

void func_160()//Position - 0x6BA6
{
	if (iLocal_45 == 2)
	{
	}
	if (!func_165())
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_60))
				{
					func_161(iLocal_60, "GENERIC_CURSE_MED", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}
	if (!bLocal_58)
	{
		if (func_38(PLAYER::PLAYER_PED_ID(), iLocal_61, 1) > 200f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_61) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_61))
			{
				iLocal_46 = 8;
			}
		}
	}
}

void func_161(int iParam0, char* sParam1, int iParam2)//Position - 0x6C1F
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_162(iParam2), 1);
}

int func_162(int iParam0)//Position - 0x6C36
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

void func_163()//Position - 0x6E2B
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (!bLocal_51)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0f, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0f, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else
			{
				bLocal_51 = true;
			}
		}
		if (bLocal_51)
		{
			if (!iLocal_112)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 7f, 7f, 7f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, 242628503) == 1)
					{
						if (TASK::GET_SEQUENCE_PROGRESS(iLocal_60) == iLocal_138)
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
							func_42(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
							bLocal_129 = true;
							iLocal_112 = 1;
						}
					}
					else
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_60, true);
						func_42(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
						SYSTEM::SETTIMERA(0);
						bLocal_129 = true;
						iLocal_112 = 1;
					}
				}
			}
		}
	}
}

int func_164()//Position - 0x708C
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 12f, 12f, 5f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_165()//Position - 0x70BE
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_166()//Position - 0x70E0
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (!bLocal_110)
		{
			iLocal_114 = MISC::GET_GAME_TIMER();
			bLocal_110 = true;
		}
		if (bLocal_110)
		{
			iLocal_115 = MISC::GET_GAME_TIMER();
			if (!iLocal_52)
			{
				if ((iLocal_115 - iLocal_114) > 500)
				{
					if (!func_165())
					{
						if (func_42(&uLocal_154, cLocal_85, sLocal_87, 4, 0, 0, 0) || func_62())
						{
							if (iLocal_45 == 2)
							{
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
									if (!PED::IS_PED_INJURED(iLocal_61))
									{
									}
								}
							}
							if (iLocal_45 == 1)
							{
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
								}
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_63))
							{
								HUD::REMOVE_BLIP(&iLocal_63);
							}
							iLocal_52 = 1;
						}
					}
				}
			}
		}
	}
}

void func_167()//Position - 0x717C
{
	float fVar0;
	
	if (!bLocal_53)
	{
		if (bLocal_80 == 1)
		{
			fVar0 = 1f;
		}
		if (bLocal_80 == 2)
		{
			fVar0 = 4f;
		}
		if (bLocal_80 != 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(iLocal_61))
			{
				if (!func_194())
				{
					if (func_181())
					{
						func_278();
					}
				}
				if (func_180())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_66))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
						{
							iLocal_66 = func_141(iLocal_61, 1, 0);
						}
						func_172(1);
					}
				}
				if (func_171())
				{
					func_170();
					if (bLocal_80 == 3)
					{
						if (!iLocal_55)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_61, 16000, 0, 2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_79, 1f, 20000, fVar0, 4, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							iLocal_55 = 1;
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_60, -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0f, false, false, false);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_79, iLocal_60, 1f, false, 1.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_60, -1, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
						SYSTEM::SETTIMERA(0);
						bLocal_53 = true;
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					}
					else
					{
						if (bLocal_80 == 1)
						{
							sLocal_93 = sLocal_93;
						}
						func_169();
						bLocal_53 = true;
						bLocal_123 = true;
						SYSTEM::SETTIMERA(0);
					}
				}
			}
		}
	}
	if (bLocal_53)
	{
		if (!iLocal_111)
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 60f, 60f, 50f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_60, iLocal_61, 0);
					}
					iLocal_111 = 1;
				}
				else
				{
					iLocal_111 = 1;
				}
			}
		}
		if (iLocal_111 && !bLocal_109)
		{
			if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(iLocal_61))
			{
				if (func_42(&uLocal_154, cLocal_85, sLocal_86, 4, 0, 0, 0) || func_62())
				{
					TASK::CLEAR_PED_TASKS(iLocal_60);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
					TASK::TASK_PLAY_ANIM(0, cLocal_319, "handsup_standing_enter", 8f, -4f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, cLocal_319, "handsup_standing_base", 8f, -4f, 7000, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, cLocal_319, "handsup_standing_exit", 8f, -4f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
					func_170();
					iLocal_151 = OBJECT::CREATE_PICKUP(joaat("pickup_money_purse"), OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_60, 0f, 2.5f, 0f), 1.2f, 1.5f), iLocal_120, iLocal_152, true, iLocal_77);
					bLocal_109 = true;
				}
			}
		}
		if (bLocal_109)
		{
			if (PED::IS_PED_INJURED(iLocal_61))
			{
				func_168();
			}
			else
			{
				switch (iLocal_623)
				{
					case 0:
						Local_626 = { OBJECT::GET_PICKUP_COORDS(iLocal_151) - Vector(0f, 0f, 0.75f) };
						if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
						{
							TASK::CLEAR_PED_TASKS(iLocal_61);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_626, iLocal_60, 2f, false, 0.1f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							iLocal_624 = MISC::GET_GAME_TIMER();
						}
						iLocal_623 = 1;
						break;
					
					case 1:
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, 242628503) == 7)
						{
							Local_626 = { OBJECT::GET_PICKUP_COORDS(iLocal_151) - Vector(0f, 0f, 0.75f) };
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), Local_626, true) > 1f)
								{
									iLocal_625 = 1;
									iLocal_623 = 4;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_61);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
									TASK::TASK_PLAY_ANIM(0, cLocal_320, "pickup_low", 8f, -4f, -1, 8224, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
									iLocal_623 = 2;
								}
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_624) > 15000)
						{
							iLocal_625 = 1;
							iLocal_623 = 4;
						}
						break;
					
					case 2:
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_320, "pickup_low") > 0.5f)
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
							{
								OBJECT::REMOVE_PICKUP(iLocal_151);
								iLocal_623 = 3;
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						break;
					
					case 3:
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_320, "pickup_low", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_320, "pickup_low") > 0.58f) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_320, "pickup_low", 3))
						{
							iLocal_623 = 4;
						}
						break;
					
					case 4:
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, true, 1);
						TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 50f, -1, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_61, false, false);
						bLocal_123 = true;
						break;
					}
				}
			}
	}
}

void func_168()//Position - 0x7612
{
	if (HUD::DOES_BLIP_EXIST(iLocal_63))
	{
		HUD::REMOVE_BLIP(&iLocal_63);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
		{
			iLocal_65 = func_154(iLocal_151);
		}
	}
	iLocal_46 = 4;
}

void func_169()//Position - 0x7647
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (PED::IS_PED_FACING_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 90f))
	{
		TASK::TASK_PLAY_ANIM(iLocal_61, cLocal_319, sLocal_327, 1000f, -1000f, -1, 8, 0f, false, false, false);
		if (iLocal_45 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, sLocal_328, 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else if (bLocal_80 == 4)
		{
			iLocal_335 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, false, 4);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, sLocal_328, 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
	}
	else
	{
		TASK::TASK_PLAY_ANIM(iLocal_61, cLocal_319, sLocal_329, 1000f, -1000f, -1, 8, 0f, false, false, false);
		if (iLocal_45 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, sLocal_330, 8f, -8f, -1, 8, 0.1f, false, false, false);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, -94.8543f, -1582.686f, 30.2862f, 3000);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else if (bLocal_80 == 4)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, sLocal_330, 8f, -4f, -1, 8, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
	}
}

void func_170()//Position - 0x7AB5
{
	if (HUD::DOES_BLIP_EXIST(iLocal_66))
	{
		HUD::REMOVE_BLIP(&iLocal_66);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
		{
			iLocal_64 = func_141(iLocal_61, 1, 0);
		}
	}
}

int func_171()//Position - 0x7AEB
{
	int iVar0;
	
	iVar0 = 0;
	if (bLocal_80 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, false, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_80 == 2)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_61, true), true) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_80 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, false, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_172(int iParam0)//Position - 0x7BC5
{
	if (func_174())
	{
		Global_113376 = 1;
		Global_113373 = MISC::GET_GAME_TIMER();
		if (func_173(Global_113375))
		{
			func_138(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_173(Global_113375))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

int func_173(int iParam0)//Position - 0x7C18
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_174()//Position - 0x7C47
{
	switch (func_175(&Global_32019, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_175(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x7C7D
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_179(0))
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *uParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_177(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_176(uParam0, iParam4);
		}
	}
	return 2;
}

void func_176(var uParam0, int iParam1)//Position - 0x7DB4
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_177(int iParam0)//Position - 0x7E03
{
	return func_178(iParam0, Global_43052);
}

int func_178(int iParam0, int iParam1)//Position - 0x7E14
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

int func_179(int iParam0)//Position - 0x7FF5
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_177(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_180()//Position - 0x8018
{
	int iVar0;
	
	iVar0 = 0;
	if (bLocal_80 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, false, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_80 == 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, false, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_80 == 3)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_181()//Position - 0x80CE
{
	if (!func_177(5))
	{
		return 1;
	}
	if (func_190())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_189())
		{
			return 0;
		}
	}
	if (func_182(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_182(float fParam0, bool bParam1)//Position - 0x8130
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_127(func_125()))
		{
			iVar5 = func_188();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_183(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_183(int iParam0, var uParam1)//Position - 0x81E1
{
	switch (iParam0)
	{
		case 0:
			func_184(uParam1, "Abigail1", func_186(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 1:
			func_184(uParam1, "Abigail2", func_186(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 2:
			func_184(uParam1, "Barry1", func_186(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 3:
			func_184(uParam1, "Barry2", func_186(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 4:
			func_184(uParam1, "Barry3", func_186(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 5:
			func_184(uParam1, "Barry3A", func_186(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 6:
			func_184(uParam1, "Barry3C", func_186(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 7:
			func_184(uParam1, "Barry4", func_186(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_185(iParam0), 0, 0);
			break;
		
		case 8:
			func_184(uParam1, "Dreyfuss1", func_186(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 9:
			func_184(uParam1, "Epsilon1", func_186(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 10:
			func_184(uParam1, "Epsilon2", func_186(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 11:
			func_184(uParam1, "Epsilon3", func_186(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 12:
			func_184(uParam1, "Epsilon4", func_186(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 13:
			func_184(uParam1, "Epsilon5", func_186(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 14:
			func_184(uParam1, "Epsilon6", func_186(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 15:
			func_184(uParam1, "Epsilon7", func_186(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 16:
			func_184(uParam1, "Epsilon8", func_186(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 17:
			func_184(uParam1, "Extreme1", func_186(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 18:
			func_184(uParam1, "Extreme2", func_186(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 19:
			func_184(uParam1, "Extreme3", func_186(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 20:
			func_184(uParam1, "Extreme4", func_186(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 21:
			func_184(uParam1, "Fanatic1", func_186(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_185(iParam0), 1, 0);
			break;
		
		case 22:
			func_184(uParam1, "Fanatic2", func_186(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_185(iParam0), 1, 0);
			break;
		
		case 23:
			func_184(uParam1, "Fanatic3", func_186(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_185(iParam0), 0, 1);
			break;
		
		case 24:
			func_184(uParam1, "Hao1", func_186(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_185(iParam0), 0, 1);
			break;
		
		case 25:
			func_184(uParam1, "Hunting1", func_186(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 26:
			func_184(uParam1, "Hunting2", func_186(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 27:
			func_184(uParam1, "Josh1", func_186(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 28:
			func_184(uParam1, "Josh2", func_186(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 29:
			func_184(uParam1, "Josh3", func_186(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 30:
			func_184(uParam1, "Josh4", func_186(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 31:
			func_184(uParam1, "Maude1", func_186(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 32:
			func_184(uParam1, "Minute1", func_186(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 33:
			func_184(uParam1, "Minute2", func_186(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 34:
			func_184(uParam1, "Minute3", func_186(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 35:
			func_184(uParam1, "MrsPhilips1", func_186(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 36:
			func_184(uParam1, "MrsPhilips2", func_186(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 37:
			func_184(uParam1, "Nigel1", func_186(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 38:
			func_184(uParam1, "Nigel1A", func_186(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 39:
			func_184(uParam1, "Nigel1B", func_186(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_185(iParam0), 1, 1);
			break;
		
		case 40:
			func_184(uParam1, "Nigel1C", func_186(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_185(iParam0), 1, 1);
			break;
		
		case 41:
			func_184(uParam1, "Nigel1D", func_186(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_185(iParam0), 1, 1);
			break;
		
		case 42:
			func_184(uParam1, "Nigel2", func_186(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 43:
			func_184(uParam1, "Nigel3", func_186(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 44:
			func_184(uParam1, "Omega1", func_186(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 45:
			func_184(uParam1, "Omega2", func_186(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 46:
			func_184(uParam1, "Paparazzo1", func_186(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 47:
			func_184(uParam1, "Paparazzo2", func_186(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 48:
			func_184(uParam1, "Paparazzo3", func_186(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 49:
			func_184(uParam1, "Paparazzo3A", func_186(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 50:
			func_184(uParam1, "Paparazzo3B", func_186(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 51:
			func_184(uParam1, "Paparazzo4", func_186(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 52:
			func_184(uParam1, "Rampage1", func_186(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 54:
			func_184(uParam1, "Rampage3", func_186(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 55:
			func_184(uParam1, "Rampage4", func_186(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 56:
			func_184(uParam1, "Rampage5", func_186(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 53:
			func_184(uParam1, "Rampage2", func_186(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 57:
			func_184(uParam1, "TheLastOne", func_186(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 58:
			func_184(uParam1, "Tonya1", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 59:
			func_184(uParam1, "Tonya2", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 60:
			func_184(uParam1, "Tonya3", func_186(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 61:
			func_184(uParam1, "Tonya4", func_186(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 62:
			func_184(uParam1, "Tonya5", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_184(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x9356
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

int func_185(int iParam0)//Position - 0x93E7
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

struct<2> func_186(int iParam0)//Position - 0x972D
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_187(iParam0) };
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

struct<2> func_187(int iParam0)//Position - 0x9763
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

int func_188()//Position - 0x9BAE
{
	func_126();
	switch (Global_113386.f_2363.f_539.f_4321)
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

int func_189()//Position - 0x9BF4
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_190()//Position - 0x9C11
{
	if (func_193() && !func_189())
	{
		return 1;
	}
	if (func_192() && func_191())
	{
		return 1;
	}
	return 0;
}

bool func_191()//Position - 0x9C43
{
	return Global_113104 > 0;
}

int func_192()//Position - 0x9C51
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_193()//Position - 0x9C66
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_194()//Position - 0x9C89
{
	if ((Global_113375 == func_195() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

int func_195()//Position - 0x9CB4
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_196(Var0);
	return uVar1;
}

int func_196(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x9CD1
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_197()//Position - 0x9EAB
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
	}
	func_296(25, bLocal_80);
	func_201();
	func_198();
	func_278();
}

void func_198()//Position - 0x9EDD
{
	func_199();
}

int func_199()//Position - 0x9EEA
{
	if (func_200(0))
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

int func_200(bool bParam0)//Position - 0x9F35
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_201()//Position - 0x9F5D
{
	return 1;
}

void func_202(int iParam0)//Position - 0x9F66
{
	Global_113372 = iParam0;
}

void func_203()//Position - 0x9F74
{
	switch (iLocal_116)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				TASK::TASK_PLAY_ANIM(iLocal_61, cLocal_319, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0f, false, false, false);
			}
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				TASK::TASK_PLAY_ANIM(iLocal_60, cLocal_321, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0f, false, false, false);
			}
			iLocal_116++;
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					if (func_180())
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_66))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
							{
								iLocal_66 = func_141(iLocal_61, 1, 0);
							}
							if (!func_194())
							{
								func_172(1);
							}
						}
					}
					if (func_171())
					{
						func_42(&uLocal_154, cLocal_85, "REMG2_ARG", 4, 0, 0, 0);
						func_170();
						iLocal_147 = MISC::GET_GAME_TIMER();
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						iLocal_150 = 1;
						iLocal_116++;
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_60))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_60, Local_121, 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_60, true);
					SYSTEM::WAIT(0);
					func_209();
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_208())
				{
					iLocal_116 = 4;
				}
				if (func_157())
				{
					iLocal_116 = 9;
				}
				if (func_207())
				{
					iLocal_116 = 6;
				}
				if (func_206())
				{
					iLocal_116 = 4;
				}
			}
			if (!func_194())
			{
				if (func_181())
				{
					func_278();
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 6f, 6f, 15f, false, true, 0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_61, PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 3f, 3f, 15f, false, true, 0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_61, 65f))
							{
								iLocal_149 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_116++;
							}
							else
							{
								iLocal_149 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_116++;
							}
						}
					}
				}
			}
			if (func_208() || func_206())
			{
				iLocal_116 = 4;
			}
			if (func_157())
			{
				iLocal_116 = 9;
			}
			if (func_207())
			{
				iLocal_116 = 6;
			}
			break;
		
		case 3:
			if ((iLocal_148 - iLocal_149) > 12500)
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					iLocal_116 = 4;
				}
			}
			if ((iLocal_148 - iLocal_149) > 5500)
			{
				if (!bLocal_113)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							func_42(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							TASK::TASK_COMBAT_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
							bLocal_113 = true;
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
							{
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
									TASK::TASK_SMART_FLEE_COORD(iLocal_60, Local_121, 250f, -1, false, false);
									PED::SET_PED_KEEP_TASK(iLocal_60, true);
									SYSTEM::WAIT(0);
								}
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_63))
								{
									HUD::REMOVE_BLIP(&iLocal_63);
								}
							}
						}
					}
				}
			}
			if (bLocal_113)
			{
				iLocal_116 = 10;
			}
			else
			{
				if (func_208())
				{
					iLocal_116 = 4;
				}
				if (func_157())
				{
					iLocal_116 = 9;
				}
				if (func_207())
				{
					iLocal_116 = 6;
				}
				if (func_205())
				{
					iLocal_116 = 9;
				}
				if (func_206())
				{
					iLocal_116 = 4;
				}
			}
			break;
		
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (PED::IS_PED_INJURED(iLocal_61) || func_38(PLAYER::PLAYER_PED_ID(), iLocal_61, 1) > 100f)
				{
					func_204();
					func_209();
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), true))
					{
						TASK::CLEAR_PED_TASKS(iLocal_60);
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
							TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_61, false), 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
						}
						iLocal_122 = 1;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_60);
						TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_60, true);
						if (HUD::DOES_BLIP_EXIST(iLocal_63))
						{
							HUD::REMOVE_BLIP(&iLocal_63);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					TASK::CLEAR_PED_TASKS(iLocal_61);
					TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_61, true);
					if (HUD::DOES_BLIP_EXIST(iLocal_64))
					{
						HUD::REMOVE_BLIP(&iLocal_64);
					}
				}
			}
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				func_108();
			}
			SYSTEM::WAIT(0);
			if (!iLocal_122)
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					func_42(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_278();
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERB() > 250)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
				{
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_61, 17, true);
						PED::SET_PED_RESET_FLAG(iLocal_61, 156, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
						PED::SET_PED_KEEP_TASK(iLocal_61, true);
						SYSTEM::WAIT(0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
						func_42(&uLocal_154, cLocal_85, sLocal_95, 4, 0, 0, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
				{
					if (!PED::IS_PED_INJURED(iLocal_60))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), true))
						{
							TASK::CLEAR_PED_TASKS(iLocal_60);
							iLocal_122 = 1;
						}
					}
				}
				if (!iLocal_122)
				{
					SYSTEM::WAIT(0);
					func_278();
				}
			}
			break;
		
		case 6:
			if (SYSTEM::TIMERA() > 500)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
					{
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							TASK::CLEAR_PED_TASKS(iLocal_60);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							func_42(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							TASK::CLEAR_PED_TASKS(iLocal_61);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							PED::SET_PED_KEEP_TASK(iLocal_61, true);
						}
					}
				}
				SYSTEM::WAIT(0);
				func_278();
			}
			break;
		
		case 7:
			SYSTEM::SETTIMERA(0);
			iLocal_116++;
			break;
		
		case 8:
			if (SYSTEM::TIMERA() > 200)
			{
				func_209();
			}
			break;
		
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					PED::SET_PED_RESET_FLAG(iLocal_61, 156, true);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_61, 50f, 0);
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						func_108();
					}
					SYSTEM::WAIT(0);
					func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					TASK::CLEAR_PED_TASKS(iLocal_60);
					TASK::TASK_COWER(iLocal_60, 2000);
					iLocal_122 = 1;
				}
			}
			break;
	}
	if (iLocal_116 != 8 && iLocal_122)
	{
		iLocal_116 = 7;
	}
	iLocal_148 = MISC::GET_GAME_TIMER();
	if (iLocal_150 && !bLocal_113)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_61) && ENTITY::DOES_ENTITY_EXIST(iLocal_61))
		{
			if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(iLocal_61))
			{
				if ((((iLocal_148 - iLocal_147) > 12000 && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 3f, 3f, 35f, false, true, 0)) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_61)) && !func_165())
				{
					if ((func_42(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0) || func_62()) || func_62())
					{
						PED::SET_PED_RESET_FLAG(iLocal_61, 156, true);
						PED::SET_PED_SHOOTS_AT_COORD(iLocal_61, PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), false);
						TASK::CLEAR_PED_TASKS(iLocal_60);
						ENTITY::SET_ENTITY_HEALTH(iLocal_60, 99, 0);
						TASK::TASK_SMART_FLEE_COORD(iLocal_61, Local_121, 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_61, true);
						func_278();
					}
				}
			}
		}
	}
}

void func_204()//Position - 0xA767
{
	Global_20471 = 0;
	func_56();
}

int func_205()//Position - 0xA777
{
	if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(iLocal_61))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 2f, 2f, 2f, false, true, 0))
		{
		}
	}
	return 0;
}

int func_206()//Position - 0xA7CA
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 20f, 20f, 20f, false, true, 0))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
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
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
	{
		if (func_157())
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_207()//Position - 0xA858
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 5.3f, 5.3f, 6f, false, true, 0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						if (!PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_61))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
							{
								SYSTEM::SETTIMERB(0);
								return 1;
							}
						}
					}
					else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
					{
						SYSTEM::SETTIMERB(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_208()//Position - 0xA916
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 5f, true))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_209()//Position - 0xA94E
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (!PED::IS_PED_RAGDOLL(iLocal_60))
		{
			if (func_194())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, 242628503) == 7 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, 474215631) == 7)
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						func_108();
					}
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						if (!PED::IS_PED_FLEEING(iLocal_60))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_60, iLocal_61, 150f, -1, false, false);
						}
					}
					else if (iLocal_45 == 3)
					{
						if (!PED::IS_PED_FLEEING(iLocal_60))
						{
							TASK::TASK_SMART_FLEE_COORD(iLocal_60, Local_104, 150f, -1, false, false);
						}
					}
					PED::SET_PED_KEEP_TASK(iLocal_60, true);
					SYSTEM::WAIT(0);
					func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
					SYSTEM::WAIT(0);
					if (iLocal_152 > 0)
					{
						PED::SET_PED_MONEY(PLAYER::PLAYER_PED_ID(), (iLocal_152 / 100) * 90);
						func_64(func_125(), 1, iLocal_152);
						SYSTEM::WAIT(0);
						func_210(func_125(), 1, (iLocal_152 / 10), 0, 1);
					}
					func_202(3);
					func_197();
				}
			}
			else
			{
				func_278();
			}
		}
		else
		{
			func_278();
		}
	}
	else
	{
		func_278();
	}
}

void func_210(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xAA5C
{
	int iVar0;
	int iVar1;
	
	if (func_96(iParam0) == 3)
	{
		return;
	}
	if (func_96(iParam0) == 4)
	{
		return;
	}
	func_65(func_96(iParam0), 1, iParam1, iParam2, 0);
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

int func_211()//Position - 0xAB2E
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_189())
		{
			return 0;
		}
	}
	if (func_190())
	{
		return 1;
	}
	if (func_182(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_212()//Position - 0xABB4
{
	func_223();
	func_222(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_222(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_222(&uLocal_349, cLocal_333);
	func_222(&uLocal_349, cLocal_321);
	func_220(&uLocal_349, iLocal_75);
	func_220(&uLocal_349, iLocal_76);
	func_220(&uLocal_349, iLocal_77);
	func_222(&uLocal_349, cLocal_320);
	func_222(&uLocal_349, cLocal_319);
	func_222(&uLocal_349, cLocal_334);
	func_222(&uLocal_349, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_216(&uLocal_349))
	{
		func_213();
		return 1;
	}
	return 0;
}

void func_213()//Position - 0xAC41
{
	iLocal_60 = PED::CREATE_PED(26, iLocal_75, Local_67, fLocal_69, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_60, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_60, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_60, 8, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_60, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_60, 512, true);
	AUDIO::STOP_PED_SPEAKING(iLocal_60, true);
	PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_60);
	PED::SET_PED_MONEY(iLocal_60, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_60, true);
	if (iLocal_75 == joaat("a_m_y_genstreet_01"))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 3, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 4, 0, 2, 0);
	}
	if (iLocal_75 == joaat("a_m_y_business_02"))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 8, 0, 0, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("theAssailant", &iLocal_78);
	iLocal_61 = PED::CREATE_PED(26, iLocal_76, Local_68, fLocal_72, true, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, true, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_61, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_61, true, 0f);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_61, joaat("weapon_pistol"), -1, true, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_61, 13, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_61, 17, false);
	PED::SET_PED_DIES_WHEN_INJURED(iLocal_61, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_61, 42, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_61, 137, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 2, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_61, iLocal_78);
	AUDIO::STOP_PED_SPEAKING(iLocal_61, true);
	if (!MISC::IS_STRING_NULL(sLocal_102))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_60, sLocal_102);
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_61, sLocal_101);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVMALE"), iLocal_78);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVFEMALE"), iLocal_78);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_78, joaat("CIVMALE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_78, joaat("CIVFEMALE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_78, joaat("player"));
	switch (func_125())
	{
		case 0:
			func_215(&uLocal_154, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_215(&uLocal_154, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_215(&uLocal_154, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	func_215(&uLocal_154, 1, iLocal_61, sLocal_100, 0, 1);
	func_215(&uLocal_154, 2, iLocal_60, sLocal_99, 0, 1);
	if (iLocal_45 == 2)
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 1, false);
	}
	if (bLocal_80 == 1 || bLocal_80 == 4)
	{
		func_214();
	}
	if (bLocal_80 == 3)
	{
		Local_105 = { -325.4189f, -828.8596f, 31.1f };
		Local_106 = { 0f, 0f, 180f };
		iLocal_107 = PED::CREATE_SYNCHRONIZED_SCENE(Local_105, Local_106, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_61, iLocal_107, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1000f, 0);
	}
	if (bLocal_80 == 4)
	{
		PATHFIND::DISABLE_NAVMESH_IN_AREA(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), true);
	}
}

void func_214()//Position - 0xAF02
{
	struct<3> Var0;
	
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_61, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_319, sLocal_325, Local_331, Local_332, 0f, 2), false, false, true);
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_319, sLocal_325, Local_331, Local_332, 0f, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	ENTITY::SET_ENTITY_HEADING(iLocal_61, Var0.f_2);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_60, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_319, sLocal_326, Local_331, Local_332, 0f, 2), false, false, true);
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_319, sLocal_326, Local_331, Local_332, 0f, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	ENTITY::SET_ENTITY_HEADING(iLocal_60, Var0.f_2);
	TASK::TASK_PLAY_ANIM(iLocal_61, cLocal_319, sLocal_325, 1000f, -1000f, -1, 9, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(iLocal_60, cLocal_319, sLocal_326, 1000f, -1000f, -1, 9, 0f, false, false, false);
}

void func_215(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xAFF8
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

int func_216(var uParam0)//Position - 0xB093
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_217(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_217(var uParam0)//Position - 0xB0F1
{
	return func_218(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_218(char* sParam0, char* sParam1, int iParam2)//Position - 0xB108
{
	if (BitTest(sParam0, 30))
	{
		if (BitTest(sParam0, 29))
		{
			switch (func_219(sParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(sParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_219(var uParam0)//Position - 0xB1F3
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_220(var uParam0, int iParam1)//Position - 0xB21C
{
	func_221(uParam0, 0, iParam1, "NULL", 0);
}

void func_221(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xB230
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], bParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_222(var uParam0, char* sParam1)//Position - 0xB311
{
	func_221(uParam0, 1, -1, sParam1, 0);
}

void func_223()//Position - 0xB324
{
	func_276();
	MISC::SET_BIT(&iLocal_120, 3);
	MISC::SET_BIT(&iLocal_120, 4);
	MISC::SET_BIT(&iLocal_120, 1);
	if (bLocal_80 == 1)
	{
		cLocal_319 = "RANDOM@MUGGING1";
		sLocal_325 = "STRUGGLE_Loop_A_Thief";
		sLocal_326 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_327 = "FLEE_BACKWARD_Thief";
		sLocal_330 = "FLEE_FORWARD_Shopkeeper";
		sLocal_329 = "FLEE_FORWARD_Thief";
		func_225();
		iLocal_152 = 200;
		iLocal_46 = 2;
		Local_121 = { -132.2607f, -1628.336f, 31.2107f };
		iLocal_75 = joaat("a_m_y_business_02");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		Local_67 = { -138.814f, -1635.975f, 31.357f };
		fLocal_69 = 318.519f;
		Local_68 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_72 = 98f;
		Local_331 = { Local_67 };
		Local_332 = { 0f, 0f, fLocal_69 };
		Local_140 = { -103.8951f, -1593.239f, 30.49198f };
		Local_141 = { -89.29615f, -1575.444f, 32.30938f };
		Local_142 = { -152.0367f, -1654.379f, 31.73599f };
		Local_143 = { -169.8183f, -1669.556f, 33.94173f };
		Local_144 = { -152.0367f, -1654.379f, 31.73599f };
		Local_145 = { -103.8951f, -1593.239f, 30.49198f };
		fLocal_73 = 340.0645f;
		Local_74 = { -151.0793f, -1650.322f, 31.6504f };
		Local_79 = { -133.6872f, -1630.245f, 31.2527f };
		iLocal_77 = joaat("prop_ld_wallet_pickup");
		cLocal_85 = "REMG1AU";
		sLocal_86 = "REMG1_VIC";
		sLocal_87 = "REMG1_SHT";
		sLocal_88 = "REMG1_ASK";
		sLocal_89 = "REMG1_DRP";
		sLocal_90 = "REMG1_OHY";
		sLocal_91 = "REMG1_THK";
		sLocal_92 = "REMG1_GIV";
		sLocal_93 = "REMG1_MUGA";
		sLocal_94 = "REMG1_WHO";
		switch (func_125())
		{
			case 0:
				sLocal_97 = "REMG1_HOM";
				sLocal_98 = "REMG1_WAM";
				break;
			
			case 1:
				sLocal_97 = "REMG1_HOF";
				sLocal_98 = "REMG1_WAF";
				break;
			
			case 2:
				sLocal_97 = "REMG1_HOT";
				sLocal_98 = "REMG1_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_102 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_99 = "MuggedMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (bLocal_80 == 2)
	{
		cLocal_319 = "random@mugging2";
		cLocal_321 = "random@mugging2";
		iLocal_46 = 1;
		Local_121 = { 287.888f, -284.603f, 52.967f };
		iLocal_75 = joaat("a_f_y_genhot_01");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		Local_67 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_69 = 260.7569f;
		Local_68 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_72 = 45f;
		fLocal_73 = 251f;
		Local_74 = { 297.4484f, -261.2914f, 53.0037f };
		iLocal_77 = joaat("prop_ld_handbag");
		cLocal_85 = "REMG2AU";
		sLocal_86 = "REMG2_VIC";
		sLocal_87 = "REMG2_SHT";
		sLocal_88 = "REMG2_ASK";
		sLocal_89 = "REMG2_DRP";
		sLocal_90 = "REMG2_OHY";
		sLocal_91 = "REMG2_THK";
		sLocal_92 = "REMG2_GIV";
		sLocal_94 = "REMG2_WHO";
		sLocal_95 = "REMG2_GUN";
		sLocal_96 = "REMG2_FUT";
		switch (func_125())
		{
			case 0:
				sLocal_97 = "REMG2_HOM";
				sLocal_98 = "REMG2_WAM";
				break;
			
			case 1:
				sLocal_97 = "REMG2_HOF";
				sLocal_98 = "REMG2_WAF";
				break;
			
			case 2:
				sLocal_97 = "REMG2_HOT";
				sLocal_98 = "REMG2_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_99 = "MuggedYMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_45 == 1)
	{
		func_224();
		iLocal_152 = 2000;
		iLocal_46 = 2;
		if (bLocal_80 == 3)
		{
			cLocal_319 = "RANDOM@MUGGING3";
			Local_121 = { -317.1964f, -824.0751f, 31.4284f };
			iLocal_75 = joaat("a_f_y_hipster_01");
			iLocal_76 = joaat("a_m_o_tramp_01");
			Local_67 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_69 = 80.7161f;
			Local_68 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_72 = 336.5502f;
			fLocal_73 = 81.8694f;
			Local_74 = { -322.3941f, -835.7213f, 30.6001f };
			Local_79 = { -320.9667f, -832.1209f, 30.5979f };
			iLocal_77 = joaat("prop_ld_purse_01");
			cLocal_85 = "REMG3AU";
			sLocal_86 = "REMG3_VIC";
			sLocal_87 = "REMG3_SHT";
			sLocal_88 = "REMG3_ASK";
			sLocal_89 = "REMG3_DRP";
			sLocal_90 = "REMG3_OHY";
			sLocal_91 = "REMG3_THK";
			sLocal_92 = "REMG3_GIV";
			sLocal_93 = "REMG3_MUGB";
			sLocal_94 = "REMG3_WHO";
			sLocal_95 = "REMG3_GUN";
			sLocal_96 = "REMG3_FUT";
			switch (func_125())
			{
				case 0:
					sLocal_97 = "REMG3_HOM";
					sLocal_98 = "REMG3_WAM";
					break;
				
				case 1:
					sLocal_97 = "REMG3_HOF";
					sLocal_98 = "REMG3_WAF";
					break;
				
				case 2:
					sLocal_97 = "REMG3_HOT";
					sLocal_98 = "REMG3_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_99 = "MUGGEDHIPSTER";
			sLocal_100 = "MuggerTramp";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
		if (bLocal_80 == 4)
		{
			func_224();
			cLocal_319 = "RANDOM@MUGGING4";
			sLocal_325 = "STRUGGLE_Loop_B_Thief";
			sLocal_326 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_327 = "FLEE_BACKWARD_Thief";
			sLocal_330 = "FLEE_FORWARD_Shopkeeper";
			sLocal_329 = "FLEE_FORWARD_Thief";
			Local_121 = { 32.8802f, -1016.061f, 28.4527f };
			iLocal_75 = joaat("a_f_m_tourist_01");
			iLocal_76 = joaat("g_m_y_armgoon_02");
			Local_67 = { 32.2169f, -1020.864f, 28.456f };
			fLocal_69 = 159.1445f;
			Local_331 = { Local_67 };
			Local_332 = { 0f, 0f, fLocal_69 };
			Local_68 = { 38.1933f, -1023.579f, 28.4889f };
			fLocal_72 = 60.1372f;
			fLocal_73 = 248f;
			Local_74 = { 42.5323f, -990.353f, 28.248f };
			Local_140 = { 38.15186f, -1001.485f, 28.42276f };
			Local_141 = { 40.13669f, -995.2711f, 30.37197f };
			Local_142 = { 37.21758f, -1040.354f, 28.41506f };
			Local_143 = { 19.91492f, -1036.814f, 30.28045f };
			Local_144 = { 28.4511f, -1035.718f, 28.3329f };
			Local_145 = { 38.6536f, -1001.073f, 28.407f };
			Local_79 = { 32.536f, -1020.293f, 28.4576f };
			iLocal_77 = joaat("prop_ld_wallet_pickup");
			cLocal_85 = "REMG4AU";
			sLocal_86 = "REMG4_VIC";
			sLocal_87 = "REMG4_SHT";
			sLocal_88 = "REMG4_ASK";
			sLocal_89 = "REMG4_DRP";
			sLocal_90 = "REMG4_OHY";
			sLocal_91 = "REMG4_THK";
			sLocal_92 = "REMG4_GIV";
			sLocal_93 = "REMG4_MUGB";
			sLocal_94 = "REMG4_WHO";
			sLocal_95 = "REMG4_GUN";
			sLocal_96 = "REMG4_FUT";
			switch (func_125())
			{
				case 0:
					sLocal_97 = "REMG4_HOM";
					sLocal_98 = "REMG4_WAM";
					break;
				
				case 1:
					sLocal_97 = "REMG4_HOF";
					sLocal_98 = "REMG4_WAF";
					break;
				
				case 2:
					sLocal_97 = "REMG4_HOT";
					sLocal_98 = "REMG4_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_99 = "MuggedWoman";
			sLocal_100 = "MuggerGang";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
	}
}

void func_224()//Position - 0xB9B3
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Female";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Female";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Female";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_225()//Position - 0xBA27
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Male";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Male";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Male";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_226(int iParam0, var uParam1)//Position - 0xBA9B
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = MISC::GET_GAME_TIMER();
	}
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = (MISC::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
				{
					HUD::SET_BLIP_ALPHA(iParam0, 255);
				}
			}
			else if (HUD::GET_BLIP_ALPHA(iParam0) != 0)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 255);
			}
		}
	}
}

void func_227(var uParam0)//Position - 0xBB3A
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || BitTest(Global_100441.f_20, 2)) || BitTest(Global_100441.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_228(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_228(int* iParam0)//Position - 0xBBBC
{
	func_229(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_229(int* iParam0, char* sParam1, int iParam2)//Position - 0xBBD2
{
	if (BitTest(*iParam0, 30))
	{
		switch (func_219(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, BitTest(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(*iParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_230(int iParam0)//Position - 0xBCA3
{
	if (iParam0 == -1)
	{
		iParam0 = func_195();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_232(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113372 = 0;
	func_231();
}

void func_231()//Position - 0xBCD9
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_232(int iParam0)//Position - 0xBD16
{
	Global_113375 = iParam0;
}

int func_233(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xBD24
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_195();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_273())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_189())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_200(0))
		{
			return 0;
		}
		if (func_190())
		{
			return 0;
		}
		if (func_272())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_127(func_125()))
		{
			if (func_182(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_271(iParam1))
		{
			return 0;
		}
		if (func_127(func_125()))
		{
			if (func_270(func_125()) == 4 || func_270(func_125()) == 5)
			{
				return 0;
			}
		}
		if (func_127(func_125()))
		{
			if (!func_269(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_268(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_267())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_258(4))
		{
			return 0;
		}
		if (!func_177(5))
		{
			return 0;
		}
		if (func_257(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_257(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_271(30) && !func_257(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_127(func_125()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_256(iVar4))
				{
					if (func_234(iVar2))
					{
						if (!func_28(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (func_125() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_234(int iParam0)//Position - 0xC0C1
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_235(iVar0);
}

int func_235(int iParam0)//Position - 0xC0E2
{
	return func_236(iParam0, 1);
}

int func_236(int iParam0, int iParam1)//Position - 0xC0F1
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_256(iParam0))
	{
		return 0;
	}
	func_237(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_237(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xC144
{
	func_238(func_249(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_238(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xC162
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_248(iParam0, iParam1))
	{
		iVar0 = func_247(iParam1);
		iVar1 = func_245(iParam0);
		iVar2 = (func_245(iParam0) - func_245(iParam1));
		iVar3 = (func_247(iParam0) - func_247(iParam1));
		iVar4 = (func_244(iParam0) - func_244(iParam1));
		iVar5 = (func_243(iParam0) - func_243(iParam1));
		iVar6 = (func_242(iParam0) - func_242(iParam1));
		iVar7 = (func_241(iParam0) - func_241(iParam1));
	}
	else
	{
		iVar0 = func_247(iParam0);
		iVar1 = func_245(iParam1);
		iVar2 = (func_245(iParam1) - func_245(iParam0));
		iVar3 = (func_247(iParam1) - func_247(iParam0));
		iVar4 = (func_244(iParam1) - func_244(iParam0));
		iVar5 = (func_243(iParam1) - func_243(iParam0));
		iVar6 = (func_242(iParam1) - func_242(iParam0));
		iVar7 = (func_241(iParam1) - func_241(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_240(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_239(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_239(float fParam0, float fParam1, float fParam2)//Position - 0xC363
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

int func_240(int iParam0, int iParam1)//Position - 0xC3A5
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

int func_241(int iParam0)//Position - 0xC447
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_242(int iParam0)//Position - 0xC45A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_243(int iParam0)//Position - 0xC46D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_244(int iParam0)//Position - 0xC480
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_245(int iParam0)//Position - 0xC492
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_246(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_246(bool bParam0, int iParam1, int iParam2)//Position - 0xC4B4
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_247(int iParam0)//Position - 0xC4CB
{
	return iParam0 & 15;
}

int func_248(int iParam0, int iParam1)//Position - 0xC4D8
{
	int iVar0;
	int iVar1;
	
	if (!func_256(iParam1) || !func_256(iParam0))
	{
		return 1;
	}
	iVar0 = func_245(iParam0);
	iVar1 = func_245(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_247(iParam0);
	iVar1 = func_247(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_242(iParam0);
	iVar1 = func_242(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_241(iParam0);
	iVar1 = func_241(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_249()//Position - 0xC5E4
{
	var uVar0;
	
	func_255(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_254(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_253(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_252(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_251(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_250(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_250(var uParam0, int iParam1)//Position - 0xC62A
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

void func_251(var uParam0, int iParam1)//Position - 0xC6B0
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_252(var uParam0, int iParam1)//Position - 0xC6E3
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_247(*uParam0);
	iVar1 = func_245(*uParam0);
	if (iParam1 < 1 || iParam1 > func_240(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_253(var uParam0, int iParam1)//Position - 0xC734
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_254(var uParam0, int iParam1)//Position - 0xC76E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_255(var uParam0, int iParam1)//Position - 0xC7A9
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_256(int iParam0)//Position - 0xC7E5
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
	iVar0 = func_241(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_242(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_243(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_245(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_247(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_244(iParam0);
	if (iVar5 < 1 || iVar5 > func_240(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_257(int iParam0, bool bParam1)//Position - 0xC8C1
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0)//Position - 0xC8E1
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_125();
				if (!func_127(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_266()) || Global_112433) || Global_31962) || func_265()) || func_55(8, -1)) || func_264()) || func_263()) || func_262()) || func_261()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_266()) || Global_31962) || func_265()) || func_55(8, -1)) || func_262()) || func_264()) || func_263()) || func_261()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_266()) || Global_112433) || Global_31962) || func_265()) || func_55(8, -1)) || func_262()) || func_264()) || func_263()) || func_261()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_266()) || Global_112433) || Global_31962) || func_265()) || func_55(8, -1)) || func_264()) || func_263()) || func_261()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_266() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_55(8, -1)) || func_261()) || func_260()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_55(8, -1) || func_264()) || func_263()) || func_260()) || func_259())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_266()) || Global_31962) || func_265()) || func_55(8, -1)) || func_263()) || func_262()) || func_261()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_266()) || func_263()) || Global_112433) || Global_31962) || func_265()) || Global_44238) || func_55(8, -1)) || func_262()) || func_260()) || func_261()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_266()) || Global_112433) || Global_31962) || func_265()) || func_55(8, -1)) || func_262()) || func_260()) || func_264()) || func_263()) || func_261())
						{
							return 0;
						}
						break;
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
	return 1;
}

var func_259()//Position - 0xCFFE
{
	return Global_100480.f_1;
}

int func_260()//Position - 0xD00C
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_261()//Position - 0xD02F
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_262()//Position - 0xD049
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

bool func_263()//Position - 0xD073
{
	return Global_100493.f_376 > 0;
}

bool func_264()//Position - 0xD084
{
	return Global_100493.f_375 > 0;
}

var func_265()//Position - 0xD095
{
	return Global_1575058;
}

int func_266()//Position - 0xD0A1
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_267()//Position - 0xD0BD
{
	func_52();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_268(int iParam0)//Position - 0xD0E5
{
	return func_248(func_249(), iParam0);
}

int func_269(int iParam0, int iParam1, int iParam2)//Position - 0xD0F7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_125();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_270(int iParam0)//Position - 0xD1DB
{
	if (!func_127(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_271(int iParam0)//Position - 0xD1FF
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_273())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_272()//Position - 0xD257
{
	int iVar0;
	
	if (Global_32110)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_273()//Position - 0xD29B
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

int func_274(int iParam0)//Position - 0xD353
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18574[iParam0 /*6*/], 3);
}

int func_275(int iParam0)//Position - 0xD37E
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18574[iParam0 /*6*/], 0);
}

void func_276()//Position - 0xD3A9
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (SYSTEM::VDIST(Local_104, Local_81) < 20f)
		{
			bLocal_80 = true;
			iLocal_45 = 2;
		}
		if (SYSTEM::VDIST(Local_104, Local_82) < 20f)
		{
			bLocal_80 = 2;
			iLocal_45 = 3;
		}
		if (SYSTEM::VDIST(Local_104, Local_83) < 20f)
		{
			bLocal_80 = 3;
			iLocal_45 = 1;
		}
		if (SYSTEM::VDIST(Local_104, Local_84) < 20f)
		{
			bLocal_80 = 4;
			iLocal_45 = 1;
		}
	}
}

void func_277(var uParam0, int iParam1)//Position - 0xD428
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_278()//Position - 0xD440
{
	if (iLocal_130)
	{
		if (iLocal_48)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_75);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_76);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_77);
		}
		if (!PED::IS_PED_INJURED(iLocal_61))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			}
			PED::SET_PED_KEEP_TASK(iLocal_61, true);
			if (!bLocal_58)
			{
				PED::SET_PED_MONEY(iLocal_61, iLocal_152);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
		{
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_60, true);
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, -1146898486) == 7 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, 242628503) == 7)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
					if (PED::IS_PED_DUCKING(iLocal_60))
					{
						TASK::TASK_TOGGLE_DUCK(false, false);
					}
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
					TASK::TASK_SMART_FLEE_COORD(0, Local_104, 250f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
					PED::SET_PED_KEEP_TASK(iLocal_60, true);
					if (!iLocal_128 && !iLocal_122)
					{
						if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							func_108();
						}
					}
				}
			}
		}
		SYSTEM::WAIT(0);
		if (HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_62);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_65))
		{
			HUD::REMOVE_BLIP(&iLocal_65);
		}
	}
	if (iLocal_335 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_335))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_335);
		}
		iLocal_335 = -1;
	}
	if (func_194())
	{
		PED::SET_CREATE_RANDOM_COPS(true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	func_37(&uLocal_336, 0, 0);
	func_112(0, 1, 1, 0, 0, 0, 0);
	func_284(-1);
	func_279(&uLocal_349, 0);
	if (iLocal_117 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_117);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_279(var uParam0, bool bParam1)//Position - 0xD5E5
{
	int iVar0;
	
	if (!bParam1)
	{
		func_281(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_280(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_280(var uParam0)//Position - 0xD628
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_281(var uParam0)//Position - 0xD641
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_282(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_282(var uParam0)//Position - 0xD678
{
	func_283(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_283(int iParam0, char* sParam1, int iParam2)//Position - 0xD68F
{
	if (BitTest(iParam0, 30))
	{
		switch (func_219(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, BitTest(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_284(int iParam0)//Position - 0xD749
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_195();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_194())
	{
		func_289(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113377 = MISC::GET_GAME_TIMER();
		func_288(30000);
		StringCopy(&cVar0, func_287(Global_113375, 1), 64);
		if (func_286(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113372, (MISC::GET_GAME_TIMER() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113382, 0);
	}
	func_285(&Global_32019);
	Global_113376 = 0;
	func_232(-1);
}

void func_285(var uParam0)//Position - 0xD7FB
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

int func_286(int iParam0)//Position - 0xD838
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_287(int iParam0, bool bParam1)//Position - 0xD8E9
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_288(int iParam0)//Position - 0xDB32
{
	Global_43603 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_289(int iParam0)//Position - 0xDB44
{
	func_290(iParam0, 0, func_295(iParam0));
}

void func_290(int iParam0, int iParam1, int iParam2)//Position - 0xDB59
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_249();
	func_293(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_292(iParam0, &uVar0);
	Var1 = { func_291(&uVar0) };
}

struct<16> func_291(var uParam0)//Position - 0xDB88
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_243(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_242(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_241(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_244(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_247(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_245(*uParam0), 64);
	return Var0;
}

void func_292(int iParam0, var uParam1)//Position - 0xDC57
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_293(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xDC6F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_245(*uParam0);
	iVar1 = func_247(*uParam0);
	iVar2 = func_244(*uParam0);
	iVar3 = func_243(*uParam0);
	iVar4 = func_242(*uParam0);
	iVar5 = func_241(*uParam0);
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
	iVar6 = func_240(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_240(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_294(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_294(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xDDF1
{
	func_255(uParam0, iParam1);
	func_254(uParam0, iParam2);
	func_253(uParam0, iParam3);
	func_251(uParam0, iParam5);
	func_252(uParam0, iParam4);
	func_250(uParam0, iParam6);
}

int func_295(int iParam0)//Position - 0xDE29
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_296(int iParam0, bool bParam1)//Position - 0xDFCC
{
	if (iParam0 == -1)
	{
		iParam0 = func_195();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_286(iParam0))
	{
		func_306(iParam0, bParam1);
		if (!func_305(51))
		{
			func_302("RE_REWARD", 1, 0, 4000, 10000, func_188(), 0, 138, 0);
			func_301(51);
		}
		if (func_173(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_300(iParam0, bParam1) != 322)
		{
			func_297(func_300(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_202(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_202(7);
			}
			else
			{
				func_202(1);
			}
		}
	}
}

void func_297(int iParam0, var uParam1, var uParam2)//Position - 0xE0D0
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
		func_74((891 + iParam0), 1, -1);
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
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
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
		func_298();
	}
}

void func_298()//Position - 0xE1B6
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
		func_93(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_299() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_199();
				}
			}
		}
	}
}

int func_299()//Position - 0xE674
{
	return Global_31959;
}

int func_300(int iParam0, int iParam1)//Position - 0xE67F
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_301(int iParam0)//Position - 0xE9F3
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_302(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xEA35
{
	func_303(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_303(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xEA55
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_304();
	}
}

void func_304()//Position - 0xEC27
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_305(int iParam0)//Position - 0xED3E
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_306(int iParam0, int iParam1)//Position - 0xED7E
{
	MISC::SET_BIT(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

