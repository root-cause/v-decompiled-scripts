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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
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
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<485> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	int iLocal_727 = 0;
	int iLocal_728 = 0;
	int iLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	int iLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
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
	sLocal_16 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_34 = 202;
	iLocal_35 = 201;
	iLocal_36 = 24;
	iLocal_37 = 202;
	iLocal_38 = 25;
	iLocal_41 = -1;
	iLocal_43 = -1;
	iLocal_736 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_246();
	}
	func_245(3);
	func_234(&(Local_44.f_1), func_244(Global_97542[1 /*19*/], Global_97542[2 /*19*/]));
	func_233(&Local_44, 0);
	while (!func_232(4))
	{
		if (!Global_79660)
		{
			if (!func_231(86) && !func_230(14))
			{
				func_219(&Local_44, 32f, 35f);
			}
			else if (BitTest(Local_44.f_449, 0))
			{
				func_217(&Local_44);
			}
			if (BitTest(Local_44.f_449, 0))
			{
				if (func_216() == 86)
				{
					while (!func_217(&Local_44))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			func_214(&Local_44);
			func_205();
			func_153();
			if (func_151(0) || BitTest(Local_44.f_449, 2))
			{
				func_67(&Local_44);
				func_4(&Local_44);
				func_3(&Local_44);
			}
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist")) > 0)
		{
			func_2();
		}
		SYSTEM::WAIT(0);
	}
	func_1(3);
	func_246();
}

int func_1(int iParam0)//Position - 0x17C
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		MISC::CLEAR_BIT(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1D3
{
	int iVar0;
	
	if (Global_79650)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((1f + (1000f * SYSTEM::TIMESTEP())));
	Global_97733.f_8 = (Global_97733.f_8 + iVar0);
}

void func_3(var uParam0)//Position - 0x215
{
	if (BitTest(Global_97521, *uParam0))
	{
		if (BitTest(uParam0->f_449, 1))
		{
			MISC::SET_BIT(&(uParam0->f_449), 15);
			MISC::SET_BIT(&(uParam0->f_449), 16);
			MISC::SET_BIT(&(uParam0->f_449), 14);
			MISC::CLEAR_BIT(&Global_97521, *uParam0);
		}
	}
}

void func_4(var uParam0)//Position - 0x25E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_66(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_464 && !(iVar1 == 2 && uParam0->f_464 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_464 == 4))
	{
		if (BitTest(uParam0->f_449, 2))
		{
			func_5(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_464 = iVar1;
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2)//Position - 0x2E9
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_64(uParam0);
			uParam0->f_464 = iParam1;
			func_6(uParam0, iParam1, iParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)//Position - 0x31B
{
	switch (iParam1)
	{
		case 0:
			func_63(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			break;
		
		case 1:
			func_63(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		
		case 2:
			func_35(uParam0, uParam0->f_417, iParam2);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			uParam0->f_457 = MISC::GET_GAME_TIMER();
			break;
		
		case 3:
			func_17(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			MISC::SET_BIT(&(uParam0->f_449), 9);
			uParam0->f_457 = MISC::GET_GAME_TIMER();
			break;
		
		case 4:
			func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
			func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
			Global_113969.f_1.f_6[*uParam0] = 1;
			HUD::CLEAR_HELP(false);
			func_11(uParam0, 0);
			func_63(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::SET_BIT(&(uParam0->f_449), 4);
			uParam0->f_457 = MISC::GET_GAME_TIMER();
			break;
	}
	func_7(uParam0);
}

void func_7(var uParam0)//Position - 0x448
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 13, true);
	sVar1 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 11, true);
	sVar2 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/, true);
	sVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true);
	sVar4 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
	sVar5 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 6, true);
		sVar1 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 7, true);
		sVar2 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 29, true);
	}
	bVar6 = func_10(1, *uParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.6f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	switch (uParam0->f_464)
	{
		case 0:
			if (BitTest(uParam0->f_449, 2))
			{
				if (bVar6)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_9(sVar2);
					func_8("PB_H_ZOOM" /* GXT: Zoom */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_9(sVar3);
					func_8("PB_H_LOOK" /* GXT: Look Around */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_9(sVar2);
					func_8("PB_H_ZOOM" /* GXT: Zoom */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_9(sVar3);
					func_8("PB_H_LOOK" /* GXT: Look Around */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_9(sVar5);
					func_8("PB_H_EXIT" /* GXT: Exit */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 2:
			if (BitTest(uParam0->f_449, 2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				if (*uParam0 == 2)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_9(sVar0);
					func_8("PB_H_SELCT" /* GXT: Browse */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_9(sVar3);
					func_8("PB_H_LOOK" /* GXT: Look Around */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_9(sVar4);
					func_8("PB_H_TRIG" /* GXT: Select */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
					func_9(sVar0);
					func_8("PB_H_SELCT" /* GXT: Browse */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_9(sVar3);
					func_8("PB_H_LOOK" /* GXT: Look Around */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_9(sVar5);
					func_8("PB_H_UNDO" /* GXT: Back */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_9(sVar4);
					func_8("PB_H_TRIG" /* GXT: Select */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 3:
			if (BitTest(uParam0->f_449, 2))
			{
				if (BitTest(uParam0->f_449, 9))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_9(sVar1);
					func_8("PB_H_SELCT" /* GXT: Browse */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_9(sVar3);
					func_8("PB_H_LOOK" /* GXT: Look Around */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_9(sVar1);
					func_8("PB_H_SELCT" /* GXT: Browse */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_9(sVar3);
					func_8("PB_H_LOOK" /* GXT: Look Around */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_9(sVar4);
					func_8("PB_H_TRIG" /* GXT: Select */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 4:
			if (BitTest(uParam0->f_449, 2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				func_9(sVar2);
				func_8("PB_H_ZOOM" /* GXT: Zoom */);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				func_9(sVar3);
				func_8("PB_H_LOOK" /* GXT: Look Around */);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_9(sVar5);
				func_8("PB_H_UNDO" /* GXT: Back */);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_9(sVar4);
				func_8("PB_H_CONF" /* GXT: Confirm */);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
	}
}

void func_8(char* sParam0)//Position - 0x915
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_9(char* sParam0)//Position - 0x927
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_10(int iParam0, int iParam1)//Position - 0x935
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
	iVar0 = BitTest(Global_113969.f_9088.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

void func_11(var uParam0, bool bParam1)//Position - 0x97F
{
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_449), 18);
		if (((!func_12(&(uParam0->f_1.f_20[0 /*4*/])) && !func_12(&(uParam0->f_1.f_20[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
		{
			HUD::CLEAR_HELP(false);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_449), 18);
	}
}

bool func_12(char* sParam0)//Position - 0x9F4
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_13(char* sParam0, int iParam1)//Position - 0xA07
{
	int iVar0;
	int iVar1;
	
	if (Global_112606 && iParam1)
	{
		if (func_12(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(false);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_113969.f_20413[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_113969.f_20413.f_145 - 2))
			{
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15((Global_113969.f_20413.f_145 - 1));
			Global_113969.f_20413.f_145 = (Global_113969.f_20413.f_145 - 1);
			func_14();
			return;
		}
		iVar0++;
	}
}

void func_14()//Position - 0xAB4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[0])
			{
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[1])
			{
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[2])
			{
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_15(int iParam0)//Position - 0xBCB
{
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/].f_4), "", 16);
	Global_113969.f_20413[iParam0 /*16*/].f_8 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = -1;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = 0;
}

void func_16(int iParam0, int iParam1)//Position - 0xC65
{
	Global_113969.f_20413[iParam0 /*16*/] = { Global_113969.f_20413[iParam1 /*16*/] };
	Global_113969.f_20413[iParam0 /*16*/].f_4 = { Global_113969.f_20413[iParam1 /*16*/].f_4 };
	Global_113969.f_20413[iParam0 /*16*/].f_8 = Global_113969.f_20413[iParam1 /*16*/].f_8;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = Global_113969.f_20413[iParam1 /*16*/].f_10;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = Global_113969.f_20413[iParam1 /*16*/].f_9;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = Global_113969.f_20413[iParam1 /*16*/].f_11;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = Global_113969.f_20413[iParam1 /*16*/].f_12;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = Global_113969.f_20413[iParam1 /*16*/].f_13;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = Global_113969.f_20413[iParam1 /*16*/].f_14;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = Global_113969.f_20413[iParam1 /*16*/].f_15;
}

void func_17(var uParam0)//Position - 0xD75
{
	int iVar0;
	struct<2> Var1;
	
	func_34(uParam0);
	func_31(uParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	Var1.f_0 = (uParam0->f_1.f_16 + uParam0->f_1.f_18);
	Var1.f_1 = (uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
	func_25(uParam0, &Var1, uParam0->f_1.f_10);
	func_23(uParam0, 1, 1);
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_18(var uParam0)//Position - 0xE48
{
	int iVar0;
	
	if (BitTest(uParam0->f_449, 7))
	{
		if (!BitTest(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_113969.f_1[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_20[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_20[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_113969.f_1[*uParam0] = 1;
					}
					else if (func_20() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (((!BitTest(uParam0->f_449, 11) && !BitTest(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
						{
							HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_CHOICE" /* GXT: Select an approach for this heist. */);
							HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_113969.f_1.f_6[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_108[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_108[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_113969.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!BitTest(uParam0->f_449, 10))
						{
							if ((!func_12("PB_H_GUNM" /* GXT: Select a gunman to hire. */) && !func_12("PB_H_HACK" /* GXT: Select a hacker to hire. */)) && !func_12("PB_H_DRIV" /* GXT: Select a driver to hire. */))
							{
								iVar0 = func_65(func_30(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!BitTest(uParam0->f_449, 11) && !BitTest(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
									{
										switch (Global_97542[iVar0 /*19*/].f_1[uParam0->f_417])
										{
											case 1:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_GUNM" /* GXT: Select a gunman to hire. */);
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
												break;
											
											case 2:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_HACK" /* GXT: Select a hacker to hire. */);
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
												break;
											
											case 3:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_DRIV" /* GXT: Select a driver to hire. */);
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_19()//Position - 0x10A8
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_20()//Position - 0x10CA
{
	if (Global_113969.f_20413.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x10E7
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1108
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
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113969.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113969.f_20413.f_145++;
		func_14();
	}
}

void func_23(var uParam0, bool bParam1, int iParam2)//Position - 0x12DB
{
	if (!BitTest(uParam0->f_1.f_303, bParam1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_280[bParam1 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[bParam1 /*2*/], iParam2);
			MISC::SET_BIT(&(uParam0->f_1.f_303), bParam1);
		}
	}
}

void func_24(var uParam0, struct<2> Param1, struct<2> Param3, int iParam5)//Position - 0x1332
{
	if (uParam0->f_483 == 3)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Param3))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { Param1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { Param3 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam5;
		uParam0->f_483++;
	}
}

void func_25(var uParam0, var uParam1, float fParam2)//Position - 0x1392
{
	struct<3> Var0;
	
	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = MISC::GET_GAME_TIMER() + 1000;
	Var0 = { func_27(uParam0, &(uParam0->f_411)) };
	func_26(&(uParam0->f_649), Var0, fParam2);
}

void func_26(var uParam0, struct<3> Param1, float fParam4)//Position - 0x13D7
{
	uParam0->f_11 = { Param1 };
	if (fParam4 != -1f)
	{
		uParam0->f_7 = fParam4;
	}
}

Vector3 func_27(var uParam0, var uParam1)//Position - 0x13F6
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	fVar10 = fVar4;
	fVar11 = MISC::ATAN((fVar10 / uParam0->f_1.f_8));
	fVar12 = (uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
	fVar13 = (Var7.f_2 - uParam0->f_649.f_1.f_2);
	fVar14 = (fVar13 - fVar12);
	fVar15 = MISC::ATAN((fVar14 / uParam0->f_1.f_8));
	fVar16 = ((fVar11 * 3f) / 18f);
	return (fVar15 * 0.95f), fVar16, (-fVar11 * 0.85f);
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x14DB
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(iVar0));
	*uParam3 = (SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(iVar1));
}

int func_29(int iParam0, int iParam1)//Position - 0x1546
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x162C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_31(var uParam0)//Position - 0x167D
{
	int iVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_16));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_16.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_33(uParam0);
	switch (*uParam0)
	{
		case 0:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 4:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_32(*uParam0, uParam0->f_1.f_29));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (iVar0 == func_29(*uParam0, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_32(int iParam0, int iParam1)//Position - 0x18EA
{
	return BitTest(Global_113969.f_1.f_120[iParam0], iParam1);
}

void func_33(var uParam0)//Position - 0x1901
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_LABELS");
	func_8("H_CRW_NAME" /* GXT: Name */);
	func_8("H_CRW_TYPE" /* GXT: Expertise */);
	func_8("H_CRW_SKILLS" /* GXT: Skills */);
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_JWL" /* GXT: JEWEL STORE */);
			break;
		
		case 1:
			func_8("H_LBL_DOC" /* GXT: LS PORT */);
			break;
		
		case 2:
			func_8("H_LBL_RUR" /* GXT: PALETO */);
			break;
		
		case 3:
			func_8("H_LBL_AGN" /* GXT: BUREAU */);
			break;
		
		case 4:
			func_8("H_LBL_FA" /* GXT: BIG SCORE A */);
			func_8("H_LBL_FB" /* GXT: BIG SCORE B */);
			break;
	}
	if (*uParam0 != 1)
	{
		func_8("H_LBL_CRW" /* GXT: CREW */);
	}
	func_8("H_LBL_TODO" /* GXT: TODO */);
	if (*uParam0 != 2)
	{
		func_8("H_LBL_APP" /* GXT: APPROACH */);
	}
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_J1" /* GXT: CCTV */);
			func_8("H_LBL_J2" /* GXT: VENT */);
			func_8("H_LBL_J3" /* GXT: ALARM */);
			func_8("H_LBL_J4" /* GXT: TUNNEL */);
			func_8("HC_J_IMPACT" /* GXT: LOUD */);
			func_8("HC_J_STEALTH" /* GXT: SMART */);
			break;
		
		case 1:
			func_8("HC_D_BLOW_UP" /* GXT: FREIGHTER */);
			func_8("HC_D_DEEP_SEA" /* GXT: OFFSHORE */);
			break;
		
		case 2:
			func_8("H_LBL_R1" /* GXT: plan A */);
			func_8("H_LBL_R2" /* GXT: plan B? */);
			func_8("H_LBL_R3" /* GXT: 67 secs */);
			func_8("H_LBL_R4" /* GXT: 8+ Cops */);
			func_8("H_LBL_R5" /* GXT: 4 Cars */);
			func_8("H_LBL_R6" /* GXT: Banker's wife */);
			func_8("H_LBL_R7" /* GXT: $$$ */);
			func_8("H_LBL_R8" /* GXT: Need military grade hardware */);
			func_8("H_LBL_R9" /* GXT: 8/10 Smash it! */);
			func_8("H_LBL_R10" /* GXT: Military Hardware Route */);
			func_8("H_LBL_R11" /* GXT: Every 2 or 3hrs */);
			func_8("H_LBL_R12" /* GXT: BOAT */);
			break;
		
		case 3:
			func_8("H_LBL_A1" /* GXT: Davis fire station */);
			func_8("H_LBL_A2" /* GXT: floor 53 */);
			func_8("H_LBL_A3" /* GXT: Bomb */);
			func_8("H_LBL_A4" /* GXT: Drive 10 */);
			func_8("H_LBL_A5" /* GXT: 83QSL722 */);
			func_8("HC_A_FIRETRUCK" /* GXT: FIRE CREW */);
			func_8("HC_A_HELICOPTER" /* GXT: ROOF ENTRY */);
			break;
		
		case 4:
			func_8("H_LBL_F1" /* GXT: DROP-OFF */);
			func_8("H_LBL_F2" /* GXT: HOLE */);
			func_8("H_LBL_F3" /* GXT: SECURITY */);
			func_8("H_LBL_F4" /* GXT: GETAWAY */);
			func_8("H_LBL_F5" /* GXT: TUNNEL AMBUSH */);
			func_8("HC_F_TRAFFCONT" /* GXT: SUBTLE */);
			func_8("HC_F_HELI" /* GXT: OBVIOUS */);
			break;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_34(var uParam0)//Position - 0x1B03
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_35(var uParam0, int iParam1, int iParam2)//Position - 0x1B25
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_96)
	{
		return;
	}
	func_23(uParam0, 2, 1);
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = Global_97542[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_62(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_62(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_62(uParam0, iVar0, 2);
			break;
	}
	func_61(uParam0, uParam0->f_417);
	func_36(uParam0, uParam0->f_417);
	uParam0->f_450 = iParam1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_25(uParam0, &(uParam0->f_1.f_97[iParam1 /*2*/]), uParam0->f_1.f_10);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_418[iVar2] != iParam2)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_36(var uParam0, int iParam1)//Position - 0x1C5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_30(*uParam0);
	iVar1 = func_65(iVar0);
	iVar2 = Global_97542[iVar1 /*19*/].f_1[iParam1];
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_97[iParam1 /*2*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_97[iParam1 /*2*/].f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_33(uParam0);
	iVar3 = 0;
	if (Global_113969.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_113969.f_1.f_12[iVar1 /*6*/][iParam1];
		func_41(uParam0->f_413, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_40(iVar6) == iVar2)
			{
				if (func_39(iVar6))
				{
					if (!func_38(iVar6))
					{
						if (!func_37(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_41(uParam0->f_413, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_418[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_113969.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_37(var uParam0, bool bParam1)//Position - 0x1DE5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_417)
	{
		if (Global_113969.f_1.f_12[iVar0 /*6*/][iVar1] == bParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_38(int iParam0)//Position - 0x1E2A
{
	return BitTest(Global_113969.f_1.f_118, iParam0);
}

bool func_39(int iParam0)//Position - 0x1E3D
{
	return BitTest(Global_113969.f_1.f_116, iParam0);
}

int func_40(int iParam0)//Position - 0x1E50
{
	return Global_97388[iParam0 /*5*/];
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1E60
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	func_8(func_59(iParam1));
	func_8(func_58(iParam1));
	switch (func_40(iParam1))
	{
		case 1:
			func_8(func_57(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_54(iParam1, 0));
			func_8(func_57(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_54(iParam1, 1));
			func_8(func_57(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_54(iParam1, 2));
			func_8(func_57(3));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_54(iParam1, 3));
			break;
		
		case 2:
			func_8(func_53(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_50(iParam1, 0));
			func_8(func_53(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_50(iParam1, 1));
			func_8(func_53(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_50(iParam1, 2));
			break;
		
		case 3:
			func_8(func_48(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_43(iParam1, 0));
			func_8(func_48(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_43(iParam1, 1));
			func_8(func_48(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_43(iParam1, 2));
			break;
	}
	func_8("H_CRW_CUT" /* GXT: Cut */);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_42(iParam1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

var func_42(int iParam0)//Position - 0x1F9C
{
	return Global_97388[iParam0 /*5*/].f_1;
}

int func_43(int iParam0, int iParam1)//Position - 0x1FAE
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_45(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_44(iParam1))) * 100f));
}

int func_44(int iParam0)//Position - 0x1FD7
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)//Position - 0x2011
{
	if (func_40(iParam0) != 3)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

int func_46(int iParam0, int iParam1)//Position - 0x202F
{
	return func_47(iParam1, Global_113969.f_1.f_73[iParam0 /*3*/].f_1, Global_113969.f_1.f_73[iParam0 /*3*/].f_2);
}

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x2059
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return SYSTEM::SHIFT_RIGHT(iParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return SYSTEM::SHIFT_RIGHT(iParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return -1;
}

char* func_48(int iParam0)//Position - 0x20AD
{
	return func_49(3, iParam0);
}

char* func_49(int iParam0, int iParam1)//Position - 0x20BC
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1" /* GXT: Max Health */;
					break;
				
				case 1:
					return "HC_STA_G2" /* GXT: Accuracy */;
					break;
				
				case 2:
					return "HC_STA_G3" /* GXT: Shoot Rate */;
					break;
				
				case 3:
					return "HC_STA_G4" /* GXT: Weapon Choice */;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1" /* GXT: Sys Knowledge */;
					break;
				
				case 1:
					return "HC_STA_H2" /* GXT: Decryption Skill */;
					break;
				
				case 2:
					return "HC_STA_H3" /* GXT: Access Speed */;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1" /* GXT: Driving Skill */;
					break;
				
				case 1:
					return "HC_STA_D2" /* GXT: Composure */;
					break;
				
				case 2:
					return "HC_STA_D3" /* GXT: Vehicle Choice */;
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_50(int iParam0, int iParam1)//Position - 0x219F
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_52(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_51(iParam1))) * 100f));
}

int func_51(int iParam0)//Position - 0x21C8
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)//Position - 0x2202
{
	if (func_40(iParam0) != 2)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_53(int iParam0)//Position - 0x2220
{
	return func_49(2, iParam0);
}

int func_54(int iParam0, int iParam1)//Position - 0x222F
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_56(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_55(iParam1))) * 100f));
}

int func_55(int iParam0)//Position - 0x2258
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)//Position - 0x22A1
{
	if (func_40(iParam0) != 1)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_57(int iParam0)//Position - 0x22BF
{
	return func_49(1, iParam0);
}

char* func_58(int iParam0)//Position - 0x22CE
{
	switch (Global_97388[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G" /* GXT: Gunman */;
			break;
		
		case 2:
			return "HC_TYPE_H" /* GXT: Hacker */;
			break;
		
		case 3:
			return "HC_TYPE_D" /* GXT: Driver */;
			break;
	}
	return "ERROR!";
}

char* func_59(int iParam0)//Position - 0x2317
{
	return func_60(iParam0);
}

char* func_60(int iParam0)//Position - 0x2325
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS" /* GXT: Gustavo Mota */;
			break;
		
		case 2:
			return "HC_N_KAR" /* GXT: Karl Abolaji */;
			break;
		
		case 10:
			return "HC_N_PAC" /* GXT: Packie McReary */;
			break;
		
		case 11:
			return "HC_N_CHE" /* GXT: Chef */;
			break;
		
		case 3:
			return "HC_N_HUG" /* GXT: Hugh Welsh */;
			break;
		
		case 4:
			return "HC_N_NOR" /* GXT: Norm Richards */;
			break;
		
		case 5:
			return "HC_N_DAR" /* GXT: Daryl Johns */;
			break;
		
		case 6:
			return "HC_N_PAI" /* GXT: Paige Harris */;
			break;
		
		case 7:
			return "HC_N_CHR" /* GXT: Christian Feltz */;
			break;
		
		case 12:
			return "HC_N_RIC" /* GXT: Rickie Lukens */;
			break;
		
		case 8:
			return "HC_N_EDD" /* GXT: Eddie Toh */;
			break;
		
		case 13:
			return "HC_N_TAL" /* GXT: Taliana Martinez */;
			break;
		
		case 9:
			return "HC_N_KRM" /* GXT: Karim Denz */;
			break;
	}
	return "ERROR!";
}

void func_61(var uParam0, int iParam1)//Position - 0x2408
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_62(var uParam0, int iParam1, bool bParam2)//Position - 0x2427
{
	int iVar0;
	
	if (!BitTest(Global_97542[iParam1 /*19*/].f_18, bParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(Global_97542[iParam1 /*19*/].f_7[bParam2 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, Global_97542[iParam1 /*19*/].f_7[bParam2 /*2*/], 1);
			MISC::SET_BIT(&(Global_97542[iParam1 /*19*/].f_18), bParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_97542[iParam1 /*19*/].f_7[bParam2 /*2*/]), &(Global_97542[iVar0 /*19*/].f_7[bParam2 /*2*/])))
				{
					MISC::SET_BIT(&(Global_97542[iVar0 /*19*/].f_18), bParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_63(var uParam0)//Position - 0x24CF
{
	func_25(uParam0, &(uParam0->f_1.f_12), 45f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_18(uParam0);
}

void func_64(var uParam0)//Position - 0x2505
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	HUD::CLEAR_HELP(false);
}

int func_65(int iParam0)//Position - 0x2548
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_205[iParam0];
}

int func_66(int iParam0)//Position - 0x2575
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return -1;
}

void func_67(var uParam0)//Position - 0x25C6
{
	if (BitTest(uParam0->f_449, 1))
	{
		func_68(uParam0);
	}
}

void func_68(var uParam0)//Position - 0x25DE
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	
	bVar0 = false;
	if (!BitTest(uParam0->f_449, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_150(0))
			{
				if (func_141(8))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_401) < 4f)
					{
						Var1 = { uParam0->f_401 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						fVar5 = MISC::ABSF((uParam0->f_404 - fVar4));
						if (fVar5 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar6 = uParam0->f_404;
							if (fVar6 > 180f)
							{
								fVar6 = (fVar6 - 360f);
							}
							else if (fVar6 < -180f)
							{
								fVar6 = (fVar6 + 360f);
							}
							if ((fVar6 - fVar4) < fVar5)
							{
								fVar5 = MISC::ABSF((fVar6 - fVar4));
							}
							if (fVar5 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar4 > 180f)
								{
									fVar4 = (fVar4 - 360f);
								}
								else if (fVar4 < -180f)
								{
									fVar4 = (fVar4 + 360f);
								}
								if ((uParam0->f_404 - fVar4) < fVar5)
								{
									fVar5 = MISC::ABSF((uParam0->f_404 - fVar4));
								}
								if (fVar5 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar6 - fVar4) < fVar5)
									{
										fVar5 = MISC::ABSF((fVar6 - fVar4));
									}
									if (fVar5 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_451 == -1)
			{
				func_140(&(uParam0->f_451), 3, "PB_H_ENT" /* GXT: Press ~INPUT_CONTEXT~ to view the plans. */, 0, 0, 0, 0);
			}
			else if (func_139(uParam0->f_451, 1))
			{
				func_137(&(uParam0->f_451));
				func_123(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_137(&(uParam0->f_451));
		}
	}
	else
	{
		bVar7 = func_10(1, *uParam0);
		func_79(uParam0);
		if (((!bVar7 && uParam0->f_453 > 15) && (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iLocal_34) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))) || BitTest(uParam0->f_449, 8))
		{
			MISC::CLEAR_BIT(&(uParam0->f_449), 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(var uParam0, bool bParam1)//Position - 0x27F7
{
	struct<3> Var0;
	int iVar3;
	
	uParam0->f_453 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		if (!bParam1)
		{
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0f, (1f * SYSTEM::COS((180f - uParam0->f_404))), (1f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 134);
	}
	HUD::DISPLAY_RADAR(true);
	func_72(0);
	func_71();
	HUD::THEFEED_RESUME();
	HUD::RESET_HUD_COMPONENT_VALUES(17);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(false);
	func_70(&(uParam0->f_649), 0, 1);
	func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
	HUD::CLEAR_HELP(true);
	while (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
		SYSTEM::WAIT(0);
	}
	iVar3 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_401);
	if (iVar3 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iVar3);
	}
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_64(uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 7);
	MISC::CLEAR_BIT(&(uParam0->f_449), 2);
	Global_97520 = 0;
}

void func_70(var uParam0, bool bParam1, bool bParam2)//Position - 0x297C
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (bParam2)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, bParam1, 0);
		}
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, bParam1);
	}
	if (uParam0->f_23)
	{
		HUD::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_71()//Position - 0x2A16
{
	Global_23692.f_5 = 0;
}

void func_72(bool bParam0)//Position - 0x2A24
{
	if (bParam0)
	{
		func_78();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_150(0))
		{
			func_73(0);
		}
	}
	else if (Global_20930.f_1 == 1)
	{
		if (!Global_20930.f_1 == 0)
		{
			Global_20930.f_1 = 3;
		}
	}
}

void func_73(int iParam0)//Position - 0x2A87
{
	if (func_77())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_76())
		{
			func_75(1, 1);
		}
		else
		{
			func_75(0, 0);
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
	if (!func_74())
	{
		Global_20930.f_1 = 3;
	}
}

int func_74()//Position - 0x2B11
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0, bool bParam1)//Position - 0x2B38
{
	if (bParam0)
	{
		if (func_150(0))
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

bool func_76()//Position - 0x2BAC
{
	return BitTest(Global_1956920, 5);
}

bool func_77()//Position - 0x2BBA
{
	return BitTest(Global_1956920, 19);
}

void func_78()//Position - 0x2BC9
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_79(var uParam0)//Position - 0x2BF2
{
	char* sVar0;
	bool bVar1;
	struct<3> Var2;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true);
	if (!MISC::ARE_STRINGS_EQUAL(sVar0, uParam0->f_466))
	{
		func_7(uParam0);
	}
	uParam0->f_466 = sVar0;
	func_121();
	func_109(uParam0);
	func_87(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_84(uParam0);
	}
	if (func_20())
	{
		func_18(uParam0);
	}
	bVar1 = uParam0->f_454 > MISC::GET_GAME_TIMER();
	func_80(&(uParam0->f_649), BitTest(uParam0->f_449, 4), (BitTest(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216, 0);
	if (BitTest(uParam0->f_449, 7))
	{
		if ((!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN()) && !HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!BitTest(uParam0->f_449, 11) && !BitTest(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0))
				{
					if (!BitTest(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_414, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	HUD::DISPLAY_RADAR(false);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::THEFEED_HIDE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	}
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
	if (!BitTest(uParam0->f_449, 7))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			Var2 = { uParam0->f_401 };
			Var2 = { Var2 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_404))), (2.9f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &(Var2.f_2), false, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 134);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var2, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			MISC::SET_BIT(&(uParam0->f_449), 7);
		}
	}
}

void func_80(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)//Position - 0x2E2F
{
	int iVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	func_83(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar5 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
		fVar6 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
		fVar7 = (fVar5 - iParam0->f_29);
		fVar8 = (fVar6 - iParam0->f_30);
		iParam0->f_29 = fVar5;
		iParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar7 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/) * fParam5) * 127f));
		}
		iVar0[2] = func_82((iVar0[2] + iParam0->f_24), -127, 127);
		iVar0[3] = func_82((iVar0[3] + iParam0->f_25), -127, 127);
	}
	if (iParam0->f_24 == iVar0[2] && iParam0->f_25 == iVar0[3])
	{
		if (iParam0->f_27 < MISC::GET_GAME_TIMER())
		{
			iParam0->f_24 = 0;
			iParam0->f_25 = 0;
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				iParam0->f_28 = 1;
			}
		}
	}
	else
	{
		iParam0->f_24 = iVar0[2];
		iParam0->f_25 = iVar0[3];
		iParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
		iParam0->f_28 = 0;
	}
	if (bParam2)
	{
		iParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(iParam0->f_20));
		iParam0->f_8.f_1 = ((-iParam0->f_8.f_2 * IntToFloat(iParam0->f_22)) / IntToFloat(iParam0->f_20));
		iParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(iParam0->f_21));
	}
	else
	{
		iParam0->f_8 = { 0f, 0f, 0f };
		iParam0->f_24 = 0;
		iParam0->f_25 = 0;
	}
	fVar9 = (30f * SYSTEM::TIMESTEP());
	Var10 = { iParam0->f_8 + iParam0->f_11 };
	if ((PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && bParam2) && !iParam0->f_28)
	{
		iParam0->f_14 = Var10.f_0;
		iParam0->f_14.f_1 = Var10.f_1;
		iParam0->f_14.f_2 = Var10.f_2;
	}
	else
	{
		iParam0->f_14 = (iParam0->f_14 + func_81(((((Var10.f_0 - iParam0->f_14) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		iParam0->f_14.f_1 = (iParam0->f_14.f_1 + func_81(((((Var10.f_1 - iParam0->f_14.f_1) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		iParam0->f_14.f_2 = (iParam0->f_14.f_2 + func_81(((((Var10.f_2 - iParam0->f_14.f_2) * 0.05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (iParam0->f_26)
	{
		iParam0->f_14 = func_81(iParam0->f_14, SYSTEM::TO_FLOAT(-iParam0->f_21), SYSTEM::TO_FLOAT(iParam0->f_21));
		iParam0->f_14.f_1 = func_81(iParam0->f_14.f_1, SYSTEM::TO_FLOAT(-iParam0->f_22), SYSTEM::TO_FLOAT(iParam0->f_22));
		iParam0->f_14.f_2 = func_81(iParam0->f_14.f_2, SYSTEM::TO_FLOAT(-iParam0->f_20), SYSTEM::TO_FLOAT(iParam0->f_20));
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/) && bParam1)
	{
		if (iParam0->f_28)
		{
			iParam0->f_17 = iParam0->f_7;
		}
	}
	else
	{
		iParam0->f_17 = iParam0->f_7;
	}
	if (bParam1)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, iVar13))
			{
				iParam0->f_17 = (iParam0->f_17 - 5f);
				iParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				iParam0->f_28 = 0;
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, iVar14))
			{
				iParam0->f_17 = (iParam0->f_17 + 5f);
				iParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				iParam0->f_28 = 0;
			}
			if (bParam3)
			{
				iParam0->f_17 = func_81(iParam0->f_17, (iParam0->f_7 - iParam0->f_19), iParam0->f_7);
			}
			else
			{
				iParam0->f_17 = func_81(iParam0->f_17, (iParam0->f_7 - iParam0->f_19), (iParam0->f_7 + iParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/);
			iVar0[3] = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					iParam0->f_17 = (iParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (iParam0->f_19 / 2f)))));
				}
			}
			else
			{
				iParam0->f_17 = (iParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * iParam0->f_19))));
				iParam0->f_17 = (iParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * iParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				iParam0->f_17 = (iParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * iParam0->f_19))));
			}
		}
		else
		{
			iParam0->f_17 = (iParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * iParam0->f_19))));
		}
	}
	iParam0->f_18 = (iParam0->f_18 + (((iParam0->f_17 - iParam0->f_18) * 0.06f) * fVar9));
	CAM::SET_CAM_PARAMS(*iParam0, iParam0->f_1, iParam0->f_4 + iParam0->f_14, iParam0->f_18, 0, 1, 1, 2);
	if (CAM::DOES_CAM_EXIST(*iParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*iParam0))
		{
			if (CAM::IS_CAM_RENDERING(*iParam0))
			{
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			}
		}
	}
}

float func_81(float fParam0, float fParam1, float fParam2)//Position - 0x3383
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

int func_82(int iParam0, int iParam1, int iParam2)//Position - 0x33AA
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_83(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x33CF
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_84(var uParam0)//Position - 0x34D3
{
	bool bVar0;
	bool bVar1;
	
	if (!func_10(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (BitTest(uParam0->f_449, 19))
				{
					uParam0->f_452 = MISC::GET_GAME_TIMER() + 500;
				}
				else
				{
					uParam0->f_452 = MISC::GET_GAME_TIMER();
				}
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_452)
			{
				bVar0 = false;
				bVar1 = false;
				while (bVar1 < uParam0->f_1.f_369)
				{
					if (!bVar0)
					{
						if (!BitTest(uParam0->f_1.f_303, bVar1 + 4))
						{
							func_86(uParam0, bVar1);
							if (BitTest(uParam0->f_1.f_370, bVar1))
							{
								MISC::SET_BIT(&(uParam0->f_449), 19);
							}
							else
							{
								MISC::CLEAR_BIT(&(uParam0->f_449), 19);
							}
							bVar0 = true;
						}
					}
					bVar1++;
				}
				if (!bVar0)
				{
					func_85(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_85(int iParam0, int iParam1, bool bParam2)//Position - 0x35A9
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	iVar0 = BitTest(Global_113969.f_9088.f_99.f_219[iParam0], iParam1);
	if (iVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113969.f_9088.f_99.f_219[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_9088.f_99.f_219[iParam0]), iParam1);
	}
}

void func_86(var uParam0, int iParam1)//Position - 0x362B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_25(uParam0, &(uParam0->f_1.f_371[iParam1 /*2*/]), uParam0->f_1.f_11);
	func_23(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_87(var uParam0)//Position - 0x3672
{
	int iVar0;
	int iVar1;
	
	if ((!func_19() && CAM::IS_SCREEN_FADED_IN()) && !CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (uParam0->f_483 > 0)
		{
			if (!BitTest(uParam0->f_449, 13))
			{
				if (func_88(&(uParam0->f_484), &(uParam0->f_467[0 /*5*/]), &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
					if (uParam0->f_467[0 /*5*/].f_4)
					{
						MISC::CLEAR_BIT(&(uParam0->f_449), 11);
					}
					else
					{
						MISC::SET_BIT(&(uParam0->f_449), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_467[iVar0 /*5*/] = { uParam0->f_467[iVar0 + 1 /*5*/] };
						uParam0->f_467[iVar0 /*5*/].f_2 = { uParam0->f_467[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_467[iVar0 /*5*/].f_4 = uParam0->f_467[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_483 = (uParam0->f_483 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_467[iVar1 /*5*/] = { uParam0->f_467[iVar1 + 1 /*5*/] };
					uParam0->f_467[iVar1 /*5*/].f_2 = { uParam0->f_467[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_467[iVar1 /*5*/].f_4 = uParam0->f_467[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_483 = (uParam0->f_483 - 1);
				MISC::CLEAR_BIT(&(uParam0->f_449), 13);
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (BitTest(uParam0->f_449, 11))
			{
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
			}
			if (BitTest(uParam0->f_449, 13))
			{
				MISC::CLEAR_BIT(&(uParam0->f_449), 13);
			}
			uParam0->f_455++;
		}
	}
}

bool func_88(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3820
{
	func_108(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_89(sParam2, iParam3, 0);
}

int func_89(char* sParam0, int iParam1, bool bParam2)//Position - 0x386E
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
					func_107();
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
		if (func_106(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_105();
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
				func_98();
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
				if (func_97())
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
			if (func_74())
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
			func_96();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_95();
		func_90();
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
		func_107();
	}
	return 0;
}

void func_90()//Position - 0x3B3C
{
	if (!func_91())
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

int func_91()//Position - 0x3B73
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_94())
	{
		return 0;
	}
	if (func_92(PLAYER::PLAYER_ID()))
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

bool func_92(int iParam0)//Position - 0x3BD6
{
	return func_93(iParam0, 20);
}

var func_93(int iParam0, int iParam1)//Position - 0x3BE6
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_94()//Position - 0x3BFE
{
	return -1;
}

void func_95()//Position - 0x3C07
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

void func_96()//Position - 0x3C38
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

int func_97()//Position - 0x3CCD
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

void func_98()//Position - 0x3D66
{
	if (func_230(14))
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
		Global_20930 = func_99();
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

var func_99()//Position - 0x3E08
{
	func_100();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_100()//Position - 0x3E21
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_103(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_102(PLAYER::PLAYER_PED_ID());
			if (func_101(iVar0) && (!func_230(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_101(Global_113969.f_2366.f_539.f_4321))
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

bool func_101(int iParam0)//Position - 0x3F1E
{
	return iParam0 < 3;
}

int func_102(int iParam0)//Position - 0x3F2A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_103(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_103(int iParam0)//Position - 0x3F67
{
	if (func_101(iParam0))
	{
		return func_104(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_104(int iParam0)//Position - 0x3F8C
{
	return Global_2169[iParam0 /*29*/];
}

void func_105()//Position - 0x3F9B
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

bool func_106(int iParam0, int iParam1)//Position - 0x3FF2
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

void func_107()//Position - 0x4031
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

void func_108(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4088
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = uParam5;
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

void func_109(var uParam0)//Position - 0x40DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	
	uParam0->f_453++;
	if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		func_7(uParam0);
	}
	if (!BitTest(uParam0->f_449, 11))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iLocal_35) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iLocal_37)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iLocal_36) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iLocal_38))))
		{
			func_119();
			if (BitTest(uParam0->f_449, 12))
			{
				MISC::SET_BIT(&(uParam0->f_449), 13);
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
				MISC::CLEAR_BIT(&(uParam0->f_449), 10);
			}
			MISC::CLEAR_BIT(&(uParam0->f_449), 12);
		}
	}
	func_83(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_82((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_82((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > MISC::GET_GAME_TIMER())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			MISC::SET_BIT(&(uParam0->f_449), 4);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
		}
	}
	if (!BitTest(uParam0->f_449, 10))
	{
		if (!BitTest(uParam0->f_449, 11))
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((MISC::GET_GAME_TIMER() - uParam0->f_457) > 25000)
					{
						func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 40 /*INPUT_SNIPER_ZOOM_IN_ONLY*/)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (uParam0->f_416 != 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_416 = 0;
						if (BitTest(uParam0->f_449, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_449), 9);
							func_7(uParam0);
						}
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 41 /*INPUT_SNIPER_ZOOM_OUT_ONLY*/)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (uParam0->f_416 != 1)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_416 = 1;
						if (BitTest(uParam0->f_449, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_449), 9);
							func_7(uParam0);
						}
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_19() || BitTest(uParam0->f_449, 13))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iLocal_35) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iLocal_36)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_19())
								{
									if (!BitTest(uParam0->f_449, 9))
									{
										uParam0->f_456 = MISC::GET_GAME_TIMER();
										iVar0 = func_30(*uParam0);
										if (iVar0 != -1)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
											func_11(uParam0, 1);
											func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_113969.f_1[*uParam0] = 1;
											HUD::CLEAR_HELP(false);
										}
									}
								}
								break;
							
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (uParam0->f_450 < Global_97542[iVar1 /*19*/])
									{
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
										func_11(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_85(4, *uParam0, 1);
									if (!func_118(0))
									{
										func_116(*uParam0);
									}
								}
								else
								{
									func_85(5, *uParam0, 1);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_97542[iVar1 /*19*/])
								{
									if (Global_113969.f_1.f_12[iVar1 /*6*/][iVar2] == 0 || func_40(Global_113969.f_1.f_12[iVar1 /*6*/][iVar2]) != Global_97542[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												bVar3 = iVar5;
												if (bVar3 != 0)
												{
													if (Global_97388[bVar3 /*5*/] != Global_97542[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!BitTest(Global_113969.f_1.f_116, bVar3))
													{
														bVar4 = false;
													}
													if (BitTest(Global_113969.f_1.f_118, bVar3))
													{
														bVar4 = false;
													}
													if (bVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_37(uParam0, bVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_113969.f_1.f_12[iVar1 /*6*/][iVar2] = bVar3;
									}
									iVar2++;
								}
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iLocal_37) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iLocal_38)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								if (uParam0->f_450 > 0)
								{
									func_11(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_97542[iVar1 /*19*/].f_1[uParam0->f_450];
									func_35(uParam0, uParam0->f_450, iVar6);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
									uParam0->f_427 = 0;
									uParam0->f_456 = MISC::GET_GAME_TIMER();
								}
								else if (!func_232(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_96)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											iVar7++;
										}
										AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_30[iVar7] != 13)
											{
												func_115(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										func_11(uParam0, 1);
										uParam0->f_456 = MISC::GET_GAME_TIMER();
										uParam0->f_465 = 0;
										func_114(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_97542[iVar1 /*19*/].f_1[uParam0->f_450];
									func_5(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											func_115(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_113(8, 0);
									func_85(5, 1, 0);
									uParam0->f_427 = 0;
									func_11(uParam0, 1);
									uParam0->f_456 = MISC::GET_GAME_TIMER();
									func_5(uParam0, 3, 0);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (uParam0->f_450 >= Global_97542[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!BitTest(uParam0->f_449, 17))
			{
				iVar10 = Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
				Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_97542[iVar1 /*19*/].f_1[uParam0->f_450];
				func_35(uParam0, uParam0->f_450, iVar10);
			}
			MISC::CLEAR_BIT(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = MISC::GET_GAME_TIMER();
		MISC::CLEAR_BIT(&(uParam0->f_449), 10);
	}
	else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (((!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_680))
		{
			iVar11 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_680);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_113(iVar0, iVar1);
			if (!func_118(0))
			{
				func_112(*uParam0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_62(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_115(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				func_61(uParam0, iVar12);
				if (iVar12 < Global_97542[iVar1 /*19*/])
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_85(5, *uParam0, 1);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			HUD::CLEAR_HELP(false);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_681))
		{
			iVar13 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_681);
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
			Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = uParam0->f_418[iVar13];
			bVar14 = Global_113969.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "UPDATE_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_450);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar14);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
			MISC::CLEAR_BIT(&(uParam0->f_449), 17);
			func_111(uParam0, bVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = MISC::GET_GAME_TIMER();
			uParam0->f_457 = uParam0->f_456;
			MISC::SET_BIT(&(uParam0->f_449), 10);
			if (!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
			{
				HUD::CLEAR_HELP(false);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_682))
		{
			iVar15 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
				}
				uParam0->f_427 = iVar16;
			}
			uParam0->f_682 = 0;
		}
	}
	if (uParam0->f_427 != 0)
	{
		func_110(uParam0, uParam0->f_427);
	}
}

void func_110(var uParam0, int iParam1)//Position - 0x4E86
{
	if (!func_19())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (BitTest(Global_113969.f_1.f_119, 14))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[14 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113969.f_1.f_119), 14);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (BitTest(Global_113969.f_1.f_119, 16))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[16 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113969.f_1.f_119), 16);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (BitTest(Global_113969.f_1.f_119, 15))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[15 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113969.f_1.f_119), 15);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (BitTest(Global_113969.f_1.f_119, 17))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[17 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113969.f_1.f_119), 17);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_111(var uParam0, bool bParam1)//Position - 0x5096
{
	if (!BitTest(uParam0->f_463, bParam1))
	{
		if (!BitTest(Global_113969.f_1.f_119, bParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[bParam1 /*2*/]), ""))
			{
				func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[bParam1 /*2*/], 1);
				MISC::SET_BIT(&(Global_113969.f_1.f_119), bParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (bParam1)
					{
						case 1:
							if (BitTest(Global_113969.f_1.f_117, 0))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (BitTest(Global_113969.f_1.f_117, 1))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (bParam1)
					{
						case 12:
							if (BitTest(Global_113969.f_1.f_117, 3))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (BitTest(Global_113969.f_1.f_117, 6))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (BitTest(Global_113969.f_1.f_117, 0))
							{
								if (BitTest(Global_113969.f_1.f_117, 7))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (BitTest(Global_113969.f_1.f_117, 7))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (BitTest(Global_113969.f_1.f_117, 1))
							{
								if (BitTest(Global_113969.f_1.f_117, 8))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (BitTest(Global_113969.f_1.f_117, 8))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (BitTest(Global_113969.f_1.f_117, 4))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (BitTest(Global_113969.f_1.f_117, 2))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (BitTest(Global_113969.f_1.f_117, 5))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (bParam1)
					{
						case 12:
							if (BitTest(Global_113969.f_1.f_117, 15))
							{
								if (BitTest(Global_113969.f_1.f_117, 3))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (BitTest(Global_113969.f_1.f_117, 2))
							{
								if (BitTest(Global_113969.f_1.f_117, 14))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
								}
							}
							else if (BitTest(Global_113969.f_1.f_117, 14))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (BitTest(Global_113969.f_1.f_117, 18))
							{
								if (BitTest(Global_113969.f_1.f_117, 6))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (BitTest(Global_113969.f_1.f_117, 17))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (BitTest(Global_113969.f_1.f_117, 12))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (BitTest(Global_113969.f_1.f_117, 10))
							{
								if (BitTest(Global_113969.f_1.f_117, 0))
								{
									if (BitTest(Global_113969.f_1.f_117, 7))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (BitTest(Global_113969.f_1.f_117, 11))
							{
								if (BitTest(Global_113969.f_1.f_117, 1))
								{
									if (BitTest(Global_113969.f_1.f_117, 8))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (BitTest(Global_113969.f_1.f_117, 13))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (BitTest(Global_113969.f_1.f_117, 19))
							{
								if (BitTest(Global_113969.f_1.f_117, 4))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (BitTest(Global_113969.f_1.f_117, 16))
							{
								if (BitTest(Global_113969.f_1.f_117, 5))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (BitTest(Global_113969.f_1.f_117, 20))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		MISC::SET_BIT(&(uParam0->f_463), bParam1);
	}
}

void func_112(int iParam0)//Position - 0x57C1
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_113969.f_9088.f_99.f_205[7];
			if (iVar0 == 1)
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_JEWEL_STEALTH"), true, true);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_JEWEL_STEALTH"), false, true);
			}
			break;
		
		case 1:
			iVar0 = Global_113969.f_9088.f_99.f_205[8];
			if (iVar0 == 3)
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_DOCKS_SINK_SHIP"), true, true);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_DOCKS_SINK_SHIP"), false, true);
			}
			break;
		
		case 3:
			iVar0 = Global_113969.f_9088.f_99.f_205[10];
			if (iVar0 == 6)
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_BUREAU_FIRECREW"), true, true);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_BUREAU_FIRECREW"), false, true);
			}
			break;
		
		case 4:
			iVar0 = Global_113969.f_9088.f_99.f_205[11];
			if (iVar0 == 8)
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_BIGS_TRAFFIC"), true, true);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_BIGS_TRAFFIC"), false, true);
			}
			break;
	}
}

void func_113(int iParam0, int iParam1)//Position - 0x58BC
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_113969.f_9088.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_113969.f_9088.f_99.f_205[iParam0] = iParam1;
}

void func_114(int iParam0, int iParam1)//Position - 0x5901
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

void func_115(int iParam0, int iParam1, bool bParam2)//Position - 0x5946
{
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113969.f_1.f_120[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_1.f_120[iParam0]), iParam1);
	}
	MISC::SET_BIT(&Global_97521, iParam0);
}

void func_116(int iParam0)//Position - 0x5984
{
	int iVar0;
	int iVar1;
	
	func_117(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_113969.f_9088.f_99.f_205[7];
			iVar0 = 0;
			while (iVar0 < Global_97542[iVar1 /*19*/])
			{
				switch (Global_113969.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 0);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 1);
						MISC::CLEAR_BIT(&(Global_113969.f_1.f_119), 14);
						break;
					
					case 7:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 2);
						break;
					
					case 12:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 3);
						MISC::CLEAR_BIT(&(Global_113969.f_1.f_119), 15);
						break;
					
					case 6:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 4);
						break;
					
					case 8:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 5);
						break;
					
					case 9:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 6);
						break;
				}
				MISC::SET_BIT(&(Global_113969.f_1.f_119), Global_113969.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_113969.f_9088.f_99.f_205[9];
			iVar0 = 0;
			while (iVar0 < Global_97542[iVar1 /*19*/])
			{
				switch (Global_113969.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 7);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 8);
						MISC::CLEAR_BIT(&(Global_113969.f_1.f_119), 14);
						break;
					
					case 11:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 9);
						MISC::CLEAR_BIT(&(Global_113969.f_1.f_119), 17);
						break;
				}
				MISC::SET_BIT(&(Global_113969.f_1.f_119), Global_113969.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_113969.f_9088.f_99.f_205[10];
			iVar0 = 0;
			while (iVar0 < Global_97542[iVar1 /*19*/])
			{
				switch (Global_113969.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 10);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 11);
						MISC::CLEAR_BIT(&(Global_113969.f_1.f_119), 14);
						break;
					
					case 5:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 12);
						break;
					
					case 3:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 13);
						break;
					
					case 4:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 17);
						break;
					
					case 7:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 14);
						break;
					
					case 12:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 15);
						MISC::CLEAR_BIT(&(Global_113969.f_1.f_119), 15);
						break;
					
					case 6:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 19);
						break;
					
					case 8:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 16);
						break;
					
					case 9:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 18);
						break;
					
					case 13:
						MISC::SET_BIT(&(Global_113969.f_1.f_117), 20);
						MISC::CLEAR_BIT(&(Global_113969.f_1.f_119), 16);
						break;
				}
				MISC::SET_BIT(&(Global_113969.f_1.f_119), Global_113969.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_117(int iParam0)//Position - 0x5D01
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 0);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 1);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 2);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 3);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 4);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 5);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 6);
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 7);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 8);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 9);
			break;
		
		case 3:
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 10);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 11);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 12);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 13);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 14);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 15);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 16);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 17);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 18);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 19);
			MISC::CLEAR_BIT(&(Global_113969.f_1.f_117), 20);
			break;
	}
}

int func_118(bool bParam0)//Position - 0x5E49
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_119()//Position - 0x5E71
{
	Global_21152 = 0;
	func_120();
}

void func_120()//Position - 0x5E81
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}
}

void func_121()//Position - 0x5EA2
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_122();
}

void func_122()//Position - 0x5EB2
{
	Global_23692.f_134 = 1;
}

void func_123(var uParam0)//Position - 0x5EC0
{
	struct<3> Var0;
	int iVar3;
	
	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	MISC::SET_BIT(&(uParam0->f_449), 9);
	func_11(uParam0, 0);
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_45250 == 1)
			{
				func_128(PLAYER::PLAYER_PED_ID());
			}
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_404))), (2.9f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 134);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		}
		MISC::SET_BIT(&(uParam0->f_449), 7);
	}
	HUD::DISPLAY_RADAR(false);
	func_72(1);
	func_127();
	HUD::THEFEED_PAUSE();
	MISC::CLEAR_AREA(uParam0->f_401, 5f, true, true, false, false);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam0->f_401, 5f);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(true);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_126(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar3 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_401);
	if (iVar3 != 0)
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar3);
	}
	INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME(&(Global_97459[uParam0->f_1.f_1 /*15*/].f_7));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_KEY(INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(PLAYER::PLAYER_PED_ID()));
	}
	func_125(0);
	func_124();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	uParam0->f_466 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 10, true);
	MISC::SET_BIT(&(uParam0->f_449), 2);
	Global_97520 = 1;
	func_6(uParam0, uParam0->f_464, 0);
}

void func_124()//Position - 0x60B2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		func_15(iVar0);
		iVar0++;
	}
	Global_113969.f_20413.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_125(bool bParam0)//Position - 0x6110
{
	if (!bParam0)
	{
		Global_112608 = MISC::GET_GAME_TIMER() + 250;
	}
	Global_112605 = bParam0;
}

void func_126(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12, int iParam13, float fParam14, bool bParam15)//Position - 0x612E
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = uParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_127()//Position - 0x6226
{
	Global_23692.f_5 = 1;
}

void func_128(int iParam0)//Position - 0x6234
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_136(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_45036[iVar0 /*5*/];
		func_131(1, iVar1, 1);
		return;
	}
	iVar2 = func_130(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_129(iVar2);
}

void func_129(int iParam0)//Position - 0x628D
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_45005[iParam0 /*6*/].f_1 == 0)
	{
		if (Global_45005[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_45248 = 0;
		}
	}
	Global_45005[iParam0 /*6*/] = 13;
	Global_45005[iParam0 /*6*/].f_1 = 0;
	Global_45005[iParam0 /*6*/].f_2 = 0;
	Global_45005[iParam0 /*6*/].f_3 = 0;
	Global_45005[iParam0 /*6*/].f_4 = 0;
	Global_45003 = (Global_45003 - 1);
	if (Global_45003 < 0)
	{
		Global_45003 = 0;
	}
}

int func_130(int iParam0)//Position - 0x6310
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_45005[iVar0 /*6*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_131(int iParam0, int iParam1, int iParam2)//Position - 0x6341
{
	func_132(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6356
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_134(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_133();
	if (iVar0 == -1)
	{
		return;
	}
	Global_45117[iVar0 /*6*/] = iParam0;
	Global_45117[iVar0 /*6*/].f_1 = iParam1;
	Global_45117[iVar0 /*6*/].f_2 = iParam2;
	Global_45117[iVar0 /*6*/].f_3 = iParam3;
	Global_45117[iVar0 /*6*/].f_4 = iParam4;
	Global_45117[iVar0 /*6*/].f_5 = iParam5;
}

int func_133()//Position - 0x63D8
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_45117[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_134(int iParam0, int iParam1, int iParam2)//Position - 0x6409
{
	if (func_135(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0, int iParam1, int iParam2)//Position - 0x6424
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_45117[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_45117[iVar0 /*6*/])
			{
				if (iParam1 == Global_45117[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_136(int iParam0)//Position - 0x6470
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_45036[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_137(var uParam0)//Position - 0x64B9
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_138(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_138(int iParam0)//Position - 0x6510
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_139(int iParam0, bool bParam1)//Position - 0x654B
{
	int iVar0;
	
	iVar0 = func_138(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_150(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/] == 1 && Global_44799[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44799[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44799[iVar0 /*32*/].f_5 = 1;
			Global_44799[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44799[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44799[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_140(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x6603
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_137(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/] = 1;
			Global_44799[iVar0 /*32*/].f_1 = Global_45000;
			Global_45000++;
			Global_44799[iVar0 /*32*/].f_4 = 0;
			Global_44799[iVar0 /*32*/].f_29 = 0;
			Global_44799[iVar0 /*32*/].f_5 = 0;
			Global_44799[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44799[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44799[iVar0 /*32*/].f_6 = iParam3;
			Global_44799[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44799[iVar0 /*32*/].f_7 = 0;
			Global_44799[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44799[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44799[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44799[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[iVar0 /*32*/].f_12 = 0;
				Global_44799[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_44799[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_141(int iParam0)//Position - 0x672E
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_99();
				if (!func_101(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_149()) || Global_113016) || Global_32951) || func_148()) || func_106(8, -1)) || func_147()) || func_146()) || func_145()) || func_144()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_149()) || Global_32951) || func_148()) || func_106(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_149()) || Global_113016) || Global_32951) || func_148()) || func_106(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_149()) || Global_113016) || Global_32951) || func_148()) || func_106(8, -1)) || func_147()) || func_146()) || func_144()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_149() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_106(8, -1)) || func_144()) || func_143()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_106(8, -1) || func_147()) || func_146()) || func_143()) || func_142())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_149()) || Global_32951) || func_148()) || func_106(8, -1)) || func_146()) || func_145()) || func_144()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_149()) || func_146()) || Global_113016) || Global_32951) || func_148()) || Global_45250) || func_106(8, -1)) || func_145()) || func_143()) || func_144()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_149()) || Global_113016) || Global_32951) || func_148()) || func_106(8, -1)) || func_145()) || func_143()) || func_147()) || func_146()) || func_144())
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

