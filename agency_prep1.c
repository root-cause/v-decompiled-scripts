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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	struct<110> Local_47 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_209 = 3;
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
	var uLocal_306 = 16;
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
	var uLocal_471 = 16;
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
	var uLocal_637 = 3;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 1092616192;
	var uLocal_644 = 1101004800;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 3;
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
	var uLocal_701 = 5;
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
	var uLocal_718 = 5;
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
	var uLocal_778 = 3;
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
	var uLocal_797 = 13;
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
	var uLocal_826 = 4;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 4;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 4;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 4;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 4;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 4;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 4;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 8;
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
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_918 = 0;
	var uLocal_919 = 16;
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
	int iLocal_1084 = 0;
	int iLocal_1085 = 0;
	struct<3> Local_1086 = { 0, 0, 0 } ;
	int iLocal_1089 = 0;
	int iLocal_1090 = 0;
	int iLocal_1091 = 0;
	int iLocal_1092 = 0;
	int iLocal_1093 = 0;
	int iLocal_1094 = 0;
	int iLocal_1095 = 0;
	int iLocal_1096 = 0;
	bool bLocal_1097 = 0;
	int iLocal_1098 = 0;
	int iLocal_1099 = 0;
	int iLocal_1100 = 0;
	struct<3> Local_1101 = { 0, 0, 0 } ;
	struct<3> Local_1104 = { 0, 0, 0 } ;
	struct<2> Local_1107 = { 0, 0 } ;
	var uLocal_1109 = 0;
	struct<2> Local_1110 = { 0, 0 } ;
	var uLocal_1112 = 0;
	int iLocal_1113 = 0;
	char[] cLocal_1114[8] = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	char[] cLocal_1118[8] = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	bool bLocal_1122 = 0;
	int iLocal_1123 = 0;
	char cLocal_1124[48] = "";
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
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
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_46 = joaat("p_amb_phone_01");
	Local_1086 = { 693.11584f, -1012.41815f, 21.72802f };
	Local_1101 = { 692.8695f, -998.7867f, 22.3201f };
	Local_1104 = { 693.3784f, -1025.671f, 21.506f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_112();
		func_110();
		func_108();
	}
	func_100();
	MISC::SET_MISSION_FLAG(true);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_TheAgencyHeistPrep1", 0);
		if (!iLocal_1091)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1086, 200f, 200f, 200f, false, true, 0) && !CAM::IS_SPHERE_VISIBLE(Local_1086, 50f))
			{
				MISC::CLEAR_AREA(Local_1086, 50f, true, false, false, false);
				iLocal_1091 = 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1086, 200f, 200f, 200f, false, true, 0))
		{
			iLocal_1091 = 0;
		}
		if (!iLocal_1096)
		{
			if (Global_98010.f_358 == MISC::GET_HASH_KEY("AHP1_TRUCKCALLED") || Global_97940)
			{
				func_99(543);
				Global_98010.f_358 = 0;
				iLocal_1096 = 1;
			}
		}
		func_98();
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_909[iVar0]) && !PED::IS_PED_INJURED(iLocal_909[iVar0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_907))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_909[iVar0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 2500f)
				{
					PED::SET_PED_KEEP_TASK(iLocal_909[iVar0], true);
					TASK::TASK_SMART_FLEE_PED(iLocal_909[iVar0], PLAYER::PLAYER_PED_ID(), 300f, 20000, true, false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_909[iVar0]));
				}
			}
			iVar0++;
		}
		if (iLocal_1132 < 8 && iLocal_1084 >= 0)
		{
			func_96();
		}
		switch (iLocal_1084)
		{
			case -1:
				iVar1 = 0;
				while (iVar1 < iLocal_909)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_909[iVar1]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
							if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar2, true)) < 30f) && VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("firetruk")))
							{
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_918);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_918, joaat("PLAYER"));
								PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
								PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
							}
						}
					}
					iVar1++;
				}
				if (func_95())
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(15f, 15f, 4);
					AUDIO::TRIGGER_MUSIC_EVENT("AHP1_START");
					iLocal_1084++;
				}
				break;
			
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_907))
				{
					func_95();
					if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false)) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) == joaat("firetruk"))
					{
						iLocal_907 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_907, true, true);
					}
				}
				else
				{
					func_46();
					if (!iLocal_1092 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_907, false))
					{
						func_45(iLocal_907, -1);
						func_44(iLocal_907, -1);
						func_43(541, 0);
						iLocal_1092 = 1;
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1086) < SYSTEM::POW(100f, 2f))
					{
						PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
					}
					func_95();
					if (bLocal_1097)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_907, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_908, false))
						{
							func_37(iLocal_908);
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_908) && ENTITY::IS_ENTITY_AT_COORD(iLocal_907, Local_1086, Global_20, true, true, 0))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_905))
								{
									HUD::REMOVE_BLIP(&iLocal_905);
								}
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 15f, 4);
								iLocal_1084++;
							}
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_907, false))
					{
						func_37(iLocal_907);
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_907) && ENTITY::IS_ENTITY_AT_COORD(iLocal_907, Local_1086, Global_20, true, true, 0))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_905))
							{
								HUD::REMOVE_BLIP(&iLocal_905);
							}
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 15f, 4);
							iLocal_1084++;
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
					iLocal_1084 = 100;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_907))
				{
					func_15("AHP_LOSTTRUCK");
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_907, false))
				{
					if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_907, true)) > 22500f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_907)) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_907, true)) > 90000f)
					{
						func_15("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_15("AHP_DEADTRUCK");
				}
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_907, false))
				{
					if (func_12(iLocal_907, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						if (!iLocal_1095)
						{
							func_11("AHP_GETOUT", 7500, 1);
							iLocal_1095 = 1;
						}
						AUDIO::TRIGGER_MUSIC_EVENT("AHP1_STOP");
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
						iLocal_1084++;
					}
				}
				break;
			
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_907, false))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_907, Local_1086, Global_20 + Vector(2f, 2f, 2f), true, true, 0))
					{
						iLocal_1084 = 0;
					}
					else if (bLocal_1097)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_908))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_908, iLocal_907))
							{
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_907, false, 0);
								if (VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_907))
								{
									VEHICLE::SET_VEHICLE_SIREN(iLocal_907, false);
								}
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_907, 2);
								HUD::CLEAR_PRINTS();
								SYSTEM::SETTIMERA(0);
								iLocal_1084++;
							}
							else
							{
								VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_908, iLocal_907);
							}
						}
					}
					else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_907, false))
					{
						if (VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_907))
						{
							VEHICLE::SET_VEHICLE_SIREN(iLocal_907, false);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_907, 2);
						HUD::CLEAR_PRINTS();
						SYSTEM::SETTIMERA(0);
						iLocal_1084++;
					}
				}
				break;
			
			case 3:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_907, false))
				{
					if (SYSTEM::TIMERA() > 3000)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						func_6();
					}
				}
				break;
			
			case 100:
				if (HUD::DOES_BLIP_EXIST(iLocal_905))
				{
					HUD::REMOVE_BLIP(&iLocal_905);
				}
				if (!func_5(13))
				{
					func_4(13, 1);
				}
				iLocal_1084++;
				break;
			
			case 101:
				func_95();
				if (bLocal_1097)
				{
					func_37(iLocal_908);
				}
				else
				{
					func_37(iLocal_907);
				}
				if (!iLocal_1098)
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_907, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_907, false)) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_908, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_908, false)))
					{
						if ((ENTITY::IS_ENTITY_IN_ZONE(PLAYER::PLAYER_PED_ID(), "DAVIS" /* GXT: Davis */) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (func_3())
							{
								AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_AH_PREP_01", 0f);
							}
							else
							{
								AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_AH_PREP_02", 0f);
							}
							iLocal_1098 = 1;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_907))
				{
					func_15("AHP_LOSTTRUCK");
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_907, false))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						HUD::CLEAR_PRINTS();
						iLocal_1084 = 0;
					}
					else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_907))
					{
						if (!iLocal_1094)
						{
							func_11("AHP_LOSECOPS", 7500, 1);
							iLocal_1094 = 1;
							iLocal_1085 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((iLocal_1094 && (MISC::GET_GAME_TIMER() - iLocal_1085) < 7500) && HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_PRINTS();
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_907, true)) > 22500f)
					{
						func_15("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_15("AHP_DEADTRUCK");
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_907))
		{
			if (!func_2(iLocal_907))
			{
				func_1(iLocal_907, 0);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, int iParam1)//Position - 0x85C
{
	Global_101533.f_22[iParam1] = iParam0;
}

int func_2(int iParam0)//Position - 0x870
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

int func_3()//Position - 0x89E
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_4(int iParam0, int iParam1)//Position - 0x8BC
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113969.f_9088.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113969.f_9088.f_99.f_58[iParam0] = iParam1;
}

