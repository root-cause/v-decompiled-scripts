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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
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
	struct<75> Local_88 = { 0, 0, 3, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_163[32];
	struct<54> Local_484 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	int iLocal_540 = 0;
	char* sLocal_541 = NULL;
	int iLocal_542 = 0;
	struct<3> Local_543 = { 0, 0, 0 } ;
	struct<3> Local_546 = { 0, 0, 0 } ;
	float fLocal_549 = 0f;
	int iLocal_550 = 0;
	struct<3> Local_551 = { 0, 0, 0 } ;
	struct<3> Local_554 = { 0, 0, 0 } ;
	int iLocal_557 = 0;
	var uLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	struct<3> Local_567 = { 0, 0, 0 } ;
	float fLocal_570 = 0f;
	struct<3> Local_571 = { 0, 0, 0 } ;
	float fLocal_574 = 0f;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	struct<3> Local_587 = { 0, 0, 0 } ;
	struct<3> Local_590 = { 0, 0, 0 } ;
	struct<3> Local_593 = { 0, 0, 0 } ;
	struct<3> Local_596 = { 0, 0, 0 } ;
	float fLocal_599 = 0f;
	struct<3> Local_600 = { 0, 0, 0 } ;
	struct<3> Local_603 = { 0, 0, 0 } ;
	float fLocal_606 = 0f;
	var uLocal_607 = 16;
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
	int iLocal_772[5] = { 0, 0, 0, 0, 0 };
	int iLocal_778[5] = { 0, 0, 0, 0, 0 };
	float fLocal_784 = 0f;
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
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	struct<3> Local_808 = { 0, 0, 0 } ;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	iLocal_542 = joaat("MP_M_ShopKeep_01");
	iLocal_550 = -1;
	iLocal_557 = -1;
	iLocal_575 = joaat("prop_till_01");
	iLocal_576 = SYSTEM::ROUND(Global_262145.f_2432 /* Tunable: LOW_HOLD_UPS_MODIFIER */);
	iLocal_577 = SYSTEM::ROUND(Global_262145.f_2428 /* Tunable: HIGH_HOLD_UPS_MODIFIER */) + 1;
	iLocal_578 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_485(ScriptParam_0))
		{
			func_480();
		}
		if (func_479(1))
		{
			func_466(PLAYER::PLAYER_ID(), 0, 98816, 0);
		}
	}
	while (true)
	{
		func_465();
		if (func_457())
		{
			func_480();
		}
		func_446();
		if (BitTest(Local_88.f_25, 6))
		{
			if (func_479(1))
			{
				func_466(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_443();
				MISC::CLEAR_BIT(&(Local_484.f_53), 7);
				func_442();
			}
		}
		switch (func_441(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
				if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
				{
					if (func_431())
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_430(Local_484.f_0), false);
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_0))
						{
							if (func_429() > 0)
							{
								if (!func_428(Local_88.f_0))
								{
									func_427(&uLocal_607, 3, NETWORK::NET_TO_PED(Local_88.f_0), &(Local_88.f_48), 1, 0);
									func_426();
								}
								MISC::SET_BIT(&(Local_484.f_52), 22);
								Global_1977840 = Local_484.f_0;
								Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_429() == 6)
				{
					Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_274(&Local_484, Local_551, Local_554, &Local_88, &(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_PED(Local_88.f_0), Local_600, Local_603, fLocal_606, false, true, 0), 0);
				func_267();
				if (func_429() == 2)
				{
					func_136();
				}
				else if (func_429() == 6)
				{
					Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 5;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_590, 30f, 30f, 30f, false, true, 0))
				{
					Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_135(&(Local_88.f_71));
				if (func_134(&(Local_88.f_71)))
				{
					Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
			
			case 6:
				func_55();
				func_480();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_429())
			{
				case 0:
					if (!BitTest(Local_484.f_52, 16))
					{
						func_53(func_54(0));
						func_53(func_54(1));
						func_53(func_54(2));
						STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
						if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
						{
							if (func_431())
							{
								MISC::CLEAR_AREA(Local_551, 1.5f, false, true, false, true);
								MISC::CLEAR_AREA(Local_546, 1.5f, false, true, false, true);
								MISC::SET_BIT(&(Local_484.f_52), 16);
							}
						}
					}
					else if (func_51())
					{
						Local_88.f_13 = 2;
					}
					break;
				
				case 2:
					func_50();
					func_47();
					func_31();
					func_30();
					func_23();
					func_22();
					func_13();
					func_12();
					if (func_4())
					{
						func_1();
						Local_88.f_13 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x397
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_14))
	{
		if (func_3(Local_88.f_14))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_88.f_14)))
			{
				ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_88.f_14), true, true);
				func_2(&(Local_88.f_14));
			}
		}
	}
}

void func_2(var uParam0)//Position - 0x3DA
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_3(int iParam0)//Position - 0x3FE
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_4()//Position - 0x420
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()//Position - 0x434
{
	if (BitTest(Local_88.f_25, 2))
	{
		return 1;
	}
	if (BitTest(Local_88.f_25, 3))
	{
		return 1;
	}
	if (!func_11())
	{
		if ((BitTest(Local_88.f_25, 11) || BitTest(Local_88.f_25, 19)) || (BitTest(Local_88.f_25, 9) && !BitTest(Local_88.f_25, 20)))
		{
			func_6(Local_484.f_50, 1, func_7());
			return 1;
		}
		if (BitTest(Local_88.f_25, 18))
		{
			func_6(Local_484.f_50, 1, func_7());
			return 1;
		}
	}
	if (BitTest(Local_88.f_25, 18))
	{
		if (!BitTest(Local_88.f_26, 7))
		{
			func_6(Local_484.f_50, 1, func_7());
			MISC::SET_BIT(&(Local_88.f_26), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)//Position - 0x4E9
{
	struct<5> Var0;
	
	Var0.f_0 = 1925046697;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 5, iParam2, Var0.f_0);
	}
}

int func_7()//Position - 0x523
{
	return func_8(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_10(), -1, 0));
}

int func_8(int iParam0)//Position - 0x539
{
	var uVar0;
	
	if (func_9(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_9(var uParam0)//Position - 0x554
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

char* func_10()//Position - 0x576
{
	switch (Global_2698640)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_11()//Position - 0x596
{
	if ((BitTest(Local_88.f_25, 13) || BitTest(Local_88.f_25, 27)) || BitTest(Local_88.f_25, 28))
	{
		return 1;
	}
	return 0;
}

void func_12()//Position - 0x5C7
{
	var uVar0;
	
	if (!BitTest(Local_88.f_25, 21))
	{
		if (func_428(Local_88.f_0))
		{
			Local_88.f_74 = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_88.f_0, &uVar0);
			MISC::SET_BIT(&(Local_88.f_25), 21);
		}
	}
	if (!BitTest(Local_88.f_25, 19))
	{
		if (BitTest(Local_88.f_25, 10) && Local_88.f_39 <= 0f)
		{
			MISC::SET_BIT(&(Local_88.f_25), 19);
		}
	}
	if (!BitTest(Local_88.f_26, 17))
	{
		if (BitTest(Local_88.f_25, 20))
		{
			if (func_3(Local_88.f_14))
			{
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_88.f_14), false, false);
				MISC::SET_BIT(&(Local_88.f_26), 17);
			}
		}
	}
	if (!BitTest(Local_88.f_25, 6))
	{
		if (Global_2738587.f_8 == 1)
		{
			MISC::SET_BIT(&(Local_88.f_25), 6);
			MISC::SET_BIT(&(Local_88.f_25), 16);
		}
	}
}

int func_13()//Position - 0x682
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || !BitTest(Local_88.f_27, 0))
	{
		return 0;
	}
	if (Local_88.f_68 != 6)
	{
		if (Local_88.f_68 > 0 && func_428(Local_88.f_16))
		{
			Local_88.f_68 = 6;
			return 0;
		}
		switch (Local_88.f_68)
		{
			case 0:
				if (!func_20(&uLocal_797, 10000, 0))
				{
					iVar0 = PED::GET_RANDOM_PED_AT_COORD(Local_600, 20f, 20f, 20f, -1);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
						{
							iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
							if (((((((iVar1 != joaat("MP_M_Freemode_01") && iVar1 != joaat("MP_F_Freemode_01")) && !PED::IS_COP_PED_IN_AREA_3D(Local_600, 25f, 25f, 25f)) && !ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_587, 1f, 1f, 2f, false, true, 0)) && !WEAPON::IS_PED_ARMED(iVar0, 7)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, true)) && PED::IS_PED_HUMAN(iVar0)) && func_18(iVar1))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
								{
									if (func_17(&(Local_88.f_16), iVar0, 1, 0))
									{
										WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_88.f_16), joaat("WEAPON_PISTOL"), 25000, false);
										PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_88.f_16), true);
										Local_88.f_68 = 1;
										MISC::SET_BIT(&(Local_88.f_27), 1);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_88.f_16), Global_1837296);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_88.f_16), 2);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_88.f_16), SYSTEM::ROUND((200f * Global_262145.f_165 /* Tunable: AI_HEALTH */)), 0, 0);
										func_427(&uLocal_607, 4, NETWORK::NET_TO_PED(Local_88.f_16), "StoreHero", 1, 0);
										TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_88.f_16), func_16(), 0, true);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((BitTest(Local_88.f_25, 9) || BitTest(Local_88.f_25, 5)) || BitTest(Local_88.f_25, 4))
				{
					Local_88.f_68 = 2;
				}
				break;
			
			case 2:
				if (func_20(&(Local_88.f_69), 3000, 0) || (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_16), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_16), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1))
				{
					func_15(&(Local_88.f_69));
					Local_88.f_68 = 3;
				}
				break;
			
			case 3:
				if (((BitTest(Local_88.f_25, 5) || BitTest(Local_88.f_27, 8)) || BitTest(Local_88.f_27, 9)) || func_20(&(Local_88.f_69), 5000, 0))
				{
					if (func_14() || func_20(&(Local_88.f_69), 5000, 0))
					{
						Local_88.f_68 = 4;
					}
					else
					{
						Local_88.f_68 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_14()//Position - 0x94D
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_15(var uParam0)//Position - 0x96B
{
	uParam0->f_1 = 0;
}

char* func_16()//Position - 0x978
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_17(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x9B7
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, bParam2, bParam3);
	*uParam0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam2)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x9EE
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("MP_M_Freemode_01") || iParam0 == joaat("MP_M_FIBSec_01")) || iParam0 == joaat("MP_S_M_Armoured_01")) || iParam0 == joaat("S_F_Y_AirHostess_01")) || iParam0 == joaat("S_F_Y_Baywatch_01")) || iParam0 == joaat("S_F_Y_Cop_01")) || iParam0 == joaat("S_F_Y_Ranger_01")) || iParam0 == joaat("S_F_Y_Scrubs_01")) || iParam0 == joaat("S_F_Y_Sheriff_01")) || iParam0 == joaat("S_M_M_Armoured_01")) || iParam0 == joaat("S_M_M_Armoured_02")) || iParam0 == joaat("S_M_M_Bouncer_01")) || iParam0 == joaat("S_M_M_CIASec_01")) || iParam0 == joaat("S_M_M_ChemSec_01")) || iParam0 == joaat("S_M_M_Doctor_01")) || iParam0 == joaat("S_M_M_FIBOffice_01")) || iParam0 == joaat("S_M_M_FIBOffice_02")) || iParam0 == joaat("S_M_M_HighSec_01")) || iParam0 == joaat("S_M_M_HighSec_02")) || iParam0 == joaat("S_M_M_Janitor")) || iParam0 == joaat("S_M_M_LSMetro_01")) || iParam0 == joaat("S_M_M_Marine_01")) || iParam0 == joaat("S_M_M_Marine_02")) || iParam0 == joaat("S_M_M_Paramedic_01")) || iParam0 == joaat("S_M_M_Pilot_01")) || iParam0 == joaat("S_M_M_Pilot_02")) || iParam0 == joaat("S_M_M_Postal_01")) || iParam0 == joaat("S_M_M_Postal_02")) || iParam0 == joaat("S_M_M_PrisGuard_01")) || iParam0 == joaat("S_M_M_Scientist_01")) || iParam0 == joaat("S_M_M_Security_01")) || iParam0 == joaat("S_M_M_UPS_01")) || iParam0 == joaat("S_M_M_UPS_02")) || iParam0 == joaat("S_M_Y_AirWorker")) || iParam0 == joaat("S_M_Y_ArmyMech_01")) || iParam0 == joaat("S_M_Y_BayWatch_01")) || iParam0 == joaat("S_M_Y_BlackOps_01")) || iParam0 == joaat("S_M_Y_BlackOps_02")) || iParam0 == joaat("S_M_Y_Cop_01")) || iParam0 == joaat("S_M_Y_Doorman_01")) || iParam0 == joaat("S_M_Y_Fireman_01")) || iParam0 == joaat("S_M_Y_Garbage")) || iParam0 == joaat("S_M_Y_HwayCop_01")) || iParam0 == joaat("S_M_Y_Marine_01")) || iParam0 == joaat("S_M_Y_Marine_02")) || iParam0 == joaat("S_M_Y_Marine_03")) || iParam0 == joaat("S_M_Y_Pilot_01")) || iParam0 == joaat("S_M_Y_Ranger_01")) || iParam0 == joaat("S_M_Y_Sheriff_01")) || iParam0 == joaat("S_M_Y_Swat_01")) || iParam0 == joaat("S_M_Y_USCG_01")) || iParam0 == joaat("S_M_Y_Valet_01")) || iParam0 == joaat("S_M_Y_Waiter_01")) || iParam0 == joaat("U_M_M_JewelSec_01")) || iParam0 == joaat("S_M_Y_Casino_01")) || func_19(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_19(int iParam0)//Position - 0xD06
{
	switch (iParam0)
	{
		case joaat("A_C_Boar"):
		case joaat("A_C_Cat_01"):
		case joaat("A_C_Chickenhawk"):
		case joaat("A_C_Chimp"):
		case joaat("A_C_Chimp_02"):
		case joaat("A_C_Chop"):
		case joaat("A_C_Cormorant"):
		case joaat("A_C_Cow"):
		case joaat("A_C_Coyote"):
		case joaat("A_C_Crow"):
		case joaat("A_C_Deer"):
		case joaat("A_C_Dolphin"):
		case joaat("A_C_Fish"):
		case joaat("A_C_Hen"):
		case joaat("A_C_HumpBack"):
		case joaat("A_C_Husky"):
		case joaat("A_C_KillerWhale"):
		case joaat("A_C_MtLion"):
		case joaat("A_C_Pig"):
		case joaat("A_C_Pigeon"):
		case joaat("A_C_Poodle"):
		case joaat("A_C_Pug"):
		case joaat("A_C_Rabbit_01"):
		case joaat("A_C_Rabbit_02"):
		case joaat("A_C_Rat"):
		case joaat("A_C_Retriever"):
		case joaat("A_C_Rhesus"):
		case joaat("A_C_Rottweiler"):
		case joaat("A_C_Seagull"):
		case joaat("A_C_SharkHammer"):
		case joaat("A_C_SharkTiger"):
		case joaat("A_C_shepherd"):
		case joaat("A_C_Stingray"):
		case joaat("A_C_Westy"):
		case joaat("IG_Orleans"):
			return 1;
		
		default:
	}
	return 0;
}

int func_20(var uParam0, int iParam1, bool bParam2)//Position - 0xDEC
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_21(uParam0, bParam2, 0);
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

void func_21(var uParam0, bool bParam1, bool bParam2)//Position - 0xE4A
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

void func_22()//Position - 0xE8F
{
	if (Local_88.f_32 == 0)
	{
		if (Local_88.f_3 >= 2 && Local_88.f_3 != 9)
		{
			Local_88.f_32 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(101 /*EVENT_SHOCKING_MUGGING*/, PLAYER::PLAYER_PED_ID(), 60000f);
		}
	}
}

void func_23()//Position - 0xEC7
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!BitTest(Local_88.f_1, 5))
	{
		if (Local_88.f_43 > 0)
		{
			func_27();
			if (!BitTest(Local_88.f_1, 5))
			{
				return;
			}
		}
	}
	if (BitTest(Local_88.f_1, 1))
	{
		if (Local_88.f_2 == 3 && !BitTest(Local_88.f_25, 9))
		{
			Local_88.f_2 = 0;
		}
		MISC::CLEAR_BIT(&(Local_88.f_1), 1);
	}
	switch (Local_88.f_2)
	{
		case 0:
			if ((((func_3(Local_88.f_0) && !func_428(Local_88.f_0)) && func_3(Local_88.f_17[Local_88.f_28])) && Local_88.f_3 != 8) && Local_88.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_88.f_0)))
				{
					if (BitTest(Local_88.f_25, 9) || BitTest(Local_88.f_1, 4))
					{
						Local_88.f_2 = 2;
						return;
					}
					if (!iLocal_540)
					{
						TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_88.f_0), Local_88.f_44, 1600);
						iLocal_540 = 1;
					}
					if (func_20(&uLocal_787, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_88.f_0));
						fVar1 = (Local_88.f_44 - 10f);
						fVar2 = (Local_88.f_44 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_88.f_44 - 10f) + 360f);
							fVar1 = ((Local_88.f_44 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_88.f_44 - 10f) - 360f);
							fVar1 = ((Local_88.f_44 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_20(&uLocal_793, 1000, 0)) || func_20(&uLocal_793, 3125, 0))
						{
							TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_88.f_0));
							Local_88.f_29 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_PED(Local_88.f_0), -0.65f, 0.87f, -0.02f), Local_554, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_88.f_0), Local_88.f_29, "mp_am_hold_up", func_26(Local_88.f_28), 1.5f, -1.5f, 157, 16, 1000f, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[Local_88.f_28]))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_88.f_17[Local_88.f_28]), true, false);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_88.f_17[Local_88.f_28]), Local_88.f_29, "mp_am_hold_up", func_25(Local_88.f_28), 4f, -4f, 8);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_88.f_29);
							Local_88.f_2 = 1;
							iLocal_557 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_29);
						}
					}
				}
			}
			break;
		
		case 1:
			if (BitTest(Local_88.f_25, 9) || BitTest(Local_88.f_1, 4))
			{
				iLocal_557 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_29);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_557))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_88.f_29);
				}
				Local_88.f_2 = 2;
				return;
			}
			if (iLocal_557 != -1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_557) || func_20(&uLocal_789, 2000, 0))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_557) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_557) == 1f) || func_20(&uLocal_789, 2000, 0))
					{
						if ((func_3(Local_88.f_0) && !func_428(Local_88.f_0)) && !BitTest(Local_88.f_25, 9))
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_88.f_0));
						}
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_88.f_29);
						Local_88.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_557 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_29);
			}
			break;
		
		case 2:
			func_3(Local_88.f_17[Local_88.f_28]);
			if (func_20(&uLocal_795, 1000, 0) && func_3(Local_88.f_17[Local_88.f_28]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_OBJ(Local_88.f_17[Local_88.f_28])))
				{
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_88.f_17[Local_88.f_28]), false, false);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_88.f_17[Local_88.f_28]), true);
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_88.f_17[Local_88.f_28]), func_24(Local_88.f_28), true, false, false, true);
				}
				iLocal_557 = -1;
				iLocal_540 = 0;
				if (BitTest(Local_88.f_1, 4))
				{
					MISC::CLEAR_BIT(&(Local_88.f_1), 4);
				}
				func_15(&uLocal_795);
				func_15(&uLocal_789);
				func_15(&uLocal_787);
				func_15(&uLocal_793);
				Local_88.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_24(int iParam0)//Position - 0x12FE
{
	switch (iParam0)
	{
		case 3:
			return Local_571 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return Local_571 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return Local_571 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return Local_571 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return Local_571 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return Local_571 - Vector(1f, -0.2f, -0.1f);
		
		case 6:
			return Local_571 - Vector(1f, -0.2f, 0.2f);
		
		default:
	}
	return Local_571 - Vector(1f, 0f, -0.1f);
}

char* func_25(int iParam0)//Position - 0x13C8
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		case 6:
			return "purchase_beer";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_26(int iParam0)//Position - 0x142E
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		case 6:
			return "purchase_beer_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_27()//Position - 0x1496
{
	if ((((((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[3]) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[1])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[2])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[4])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[0])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[5])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[6]))
	{
		if ((((((func_53(func_29(3)) && func_53(func_29(1))) && func_53(func_29(2))) && func_53(func_29(4))) && func_53(func_29(0))) && func_53(func_29(5))) && func_53(func_29(6)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 7, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[3]))
				{
					if (func_28(&(Local_88.f_17[3]), func_29(3), func_24(3), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_88.f_17[3]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_543));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_88.f_17[3]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_88.f_17[3]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[1]))
				{
					if (func_28(&(Local_88.f_17[1]), func_29(1), func_24(1), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_88.f_17[1]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_543));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_88.f_17[1]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_88.f_17[1]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[2]))
				{
					if (func_28(&(Local_88.f_17[2]), func_29(2), func_24(2), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_88.f_17[2]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_543));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_88.f_17[2]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_88.f_17[2]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[4]))
				{
					if (func_28(&(Local_88.f_17[4]), func_29(4), func_24(4), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_88.f_17[4]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_543));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_88.f_17[4]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_88.f_17[4]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[0]))
				{
					if (func_28(&(Local_88.f_17[0]), func_29(0), func_24(0), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_88.f_17[0]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_543));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_88.f_17[0]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_88.f_17[0]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[5]))
				{
					if (func_28(&(Local_88.f_17[5]), func_29(5), func_24(5), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_88.f_17[5]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_543));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_88.f_17[5]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_88.f_17[5]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_17[6]))
				{
					if (func_28(&(Local_88.f_17[6]), func_29(6), func_24(6), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_88.f_17[6]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_543));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_88.f_17[6]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_88.f_17[6]), false, false);
					}
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&(Local_88.f_1), 5);
		return 1;
	}
	return 0;
}

int func_28(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x186C
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_29(int iParam0)//Position - 0x1911
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		case 6:
			return joaat("prop_ld_can_01b");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_30()//Position - 0x1987
{
	float fVar0;
	
	if (!BitTest(Local_88.f_25, 9))
	{
		if (Global_2738587.f_8 == 1 || BitTest(Local_88.f_25, 6))
		{
			if ((((func_3(Local_88.f_14) && func_3(Local_88.f_0)) && !func_428(Local_88.f_0)) && Local_88.f_3 != 8) && Local_88.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_88.f_0)))
				{
					if (!BitTest(Local_484.f_52, 30))
					{
						TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_88.f_0), Local_88.f_44, 1600);
						MISC::SET_BIT(&(Local_484.f_52), 30);
					}
					if (func_20(&uLocal_785, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_88.f_0));
						if ((fVar0 > (Local_88.f_44 - 20f) && fVar0 < (Local_88.f_44 + 20f)) || func_20(&uLocal_791, 1500, 0))
						{
							TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_88.f_0));
							Local_88.f_31 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_551, Local_554, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_88.f_0), Local_88.f_31, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1000f, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_14))
							{
								ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_88.f_14), false);
								ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_88.f_14), true);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_88.f_14), Local_88.f_31, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_15))
							{
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_88.f_15), Local_88.f_31, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_88.f_31);
							MISC::SET_BIT(&(Local_88.f_25), 9);
						}
					}
				}
				else
				{
					Local_88.f_3 = 8;
				}
			}
		}
	}
	else if (!BitTest(Local_88.f_25, 17))
	{
		iLocal_550 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_31);
		if (iLocal_550 != -1)
		{
			func_3(Local_88.f_0);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				MISC::SET_BIT(&(Local_88.f_25), 17);
			}
		}
	}
	else if (!BitTest(Local_88.f_26, 15))
	{
		iLocal_550 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_31);
		if (iLocal_550 != -1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550))
			{
				func_3(Local_88.f_0);
				if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_14) && func_3(Local_88.f_14)) && func_3(Local_88.f_0))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_550) > 0.44f)
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_88.f_14), true, false);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_88.f_14), true, false);
						MISC::SET_BIT(&(Local_88.f_26), 15);
					}
				}
			}
		}
	}
}

int func_31()//Position - 0x1C10
{
	int iVar0;
	float fVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	func_45();
	if (Local_88.f_3 != 9)
	{
		if (func_428(Local_88.f_0))
		{
			Local_88.f_3 = 9;
			return 0;
		}
		if ((BitTest(Local_88.f_25, 6) && !BitTest(Local_88.f_25, 9)) && Local_88.f_3 < 8)
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_14) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_15))
			{
				Local_88.f_3 = 8;
			}
		}
		switch (Local_88.f_3)
		{
			case 0:
				if (!func_428(Local_88.f_0))
				{
					Local_88.f_3 = 1;
				}
				break;
			
			case 1:
				if (BitTest(Local_88.f_25, 4))
				{
					Local_88.f_3 = 2;
				}
				else if (BitTest(Local_88.f_25, 6) || BitTest(Local_88.f_25, 9))
				{
					Local_88.f_3 = 4;
				}
				else if (func_43() || func_36(0))
				{
					Local_88.f_3 = 8;
				}
				else if (func_34())
				{
					Local_88.f_3 = 7;
				}
				break;
			
			case 2:
				if (BitTest(Local_88.f_25, 6) || BitTest(Local_88.f_25, 9))
				{
					Local_88.f_3 = 4;
				}
				else if (func_43() || func_36(1))
				{
					Local_88.f_3 = 8;
				}
				else if (func_34())
				{
					Local_88.f_3 = 7;
				}
				break;
			
			case 3:
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 1)
				{
					Local_88.f_3 = 4;
				}
				else if (func_36(1))
				{
					Local_88.f_3 = 8;
				}
				else if (func_34())
				{
					Local_88.f_3 = 7;
				}
				break;
			
			case 4:
				if (BitTest(Local_88.f_25, 17))
				{
					iVar0 = 0;
					iLocal_550 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_31);
					if (iLocal_550 != -1)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550))
						{
							if (MISC::IS_BULLET_IN_AREA(Local_543, 3f, false))
							{
								if (!BitTest(Local_88.f_25, 25))
								{
									MISC::SET_BIT(&(Local_88.f_25), 25);
								}
								Local_88.f_35 = (Local_88.f_35 + 0.35f);
							}
							fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_550);
							if (fVar1 >= 0.8f)
							{
								Local_88.f_39 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_88.f_39 = 0f;
							}
							else if (fVar1 > Local_88.f_39)
							{
								Local_88.f_39 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_88.f_39 = 1f;
								iVar0 = 1;
							}
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
					if (iVar0 == 1)
					{
						Local_88.f_3 = 6;
					}
					else if (func_36(1))
					{
						Local_88.f_3 = 8;
					}
					else if (func_34())
					{
						Local_88.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_43() || func_36(1))
				{
					Local_88.f_3 = 8;
				}
				break;
			
			case 6:
				func_32();
				if (func_43() || func_36(1))
				{
					Local_88.f_3 = 8;
				}
				else if (func_34())
				{
					Local_88.f_3 = 7;
				}
				else if (BitTest(Local_88.f_26, 3))
				{
					if (!BitTest(Local_88.f_26, 4))
					{
						Local_88.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_32();
				break;
			
			case 7:
				break;
		}
	}
	else if (!BitTest(Local_88.f_26, 10))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_0))
		{
			Local_88.f_45 = (Local_88.f_45 - 1);
			MISC::SET_BIT(&(Local_88.f_26), 10);
		}
	}
	return 1;
}

void func_32()//Position - 0x1F58
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Local_88.f_26, 2))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		iVar1 = (iLocal_578 + func_33());
		if (iVar0 < iVar1)
		{
			MISC::SET_BIT(&(Local_88.f_26), 3);
		}
		MISC::SET_BIT(&(Local_88.f_26), 2);
	}
}

int func_33()//Position - 0x1F96
{
	int iVar0;
	
	iVar0 = (Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_36 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_34()//Position - 0x1FBB
{
	int iVar0;
	int iVar1;
	
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/))
	{
		iVar0 = func_35(PLAYER::PLAYER_PED_ID());
		if ((((((iVar0 != joaat("WEAPON_UNARMED") && iVar0 != 0) && iVar0 != joaat("VEHICLE_WEAPON_PLAYER_BULLET")) && iVar0 != joaat("VEHICLE_WEAPON_PLAYER_BUZZARD")) && iVar0 != joaat("VEHICLE_WEAPON_PLAYER_LASER")) && iVar0 != joaat("VEHICLE_WEAPON_TANK")) && iVar0 != joaat("WEAPON_FLARE"))
		{
			iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
			if (((((((WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) == 0 && iVar1 != joaat("GROUP_MELEE")) && iVar1 != joaat("GROUP_LOUDHAILER")) && iVar1 != 0) && iVar1 != joaat("GROUP_FIREEXTINGUISHER")) && iVar1 != joaat("GROUP_NIGHTVISION")) && iVar1 != joaat("GROUP_PARACHUTE")) && iVar1 != joaat("GROUP_DIGISCANNER"))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_583)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_35(int iParam0)//Position - 0x20BB
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

int func_36(int iParam0)//Position - 0x20CF
{
	int iVar0;
	struct<2> Var1;
	int iVar14;
	int iVar15;
	
	if (func_41(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	if (func_40(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (BitTest(Local_88.f_25, 5))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_88.f_0)))
	{
		return 1;
	}
	if (func_39() || func_38())
	{
		return 1;
	}
	if (func_37())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) == 186)
		{
			if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 13))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var1.f_0) && ENTITY::IS_ENTITY_A_PED(Var1.f_0))
				{
					iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_0);
					if (PED::IS_PED_INJURED(iVar14) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar14) == iLocal_583)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
						{
							iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
							if (iVar15 != NETWORK::NET_TO_PED(Local_88.f_0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(Local_88.f_26, 5))
		{
			if (PED::IS_COP_PED_IN_AREA_3D(Local_593 - Vector(25f, 25f, 25f), Local_593 + Vector(25f, 25f, 25f)))
			{
				MISC::SET_BIT(&(Local_88.f_26), 5);
			}
		}
	}
	return 0;
}

int func_37()//Position - 0x2215
{
	if (Local_484.f_50 >= 15 && Local_484.f_50 <= 19)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(9, Local_593, 40f))
		{
			return 1;
		}
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_593, Local_596, fLocal_599))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_600, Local_603, fLocal_606))
	{
		return 1;
	}
	return 0;
}

int func_38()//Position - 0x227F
{
	if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_600, Local_603, fLocal_606, joaat("WEAPON_GRENADE"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_600, Local_603, fLocal_606, joaat("WEAPON_MOLOTOV"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_600, Local_603, fLocal_606, joaat("WEAPON_STICKYBOMB"), false))
	{
		return 1;
	}
	return 0;
}

int func_39()//Position - 0x22E0
{
	if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_593, Local_596, fLocal_599, joaat("WEAPON_GRENADE"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_593, Local_596, fLocal_599, joaat("WEAPON_MOLOTOV"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_593, Local_596, fLocal_599, joaat("WEAPON_STICKYBOMB"), false))
	{
		return 1;
	}
	return 0;
}

int func_40(int iParam0)//Position - 0x2341
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2707705;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_41(int iParam0, int iParam1)//Position - 0x23AD
{
	if (Global_1886967[iParam0 /*609*/] == iParam1)
	{
		return func_42(iParam0);
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x23CD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1886967[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

int func_43()//Position - 0x23F0
{
	if (func_44() || func_37())
	{
		return 1;
	}
	return 0;
}

int func_44()//Position - 0x240E
{
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_593, Local_596, fLocal_599, false))
	{
		return 1;
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_600, Local_603, fLocal_606, false))
	{
		return 1;
	}
	return 0;
}

void func_45()//Position - 0x2449
{
	if (Local_88.f_35 > 0f)
	{
		if (func_46(&(Local_88.f_36), 50, 0))
		{
			Local_88.f_35 = (Local_88.f_35 - 0.02f);
			if (Local_88.f_35 < 0f)
			{
				Local_88.f_35 = 0f;
			}
			func_15(&(Local_88.f_36));
		}
	}
}

int func_46(var uParam0, int iParam1, bool bParam2)//Position - 0x248C
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_21(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_15(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_15(uParam0);
		return 1;
	}
	return 0;
}

