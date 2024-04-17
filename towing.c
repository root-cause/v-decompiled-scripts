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
	struct<3> Local_43[8];
	struct<3> Local_68[1];
	int iLocal_72 = 0;
	int iLocal_73[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<165> Local_94 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	char cLocal_270[16] = "";
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	char cLocal_274[16] = "";
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	struct<3> Local_278[12];
	char cLocal_315[32] = "";
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 1132396544;
	var uLocal_326 = 1132396544;
	var uLocal_327 = 1132396544;
	var uLocal_328 = 0;
	var uLocal_329 = -1082130432;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 8;
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
	var uLocal_389 = -1;
	var uLocal_390 = 1092616192;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	bool bLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = -1;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 1000;
	var uLocal_407 = 1000;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 1097859072;
	var uLocal_413 = 1500;
	var uLocal_414 = 45;
	var uLocal_415 = 1103626240;
	var uLocal_416 = 5;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	int iLocal_423 = 0;
	var uLocal_424 = 0;
	bool bLocal_425 = 0;
	float fLocal_426 = 0f;
	float fLocal_427 = 0f;
	float fLocal_428 = 0f;
	float fLocal_429 = 0f;
	float fLocal_430 = 0f;
	float fLocal_431 = 0f;
	int* iLocal_432 = NULL;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	struct<3> Local_435 = { 0, 0, 0 } ;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	bool bLocal_440 = 0;
	int iLocal_441 = 0;
	bool bLocal_442 = 0;
	int iLocal_443 = 0;
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
	int iLocal_455 = 0;
	var uLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	bool bLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	bool bLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	bool bLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	int iLocal_474 = 0;
	struct<6> Local_475 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_481 = NULL;
	var uLocal_482 = 16;
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
	int iLocal_647 = 0;
	struct<23> Local_648[53];
	struct<28> Local_1868[17];
	int iLocal_2345 = 0;
	struct<165> Local_2346 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int* iLocal_2511 = NULL;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	int* iLocal_2523 = NULL;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	int* iLocal_2526 = NULL;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	struct<3> Local_2529 = { 0, 0, 0 } ;
	float fLocal_2532 = 0f;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	struct<18> Local_2554[2];
	int* iLocal_2591 = NULL;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	int iLocal_2594 = 0;
	int iLocal_2595 = 0;
	int iLocal_2596 = 0;
	int iLocal_2597 = 0;
	float fLocal_2598 = 0f;
	int iLocal_2599 = 0;
	bool bLocal_2600 = 0;
	int iLocal_2601 = 0;
	int iLocal_2602 = 0;
	int iLocal_2603 = 0;
	int iLocal_2604 = 0;
	var uLocal_2605 = 0;
	int iLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	char* sLocal_2616 = NULL;
	char* sLocal_2617 = NULL;
	char* sLocal_2618[3] = { NULL, NULL, NULL };
	char* sLocal_2622 = NULL;
	struct<3> Local_2623[1];
	struct<3> Local_2627 = { 0, 0, 0 } ;
	struct<3> Local_2630 = { 0, 0, 0 } ;
	struct<3> Local_2633 = { 0, 0, 0 } ;
	var uLocal_2636 = 9;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 7;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 15;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 1;
	int iLocal_2928 = 0;
	int iLocal_2929 = 0;
	int iLocal_2930 = 0;
	int iLocal_2931 = 0;
	int iLocal_2932 = 0;
	bool bLocal_2933 = 0;
	bool bLocal_2934 = 0;
	int iLocal_2935 = 0;
	int iLocal_2936 = 0;
	bool bLocal_2937 = 0;
	bool bLocal_2938 = 0;
	int iLocal_2939 = 0;
	bool bLocal_2940 = 0;
	bool bLocal_2941 = 0;
	var uLocal_2942 = 0;
	bool bLocal_2943 = 0;
	int iLocal_2944 = 0;
	int iLocal_2945 = 0;
	bool bLocal_2946 = 0;
	int iLocal_2947 = 0;
	int iLocal_2948 = 0;
	int iLocal_2949 = 0;
	int iLocal_2950 = 0;
	int iLocal_2951 = 0;
	int iLocal_2952 = 0;
	var uLocal_2953 = 0;
	bool bLocal_2954 = 0;
	bool bLocal_2955 = 0;
	bool bLocal_2956 = 0;
	bool bLocal_2957 = 0;
	int iLocal_2958 = 0;
	int iLocal_2959 = 0;
	int iLocal_2960 = 0;
	int iLocal_2961 = 0;
	bool bLocal_2962 = 0;
	bool bLocal_2963 = 0;
	bool bLocal_2964 = 0;
	int iLocal_2965 = 0;
	bool bLocal_2966 = 0;
	var uLocal_2967 = 0;
	bool bLocal_2968 = 0;
	bool bLocal_2969 = 0;
	int iLocal_2970 = 0;
	bool bLocal_2971 = 0;
	int iLocal_2972 = 0;
	int iLocal_2973 = 0;
	int iLocal_2974 = 0;
	int iLocal_2975 = 0;
	int iLocal_2976 = 0;
	bool bLocal_2977 = 0;
	var uLocal_2978[2] = { 0, 0 };
	int iLocal_2981 = 0;
	int iLocal_2982 = 0;
	int* iLocal_2983 = NULL;
	int iLocal_2984 = 0;
	int iLocal_2985[1] = { 0 };
	var uLocal_2987[2] = { 0, 0 };
	int iLocal_2990 = 0;
	struct<2> Local_2991 = { 0, 0 } ;
	int iLocal_2993 = 0;
	struct<20> Local_2994[1];
	struct<7> Local_3015 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	int iLocal_3035 = 0;
	int iLocal_3036 = 0;
	int iLocal_3037 = 0;
	int iLocal_3038 = 0;
	int iLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	int iLocal_3045 = 0;
	int iLocal_3046 = 0;
	int iLocal_3047 = 0;
	int iLocal_3048 = 0;
	int iLocal_3049 = 0;
	int iLocal_3050 = 0;
	int iLocal_3051 = 0;
	var* uLocal_3052 = NULL;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	struct<3> Local_3058 = { 0, 0, 0 } ;
	struct<3> Local_3061 = { 0, 0, 0 } ;
	float fLocal_3064 = 0f;
	float fLocal_3065 = 0f;
	char cLocal_3066[64] = "";
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	int iLocal_3082 = 0;
	int* iLocal_3083 = NULL;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	int* iLocal_3086 = NULL;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	int* iLocal_3089 = NULL;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	int* iLocal_3092 = NULL;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	int* iLocal_3095 = NULL;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	int* iLocal_3098 = NULL;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	int* iLocal_3101 = NULL;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	int* iLocal_3104 = NULL;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	int iLocal_3107 = 0;
	int iLocal_3108 = 0;
	int iLocal_3109 = 0;
	int iLocal_3110 = 0;
	int iLocal_3111 = 0;
	char* sLocal_3112 = NULL;
	int iLocal_3113 = 0;
	var uLocal_3114 = 0;
	int iLocal_3115 = 0;
	int iLocal_3116 = 0;
	int iLocal_3117 = 0;
	int iLocal_3118 = 0;
	int iLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 8;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	int iLocal_3134 = 0;
	bool bLocal_3135 = 0;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	
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
	Local_91 = { 500f, 500f, 500f };
	fLocal_426 = 0f;
	fLocal_427 = 0f;
	fLocal_428 = 0f;
	fLocal_429 = 0.8f;
	fLocal_430 = 1.5f;
	fLocal_431 = 0.5f;
	Local_435 = { 401.55f, -1631.3087f, 29.3f };
	iLocal_438 = 1;
	iLocal_439 = 1;
	iLocal_647 = joaat("towtruck");
	Local_2529 = { -6.80809f, -1465.8727f, 29.45427f };
	fLocal_2532 = 275.5635f;
	iLocal_2594 = -1;
	iLocal_2595 = -1;
	iLocal_2596 = -1;
	iLocal_2597 = -1;
	fLocal_2598 = 0f;
	sLocal_2616 = "";
	sLocal_2617 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	iLocal_2929 = 1;
	iLocal_2930 = 1;
	iLocal_2931 = 1;
	iLocal_2939 = 1;
	iLocal_2974 = 1;
	iLocal_3035 = -1;
	Local_3058 = { -229.8159f, -1171.9999f, 21.8557f };
	iLocal_3113 = 1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		if (!func_303())
		{
			func_301(&Global_113020, 3);
			func_272(SCRIPT::GET_THIS_SCRIPT_NAME());
		}
		func_268();
	}
	if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_0) && ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(ScriptParam_0.f_0, false) && !ENTITY::IS_ENTITY_DEAD(ScriptParam_0.f_1, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ScriptParam_0.f_0, true, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ScriptParam_0.f_1, true, true);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
	func_267(&Local_648);
	func_266(&Local_1868);
	func_265();
	iVar0 = 0;
	func_264(&iLocal_3089);
	switch (ScriptParam_0.f_2)
	{
		case 1:
			if (ScriptParam_0.f_4)
			{
				iLocal_418 = ScriptParam_0.f_3;
				if (iVar0 > 0)
				{
					iLocal_2602 = iVar0;
				}
				else
				{
					iLocal_2602 = func_263(100000f, iLocal_418, Global_114372.f_19976.f_9);
				}
			}
			else
			{
				if (Global_114372.f_19976.f_3 == 0)
				{
					bLocal_2957 = true;
				}
				if (!func_262())
				{
					func_259();
				}
				else
				{
					iLocal_2602 = Global_114372.f_19976.f_9;
					iLocal_418 = Global_114372.f_19976.f_2;
				}
				ScriptParam_0.f_3 = iLocal_418;
			}
			iLocal_2990 = 0;
			break;
	}
	if (!bLocal_2957)
	{
		func_258(&Local_2346, 3, 0, "TOWDISPATCH", 0, 1);
	}
	if (iLocal_418 == 0)
	{
		iLocal_2960 = 1;
		if ((Global_114372.f_19976.f_6 % 2) == 0)
		{
			bLocal_2963 = true;
		}
	}
	else if (iLocal_418 == 2)
	{
		bLocal_2964 = true;
		iLocal_2960 = 1;
	}
	if (iLocal_418 == 3 || iLocal_418 == 1)
	{
		iLocal_2959 = 1;
		iLocal_2960 = 1;
		iLocal_3049 = 1;
	}
	else if (iLocal_418 == 4)
	{
		iLocal_2960 = 1;
		iLocal_3049 = Local_1868[func_257() /*28*/].f_27;
	}
	func_256();
	func_232(&ScriptParam_0);
	if (Global_114372.f_19976.f_3 >= 5)
	{
		bLocal_2943 = true;
		bLocal_2943 = bLocal_2943;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_3107 = ScriptParam_0.f_1;
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("towtruck2"))
				{
					iLocal_3107 = iVar1;
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3107))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3107, true, true);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_3107);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_3107, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3107, true);
		}
	}
	iLocal_3110 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(27.5001f, -640.002f, 414.1398f) - Vector(50f, 50f, 50f), Vector(27.5001f, -640.002f, 414.1398f) + Vector(50f, 50f, 50f), false, true, true, true, 1);
	iLocal_3111 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(21.8557f, -1171.9999f, -229.8159f) - Vector(50f, 50f, 50f), Vector(21.8557f, -1171.9999f, -229.8159f) + Vector(50f, 50f, 50f), false, true, true, true, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_3058 - Vector(15f, 15f, 15f), Local_3058 + Vector(15f, 15f, 15f), false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_3058 - Vector(15f, 15f, 15f), Local_3058 + Vector(15f, 15f, 15f), 0);
	func_231();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_227(&uLocal_2654);
		func_226();
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (bLocal_2943 && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				STREAMING::NEW_LOAD_SCENE_START(408.8376f, -1638.9524f, 28.2928f, -3.24f, 0f, -62.6001f, 20f, 0);
				while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				MISC::CLEAR_AREA_OF_VEHICLES(408.8376f, -1638.9524f, 28.2928f, 8f, false, false, false, false, false, false, 0);
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
		if (iLocal_3113 < 15)
		{
			func_224(&iLocal_3107, &iLocal_2983, &Local_2994, &Local_2623, &cLocal_3066, &iLocal_3050, iLocal_3045, bLocal_2956, &iLocal_2965, iLocal_2947, bLocal_2937, bLocal_459, iLocal_3113, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_2990)
			{
				case 0:
					if (iLocal_3113 > 4 && iLocal_3113 < 15)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3107, false))
						{
						}
						if (iLocal_418 != 2 && iLocal_418 != 4)
						{
							if (!func_221(&uLocal_3120, Local_2994[0 /*20*/].f_6, iLocal_3107, &uLocal_3040, &uLocal_3041, bLocal_2943))
							{
								iLocal_3082 = 15;
								func_268();
							}
						}
						if (bLocal_2957 || uLocal_2953)
						{
							func_220(&uLocal_3121, iLocal_3107, &uLocal_3043, &uLocal_3044, bLocal_2943);
						}
					}
					if (bLocal_2957)
					{
						if (iLocal_3113 >= 7)
						{
							func_215(iLocal_3107, Local_2994[0 /*20*/].f_6, Local_3015, &(Local_2994[0 /*20*/].f_8), &Local_2623, &cLocal_3066, &Local_435, bLocal_2957, &(Local_2994[0 /*20*/]));
						}
					}
					bLocal_2946 = false;
					if (((iLocal_418 == 0 || iLocal_418 == 2) && iLocal_3113 > 4) && iLocal_3113 < 17)
					{
						if (bLocal_2963 && iLocal_2974)
						{
							func_213();
							func_212(Local_2994[0 /*20*/].f_6, Local_2994[0 /*20*/]);
						}
						if (!bLocal_2957)
						{
							func_201();
						}
					}
					else if ((iLocal_418 == 1 && iLocal_3113 > 4) && iLocal_3113 < 17)
					{
						if (func_197())
						{
							func_194();
						}
						if (iLocal_3117 > 0)
						{
							func_190();
						}
					}
					else if (iLocal_418 == 3)
					{
						if ((iLocal_3113 == 5 && iLocal_3115 < 1) && !iLocal_2928)
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2994[0 /*20*/].f_6))
								{
									iLocal_2928 = 1;
									TASK::CLEAR_PED_TASKS(Local_2994[0 /*20*/]);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2994[0 /*20*/], PLAYER::PLAYER_PED_ID(), 0);
								}
							}
						}
					}
					if (iLocal_2948 && !bLocal_440)
					{
						func_186(&(Local_1868[func_257() /*28*/]), &(Local_1868[func_257() /*28*/].f_10), Local_648[iLocal_2602 /*23*/].f_1, &(Local_2994[0 /*20*/]), &(Local_2994[0 /*20*/].f_2), &uLocal_2987, fLocal_3064, sLocal_2617, &sLocal_2618, iLocal_3049);
					}
					if (iLocal_418 == 4)
					{
						func_184(&uLocal_3114, iLocal_3108, iLocal_3109, iLocal_3107, &(Local_2994[0 /*20*/].f_2), iLocal_3049, sLocal_2617, &sLocal_2618, &iLocal_2982, bLocal_2943, &(Local_2994[0 /*20*/].f_6));
					}
					if (!bLocal_2943)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2982) && !ENTITY::IS_ENTITY_DEAD(iLocal_2982, false))
						{
							if (func_176(iLocal_2982, 0, &uLocal_410, &iLocal_417, 0, 1, 0, 1, 0))
							{
								bLocal_2940 = true;
								TASK::TASK_SMART_FLEE_PED(iLocal_2982, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							if (func_174())
							{
								bLocal_2941 = true;
							}
						}
					}
					if (bLocal_440 && !bLocal_2962)
					{
						if (func_176(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, &uLocal_410, &iLocal_417, 0, 1, 1, 1, 0))
						{
							func_173();
							if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
							{
								TASK::CLEAR_PED_TASKS(Local_2994[0 /*20*/]);
								PED::SET_PED_KEEP_TASK(Local_2994[0 /*20*/], true);
								TASK::TASK_SMART_FLEE_PED(Local_2994[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
								iLocal_3082 = 18;
							}
							if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_1, false))
							{
								TASK::CLEAR_PED_TASKS(Local_2994[0 /*20*/].f_1);
								PED::SET_PED_KEEP_TASK(Local_2994[0 /*20*/].f_1, true);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 1, 256);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
								if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_1, false))
								{
									TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/].f_1, iLocal_419);
								}
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
								iLocal_3082 = 18;
							}
							if (!bLocal_2957)
							{
								switch (iLocal_417)
								{
									case 16:
										if (iLocal_418 == 2)
										{
											iLocal_3082 = 17;
											func_268();
										}
										else
										{
											iLocal_3082 = 16;
											func_268();
										}
										break;
									
									case 2:
										func_172(&Local_2346, "TOWAUD", "TOW_DISP_LAW", 9, 1, 0, 0);
										iLocal_3082 = 3;
										func_268();
										break;
								}
							}
							else
							{
								iLocal_3082 = 21;
								func_268();
							}
							if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
							{
								func_268();
							}
						}
						if (func_176(Local_2994[0 /*20*/].f_1, Local_2994[0 /*20*/].f_6, &uLocal_410, &iLocal_417, 0, 1, 0, 1, 0))
						{
							func_173();
							if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_1, false))
							{
								TASK::CLEAR_PED_TASKS(Local_2994[0 /*20*/].f_1);
								PED::SET_PED_KEEP_TASK(Local_2994[0 /*20*/].f_1, true);
								TASK::TASK_SMART_FLEE_PED(Local_2994[0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
								iLocal_3082 = 18;
							}
						}
					}
					else if (bLocal_2962)
					{
					}
					if (!bLocal_2946 && func_171(0))
					{
						if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_3107, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3107, false))
						{
							if (!iLocal_466)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_2994[0 /*20*/].f_6))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
									{
										func_148(&uLocal_397, ENTITY::GET_ENTITY_COORDS(Local_2994[0 /*20*/].f_6, true), 0, 0, 1, 1, 1);
									}
								}
							}
							else
							{
								func_148(&uLocal_397, Local_2627, 0, 0, 1, 1, 1);
							}
						}
					}
					if (!func_171(0))
					{
						func_147(&uLocal_397, 0, 0);
					}
					func_145(&iLocal_3092, 7f, 1);
					func_144();
					func_143();
					if (((!bLocal_465 || iLocal_3113 >= 15) || uLocal_2942) || bLocal_2937)
					{
						if (func_55())
						{
							func_49();
						}
					}
					if (iLocal_3113 == 9)
					{
						if (iLocal_418 == 1 || iLocal_418 == 3)
						{
							func_13(Local_2346, &Local_2994, &iLocal_3107);
						}
					}
					break;
			}
			if (func_1(ScriptParam_0))
			{
				func_268();
			}
		}
	}
}