int func_5(int iParam0)//Position - 0x901
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

void func_6()//Position - 0x92E
{
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	func_7(0, 0);
	func_108();
}

void func_7(bool bParam0, int iParam1)//Position - 0x946
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
		if ((func_10(0) && Global_79636.f_1 == 1) && func_9(Global_79636))
		{
		}
		else
		{
			Global_64166 = 1;
		}
	}
	if (Global_113969.f_9088 || func_10(0))
	{
		iVar0 = func_8();
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

int func_8()//Position - 0xA16
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

int func_9(int iParam0)//Position - 0xA48
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

int func_10(bool bParam0)//Position - 0xA86
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_11(char* sParam0, int iParam1, int iParam2)//Position - 0xAAE
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xAC7
{
	func_14(bParam5, bParam6);
	func_13(iParam0);
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

void func_13(int iParam0)//Position - 0xB1E
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

void func_14(bool bParam0, bool bParam1)//Position - 0xB4A
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

void func_15(char* sParam0)//Position - 0xC9B
{
	int iVar0;
	
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	func_21(sParam0);
	while (!func_20())
	{
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_907))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_907, false))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_907);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_909)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_909[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_909[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98010.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_9[iVar0]))
		{
			PED::DELETE_PED(&(Global_98010.f_9[iVar0]));
		}
		iVar0++;
	}
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, true, false, false);
	AUDIO::TRIGGER_MUSIC_EVENT("AHP1_FAIL");
	if (func_19())
	{
		func_112();
	}
	else if (func_18())
	{
		func_16(229.1676f, -1614.9794f, 28.2892f, 142.5156f);
	}
	func_108();
}