void func_47()//Position - 0x24F6
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_564)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_564));
		iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (!BitTest(Local_88.f_25, 11))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/], 5))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_88.f_14))
				{
					if (func_3(Local_88.f_14))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_88.f_14), true, true);
						func_49(&(Local_88.f_14));
					}
				}
				else
				{
					Local_88.f_40 = { Local_163[iLocal_564 /*10*/].f_7 };
					Local_88.f_46 = 7;
					MISC::SET_BIT(&(Local_88.f_25), 11);
				}
			}
		}
		if (!BitTest(Local_88.f_25, 14))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/], 6))
			{
				MISC::SET_BIT(&(Local_88.f_25), 14);
			}
		}
		if (!BitTest(Local_88.f_25, 15))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/], 7))
			{
				MISC::SET_BIT(&(Local_88.f_25), 15);
			}
		}
		if (!BitTest(Local_88.f_25, 26))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/], 24))
			{
				MISC::SET_BIT(&(Local_88.f_25), 26);
			}
		}
		if (!BitTest(Local_88.f_25, 22))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/], 22))
			{
				MISC::SET_BIT(&(Local_88.f_25), 22);
			}
		}
		if (!BitTest(Local_88.f_25, 23))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/], 23))
			{
				MISC::SET_BIT(&(Local_88.f_25), 23);
			}
		}
		if (!BitTest(Local_88.f_25, 30))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/], 25))
			{
				MISC::SET_BIT(&(Local_88.f_25), 30);
			}
		}
		if (!BitTest(Local_88.f_25, 31))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/], 26))
			{
				MISC::SET_BIT(&(Local_88.f_25), 31);
			}
		}
		if (!BitTest(Local_88.f_26, 6))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/], 29))
			{
				MISC::SET_BIT(&(Local_88.f_26), 6);
			}
		}
		if (!BitTest(Local_88.f_26, 9))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/], 31))
			{
				MISC::SET_BIT(&(Local_88.f_26), 9);
			}
		}
		if (!BitTest(Local_88.f_1, 3))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/].f_1, 3))
			{
				MISC::SET_BIT(&(Local_88.f_1), 3);
			}
		}
		if (BitTest(Local_88.f_27, 1))
		{
			if (!BitTest(Local_88.f_27, 6))
			{
				if (BitTest(Local_163[iLocal_564 /*10*/].f_5, 1))
				{
					MISC::SET_BIT(&(Local_88.f_27), 6);
				}
			}
			if (!BitTest(Local_88.f_27, 7))
			{
				if (BitTest(Local_163[iLocal_564 /*10*/].f_5, 2))
				{
					MISC::SET_BIT(&(Local_88.f_27), 7);
				}
			}
			if (!BitTest(Local_88.f_27, 5))
			{
				if (BitTest(Local_163[iLocal_564 /*10*/].f_5, 0))
				{
					MISC::SET_BIT(&(Local_88.f_27), 5);
				}
			}
		}
		if (!BitTest(Local_88.f_25, 20))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/], 11))
			{
				MISC::SET_BIT(&(Local_88.f_25), 20);
			}
		}
		if (!BitTest(Local_88.f_26, 17))
		{
			if (BitTest(Local_163[iLocal_564 /*10*/], 13))
			{
				MISC::SET_BIT(&(Local_88.f_26), 17);
			}
		}
		if (func_48(iVar0, 1, 1))
		{
			if (!BitTest(Local_88.f_25, 5))
			{
				if (!func_428(Local_88.f_0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_88.f_0), iVar1, true))
					{
						MISC::SET_BIT(&(Local_88.f_25), 5);
					}
				}
			}
			if (BitTest(Local_88.f_27, 1))
			{
				if (!BitTest(Local_88.f_27, 8))
				{
					if (!func_428(Local_88.f_16))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_88.f_16), iVar1, true))
						{
							MISC::SET_BIT(&(Local_88.f_27), 8);
						}
					}
				}
				if (!BitTest(Local_88.f_27, 9))
				{
					if (BitTest(Local_163[iLocal_564 /*10*/].f_5, 3))
					{
						MISC::SET_BIT(&(Local_88.f_27), 9);
					}
				}
			}
			if (!BitTest(Local_88.f_25, 6))
			{
				if (BitTest(Local_163[iLocal_564 /*10*/], 1))
				{
					MISC::SET_BIT(&(Local_88.f_25), 6);
				}
			}
			if (!BitTest(Local_88.f_25, 16))
			{
				if (BitTest(Local_163[iLocal_564 /*10*/], 8))
				{
					MISC::SET_BIT(&(Local_88.f_25), 16);
				}
			}
			if (!BitTest(Local_88.f_26, 1))
			{
				if (BitTest(Local_163[iLocal_564 /*10*/], 27))
				{
					MISC::SET_BIT(&(Local_88.f_26), 1);
				}
			}
			if (!BitTest(Local_88.f_25, 7))
			{
				if (BitTest(Local_163[iLocal_564 /*10*/], 0))
				{
					MISC::SET_BIT(&(Local_88.f_25), 7);
				}
			}
			if (!BitTest(Local_88.f_25, 10))
			{
				if (BitTest(Local_163[iLocal_564 /*10*/], 4))
				{
					if (Local_88.f_3 != 5 && Local_88.f_3 != 6)
					{
						Local_88.f_3 = 5;
					}
					MISC::SET_BIT(&(Local_88.f_25), 10);
				}
			}
			if (!BitTest(Local_88.f_1, 2))
			{
				if (BitTest(Local_163[iLocal_564 /*10*/].f_1, 2))
				{
					MISC::SET_BIT(&(Local_88.f_1), 2);
					MISC::SET_BIT(&(Local_88.f_1), 4);
					iLocal_566 = iLocal_564;
				}
			}
			else if (!BitTest(Local_163[iLocal_566 /*10*/].f_1, 2))
			{
				MISC::CLEAR_BIT(&(Local_88.f_1), 2);
				if (BitTest(Local_88.f_1, 3))
				{
					MISC::CLEAR_BIT(&(Local_88.f_1), 3);
				}
			}
			if (!BitTest(Local_88.f_26, 8))
			{
				if (BitTest(Local_163[iLocal_564 /*10*/], 30))
				{
					MISC::SET_BIT(&(Local_88.f_26), 8);
				}
			}
			if (!BitTest(Local_88.f_1, 0))
			{
				if (BitTest(Local_163[iLocal_564 /*10*/].f_1, 0))
				{
					MISC::SET_BIT(&(Local_88.f_1), 0);
					MISC::SET_BIT(&(Local_88.f_1), 1);
					Local_88.f_28 = Local_163[iLocal_564 /*10*/].f_2;
					iLocal_565 = iLocal_564;
				}
			}
			else if (!BitTest(Local_163[iLocal_565 /*10*/].f_1, 0))
			{
				MISC::CLEAR_BIT(&(Local_88.f_1), 0);
			}
			if (!BitTest(Local_88.f_26, 13))
			{
				if (BitTest(Local_163[iLocal_564 /*10*/], 21))
				{
					MISC::SET_BIT(&(Local_88.f_26), 13);
				}
			}
		}
	}
	iLocal_564++;
	if (iLocal_564 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_564 = 0;
	}
}

int func_48(int iParam0, bool bParam1, bool bParam2)//Position - 0x29E6
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

void func_49(var uParam0)//Position - 0x2A46
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

void func_50()//Position - 0x2A7F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	MISC::SET_BIT(&(Local_88.f_25), 2);
	MISC::SET_BIT(&(Local_88.f_25), 3);
	MISC::CLEAR_BIT(&(Local_88.f_25), 13);
	MISC::CLEAR_BIT(&(Local_88.f_25), 27);
	MISC::CLEAR_BIT(&(Local_88.f_25), 28);
	MISC::CLEAR_BIT(&(Local_88.f_26), 4);
	if (!BitTest(Local_88.f_25, 18))
	{
		if (func_428(Local_88.f_0))
		{
			if (Local_88.f_39 <= 0f)
			{
				MISC::SET_BIT(&(Local_88.f_25), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (Local_163[iVar0 /*10*/].f_3 > 0)
			{
				Local_88.f_4 = (Local_88.f_4 + Local_163[iVar0 /*10*/].f_3);
				Local_163[iVar0 /*10*/].f_3 = 0;
			}
			if (BitTest(Local_88.f_25, 3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_590, 30f, 30f, 30f, false, true, 0))
				{
					MISC::CLEAR_BIT(&(Local_88.f_25), 3);
				}
			}
			if (!BitTest(Local_88.f_26, 16))
			{
				if (BitTest(Local_163[iVar0 /*10*/], 12))
				{
					MISC::SET_BIT(&(Local_88.f_26), 16);
				}
			}
			if (func_48(iVar5, 1, 1))
			{
				if (BitTest(Local_88.f_25, 2))
				{
					MISC::CLEAR_BIT(&(Local_88.f_25), 2);
				}
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar6) == iLocal_583)
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_584 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_585)
					{
						iVar2 = 1;
					}
					else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_586)
					{
						MISC::SET_BIT(&(Local_88.f_25), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					MISC::SET_BIT(&(Local_88.f_25), 13);
					iVar4++;
					if (!BitTest(Local_88.f_25, 9) && !BitTest(Local_88.f_25, 21))
					{
						if (!BitTest(Local_88.f_25, 4))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(iVar6, &iVar1, true))
							{
								if ((((iVar1 != joaat("WEAPON_UNARMED") && iVar1 != 0) && iVar1 != joaat("OBJECT")) && iVar1 != joaat("WEAPON_FLARE")) && iVar1 != joaat("WEAPON_SNOWBALL"))
								{
									if (Local_88.f_34 == -1)
									{
										Local_88.f_34 = iVar0;
									}
									else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_88.f_34)))
									{
										Local_88.f_34 = -1;
									}
									MISC::SET_BIT(&(Local_88.f_25), 4);
									if (!BitTest(Local_88.f_25, 12))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_543, 2.5f, 2.5f, 3f, false, true, 0))
										{
											MISC::SET_BIT(&(Local_88.f_25), 12);
										}
									}
								}
							}
						}
						if (!BitTest(Local_88.f_26, 0))
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar5) > 0)
							{
								MISC::SET_BIT(&(Local_88.f_26), 0);
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_590, 5f, 5f, 2.5f, false, true, 0))
				{
					MISC::SET_BIT(&(Local_88.f_25), 28);
					iVar4++;
				}
				if (!BitTest(Local_88.f_26, 4))
				{
					if (BitTest(Local_163[iVar0 /*10*/], 28))
					{
						MISC::SET_BIT(&(Local_88.f_26), 4);
					}
				}
				if ((BitTest(Local_88.f_25, 9) && !BitTest(Local_88.f_25, 20)) && !BitTest(Local_88.f_25, 19))
				{
					if (Local_163[iLocal_564 /*10*/].f_6 > Local_88.f_35)
					{
						Local_88.f_35 = Local_163[iVar0 /*10*/].f_6;
						func_15(&(Local_88.f_36));
						if (!BitTest(Local_88.f_25, 24))
						{
							if (Local_88.f_35 > (0.55f + 0.2f))
							{
								MISC::SET_BIT(&(Local_88.f_25), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_88.f_43 != iVar4)
	{
		Local_88.f_43 = iVar4;
	}
}

int func_51()//Position - 0x2DCC
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_0) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_14)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_15))
	{
		if ((func_53(iLocal_542) && func_53(func_54(1))) && func_53(func_54(2)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 2, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_0))
				{
					if (func_52(&Local_88, 4, iLocal_542, Local_543 - Vector(1f, 0f, 0f), Local_88.f_44, 1, 1, 1))
					{
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_88.f_0), 0, iLocal_772[0], iLocal_778[0], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_88.f_0), 2, iLocal_772[1], iLocal_778[1], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_88.f_0), 3, iLocal_772[2], iLocal_778[2], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_88.f_0), 4, iLocal_772[3], iLocal_778[3], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_88.f_0), 8, iLocal_772[4], iLocal_778[4], 0);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_PED(Local_88.f_0), INTERIOR::GET_INTERIOR_AT_COORDS(Local_543));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_88.f_0), true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_88.f_0), true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_88.f_0), true, 0f);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_88.f_0), 16);
						PED::SET_PED_CAN_EVASIVE_DIVE(NETWORK::NET_TO_PED(Local_88.f_0), false);
						PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_88.f_0), 1024, true);
						WEAPON::REMOVE_ALL_PED_WEAPONS(NETWORK::NET_TO_PED(Local_88.f_0), true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_88.f_0), SYSTEM::ROUND((200f * Global_262145.f_165 /* Tunable: AI_HEALTH */)), 0, 0);
						if (!DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_88.f_0), "XP_Blocker"))
						{
							DECORATOR::DECOR_SET_BOOL(NETWORK::NET_TO_PED(Local_88.f_0), "XP_Blocker", true);
						}
						func_427(&uLocal_607, 3, NETWORK::NET_TO_PED(Local_88.f_0), &(Local_88.f_48), 1, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_14))
				{
					iVar0 = OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_CRATE_UNFIXED_LOW_GLOW"), Local_567, false, func_54(1));
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						Local_88.f_14 = NETWORK::OBJ_TO_NET(iVar0);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_88.f_14), true);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_88.f_14), false, false);
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_88.f_14), fLocal_570);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_88.f_14), INTERIOR::GET_INTERIOR_AT_COORDS(Local_543));
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_88.f_14), true);
						OBJECT::SET_PICKUP_OBJECT_GLOW_OFFSET(NETWORK::NET_TO_OBJ(Local_88.f_14), -0.2f, true);
						OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_88.f_14), true, false);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_88.f_14), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_15))
				{
					if (func_28(&(Local_88.f_15), func_54(2), Local_571 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_88.f_15), fLocal_574);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_88.f_15), INTERIOR::GET_INTERIOR_AT_COORDS(Local_543));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_88.f_15), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x30A2
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*iParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*iParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)//Position - 0x3101
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_54(int iParam0)//Position - 0x311F
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_M_ShopKeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("MP_M_ShopKeep_01");
}

void func_55()//Position - 0x315D
{
	if (!BitTest(Local_484.f_52, 20))
	{
		if (BitTest(Local_88.f_25, 11) || BitTest(Local_88.f_26, 16))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_583 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_590, 5f, 5f, 2.5f, false, true, 0))
			{
				func_58();
				func_56();
				func_6(Local_484.f_50, 1, func_7());
				MISC::SET_BIT(&(Local_484.f_52), 20);
			}
			else
			{
				if ((BitTest(Local_484.f_52, 31) && (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_590, 20f, 20f, 20f, false, true, 0))
				{
					func_58();
				}
				MISC::SET_BIT(&(Local_484.f_52), 20);
			}
		}
	}
}

void func_56()//Position - 0x3238
{
	int iVar0;
	
	iVar0 = func_57(47);
	Global_2645381[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2645381[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_57(int iParam0)//Position - 0x3265
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645381[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645381[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_58()//Position - 0x32B2
{
	int iVar0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
	{
		iVar0 = func_133(1182, -1);
		if (!BitTest(iVar0, Local_484.f_50))
		{
			func_131(14, 1, -1);
			MISC::SET_BIT(&iVar0, Local_484.f_50);
			func_129(1182, iVar0, -1, 1);
			if (func_127(14, -1) >= 20)
			{
				func_113(44, 1);
			}
			else
			{
				func_112(44, func_127(14, -1));
			}
		}
		func_110(1168, 1, -1);
		func_109(12, 1, -1);
		func_107(19);
		iLocal_800 = 100;
		iLocal_800 = SYSTEM::ROUND((IntToFloat(iLocal_800) * Global_262145.f_4059 /* Tunable: XP_TUNABLE_HOLD_UPS */));
		func_59(2, "XPT_HOLDUP", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_HOLD_UP"), iLocal_800, 1, -1, 0);
	}
}

var func_59(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3378
{
	return func_60(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_60(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3394
{
	var uVar0;
	
	uVar0 = func_61(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_61(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x33B7
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_96();
	if (func_95(sParam2))
	{
	}
	if (func_94())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_92(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_91(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_88(0, &iVar1);
					break;
				
				case 3:
					func_88(1, &iVar1);
					break;
				
				case 1:
					func_79(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13604 /* Tunable: -9502162 */)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_110(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_70((func_78(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_2 != -1)
				{
					func_110(1166, iVar1, -1);
				}
				func_66(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_62((func_64(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_62((func_64(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_62(int iParam0)//Position - 0x3525
{
	if (func_94())
	{
		Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_5 = iParam0;
		func_63(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_63(int iParam0, int iParam1)//Position - 0x3550
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_64(int iParam0)//Position - 0x356C
{
	if (iParam0 > -1)
	{
		if (func_48(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_65(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1845263[iParam0 /*877*/].f_205.f_5;
			}
		}
		else
		{
			return func_65(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x35BD
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_66(int iParam0)//Position - 0x35DB
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_69(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_67(func_68(&Var0));
			if (iVar13 == 0)
			{
				func_63(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_65(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_63(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_65(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_63(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_65(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_63(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_65(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_63(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_65(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_67(int iParam0)//Position - 0x36A5
{
	if (iParam0 == func_65(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_65(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_65(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_65(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_65(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_68(var* uParam0)//Position - 0x371B
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2695893;
		}
	}
	return Global_2695893;
}

struct<13> func_69(int iParam0)//Position - 0x373E
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_70(int iParam0, int iParam1, int iParam2)//Position - 0x3755
{
	if (func_94())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10256 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_133(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_133(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10255 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_INITIALISE"), joaat("XPCATEGORY_LIVE_RP_RESET"));
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10255 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_77(PLAYER::PLAYER_ID()))
		{
			Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_1 = iParam0;
			Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_6 = func_74(iParam0, 1);
		}
		func_129(640, iParam0, -1, 1);
		func_129(641, func_74(iParam0, 1), -1, 1);
		func_71(-1109644434, 7, 0);
	}
}

void func_71(int iParam0, int iParam1, int iParam2)//Position - 0x3867
{
	int iVar0;
	
	if (func_73(iParam1, iParam2))
	{
		iVar0 = func_72();
		Global_2695845[iVar0] = iParam1;
		Global_2695856[iVar0] = iParam0;
	}
}

int func_72()//Position - 0x3894
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2695845[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_73(int iParam0, var uParam1)//Position - 0x38C9
{
	if (Global_1575067)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575079) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0, bool bParam1)//Position - 0x394F
{
	if (bParam1)
	{
	}
	return func_75(iParam0, 0);
}

int func_75(int iParam0, int iParam1)//Position - 0x3963
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_76(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_76(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_76(int iParam0)//Position - 0x3A1E
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return 663800;
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_77(int iParam0)//Position - 0x3F59
{
	if (!func_9(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672741.f_1, iParam0);
}

int func_78(int iParam0)//Position - 0x3F78
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_133(640, -1);
			}
			else if (func_77(iParam0))
			{
				return Global_1845263[iParam0 /*877*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_133(640, -1);
	}
	return 0;
}

void func_79(int iParam0)//Position - 0x3FCF
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_82(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_81(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_80(*iParam0, 100) * (10f * Global_262145.f_4051 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_80(*iParam0, 100) * (20f * Global_262145.f_4044 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_80(int iParam0, int iParam1)//Position - 0x40BE
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_81(int iParam0, int iParam1)//Position - 0x40DF
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2706987 = { func_69(iParam0) };
		Global_2707000 = { func_69(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2706987))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707000))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2706917, 35, &Global_2706987);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2706952, 35, &Global_2707000);
				if (Global_2706917 == Global_2706952)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x414C
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058104.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25548, bVar0))
			{
				bVar1 = Global_1058104.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_83(iParam0, bVar0, iParam1, bVar1) || !func_83(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_83(iParam0, bVar0, iParam1, bVar1) || !func_83(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_83(iParam0, bVar0, iParam1, bVar1) || !func_83(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_83(iParam0, bVar0, iParam1, bVar1) || !func_83(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_83(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x4497
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25549, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3318[iParam2 /*25763*/].f_25549, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_48(iVar1, 1, 1) || func_85(iVar1, 0)) || BitTest(Global_2657921[iVar1 /*463*/].f_199, 2)) || func_84(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("MP_F_Freemode_01") || iVar4 == joaat("MP_M_Freemode_01"))
				{
					if (iVar3 == joaat("MP_F_Freemode_01") || iVar3 == joaat("MP_M_Freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_84(int iParam0)//Position - 0x45C3
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_36.f_18, 14);
}

bool func_85(int iParam0, int iParam1)//Position - 0x45DB
{
	bool bVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_86(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845263[iParam0 /*877*/].f_205 == 8;
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

int func_86(int iParam0, bool bParam1)//Position - 0x4634
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_87();
	}
	if (Global_1575059[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574919[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_87()//Position - 0x4675
{
	return Global_1574925;
}

void func_88(bool bParam0, int iParam1)//Position - 0x4681
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_48(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_81(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_48(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_89(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_81(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_80(*iParam1, 100) * (10f * Global_262145.f_4051 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_80(*iParam1, 100) * (20f * Global_262145.f_4044 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_89(int iParam0, int iParam1)//Position - 0x4799
{
	return SYSTEM::VDIST(func_90(iParam0), func_90(iParam1));
	return 0f;
}

Vector3 func_90(int iParam0)//Position - 0x47B5
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_91(int iParam0)//Position - 0x47C8
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_80(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_92(int iParam0)//Position - 0x47FF
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_78(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_78(PLAYER::PLAYER_ID());
		}
	}
	if (func_93(8000, 0, 0) > 0)
	{
		if (func_93(8000, 0, 0) < (iParam0 + func_78(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_93(8000, 0, 0) - func_78(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_93(int iParam0, bool bParam1, int iParam2)//Position - 0x4863
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return func_76(iParam0);
}

int func_94()//Position - 0x4889
{
	return 1;
}

int func_95(char* sParam0)//Position - 0x4892
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

int func_96()//Position - 0x48CC
{
	int iVar0;
	
	if (func_106(PLAYER::PLAYER_ID()) || func_105(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10288 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10288 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_102() || func_98(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23493 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23493 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (func_97(Global_4718592.f_183007))
	{
		if (Global_262145.f_7168 /* Tunable: 1840127983 */ > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7168 /* Tunable: 1840127983 */;
		}
	}
	else if (Global_262145.f_7167 /* Tunable: JOB_RP_CAP */ > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7167 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

bool func_97(int iParam0)//Position - 0x499A
{
	return iParam0 == 89;
}

int func_98(int iParam0)//Position - 0x49A7
{
	return func_99(func_100(iParam0));
}

int func_99(int iParam0)//Position - 0x49B9
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x49D3
{
	if (func_9(iParam0))
	{
		if (func_101(iParam0, 0))
		{
			return Global_1886967[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_101(int iParam0, int iParam1)//Position - 0x49FF
{
	if (func_9(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1886967[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_102()//Position - 0x4A43
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_104();
	}
	return func_103(Global_4718592.f_126144);
}

int func_103(int iParam0)//Position - 0x4A67
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4868[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_104()//Position - 0x4AA1
{
	return Global_2684312.f_19;
}

bool func_105(int iParam0)//Position - 0x4AAF
{
	return Global_2657921[iParam0 /*463*/].f_121 == 2;
}

bool func_106(int iParam0)//Position - 0x4AC4
{
	return Global_2657921[iParam0 /*463*/].f_121 == 7;
}

void func_107(int iParam0)//Position - 0x4AD9
{
	int iVar0;
	
	if (Global_262145.f_9222 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_108() /*5569*/].f_681.f_4243[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574743.f_1[iVar0] == -1)
			{
				Global_1574743.f_1[iVar0] = iParam0;
				Global_1574743 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_108()//Position - 0x4B3C
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_109(int iParam0, bool bParam1, int iParam2)//Position - 0x4B49
{
	if (iParam2 == -1)
	{
		iParam2 = func_87();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_110(int iParam0, int iParam1, int iParam2)//Position - 0x4B67
{
	int iVar0;
	
	iVar0 = func_133(iParam0, func_111(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_129(iParam0, iVar0, iParam2, 1);
}

int func_111(var uParam0)//Position - 0x4B8F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_87();
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

int func_112(int iParam0, int iParam1)//Position - 0x4BC3
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

int func_113(int iParam0, int iParam1)//Position - 0x4C14
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_114(iParam0, iParam1);
}

int func_114(int iParam0, int iParam1)//Position - 0x4C2F
{
	if (func_126(14) && !func_125(iParam0))
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
	if (func_124(&Global_4543283))
	{
		if (func_122(&Global_4543283, iParam0))
		{
			return 0;
		}
		if (func_115(&Global_4543283, iParam0))
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

int func_115(var uParam0, int iParam1)//Position - 0x4CCC
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	func_118(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_116(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_116(var uParam0, int iParam1)//Position - 0x4D7D
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_117(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_117(var uParam0, int iParam1)//Position - 0x4DF8
{
	return (*uParam0)[iParam1] == 78;
}

void func_118(var uParam0)//Position - 0x4E09
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_119(uParam0, iVar0);
		iVar0++;
	}
	func_120(uParam0, (Global_4543282 - 0.5f));
}

void func_119(var uParam0, int iParam1)//Position - 0x4E3D
{
	(*uParam0)[iParam1] = 78;
}

void func_120(var uParam0, float fParam1)//Position - 0x4E4D
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

float func_121(var uParam0)//Position - 0x4E6A
{
	return uParam0->f_80;
}

bool func_122(var uParam0, int iParam1)//Position - 0x4E76
{
	return func_123(uParam0, iParam1) != -1;
}

int func_123(var uParam0, int iParam1)//Position - 0x4E88
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

bool func_124(var uParam0)//Position - 0x4EB5
{
	return uParam0->f_79 == 1;
}

int func_125(int iParam0)//Position - 0x4EC3
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

bool func_126(int iParam0)//Position - 0x4F13
{
	return Global_43922 == iParam0;
}

int func_127(int iParam0, int iParam1)//Position - 0x4F21
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_128(iParam0, iParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_128(int iParam0, var uParam1)//Position - 0x4F45
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_111(uParam1));
}

void func_129(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4F5B
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_130(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_130(int iParam0, var uParam1)//Position - 0x4F89
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_111(uParam1));
}

void func_131(int iParam0, int iParam1, int iParam2)//Position - 0x4F9E
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_111(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_132(iParam0, iVar0, iParam2);
}

void func_132(int iParam0, int iParam1, var uParam2)//Position - 0x4FC5
{
	int iVar0;
	
	iVar0 = func_128(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_133(int iParam0, int iParam1)//Position - 0x4FE1
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_130(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_134(var uParam0)//Position - 0x5010
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_135(var uParam0)//Position - 0x5039
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_21(uParam0, 0, 0);
		}
	}
}

void func_136()//Position - 0x5058
{
	bool bVar0;
	int iVar1;
	
	func_259();
	func_229();
	func_179();
	func_55();
	func_177();
	func_176();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_583)
		{
			if (Global_2738587.f_6003.f_1 == 0)
			{
				Global_2738587.f_6003.f_1 = 1;
			}
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_584 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_585)
			{
				bVar0 = true;
			}
			else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_586)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2738587.f_6003.f_1 == 1)
		{
			Global_2738587.f_6003.f_1 = 0;
		}
	}
	if (!BitTest(Local_484.f_52, 31))
	{
		if (func_100(PLAYER::PLAYER_ID()) != 154)
		{
			if ((bVar0 || iVar1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_590, (5f / 2f), (5f / 2f), (5f / 2f), false, true, 0))
			{
				if (!func_40(PLAYER::PLAYER_ID()))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					MISC::SET_BIT(&(Local_484.f_52), 31);
				}
			}
		}
	}
	if ((!BitTest(Local_484.f_52, 26) && bVar0) && !(func_175(0) || func_174()))
	{
		if (func_172("SNK_MNU", Local_484.f_0, 0))
		{
			MISC::SET_BIT(&(Local_484.f_52), 26);
		}
	}
	if (!bVar0 && BitTest(Local_484.f_52, 26))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || (CAM::DOES_CAM_EXIST(Local_484.f_1) && CAM::IS_CAM_ACTIVE(Local_484.f_1)))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (Local_484.f_51 > 0)
			{
				Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3 = Local_484.f_51;
				Local_484.f_51 = 0;
			}
			func_443();
			MISC::CLEAR_BIT(&(Local_484.f_53), 7);
			if (CAM::DOES_CAM_EXIST(Local_484.f_1))
			{
				CAM::DESTROY_CAM(Local_484.f_1, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		func_169(1, Local_484.f_0);
		MISC::CLEAR_BIT(&(Local_484.f_52), 26);
	}
	if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 21))
	{
		if (iVar1 || func_167(PLAYER::PLAYER_PED_ID(), Local_484.f_50))
		{
			MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_164();
		func_158();
		func_152();
		func_148(1);
		func_141();
		PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		if (BitTest(Global_2738587.f_7, 0))
		{
			PLAYER::SET_LAW_RESPONSE_DELAY_OVERRIDE(Local_88.f_73);
			func_139(Local_590, func_140(30), 0);
			MISC::CLEAR_BIT(&(Global_2738587.f_7), 0);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_590, 5f, 5f, 2.5f, false, true, 0))
		{
			func_148(0);
		}
		if (!BitTest(Global_2738587.f_7, 0))
		{
			PLAYER::RESET_LAW_RESPONSE_DELAY_OVERRIDE();
			func_137(Local_590, func_140(30), "");
			MISC::SET_BIT(&(Global_2738587.f_7), 0);
		}
	}
	if ((BitTest(Local_88.f_25, 22) || BitTest(Local_88.f_25, 23)) || BitTest(Local_88.f_25, 7))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
}

int func_137(struct<3> Param0, char* sParam3, char* sParam4)//Position - 0x537A
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_2738587.f_4070[iVar0 /*26*/].f_4), sParam3))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2738587.f_4070[iVar0 /*26*/].f_4)))
				{
					Global_2738587.f_4070[iVar0 /*26*/] = 1;
					Global_2738587.f_4070[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2738587.f_4070[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2738587.f_4070[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_138(Global_2738587.f_4070[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2738587.f_4070[iVar0 /*26*/] = 1;
				Global_2738587.f_4070[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2738587.f_4070[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2738587.f_4070[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_138(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x547B
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_139(struct<3> Param0, char* sParam3, int iParam4)//Position - 0x54C2
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2738587.f_4070[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_138(Global_2738587.f_4070[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2738587.f_4070[iVar0 /*26*/] = 0;
					Global_2738587.f_4070[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2738587.f_4070[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2738587.f_4070[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_140(int iParam0)//Position - 0x5564
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_141()//Position - 0x5577
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	MISC::CLEAR_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 28);
	if (!func_428(Local_88.f_0) && func_48(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
		{
			if ((((iVar0 != joaat("WEAPON_UNARMED") && iVar0 != joaat("OBJECT")) && iVar0 != joaat("WEAPON_FLARE")) && iVar0 != joaat("WEAPON_SNOWBALL")) && iVar0 != joaat("WEAPON_FLASHLIGHT"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_88.f_0), 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_88.f_0), 5f, 5f, 2f, false, true, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_88.f_0))) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_88.f_0)))
				{
					if (!(func_175(0) || func_174()) && ((!func_145(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()) == 154) || func_100(PLAYER::PLAYER_ID()) == 171))
					{
						if (func_143(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_88.f_0)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
						{
							if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
							{
								func_142(func_8(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
								MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 1);
							}
							if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 8))
							{
								MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 8);
							}
						}
						MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!BitTest(Local_484.f_52, 28))
	{
		if (BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 28))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true))
			{
				if (iVar1 != 0 && iVar1 != joaat("WEAPON_SNOWBALL"))
				{
					iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
					if (iVar2 == joaat("GROUP_PISTOL"))
					{
						sLocal_541 = "hold_up_head_additive_pistol";
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_541, 8f, -8f, -1, 305, 0f, false, false, false);
					}
					else if ((((iVar2 == joaat("GROUP_MG") || iVar2 == joaat("GROUP_RIFLE")) || iVar2 == joaat("GROUP_SHOTGUN")) || iVar2 == joaat("GROUP_SNIPER")) || iVar2 == joaat("GROUP_SMG"))
					{
						sLocal_541 = "hold_up_head_additive_rifle";
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_541, 8f, -8f, -1, 305, 0f, false, false, false);
					}
					else
					{
						sLocal_541 = "";
					}
					MISC::SET_BIT(&(Local_484.f_52), 28);
				}
			}
		}
	}
	else if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 28) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_541))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_541, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_541, -8f);
			}
		}
		MISC::CLEAR_BIT(&(Local_484.f_52), 28);
	}
	if (BitTest(Local_88.f_27, 1))
	{
		if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 3))
		{
			if (!func_428(Local_88.f_16) && func_48(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true))
				{
					if ((((iVar3 != joaat("WEAPON_UNARMED") && iVar3 != joaat("OBJECT")) && iVar3 != joaat("WEAPON_FLARE")) && iVar3 != joaat("WEAPON_SNOWBALL")) && !(func_175(0) || func_174()))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_88.f_16)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_88.f_16)))
						{
							if (func_143(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_88.f_16)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
							{
								MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_142(int iParam0)//Position - 0x593F
{
	struct<2> Var0;
	
	Var0.f_0 = -2095300399;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 3, iParam0, Var0.f_0);
	}
}

int func_143(int iParam0, int iParam1)//Position - 0x596D
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (func_48(iParam0, 1, 1))
	{
		Var0 = { func_90(iParam0) };
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	Var9 = { Var3 - Var0 };
	if (!PED::IS_PED_INJURED(iParam1))
	{
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 7f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = func_144(Var9, Var12);
	if (fVar15 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_144(struct<3> Param0, struct<3> Param3)//Position - 0x59F8
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_145(int iParam0)//Position - 0x5A19
{
	if (func_42(iParam0))
	{
		return 1;
	}
	if (func_146(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)//Position - 0x5A3C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_147(iParam0, 9);
	}
	return 0;
}

var func_147(int iParam0, int iParam1)//Position - 0x5A5A
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

void func_148(int iParam0)//Position - 0x5A72
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (PLAYER::PLAYER_ID() != Global_2738587.f_5156 && !func_40(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Local_484.f_52, 6))
		{
			if (iParam0 == 1)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true))
				{
					if ((((iVar2 != joaat("WEAPON_UNARMED") && iVar2 != 0) && iVar2 != joaat("OBJECT")) && iVar2 != joaat("WEAPON_FLARE")) && iVar2 != joaat("WEAPON_SNOWBALL"))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_543, 2.5f, 2.5f, 3f, false, true, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) || (iVar0 == 1 && Local_88.f_3 >= 3)) || (iVar0 == 1 && BitTest(Local_88.f_26, 16))) || BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12))
				{
					if (((!BitTest(Local_88.f_25, 12) || Local_88.f_3 >= 3) || BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12)) || (iVar0 == 1 && BitTest(Local_88.f_26, 16)))
					{
						Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_36++;
						func_15(&(Global_2672741.f_3547));
						func_21(&(Global_2672741.f_3547), 0, 0);
						if (Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_36 <= 2)
						{
							if (func_151())
							{
								if (func_150() < 2)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_150()));
								}
								else
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
								}
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
							}
						}
						else if (Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_36 >= 5)
						{
							if (func_151())
							{
								if (func_150() < 3)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_150()));
								}
								else
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
								}
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
							}
						}
						else if (func_151())
						{
							if (func_150() < 3)
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_150()));
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
							}
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
						if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
						{
							MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
						}
						MISC::SET_BIT(&(Local_484.f_52), 6);
						MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
					}
				}
			}
			if (!BitTest(Local_484.f_52, 27) && !BitTest(Local_484.f_52, 6))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					if (func_20(&uLocal_581, 2000, 0) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
						MISC::SET_BIT(&(Local_484.f_52), 27);
						MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 27);
						MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
						{
							MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
						}
					}
				}
				else if (func_149(&uLocal_581))
				{
					func_15(&uLocal_581);
				}
			}
		}
		if (!BitTest(Local_484.f_52, 24))
		{
			if (BitTest(Local_484.f_52, 31))
			{
				if (func_428(Local_88.f_0))
				{
					if (func_151())
					{
						if (func_150() < 3)
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_150()));
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					MISC::SET_BIT(&(Local_484.f_52), 24);
					if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
					{
						MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_149(var uParam0)//Position - 0x5E35
{
	return uParam0->f_1;
}

int func_150()//Position - 0x5E41
{
	return Global_262145.f_13272 /* Tunable: GB_SMASHANDGRAB_WANTED_CAP */;
}

int func_151()//Position - 0x5E50
{
	if (func_146(PLAYER::PLAYER_ID()) && func_100(PLAYER::PLAYER_ID()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_152()//Position - 0x5E78
{
	int iVar0;
	int iVar1;
	
	if (func_48(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!BitTest(Local_484.f_52, 23) && BitTest(Local_88.f_25, 17))
		{
			if (!func_428(Local_88.f_0))
			{
				iLocal_550 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_31);
				if (iLocal_550 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550))
					{
						if ((!BitTest(Global_1919049, 15) && func_157()) && func_156())
						{
							MISC::SET_BIT(&Global_1919049, 15);
						}
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							iVar0 = func_133(1191, -1);
							if (!BitTest(iVar0, 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_550) < 0.4f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_583)
								{
									func_155("FHU_HELP3" /* GXT: Shout through your headset to make the store clerk fill the bag with cash faster. */, -1);
									MISC::SET_BIT(&iVar0, 3);
									func_129(1191, iVar0, -1, 1);
								}
							}
							else if (!BitTest(iVar0, 5) || !BitTest(iVar0, 6))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_550) < 0.7f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_583)
								{
									func_155("FHU_HELP4" /* GXT: ~s~Wait for the store clerk to empty the register to get the full amount of cash. */, -1);
									MISC::SET_BIT(&iVar0, 5);
									func_129(1191, iVar0, -1, 1);
									MISC::SET_BIT(&(Local_484.f_52), 23);
								}
							}
							else
							{
								MISC::SET_BIT(&(Local_484.f_52), 23);
							}
						}
					}
				}
			}
		}
		if (((((((((!func_41(PLAYER::PLAYER_ID(), 146) && !func_154()) && func_100(PLAYER::PLAYER_ID()) != 167) && func_100(PLAYER::PLAYER_ID()) != 190) && func_100(PLAYER::PLAYER_ID()) != 191) && func_100(PLAYER::PLAYER_ID()) != 250) && func_100(PLAYER::PLAYER_ID()) != 237) && func_100(PLAYER::PLAYER_ID()) != 238) && !func_40(PLAYER::PLAYER_ID())) && (!func_145(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()) == 154))
		{
			if (!BitTest(Local_484.f_53, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (((((func_428(Local_88.f_0) || Local_88.f_3 > 7) && !BitTest(Local_88.f_25, 20)) && !BitTest(Local_88.f_25, 11)) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_551, 1.5f) == 0)
					{
						iVar1 = func_133(1191, -1);
						if (!BitTest(iVar1, 20) || !BitTest(iVar1, 21))
						{
							func_155("FHU_HELPM" /* GXT: The store clerk is no longer able to empty the register. Go up to the register the store clerk was using and empty it manually with ~INPUT_CONTEXT~ */, -1);
							if (!BitTest(iVar1, 20))
							{
								MISC::SET_BIT(&iVar1, 20);
							}
							else
							{
								MISC::SET_BIT(&iVar1, 21);
							}
							func_129(1191, iVar1, -1, 1);
							MISC::SET_BIT(&(Local_484.f_53), 1);
						}
						else
						{
							MISC::SET_BIT(&(Local_484.f_53), 1);
						}
					}
				}
			}
			else if (func_153("FHU_HELPM" /* GXT: The store clerk is no longer able to empty the register. Go up to the register the store clerk was using and empty it manually with ~INPUT_CONTEXT~ */))
			{
				if ((BitTest(Local_88.f_25, 20) || BitTest(Local_88.f_25, 11)) || BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
	}
}

bool func_153(char* sParam0)//Position - 0x615F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_154()//Position - 0x6172
{
	return Global_1835494;
}

void func_155(char* sParam0, int iParam1)//Position - 0x617E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

var func_156()//Position - 0x6195
{
	return BitTest(Global_2738587.f_1832, 21);
}

var func_157()//Position - 0x61A7
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_143, 3);
}

void func_158()//Position - 0x61BE
{
	float fVar0;
	float fVar1;
	
	if (Local_88.f_3 == 4)
	{
		if (func_48(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!func_428(Local_88.f_0))
			{
				iLocal_550 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_31);
				if (iLocal_550 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_550);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_159(SYSTEM::ROUND(fVar0), 890, "HUP_PROG" /* GXT: INTIMIDATION */, func_163(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())), 0, 1, 13);
						}
						fVar1 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_159(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6270
{
	func_160(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
}

void func_160(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39)//Position - 0x62B8
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_162(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1669875.f_1 = 1;
		func_161(0, iVar0);
		Global_1669875.f_1177[iVar0] = uParam0;
		Global_1669875.f_1177.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1669875.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1669875.f_1177.f_194[iVar0] = uParam3;
		Global_1669875.f_1177.f_183[iVar0] = uParam4;
		Global_1669875.f_1177.f_227[iVar0] = uParam5;
		Global_1669875.f_1177.f_238[iVar0 /*3*/] = fParam6;
		Global_1669875.f_1177.f_238[iVar0 /*3*/].f_1 = fParam7;
		Global_1669875.f_1177.f_269[iVar0] = iParam8;
		Global_1669875.f_1177.f_280[iVar0] = uParam9;
		Global_1669875.f_1177.f_323[iVar0] = iParam10;
		Global_1669875.f_1177.f_334[iVar0] = iParam11;
		Global_1669875.f_1177.f_345[iVar0] = iParam12;
		Global_1669875.f_1177.f_356[iVar0] = iParam13;
		Global_1669875.f_1172 = 1;
		Global_1669875.f_1177.f_367[iVar0] = iParam14;
		Global_1669875.f_1177.f_378[iVar0] = iParam15;
		Global_1669875.f_1177.f_389[iVar0] = iParam16;
		Global_1669875.f_1177.f_400[iVar0] = iParam17;
		Global_1669875.f_1177.f_411[iVar0] = iParam18;
		Global_1669875.f_1177.f_422[iVar0] = iParam19;
		Global_1669875.f_1177.f_433[iVar0] = iParam20;
		Global_1669875.f_1177.f_444[iVar0] = iParam21;
		Global_1669875.f_1177.f_455[iVar0] = iParam22;
		Global_1669875.f_1177.f_466[iVar0] = iParam23;
		Global_1669875.f_1177.f_477[iVar0] = iParam24;
		Global_1669875.f_1177.f_205[iVar0] = iParam25;
		Global_1669875.f_1177.f_216[iVar0] = iParam39;
		Global_1669875.f_1177.f_488[iVar0] = iParam26;
		Global_1669875.f_1177.f_499[iVar0] = iParam27;
		Global_1669875.f_1177.f_510[iVar0] = iParam28;
		Global_1669875.f_1177.f_521[iVar0] = iParam29;
		Global_1669875.f_1177.f_532[iVar0] = iParam30;
		Global_1669875.f_1177.f_543[iVar0] = iParam31;
		Global_1669875.f_1177.f_554[iVar0] = iParam32;
		Global_1669875.f_1177.f_565[iVar0] = iParam33;
		Global_1669875.f_1177.f_576[iVar0] = iParam34;
		Global_1669875.f_1177.f_587[iVar0] = iParam35;
		Global_1669875.f_1177.f_598[iVar0] = iParam36;
		Global_1669875.f_1177.f_609[iVar0] = iParam37;
		Global_1669875.f_1177.f_620[iVar0] = iParam38;
	}
}

void func_161(int iParam0, int iParam1)//Position - 0x657F
{
	MISC::SET_BIT(&(Global_1669875.f_7064[iParam0]), iParam1);
}

int func_162(int iParam0, int iParam1)//Position - 0x6598
{
	return BitTest(Global_1669875.f_7064[iParam0], iParam1);
}

int func_163(int iParam0)//Position - 0x65AE
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_164()//Position - 0x65BE
{
	if (!BitTest(Local_484.f_53, 2))
	{
		STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
		STREAMING::REQUEST_ANIM_DICT(func_165());
		if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till") && STREAMING::HAS_ANIM_DICT_LOADED(func_165()))
		{
			MISC::SET_BIT(&(Local_484.f_53), 2);
		}
	}
}

char* func_165()//Position - 0x6603
{
	if (func_166(PLAYER::PLAYER_ID()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_166(int iParam0)//Position - 0x6621
{
	if (!func_9(iParam0))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2657921[iParam0 /*463*/].f_240;
}

int func_167(int iParam0, int iParam1)//Position - 0x6651
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar6 = 0f;
	func_168(iParam1, &Var0, &Var3, &fVar6);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Var0, Var3, fVar6, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_168(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x6691
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.0328f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.4117f, 3607.156f, 36.382877f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.59314f, 6.908931f };
		*uParam2 = { -3037.2837f, 585.03754f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.1239f, 11.830711f };
		*uParam2 = { -3240.5044f, 999.77826f, 14.466454f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.4644f, 41.156513f };
		*uParam2 = { 548.9114f, 2673.1077f, 43.776596f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.3164f, 380.8569f, 107.622986f };
		*uParam2 = { 2558.9802f, 380.69083f, 110.26842f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.8074f, 54.24115f };
		*uParam2 = { 2679.5774f, 3278.5256f, 56.895496f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.1453f, 6417.8345f, 34.037243f };
		*uParam2 = { 1727.0696f, 6413.635f, 36.664417f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.6097f, 3742.5125f, 31.343761f };
		*uParam2 = { 1960.9578f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.510925f, -1344.449f, 28.497032f };
		*uParam2 = { 24.52224f, -1349.0839f, 31.142721f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.29602f, 329.23785f, 102.566414f };
		*uParam2 = { 372.13467f, 324.69855f, 105.21404f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.1833f, 2711.2026f, 37.063164f };
		*uParam2 = { 1163.1436f, 2711.2463f, 40.166878f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.1418f, 388.64178f, 14.043308f };
		*uParam2 = { -2965.8118f, 393.64728f, 17.172482f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.5989f, -909.89844f, 11.326351f };
		*uParam2 = { -1219.443f, -907.07556f, 14.459287f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.5243f, -980.30865f, 45.415825f };
		*uParam2 = { 1134.2202f, -985.284f, 48.532352f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.4132f, -379.32364f, 39.16341f };
		*uParam2 = { -1487.9541f, -375.76657f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.4468f, 4921.5703f, 41.063656f };
		*uParam2 = { 1695.6401f, 4924.2446f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.70264f, -916.37396f, 21.335445f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.269947f, -1756.6688f, 28.421005f };
		*uParam2 = { -48.260365f, -1760.2849f, 31.563421f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.6973f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.08994f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.2046f, 795.8699f, 137.08931f };
		*uParam2 = { -1818.0406f, 792.3982f, 140.18362f };
		*fParam3 = 2.25f;
	}
}

void func_169(bool bParam0, int iParam1)//Position - 0x6AEE
{
	int iVar0;
	
	if (!func_171(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23711.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23711.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23711.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23711.f_6231[iVar0] = 0;
	}
	if (Global_23711.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23711.f_6217[iVar0] = 0;
	}
	if (Global_23711.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23711.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_170(&(Global_23711.f_6263[iVar0 /*10*/]));
		Global_23711.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23711.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_170(int* iParam0)//Position - 0x6BB4
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_171(var uParam0, bool bParam1, int iParam2)//Position - 0x6BE0
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23711.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23711.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23711.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

bool func_172(char* sParam0, int iParam1, bool bParam2)//Position - 0x6C7D
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_171(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23711.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23711.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23711.f_6238[iVar0 /*4*/]), 9);
		Global_23711.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23711.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		bVar1 = false;
	}
	Global_23711.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23711.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23711.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_173(&(Global_23711.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_173(var uParam0)//Position - 0x6D8B
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

int func_174()//Position - 0x6E2D
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0)//Position - 0x6E4A
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

void func_176()//Position - 0x6EA1
{
	if (PLAYER::PLAYER_ID() != Global_2738587.f_5156 && !func_40(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Local_484.f_52, 24))
		{
			if (Local_88.f_74 == PLAYER::PLAYER_ID() || (BitTest(Local_484.f_52, 31) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_593, 20f, 20f, 20f, false, true, 0)))
			{
				if (func_428(Local_88.f_0))
				{
					if (func_151())
					{
						if (func_150() < 3)
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_150()));
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					MISC::SET_BIT(&(Local_484.f_52), 24);
					if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
					{
						MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_177()//Position - 0x6F84
{
	if (!BitTest(Local_88.f_27, 0))
	{
		return 0;
	}
	if (func_428(Local_88.f_16))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_799))
		{
			HUD::REMOVE_BLIP(&iLocal_799);
		}
		return 0;
	}
	if (Local_88.f_68 == 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_799))
		{
			iLocal_799 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_88.f_16));
			HUD::SET_BLIP_COLOUR(iLocal_799, 1);
			HUD::SET_BLIP_SCALE(iLocal_799, 0.7f);
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_88.f_16))
	{
		return 0;
	}
	switch (Local_88.f_68)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_16), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_16), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
				{
					if (func_48(PLAYER::PLAYER_ID(), 1, 1))
					{
						TASK::TASK_GO_TO_ENTITY(NETWORK::NET_TO_PED(Local_88.f_16), PLAYER::PLAYER_PED_ID(), -1, 4f, 2f, 2f, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!BitTest(Local_88.f_27, 5) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_16), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_16), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_88.f_16), PLAYER::PLAYER_PED_ID(), 10000);
					MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 0);
				}
			}
			if ((!BitTest(Local_88.f_27, 6) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 1)) && !func_178())
			{
				func_427(&uLocal_607, 4, NETWORK::NET_TO_PED(Local_88.f_16), "StoreHero", 1, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(NETWORK::NET_TO_PED(Local_88.f_16), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!BitTest(Local_88.f_27, 7) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 2)) && !func_178())
			{
				func_427(&uLocal_607, 4, NETWORK::NET_TO_PED(Local_88.f_16), "StoreHero", 1, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(NETWORK::NET_TO_PED(Local_88.f_16), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 2);
			}
			if (BitTest(Local_88.f_27, 7) || BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 2))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_16), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_16), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_88.f_16));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_88.f_16), Global_1837297);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_88.f_16), 20f, 0);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_88.f_16), true);
				}
			}
			break;
		
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_16), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_16), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
			{
				TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_88.f_16));
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_88.f_16), iLocal_559);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_88.f_16), true);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_16), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_16), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 0)
			{
				if (func_20(&uLocal_579, 5000, 0))
				{
					func_15(&uLocal_579);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_88.f_16), PLAYER::PLAYER_PED_ID(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_178()//Position - 0x72ED
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_179()//Position - 0x730F
{
	if (Local_88.f_3 == 4)
	{
		if ((!BitTest(Local_88.f_25, 10) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 4)) && BitTest(Local_88.f_25, 17))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_14))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_88.f_14) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_88.f_14) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (!func_428(Local_88.f_0))
					{
						if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_88.f_0)))
						{
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_88.f_14), true, false);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_88.f_14), true);
							ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_88.f_14), 0f, 0f, -1f);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_88.f_0), 16);
							MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 4);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_88.f_14), true, false);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_88.f_14), true);
						ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_88.f_14), 0f, 0f, -1f);
						MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_180();
}

void func_180()//Position - 0x740C
{
	int iVar0;
	var uVar1;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_88.f_14), false))
		{
			if ((!BitTest(Local_88.f_25, 11) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) && Local_88.f_39 > 0f)
			{
				if (((func_228() || func_227(0.87f)) || Local_88.f_3 >= 5) || BitTest(Local_88.f_25, 10))
				{
					if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 11))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_88.f_14))
						{
							OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_88.f_14), false, false);
							MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 13);
						}
						if (func_100(PLAYER::PLAYER_ID()) != 155)
						{
							OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_54(1), 1);
						}
						MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 11);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_88.f_14), PLAYER::PLAYER_PED_ID()))
					{
						Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7, &(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7.f_2), false, false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_88.f_14))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_88.f_14), true, true);
							func_49(&(Local_88.f_14));
						}
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iLocal_576, iLocal_577);
						if (BitTest(Local_88.f_25, 10))
						{
							iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Local_88.f_39));
						}
						if (Local_88.f_4 > 1000)
						{
							Local_88.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_88.f_4);
						iVar0 = func_226(iVar0, 1);
						if (iVar0 > Global_262145.f_177 /* Tunable: HOLD_UP_CASH_REWARD_CAP */)
						{
							iVar0 = Global_262145.f_177 /* Tunable: HOLD_UP_CASH_REWARD_CAP */;
						}
						if (func_225(PLAYER::PLAYER_ID()) && func_223(func_224(PLAYER::PLAYER_ID())) < 1f)
						{
							if (Global_262145.f_4060 /* Tunable: HOLD_UP_FM_EVENT_MULT */ > 1f)
							{
								Global_262145.f_4060 = 1f;
							}
							iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4060 /* Tunable: HOLD_UP_FM_EVENT_MULT */));
						}
						if (iVar0 > 0)
						{
							if (func_222())
							{
								func_211(joaat("SERVICE_EARN_HOLDUPS"), iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_207(iVar0, 1, 1, 1092616192);
								MONEY::NETWORK_EARN_FROM_HOLDUPS(iVar0);
							}
						}
						Global_2738587.f_6003 = (Global_2738587.f_6003 + iVar0);
						Global_2738587.f_6003.f_2 = 1;
						Global_2738587.f_6003.f_5 = 1;
						iLocal_801 = (iLocal_801 + iVar0);
						func_206(3);
						if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5))
						{
							func_205(Local_88.f_40, iVar0);
						}
						else
						{
							func_196(PLAYER::PLAYER_PED_ID(), iVar0);
						}
						func_194(1, iVar0);
						if (func_190(1))
						{
							func_181(4);
						}
						MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 5);
						MISC::SET_BIT(&(Local_484.f_53), 6);
					}
				}
			}
		}
	}
}