var func_142()//Position - 0x6E4B
{
	return Global_101572.f_1;
}

int func_143()//Position - 0x6E59
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_144()//Position - 0x6E7C
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_145()//Position - 0x6E96
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

bool func_146()//Position - 0x6EC0
{
	return Global_101585.f_394 > 0;
}

bool func_147()//Position - 0x6ED1
{
	return Global_101585.f_393 > 0;
}

var func_148()//Position - 0x6EE2
{
	return Global_1575083;
}

int func_149()//Position - 0x6EEE
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_150(int iParam0)//Position - 0x6F0A
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

bool func_151(int iParam0)//Position - 0x6F61
{
	return func_152(iParam0, Global_44042);
}

int func_152(int iParam0, int iParam1)//Position - 0x6F72
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

void func_153()//Position - 0x7153
{
	int iVar0;
	struct<3> Var1;
	
	if (func_232(17))
	{
		if (!BitTest(uLocal_39, 11))
		{
			CUTSCENE::REQUEST_CUTSCENE("JH_1_MCS_4P2", 8);
			SCRIPT::REQUEST_SCRIPT("lesterHandler");
			HUD::REQUEST_ADDITIONAL_TEXT("JHS1AUD", 6);
			MISC::SET_BIT(&uLocal_39, 11);
		}
		else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_232(18))
	{
		if (func_232(17))
		{
			if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4P2") && SCRIPT::HAS_SCRIPT_LOADED("lesterHandler")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_727, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_727, "Lester", 0, joaat("CS_LesterCrest"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_727, "Lester", 2, joaat("CS_LesterCrest"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_730))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_730))
					{
						ENTITY::DETACH_ENTITY(iLocal_730, true, true);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, joaat("Player_Zero"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_730))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_730, "WalkingStick_Lester", 1, joaat("prop_cs_walking_stick"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_730, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
				}
				STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
				STREAMING::REQUEST_MODEL(joaat("prop_laptop_lester2"));
				func_72(1);
				func_125(1);
				func_195(1, 1, 1, 0, 0, 0, 0);
				iLocal_41 = -1;
				CUTSCENE::START_CUTSCENE(0);
				if (func_118(0))
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				}
				func_114(17, 0);
			}
		}
		else if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			func_121();
			if (BitTest(uLocal_39, 7))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_730))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_730, true, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_728))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_728, true, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_727))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_727, true, false);
				}
				MISC::CLEAR_BIT(&uLocal_39, 7);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_727))
				{
					iVar0 = iLocal_727;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &iVar0, 1, 1424);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("lesterHandler");
					iLocal_737 = MISC::GET_GAME_TIMER();
					MISC::SET_BIT(&uLocal_39, 18);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					Var1 = { 709.3766f, -964.2602f, 29.3954f };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &(Var1.f_2), false, false);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var1, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 261.7831f);
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false, 0);
						}
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
		}
		else if (iLocal_41 == -1 && !func_118(0))
		{
			iLocal_41 = MISC::GET_GAME_TIMER() + 1500;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_41 || func_118(0))
		{
			if (func_118(0))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			else
			{
				Global_64166 = 0;
				Global_101572 = 0;
				func_194();
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_laptop_lester2"));
			func_72(0);
			func_195(0, 1, 1, 0, 0, 0, 0);
			func_192(&(Global_113969.f_2366.f_539), 86);
			func_162(&(Global_113969.f_2366.f_539), 86);
			func_161(&iLocal_43);
			MISC::CLEAR_BIT(&uLocal_39, 1);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_731, false);
			if (iLocal_736 != -1)
			{
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_736))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_736);
				}
			}
			PED::CLEAR_PED_NON_CREATION_AREA();
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_44.f_1.f_394 - Local_44.f_1.f_397, Local_44.f_1.f_394 + Local_44.f_1.f_397, true, 0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_114(18, 0);
			func_154(0, 0);
		}
	}
	else if (!func_232(17))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4P2"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	if (BitTest(uLocal_39, 18))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		if (MISC::GET_GAME_TIMER() > iLocal_737 + 1000)
		{
			MISC::CLEAR_BIT(&uLocal_39, 18);
		}
	}
}