void func_16(struct<3> Param0, float fParam3)//Position - 0xD92
{
	if (func_17(Global_79630, 0f, 0f, 0f, 0))
	{
		Global_79630 = { Param0 };
		Global_79633 = fParam3;
	}
}

bool func_17(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xDBE
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_18()//Position - 0xE05
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 226.67654f, -1668.9421f, 25.460825f, 185.64464f, -1635.8359f, 39.29184f, 57.75f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19()//Position - 0xE5A
{
	if (Global_101533 == 7)
	{
		return 1;
	}
	return 0;
}

int func_20()//Position - 0xE6F
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

void func_21(char* sParam0)//Position - 0xE9C
{
	func_36(sParam0);
	func_22(0);
}

void func_22(int iParam0)//Position - 0xEAF
{
	int iVar0;
	
	if (Global_113969.f_9088 || func_10(0))
	{
		iVar0 = func_8();
		if (!func_23(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_92265[iVar0 /*5*/].f_1), 5);
		Global_101569 = iParam0;
	}
}

int func_23(int iParam0)//Position - 0xEF4
{
	int iVar0;
	int iVar1;
	
	func_28();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_92265[iParam0 /*5*/];
	iVar1 = Global_79660.f_109[iVar0 /*4*/];
	func_27(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_24(&(Global_113969.f_2366.f_539), iVar1);
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

void func_24(var uParam0, int iParam1)//Position - 0x1004
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
			if (!func_26(Global_113969.f_18536[iVar0], &Var2, &fVar5))
			{
				Global_113969.f_18536[iVar0] = 318;
				func_25(&(uParam0->f_2296[iVar0]));
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

void func_25(var uParam0)//Position - 0x11CA
{
	*uParam0 = -15;
}

int func_26(int iParam0, var uParam1, float fParam2)//Position - 0x11D8
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
			return func_26(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_26(8, uParam1, fParam2);
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

void func_27(int iParam0, bool bParam1)//Position - 0x1B47
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

void func_28()//Position - 0x1B85
{
	Global_101568 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79622))
		{
			switch (func_29())
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
			switch (func_29())
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

int func_29()//Position - 0x1C6C
{
	func_30();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_30()//Position - 0x1C85
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_34(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_33(PLAYER::PLAYER_PED_ID());
			if (func_32(iVar0) && (!func_31(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_32(Global_113969.f_2366.f_539.f_4321))
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

bool func_31(int iParam0)//Position - 0x1D82
{
	return Global_44042 == iParam0;
}

bool func_32(int iParam0)//Position - 0x1D90
{
	return iParam0 < 3;
}

int func_33(int iParam0)//Position - 0x1D9C
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)//Position - 0x1DD9
{
	if (func_32(iParam0))
	{
		return func_35(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_35(int iParam0)//Position - 0x1DFE
{
	return Global_2169[iParam0 /*29*/];
}

void func_36(char* sParam0)//Position - 0x1E0D
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

void func_37(int iParam0)//Position - 0x1E4C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_906))
					{
						HUD::REMOVE_BLIP(&iLocal_906);
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_906))
				{
					iLocal_906 = func_41(iParam0, 0, 0);
				}
			}
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_906))
			{
				HUD::REMOVE_BLIP(&iLocal_906);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_905))
			{
				HUD::CLEAR_PRINTS();
				if (!iLocal_1090)
				{
					func_40("AHP_DROPOFF", 7500, 1);
					iLocal_1090 = 1;
				}
				iLocal_905 = func_38(Local_1086, 1);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_905))
			{
				HUD::REMOVE_BLIP(&iLocal_905);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_906))
			{
				HUD::CLEAR_PRINTS();
				if (!iLocal_1089)
				{
					func_40("AHP_GETBAKIN", 7500, 1);
					iLocal_1089 = 1;
				}
				iLocal_906 = func_41(iParam0, 0, 0);
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_906))
		{
			HUD::REMOVE_BLIP(&iLocal_906);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_905))
		{
			HUD::REMOVE_BLIP(&iLocal_905);
		}
	}
}