int func_1(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0xB5F
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_2968)
	{
		iLocal_3082 = 13;
		return 1;
	}
	if (func_12())
	{
		iLocal_3082 = 11;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2994[0 /*20*/].f_6))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_2994[0 /*20*/].f_6, 0, 7000))
			{
				iLocal_3082 = 15;
				return 1;
			}
		}
	}
	if (bLocal_465)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_3050) > 50000)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3107) && !ENTITY::IS_ENTITY_DEAD(iLocal_3107, false))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_3107, true) };
			}
			if (SYSTEM::VDIST2(Var0, Var3) > 625f)
			{
				iLocal_3082 = 0;
				return 1;
			}
		}
	}
	if (bLocal_2940)
	{
		iLocal_3082 = 22;
		return 1;
	}
	if (bLocal_2941)
	{
		iLocal_3082 = 23;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3107))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3107, false))
		{
			iLocal_3082 = 2;
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3107))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_3107, false))
		{
			iLocal_3082 = 2;
			return 1;
		}
	}
	switch (Param0.f_2)
	{
		case 1:
			if (iLocal_3113 > 4 && iLocal_3113 < 17)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2994[0 /*20*/].f_6))
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
					{
						iLocal_3082 = 5;
						return 1;
					}
					else if (func_8())
					{
						return 1;
					}
				}
			}
			if (func_2())
			{
				return 1;
			}
			switch (iLocal_418)
			{
				case 3:
				case 1:
				case 0:
					if (bLocal_440)
					{
						if (!bLocal_2962)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2994[0 /*20*/]))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
								{
									iLocal_3082 = 8;
									return 1;
								}
							}
						}
						if (bLocal_2963)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2994[0 /*20*/].f_1))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_1, false))
								{
									iLocal_3082 = 9;
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		iLocal_3082 = 3;
		return 1;
	}
	if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iLocal_3107))
	{
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_3107);
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_3107))
	{
		iLocal_3082 = 4;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0xDAE
{
	if (!iLocal_2949)
	{
		if (func_3(&iLocal_3098, 180f))
		{
			iLocal_2949 = 1;
			func_172(&Local_2346, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (func_3(&iLocal_3098, 300f))
	{
		if (iLocal_418 != 2)
		{
			iLocal_3082 = 14;
			return 1;
		}
	}
	return 0;
}

int func_3(int* iParam0, float fParam1)//Position - 0xE03
{
	if (func_7(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(int* iParam0)//Position - 0xE25
{
	if (func_7(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_5(bool bParam0)//Position - 0xE61
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

bool func_6(int* iParam0)//Position - 0xEB9
{
	return BitTest(*iParam0, 2);
}

bool func_7(int* iParam0)//Position - 0xEC6
{
	return BitTest(*iParam0, 1);
}

int func_8()//Position - 0xED3
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (iLocal_418 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_3113 < 9)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		sVar2 = "TOW_DISP_CAR";
	}
	else if (bVar0)
	{
		sVar2 = "TOW_DISP_GAR";
	}
	else
	{
		sVar2 = "TOW_DISP_IMP";
	}
	if (!func_11(Local_2623[0 /*3*/]))
	{
		if (!iLocal_2950)
		{
			if (func_9(Local_2623[0 /*3*/], 0) > (fLocal_428 + 400f))
			{
				func_172(&Local_2346, "TOWAUD", sVar2, 9, 0, 0, 0);
				iLocal_2950 = 1;
			}
		}
		if (func_9(Local_2623[0 /*3*/], 0) > (fLocal_428 + 450f))
		{
			iLocal_3082 = 11;
			return 1;
		}
	}
	return 0;
}

float func_9(struct<3> Param0, bool bParam3)//Position - 0xF80
{
	return func_10(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, bParam3);
}

float func_10(int iParam0, struct<3> Param1, bool bParam4)//Position - 0xF9A
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1, bParam4);
}

int func_11(struct<3> Param0)//Position - 0xFC4
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()//Position - 0xFEE
{
	return Global_101444.f_393 > 0;
}

void func_13(struct<165> Param0, int iParam165, int iParam166)//Position - 0xFFF
{
	if (!iLocal_461)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_2603 > 1)
			{
				if (func_48(iParam165, iParam166))
				{
					if (func_47())
					{
						Local_475 = { func_46() };
						func_44();
						iLocal_461 = 1;
						iLocal_2603 = 3;
					}
					else
					{
						iLocal_461 = 1;
						iLocal_2603 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_2603)
	{
		case 0:
			if (!func_47())
			{
				SYSTEM::SETTIMERA(0);
				iLocal_2603 = 1;
			}
			break;
		
		case 1:
			if ((SYSTEM::TIMERA() > 3000 && iLocal_466) && !func_43("TOWT_OBJ_04", 0, 0))
			{
				if (!func_47())
				{
					func_258(&Param0, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
					{
						if (iLocal_418 == 1)
						{
							func_172(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							sLocal_481 = "TOW_TRN_C1";
						}
						else if (iLocal_418 == 3)
						{
							func_172(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							sLocal_481 = "TOW_BRK_C";
						}
						bLocal_462 = true;
					}
					else if (iLocal_418 == 1)
					{
						if (Global_114372.f_19976.f_5 == 0 || Global_114372.f_19976.f_5 == 1)
						{
							func_258(&Param0, 5, (*iParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
							func_172(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							sLocal_481 = "TOW_MECH";
						}
						else if (Global_114372.f_19976.f_5 == 2)
						{
							func_258(&Param0, 6, (*iParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_172(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							sLocal_481 = "TOW_MECH2";
						}
						else
						{
							func_42(Param0, iParam165);
						}
						bLocal_462 = true;
					}
					else if (iLocal_418 == 3)
					{
						if (Global_114372.f_19976.f_7 == 0 || Global_114372.f_19976.f_7 == 1)
						{
							func_258(&Param0, 5, (*iParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
							func_172(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							sLocal_481 = "TOW_BRK_CONV";
						}
						else if (Global_114372.f_19976.f_7 == 2)
						{
							func_258(&Param0, 6, (*iParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_172(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							sLocal_481 = "TOW_BRK_CON2";
						}
						else
						{
							func_41(Param0, iParam165);
						}
						bLocal_462 = true;
					}
				}
				else if (func_39(sLocal_481))
				{
					iLocal_2603 = 2;
				}
			}
			break;
		
		case 3:
			func_38(Param0, iParam165);
			if (iLocal_463)
			{
				iLocal_2603 = 2;
			}
			break;
		
		case 2:
			if (func_37(iParam166))
			{
				if (bLocal_462)
				{
					if (iLocal_461)
					{
						if (!func_47())
						{
							if (func_14(&Local_2346, "TOWAUD", sLocal_481, &Local_475, 8, 0, 0))
							{
								iLocal_461 = 0;
								iLocal_2603 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			func_37(iParam166);
			break;
	}
}

bool func_14(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12E1
{
	func_36(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22173 = 0;
	Global_22180 = 0;
	Global_22175 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 1;
	StringCopy(&Global_23170, sParam3, 24);
	Global_2883585 = 0;
	return func_15(sParam2, iParam4, 0);
}

int func_15(char* sParam0, int iParam1, bool bParam2)//Position - 0x1335
{
	Global_22167 = 0;
	if (Global_22166 == 0 || Global_22168 == 2)
	{
		if (Global_22166 != 0)
		{
			if (iParam1 > Global_22168)
			{
				if (Global_22173 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20813.f_1 = 3;
					Global_22166 = 0;
					Global_22167 = 1;
					Global_22219 = 0;
					Global_22162 = 0;
					Global_22163 = 0;
					Global_22177 = 0;
					Global_22176 = 0;
					Global_20812 = 0;
				}
				else
				{
					func_35();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_33();
		Global_21455 = { Global_21620 };
		Global_22172 = Global_22173;
		Global_22179 = Global_22180;
		Global_2883586 = Global_2883585;
		Global_22181 = { Global_22197 };
		Global_22174 = Global_22175;
		Global_23156 = Global_23157;
		Global_23164 = { Global_23170 };
		Global_23158 = Global_23159;
		Global_23160 = Global_23161;
		Global_23162 = Global_23163;
		Global_21785.f_370 = Global_23155;
		Global_21785.f_368 = Global_23153;
		Global_21785.f_369 = Global_23154;
		Global_22162 = Global_22163;
		if (Global_22172)
		{
			MISC::CLEAR_BIT(&Global_8683, 20);
			MISC::CLEAR_BIT(&Global_8684, 17);
			MISC::CLEAR_BIT(&Global_8685, 0);
			if (bParam2)
			{
				func_25();
				if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
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
				if (func_24())
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
				if (!Global_79248)
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
			if (func_23())
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
				if (BitTest(Global_8683, 9))
				{
					return 0;
				}
			}
			func_22();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_21();
		func_16();
		return 1;
	}
	if (Global_22166 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22168 || iParam1 == Global_22168)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_35();
	}
	return 0;
}

void func_16()//Position - 0x1603
{
	if (!func_17())
	{
		return;
	}
	if (Global_22172)
	{
		MemCopy(&(Global_1970561.f_1), {Global_21785}, 4);
		Global_1970561 = Global_7998;
		Global_1970561.f_6 = Global_22176;
	}
}

int func_17()//Position - 0x163A
{
	if (!Global_262145.f_29155 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_20())
	{
		return 0;
	}
	if (func_18(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_18(int iParam0)//Position - 0x169D
{
	return func_19(iParam0, 20);
}

var func_19(int iParam0, int iParam1)//Position - 0x16AD
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_20()//Position - 0x16C5
{
	return -1;
}

void func_21()//Position - 0x16CE
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

void func_22()//Position - 0x16FE
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

int func_23()//Position - 0x1793
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()//Position - 0x17BA
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

void func_25()//Position - 0x1853
{
	if (func_32(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[2 /*29*/])
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
		Global_20813 = func_26();
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

int func_26()//Position - 0x18F5
{
	func_27();
	return Global_114372.f_2366.f_539.f_4321;
}

void func_27()//Position - 0x190E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_30(Global_114372.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_29(PLAYER::PLAYER_PED_ID());
			if (func_28(iVar0) && (!func_32(14) || Global_113320))
			{
				if (Global_114372.f_2366.f_539.f_4321 != iVar0 && func_28(Global_114372.f_2366.f_539.f_4321))
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

bool func_28(int iParam0)//Position - 0x1A0B
{
	return iParam0 < 3;
}

int func_29(int iParam0)//Position - 0x1A17
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)//Position - 0x1A54
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)//Position - 0x1A79
{
	return Global_2139[iParam0 /*29*/];
}

bool func_32(int iParam0)//Position - 0x1A88
{
	return Global_43922 == iParam0;
}

void func_33()//Position - 0x1A96
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

bool func_34(int iParam0, int iParam1)//Position - 0x1AEC
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

void func_35()//Position - 0x1B24
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

void func_36(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1B7B
{
	Global_21620 = { *uParam0 };
	Global_7999 = iParam1;
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

int func_37(var uParam0)//Position - 0x1BD1
{
	switch (iLocal_2604)
	{
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_463 = 0;
				return 1;
			}
			break;
		
		case 2:
			break;
		
		case 4:
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, false))
				{
					iLocal_463 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_38(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x1C5B
{
	switch (iLocal_2604)
	{
		case 1:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("towing")) == 0)
			{
				if (iLocal_418 == 1)
				{
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							iLocal_463 = 1;
						}
					}
				}
				else if (iLocal_418 == 3)
				{
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							iLocal_463 = 1;
						}
					}
				}
			}
			else if (iLocal_418 == 1)
			{
				if (Global_114372.f_19976.f_5 == 0 || Global_114372.f_19976.f_5 == 1)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
				else if (Global_114372.f_19976.f_5 == 2)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
			}
			else if (iLocal_418 == 3)
			{
				if (Global_114372.f_19976.f_7 == 0 || Global_114372.f_19976.f_7 == 1)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
				else if (Global_114372.f_19976.f_7 == 2)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("towing")) == 0)
			{
				if (iLocal_418 == 1)
				{
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
				else if (iLocal_418 == 3)
				{
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
			}
			else if (iLocal_418 == 1)
			{
				if (Global_114372.f_19976.f_5 == 0 || Global_114372.f_19976.f_5 == 1)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
				else if (Global_114372.f_19976.f_5 == 2)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
			}
			else if (iLocal_418 == 3)
			{
				if (Global_114372.f_19976.f_7 == 0 || Global_114372.f_19976.f_7 == 1)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
				else if (Global_114372.f_19976.f_7 == 2)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("towing")) == 0)
			{
				if (iLocal_418 == 1)
				{
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
				else if (iLocal_418 == 3)
				{
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
			}
			else if (iLocal_418 == 1)
			{
				if (Global_114372.f_19976.f_5 == 0 || Global_114372.f_19976.f_5 == 1)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
				else if (Global_114372.f_19976.f_5 == 2)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
			}
			else if (iLocal_418 == 3)
			{
				if (Global_114372.f_19976.f_7 == 0 || Global_114372.f_19976.f_7 == 1)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
				else if (Global_114372.f_19976.f_7 == 2)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("towing")) == 0)
			{
				if (iLocal_418 == 1)
				{
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
				else if (iLocal_418 == 3)
				{
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
			}
			else if (iLocal_418 == 1)
			{
				if (Global_114372.f_19976.f_5 == 0 || Global_114372.f_19976.f_5 == 1)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
				else if (Global_114372.f_19976.f_5 == 2)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
			}
			else if (iLocal_418 == 3)
			{
				if (Global_114372.f_19976.f_7 == 0 || Global_114372.f_19976.f_7 == 1)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
				else if (Global_114372.f_19976.f_7 == 2)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_463)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_463 = 1;
						}
					}
				}
			}
			break;
	}
}

int func_39(char* sParam0)//Position - 0x23F7
{
	var uVar0;
	
	if (func_47())
	{
		MemCopy(&uVar0, {func_40()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_40()//Position - 0x241F
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22166 == 4)
	{
		return Global_21785;
	}
	return Var0;
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x2443
{
	int iVar0;
	
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 4);
	if (iVar0 == 0)
	{
		func_258(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		func_172(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_481 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		func_258(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		func_172(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_481 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		func_258(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		func_172(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_481 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		func_258(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		func_172(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_481 = "TOW_GEN_MCH4";
	}
}

void func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x2525
{
	func_258(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	func_172(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_481 = "TOW_GEN_MCH2";
}

bool func_43(char* sParam0, int iParam1, char* sParam2)//Position - 0x2558
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_44()//Position - 0x2576
{
	Global_21032 = 0;
	func_45();
}

void func_45()//Position - 0x2586
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23177 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22166 = 6;
		return;
	}
}

struct<6> func_46()//Position - 0x25AA
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22166 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_23176);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_21034[iVar7 /*6*/])))
			{
				return Global_21034[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_21034[iVar8 /*6*/])))
					{
						return Global_21034[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_21034[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_47()//Position - 0x2656
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_48(var uParam0, var uParam1)//Position - 0x2678
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		}
		iLocal_2604 = 1;
		return 1;
	}
	if ((ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*20*/])->f_6) && !ENTITY::IS_ENTITY_DEAD((uParam0[0 /*20*/])->f_6, false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!bLocal_425)
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((uParam0[0 /*20*/])->f_6, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT((uParam0[0 /*20*/])->f_6)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((uParam0[0 /*20*/])->f_6))
			{
				iLocal_2604 = 2;
				return 1;
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[0 /*20*/], false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam0)[0 /*20*/], true))
		{
			iLocal_2604 = 4;
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam1, false))
		{
			iLocal_2604 = 6;
			return 1;
		}
	}
	return 0;
}

void func_49()//Position - 0x27A1
{
	func_53(&Global_113020, 3);
	func_301(&(Global_114372.f_19976.f_1), 8192);
	func_50();
	func_194();
}

void func_50()//Position - 0x27CA
{
	func_51();
}

int func_51()//Position - 0x27D7
{
	if (func_52(0))
	{
		return 0;
	}
	if (Global_101431.f_8)
	{
		if (Global_101431.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101431.f_10 > 1)
	{
		return 0;
	}
	Global_101431.f_10++;
	return 1;
}

int func_52(bool bParam0)//Position - 0x2822
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

void func_53(var uParam0, int iParam1)//Position - 0x284A
{
	func_54(uParam0, iParam1);
}

void func_54(var uParam0, var uParam1)//Position - 0x285A
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_55()//Position - 0x286F
{
	var uVar0;
	int iVar1;
	char* sVar2;
	var uVar3;
	var uVar6;
	var uVar9;
	
	switch (iLocal_3113)
	{
		case 1:
			func_140(14);
			if (iLocal_418 == 3)
			{
				if (func_138(&Local_3061, &fLocal_3064, &uLocal_3052, &uLocal_3055))
				{
					iLocal_3113 = 2;
				}
			}
			else
			{
				iLocal_3113 = 2;
			}
			break;
		
		case 2:
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				switch (iLocal_418)
				{
					case 3:
						func_258(&Local_2346, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_172(&Local_2346, "TOWAUD", "TOW_ACC_EXP2", 9, 0, 0, 0))
						{
							iLocal_3113 = 4;
						}
						break;
					
					case 2:
						func_258(&Local_2346, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_172(&Local_2346, "TOWAUD", "TOW_ABN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3113 = 4;
						}
						break;
					
					case 0:
						func_258(&Local_2346, 4, 0, "TOWDISPATCH", 0, 1);
						if (bLocal_2963)
						{
							if (func_172(&Local_2346, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
							{
								iLocal_3113 = 4;
							}
						}
						else if (func_172(&Local_2346, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3113 = 4;
						}
						break;
					
					case 1:
						func_258(&Local_2346, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_172(&Local_2346, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3113 = 4;
						}
						break;
					
					case 4:
						func_258(&Local_2346, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_172(&Local_2346, "TOWAUD", "TOW_ACD_EXP2", 9, 0, 0, 0))
						{
							iLocal_3113 = 4;
						}
						break;
					}
			}
			break;
		
		case 4:
			switch (iLocal_418)
			{
				case 3:
					if (func_131("TOWT_OBJ_01", "TOWT_HELP_01", &uVar0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2994[0 /*20*/].f_6, 10);
						}
						func_129();
						func_264(&iLocal_3098);
						iLocal_3113 = 6;
					}
					break;
				
				case 2:
					if (func_131("TOWT_OBJ_AB", "TOWT_HELP_AB", &uVar0, 0, 0))
					{
						Local_2630 = { (Local_2623[0 /*3*/] + 15f), (Local_2623[0 /*3*/].f_1 + 15f), (Local_2623[0 /*3*/].f_2 + 15f) };
						Local_2633 = { (Local_2623[0 /*3*/] - 15f), (Local_2623[0 /*3*/].f_1 - 15f), (Local_2623[0 /*3*/].f_2 - 15f) };
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_2630, Local_2633, false, true);
						iLocal_2961 = 1;
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2994[0 /*20*/].f_6, true);
						func_264(&iLocal_3098);
						iLocal_3113 = 6;
					}
					break;
				
				case 0:
					if (func_131("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						func_264(&iLocal_3098);
						iLocal_3113 = 6;
					}
					break;
				
				case 1:
					if (func_131("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2994[0 /*20*/].f_6, true);
						func_129();
						VEHICLE::SET_RANDOM_TRAINS(false);
						func_128(0, 0);
						func_128(1, 0);
						func_128(2, 0);
						func_128(3, 0);
						func_128(4, 0);
						func_128(5, 0);
						func_128(6, 0);
						func_128(7, 0);
						func_128(8, 0);
						func_128(9, 0);
						func_128(10, 0);
						func_128(11, 0);
						iLocal_2958 = 1;
						func_264(&iLocal_3098);
						iLocal_3113 = 6;
					}
					break;
				
				case 4:
					if (func_131("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2994[0 /*20*/].f_6, true);
						func_129();
						func_264(&iLocal_3098);
						iLocal_3113 = 6;
					}
					break;
				
				default:
					break;
			}
			if (!HUD::DOES_BLIP_EXIST(Local_2994[0 /*20*/].f_8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2994[0 /*20*/].f_6))
				{
					Local_2994[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2994[0 /*20*/].f_6);
					HUD::SET_BLIP_COLOUR(Local_2994[0 /*20*/].f_8, 3);
					HUD::SET_BLIP_ROUTE(Local_2994[0 /*20*/].f_8, true);
				}
			}
			break;
		
		case 5:
			func_123();
			if (func_115(&iLocal_3115, 0, "TOW_BREAK1"))
			{
				iLocal_3113 = 7;
			}
			break;
		
		case 6:
			if (!func_47())
			{
				func_114(sLocal_3112, 7500, 1);
				StringCopy(&cLocal_3066, sLocal_3112, 64);
				if (iLocal_418 == 3)
				{
					iLocal_3113 = 5;
				}
				else
				{
					iLocal_3113 = 7;
				}
			}
			break;
		
		case 7:
			switch (iLocal_418)
			{
				case 3:
				case 1:
				case 4:
					sVar2 = "TOWT_OBJ_04";
					break;
				
				case 2:
				case 0:
					if (func_11(Local_2627))
					{
						Local_2627 = { Local_68[0 /*3*/] };
					}
					func_113(8, &Local_3015);
					sVar2 = "TOWT_OBJ_06";
					break;
			}
			if (iLocal_418 == 1 && !PED::IS_PED_IN_VEHICLE(Local_2994[0 /*20*/], iLocal_3107, false))
			{
				bLocal_2955 = true;
			}
			func_112();
			if (func_105(sVar2, Local_2627))
			{
				if (iLocal_418 == 1 && !PED::IS_PED_IN_VEHICLE(Local_2994[0 /*20*/], iLocal_3107, false))
				{
					bLocal_2955 = false;
					iLocal_2951 = 1;
					if (ENTITY::DOES_ENTITY_EXIST(Local_2994[0 /*20*/]))
					{
						Local_2994[0 /*20*/].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_2994[0 /*20*/]);
						HUD::SET_BLIP_COLOUR(Local_2994[0 /*20*/].f_9, 3);
						HUD::SET_BLIP_SCALE(Local_2994[0 /*20*/].f_9, 0.7f);
					}
					iLocal_3113 = 5;
				}
				else
				{
					iLocal_3113 = 9;
				}
			}
			if (func_103(&uVar3, &uVar6, &uVar9))
			{
				bLocal_2933 = true;
				iLocal_3113 = 9;
			}
			break;
		
		case 9:
			if (iLocal_418 == 3)
			{
				sVar2 = "TOWT_OBJ_03a";
			}
			else
			{
				sVar2 = "TOWT_OBJ_03Ga";
			}
			if (func_102(sVar2))
			{
				func_147(&uLocal_397, 0, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_2994[0 /*20*/].f_6, false, 0);
				if (iLocal_3036 == 0)
				{
					iLocal_2939 = 0;
					iLocal_3113 = 15;
				}
				else
				{
					func_114("TOWT_OBJ_05", 7500, 1);
					StringCopy(&cLocal_3066, "TOWT_OBJ_05", 64);
					iLocal_3113 = 7;
				}
			}
			break;
		
		case 15:
			func_101();
			if (bLocal_2937)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_2983))
				{
					HUD::REMOVE_BLIP(&iLocal_2983);
				}
			}
			HUD::CLEAR_HELP(true);
			fLocal_427 = (fLocal_427 + 500f);
			if (iLocal_468 != 0 && !bLocal_2933)
			{
				if (bLocal_2943)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_468) < 12000)
					{
						fLocal_427 = (fLocal_427 + 50f);
					}
				}
			}
			if (!bLocal_2943)
			{
				fLocal_427 = 0f;
			}
			fLocal_3065 = func_4(&iLocal_3089);
			fLocal_3065 = (fLocal_3065 * 1000f);
			iVar1 = SYSTEM::ROUND(fLocal_3065);
			STATS::PLAYSTATS_ODDJOB_DONE(iVar1, 14, false);
			if (iLocal_418 != 2)
			{
			}
			if (bLocal_2943)
			{
				fLocal_427 = (fLocal_427 - fLocal_426);
			}
			iLocal_470 = SYSTEM::ROUND(fLocal_427);
			func_100(&iLocal_2606, "TOW_UI07", 500, SYSTEM::ROUND(fLocal_426), SYSTEM::ROUND(fLocal_427), "TOW_UI08", 4000, 1);
			if (iLocal_470 > 0)
			{
				func_62(0, iLocal_470);
			}
			func_61(1);
			iLocal_3113 = 16;
			break;
		
		case 16:
			if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				HUD::CLEAR_HELP(true);
			}
			if (!func_56(&iLocal_2606, 0))
			{
				HUD::CLEAR_THIS_PRINT("TOW_TUT_04A");
				HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03Ga");
				iLocal_3113 = 17;
			}
			break;
		
		case 17:
			return 1;
			break;
	}
	Local_68[0 /*3*/] = { Local_68[0 /*3*/] };
	return 0;
}

int func_56(int iParam0, int iParam1)//Position - 0x2F47
{
	if (!func_7(&(iParam0->f_2)))
	{
		func_59(&(iParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 255, 0);
	if (iParam1 || iParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iParam0->f_8)
		{
			if (!func_7(&(iParam0->f_5)))
			{
				func_59(&(iParam0->f_5));
				func_58(iParam0, 1051260355);
			}
		}
		if (func_7(&(iParam0->f_5)))
		{
			if (func_4(&(iParam0->f_5)) > 0.33f)
			{
				func_57(&(iParam0->f_5));
				return 0;
			}
		}
	}
	if (iParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_4(&(iParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(iParam0->f_1)
	{
		if (!func_7(&(iParam0->f_5)))
		{
			func_59(&(iParam0->f_5));
			func_58(iParam0, 1051260355);
		}
		else if (func_4(&(iParam0->f_5)) > 0.33f)
		{
			func_57(&(iParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_57(int* iParam0)//Position - 0x304A
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_58(var uParam0, float fParam1)//Position - 0x3060
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_59(int* iParam0)//Position - 0x3086
{
	func_60(iParam0, 0f);
}

void func_60(int* iParam0, float fParam1)//Position - 0x3095
{
	iParam0->f_1 = (func_5(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_61(bool bParam0)//Position - 0x30C0
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_26())
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

void func_62(int iParam0, int iParam1)//Position - 0x3133
{
	int iVar0;
	
	func_64(Global_114372.f_24907[iParam0 /*4*/], func_99(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_114372.f_24907.f_69 = (Global_114372.f_24907.f_69 + iParam1);
			break;
		
		case 2:
			Global_114372.f_24907.f_70 = (Global_114372.f_24907.f_70 + iParam1);
			break;
		
		case 0:
			Global_114372.f_24907.f_71 = (Global_114372.f_24907.f_71 + iParam1);
			break;
	}
	STATS::STAT_GET_INT(func_63(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(func_63(iParam0, 1), iVar0, true);
}

int func_63(int iParam0, int iParam1)//Position - 0x31DA
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TOWI");
					break;
				
				case 1:
					return joaat("PROP_EARNED_TOWI");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TAXI");
					break;
				
				case 1:
					return joaat("PROP_EARNED_TAXI");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_TAXI");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TRAF");
					break;
				
				case 1:
					return joaat("PROP_EARNED_TRAF");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_SOCO");
					break;
				
				case 1:
					return joaat("PROP_EARNED_SOCO");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CMSH");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CMSH");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CINV");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CINV");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_CINV");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CIND");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CIND");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_CIND");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CINM");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CINM");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_CINM");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_GOLF");
					break;
				
				case 1:
					return joaat("PROP_EARNED_GOLF");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CSCR");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CSCR");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_CSCR");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_WEED");
					break;
				
				case 1:
					return joaat("PROP_EARNED_WEED");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_WEED");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARTE");
					break;
				
				case 1:
					return joaat("PROP_EARNED_BARTE");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_BARTE");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARPI");
					break;
				
				case 1:
					return joaat("PROP_EARNED_BARPI");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_BARPI");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARHE");
					break;
				
				case 1:
					return joaat("PROP_EARNED_BARHE");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_BARHE");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARHO");
					break;
				
				case 1:
					return joaat("PROP_EARNED_BARHO");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_BARHO");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_STRIP");
					break;
				
				case 1:
					return joaat("PROP_EARNED_STRIP");
					break;
			}
			break;
	}
	return joaat("PROP_BOUGHT_TOWI");
}

void func_64(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x35B8
{
	int iVar0;
	int iVar1;
	
	if (func_98(iParam0) == 3)
	{
		return;
	}
	if (func_98(iParam0) == 4)
	{
		return;
	}
	func_65(func_98(iParam0), 1, iParam1, iParam2, 0);
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

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x368A
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_97();
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
					func_96(99, 1);
					func_95(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_95(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_95(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_80(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_77(5))
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
							func_95(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_95(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_95(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_77(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_95(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_95(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_95(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_95(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_95(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_95(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_95(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_95(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_95(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_95(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_95(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_95(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_77(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_95(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_95(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_95(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_95(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_76(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, iParam3);
					break;
				
				case 1:
					func_96(97, iParam3);
					break;
				
				case 2:
					func_96(96, iParam3);
					break;
			}
			func_96(98, iParam3);
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
					func_95(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_95(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_95(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_67(iParam0);
	if (Global_43922 == 15)
	{
		func_66(0);
	}
	return 1;
}

void func_66(bool bParam0)//Position - 0x3C89
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

void func_67(int iParam0)//Position - 0x3F0B
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

void func_68(bool bParam0)//Position - 0x3F65
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_75(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_75(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_75(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_75(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_71(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_71(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_71(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_71(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_71(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_71(8277, 0, -1, 1);
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
	else if (BitTest(Global_114372.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_70() /*5569*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_114372.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_70() /*5569*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_69(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_69(bool bParam0)//Position - 0x40DE
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

int func_70()//Position - 0x41DF
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_71(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x41EC
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_72(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_72(int iParam0, var uParam1)//Position - 0x421A
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_73(uParam1));
}

int func_73(var uParam0)//Position - 0x422F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_74();
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

int func_74()//Position - 0x4263
{
	return Global_1574925;
}

void func_75(int iParam0, bool bParam1, int iParam2)//Position - 0x426F
{
	if (iParam2 == -1)
	{
		iParam2 = func_74();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_76(int iParam0)//Position - 0x428D
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

int func_77(int iParam0)//Position - 0x42AD
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
		return func_79(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_79(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_79(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_79(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_78(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_78(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_78(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_78(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_78(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_78(8277, -1);
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
	return BitTest(Global_2359296[func_70() /*5569*/].f_681.f_10, iParam0);
}

int func_78(int iParam0, int iParam1)//Position - 0x444D
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_72(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_79(int iParam0, int iParam1)//Position - 0x447C
{
	if (iParam1 == -1)
	{
		iParam1 = func_74();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_80(bool bParam0)//Position - 0x4498
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
		func_94(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_81(27, 1);
	return 1;
}

int func_81(int iParam0, int iParam1)//Position - 0x454F
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_82(iParam0, iParam1);
}

int func_82(int iParam0, int iParam1)//Position - 0x456A
{
	if (func_32(14) && !func_93(iParam0))
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
	if (func_92(&Global_4543283))
	{
		if (func_90(&Global_4543283, iParam0))
		{
			return 0;
		}
		if (func_83(&Global_4543283, iParam0))
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

int func_83(var uParam0, int iParam1)//Position - 0x4607
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_93(iParam1))
	{
		return 0;
	}
	if (func_90(uParam0, iParam1))
	{
		return 0;
	}
	if (func_89(uParam0) < 0f)
	{
		func_88(uParam0, 0);
	}
	func_86(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_84(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_84(var uParam0, int iParam1)//Position - 0x46B8
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_93(iParam1))
	{
		return 0;
	}
	if (func_90(uParam0, iParam1))
	{
		return 0;
	}
	if (func_89(uParam0) < 0f)
	{
		func_88(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_85(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_85(var uParam0, int iParam1)//Position - 0x4733
{
	return (*uParam0)[iParam1] == 78;
}

void func_86(var uParam0)//Position - 0x4744
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_87(uParam0, iVar0);
		iVar0++;
	}
	func_88(uParam0, (Global_4543282 - 0.5f));
}

void func_87(var uParam0, int iParam1)//Position - 0x4778
{
	(*uParam0)[iParam1] = 78;
}

void func_88(var uParam0, float fParam1)//Position - 0x4788
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

float func_89(var uParam0)//Position - 0x47A5
{
	return uParam0->f_80;
}

bool func_90(var uParam0, int iParam1)//Position - 0x47B1
{
	return func_91(uParam0, iParam1) != -1;
}

int func_91(var uParam0, int iParam1)//Position - 0x47C3
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

bool func_92(var uParam0)//Position - 0x47F0
{
	return uParam0->f_79 == 1;
}

int func_93(int iParam0)//Position - 0x47FE
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

int func_94(int iParam0, int iParam1)//Position - 0x484E
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

void func_95(int iParam0, int iParam1)//Position - 0x489F
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_96(int iParam0, int iParam1)//Position - 0x48C2
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

void func_97()//Position - 0x491F
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

int func_98(int iParam0)//Position - 0x4994
{
	return Global_2139[iParam0 /*29*/].f_17;
}

int func_99(int iParam0)//Position - 0x49A5
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 101;
			break;
		
		case 3:
			return 102;
			break;
		
		case 4:
			return 103;
			break;
		
		case 5:
			return 104;
			break;
		
		case 6:
			return 105;
			break;
		
		case 7:
			return 106;
			break;
		
		case 8:
			return 107;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 109;
			break;
		
		case 11:
			return 110;
			break;
		
		case 12:
			return 111;
			break;
		
		case 13:
			return 112;
			break;
		
		case 14:
			return 113;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

void func_100(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)//Position - 0x4A95
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam7);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_59(&(iParam0->f_2));
	iParam0->f_1 = iParam6;
	iParam0->f_9 = 1;
}

void func_101()//Position - 0x4AF4
{
	Global_114372.f_19976.f_3++;
	Global_114372.f_19976.f_2 = iLocal_418;
	switch (iLocal_418)
	{
		case 2:
			Global_114372.f_19976.f_4++;
			break;
		
		case 3:
			Global_114372.f_19976.f_7++;
			break;
		
		case 0:
			Global_114372.f_19976.f_6++;
			break;
		
		case 1:
			Global_114372.f_19976.f_5++;
			break;
		
		case 4:
			Global_114372.f_19976.f_8++;
			break;
	}
}

int func_102(char* sParam0)//Position - 0x4BB5
{
	var uVar0;
	var uVar3;
	var uVar6;
	int iVar7;
	
	if (iLocal_3035 == -1)
	{
	}
	if (Local_2994[iLocal_3035 /*20*/].f_15)
	{
		if ((func_4(&(Local_2994[iLocal_3035 /*20*/].f_11)) - Local_2994[iLocal_3035 /*20*/].f_14) > 120f)
		{
			VEHICLE::EXPLODE_VEHICLE(Local_2994[iLocal_3035 /*20*/].f_6, true, false);
		}
	}
	if (func_103(&uVar0, &uVar3, &uVar6))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2994[iLocal_3035 /*20*/], false) && PED::IS_PED_IN_VEHICLE(Local_2994[iLocal_3035 /*20*/], iLocal_3107, false))
		{
			VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_3107, 6f, 2, false);
			iLocal_464 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(Local_2994[iLocal_3035 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2994[iLocal_3035 /*20*/], false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_GOTO_ENTITY_OFFSET(0, Local_2994[0 /*20*/].f_6, 20000, 2f, 0f, 1f, 0);
				iVar7 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
				if (iVar7 == 0)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				}
				else if (iVar7 == 1)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
				}
				else if (iVar7 == 2)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, true);
				}
				else
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
				TASK::TASK_PERFORM_SEQUENCE(Local_2994[iLocal_3035 /*20*/], iLocal_419);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
				PED::SET_PED_KEEP_TASK(Local_2994[iLocal_3035 /*20*/], true);
			}
			if ((Global_114372.f_19976.f_3 == 0 || Global_114372.f_19976.f_3 == 1) || Global_114372.f_19976.f_3 == 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2982) && !ENTITY::IS_ENTITY_DEAD(iLocal_2982, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_WANDER_STANDARD(0, 227.082f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2982, false))
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_2982, iLocal_419);
						PED::SET_PED_KEEP_TASK(iLocal_2982, true);
					}
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
				}
			}
			if (func_47())
			{
				func_173();
			}
			if ((Global_114372.f_19976.f_3 == 0 || Global_114372.f_19976.f_3 == 1) || Global_114372.f_19976.f_3 == 4)
			{
				if (Global_114372.f_19976.f_3 == 0)
				{
					func_172(&Local_2346, "TOWAUD", "TOW_TUT_ENDA", 9, 0, 0, 0);
				}
				else if (Global_114372.f_19976.f_3 == 1)
				{
					func_172(&Local_2346, "TOWAUD", "TOW_TUT_ENDB", 9, 0, 0, 0);
				}
				else if (Global_114372.f_19976.f_3 == 4)
				{
					func_172(&Local_2346, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
				}
			}
			else if (iLocal_418 == 3)
			{
				if (Global_114372.f_19976.f_7 == 0 || Global_114372.f_19976.f_7 == 1)
				{
					func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWBREAKM", 0, 1);
					func_172(&Local_2346, "TOWAUD", "TOW_BRK_THNK", 9, 0, 0, 0);
				}
				else if (Global_114372.f_19976.f_7 == 2)
				{
					func_258(&Local_2346, 6, Local_2994[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					func_172(&Local_2346, "TOWAUD", "TOW_BRK_THAN", 9, 0, 0, 0);
				}
			}
			else if (iLocal_418 == 1)
			{
				if (Global_114372.f_19976.f_5 == 0 || Global_114372.f_19976.f_5 == 1)
				{
					func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWTRAINF", 0, 1);
					func_172(&Local_2346, "TOWAUD", "TOW_THANK", 9, 0, 0, 0);
				}
				else if (Global_114372.f_19976.f_5 == 2)
				{
					func_258(&Local_2346, 6, Local_2994[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_172(&Local_2346, "TOWAUD", "TOW_THANK2", 9, 0, 0, 0);
				}
			}
		}
		if (!bLocal_2957)
		{
		}
		iLocal_466 = 0;
		HUD::REMOVE_BLIP(&(Local_2994[iLocal_3035 /*20*/].f_8));
		func_59(&iLocal_3086);
		iLocal_3036 = (iLocal_3036 - 1);
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[iLocal_3035 /*20*/].f_6, false))
	{
		if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[iLocal_3035 /*20*/].f_6))
		{
			iLocal_466 = 0;
			func_147(&uLocal_397, 0, 0);
			HUD::SET_BLIP_ROUTE(Local_2994[iLocal_3035 /*20*/].f_8, false);
			HUD::REMOVE_BLIP(&(Local_2994[iLocal_3035 /*20*/].f_8));
			if (ENTITY::DOES_ENTITY_EXIST(Local_2994[iLocal_3035 /*20*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_2994[iLocal_3035 /*20*/].f_6, false))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_2994[iLocal_3035 /*20*/].f_8))
				{
					Local_2994[iLocal_3035 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2994[iLocal_3035 /*20*/].f_6);
					HUD::SET_BLIP_COLOUR(Local_2994[iLocal_3035 /*20*/].f_8, 3);
				}
			}
			if (iLocal_418 == 1)
			{
				if (Global_114372.f_19976.f_5 == 0 || Global_114372.f_19976.f_5 == 1)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_2976)
					{
						if (func_172(&Local_2346, "TOWAUD", "TOW_UNHOOK", 9, 1, 0, 0))
						{
							iLocal_2976 = 1;
						}
					}
				}
				else if (Global_114372.f_19976.f_5 == 2)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 6, Local_2994[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_2976)
					{
						if (func_172(&Local_2346, "TOWAUD", "TOW_UNHOOK2", 9, 1, 0, 0))
						{
							iLocal_2976 = 1;
						}
					}
				}
			}
			else if (iLocal_418 == 3)
			{
				if (Global_114372.f_19976.f_7 == 0 || Global_114372.f_19976.f_7 == 1)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_2976)
					{
						if (func_172(&Local_2346, "TOWAUD", "TOW_BRK_UNHK", 9, 1, 0, 0))
						{
							iLocal_2976 = 1;
						}
					}
				}
				else if (Global_114372.f_19976.f_7 == 2)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 6, Local_2994[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_2976)
					{
						if (func_172(&Local_2346, "TOWAUD", "TOW_BRK_HOOK", 9, 1, 0, 0))
						{
							iLocal_2976 = 1;
						}
					}
				}
			}
			func_59(&iLocal_3086);
			if (!bLocal_2955)
			{
				if (func_47())
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(true);
					HUD::CLEAR_PRINTS();
					func_114(sParam0, 7500, 1);
				}
				if (!func_47())
				{
					if (iLocal_2929)
					{
						HUD::CLEAR_PRINTS();
						func_114(sParam0, 7500, 1);
						iLocal_2929 = 0;
					}
					else
					{
						HUD::CLEAR_PRINTS();
						func_114(sParam0, 7500, 1);
					}
					StringCopy(&cLocal_3066, sParam0, 64);
				}
			}
			iLocal_3113 = 7;
		}
	}
	return 0;
}

int func_103(var uParam0, var uParam1, var uParam2)//Position - 0x5227
{
	if (iLocal_3035 != -1)
	{
		if (!func_11(Local_3015.f_14))
		{
			Local_2627 = { Local_3015.f_14 };
			*uParam0 = { Local_3015.f_7 };
			*uParam1 = { Local_3015.f_10 };
			*uParam2 = Local_3015.f_13;
		}
		else
		{
			*uParam0 = { Local_3015 };
			*uParam1 = { Local_3015.f_3 };
			*uParam2 = Local_3015.f_6;
		}
		if (!bLocal_2957)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2627, 30f, 30f, 2f, true, true, 0))
				{
					if (iLocal_418 == 0 || iLocal_418 == 4)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2994[0 /*20*/].f_6, 1);
							bLocal_2937 = true;
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2994[iLocal_3035 /*20*/].f_6))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2994[iLocal_3035 /*20*/].f_6, *uParam0, *uParam1, *uParam2, false, false, 0))
			{
				if (iLocal_2939)
				{
					func_104("TOWT_HELP_UH", -1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[iLocal_3035 /*20*/].f_6, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[iLocal_3035 /*20*/].f_6) || (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2994[iLocal_3035 /*20*/].f_6, false) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[iLocal_3035 /*20*/].f_6)))
					{
						if (func_47())
						{
							func_173();
						}
						func_147(&uLocal_397, 0, 0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_104(char* sParam0, int iParam1)//Position - 0x53B3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_105(char* sParam0, struct<3> Param1)//Position - 0x53CA
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (!bLocal_2943 && !bLocal_2954)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3107) && !ENTITY::IS_ENTITY_DEAD(iLocal_3107, false))
		{
			iVar2 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_3107);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
				{
					if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2) != Local_2994[0 /*20*/].f_6)
					{
						if (!iLocal_2970)
						{
							func_258(&uLocal_482, 3, iLocal_2982, "TONYA", 0, 1);
							if (func_172(&uLocal_482, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
							{
								iLocal_2970 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2970 = 0;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2994[iVar1 /*20*/].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[iVar1 /*20*/].f_6, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[iVar1 /*20*/].f_6) && func_111())
				{
					VEHICLE::SET_VEHICLE_SIREN(iLocal_3107, true);
					func_108();
					func_147(&uLocal_397, 0, 0);
					iLocal_466 = 1;
					if (iLocal_2959 && !PED::IS_PED_IN_VEHICLE(Local_2994[iVar1 /*20*/], iLocal_3107, false))
					{
						bVar0 = false;
						if (iLocal_3118 < 4)
						{
							SYSTEM::SETTIMERB(0);
							iLocal_3118 = 5;
						}
					}
					if (bVar0)
					{
						func_107(&iLocal_3092);
						HUD::SET_BLIP_ROUTE(Local_2994[iVar1 /*20*/].f_8, false);
						iLocal_2965 = 0;
						func_106(Local_2994[iVar1 /*20*/].f_8);
						Local_2994[iVar1 /*20*/].f_14 = func_4(&(Local_2994[iVar1 /*20*/].f_11));
						if (iLocal_2990 == 0)
						{
							Local_2994[iVar1 /*20*/].f_8 = HUD::ADD_BLIP_FOR_COORD(Param1);
							fLocal_428 = func_9(Param1, 0);
							Local_2623[0 /*3*/] = { Param1 };
						}
						if (iLocal_418 == 4)
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_2994[0 /*20*/].f_6, 0, false);
						}
						func_59(&iLocal_3098);
						HUD::SET_BLIP_COLOUR(Local_2994[iVar1 /*20*/].f_8, 5);
						HUD::SET_BLIP_ROUTE(Local_2994[iVar1 /*20*/].f_8, true);
						if (iLocal_418 == 0 && bLocal_2963)
						{
						}
						else if (iLocal_2930)
						{
							func_114(sParam0, 7500, 1);
							iLocal_2930 = 0;
						}
						StringCopy(&cLocal_3066, sParam0, 64);
						MISC::CLEAR_AREA_OF_VEHICLES(Local_2623[0 /*3*/], 6f, false, false, false, false, false, false, 0);
						iLocal_3035 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_106(int iParam0)//Position - 0x5609
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		HUD::REMOVE_BLIP(&iParam0);
	}
}

void func_107(int* iParam0)//Position - 0x5620
{
	func_57(iParam0);
	StringCopy(&cLocal_315, "", 32);
}

void func_108()//Position - 0x5635
{
	func_109("TOW_TUT_03");
	func_109("TOW_TUT_02");
	func_109("TOW_TUT_01");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03a");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03G");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03Ga");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJS_03");
}

void func_109(char* sParam0)//Position - 0x567D
{
	if (func_110(sParam0))
	{
		HUD::CLEAR_HELP(true);
	}
}

bool func_110(char* sParam0)//Position - 0x5693
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_111()//Position - 0x56A6
{
	if (bLocal_2957)
	{
		if (bLocal_2600 && !func_47())
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

void func_112()//Position - 0x56D0
{
	int iVar0;
	
	if (((!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6)) || (Global_114372.f_19976.f_3 == 0 || Global_114372.f_19976.f_3 > 2))
	{
		return;
	}
	switch (iLocal_3048)
	{
		case 0:
			if (!func_7(&iLocal_3104))
			{
				func_264(&iLocal_3104);
				iLocal_3048 = 1;
			}
			break;
		
		case 1:
			if (func_7(&iLocal_3104))
			{
				if (func_4(&iLocal_3104) > 10f)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !func_47())
					{
						iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
						if (iVar0 == 0)
						{
							func_104("TOW_TUT_04C", -1);
						}
						else if (iVar0 == 1)
						{
							func_104("TOW_TUT_02", -1);
						}
						else
						{
							func_104("TOW_TUT_04C", -1);
						}
						func_59(&iLocal_3104);
						iLocal_3048 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_7(&iLocal_3104))
			{
				if (func_4(&iLocal_3104) > 15f)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !func_47())
					{
						func_104("TOW_TUT_03", -1);
						func_59(&iLocal_3104);
						iLocal_3048 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_7(&iLocal_3104))
			{
				if (func_4(&iLocal_3104) > 15f)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !func_47())
					{
						func_104("TOW_TUT_01", -1);
						iLocal_3048 = 4;
					}
				}
			}
			break;
		
		case 4:
			break;
	}
}

void func_113(int iParam0, var uParam1)//Position - 0x5865
{
	if (func_11(Local_43[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.85141f, -1181.0723f, 21.06031f };
			uParam1->f_3 = { -230.46584f, -1163.1604f, 28.996408f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { Local_43[0 /*3*/] };
			break;
		
		case 1:
			*uParam1 = { -204.06029f, -1390.0239f, 30.253416f };
			uParam1->f_3 = { -207.56654f, -1382.5823f, 33.469368f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_43[1 /*3*/] };
			break;
		
		case 2:
			*uParam1 = { -204.06029f, -1390.0239f, 30.253416f };
			uParam1->f_3 = { -207.56654f, -1382.5823f, 33.469368f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_43[2 /*3*/] };
			break;
		
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_43[3 /*3*/] };
			break;
		
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_43[4 /*3*/] };
			break;
		
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_43[5 /*3*/] };
			break;
		
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_43[6 /*3*/] };
			break;
		
		case 7:
			*uParam1 = { 256.56226f, 2600.4578f, 43.3306f };
			uParam1->f_3 = { 268.67007f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_43[7 /*3*/] };
			break;
		
		case 8:
			*uParam1 = { 398.74713f, -1650.8059f, 27.293236f };
			uParam1->f_3 = { 434.1311f, -1610.0115f, 33.342937f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.28537f, -1632.597f, 28.29278f };
			uParam1->f_17 = { Local_68[0 /*3*/] };
			uParam1->f_7 = { 396.83475f, -1639.0447f, 27.292776f };
			uParam1->f_10 = { 408.0073f, -1625.6083f, 33.292774f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_114(char* sParam0, int iParam1, int iParam2)//Position - 0x5B45
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

int func_115(int iParam0, int iParam1, char* sParam2)//Position - 0x5B5E
{
	sParam2 = sParam2;
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_2956)
			{
				if ((func_122(Local_2994[iParam1 /*20*/].f_6, iLocal_3107, &iLocal_2601, 10, 150f, 4f, 1) || iLocal_2951) || iLocal_466)
				{
					if (!bLocal_2934)
					{
						iLocal_2601 = 0;
						func_121(&iLocal_2596);
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_2994[iParam1 /*20*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2994[iParam1 /*20*/], PLAYER::PLAYER_PED_ID(), -1);
						}
						bLocal_2934 = true;
					}
					if (bLocal_2934)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_3107, ENTITY::GET_ENTITY_COORDS(Local_2994[iParam1 /*20*/], true), 25f, 25f, 25f, false, true, 0))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2994[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								TASK::STOP_ANIM_TASK(Local_2994[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!func_120())
							{
								if (iLocal_418 == 1)
								{
									if (Global_114372.f_19976.f_5 == 0 || Global_114372.f_19976.f_5 == 1)
									{
										func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										func_258(&Local_2346, 5, Local_2994[iParam1 /*20*/], "TOWTRAINF", 0, 1);
										func_172(&Local_2346, "TOWAUD", "TOW_GREET", 9, 1, 0, 0);
									}
									else if (Global_114372.f_19976.f_5 == 2)
									{
										func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										func_258(&Local_2346, 6, Local_2994[iParam1 /*20*/], "TOWILLEGALMAN2", 0, 1);
										func_172(&Local_2346, "TOWAUD", "TOW_GREET2", 9, 1, 0, 0);
									}
									TASK::TASK_ENTER_VEHICLE(Local_2994[iParam1 /*20*/], iLocal_3107, 20000, 0, 2f, 1048577, 0, 0);
								}
								else if (iLocal_418 == 3)
								{
									if (Global_114372.f_19976.f_7 == 0 || Global_114372.f_19976.f_7 == 1)
									{
										func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										func_258(&Local_2346, 5, Local_2994[iParam1 /*20*/], "TOWBREAKM", 0, 1);
										func_172(&Local_2346, "TOWAUD", "TOW_BRK_GRT", 9, 1, 0, 0);
									}
									else if (Global_114372.f_19976.f_7 == 2)
									{
										func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										func_258(&Local_2346, 6, Local_2994[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
										func_172(&Local_2346, "TOWAUD", "TOW_BRK_GRT2", 9, 1, 0, 0);
									}
									TASK::TASK_ENTER_VEHICLE(Local_2994[iParam1 /*20*/], iLocal_3107, 20000, 0, 2f, 1048577, 0, 0);
								}
								if (iLocal_2951)
								{
									HUD::REMOVE_BLIP(&(Local_2994[iParam1 /*20*/].f_8));
									if (ENTITY::DOES_ENTITY_EXIST(Local_2994[iParam1 /*20*/]))
									{
										Local_2994[iParam1 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2994[iParam1 /*20*/]);
										HUD::SET_BLIP_COLOUR(Local_2994[iParam1 /*20*/].f_8, 3);
										HUD::SET_BLIP_SCALE(Local_2994[iParam1 /*20*/].f_8, 0.7f);
									}
								}
								SYSTEM::SETTIMERA(0);
								*iParam0 = 1;
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_3107, ENTITY::GET_ENTITY_COORDS(Local_2994[iParam1 /*20*/], true), 50f, 50f, 50f, false, true, 0))
						{
							if (!iLocal_2975)
							{
								if (Global_114372.f_19976.f_7 == 0 || Global_114372.f_19976.f_7 == 1)
								{
									func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									func_258(&Local_2346, 5, Local_2994[iParam1 /*20*/], "TOWBREAKM", 0, 1);
									if (func_172(&Local_2346, "TOWAUD", "TOW_CALLING", 9, 1, 0, 0))
									{
										iLocal_2975 = 1;
									}
								}
								else if (Global_114372.f_19976.f_7 == 2)
								{
									func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									func_258(&Local_2346, 6, Local_2994[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
									if (func_172(&Local_2346, "TOWAUD", "TOW_BRK_CALL", 9, 1, 0, 0))
									{
										iLocal_2975 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			bLocal_2938 = true;
			func_59(&iLocal_3098);
			func_59(&iLocal_3083);
			func_106(Local_2994[iParam1 /*20*/].f_8);
			if (!HUD::DOES_BLIP_EXIST(Local_2994[0 /*20*/].f_9))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2994[iParam1 /*20*/]))
				{
					Local_2994[0 /*20*/].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_2994[iParam1 /*20*/]);
					HUD::SET_BLIP_COLOUR(Local_2994[0 /*20*/].f_9, 3);
					HUD::SET_BLIP_SCALE(Local_2994[0 /*20*/].f_9, 0.7f);
				}
			}
			func_114("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			PED::ADD_RELATIONSHIP_GROUP("TOWBUDDIES", &iLocal_2993);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2993, joaat("PLAYER"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2994[iParam1 /*20*/], iLocal_2993);
			func_119(iParam1);
			*iParam0 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_IN_VEHICLE(Local_2994[iParam1 /*20*/], iLocal_3107, false))
			{
				if (func_116(&uLocal_3122, Local_2994[iParam1 /*20*/], 1125515264, 30000))
				{
					iLocal_3082 = 11;
					func_268();
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Local_2994[iParam1 /*20*/], iLocal_3107, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3107, 9);
					func_106(Local_2994[0 /*20*/].f_9);
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Local_2994[iParam1 /*20*/], iLocal_3107, false) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (iLocal_418 == 1)
				{
					if (Global_114372.f_19976.f_5 == 0 || Global_114372.f_19976.f_5 == 1)
					{
						if (iLocal_2951)
						{
							func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWTRAINF", 0, 1);
							func_172(&Local_2346, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
						else
						{
							func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWTRAINF", 0, 1);
							func_172(&Local_2346, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
					}
					else if (Global_114372.f_19976.f_5 == 2)
					{
						if (iLocal_2951)
						{
							func_258(&Local_2346, 6, Local_2994[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_172(&Local_2346, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
						else
						{
							func_258(&Local_2346, 6, Local_2994[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_172(&Local_2346, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
				else if (iLocal_418 == 3)
				{
					if (Global_114372.f_19976.f_7 == 0 || Global_114372.f_19976.f_7 == 1)
					{
						if (iLocal_2951)
						{
							func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWBREAKM", 0, 1);
							func_172(&Local_2346, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
						else
						{
							func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWBREAKM", 0, 1);
							func_172(&Local_2346, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
					}
					else if (Global_114372.f_19976.f_7 == 2)
					{
						if (iLocal_2951)
						{
							func_258(&Local_2346, 6, Local_2994[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_172(&Local_2346, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
						else
						{
							func_258(&Local_2346, 6, Local_2994[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_172(&Local_2346, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (PED::IS_PED_IN_VEHICLE(Local_2994[iParam1 /*20*/], iLocal_3107, false))
			{
				func_119(iParam1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
				{
					if (iLocal_2951 && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6))
					{
						return 1;
					}
				}
				if (!HUD::DOES_BLIP_EXIST(Local_2994[0 /*20*/].f_8))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2994[iParam1 /*20*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_2994[iParam1 /*20*/].f_6, false))
					{
						Local_2994[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2994[iParam1 /*20*/].f_6);
						HUD::SET_BLIP_COLOUR(Local_2994[iParam1 /*20*/].f_8, 3);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6))
					{
						func_114("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_3066, "TOWT_OBJ_03", 64);
					}
				}
				func_59(&iLocal_3083);
				*iParam0 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_116(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x634A
{
	struct<3> Var0;
	struct<3> Var3;
	
	iParam2 = iParam2;
	iParam3 = iParam3;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = func_117(iParam1, 1);
			*uParam0 = 1;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
			}
			if (SYSTEM::VDIST2(Var0, Var3) > 22500f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_117(int iParam0, bool bParam1)//Position - 0x63D5
{
	return func_118(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

float func_118(int iParam0, int iParam1, bool bParam2)//Position - 0x63ED
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

void func_119(int iParam0)//Position - 0x644B
{
	int iVar0;
	
	bLocal_2956 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_2994[iVar0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_2994[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_120()//Position - 0x648D
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_3107);
			if (fVar0 > 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_121(int iParam0)//Position - 0x64DB
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)//Position - 0x64FC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (bParam6)
			{
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && func_117(iParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || func_117(iParam0, 1) < 8f) && ENTITY::GET_ENTITY_SPEED(iParam1) < fParam5) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*iParam2 = 0;
				return 1;
			}
		}
	}
	if (bParam6)
	{
	}
	return 0;
}

void func_123()//Position - 0x65DE
{
	int iVar0;
	
	if (!bLocal_2938)
	{
		iVar0 = SYSTEM::ROUND(((300f - func_127(&iLocal_3098)) * 1000f));
		if (iLocal_418 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				func_124(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_124(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_124(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x664F
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_126(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1669875.f_1 = 1;
		func_125(7, iVar0);
		Global_1669875.f_4714[iVar0] = iParam0;
		StringCopy(&(Global_1669875.f_4714.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1669875.f_4714.f_172[iVar0] = iParam2;
		Global_1669875.f_4714.f_216[iVar0] = iParam3;
		Global_1669875.f_4714.f_183[iVar0] = iParam4;
		Global_1669875.f_4714.f_194[iVar0] = iParam5;
		Global_1669875.f_4714.f_249[iVar0] = iParam6;
		Global_1669875.f_4714.f_260[iVar0] = iParam7;
		Global_1669875.f_4714.f_205[iVar0] = iParam8;
		Global_1669875.f_4714.f_314[iVar0] = iParam9;
		Global_1669875.f_4714.f_325[iVar0] = iParam10;
		Global_1669875.f_4714.f_357[iVar0] = iParam11;
		Global_1669875.f_4714.f_238[iVar0] = iParam12;
		Global_1669875.f_4714.f_271[iVar0] = iParam13;
		Global_1669875.f_4714.f_368[iVar0] = iParam14;
		Global_1669875.f_4714.f_379[iVar0] = iParam15;
		Global_1669875.f_4714.f_390[iVar0] = iParam16;
		Global_1669875.f_4714.f_227[iVar0] = iParam17;
	}
}

void func_125(int iParam0, int iParam1)//Position - 0x67AC
{
	MISC::SET_BIT(&(Global_1669875.f_7064[iParam0]), iParam1);
}

int func_126(int iParam0, int iParam1)//Position - 0x67C5
{
	return BitTest(Global_1669875.f_7064[iParam0], iParam1);
}

float func_127(int* iParam0)//Position - 0x67DB
{
	if (func_7(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_128(int iParam0, bool bParam1)//Position - 0x6814
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_113007, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113007, iParam0);
	}
	Global_113006 = 1;
}

void func_129()//Position - 0x683D
{
	int iVar0;
	
	iVar0 = func_130(&Local_43, Local_2623[0 /*3*/], 400f);
	if (iVar0 != -1)
	{
		Local_2627 = { Local_43[iVar0 /*3*/] };
		func_113(iVar0, &Local_3015);
	}
	else
	{
		Local_2627 = { Local_43[0 /*3*/] };
	}
}

int func_130(var uParam0, struct<3> Param1, float fParam4)//Position - 0x6885
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_11(*(uParam0[iVar0 /*3*/])))
		{
			fVar3 = SYSTEM::VDIST2(*(uParam0[iVar0 /*3*/]), Param1);
			if (fVar3 < fVar2 && fVar3 > fParam4)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

int func_131(char* sParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0x68EF
{
	fLocal_428 = func_9(Local_3061, 0);
	Local_2623[0 /*3*/] = { Local_3061 };
	sLocal_3112 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_137(Local_3061, fLocal_3064, uParam2, 0))
		{
			func_136(Local_2994[0 /*20*/].f_6, &uLocal_3040, &uLocal_3042);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_2994[0 /*20*/].f_6, true);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2994[0 /*20*/].f_6, false);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2994[0 /*20*/].f_6, true, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2994[0 /*20*/].f_6, true);
			return 1;
		}
	}
	else if (func_132(bParam4, 0))
	{
		func_136(Local_2994[0 /*20*/].f_6, &uLocal_3040, &uLocal_3042);
		VEHICLE::SET_FORCE_HD_VEHICLE(Local_2994[0 /*20*/].f_6, true);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2994[0 /*20*/].f_6, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2994[0 /*20*/].f_6, true, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2994[0 /*20*/].f_6, true);
		return 1;
	}
	return 0;
}

int func_132(bool bParam0, int iParam1)//Position - 0x69D5
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_134(Local_648[iLocal_2602 /*23*/].f_1, Local_648[iLocal_2602 /*23*/].f_4, &iVar0, 0, iParam1))
	{
		return 0;
	}
	fLocal_428 = func_9(Local_648[iLocal_2602 /*23*/].f_1, 0);
	Local_2623[0 /*3*/] = { Local_648[iLocal_2602 /*23*/].f_1 };
	if (Local_648[iLocal_2602 /*23*/] == 2)
	{
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2994[0 /*20*/].f_6, 0f, 1.2f, 0f, 1600f, 1600f, true);
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2994[0 /*20*/].f_6, 0f, 0.75f, 0.05f, 1600f, 1600f, true);
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2994[0 /*20*/].f_6, -0.7f, 0f, 0f, 1600f, 1600f, true);
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2994[0 /*20*/].f_6, 0.7f, 0f, 0f, 1600f, 1600f, true);
	}
	else if (Local_648[iLocal_2602 /*23*/] == 4)
	{
		fLocal_3064 = -1f;
		iLocal_2948 = 1;
		iLocal_3108 = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), Local_1868[func_257() /*28*/].f_23, Local_1868[func_257() /*28*/].f_26, true, true, false);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3108, false))
		{
			VEHICLE::SET_VEHICLE_SIREN(iLocal_3108, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3108, true, true, false);
			iLocal_3109 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3108, 4, joaat("S_M_M_Paramedic_01"), -1, true, true);
		}
		if (!func_11(Local_1868[func_257() /*28*/].f_17))
		{
			iLocal_2345 = func_133(Local_1868[func_257() /*28*/].f_17, Local_1868[func_257() /*28*/].f_20);
		}
		switch (Local_648[iLocal_2602 /*23*/].f_21)
		{
			case 1:
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2994[0 /*20*/].f_6, -0.5223f, 2.455f, 0.0784f, 200f, 250f, true);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2994[0 /*20*/].f_6, -1f, 1.5f, -0.5f, 200f, 250f, true);
				break;
			
			case 0:
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2994[0 /*20*/].f_6, 0.6012f, 2.4222f, 0.0245f, 200f, 250f, true);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2994[0 /*20*/].f_6, 1f, 1.5f, -0.5f, 200f, 250f, true);
				break;
			
			case 2:
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2994[0 /*20*/].f_6, 0.1414f, 1.8401f, 0.0342f, 200f, 350f, true);
				break;
		}
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2994[0 /*20*/].f_6, 0, false, false);
	}
	if (bParam0)
	{
		bLocal_440 = true;
		if (Global_114372.f_19976.f_5 == 0 || Global_114372.f_19976.f_5 == 1)
		{
			Local_2994[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2994[0 /*20*/].f_6, 26, joaat("A_F_M_BevHills_01"), -1, true, true);
		}
		else if (Global_114372.f_19976.f_5 == 2)
		{
			Local_2994[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2994[0 /*20*/].f_6, 26, joaat("A_M_Y_GenStreet_02"), -1, true, true);
		}
		else
		{
			Local_2994[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2994[0 /*20*/].f_6, 26, uLocal_2987[0], -1, true, true);
		}
	}
	return 1;
}

int func_133(struct<3> Param0, struct<3> Param3)//Position - 0x6CDC
{
	PED::SET_PED_NON_CREATION_AREA(Param0, Param3);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Param0, Param3, true);
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0, Param3, false, true, true, true, 1);
}

int func_134(struct<3> Param0, float fParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x6D0E
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	*iParam4 = func_135(&Local_2994);
	if (*iParam4 == -1)
	{
		return 0;
	}
	if (iLocal_3037 >= 2)
	{
		iLocal_3037 = 0;
	}
	Local_2994[*iParam4 /*20*/].f_6 = VEHICLE::CREATE_VEHICLE(iLocal_2985[iLocal_3037], Param0, fParam3, true, true, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2994[*iParam4 /*20*/].f_6, true, 1);
	iLocal_3037++;
	fLocal_428 = func_9(Param0, 0);
	if (iLocal_418 == 1)
	{
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else
	{
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!func_11(Local_648[iLocal_2602 /*23*/].f_10))
	{
		Local_2994[*iParam4 /*20*/].f_17 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Local_648[iLocal_2602 /*23*/].f_10, fVar0, 0f, false);
	}
	else
	{
		Local_2994[*iParam4 /*20*/].f_17 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar0, 0f, false);
	}
	Local_2994[*iParam4 /*20*/].f_18 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar1, 2.5f, false);
	Local_2994[*iParam4 /*20*/].f_19 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar2, 4f, false);
	if (bParam5)
	{
		if (Local_2994[*iParam4 /*20*/].f_15)
		{
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_2994[*iParam4 /*20*/].f_6, true);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2994[*iParam4 /*20*/].f_6, 1f);
			VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_2994[*iParam4 /*20*/].f_6, true);
		}
		else
		{
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_2994[*iParam4 /*20*/].f_6, true);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2994[*iParam4 /*20*/].f_6, 1f);
			VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_2994[*iParam4 /*20*/].f_6, true);
		}
	}
	if (!bLocal_2956 && uParam6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2994[*iParam4 /*20*/].f_6))
		{
			Local_2994[*iParam4 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2994[*iParam4 /*20*/].f_6);
			HUD::SET_BLIP_COLOUR(Local_2994[*iParam4 /*20*/].f_8, 3);
		}
	}
	iLocal_3036++;
	func_264(&(Local_2994[*iParam4 /*20*/].f_11));
	return 1;
}

int func_135(int iParam0)//Position - 0x6EF0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((iParam0[iVar0 /*20*/])->f_6 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_136(int iParam0, var uParam1, var uParam2)//Position - 0x6F1C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam1 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		*uParam2 = *uParam1;
	}
}

int func_137(struct<3> Param0, float fParam3, var uParam4, int iParam5)//Position - 0x6F3C
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (!func_134(Param0, fParam3, uParam4, 1, iParam5))
	{
		return 0;
	}
	if (*uParam4 == -1)
	{
	}
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2994[*uParam4 /*20*/].f_6, 4, false, false);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Local_2994[*uParam4 /*20*/].f_6), &Var3, &Var6);
	Var9 = { Var6 - Var3 };
	Var9 = { Var9 / Vector(2f, 2f, 2f) };
	iLocal_2948 = 1;
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2994[*uParam4 /*20*/].f_6, 1.5f, 0f, 0f) };
	Var12 = { ENTITY::GET_ENTITY_COORDS(Local_2994[*uParam4 /*20*/].f_6, true) };
	fVar15 = ENTITY::GET_ENTITY_HEADING(Local_2994[*uParam4 /*20*/].f_6);
	iLocal_3046 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var12, fVar15, -1.5f, -30f, 0f), 10f, 0f, false);
	iLocal_3047 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var12, fVar15, -1.5f, 30f, 0f), 10f, 0f, false);
	MISC::CLEAR_AREA_OF_VEHICLES(Var0, 30f, false, false, false, false, false, false, 0);
	Local_1868[func_257() /*28*/][0 /*3*/] = { Var0.f_0, Var0.f_1, (Var0.f_2 + 1f) };
	return 1;
}

int func_138(var uParam0, float* fParam1, var* uParam2, var uParam3)//Position - 0x7056
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	int iVar10;
	
	fVar8 = 0f;
	fVar9 = 0f;
	iVar10 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 3999) / 1000);
	if (iVar10 == 0)
	{
		fVar8 = -MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	else if (iVar10 == 1)
	{
		fVar8 = MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 100f);
	}
	else if (iVar10 == 2)
	{
		fVar9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar8 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	else
	{
		fVar9 = -MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar8 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), fVar8, fVar9, 0f) };
	if (!PATHFIND::GET_RANDOM_VEHICLE_NODE(Var0, 10f, true, true, true, &Var5, &uVar4))
	{
		return 0;
	}
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var5, 2, uParam2, fParam1, &uVar3, 1, 3f, 0f);
	*uParam0 = { Var5 };
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
	{
		*uParam0 = { -476.1537f, 132.6556f, 62.9586f };
		*fParam1 = 87.951f;
	}
	if (func_139(*uParam0, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

bool func_139(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x7197
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_140(int iParam0)//Position - 0x71DE
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_142())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_141())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

bool func_141()//Position - 0x7237
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_142()//Position - 0x724D
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_143()//Position - 0x7263
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (HUD::DOES_BLIP_EXIST(Local_278[iVar0 /*3*/].f_1))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_278[iVar0 /*3*/], false))
			{
				HUD::REMOVE_BLIP(&(Local_278[iVar0 /*3*/].f_1));
			}
			else if (Local_278[iVar0 /*3*/].f_2 && func_117(Local_278[iVar0 /*3*/], 1) > 200f)
			{
				HUD::REMOVE_BLIP(&(Local_278[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_144()//Position - 0x72DD
{
	if (!MISC::ARE_STRINGS_EQUAL(&cLocal_270, ""))
	{
		if (!func_47())
		{
			func_172(&Local_94, &cLocal_270, &cLocal_274, 9, 0, 0, 0);
			StringCopy(&cLocal_270, "", 16);
		}
	}
}

void func_145(int* iParam0, float fParam1, bool bParam2)//Position - 0x7313
{
	if (func_146(iParam0, fParam1))
	{
		if (bParam2)
		{
			func_104(&cLocal_315, -1);
		}
		else
		{
			func_114(&cLocal_315, 7500, 1);
		}
	}
}

int func_146(int* iParam0, float fParam1)//Position - 0x7341
{
	if (func_3(iParam0, fParam1))
	{
		func_57(iParam0);
		return 1;
	}
	return 0;
}

void func_147(var uParam0, int iParam1, bool bParam2)//Position - 0x735F
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2738587.f_4697, 26))
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
		if (func_110(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_110(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_148(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x7439
{
	int iVar0;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam4;
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
	if (func_110(iVar0))
	{
		func_170();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_165(uParam0, bParam6, bParam8, 0))
		{
			func_164(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_153(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam7)
					{
						if (!func_110(iVar0))
						{
							func_104(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								func_152(1);
							}
						}
					}
				}
			}
		}
		else if (func_153(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam7)
				{
					if (!func_110(iVar0))
					{
						func_104(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
						{
							func_152(1);
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
			if (func_110(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
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
					func_147(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					func_147(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					func_147(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					func_147(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					func_147(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_147(uParam0, iVar0, 1);
			}
		}
		if (!func_165(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_151(uParam0))
			{
				func_149(uParam0);
			}
		}
	}
}

void func_149(var uParam0)//Position - 0x7713
{
	if (func_150(PLAYER::PLAYER_PED_ID()))
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

int func_150(int iParam0)//Position - 0x777C
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

int func_151(var uParam0)//Position - 0x77D7
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

int func_152(bool bParam0)//Position - 0x7802
{
	switch (Global_43922)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_114372.f_10052.f_100++;
			}
			return Global_114372.f_10052.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_114372.f_10052.f_101++;
			}
			return Global_114372.f_10052.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_114372.f_10052.f_102++;
			}
			return Global_114372.f_10052.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_153(char* sParam0)//Position - 0x78AC
{
	if (!func_154(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_110(sParam0)) || func_110("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_43922)
	{
		case 0:
		case 3:
			if (func_152(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_152(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_152(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_154(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7945
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
	if (func_163(0))
	{
		return 0;
	}
	if (func_162())
	{
		return 0;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	if (Global_76369)
	{
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_61219)
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
	if ((func_161() || func_160(Global_4718592.f_183007)) || func_159())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_158(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_157(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955039)
	{
		return 0;
	}
	if (func_155(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_155(int iParam0)//Position - 0x7B9E
{
	if (iParam0 != func_20())
	{
		if (func_156(iParam0, 1, 1))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575079 && iParam0 == PLAYER::PLAYER_ID()) && func_156(iParam0, 1, 0))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_156(int iParam0, bool bParam1, bool bParam2)//Position - 0x7C04
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
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_157(int iParam0, int iParam1)//Position - 0x7C64
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

int func_158(int iParam0, bool bParam1)//Position - 0x7CC6
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

var func_159()//Position - 0x7D4B
{
	return Global_2684312.f_19;
}

bool func_160(int iParam0)//Position - 0x7D59
{
	return iParam0 == 51;
}

var func_161()//Position - 0x7D66
{
	return Global_2684312.f_18;
}

bool func_162()//Position - 0x7D74
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

int func_163(int iParam0)//Position - 0x7D89
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

void func_164(var uParam0, struct<3> Param1, int iParam4)//Position - 0x7DE0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
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
	CAM::SET_GAMEPLAY_COORD_HINT(Param1, -1, iVar0, iVar1, iParam4);
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

int func_165(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x7E7C
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
					if (func_169(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_169(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_151(uParam0))
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
						if (!func_169(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_169(bParam1, bParam2, bParam3))
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
					if (!func_169(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_168(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
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
				else if (!func_169(bParam1, bParam2, bParam3))
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
						if (func_167(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_166(bParam1, bParam2, bParam3))
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
					else if (func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_151(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_154(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_170();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_166(bool bParam0, bool bParam1, bool bParam2)//Position - 0x81EB
{
	if (!func_154(bParam0, bParam1, bParam2))
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

int func_167(bool bParam0, bool bParam1, bool bParam2)//Position - 0x823D
{
	if (!func_154(bParam0, bParam1, bParam2))
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

int func_168(bool bParam0, bool bParam1, bool bParam2)//Position - 0x8286
{
	if (!func_154(bParam0, bParam1, bParam2))
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

int func_169(bool bParam0, bool bParam1, bool bParam2)//Position - 0x82E5
{
	if (!func_154(bParam0, bParam1, bParam2))
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

void func_170()//Position - 0x833B
{
	MISC::SET_BIT(&Global_8684, 4);
}

int func_171(bool bParam0)//Position - 0x834B
{
	if (bLocal_465 || iLocal_464)
	{
		return 0;
	}
	if (bParam0)
	{
		if (iLocal_466)
		{
			return 0;
		}
	}
	return 1;
}

bool func_172(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8376
{
	func_36(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22173 = 0;
	Global_22175 = 0;
	Global_22180 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_2883585 = 0;
	return func_15(sParam2, iParam3, 0);
}

void func_173()//Position - 0x83C4
{
	Global_21032 = 0;
	func_35();
}

int func_174()//Position - 0x83D4
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2982) && !ENTITY::IS_ENTITY_DEAD(iLocal_2982, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2982, true) };
	}
	if (SYSTEM::VDIST2(Var0, Var3) > 2500f)
	{
		if (!bLocal_2966)
		{
			func_175("TOW_TUT_RETONYA", 7500, 1);
			bLocal_2966 = true;
			if (!HUD::DOES_BLIP_EXIST(iLocal_423))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2982, false))
				{
					iLocal_423 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_2982);
					HUD::SET_BLIP_COLOUR(iLocal_423, 3);
					HUD::SET_BLIP_SCALE(iLocal_423, 0.5f);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_2994[0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_2994[0 /*20*/].f_8));
			}
		}
	}
	else if (bLocal_2966)
	{
		bLocal_2966 = false;
		if (HUD::DOES_BLIP_EXIST(iLocal_423))
		{
			HUD::REMOVE_BLIP(&iLocal_423);
		}
		if (!HUD::DOES_BLIP_EXIST(Local_2994[0 /*20*/].f_8))
		{
			Local_2994[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_COORD(Local_2623[0 /*3*/]);
			if (iLocal_466)
			{
				HUD::SET_BLIP_COLOUR(Local_2994[0 /*20*/].f_8, 5);
				HUD::SET_BLIP_ROUTE(Local_2994[0 /*20*/].f_8, true);
				HUD::SET_BLIP_ROUTE_COLOUR(Local_2994[0 /*20*/].f_8, 5);
			}
			else
			{
				HUD::SET_BLIP_COLOUR(Local_2994[0 /*20*/].f_8, 3);
				HUD::SET_BLIP_ROUTE(Local_2994[0 /*20*/].f_8, true);
				HUD::SET_BLIP_ROUTE_COLOUR(Local_2994[0 /*20*/].f_8, 3);
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, Var3) > 22500f)
	{
		if (bLocal_2966)
		{
			return 1;
		}
	}
	return 0;
}

void func_175(char* sParam0, int iParam1, int iParam2)//Position - 0x854F
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, false);
}

int func_176(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x8568
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_183(*uParam2, 1))
		{
			if (func_182(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_183(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_183(*uParam2, 4))
		{
			if (func_180(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_183(*uParam2, 8))
		{
			if (func_179(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_183(*uParam2, 128);
		if (bParam4)
		{
			if (func_177(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_183(*uParam2, 16))
		{
			if (func_177(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_177(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8692
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_393)
		{
			iLocal_394 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_393 = true;
		}
		iLocal_395 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_396 = (iLocal_394 - iLocal_395);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_396) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_393)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_396) > 100f)
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
	if (func_178(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_117(iParam0, 1) < 1.5f)
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

int func_178(int iParam0, int iParam1)//Position - 0x8864
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

int func_179(int iParam0, int iParam1, var uParam2)//Position - 0x88B9
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

int func_180(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x8907
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
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_181(iVar3))
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

int func_181(int iParam0)//Position - 0x8A80
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
						if (func_118(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
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

int func_182(int iParam0, var uParam1)//Position - 0x8B4E
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_117(iParam0, 1) < uParam1->f_2)
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

bool func_183(var uParam0, int iParam1)//Position - 0x8BD3
{
	return (uParam0 && iParam1) != 0;
}

void func_184(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, char* sParam6, char* sParam7, var uParam8, bool bParam9, var uParam10)//Position - 0x8BE2
{
	int iVar0;
	
	(*uParam4)[0] = (*uParam4)[0];
	iParam5 = iParam5;
	iVar0 = iVar0;
	bParam9 = bParam9;
	iVar0 = 0;
	while (iVar0 < iParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam4)[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam4)[iVar0], false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (func_176((*uParam4)[iVar0], 0, &uLocal_410, &iLocal_417, 0, 1, 0, 1, 1))
				{
					TASK::TASK_SMART_FLEE_PED((*uParam4)[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				}
			}
		}
		iVar0++;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_122(iParam1, iParam3, &iLocal_2601, 20, 70f, 65f, 0))
			{
				iLocal_2601 = 0;
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, false) && !ENTITY::IS_ENTITY_DEAD(iParam2, false))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(iParam2, iParam1, 50f, 786469);
					PED::SET_PED_KEEP_TASK(iParam2, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam2);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam1);
				}
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (iLocal_466)
			{
				func_59(&iLocal_2511);
				*uParam0 = 3;
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam4)[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam4)[iVar0], false))
					{
						if (func_117((*uParam4)[iVar0], 1) < 55f)
						{
							iLocal_469 = iVar0;
							iLocal_469 = iLocal_469;
							func_59(&iLocal_2511);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			if (!func_11(Local_1868[func_257() /*28*/].f_17))
			{
				func_185(iLocal_2345, Local_1868[func_257() /*28*/].f_17, Local_1868[func_257() /*28*/].f_20);
			}
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
			{
				if (!iLocal_455)
				{
					func_258(&uLocal_482, 3, *uParam8, "TONYA", 0, 1);
					if (func_172(&uLocal_482, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_455 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (!ENTITY::IS_ENTITY_DEAD((*uParam4)[iVar0], false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
					TASK::TASK_PLAY_ANIM(0, sParam6, (*sParam7)[iVar0], 4f, -4f, MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000), 0, 0f, false, false, false);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
					TASK::TASK_PERFORM_SEQUENCE((*uParam4)[iVar0], iLocal_419);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
				}
				iVar0++;
			}
			*uParam0 = 5;
			break;
		
		case 4:
			break;
		
		case 5:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
			{
				if (!iLocal_455)
				{
					func_258(&uLocal_482, 3, *uParam8, "TONYA", 0, 1);
					if (func_172(&uLocal_482, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_455 = 1;
					}
				}
				if (!iLocal_467)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam3, false) && !ENTITY::IS_ENTITY_DEAD(*uParam10, false))
					{
						if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam3, *uParam10))
						{
							if (!func_7(&iLocal_2526))
							{
								func_264(&iLocal_2526);
							}
							else if (func_4(&iLocal_2526) > 20f)
							{
								if (func_172(&uLocal_482, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
								{
									iLocal_467 = 1;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_185(int iParam0, struct<3> Param1, struct<3> Param4)//Position - 0x8F1C
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, false);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Param1, Param4, false);
}

int func_186(var uParam0, var uParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, float fParam8, char[4] cParam9, char* sParam10, int iParam11)//Position - 0x8F3C
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	
	Var3 = { *(uParam0[0 /*3*/]) };
	Var3.f_2 = (Var3.f_2 + 1f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &uVar0, false, false) || func_9(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		func_188(uParam1);
		MISC::CLEAR_AREA_OF_PEDS(Param2, 28f, 0);
		(uParam0[0 /*3*/])->f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < iParam11)
		{
			if (fParam8 == -1f)
			{
				fParam8 = func_187(*(uParam0[iVar2 /*3*/]), Param2);
			}
			else
			{
				fParam8 = (fParam8 + 180f);
			}
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
			{
				iVar1 = PED::CREATE_PED(4, joaat("A_M_M_Tourist_01"), *(uParam0[iVar2 /*3*/]), fParam8, true, true);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 1, 1, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Tourist_01"));
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
			{
				if (iVar2 == 0)
				{
					iVar1 = PED::CREATE_PED(4, joaat("A_M_Y_GenStreet_02"), *(uParam0[iVar2 /*3*/]), fParam8, true, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_GenStreet_02"));
				}
				else
				{
					iVar1 = PED::CREATE_PED(4, joaat("A_M_M_BevHills_02"), *(uParam0[iVar2 /*3*/]), fParam8, true, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_BevHills_02"));
				}
			}
			else
			{
				iVar1 = PED::CREATE_PED(4, (*uParam7)[(iVar2 % 2)], *(uParam0[iVar2 /*3*/]), fParam8, true, true);
			}
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar1, true, 1);
			fParam8 = -1f;
			if (iParam11 > 1)
			{
				(*uParam6)[iVar2] = iVar1;
			}
			else
			{
				*uParam5 = iVar1;
			}
			cParam9 = cParam9;
			(*sParam10)[iVar2] = (*sParam10)[iVar2];
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 42, true);
			PED::SET_PED_MOVEMENT_CLIPSET(iVar1, "move_m@JOG@", 0.25f);
			PED::SET_PED_RESET_FLAG(iVar1, 109, true);
			if (iLocal_418 == 3)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar6);
				TASK::OPEN_SEQUENCE_TASK(&iVar6);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, -1, 49, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iVar6);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					TASK::TASK_PERFORM_SEQUENCE(iVar1, iVar6);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iVar6);
			}
			iVar2++;
		}
		bLocal_440 = true;
		return 1;
	}
	else if (func_9(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
}

float func_187(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x918B
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_188(var uParam0)//Position - 0x91A5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_2554[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_2554[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_2554[iVar0 /*18*/].f_8 = { func_189(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0f) };
		}
		else
		{
			Local_2554[iVar0 /*18*/].f_8 = { func_189(0.5f, 1f, 0f) };
		}
		Local_2554[iVar0 /*18*/].f_11 = 2f;
		Local_2554[iVar0 /*18*/].f_12 = 1f;
		Local_2554[iVar0 /*18*/].f_13 = 1f;
		Local_2554[iVar0 /*18*/].f_14 = -1f;
		Local_2554[iVar0 /*18*/].f_15 = 0.1f;
		Local_2554[iVar0 /*18*/].f_17 = 0;
		Local_2554[iVar0 /*18*/].f_1 = 1110;
		Local_2554[iVar0 /*18*/] = GRAPHICS::ADD_DECAL(Local_2554[iVar0 /*18*/].f_1, Local_2554[iVar0 /*18*/].f_2, Local_2554[iVar0 /*18*/].f_5, Local_2554[iVar0 /*18*/].f_8, Local_2554[iVar0 /*18*/].f_11, Local_2554[iVar0 /*18*/].f_12, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		iVar0++;
	}
}

Vector3 func_189(struct<3> Param0)//Position - 0x92C2
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

int func_190()//Position - 0x9301
{
	func_193();
	switch (iLocal_3118)
	{
		case 0:
			func_258(&Local_2346, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			func_258(&Local_2346, 3, Local_2994[0 /*20*/], sLocal_2622, 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2994[0 /*20*/], true);
			iLocal_3039 = MISC::GET_RANDOM_INT_IN_RANGE(35, 80);
			iLocal_3118 = 1;
			break;
		
		case 1:
			TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
			TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/], iLocal_419);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
			if (func_9(Local_648[iLocal_2602 /*23*/].f_1, 1) < 40f || Local_2991.f_1 > 0)
			{
				if (iLocal_418 == 1)
				{
					if (Global_114372.f_19976.f_5 == 0 || Global_114372.f_19976.f_5 == 1)
					{
						func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWTRAINF", 0, 1);
						func_172(&Local_2346, "TOWAUD", "TOW_GETOUT", 8, 0, 0, 0);
						iLocal_3118 = 2;
					}
					else if (Global_114372.f_19976.f_5 == 2)
					{
						func_258(&Local_2346, 6, Local_2994[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
						func_172(&Local_2346, "TOWAUD", "TOW_GETOUT2", 8, 0, 0, 0);
						iLocal_3118 = 2;
					}
				}
			}
			else if (func_10(Local_2994[0 /*20*/].f_7, Local_648[iLocal_2602 /*23*/].f_1, 1) < IntToFloat(iLocal_3039 + 10))
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, 0f, false, false, false);
				iLocal_3118 = 2;
			}
			break;
		
		case 2:
			if (!func_11(Local_648[iLocal_2602 /*23*/].f_13))
			{
				Local_648[iLocal_2602 /*23*/].f_13.f_2 = 45f;
				Local_648[iLocal_2602 /*23*/].f_16.f_2 = -45f;
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2994[0 /*20*/].f_6, Local_648[iLocal_2602 /*23*/].f_13, Local_648[iLocal_2602 /*23*/].f_16, Local_648[iLocal_2602 /*23*/].f_19, false, true, 0))
				{
					func_121(&iLocal_2596);
					iLocal_2945 = 1;
					iLocal_2952 = 1;
					bLocal_425 = true;
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2994[0 /*20*/], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
						TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/], iLocal_419);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
						iLocal_3118 = 4;
					}
				}
			}
			if (func_10(Local_2994[0 /*20*/].f_7, Local_648[iLocal_2602 /*23*/].f_1, 1) < IntToFloat(iLocal_3039 + 15))
			{
				if (Global_114372.f_19976.f_5 == 0 || Global_114372.f_19976.f_5 == 1)
				{
					func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWTRAINF", 0, 1);
					func_172(&Local_2346, "TOWAUD", "TOW_GETOUT", 9, 0, 0, 0);
				}
				else if (Global_114372.f_19976.f_5 == 2)
				{
					func_258(&Local_2346, 6, Local_2994[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_172(&Local_2346, "TOWAUD", "TOW_GETOUT2", 9, 0, 0, 0);
				}
				func_121(&iLocal_2596);
				TASK::TASK_LOOK_AT_ENTITY(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_7, -1, 2, 2);
				SYSTEM::SETTIMERB(0);
				iLocal_3118 = 3;
			}
			break;
		
		case 3:
			if (func_10(Local_2994[0 /*20*/].f_7, Local_648[iLocal_2602 /*23*/].f_1, 1) < IntToFloat(iLocal_3039))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
				{
					if (iLocal_3038 == 1)
					{
						func_192(&Local_2991);
					}
					iLocal_2945 = 1;
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2994[0 /*20*/], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_GO_TO_COORD_ANY_MEANS(0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_648[iLocal_2602 /*23*/].f_1, Local_648[iLocal_2602 /*23*/].f_4, 0f, 15f, 0f), 3f, 0, false, 786603, -1f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_2994[0 /*20*/], 64, false);
						TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/], iLocal_419);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
						iLocal_3118 = 4;
					}
				}
			}
			break;
		
		case 4:
			if ((iLocal_3117 == 8 && iLocal_466) || func_191())
			{
				SYSTEM::SETTIMERB(3000);
				iLocal_3118 = 5;
			}
			break;
		
		case 5:
			iLocal_2951 = 1;
			if (SYSTEM::TIMERB() > 3000)
			{
				if (func_115(&iLocal_3115, 0, "TOW_TRAIN1"))
				{
					iLocal_3118 = 6;
				}
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

int func_191()//Position - 0x9772
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
	{
		if (bLocal_425)
		{
			switch (iLocal_3051)
			{
				case 0:
					if (TASK::GET_SEQUENCE_PROGRESS(Local_2994[0 /*20*/]) == 1)
					{
						iLocal_3051 = 1;
					}
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2994[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_3051 = 2;
					}
					break;
				
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_192(int iParam0)//Position - 0x97E4
{
	iParam0->f_1 = 0;
	CAM::DESTROY_CAM(*iParam0, false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

void func_193()//Position - 0x9805
{
	float fVar0;
	
	if (iLocal_2945 || ((!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false)) && !PED::IS_PED_IN_VEHICLE(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, false)))
	{
		if (iLocal_2596 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_2596);
			AUDIO::RELEASE_SOUND_ID(iLocal_2596);
			iLocal_2596 = -1;
			return;
		}
	}
	if (!iLocal_2936)
	{
		iLocal_2596 = AUDIO::GET_SOUND_ID();
		iLocal_2936 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2994[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop", 3))
		{
			fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_2994[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop");
			if (((fVar0 >= 0.19f && fVar0 <= 0.262f) || (fVar0 >= 0.4f && fVar0 <= 0.6f)) || (fVar0 >= 0.9f && fVar0 <= 1f))
			{
				if (fVar0 >= 0.19f && fVar0 <= 0.262f)
				{
				}
				if (fVar0 >= 0.4f && fVar0 <= 0.6f)
				{
				}
				if (fVar0 >= 0.9f && fVar0 <= 1f)
				{
				}
				if (!iLocal_2935)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_2596, "TOWING_ENGINE_TURNING_MASTER", Local_2994[0 /*20*/].f_6, 0, false, 0);
					iLocal_2935 = 1;
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_2596);
				iLocal_2935 = 0;
			}
		}
	}
}

void func_194()//Position - 0x9975
{
	int iVar0;
	
	func_196();
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_ADDITIONAL_TEXT(2, true);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2606))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_2606);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3107, 1);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_3107, false);
	}
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_3046);
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_3047);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3110, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3111, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_3058 - Vector(15f, 15f, 15f), Local_3058 + Vector(15f, 15f, 15f), true, true);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Local_2994[iVar0 /*20*/].f_17);
		VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Local_2994[iVar0 /*20*/].f_18);
		VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Local_2994[iVar0 /*20*/].f_19);
		iVar0++;
	}
	if (!func_11(Local_1868[func_257() /*28*/].f_17))
	{
		func_185(iLocal_2345, Local_1868[func_257() /*28*/].f_17, Local_1868[func_257() /*28*/].f_20);
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2994[0 /*20*/].f_6));
	if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2994[0 /*20*/]));
		if (ENTITY::DOES_ENTITY_EXIST(Local_2994[0 /*20*/]))
		{
			if (PED::IS_PED_IN_GROUP(Local_2994[0 /*20*/]))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_2994[0 /*20*/]);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2981))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2981, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2981);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3107, true, true);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3107);
	}
	if (iLocal_2961)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_2630, Local_2633, true, true);
	}
	if (iLocal_2958 && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_7, false))
	{
		VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Local_2994[0 /*20*/].f_7, true);
		VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(Local_2994[0 /*20*/].f_7), false);
		VEHICLE::SET_RANDOM_TRAINS(true);
		func_128(0, 1);
		func_128(1, 0);
		func_128(2, 0);
		func_128(3, 1);
		func_128(4, 0);
		func_128(5, 0);
		func_128(6, 0);
		func_128(7, 0);
		func_128(8, 0);
		func_128(9, 0);
		func_128(10, 0);
		func_128(11, 0);
	}
	func_121(&iLocal_2594);
	func_121(&iLocal_2595);
	func_195(&uLocal_3125);
	func_121(&iLocal_2596);
	func_147(&uLocal_397, 0, 0);
	if (CAM::DOES_CAM_EXIST(Local_2991.f_0))
	{
		func_192(&Local_2991);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_195(var uParam0)//Position - 0x9BE0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED((*uParam0)[iVar0], false);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_196()//Position - 0x9C17
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_142())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || func_141())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR" /* GXT: Playing story */, 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

int func_197()//Position - 0x9C5A
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_3107, false))
	{
		if (PED::IS_PED_IN_VEHICLE(Local_2994[0 /*20*/], iLocal_3107, false))
		{
			if (HUD::DOES_BLIP_EXIST(Local_2994[0 /*20*/].f_10))
			{
				HUD::REMOVE_BLIP(&(Local_2994[0 /*20*/].f_10));
				func_121(&iLocal_2596);
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, false))
		{
			func_121(&iLocal_2596);
		}
	}
	switch (iLocal_3117)
	{
		case 0:
			if (func_9(Local_648[iLocal_2602 /*23*/].f_1, 1) < 100f)
			{
				Local_2994[0 /*20*/].f_7 = VEHICLE::CREATE_MISSION_TRAIN(6, Local_648[iLocal_2602 /*23*/].f_6, Local_648[iLocal_2602 /*23*/].f_5, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2994[0 /*20*/].f_7))
				{
					Local_2994[0 /*20*/].f_10 = HUD::ADD_BLIP_FOR_ENTITY(Local_2994[0 /*20*/].f_7);
				}
				iLocal_2981 = PED::CREATE_PED_INSIDE_VEHICLE(Local_2994[0 /*20*/].f_7, 4, joaat("S_M_M_LSMetro_01"), -1, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2981, true);
				if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_7, false))
				{
					VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_2994[0 /*20*/].f_7, 0f);
				}
				func_114("TOW_OBJ_05", 7500, 1);
				SYSTEM::SETTIMERA(0);
				func_200("CROSSING_BELL", &iLocal_2597, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_3117 = 1;
			}
			break;
		
		case 1:
			if (func_9(Local_648[iLocal_2602 /*23*/].f_1, 1) < 80f || SYSTEM::TIMERA() > 10000)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3117 = 2;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_7, false))
			{
				VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_2994[0 /*20*/].f_7, 26f);
				VEHICLE::SET_TRAIN_SPEED(Local_2994[0 /*20*/].f_7, 22f);
			}
			iLocal_3117 = 3;
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_7, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
			{
				if (func_10(Local_2994[0 /*20*/].f_7, Local_648[iLocal_2602 /*23*/].f_1, 1) < 175f)
				{
					func_199(Local_2994[0 /*20*/].f_7);
					func_200("TOWING_TRAIN_BRAKES_MASTER", &iLocal_2595, 1, Local_2994[0 /*20*/].f_7, 0, 0, 0, 0);
					func_198(&uLocal_3125, Local_2994[0 /*20*/].f_7);
					func_200("TOWING_TRAIN_HORN_MASTER", &iLocal_2594, 1, Local_2994[0 /*20*/].f_7, 0, 0, 0, 0);
					iLocal_3117 = 4;
				}
			}
			else
			{
				iLocal_3117 = 8;
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_7, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
			{
				func_199(Local_2994[0 /*20*/].f_7);
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2994[0 /*20*/].f_6, Local_648[iLocal_2602 /*23*/].f_13, Local_648[iLocal_2602 /*23*/].f_16, Local_648[iLocal_2602 /*23*/].f_19, false, true, 0))
				{
					func_195(&uLocal_3125);
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_2994[0 /*20*/].f_7, true) };
				if (func_10(Local_2994[0 /*20*/].f_7, Local_648[iLocal_2602 /*23*/].f_1, 1) < 3f)
				{
					iLocal_2932 = 1;
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_2994[0 /*20*/].f_7, Local_2994[0 /*20*/].f_6))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6))
						{
							VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6);
						}
					}
					VEHICLE::EXPLODE_VEHICLE(Local_2994[0 /*20*/].f_6, true, false);
					iLocal_3117 = 6;
				}
				else if (func_10(Local_2994[0 /*20*/].f_6, Var0, 1) < 10f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2994[0 /*20*/].f_6, Local_648[iLocal_2602 /*23*/].f_13, Local_648[iLocal_2602 /*23*/].f_16, Local_648[iLocal_2602 /*23*/].f_19, false, true, 0))
				{
					iLocal_2932 = 1;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6))
						{
							VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6);
						}
					}
					VEHICLE::EXPLODE_VEHICLE(Local_2994[0 /*20*/].f_6, true, false);
				}
				if (iLocal_2932 && func_10(Local_2994[0 /*20*/].f_7, Local_648[iLocal_2602 /*23*/].f_1, 1) > 4f)
				{
					iLocal_3117 = 6;
				}
			}
			else
			{
				iLocal_3117 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_466)
			{
				func_114("TOWT_OBJ_03G", 7500, 1);
				if (HUD::DOES_BLIP_EXIST(Local_2994[0 /*20*/].f_10))
				{
					HUD::REMOVE_BLIP(&(Local_2994[0 /*20*/].f_10));
				}
			}
			HUD::REMOVE_BLIP(&(Local_2994[0 /*20*/].f_10));
			func_121(&iLocal_2594);
			func_121(&iLocal_2595);
			func_195(&uLocal_3125);
			func_121(&iLocal_2596);
			func_121(&iLocal_2597);
			iLocal_3117 = 7;
			break;
		
		case 7:
			if (!func_47())
			{
				if (!iLocal_466)
				{
					func_114("TOWT_OBJ_03G", 7500, 1);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3117 = 8;
			}
			break;
		
		case 8:
			break;
	}
	return 0;
}

void func_198(var uParam0, int iParam1)//Position - 0xA182
{
	(*uParam0)[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, -0.771f, 6.515f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, 0.771f, 6.515f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
	(*uParam0)[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, -0.771f, 3.781f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, 0.771f, 3.781f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
	(*uParam0)[4] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, -0.771f, -3.743f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[5] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, 0.7711f, -3.743f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
	(*uParam0)[6] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, -0.771f, -6.537f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[7] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, 0.771f, -6.537f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
}

int func_199(int iParam0)//Position - 0xA2F2
{
	float fVar0;
	
	if (!func_7(&iLocal_2591))
	{
		func_264(&iLocal_2591);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		}
		else
		{
			return 0;
		}
	}
	if (func_3(&iLocal_2591, 0.15f))
	{
		fLocal_2598 = (fVar0 - 0.35f);
		if (fLocal_2598 < 8f)
		{
			fLocal_2598 = 8f;
		}
		func_59(&iLocal_2591);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iParam0, fLocal_2598);
		VEHICLE::SET_TRAIN_SPEED(iParam0, fLocal_2598);
	}
	return 1;
}

void func_200(char* sParam0, int iParam1, bool bParam2, int iParam3, float fParam4, float fParam5, float fParam6, char* sParam7)//Position - 0xA377
{
	func_121(iParam1);
	if (bParam2)
	{
		*iParam1 = AUDIO::GET_SOUND_ID();
	}
	else
	{
		*iParam1 = -1;
	}
	if (iParam3 != 0)
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(*iParam1, sParam0, iParam3, sParam7, false, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(*iParam1, sParam0, fParam4, fParam5, fParam6, sParam7, false, 0, false);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(*iParam1, sParam0, sParam7, true);
	}
}

int func_201()//Position - 0xA3EE
{
	int iVar0;
	struct<3> Var1;
	
	func_211();
	switch (iLocal_3116)
	{
		case 0:
			if (bLocal_2963)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
				{
					Local_2994[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2994[0 /*20*/].f_6, 26, uLocal_2987[0], 1, true, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2994[0 /*20*/], true);
					func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					Local_2994[0 /*20*/].f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_2994[0 /*20*/].f_6, 26, iLocal_72, 2, true, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2994[0 /*20*/].f_1, true);
					PED::SET_PED_CONFIG_FLAG(Local_2994[0 /*20*/].f_1, 42, true);
					func_258(&Local_2346, 6, Local_2994[0 /*20*/].f_1, "TOWSEXPRISSYGUY", 0, 1);
					TASK::TASK_PLAY_ANIM(Local_2994[0 /*20*/], "oddjobs@towing", "m_blow_job_loop", 1000f, -8f, -1, 1, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(Local_2994[0 /*20*/].f_1, "oddjobs@towing", "f_blow_job_loop", 1000f, -8f, -1, 1, 0f, false, false, false);
					if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2994[0 /*20*/].f_6, 10);
					}
					bLocal_440 = true;
					func_258(&Local_2346, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
			}
			else if (bLocal_2964)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
				{
					Local_2994[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2994[0 /*20*/].f_6, 26, uLocal_2987[0], 0, true, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2994[0 /*20*/], true);
					PED::SET_PED_CONFIG_FLAG(Local_2994[0 /*20*/], 42, true);
					func_258(&Local_2346, 2, Local_2994[0 /*20*/], sLocal_2622, 0, 1);
					TASK::TASK_PLAY_ANIM(Local_2994[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, 0f, false, false, false);
					bLocal_440 = true;
				}
			}
			else if (func_210())
			{
				bLocal_2962 = true;
			}
			else
			{
				bLocal_2962 = false;
			}
			iLocal_3116 = 1;
			break;
		
		case 1:
			if (bLocal_2963)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_2994[0 /*20*/].f_6, true), 15f, 15f, 15f, false, true, 0))
					{
						if (!iLocal_3134)
						{
							if (func_172(&Local_2346, "TOWAUD", "TOW_SEX_SNDS", 9, 0, 0, 0))
							{
								iLocal_3134 = 1;
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6) || func_209(iLocal_3107, Local_2994[0 /*20*/].f_6, !(bLocal_2963 || bLocal_2964)))
				{
					if (func_209(iLocal_3107, Local_2994[0 /*20*/].f_6, !(bLocal_2963 || bLocal_2964)))
					{
						bLocal_2977 = true;
					}
					if (!bLocal_2964)
					{
						func_208(&iLocal_3101, 1f);
					}
					else
					{
						func_264(&iLocal_3101);
					}
				}
			}
			if (func_7(&iLocal_3101) && func_4(&iLocal_3101) > 1f)
			{
				if (bLocal_2963 && func_7(&iLocal_3101))
				{
					if (func_47())
					{
						func_173();
					}
					iLocal_2974 = 0;
					if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 750, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_b", "idle_d", -8f, 0.25f, -1, 1, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
						TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/], iLocal_419);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_2994[0 /*20*/], 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_a", "idle_c", 0.25f, 0.25f, 30000, 1, 0f, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, Local_2994[0 /*20*/], 1000f, -1, false, false);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
						if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_1, false))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/].f_1, iLocal_419);
						}
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
					}
					iLocal_3116 = 2;
				}
				else if (bLocal_2964)
				{
					if ((Global_114372.f_19976.f_4 % 2) == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_GO_TO_ENTITY(0, iLocal_3107, 20000, 9f, 1f, 2f, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_PLAY_ANIM(0, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, 0f, false, false, false);
							TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
							TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/], iLocal_419);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
						}
						func_258(&Local_2346, 2, Local_2994[0 /*20*/], "TOWABDBITCHM", 0, 1);
						func_172(&Local_2346, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
						{
							func_207(Local_2994[0 /*20*/]);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2994[0 /*20*/], 0, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2994[0 /*20*/], 1, false);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
							TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/], iLocal_419);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
							if (ENTITY::DOES_ENTITY_EXIST(Local_2994[0 /*20*/]))
							{
								iLocal_2984 = HUD::ADD_BLIP_FOR_ENTITY(Local_2994[0 /*20*/]);
								HUD::SET_BLIP_COLOUR(iLocal_2984, 1);
								HUD::SET_BLIP_SCALE(iLocal_2984, 0.7f);
								func_206(Local_2994[0 /*20*/], iLocal_2984, 1);
							}
							bLocal_2962 = true;
						}
						func_172(&Local_2346, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
					}
					iLocal_3116 = 2;
				}
				else if (bLocal_2962)
				{
					Local_2994[0 /*20*/] = PED::CREATE_PED(4, uLocal_2987[0], Local_648[iLocal_2602 /*23*/].f_6, Local_648[iLocal_2602 /*23*/].f_9, true, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2994[0 /*20*/], true);
					PED::SET_PED_CONFIG_FLAG(Local_2994[0 /*20*/], 42, true);
					bLocal_440 = true;
					sLocal_2616 = "TOW_PED_ANGR";
					bLocal_440 = false;
					if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
						TASK::TASK_GO_TO_ENTITY(0, iLocal_3107, 20000, 15f, 3f, 2f, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
						TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/], iLocal_419);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
					}
					iLocal_3116 = 3;
				}
				else
				{
					Local_2994[0 /*20*/] = PED::CREATE_PED(4, uLocal_2987[0], Local_648[iLocal_2602 /*23*/].f_6, Local_648[iLocal_2602 /*23*/].f_9, true, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2994[0 /*20*/], true);
					PED::SET_PED_CONFIG_FLAG(Local_2994[0 /*20*/], 42, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2994[0 /*20*/], true, 1);
					bLocal_440 = true;
					sLocal_2616 = "TOW_ILLEG1";
					if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
						TASK::TASK_GOTO_ENTITY_OFFSET(0, PLAYER::PLAYER_PED_ID(), 20000, 12f, 0f, 3f, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
						TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/], iLocal_419);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
					}
					iLocal_3116 = 3;
				}
			}
			break;
		
		case 2:
			if (bLocal_2963)
			{
				if (!bLocal_2971)
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6) || bLocal_2977)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_47())
							{
								if (func_172(&Local_2346, "TOWAUD", "TOW_SEX_INIT", 9, 0, 0, 0))
								{
									bLocal_2971 = true;
								}
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_2994[0 /*20*/], false))
				{
					if (bLocal_2964)
					{
						if (!func_47())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_2994[0 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
							{
								if (TASK::GET_SEQUENCE_PROGRESS(Local_2994[0 /*20*/]) == 2)
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
									{
										Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
									}
									if (SYSTEM::VDIST2(Var1, ENTITY::GET_ENTITY_COORDS(Local_2994[0 /*20*/], true)) < 400f)
									{
										if ((Global_114372.f_19976.f_4 % 2) == 0)
										{
											func_172(&Local_2346, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
										}
										else
										{
											func_172(&Local_2346, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
										}
									}
									iLocal_3116 = 8;
								}
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
					{
						if (func_205() || (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6) && !bLocal_2977))
						{
							func_173();
							iLocal_3116 = 5;
						}
						else if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6) && bLocal_2977)
						{
							if (bLocal_2971)
							{
								if (!func_47())
								{
									iLocal_3116 = 5;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
			{
				if (func_118(Local_2994[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
				{
					TASK::CLEAR_PED_TASKS(Local_2994[0 /*20*/]);
					if (bLocal_2962)
					{
						TASK::TASK_COMBAT_PED(Local_2994[0 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_419);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, 5000, 0, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_419);
						TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/], iLocal_419);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_419);
					}
					iLocal_2947 = 1;
					if (bLocal_2963)
					{
						iLocal_3116 = 5;
					}
					else
					{
						iLocal_3116 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_2994[0 /*20*/]))
			{
				Local_2994[0 /*20*/].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_2994[0 /*20*/]);
				if (bLocal_2962)
				{
					HUD::SET_BLIP_COLOUR(Local_2994[0 /*20*/].f_9, 1);
					HUD::SET_BLIP_SCALE(Local_2994[0 /*20*/].f_9, 0.7f);
				}
				else
				{
					HUD::SET_BLIP_COLOUR(Local_2994[0 /*20*/].f_9, 3);
					HUD::SET_BLIP_SCALE(Local_2994[0 /*20*/].f_9, 0.7f);
				}
			}
			if (bLocal_2962)
			{
				if (iLocal_418 == 0)
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
					func_204(Local_2346, "TOWAUD", "TOW_PED_ANGR", 0);
				}
				else
				{
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_258(&Local_2346, 2, Local_2994[0 /*20*/], "TOWABDATTACKM", 0, 1);
					func_204(Local_2346, "TOWAUD", "TOW_HOM_DRG", 0);
				}
			}
			else
			{
				func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				func_258(&Local_2346, 3, Local_2994[0 /*20*/], sLocal_2622, 0, 1);
				func_204(Local_2346, "TOWAUD", sLocal_2616, 0);
			}
			bLocal_2955 = true;
			SYSTEM::SETTIMERA(0);
			if (bLocal_2962)
			{
				func_59(&iLocal_3095);
				iLocal_3116 = 6;
			}
			else
			{
				iLocal_3116 = 5;
			}
			break;
		
		case 5:
			if (!func_47())
			{
				if (bLocal_2963)
				{
					SYSTEM::SETTIMERB(0);
				}
				func_59(&iLocal_3095);
				if ((!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3107, false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6))
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, true);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2994[0 /*20*/].f_6, 1);
						}
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_ENTER_VEHICLE(0, Local_2994[0 /*20*/].f_6, 20000, -1, 2f, 1, 0, 0);
						TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_2994[0 /*20*/].f_6, 5f, 786597);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/], iVar0);
						}
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						bLocal_3135 = true;
					}
				}
				iLocal_3116 = 6;
			}
			break;
		
		case 6:
			func_202(0);
			if (!bLocal_2969)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6))
					{
						if (bLocal_2963)
						{
							if (SYSTEM::TIMERB() > 8000)
							{
								func_59(&iLocal_3095);
								if (!bLocal_3135)
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2994[0 /*20*/].f_6, 1);
									TASK::TASK_ENTER_VEHICLE(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, 20000, -1, 2f, 1, 0, 0);
								}
								iLocal_3116 = 7;
							}
						}
						else
						{
							func_59(&iLocal_3095);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2994[0 /*20*/].f_6, 1);
							TASK::TASK_ENTER_VEHICLE(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, 20000, -1, 2f, 1, 0, 0);
							iLocal_3116 = 7;
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
					{
						if (SYSTEM::TIMERB() > 7000)
						{
							if (!bLocal_2962)
							{
								if (PED::IS_PED_IN_VEHICLE(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, false))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false))
									{
										if (ENTITY::GET_ENTITY_SPEED(iLocal_3107) < 2f)
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_2994[0 /*20*/], joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1)
											{
												TASK::TASK_VEHICLE_DRIVE_WANDER(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, 2f, 786597);
											}
										}
										else
										{
											TASK::CLEAR_SEQUENCE_TASK(&iVar0);
											TASK::OPEN_SEQUENCE_TASK(&iVar0);
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 5000, 4096);
											TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iVar0);
											if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
											{
												TASK::TASK_PERFORM_SEQUENCE(Local_2994[0 /*20*/], iVar0);
											}
											TASK::CLEAR_SEQUENCE_TASK(&iVar0);
											iLocal_3116 = 7;
										}
									}
								}
								else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false))
								{
									if (ENTITY::GET_ENTITY_SPEED(iLocal_3107) < 5f)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_2994[0 /*20*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
										{
											if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_2994[0 /*20*/].f_6, -1, false))
											{
												TASK::TASK_ENTER_VEHICLE(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, -1, -1, 2f, 1, 0, 0);
											}
										}
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(Local_2994[0 /*20*/], joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")) != 1)
									{
										TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, true);
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 7:
			func_202(1);
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_2994[0 /*20*/], false) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6))
			{
				if (bLocal_2962)
				{
					sLocal_2616 = "TOW_PED_ANTH";
				}
				else if (bLocal_2963)
				{
					sLocal_2616 = "TOW_ILLEG_SE";
				}
				bLocal_2968 = true;
				func_172(&Local_2346, "TOWAUD", sLocal_2616, 9, 0, 0, 0);
				bLocal_2955 = false;
				TASK::TASK_VEHICLE_DRIVE_WANDER(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, 5f, 786597);
				iLocal_3116 = 8;
				return 1;
			}
			break;
		
		case 8:
			iLocal_2947 = 0;
			bLocal_2955 = false;
			if (HUD::DOES_BLIP_EXIST(Local_2994[0 /*20*/].f_9))
			{
				HUD::REMOVE_BLIP(&(Local_2994[0 /*20*/].f_9));
			}
			break;
	}
	return 0;
}