void func_154(int iParam0, bool bParam1)//Position - 0x754E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_39(iVar1) || func_38(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_158(4, 1);
						break;
					
					case 4:
						func_158(8, 1);
						break;
					
					case 6:
						func_158(10, 1);
						break;
					
					case 7:
						func_158(1, 1);
						break;
					
					case 8:
						func_158(3, 1);
						break;
					
					case 9:
						func_158(6, 1);
						break;
					
					case 10:
						func_158(9, 1);
						break;
					
					case 12:
						func_158(11, 1);
						break;
					
					case 13:
						func_158(12, 1);
						break;
					
					case 11:
						if (func_157(91))
						{
							func_158(0, 1);
						}
						break;
					
					case 5:
						if (func_157(91))
						{
							func_158(2, 1);
						}
						break;
					
					case 3:
						if (func_157(67))
						{
							func_158(5, 1);
						}
						break;
					
					case 2:
						if (func_157(77))
						{
							func_158(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_39(10) && BitTest(Global_113969.f_24998.f_8[4], 0))
	{
		func_158(9, 1);
	}
	if (!func_39(13) && BitTest(Global_113969.f_24998.f_8[16], 0))
	{
		func_158(12, 1);
	}
	if (!func_39(12))
	{
		if (iParam0 == 4)
		{
			func_158(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_156(69))
		{
			func_21("DI_HLP_HST" /* GXT: Heist characters become available in Rockstar Editor's Director Mode after being up for selection on a GTAV heist. */, 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_155("DI_FEED_HST" /* GXT: Heist crew members */);
	}
}

void func_155(char* sParam0)//Position - 0x7714
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
	HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", false, 0, "DI_FEED_CHAR" /* GXT: Director Mode Actor Unlock */, sParam0);
}

int func_156(int iParam0)//Position - 0x7738
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
		return BitTest(Global_113969.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

int func_157(int iParam0)//Position - 0x7778
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_158(int iParam0, bool bParam1)//Position - 0x77A4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_160(iParam0))
		{
			MISC::SET_BIT(&(Global_113969.f_26437.f_1), iVar0);
			if (!bParam1)
			{
				func_155(func_159(iParam0));
			}
		}
	}
}

char* func_159(int iParam0)//Position - 0x77ED
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE" /* GXT: Chef */;
			break;
		
		case 1:
			return "CM_HSTCHR" /* GXT: Christian Feltz */;
			break;
		
		case 2:
			return "CM_HSTDAR" /* GXT: Daryl Johns */;
			break;
		
		case 3:
			return "CM_HSTEDD" /* GXT: Eddie Toh */;
			break;
		
		case 4:
			return "CM_HSTGUS" /* GXT: Gustavo Mota */;
			break;
		
		case 5:
			return "CM_HSTHUG" /* GXT: Hugh Welsh */;
			break;
		
		case 6:
			return "CM_HSTKRM" /* GXT: Karim Denz */;
			break;
		
		case 7:
			return "CM_HSTKAR" /* GXT: Karl Abolaji */;
			break;
		
		case 8:
			return "CM_HSTNOR" /* GXT: Norm Richards */;
			break;
		
		case 9:
			return "CM_HSTPAC" /* GXT: Packie McReary */;
			break;
		
		case 10:
			return "CM_HSTPAI" /* GXT: Paige Harris */;
			break;
		
		case 11:
			return "CM_HSTRIC" /* GXT: Rickie Lukens */;
			break;
		
		case 12:
			return "CM_HSTTAL" /* GXT: Taliana Martinez */;
			break;
	}
	return "ERROR!";
}