int func_38(struct<3> Param0, bool bParam3)//Position - 0x1F76
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_39(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_39(bool bParam0, float fParam1, float fParam2)//Position - 0x1FA2
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_40(char* sParam0, int iParam1, int iParam2)//Position - 0x1FB9
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, false);
}

int func_41(int iParam0, bool bParam1, bool bParam2)//Position - 0x1FD2
{
	return func_42(iParam0, !bParam1, bParam2);
}

int func_42(int iParam0, bool bParam1, bool bParam2)//Position - 0x1FE5
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_39(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_39(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_39(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_43(int iParam0, bool bParam1)//Position - 0x2089
{
	int iVar0;
	
	Global_64176 = iParam0;
	if (!Global_64174)
	{
		Global_64174 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_76261)
		{
			if (Global_76262[iVar0 /*9*/] == iParam0)
			{
				Global_76262[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_44(int iParam0, int iParam1)//Position - 0x20D3
{
	int iVar0;
	
	Global_64179 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		if (iParam1 == -1 || Global_76262[iVar0 /*9*/] == iParam1)
		{
			if (Global_76262[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_76262[iVar0 /*9*/].f_6 = iParam0;
				Global_76262[iVar0 /*9*/].f_7 = 1;
				Global_76262[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_45(int iParam0, int iParam1)//Position - 0x213E
{
	Global_64177 = iParam0;
	Global_64178 = iParam1;
}

void func_46()//Position - 0x2150
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_1097)
	{
		iVar0 = iLocal_908;
	}
	else
	{
		iVar0 = iLocal_907;
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		switch (iLocal_1099)
		{
			case 0:
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					iVar1 = 0;
					while (iVar1 < 3)
					{
						iVar2 = func_93(iVar1);
						if ((!PED::IS_PED_INJURED(iVar2) && PED::IS_PED_IN_VEHICLE(iVar2, iVar0, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == iVar2)
						{
							if (!func_92(iVar2) && func_91(iVar2, 0))
							{
								if (func_90(iVar2, 0))
								{
									iLocal_1131 = 0;
									iLocal_1100 = iVar1;
									iLocal_1099 = 1;
								}
							}
						}
						iVar1++;
					}
				}
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if ((((PED::IS_PED_INJURED(func_93(iLocal_1100)) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != func_93(iLocal_1100)) || !PED::IS_PED_IN_VEHICLE(func_93(iLocal_1100), iVar0, false)) || !func_92(func_93(iLocal_1100))) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
					{
						func_89(func_93(iLocal_1100));
						iLocal_1099 = 0;
					}
					else
					{
						switch (iLocal_1131)
						{
							case 0:
								iLocal_1131 = 2;
								break;
							
							case 1:
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_1107.f_0, Local_1107.f_1, Local_1110.f_0, Local_1110.f_1))
								{
									iLocal_1131++;
								}
								break;
							
							case 2:
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_93(iLocal_1100), iVar0, Local_1086, 15f, 0, joaat("firetruk"), 786484, 5f, 5f);
								if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true), Local_1086) > 250f)
								{
									VEHICLE::SET_VEHICLE_CUSTOM_PATH_NODE_STREAMING_RADIUS(iVar0, SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_907, true), Local_1086));
								}
								iLocal_1131++;
								break;
							
							case 3:
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 697.6884f, -1013.3638f, 27.496796f, 688.3482f, -1013.17914f, 22.329676f, 29.25f, false, true, 0))
								{
									if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true), Local_1101) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true), Local_1104))
									{
										if (bLocal_1097)
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_93(iLocal_1100), iVar0, Local_1104, 5f, 0, ENTITY::GET_ENTITY_MODEL(iVar0), 262144, 2f, 2f);
										}
										else
										{
											TASK::TASK_VEHICLE_PARK(func_93(iLocal_1100), iVar0, Local_1086, 180f, 1, 15f, false);
										}
									}
									else if (bLocal_1097)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_93(iLocal_1100), iVar0, Local_1101, 5f, 0, ENTITY::GET_ENTITY_MODEL(iVar0), 262144, 2f, 2f);
									}
									else
									{
										TASK::TASK_VEHICLE_PARK(func_93(iLocal_1100), iVar0, Local_1086, 0f, 1, 15f, false);
									}
									iLocal_1131++;
								}
								break;
							
							case 4:
								break;
							}
						}
				}
				func_47();
				break;
		}
	}
	else if (iLocal_1099 != 0)
	{
		if (func_89(func_93(iLocal_1100)))
		{
			iLocal_1099 = 0;
		}
	}
}