void func_202(bool bParam0)//Position - 0xB285
{
	int iVar0;
	float fVar1;
	char* sVar2;
	
	iVar0 = 0;
	fVar1 = func_118(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3107, false) && !ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3107, Local_2994[0 /*20*/].f_6) && !PED::IS_PED_IN_VEHICLE(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_6, false))
			{
				iVar0 = 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2994[0 /*20*/], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2994[0 /*20*/], true))
		{
			func_59(&iLocal_3095);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_2994[0 /*20*/]);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
	{
		iLocal_3116 = 8;
	}
	else if (((fVar1 > 35f || (func_4(&iLocal_3095) > 30f && fVar1 > 5f)) || iVar0) || (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)))
	{
		if (bLocal_2962)
		{
			func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
			sVar2 = "TOW_PED_ANCU";
		}
		else if (bLocal_2963)
		{
			func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
			sVar2 = "TOW_YELL";
		}
		else
		{
			func_258(&Local_2346, 6, Local_2994[0 /*20*/], "TOWABDHANDMAN1", 0, 1);
			sVar2 = "TOW_PED_ANC2";
		}
		uLocal_2978[0] = Local_2994[0 /*20*/];
		uLocal_2978[1] = Local_2994[0 /*20*/].f_1;
		bLocal_2969 = true;
		func_203(Local_2346, "TOWAUD", sVar2, &uLocal_2978, 0);
		HUD::REMOVE_BLIP(&(Local_2994[0 /*20*/].f_9));
		if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/], false))
		{
			TASK::CLEAR_PED_TASKS(Local_2994[0 /*20*/]);
			TASK::TASK_SMART_FLEE_PED(Local_2994[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
		}
		iLocal_3116 = 8;
	}
}