int func_160(int iParam0)//Position - 0x78D0
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return BitTest(Global_113969.f_26437.f_1, iParam0);
	}
	return 0;
}

void func_161(int iParam0)//Position - 0x78FC
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_44004)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
}

void func_162(var uParam0, int iParam1)//Position - 0x7939
{
	switch (iParam1)
	{
		case 17:
			func_163(uParam0, 0, 12);
			break;
		
		case 19:
			func_163(uParam0, 1, 13);
			break;
		
		case 29:
			func_163(uParam0, 1, 14);
			break;
		
		case 30:
			func_163(uParam0, 2, 15);
			func_163(uParam0, 1, 29);
			break;
		
		case 32:
			func_163(uParam0, 1, 16);
			func_163(uParam0, 0, 17);
			break;
		
		case 39:
			func_163(uParam0, 0, 21);
			func_163(uParam0, 1, 20);
			break;
		
		case 31:
			func_163(uParam0, 0, 18);
			break;
		
		case 20:
			func_163(uParam0, 2, 22);
			break;
		
		case 66:
			func_163(uParam0, 1, 23);
			break;
		
		case 68:
			func_163(uParam0, 1, 24);
			break;
		
		case 70:
			func_163(uParam0, 1, 67);
			break;
		
		case 8:
			func_163(uParam0, 1, 25);
			func_163(uParam0, 2, 26);
			break;
		
		case 67:
			func_163(uParam0, 1, 27);
			break;
		
		case 9:
			func_163(uParam0, 2, 28);
			break;
		
		case 38:
			func_163(uParam0, 2, 30);
			func_163(uParam0, 1, 19);
			break;
		
		case 83:
			func_163(uParam0, 2, 33);
			break;
		
		case 45:
			func_163(uParam0, 1, 35);
			break;
		
		case 64:
			func_163(uParam0, 0, 36);
			func_163(uParam0, 1, 37);
			break;
		
		case 91:
			func_163(uParam0, 0, 41);
			break;
		
		case 42:
			func_163(uParam0, 0, 58);
			Global_100937[0 /*98*/] = 0;
			func_163(uParam0, 2, 59);
			Global_100937[2 /*98*/] = 0;
			break;
		
		case 41:
			func_163(uParam0, 1, 42);
			func_163(uParam0, 2, 42);
			break;
		
		case 15:
			func_163(uParam0, 0, 46);
			func_163(uParam0, 1, 47);
			break;
		
		case 16:
			func_163(uParam0, 0, 48);
			break;
		
		case 48:
			func_163(uParam0, 1, 50);
			func_163(uParam0, 2, 51);
			break;
		
		case 74:
			func_163(uParam0, 0, 52);
			func_163(uParam0, 1, 66);
			break;
		
		case 76:
			func_163(uParam0, 1, 53);
			func_163(uParam0, 2, 54);
			func_163(uParam0, 0, 62);
			break;
		
		case 75:
			func_163(uParam0, 0, 61);
			func_163(uParam0, 1, 31);
			break;
		
		case 69:
			func_163(uParam0, 1, 63);
			break;
		
		case 84:
			func_163(uParam0, 0, 68);
			func_163(uParam0, 2, 69);
			break;
		
		case 85:
			func_163(uParam0, 0, 64);
			func_163(uParam0, 2, 65);
			break;
		
		case 93:
			func_163(uParam0, 1, 38);
			func_163(uParam0, 2, 39);
			break;
		
		case 11:
			func_163(uParam0, 2, 55);
			break;
		
		case 77:
			func_163(uParam0, 1, 56);
			func_163(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_163(var uParam0, int iParam1, int iParam2)//Position - 0x7C82
{
	int iVar0;
	struct<98> Var1;
	var uVar99;
	var uVar102;
	var uVar103;
	var uVar106;
	
	if (!BitTest(Global_113969.f_9088.f_99.f_219[0], 9))
	{
		iVar0 = Global_113969.f_18536[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_113969.f_18536[iParam1] = iParam2;
	uParam0->f_2296[iParam1] = func_181();
	if (!func_180(iParam2, &(uParam0->f_2300[iParam1 /*3*/]), &(uParam0->f_2310[iParam1])))
	{
		return 0;
	}
	if (!func_179(uParam0->f_2300[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_179(Global_99972[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_164(iParam1, iParam2, &Var1, &uVar99, &uVar102, &uVar103, &uVar106))
			{
				Global_100937[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_2314[iParam1] = 0;
	uParam0->f_2318[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_2328[iParam1] = 0;
	return 1;
}

int func_164(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7D9F
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_100937[iParam0 /*98*/] };
			if (Global_101232[iParam0] != 2)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_101240[iParam0 /*3*/], -829.7478f, 192.11703f, 76.73248f, -827.13837f, 153.85951f, 59.961723f, 33.25f, false, true))
				{
					if (Global_101232[iParam0] == 1)
					{
						*uParam3 = { Global_101240[iParam0 /*3*/] - Global_113969.f_2366.f_539.f_2300[iParam0 /*3*/] };
						*uParam4 = (Global_101250[iParam0] - Global_113969.f_2366.f_539.f_2310[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_101240[iParam0 /*3*/] - Global_113969.f_2366.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_101250[iParam0] - Global_113969.f_2366.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_100937[iParam0 /*98*/] };
			if (Global_101232[iParam0] != 2)
			{
				*uParam3 = { Global_101240[iParam0 /*3*/] - Global_113969.f_2366.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_101250[iParam0] - Global_113969.f_2366.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_100937[iParam0 /*98*/] };
			if (Global_101232[iParam0] != 2)
			{
				*uParam3 = { Global_101240[iParam0 /*3*/] - Global_113969.f_2366.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_101250[iParam0] - Global_113969.f_2366.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.1947f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		
		case 9:
			return func_164(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_164(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_166(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.4985f, 782.1644f) - Vector(4.0205f, -2975.3408f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.5203f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_164(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_166(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.6798f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.7855f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		
		case 40:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.4985f, 782.1644f) - Vector(4.0205f, -2975.3408f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.4788f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.8425f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.0852f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.7203f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		
		case 52:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_164(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_164(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_164(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_166(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_164(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_164(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_164(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_164(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_164(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_164(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_164(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_164(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_164(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_164(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_164(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_166(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_164(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_164(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_165(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_164(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.9152f, -17.4132f) - Vector(31.1932f, -1441.1821f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.4609f, -147.0307f) - Vector(31.1932f, -1441.1821f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_164(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_164(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28.225f, -1015.1096f, -70.4456f) - Vector(27.5447f, -1019.2347f, -78.4023f) };
			*uParam4 = (162.09804f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.0171f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.0171f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_164(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_164(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.5681f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.2864f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.7875f, 3.6009f) - Vector(29.2903f, -1607.2864f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_164(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_164(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_164(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_164(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_164(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_164(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_164(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_164(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_164(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_164(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_4)
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.4209f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.0466f, 1399.6621f) - Vector(37.9419f, 3602.284f, 1394.2081f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.2047f, -1243.6498f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.5349f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.1196f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.7816f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.8779f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.1743f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.7998f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.7335f, 185.4888f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.1594f, -17.556f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.1511f, -219.3172f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.6935f, -22.6138f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.4458f, -1883.836f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.5566f, -200.684f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.7513f, -1278.0234f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.2205f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.7039f, -1264.2178f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.2819f, 434.9171f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.2819f, 434.9171f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.5045f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.4424f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.1559f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.9182f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.8212f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.7256f, -569.3535f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.5929f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.7451f, 631.8275f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.3232f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.6665f, -179.4242f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.5446f, 486.7419f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.8945f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.3752f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.5072f, -1195.2559f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.2125f, -573.3765f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.5391f, -724.429f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.1135f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_99972[iParam1 /*3*/] };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_165(int iParam0, var uParam1, int iParam2)//Position - 0xB44D
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

int func_166(int iParam0, var uParam1, int iParam2)//Position - 0xB6A9
{
	if (Global_100937[iParam0 /*98*/] == 0)
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("blimp"))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_178(iParam0))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(Global_100937[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_100937[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_100937[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_100937[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_CAR(Global_100937[iParam0 /*98*/]))
		{
			func_165(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Global_100937[iParam0 /*98*/]))
		{
			func_165(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_167(Global_100937[iParam0 /*98*/], 0, -1))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_100937[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_100937[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_165(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_100937[iParam0 /*98*/] == *uParam1)
		{
			func_165(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_165(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_100937[iParam0 /*98*/] == *uParam1)
		{
			func_165(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_100937[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_165(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_167(int iParam0, bool bParam1, int iParam2)//Position - 0xB8E1
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
		if (!func_177())
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
					if ((((!func_176() && !func_175()) && !func_174()) && !func_173()) && !func_177())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_172() || MISC::IS_PC_VERSION()) || func_171())
					{
					}
					else if (!func_174())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_170(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_168(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_168(int iParam0)//Position - 0xBA66
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_169())
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

int func_169()//Position - 0xBB32
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_170(int iParam0, int iParam1)//Position - 0xBB49
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

bool func_171()//Position - 0xBD9A
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_172()//Position - 0xBDB0
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_173()//Position - 0xBDC6
{
	return 0;
}

int func_174()//Position - 0xBDCF
{
	return 1;
}

int func_175()//Position - 0xBDD8
{
	return 1;
}

int func_176()//Position - 0xBDE1
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_177()//Position - 0xBDFA
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

int func_178(int iParam0)//Position - 0xBEB2
{
	if (Global_100937[iParam0 /*98*/] == joaat("blimp") || Global_100937[iParam0 /*98*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("submersible") || Global_100937[iParam0 /*98*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("burrito2") || Global_100937[iParam0 /*98*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("entityxf") && !Global_113969.f_9088.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("cheetah") && !Global_113969.f_9088.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("policeb") && !Global_113969.f_9088.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("ztype") && !Global_113969.f_9088.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("polmav") && !Global_113969.f_9088.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("jb700") && !Global_113969.f_9088.f_330[10 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("monroe") && !Global_113969.f_9088.f_330[11 /*6*/])
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("firetruk"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_100937[iParam0 /*98*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_100937[iParam0 /*98*/] == joaat("gauntlet") && !Global_113969.f_9088.f_330[80 /*6*/]) && !Global_113969.f_9088.f_330[81 /*6*/]) && !Global_113969.f_9088.f_330[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_179(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xC135
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_180(int iParam0, var uParam1, float fParam2)//Position - 0xC17C
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
			return func_180(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_180(8, uParam1, fParam2);
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

var func_181()//Position - 0xCAEB
{
	var uVar0;
	
	func_191(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_190(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_189(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_184(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_183(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_182(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_182(var uParam0, int iParam1)//Position - 0xCB31
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

void func_183(var uParam0, int iParam1)//Position - 0xCBB7
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0, int iParam1)//Position - 0xCBEA
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_188(*uParam0);
	iVar1 = func_186(*uParam0);
	if (iParam1 < 1 || iParam1 > func_185(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_185(int iParam0, int iParam1)//Position - 0xCC3B
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

var func_186(int iParam0)//Position - 0xCCDD
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_187(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_187(bool bParam0, int iParam1, int iParam2)//Position - 0xCCFF
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_188(var uParam0)//Position - 0xCD16
{
	return uParam0 & 15;
}

void func_189(var uParam0, int iParam1)//Position - 0xCD23
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_190(var uParam0, int iParam1)//Position - 0xCD5D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_191(var uParam0, int iParam1)//Position - 0xCD98
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_192(var uParam0, int iParam1)//Position - 0xCDD4
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
			if (!func_180(Global_113969.f_18536[iVar0], &Var2, &fVar5))
			{
				Global_113969.f_18536[iVar0] = 318;
				func_193(&(uParam0->f_2296[iVar0]));
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

void func_193(var uParam0)//Position - 0xCF9A
{
	*uParam0 = -15;
}

int func_194()//Position - 0xCFA8
{
	if (func_118(0))
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

void func_195(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xCFF3
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_204(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_74())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_203(1, bParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_204(0);
		HUD::THEFEED_RESUME();
		Global_64172 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_203(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_201(PLAYER::PLAYER_ID())) && !func_197(PLAYER::PLAYER_ID(), 0)) && !func_196()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_201(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79387 = 0;
	}
}

bool func_196()//Position - 0xD140
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_197(int iParam0, int iParam1)//Position - 0xD15A
{
	bool bVar0;
	
	if (!func_200(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_198(-1, 0) == 8;
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

int func_198(int iParam0, bool bParam1)//Position - 0xD1B3
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_199();
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

int func_199()//Position - 0xD1F4
{
	return Global_1574926;
}

int func_200(var uParam0)//Position - 0xD200
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

int func_201(int iParam0)//Position - 0xD222
{
	if (func_197(iParam0, 0))
	{
		return 1;
	}
	if (func_202())
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

bool func_202()//Position - 0xD261
{
	return BitTest(Global_2621446, 3);
}

int func_203(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xD26F
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && iParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_204(int iParam0)//Position - 0xD2A2
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

void func_205()//Position - 0xD2C5
{
	INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(-1747852954);
	if (func_232(16))
	{
		if (!func_118(0))
		{
			if (!BitTest(uLocal_39, 10))
			{
				CUTSCENE::REQUEST_CUTSCENE("JH_1_MCS_4_P1_ALT1", 8);
				func_213();
				func_115(0, 0, 1);
				iLocal_731 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_44.f_1.f_394 - Local_44.f_1.f_397, Local_44.f_1.f_394 + Local_44.f_1.f_397, false, true, true, true, 1);
				iLocal_736 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_44.f_1.f_394, Local_44.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, false, 7);
				PED::SET_PED_NON_CREATION_AREA(Local_44.f_1.f_394 - Local_44.f_1.f_397, Local_44.f_1.f_394 + Local_44.f_1.f_397);
				PATHFIND::SET_PED_PATHS_IN_AREA(Local_44.f_1.f_394 - Local_44.f_1.f_397, Local_44.f_1.f_394 + Local_44.f_1.f_397, false, 0);
				MISC::SET_BIT(&uLocal_39, 10);
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
			}
			if (func_157(86))
			{
				if (!BitTest(uLocal_39, 1))
				{
					if (func_151(0))
					{
						if (func_210(&iLocal_43, 0, 0, 0, 0) == 1)
						{
							func_203(1, 0, 1, 0);
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
								PLAYER::SET_MAX_WANTED_LEVEL(0);
							}
							MISC::SET_BIT(&uLocal_39, 1);
							MISC::SET_BIT(&uLocal_39, 2);
						}
					}
				}
			}
			if (BitTest(uLocal_39, 2))
			{
				switch (iLocal_40)
				{
					case 0:
						if (CAM::DOES_CAM_EXIST(iLocal_732))
						{
							CAM::DESTROY_CAM(iLocal_732, false);
						}
						if (CAM::DOES_CAM_EXIST(iLocal_733))
						{
							CAM::DESTROY_CAM(iLocal_733, false);
						}
						iLocal_732 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 724.4682f, -992.0684f, 24.251366f, 5.259225f, 0.000715f, 25.889177f, 44.13121f, false, 2);
						iLocal_733 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 724.37274f, -991.3205f, 24.433039f, 31.499252f, 0.000715f, -4.206256f, 44.13121f, false, 2);
						if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_9[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_98010.f_9[0], false))
							{
								iLocal_727 = Global_98010.f_9[0];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_727, false, true);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_98010[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_98010[0], false))
							{
								iLocal_729 = Global_98010[0];
							}
						}
						iLocal_40++;
						break;
					
					case 1:
						func_195(1, 1, 0, 0, 0, 0, 0);
						HUD::DISPLAY_RADAR(false);
						HUD::DISPLAY_HUD(false);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_729))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_729, false))
							{
								CAM::POINT_CAM_AT_ENTITY(iLocal_732, iLocal_729, 0f, 0f, 0f, true);
							}
						}
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_733, iLocal_732, 5000, 1, 1);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						iLocal_41 = MISC::GET_GAME_TIMER();
						iLocal_40++;
						break;
					
					case 2:
						if ((MISC::GET_GAME_TIMER() - iLocal_41) > 1200)
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_729, false))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_729, false))
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_734);
											TASK::TASK_LEAVE_VEHICLE(0, iLocal_729, 0);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 0.25f, 0, 40000f);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_734);
											TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
											TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_734);
										}
									}
								}
							}
							iLocal_40++;
						}
						break;
					
					case 3:
						if ((MISC::GET_GAME_TIMER() - iLocal_41) > 2400)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_727, false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_729))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_729, false))
									{
										if (PED::IS_PED_IN_VEHICLE(iLocal_727, iLocal_729, false))
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
											TASK::TASK_LEAVE_VEHICLE(0, iLocal_729, 0);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 0.25f, 0, 40000f);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
											TASK::CLEAR_PED_TASKS(iLocal_727);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_727, iLocal_735);
										}
									}
								}
							}
							iLocal_40++;
						}
						break;
					
					case 4:
						if ((MISC::GET_GAME_TIMER() - iLocal_41) > 5000)
						{
							MISC::CLEAR_BIT(&uLocal_39, 2);
						}
						break;
					}
			}
			if (BitTest(uLocal_39, 1) && !BitTest(uLocal_39, 2))
			{
				if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4_P1_ALT1"))
				{
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iLocal_728 = PLAYER::PLAYER_PED_ID();
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_728, false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_728, "Michael", 0, joaat("Player_Zero"), 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_727, false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_727, "Lester", 2, joaat("IG_LesterCrest"), 0);
						}
						MISC::SET_BIT(&uLocal_39, 9);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_730, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
						MISC::SET_BIT(&uLocal_39, 8);
						func_209(&(Local_44.f_484), 0, 0, "MICHAEL", 1, 1);
						func_209(&(Local_44.f_484), 3, 0, "LESTER", 1, 1);
						func_72(1);
						iLocal_41 = MISC::GET_GAME_TIMER();
						CUTSCENE::START_CUTSCENE(2048);
					}
					else
					{
						func_121();
						if (!BitTest(uLocal_39, 17))
						{
							if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							MISC::SET_BIT(&uLocal_39, 17);
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							MISC::SET_BIT(&uLocal_39, 16);
						}
						if (BitTest(uLocal_39, 16))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (!BitTest(uLocal_39, 12))
								{
									func_115(0, 1, 1);
									MISC::SET_BIT(&uLocal_39, 12);
								}
								if (!BitTest(uLocal_39, 13))
								{
									func_115(0, 2, 1);
									MISC::SET_BIT(&uLocal_39, 13);
								}
								if (!BitTest(uLocal_39, 14))
								{
									func_115(0, 3, 1);
									MISC::SET_BIT(&uLocal_39, 14);
								}
								if (!BitTest(uLocal_39, 15))
								{
									func_115(0, 4, 1);
									MISC::SET_BIT(&uLocal_39, 15);
								}
								func_207(&Local_44);
								if (!BitTest(uLocal_39, 0))
								{
									func_206();
									MISC::SET_BIT(&uLocal_39, 0);
								}
							}
						}
						if (!BitTest(uLocal_39, 5))
						{
							if (CAM::DOES_CAM_EXIST(iLocal_732))
							{
								CAM::SET_CAM_ACTIVE(iLocal_732, false);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_733))
							{
								CAM::SET_CAM_ACTIVE(iLocal_733, false);
							}
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							if (CAM::DOES_CAM_EXIST(iLocal_733))
							{
								CAM::DESTROY_CAM(iLocal_733, false);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_733))
							{
								CAM::DESTROY_CAM(iLocal_733, false);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_727))
							{
								PED::DELETE_PED(&iLocal_727);
							}
							MISC::SET_BIT(&uLocal_39, 5);
						}
						if (!BitTest(uLocal_39, 6))
						{
							if (iLocal_42 > 0)
							{
								MISC::SET_BIT(&uLocal_39, 6);
							}
						}
						if (!BitTest(uLocal_39, 12))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_41) > 14058)
							{
								func_115(0, 1, 1);
								MISC::SET_BIT(&uLocal_39, 12);
							}
						}
						else if (!BitTest(uLocal_39, 13))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_41) > 22887)
							{
								func_115(0, 2, 1);
								MISC::SET_BIT(&uLocal_39, 13);
							}
						}
						else if (!BitTest(uLocal_39, 14))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_41) > 27988)
							{
								func_115(0, 3, 1);
								func_207(&Local_44);
								MISC::SET_BIT(&uLocal_39, 14);
							}
						}
						else if (!BitTest(uLocal_39, 15))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_41) > 42084)
							{
								func_115(0, 4, 1);
								MISC::SET_BIT(&uLocal_39, 15);
							}
						}
						if (BitTest(uLocal_39, 8))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", joaat("prop_cs_walking_stick"))))
							{
								iLocal_730 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", joaat("prop_cs_walking_stick")));
								MISC::CLEAR_BIT(&uLocal_39, 8);
							}
						}
						if (BitTest(uLocal_39, 9))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", joaat("IG_LesterCrest"))))
							{
								iLocal_727 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", joaat("IG_LesterCrest")));
								MISC::CLEAR_BIT(&uLocal_39, 9);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_728, false))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_728, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_728, 208, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_728, 118, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_728, 213, false);
								TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_728, 708.8129f, -966.3621f, 29.3956f, 1f, 20000, 40000f, 0.5f);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_727, false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_730))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_730, iLocal_727, PED::GET_PED_BONE_INDEX(iLocal_727, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								}
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_727, false))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_727, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_727, 208, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_727, 118, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_727, 213, false);
								TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_727, 708.3643f, -963.9194f, 29.4181f, 1f, 20000, 40000f, 0.5f);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
						{
							if (!BitTest(uLocal_39, 0))
							{
								func_206();
								MISC::SET_BIT(&uLocal_39, 0);
							}
							if (!BitTest(uLocal_39, 7))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_728, false))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_728, false, false);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_727, false))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_727, false, false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_730))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_730, false, false);
								}
								MISC::SET_BIT(&uLocal_39, 7);
							}
							func_114(16, 0);
						}
						iLocal_42++;
					}
				}
			}
		}
		else
		{
			func_209(&(Local_44.f_484), 0, 0, "MICHAEL", 1, 1);
			func_209(&(Local_44.f_484), 3, 0, "LESTER", 1, 1);
			if (func_151(0))
			{
				if (func_210(&iLocal_43, 0, 0, 0, 0) == 1)
				{
					MISC::SET_BIT(&uLocal_39, 1);
				}
			}
			if (BitTest(uLocal_39, 1))
			{
				func_206();
				func_114(16, 0);
			}
		}
	}
	else
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4_P1_ALT1"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (BitTest(uLocal_39, 10))
		{
			MISC::CLEAR_BIT(&uLocal_39, 10);
		}
	}
}

void func_206()//Position - 0xDBE4
{
	func_85(1, 0, 1);
	func_85(2, 0, 1);
	func_214(&Local_44);
	func_67(&Local_44);
}

void func_207(var uParam0)//Position - 0xDC06
{
	if (BitTest(uParam0->f_449, 1))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (BitTest(uParam0->f_449, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_208(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_449), 1);
		MISC::CLEAR_BIT(&Global_97522, *uParam0);
	}
}

void func_208(var uParam0)//Position - 0xDC4C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_428[iVar0]));
		}
		iVar0++;
	}
}

void func_209(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xDC88
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

int func_210(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xDD23
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98991.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_212(0))
		{
			return 0;
		}
		Global_44006++;
		*iParam0 = Global_44006;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23692.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_44042 = iParam2;
		Global_44004 = *iParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44003)
			{
				if (Global_44009[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44004 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_151(iParam2))
		{
			return 0;
		}
		if (Global_44003 == 8)
		{
			return 0;
		}
		Global_44006++;
		*iParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003++;
		if (iParam4 != 0)
		{
			func_211(iParam0, iParam4);
		}
	}
	return 2;
}

void func_211(var uParam0, int iParam1)//Position - 0xDE5A
{
	int iVar0;
	
	if (Global_44003 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44003)
	{
		if (Global_44009[iVar0 /*4*/] == *uParam0)
		{
			Global_44009[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_212(int iParam0)//Position - 0xDEA9
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_151(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_213()//Position - 0xDECB
{
	Global_101572 = 1;
}

void func_214(var uParam0)//Position - 0xDED8
{
	if (func_10(2, *uParam0))
	{
		if (BitTest(uParam0->f_449, 1))
		{
			if (BitTest(uParam0->f_449, 2))
			{
				func_69(uParam0, func_215(*uParam0));
				func_85(2, *uParam0, 0);
			}
			else
			{
				func_123(uParam0);
				func_85(2, *uParam0, 0);
			}
		}
	}
}

int func_215(int iParam0)//Position - 0xDF27
{
	switch (iParam0)
	{
		case 0:
			return func_232(18);
			break;
		
		case 1:
			return func_232(22);
			break;
		
		case 2:
			return func_232(40);
			break;
		
		case 3:
			return func_232(8);
			break;
		
		case 4:
			return func_232(26);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_216()//Position - 0xDF94
{
	return Global_79652;
}

int func_217(var uParam0)//Position - 0xDFA0
{
	if (BitTest(uParam0->f_449, 1))
	{
		func_207(uParam0);
	}
	if (BitTest(uParam0->f_449, 0))
	{
		func_218(uParam0);
	}
	return 1;
}

void func_218(var uParam0)//Position - 0xDFC9
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_413 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_413));
	}
	if (uParam0->f_414 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_414));
	}
	HUD::CLEAR_ADDITIONAL_TEXT(5, false);
	MISC::CLEAR_BIT(&Global_97523, *uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 0);
}

void func_219(var uParam0, float fParam1, float fParam2)//Position - 0xE033
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		fVar0 = SYSTEM::VDIST2(uParam0->f_401, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		if (BitTest(uParam0->f_449, 1))
		{
			func_227(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || BitTest(Global_97522, *uParam0))
		{
			if (BitTest(uParam0->f_449, 0))
			{
				if (func_226(uParam0))
				{
					if (BitTest(Global_97522, *uParam0))
					{
						if (BitTest(Global_97524, *uParam0))
						{
							func_221(uParam0);
						}
					}
					else
					{
						func_221(uParam0);
					}
				}
			}
			else
			{
				func_220(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !BitTest(Global_97522, *uParam0))
		{
			if (BitTest(uParam0->f_449, 0))
			{
				if (BitTest(uParam0->f_449, 1))
				{
					func_207(uParam0);
				}
				func_218(uParam0);
			}
		}
	}
}

void func_220(var uParam0)//Position - 0xE104
{
	if (!AUDIO::HAS_LOADED_SP_DATA_SET())
	{
		return;
	}
	HUD::REQUEST_ADDITIONAL_TEXT(&(uParam0->f_1.f_272), 5);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, -1);
	if (*uParam0 != 1)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_413 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE(&(uParam0->f_1.f_268));
	uParam0->f_414 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	MISC::SET_BIT(&Global_97521, *uParam0);
	MISC::SET_BIT(&(uParam0->f_449), 0);
}

void func_221(var uParam0)//Position - 0xE182
{
	int iVar0;
	
	if (!BitTest(uParam0->f_449, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_96)
		{
			func_36(uParam0, iVar0);
			iVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_225(uParam0);
		func_224(uParam0);
		func_222(uParam0);
		MISC::SET_BIT(&(uParam0->f_449), 1);
	}
}

void func_222(var uParam0)//Position - 0xE1DC
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 1:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 2:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
			fVar3 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
			Var4 = { func_223(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
			uParam0->f_428[iVar0] = OBJECT::CREATE_OBJECT(iVar1, Var4, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_428[iVar0], fVar2, 0f, (uParam0->f_404 + fVar3), 2, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_428[iVar0], true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_428[iVar0], true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_428[iVar0], false, false);
			ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_428[iVar0], false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_428[iVar0], true);
		}
		iVar0++;
	}
	MISC::CLEAR_BIT(&Global_97524, *uParam0);
}

Vector3 func_223(var uParam0, var uParam1)//Position - 0xE311
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	return Var7;
}

void func_224(var uParam0)//Position - 0xE38F
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_117)
	{
		uVar2 = uParam0->f_1.f_186[iVar0];
		bVar3 = BitTest(Global_113969.f_1.f_120[iVar1], uVar2);
		if (uParam0->f_1.f_141[iVar0 /*2*/] == 0 && uParam0->f_1.f_141[iVar0 /*2*/].f_1 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[iVar0 /*2*/]));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[iVar0 /*2*/].f_1));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar0++;
	}
}