void func_47()//Position - 0x245A
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (!PED::IS_PED_INJURED(func_93(iLocal_1100)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_907) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_907, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_907, false)) && PED::IS_PED_IN_VEHICLE(func_93(iLocal_1100), iLocal_907, false)) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_908) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_908, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_908, false)) && PED::IS_PED_IN_VEHICLE(func_93(iLocal_1100), iLocal_908, false)))
		{
			bVar0 = true;
		}
	}
	switch (iLocal_1113)
	{
		case 0:
			uVar1 = func_86();
			if (func_72(0, 1, 145, 0, uVar1, &cLocal_1114, &cLocal_1118, 1))
			{
				func_71(&uLocal_919, 0);
				func_71(&uLocal_919, 1);
				func_71(&uLocal_919, 2);
				if (func_29() == 1)
				{
					func_70(&uLocal_919, 0, func_93(0), "MICHAEL", 0, 1);
					func_70(&uLocal_919, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
				else
				{
					func_70(&uLocal_919, 1, func_93(1), "FRANKLIN", 0, 1);
					func_70(&uLocal_919, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				if (!iLocal_1123)
				{
					iLocal_1130 = MISC::GET_GAME_TIMER();
				}
				iLocal_1113 = 1;
			}
			break;
		
		case 1:
			if (bVar0)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1130) > 5000 || iLocal_1123)
				{
					if (func_69(&uLocal_919, &cLocal_1114, &cLocal_1118, 8, 0, 0, 0))
					{
						iLocal_1123 = 1;
						iLocal_1113 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!bLocal_1122)
			{
				if (!bVar0)
				{
					cLocal_1124 = { func_68() };
					func_67();
					bLocal_1122 = true;
				}
			}
			else if (bVar0)
			{
				if (func_51(&uLocal_919, &cLocal_1114, &cLocal_1118, &cLocal_1124, 8, 0, 0))
				{
					bLocal_1122 = false;
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || (!bLocal_1122 && !func_50()))
			{
				func_48();
				iLocal_1113 = 3;
				iLocal_1130 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_1130) > 10000)
			{
				iLocal_1113 = 0;
			}
			break;
	}
}

void func_48()//Position - 0x267E
{
	Global_21152 = 0;
	func_49();
}

void func_49()//Position - 0x268E
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23297 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

int func_50()//Position - 0x26B2
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_51(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x26D4
{
	func_66(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 1;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_52(sParam2, iParam4, 0);
}

int func_52(char* sParam0, int iParam1, bool bParam2)//Position - 0x2728
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
					func_65();
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
		if (func_64(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_63();
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
				func_62();
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
				if (func_61())
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
			if (func_60())
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
			func_59();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_58();
		func_53();
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
		func_65();
	}
	return 0;
}

void func_53()//Position - 0x29F6
{
	if (!func_54())
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

int func_54()//Position - 0x2A2D
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_57())
	{
		return 0;
	}
	if (func_55(PLAYER::PLAYER_ID()))
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

bool func_55(int iParam0)//Position - 0x2A90
{
	return func_56(iParam0, 20);
}

var func_56(int iParam0, int iParam1)//Position - 0x2AA0
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_57()//Position - 0x2AB8
{
	return -1;
}

void func_58()//Position - 0x2AC1
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

void func_59()//Position - 0x2AF2
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

int func_60()//Position - 0x2B87
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_61()//Position - 0x2BAE
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

void func_62()//Position - 0x2C47
{
	if (func_31(14))
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
		Global_20930 = func_29();
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

void func_63()//Position - 0x2CE9
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

bool func_64(int iParam0, int iParam1)//Position - 0x2D40
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

void func_65()//Position - 0x2D78
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

void func_66(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2DCF
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

void func_67()//Position - 0x2E25
{
	Global_21152 = 0;
	func_65();
}

struct<6> func_68()//Position - 0x2E35
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_23296);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_21154[iVar7 /*6*/])))
			{
				return Global_21154[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_21154[iVar8 /*6*/])))
					{
						return Global_21154[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_21154[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_69(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2EE1
{
	func_66(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_52(sParam2, iParam3, 0);
}

void func_70(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2F2F
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

void func_71(var uParam0, int iParam1)//Position - 0x2FCA
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, char* sParam5, char* sParam6, bool bParam7)//Position - 0x2FE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_83(iParam0);
	iVar1 = func_83(iParam1);
	iVar2 = func_83(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return 0;
	}
	if (iVar2 == 7)
	{
		iVar5 = func_82(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return 0;
		}
		if (((iParam0 == 1 && iParam1 == 19) && func_5(137)) && iParam3 == 1)
		{
			if (func_81(&(Global_113969.f_18106.f_388), iParam3, &iVar3, &iVar4, uParam4))
			{
				if (bParam7)
				{
					func_76(&(Global_113969.f_18106.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0;
			}
		}
		else if (func_81(&(Global_113969.f_18106.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, uParam4))
		{
			if (bParam7)
			{
				func_76(&(Global_113969.f_18106.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar6 = func_75(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return 0;
		}
		if (func_81(&(Global_113969.f_18106.f_347[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, uParam4))
		{
			if (bParam7)
			{
				func_76(&(Global_113969.f_18106.f_347[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	*sParam6 = { func_73(iVar0, iVar1, iVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 1;
}

struct<4> func_73(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3292
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	StringCopy(&Var0, "F", 16);
	if (iParam3 == 0)
	{
		StringConCat(&Var0, "p", 16);
		StringConCat(&Var0, func_74(iParam0), 16);
		StringConCat(&Var0, func_74(iParam1), 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(&Var0, "a", 16);
		StringConCat(&Var0, func_74(iParam0), 16);
		StringConCat(&Var0, func_74(iParam1), 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&Var0, "c", 16);
		if (iParam2 < iParam1)
		{
			iVar4 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar4;
		}
		if (iParam1 < iParam0)
		{
			iVar5 = iParam0;
			iParam0 = iParam1;
			iParam1 = iVar5;
		}
		if (iParam2 < iParam1)
		{
			iVar6 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar6;
		}
		StringConCat(&Var0, func_74(iParam0), 16);
		StringConCat(&Var0, func_74(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_74(iParam2), 16);
		}
	}
	else
	{
		StringConCat(&Var0, "x", 16);
		StringConCat(&Var0, func_74(iParam0), 16);
		StringConCat(&Var0, func_74(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_74(iParam2), 16);
		}
	}
	return Var0;
}

char* func_74(int iParam0)//Position - 0x338A
{
	switch (iParam0)
	{
		case 0:
			return "M";
			break;
		
		case 1:
			return "F";
			break;
		
		case 2:
			return "T";
			break;
		
		case 3:
			return "L";
			break;
		
		case 4:
			return "J";
			break;
		
		case 5:
			return "A";
			break;
	}
	return "X";
}

int func_75(int iParam0, int iParam1, int iParam2)//Position - 0x33FD
{
	if ((iParam0 == iParam1 || iParam1 == iParam2) || iParam2 == iParam0)
	{
		return 3;
	}
	if (((iParam0 == 1 || iParam1 == 1) || iParam2 == 1) && ((iParam0 == 2 || iParam1 == 2) || iParam2 == 2))
	{
		if ((iParam0 == 0 || iParam1 == 0) || iParam2 == 0)
		{
			return 0;
		}
		if ((iParam0 == 3 || iParam1 == 3) || iParam2 == 3)
		{
			return 1;
		}
	}
	return 3;
}

void func_76(var uParam0, int iParam1, int iParam2)//Position - 0x349E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	func_80((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
	func_79((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
	func_78((*uParam0)[iParam2], &iVar6);
	if (iParam1 == 0)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 1)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	func_77(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}

void func_77(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x354A
{
	*uParam0 = 0;
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1 & 15, 28));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam2 & 15, 24));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam3 & 15, 20));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam4 & 15, 16));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam5 & 15, 12));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam6 & 15, 8));
	*uParam0 = (*uParam0 || iParam7 & 255);
}

void func_78(var uParam0, int iParam1)//Position - 0x35CE
{
	*iParam1 = uParam0 & 255;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x35DE
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16) & 15;
	*iParam2 = SYSTEM::SHIFT_RIGHT(iParam0, 12) & 15;
	*iParam3 = SYSTEM::SHIFT_RIGHT(iParam0, 8) & 15;
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3610
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 28) & 15;
	*iParam2 = SYSTEM::SHIFT_RIGHT(iParam0, 24) & 15;
	*iParam3 = SYSTEM::SHIFT_RIGHT(iParam0, 20) & 15;
}

int func_81(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0x3642
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		bVar6 = false;
		func_78((*uParam0)[*iParam2], &bVar6);
		if (BitTest(uParam4, bVar6))
		{
			func_80((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			func_79((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return 1;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_82(int iParam0, int iParam1)//Position - 0x36FD
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_83(int iParam0)//Position - 0x3887
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_85())
	{
		return func_84(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_85())
	{
		return 6;
	}
	if (iParam0 == 205)
	{
		return 6;
	}
	return 6;
}

var func_84(int iParam0)//Position - 0x38DF
{
	return Global_2169[iParam0 /*29*/].f_11;
}

int func_85()//Position - 0x38F0
{
	if (Global_32948 == 0 || Global_32948 == 2)
	{
		return 204;
	}
	return 161;
}

int func_86()//Position - 0x3912
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 1);
	if (Local_47.f_109 == 0)
	{
		MISC::SET_BIT(&iVar0, 2);
	}
	if (func_5(128))
	{
		MISC::SET_BIT(&iVar0, 4);
		if (!func_88(24))
		{
			MISC::SET_BIT(&iVar0, 21);
		}
	}
	else
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	if (func_5(131))
	{
		MISC::SET_BIT(&iVar0, 6);
	}
	else
	{
		MISC::SET_BIT(&iVar0, 5);
	}
	if (func_5(137))
	{
		MISC::SET_BIT(&iVar0, 9);
	}
	else if (func_5(126))
	{
		MISC::SET_BIT(&iVar0, 8);
	}
	else
	{
		MISC::SET_BIT(&iVar0, 7);
	}
	if (func_5(137))
	{
		if (!func_5(135) && !func_5(136))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		if (func_5(135))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
		else
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		if (func_5(136))
		{
			MISC::SET_BIT(&iVar0, 12);
		}
		else
		{
			MISC::SET_BIT(&iVar0, 14);
		}
	}
	if (!func_88(20))
	{
		MISC::SET_BIT(&iVar0, 15);
	}
	if (!func_88(46))
	{
		MISC::SET_BIT(&iVar0, 16);
	}
	if (func_5(129) && !BitTest(iVar0, 9))
	{
		MISC::SET_BIT(&iVar0, 17);
	}
	if (func_88(40) && !func_88(43))
	{
		MISC::SET_BIT(&iVar0, 18);
	}
	if (func_88(43) && !func_88(42))
	{
		MISC::SET_BIT(&iVar0, 19);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_87(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
		{
			MISC::SET_BIT(&iVar0, 20);
		}
	}
	return iVar0;
}

int func_87(struct<2> Param0, Vector3 vParam2)//Position - 0x3AA7
{
	if (Param0.f_1 < 400f)
	{
		if (Param0.f_0 < 1400f)
		{
			if (Param0.f_0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_88(int iParam0)//Position - 0x3AE4
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

int func_89(int iParam0)//Position - 0x3B10
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_33(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_93(bVar0) != iParam0)
		{
			return 0;
		}
		if (!BitTest(Global_97367, bVar0))
		{
			return 0;
		}
		MISC::CLEAR_BIT(&Global_97367, bVar0);
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1)//Position - 0x3B65
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_33(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_93(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_97367, bVar0))
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
		if (BitTest(Global_97366, bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, false, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, false, 1);
			MISC::SET_BIT(&Global_97367, bVar0);
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0, int iParam1)//Position - 0x3BE6
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_33(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_93(bVar0) != iParam0)
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
		if (BitTest(Global_97366, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_92(int iParam0)//Position - 0x3C3F
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_33(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_93(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_97367, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x3C85
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_29())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_98991[func_94(iParam0)];
}

int func_94(int iParam0)//Position - 0x3CB6
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

int func_95()//Position - 0x3CF1
{
	if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_907) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_908)
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("firetruk")))
		{
			iLocal_907 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_907, true, true);
			iLocal_1092 = 0;
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck2")))
		{
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))), false))
				{
					iLocal_908 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_908, true, true);
					if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_908)) != iLocal_907)
					{
						iLocal_907 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)));
						iLocal_1092 = 0;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_907, true, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_96()//Position - 0x3E14
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (iLocal_1132 < 8)
	{
		if (iLocal_1132 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_9[iLocal_1132]))
			{
				if (!PED::IS_PED_INJURED(Global_98010.f_9[iLocal_1132]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_98010.f_9[iLocal_1132], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 900f)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010.f_9[iLocal_1132], true, true);
						iLocal_909[iLocal_1132] = Global_98010.f_9[iLocal_1132];
						bVar0 = true;
						Global_98010.f_9[iLocal_1132] = 0;
					}
					else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_98010.f_9[iLocal_1132], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 2500f && ENTITY::IS_ENTITY_OCCLUDED(Global_98010.f_9[iLocal_1132]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010.f_9[iLocal_1132], true, true);
						PED::DELETE_PED(&(Global_98010.f_9[iLocal_1132]));
					}
				}
			}
		}
		if (!bVar0)
		{
			if (PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, true, true, &iVar1, false, true, 21))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)) && !func_97(iVar1, &iLocal_909))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
					iLocal_909[iLocal_1132] = iVar1;
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!PED::IS_PED_INJURED(iLocal_909[iLocal_1132]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_909[iLocal_1132], iLocal_918);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_909[iLocal_1132], 17, false);
				PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
			}
			iLocal_1132++;
		}
	}
}