void func_181(int iParam0)//Position - 0x76A3
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18371 /* Tunable: BIKER_MC_POINTS_PASS_OUT_DRUNK */;
			break;
		
		case 1:
			iVar0 = Global_262145.f_18361 /* Tunable: BIKER_MC_POINTS_WIN_MINIGAME */;
			break;
		
		case 2:
			iVar0 = Global_262145.f_18372 /* Tunable: BIKER_MC_POINTS_RIDE_IN_FORMATION */;
			break;
		
		case 3:
			iVar0 = Global_262145.f_18364 /* Tunable: BIKER_MC_POINTS_DESTROY_PRODUCT */;
			break;
		
		case 4:
			iVar0 = Global_262145.f_18360 /* Tunable: BIKER_MC_POINTS_ROB_SHOP */;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_18375 /* Tunable: BIKER_MC_POINTS_DESTROY_MEMBERS_PV */;
			break;
		
		case 8:
			iVar0 = Global_262145.f_18376 /* Tunable: BIKER_MC_POINTS_NOT_IN_MC */;
			break;
		
		case 9:
			iVar0 = Global_262145.f_18379 /* Tunable: BIKER_MC_POINTS_KILLED_BY_RIVAL_MC */;
			break;
		
		case 22:
			iVar0 = Global_262145.f_18380 /* Tunable: BIKER_MC_POINTS_DRIVE_CAR */;
			break;
		
		case 23:
			iVar0 = Global_262145.f_18373 /* Tunable: BIKER_MC_POINTS_RIDE_BIKE_IN_MC */;
			break;
		
		case 25:
			iVar0 = Global_262145.f_19265 /* Tunable: BIKER_MC_POINTS_STEAL_MC_BIKER */;
			break;
		
		case 26:
			iVar0 = Global_262145.f_19264 /* Tunable: BIKER_MC_POINTS_STEAL_PRESIDENT_BIKE */;
			break;
	}
	if (iVar0 != 0)
	{
		STATS::PLAYSTATS_EARNED_MC_POINTS(func_188(func_189()), func_186(func_189()), func_185(), func_184(), iParam0, iVar0);
	}
	func_183(iVar0);
	func_182(iVar0);
}

void func_182(int iParam0)//Position - 0x77C8
{
	int iVar0;
	
	iVar0 = func_133(3971, -1);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_469 = iVar0;
	func_129(3971, iVar0, -1, 1);
}

void func_183(int iParam0)//Position - 0x7814
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1886967[iVar0 /*609*/].f_10.f_468 = (Global_1886967[iVar0 /*609*/].f_10.f_468 + iParam0);
	if (Global_1886967[iVar0 /*609*/].f_10.f_468 < -9999)
	{
		Global_1886967[iVar0 /*609*/].f_10.f_468 = 9999;
	}
	else if (Global_1886967[iVar0 /*609*/].f_10.f_468 > 9999)
	{
		Global_1886967[iVar0 /*609*/].f_10.f_468 = 9999;
	}
}

int func_184()//Position - 0x788E
{
	if (Global_1940376.f_3 != 0)
	{
		return Global_1940376.f_3;
	}
	return -1;
}

int func_185()//Position - 0x78AA
{
	if (Global_1940376.f_2 != 0)
	{
		return Global_1940376.f_2;
	}
	return -1;
}

int func_186(int iParam0)//Position - 0x78C6
{
	if (iParam0 == func_187())
	{
		return -1;
	}
	return Global_1886967[iParam0 /*609*/].f_10.f_8[1];
}

int func_187()//Position - 0x78EB
{
	return -1;
}

int func_188(int iParam0)//Position - 0x78F4
{
	if (iParam0 == func_187())
	{
		return -1;
	}
	return Global_1886967[iParam0 /*609*/].f_10.f_8[0];
}

int func_189()//Position - 0x7919
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10;
}

bool func_190(bool bParam0)//Position - 0x792E
{
	return func_191(PLAYER::PLAYER_ID(), bParam0);
}

int func_191(int iParam0, bool bParam1)//Position - 0x7940
{
	return func_192(iParam0, bParam1, 1);
}

int func_192(int iParam0, bool bParam1, int iParam2)//Position - 0x7951
{
	int iVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_193(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1886967[iParam0 /*609*/].f_10;
	if (iVar0 != func_187() && Global_1886967[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_193(int iParam0, int iParam1)//Position - 0x79AE
{
	if (func_9(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_187())
		{
			if (Global_1886967[iParam0 /*609*/].f_10 == iParam0 && Global_1886967[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_194(int iParam0, int iParam1)//Position - 0x79FD
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_24208 /* Tunable: SETTINGFORCASHSHARE */ != -1)
		{
			if (func_195())
			{
				Global_2738587.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7116 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */)
				{
					iParam1 = Global_262145.f_7116 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */;
				}
				Global_2738587.f_284 = iParam1;
				Global_2738587.f_285 = 0;
			}
		}
	}
}

int func_195()//Position - 0x7A52
{
	if (MISC::IS_PC_VERSION() && Global_1977964 == 0)
	{
		return 0;
	}
	return 0;
}

void func_196(int iParam0, int iParam1)//Position - 0x7A71
{
	struct<3> Var0;
	
	Var0 = { func_203(PLAYER::PLAYER_PED_ID(), 1) };
	if (iParam0 == func_202(PLAYER::PLAYER_PED_ID()))
	{
		func_201(1);
	}
	func_197(Var0, iParam1, 7, 0, 0);
}

void func_197(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x7AA5
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672741.f_1085[iVar0 /*30*/].f_6 == 0 || Global_2672741.f_1085[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672741.f_1085[iVar1 /*30*/] = { Param0 };
			Global_2672741.f_1085[iVar1 /*30*/].f_6 = 1;
			Global_2672741.f_1085[iVar1 /*30*/].f_4 = func_200(Global_2672741.f_1085[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672741.f_1085[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672741.f_1085[iVar1 /*30*/].f_3 = iParam3;
			Global_2672741.f_1085[iVar1 /*30*/].f_8 = iParam4;
			Global_2672741.f_1085[iVar1 /*30*/].f_9 = func_199();
			Global_2672741.f_1085[iVar1 /*30*/].f_10 = func_198();
			StringCopy(&(Global_2672741.f_1085[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672741.f_1085[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_198()//Position - 0x7BBC
{
	if (Global_2672741.f_1686)
	{
		Global_2672741.f_1686 = 0;
		return 1;
	}
	Global_2672741.f_1686 = 0;
	return 0;
}

var func_199()//Position - 0x7BE6
{
	var uVar0;
	
	uVar0 = Global_2672741.f_1688;
	Global_2672741.f_1688 = 1;
	return uVar0;
}

float func_200(struct<3> Param0, var uParam3, var uParam4)//Position - 0x7C01
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

void func_201(int iParam0)//Position - 0x7C9A
{
	Global_2672741.f_1686 = iParam0;
}

int func_202(int iParam0)//Position - 0x7CAB
{
	return iParam0;
}

Vector3 func_203(int iParam0, bool bParam1)//Position - 0x7CB5
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_204(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_204(int iParam0)//Position - 0x7D79
{
	return iParam0;
}

void func_205(struct<3> Param0, int iParam3)//Position - 0x7D83
{
	func_197(Param0, iParam3, 6, 0, 0);
}

void func_206(int iParam0)//Position - 0x7D98
{
	Global_2672741.f_1688 = iParam0;
}

void func_207(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x7DA9
{
	func_208(iParam0, iParam1, iParam2, fParam3);
}

void func_208(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x7DBD
{
	func_209(iParam0, iParam1, iParam2, fParam3);
}

void func_209(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x7DD1
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_4 = iVar1;
	Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_3 = (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_210(iVar1, 0);
	}
}

void func_210(int iParam0, bool bParam1)//Position - 0x7E54
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_211(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x7E65
{
	int iVar0;
	
	if (!func_222())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_RENAME_ACID_PRODUCT"):
		case joaat("SERVICE_SPEND_RENAME_ACID_LAB"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
		case joaat("SERVICE_SPEND_SALVAGE_YARD_VEH_ROB_SETUP"):
			if (iParam1 > 0 || Global_262145.f_28652 /* Tunable: ALLOW_ZERO_SPEND_SERVICE_TELEM */)
			{
				func_212(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_212(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_SALVAGE_YARD_CLAIM_VEH"):
			if (iParam1 > 0 || Global_262145.f_28652 /* Tunable: ALLOW_ZERO_SPEND_SERVICE_TELEM */)
			{
				func_212(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case joaat("SERVICE_EARN_TAXI_JOB"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
		case joaat("SERVICE_EARN_SMUGGLER_OPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
		case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
		case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
		case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_PREP"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_FINALE"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_CHICKEN_FACTORY_RAID"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_SALVAGE_YARD"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_SALVAGE_VEHICLE"):
		case joaat("SERVICE_EARN_WEEKLY_OBJECTIVE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TOW_TRUCK_WORK"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_SELL_VEH"):
			func_212(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_212(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x88DF
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_222())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_87()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537357 = 1;
			return 0;
		}
		if (Global_2697412)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4537358 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535851[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_219(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535851[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535851[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537338 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537356 = 1;
			Global_4537359 = iParam4;
			Global_4537361 = iParam3;
			Global_4537362 = 1;
			Global_4537360 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537359 = iParam4;
			Global_4537361 = iParam3;
			Global_4537362 = 1;
			Global_4537360 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_218(1, iParam4);
			Global_4537356 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_213(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_213(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8A8C
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_214(iParam0);
	}
}

void func_214(int iParam0)//Position - 0x8AC4
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_222())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_217(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535851[iParam0 /*85*/].f_66);
		}
		func_215(&(Global_4535851[iParam0 /*85*/]));
	}
}

void func_215(var uParam0)//Position - 0x8B18
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_66.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_216(&(uParam0->f_14));
	func_216(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_216(var uParam0)//Position - 0x8C28
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

int func_217(int iParam0)//Position - 0x8C70
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535851[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_218(int iParam0, int iParam1)//Position - 0x8C9B
{
	Global_2698632 = iParam1;
	Global_2698631 = iParam0;
}

int func_219(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)//Position - 0x8CAF
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535851[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_222())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535851[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535851[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535851[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535851[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535851[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535851[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535851[iVar0 /*85*/].f_66 = iParam0;
			Global_4535851[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535851[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535851[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535851[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535851[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535851[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535851[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537338 = 0;
			if (bParam6)
			{
				Global_4535851[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && bParam10)
			{
				func_220(Global_4535851[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_220(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x8DEC
{
	struct<4> Var0;
	int iVar37;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam85;
	iVar37 = func_8(Var0.f_1);
	if ((Global_262145.f_24288 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24289 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24290 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_221();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_221()//Position - 0x8E80
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_222()//Position - 0x8E90
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

float func_223(int iParam0)//Position - 0x8EA7
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_224(int iParam0)//Position - 0x8F5F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1886967[iVar0 /*609*/];
	}
	return -1;
}

int func_225(int iParam0)//Position - 0x8F7E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1886967[iVar0 /*609*/] != -1;
	}
	return 0;
}

int func_226(int iParam0, int iParam1)//Position - 0x8F9F
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_227(float fParam0)//Position - 0x8FE0
{
	iLocal_550 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_31);
	if (iLocal_550 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_550) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_228()//Position - 0x9016
{
	iLocal_550 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_31);
	if (iLocal_550 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_550) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_229()//Position - 0x904B
{
	func_230();
}

int func_230()//Position - 0x9058
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_88.f_0))
	{
		return 0;
	}
	if (func_428(Local_88.f_0))
	{
		if (!BitTest(Local_484.f_53, 3))
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_88.f_0));
			MISC::SET_BIT(&(Local_484.f_53), 3);
		}
		return 0;
	}
	switch (Local_88.f_3)
	{
		case 0:
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_88.f_0), 71, true);
			break;
		
		case 1:
			if (!BitTest(Local_88.f_25, 4) && !BitTest(Local_88.f_25, 12))
			{
				if (BitTest(Local_88.f_25, 13))
				{
					if (!BitTest(Local_484.f_52, 17))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_88.f_0), 16);
						TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_88.f_0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							func_236(10);
						}
						else if (BitTest(Local_88.f_26, 0))
						{
							if (!BitTest(Local_88.f_26, 11))
							{
								if (!BitTest(Local_88.f_26, 12))
								{
									func_236(13);
								}
								else
								{
									func_236(20);
								}
							}
							else
							{
								func_236(17);
							}
							MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						}
						else if (!BitTest(Local_88.f_26, 11))
						{
							if (!BitTest(Local_88.f_26, 12))
							{
								func_236(0);
							}
							else
							{
								func_236(18);
							}
						}
						else
						{
							func_236(15);
						}
						MISC::SET_BIT(&(Local_484.f_52), 17);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 0)
					{
						if (func_20(&uLocal_579, 5000, 0))
						{
							func_15(&uLocal_579);
							if (!iLocal_540)
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_88.f_0), PLAYER::PLAYER_PED_ID(), 10000);
							}
							TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_88.f_0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
				}
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_88.f_0), 71, true);
			break;
		
		case 2:
			if (!BitTest(Local_88.f_25, 7) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 0))
			{
				iVar1 = PLAYER::PLAYER_PED_ID();
				if (Local_88.f_34 > -1)
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_88.f_34)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_88.f_34));
						iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_88.f_0), iVar1, -1, 0, 2);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_88.f_0), 16);
					TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_88.f_0), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0f, false, false, false);
					MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 0);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 0)
			{
				if (func_20(&uLocal_579, 5000, 0))
				{
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_88.f_34 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_88.f_34)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_88.f_34));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					func_15(&uLocal_579);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_88.f_0), iVar1, 10000);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_88.f_0), iVar1, -1, 0, 2);
				}
			}
			if (BitTest(Local_88.f_25, 16))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_88.f_0), 16);
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_88.f_0), 71, true);
			break;
		
		case 3:
			if (!BitTest(Local_484.f_52, 25))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 1)
				{
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_88.f_0), true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_88.f_0), 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_88.f_0), 8, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_88.f_0), 16, true);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_88.f_0), 16);
					TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_88.f_0), Local_88.f_44, -1);
					MISC::SET_BIT(&(Local_484.f_52), 25);
				}
			}
			break;
		
		case 4:
			if (!BitTest(Local_88.f_25, 17) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 3))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Global_2738587.f_8 = 1;
				}
				iVar2 = PLAYER::PLAYER_PED_ID();
				if (Global_2738587.f_9 != func_187())
				{
					if (func_48(Global_2738587.f_9, 1, 1))
					{
						iVar2 = PLAYER::GET_PLAYER_PED(Global_2738587.f_9);
					}
				}
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_88.f_0), iVar2, 30000, 0, 3);
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_88.f_0), "mood_stressed_1", 0);
				MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 3);
			}
			else
			{
				iLocal_550 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_31);
				if (iLocal_550 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550))
					{
						fLocal_784 = (Local_88.f_35 + 0.6f);
						if (fLocal_784 < 0.75f)
						{
							fLocal_784 = 0.75f;
						}
						if (BitTest(Local_88.f_26, 4))
						{
							fLocal_784 = (fLocal_784 + 0.25f);
						}
						if (fLocal_784 > 1.75f)
						{
							fLocal_784 = 1.75f;
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_550, fLocal_784);
					}
				}
			}
			break;
		
		case 5:
			if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 10))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
				{
					if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_88.f_0)))
					{
						iLocal_550 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_31);
						if ((iLocal_550 != -1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550)) || iLocal_550 == -1)
						{
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_88.f_0), iLocal_559);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_88.f_0), 16);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_88.f_0), true);
							MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 10);
						}
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 0)
			{
				if (func_20(&uLocal_579, 5000, 0))
				{
					func_15(&uLocal_579);
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_88.f_34 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_88.f_34)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_88.f_34));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_88.f_0), iVar1, 10000);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_88.f_0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 10))
			{
				if ((iLocal_550 == -1 || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550)) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_550) >= 0.95f)
				{
					func_235();
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_88.f_34 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_88.f_34)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_88.f_34));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					TASK::TASK_HANDS_UP(NETWORK::NET_TO_PED(Local_88.f_0), -1, iVar1, -1, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_PED(Local_88.f_0), false, false);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_88.f_0), 16);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_88.f_0), true);
					MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1)
			{
				if (!func_178())
				{
					func_234();
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_88.f_0));
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_88.f_0), 20f, 0);
					func_236(4);
				}
			}
			break;
		
		case 8:
			if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
			{
				func_235();
				iLocal_550 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_31);
				if ((iLocal_550 != -1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550)) || iLocal_550 == -1)
				{
					if ((!BitTest(Local_88.f_25, 27) && !func_39()) && !func_38())
					{
						if (BitTest(Local_88.f_26, 2))
						{
							if (!BitTest(Local_88.f_26, 3))
							{
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_88.f_0), iLocal_561);
								iVar3 = 1;
							}
							else
							{
								func_234();
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_88.f_0), iLocal_562);
								iVar3 = 1;
							}
						}
					}
					else
					{
						TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_88.f_0), Local_546, 250f, -1, true, false);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_236(25);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_88.f_0), true);
						func_6(Local_484.f_50, 1, func_7());
						MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 9);
					}
				}
			}
			else if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 19))
			{
				iVar4 = TASK::GET_NAVMESH_ROUTE_RESULT(NETWORK::NET_TO_PED(Local_88.f_0));
				if (iVar4 == 3)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_88.f_0));
					MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_88.f_0));
					if (!BitTest(Local_88.f_26, 3))
					{
						TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_88.f_0), iLocal_563);
					}
					else
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_88.f_0), 20f, 0);
					}
					MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 19);
				}
			}
			break;
	}
	func_231();
	return 1;
}