int func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)//Position - 0xB47B
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	iVar2 = 75;
	if (bParam168)
	{
		iVar2 = 100;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_117((*uParam167)[iVar0], 1) > IntToFloat(iVar2))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		func_172(&uParam0, cParam165, sParam166, 9, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_204(struct<165> Param0, char* sParam165, char* sParam166, bool bParam167)//Position - 0xB4D7
{
	if (bParam167)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	StringCopy(&cLocal_270, sParam165, 16);
	StringCopy(&cLocal_274, sParam166, 16);
	Local_94 = { Param0 };
}

int func_205()//Position - 0xB502
{
	switch (iLocal_3119)
	{
		case 0:
			if (TASK::GET_SEQUENCE_PROGRESS(Local_2994[0 /*20*/]) >= 1 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				iLocal_3119 = 1;
			}
			break;
		
		case 1:
			if (bLocal_2971 && !iLocal_2972)
			{
				if (!func_47())
				{
					if (!iLocal_2973)
					{
						if (!bLocal_2977)
						{
							func_114("TOWT_OBJ_06", 7500, 1);
							iLocal_2973 = 1;
						}
					}
					if (iLocal_2973 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_2994[0 /*20*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2994[0 /*20*/], Local_2994[0 /*20*/].f_1, 0);
						}
						iLocal_2972 = 1;
						iLocal_3119 = 2;
					}
				}
			}
			if (func_117(Local_2994[0 /*20*/], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(true);
				return 1;
			}
			break;
		
		case 2:
			if (func_117(Local_2994[0 /*20*/], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(true);
				return 1;
			}
			if (!func_47())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_206(int iParam0, int iParam1, int iParam2)//Position - 0xB609
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_278[iVar0 /*3*/] == iParam0 && !HUD::DOES_BLIP_EXIST(Local_278[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_278[iVar0 /*3*/].f_1))
		{
			Local_278[iVar0 /*3*/] = iParam0;
			Local_278[iVar0 /*3*/].f_1 = iParam1;
			Local_278[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_207(int iParam0)//Position - 0xB68C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			PED::SET_PED_COMBAT_ABILITY(iParam0, 1);
			PED::SET_PED_COMBAT_RANGE(iParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 23, false);
			PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_MICROSMG"), 1000, true, true);
			PED::SET_PED_SHOOT_RATE(iParam0, 500);
		}
	}
}

void func_208(int* iParam0, float fParam1)//Position - 0xB6DF
{
	if (!func_7(iParam0))
	{
		func_60(iParam0, fParam1);
	}
}

int func_209(int iParam0, int iParam1, bool bParam2)//Position - 0xB6F9
{
	int iVar0;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = 0;
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_117(iParam1, 1) < 40f)
	{
		iVar0 = 1;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
	{
		iVar0 = 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
	{
		iVar0 = 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_210()//Position - 0xB76B
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_211()//Position - 0xB789
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!iLocal_2944)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2994[0 /*20*/].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2994[0 /*20*/].f_6, false))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(Local_2994[0 /*20*/].f_6, true) };
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		if (bLocal_2963)
		{
			if (SYSTEM::VDIST2(Var0, Var3) < 25f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(true);
				if (!func_47())
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_2994[0 /*20*/], PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
					func_258(&Local_2346, 5, Local_2994[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					if (func_172(&Local_2346, "TOWAUD", "TOW_HANDI_CL", 9, 0, 0, 0))
					{
						iLocal_2944 = 1;
					}
				}
			}
		}
	}
}