int func_97(int iParam0, int iParam1)//Position - 0x3FB3
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar0]))
			{
				if (iParam0 == (*iParam1)[iVar0])
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_98()//Position - 0x3FF5
{
	if (bLocal_1097)
	{
		if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_908, false) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_908, false) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_907, iLocal_908))) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_907, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_907, false))) || (ENTITY::DOES_ENTITY_EXIST(iLocal_908) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_908, true)) > 250f))
		{
			bLocal_1097 = false;
		}
	}
	else if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_908, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_908, false)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_907, iLocal_908))
	{
		bLocal_1097 = true;
	}
}

void func_99(int iParam0)//Position - 0x40AF
{
	bool bVar0;
	int iVar1;
	
	Global_64167 = 0;
	if (!Global_64391[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_76261)
	{
		if (Global_76262[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_76262[iVar1 /*9*/].f_1 = 1;
			Global_76262[iVar1 /*9*/].f_2 = 0f;
			if (Global_76262[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_100()//Position - 0x4120
{
	struct<3> Var0;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(Global_98010[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98010[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98010[0], false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010[0], true, true);
		iLocal_907 = Global_98010[0];
		Global_98010[0] = 0;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Global_98010[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98010[1], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98010[1], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))), false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010[1], true, true);
			iLocal_908 = Global_98010[1];
			Global_98010[1] = 0;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010[0], true, true);
			iLocal_907 = Global_98010[0];
			Global_98010[0] = 0;
			bLocal_1097 = true;
		}
	}
	HUD::REQUEST_ADDITIONAL_TEXT("AHPREP1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("FireMen", &iLocal_918);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_918);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_918, joaat("PLAYER"));
	if (func_10(0))
	{
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Fireman_01"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Fireman_01")))
		{
			SYSTEM::WAIT(0);
		}
		Var0 = { 202.0504f, -1655.7734f, 28.8031f };
		iLocal_1133 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0 - Vector(10f, 30f, 30f), Var0 + Vector(10f, 30f, 30f), false, true, true, true, 1);
		MISC::CLEAR_AREA(Var0, 20f, true, false, false, false);
		iLocal_909[0] = PED::CREATE_PED(21, joaat("S_M_Y_Fireman_01"), 215.7186f, -1644.622f, 28.7719f, 357.5736f, true, true);
		iLocal_909[1] = PED::CREATE_PED(21, joaat("S_M_Y_Fireman_01"), 214.4446f, -1643.7203f, 28.7776f, 279.1055f, true, true);
		iLocal_909[2] = PED::CREATE_PED(21, joaat("S_M_Y_Fireman_01"), 217.0826f, -1644.1172f, 28.7155f, 72.8262f, true, true);
		iVar3 = 0;
		while (iVar3 <= (iLocal_909 - 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_909[iVar3]))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_909[iVar3], "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_909[iVar3], 17, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_909[iVar3], iLocal_918);
			}
			iVar3++;
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), iLocal_918);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_918, joaat("PLAYER"));
		iLocal_1084 = -1;
		if (func_107())
		{
			func_106(354.3055f, -1722.2062f, 28.259f, 109.6154f, 1, 0);
			func_103(0, -1, 1);
		}
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (func_18())
	{
		iLocal_1093 = 1;
	}
	if (!func_10(0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AHP1_START");
	}
	iLocal_1092 = 0;
	func_101(68);
}