void func_231()//Position - 0x98E4
{
	if ((Local_88.f_3 != 8 && Local_88.f_3 != 7) && Local_88.f_2 == 3)
	{
		if ((((!BitTest(Local_88.f_25, 14) || !BitTest(Local_88.f_25, 15)) || !BitTest(Local_88.f_25, 22)) || !BitTest(Local_88.f_25, 23)) || !BitTest(Local_88.f_25, 30))
		{
			iLocal_550 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_31);
			if (iLocal_550 != -1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550))
				{
					if (!func_178())
					{
						if (!BitTest(Local_88.f_25, 14) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 6))
						{
							func_236(2);
							MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 6);
						}
						if (!BitTest(Local_88.f_25, 15) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 7))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_550) > 0.87f)
							{
								func_236(3);
								MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 7);
							}
						}
						if (!BitTest(Local_88.f_25, 22) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 22))
						{
							if (BitTest(Local_88.f_25, 24) && !func_178())
							{
								func_236(11);
								MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 22);
							}
						}
						if (!BitTest(Local_88.f_25, 23) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 23))
						{
							if (BitTest(Local_88.f_25, 25) && !func_178())
							{
								func_236(12);
								MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!BitTest(Local_88.f_25, 9))
		{
			if (!BitTest(Local_88.f_25, 26) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 24))
			{
				if (BitTest(Local_88.f_25, 7))
				{
					if (!func_178())
					{
						if (!BitTest(Local_88.f_26, 11))
						{
							if (!BitTest(Local_88.f_26, 12))
							{
								func_236(1);
							}
							else
							{
								func_236(19);
							}
						}
						else
						{
							func_236(16);
						}
						MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 24);
						return;
					}
					else
					{
						func_232();
						return;
					}
				}
			}
			if (((!BitTest(Local_88.f_25, 30) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 25)) && !BitTest(Local_88.f_25, 7)) && !BitTest(Local_88.f_25, 4))
			{
				if (BitTest(Local_88.f_26, 0) && !func_178())
				{
					if ((BitTest(Local_88.f_25, 7) && BitTest(Local_88.f_25, 4)) || (!BitTest(Local_88.f_25, 7) && !BitTest(Local_88.f_25, 4)))
					{
						if (!BitTest(Local_88.f_26, 11))
						{
							if (!BitTest(Local_88.f_26, 12))
							{
								func_236(13);
							}
							else
							{
								func_236(20);
							}
						}
						else
						{
							func_236(17);
						}
						MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						return;
					}
				}
			}
			if (!BitTest(Local_88.f_25, 31) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 26))
			{
				if (BitTest(Local_88.f_26, 1) && !func_178())
				{
					func_236(14);
					MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 26);
					return;
				}
			}
			if (!BitTest(Local_88.f_26, 9) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 31))
			{
				if (BitTest(Local_88.f_26, 8) && !func_178())
				{
					func_236(22);
					MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 31);
					return;
				}
			}
			if (!BitTest(Local_88.f_1, 3) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 3))
			{
				if (BitTest(Local_88.f_1, 2) && !func_178())
				{
					func_236(24);
					MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 3);
					return;
				}
			}
			if (!BitTest(Local_88.f_26, 14) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 20))
			{
				if (BitTest(Local_88.f_26, 13) && !func_178())
				{
					func_236(23);
					MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!BitTest(Local_88.f_26, 6) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 29))
	{
		if (BitTest(Local_88.f_26, 5))
		{
			if (!func_178())
			{
				func_236(21);
				MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_232()//Position - 0x9CF6
{
	Global_21032 = 0;
	func_233();
}

void func_233()//Position - 0x9D06
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
	}
}

void func_234()//Position - 0x9D27
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iVar0 < 3)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_88.f_0), joaat("WEAPON_PISTOL"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_88.f_0), MISC::GET_RANDOM_INT_IN_RANGE(10, 35));
	}
	else if (iVar0 < 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_88.f_0), joaat("WEAPON_COMBATPISTOL"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_88.f_0), MISC::GET_RANDOM_INT_IN_RANGE(15, 40));
	}
	else if (iVar0 == 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_88.f_0), joaat("WEAPON_MICROSMG"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_88.f_0), MISC::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	else if (iVar0 == 7)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_88.f_0), joaat("WEAPON_COMBATMG"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_88.f_0), MISC::GET_RANDOM_INT_IN_RANGE(5, 15));
	}
	else if (iVar0 == 8)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_88.f_0), joaat("WEAPON_BAT"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_88.f_0), MISC::GET_RANDOM_INT_IN_RANGE(20, 40));
	}
	else if (iVar0 == 9)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_88.f_0), joaat("WEAPON_ASSAULTRIFLE"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_88.f_0), MISC::GET_RANDOM_INT_IN_RANGE(5, 30));
	}
	else if (iVar0 == 10)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_88.f_0), joaat("WEAPON_SAWNOFFSHOTGUN"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_88.f_0), MISC::GET_RANDOM_INT_IN_RANGE(5, 20));
	}
	else
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_88.f_0), joaat("WEAPON_PUMPSHOTGUN"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_88.f_0), MISC::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	func_6(Local_484.f_50, 1, func_7());
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_88.f_0), Global_1837297);
	PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_88.f_0), true);
	PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_88.f_0), 1);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_88.f_0), Local_543, 20f, false, false);
	PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_88.f_0), true);
}

void func_235()//Position - 0x9EED
{
	iLocal_550 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_88.f_31);
	if (iLocal_550 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_550))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_88.f_31);
		}
	}
}

void func_236(int iParam0)//Position - 0x9F19
{
	struct<2> Var0;
	int iVar4;
	
	if (BitTest(Local_88.f_25, 13))
	{
		if (!func_428(Local_88.f_0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_88.f_0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_88.f_0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_88.f_0)))
				{
					if (Local_88.f_47 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_88.f_47 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_88.f_33, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "RB_SH241"))
					{
						if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, true))
						{
							if ((((((iVar4 == joaat("WEAPON_UNARMED") || iVar4 == 0) || iVar4 == joaat("OBJECT")) || iVar4 == joaat("WEAPON_FLARE")) || iVar4 == joaat("WEAPON_SNOWBALL")) || func_258(iVar4)) || func_257(iVar4, 0))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_427(&uLocal_607, 3, NETWORK::NET_TO_PED(Local_88.f_0), &(Local_88.f_48), 1, 0);
					switch (iParam0)
					{
						case 0:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_GREET", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 1:
							func_237(&uLocal_607, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_237(&uLocal_607, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_237(&uLocal_607, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_BRAVE", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 10:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_REMOVE_VEHICLE", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 11:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_REACT_TO_SHOUT", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 12:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_HURRYING", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 13:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_NO_COPS", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 14:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_THREATENED", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 15:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_GREET_START", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 16:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_SCARED_START", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 17:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_NO_COPS_START", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 18:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_GREET_END", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 19:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_SCARED_END", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 20:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_NO_COPS_END", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 21:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_COPS_ARRIVED", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 22:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_SELL", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 23:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_NO_ENTRY" /* GXT: Friendly */, &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 24:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SHOP_STEAL", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 25:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_88.f_0), "SCREAM_PANIC", &(Local_88.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						}
					}
				}
			}
	}
}