int func_212(int iParam0, int iParam1)//Position - 0xB84D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_7(&iLocal_432))
	{
		func_59(&iLocal_432);
	}
	if (func_117(iParam0, 0) < 15f)
	{
		fLocal_429 = 0.3f;
		fLocal_430 = 0.5f;
		fLocal_431 = 0.1f;
	}
	else if (func_117(iParam0, 0) < 40f)
	{
		fLocal_429 = 0.6f;
		fLocal_430 = 1f;
		fLocal_431 = 0.2f;
	}
	if (func_3(&iLocal_432, MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_429, fLocal_430)))
	{
		func_59(&iLocal_432);
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, 0f, 0f, fLocal_431, -0.0067f, -0.8283f, -0.2766f, 0, true, true, true, true, true);
	}
	return 1;
}

void func_213()//Position - 0xB91D
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_214();
}

void func_214()//Position - 0xB92D
{
	Global_23572.f_134 = 1;
}

int func_215(int iParam0, int iParam1, struct<7> Param2, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, int* iParam22, var uParam23, char* sParam24, var uParam25, bool bParam26, var uParam27)//Position - 0xB93B
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iLocal_2599 != 12)
	{
		func_219(Param2, iParam0, iParam1);
	}
	if (!bLocal_465)
	{
		if (iLocal_2599 >= 6 && iLocal_2599 <= 11)
		{
			if (bParam26)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 400.28537f, -1632.597f, 28.29278f, 5f, 5f, 2f, true, true, 0))
					{
					}
				}
			}
		}
		switch (iLocal_2599)
		{
			case 0:
				if (func_122(iParam1, iParam0, &iLocal_2601, 10, 90f, 100f, 0))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, false);
					func_258(&Local_2346, 3, *uParam27, "TONYA", 0, 1);
					func_258(&Local_2346, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_172(&Local_2346, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_2599 = 1;
				}
				break;
			
			case 1:
				if (!func_47())
				{
					func_104("TOW_TUT_03", -1);
					SYSTEM::SETTIMERA(0);
					iLocal_2599 = 2;
				}
				break;
			
			case 2:
				if (iLocal_466)
				{
					HUD::CLEAR_HELP(true);
					iLocal_2599 = 4;
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (((SYSTEM::TIMERA() > 12000 || func_118(iParam0, iParam1, 1) < 15f) && func_118(iParam0, iParam1, 1) < 30f) && !func_47())
					{
						func_172(&Local_2346, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_2599 = 3;
					}
				}
				break;
			
			case 3:
				if (!iLocal_466)
				{
					if (!func_47() && !func_110("TOW_TUT_03"))
					{
						func_218("TOW_TUT_02");
						iLocal_2599 = 4;
					}
				}
				else
				{
					iLocal_2599 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERA() > 5000 || iLocal_466)
				{
					if ((SYSTEM::TIMERA() > 12000 || func_118(iParam0, iParam1, 1) < 7.5f) || (iLocal_466 && func_118(iParam0, iParam1, 1) < 30f))
					{
						iLocal_441 = 1;
						iLocal_441 = iLocal_441;
						func_218("TOW_TUT_01");
						iLocal_2599 = 5;
					}
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 8000)
				{
					iLocal_2599 = 6;
				}
				break;
			
			case 6:
				if ((!func_47() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && SYSTEM::TIMERA() > 12000)
				{
					if (!iLocal_458)
					{
						func_104("TOWT_HELP_CR", -1);
						iLocal_458 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param2, Param2.f_3, Param2.f_6, false, false, 0))
				{
					func_172(&Local_2346, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (HUD::DOES_BLIP_EXIST(*iParam22))
					{
						HUD::SET_BLIP_ROUTE(*iParam22, false);
						HUD::REMOVE_BLIP(iParam22);
					}
					StringCopy(sParam24, "TOW_TUT_04A", 64);
					*(uParam23[0 /*3*/]) = { Param2.f_14 };
					fLocal_428 = func_9(Param2.f_14, 0);
					*iParam22 = HUD::ADD_BLIP_FOR_COORD(Param2.f_14);
					SYSTEM::SETTIMERB(0);
					iLocal_2599 = 7;
				}
				break;
			
			case 7:
				if (!func_47())
				{
					if (SYSTEM::TIMERB() > 6000)
					{
						SYSTEM::SETTIMERA(0);
						func_114("TOW_TUT_04A", 7500, 1);
						iLocal_2599 = 9;
					}
				}
				break;
			
			case 9:
				if (func_11(Param2.f_14))
				{
					iLocal_2599 = 10;
				}
				if (!func_47())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param2, Param2.f_3, Param2.f_6, false, true, 0))
					{
						iLocal_468 = MISC::GET_GAME_TIMER();
						if (bLocal_442)
						{
							HUD::SET_BLIP_ROUTE(*iParam22, false);
							HUD::REMOVE_BLIP(iParam22);
							*(uParam23[0 /*3*/]) = { Param2.f_14 };
							fLocal_428 = func_9(Param2.f_14, 0);
							*iParam22 = HUD::ADD_BLIP_FOR_COORD(Param2.f_14);
						}
						if (HUD::DOES_BLIP_EXIST(*iParam22))
						{
							HUD::SET_BLIP_COLOUR(*iParam22, 5);
						}
						iLocal_2599 = 10;
					}
				}
				break;
			
			case 10:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var3 = { Param2.f_10 };
					fVar6 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var3 = { Param2.f_3 };
					fVar6 = Param2.f_6;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Var0, Var3, fVar6, false, true, 0))
				{
					func_104("TOWT_HELP_UH", -1);
					func_217();
					if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1))
						{
							iLocal_2599 = 11;
						}
					}
				}
				else
				{
					func_216();
				}
				break;
			
			case 11:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var3 = { Param2.f_10 };
					fVar6 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var3 = { Param2.f_3 };
					fVar6 = Param2.f_6;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Var0, Var3, fVar6, false, true, 0))
				{
					func_104("TOWT_HELP_UH", -1);
					func_217();
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1))
					{
						HUD::CLEAR_HELP(true);
						HUD::CLEAR_PRINTS();
						func_147(&uLocal_397, 0, 0);
						iLocal_2599 = 12;
					}
				}
				break;
			
			case 12:
				break;
		}
		if (bParam26)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1) && !bLocal_2600)
				{
					if (func_47())
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
						func_173();
						iLocal_2599 = 6;
					}
					else
					{
						func_106(*iParam22);
						SYSTEM::SETTIMERA(0);
						iLocal_2599 = 6;
						func_172(&Local_2346, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_2600 = true;
					}
				}
			}
			if (!iLocal_460)
			{
				if (bLocal_2600)
				{
					if (!func_47())
					{
						HUD::CLEAR_HELP(true);
						func_114("TOWT_OBJ_06", 7500, 1);
						iLocal_460 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_216()//Position - 0xBF0E
{
	switch (iLocal_474)
	{
		case 0:
			if (!func_7(&iLocal_2523))
			{
				func_264(&iLocal_2523);
			}
			else if (func_4(&iLocal_2523) > 10f)
			{
				if (func_172(&uLocal_482, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_474 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_47())
			{
				if (func_172(&uLocal_482, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					func_59(&iLocal_2523);
					iLocal_474 = 2;
				}
			}
			break;
		
		case 2:
			if (func_7(&iLocal_2523))
			{
				if (func_4(&iLocal_2523) > 15f)
				{
					if (!func_47())
					{
						if (func_172(&uLocal_482, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_474 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_217()//Position - 0xBFE6
{
	if (!iLocal_457)
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!func_47())
			{
				if (func_172(&uLocal_482, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_457 = 1;
				}
			}
		}
	}
}

void func_218(char* sParam0)//Position - 0xC020
{
	SYSTEM::SETTIMERA(0);
	func_104(sParam0, -1);
}

void func_219(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, int iParam20, int iParam21)//Position - 0xC034
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam20) || !ENTITY::DOES_ENTITY_EXIST(iParam21))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam20, false) || ENTITY::IS_ENTITY_DEAD(iParam21, false))
	{
		return;
	}
	if (!func_11(Param0.f_14))
	{
		Var0 = { Param0.f_7 };
		Var3 = { Param0.f_10 };
		fVar6 = Param0.f_13;
	}
	else
	{
		Var0 = { Param0 };
		Var3 = { Param0.f_3 };
		fVar6 = Param0.f_6;
	}
	if (!iLocal_443)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam21, Var0, Var3, fVar6, false, true, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam20, false) && !ENTITY::IS_ENTITY_DEAD(iParam21, false))
			{
				if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam20, iParam21))
				{
					HUD::CLEAR_HELP(true);
					HUD::CLEAR_PRINTS();
					iLocal_2599 = 12;
					iLocal_443 = 1;
				}
			}
		}
	}
}