void func_225(var uParam0)//Position - 0xE46C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_14));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_14.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_209)
	{
		if (func_32(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			iVar3 = 0;
			if (func_32(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				iVar3 = 1;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			func_8(&(uParam0->f_1.f_211[iVar2 /*4*/]));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar1++;
		}
		iVar2++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (func_32(*uParam0, uParam0->f_1.f_210))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_226(var uParam0)//Position - 0xE5AC
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_413))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_414))
	{
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(5))
	{
		return 0;
	}
	if (AUDIO::HAS_LOADED_SP_DATA_SET())
	{
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, -1))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	MISC::SET_BIT(&Global_97523, *uParam0);
	return 1;
}

void func_227(var uParam0)//Position - 0xE647
{
	float fVar0;
	float fVar1;
	
	if (func_32(*uParam0, 0))
	{
		func_228(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * SYSTEM::COS((90f - uParam0->f_404))), (fVar0 * SYSTEM::SIN((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_228(var uParam0)//Position - 0xE6D0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	if (BitTest(Global_97521, *uParam0))
	{
		MISC::SET_BIT(&(uParam0->f_449), 16);
		MISC::SET_BIT(&(uParam0->f_449), 15);
		MISC::SET_BIT(&(uParam0->f_449), 14);
		MISC::CLEAR_BIT(&Global_97521, *uParam0);
	}
	if (BitTest(uParam0->f_449, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_117)
		{
			iVar1 = uParam0->f_1.f_186[iVar0];
			bVar2 = func_32(*uParam0, iVar1);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_449), 16);
	}
	if (BitTest(uParam0->f_449, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_33)
		{
			if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 1:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 2:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
					fVar5 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
					Var6 = { func_223(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
					uParam0->f_428[iVar0] = OBJECT::CREATE_OBJECT(iVar3, Var6, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_428[iVar0], fVar4, 0f, (uParam0->f_404 + fVar5), 2, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_428[iVar0], true, false);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_428[iVar0], true);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_428[iVar0], false, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_428[iVar0], false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_428[iVar0], true);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_428[iVar0]));
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_449), 15);
	}
	if (BitTest(uParam0->f_449, 14))
	{
		func_229(uParam0);
		func_33(uParam0);
		func_225(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_449), 14);
	}
}