void func_101(int iParam0)//Position - 0x4444
{
	Global_97368 = 0;
	switch (iParam0)
	{
		case 72:
			func_102(2);
			func_102(4);
			break;
		
		case 73:
			func_102(0);
			func_102(1);
			func_102(7);
			break;
		
		case 92:
			func_102(10);
			func_102(9);
			func_102(13);
			func_102(6);
			break;
		
		case 68:
			func_102(11);
			break;
		
		case 78:
			func_102(14);
			break;
		
		case 79:
			func_102(3);
			break;
		
		default:
			break;
	}
}

void func_102(int iParam0)//Position - 0x44D2
{
	MISC::SET_BIT(&Global_97368, iParam0);
}

void func_103(int iParam0, int iParam1, int iParam2)//Position - 0x44E4
{
	if (func_107() && func_105())
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
		func_104(0);
	}
}

void func_104(int iParam0)//Position - 0x45A8
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

var func_105()//Position - 0x45D1
{
	return BitTest(Global_101533.f_20, 13);
}

void func_106(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x45E2
{
	if (func_107())
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
		func_104(1);
	}
}

int func_107()//Position - 0x4677
{
	if (Global_101533 == 10 || Global_101533 == 9)
	{
		return 1;
	}
	return 0;
}

void func_108()//Position - 0x469B
{
	func_109();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_907))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_907);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1133, false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_109()//Position - 0x46C4
{
	Global_97368 = 0;
}

void func_110()//Position - 0x46D1
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113969.f_9088 || func_10(0))
	{
		if (!func_111())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_23(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_92265[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_28();
		}
	}
}

int func_111()//Position - 0x4742
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

void func_112()//Position - 0x4780
{
	if (iLocal_1093 == 1)
	{
		func_16(354.3055f, -1722.2062f, 28.259f, 109.6154f);
	}
}