int func_237(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA2C8
{
	func_256(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 1;
	return func_238(sParam2, iParam3, 0);
}

int func_238(char* sParam0, int iParam1, bool bParam2)//Position - 0xA316
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
					func_255();
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
		if (func_254(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_253();
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
				func_246();
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
				if (func_245())
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
			if (func_244())
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
			func_243();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_242();
		func_239();
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
		func_255();
	}
	return 0;
}

void func_239()//Position - 0xA5E4
{
	if (!func_240())
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

int func_240()//Position - 0xA61B
{
	if (!Global_262145.f_29155 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_187())
	{
		return 0;
	}
	if (func_241(PLAYER::PLAYER_ID()))
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

bool func_241(int iParam0)//Position - 0xA67E
{
	return func_147(iParam0, 20);
}

void func_242()//Position - 0xA68E
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

void func_243()//Position - 0xA6C0
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

int func_244()//Position - 0xA755
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_245()//Position - 0xA77C
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

void func_246()//Position - 0xA815
{
	if (func_126(14))
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
		Global_20813 = func_247();
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

var func_247()//Position - 0xA8B7
{
	func_248();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_248()//Position - 0xA8D0
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_251(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_250(PLAYER::PLAYER_PED_ID());
			if (func_249(iVar0) && (!func_126(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_249(Global_114370.f_2366.f_539.f_4321))
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

bool func_249(int iParam0)//Position - 0xA9CD
{
	return iParam0 < 3;
}

int func_250(int iParam0)//Position - 0xA9D9
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_251(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_251(int iParam0)//Position - 0xAA16
{
	if (func_249(iParam0))
	{
		return func_252(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_252(int iParam0)//Position - 0xAA3B
{
	return Global_2139[iParam0 /*29*/];
}

void func_253()//Position - 0xAA4A
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

bool func_254(int iParam0, int iParam1)//Position - 0xAAA2
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

void func_255()//Position - 0xAADA
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

void func_256(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xAB31
{
	Global_21620 = { *uParam0 };
	Global_7999 = iParam1;
	StringCopy(&Global_22236, sParam2, 24);
	Global_23155 = uParam5;
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

int func_257(int iParam0, int iParam1)//Position - 0xAB87
{
	switch (iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_PROXMINE"):
			return 1;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 1;
			break;
	}
	if (iParam1 && iParam0 == joaat("WEAPON_SNOWBALL"))
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0)//Position - 0xABDF
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return 1;
		
		default:
	}
	return 0;
}

void func_259()//Position - 0xAC53
{
	int iVar0;
	
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0);
	if (Local_88.f_45 != iVar0)
	{
		if (Local_88.f_45 < iVar0 || func_266(Local_88.f_45, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_88.f_45);
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0);
	if (Local_88.f_46 != iVar0)
	{
		if (Local_88.f_46 < iVar0 || func_260(Local_88.f_46, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_88.f_46);
		}
	}
}

int func_260(int iParam0, bool bParam1, bool bParam2)//Position - 0xACC1
{
	return func_261(2, iParam0, 1, bParam1, bParam2);
}

int func_261(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xACD5
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681028, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_265(iParam0) - func_264(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_264(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_265(iParam0) - func_263(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_264(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_265(iParam0) - func_264(iParam0, 1));
		}
		if (!bParam4 && Global_1845263[PLAYER::PLAYER_ID() /*877*/] != 3)
		{
			iVar1 = (iVar1 - func_262(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_262(int iParam0)//Position - 0xAD9B
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_263(int iParam0)//Position - 0xADD5
{
	switch (iParam0)
	{
		case 0:
			return Global_1681028.f_1;
			break;
		
		case 1:
			return Global_1681028.f_2;
			break;
		
		case 2:
			return Global_1681028.f_3;
			break;
	}
	return 0;
}

int func_264(int iParam0, bool bParam1)//Position - 0xAE1B
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657921[iVar0 /*463*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657921[iVar0 /*463*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657921[iVar0 /*463*/].f_221;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_265(int iParam0)//Position - 0xAEB8
{
	switch (iParam0)
	{
		case 0:
			return Global_1681036;
			break;
		
		case 1:
			return Global_1681037;
			break;
		
		case 2:
			return Global_1681038;
			break;
	}
	return 0;
}

int func_266(int iParam0, bool bParam1, bool bParam2)//Position - 0xAEF8
{
	return func_261(0, iParam0, 1, bParam1, bParam2);
}

void func_267()//Position - 0xAF0C
{
	float fVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	switch (iLocal_802)
	{
		case 0:
			if (!BitTest(Local_484.f_53, 0))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_15))
				{
					if (func_273(Local_808))
					{
						Local_808 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_88.f_15), 0f, -0.5f, 0f) };
						MISC::SET_BIT(&(Local_484.f_53), 0);
					}
				}
			}
			if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_808, 0.5f, 0.5f, 1f, false, true, 0) && (func_428(Local_88.f_0) || Local_88.f_3 > 7)) && !BitTest(Local_88.f_25, 20)) && !BitTest(Local_88.f_25, 11)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_551, 1.5f) == 0)
			{
				if (((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_175(0)) && !func_272()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_41(PLAYER::PLAYER_ID(), 146)) && !func_40(PLAYER::PLAYER_ID())) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_15)) && (!func_145(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()) == 154))
				{
					func_155("FHU_MANR" /* GXT: Press ~INPUT_CONTEXT~ to take cash. */, -1);
					Global_2738587.f_6003.f_4 = 1;
					iLocal_802 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!BitTest(Local_88.f_26, 16) && !BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12)) && !BitTest(Local_88.f_25, 20)) && !BitTest(Local_88.f_25, 11)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_808, 0.5f, 0.5f, 1f, false, true, 0)) && (!func_145(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()) == 154))
			{
				if (((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/) && !func_271(0)) && !func_272()) && !HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_153("FHU_MANR" /* GXT: Press ~INPUT_CONTEXT~ to take cash. */))
					{
						HUD::CLEAR_HELP(true);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 640);
					MISC::SET_BIT(&(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 12);
					iLocal_802 = 2;
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
					if (iLocal_807 == 0)
					{
						func_268(&iLocal_807, 4, "FHU_MANR" /* GXT: Press ~INPUT_CONTEXT~ to take cash. */, 0, 0, 0, 0);
					}
				}
			}
			else if (func_153("FHU_MANR" /* GXT: Press ~INPUT_CONTEXT~ to take cash. */))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Local_808.f_2 = (Var3.f_2 - 1f);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_808, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D((Local_571.f_0 - Local_808.f_0), (Local_571.f_1 - Local_808.f_1)));
				TASK::CLEAR_SEQUENCE_TASK(&iVar6);
				TASK::OPEN_SEQUENCE_TASK(&iVar6);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar6);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar6);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, true);
				bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_806, true);
				if (bVar2)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				if (!CAM::DOES_CAM_EXIST(iLocal_803))
				{
					iLocal_803 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_803, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_803, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, true);
				CAM::SET_CAM_FOV(iLocal_803, 35f);
				CAM::SHAKE_CAM(iLocal_803, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_803, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			iLocal_802 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_804))
				{
					iLocal_804 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_804, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_804, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, true);
				CAM::SET_CAM_FOV(iLocal_804, 35f);
				CAM::SHAKE_CAM(iLocal_804, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_804, iLocal_803, 6000, 1, 1);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, true);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			iLocal_802 = 4;
			break;
		
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_804))
			{
				iLocal_802 = 5;
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_805)
						{
							iVar7 = SYSTEM::ROUND(((IntToFloat(iLocal_576) * 0.75f) / 4f));
							iVar8 = SYSTEM::ROUND(((IntToFloat(iLocal_577) * 0.75f) / 4f));
							iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(iVar7, iVar8 + 1);
							iVar1 = func_226(iVar1, 1);
							if (iVar1 > (Global_262145.f_177 /* Tunable: HOLD_UP_CASH_REWARD_CAP */ / 4))
							{
								iVar1 = (Global_262145.f_177 /* Tunable: HOLD_UP_CASH_REWARD_CAP */ / 4);
							}
							if (func_225(PLAYER::PLAYER_ID()) && func_223(func_224(PLAYER::PLAYER_ID())) < 1f)
							{
								if (Global_262145.f_4060 /* Tunable: HOLD_UP_FM_EVENT_MULT */ > 1f)
								{
									Global_262145.f_4060 = 1f;
								}
								iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_4060 /* Tunable: HOLD_UP_FM_EVENT_MULT */));
							}
							if (iVar1 > 0)
							{
								if (func_222())
								{
									func_211(joaat("SERVICE_EARN_HOLDUPS"), iVar1, &uVar9, 0, 0, 0);
								}
								else
								{
									func_207(iVar1, 1, 1, 1092616192);
									MONEY::NETWORK_EARN_FROM_HOLDUPS(iVar1);
								}
							}
							Global_2738587.f_6003 = (Global_2738587.f_6003 + iVar1);
							iLocal_801 = (iLocal_801 + iVar1);
							func_194(1, iLocal_801);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
							iLocal_805 = 1;
						}
					}
					else if (iLocal_805)
					{
						iLocal_805 = 0;
					}
				}
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, true);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			break;
		
		case 5:
			if (iLocal_806 != joaat("WEAPON_UNARMED") && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_806, true);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (CAM::DOES_CAM_EXIST(iLocal_803))
			{
				CAM::DESTROY_CAM(iLocal_803, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_804))
			{
				CAM::DESTROY_CAM(iLocal_804, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			Global_2738587.f_6003.f_2 = 1;
			Global_2738587.f_6003.f_5 = 1;
			if (func_190(1))
			{
				func_181(4);
			}
			iLocal_802 = 7;
			break;
		
		case 6:
			CAM::SET_CAM_ACTIVE(iLocal_804, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			iLocal_802 = 5;
			break;
	}
}

void func_268(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xB66F
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_269(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/] = 1;
			Global_44676[iVar0 /*32*/].f_1 = Global_44877;
			Global_44877++;
			Global_44676[iVar0 /*32*/].f_4 = 0;
			Global_44676[iVar0 /*32*/].f_29 = 0;
			Global_44676[iVar0 /*32*/].f_5 = 0;
			Global_44676[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44676[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44676[iVar0 /*32*/].f_6 = iParam3;
			Global_44676[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44676[iVar0 /*32*/].f_7 = 0;
			Global_44676[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44676[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44676[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44676[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44676[iVar0 /*32*/].f_12 = 0;
				Global_44676[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44676[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_269(var uParam0)//Position - 0xB79A
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_270(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_270(int iParam0)//Position - 0xB7F1
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
		if (Global_44676[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_271(int iParam0)//Position - 0xB82C
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
			{
				if (Global_20812 == 1)
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
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_20812 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_20813.f_1 > 3)
	{
		if (Global_20812 == 1)
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

bool func_272()//Position - 0xB8AD
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

int func_273(struct<3> Param0)//Position - 0xB8C2
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_274(var uParam0, var uParam1, var uParam2, var uParam3, struct<3> Param4, var uParam7, int* iParam8, bool bParam9, bool bParam10)//Position - 0xB8EC
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	bool bVar8;
	int iVar9;
	char* sVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	
	if (((uParam7->f_4 >= 1000 || (uParam7->f_4 + uParam0->f_51) >= 1000) || func_425(&(uParam7->f_5))) || (func_149(&(Global_2738587.f_10)) && !func_424(Global_2738587.f_10, 300000, 0)))
	{
		if (func_149(&(Global_2738587.f_10)))
		{
			if ((MISC::GET_GAME_TIMER() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_34)
		{
			uParam0->f_34 = 1;
			if (!func_149(&(Global_2738587.f_10)))
			{
				func_21(&(Global_2738587.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_149(&(Global_2738587.f_10)))
		{
			func_15(&(Global_2738587.f_10));
		}
		if (uParam0->f_34)
		{
			uParam0->f_34 = 0;
		}
	}
	if ((MISC::GET_GAME_TIMER() % 5000) < 50)
	{
	}
	if ((((((uParam7->f_3 < 2 && func_48(PLAYER::PLAYER_ID(), 1, 1)) && BitTest(uParam0->f_52, 26)) && !func_423(-1082130432)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1) && !bParam9) && !func_428(*uParam7))
	{
		bVar8 = false;
		iVar9 = 0;
		if ((HUD::IS_PAUSE_MENU_ACTIVE() && uParam0->f_54 != 0) && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			if (!bParam10)
			{
				uParam0->f_54 = 0;
				func_422(uParam0, &(iParam8->f_3));
			}
		}
		switch (uParam0->f_54)
		{
			case 0:
				if ((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && (!func_145(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()) == 154)) && !func_421(PLAYER::PLAYER_ID(), 21))
				{
					if (func_420(*uParam0, &uParam1, Param4.f_2, &(uParam0->f_16[0 /*3*/]), &(uParam0->f_16[1 /*3*/]), &(uParam0->f_23), &(uParam0->f_26)))
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(*uParam7), true) };
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, uParam0->f_23, true) < 5f && MISC::ABSF((Var2.f_2 - Var5.f_2)) < 0.25f) || func_479(1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_26, false, true, 0) || func_479(1))
							{
								if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uParam0->f_23, 135f) || func_479(1))
								{
									if (uParam0->f_34)
									{
										if (func_479(1))
										{
											func_442();
										}
										if (((!func_153("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */) && !func_153("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */)) && !func_419()) && func_418())
										{
											func_155("SHR_SOLD_OUT" /* GXT: Store is currently sold out. */, -1);
											uParam0->f_54 = 10;
										}
									}
									else
									{
										if (func_479(1))
										{
										}
										uParam0->f_14 = -1;
										func_268(&(uParam0->f_14), 4, "SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */, 0, 0, 0, 0);
										uParam0->f_54 = 2;
									}
								}
								else if ((MISC::GET_GAME_TIMER() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((MISC::GET_GAME_TIMER() % 8000) < 50)
								{
								}
								GRAPHICS::DRAW_DEBUG_LINE(Var2, uParam0->f_16[0 /*3*/], 0, 0, 255, 255);
								GRAPHICS::DRAW_DEBUG_LINE(Var2, uParam0->f_16[1 /*3*/], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((MISC::GET_GAME_TIMER() % 8000) < 50)
							{
							}
							GRAPHICS::DRAW_DEBUG_LINE(Var2, uParam0->f_23, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_153("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
					{
						HUD::CLEAR_HELP(true);
					}
					if (func_42(PLAYER::PLAYER_ID()))
					{
						if (!BitTest(uParam0->f_53, 4))
						{
							func_155("SHR_FM_CRIT" /* GXT: Convenience stores are not available while a key player in a Freemode Event. */, -1);
							HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
							MISC::SET_BIT(&(uParam0->f_53), 4);
						}
					}
					if ((MISC::GET_GAME_TIMER() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(*uParam7), true) };
				if ((!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uParam0->f_23, 135f) || MISC::ABSF((Var2.f_2 - Var5.f_2)) >= 0.25f) && !func_479(1))
				{
					if (func_153("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
					{
						HUD::CLEAR_HELP(true);
					}
					func_269(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_153("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
					{
						HUD::CLEAR_HELP(true);
					}
					func_269(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (func_175(0) || func_174())
				{
					if (func_153("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
					{
						HUD::CLEAR_HELP(true);
					}
					func_269(&(uParam0->f_14));
					func_169(1, *uParam0);
					MISC::CLEAR_BIT(&(uParam0->f_52), 26);
					uParam0->f_54 = 0;
				}
				if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					if (func_417(uParam0->f_14, 1) || func_479(1))
					{
						if (func_479(1))
						{
							func_442();
						}
						if (func_153("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
						{
							HUD::CLEAR_HELP(true);
						}
						func_415(&(uParam0->f_44));
						func_269(&(uParam0->f_14));
						func_409(0, 0);
						MISC::SET_BIT(&(uParam0->f_53), 7);
						func_466(PLAYER::PLAYER_ID(), 0, 66048, 0);
						HUD::THEFEED_FLUSH_QUEUE();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_428(*uParam7))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(*uParam7), 0);
							MISC::CLEAR_BIT(&(iParam8->f_1), 1);
						}
						func_408();
						uParam0->f_54 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam10)
				{
					if (!CAM::DOES_CAM_EXIST(uParam0->f_1))
					{
						uParam0->f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
						func_407(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &fVar11);
						CAM::SET_CAM_COORD(uParam0->f_1, uParam0->f_2);
						CAM::SET_CAM_ROT(uParam0->f_1, uParam0->f_5, 2);
						CAM::SET_CAM_FOV(uParam0->f_1, fVar11);
						CAM::SHAKE_CAM(uParam0->f_1, "HAND_SHAKE", 0.1f);
						CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
					uParam0->f_37 = func_430(*uParam0);
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				uParam0->f_13 = func_406();
				func_405(0, 0);
				func_404(1, 1, 0, 0, 0);
				func_403(1, 2, 1, 1, 1);
				func_402("SNK_ITEM");
				if (!bParam10)
				{
					func_400(1, uParam0->f_37, uParam0->f_37);
				}
				iVar12 = 0;
				while (iVar12 < uParam0->f_13)
				{
					bVar8 = func_399(iVar12);
					func_394(iVar12, func_398(iVar12), 0, !bVar8, 0, 0, 0);
					if (uParam7->f_5[iVar12] >= 10 || ((func_149(&(Global_2738587.f_12[iVar12 /*2*/])) && !func_424(Global_2738587.f_12[iVar12 /*2*/], 150000, 0)) && *uParam0 == Global_2738587.f_27))
					{
						func_394(iVar12, "", 1, 1, 0, 0, 0);
						func_393(15, 0);
						if (func_149(&(Global_2738587.f_12[iVar12 /*2*/])) && !func_424(Global_2738587.f_12[iVar12 /*2*/], 150000, 0))
						{
							uParam7->f_5[iVar12] = 10;
						}
						if (!func_149(&(Global_2738587.f_12[iVar12 /*2*/])))
						{
							Global_2738587.f_27 = *uParam0;
							func_21(&(Global_2738587.f_12[iVar12 /*2*/]), 0, 0);
						}
					}
					else if (bVar8)
					{
						func_394(iVar12, "SNK_FULL", 0, !bVar8, 0, 0, 0);
					}
					else if (!bParam10)
					{
						func_394(iVar12, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
						func_389(func_392(uParam0, iVar12), 0);
					}
					else
					{
						func_394(iVar12, "SNK_FREE", 0, 1, 0, 0, 0);
					}
					iVar12++;
				}
				func_388(0);
				func_387(uParam0->f_12, 1, 1);
				if (uParam0->f_35)
				{
					if (!bParam10)
					{
						func_386("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_386("SNK_STORED", 0, 0);
					}
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10)
				{
					func_386("SNK_SOUT", 0, 0);
				}
				else
				{
					func_386(func_385(uParam0->f_12), 0, 0);
				}
				func_384(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
				if (bParam10)
				{
					func_384(203, "STORE_TAKE_ALL" /* GXT: Take all */, -1, 0);
				}
				func_384(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
				if (!bParam10)
				{
					func_384(203, "SNK_LIFT", -1, 0);
					func_351(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				uParam0->f_54 = 4;
				break;
			
			case 4:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 7)
				{
					if (!BitTest(iParam8->f_1, 1))
					{
						if (!bParam10)
						{
							func_466(PLAYER::PLAYER_ID(), 0, 98816, 0);
						}
						else
						{
							func_466(PLAYER::PLAYER_ID(), 0, 256, 0);
						}
						MISC::SET_BIT(&(iParam8->f_1), 1);
					}
				}
				iVar9 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
						func_347(0, 0, 0, 1);
						func_346(0, -1, 1);
						if (func_345())
						{
							if (Global_4541715 != uParam0->f_12)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								uParam0->f_12 = Global_4541715;
								func_387(uParam0->f_12, 1, 1);
								uParam0->f_27 = 0;
								uParam0->f_29 = 0;
								uParam0->f_30 = 0;
								uParam0->f_32 = 0;
								sVar10 = func_385(uParam0->f_12);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar10))
								{
									func_386(sVar10, 0, 0);
								}
							}
							else
							{
								iVar9 = 1;
							}
						}
					}
				}
				if (!bParam10)
				{
					func_351(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				func_335(uParam0, &(uParam7->f_5), bParam10);
				if ((uParam7->f_2 > 2 && BitTest(uParam7->f_1, 0)) && BitTest(iParam8->f_1, 0))
				{
					MISC::CLEAR_BIT(&(iParam8->f_1), 0);
				}
				if (bParam10 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
				{
					func_330(uParam0, bParam10);
					uParam0->f_35 = 1;
					uParam0->f_54 = 3;
				}
				if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar9 == 1) || uParam0->f_47)
				{
					if (!uParam0->f_47)
					{
						uParam0->f_27 = 1;
						uParam0->f_29 = 0;
						uParam0->f_30 = 0;
						uParam0->f_32 = 0;
						func_415(&(uParam0->f_44));
					}
					if ((uParam0->f_28 && uParam0->f_31) && uParam0->f_33)
					{
						if (func_222())
						{
							uParam0->f_47 = 1;
							uParam0->f_48 = 0;
							uParam0->f_49 = -1;
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_392(uParam0, uParam0->f_12);
							}
							func_318(uParam0, joaat("CATEGORY_MART"), joaat("NET_SHOP_ACTION_SPEND"), iVar0);
							uParam0->f_54 = 5;
						}
						else
						{
							uParam0->f_35 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
							uParam7->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
						}
					}
					else
					{
						uParam0->f_35 = 0;
						if (!uParam0->f_28 && !uParam0->f_36)
						{
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_392(uParam0, uParam0->f_12);
							}
							func_317(MISC::GET_HASH_KEY(func_385(uParam0->f_12)), iVar0, 0);
							func_310(0, 31, 3);
							uParam0->f_54 = 11;
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
					}
					if (!uParam0->f_33)
					{
						uParam0->f_54 = 3;
					}
				}
				if (!bParam10)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/) && !uParam0->f_47)
					{
						uParam0->f_27 = 1;
						if (uParam7->f_5[uParam0->f_12] < 10)
						{
							uParam0->f_33 = 1;
						}
						else
						{
							uParam0->f_33 = 0;
						}
						func_415(&(uParam0->f_44));
						if (!uParam0->f_33)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
						}
						else if (!uParam0->f_31)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_165(), func_309(), 8f, -8f, -1, 1048576, 0f, false, false, false);
							uParam0->f_54 = 8;
							uParam0->f_15 = MISC::GET_GAME_TIMER();
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_LIQUOR_STORE_SOUNDSET", true);
							if (!bParam10)
							{
								func_422(uParam0, &(iParam8->f_3));
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
				{
					if (func_479(1))
					{
						func_442();
					}
					uParam0->f_54 = 9;
					uParam0->f_15 = MISC::GET_GAME_TIMER();
					if (!bParam10)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
						func_422(uParam0, &(iParam8->f_3));
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FREEMODE_SOUNDSET", true);
						Global_2695981 = 1;
					}
				}
				if (uParam0->f_34)
				{
					uParam0->f_54 = 10;
					uParam0->f_15 = MISC::GET_GAME_TIMER();
					if (!bParam10)
					{
						func_422(uParam0, &(iParam8->f_3));
					}
					func_155("SHR_SOLD_OUT" /* GXT: Store is currently sold out. */, -1);
				}
				iVar13 = 0;
				while (iVar13 < uParam0->f_13)
				{
					if (func_149(&(Global_2738587.f_12[iVar13 /*2*/])) && func_424(Global_2738587.f_12[iVar13 /*2*/], 150000, 0))
					{
						func_15(&(Global_2738587.f_12[iVar13 /*2*/]));
						uParam7->f_5[iVar13] = 0;
						uParam0->f_54 = 3;
					}
					iVar13++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam10)
				{
					func_351(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					iVar0 = func_392(uParam0, uParam0->f_12);
				}
				if (func_318(uParam0, joaat("CATEGORY_MART"), joaat("NET_SHOP_ACTION_SPEND"), iVar0))
				{
				}
				else
				{
					switch (uParam0->f_49)
					{
						case 0:
							uParam0->f_35 = 0;
							if (!uParam0->f_28 && !uParam0->f_36)
							{
								if (!bParam10)
								{
									iVar0 = func_392(uParam0, uParam0->f_12);
								}
								func_317(MISC::GET_HASH_KEY(func_385(uParam0->f_12)), iVar0, 0);
								func_310(0, 31, 3);
								func_308();
								func_307();
								uParam0->f_54 = 11;
							}
							else
							{
								if (func_479(1))
								{
									func_442();
								}
								uParam0->f_54 = 9;
								uParam0->f_15 = MISC::GET_GAME_TIMER();
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
								if (!bParam10)
								{
									func_422(uParam0, &(iParam8->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_35 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
							uParam7->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam10)
				{
					func_351(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (func_222())
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_305(func_306()));
				}
				if (bParam10)
				{
					if (!BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_135, 6))
					{
						MISC::SET_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_135), 6);
					}
					MONEY::NETWORK_SPENT_PA_SERVICE_SNACK(0, uParam0->f_12, 0, 1);
					iVar1 = 0;
					switch (uParam0->f_12)
					{
						case 3:
							func_110(1276, 1, -1);
							func_109(16, 1, -1);
							func_281(1, -251807494, joaat("snack"), 1, func_288(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 1:
							func_110(1277, 1, -1);
							func_109(15, 1, -1);
							func_281(1, 1199442189, joaat("snack"), 1, func_288(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 2:
							func_109(14, 1, -1);
							func_110(1278, 1, -1);
							func_281(1, 1486811039, joaat("snack"), 1, func_288(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 4:
							uParam0->f_55 = 20;
							if (func_133(1098, -1) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_133(1098, -1));
							}
							func_281(1, -181862273, joaat("snack"), uParam0->f_55, func_288(), joaat("purchase"), 0, joaat("pa"));
							func_110(1098, uParam0->f_55, -1);
							break;
						
						case 0:
							func_110(62, 1, -1);
							func_281(1, -39155154, joaat("snack"), 1, func_288(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 5:
							func_110(63, 1, -1);
							func_281(1, -1600998734, joaat("snack"), 1, func_288(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 6:
							func_110(10405, 1, -1);
							func_281(1, 495696637, joaat("snack"), 1, func_288(), joaat("purchase"), 0, joaat("pa"));
							break;
					}
				}
				else
				{
					switch (uParam0->f_12)
					{
						case 3:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_392(uParam0, uParam0->f_12);
							}
							func_110(1276, 1, -1);
							func_281(1, -251807494, joaat("snack"), 1, func_288(), joaat("purchase"), 0, joaat("store"));
							func_109(16, 1, -1);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM1"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 1:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_392(uParam0, uParam0->f_12);
							}
							func_110(1277, 1, -1);
							func_281(1, 1199442189, joaat("snack"), 1, func_288(), joaat("purchase"), 0, joaat("store"));
							func_109(15, 1, -1);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM2"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 2:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_392(uParam0, uParam0->f_12);
							}
							func_109(14, 1, -1);
							func_110(1278, 1, -1);
							func_281(1, 1486811039, joaat("snack"), 1, func_288(), joaat("purchase"), 0, joaat("store"));
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM3"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 4:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_392(uParam0, uParam0->f_12);
							}
							uParam0->f_55 = 20;
							if (func_133(1098, -1) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_133(1098, -1));
							}
							func_110(1098, uParam0->f_55, -1);
							func_281(1, -181862273, joaat("snack"), uParam0->f_55, func_288(), joaat("purchase"), 0, joaat("store"));
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM4"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 0:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_392(uParam0, uParam0->f_12);
							}
							func_110(62, 1, -1);
							func_281(1, -39155154, joaat("snack"), 1, func_288(), joaat("purchase"), 0, joaat("store"));
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM5"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 6:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_392(uParam0, uParam0->f_12);
							}
							func_110(10405, 1, -1);
							func_281(1, 495696637, joaat("snack"), 1, func_288(), joaat("purchase"), 0, joaat("store"));
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM7"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 5:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_392(uParam0, uParam0->f_12);
							}
							func_110(63, 1, -1);
							func_281(1, -1600998734, joaat("snack"), 1, func_288(), joaat("purchase"), 0, joaat("store"));
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM6"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						}
				}
				if (func_222())
				{
					func_214(func_306());
				}
				func_279(-iVar1, 0);
				uParam0->f_51 = (uParam0->f_51 + iVar1);
				if (!BitTest(*iParam8, 30))
				{
					MISC::SET_BIT(iParam8, 30);
				}
				if (!BitTest(iParam8->f_1, 0))
				{
					MISC::SET_BIT(&(iParam8->f_1), 0);
					iParam8->f_2 = uParam0->f_12;
				}
				if (uParam0->f_34 || uParam0->f_51 >= 1000)
				{
					uParam0->f_54 = 10;
					if (!bParam10)
					{
						func_422(uParam0, &(iParam8->f_3));
					}
					func_155("SHR_SOLD_OUT" /* GXT: Store is currently sold out. */, -1);
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10 || func_399(uParam0->f_12))
				{
					uParam0->f_54 = 3;
				}
				else
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 8:
				func_201(1);
				switch (uParam0->f_12)
				{
					case 3:
						func_277(0, 1f, 3);
						func_281(1, -251807494, joaat("snack"), 1, func_288(), joaat("steal"), 0, joaat("store"));
						func_110(1276, 1, -1);
						func_109(13, 1, -1);
						break;
					
					case 1:
						func_277(1, 1f, 3);
						func_110(1277, 1, -1);
						func_281(1, 1199442189, joaat("snack"), 1, func_288(), joaat("steal"), 0, joaat("store"));
						func_109(13, 1, -1);
						break;
					
					case 2:
						func_277(2, 1f, 3);
						func_110(1278, 1, -1);
						func_281(1, 1486811039, joaat("snack"), 1, func_288(), joaat("steal"), 0, joaat("store"));
						func_109(13, 1, -1);
						break;
					
					case 4:
						uParam0->f_55 = 20;
						if (func_133(1098, -1) + 20 > 20)
						{
							uParam0->f_55 = (20 - func_133(1098, -1));
						}
						func_277(6, SYSTEM::TO_FLOAT(uParam0->f_55), 3);
						func_110(1098, uParam0->f_55, -1);
						func_281(1, -181862273, joaat("snack"), 1, func_288(), joaat("steal"), 0, joaat("store"));
						break;
					
					case 0:
						func_277(3, 1f, 3);
						func_110(62, 1, -1);
						func_281(1, -39155154, joaat("snack"), 1, func_288(), joaat("steal"), 0, joaat("store"));
						break;
					
					case 6:
						func_277(5, 1f, 3);
						func_110(10405, 1, -1);
						func_281(1, 495696637, joaat("snack"), 1, func_288(), joaat("steal"), 0, joaat("store"));
						break;
					
					case 5:
						func_277(4, 1f, 3);
						func_110(63, 1, -1);
						func_281(1, -1600998734, joaat("snack"), 1, func_288(), joaat("steal"), 0, joaat("store"));
						break;
				}
				if (!bParam10)
				{
					func_466(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1 && !func_275(PLAYER::PLAYER_ID()))
				{
					PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
					MISC::SET_BIT(iParam8, 25);
					if (!BitTest(*iParam8, 1))
					{
						MISC::SET_BIT(iParam8, 2);
					}
				}
				if (!BitTest(iParam8->f_1, 2))
				{
					MISC::SET_BIT(&(iParam8->f_1), 2);
				}
				uParam0->f_54 = 12;
				break;
			
			case 11:
				if (!Global_101444.f_1482 && !NETWORK::IS_COMMERCE_STORE_OPEN())
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 10:
				if (!bParam10)
				{
					func_466(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if ((MISC::GET_GAME_TIMER() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 12;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
				}
				break;
			
			case 9:
				if ((MISC::GET_GAME_TIMER() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 0;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
				}
				break;
			
			case 12:
				if (BitTest(uParam7->f_1, 3))
				{
					if (BitTest(iParam8->f_1, 2))
					{
						MISC::CLEAR_BIT(&(iParam8->f_1), 2);
					}
					if (BitTest(iParam8->f_1, 3))
					{
						MISC::CLEAR_BIT(&(iParam8->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 8000) < 50)
		{
		}
		if (BitTest(uParam7->f_1, 3))
		{
			if (BitTest(iParam8->f_1, 2))
			{
				MISC::CLEAR_BIT(&(iParam8->f_1), 2);
			}
			if (BitTest(iParam8->f_1, 3))
			{
				MISC::CLEAR_BIT(&(iParam8->f_1), 3);
			}
		}
		if ((uParam0->f_54 != 12 && BitTest(uParam0->f_52, 26)) && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			if ((((uParam0->f_54 == 4 || uParam0->f_54 == 3) || uParam0->f_54 == 6) || uParam0->f_54 == 11) || uParam0->f_54 == 5)
			{
				func_422(uParam0, &(iParam8->f_3));
			}
			uParam0->f_54 = 12;
		}
		if (uParam0->f_14 != -1)
		{
			func_269(&(uParam0->f_14));
		}
	}
}

int func_275(int iParam0)//Position - 0xD0B1
{
	if ((func_42(iParam0) || func_276(iParam0)) && func_223(func_224(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_276(int iParam0)//Position - 0xD0E4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1886967[iVar0 /*609*/].f_1, 7);
	}
	return 0;
}

void func_277(int iParam0, float fParam1, int iParam2)//Position - 0xD107
{
	struct<8> Var0;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	
	if (fParam1 > 0f)
	{
		if (func_278(iParam0, &Var0))
		{
			Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			func_201(1);
			iVar12 = -1;
			iVar11 = 0;
			while (iVar11 < 20)
			{
				if (Global_2672741.f_1085[iVar11 /*30*/].f_6 == 0 || Global_2672741.f_1085[iVar11 /*30*/].f_6 == 7)
				{
					iVar12 = iVar11;
					iVar11 = 20;
				}
				iVar11++;
			}
			if (iVar12 != -1)
			{
				Global_2672741.f_1085[iVar12 /*30*/] = { Var8 };
				Global_2672741.f_1085[iVar12 /*30*/].f_6 = 1;
				Global_2672741.f_1085[iVar12 /*30*/].f_4 = func_200(Global_2672741.f_1085[iVar12 /*30*/], &Global_1574479, &Global_1574480);
				Global_2672741.f_1085[iVar12 /*30*/].f_5 = fParam1;
				Global_2672741.f_1085[iVar12 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
				Global_2672741.f_1085[iVar12 /*30*/].f_8 = iParam2;
				Global_2672741.f_1085[iVar12 /*30*/].f_14 = { Var0 };
				Global_2672741.f_1085[iVar12 /*30*/].f_9 = func_199();
				Global_2672741.f_1085[iVar12 /*30*/].f_10 = func_198();
			}
		}
	}
}

int func_278(int iParam0, char* sParam1)//Position - 0xD229
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1" /* GXT: Snack +~1~ */, 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2" /* GXT: Snack +~1~ */, 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3" /* GXT: Snack +~1~ */, 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1" /* GXT: eCola +~1~ */, 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2" /* GXT: Pisswasser +~1~ */, 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_11" /* GXT: Smokes +~1~ */, 32);
			return 1;
		
		case 7:
			StringCopy(sParam1, "PU_REWARD_PC" /* GXT: +~1~ points */, 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_D3" /* GXT: Sprunk +~1~ */, 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_279(int iParam0, int iParam1)//Position - 0xD2C9
{
	func_209(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_210(iParam0, 0);
	}
}

int func_280(int iParam0, bool bParam1, bool bParam2)//Position - 0xD2E7
{
	if (iParam0 == func_187())
	{
		return 0;
	}
	if (BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD34B
{
	bool bVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	if (Global_1882364)
	{
		if (Global_1882364.f_3.f_6 != iParam1)
		{
			bVar0 = true;
		}
		else if (Global_1882364.f_3 != iParam0)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1882364.f_3.f_3 != iParam4)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1882364.f_3.f_5 != iParam2)
		{
			bVar0 = true;
		}
		else if (Global_1882364.f_3.f_1 != iParam5)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1882364.f_3.f_4 != iParam7)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1882364.f_3.f_9 != iParam6)
		{
			bVar0 = true;
		}
		else if (Global_1882364.f_3.f_2 != func_286())
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_285(&(Global_1882364.f_3));
		STATS::PLAYSTATS_INVENTORY(&(Global_1882364.f_3));
		func_284();
	}
	Global_1882364 = 1;
	Global_1882364.f_3 = iParam0;
	if (func_282())
	{
		Global_1882364.f_3.f_2 = func_286();
	}
	Global_1882364.f_3.f_6 = iParam1;
	Global_1882364.f_3.f_5 = iParam2;
	Global_1882364.f_3.f_7 = (Global_1882364.f_3.f_7 + iParam3);
	Global_1882364.f_3.f_3 = iParam4;
	Global_1882364.f_3.f_1 = iParam5;
	Global_1882364.f_3.f_4 = iParam7;
	Global_1882364.f_3.f_9 = iParam6;
	if (((((iVar1 || Global_1882364.f_13 != Global_1882364.f_3) || Global_1882364.f_13.f_3 != Global_1882364.f_3.f_3) || Global_1882364.f_13.f_1 != Global_1882364.f_3.f_1) || Global_1882364.f_13.f_4 != Global_1882364.f_3.f_4) || (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1882364.f_3.f_8) >= 120)
	{
		if (Global_1882364.f_3 != 0)
		{
			Global_1882364.f_3.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		else
		{
			Global_1882364.f_3.f_8 = 0;
		}
	}
	func_15(&(Global_1882364.f_1));
	func_21(&(Global_1882364.f_1), 0, 0);
}

int func_282()//Position - 0xD543
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_283() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_283()//Position - 0xD58B
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

void func_284()//Position - 0xD5A0
{
	Global_1882364.f_13 = { Global_1882364.f_3 };
	Global_1882364 = 0;
	Global_1882364.f_3 = 0;
	Global_1882364.f_3.f_2 = 0;
	Global_1882364.f_3.f_6 = 0;
	Global_1882364.f_3.f_5 = 0;
	Global_1882364.f_3.f_7 = 0;
	Global_1882364.f_3.f_3 = 0;
	Global_1882364.f_3.f_1 = 0;
	Global_1882364.f_3.f_4 = 0;
	Global_1882364.f_3.f_9 = 0;
	func_15(&(Global_1882364.f_1));
}

void func_285(var uParam0)//Position - 0xD618
{
}

int func_286()//Position - 0xD620
{
	struct<13> Var0;
	
	Var0 = { func_283() };
	return func_287(&Var0);
}

int func_287(var* uParam0)//Position - 0xD637
{
	var uVar0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar0, 35, uParam0);
				return uVar0;
			}
		}
	}
	return -1;
}

int func_288()//Position - 0xD667
{
	return MISC::GET_HASH_KEY(func_289());
}

char* func_289()//Position - 0xD677
{
	int iVar0;
	int iVar1;
	
	if (func_304())
	{
		return func_302(func_303(PLAYER::PLAYER_ID()));
	}
	else if (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_34 != -1)
	{
		return func_301(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_34);
	}
	else if (func_300(PLAYER::PLAYER_ID()))
	{
		return "SIMEON_SHOWROOM";
	}
	else if (func_298(PLAYER::PLAYER_ID()))
	{
		return "BEACH_PARTY";
	}
	else if (func_297())
	{
		return "ARENA_BOX";
	}
	else if (Global_2738587.f_6003.f_1 && Global_1977840 != -1)
	{
		return func_296(Global_1977840);
	}
	else if (Global_101444.f_393 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			iVar1 = func_295(iVar0);
			if (BitTest(Global_101444.f_1414[iVar1], 5))
			{
				return func_294(iVar0);
			}
			iVar0++;
		}
	}
	return func_290();
}

char* func_290()//Position - 0xD769
{
	char cVar0[24];
	
	if (func_48(PLAYER::PLAYER_ID(), 1, 1))
	{
		StringCopy(&cVar0, "FREEMODE_", 24);
		StringConCat(&cVar0, func_292(ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true))), 24);
		return func_291(&cVar0);
	}
	return "FREEMODE_DEAD";
}

var func_291(char[4] cParam0)//Position - 0xD7A8
{
	return cParam0;
}

char* func_292(char* sParam0)//Position - 0xD7B2
{
	struct<8> Var0;
	char cVar16[64];
	char cVar32[64];
	int iVar48;
	
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			iVar48 = 0;
			iVar48 = 0;
			while (iVar48 <= (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) - 1))
			{
				StringCopy(&Var0, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar48, iVar48 + 1), 64);
				StringCopy(&cVar16, func_293(&Var0), 64);
				StringConCat(&cVar32, &cVar16, 64);
				iVar48++;
			}
			return HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cVar32, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar32));
		}
	}
	return sParam0;
}

char* func_293(char* sParam0)//Position - 0xD81A
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) == 1)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "a") || MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
			{
				return "A";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "b") || MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
			{
				return "B";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "c") || MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
			{
				return "C";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "d") || MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
			{
				return "D";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "e") || MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
			{
				return "E";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "f") || MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
			{
				return "F";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "g") || MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
			{
				return "G";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "h") || MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
			{
				return "H";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "i") || MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
			{
				return "I";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "j") || MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
			{
				return "J";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "k") || MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
			{
				return "K";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "l") || MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
			{
				return "L";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "m") || MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
			{
				return "M";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "n") || MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
			{
				return "N";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "o") || MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
			{
				return "O";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "p") || MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
			{
				return "P";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "q") || MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
			{
				return "Q";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "r") || MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
			{
				return "R";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "s") || MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
			{
				return "S";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "t") || MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
			{
				return "T";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "u") || MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
			{
				return "U";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "v") || MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
			{
				return "V";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "w") || MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
			{
				return "W";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "x") || MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
			{
				return "X";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "y") || MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
			{
				return "Y";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "z") || MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
			{
				return "Z";
			}
		}
	}
	return sParam0;
}

char* func_294(int iParam0)//Position - 0xDC2B
{
	switch (iParam0)
	{
		case 0:
			return "GUN_SHOP_01_DT";
		
		case 1:
			return "GUN_SHOP_02_SS";
		
		case 2:
			return "GUN_SHOP_03_HW";
		
		case 3:
			return "GUN_SHOP_04_ELS";
		
		case 4:
			return "GUN_SHOP_05_PB";
		
		case 5:
			return "GUN_SHOP_06_LS";
		
		case 6:
			return "GUN_SHOP_07_MW";
		
		case 7:
			return "GUN_SHOP_08_CS";
		
		case 8:
			return "GUN_SHOP_09_GOH";
		
		case 9:
			return "GUN_SHOP_10_VWH";
		
		case 10:
			return "GUN_SHOP_11_ID1";
		
		case 11:
			return "GUN_SHOP_ARMORY";
		
		case 12:
			return "GUN_SHOP_ARMORY_AVENGER";
		
		case 13:
			return "GUN_SHOP_ARMORY_HACKER_TRUCK";
		
		case 14:
			return "GUN_SHOP_ARMORY_ARENA";
		
		case 15:
			return "GUN_SHOP_ARMORY_ARCADE";
		
		case 16:
			return "GUN_SHOP_ARMORY_SUB";
		
		case 17:
			return "GUN_SHOP_ARMORY_FIXER";
		
		case 18:
			return "GUN_SHOP_ARMORY_JUGGALO";
		
		case 19:
			return "GUN_SHOP_ARMORY_HANGAR";
		
		default:
	}
	return "";
}

int func_295(int iParam0)//Position - 0xDD42
{
	switch (iParam0)
	{
		case 0:
			return 28;
		
		case 1:
			return 29;
		
		case 2:
			return 30;
		
		case 3:
			return 31;
		
		case 4:
			return 32;
		
		case 5:
			return 33;
		
		case 6:
			return 34;
		
		case 7:
			return 35;
		
		case 8:
			return 36;
		
		case 9:
			return 37;
		
		case 10:
			return 38;
		
		case 11:
			return 46;
		
		case 12:
			return 47;
		
		case 13:
			return 48;
		
		case 14:
			return 49;
		
		case 15:
			return 52;
		
		case 16:
			return 53;
		
		case 17:
			return 56;
		
		case 18:
			return 59;
		
		case 19:
			return 60;
		
		default:
	}
	return -1;
}

char* func_296(int iParam0)//Position - 0xDE2E
{
	switch (iParam0)
	{
		case -2:
			return "SHOP_ROBBERIES_SHOP_CONV_10";
		
		case 0:
			return "SHOP_ROBBERIES_SHOP_GAS_1";
		
		case 1:
			return "SHOP_ROBBERIES_SHOP_GAS_2";
		
		case 2:
			return "SHOP_ROBBERIES_SHOP_GAS_3";
		
		case 3:
			return "SHOP_ROBBERIES_SHOP_GAS_4";
		
		case 4:
			return "SHOP_ROBBERIES_SHOP_GAS_5";
		
		case 5:
			return "SHOP_ROBBERIES_SHOP_LIQ_1";
		
		case 6:
			return "SHOP_ROBBERIES_SHOP_LIQ_2";
		
		case 7:
			return "SHOP_ROBBERIES_SHOP_LIQ_3";
		
		case 8:
			return "SHOP_ROBBERIES_SHOP_LIQ_4";
		
		case 9:
			return "SHOP_ROBBERIES_SHOP_LIQ_5";
		
		case 10:
			return "SHOP_ROBBERIES_SHOP_CONV_1";
		
		case 11:
			return "SHOP_ROBBERIES_SHOP_CONV_2";
		
		case 12:
			return "SHOP_ROBBERIES_SHOP_CONV_3";
		
		case 13:
			return "SHOP_ROBBERIES_SHOP_CONV_4";
		
		case 14:
			return "SHOP_ROBBERIES_SHOP_CONV_5";
		
		case 15:
			return "SHOP_ROBBERIES_SHOP_CONV_6";
		
		case 16:
			return "SHOP_ROBBERIES_SHOP_CONV_7";
		
		case 17:
			return "SHOP_ROBBERIES_SHOP_CONV_8";
		
		case 18:
			return "SHOP_ROBBERIES_SHOP_CONV_9";
		
		default:
	}
	return "SHOP_ROBBERIES_SHOP_NONE";
}

bool func_297()//Position - 0xDF45
{
	return Global_2707412;
}

bool func_298(int iParam0)//Position - 0xDF51
{
	return func_299(&(Global_2657921[iParam0 /*463*/].f_442), 0);
}

var func_299(var uParam0, int iParam1)//Position - 0xDF6A
{
	return BitTest(*uParam0, iParam1);
}

int func_300(int iParam0)//Position - 0xDF78
{
	if (iParam0 != func_187())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_5, 25);
	}
	return 0;
}

char* func_301(int iParam0)//Position - 0xDF9E
{
	switch (iParam0)
	{
		case 1:
			return "PROPERTY_HIGH_APT_1";
		
		case 2:
			return "PROPERTY_HIGH_APT_2";
		
		case 3:
			return "PROPERTY_HIGH_APT_3";
		
		case 4:
			return "PROPERTY_HIGH_APT_4";
		
		case 5:
			return "PROPERTY_HIGH_APT_5";
		
		case 6:
			return "PROPERTY_HIGH_APT_6";
		
		case 7:
			return "PROPERTY_HIGH_APT_7";
		
		case 8:
			return "PROPERTY_MEDIUM_APT_1";
		
		case 9:
			return "PROPERTY_MEDIUM_APT_2";
		
		case 10:
			return "PROPERTY_MEDIUM_APT_3";
		
		case 11:
			return "PROPERTY_MEDIUM_APT_4";
		
		case 12:
			return "PROPERTY_MEDIUM_APT_5";
		
		case 13:
			return "PROPERTY_MEDIUM_APT_6";
		
		case 14:
			return "PROPERTY_MEDIUM_APT_7";
		
		case 15:
			return "PROPERTY_MEDIUM_APT_8";
		
		case 16:
			return "PROPERTY_MEDIUM_APT_9";
		
		case 17:
			return "PROPERTY_LOW_APT_1";
		
		case 18:
			return "PROPERTY_LOW_APT_2";
		
		case 19:
			return "PROPERTY_LOW_APT_3";
		
		case 20:
			return "PROPERTY_LOW_APT_4";
		
		case 21:
			return "PROPERTY_LOW_APT_5";
		
		case 22:
			return "PROPERTY_LOW_APT_6";
		
		case 23:
			return "PROPERTY_LOW_APT_7";
		
		case 24:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_1";
		
		case 25:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_2";
		
		case 26:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_3";
		
		case 27:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_4";
		
		case 28:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_5";
		
		case 29:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_6";
		
		case 30:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_7";
		
		case 31:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_8";
		
		case 32:
			return "PROPERTY_GARAGE_SOUTH_LOS_SANTOS_1";
		
		case 33:
			return "PROPERTY_GARAGE_SOUTH_LOS_SANTOS_2";
		
		case 34:
			return "PROPERTY_HIGH_APT_8";
		
		case 35:
			return "PROPERTY_HIGH_APT_9";
		
		case 36:
			return "PROPERTY_HIGH_APT_10";
		
		case 37:
			return "PROPERTY_HIGH_APT_11";
		
		case 38:
			return "PROPERTY_HIGH_APT_12";
		
		case 39:
			return "PROPERTY_HIGH_APT_13";
		
		case 40:
			return "PROPERTY_HIGH_APT_14";
		
		case 41:
			return "PROPERTY_HIGH_APT_15";
		
		case 42:
			return "PROPERTY_HIGH_APT_16";
		
		case 43:
			return "PROPERTY_HIGH_APT_17";
		
		case 44:
			return "PROPERTY_GARAGE_NEW_1";
		
		case 45:
			return "PROPERTY_GARAGE_NEW_2";
		
		case 46:
			return "PROPERTY_GARAGE_NEW_3";
		
		case 47:
			return "PROPERTY_GARAGE_NEW_5";
		
		case 48:
			return "PROPERTY_GARAGE_NEW_6";
		
		case 49:
			return "PROPERTY_GARAGE_NEW_7";
		
		case 50:
			return "PROPERTY_GARAGE_NEW_8";
		
		case 51:
			return "PROPERTY_GARAGE_NEW_9";
		
		case 52:
			return "PROPERTY_GARAGE_NEW_14";
		
		case 53:
			return "PROPERTY_GARAGE_NEW_16";
		
		case 54:
			return "PROPERTY_GARAGE_NEW_17";
		
		case 55:
			return "PROPERTY_GARAGE_NEW_18";
		
		case 56:
			return "PROPERTY_GARAGE_NEW_19";
		
		case 57:
			return "PROPERTY_GARAGE_NEW_20";
		
		case 58:
			return "PROPERTY_GARAGE_NEW_21";
		
		case 59:
			return "PROPERTY_GARAGE_NEW_22";
		
		case 60:
			return "PROPERTY_GARAGE_NEW_23";
		
		case 61:
			return "PROPERTY_BUS_HIGH_APT_1";
		
		case 62:
			return "PROPERTY_BUS_HIGH_APT_2";
		
		case 63:
			return "PROPERTY_BUS_HIGH_APT_3";
		
		case 64:
			return "PROPERTY_BUS_HIGH_APT_4";
		
		case 65:
			return "PROPERTY_BUS_HIGH_APT_5";
		
		case 66:
			return "PROPERTY_IND_DAY_MEDIUM_1";
		
		case 67:
			return "PROPERTY_IND_DAY_MEDIUM_2";
		
		case 68:
			return "PROPERTY_IND_DAY_MEDIUM_3";
		
		case 69:
			return "PROPERTY_IND_DAY_MEDIUM_4";
		
		case 70:
			return "PROPERTY_IND_DAY_LOW_1";
		
		case 71:
			return "PROPERTY_IND_DAY_LOW_2";
		
		case 72:
			return "PROPERTY_IND_DAY_LOW_3";
		
		case 73:
			return "PROPERTY_STILT_APT_1_BASE_B";
		
		case 74:
			return "PROPERTY_STILT_APT_2_B";
		
		case 75:
			return "PROPERTY_STILT_APT_3_B";
		
		case 76:
			return "PROPERTY_STILT_APT_4_B";
		
		case 77:
			return "PROPERTY_STILT_APT_5_BASE_A";
		
		case 78:
			return "PROPERTY_STILT_APT_7_A";
		
		case 79:
			return "PROPERTY_STILT_APT_8_A";
		
		case 80:
			return "PROPERTY_STILT_APT_10_A";
		
		case 81:
			return "PROPERTY_STILT_APT_12_A";
		
		case 82:
			return "PROPERTY_STILT_APT_13_A";
		
		case 83:
			return "PROPERTY_CUSTOM_APT_1_BASE";
		
		case 84:
			return "PROPERTY_CUSTOM_APT_2";
		
		case 85:
			return "PROPERTY_CUSTOM_APT_3";
		
		case 86:
			return "PROPERTY_YACHT_APT_1_BASE";
		
		case 87:
			return "PROPERTY_OFFICE_1";
		
		case 88:
			return "PROPERTY_OFFICE_2_BASE";
		
		case 89:
			return "PROPERTY_OFFICE_3";
		
		case 90:
			return "PROPERTY_OFFICE_4";
		
		case 91:
			return "PROPERTY_CLUBHOUSE_1_BASE_A";
		
		case 92:
			return "PROPERTY_CLUBHOUSE_2_BASE_A";
		
		case 93:
			return "PROPERTY_CLUBHOUSE_3_BASE_A";
		
		case 94:
			return "PROPERTY_CLUBHOUSE_4_BASE_A";
		
		case 95:
			return "PROPERTY_CLUBHOUSE_5_BASE_A";
		
		case 96:
			return "PROPERTY_CLUBHOUSE_6_BASE_A";
		
		case 97:
			return "PROPERTY_CLUBHOUSE_7_BASE_B";
		
		case 98:
			return "PROPERTY_CLUBHOUSE_8_BASE_B";
		
		case 99:
			return "PROPERTY_CLUBHOUSE_9_BASE_B";
		
		case 100:
			return "PROPERTY_CLUBHOUSE_10_BASE_B";
		
		case 101:
			return "PROPERTY_CLUBHOUSE_11_BASE_B";
		
		case 102:
			return "PROPERTY_CLUBHOUSE_12_BASE_B";
		
		case 103:
			return "PROPERTY_OFFICE_1_GARAGE_LVL1";
		
		case 104:
			return "PROPERTY_OFFICE_1_GARAGE_LVL2";
		
		case 105:
			return "PROPERTY_OFFICE_1_GARAGE_LVL3";
		
		case 106:
			return "PROPERTY_OFFICE_2_GARAGE_LVL1";
		
		case 107:
			return "PROPERTY_OFFICE_2_GARAGE_LVL2";
		
		case 108:
			return "PROPERTY_OFFICE_2_GARAGE_LVL3";
		
		case 109:
			return "PROPERTY_OFFICE_3_GARAGE_LVL1";
		
		case 110:
			return "PROPERTY_OFFICE_3_GARAGE_LVL2";
		
		case 111:
			return "PROPERTY_OFFICE_3_GARAGE_LVL3";
		
		case 112:
			return "PROPERTY_OFFICE_4_GARAGE_LVL1";
		
		case 113:
			return "PROPERTY_OFFICE_4_GARAGE_LVL2";
		
		case 114:
			return "PROPERTY_OFFICE_4_GARAGE_LVL3";
		
		case 115:
			return "PROPERTY_IMPEXP_VEH_WAREHOUSE";
		
		case 116:
			return "PROPERTY_HANGAR";
		
		case 117:
			return "PROPERTY_DEFUNC_BASE";
		
		case 118:
			return "PROPERTY_NIGHTCLUB";
		
		case 119:
			return "PROPERTY_MEGAWARE_GARAGE_LVL1";
		
		case 120:
			return "PROPERTY_MEGAWARE_GARAGE_LVL2";
		
		case 121:
			return "PROPERTY_MEGAWARE_GARAGE_LVL3";
		
		case 122:
			return "PROPERTY_ARENAWARS_GARAGE_LVL1";
		
		case 123:
			return "PROPERTY_ARENAWARS_GARAGE_LVL2";
		
		case 124:
			return "PROPERTY_ARENAWARS_GARAGE_LVL3";
		
		case 125:
			return "PROPERTY_CASINO_GARAGE";
		
		case 126:
			return "PROPERTY_ARCADE_GARAGE";
		
		case 127:
			return "PROPERTY_AUTO_SHOP";
		
		case 128:
			return "PROPERTY_SECURITY_OFFICE_GARAGE";
		
		default:
	}
	return "PROPERTY_INVALID";
}

char* func_302(int iParam0)//Position - 0xE631
{
	switch (iParam0)
	{
		case 0:
			return "SIMPLE_INTERIOR_WAREHOUSE_1";
		
		case 1:
			return "SIMPLE_INTERIOR_WAREHOUSE_2";
		
		case 2:
			return "SIMPLE_INTERIOR_WAREHOUSE_3";
		
		case 3:
			return "SIMPLE_INTERIOR_WAREHOUSE_4";
		
		case 4:
			return "SIMPLE_INTERIOR_WAREHOUSE_5";
		
		case 5:
			return "SIMPLE_INTERIOR_WAREHOUSE_6";
		
		case 6:
			return "SIMPLE_INTERIOR_WAREHOUSE_7";
		
		case 7:
			return "SIMPLE_INTERIOR_WAREHOUSE_8";
		
		case 8:
			return "SIMPLE_INTERIOR_WAREHOUSE_9";
		
		case 9:
			return "SIMPLE_INTERIOR_WAREHOUSE_10";
		
		case 10:
			return "SIMPLE_INTERIOR_WAREHOUSE_11";
		
		case 11:
			return "SIMPLE_INTERIOR_WAREHOUSE_12";
		
		case 12:
			return "SIMPLE_INTERIOR_WAREHOUSE_13";
		
		case 13:
			return "SIMPLE_INTERIOR_WAREHOUSE_14";
		
		case 14:
			return "SIMPLE_INTERIOR_WAREHOUSE_15";
		
		case 15:
			return "SIMPLE_INTERIOR_WAREHOUSE_16";
		
		case 16:
			return "SIMPLE_INTERIOR_WAREHOUSE_17";
		
		case 17:
			return "SIMPLE_INTERIOR_WAREHOUSE_18";
		
		case 18:
			return "SIMPLE_INTERIOR_WAREHOUSE_19";
		
		case 19:
			return "SIMPLE_INTERIOR_WAREHOUSE_20";
		
		case 20:
			return "SIMPLE_INTERIOR_WAREHOUSE_21";
		
		case 21:
			return "SIMPLE_INTERIOR_WAREHOUSE_22";
		
		case 22:
			return "SIMPLE_INTERIOR_FACTORY_METH_1";
		
		case 23:
			return "SIMPLE_INTERIOR_FACTORY_WEED_1";
		
		case 24:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_1";
		
		case 25:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_1";
		
		case 26:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_1";
		
		case 27:
			return "SIMPLE_INTERIOR_FACTORY_METH_2";
		
		case 28:
			return "SIMPLE_INTERIOR_FACTORY_WEED_2";
		
		case 29:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_2";
		
		case 30:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_2";
		
		case 31:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_2";
		
		case 32:
			return "SIMPLE_INTERIOR_FACTORY_METH_3";
		
		case 33:
			return "SIMPLE_INTERIOR_FACTORY_WEED_3";
		
		case 34:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_3";
		
		case 35:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_3";
		
		case 36:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_3";
		
		case 37:
			return "SIMPLE_INTERIOR_FACTORY_METH_4";
		
		case 38:
			return "SIMPLE_INTERIOR_FACTORY_WEED_4";
		
		case 39:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_4";
		
		case 40:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_4";
		
		case 41:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_4";
		
		case 42:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_POLICE_STATION";
		
		case 43:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MC_CLUBHOUSE";
		
		case 44:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_ROCKFORD";
		
		case 45:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_PILLBOX";
		
		case 46:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_ALTA";
		
		case 47:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_BURTON";
		
		case 48:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_PALETO";
		
		case 49:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_GRAND_SENORA";
		
		case 50:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_CHUMASH";
		
		case 51:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_ROCKCLUB";
		
		case 52:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY";
		
		case 53:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_2";
		
		case 54:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_3";
		
		case 55:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_4";
		
		case 56:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FARMHOUSE";
		
		case 57:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_HEIST_YACHT";
		
		case 58:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_RECYCLING_PLANT";
		
		case 59:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BIOLAB";
		
		case 60:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_1";
		
		case 61:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_2";
		
		case 62:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_3";
		
		case 63:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_4";
		
		case 64:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_5";
		
		case 65:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_6";
		
		case 66:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_7";
		
		case 67:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_8";
		
		case 68:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_9";
		
		case 69:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_10";
		
		case 70:
			return "SIMPLE_INTERIOR_BUNKER_1";
		
		case 71:
			return "SIMPLE_INTERIOR_BUNKER_2";
		
		case 72:
			return "SIMPLE_INTERIOR_BUNKER_3";
		
		case 73:
			return "SIMPLE_INTERIOR_BUNKER_4";
		
		case 74:
			return "SIMPLE_INTERIOR_BUNKER_5";
		
		case 75:
			return "SIMPLE_INTERIOR_BUNKER_6";
		
		case 76:
			return "SIMPLE_INTERIOR_BUNKER_7";
		
		case 77:
			return "SIMPLE_INTERIOR_BUNKER_9";
		
		case 78:
			return "SIMPLE_INTERIOR_BUNKER_10";
		
		case 79:
			return "SIMPLE_INTERIOR_BUNKER_11";
		
		case 80:
			return "SIMPLE_INTERIOR_BUNKER_12";
		
		case 81:
			return "SIMPLE_INTERIOR_ARMORY_TRUCK_1";
		
		case 82:
			return "SIMPLE_INTERIOR_CREATOR_TRAILER_1";
		
		case 83:
			return "SIMPLE_INTERIOR_HANGAR_1";
		
		case 84:
			return "SIMPLE_INTERIOR_HANGAR_2";
		
		case 85:
			return "SIMPLE_INTERIOR_HANGAR_3";
		
		case 86:
			return "SIMPLE_INTERIOR_HANGAR_4";
		
		case 87:
			return "SIMPLE_INTERIOR_HANGAR_5";
		
		case 88:
			return "SIMPLE_INTERIOR_ARMORY_AIRCRAFT_1";
		
		case 89:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_1";
		
		case 90:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_2";
		
		case 91:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_3";
		
		case 92:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_4";
		
		case 93:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_6";
		
		case 94:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_7";
		
		case 95:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_8";
		
		case 96:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_9";
		
		case 97:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_10";
		
		case 98:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MEDIUM_GARAGE";
		
		case 99:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_LOWEND_STUDIO";
		
		case 100:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MIDEND_APARTMENT";
		
		case 101:
			return "SIMPLE_INTERIOR_CREATOR_AIRCRAFT_1";
		
		case 102:
			return "SIMPLE_INTERIOR_HUB_LA_MESA";
		
		case 103:
			return "SIMPLE_INTERIOR_HUB_MISSION_ROW";
		
		case 104:
			return "SIMPLE_INTERIOR_HUB_STRAWBERRY_WAREHOUSE";
		
		case 105:
			return "SIMPLE_INTERIOR_HUB_WEST_VINEWOOD";
		
		case 106:
			return "SIMPLE_INTERIOR_HUB_CYPRESS_FLATS";
		
		case 107:
			return "SIMPLE_INTERIOR_HUB_LSIA_WAREHOUSE";
		
		case 108:
			return "SIMPLE_INTERIOR_HUB_ELYSIAN_ISLAND";
		
		case 109:
			return "SIMPLE_INTERIOR_HUB_DOWNTOWN_VINEWOOD";
		
		case 110:
			return "SIMPLE_INTERIOR_HUB_DEL_PERRO_BUILDING";
		
		case 111:
			return "SIMPLE_INTERIOR_HUB_VESPUCCI_CANALS";
		
		case 112:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SHERIFF";
		
		case 113:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SHERIFF2";
		
		case 114:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_UNION_DEPOSITORY_CARPARK";
		
		case 115:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SIMEON_SHOWROOM";
		
		case 116:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_ABATTOIR";
		
		case 117:
			return "SIMPLE_INTERIOR_HACKER_TRUCK";
		
		case 118:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_JEWEL_STORE";
		
		case 119:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_LIFE_INVADER";
		
		case 120:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_DJ_YACHT";
		
		case 121:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MELANOMA_GARAGE";
		
		case 122:
			return "SIMPLE_INTERIOR_ARENA_GARAGE_1";
		
		case 123:
			return "SIMPLE_INTERIOR_CASINO";
		
		case 124:
			return "SIMPLE_INTERIOR_CASINO_APT";
		
		case 125:
			return "SIMPLE_INTERIOR_CASINO_VAL_GARAGE";
		
		case 126:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_HAYES_AUTOS";
		
		case 127:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_METH_LAB";
		
		case 128:
			return "SIMPLE_INTERIOR_ARCADE_PALETO_BAY";
		
		case 129:
			return "SIMPLE_INTERIOR_ARCADE_GRAPESEED";
		
		case 130:
			return "SIMPLE_INTERIOR_ARCADE_DAVIS";
		
		case 131:
			return "SIMPLE_INTERIOR_ARCADE_WEST_VINEWOOD";
		
		case 132:
			return "SIMPLE_INTERIOR_ARCADE_ROCKFORD_HILLS";
		
		case 133:
			return "SIMPLE_INTERIOR_ARCADE_LA_MESA";
		
		case 134:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FIB_BUILDING";
		
		case 135:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BIOLAB_AND_TUNNEL";
		
		case 136:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FOUNDRY";
		
		case 137:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MAX_RENDA";
		
		case 138:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER";
		
		case 139:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_2";
		
		case 140:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_3";
		
		case 141:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_4";
		
		case 142:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_5";
		
		case 143:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_6";
		
		case 144:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_OMEGA";
		
		case 145:
			return "SIMPLE_INTERIOR_SOLOMONS_OFFICE";
		
		case 146:
			return "SIMPLE_INTERIOR_CASINO_NIGHTCLUB";
		
		case 147:
			return "SIMPLE_INTERIOR_SUBMARINE";
		
		case 148:
			return "SIMPLE_INTERIOR_MUSIC_STUDIO";
		
		case 149:
			return "SIMPLE_INTERIOR_AUTO_SHOP_LA_MESA";
		
		case 150:
			return "SIMPLE_INTERIOR_AUTO_SHOP_STRAWBERRY";
		
		case 151:
			return "SIMPLE_INTERIOR_AUTO_SHOP_BURTON";
		
		case 152:
			return "SIMPLE_INTERIOR_AUTO_SHOP_RANCHO";
		
		case 153:
			return "SIMPLE_INTERIOR_AUTO_SHOP_MISSION_ROW";
		
		case 154:
			return "SIMPLE_INTERIOR_CAR_MEET";
		
		case 155:
			return "SIMPLE_INTERIOR_FIXER_HQ_HAWICK";
		
		case 156:
			return "SIMPLE_INTERIOR_FIXER_HQ_ROCKFORD";
		
		case 157:
			return "SIMPLE_INTERIOR_FIXER_HQ_SEOUL";
		
		case 158:
			return "SIMPLE_INTERIOR_FIXER_HQ_VESPUCCI";
		
		case 159:
			return "SIMPLE_INTERIOR_ACID_LAB";
		
		case 160:
			return "SIMPLE_INTERIOR_JUGGALO_HIDEOUT";
		
		case 161:
			return "SIMPLE_INTERIOR_MULTISTOREY_GARAGE";
		
		case 164:
			return "SIMPLE_INTERIOR_SALVAGE_YARD_LA_PUERTA";
		
		case 166:
			return "SIMPLE_INTERIOR_SALVAGE_YARD_MURIETTA_HEIGHTS";
		
		case 162:
			return "SIMPLE_INTERIOR_SALVAGE_YARD_PALETO_BAY";
		
		case 163:
			return "SIMPLE_INTERIOR_SALVAGE_YARD_SANDY_SHORES";
		
		case 165:
			return "SIMPLE_INTERIOR_SALVAGE_YARD_STRAWBERRY";
		
		default:
	}
	return "SIMPLE_INTERIOR_INVALID";
}

int func_303(int iParam0)//Position - 0xEEBF
{
	if (iParam0 != func_187())
	{
		if (func_48(iParam0, 1, 1))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575079 || Global_2635562.f_2980) && iParam0 == PLAYER::PLAYER_ID()) && func_48(iParam0, 1, 0))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

bool func_304()//Position - 0xEF2E
{
	return Global_1942781.f_529 != -1;
}

int func_305(int iParam0)//Position - 0xEF3F
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535851[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_306()//Position - 0xEF66
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_305(iVar0) != 2147483647)
		{
			if (func_217(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_307()//Position - 0xEFA1
{
	Global_2684312.f_785.f_32 = 1;
}

void func_308()//Position - 0xEFB3
{
	Global_2684312.f_785.f_28 = 1;
	Global_2684312.f_785.f_32 = 0;
	Global_2684312.f_785.f_31 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	func_15(&(Global_2684312.f_785.f_29));
}

char* func_309()//Position - 0xEFED
{
	if (func_14())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_310(int iParam0, int iParam1, int iParam2)//Position - 0xF007
{
	int iVar0;
	
	if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_314(PLAYER::PLAYER_ID(), 1, 0))
	{
		return;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/))
	{
		return;
	}
	if (HUD::GET_PAUSE_MENU_STATE() != 0)
	{
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (func_313())
	{
		return;
	}
	if (!func_311())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0)
	{
		if (!Global_101444.f_1482 && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			iVar0 = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "BRDISTEX" /* GXT: You have insufficient funds. You can add GTA Dollars to your in-game account. */, iVar0, "BRSHETEX" /* GXT: Would you like to visit the Store? */, false, -1, 0, 0, true, 0);
			Global_2697303 = iParam1;
			Global_101444.f_1482 = 1;
			Global_101444.f_1483 = iParam2;
		}
	}
}

int func_311()//Position - 0xF0E2
{
	if (func_312())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_312()//Position - 0xF102
{
	return Global_2696462;
}

bool func_313()//Position - 0xF10E
{
	return Global_2697412;
}

int func_314(int iParam0, bool bParam1, bool bParam2)//Position - 0xF11A
{
	if (bParam1)
	{
		if (func_315(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845263[iParam0 /*877*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_315(int iParam0)//Position - 0xF14C
{
	return func_316(iParam0);
}

var func_316(int iParam0)//Position - 0xF15A
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_11.f_1, 0);
}

void func_317(int iParam0, int iParam1, int iParam2)//Position - 0xF171
{
	Global_101444.f_1484 = iParam0;
	Global_101444.f_1485 = iParam1;
	Global_101444.f_1486 = iParam2;
}

int func_318(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF194
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_47)
	{
		switch (uParam0->f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
				{
					if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
					{
						if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_398(uParam0->f_12);
				func_326(&sVar4, cVar3, func_327(uParam0));
				if (func_323(joaat("NET_SHOP_TTYPE_BASKET"), iParam1, MISC::GET_HASH_KEY(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_321())
					{
						HUD::USE_FAKE_MP_CASH(true);
						HUD::CHANGE_FAKE_MP_CASH(-iVar0, -iVar1);
						uParam0->f_48 = 1;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				else
				{
					uParam0->f_48 = 3;
				}
				break;
			
			case 1:
				if (func_320(func_306()))
				{
					if (func_319(func_306()) == 2)
					{
						uParam0->f_48 = 2;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_49 = 2;
				return 0;
				break;
			
			case 3:
				func_214(func_306());
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_49 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_48 = 0;
	uParam0->f_49 = -1;
	return 0;
}

int func_319(int iParam0)//Position - 0xF311
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535851[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_320(int iParam0)//Position - 0xF33A
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535851[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_321()//Position - 0xF365
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_222())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_306();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_87()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_322(Global_4535851[iVar2 /*85*/].f_66.f_6, Global_4535851[iVar2 /*85*/].f_66.f_4, Global_4535851[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4537357 = 1;
			}
			return 0;
		}
		if (Global_2697412)
		{
			if (Global_4535851[iVar2 /*85*/].f_66.f_6 == joaat("CATEGORY_WEAPON_AMMO") || Global_4535851[iVar2 /*85*/].f_66.f_6 == joaat("CATEGORY_MART"))
			{
				Global_4537358 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_305(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4535851[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535851[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535851[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4535851[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535851[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535851[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_220(Global_4535851[iVar2 /*85*/], iVar2);
			}
			Global_4537338 = 1;
			return 1;
		}
	}
	return 0;
}

int func_322(int iParam0, int iParam1, int iParam2)//Position - 0xF4C5
{
	if (iParam0 == joaat("CATEGORY_SERVICE") || iParam0 == joaat("CATEGORY_SERVICE_WITH_THRESHOLD"))
	{
		switch (iParam1)
		{
			case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("SERVICE_EARN_PICKUP"):
			case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
			case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
			case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
			case joaat("SERVICE_EARN_CASHING_OUT"):
			case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case joaat("SERVICE_EARN_DEBUG"):
				return 0;
				break;
			
			case joaat("SERVICE_EARN_INITIAL_CASH"):
			case joaat("SERVICE_EARN_JOBS"):
			case joaat("SERVICE_EARN_BETTING"):
			case joaat("SERVICE_EARN_LOTTERY"):
			case joaat("SERVICE_EARN_CHALLENGE_WIN"):
			case joaat("SERVICE_EARN_PROPERTY_SALES"):
			case joaat("SERVICE_EARN_VEHICLE_SALES"):
			case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
			case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
			case joaat("SERVICE_EARN_CRATE_DROP"):
			case joaat("SERVICE_EARN_HOLDUPS"):
			case joaat("SERVICE_EARN_IMPORT_EXPORT"):
			case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
			case joaat("SERVICE_EARN_JOBSHARE_CASH"):
			case joaat("SERVICE_EARN_NOT_BADSPORT"):
			case joaat("SERVICE_EARN_BANK_INTEREST"):
			case joaat("SERVICE_EARN_CNCW"):
			case joaat("SERVICE_EARN_CNCB"):
			case joaat("SERVICE_EARN_JOB_BONUS"):
			case joaat("SERVICE_EARN_BEND_JOB"):
			case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
			case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
			case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
			case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
			case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
			case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
			case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
			case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
			case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
			case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
			case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
			case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
			case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
			case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
			case joaat("SERVICE_EARN_REFUND_LOTTERY"):
			case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
			case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
			case joaat("SERVICE_EARN_BOSS"):
			case joaat("SERVICE_EARN_GOON"):
			case joaat("SERVICE_EARN_BOSS_AGENCY"):
			case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
			case joaat("SERVICE_EARN_PREMIUM_JOB"):
			case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
			case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
			case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
			case joaat("SERVICE_EARN_REFUNDAMMODROP"):
			case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
			case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
			case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
			case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
			case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
			case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
			case joaat("SERVICE_EARN_GANGOPS_WAGES"):
			case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
			case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
			case joaat("SERVICE_EARN_GANGOPS_SETUP"):
			case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
			case joaat("SERVICE_EARN_GANGOPS_FINALE"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
			case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
			case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
			case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
			case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
			case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
			case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
			case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
			case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
			case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
			case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
			case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
			case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
			case joaat("SERVICE_EARN_NIGHTCLUB_DANCING_AWARD"):
			case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
			case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
			case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
			case joaat("SERVICE_EARN_ARENA_WAR"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
			case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
			case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
			case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
			case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
			case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
			case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
			case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
			case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
			case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
			case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
			case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
			case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
			case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
				return 1;
				break;
			
			case joaat("SERVICE_SPEND_AIRSTRIKE"):
			case joaat("SERVICE_SPEND_AMMO_DROP"):
			case joaat("SERVICE_SPEND_BACKUP_GANG"):
			case joaat("SERVICE_SPEND_BACKUP_HELI"):
			case joaat("SERVICE_SPEND_BOAT_PICKUP"):
			case joaat("SERVICE_SPEND_BOUNTY"):
			case joaat("SERVICE_SPEND_BULL_SHARK"):
			case joaat("SERVICE_SPEND_CAR_IMPOUND"):
			case joaat("SERVICE_SPEND_CASH_SHARED"):
			case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
			case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
			case joaat("SERVICE_SPEND_HELI_PICKUP"):
			case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
			case joaat("SERVICE_SPEND_HIRE_MUGGER"):
			case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
			case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
			case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
			case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
			case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
			case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
			case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
				return 2;
				break;
		}
		switch (iParam1)
		{
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
			case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
			case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
			case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
			case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
			case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
			case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
			case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
			case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
			case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
			case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
			case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
			case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
			case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
			case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
			case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
			case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
			case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
			case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
			case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
			case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
			case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
			case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
			case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
			case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
			case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
			case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
			case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
			case joaat("SERVICE_EARN_FROM_CONTRABAND"):
			case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
			case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
			case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
			case joaat("SERVICE_EARN_TAXI_JOB"):
			case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
			case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
			case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
			case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
			case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
			case joaat("SERVICE_EARN_SMUGGLER_OPS"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
			case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
			case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
			case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
			case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_PREP"):
			case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_FINALE"):
			case joaat("SERVICE_EARN_WINTER_23_AWARD_CHICKEN_FACTORY_RAID"):
			case joaat("SERVICE_EARN_WINTER_23_AWARD_SALVAGE_YARD"):
			case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_PREP"):
			case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_FINALE"):
			case joaat("SERVICE_EARN_WEEKLY_OBJECTIVE_COMPLETED"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_TRUCK"):
			case joaat("SERVICE_EARN_SALVAGE_VEHICLE"):
			case joaat("SERVICE_EARN_SALVAGE_YARD_SELL_VEH"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_TOW_TRUCK_WORK"):
				if (iParam2 == 0)
				{
					return 0;
				}
				return 1;
				break;
			
			case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
			case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
				return 2;
				break;
		}
		return 0;
	}
	else if ((iParam0 == joaat("CATEGORY_SERVICE_WITH_LIMIT") || iParam0 == joaat("CATEGORY_PRICE_MODIFIER")) || iParam0 == joaat("CATEGORY_PRICE_OVERRIDE"))
	{
		return 0;
	}
	return 1;
}

int func_323(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xFB56
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_222())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_87()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537357 = 1;
			return 0;
		}
		if (Global_2697412)
		{
			if (iParam1 == joaat("CATEGORY_WEAPON_AMMO") || iParam1 == joaat("CATEGORY_MART"))
			{
				Global_4537358 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_306();
	if (iVar1 == -1)
	{
		if (!func_325(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_324(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_4535851[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4535851[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4535851[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0)//Position - 0xFC78
{
	switch (iParam0)
	{
		case joaat("CATEGORY_INVENTORY_ITEM"):
		case joaat("CATEGORY_INVENTORY_VEHICLE"):
		case joaat("CATEGORY_INVENTORY_VEHICLE_MOD"):
		case joaat("CATEGORY_INVENTORY_PROPERTIE"):
		case joaat("CATEGORY_INVENTORY_BEARD"):
		case joaat("CATEGORY_INVENTORY_MKUP"):
		case joaat("CATEGORY_INVENTORY_HAIR"):
		case joaat("CATEGORY_INVENTORY_EYEBROWS"):
		case joaat("CATEGORY_INVENTORY_CHEST_HAIR"):
		case joaat("CATEGORY_INVENTORY_CONTACTS"):
		case joaat("CATEGORY_INVENTORY_FACEPAINT"):
		case joaat("CATEGORY_INVENTORY_BLUSHER"):
		case joaat("CATEGORY_INVENTORY_LIPSTICK"):
		case joaat("CATEGORY_INVENTORY_PROPERTY_INTERIOR"):
		case joaat("CATEGORY_INVENTORY_WAREHOUSE"):
		case joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"):
		case joaat("CATEGORY_CONTRABAND_MISSION"):
		case joaat("CATEGORY_CONTRABAND_QNTY"):
		case joaat("CATEGORY_INVENTORY_WAREHOUSE_INTERIOR"):
		case joaat("CATEGORY_WAREHOUSE_VEHICLE_INDEX"):
			return 1;
			break;
	}
	return 0;
}

int func_325(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0xFD07
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_222())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_87()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537357 = 1;
			return 0;
		}
		if (Global_2697412)
		{
			if (iParam2 == joaat("CATEGORY_WEAPON_AMMO") || iParam2 == joaat("CATEGORY_MART"))
			{
				Global_4537358 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4535851[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4535851[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE())
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_END();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_219(iVar3, iParam1, joaat("SERVICE_INVALID"), iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

void func_326(char* sParam0, char* sParam1, int iParam2)//Position - 0xFE04
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_327(var uParam0)//Position - 0xFE28
{
	if (func_280(PLAYER::PLAYER_ID(), 1, 0) || func_328(PLAYER::PLAYER_ID()))
	{
		return 3;
	}
	else if (uParam0->f_50 >= 10 && uParam0->f_50 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_50 >= 15 && uParam0->f_50 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

int func_328(int iParam0)//Position - 0xFE91
{
	if (iParam0 != func_187())
	{
		if (func_48(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_329(Global_2657921[iParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_329(int iParam0)//Position - 0xFED8
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
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
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
	}
	return -1;
}

void func_330(var uParam0, bool bParam1)//Position - 0x104D3
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_399(uParam0->f_12))
	{
		iVar1 = (func_334(uParam0->f_12) - func_133(func_333(uParam0->f_12), -1));
		func_281(1, func_332(uParam0->f_12), joaat("snack"), iVar1, func_288(), joaat("purchase"), 1, func_331(bParam1, joaat("pa"), joaat("store")));
		func_129(func_333(uParam0->f_12), func_334(uParam0->f_12), -1, 1);
		bVar0 = true;
	}
	if (bVar0)
	{
		MONEY::NETWORK_BUY_ITEM(0, MISC::GET_HASH_KEY(func_398(uParam0->f_12)), 12, 1, false, 0, 0, 0, 0, true);
	}
	if (!bVar0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
}

int func_331(bool bParam0, int iParam1, int iParam2)//Position - 0x1058D
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_332(var uParam0)//Position - 0x105A4
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return -251807494;
		
		case 1:
			return 1199442189;
		
		case 2:
			return 1486811039;
		
		case 4:
			return -181862273;
		
		case 0:
			return -39155154;
		
		case 5:
			return -1600998734;
		
		case 6:
			return 495696637;
		
		default:
	}
	return 0;
}

int func_333(var uParam0)//Position - 0x1061A
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1276;
		
		case 1:
			return 1277;
		
		case 2:
			return 1278;
		
		case 4:
			return 1098;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		case 6:
			return 10405;
		
		default:
	}
	return 14626;
}

int func_334(var uParam0)//Position - 0x10682
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		case 6:
			return 10;
		
		default:
	}
	return 0;
}

void func_335(var uParam0, var uParam1, bool bParam2)//Position - 0x106E2
{
	char* sVar0;
	
	if (!uParam0->f_29)
	{
	}
	if (func_344(uParam0))
	{
		uParam0->f_27 = 0;
		func_343(&(uParam0->f_44));
		uParam0->f_12 = (uParam0->f_12 - 1);
		if (uParam0->f_12 < 0)
		{
			uParam0->f_12 = (uParam0->f_13 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_387(uParam0->f_12, 1, 1);
		sVar0 = func_385(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_386(sVar0, 0, 0);
		}
	}
	if (func_340(uParam0))
	{
		uParam0->f_27 = 0;
		func_343(&(uParam0->f_44));
		uParam0->f_12++;
		if (uParam0->f_12 > (uParam0->f_13 - 1))
		{
			uParam0->f_12 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_387(uParam0->f_12, 1, 1);
		sVar0 = func_385(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_386(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_29)
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(func_392(uParam0, uParam0->f_12), false, true, false, -1, 0))
		{
			uParam0->f_28 = 1;
		}
		else
		{
			uParam0->f_28 = 0;
			uParam0->f_36 = 1;
		}
		uParam0->f_29 = 1;
	}
	if (!uParam0->f_30)
	{
		uParam0->f_31 = 1;
		if (uParam0->f_12 == 3)
		{
			uParam0->f_31 = func_133(1276, -1) < 30;
		}
		else if (uParam0->f_12 == 1)
		{
			uParam0->f_31 = func_133(1277, -1) < 15;
		}
		else if (uParam0->f_12 == 2)
		{
			uParam0->f_31 = func_133(1278, -1) < 5;
		}
		else if (uParam0->f_12 == 4)
		{
			uParam0->f_31 = func_133(1098, -1) < 20;
		}
		else if (uParam0->f_12 == 0)
		{
			uParam0->f_31 = func_133(62, -1) < 10;
		}
		else if (uParam0->f_12 == 5)
		{
			uParam0->f_31 = func_133(63, -1) < 10;
		}
		else if (uParam0->f_12 == 6)
		{
			if (Global_262145.f_120 /* Tunable: ENABLE_SPRUNK_GTAO_PURCHASING */)
			{
				uParam0->f_31 = func_133(10405, -1) < 10;
			}
			else
			{
				uParam0->f_31 = 0;
			}
		}
		uParam0->f_30 = 1;
	}
	if (!uParam0->f_32)
	{
		if ((*uParam1)[uParam0->f_12] < 10)
		{
			uParam0->f_33 = 1;
		}
		else
		{
			uParam0->f_33 = 0;
			func_386("SNK_SOUT", 0, 0);
		}
		uParam0->f_32 = 1;
	}
	if (uParam0->f_27)
	{
		if (func_336(&(uParam0->f_44)) < 3f)
		{
			if (uParam0->f_35)
			{
				if (!bParam2)
				{
					func_386("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_386("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_28)
			{
				func_386("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_33)
			{
				func_386("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_31)
			{
				if (uParam0->f_12 == 3)
				{
					func_386("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 1)
				{
					func_386("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 2)
				{
					func_386("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_12 == 4)
				{
					func_386("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_12 == 0)
				{
					func_386("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 5)
				{
					func_386("SNK_DRK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 6)
				{
					func_386("SNK_DRK7FU", 0, 0);
				}
				else
				{
					func_386("SNK_NEEDED", 0, 0);
				}
				MISC::SET_BIT(&(uParam0->f_53), 26);
			}
		}
		else
		{
			uParam0->f_27 = 0;
			uParam0->f_35 = 0;
			func_343(&(uParam0->f_44));
			sVar0 = func_385(uParam0->f_12);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_386(sVar0, 0, 0);
			}
		}
	}
}

float func_336(var uParam0)//Position - 0x10A57
{
	if (func_339(uParam0))
	{
		if (func_338(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_337(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_337(bool bParam0)//Position - 0x10A90
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

bool func_338(var uParam0)//Position - 0x10AE8
{
	return BitTest(*uParam0, 2);
}

bool func_339(var uParam0)//Position - 0x10AF5
{
	return BitTest(*uParam0, 1);
}

int func_340(var uParam0)//Position - 0x10B02
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
	{
		if (!func_339(&(uParam0->f_41)))
		{
			func_342(&(uParam0->f_41));
			return 1;
		}
		else if (func_341(&(uParam0->f_41)) > 0.25f)
		{
			func_415(&(uParam0->f_41));
			return 1;
		}
	}
	else if (func_339(&(uParam0->f_41)))
	{
		func_343(&(uParam0->f_41));
	}
	return 0;
}

float func_341(var uParam0)//Position - 0x10B87
{
	if (func_339(uParam0))
	{
		if (func_338(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_337(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_342(int* iParam0)//Position - 0x10BC3
{
	if (!func_339(iParam0))
	{
		func_415(iParam0);
	}
}

void func_343(var uParam0)//Position - 0x10BDB
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_344(var uParam0)//Position - 0x10BF1
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
	{
		if (!func_339(&(uParam0->f_38)))
		{
			func_342(&(uParam0->f_38));
			return 1;
		}
		else if (func_341(&(uParam0->f_38)) > 0.25f)
		{
			func_415(&(uParam0->f_38));
			return 1;
		}
	}
	else if (func_339(&(uParam0->f_38)))
	{
		func_343(&(uParam0->f_38));
	}
	return 0;
}

int func_345()//Position - 0x10C76
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4541715 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_346(int iParam0, int iParam1, bool bParam2)//Position - 0x10C9D
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	if (Global_4541715 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			return 1;
		}
		else
		{
			Global_4541715 = -1;
			return 0;
		}
	}
	if (((Global_4541715 > -1 || Global_4541715 == -3) || Global_4541715 == -2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}
	if (Global_4541715 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4541715 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}
	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

void func_347(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x10D7D
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		Global_4541715 = -1;
		return;
	}
	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	fVar0 = Global_23708;
	fVar2 = (fVar0 + Global_23710);
	fVar3 = Global_23711.f_6333;
	fVar1 = (Global_23711.f_6333 - (IntToFloat(Global_23711.f_6335) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23711.f_6335 < 1)
	{
		fVar1 = (Global_23711.f_6333 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_350();
	if (Global_4541715 == -6)
	{
		return;
	}
	Global_4541715 = -1;
	fVar7 = Global_4541709;
	fVar8 = Global_4541710;
	if (Global_23711.f_6336 > Global_23711.f_6335)
	{
		if (((Global_4541709 >= fVar0 && Global_4541709 <= fVar2) && Global_4541710 >= fVar3) && Global_4541710 < (fVar3 + fVar6))
		{
			Global_4541715 = -2;
			if (bParam3)
			{
				func_349(0);
			}
			return;
		}
		if (((Global_4541709 >= fVar0 && Global_4541709 <= fVar2) && Global_4541710 >= (fVar3 + fVar6)) && Global_4541710 < (fVar3 + 0.034722f))
		{
			Global_4541715 = -3;
			if (bParam3)
			{
				func_349(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_23711.f_6336 == -1)
		{
			Global_4541715 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23711.f_6335);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_348(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23710, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4541715 = Global_23711.f_8737[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4541715 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4541715 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4541715 = -4;
		return;
	}
	Global_4541715 = -1;
}

void func_348(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x11029
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_349(bool bParam0)//Position - 0x11058
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23708;
	fVar1 = Global_23711.f_6333;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4541715 == -2)
	{
		func_348(fVar0, fVar1, Global_23710, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4541715 == -3)
	{
		func_348(fVar0, (fVar1 + fVar2), Global_23710, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_350()//Position - 0x110E1
{
	Global_4541711 = Global_4541709;
	Global_4541712 = Global_4541710;
	Global_4541709 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
	Global_4541710 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	Global_4541713 = (Global_4541709 - Global_4541711);
	Global_4541714 = (Global_4541710 - Global_4541712);
}

void func_351(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x11129
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int* iVar47;
	int* iVar48;
	int* iVar49;
	int* iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int* iVar60;
	int* iVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	float fVar96;
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_171(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_382(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23711)
	{
		if (func_380(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23711 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23710;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_23711.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_23709;
	}
	else
	{
		fVar59 = (((Global_23709 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_378(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23711.f_5821 <= 1)
		{
			func_394(Global_23711.f_5821 + 1, "DFLT_MNU_OPT" /* GXT: Exit */, 0, 1, 0, 0, 0);
			Global_23711.f_6617 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23711.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_23709;
			}
			else
			{
				if (Global_23711)
				{
					StringCopy(&cVar63, func_377(29), 64);
					StringCopy(&cVar79, func_375(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23711.f_7680[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_348(Global_23708, Global_23709, fParam5, fVar57, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23708 + (fParam5 * 0.5f)), (Global_23709 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23708 + (fParam5 * 0.5f)), (Global_23709 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23711.f_9086)
				{
					iVar1 = Global_23711.f_9082;
					iVar2 = Global_23711.f_9083;
					iVar3 = Global_23711.f_9084;
					iVar4 = Global_23711.f_9085;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_348(Global_23708, (Global_23709 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23709 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23711.f_1)) != 0)
				{
					func_374();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23711.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23711.f_74)
					{
						if (Global_23711.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23711.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_14[iVar16], Global_23711.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23711.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23711.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23711.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23711.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23711.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23711.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23708 + 0.00390625f), ((Global_23709 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23711.f_6338)
				{
					func_374();
					func_372((((Global_23708 + fParam5) - 0.00390625f) - func_373("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23711.f_6339, Global_23711.f_6340)), ((Global_23709 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23711.f_6339, Global_23711.f_6340);
				}
				else if (Global_23711.f_6334 > Global_23711.f_5828)
				{
					if (Global_23711.f_6337 != 0)
					{
						func_374();
						func_372((((Global_23708 + fParam5) - 0.00390625f) - func_373("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23711.f_6337, Global_23711.f_6336)), ((Global_23709 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23711.f_6337, Global_23711.f_6336);
					}
				}
			}
			iVar6 = Global_23711.f_6341;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23711.f_9096)
			{
				iVar1 = Global_23711.f_9092;
				iVar2 = Global_23711.f_9093;
				iVar3 = Global_23711.f_9094;
				iVar4 = Global_23711.f_9095;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23711.f_5828 && iVar6 <= Global_23711.f_5821)
			{
				if (iVar6 >= 0)
				{
					if (Global_23711.f_6088[iVar6])
					{
						if (Global_23711.f_5959[iVar6] && iVar6 != Global_23711.f_6341)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23711.f_6348[iVar6] != 0f)
						{
							fVar56 = Global_23711.f_6348[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23708 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23711.f_6334 > Global_23711.f_5828)
			{
				if (Global_23711.f_9101)
				{
					iVar1 = Global_23711.f_9097;
					iVar2 = Global_23711.f_9098;
					iVar3 = Global_23711.f_9099;
					iVar4 = Global_23711.f_9100;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_348(Global_23708, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23711.f_9114)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23708 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23711.f_5241)) != 0 && Global_23711.f_5323 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23708 + 0.0046875f);
				if (Global_23711.f_5325 != 0)
				{
					func_380(Global_23711.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23708 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_371(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23711.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23711.f_5319)
				{
					if (Global_23711.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23711.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_5262[iVar16], Global_23711.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23711.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_348(Global_23708, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23711.f_9106)
				{
					iVar1 = Global_23711.f_9102;
					iVar2 = Global_23711.f_9103;
					iVar3 = Global_23711.f_9104;
					iVar4 = Global_23711.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23708 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_371(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23711.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23711.f_5319)
				{
					if (Global_23711.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23711.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_5262[iVar16], Global_23711.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23711.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23711.f_5325 != 0)
				{
					func_380(Global_23711.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					func_370(Global_23711.f_5325, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_377(Global_23711.f_5325), func_375(Global_23711.f_5325, 1), ((Global_23708 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23711.f_5247)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_371(fVar42);
					fVar96 = 0.35f;
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23711.f_5247))) > 600)
					{
						fVar96 = (0.35f * 0.625f);
					}
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23711.f_5247));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_348(Global_23708, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23711.f_9106)
					{
						iVar1 = Global_23711.f_9102;
						iVar2 = Global_23711.f_9103;
						iVar3 = Global_23711.f_9104;
						iVar4 = Global_23711.f_9105;
					}
					else
					{
						HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23708 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
					func_371(fVar42);
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23711.f_5247));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23711.f_5323 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23711.f_5324) > Global_23711.f_5323)
					{
						StringCopy(&(Global_23711.f_5241), "", 24);
						Global_23711.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23711.f_5247)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23708 + 0.0046875f);
				fVar97 = 0.35f;
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23711.f_5247))) > 600)
				{
					fVar97 = (0.35f * 0.625f);
				}
				func_371(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23711.f_5247));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23711.f_5319)
				{
					if (Global_23711.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23711.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_5262[iVar16], Global_23711.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23711.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_348(Global_23708, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23711.f_9106)
				{
					iVar1 = Global_23711.f_9102;
					iVar2 = Global_23711.f_9103;
					iVar3 = Global_23711.f_9104;
					iVar4 = Global_23711.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23708 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
				func_371(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23711.f_5247));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4541639.f_21)) != 0 && Global_4541639.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23708 + 0.0046875f);
				if (Global_4541639.f_67 != 0)
				{
					func_380(Global_4541639.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23708 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_371(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4541639.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541639.f_61)
				{
					if (Global_4541639.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541639.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541639.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541639.f_34[iVar16], Global_4541639.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541639.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_348(Global_23708, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23711.f_9106)
				{
					iVar1 = Global_23711.f_9102;
					iVar2 = Global_23711.f_9103;
					iVar3 = Global_23711.f_9104;
					iVar4 = Global_23711.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23708 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_371(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4541639.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541639.f_61)
				{
					if (Global_4541639.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541639.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541639.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541639.f_34[iVar16], Global_4541639.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541639.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4541639.f_67 != 0)
				{
					func_380(Global_4541639.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_370(Global_4541639.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_377(Global_4541639.f_67), func_375(Global_4541639.f_67, 1), ((Global_23708 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4541639.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4541639.f_66) > Global_4541639.f_65)
					{
						StringCopy(&(Global_4541639.f_21), "", 16);
						Global_4541639.f_65 = -1;
					}
				}
			}
			func_365(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23711.f_6331)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_23711.f_5821;
			if (Global_23711.f_6332)
			{
				iVar98 = (Global_23711.f_6335 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_23711.f_6348[iVar6] != 0f)
				{
					fVar56 = Global_23711.f_6348[iVar6];
				}
				if (Global_23711.f_6332)
				{
					iVar6 = Global_23711.f_8737[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23711.f_6341 && iVar9 < Global_23711.f_5828)
				{
					bVar33 = true;
					if (Global_23711.f_6342 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_23711.f_5959[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23711.f_6482[iVar6] = fVar35;
				fVar34 = (Global_23708 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23711.f_6342 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_23711.f_9108)
					{
						HUD::GET_HUD_COLOUR(Global_23711.f_9107, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23708 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, false, 0);
					Global_23711.f_6480 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23711.f_5829)
				{
					if (BitTest(Global_23711.f_5692[iVar6], iVar8) || Global_23711.f_5659[iVar8] == 5)
					{
						if (Global_23711.f_6332)
						{
							iVar19 = Global_23711.f_8753[((iVar9 * Global_23711.f_5829) + iVar8)];
							iVar20 = Global_23711.f_8794[((iVar9 * Global_23711.f_5829) + iVar8)];
							iVar21 = Global_23711.f_8835[((iVar9 * Global_23711.f_5829) + iVar8)];
							iVar22 = Global_23711.f_8876[((iVar9 * Global_23711.f_5829) + iVar8)];
							iVar23 = Global_23711.f_8917[((iVar9 * Global_23711.f_5829) + iVar8)];
						}
						else
						{
							Global_23711.f_8753[((iVar9 * Global_23711.f_5829) + iVar8)] = iVar19;
							Global_23711.f_8794[((iVar9 * Global_23711.f_5829) + iVar8)] = iVar20;
							Global_23711.f_8835[((iVar9 * Global_23711.f_5829) + iVar8)] = iVar21;
							Global_23711.f_8876[((iVar9 * Global_23711.f_5829) + iVar8)] = iVar22;
							Global_23711.f_8917[((iVar9 * Global_23711.f_5829) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_23711.f_6614[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23711.f_6611[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_23711.f_6614[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23711.f_6611[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_23711.f_5665[iVar8] != -1f)
						{
							fVar34 = ((Global_23708 + 0.0046875f) + Global_23711.f_5665[iVar8]);
						}
						if ((iVar8 < 4 && Global_23711.f_5665[iVar8 + 1] != -1f) && fVar34 < Global_23711.f_5665[iVar8 + 1])
						{
							fVar46 = (Global_23711.f_5665[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23708 + Global_23710) - 0.0046875f) - fVar34);
						}
						if ((Global_23711.f_5678[iVar8] && Global_23711.f_6477) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23711.f_5659[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23711.f_6332)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23711.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23711.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_363(bVar32, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23711.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_4469[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_4726[(iVar21 + iVar27)], Global_23711.f_4855[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_380(Global_23711.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23711.f_4984[(iVar22 + iVar14)] == 2 || Global_23711.f_4984[(iVar22 + iVar14)] == 54) || Global_23711.f_4984[(iVar22 + iVar14)] == 64)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23711.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23711.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar42;
										Global_23711.f_8999[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar43;
										Global_23711.f_9040[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar44;
										if (Global_23711.f_5686[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_23711.f_5686[iVar101] == 2)
												{
													Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar101)] = (Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar101)] - Global_23711.f_5671[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)];
										fVar43 = Global_23711.f_8999[((iVar9 * Global_23711.f_5829) + iVar8)];
										fVar44 = Global_23711.f_9040[((iVar9 * Global_23711.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_380(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23711.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_380(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_370(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_377(26), func_375(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_380(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_380(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_370(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_377(27), func_375(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23711.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23711.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_363(bVar32, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23711.f_9112 && Global_23711.f_9113 == iVar6)
										{
											func_362(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23711.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_4469[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_4726[(iVar21 + iVar27)], Global_23711.f_4855[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23711.f_4984[(iVar22 + iVar28)] == 2 || Global_23711.f_4984[(iVar22 + iVar28)] == 54) || Global_23711.f_4984[(iVar22 + iVar28)] == 64)
											{
												if (func_380(Global_23711.f_4984[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_380(Global_23711.f_4984[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_370(Global_23711.f_4984[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23711.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_377(Global_23711.f_4984[(iVar22 + iVar28)]), func_375(Global_23711.f_4984[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_377(Global_23711.f_4984[(iVar22 + iVar28)]), func_375(Global_23711.f_4984[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23711.f_5686[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_361() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23711.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_363(0, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23711.f_6341 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23711.f_4984[(iVar22 + iVar14)] != 2 && Global_23711.f_4984[(iVar22 + iVar14)] != 54) && Global_23711.f_4984[(iVar22 + iVar14)] != 64)
											{
												if (func_380(Global_23711.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_380(Global_23711.f_4984[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_370(Global_23711.f_4984[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23711.f_4984[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_377(Global_23711.f_4984[(iVar22 + iVar14)]), func_375(Global_23711.f_4984[(iVar22 + iVar14)], bVar32), (Global_23708 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else if (Global_23711.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_377(Global_23711.f_4984[(iVar22 + iVar14)]), func_375(Global_23711.f_4984[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_377(Global_23711.f_4984[(iVar22 + iVar14)]), func_375(Global_23711.f_4984[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23711.f_6332)
									{
										func_363(bVar32, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23711.f_9112 && Global_23711.f_9113 == iVar6)
										{
											func_362(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_4469[iVar20]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23711.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23711.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar42;
										Global_23711.f_8999[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)];
										fVar43 = Global_23711.f_8999[((iVar9 * Global_23711.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_380(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23711.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_380(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_370(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_377(26), func_375(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_380(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_380(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_370(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_377(27), func_375(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_363(bVar32, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, 0, 0, 0);
										func_360((fVar34 + fVar42), fVar35, "NUMBER", Global_23711.f_4469[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23711.f_6332)
									{
										func_363(bVar32, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23711.f_9112 && Global_23711.f_9113 == iVar6)
										{
											func_362(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_4726[iVar21], Global_23711.f_4855[iVar21]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23711.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23711.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar42;
										Global_23711.f_8999[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)];
										fVar43 = Global_23711.f_8999[((iVar9 * Global_23711.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_380(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23711.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_380(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_370(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_377(26), func_375(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_380(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_380(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_370(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_377(27), func_375(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									func_363(bVar32, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, 0, 0, 0);
									func_359((fVar34 + fVar42), fVar35, "NUMBER", Global_23711.f_4726[iVar21], Global_23711.f_4855[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_380(Global_23711.f_4984[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23711.f_6332)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23711.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23711.f_5686[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar42;
											Global_23711.f_9040[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)];
											fVar44 = Global_23711.f_9040[((iVar9 * Global_23711.f_5829) + iVar8)];
										}
										if (bVar54)
										{
											if (func_380(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23711.f_5686[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_380(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_370(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_377(26), func_375(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
											if (func_380(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_380(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_370(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_377(27), func_375(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_380(Global_23711.f_4984[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_370(Global_23711.f_4984[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_377(Global_23711.f_4984[iVar22]), func_375(Global_23711.f_4984[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_358(Global_23711.f_4984[iVar22])), (fVar37 * func_358(Global_23711.f_4984[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23711.f_5659[iVar8] == 5)
						{
							if (Global_23711.f_5671[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23711.f_5671[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23711.f_5671[iVar8]);
							if (Global_23711.f_5678[iVar8])
							{
								if (func_380(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23711.f_5671[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23711.f_8737[iVar9] = iVar6;
						Global_23711.f_6343 = iVar6;
						iVar9++;
						if (Global_23711.f_5959[iVar6])
						{
							iVar13++;
						}
						if (Global_23711.f_6348[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_23711.f_6348[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_23711.f_6331)
					{
						Global_23711.f_6088[iVar6] = 1;
						if (Global_23711.f_5830[iVar6])
						{
							if (bVar32)
							{
								Global_23711.f_6337 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23711.f_6337 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23711.f_6331)
			{
				Global_23711.f_6333 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_23711.f_6336 = iVar11;
				Global_23711.f_6334 = iVar10;
				Global_23711.f_6331 = 1;
			}
		}
		if (!Global_23711.f_6332)
		{
			Global_23711.f_6335 = iVar9;
			Global_23711.f_6332 = 1;
		}
		iVar5++;
	}
	Global_23711.f_6479 = fVar51;
	Global_23711.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23711.f_6479);
	if (!Global_23711.f_9081)
	{
		func_353(0);
	}
	Global_23711.f_9081 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_352(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_352(int iParam0)//Position - 0x142E8
{
	Global_1669875.f_1163 = iParam0;
}

void func_353(int iParam0)//Position - 0x142F9
{
	if (func_357())
	{
		return;
	}
	if (!Global_20813.f_1 == 1)
	{
		if (func_175(0))
		{
			func_354(iParam0);
		}
		MISC::SET_BIT(&Global_8684, 2);
	}
}

void func_354(int iParam0)//Position - 0x1432C
{
	if (func_357())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_356())
		{
			func_355(1, 1);
		}
		else
		{
			func_355(0, 0);
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
	if (!func_244())
	{
		Global_20813.f_1 = 3;
	}
}

void func_355(bool bParam0, bool bParam1)//Position - 0x143B6
{
	if (bParam0)
	{
		if (func_175(0))
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

bool func_356()//Position - 0x1442A
{
	return BitTest(Global_1956030, 5);
}

bool func_357()//Position - 0x14438
{
	return BitTest(Global_1956030, 19);
}

float func_358(int iParam0)//Position - 0x14447
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 56:
		case 47:
		case 48:
		case 49:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_359(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x144B6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_360(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x144D5
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_361()//Position - 0x144F3
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_362(bool bParam0)//Position - 0x14504
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23711.f_9109[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23711.f_9109[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_363(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1454A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_364(Global_23711.f_6614[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_364(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x146F8
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_365(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x14982
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_171(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_382(bParam4, bParam8))
	{
		return;
	}
	if (func_368())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_85(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_23711.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = 0;
			while (iVar1 < Global_23711.f_5326)
			{
				if (Global_23711.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23711.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23711.f_5625[iVar1], true), 64);
				}
				else if (Global_23711.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23711.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23711.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23711.f_5327 = 0;
		}
		if (!Global_23711.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23711.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23711.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_23711.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_367(&(Global_23711.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23711.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_367(&(Global_23711.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23711.f_5610[iVar1] == -1)
					{
						func_366(&(Global_23711.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23711.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23711.f_5553[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23711.f_5625[iVar1] != 365 && BitTest(Global_23711.f_5655, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23711.f_5625[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4541639.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23711.f_5326);
				func_367(&Global_4541639);
				if (Global_4541639.f_20 == -1)
				{
					func_366(&(Global_4541639.f_16));
				}
				else
				{
					iVar4 = Global_23711.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541639.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23711.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23711.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23711.f_5326)
		{
			if (Global_23711.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23711.f_5553[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4541639.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541639.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23711.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23711.f_9116 = 1;
			}
		}
		else if (Global_23711.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23711.f_9116 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23711.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23711.f_6263[iVar0 /*10*/], Global_23711.f_5656, Global_23711.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23711.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_366(char* sParam0)//Position - 0x14E87
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_367(char* sParam0)//Position - 0x14E99
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_368()//Position - 0x14EA7
{
	struct<3> Var0;
	
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	if (func_369())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20758 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_369()//Position - 0x14F15
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_370(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0x14F2F
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 56:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 47:
		case 48:
		case 49:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 57:
			*iParam5 = 100;
			break;
		
		case 65:
			*iParam5 = 100;
			break;
		
		case 58:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_371(float fParam0)//Position - 0x15050
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23708 + Global_23710) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_372(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x150AF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_373(char* sParam0, int iParam1, int iParam2)//Position - 0x150D2
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_374();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_374()//Position - 0x15114
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23711.f_9091)
	{
		iVar0 = Global_23711.f_9087;
		iVar1 = Global_23711.f_9088;
		iVar2 = Global_23711.f_9089;
		iVar3 = Global_23711.f_9090;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23708 + 0.0046875f), ((Global_23708 + Global_23710) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

var func_375(int iParam0, bool bParam1)//Position - 0x1519E
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23711.f_7680[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23711.f_7680[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_69(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_376(&uVar3);
			}
		}
		else
		{
			return func_376(&(Global_23711.f_7680[iParam0 /*16*/]));
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

var func_376(var uParam0)//Position - 0x156C8
{
	return uParam0;
}

char* func_377(int iParam0)//Position - 0x156D2
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23711.f_6623[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23711.f_6623[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_69(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_376(&uVar0);
		}
		else
		{
			return func_376(&(Global_23711.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 54)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_378(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0x15747
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
	if (func_379(*iParam1, *iParam2))
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

bool func_379(int iParam0, int iParam1)//Position - 0x157CF
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_380(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x157EA
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_377(iParam0), 64);
	StringCopy(&cVar16, func_375(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_378(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_381(iParam0) / fVar34);
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
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23711.f_7680[29 /*16*/])) == joaat("CREW_LOGO"))
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
			if (*fParam3 > Global_23710)
			{
				*fParam4 = (*fParam4 * (Global_23710 / *fParam3));
				*fParam3 = Global_23710;
			}
		}
		return 1;
	}
	return 0;
}

float func_381(int iParam0)//Position - 0x15916
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

int func_382(bool bParam0, bool bParam1)//Position - 0x159EA
{
	if (Global_2672741.f_1689.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_254(8, -1) && func_383() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_79509) || Global_23711.f_9115) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_101444.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_383()//Position - 0x15A87
{
	return Global_1575008;
}

void func_384(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x15A93
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23711.f_5326 >= 14)
	{
		StringCopy(&Global_4541639, sVar0, 64);
		StringCopy(&(Global_4541639.f_16), sParam1, 16);
		Global_4541639.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_23711.f_5655), Global_23711.f_5326);
	}
	StringCopy(&(Global_23711.f_5328[Global_23711.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23711.f_5553[Global_23711.f_5326 /*4*/]), sParam1, 16);
	Global_23711.f_5610[Global_23711.f_5326] = iParam2;
	Global_23711.f_5625[Global_23711.f_5326] = iParam0;
	Global_23711.f_5640[Global_23711.f_5326] = 32;
	Global_23711.f_5326++;
}

char* func_385(int iParam0)//Position - 0x15B48
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 7;
	}
	switch (iVar0)
	{
		case 7:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		case 6:
			return "SNK_ITEM7_D";
		
		default:
	}
	return "";
}

void func_386(char* sParam0, int iParam1, int iParam2)//Position - 0x15BD3
{
	int iVar0;
	
	StringCopy(&(Global_23711.f_5241), sParam0, 24);
	Global_23711.f_5319 = 0;
	Global_23711.f_5320 = 0;
	Global_23711.f_5321 = 0;
	Global_23711.f_5322 = 0;
	Global_23711.f_5323 = iParam1;
	Global_23711.f_5324 = MISC::GET_GAME_TIMER();
	Global_23711.f_5325 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23711.f_5253[iVar0] = 0;
		iVar0++;
	}
}

void func_387(var uParam0, bool bParam1, int iParam2)//Position - 0x15C38
{
	int iVar0;
	int iVar1;
	
	Global_23711.f_6342 = uParam0;
	Global_23711.f_6477 = iParam2;
	if (Global_23711.f_6342 < Global_23711.f_6341)
	{
		Global_23711.f_6341 = Global_23711.f_6342;
	}
	else if ((Global_23711.f_6332 && Global_23711.f_6342 > Global_23711.f_6343) || (!Global_23711.f_6332 && Global_23711.f_6342 >= (Global_23711.f_6341 + Global_23711.f_5828)))
	{
		iVar0 = Global_23711.f_6341;
		while (iVar0 <= Global_23711.f_6342)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23711.f_5692[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23711.f_5828 && Global_23711.f_6341 < 128)
		{
			Global_23711.f_6341++;
			iVar1 = 0;
			iVar0 = Global_23711.f_6341;
			while (iVar0 <= Global_23711.f_6342)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23711.f_5692[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23711.f_6331 = 0;
	Global_23711.f_6332 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23711.f_5241), "", 24);
		StringCopy(&(Global_4541639.f_21), "", 16);
	}
}

void func_388(int iParam0)//Position - 0x15D8A
{
	Global_23711.f_6341 = iParam0;
}

void func_389(var uParam0, bool bParam1)//Position - 0x15D9A
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23711.f_5825 >= 256)
	{
		return;
	}
	if (Global_23711.f_6346 >= 4)
	{
		return;
	}
	if (Global_23711.f_6347 != 1)
	{
		return;
	}
	if (Global_23711.f_6346 >= Global_23711.f_6344)
	{
		return;
	}
	Global_23711.f_4469[Global_23711.f_5825] = uParam0;
	Global_23711.f_5825++;
	Global_23711.f_2387[Global_23711.f_6345 /*5*/][Global_23711.f_6346] = 2;
	Global_23711.f_6346++;
	if (Global_23711.f_6346 >= Global_23711.f_6344)
	{
		fVar0 = func_391();
		if (Global_23711.f_5678[Global_23711.f_5822] && Global_23711.f_6346 == Global_23711.f_6344)
		{
			func_380(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23711.f_5671[(Global_23711.f_5822 - 1)])
		{
			Global_23711.f_5671[(Global_23711.f_5822 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23711.f_6346 >= Global_23711.f_6344)
		{
			fVar3 = func_390();
			if (fVar3 > Global_23711.f_6348[Global_23711.f_5821])
			{
				Global_23711.f_6348[Global_23711.f_5821] = fVar3;
			}
		}
	}
}

float func_390()//Position - 0x15ED5
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23711.f_6346)
	{
		if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23711.f_4984[((Global_23711.f_5827 - iVar1) + iVar0)] != 0)
		{
			if (func_380(Global_23711.f_4984[((Global_23711.f_5827 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_391()//Position - 0x15F88
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23711.f_6346)
	{
		if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_363(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
	{
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23711.f_79[Global_23711.f_6345 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23711.f_6346)
	{
		if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_79[(Global_23711.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_79[(Global_23711.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_4469[((Global_23711.f_5825 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_4726[((Global_23711.f_5826 - iVar4) + iVar10)], Global_23711.f_4855[((Global_23711.f_5826 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[((Global_23711.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696501[((Global_23711.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[((Global_23711.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[((Global_23711.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
	{
		fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23711.f_4984[((Global_23711.f_5827 - iVar5) + iVar7)] != 0)
		{
			func_380(Global_23711.f_4984[((Global_23711.f_5827 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_392(var uParam0, int iParam1)//Position - 0x163CF
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_327(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return Global_262145.f_127 /* Tunable: SHOP_ECOLA_CAN_COST */;
				
				case 6:
					return Global_262145.f_125 /* Tunable: SHOP_SPRUNK_CAN_COST */;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return Global_262145.f_127 /* Tunable: SHOP_ECOLA_CAN_COST */;
				
				case 6:
					return Global_262145.f_125 /* Tunable: SHOP_SPRUNK_CAN_COST */;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return Global_262145.f_128 /* Tunable: PROPERTY_ECOLA_CAN_COST */;
				
				case 6:
					return Global_262145.f_126 /* Tunable: PROPERTY_SPRUNK_CAN_COST */;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

void func_393(int iParam0, bool bParam1)//Position - 0x16508
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23711.f_5827 >= 256)
	{
		return;
	}
	if (Global_23711.f_6346 >= 4)
	{
		return;
	}
	if (Global_23711.f_6347 != 1)
	{
		return;
	}
	if (Global_23711.f_6346 >= Global_23711.f_6344)
	{
		return;
	}
	Global_23711.f_4984[Global_23711.f_5827] = iParam0;
	Global_23711.f_5827++;
	Global_23711.f_2387[Global_23711.f_6345 /*5*/][Global_23711.f_6346] = 4;
	Global_23711.f_6346++;
	if (Global_23711.f_6346 >= Global_23711.f_6344)
	{
		fVar0 = func_391();
		if (Global_23711.f_5678[Global_23711.f_5822] && Global_23711.f_6346 == Global_23711.f_6344)
		{
			func_380(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23711.f_5671[(Global_23711.f_5822 - 1)])
		{
			Global_23711.f_5671[(Global_23711.f_5822 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23711.f_6346 >= Global_23711.f_6344)
		{
			fVar3 = func_390();
			if (fVar3 > Global_23711.f_6348[Global_23711.f_5821])
			{
				Global_23711.f_6348[Global_23711.f_5821] = fVar3;
			}
		}
	}
}

void func_394(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x16643
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23711.f_5821 > iParam0)
	{
		return;
	}
	if (Global_23711.f_5821 >= 128)
	{
		return;
	}
	if (Global_23711.f_5823 >= 256)
	{
		return;
	}
	if (Global_23711.f_6346 < Global_23711.f_6344)
	{
		return;
	}
	if (Global_23711.f_5821 != iParam0)
	{
		Global_23711.f_5821 = iParam0;
		Global_23711.f_5822 = 0;
	}
	iVar0 = Global_23711.f_5659[Global_23711.f_5822];
	if (iVar0 != 1)
	{
		while (Global_23711.f_5822 < 4 && iVar0 != 1)
		{
			Global_23711.f_5822++;
			iVar0 = Global_23711.f_5659[Global_23711.f_5822];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23711.f_79[Global_23711.f_5823 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23711.f_1616[Global_23711.f_5823] = bParam3;
	Global_23711.f_1873[Global_23711.f_5823] = iParam4;
	Global_23711.f_2130[Global_23711.f_5823] = iParam6;
	Global_23711.f_5823++;
	if (!bParam3)
	{
		func_397(Global_23711.f_5821, 1);
	}
	else
	{
		func_397(Global_23711.f_5821, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_396(&(Global_23711.f_79[Global_23711.f_5823 /*6*/]));
		if (Global_23711.f_5678[Global_23711.f_5822])
		{
			func_380(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23711.f_5671[Global_23711.f_5822])
		{
			Global_23711.f_5671[Global_23711.f_5822] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_395(&(Global_23711.f_79[Global_23711.f_5823 /*6*/]));
			if (fVar4 > Global_23711.f_6348[iParam0])
			{
				Global_23711.f_6348[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23711.f_5692[iParam0]), Global_23711.f_5822);
	Global_23711.f_5822++;
	Global_23711.f_6347 = 1;
	Global_23711.f_6345 = (Global_23711.f_5823 - 1);
	Global_23711.f_6346 = 0;
	Global_23711.f_6344 = iParam2;
}

float func_395(char* sParam0)//Position - 0x1685F
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_396(char* sParam0)//Position - 0x1687B
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_363(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_397(int iParam0, bool bParam1)//Position - 0x168B8
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23711.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23711.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
}

char* func_398(int iParam0)//Position - 0x16904
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		case 6:
			return "SNK_ITEM7";
		
		default:
	}
	return "";
}

int func_399(int iParam0)//Position - 0x16976
{
	if (func_133(func_333(iParam0), -1) >= func_334(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_400(int iParam0, char* sParam1, char* sParam2)//Position - 0x16997
{
	Global_23711 = iParam0;
	func_401(29, sParam1, sParam2);
}

void func_401(int iParam0, char* sParam1, char* sParam2)//Position - 0x169AE
{
	StringCopy(&(Global_23711.f_6623[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23711.f_7680[iParam0 /*16*/]), sParam2, 64);
}

void func_402(char* sParam0)//Position - 0x169D2
{
	int iVar0;
	
	StringCopy(&(Global_23711.f_1), sParam0, 16);
	Global_23711.f_74 = 0;
	Global_23711.f_75 = 0;
	Global_23711.f_76 = 0;
	Global_23711.f_77 = 0;
	Global_23711.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23711.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_403(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x16A1D
{
	Global_23711.f_5686[0] = iParam0;
	Global_23711.f_5686[1] = iParam1;
	Global_23711.f_5686[2] = iParam2;
	Global_23711.f_5686[3] = iParam3;
	Global_23711.f_5686[4] = iParam4;
}

void func_404(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x16A5C
{
	Global_23711.f_5659[0] = iParam0;
	Global_23711.f_5659[1] = iParam1;
	Global_23711.f_5659[2] = iParam2;
	Global_23711.f_5659[3] = iParam3;
	Global_23711.f_5659[4] = iParam4;
	Global_23711.f_5829 = 0;
	if (iParam0 != 0)
	{
		Global_23711.f_5829++;
	}
	if (iParam1 != 0)
	{
		Global_23711.f_5829++;
	}
	if (iParam2 != 0)
	{
		Global_23711.f_5829++;
	}
	if (iParam3 != 0)
	{
		Global_23711.f_5829++;
	}
	if (iParam4 != 0)
	{
		Global_23711.f_5829++;
	}
}

void func_405(bool bParam0, bool bParam1)//Position - 0x16B06
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23711.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23711.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2696501[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23711.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23711.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23711.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23711.f_5692[iVar0] = 0;
		Global_23711.f_5830[iVar0] = 0;
		Global_23711.f_5959[iVar0] = 0;
		Global_23711.f_6482[iVar0] = 0f;
		Global_23711.f_6088[iVar0] = 0;
		Global_23711.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23711.f_5659[iVar0] = 0;
		Global_23711.f_5671[iVar0] = 0f;
		Global_23711.f_5665[iVar0] = -1f;
		Global_23711.f_5678[iVar0] = 0;
		Global_23711.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23711.f_5553[iVar0 /*4*/]), "", 16);
		Global_23711.f_5610[iVar0] = -1;
		Global_23711.f_5625[iVar0] = 365;
		Global_23711.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 66)
	{
		StringCopy(&(Global_23711.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23711.f_7680[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23711.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4541639.f_16), "", 16);
	Global_4541639.f_20 = -1;
	Global_23711 = 0;
	Global_23711.f_5821 = 0;
	Global_23711.f_5822 = 0;
	Global_23711.f_5823 = 0;
	Global_23711.f_5825 = 0;
	Global_23711.f_5826 = 0;
	Global_23711.f_5827 = 0;
	Global_23711.f_5824 = 0;
	Global_23711.f_6477 = 0;
	Global_23711.f_6617 = 0;
	Global_23711.f_6342 = 0;
	Global_23711.f_6341 = 0;
	Global_23711.f_6343 = 0;
	StringCopy(&(Global_23711.f_5241), "", 24);
	Global_23711.f_5319 = 0;
	Global_23711.f_5320 = 0;
	Global_23711.f_5321 = 0;
	Global_23711.f_5322 = 0;
	Global_23711.f_5323 = 0;
	Global_23711.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23711.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_23711.f_5325 = 0;
	StringCopy(&(Global_4541639.f_21), "", 16);
	Global_4541639.f_61 = 0;
	Global_4541639.f_62 = 0;
	Global_4541639.f_63 = 0;
	Global_4541639.f_64 = 0;
	Global_4541639.f_65 = 0;
	Global_4541639.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4541639.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4541639.f_67 = 0;
	StringCopy(&(Global_23711.f_1), "", 16);
	Global_23711.f_5677 = 0f;
	Global_23711.f_74 = 0;
	Global_23711.f_75 = 0;
	Global_23711.f_76 = 0;
	Global_23711.f_77 = 0;
	Global_23711.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23711.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23711.f_6347 = 0;
	Global_23711.f_6346 = 0;
	Global_23711.f_6344 = 0;
	Global_23711.f_6345 = 0;
	Global_23711.f_5326 = 0;
	Global_23711.f_5327 = 0;
	Global_23711.f_5828 = 10;
	Global_23711.f_5829 = 0;
	Global_23711.f_6479 = 0f;
	Global_23711.f_6480 = 0f;
	Global_23711.f_6331 = 0;
	Global_23711.f_6332 = 0;
	Global_23711.f_6333 = 0f;
	Global_23711.f_6334 = 0;
	Global_23711.f_6336 = 0;
	Global_23711.f_6335 = 0;
	Global_23711.f_6337 = 0;
	Global_23711.f_6338 = 0;
	Global_23711.f_6339 = 0;
	Global_23711.f_6340 = 0;
	Global_23711.f_9112 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23711.f_6611[iVar0] = -1;
		Global_23711.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_23711.f_5684 = 0f;
	Global_23711.f_5655 = 0;
	Global_23711.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23711.f_6618)
	{
		Global_23711.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_23711.f_9091 = 0;
	Global_23711.f_9086 = 0;
	Global_23711.f_9096 = 0;
	Global_23711.f_9101 = 0;
	Global_23711.f_9106 = 0;
	Global_23711.f_9108 = 0;
	Global_23711.f_9114 = 0;
	Global_23708 = 0.05f;
	Global_23709 = 0.05f;
	Global_23710 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23710 = (0.225f * (1.7777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23710 = (0.225f * (1.7777778f / fVar2));
	}
	else
	{
		Global_23710 = 0.225f;
	}
}

int func_406()//Position - 0x16FF9
{
	if (!Global_262145.f_120 /* Tunable: ENABLE_SPRUNK_GTAO_PURCHASING */)
	{
		return (7 - 1);
	}
	return 7;
}

int func_407(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x17012
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-706.6382f, -913.68866f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(1698.3065f, 4923.3706f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-1820.4653f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			Var0 = { 1165.9581f, 2710.201f, 38.14286f };
			fVar3 = -1.15f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			Var0 = { -2967.0269f, 390.9038f, 15.02f };
			fVar3 = -94.76f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			Var0 = { -1222.3306f, -907.82336f, 12.31f };
			fVar3 = -147.297f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			Var0 = { 1134.8114f, -982.36145f, 46.4f };
			fVar3 = 96.68562f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			Var0 = { -1486.6729f, -378.4638f, 40.15f };
			fVar3 = -46.229f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			Var0 = { -3244.5735f, 1000.6578f, 12.83f };
			fVar3 = 175.074f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			Var0 = { -3041.3567f, 584.26654f, 7.9f };
			fVar3 = -162.241f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			Var0 = { 548.9015f, 2668.9414f, 42.15f };
			fVar3 = -82.5f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			Var0 = { 2554.875f, 381.38574f, 108.62f };
			fVar3 = 177.716f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			Var0 = { 2676.2124f, 3280.9695f, 55.24f };
			fVar3 = 150.87f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			Var0 = { 1729.3295f, 6417.123f, 35.03f };
			fVar3 = 63.641f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			Var0 = { 1959.323f, 3742.2896f, 32.34f };
			fVar3 = 120f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			Var0 = { 24.94562f, -1344.9545f, 29.49f };
			fVar3 = 90f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			Var0 = { 373.5954f, 328.5892f, 103.56f };
			fVar3 = 75.885f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.6526f, 3598.9656f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_408()//Position - 0x177AB
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::SET_CURSOR_POSITION(0.325f, 0.3f);
	}
}

void func_409(int iParam0, int iParam1)//Position - 0x177C9
{
	if (!func_314(PLAYER::PLAYER_ID(), 1, 0) || iParam1)
	{
		if (!func_414())
		{
			Global_1574582.f_1 = 1;
			Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1574582.f_2 = 1;
			}
			func_410(7, 0, -1);
		}
	}
}

void func_410(int iParam0, int iParam1, int iParam2)//Position - 0x1781E
{
	if (!func_414() || iParam1)
	{
		Global_1574582 = 1;
		func_413(1);
		if (((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_412()) && !func_411(PLAYER::PLAYER_ID())) && !func_145(PLAYER::PLAYER_ID()))
		{
			Global_1057440 = 1;
		}
		Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_8 = 1;
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(true, iParam0, iParam2, -1);
	}
}

int func_411(int iParam0)//Position - 0x1788B
{
	if (func_314(iParam0, 1, 0))
	{
		if (Global_1845263[iParam0 /*877*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_412()//Position - 0x178B0
{
	return Global_2684312.f_841;
}

void func_413(bool bParam0)//Position - 0x178BF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_414())
		{
			if (func_48(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_48(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_414()//Position - 0x179B8
{
	return Global_1574582;
}

void func_415(int* iParam0)//Position - 0x179C4
{
	func_416(iParam0, 0f);
}

void func_416(int* iParam0, float fParam1)//Position - 0x179D3
{
	iParam0->f_1 = (func_337(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_417(int iParam0, bool bParam1)//Position - 0x179FE
{
	int iVar0;
	
	iVar0 = func_270(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_175(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/] == 1 && Global_44676[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44676[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44676[iVar0 /*32*/].f_5 = 1;
			Global_44676[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44676[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44676[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_418()//Position - 0x17AB6
{
	if (Global_114370.f_20413.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_419()//Position - 0x17AD3
{
	return Global_23570;
}

int func_420(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x17ADE
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.9547f, 3604.3794f, 33.98091f };
			*uParam4 = { 1394.4752f, 3605.6636f, 35.98091f };
			*uParam5 = { 1392.5505f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_421(int iParam0, int iParam1)//Position - 0x17CC4
{
	return BitTest(Global_2657921[iParam0 /*463*/].f_218, iParam1);
}

void func_422(var uParam0, var uParam1)//Position - 0x17CDA
{
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	func_466(PLAYER::PLAYER_ID(), 1, 0, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (uParam0->f_51 > 0)
	{
		*uParam1 = uParam0->f_51;
		uParam0->f_51 = 0;
	}
	func_443();
	MISC::CLEAR_BIT(&(uParam0->f_53), 7);
	if (func_153("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (uParam0->f_14 != -1)
	{
		func_269(&(uParam0->f_14));
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

int func_423(float fParam0)//Position - 0x17D65
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fParam0 <= 0f)
		{
			return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0) > 0;
		}
	}
	return 0;
}

int func_424(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x17DB7
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_425(var uParam0)//Position - 0x17E0A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_426()//Position - 0x17E34
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_559);
	TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_559);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_560);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_560);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_561);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_546, 2f, -1, 0.25f, 0, fLocal_549);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0f, false, false, false);
	TASK::TASK_SMART_FLEE_COORD(0, Local_546, 250f, -1, true, false);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_561);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_563);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0f, false, false, false);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_563);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_562);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_546, 2f, -1, 0.25f, 0, (fLocal_549 - 180f));
	TASK::TASK_SWAP_WEAPON(0, true);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_562);
}

void func_427(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x17FBB
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

int func_428(int iParam0)//Position - 0x18059
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_429()//Position - 0x18078
{
	return Local_88.f_13;
}

char* func_430(int iParam0)//Position - 0x18084
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_431()//Position - 0x18130
{
	struct<3> Var0;
	
	if (func_439(&(Local_484.f_50), 0))
	{
		func_437(Local_484.f_50, &iLocal_583, &iLocal_584, &iLocal_585, &iLocal_586, &Local_587, &Local_590);
		func_436(Local_484.f_50, &Local_593, &Local_596, &fLocal_599);
		func_435(Local_484.f_50, &Local_600, &Local_603, &fLocal_606);
		switch (Local_484.f_50)
		{
			case 0:
				Local_551 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				Local_554 = { 0f, 0f, 21.89f };
				iLocal_542 = func_54(0);
				Local_546 = { 1394.852f, 3609.5088f, 33.9809f };
				fLocal_549 = 116.5329f;
				iLocal_578 = 1;
				if (func_433(6, 18))
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 0;
					iLocal_772[1] = 0;
					iLocal_778[1] = 0;
					iLocal_772[2] = 0;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 0;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 1;
					iLocal_778[0] = 0;
					iLocal_772[1] = 1;
					iLocal_778[1] = 1;
					iLocal_772[2] = 1;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 0;
					iLocal_778[4] = 0;
				}
				break;
			
			case 1:
				Local_554 = { 0f, 0f, -160f };
				Local_551 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_542 = func_54(0);
				Local_546 = { -3047.5117f, 588.9807f, 6.9089f };
				fLocal_549 = 178.8753f;
				iLocal_578 = 1;
				if (func_433(6, 18))
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 1;
					iLocal_772[1] = 1;
					iLocal_778[1] = 0;
					iLocal_772[2] = 0;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 0;
					iLocal_778[4] = 1;
				}
				else
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 0;
					iLocal_772[1] = 0;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 0;
					iLocal_778[4] = 1;
				}
				break;
			
			case 2:
				Local_551 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				Local_554 = { 0f, 0f, 175.52f };
				iLocal_542 = func_54(0);
				Local_546 = { -3249.1143f, 1006.5576f, 11.8307f };
				fLocal_549 = 191.594f;
				iLocal_578 = 1;
				if (func_433(6, 18))
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 2;
					iLocal_772[1] = 1;
					iLocal_778[1] = 1;
					iLocal_772[2] = 0;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 0;
					iLocal_778[4] = 2;
				}
				else
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 1;
					iLocal_772[1] = 0;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 0;
					iLocal_778[4] = 2;
				}
				break;
			
			case 3:
				Local_554 = { 0f, 0f, -82.38f };
				Local_551 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_542 = func_54(0);
				Local_546 = { 543.0796f, 2663.9673f, 41.1565f };
				fLocal_549 = 228.4295f;
				iLocal_578 = 1;
				if (func_433(6, 18))
				{
					iLocal_772[0] = 1;
					iLocal_778[0] = 0;
					iLocal_772[1] = 2;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 0;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 0;
					iLocal_772[1] = 2;
					iLocal_778[1] = 1;
					iLocal_772[2] = 1;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 0;
					iLocal_778[4] = 0;
				}
				break;
			
			case 4:
				Local_554 = { 0f, 0f, 180f };
				Local_551 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_542 = func_54(0);
				Local_546 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_549 = 197.2994f;
				iLocal_578 = 1;
				if (func_433(6, 18))
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 0;
					iLocal_772[1] = 2;
					iLocal_778[1] = 1;
					iLocal_772[2] = 1;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 0;
					iLocal_778[4] = 1;
				}
				else
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 1;
					iLocal_772[1] = 1;
					iLocal_778[1] = 0;
					iLocal_772[2] = 0;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 0;
					iLocal_778[4] = 1;
				}
				break;
			
			case 5:
				Local_554 = { 0f, 0f, 155f };
				Local_551 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_542 = func_54(0);
				Local_546 = { 2671.3508f, 3283.136f, 54.2411f };
				fLocal_549 = 296.5427f;
				iLocal_578 = 1;
				if (func_433(6, 18))
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 1;
					iLocal_772[1] = 0;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 0;
					iLocal_778[4] = 2;
				}
				else
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 2;
					iLocal_772[1] = 2;
					iLocal_778[1] = 1;
					iLocal_772[2] = 0;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 0;
					iLocal_778[4] = 2;
				}
				break;
			
			case 6:
				Local_554 = { 0f, 0f, 63.3f };
				Local_551 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_542 = func_54(0);
				Local_546 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_549 = 130.9518f;
				iLocal_578 = 1;
				if (func_433(6, 18))
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 2;
					iLocal_772[1] = 1;
					iLocal_778[1] = 0;
					iLocal_772[2] = 0;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 0;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 1;
					iLocal_778[0] = 0;
					iLocal_772[1] = 0;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 0;
					iLocal_778[4] = 0;
				}
				break;
			
			case 7:
				Local_554 = { 0f, 0f, 117f };
				Local_551 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_542 = func_54(0);
				Local_546 = { 1958.9199f, 3746.2673f, 31.3438f };
				fLocal_549 = 73.6245f;
				iLocal_578 = 1;
				if (func_433(6, 18))
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 0;
					iLocal_772[1] = 1;
					iLocal_778[1] = 1;
					iLocal_772[2] = 0;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 0;
					iLocal_778[4] = 1;
				}
				else
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 0;
					iLocal_772[1] = 0;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 0;
					iLocal_778[4] = 1;
				}
				break;
			
			case 8:
				Local_554 = { 0f, 0f, 92f };
				Local_551 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_542 = func_54(0);
				Local_546 = { 30.5721f, -1339.7816f, 28.4939f };
				fLocal_549 = 110.7699f;
				iLocal_578 = 1;
				if (func_433(6, 18))
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 1;
					iLocal_772[1] = 2;
					iLocal_778[1] = 0;
					iLocal_772[2] = 0;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 0;
					iLocal_778[4] = 2;
				}
				else
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 1;
					iLocal_772[1] = 1;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 0;
					iLocal_778[4] = 2;
				}
				break;
			
			case 9:
				Local_554 = { 0f, 0f, 75f };
				Local_551 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_542 = func_54(0);
				Local_546 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_549 = 52.0064f;
				iLocal_578 = 1;
				if (func_433(6, 18))
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 2;
					iLocal_772[1] = 2;
					iLocal_778[1] = 1;
					iLocal_772[2] = 1;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 0;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 2;
					iLocal_772[1] = 1;
					iLocal_778[1] = 1;
					iLocal_772[2] = 0;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 0;
					iLocal_778[4] = 0;
				}
				break;
			
			case 10:
				Local_554 = { 0f, 0f, 0f };
				Local_551 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_542 = func_54(0);
				Local_546 = { 1168.9711f, 2719.118f, 36.0632f };
				fLocal_549 = 136.5945f;
				iLocal_578 = 3;
				if (func_433(10, 22))
				{
					iLocal_772[0] = 1;
					iLocal_778[0] = 0;
					iLocal_772[1] = 0;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 0;
					iLocal_772[1] = 2;
					iLocal_778[1] = 0;
					iLocal_772[2] = 0;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				break;
			
			case 11:
				Local_554 = { 0f, 0f, -92f };
				Local_551 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_542 = func_54(0);
				Local_546 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_549 = 176.1174f;
				iLocal_578 = 3;
				if (func_433(10, 22))
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 0;
					iLocal_772[1] = 1;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 1;
					iLocal_772[1] = 2;
					iLocal_778[1] = 1;
					iLocal_772[2] = 0;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				break;
			
			case 12:
				Local_554 = { 0f, 0f, -145f };
				Local_551 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_542 = func_54(0);
				Local_546 = { -1218.2826f, -915.7103f, 10.3264f };
				fLocal_549 = 43.8031f;
				iLocal_578 = 3;
				if (func_433(10, 22))
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 1;
					iLocal_772[1] = 1;
					iLocal_778[1] = 1;
					iLocal_772[2] = 0;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 2;
					iLocal_772[1] = 1;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				break;
			
			case 13:
				Local_554 = { 0f, 0f, 103f };
				Local_551 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_542 = func_54(0);
				Local_546 = { 1130.1548f, -979.2816f, 45.4158f };
				fLocal_549 = 269.2587f;
				iLocal_578 = 3;
				if (func_433(10, 22))
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 2;
					iLocal_772[1] = 2;
					iLocal_778[1] = 0;
					iLocal_772[2] = 0;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 1;
					iLocal_778[0] = 0;
					iLocal_772[1] = 0;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				break;
			
			case 14:
				Local_554 = { 0f, 0f, -41f };
				Local_551 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_542 = func_54(0);
				Local_546 = { -1479.1631f, -375.0302f, 38.1633f };
				fLocal_549 = 36.5415f;
				iLocal_578 = 3;
				if (func_433(10, 22))
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 0;
					iLocal_772[1] = 2;
					iLocal_778[1] = 1;
					iLocal_772[2] = 0;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 0;
					iLocal_772[1] = 1;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				break;
			
			case 15:
				Local_554 = { 0f, 0f, 145f };
				Local_551 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_542 = func_54(0);
				Local_546 = { 1707.3031f, 4918.31f, 41.0636f };
				fLocal_549 = 24.9178f;
				iLocal_578 = 2;
				if (func_433(8, 20))
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 1;
					iLocal_772[1] = 0;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 1;
					iLocal_772[1] = 1;
					iLocal_778[1] = 1;
					iLocal_772[2] = 0;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				break;
			
			case 16:
				Local_554 = { 0f, 0f, -87f };
				Local_551 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_542 = func_54(0);
				Local_546 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_549 = 291.6504f;
				iLocal_578 = 2;
				if (func_433(8, 20))
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 2;
					iLocal_772[1] = 1;
					iLocal_778[1] = 0;
					iLocal_772[2] = 1;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 2;
					iLocal_772[1] = 2;
					iLocal_778[1] = 0;
					iLocal_772[2] = 0;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				break;
			
			case 17:
				Local_554 = { 0f, 0f, -125f };
				Local_551 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_542 = func_54(0);
				Local_546 = { -40.42f, -1751.4232f, 28.421f };
				fLocal_549 = 145.6553f;
				iLocal_578 = 2;
				if (func_433(8, 20))
				{
					iLocal_772[0] = 1;
					iLocal_778[0] = 0;
					iLocal_772[1] = 1;
					iLocal_778[1] = 1;
					iLocal_772[2] = 1;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 0;
					iLocal_772[1] = 2;
					iLocal_778[1] = 0;
					iLocal_772[2] = 0;
					iLocal_778[2] = 2;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				break;
			
			case 18:
				Local_554 = { 0f, 0f, -74f };
				Local_551 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_542 = func_54(0);
				Local_546 = { 1159.6815f, -314.254f, 68.2051f };
				fLocal_549 = 232.6337f;
				iLocal_578 = 2;
				if (func_433(8, 20))
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 0;
					iLocal_772[1] = 2;
					iLocal_778[1] = 1;
					iLocal_772[2] = 0;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 1;
					iLocal_772[1] = 2;
					iLocal_778[1] = 0;
					iLocal_772[2] = 0;
					iLocal_778[2] = 0;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				break;
			
			case 19:
				Local_551 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				Local_554 = { 0f, 0f, -47.3f };
				iLocal_542 = func_54(0);
				Local_546 = { -1828.9071f, 799.6096f, 137.1776f };
				fLocal_549 = 247.1234f;
				iLocal_578 = 2;
				if (func_433(8, 20))
				{
					iLocal_772[0] = 2;
					iLocal_778[0] = 1;
					iLocal_772[1] = 0;
					iLocal_778[1] = 0;
					iLocal_772[2] = 0;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 0;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				else
				{
					iLocal_772[0] = 0;
					iLocal_778[0] = 2;
					iLocal_772[1] = 2;
					iLocal_778[1] = 1;
					iLocal_772[2] = 0;
					iLocal_778[2] = 1;
					iLocal_772[3] = 0;
					iLocal_778[3] = 1;
					iLocal_772[4] = 1;
					iLocal_778[4] = 0;
				}
				break;
		}
		Local_551 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_551, Local_554.f_2, 0f, 0.075f, 0f) };
		Local_543 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s", Local_551, Local_554, 0f, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s", Local_551, Local_554, 0f, 2) };
		Local_88.f_44 = Var0.f_2;
		Local_567 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_bag", Local_551, Local_554, 0f, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_bag", Local_551, Local_554, 0f, 2) };
		fLocal_570 = Var0.f_2;
		Local_571 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_till", Local_551, Local_554, 0f, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_till", Local_551, Local_554, 0f, 2) };
		fLocal_574 = Var0.f_2;
		Local_484.f_0 = func_432(Local_484.f_50);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_88.f_47 = iLocal_772[0];
			if (Local_88.f_47 == 0)
			{
				StringCopy(&(Local_88.f_52), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_88.f_48), "StoreOwner2", 16);
			}
			else if (Local_88.f_47 == 1)
			{
				StringCopy(&(Local_88.f_52), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_88.f_48), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_88.f_52), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_88.f_48), "StoreOwner3", 16);
			}
		}
		if (!BitTest(Local_484.f_52, 29))
		{
			ENTITY::CREATE_MODEL_HIDE(Local_551, 0.5f, iLocal_575, true);
			MISC::SET_BIT(&(Local_484.f_52), 29);
		}
		return 1;
	}
	return 0;
}

int func_432(int iParam0)//Position - 0x195BC
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_433(int iParam0, int iParam1)//Position - 0x196A1
{
	return func_434(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_434(int iParam0, int iParam1, int iParam2)//Position - 0x196B5
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

void func_435(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1975E
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.0907f, 3607.3828f, 33.980896f };
		*uParam2 = { 1391.1785f, 3612.5159f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.0134f, 585.96655f, (10.354213f - 0.2f) };
		*uParam2 = { -3048.7139f, 584.79614f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.3125f, 1003.6574f, (15.274335f - 0.2f) };
		*uParam2 = { -3251.1567f, 1003.9843f, 11.835008f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.54736f, 2665.6416f, (44.601078f - 0.2f) };
		*uParam2 = { 547.05396f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552.0005f, 384.25275f, (111.065636f - 0.2f) };
		*uParam2 = { 2548.1453f, 384.41327f, 107.62407f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.9463f, 3284.8328f, (57.680878f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.6987f, 54.244644f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.1194f, 6418.5786f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.8386f, 6422.032f, 34.037506f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.2238f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.2946f, 3749.5994f, 31.345217f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.713818f, -1341.9679f, (31.933138f - 0.2f) };
		*uParam2 = { 27.710491f, -1338.1095f, 28.494787f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.01828f, 330.808f, (106.01123f - 0.2f) };
		*uParam2 = { 377.94992f, 334.55228f, 102.56696f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.0151f, 2711.6013f, (40.661472f - 0.2f) };
		*uParam2 = { 1167.0822f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.7046f, 389.66962f, (17.641619f - 0.2f) };
		*uParam2 = { -2957.095f, 389.13898f, 13.043233f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.4021f, -909.5575f, (14.924662f - 0.2f) };
		*uParam2 = { -1217.6823f, -916.79736f, 10.337352f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.2837f, -981.47296f, (49.014137f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.8833f, -378.26944f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.7708f, -372.16638f, 38.169476f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.5562f, 4921.8057f, (44.026867f - 0.2f) };
		*uParam2 = { 1708.2848f, 4919.1963f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.71594f, (21.179176f - 0.2f) };
		*uParam2 = { -709.0177f, -903.15155f, 18.216183f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.379726f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.0898f, 28.420994f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.42145f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.0327f, -312.93204f, 68.205086f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.2177f, 796.6393f, (140.13344f - 0.2f) };
		*uParam2 = { -1829.3009f, 799.99963f, 137.18004f };
		*uParam3 = 4f;
	}
}

void func_436(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x19C1F
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.5479f, 3600.5752f, 33.98914f };
		*uParam2 = { 1392.0798f, 3609.9834f, (37.335434f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.4758f, 587.4066f, (11.312223f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.0322f, 1004.48175f, 11.830701f };
		*uParam2 = { -3247.1875f, 1005.10693f, (16.252235f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.22784f, 2672.5005f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.1763f, 385.39355f, 107.62297f };
		*uParam2 = { 2552.0544f, 385.60565f, (112.16383f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.6025f, 54.24114f };
		*uParam2 = { 2675.5862f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.2367f, 6411.5566f, 34.03723f };
		*uParam2 = { 1734.3833f, 6417.952f, (38.584606f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.9989f, 3740.7947f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.895706f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.493917f, -1348.5073f, 27.033585f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.3823f, 27.056143f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.63092f, 323.55328f, 102.56641f };
		*uParam2 = { 378.32535f, 330.47934f, (107.10951f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.4972f, 2703.756f, 37.063072f };
		*uParam2 = { 1166.5249f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.5117f, 390.78732f, 14.043219f };
		*uParam2 = { -2965.2883f, 390.2452f, (18.543219f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.4175f, -902.67377f, 11.334959f };
		*uParam2 = { -1221.7646f, -909.58875f, (15.826262f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.3501f, -980.9322f, 45.415943f };
		*uParam2 = { 1132.9756f, -982.0952f, (49.915737f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.9487f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.0065f, -377.61673f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.9796f, 4929.0933f, 41.063572f };
		*uParam2 = { 1705.2332f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.76996f, -916.4685f, 18.215569f };
		*uParam2 = { -711.73676f, -908.7517f, (22.764883f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.4739f, 28.42097f };
		*uParam2 = { -47.925232f, -1750.6141f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.50867f, 68.20507f };
		*uParam2 = { 1158.3352f, -318.91226f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.3729f, 788.2851f, 137.18762f };
		*uParam2 = { -1827.4835f, 794.07385f, (141.69327f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_437(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1A0CC
{
	func_438(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_methlab");
			}
			*uParam2 = joaat("V_39_ShopRm");
			*uParam4 = joaat("V_39_StairsRm");
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_shop_247");
			}
			*uParam2 = joaat("V_66_ShopRm");
			*uParam4 = joaat("V_66_BackRm");
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gen_liquor");
			}
			*uParam2 = joaat("liquor_front");
			*uParam4 = joaat("liquor_back");
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gasstation");
			}
			*uParam2 = joaat("V_68_GasRm");
			*uParam4 = joaat("V_68_BackRm");
			*uParam3 = joaat("V_68_Toilets");
			break;
	}
}

void func_438(int iParam0, var uParam1, var uParam2)//Position - 0x1A215
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.1692f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.5479f, 3600.5752f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.9082f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.4334f, 11.8307f };
			*uParam2 = { -3240.0322f, 1004.48175f, 11.830701f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.8113f, 41.1566f };
			*uParam2 = { 544.22784f, 2672.5005f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.1763f, 385.39355f, 107.62297f };
			break;
		
		case 5:
			*uParam1 = { 2682.0034f, 3282.5432f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.6025f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.2098f, 6411.4033f, 34.0372f };
			*uParam2 = { 1731.2367f, 6411.5566f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.0542f, 3740.5552f, 31.3448f };
			*uParam2 = { 1964.9989f, 3740.7947f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.8127f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.493917f, -1348.5073f, 27.033585f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.63092f, 323.55328f, 102.56641f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.1143f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.4972f, 2703.756f, 37.063072f };
			break;
		
		case 11:
			*uParam1 = { -2973.2617f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.5117f, 390.78732f, 14.043219f };
			break;
		
		case 12:
			*uParam1 = { -1226.4644f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.4175f, -902.67377f, 11.334959f };
			break;
		
		case 13:
			*uParam1 = { 1141.3596f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.3501f, -980.9322f, 45.415943f };
			break;
		
		case 14:
			*uParam1 = { -1491.0565f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.9487f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.8085f, 4929.1978f, 41.0783f };
			*uParam2 = { 1698.9796f, 4929.0933f, 41.063572f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.76996f, -916.4685f, 18.215569f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.4054f, 28.421f };
			*uParam2 = { -52.90452f, -1756.4739f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.5421f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.50867f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.2866f, 788.006f, 137.1859f };
			*uParam2 = { -1822.3729f, 788.2851f, 137.18762f };
			break;
	}
}

int func_439(var uParam0, bool bParam1)//Position - 0x1A5EC
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	fVar1 = 9999.9f;
	bVar2 = false;
	while (bVar2 < 20)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_90(PLAYER::PLAYER_ID()), func_440(bVar2), true);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!BitTest(Global_2657750.f_62, bVar2) && BitTest(Global_2657750.f_64, bVar2))
				{
					fVar1 = fVar0;
					*uParam0 = bVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = bVar2;
			}
		}
		bVar2++;
	}
	return 1;
}

Vector3 func_440(int iParam0)//Position - 0x1A661
{
	struct<3> Var0;
	var uVar3;
	
	func_438(iParam0, &Var0, &uVar3);
	return Var0;
}

int func_441(int iParam0)//Position - 0x1A677
{
	return Local_163[iParam0 /*10*/].f_4;
}

void func_442()//Position - 0x1A687
{
	Global_2684312.f_785.f_28 = 0;
}

void func_443()//Position - 0x1A699
{
	if (Global_1574582.f_1 == 1)
	{
		func_444(7, 0, 1);
		Global_1574582.f_1 = 0;
		Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_9 = 0;
	}
}

void func_444(int iParam0, int iParam1, bool bParam2)//Position - 0x1A6C7
{
	if (func_414())
	{
		if (iParam1 == 1)
		{
			if (Global_2738587.f_4499 == -1)
			{
				Global_2738587.f_4499 = Global_262145.f_27440 /* Tunable: VC_PASSIVE_COOLDOWN_REENABLE */;
			}
			func_445(&(Global_2738587.f_4497), 0, 0);
			if (bParam2)
			{
				if (Global_2738587.f_4502 == -1)
				{
					Global_2738587.f_4502 = Global_262145.f_27441 /* Tunable: VC_PASSIVE_TIME_AFTER_DISABLE */;
				}
				func_445(&(Global_2738587.f_4500), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
				func_413(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
			func_413(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_412()) && !func_411(PLAYER::PLAYER_ID()))
		{
			Global_1057440 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

void func_445(var uParam0, bool bParam1, bool bParam2)//Position - 0x1A791
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

void func_446()//Position - 0x1A7CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_48(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = 1;
		if (BitTest(Local_484.f_53, 6) && !BitTest(Local_484.f_53, 5))
		{
			iVar1 = MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
			iVar2 = 0;
			MISC::SET_BIT(&iVar2, 8);
			MISC::SET_BIT(&iVar2, 4);
			MISC::SET_BIT(&iVar2, 1);
			if (iLocal_801 > Global_262145.f_177 /* Tunable: HOLD_UP_CASH_REWARD_CAP */)
			{
				iLocal_801 = Global_262145.f_177 /* Tunable: HOLD_UP_CASH_REWARD_CAP */;
			}
			if (iVar1 < iLocal_801)
			{
				if (iVar1 > 0)
				{
					if (func_53(func_54(1)))
					{
						if (MONEY::NETWORK_CAN_SPEND_MONEY2(iVar1, false, false, false, &uVar3, -1, 0))
						{
							if (func_222())
							{
								if (!BitTest(Global_2738587.f_7, 1))
								{
									Global_2738587.f_5056 = iVar1;
									Global_2738587.f_5057 = iVar2;
									Global_2738587.f_5058 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f) };
									func_212(&(Global_2738587.f_5055), joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"), Global_2738587.f_5056, 1, 3);
									MISC::SET_BIT(&(Global_2738587.f_7), 1);
									iLocal_801 = 0;
									MISC::SET_BIT(&(Local_484.f_53), 5);
								}
							}
							else
							{
								func_448(joaat("PICKUP_MONEY_VARIABLE"), PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f), iVar2, iVar1, func_54(1), 0, 0);
								func_207(-iVar1, 1, 1, 1092616192);
								MONEY::NETWORK_SPENT_HOLDUPS(iVar1, false, false);
								func_211(joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"), iVar1, &uVar4, 0, 0, 0);
								iLocal_801 = 0;
								func_447();
								MISC::SET_BIT(&(Local_484.f_53), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_801 > 0)
			{
				if (func_53(func_54(1)))
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY2(iLocal_801, false, false, false, &uVar3, -1, 0))
					{
						if (func_222())
						{
							if (!BitTest(Global_2738587.f_7, 1))
							{
								Global_2738587.f_5056 = iLocal_801;
								Global_2738587.f_5057 = iVar2;
								Global_2738587.f_5058 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f) };
								func_212(&(Global_2738587.f_5055), joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"), Global_2738587.f_5056, 1, 3);
								MISC::SET_BIT(&(Global_2738587.f_7), 1);
								iLocal_801 = 0;
								MISC::SET_BIT(&(Local_484.f_53), 5);
							}
						}
						else
						{
							func_448(joaat("PICKUP_MONEY_VARIABLE"), PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f), iVar2, iLocal_801, func_54(1), 0, 0);
							func_207(-iLocal_801, 1, 1, 1092616192);
							MONEY::NETWORK_SPENT_HOLDUPS(iLocal_801, false, false);
							func_211(joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"), iLocal_801, &uVar5, 0, 0, 0);
							iLocal_801 = 0;
							func_447();
							MISC::SET_BIT(&(Local_484.f_53), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_480();
		}
		else
		{
			return;
		}
	}
}

void func_447()//Position - 0x1AA84
{
	Global_2738587.f_283 = 0;
	Global_2738587.f_284 = 0;
	Global_2738587.f_285 = 0;
}

struct<5> func_448(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x1AAA4
{
	struct<5> Var0;
	
	Var0 = 123;
	if (func_456() && func_455(iParam0))
	{
		Var0 = { func_449(iParam0, Param1, iParam4, iParam5, iParam6, bParam7) };
	}
	else
	{
		Var0.f_4 = OBJECT::CREATE_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, bParam8);
	}
	return Var0;
}

struct<5> func_449(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1AAFB
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	int iVar11;
	
	Var0 = 123;
	if (func_454() == -1)
	{
		return Var0;
	}
	iVar5 = func_453(-1);
	if (iVar5 == -1)
	{
		return Var0;
	}
	Var6 = 123;
	Var6.f_0 = iParam0;
	Var6.f_1 = { Param1 };
	if (func_450(&Var6) != -1)
	{
		return Var0;
	}
	MISC::SET_BIT(&iParam4, 5);
	Var6.f_4 = OBJECT::CREATE_NON_NETWORKED_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, false);
	iVar11 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (bParam7)
	{
		Global_1906517[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_12 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
		Global_1906517[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_13 = NETWORK::NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT();
		if (Global_1906517[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_13 == 0)
		{
			Global_1906517[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_13 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
			Global_1906517[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1906517[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_11 = 2;
		}
	}
	Global_1906517[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/] = { Var6 };
	Global_1906517[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_5 = { Param1 };
	Global_1906517[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_8 = iParam4;
	Global_1906517[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_9 = iParam5;
	Global_1906517[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_10 = iParam6;
	return Var6;
}

int func_450(var uParam0)//Position - 0x1AC78
{
	int iVar0;
	
	if (!func_452(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_451(uParam0, &(Global_2652572.f_2452[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_451(var uParam0, var uParam1)//Position - 0x1ACBB
{
	if ((*uParam0 == *uParam1 && func_138(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

int func_452(var uParam0)//Position - 0x1ACF6
{
	if ((*uParam0 == 123 || func_273(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_453(int iParam0)//Position - 0x1AD28
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_452(&(Global_1906517[iParam0 /*299*/].f_98.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_454()//Position - 0x1AD74
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_452(&(Global_2652572.f_2452[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_455(int iParam0)//Position - 0x1ADAE
{
	switch (iParam0)
	{
		case joaat("PICKUP_MONEY_VARIABLE"):
		case joaat("PICKUP_MONEY_CASE"):
		case joaat("PICKUP_MONEY_WALLET"):
		case joaat("PICKUP_MONEY_PURSE"):
		case joaat("PICKUP_MONEY_DEP_BAG"):
		case joaat("PICKUP_MONEY_MED_BAG"):
		case joaat("PICKUP_MONEY_PAPER_BAG"):
		case joaat("PICKUP_MONEY_SECURITY_CASE"):
		case joaat("PICKUP_GANG_ATTACK_MONEY"):
		case joaat("PICKUP_VEHICLE_MONEY_VARIABLE"):
			return 1;
		
		default:
	}
	return 0;
}

var func_456()//Position - 0x1ADFE
{
	return Global_262145.f_31218 /* Tunable: ENABLESYNCEDAMBIENTPICKUPS */;
}

int func_457()//Position - 0x1AE0D
{
	if (Global_1575052 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_464())
	{
		return 1;
	}
	if (Global_2698534)
	{
		return 1;
	}
	if (func_463())
	{
		return 1;
	}
	if (func_462(159))
	{
		if (!func_461())
		{
			return 1;
		}
	}
	if (func_462(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_458() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_458()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_458()//Position - 0x1AE91
{
	switch (func_460())
	{
		case 0:
			return func_459();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_459()//Position - 0x1AEC4
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_460()//Position - 0x1AEE8
{
	return Global_32828;
}

bool func_461()//Position - 0x1AEF3
{
	return Global_2684312.f_698;
}

int func_462(int iParam0)//Position - 0x1AF02
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_463()//Position - 0x1AF19
{
	return Global_2695951;
}

bool func_464()//Position - 0x1AF25
{
	return Global_2684312.f_693;
}

void func_465()//Position - 0x1AF34
{
	SYSTEM::WAIT(0);
}

void func_466(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1AF41
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_478())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_476())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || ((!func_85(PLAYER::PLAYER_ID(), 0) && !func_475()) && !func_474(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657921[iParam0 /*463*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_471(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_470(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_469();
					func_468();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2657921[iParam0 /*463*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697318)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697318 = 0;
				}
				if (Global_2635562.f_2981)
				{
					Global_2635562.f_2981 = 0;
				}
			}
			else
			{
				if (!func_470(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (func_467(Global_4718592.f_183007))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575052)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_467(int iParam0)//Position - 0x1B3F3
{
	return iParam0 == 17;
}

void func_468()//Position - 0x1B400
{
	struct<3> Var0;
	
	Global_2672741.f_1028 = 0;
	Global_2672741.f_1029 = 0;
	Global_2672741.f_1030 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672741.f_1035 = -1;
	Global_2672741.f_1036 = 0;
	Global_2635562.f_2992 = { Var0 };
}

void func_469()//Position - 0x1B44D
{
	Global_2635562.f_702 = 0;
	Global_2635562.f_3035 = 0;
	Global_2635562.f_515 = 0;
	Global_2635562.f_606 = 0;
	Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_217 = 0;
	Global_2635562.f_2990 = 0;
}

int func_470(int iParam0)//Position - 0x1B48B
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_471(bool bParam0, int iParam1, int iParam2)//Position - 0x1B4BC
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_473();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
		if (func_85(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_472(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_472(int iParam0, bool bParam1)//Position - 0x1B58C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_473()//Position - 0x1B5A8
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

int func_474(int iParam0)//Position - 0x1B600
{
	if (func_85(iParam0, 0))
	{
		return 1;
	}
	if (func_475())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657921[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_475()//Position - 0x1B63F
{
	return BitTest(Global_2621446, 3);
}

int func_476()//Position - 0x1B64D
{
	if (func_477() == 0)
	{
		return 1;
	}
	return 0;
}

int func_477()//Position - 0x1B662
{
	return Global_1574632.f_18;
}

int func_478()//Position - 0x1B670
{
	if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873, 2) && !Global_2685249.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_479(bool bParam0)//Position - 0x1B6A1
{
	if (bParam0)
	{
		return (Global_2684312.f_785.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2684312.f_785.f_31);
	}
	return Global_2684312.f_785.f_28;
}

void func_480()//Position - 0x1B6DD
{
	int iVar0;
	
	Global_2738587.f_8 = 0;
	Global_1977840 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_428(Local_88.f_0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_88.f_0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_88.f_0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_88.f_0), 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_88.f_0));
				if (BitTest(Local_484.f_52, 22))
				{
					if (BitTest(Local_484.f_52, 20))
					{
						if (Local_88.f_3 != 7)
						{
							if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
							{
								TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_88.f_0));
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_88.f_0), iLocal_561);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_88.f_0), false);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_88.f_0), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1)
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_88.f_0));
							if (!WEAPON::HAS_PED_GOT_WEAPON(NETWORK::NET_TO_PED(Local_88.f_0), joaat("WEAPON_PISTOL"), false))
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_88.f_0), joaat("WEAPON_PISTOL"), 25000, true);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_88.f_0), 30);
							}
							func_236(4);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_88.f_0), 20f, 0);
						}
					}
					else if ((BitTest(Local_88.f_25, 3) || !func_11()) || !func_484())
					{
						if (!BitTest(Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_88.f_0));
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_88.f_0), iLocal_561);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_88.f_0), false);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_88.f_0));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_88.f_0), true);
						TASK::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_88.f_0), -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_88.f_0), false);
					}
				}
			}
		}
		if ((BitTest(Local_88.f_25, 3) || !func_11()) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_14))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_88.f_14))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_88.f_14), true, true);
					func_49(&(Local_88.f_14));
				}
			}
		}
		if (((BitTest(Local_88.f_25, 3) || !func_11()) || BitTest(Local_484.f_52, 20)) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_15))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_88.f_15))
				{
					func_49(&(Local_88.f_15));
				}
			}
		}
		if (func_222() && BitTest(Global_2738587.f_7, 1))
		{
			if (func_319(Global_2738587.f_5055) == 1)
			{
				func_483(Global_2738587.f_5055, 4);
			}
			else
			{
				func_214(Global_2738587.f_5055);
			}
			MISC::CLEAR_BIT(&(Global_2738587.f_7), 1);
		}
		if (Local_88.f_13 == 6)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_0))
			{
				if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_88.f_0), "XP_Blocker"))
				{
					DECORATOR::DECOR_REMOVE(NETWORK::NET_TO_PED(Local_88.f_0), "XP_Blocker");
				}
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			EVENT::REMOVE_SHOCKING_EVENT(Local_88.f_32);
		}
	}
	func_482();
	STREAMING::REMOVE_ANIM_DICT("mp_am_hold_up");
	PLAYER::RESET_LAW_RESPONSE_DELAY_OVERRIDE();
	if (func_153("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
	{
		HUD::CLEAR_HELP(true);
	}
	Global_2738587.f_9 = func_187();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_430(Local_484.f_0));
	func_169(1, Local_484.f_0);
	if (Local_484.f_14 != -1)
	{
		func_269(&(Local_484.f_14));
	}
	Global_2738587.f_27 = Local_484.f_0;
	if (Global_2738587.f_6003.f_4 == 1)
	{
		Global_2738587.f_6003.f_4 = 0;
	}
	if (Global_2738587.f_6003.f_5 == 1)
	{
		Global_2738587.f_6003.f_5 = 0;
	}
	if (BitTest(Local_484.f_52, 29))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_551, 0.5f, iLocal_575, true);
	}
	if (BitTest(Local_484.f_53, 7))
	{
		func_443();
		MISC::CLEAR_BIT(&(Local_484.f_53), 7);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Local_88.f_25, 6) || BitTest(Local_88.f_25, 21))
		{
			if (BitTest(Local_88.f_25, 21))
			{
				iVar0 = 1;
			}
			STATS::PLAYSTATS_HOLD_UP_MISSION_DONE(30, iLocal_800, iLocal_801, iVar0);
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_484.f_1))
	{
		if (CAM::IS_CAM_ACTIVE(Local_484.f_1))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM(Local_484.f_1, false);
	}
	func_481();
}

void func_481()//Position - 0x1BACF
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_482()//Position - 0x1BADB
{
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_558);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_559);
}

void func_483(int iParam0, int iParam1)//Position - 0x1BAF1
{
	if (func_305(iParam0) != -1)
	{
		if (Global_4535851[iParam0 /*85*/].f_66.f_2 == 1)
		{
			Global_4535851[iParam0 /*85*/].f_66.f_11 = iParam1;
		}
	}
}

int func_484()//Position - 0x1BB21
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (func_48(iVar1, 1, 1))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar2) == iLocal_583)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_485(struct<21> Param0)//Position - 0x1BB7B
{
	var uVar0;
	
	func_491(func_492(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(8);
	func_489(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_88, 75, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_163, 321, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_488())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_53(func_54(0));
		func_53(func_54(1));
		func_53(func_54(2));
		STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
		STREAMING::REQUEST_ANIM_DICT("mp_missheist_countrybank@cower");
		Local_88.f_46 = 8;
		if (func_487())
		{
			MISC::SET_BIT(&(Local_88.f_26), 11);
		}
		else if (func_486())
		{
			MISC::SET_BIT(&(Local_88.f_26), 12);
		}
		Local_88.f_30 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
		Local_88.f_33 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
		if ((func_14() && !func_421(PLAYER::PLAYER_ID(), 1)) && !func_421(PLAYER::PLAYER_ID(), 2))
		{
			Local_88.f_45 = 2;
			MISC::SET_BIT(&(Local_88.f_27), 0);
		}
		else
		{
			Local_88.f_45 = 1;
		}
		Local_88.f_73 = MISC::GET_RANDOM_FLOAT_IN_RANGE(18f, 28f);
	}
	if (func_100(PLAYER::PLAYER_ID()) != 155)
	{
		OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_54(1), 0);
	}
	uVar0 = func_133(1191, -1);
	if (BitTest(uVar0, 20) && BitTest(uVar0, 21))
	{
		MISC::SET_BIT(&(Local_484.f_53), 1);
	}
	Local_163[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 0;
	return 1;
}

int func_486()//Position - 0x1BCD2
{
	if (Local_484.f_50 >= 0 && Local_484.f_50 <= 9)
	{
		if (func_433(5, 6) || func_433(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_484.f_50 >= 10 && Local_484.f_50 <= 14)
	{
		if (func_433(9, 10) || func_433(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_484.f_50 >= 15 && Local_484.f_50 <= 19)
	{
		if (func_433(7, 8) || func_433(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_487()//Position - 0x1BD7E
{
	if (Local_484.f_50 >= 0 && Local_484.f_50 <= 9)
	{
		if (func_433(6, 7) || func_433(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_484.f_50 >= 10 && Local_484.f_50 <= 14)
	{
		if (func_433(10, 11) || func_433(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_484.f_50 >= 15 && Local_484.f_50 <= 19)
	{
		if (func_433(8, 9) || func_433(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_488()//Position - 0x1BE2A
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_464())
		{
			return 0;
		}
		if (func_462(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_489(int iParam0, int iParam1, bool bParam2)//Position - 0x1BE83
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_481();
			}
			else
			{
				return 0;
			}
		}
		if (!func_490(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_481();
					}
					else
					{
						return 0;
					}
				}
				if (func_464())
				{
					if (!bParam2)
					{
						func_481();
					}
					else
					{
						return 0;
					}
				}
				if (func_462(157))
				{
					if (!bParam2)
					{
						func_481();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_481();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_481();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_481();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_490(bool bParam0)//Position - 0x1BF99
{
	if (bParam0)
	{
	}
	return Global_1575052;
}

void func_491(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x1BFAA
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_481();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_492(int iParam0)//Position - 0x1BFC9
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 192:
			return 32;
		
		case 193:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 204:
			return 32;
		
		case 205:
			return 32;
		
		case 194:
			return 32;
		
		case 195:
			return 32;
		
		case 199:
			return 32;
		
		case 197:
			return 32;
		
		case 198:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 200:
			return 32;
		
		case 201:
			return 32;
		
		case 206:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 209:
			return 32;
		
		case 210:
			return 2;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 212:
			return 4;
		
		case 213:
			return 2;
		
		case 214:
			return 2;
		
		case 196:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
			return 0;
		
		case 238:
			return 1;
		
		case 223:
			return 4;
		
		case 226:
			return 4;
		
		case 227:
			return 1;
		
		case 228:
			return 1;
		
		case 234:
			return 1;
		
		case 230:
			return 2;
		
		case 235:
			return 1;
		
		case 231:
			return 1;
		
		case 229:
			return 2;
		
		case 232:
			return 8;
		
		case 233:
			return 8;
		
		case 236:
			return 1;
		
		case 237:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 178:
			return 1;
		
		case 224:
			return 16;
		
		case 225:
			return 32;
		
		default:
	}
	switch (func_493(func_494(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_493(int iParam0)//Position - 0x1C784
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		default:
	}
	return -1;
}

int func_494(int iParam0, bool bParam1)//Position - 0x1CA0A
{
	switch (iParam0)
	{
		case 210:
			return 15;
		
		case 217:
			return 8;
		
		case 211:
			return 14;
		
		case 215:
			return 122;
		
		case 218:
			return 1;
		
		case 216:
			return 5;
		
		case 219:
			return 6;
		
		case 212:
			return 11;
		
		case 220:
			return 0;
		
		case 221:
			return 2;
		
		case 213:
			return 13;
		
		case 222:
			return 3;
		
		case 214:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 315;
		
		case 176:
			return 316;
		
		case 177:
			return 317;
		
		case 178:
			return 318;
		
		case 179:
			return 320;
		
		case 180:
			return 322;
		
		case 181:
			return 323;
		
		case 182:
			return 324;
		
		case 183:
			return 325;
		
		case 184:
			return 326;
		
		case 185:
			return 327;
		
		case 186:
			return 328;
		
		case 187:
			return 329;
		
		case 188:
			return 330;
		
		case 189:
			return 331;
		
		case 190:
			return 332;
		
		case 191:
			return 333;
		
		default:
	}
	if (bParam1)
	{
	}
	return 337;
}