int func_220(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)//Position - 0xC106
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = (*uParam2 - ENTITY::GET_ENTITY_HEALTH(iParam1));
	}
	if (fLocal_426 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
			{
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
				{
					*uParam2 = ENTITY::GET_ENTITY_HEALTH(iParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*uParam3 > 250)
			{
				if (bParam4)
				{
					if (func_172(&Local_2346, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (func_172(&Local_2346, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_426 = (fLocal_426 + 25f);
				}
			}
			break;
		
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (func_172(&Local_2346, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (func_172(&Local_2346, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_426 = (fLocal_426 + 25f);
				}
			}
			break;
		
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					func_172(&Local_2346, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					func_172(&Local_2346, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_426 = (fLocal_426 + 75f);
				}
			}
			break;
		
		case 3:
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam2 = ENTITY::GET_ENTITY_HEALTH(iParam1);
	}
	return 0;
}

int func_221(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)//Position - 0xC2CF
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = (*uParam3 - ENTITY::GET_ENTITY_HEALTH(iParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, false) && !ENTITY::IS_ENTITY_DEAD(iParam2, false))
				{
					if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iParam2) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam2, iParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
					{
						*uParam3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*uParam0)
		{
			case 0:
				if (*uParam4 > 250)
				{
					*uParam0 = 1;
					func_223("TOW_DMG_01", 25, -1);
					func_222(func_26(), 1, 25);
					fLocal_426 = (fLocal_426 + 25f);
				}
				break;
			
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					func_223("TOW_DMG_01", 75, -1);
					func_222(func_26(), 1, 75);
					fLocal_426 = (fLocal_426 + 75f);
				}
				break;
			
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					func_104("TOW_DMG_03", -1);
				}
				break;
			
			case 3:
				if (*uParam4 > 900)
				{
					return 0;
				}
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
	}
	return 1;
}

int func_222(int iParam0, int iParam1, int iParam2)//Position - 0xC42F
{
	if (func_98(iParam0) == 3)
	{
		return 0;
	}
	if (func_98(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_98(iParam0), 0, iParam1, iParam2, 0);
}

void func_223(char* sParam0, int iParam1, int iParam2)//Position - 0xC463
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

void func_224(int iParam0, int* iParam1, var uParam2, var uParam3, char* sParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0xC480
{
	int iVar0;
	
	uParam10 = uParam10;
	if (bParam11)
	{
		if (HUD::DOES_BLIP_EXIST(*iParam1))
		{
			HUD::REMOVE_BLIP(iParam1);
		}
		*uParam5 = MISC::GET_GAME_TIMER();
		bLocal_465 = !func_225(iParam0);
		return;
	}
	else if (!HUD::DOES_BLIP_EXIST(*iParam1) && bLocal_465)
	{
		*iParam1 = HUD::ADD_BLIP_FOR_ENTITY(*iParam0);
		HUD::SET_BLIP_COLOUR(*iParam1, 3);
		HUD::SET_BLIP_ROUTE(*iParam1, true);
	}
	if (!bParam9)
	{
		if (!bLocal_465)
		{
			if (!func_225(iParam0))
			{
				HUD::CLEAR_SMALL_PRINTS();
				*uParam5 = MISC::GET_GAME_TIMER();
				if (bParam13)
				{
					if (iLocal_438)
					{
						func_114("DTRSHRD_03", 7500, 1);
						iLocal_438 = 0;
					}
					if (!HUD::DOES_BLIP_EXIST(*iParam1))
					{
						*iParam1 = HUD::ADD_BLIP_FOR_ENTITY(*iParam0);
						HUD::SET_BLIP_COLOUR(*iParam1, 3);
						HUD::SET_BLIP_ROUTE(*iParam1, true);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (HUD::DOES_BLIP_EXIST((uParam2[iVar0 /*20*/])->f_8))
					{
						HUD::SET_BLIP_ROUTE((uParam2[iVar0 /*20*/])->f_8, false);
						HUD::REMOVE_BLIP(&((uParam2[iVar0 /*20*/])->f_8));
						*uParam8 = 0;
					}
					iVar0++;
				}
				if (HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_9))
				{
					HUD::REMOVE_BLIP(&((uParam2[0 /*20*/])->f_9));
				}
				bLocal_465 = true;
			}
		}
		else if (func_225(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			if (!PED::IS_PED_INJURED((*uParam2)[0 /*20*/]))
			{
				if (!PED::IS_PED_IN_VEHICLE((*uParam2)[0 /*20*/], *iParam0, false) && !PED::IS_PED_IN_VEHICLE((*uParam2)[0 /*20*/], (uParam2[iParam6 /*20*/])->f_6, false))
				{
					if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_9))
					{
						(uParam2[0 /*20*/])->f_9 = HUD::ADD_BLIP_FOR_ENTITY((*uParam2)[iVar0 /*20*/]);
						HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_9, 3);
						HUD::SET_BLIP_SCALE((uParam2[0 /*20*/])->f_9, 0.7f);
					}
				}
			}
			if (iLocal_439)
			{
				func_114(sParam4, 7500, 1);
				iLocal_439 = 0;
			}
			if (!func_11(*(uParam3[0 /*3*/])) && iParam12 == 9)
			{
				if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
				{
					(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(*(uParam3[0 /*3*/]));
					HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, true);
				}
			}
			else if (bParam7)
			{
				if (!ENTITY::IS_ENTITY_DEAD((uParam2[iParam6 /*20*/])->f_6, false))
				{
					if (!HUD::DOES_BLIP_EXIST((uParam2[iParam6 /*20*/])->f_8))
					{
						(uParam2[iParam6 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_ENTITY((uParam2[iParam6 /*20*/])->f_6);
						HUD::SET_BLIP_COLOUR((uParam2[iParam6 /*20*/])->f_8, 3);
						HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, true);
					}
				}
				else
				{
					if (iLocal_418 == 3)
					{
						Local_648[iLocal_2602 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
					{
						(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(Local_648[iLocal_2602 /*23*/].f_1);
						HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_8, 3);
						HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, true);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD((uParam2[iVar0 /*20*/])->f_6, false))
					{
						if (!HUD::DOES_BLIP_EXIST((uParam2[iVar0 /*20*/])->f_8))
						{
							(uParam2[iVar0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_ENTITY((uParam2[iVar0 /*20*/])->f_6);
							HUD::SET_BLIP_COLOUR((uParam2[iVar0 /*20*/])->f_8, 3);
							HUD::SET_BLIP_ROUTE((uParam2[iVar0 /*20*/])->f_8, true);
						}
					}
					else
					{
						if (iLocal_418 == 3)
						{
							Local_648[iLocal_2602 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
						{
							(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(Local_648[iLocal_2602 /*23*/].f_1);
							HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_8, 3);
							HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, true);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_465 = false;
		}
	}
}

int func_225(var uParam0)//Position - 0xC812
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != *uParam0)
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_226()//Position - 0xC867
{
	int iVar0;
	
	iVar0 = func_26();
	if (iVar0 != 1)
	{
		func_194();
	}
}

void func_227(var uParam0)//Position - 0xC87F
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || BitTest(Global_101392.f_20, 2)) || BitTest(Global_101392.f_20, 13))
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

void func_228(int* iParam0)//Position - 0xC901
{
	func_229(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_229(int* iParam0, char* sParam1, int iParam2)//Position - 0xC917
{
	if (BitTest(*iParam0, 30))
	{
		switch (func_230(*iParam0))
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

int func_230(var uParam0)//Position - 0xC9E8
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

void func_231()//Position - 0xCA11
{
	if (Global_9488[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9488[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9488[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_8683, 25);
	MISC::SET_BIT(&Global_8684, 11);
}

void func_232(var uParam0)//Position - 0xCA8E
{
	int iVar0;
	int iVar1;
	
	func_255();
	iLocal_2606 = func_254();
	if (uParam0->f_3 == 3)
	{
		sLocal_2618[0] = "base";
		func_252(&uLocal_2646, "amb@world_human_smoking@male@male_a@base");
		func_252(&uLocal_2646, "oddjobs@towingcome_here");
		func_252(&uLocal_2646, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_2957)
	{
		func_252(&uLocal_2646, "Ped");
		func_252(&uLocal_2646, "oddjobs@towing");
		func_252(&uLocal_2646, "oddjobs@towingangryidle_a");
		func_252(&uLocal_2646, "oddjobs@towingpleadingidle_b");
		func_252(&uLocal_2646, "oddjobs@towingpleadingidle_a");
		func_252(&uLocal_2646, "move_m@JOG@");
	}
	else if (bLocal_2957)
	{
		func_252(&uLocal_2646, "amb@world_human_smoking@male@male_a@base");
		func_252(&uLocal_2646, "oddjobs@towing");
	}
	if (uParam0->f_3 == 2)
	{
		func_252(&uLocal_2646, "RANDOM@CAR_SLEEPING");
	}
	else if (uParam0->f_3 == 4)
	{
		sLocal_2617 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		func_252(&uLocal_2646, sLocal_2617);
		func_250(&uLocal_2636, joaat("ambulance"));
		func_250(&uLocal_2636, joaat("S_M_M_Paramedic_01"));
		sLocal_2618[0] = "react_big_variations_a";
		sLocal_2618[1] = "react_big_variations_b";
		sLocal_2618[2] = "react_big_variations_c";
		func_252(&uLocal_2646, "move_m@JOG@");
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
	if (uParam0->f_3 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		func_252(&uLocal_2646, "oddjobs@towing");
		func_252(&uLocal_2646, "amb@world_human_smoking@male@male_a@base");
		func_252(&uLocal_2646, "oddjobs@towingpleadingidle_b");
		func_250(&uLocal_2636, joaat("freightcont1"));
		func_250(&uLocal_2636, joaat("tankercar"));
		func_250(&uLocal_2636, joaat("freight"));
		func_250(&uLocal_2636, joaat("freightcar"));
		func_250(&uLocal_2636, joaat("S_M_M_LSMetro_01"));
		func_250(&uLocal_2636, joaat("A_F_M_BevHills_01"));
		func_250(&uLocal_2636, joaat("A_M_Y_GenStreet_02"));
	}
	if (uParam0->f_3 == 2)
	{
		func_249();
	}
	else if (uParam0->f_3 == 4)
	{
		iLocal_2985[iVar0] = Local_648[iLocal_2602 /*23*/].f_20;
	}
	else
	{
		func_248();
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_2985[iVar0] == 0)
		{
			iLocal_2985[iVar0] = func_246(&iLocal_2985, &iLocal_80, 10);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_2985[iVar0], 3);
		}
		if (bLocal_2963)
		{
			iLocal_2985[iVar0] = joaat("landstalker");
			func_250(&uLocal_2636, iLocal_2985[iVar0]);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_2985[iVar0], 3);
		}
		else if (iLocal_2985[iVar0] != 0)
		{
			func_250(&uLocal_2636, iLocal_2985[iVar0]);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_2985[iVar0], 3);
		}
		iVar0++;
	}
	if (!bLocal_2957 && iLocal_2960)
	{
		if (bLocal_2963)
		{
			func_245(&iVar1);
			iLocal_72 = joaat("A_M_M_TranVest_01");
			func_250(&uLocal_2636, iLocal_72);
		}
		else if (bLocal_2964)
		{
			func_244(&iVar1);
		}
		else if (uParam0->f_3 == 3)
		{
			func_243(&iVar1, 1);
		}
		else if (uParam0->f_3 == 0 && !bLocal_2963)
		{
			func_243(&iVar1, 1);
		}
		else
		{
			func_243(&iVar1, 0);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			uLocal_2987[iVar0] = func_246(&uLocal_2987, &iLocal_73, iVar1);
			if (uLocal_2987[iVar0] != 0)
			{
				func_250(&uLocal_2636, uLocal_2987[iVar0]);
			}
			iVar0++;
		}
	}
	func_250(&uLocal_2636, iLocal_647);
	func_242(&uLocal_2654, "TOW", 2, 0);
	func_242(&uLocal_2654, "DTRSHRD", 3, 0);
	func_241(&uLocal_2636);
	func_238(&uLocal_2646, &uLocal_2654);
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2606))
	{
		func_227(&uLocal_2654);
		SYSTEM::WAIT(0);
	}
	while (!func_237(&uLocal_2636) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_2985[0]))
	{
		func_227(&uLocal_2654);
		SYSTEM::WAIT(0);
	}
	while (!func_233(&uLocal_2654))
	{
		func_227(&uLocal_2654);
		SYSTEM::WAIT(0);
	}
	if (uParam0->f_3 == 1)
	{
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TOWING_TRAIN", false, -1) || !STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			func_227(&uLocal_2654);
			SYSTEM::WAIT(0);
		}
	}
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		func_227(&uLocal_2654);
		SYSTEM::WAIT(0);
	}
}

bool func_233(var uParam0)//Position - 0xCEC9
{
	return func_234(uParam0);
}

int func_234(var uParam0)//Position - 0xCED7
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
			if (!func_235(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_235(var uParam0)//Position - 0xCF35
{
	return func_236(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_236(char* sParam0, char* sParam1, int iParam2)//Position - 0xCF4C
{
	if (BitTest(sParam0, 30))
	{
		if (BitTest(sParam0, 29))
		{
			switch (func_230(sParam0))
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

int func_237(var uParam0)//Position - 0xD037
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_238(var uParam0, var uParam1)//Position - 0xD07E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			func_239(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_239(var uParam0, char* sParam1)//Position - 0xD0B4
{
	func_240(uParam0, 1, -1, sParam1, 0);
}

void func_240(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xD0C7
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

void func_241(var uParam0)//Position - 0xD1A8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_242(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xD1D8
{
	var uVar0;
	
	if (bParam3)
	{
		MISC::SET_BIT(&uVar0, 26);
	}
	func_240(uParam0, 8, iParam2, sParam1, uVar0);
}

void func_243(var uParam0, bool bParam1)//Position - 0xD1FB
{
	if (bParam1)
	{
		iLocal_73[0] = joaat("A_M_Y_GenStreet_02");
		iLocal_73[1] = joaat("A_M_Y_Beach_03");
		iLocal_73[2] = joaat("G_M_Y_SalvaGoon_01");
		iLocal_73[3] = joaat("A_M_M_BevHills_02");
		*uParam0 = 4;
	}
	else
	{
		iLocal_73[0] = joaat("A_F_M_BevHills_01");
		iLocal_73[1] = joaat("A_M_Y_GenStreet_02");
		iLocal_73[2] = joaat("A_F_Y_Hipster_02");
		iLocal_73[3] = joaat("A_M_Y_Beach_03");
		iLocal_73[4] = joaat("S_F_Y_SweatShop_01");
		iLocal_73[5] = joaat("G_M_Y_SalvaGoon_01");
		*uParam0 = 6;
	}
}

void func_244(var uParam0)//Position - 0xD277
{
	iLocal_73[0] = joaat("A_M_M_Tramp_01");
	iLocal_73[1] = joaat("A_M_Y_MethHead_01");
	iLocal_73[2] = joaat("A_M_M_Tramp_01");
	iLocal_73[3] = joaat("A_M_Y_MethHead_01");
	*uParam0 = 4;
}

void func_245(var uParam0)//Position - 0xD2AB
{
	iLocal_73[0] = joaat("A_M_Y_Yoga_01");
	iLocal_73[1] = joaat("A_M_Y_Beach_03");
	iLocal_73[2] = joaat("A_M_Y_MusclBeac_01");
	*uParam0 = 3;
}

var func_246(var uParam0, int iParam1, int iParam2)//Position - 0xD2D5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iParam2 - 1));
	while (func_247((*iParam1)[iVar1], uParam0) || iVar0 > 25)
	{
		iVar0++;
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iParam2 - 1));
	}
	return (*iParam1)[iVar1];
}

int func_247(int iParam0, var uParam1)//Position - 0xD31F
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] != 0)
		{
			if ((*uParam1)[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_248()//Position - 0xD35F
{
	iLocal_80[0] = joaat("tailgater");
	iLocal_80[1] = joaat("asterope");
	iLocal_80[2] = joaat("primo");
	iLocal_80[3] = joaat("primo");
	iLocal_80[4] = joaat("schwarzer");
	iLocal_80[5] = joaat("emperor");
	iLocal_80[6] = joaat("premier");
	iLocal_80[7] = joaat("buffalo");
	iLocal_80[8] = joaat("intruder");
	iLocal_80[9] = joaat("intruder");
}

void func_249()//Position - 0xD3CD
{
	iLocal_80[0] = joaat("buccaneer");
	iLocal_80[1] = joaat("voodoo2");
	iLocal_80[2] = joaat("manana");
	iLocal_80[3] = joaat("ruiner");
	iLocal_80[4] = joaat("ruiner");
	iLocal_80[5] = joaat("voodoo2");
	iLocal_80[6] = joaat("surfer2");
	iLocal_80[7] = joaat("emperor2");
	iLocal_80[8] = joaat("stanier");
	iLocal_80[9] = joaat("tailgater");
}

int func_250(var uParam0, int iParam1)//Position - 0xD43B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_251(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_251(var uParam0)//Position - 0xD498
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

int func_252(var uParam0, char* sParam1)//Position - 0xD4C4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_253(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_253(var uParam0)//Position - 0xD529
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_254()//Position - 0xD558
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
}

void func_255()//Position - 0xD568
{
	func_301(&uLocal_410, 1);
}

void func_256()//Position - 0xD578
{
	switch (iLocal_418)
	{
		case 2:
			if ((Global_114372.f_19976.f_4 % 2) == 0)
			{
				sLocal_2622 = "TOWABDBITCHM";
			}
			else
			{
				sLocal_2622 = "TOWABDATTACKM";
			}
			break;
		
		case 4:
			break;
		
		case 3:
			sLocal_2622 = "TOWBREAKM";
			break;
		
		case 0:
			if (bLocal_2963)
			{
			}
			else
			{
				sLocal_2622 = "TOWHANDIBEGM";
			}
			break;
		
		case 1:
			sLocal_2622 = "TOWTRAINM";
			break;
	}
}

int func_257()//Position - 0xD5F2
{
	return Local_648[iLocal_2602 /*23*/].f_22;
}

void func_258(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xD604
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

void func_259()//Position - 0xD69F
{
	iLocal_418 = func_261(Global_114372.f_19976.f_2);
	if (!func_260(iLocal_418))
	{
		iLocal_418 = 3;
	}
	if (iLocal_418 == 3)
	{
	}
	else
	{
		iLocal_2602 = func_263(1300f, iLocal_418, Global_114372.f_19976.f_9);
		Global_114372.f_19976.f_9 = iLocal_2602;
	}
	if (iLocal_2602 == 0)
	{
		iLocal_418 = 3;
	}
	Global_114372.f_19976.f_2 = iLocal_418;
}

int func_260(int iParam0)//Position - 0xD70E
{
	iLocal_2602 = func_263(1300f, iParam0, Global_114372.f_19976.f_9);
	if (iLocal_2602 == -1)
	{
		return 0;
	}
	return 1;
}

int func_261(int iParam0)//Position - 0xD73C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2000000;
	iVar1 = 2;
	if (iParam0 != 2)
	{
		if (Global_114372.f_19976.f_4 < iVar0)
		{
			iVar0 = Global_114372.f_19976.f_4;
			iVar1 = 2;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_114372.f_19976.f_6 < iVar0)
		{
			iVar0 = Global_114372.f_19976.f_6;
			iVar1 = 0;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_114372.f_19976.f_5 < iVar0)
		{
			iVar0 = Global_114372.f_19976.f_5;
			iVar1 = 1;
		}
	}
	if (iParam0 != 3)
	{
		if (Global_114372.f_19976.f_7 < iVar0)
		{
			iVar0 = Global_114372.f_19976.f_7;
			iVar1 = 3;
		}
	}
	if (iParam0 != 4)
	{
		if (Global_114372.f_19976.f_8 < iVar0)
		{
			iVar0 = Global_114372.f_19976.f_8;
			iVar1 = 4;
		}
	}
	return iVar1;
}

int func_262()//Position - 0xD7F9
{
	if (Global_101392 == 10 || Global_101392 == 9)
	{
		return 1;
	}
	return 0;
}

int func_263(float fParam0, int iParam1, int iParam2)//Position - 0xD81D
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3[53];
	int iVar57;
	int iVar58;
	
	fVar0 = 500f;
	iVar1 = -1;
	iVar57 = 0;
	iVar58 = 0;
	while (iVar58 < 53)
	{
		fVar2 = func_9(Local_648[iVar58 /*23*/].f_1, 1);
		if (!func_11(Local_648[iVar58 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar58 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
				else if (Local_648[iVar58 /*23*/] == iParam1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
			}
		}
		iVar58++;
	}
	if (iVar57 > 1)
	{
		iVar1 = iVar3[MISC::GET_RANDOM_INT_IN_RANGE(0, (iVar57 - 1))];
	}
	else if (iVar57 == 1)
	{
		iVar1 = iVar3[0];
	}
	else
	{
		return 0;
	}
	return iVar1;
}

void func_264(int* iParam0)//Position - 0xD8EB
{
	if (!func_7(iParam0))
	{
		func_59(iParam0);
	}
}

void func_265()//Position - 0xD903
{
	Local_43[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	Local_43[1 /*3*/] = { -205.6866f, -1384.3333f, 30.2585f };
	Local_43[2 /*3*/] = { -205.6866f, -1384.3333f, 30.2585f };
	Local_43[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	Local_43[4 /*3*/] = { 1151.5066f, -773.4066f, 56.61f };
	Local_43[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	Local_43[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	Local_43[7 /*3*/] = { 263.4725f, 2601.8423f, 43.8197f };
	Local_68[0 /*3*/] = { 401.6046f, -1632.7806f, 28.2928f };
}

void func_266(var uParam0)//Position - 0xD9D1
{
	*(uParam0[0 /*28*/][0 /*3*/]) = { 568.8983f, -1698.723f, 28.2631f };
	*(uParam0[0 /*28*/][1 /*3*/]) = { 575.1474f, -1697.5486f, 28.2631f };
	*(uParam0[0 /*28*/][2 /*3*/]) = { 584.8786f, -1703.8748f, 28.2631f };
	(uParam0[0 /*28*/])->f_27 = 3;
	(uParam0[0 /*28*/])->f_23 = { 565.9069f, -1702.8134f, 28.2227f };
	(uParam0[0 /*28*/])->f_26 = 58.4094f;
	(uParam0[0 /*28*/])->f_17 = { 564.5385f, -1689.7069f, 38.2854f };
	(uParam0[0 /*28*/])->f_20 = { 605.4141f, -1715.2214f, 18.0923f };
	*(uParam0[1 /*28*/][0 /*3*/]) = { 240.0033f, -1141.4331f, 28.3033f };
	*(uParam0[1 /*28*/][1 /*3*/]) = { 240.5303f, -1137.7504f, 28.3091f };
	*(uParam0[1 /*28*/][2 /*3*/]) = { 229.8743f, -1145.7627f, 28.3013f };
	(uParam0[1 /*28*/])->f_27 = 3;
	(uParam0[1 /*28*/])->f_23 = { 239.0778f, -1134.1409f, 28.2367f };
	(uParam0[1 /*28*/])->f_26 = 266.7983f;
	(uParam0[1 /*28*/])->f_17 = { 242.7403f, -1124.7528f, 38.3223f };
	(uParam0[1 /*28*/])->f_20 = { 225.7671f, -1152.415f, 18.2047f };
	(uParam0[1 /*28*/])->f_10[0 /*3*/] = { 232.3824f, -1137.8553f, 28.1944f };
	(uParam0[1 /*28*/])->f_10[1 /*3*/] = { 230.8579f, -1136.2522f, 28.0348f };
	*(uParam0[2 /*28*/][0 /*3*/]) = { -95.1473f, -1716.6565f, 28.4491f };
	*(uParam0[2 /*28*/][1 /*3*/]) = { -93.1677f, -1717.8398f, 28.4239f };
	(uParam0[2 /*28*/])->f_27 = 2;
	(uParam0[2 /*28*/])->f_23 = { -102.9092f, -1729.668f, 28.7511f };
	(uParam0[2 /*28*/])->f_26 = 105.1153f;
	(uParam0[2 /*28*/])->f_10[0 /*3*/] = { -99.8953f, -1726.702f, 28.4622f };
	(uParam0[2 /*28*/])->f_10[1 /*3*/] = { -101.1025f, -1728.6892f, 28.6286f };
	*(uParam0[3 /*28*/][0 /*3*/]) = { -117.7085f, -1321.0688f, 28.2857f };
	*(uParam0[3 /*28*/][1 /*3*/]) = { -116.6308f, -1325.3618f, 28.3192f };
	(uParam0[3 /*28*/])->f_27 = 2;
	(uParam0[3 /*28*/])->f_23 = { -112.3024f, -1329.2186f, 28.2685f };
	(uParam0[3 /*28*/])->f_26 = 179.9845f;
	(uParam0[3 /*28*/])->f_10[0 /*3*/] = { -113.1683f, -1319.4591f, 28.2125f };
	(uParam0[3 /*28*/])->f_10[1 /*3*/] = { -112.2886f, -1322.4221f, 28.2633f };
	*(uParam0[4 /*28*/][0 /*3*/]) = { 308.2367f, -1706.0255f, 28.3827f };
	*(uParam0[4 /*28*/][1 /*3*/]) = { 298.1392f, -1700.7681f, 28.3234f };
	(uParam0[4 /*28*/])->f_27 = 2;
	(uParam0[4 /*28*/])->f_23 = { 314.1078f, -1704.3053f, 28.3111f };
	(uParam0[4 /*28*/])->f_26 = 227.316f;
	(uParam0[4 /*28*/])->f_10[0 /*3*/] = { 304.5671f, -1697.5216f, 28.2629f };
	(uParam0[4 /*28*/])->f_10[1 /*3*/] = { 308.3995f, -1699.6951f, 28.3051f };
	*(uParam0[5 /*28*/][0 /*3*/]) = { 776.3322f, -2046.0779f, 28.2818f };
	*(uParam0[5 /*28*/][1 /*3*/]) = { 776.0253f, -2048.3916f, 28.2653f };
	(uParam0[5 /*28*/])->f_27 = 2;
	(uParam0[5 /*28*/])->f_23 = { 787.8897f, -2034.5416f, 28.2393f };
	(uParam0[5 /*28*/])->f_26 = 348.1702f;
	(uParam0[5 /*28*/])->f_10[0 /*3*/] = { 782.5989f, -2047.4797f, 28.159f };
	(uParam0[5 /*28*/])->f_10[1 /*3*/] = { 783.3265f, -2051.1829f, 28.1589f };
	*(uParam0[6 /*28*/][0 /*3*/]) = { 28.2787f, -986.7457f, 28.5094f };
	*(uParam0[6 /*28*/][1 /*3*/]) = { 35.6153f, -988.3468f, 28.4971f };
	*(uParam0[6 /*28*/][2 /*3*/]) = { 38.553f, -985.1667f, 28.5576f };
	(uParam0[6 /*28*/])->f_27 = 3;
	(uParam0[6 /*28*/])->f_23 = { 43.6799f, -982.0863f, 28.4103f };
	(uParam0[6 /*28*/])->f_26 = 251.1427f;
	(uParam0[6 /*28*/])->f_10[0 /*3*/] = { 30.5244f, -980.0237f, 28.4037f };
	(uParam0[6 /*28*/])->f_10[1 /*3*/] = { 34.0509f, -979.3044f, 28.4079f };
	*(uParam0[7 /*28*/][0 /*3*/]) = { 99.1579f, -1521.9631f, 28.3247f };
	*(uParam0[7 /*28*/][1 /*3*/]) = { 105.699f, -1527.331f, 28.3186f };
	(uParam0[7 /*28*/])->f_27 = 2;
	(uParam0[7 /*28*/])->f_23 = { 95.4077f, -1529.4733f, 28.3325f };
	(uParam0[7 /*28*/])->f_26 = 51.3731f;
	(uParam0[7 /*28*/])->f_10[0 /*3*/] = { 100.3829f, -1529.7828f, 28.2238f };
	(uParam0[7 /*28*/])->f_10[1 /*3*/] = { 97.5322f, -1531.5796f, 28.3374f };
	*(uParam0[8 /*28*/][0 /*3*/]) = { 370.2508f, -871.9623f, 28.2916f };
	*(uParam0[8 /*28*/][1 /*3*/]) = { 364.377f, -872.4929f, 28.2916f };
	(uParam0[8 /*28*/])->f_27 = 2;
	(uParam0[8 /*28*/])->f_23 = { 370.0709f, -865.2366f, 28.2507f };
	(uParam0[8 /*28*/])->f_26 = 271.3831f;
	(uParam0[8 /*28*/])->f_10[0 /*3*/] = { 363.9474f, -865.3307f, 28.2621f };
	(uParam0[8 /*28*/])->f_10[1 /*3*/] = { 361.2415f, -866.9158f, 28.1908f };
	*(uParam0[9 /*28*/][0 /*3*/]) = { 258.1324f, -2035.0984f, 17.2524f };
	*(uParam0[9 /*28*/][1 /*3*/]) = { 263.1343f, -2026.3652f, 17.7171f };
	(uParam0[9 /*28*/])->f_27 = 2;
	(uParam0[9 /*28*/])->f_23 = { 260.0068f, -2041.8058f, 16.9454f };
	(uParam0[9 /*28*/])->f_26 = 140.9065f;
	(uParam0[9 /*28*/])->f_10[0 /*3*/] = { 264.5263f, -2036.1978f, 17.2682f };
	(uParam0[9 /*28*/])->f_10[1 /*3*/] = { 264.3815f, -2032.3785f, 17.329f };
	*(uParam0[10 /*28*/][0 /*3*/]) = { 411.4076f, -1869.4333f, 25.5691f };
	*(uParam0[10 /*28*/][1 /*3*/]) = { 416.1884f, -1862.589f, 26.0458f };
	(uParam0[10 /*28*/])->f_27 = 2;
	(uParam0[10 /*28*/])->f_23 = { 412.9648f, -1876.9008f, 25.3104f };
	(uParam0[10 /*28*/])->f_26 = 135.5291f;
	(uParam0[10 /*28*/])->f_10[0 /*3*/] = { 418.299f, -1872.5396f, 25.6552f };
	(uParam0[10 /*28*/])->f_10[1 /*3*/] = { 419.0923f, -1869.0394f, 25.6907f };
	*(uParam0[11 /*28*/][0 /*3*/]) = { 500.9577f, -1664.8811f, 28.7134f };
	*(uParam0[11 /*28*/][1 /*3*/]) = { 501.1261f, -1668.809f, 28.7152f };
	(uParam0[11 /*28*/])->f_27 = 2;
	(uParam0[11 /*28*/])->f_23 = { 503.8388f, -1661.2373f, 28.4841f };
	(uParam0[11 /*28*/])->f_26 = 50.8842f;
	(uParam0[11 /*28*/])->f_10[0 /*3*/] = { 507.0525f, -1670.2535f, 28.7152f };
	(uParam0[11 /*28*/])->f_10[1 /*3*/] = { 507.7841f, -1665.1162f, 28.4902f };
	*(uParam0[12 /*28*/][0 /*3*/]) = { -208.9247f, -660.1125f, 32.629f };
	*(uParam0[12 /*28*/][1 /*3*/]) = { -204.0615f, -660.8978f, 32.7011f };
	*(uParam0[12 /*28*/][2 /*3*/]) = { -198.1905f, -664.2867f, 32.8159f };
	(uParam0[12 /*28*/])->f_27 = 3;
	(uParam0[12 /*28*/])->f_23 = { -213.0429f, -666.7334f, 32.6039f };
	(uParam0[12 /*28*/])->f_26 = 70.1131f;
	(uParam0[12 /*28*/])->f_10[0 /*3*/] = { -210.6179f, -667.8796f, 32.6494f };
	(uParam0[12 /*28*/])->f_10[1 /*3*/] = { -204.9018f, -667.8836f, 32.6425f };
	*(uParam0[13 /*28*/][0 /*3*/]) = { -310.1606f, -869.7873f, 30.6891f };
	*(uParam0[13 /*28*/][1 /*3*/]) = { -315.0338f, -869.8134f, 30.6555f };
	*(uParam0[13 /*28*/][2 /*3*/]) = { -319.5981f, -868.6276f, 30.6449f };
	(uParam0[13 /*28*/])->f_27 = 3;
	(uParam0[13 /*28*/])->f_23 = { -309.987f, -864.1183f, 30.6228f };
	(uParam0[13 /*28*/])->f_26 = 261.3995f;
	(uParam0[13 /*28*/])->f_10[0 /*3*/] = { -316.0121f, -862.7733f, 30.6267f };
	(uParam0[13 /*28*/])->f_10[1 /*3*/] = { -317.526f, -863.8655f, 30.5453f };
	*(uParam0[14 /*28*/][0 /*3*/]) = { 407.2907f, -1479.6372f, 28.2895f };
	*(uParam0[14 /*28*/][1 /*3*/]) = { 404.6483f, -1483.5702f, 28.2895f };
	(uParam0[14 /*28*/])->f_27 = 2;
	(uParam0[14 /*28*/])->f_23 = { 403.5326f, -1475.1968f, 28.2951f };
	(uParam0[14 /*28*/])->f_26 = 301.9695f;
	(uParam0[14 /*28*/])->f_10[0 /*3*/] = { 399.232f, -1477.7832f, 28.2928f };
	(uParam0[14 /*28*/])->f_10[1 /*3*/] = { 401.2551f, -1479.7366f, 28.1369f };
	*(uParam0[15 /*28*/][0 /*3*/]) = { -686.6597f, -851.2509f, 22.9054f };
	*(uParam0[15 /*28*/][1 /*3*/]) = { -696.9954f, -852.1266f, 22.6746f };
	(uParam0[15 /*28*/])->f_27 = 2;
	(uParam0[15 /*28*/])->f_23 = { -674.3848f, -844.9825f, 23.1517f };
	(uParam0[15 /*28*/])->f_26 = 269.1391f;
	(uParam0[15 /*28*/])->f_10[0 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
	(uParam0[15 /*28*/])->f_10[1 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
}

void func_267(var uParam0)//Position - 0xE3FA
{
	(uParam0[0 /*23*/])->f_1 = { 123.999f, -1081.6178f, 28.1919f };
	(uParam0[0 /*23*/])->f_4 = 180.477f;
	(uParam0[0 /*23*/])->f_6 = { 97.7377f, -1072.4927f, 28.2717f };
	(uParam0[0 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[0 /*23*/] = 0;
	(uParam0[1 /*23*/])->f_1 = { 123.999f, -1081.6178f, 28.1919f };
	(uParam0[1 /*23*/])->f_4 = 180.477f;
	(uParam0[1 /*23*/])->f_6 = { 97.7377f, -1072.4927f, 28.2717f };
	(uParam0[1 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[1 /*23*/] = 0;
	(uParam0[2 /*23*/])->f_1 = { -301.9741f, -898.8075f, 30.0813f };
	(uParam0[2 /*23*/])->f_4 = 168.6079f;
	(uParam0[2 /*23*/])->f_6 = { -301.0894f, -934.515f, 30.0813f };
	(uParam0[2 /*23*/])->f_9 = 66.2119f;
	(*uParam0)[2 /*23*/] = 0;
	(uParam0[3 /*23*/])->f_1 = { -359.0859f, -965.5469f, 30.0701f };
	(uParam0[3 /*23*/])->f_4 = 145.3635f;
	(*uParam0)[3 /*23*/] = 2;
	(uParam0[4 /*23*/])->f_1 = { 4.5819f, -1762.4952f, 28.2918f };
	(uParam0[4 /*23*/])->f_4 = 51.8577f;
	(*uParam0)[4 /*23*/] = 2;
	(uParam0[5 /*23*/])->f_1 = { 260.5293f, -1872.3273f, 25.8171f };
	(uParam0[5 /*23*/])->f_4 = 55f;
	(*uParam0)[5 /*23*/] = 1;
	(uParam0[5 /*23*/])->f_6 = { 209.1288f, -2149.0547f, 13.3765f };
	(uParam0[5 /*23*/])->f_5 = 1;
	(uParam0[5 /*23*/])->f_13 = { 331.456f, -1789.7f, 26.817f };
	(uParam0[5 /*23*/])->f_16 = { 190.235f, -1957.1f, 26.816f };
	(uParam0[5 /*23*/])->f_19 = 7.2f;
	(uParam0[6 /*23*/])->f_1 = { 967.3045f, -1873.7893f, 30.1425f };
	(uParam0[6 /*23*/])->f_4 = 41.1599f;
	(*uParam0)[6 /*23*/] = 2;
	(uParam0[7 /*23*/])->f_1 = { -607.5065f, -1216.3397f, 13.4082f };
	(uParam0[7 /*23*/])->f_4 = 131.5235f;
	(*uParam0)[7 /*23*/] = 2;
	(uParam0[8 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[8 /*23*/])->f_4 = 263.5155f;
	(uParam0[8 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[8 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[8 /*23*/] = 0;
	(uParam0[9 /*23*/])->f_1 = { -136.0945f, -785.4554f, 31.4112f };
	(uParam0[9 /*23*/])->f_4 = 276.5309f;
	(*uParam0)[9 /*23*/] = 2;
	(uParam0[10 /*23*/])->f_1 = { -32.488f, -1354.8672f, 28.1676f };
	(uParam0[10 /*23*/])->f_4 = 90.8486f;
	(*uParam0)[10 /*23*/] = 2;
	(uParam0[11 /*23*/])->f_1 = { -33.8858f, -1602.9177f, 28.2902f };
	(uParam0[11 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[11 /*23*/] = 1;
	(uParam0[11 /*23*/])->f_6 = { 216.8692f, -1814.2551f, 24.6812f };
	(uParam0[11 /*23*/])->f_5 = 0;
	(uParam0[11 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[11 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[11 /*23*/])->f_19 = 7.8f;
	(uParam0[12 /*23*/])->f_1 = { 220.6214f, -852.1f, 29.1084f };
	(uParam0[12 /*23*/])->f_4 = 249.5924f;
	(*uParam0)[12 /*23*/] = 2;
	(uParam0[13 /*23*/])->f_1 = { 337.0184f, -1156.9297f, 28.2919f };
	(uParam0[13 /*23*/])->f_4 = 270.3139f;
	(*uParam0)[13 /*23*/] = 2;
	(uParam0[14 /*23*/])->f_1 = { 953.1846f, -2113.2559f, 29.5516f };
	(uParam0[14 /*23*/])->f_4 = 265.591f;
	(*uParam0)[14 /*23*/] = 2;
	(uParam0[15 /*23*/])->f_1 = { -88.9769f, -2003.448f, 17.0168f };
	(uParam0[15 /*23*/])->f_4 = 352.601f;
	(*uParam0)[15 /*23*/] = 2;
	(uParam0[16 /*23*/])->f_1 = { 211.0682f, -791.7485f, 29.9f };
	(uParam0[16 /*23*/])->f_4 = 68.5508f;
	(*uParam0)[16 /*23*/] = 2;
	(uParam0[17 /*23*/])->f_1 = { -327.4179f, -1529.1274f, 26.5696f };
	(uParam0[17 /*23*/])->f_4 = 179.9431f;
	(*uParam0)[17 /*23*/] = 2;
	(uParam0[18 /*23*/])->f_1 = { -596.5739f, -889.578f, 24.4759f };
	(uParam0[18 /*23*/])->f_4 = 269.5022f;
	(uParam0[18 /*23*/])->f_6 = { -584.4996f, -872.2784f, 24.8909f };
	(uParam0[18 /*23*/])->f_9 = 83.1267f;
	(*uParam0)[18 /*23*/] = 0;
	(uParam0[19 /*23*/])->f_1 = { 408.6235f, -989.5519f, 28.2665f };
	(uParam0[19 /*23*/])->f_4 = 233.0824f;
	(*uParam0)[19 /*23*/] = 2;
	(uParam0[20 /*23*/])->f_1 = { -33.8858f, -1602.9177f, 28.2902f };
	(uParam0[20 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[20 /*23*/] = 1;
	(uParam0[20 /*23*/])->f_6 = { 216.8692f, -1814.2551f, 24.6812f };
	(uParam0[20 /*23*/])->f_5 = 0;
	(uParam0[20 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[20 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[20 /*23*/])->f_19 = 7.8f;
	(uParam0[21 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[21 /*23*/])->f_4 = 263.5155f;
	(uParam0[21 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[21 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[21 /*23*/] = 0;
	(uParam0[22 /*23*/])->f_1 = { -310.2984f, -686.4995f, 32.1219f };
	(uParam0[22 /*23*/])->f_4 = 269.6159f;
	(uParam0[22 /*23*/])->f_6 = { -373.468f, -672.849f, 30.4925f };
	(uParam0[22 /*23*/])->f_9 = 274.2857f;
	(*uParam0)[22 /*23*/] = 0;
	(uParam0[23 /*23*/])->f_1 = { -316.4254f, -895.1236f, 30.0701f };
	(uParam0[23 /*23*/])->f_4 = 347.1421f;
	(*uParam0)[23 /*23*/] = 2;
	(uParam0[24 /*23*/])->f_1 = { 53.578f, -1417.2264f, 28.3517f };
	(uParam0[24 /*23*/])->f_4 = 224.8985f;
	(*uParam0)[24 /*23*/] = 2;
	(uParam0[25 /*23*/])->f_1 = { 401.6395f, -2054.6584f, 20.575f };
	(uParam0[25 /*23*/])->f_4 = 168.9083f;
	(*uParam0)[25 /*23*/] = 2;
	(uParam0[26 /*23*/])->f_1 = { 146.2919f, -2051.0713f, 17.3217f };
	(uParam0[26 /*23*/])->f_4 = 265.1393f;
	(*uParam0)[26 /*23*/] = 1;
	(uParam0[26 /*23*/])->f_6 = { 339.577f, -1779.0023f, 28.1454f };
	(uParam0[26 /*23*/])->f_5 = 0;
	(uParam0[26 /*23*/])->f_13 = { 149.063f, -2005.992f, -18.327f };
	(uParam0[26 /*23*/])->f_16 = { 144.98f, -2095.9f, 18.327f };
	(uParam0[26 /*23*/])->f_19 = 8.5f;
	(uParam0[27 /*23*/])->f_1 = { 363.1678f, -1749.9573f, 28.2073f };
	(uParam0[27 /*23*/])->f_4 = 229.6858f;
	(*uParam0)[27 /*23*/] = 1;
	(uParam0[27 /*23*/])->f_6 = { 150.5184f, -2010.4971f, 17.7098f };
	(uParam0[27 /*23*/])->f_5 = 1;
	(uParam0[27 /*23*/])->f_13 = { 428.271f, -1674.163f, -29.211f };
	(uParam0[27 /*23*/])->f_16 = { 299.18f, -1826.923f, 29.211f };
	(uParam0[27 /*23*/])->f_19 = 9f;
	(uParam0[28 /*23*/])->f_1 = { 171.3444f, -1776.831f, 28.0622f };
	(uParam0[28 /*23*/])->f_4 = 321.1031f;
	(*uParam0)[28 /*23*/] = 1;
	(uParam0[28 /*23*/])->f_6 = { -92.782f, -1554.6067f, 32.2626f };
	(uParam0[28 /*23*/])->f_5 = 1;
	(uParam0[28 /*23*/])->f_13 = { 94.446f, -1712.766f, -29.071f };
	(uParam0[28 /*23*/])->f_16 = { 248.549f, -1840.251f, 29.211f };
	(uParam0[28 /*23*/])->f_19 = 8f;
	(uParam0[29 /*23*/])->f_1 = { 421.2757f, -1277.6182f, 29.2671f };
	(uParam0[29 /*23*/])->f_4 = 359.101f;
	(uParam0[29 /*23*/])->f_6 = { 455.9831f, -1267.6547f, 29.0609f };
	(uParam0[29 /*23*/])->f_9 = 97.7539f;
	(*uParam0)[29 /*23*/] = 0;
	(uParam0[30 /*23*/])->f_1 = { 211.0559f, -1371.6879f, 29.5776f };
	(uParam0[30 /*23*/])->f_4 = 52.932f;
	(uParam0[30 /*23*/])->f_6 = { 209.6618f, -1406.5208f, 28.2921f };
	(uParam0[30 /*23*/])->f_9 = 263.4376f;
	(*uParam0)[30 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_1 = { -219.3074f, -1491.8456f, 30.2593f };
	(uParam0[31 /*23*/])->f_4 = 322.6262f;
	(*uParam0)[31 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_6 = { -177.2324f, -1506.01f, 31.6696f };
	(uParam0[32 /*23*/])->f_1 = { 538.7713f, -1524.8258f, 28.168f };
	(uParam0[32 /*23*/])->f_4 = 50.4239f;
	(*uParam0)[32 /*23*/] = 1;
	(uParam0[32 /*23*/])->f_6 = { 535.2374f, -1093.3301f, 27.4652f };
	(uParam0[32 /*23*/])->f_5 = 0;
	(uParam0[32 /*23*/])->f_13 = { 557.229f, -1501.367f, -29.273f };
	(uParam0[32 /*23*/])->f_16 = { 518.983f, -1547.597f, 29.273f };
	(uParam0[32 /*23*/])->f_19 = 8.2f;
	(uParam0[33 /*23*/])->f_1 = { 497.2474f, -1199.3268f, 28.3046f };
	(uParam0[33 /*23*/])->f_4 = 212.2787f;
	(*uParam0)[33 /*23*/] = 1;
	(uParam0[33 /*23*/])->f_6 = { 516.6573f, -926.7039f, 14.6979f };
	(uParam0[33 /*23*/])->f_5 = 0;
	(uParam0[33 /*23*/])->f_13 = { 512.849f, -1198.747f, -29.311f };
	(uParam0[33 /*23*/])->f_16 = { 483.086f, -1202.507f, 29.311f };
	(uParam0[33 /*23*/])->f_19 = 8f;
	(uParam0[34 /*23*/])->f_1 = { 576.4442f, -1705.2592f, 28.0895f };
	(uParam0[34 /*23*/])->f_4 = 43.2791f;
	(*uParam0)[34 /*23*/] = 4;
	(uParam0[34 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[34 /*23*/])->f_21 = 0;
	(uParam0[34 /*23*/])->f_22 = 0;
	(uParam0[34 /*23*/])->f_10 = { 585.9758f, -1707.7788f, 28.2677f };
	(uParam0[35 /*23*/])->f_1 = { 233.0704f, -1138.8818f, 28.2302f };
	(uParam0[35 /*23*/])->f_4 = 311.5479f;
	(*uParam0)[35 /*23*/] = 4;
	(uParam0[35 /*23*/])->f_20 = joaat("emperor");
	(uParam0[35 /*23*/])->f_21 = 0;
	(uParam0[35 /*23*/])->f_22 = 1;
	(uParam0[36 /*23*/])->f_1 = { -100.5493f, -1724.9733f, 28.3857f };
	(uParam0[36 /*23*/])->f_4 = 81.5938f;
	(*uParam0)[36 /*23*/] = 4;
	(uParam0[36 /*23*/])->f_20 = joaat("intruder");
	(uParam0[36 /*23*/])->f_21 = 1;
	(uParam0[36 /*23*/])->f_22 = 2;
	(uParam0[36 /*23*/])->f_10 = { -92.7179f, -1721.0925f, 28.3288f };
	(uParam0[37 /*23*/])->f_1 = { -114.5507f, -1318.9116f, 28.1481f };
	(uParam0[37 /*23*/])->f_4 = 157.6585f;
	(*uParam0)[37 /*23*/] = 4;
	(uParam0[37 /*23*/])->f_20 = joaat("asterope");
	(uParam0[37 /*23*/])->f_21 = 0;
	(uParam0[37 /*23*/])->f_22 = 3;
	(uParam0[37 /*23*/])->f_10 = { -111.4177f, -1293.5677f, 28.2889f };
	(uParam0[38 /*23*/])->f_1 = { 303.2563f, -1699.0979f, 28.1861f };
	(uParam0[38 /*23*/])->f_4 = 213.8354f;
	(*uParam0)[38 /*23*/] = 4;
	(uParam0[38 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[38 /*23*/])->f_21 = 0;
	(uParam0[38 /*23*/])->f_22 = 4;
	(uParam0[38 /*23*/])->f_10 = { 284.1822f, -1679.6572f, 28.3083f };
	(uParam0[39 /*23*/])->f_1 = { 784.1456f, -2046.7025f, 28.1368f };
	(uParam0[39 /*23*/])->f_4 = 12.6961f;
	(*uParam0)[39 /*23*/] = 4;
	(uParam0[39 /*23*/])->f_20 = joaat("blista");
	(uParam0[39 /*23*/])->f_21 = 1;
	(uParam0[39 /*23*/])->f_22 = 5;
	(uParam0[39 /*23*/])->f_10 = { 784.365f, -2070.9988f, 28.3414f };
	(uParam0[40 /*23*/])->f_1 = { 29.4785f, -980.7521f, 28.4051f };
	(uParam0[40 /*23*/])->f_4 = 221.9553f;
	(*uParam0)[40 /*23*/] = 4;
	(uParam0[40 /*23*/])->f_20 = joaat("emperor");
	(uParam0[40 /*23*/])->f_21 = 0;
	(uParam0[40 /*23*/])->f_22 = 6;
	(uParam0[40 /*23*/])->f_10 = { 10.3525f, -970.0844f, 28.4022f };
	(uParam0[41 /*23*/])->f_1 = { 101.5021f, -1529.5457f, 28.2147f };
	(uParam0[41 /*23*/])->f_4 = 31.1362f;
	(*uParam0)[41 /*23*/] = 4;
	(uParam0[41 /*23*/])->f_20 = joaat("premier");
	(uParam0[41 /*23*/])->f_21 = 1;
	(uParam0[41 /*23*/])->f_22 = 7;
	(uParam0[41 /*23*/])->f_10 = { 117.6439f, -1547.8854f, 28.2914f };
	(uParam0[42 /*23*/])->f_1 = { 360.6348f, -867.98f, 28.1345f };
	(uParam0[42 /*23*/])->f_4 = 249.799f;
	(*uParam0)[42 /*23*/] = 4;
	(uParam0[42 /*23*/])->f_20 = joaat("buffalo");
	(uParam0[42 /*23*/])->f_21 = 0;
	(uParam0[42 /*23*/])->f_22 = 8;
	(uParam0[42 /*23*/])->f_10 = { 324.7404f, -864.9786f, 28.2923f };
	(uParam0[43 /*23*/])->f_1 = { 261.1898f, -2035.0508f, 17.2895f };
	(uParam0[43 /*23*/])->f_4 = 339.6013f;
	(*uParam0)[43 /*23*/] = 4;
	(uParam0[43 /*23*/])->f_20 = joaat("premier");
	(uParam0[43 /*23*/])->f_21 = 1;
	(uParam0[43 /*23*/])->f_22 = 9;
	(uParam0[43 /*23*/])->f_10 = { 279.2888f, -2017.8461f, 18.4895f };
	(uParam0[44 /*23*/])->f_1 = { 418.623f, -1867.9032f, 25.6724f };
	(uParam0[44 /*23*/])->f_4 = 103.9975f;
	(*uParam0)[44 /*23*/] = 4;
	(uParam0[44 /*23*/])->f_20 = joaat("intruder");
	(uParam0[44 /*23*/])->f_21 = 0;
	(uParam0[44 /*23*/])->f_22 = 10;
	(uParam0[44 /*23*/])->f_10 = { 443.8106f, -1847.2933f, 26.8106f };
	(uParam0[45 /*23*/])->f_1 = { 507.4709f, -1668.5927f, 28.6539f };
	(uParam0[45 /*23*/])->f_4 = 78.9463f;
	(*uParam0)[45 /*23*/] = 4;
	(uParam0[45 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[45 /*23*/])->f_21 = 1;
	(uParam0[45 /*23*/])->f_22 = 11;
	(uParam0[45 /*23*/])->f_10 = { 525.0562f, -1678.7812f, 28.4452f };
	(uParam0[46 /*23*/])->f_1 = { -203.7249f, -667.237f, 32.6054f };
	(uParam0[46 /*23*/])->f_4 = 34.4328f;
	(*uParam0)[46 /*23*/] = 4;
	(uParam0[46 /*23*/])->f_20 = joaat("asterope");
	(uParam0[46 /*23*/])->f_21 = 0;
	(uParam0[46 /*23*/])->f_22 = 12;
	(uParam0[46 /*23*/])->f_10 = { -179.7505f, -678.1224f, 33.1625f };
	(uParam0[47 /*23*/])->f_1 = { -318.031f, -865.0022f, 30.482f };
	(uParam0[47 /*23*/])->f_4 = 238.9396f;
	(*uParam0)[47 /*23*/] = 4;
	(uParam0[47 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[47 /*23*/])->f_21 = 0;
	(uParam0[47 /*23*/])->f_22 = 13;
	(uParam0[47 /*23*/])->f_10 = { -338.2523f, -859.7131f, 30.5587f };
	(uParam0[48 /*23*/])->f_1 = { 401.2838f, -1480.8701f, 28.3058f };
	(uParam0[48 /*23*/])->f_4 = 281.6565f;
	(*uParam0)[48 /*23*/] = 4;
	(uParam0[48 /*23*/])->f_20 = joaat("blista");
	(uParam0[48 /*23*/])->f_21 = 2;
	(uParam0[48 /*23*/])->f_22 = 14;
	(uParam0[48 /*23*/])->f_10 = { 369.6188f, -1495.7296f, 28.2385f };
	(uParam0[49 /*23*/])->f_1 = { 2912.9065f, 4410.6245f, 47.9319f };
	(uParam0[49 /*23*/])->f_4 = 51.9751f;
	(*uParam0)[49 /*23*/] = 4;
	(uParam0[49 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[49 /*23*/])->f_21 = 0;
	(uParam0[49 /*23*/])->f_22 = 15;
	(uParam0[49 /*23*/])->f_10 = { 2929.2373f, 4389.6006f, 49.1801f };
	(uParam0[50 /*23*/])->f_1 = { 1684.6714f, 4789.85f, 40.9384f };
	(uParam0[50 /*23*/])->f_4 = 337.6293f;
	(*uParam0)[50 /*23*/] = 4;
	(uParam0[50 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[50 /*23*/])->f_21 = 1;
	(uParam0[50 /*23*/])->f_22 = 16;
	(uParam0[50 /*23*/])->f_10 = { 1677.4445f, 4772.6963f, 40.9936f };
	(uParam0[51 /*23*/])->f_1 = { 217.386f, -2545.0613f, 5.1932f };
	(uParam0[51 /*23*/])->f_4 = 95.5124f;
	(*uParam0)[51 /*23*/] = 1;
	(uParam0[51 /*23*/])->f_6 = { 150.731f, -2066.6626f, 17.2342f };
	(uParam0[51 /*23*/])->f_5 = 0;
	(uParam0[51 /*23*/])->f_13 = { 217.88295f, -2593.5479f, 4.174078f };
	(uParam0[51 /*23*/])->f_16 = { 217.1816f, -2499.7786f, 12.43667f };
	(uParam0[51 /*23*/])->f_19 = 8f;
	(uParam0[52 /*23*/])->f_1 = { -692.027f, -847.6826f, 22.6477f };
	(uParam0[52 /*23*/])->f_4 = 245.055f;
	(*uParam0)[52 /*23*/] = 4;
	(uParam0[52 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[52 /*23*/])->f_21 = 0;
	(uParam0[52 /*23*/])->f_22 = 15;
	(uParam0[52 /*23*/])->f_10 = { -723.7541f, -844.7679f, 21.9551f };
}

void func_268()//Position - 0xF5DF
{
	char* sVar0;
	
	if (iLocal_3113 < 16)
	{
		HUD::CLEAR_PRINTS();
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		func_301(&Global_113020, 3);
		switch (iLocal_3082)
		{
			case 2:
				sVar0 = "TOW_FAIL_05";
				break;
			
			case 0:
				sVar0 = "TOW_FAIL_10";
				break;
			
			case 6:
				sVar0 = "DTRSHRD_FAIL_03";
				break;
			
			case 1:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 11:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 13:
				sVar0 = "TOW_FAIL_16";
				break;
			
			case 4:
				sVar0 = "TOW_FAIL_12";
				break;
			
			case 5:
				sVar0 = "TOW_FAIL_01";
				break;
			
			case 3:
				sVar0 = "TOW_FAIL_03";
				break;
			
			case 8:
				sVar0 = "TOW_FAIL_04";
				break;
			
			case 9:
				sVar0 = "TOW_FAIL_04a";
				break;
			
			case 14:
				sVar0 = "TOW_FAIL_06";
				break;
			
			case 15:
				sVar0 = "TOW_FAIL_07";
				break;
			
			case 16:
				sVar0 = "TOW_FAIL_09";
				break;
			
			case 17:
				sVar0 = "TOW_FAIL_09a";
				break;
			
			case 18:
				sVar0 = "TOW_FAIL_02";
				break;
			
			case 21:
				sVar0 = "TOW_FAIL_11";
				break;
			
			case 22:
				sVar0 = "TOW_FAIL_13";
				break;
			
			case 23:
				sVar0 = "TOW_FAIL_14";
				break;
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			sVar0 = "TOW_FAIL_15";
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			func_271(sVar0);
		}
		func_270();
		func_272(SCRIPT::GET_THIS_SCRIPT_NAME());
		while (!func_269())
		{
			SYSTEM::WAIT(0);
		}
		func_194();
	}
}

int func_269()//Position - 0xF769
{
	if (Global_4)
	{
		return 1;
	}
	if (Global_101392 == 7 || Global_101392 == 8)
	{
		return 1;
	}
	return 0;
}

void func_270()//Position - 0xF796
{
	Global_101427 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79481))
		{
			switch (func_26())
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
			switch (func_26())
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

void func_271(char* sParam0)//Position - 0xF881
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_79481, sParam0, 16);
			StringCopy(&Global_79485, "", 16);
			if (RECORDING::IS_REPLAY_RECORDING())
			{
				RECORDING::STOP_REPLAY_RECORDING();
			}
		}
	}
}

void func_272(char* sParam0)//Position - 0xF8BF
{
	if (Global_101392 != 12)
	{
		func_273(sParam0, 5, -1);
	}
}

int func_273(char* sParam0, int iParam1, int iParam2)//Position - 0xF8DC
{
	int iVar0;
	struct<32> Var1;
	int iVar33;
	
	func_298();
	func_297();
	Global_101392 = 0;
	StringCopy(&(Global_101392.f_3), sParam0, 32);
	Global_101392.f_11 = iParam1;
	MISC::PAUSE_DEATH_ARREST_RESTART(true);
	MISC::SET_FADE_OUT_AFTER_ARREST(false);
	MISC::SET_FADE_OUT_AFTER_DEATH(false);
	func_293(1);
	func_291(1);
	func_288(0);
	func_287(1);
	MISC::CLEAR_BIT(&(Global_101392.f_20), 9);
	MISC::CLEAR_BIT(&(Global_101392.f_20), 6);
	MISC::CLEAR_BIT(&(Global_101392.f_20), 20);
	MISC::CLEAR_BIT(&(Global_101392.f_20), 21);
	MISC::CLEAR_BIT(&(Global_101392.f_20), 5);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0))
				{
					MISC::SET_BIT(&(Global_101392.f_20), 5);
				}
			}
		}
	}
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	func_286(0);
	func_285(1);
	Global_101392.f_2 = Global_101429;
	if (func_284())
	{
		if (func_283())
		{
			if (Global_101429 >= func_280())
			{
				if (!BitTest(Global_92160[iParam2 /*34*/].f_15, 16))
				{
					if (Global_114372.f_9088.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_95548 = 1;
					}
				}
			}
		}
		else if (Global_101392.f_11 == 6)
		{
			func_275(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_114372.f_18577[iParam2 /*6*/].f_4 >= 2)
				{
					Global_95548 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_274(SCRIPT::GET_THIS_SCRIPT_NAME());
			if (iVar33 > -1)
			{
				if (Global_114372.f_24989.f_4[iVar33] >= 2)
				{
					Global_95548 = 1;
				}
			}
		}
	}
	return 1;
}

int func_274(char* sParam0)//Position - 0xFA6B
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

void func_275(int iParam0, var uParam1)//Position - 0xFAC1
{
	switch (iParam0)
	{
		case 0:
			func_276(uParam1, "Abigail1", func_278(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 1:
			func_276(uParam1, "Abigail2", func_278(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 2:
			func_276(uParam1, "Barry1", func_278(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 3:
			func_276(uParam1, "Barry2", func_278(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_277(iParam0), 1, 1);
			break;
		
		case 4:
			func_276(uParam1, "Barry3", func_278(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 5:
			func_276(uParam1, "Barry3A", func_278(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 6:
			func_276(uParam1, "Barry3C", func_278(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 7:
			func_276(uParam1, "Barry4", func_278(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_277(iParam0), 0, 0);
			break;
		
		case 8:
			func_276(uParam1, "Dreyfuss1", func_278(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 9:
			func_276(uParam1, "Epsilon1", func_278(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 10:
			func_276(uParam1, "Epsilon2", func_278(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 11:
			func_276(uParam1, "Epsilon3", func_278(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 12:
			func_276(uParam1, "Epsilon4", func_278(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 13:
			func_276(uParam1, "Epsilon5", func_278(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 14:
			func_276(uParam1, "Epsilon6", func_278(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 15:
			func_276(uParam1, "Epsilon7", func_278(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 16:
			func_276(uParam1, "Epsilon8", func_278(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 17:
			func_276(uParam1, "Extreme1", func_278(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 18:
			func_276(uParam1, "Extreme2", func_278(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 19:
			func_276(uParam1, "Extreme3", func_278(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 20:
			func_276(uParam1, "Extreme4", func_278(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 21:
			func_276(uParam1, "Fanatic1", func_278(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_277(iParam0), 1, 0);
			break;
		
		case 22:
			func_276(uParam1, "Fanatic2", func_278(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_277(iParam0), 1, 0);
			break;
		
		case 23:
			func_276(uParam1, "Fanatic3", func_278(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_277(iParam0), 0, 1);
			break;
		
		case 24:
			func_276(uParam1, "Hao1", func_278(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_277(iParam0), 0, 1);
			break;
		
		case 25:
			func_276(uParam1, "Hunting1", func_278(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 26:
			func_276(uParam1, "Hunting2", func_278(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 27:
			func_276(uParam1, "Josh1", func_278(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 28:
			func_276(uParam1, "Josh2", func_278(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_277(iParam0), 1, 1);
			break;
		
		case 29:
			func_276(uParam1, "Josh3", func_278(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_277(iParam0), 1, 1);
			break;
		
		case 30:
			func_276(uParam1, "Josh4", func_278(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 31:
			func_276(uParam1, "Maude1", func_278(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 32:
			func_276(uParam1, "Minute1", func_278(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 33:
			func_276(uParam1, "Minute2", func_278(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 34:
			func_276(uParam1, "Minute3", func_278(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 35:
			func_276(uParam1, "MrsPhilips1", func_278(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 36:
			func_276(uParam1, "MrsPhilips2", func_278(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 37:
			func_276(uParam1, "Nigel1", func_278(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 38:
			func_276(uParam1, "Nigel1A", func_278(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_277(iParam0), 1, 1);
			break;
		
		case 39:
			func_276(uParam1, "Nigel1B", func_278(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_277(iParam0), 1, 1);
			break;
		
		case 40:
			func_276(uParam1, "Nigel1C", func_278(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_277(iParam0), 1, 1);
			break;
		
		case 41:
			func_276(uParam1, "Nigel1D", func_278(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_277(iParam0), 1, 1);
			break;
		
		case 42:
			func_276(uParam1, "Nigel2", func_278(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_277(iParam0), 1, 1);
			break;
		
		case 43:
			func_276(uParam1, "Nigel3", func_278(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_277(iParam0), 1, 1);
			break;
		
		case 44:
			func_276(uParam1, "Omega1", func_278(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 45:
			func_276(uParam1, "Omega2", func_278(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 46:
			func_276(uParam1, "Paparazzo1", func_278(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 47:
			func_276(uParam1, "Paparazzo2", func_278(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 48:
			func_276(uParam1, "Paparazzo3", func_278(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 49:
			func_276(uParam1, "Paparazzo3A", func_278(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 50:
			func_276(uParam1, "Paparazzo3B", func_278(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 51:
			func_276(uParam1, "Paparazzo4", func_278(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 52:
			func_276(uParam1, "Rampage1", func_278(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 54:
			func_276(uParam1, "Rampage3", func_278(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 55:
			func_276(uParam1, "Rampage4", func_278(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 56:
			func_276(uParam1, "Rampage5", func_278(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 53:
			func_276(uParam1, "Rampage2", func_278(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 57:
			func_276(uParam1, "TheLastOne", func_278(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 58:
			func_276(uParam1, "Tonya1", func_278(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 59:
			func_276(uParam1, "Tonya2", func_278(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 60:
			func_276(uParam1, "Tonya3", func_278(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 61:
			func_276(uParam1, "Tonya4", func_278(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 62:
			func_276(uParam1, "Tonya5", func_278(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_276(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x10C37
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

int func_277(int iParam0)//Position - 0x10CC8
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

struct<2> func_278(int iParam0)//Position - 0x1100E
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_279(iParam0) };
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

struct<2> func_279(int iParam0)//Position - 0x11044
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

int func_280()//Position - 0x1148F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_281(&(Global_101392.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_281(char* sParam0, bool bParam1)//Position - 0x114B3
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = func_282(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_282(int iParam0, bool bParam1)//Position - 0x114DD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_92160[iVar0 /*34*/].f_6 == iParam0)
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

int func_283()//Position - 0x11513
{
	if ((((Global_101392.f_11 == 0 || Global_101392.f_11 == 1) || Global_101392.f_11 == 2) || Global_101392.f_11 == 3) || Global_101392.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_284()//Position - 0x11563
{
	if ((((Global_101392.f_11 == 0 || Global_101392.f_11 == 1) || Global_101392.f_11 == 2) || Global_101392.f_11 == 6) || Global_101392.f_11 == 3)
	{
		return 1;
	}
	if (Global_101392.f_11 == 5)
	{
		if (func_274(&(Global_101392.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_285(int iParam0)//Position - 0x115CF
{
	if (iParam0 == 1)
	{
		Global_44471 = 1;
	}
	else
	{
		Global_44471 = 0;
	}
}

void func_286(bool bParam0)//Position - 0x115E8
{
	HUD::DISPLAY_HUD(bParam0);
	HUD::DISPLAY_RADAR(bParam0);
}

void func_287(int iParam0)//Position - 0x115FC
{
	if (iParam0 == 1)
	{
		HUD::THEFEED_PAUSE();
		MISC::SET_BIT(&(Global_101392.f_20), 3);
	}
	else if (BitTest(Global_101392.f_20, 3))
	{
		HUD::THEFEED_RESUME();
		MISC::CLEAR_BIT(&(Global_101392.f_20), 3);
	}
}

void func_288(int iParam0)//Position - 0x11636
{
	if (iParam0 == 1)
	{
		if (BitTest(Global_101392.f_20, 4))
		{
			func_290();
			MISC::CLEAR_BIT(&(Global_101392.f_20), 4);
		}
	}
	else
	{
		func_289();
		MISC::SET_BIT(&(Global_101392.f_20), 4);
	}
}

void func_289()//Position - 0x11670
{
	Global_23572.f_5 = 1;
}

void func_290()//Position - 0x1167E
{
	Global_23572.f_5 = 0;
}

void func_291(bool bParam0)//Position - 0x1168C
{
	if (bParam0)
	{
		func_292();
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8684, 16);
		}
		Global_20813.f_1 = 1;
		if (func_163(0))
		{
			func_293(0);
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

void func_292()//Position - 0x116EF
{
	if (Global_20813.f_1 == 9 || Global_20813.f_1 == 10)
	{
		Global_22219 = 0;
		Global_22215 = 1;
	}
}

void func_293(int iParam0)//Position - 0x11718
{
	if (func_296())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_295())
		{
			func_294(1, 1);
		}
		else
		{
			func_294(0, 0);
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
	if (!func_23())
	{
		Global_20813.f_1 = 3;
	}
}

void func_294(bool bParam0, bool bParam1)//Position - 0x117A2
{
	if (bParam0)
	{
		if (func_163(0))
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

bool func_295()//Position - 0x11816
{
	return BitTest(Global_1956030, 5);
}

bool func_296()//Position - 0x11824
{
	return BitTest(Global_1956030, 19);
}

void func_297()//Position - 0x11833
{
	Global_95548 = 0;
	Global_95549 = 0;
}

void func_298()//Position - 0x11845
{
	Global_101392 = 13;
	Global_101392.f_1 = -1;
	Global_101392.f_2 = 0;
	Global_101392.f_30 = 0f;
	MISC::CLEAR_BIT(&(Global_101392.f_20), 25);
	Global_101426 = 0;
	func_285(0);
	func_300();
	func_299();
	Global_101392.f_18 = -1;
	Global_101392.f_19 = -1;
}

void func_299()//Position - 0x11894
{
	MISC::CLEAR_BIT(&(Global_101392.f_20), 22);
	MISC::CLEAR_BIT(&(Global_101392.f_20), 8);
}

void func_300()//Position - 0x118B4
{
	if (Global_101392.f_16 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_101392.f_16));
		Global_101392.f_16 = 0;
	}
	if (Global_101392.f_17 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_101392.f_17));
		Global_101392.f_17 = 0;
	}
}

void func_301(var uParam0, int iParam1)//Position - 0x118F2
{
	func_302(uParam0, iParam1);
}

void func_302(var uParam0, var uParam1)//Position - 0x11902
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_303()//Position - 0x11913
{
	if (((Global_101392 == 13 || Global_101392 == 10) || Global_101392 == 11) || Global_101392 == 12)
	{
		return 0;
	}
	return 1;
}