void func_229(var uParam0)//Position - 0xE910
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_230(int iParam0)//Position - 0xE934
{
	return Global_44042 == iParam0;
}

int func_231(int iParam0)//Position - 0xE942
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_95498[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_92265)
	{
		if (Global_92265[iVar0 /*5*/] != -1)
		{
			if (Global_79660.f_109[Global_92265[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_232(int iParam0)//Position - 0xE9AA
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

void func_233(var uParam0, int iParam1)//Position - 0xE9D7
{
	struct<3> Var0;
	float fVar3;
	
	*uParam0 = iParam1;
	Var0 = { Global_97459[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar3 = Global_97459[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { Var0 };
	uParam0->f_404 = fVar3;
	uParam0->f_405 = { Var0 + Vector(0f, (-uParam0->f_1.f_8 * SYSTEM::COS((360f - fVar3))), (-uParam0->f_1.f_8 * SYSTEM::SIN((360f - fVar3)))) };
	uParam0->f_408 = { -0.85f, 0f, fVar3 };
	MISC::SET_BIT(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	MISC::CLEAR_BIT(&(uParam0->f_449), 0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 1);
	MISC::CLEAR_BIT(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
}

void func_234(var uParam0, var uParam1)//Position - 0xEAA3
{
	func_243(uParam0, 1, "HEIST_JEWELLERY", "BOARD0", "JHFAUD", "CRWAUD", 2, 2, 7, 8, uParam1, 708.99567f, -965.25604f, 31.395329f, 5.5f, 6.25f, 4f);
	func_242(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 116, 420, 248, 425, 380, 425, 510, 430, 0, 0, 650, 300, 0, 70, 684, 106);
	func_241(uParam0, 20f, 22f, 28f);
	func_240(uParam0, "BRD_H_01", "BRD_H_02", "BRD_H_03", "BRD_H_04", "JHFP1", "JHFP4", "JHP11", "JHHUR");
	func_239(uParam0, 1, "CRW_GM", "");
	func_239(uParam0, 4, "CRW_NR", "");
	func_239(uParam0, 6, "CRW_PH", "");
	func_239(uParam0, 7, "CRW_CF", "");
	func_239(uParam0, 8, "CRW_ET", "");
	func_239(uParam0, 9, "CRW_KD", "");
	func_239(uParam0, 10, "CRW_PM", "CRM_PM");
	func_239(uParam0, 12, "CRW_RL", "CRM_RL");
	func_238(uParam0, 0, 0, 0, 0);
	func_238(uParam0, 6, 0, 0, 0);
	func_238(uParam0, 1, 0, 0, 0);
	func_238(uParam0, 3, 1, 0, 0);
	func_238(uParam0, 11, 2, 0, 0);
	func_238(uParam0, 5, 3, 0, 0);
	func_238(uParam0, 9, 3, 0, 0);
	func_238(uParam0, 2, 4, 0, 0);
	func_238(uParam0, 7, 9, 0, 0);
	func_238(uParam0, 10, 10, 0, 0);
	func_237(uParam0, 2, 2, "H_TD_SEC" /* GXT: Evaluate security */);
	func_237(uParam0, 2, 2, "H_TD_PHOTO" /* GXT: Photograph interior */);
	func_237(uParam0, 2, 5, "H_TD_PLAN" /* GXT: Decide approach */);
	func_237(uParam0, 2, 6, "H_TD_CREW" /* GXT: Pick crew */);
	func_237(uParam0, 7, 11, "H_TD_CARB" /* GXT: Get carbine rifles */);
	func_237(uParam0, 8, 9, "H_TD_BUGS" /* GXT: Get exterminator equip */);
	func_237(uParam0, 8, 10, "H_TD_GAS" /* GXT: Get BZ gas canisters */);
	func_236(uParam0, 0, 203, 74);
	func_236(uParam0, 1, 368, 181);
	func_236(uParam0, 1, 556, 189);
	func_236(uParam0, 2, 690, 63);
	func_236(uParam0, 2, 673, 308);
	func_236(uParam0, 2, 671, 406);
	func_236(uParam0, 3, 245, 244);
	func_236(uParam0, 4, 70, 68);
	func_235(uParam0, 0, "JHP12", 214, 165, 1);
	func_235(uParam0, 0, "JHP13", 254, 46, 1);
	func_235(uParam0, 0, "JHP14", 70, 97, 1);
	func_235(uParam0, 0, "JHP15", 254, 275, 1);
	func_235(uParam0, 0, "JHP16", 457, 165, 1);
}

void func_235(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xED49
{
	struct<2> Var0;
	
	if (uParam0->f_369 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_386[uParam0->f_369] = iParam1;
		uParam0->f_371[uParam0->f_369 /*2*/] = iParam3;
		uParam0->f_371[uParam0->f_369 /*2*/].f_1 = iParam4;
		uParam0->f_280[uParam0->f_369 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			MISC::SET_BIT(&(uParam0->f_370), uParam0->f_369);
		}
		uParam0->f_369++;
	}
}

void func_236(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xEDC2
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_237(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0xEE06
{
	struct<8> Var0;
	
	if (uParam0->f_209 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_248[uParam0->f_209] = iParam1;
		uParam0->f_258[uParam0->f_209] = iParam2;
		MemCopy(&(uParam0->f_211[uParam0->f_209 /*4*/]), {Var0}, 4);
		uParam0->f_209++;
	}
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xEE56
{
	if (uParam0->f_117 < 22)
	{
		uParam0->f_118[uParam0->f_117] = iParam1;
		uParam0->f_186[uParam0->f_117] = iParam2;
		uParam0->f_141[uParam0->f_117 /*2*/] = iParam3;
		uParam0->f_141[uParam0->f_117 /*2*/].f_1 = iParam4;
		uParam0->f_117++;
	}
}

void func_239(var uParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0xEEA6
{
	struct<2> Var0;
	struct<2> Var2;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var2, sParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
	if (!MISC::ARE_STRINGS_EQUAL(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_304[14 /*2*/] = { Var2 };
				break;
			
			case 13:
				uParam0->f_304[16 /*2*/] = { Var2 };
				break;
			
			case 12:
				uParam0->f_304[15 /*2*/] = { Var2 };
				break;
			
			case 11:
				uParam0->f_304[17 /*2*/] = { Var2 };
				break;
			
			default:
				break;
			}
	}
}

void func_240(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)//Position - 0xEF40
{
	struct<4> Var0;
	struct<4> Var4;
	struct<4> Var8;
	struct<4> Var12;
	struct<2> Var16;
	struct<2> Var18;
	struct<2> Var20;
	struct<2> Var22;
	
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var4, sParam2, 16);
	StringCopy(&Var8, sParam3, 16);
	StringCopy(&Var12, sParam4, 16);
	StringCopy(&Var16, sParam5, 8);
	StringCopy(&Var18, sParam6, 8);
	StringCopy(&Var20, sParam7, 8);
	StringCopy(&Var22, sParam8, 8);
	uParam0->f_20[0 /*4*/] = { Var0 };
	uParam0->f_20[1 /*4*/] = { Var4 };
	uParam0->f_108[0 /*4*/] = { Var8 };
	uParam0->f_108[1 /*4*/] = { Var12 };
	uParam0->f_280[1 /*2*/] = { Var16 };
	uParam0->f_280[2 /*2*/] = { Var18 };
	uParam0->f_280[0 /*2*/] = { Var20 };
	uParam0->f_280[3 /*2*/] = { Var22 };
}

void func_241(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0xEFE4
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_242(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0xEFFE
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_12.f_1 = iParam9;
	uParam0->f_97[0 /*2*/] = iParam10;
	uParam0->f_97[0 /*2*/].f_1 = iParam11;
	uParam0->f_97[1 /*2*/] = iParam12;
	uParam0->f_97[1 /*2*/].f_1 = iParam13;
	uParam0->f_97[2 /*2*/] = iParam14;
	uParam0->f_97[2 /*2*/].f_1 = iParam15;
	uParam0->f_97[3 /*2*/] = iParam16;
	uParam0->f_97[3 /*2*/].f_1 = iParam17;
	uParam0->f_97[4 /*2*/] = iParam18;
	uParam0->f_97[4 /*2*/].f_1 = iParam19;
	uParam0->f_16 = iParam20;
	uParam0->f_16.f_1 = iParam21;
	uParam0->f_18 = iParam22;
	uParam0->f_18.f_1 = iParam23;
	uParam0->f_14 = iParam24;
	uParam0->f_14.f_1 = iParam25;
}

void func_243(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, struct<3> Param11, struct<3> Param14)//Position - 0xF0CC
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_268), sParam2, 16);
	StringCopy(&(uParam0->f_272), sParam3, 16);
	StringCopy(&(uParam0->f_276), sParam4, 8);
	StringCopy(&(uParam0->f_278), sParam5, 8);
	uParam0->f_29 = iParam6;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_210 = iParam7;
	uParam0->f_96 = uParam10;
	uParam0->f_394 = { Param11 };
	uParam0->f_397 = { Param14 };
}

int func_244(int iParam0, int iParam1)//Position - 0xF138
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_245(int iParam0)//Position - 0xF14E
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_246()//Position - 0xF1A5
{
	if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4P2") || CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4_P1_ALT1"))
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	func_114(16, 0);
	func_114(17, 0);
	func_114(18, 0);
	func_85(1, 0, 0);
	func_85(2, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_731, false);
	if (iLocal_736 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_736))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_736);
		}
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_44.f_1.f_394 - Local_44.f_1.f_397, Local_44.f_1.f_394 + Local_44.f_1.f_397, true, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (iLocal_43 != -1)
	{
		func_161(&iLocal_43);
	}
	while (!func_217(&Local_44))
	{
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

