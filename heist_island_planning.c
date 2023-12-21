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
	var uLocal_98 = -1;
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
	struct<14> Local_114[6];
	struct<14> Local_199[8];
	struct<14> Local_312[4];
	struct<14> Local_369[5];
	struct<14> Local_440[6];
	struct<14> Local_525[6];
	struct<14> Local_610[4];
	struct<14> Local_667[10];
	struct<14> Local_808[4];
	struct<14> Local_865[6];
	struct<14> Local_950[3];
	struct<9> Local_993[8];
	struct<9> Local_1066[6];
	struct<9> Local_1121[8];
	struct<9> Local_1194[2];
	struct<9> Local_1213[4];
	struct<9> Local_1250[2];
	struct<9> Local_1269[6];
	struct<9> Local_1324[6];
	struct<9> Local_1379[4];
	int iLocal_1416 = 0;
	int iLocal_1417 = 0;
	int iLocal_1418 = 0;
	int iLocal_1419 = 0;
	int iLocal_1420 = 0;
	int iLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	bool bLocal_1424 = 0;
	int iLocal_1425 = 0;
	bool bLocal_1426 = 0;
	bool bLocal_1427 = 0;
	bool bLocal_1428 = 0;
	int iLocal_1429 = 0;
	int iLocal_1430 = 0;
	int iLocal_1431 = 0;
	int iLocal_1432 = 0;
	int iLocal_1433 = 0;
	int iLocal_1434 = 0;
	int iLocal_1435 = 0;
	int iLocal_1436 = 0;
	int iLocal_1437 = 0;
	int iLocal_1438 = 0;
	int iLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	int iLocal_1444 = 0;
	int iLocal_1445 = 0;
	struct<73> Local_1446 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	struct<16> Local_1528 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1544 = 0;
	int iLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	struct<7> Local_1548 = { 2, 0, 0, 2, 0, 0, -1 } ;
	var uLocal_1555 = 16;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
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
	var uLocal_1579 = 0;
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
	var uLocal_1594 = 0;
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
	var uLocal_1609 = 0;
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
	var uLocal_1624 = 0;
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
	var uLocal_1639 = 0;
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
	var uLocal_1654 = 0;
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
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	int iLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 17;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 17;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	int iLocal_1770 = 0;
	var uLocal_1771 = 0;
	float fLocal_1772 = 0f;
	float fLocal_1773 = 0f;
	float fLocal_1774 = 0f;
	float fLocal_1775 = 0f;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	float fLocal_1786 = 0f;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
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
	bLocal_1428 = true;
	iLocal_1770 = -1;
	fLocal_1772 = 3f;
	fLocal_1773 = 0f;
	fLocal_1774 = 2f;
	fLocal_1775 = 100f;
	fLocal_1786 = 0.5f;
	StringCopy(&Local_1528, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	Local_1528 = { Local_1528 };
	if (!func_1019(&Global_1970744))
	{
		func_1007(&Global_1970744);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1006();
		func_1001(&Global_1970744);
		switch (func_1000())
		{
			case 0:
				if (func_492(&Global_1970744))
				{
					func_490();
					func_489(1);
				}
				break;
			
			case 1:
				func_297(&Global_1970744);
				func_134(&Global_1970744);
				func_1(&Global_1970744);
				break;
			
			case 2:
				func_1007(&Global_1970744);
				break;
		}
	}
}

void func_1(var uParam0)//Position - 0x141
{
	func_82(uParam0);
	func_63(uParam0);
	func_2(uParam0);
}

void func_2(var uParam0)//Position - 0x15B
{
	func_27(uParam0);
	func_3(uParam0);
}

void func_3(var uParam0)//Position - 0x16F
{
	int iVar0;
	
	if (uParam0->f_1092 == PLAYER::PLAYER_ID())
	{
		if (((uParam0->f_732.f_5 && !iLocal_1418) && uParam0->f_812 == 1) && !func_19(uParam0, 0))
		{
			if (func_15(PLAYER::PLAYER_ID()))
			{
				if (!func_14("HIP_TOOMANY2" /* GXT: This mission can only be started with a maximum of 5 Motorcycle Club members. */))
				{
					func_13("HIP_TOOMANY2" /* GXT: This mission can only be started with a maximum of 5 Motorcycle Club members. */);
				}
			}
			else if (!func_14("HIP_TOOMANY1" /* GXT: This mission can only be started with a maximum of 5 Organization members. */))
			{
				func_13("HIP_TOOMANY1" /* GXT: This mission can only be started with a maximum of 5 Organization members. */);
			}
		}
		else if (func_14("HIP_TOOMANY1" /* GXT: This mission can only be started with a maximum of 5 Organization members. */) || func_14("HIP_TOOMANY2" /* GXT: This mission can only be started with a maximum of 5 Motorcycle Club members. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if ((BitTest(Local_1548.f_3[(0 / 32)], (0 % 32)) && !func_12()) && !iLocal_1429)
		{
			func_11("HIP_TIPTEXT" /* GXT: Access additional information by pressing ~INPUT_FRONTEND_Y~. This includes mission details and the impact completion will have on The Cayo Perico Heist. */, -1);
			iLocal_1429 = 1;
		}
		if ((func_10(uParam0->f_812, 2) && !BitTest(uParam0->f_1093, 16)) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			iVar0 = func_9(9511, -1);
			if (!BitTest(iVar0, 15))
			{
				func_11("HIF_FINALEINT" /* GXT: Here you can preview the outcome of your scoping and Prep work. Press Start to begin The Cayo Perico Heist alone, or invite other players. */, -1);
				MISC::SET_BIT(&iVar0, 15);
				func_4(9511, iVar0, -1);
			}
			MISC::SET_BIT(&(uParam0->f_1093), 16);
		}
	}
}

void func_4(int iParam0, int iParam1, int iParam2)//Position - 0x28C
{
	func_5(iParam0, iParam1, iParam2, 1);
}

void func_5(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x29F
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_6(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_6(int iParam0, var uParam1)//Position - 0x2CD
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_7(uParam1));
}

int func_7(var uParam0)//Position - 0x2E2
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()//Position - 0x316
{
	return Global_1574925;
}

int func_9(int iParam0, int iParam1)//Position - 0x322
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_6(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_10(int iParam0, int iParam1)//Position - 0x351
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 > 0 && iParam0 <= 29)
			{
				return 1;
			}
			break;
		
		case 1:
			if (iParam0 >= 36 && iParam0 <= 62)
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam0 >= 63 && iParam0 < 109)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_11(char* sParam0, int iParam1)//Position - 0x3BD
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_12()//Position - 0x3D4
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_13(char* sParam0)//Position - 0x3F6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_14(char* sParam0)//Position - 0x40C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_15(int iParam0)//Position - 0x41F
{
	return func_16(iParam0, 1);
}

int func_16(int iParam0, int iParam1)//Position - 0x42E
{
	if (func_18(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_17())
		{
			if (Global_1886967[iParam0 /*609*/].f_10 == iParam0 && Global_1886967[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17()//Position - 0x47D
{
	return -1;
}

int func_18(var uParam0)//Position - 0x486
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

int func_19(var uParam0, int iParam1)//Position - 0x4A8
{
	if (iParam1 == 0)
	{
		if (func_23() + 1 > 5)
		{
			return 0;
		}
	}
	else if (func_20(uParam0->f_1092, iParam1))
	{
		return 0;
	}
	return 1;
}

int func_20(int iParam0, int iParam1)//Position - 0x4DA
{
	if (iParam0 != -1)
	{
		return func_21(iParam0, func_22(iParam1));
	}
	return 0;
}

int func_21(int iParam0, int iParam1)//Position - 0x4F8
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_22(int iParam0)//Position - 0x517
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_23()//Position - 0x5DA
{
	if (func_26() == func_17())
	{
		return 0;
	}
	return func_24(func_26());
}

int func_24(int iParam0)//Position - 0x5F9
{
	if (func_25(iParam0) == func_17())
	{
		return 0;
	}
	return Global_1886967[iParam0 /*609*/].f_10.f_19;
}

int func_25(int iParam0)//Position - 0x61F
{
	if (func_18(iParam0))
	{
		return Global_1886967[iParam0 /*609*/].f_10;
	}
	return func_17();
}

int func_26()//Position - 0x642
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10;
}

void func_27(var uParam0)//Position - 0x657
{
	func_52();
	switch (iLocal_1435)
	{
		case 0:
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT(func_51());
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_51()))
			{
				return;
			}
			iLocal_1436 = func_50();
			iLocal_1435 = 2;
			break;
		
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1438);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_49(iLocal_1436), 0.5f, 20000, func_48(iLocal_1436), 0.05f);
			TASK::TASK_ACHIEVE_HEADING(0, func_48(iLocal_1436), 0);
			TASK::TASK_PLAY_ANIM(0, func_51(), func_47(), 1.5f, -8f, -1, 262152, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_51(), func_46(), 8f, -8f, -1, 262153, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1438);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1444, iLocal_1438);
			iLocal_1435 = 3;
			if (!func_45())
			{
				MISC::SET_BIT(&(uParam0->f_1093), 15);
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1444, func_51(), func_46(), 3) && !func_43(&uLocal_1440, 6000, 0))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1444, func_51(), func_46(), 3))
			{
				PED::PLAY_FACIAL_ANIM(iLocal_1444, func_42(), func_51());
			}
			func_41(&uLocal_1440);
			uParam0->f_732.f_5 = 1;
			func_37(uParam0, 14);
			iLocal_1435 = 4;
			break;
		
		case 4:
			break;
		
		case 5:
			TASK::TASK_PLAY_ANIM(iLocal_1444, func_51(), func_28(), 8f, 1.5f, -1, 262152, 0f, false, false, false);
			if (func_45())
			{
				MISC::CLEAR_BIT(&(uParam0->f_1093), 15);
			}
			uParam0->f_732.f_5 = 0;
			iLocal_1435 = 6;
			break;
		
		case 6:
			if ((!iLocal_1421 && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1444, func_51(), func_28(), 3)) && !func_43(&uLocal_1440, 6000, 0))
			{
				return;
			}
			if (iLocal_1421)
			{
				TASK::CLEAR_PED_TASKS(iLocal_1444);
			}
			STREAMING::REMOVE_ANIM_DICT(func_51());
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1438);
			func_41(&uLocal_1440);
			iLocal_1435 = 0;
			iLocal_1421 = 0;
			break;
	}
}

char* func_28()//Position - 0x868
{
	if (func_29(iLocal_1444))
	{
		return "exit_heeled";
	}
	return "exit_male";
}

int func_29(int iParam0)//Position - 0x883
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("MP_F_Freemode_01"))
	{
		iVar1 = func_35(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_31(iVar0, iVar1, 6, 4);
			iVar3 = func_30(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HIGH_HEELS"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x9A1
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_31(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB0E
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	struct<2> Var19;
	int iVar36;
	int iVar37;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar17 = (iParam1 - func_34(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var19);
		iVar36 = (iParam1 - func_32(iParam0, func_33(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_79181.f_26[iParam2] && iParam1 == Global_79181[iParam2]) && Global_79181.f_13[iParam2] != 0)
		{
			return Global_79181.f_13[iParam2];
		}
		iVar37 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_33(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar36, &Var19);
		Global_79181.f_13[iParam2] = Var19.f_1;
		Global_79181[iParam2] = iParam1;
		Global_79181.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_32(int iParam0, int iParam1)//Position - 0xC28
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_33(int iParam0)//Position - 0xFCF
{
	switch (iParam0)
	{
		case 0:
			return 0;
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
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x107F
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 113;
			break;
		
		case joaat("Player_One"):
			return 175;
			break;
		
		case joaat("Player_Two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 327;
			break;
		
		case joaat("MP_F_Freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_35(int iParam0, int iParam1)//Position - 0x10E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_33(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_36(iParam0, iVar1, iVar2, iParam1);
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1140
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_33(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

void func_37(var uParam0, int iParam1)//Position - 0x1197
{
	char* sVar0;
	char* sVar1;
	
	sVar0 = func_40(iParam1);
	sVar1 = func_39(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (!func_38(uParam0->f_738.f_6))
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, sVar0, uParam0->f_738.f_6, sVar1, false, 0, false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar1, true);
		}
	}
}

int func_38(struct<3> Param0)//Position - 0x11FB
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

char* func_39(int iParam0)//Position - 0x1225
{
	return "DLC_HEI4_PLANNING_BOARD_PLANNING_BOARD_SOUNDSET";
}

char* func_40(int iParam0)//Position - 0x1230
{
	switch (iParam0)
	{
		case 0:
			return "NAV_UP_DOWN";
		
		case 1:
			return "NAV_LEFT_RIGHT";
		
		case 2:
			return "NAV_UP_DOWN_PHOTO_CHANGE";
		
		case 3:
			return "NAV_LEFT_RIGHT_PHOTO_CHANGE";
		
		case 4:
			return "NAV_BLOCKED";
		
		case 5:
			return "SELECT" /* GXT: Filter List */;
		
		case 6:
			return "BACK";
		
		case 7:
			return "ERROR";
		
		case 8:
			return "DRAW_BOARD";
		
		case 9:
			return "DRAW_DESCRIPTION_TEXT";
		
		case 10:
			return "DRAW_TITLE_TEXT";
		
		case 11:
			return "PAY";
		
		case 12:
			return "INCREASE_LOOT_SHARE";
		
		case 13:
			return "DECREASE_LOOT_SHARE";
		
		case 14:
			return "USE";
		
		case 15:
			return "LAUNCH_MISSION";
		
		case 16:
			return "REMOTE_READY";
		
		case 17:
			return "REMOTE_UNREADY";
		
		case 18:
			return "BOOTUP";
		
		case 19:
			return "BACKGROUND";
		
		case 20:
			return "FINALE_AVAILABLE";
		
		case 21:
			return "CHANGE_DISPLAY_LARGE_BOX_DRAW";
		
		case 22:
			return "CHANGE_DISPLAY_SMALL_BOX_DRAW";
		
		default:
	}
	return "";
}

void func_41(var uParam0)//Position - 0x1364
{
	uParam0->f_1 = 0;
}

char* func_42()//Position - 0x1371
{
	if (func_29(iLocal_1444))
	{
		return "idle_heeled_facial";
	}
	return "idle_male_facial";
}

int func_43(var uParam0, int iParam1, bool bParam2)//Position - 0x138E
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_44(uParam0, bParam2, 0);
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

void func_44(var uParam0, bool bParam1, bool bParam2)//Position - 0x13EC
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

bool func_45()//Position - 0x1431
{
	return BitTest(Global_1970744.f_1093, 15);
}

char* func_46()//Position - 0x1443
{
	if (func_29(iLocal_1444))
	{
		return "idle_heeled";
	}
	return "idle_male";
}

char* func_47()//Position - 0x1460
{
	if (func_29(iLocal_1444))
	{
		return "enter_heeled";
	}
	return "enter_male";
}

float func_48(int iParam0)//Position - 0x147D
{
	switch (iParam0)
	{
		case 0:
			return 180f;
		
		case 1:
			return 0f;
		
		default:
	}
	return 0f;
}

Vector3 func_49(int iParam0)//Position - 0x14A5
{
	switch (iParam0)
	{
		case 0:
			return 1561.0537f, 385.9017f, -50.6854f;
		
		case 1:
			return 1561.0962f, 383.769f, -50.6854f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_50()//Position - 0x14E7
{
	return 0;
}

char* func_51()//Position - 0x14F0
{
	if (func_29(iLocal_1444))
	{
		return "anim@scripted@submarine@ig18_sub_screen@heeled@";
	}
	return "anim@scripted@submarine@ig18_sub_screen@male@";
}

void func_52()//Position - 0x150D
{
	if (iLocal_1435 == 0)
	{
		return;
	}
	if (func_62(0))
	{
		func_57(0);
	}
	if (func_56())
	{
		func_55();
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	if (func_54())
	{
		func_53();
	}
}

void func_53()//Position - 0x154D
{
	if (func_54())
	{
		Global_2672741.f_951.f_16 = 1;
	}
}

int func_54()//Position - 0x1566
{
	if (Global_2672741.f_951.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_55()//Position - 0x1580
{
	Global_76372 = 1;
}

bool func_56()//Position - 0x158D
{
	return Global_76369;
}

void func_57(int iParam0)//Position - 0x1599
{
	if (func_61())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_60())
		{
			func_59(1, 1);
		}
		else
		{
			func_59(0, 0);
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
	if (!func_58())
	{
		Global_20813.f_1 = 3;
	}
}

int func_58()//Position - 0x1623
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1)//Position - 0x164A
{
	if (bParam0)
	{
		if (func_62(0))
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

bool func_60()//Position - 0x16BE
{
	return BitTest(Global_1956030, 5);
}

bool func_61()//Position - 0x16CC
{
	return BitTest(Global_1956030, 19);
}

int func_62(int iParam0)//Position - 0x16DB
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

void func_63(var uParam0)//Position - 0x1732
{
	if (BitTest(uParam0->f_1093, 0))
	{
		if (BitTest(uParam0->f_1093, 14))
		{
			func_64(&(Global_2684312.f_781), -1, 0, 1, 1);
			MISC::CLEAR_BIT(&(uParam0->f_1093), 10);
			MISC::CLEAR_BIT(&(uParam0->f_1093), 11);
			MISC::CLEAR_BIT(&(uParam0->f_1093), 8);
			MISC::CLEAR_BIT(&(uParam0->f_1093), 9);
			MISC::CLEAR_BIT(&(uParam0->f_1093), 14);
		}
	}
	else if (BitTest(uParam0->f_1093, 14))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1093), 14);
	}
}

void func_64(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x17AE
{
	if ((iParam1 != 0 && iParam1 != 3) || iParam2 == 1)
	{
		if (CAM::DOES_CAM_EXIST(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
			if (bParam4)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, true, 0);
			}
			CAM::DESTROY_CAM(*uParam0, false);
			*uParam0 = 0;
			func_81();
			if (func_76())
			{
				STREAMING::CLEAR_FOCUS();
			}
			NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
			if (Global_1574534 == 0 && iParam3 == 1)
			{
				func_68(1, 0);
				func_68(1, 0);
			}
			if (!func_67())
			{
				if (func_66() || func_65())
				{
					if (!Global_2693219.f_7)
					{
						HUD::BUSYSPINNER_OFF();
					}
				}
				else
				{
					HUD::BUSYSPINNER_OFF();
				}
			}
		}
	}
}

bool func_65()//Position - 0x1862
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_66()//Position - 0x1878
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_67()//Position - 0x188E
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_139, 0);
}

void func_68(bool bParam0, int iParam1)//Position - 0x18A5
{
	if (bParam0)
	{
		func_73(1, 0, 1);
	}
	else
	{
		func_69(iParam1);
	}
}

void func_69(int iParam0)//Position - 0x18C2
{
	func_72();
	if (iParam0 == 0)
	{
		if (LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE())
		{
			return;
		}
	}
	if (func_71() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_70(1);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
}

void func_70(int iParam0)//Position - 0x1903
{
	if (Global_1574632.f_20 != iParam0)
	{
		Global_1574632.f_20 = iParam0;
	}
}

int func_71()//Position - 0x191E
{
	return Global_1574632.f_20;
}

void func_72()//Position - 0x192C
{
	Global_2697834 = 1;
}

void func_73(int iParam0, bool bParam1, bool bParam2)//Position - 0x1939
{
	if (func_74())
	{
		return;
	}
	if ((func_71() == 1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0)
	{
		func_70(0);
		if (Global_2697318)
		{
			Global_2697318 = 0;
		}
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		if (!bParam1)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		}
		if (bParam2)
		{
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
		}
	}
}

int func_74()//Position - 0x1990
{
	if (func_75())
	{
		return Global_2695878;
	}
	return 0;
}

int func_75()//Position - 0x19A7
{
	if (Global_2695871)
	{
		return Global_2695870;
	}
	return 0;
}

int func_76()//Position - 0x19BE
{
	if (func_79(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_813 != func_17())
		{
			if (func_78(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_813, 0, 1))
			{
				if (func_77(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_813, 1, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_77(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A1A
{
	if (iParam0 == func_17())
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

int func_78(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A7E
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

bool func_79(int iParam0, int iParam1)//Position - 0x1ADE
{
	bool bVar0;
	
	if (!func_18(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_80(-1, 0) == 8;
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

int func_80(int iParam0, bool bParam1)//Position - 0x1B37
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

void func_81()//Position - 0x1B78
{
	MISC::CLEAR_BIT(&Global_2684312, 15);
}

void func_82(var uParam0)//Position - 0x1B8A
{
	func_132(uParam0);
	func_130(uParam0);
	func_129(uParam0);
	if (!func_117(uParam0))
	{
		func_116();
		func_115();
		func_114();
		func_113();
		return;
	}
	if (uParam0->f_1092 == PLAYER::PLAYER_ID())
	{
		if (!func_112())
		{
			func_110(0);
			return;
		}
	}
	else if (!func_109(uParam0))
	{
		if (!func_108(uParam0->f_1092))
		{
			func_110(1);
			return;
		}
	}
	if (func_107(uParam0))
	{
		if (func_106())
		{
			func_105();
		}
		else if (!func_104(uParam0))
		{
			func_101();
		}
		else
		{
			func_86(uParam0);
		}
		return;
	}
	if (func_85())
	{
		func_84(uParam0, 1);
		func_116();
		if (Local_1446.f_2 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_1446.f_2);
		}
		else
		{
			func_83(uParam0);
		}
	}
}

void func_83(var uParam0)//Position - 0x1C5C
{
	uParam0->f_732.f_5 = 1;
}

void func_84(var uParam0, int iParam1)//Position - 0x1C6C
{
	if (uParam0->f_826 != iParam1)
	{
	}
	uParam0->f_826 = iParam1;
}

bool func_85()//Position - 0x1C85
{
	char* sVar0;
	
	sVar0 = "NHPG_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to use the Planning Board. */;
	if (Local_1446.f_1 != 0)
	{
		Call_Loc(Local_1446.f_1);
		sVar0 = StackVal;
	}
	if (!func_14(sVar0))
	{
		func_13(sVar0);
	}
	return PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
}

void func_86(var uParam0)//Position - 0x1CBB
{
	char* sVar0;
	
	Call_Loc(Local_1446.f_49.f_5);
	sVar0 = StackVal;
	if (!func_14(sVar0))
	{
		func_13(sVar0);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
	{
		func_114();
		func_87(uParam0, 0);
		uParam0->f_1098 = 1;
	}
}

void func_87(var uParam0, bool bParam1)//Position - 0x1CF8
{
	if (bParam1)
	{
		if (uParam0->f_1100)
		{
			func_88(PLAYER::PLAYER_ID(), 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			uParam0->f_1100 = 0;
		}
	}
	else if (!uParam0->f_1100)
	{
		func_88(PLAYER::PLAYER_ID(), 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		uParam0->f_1100 = 1;
	}
}

void func_88(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1D4D
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
	if (func_100())
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
		if (!func_98())
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
				else if (bVar14 || ((!func_79(PLAYER::PLAYER_ID(), 0) && !func_97()) && !func_96(PLAYER::PLAYER_ID())))
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
					func_93(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_92(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_91();
					func_90();
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
				if (!func_92(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_89(Global_4718592.f_183007))
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

bool func_89(int iParam0)//Position - 0x21FF
{
	return iParam0 == 17;
}

void func_90()//Position - 0x220C
{
	struct<3> Var0;
	
	Global_2672741.f_1028 = 0;
	Global_2672741.f_1029 = 0;
	Global_2672741.f_1030 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672741.f_1035 = -1;
	Global_2672741.f_1036 = 0;
	Global_2635562.f_2992 = { Var0 };
}

void func_91()//Position - 0x2259
{
	Global_2635562.f_702 = 0;
	Global_2635562.f_3035 = 0;
	Global_2635562.f_515 = 0;
	Global_2635562.f_606 = 0;
	Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_217 = 0;
	Global_2635562.f_2990 = 0;
}

int func_92(int iParam0)//Position - 0x2297
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

void func_93(bool bParam0, int iParam1, int iParam2)//Position - 0x22C8
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
				func_95();
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
		if (func_79(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_94(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_94(int iParam0, bool bParam1)//Position - 0x2398
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_95()//Position - 0x23B4
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

int func_96(int iParam0)//Position - 0x240C
{
	if (func_79(iParam0, 0))
	{
		return 1;
	}
	if (func_97())
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

bool func_97()//Position - 0x244B
{
	return BitTest(Global_2621446, 3);
}

int func_98()//Position - 0x2459
{
	if (func_99() == 0)
	{
		return 1;
	}
	return 0;
}

int func_99()//Position - 0x246E
{
	return Global_1574632.f_18;
}

int func_100()//Position - 0x247C
{
	if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873, 2) && !Global_2685249.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_101()//Position - 0x24AD
{
	char* sVar0;
	int iVar1;
	
	if (Local_1446.f_49.f_9 != 0 && Local_1446.f_49.f_3 != 0)
	{
		Call_Loc(Local_1446.f_49.f_9);
		sVar0 = StackVal;
		Call_Loc(Local_1446.f_49.f_3);
		iVar1 = StackVal;
		if (!func_103(sVar0, iVar1))
		{
			func_102(sVar0, iVar1);
		}
	}
}

void func_102(char* sParam0, int iParam1)//Position - 0x24F7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_103(char* sParam0, int iParam1)//Position - 0x2513
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_104(var uParam0)//Position - 0x252C
{
	if (uParam0->f_1092 == PLAYER::PLAYER_ID())
	{
		Stack.Push(Local_1446.f_49.f_3 != 0);
		Call_Loc(Local_1446.f_49.f_3);
		if (StackVal && MONEY::NETWORK_CAN_SPEND_MONEY(StackVal, false, true, false, -1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_105()//Position - 0x2567
{
	if (Local_1446.f_49.f_7 != 0)
	{
		Call_Loc(Local_1446.f_49.f_7);
		if (!func_14(StackVal))
		{
			Call_Loc(Local_1446.f_49.f_7);
			func_13(StackVal);
		}
	}
}

int func_106()//Position - 0x2596
{
	if (Local_1446.f_49.f_6 != 0)
	{
		Call_Loc(Local_1446.f_49.f_6);
		return StackVal;
	}
	return 0;
}

int func_107(var uParam0)//Position - 0x25B5
{
	if (uParam0->f_1092 == PLAYER::PLAYER_ID())
	{
		Call_Loc(Local_1446.f_49.f_2);
		Call_Loc(Local_1446.f_49);
		if (StackVal && !StackVal)
		{
			return 1;
		}
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x25E5
{
	if (func_18(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_17())
		{
			return Global_1886967[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_109(var uParam0)//Position - 0x261A
{
	return 1;
}

void func_110(int iParam0)//Position - 0x2623
{
	char* sVar0;
	
	sVar0 = func_111(iParam0);
	func_11(sVar0, -1);
}

char* func_111(int iParam0)//Position - 0x263A
{
	char* sVar0;
	
	sVar0 = "";
	if (Local_1446.f_46 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1446.f_46);
		sVar0 = StackVal;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return sVar0;
	}
	switch (iParam0)
	{
		case 0:
			return "NHPG_HELP_BBOSS" /* GXT: Register as a Boss to gain access to the Planning Board. */;
		
		case 1:
			return "NHPG_HELP_BGOON" /* GXT: Unable to use the Planning Board. The leader has not formed an Organization or Motorcycle Club. */;
		
		default:
	}
	return sVar0;
}

bool func_112()//Position - 0x268D
{
	return func_108(PLAYER::PLAYER_ID());
}

void func_113()//Position - 0x269D
{
	if (Local_1446.f_49.f_9 != 0 && Local_1446.f_49.f_3 != 0)
	{
		Call_Loc(Local_1446.f_49.f_9);
		Call_Loc(Local_1446.f_49.f_3);
		if (func_103(StackVal, StackVal))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_114()//Position - 0x26DB
{
	if (Local_1446.f_49.f_5 != 0)
	{
		Call_Loc(Local_1446.f_49.f_5);
		if (func_14(StackVal))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_115()//Position - 0x2702
{
	if (Local_1446.f_49.f_7 != 0)
	{
		Call_Loc(Local_1446.f_49.f_7);
		if (func_14(StackVal))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_116()//Position - 0x2729
{
	char* sVar0;
	
	sVar0 = "NHPG_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to use the Planning Board. */;
	if (Local_1446.f_1 != 0)
	{
		Call_Loc(Local_1446.f_1);
		sVar0 = StackVal;
	}
	if (func_14(sVar0))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_117(var uParam0)//Position - 0x2756
{
	if (uParam0->f_826.f_3)
	{
		return 0;
	}
	if (uParam0->f_1098 > 0)
	{
		return 0;
	}
	if (uParam0->f_1092 != -1 && Global_1971856[uParam0->f_1092 /*27*/].f_23)
	{
		return 0;
	}
	if (!func_78(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (func_109(uParam0) && uParam0->f_1092 != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (BitTest(uParam0->f_1093, 7))
	{
		return 0;
	}
	if (BitTest(uParam0->f_1093, 8) || BitTest(uParam0->f_1093, 9))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (!func_128(PLAYER::PLAYER_ID(), 2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_127())
	{
		return 0;
	}
	if (func_56())
	{
		return 0;
	}
	if (func_126(PLAYER::PLAYER_ID(), 0) && func_125(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (uParam0->f_732 != 3)
	{
		return 0;
	}
	if (func_124())
	{
		return 0;
	}
	if (func_123())
	{
		return 0;
	}
	if (func_122())
	{
		return 0;
	}
	if (func_121() == 2 || func_121() == 16)
	{
		return 0;
	}
	if (func_62(0))
	{
		return 0;
	}
	if (Local_1446.f_0 != 0)
	{
		Call_Loc(Local_1446.f_0);
		if (!StackVal)
		{
			return 0;
		}
	}
	if (!func_119())
	{
		return 0;
	}
	if (func_118())
	{
		return 0;
	}
	return 1;
}

int func_118()//Position - 0x28D6
{
	if (func_14("H4PREP_UNVLB" /* GXT: Freemode Prep mission currently unavailable. Please wait or look for rival crews transporting the Heist Prep Equipment ~HUD_COLOUR_GREEN~~BLIP_ISLAND_HEIST_PREP~~s~ to steal from instead. */))
	{
		return 1;
	}
	return 0;
}

int func_119()//Position - 0x28EE
{
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1444, 1561.1489f, 386.04288f, -49.685326f, 1f, 0.65f, 1f, false, true, 0) && func_120(ENTITY::GET_ENTITY_HEADING(iLocal_1444), 180f, 60f))
	{
		return 1;
	}
	return 0;
}

int func_120(float fParam0, float fParam1, float fParam2)//Position - 0x2938
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

int func_121()//Position - 0x29AD
{
	return Global_1057441;
}

bool func_122()//Position - 0x29B9
{
	return Global_2684312.f_692;
}

bool func_123()//Position - 0x29C8
{
	return Global_2684312.f_691;
}

bool func_124()//Position - 0x29D7
{
	return Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_192 != 0;
}

bool func_125(int iParam0)//Position - 0x29EE
{
	return func_128(iParam0, 20);
}

int func_126(int iParam0, int iParam1)//Position - 0x29FE
{
	if (func_18(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1886967[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_127()//Position - 0x2A42
{
	bool bVar0;
	
	bVar0 = ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/));
	if (bVar0)
	{
		iLocal_1545 = 1;
		return 1;
	}
	else if (iLocal_1545)
	{
		if (func_43(&uLocal_1546, 1000, 0))
		{
			func_41(&uLocal_1546);
			iLocal_1545 = 0;
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_128(int iParam0, int iParam1)//Position - 0x2AA8
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

void func_129(var uParam0)//Position - 0x2AC0
{
	if (uParam0->f_732.f_5)
	{
		if (Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_25 != uParam0->f_1090)
		{
			Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_25 = uParam0->f_1090;
		}
	}
	else if (Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_25 != -1)
	{
		Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_25 = -1;
	}
}

void func_130(var uParam0)//Position - 0x2B17
{
	if (uParam0->f_826.f_4 && func_119())
	{
		func_131(0);
	}
}

void func_131(int iParam0)//Position - 0x2B37
{
	if (func_61())
	{
		return;
	}
	if (!Global_20813.f_1 == 1)
	{
		if (func_62(0))
		{
			func_57(iParam0);
		}
		MISC::SET_BIT(&Global_8684, 2);
	}
}

void func_132(var uParam0)//Position - 0x2B6A
{
	bool bVar0;
	
	switch (uParam0->f_1098)
	{
		case 0:
			break;
		
		case 1:
			if (func_133(uParam0, 0, &bVar0))
			{
				if (bVar0)
				{
					uParam0->f_1098 = 2;
				}
				else
				{
					uParam0->f_1098 = 0;
				}
				func_87(uParam0, 1);
			}
			break;
		
		case 2:
			Call_Loc(Local_1446.f_49.f_8);
			if (StackVal)
			{
				uParam0->f_1098 = 3;
			}
			break;
		
		case 3:
			Call_Loc(Local_1446.f_49);
			if (!StackVal)
			{
				Call_Loc(Local_1446.f_49.f_1);
				uParam0->f_1098 = 4;
			}
			else
			{
				uParam0->f_1098 = 4;
			}
			break;
		
		case 4:
			if (Local_1446.f_2 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1446.f_2);
			}
			else
			{
				func_83(uParam0);
			}
			uParam0->f_1098 = 0;
			break;
	}
}

int func_133(var uParam0, int iParam1, var uParam2)//Position - 0x2C22
{
	char cVar0[64];
	char cVar16[64];
	char cVar32[64];
	char cVar48[64];
	char cVar64[64];
	bool bVar80;
	int iVar81;
	int iVar82;
	
	bVar80 = false;
	iVar82 = 36;
	StringCopy(&cVar0, "HPWARN_CONF" /* GXT: Confirm */, 64);
	switch (iParam1)
	{
		case 0:
			Call_Loc(Local_1446.f_49.f_4);
			cVar16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			StringCopy(&cVar64, "HEIST_WARN_2" /* GXT: Do you wish to proceed? */, 64);
			bVar80 = true;
			Call_Loc(Local_1446.f_49.f_3);
			iVar81 = StackVal;
			break;
		
		case 1:
			StringCopy(&cVar0, "FM_CSC_QUIT" /* GXT: Confirm */, 64);
			StringCopy(&cVar16, "FM_CSC_QUIT1" /* GXT: Are you sure you want to quit this Job? */, 64);
			break;
		
		case 2:
			if (Local_1446.f_72 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1446.f_72);
				StringCopy(&cVar0, StackVal, 64);
			}
			if (Local_1446.f_72.f_1 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1446.f_72.f_1);
				StringCopy(&cVar16, StackVal, 64);
			}
			if (Local_1446.f_72.f_2 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1446.f_72.f_2);
				iVar82 = StackVal;
			}
			Stack.Push(Local_1446.f_72.f_3 != 0);
			Stack.Push(uParam0);
			Call_Loc(Local_1446.f_72.f_3);
			if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1446.f_72.f_3);
				StringCopy(&cVar64, StackVal, 64);
			}
			if (Local_1446.f_72.f_4 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1446.f_72.f_4);
				bVar80 = StackVal;
			}
			if (Local_1446.f_72.f_5 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1446.f_72.f_5);
				iVar81 = StackVal;
			}
			Stack.Push(Local_1446.f_72.f_6 != 0);
			Stack.Push(uParam0);
			Call_Loc(Local_1446.f_72.f_6);
			if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1446.f_72.f_6);
				StringCopy(&cVar32, StackVal, 64);
			}
			Stack.Push(Local_1446.f_72.f_7 != 0);
			Stack.Push(uParam0);
			Call_Loc(Local_1446.f_72.f_7);
			if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1446.f_72.f_7);
				StringCopy(&cVar48, StackVal, 64);
			}
			break;
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(&cVar0, &cVar16, iVar82, &cVar64, bVar80, iVar81, &cVar32, &cVar48, true, 0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		*uParam2 = 0;
		return 1;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

void func_134(var uParam0)//Position - 0x2DEC
{
	if (BitTest(uParam0->f_1093, 8) && !BitTest(uParam0->f_1093, 9))
	{
		if (uParam0->f_1092 == PLAYER::PLAYER_ID())
		{
			if (func_296() || func_295())
			{
				func_294();
			}
			else if (!BitTest(uParam0->f_1093, 9))
			{
				if (func_135(uParam0))
				{
					MISC::SET_BIT(&(uParam0->f_1093), 9);
					MISC::SET_BIT(&(uParam0->f_1093), 10);
				}
			}
		}
	}
	else if (BitTest(uParam0->f_1093, 10))
	{
		if (!BitTest(uParam0->f_1093, 11))
		{
			MISC::SET_BIT(&(uParam0->f_1093), 11);
			func_68(0, 0);
			func_68(0, 0);
		}
		MISC::CLEAR_BIT(&(uParam0->f_1093), 10);
	}
}

int func_135(var uParam0)//Position - 0x2E98
{
	int iVar0;
	struct<6> Var1;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar12;
	struct<3> Var13;
	var uVar16;
	
	if (Local_1446.f_48 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_1446.f_48);
	iVar0 = StackVal;
	if (iVar0 == -1)
	{
		return 0;
	}
	Var1 = { Global_794744.f_4[iVar0 /*89*/] };
	iVar7 = Global_794744.f_4[iVar0 /*89*/].f_65;
	uVar8 = Global_794744.f_4[iVar0 /*89*/].f_71;
	func_228(func_229(PLAYER::PLAYER_ID()));
	func_88(PLAYER::PLAYER_ID(), 0, 376832, 0);
	Global_2685249.f_3836 = 1;
	func_227(PLAYER::PLAYER_ID(), 0);
	func_226();
	func_225();
	switch (uParam0->f_1090)
	{
		case 0:
			iVar7 = 260;
			func_224(67);
			func_223();
			func_222();
			break;
		
		case 1:
			iVar7 = 274;
			func_224(69);
			func_221();
			func_220();
			break;
	}
	if (func_296() || func_219())
	{
		func_294();
	}
	else
	{
		Global_1942781.f_523 = 1;
		func_218(iVar7);
		if (func_23() <= 3)
		{
			func_217();
		}
		func_214(func_216(PLAYER::PLAYER_ID()));
		func_212(&Var1);
		func_211(uVar8);
		func_210();
		func_208();
		func_207();
		func_81();
		func_206();
		Var13 = { 0f, 0f, 0f };
		MISC::SET_BIT(&uVar16, 6);
		func_136(&(Global_2684312.f_781), 0, 0, Var13, &uVar9, Var13, 1, 0, &uVar9, &iVar12, iVar12, 0, uVar16);
		func_68(0, 0);
		Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_95 = 8;
		return 1;
	}
	return 0;
}

void func_136(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, struct<3> Param7, bool bParam10, bool bParam11, var uParam12, var uParam13, int iParam14, bool bParam15, var uParam16)//Position - 0x300A
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	bool bVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	
	func_64(uParam0, iParam1, 1, iParam14, 1);
	if (func_79(PLAYER::PLAYER_ID(), 0))
	{
		if (bParam11)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!func_205() || bParam15)
				{
					func_194(0);
				}
			}
			return;
		}
	}
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	}
	Var3 = { Param7 };
	fVar6 = -1f;
	bVar7 = false;
	fVar8 = 0.2f;
	iVar9 = 1;
	if (func_193(iParam1))
	{
		*uParam6 = { func_192(iParam1, iParam2) };
		Var3 = { func_191(iParam1, iParam2) };
		fVar6 = func_190(iParam1, iParam2);
	}
	if (!func_38(*uParam6))
	{
		Var0 = { *uParam6 };
	}
	if (func_38(Var0))
	{
		if (!bParam10)
		{
			Var0 = { Param3 };
			if (INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f)))
			{
			}
			else
			{
				Var0.f_2 = (Var0.f_2 + 4f);
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_38(Var0))
		{
			if (func_79(PLAYER::PLAYER_ID(), 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_187()) && !ENTITY::IS_ENTITY_DEAD(func_187(), false))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(func_187(), true) };
					Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(func_187()) };
					if (func_77(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_813, 1, 0))
					{
						Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					}
				}
				else
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) };
				}
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) };
			}
			if ((func_186(PLAYER::PLAYER_ID()) || func_185(PLAYER::PLAYER_ID())) && func_184())
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
			}
			else if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			{
				if (func_186(PLAYER::PLAYER_ID()))
				{
					Var0.f_2 = (Var0.f_2 + 0.4f);
				}
				else
				{
					Var0.f_2 = (Var0.f_2 + 1.5f);
				}
			}
			else
			{
				Var0.f_2 = (Var0.f_2 + 4f);
			}
		}
	}
	if (BitTest(uParam16, 3))
	{
		Var0 = { 1124.7449f, 263.6554f, -48.8552f };
		Var3 = { -22.4617f, 0f, -75.8431f };
		fVar6 = 50f;
	}
	else if (func_182(PLAYER::PLAYER_ID()))
	{
		Var0 = { 488.6712f, -2623.0745f, -48.1159f };
		Var3 = { -9.1167f, 0f, 130.9763f };
		fVar6 = 50f;
	}
	else if (func_181(Global_4718592.f_126144) || BitTest(uParam16, 2))
	{
		if (func_180(PLAYER::PLAYER_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) };
			Var0.f_2 = (Var0.f_2 + 0.4f);
			fVar6 = CAM::GET_FINAL_RENDERED_CAM_FOV();
		}
		else
		{
			Var0 = { -194.2056f, -1853.7499f, 70.3345f };
			Var3 = { -10.0011f, 0f, 131.0271f };
			fVar6 = 42.6052f;
		}
	}
	else if (func_179(Global_4718592.f_126144) || BitTest(uParam16, 1))
	{
		Var0 = { 347.2638f, 4867.324f, -59.2679f };
		Var3 = { 1.2933f, 0.0747f, -34.6934f };
		fVar6 = 50f;
	}
	else if (BitTest(uParam16, 4) || func_178(Global_4718592.f_126144))
	{
		Var0 = { 2709.3323f, -366.5988f, -52.2786f };
		Var3 = { -19.962f, 0f, -121.3927f };
		fVar6 = 56.6574f;
	}
	else if (BitTest(uParam16, 5))
	{
		iVar10 = func_177(PLAYER::PLAYER_ID());
		Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_176(iVar10), func_175(iVar10), 3.5688f, 7.9792f, 4.1641f) };
		Var3 = { -21.6791f, 0f, (func_175(iVar10) + 40.237f) };
		fVar6 = 70f;
	}
	else if (BitTest(uParam16, 6) || func_174())
	{
		if (BitTest(uParam16, 6))
		{
			Var0 = { Global_1970744.f_1081 };
			Var3 = { Global_1970744.f_1081.f_3 };
			fVar6 = Global_1970744.f_1081.f_6;
		}
		else
		{
			func_171(&Var0, &Var3, &fVar6);
		}
	}
	else if (BitTest(uParam16, 7))
	{
		Var0 = { -1381.7837f, 38.8164f, 63.1614f };
		Var3 = { -19.0288f, 0f, -35.2577f };
		fVar6 = 50f;
	}
	else if (BitTest(uParam16, 8) || func_170(Global_4718592.f_126144))
	{
	}
	else if (BitTest(uParam16, 9) || (func_168() && func_167(249)))
	{
		Var0 = { -822.1176f, -198.5518f, 40.085f };
		Var3 = { 13.7424f, 0f, 145.7582f };
		fVar6 = 65.2994f;
		bVar7 = true;
		if (!func_122())
		{
			iVar9 = 0;
		}
	}
	else if (BitTest(uParam16, 10))
	{
	}
	else if (func_166(Global_4718592.f_126144))
	{
		Var0 = { 800.2757f, -3051.393f, 10.5728f };
		Var3 = { 3.1956f, 0f, -8.4268f };
		fVar6 = 50f;
	}
	else if (func_165(Global_4718592.f_126144))
	{
		Var0 = { -949.149f, -2754.6213f, 19.6422f };
		Var3 = { -12.3116f, 0f, 170.9905f };
		fVar6 = 60f;
	}
	else if (BitTest(uParam16, 11))
	{
		Var0 = { 1403.9072f, 3586.4277f, 41.1676f };
		Var3 = { -8.8877f, 0f, 39.6448f };
		fVar6 = 62f;
	}
	else if (BitTest(uParam16, 12))
	{
		Var0 = { 622.9118f, -396.3098f, 31.0305f };
		Var3 = { -10.3971f, 0f, 133.29f };
		fVar6 = 60f;
	}
	else if (BitTest(uParam16, 13))
	{
		Var0 = { -1102.2451f, -805.9605f, 24.6985f };
		Var3 = { -20.2647f, 0f, -101.329f };
		fVar6 = 62f;
	}
	if (func_205() && !bParam15)
	{
		Var0 = { -213.5595f, 316.9778f, 96.9244f };
		Var3 = { -1.0483f, 0f, -127.3989f };
		fVar6 = 25.5102f;
	}
	if (iParam1 == 0 && bParam11)
	{
		func_159();
		func_158(&Var11, 144, Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_34);
		if (!func_38(Var11))
		{
			Var0 = { Var11 };
		}
		func_152(&Var11, 144, Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_34);
		Var3 = { Var11 };
	}
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_COORD(*uParam0, Var0);
	CAM::SET_CAM_ROT(*uParam0, Var3, 2);
	if (fVar6 > 0f)
	{
		CAM::SET_CAM_FOV(*uParam0, fVar6);
	}
	else
	{
		CAM::SET_CAM_FOV(*uParam0, 40f);
	}
	if (bVar7)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fVar8);
	}
	if (func_205() && !bParam15)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_151(PLAYER::PLAYER_ID()))
			{
				func_88(PLAYER::PLAYER_ID(), 0, 4, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -209.434f, 305.016f, 95.9464f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 12.5f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -209.867f, 306.969f, 95.9464f, 1f, 20000, 40000f, 0.1f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			}
		}
		MISC::CLEAR_AREA_OF_VEHICLES(-209.434f, 305.016f, 95.9464f, 30f, false, false, false, false, false, false, 0);
		func_150(1);
	}
	if (iVar9 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!func_205() || bParam15)
		{
			func_194(0);
		}
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if ((((!func_149() && !func_148()) && !func_147()) && !func_146()) && !func_145())
	{
		func_144(0);
	}
	if (func_76())
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		*uParam12 = { Var0 };
		*uParam13 = 1;
	}
	else
	{
		func_143(Var0);
	}
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	func_137(func_205(), ((BitTest(uParam16, 0) || BitTest(uParam16, 1)) || BitTest(uParam16, 2)));
}

void func_137(bool bParam0, bool bParam1)//Position - 0x3880
{
	if (func_79(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (!bParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
		}
	}
	if (!bParam0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_140())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			if (func_139(PLAYER::PLAYER_ID()))
			{
				func_88(PLAYER::PLAYER_ID(), 0, 32768, 0);
			}
			else if (func_138())
			{
				func_88(PLAYER::PLAYER_ID(), 0, 32772, 0);
			}
			else if (!bParam1)
			{
				func_88(PLAYER::PLAYER_ID(), 0, 319492, 0);
			}
		}
		else
		{
			func_88(PLAYER::PLAYER_ID(), 0, 57348, 0);
		}
	}
}

bool func_138()//Position - 0x3942
{
	return Global_2685249.f_6367;
}

int func_139(int iParam0)//Position - 0x3951
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1882422[iParam0 /*142*/].f_30, 31);
	}
	return 0;
}

int func_140()//Position - 0x3970
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_142(iVar0, 1) && !func_141(iVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_141(int iParam0, bool bParam1)//Position - 0x39AB
{
	if (Global_79248)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_142(int iParam0, bool bParam1)//Position - 0x39FF
{
	if (Global_79248)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_143(struct<3> Param0)//Position - 0x3A3E
{
	if (!func_76())
	{
		return;
	}
	STREAMING::SET_FOCUS_POS_AND_VEL(Param0, 0f, 0f, 0f);
	NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
}

void func_144(int iParam0)//Position - 0x3A61
{
	if (func_74())
	{
		return;
	}
	if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873, 2) && !Global_2685249.f_2847.f_216 == -1)
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
}

bool func_145()//Position - 0x3AB1
{
	return BitTest(Global_2684312.f_3, 17);
}

bool func_146()//Position - 0x3AC2
{
	return BitTest(Global_2684312.f_3, 14);
}

bool func_147()//Position - 0x3AD3
{
	return BitTest(Global_2684312.f_3, 12);
}

bool func_148()//Position - 0x3AE4
{
	return BitTest(Global_2684312.f_3, 9);
}

bool func_149()//Position - 0x3AF5
{
	return BitTest(Global_2684312.f_3, 6);
}

void func_150(bool bParam0)//Position - 0x3B05
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_143), 27);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_143), 27);
	}
}

bool func_151(int iParam0)//Position - 0x3B3B
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_143, 27);
}

int func_152(var uParam0, int iParam1, int iParam2)//Position - 0x3B51
{
	struct<4> Var0;
	
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_153(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_153(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_153(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_153(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_153(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_153(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
			return 0;
	}
}

void func_153(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x3CF0
{
	struct<6> Var0[2];
	struct<3> Var13;
	
	Var0[0 /*6*/] = { func_157(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_157(iParam0, bParam4) };
	*uParam2 = { func_155(iParam1, iParam3) };
	Var13 = { *uParam2 - Var0[0 /*6*/] };
	Var13 = { func_154(Var13, -Var0[0 /*6*/].f_3.f_2) };
	Var13 = { func_154(Var13, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0[1 /*6*/], 0f, Var13) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
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
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
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
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_154(struct<3> Param0, float fParam3)//Position - 0x542F
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

struct<6> func_155(int iParam0, int iParam1)//Position - 0x5473
{
	struct<6> Var0;
	bool bVar6;
	int iVar23;
	
	iVar23 = 0;
	if (func_156(iParam1, &bVar6))
	{
		iVar23 = 1;
	}
	if (iVar23 && MISC::GET_BASE_ELEMENT_LOCATION_FROM_METADATA_BLOCK(&Var0, &(Var0.f_3), iParam0, bVar6))
	{
		return Var0;
	}
	return Var0;
}

int func_156(int iParam0, var uParam1)//Position - 0x54B5
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_157(int iParam0, bool bParam1)//Position - 0x55DB
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.59628f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 179.99997f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -109.99999f };
			break;
		
		case 7:
			Var0 = { -1471.8821f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.8821f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.39966f };
			Var0.f_3 = { 0f, 0f, -153.30931f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.23286f };
			Var0.f_3 = { 0f, 0f, -152.55307f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.6498f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.0981f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.1869f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.9543f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.7644f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.6702f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.5712f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.2538f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.0984f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.5178f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.5383f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.9939f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_158(var uParam0, int iParam1, int iParam2)//Position - 0x6191
{
	struct<3> Var0;
	
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_153(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_153(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_153(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_153(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_153(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_153(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0 };
			return 1;
			return 0;
	}
}

void func_159()//Position - 0x6324
{
	int iVar0;
	
	if (func_162())
	{
		return;
	}
	func_161(4, -1);
	if (func_160())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			if (PLAYER::INT_TO_PLAYERINDEX(iVar0) == PLAYER::PLAYER_ID())
			{
				if (!func_167(48))
				{
					NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(iVar0), false);
				}
			}
			else
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(iVar0), false);
			}
		}
		iVar0++;
	}
}

bool func_160()//Position - 0x6396
{
	return BitTest(Global_2684312.f_43.f_4, 0);
}

void func_161(int iParam0, int iParam1)//Position - 0x63A8
{
	MISC::SET_BIT(&(Global_1668317.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1668317.f_170[iParam1] = 1;
			}
			break;
	}
}

int func_162()//Position - 0x63DE
{
	if (func_164() != 2)
	{
		return 0;
	}
	if (!func_160() && !((Global_1936137 || Global_1574971) && func_163()))
	{
		return 0;
	}
	return 1;
}

var func_163()//Position - 0x641C
{
	return Global_2684312.f_43.f_57;
}

int func_164()//Position - 0x642C
{
	return Global_2684312.f_43.f_40;
}

int func_165(int iParam0)//Position - 0x643C
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_262145.f_6190[19])
		{
			if (iParam0 == Global_262145.f_4892[19 /*51*/][iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_166(int iParam0)//Position - 0x647F
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_262145.f_6190[18])
		{
			if (iParam0 == Global_262145.f_4892[18 /*51*/][iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_167(int iParam0)//Position - 0x64C2
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 9)
	{
		return 0;
	}
	return BitTest(Global_2685249.f_1.f_2813[iVar0], iVar1);
}

int func_168()//Position - 0x64F3
{
	return func_169(Global_4718592.f_126144);
}

int func_169(int iParam0)//Position - 0x6509
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_32045[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_170(int iParam0)//Position - 0x6538
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_32038[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_171(var uParam0, var uParam1, float fParam2)//Position - 0x6571
{
	if (func_173(Global_4718592.f_126144))
	{
		if (MISC::ABSF((GRAPHICS::GET_ASPECT_RATIO(false) - 1.3333333f)) < 0.1f)
		{
			*uParam0 = { 1561.1614f, 384.824f, -48.6215f };
			*uParam1 = { -89.3034f, -0.1435f, 180f };
			*fParam2 = 69f;
		}
		else
		{
			*uParam0 = { 1561.1604f, 384.8204f, -48.9135f };
			*uParam1 = { -89.5003f, -0.204f, 180f };
			*fParam2 = 69f;
		}
	}
	else if (func_172(Global_4718592.f_126144))
	{
		*uParam0 = { -1348.9563f, 138.2791f, -94.7272f };
		*uParam1 = { -2.4593f, 0f, -164.9275f };
		*fParam2 = 70f;
	}
}

int func_172(int iParam0)//Position - 0x663F
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31332[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_173(int iParam0)//Position - 0x6679
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_30210[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_174()//Position - 0x66A9
{
	if (func_173(Global_4718592.f_126144))
	{
		return 1;
	}
	return 0;
}

float func_175(int iParam0)//Position - 0x66C7
{
	return Global_4280768[iParam0 /*45*/].f_7;
}

Vector3 func_176(int iParam0)//Position - 0x66D9
{
	return Global_4280768[iParam0 /*45*/].f_4;
}

var func_177(int iParam0)//Position - 0x66ED
{
	return Global_2652572[iParam0 /*3*/];
}

int func_178(int iParam0)//Position - 0x66FD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6066[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_179(int iParam0)//Position - 0x672D
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

bool func_180(int iParam0)//Position - 0x6767
{
	return BitTest(Global_2657921[iParam0 /*463*/].f_200, 24);
}

int func_181(int iParam0)//Position - 0x677D
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 22)
		{
			if (Global_262145.f_6954[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6190[iVar1])
				{
					if (iParam0 == Global_262145.f_4892[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_182(int iParam0)//Position - 0x67E3
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_17())
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

int func_183(int iParam0)//Position - 0x6843
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

var func_184()//Position - 0x6D1D
{
	return BitTest(Global_2684312.f_3, 4);
}

int func_185(int iParam0)//Position - 0x6D2D
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 6;
			}
		}
	}
	return 0;
}

int func_186(int iParam0)//Position - 0x6D73
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_17())
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

var func_187()//Position - 0x6DD2
{
	if (ENTITY::DOES_ENTITY_EXIST(func_189()))
	{
		return func_189();
	}
	return func_188();
}

var func_188()//Position - 0x6DF0
{
	return Global_2621446.f_2;
}

var func_189()//Position - 0x6DFE
{
	return Global_2621446.f_3;
}

float func_190(int iParam0, int iParam1)//Position - 0x6E0C
{
	switch (iParam0)
	{
		case 11:
			return 40.5914f;
		
		case 122:
			return 50f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 50f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 40.4324f;
				
				case 2:
					return 42.2709f;
				
				case 3:
					return 43.6444f;
				
				case 4:
					return 37.3862f;
				
				case 5:
					return 38.6952f;
				
				case 6:
					return 40.9091f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 40.5238f;
				
				case 1:
					return 47.4321f;
				
				case 2:
					return 38.6571f;
				
				case 3:
					return 44.0641f;
				
				case 4:
					return 39.2991f;
				
				case 5:
					return 31.7484f;
				
				case 6:
					return 35.6342f;
				
				case 7:
					return 36.0072f;
				
				case 8:
					return 42.5782f;
				
				case 9:
					return 37.4336f;
				
				default:
			}
			break;
		
		case 14:
			return 50f;
	}
	return 50f;
}

Vector3 func_191(int iParam0, int iParam1)//Position - 0x6F84
{
	switch (iParam0)
	{
		case 11:
			return 1.3773f, 0f, -88.827f;
		
		case 122:
			return -18.1605f, 2.6167f, 113.0513f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2.3039f, 0f, -19.6903f;
				
				case 1:
					return -5.9341f, 0f, -151.6385f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3.627f, 0f, 34.6935f;
				
				case 1:
					return -57.9221f, 0f, 58.3042f;
				
				case 2:
					return -15.4498f, 0f, 161.1361f;
				
				case 3:
					return -1.8386f, 0f, -135.0223f;
				
				case 4:
					return 0.5233f, 0f, -85.7377f;
				
				case 5:
					return -4.2364f, 0f, 173.6634f;
				
				case 6:
					return -3.74f, 0f, -30.7752f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 4.1441f, 0f, 15.6909f;
				
				case 1:
					return 5.4815f, 0f, -127.6695f;
				
				case 2:
					return -4.1889f, 0f, -15.0654f;
				
				case 3:
					return 16.4433f, 0f, -60.3988f;
				
				case 4:
					return 7.8225f, 0f, 39.2409f;
				
				case 5:
					return 2.0405f, 0f, -122.3459f;
				
				case 6:
					return 7.3382f, 0f, 157.6388f;
				
				case 7:
					return 6.481f, 0f, 172.9874f;
				
				case 8:
					return 14.0573f, 0f, 5.0622f;
				
				case 9:
					return -10.1444f, 0f, -131.4038f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8.8196f, 0f, 57.5677f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_192(int iParam0, int iParam1)//Position - 0x7192
{
	switch (iParam0)
	{
		case 11:
			return -1297.8552f, 84.6478f, 54.6519f;
		
		case 122:
			return -855.7661f, -2645.376f, 100.8438f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 13.4678f, -1097.7811f, 30.192f;
				
				case 1:
					return 816.6221f, -2160.6592f, 30.3139f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1172.111f, -1641.5487f, 5.7494f;
				
				case 1:
					return 498.4758f, -226.4275f, 71.0569f;
				
				case 2:
					return -1217.632f, 364.4556f, 86.527f;
				
				case 3:
					return -2884.7537f, 32.9823f, 15.1123f;
				
				case 4:
					return -948.1036f, -1260.2487f, 8.228f;
				
				case 5:
					return -1614.2163f, 302.0945f, 66.0158f;
				
				case 6:
					return -1380.7211f, -107.9713f, 50.6998f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 903.8763f, -192.214f, 74.6401f;
				
				case 1:
					return 1419.5167f, -2216.0344f, 61.8467f;
				
				case 2:
					return -83.9713f, -1331.6351f, 29.8383f;
				
				case 3:
					return 364.6455f, -2441.8967f, 6.2607f;
				
				case 4:
					return 1237.2067f, 2715.9993f, 37.6424f;
				
				case 5:
					return 1019.1531f, 2680.4268f, 41.2254f;
				
				case 6:
					return 269.5203f, 2617.4104f, 44.7054f;
				
				case 7:
					return -194.2518f, 6295.6875f, 31.0991f;
				
				case 8:
					return 1682.7593f, 4954.088f, 42.6891f;
				
				case 9:
					return 2325.4468f, 3145.91f, 58.4284f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1993.6974f, 3049.6675f, 47.7241f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_193(int iParam0)//Position - 0x73F4
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_194(int iParam0)//Position - 0x742C
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_195(0)))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(func_195(iParam0), 0, true);
	}
}

char* func_195(int iParam0)//Position - 0x744D
{
	if (func_204(Global_4718592.f_126144))
	{
		return "MenuMGIslandHeistIn";
	}
	if (iParam0 || func_167(134))
	{
		return "MenuMGHeistIn";
	}
	if (func_203())
	{
		return "MenuMGTournamentIn";
	}
	if (func_197(Global_4718592.f_183007))
	{
		return "MenuMGRemixIn";
	}
	if (func_196(Global_4718592.f_183007) && BitTest(Global_4718592.f_184417.f_2808, 2))
	{
		return "MenuSurvivalAlienIn";
	}
	return "MenuMGSelectionIn";
}

bool func_196(int iParam0)//Position - 0x74DA
{
	return iParam0 == 998;
}

int func_197(int iParam0)//Position - 0x74E8
{
	if ((((func_202(iParam0) || func_201(iParam0)) || func_200(iParam0)) || func_199(iParam0)) || func_198(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_198(int iParam0)//Position - 0x752E
{
	return iParam0 == 64;
}

bool func_199(int iParam0)//Position - 0x753B
{
	return iParam0 == 65;
}

bool func_200(int iParam0)//Position - 0x7548
{
	return iParam0 == 69;
}

bool func_201(int iParam0)//Position - 0x7555
{
	return iParam0 == 67;
}

bool func_202(int iParam0)//Position - 0x7562
{
	return iParam0 == 68;
}

bool func_203()//Position - 0x756F
{
	return BitTest(Global_2685249.f_1.f_2809, 12);
}

int func_204(int iParam0)//Position - 0x7583
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_30210[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_205()//Position - 0x75BD
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_139, 2);
}

void func_206()//Position - 0x75D4
{
	Global_2684312.f_717 = 1;
}

void func_207()//Position - 0x75E4
{
	MISC::CLEAR_BIT(&Global_2684312, 7);
}

void func_208()//Position - 0x75F5
{
	MISC::SET_BIT(&Global_2684312, 5);
	func_209();
}

void func_209()//Position - 0x760A
{
	MISC::SET_BIT(&Global_2684312, 8);
}

void func_210()//Position - 0x761C
{
	MISC::CLEAR_BIT(&(Global_2684312.f_2), 14);
}

void func_211(var uParam0)//Position - 0x7630
{
	Global_2684312.f_42 = uParam0;
}

void func_212(char* sParam0)//Position - 0x7640
{
	StringCopy(&(Global_2684312.f_860), sParam0, 24);
	if (func_213())
	{
		StringCopy(&(Global_1048576.f_44), sParam0, 24);
	}
}

bool func_213()//Position - 0x7664
{
	return BitTest(Global_2685249.f_1.f_2809, 5);
}

void func_214(struct<13> Param0)//Position - 0x7677
{
	if (func_215(Param0))
	{
		Global_2685249.f_6617 = { Param0 };
	}
}

bool func_215(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x769D
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> func_216(int iParam0)//Position - 0x76AD
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_217()//Position - 0x76C4
{
	MISC::SET_BIT(&(Global_1882422[PLAYER::PLAYER_ID() /*142*/].f_30), 12);
}

void func_218(int iParam0)//Position - 0x76DE
{
	Global_2684312.f_9 = iParam0;
}

var func_219()//Position - 0x76EE
{
	return Global_2684312.f_756;
}

void func_220()//Position - 0x76FD
{
	MISC::SET_BIT(&(Global_1882422[PLAYER::PLAYER_ID() /*142*/].f_30), 28);
}

void func_221()//Position - 0x7717
{
	MISC::SET_BIT(&(Global_2684312.f_3), 13);
}

void func_222()//Position - 0x772B
{
	MISC::SET_BIT(&(Global_1882422[PLAYER::PLAYER_ID() /*142*/].f_30), 27);
}

void func_223()//Position - 0x7745
{
	MISC::SET_BIT(&(Global_2684312.f_3), 11);
}

void func_224(int iParam0)//Position - 0x7759
{
	Global_1057441 = iParam0;
}

void func_225()//Position - 0x7767
{
	MISC::SET_BIT(&(Global_2684312.f_3), 2);
}

void func_226()//Position - 0x777A
{
	Global_2693219.f_1 = 0;
}

void func_227(int iParam0, int iParam1)//Position - 0x7789
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

void func_228(struct<3> Param0)//Position - 0x77CE
{
	Global_2695938 = { Param0 };
}

Vector3 func_229(int iParam0)//Position - 0x77E0
{
	struct<3> Var0;
	
	if (HUD::DOES_BLIP_EXIST(Global_2647042[iParam0]))
	{
		Var0 = { func_293(Global_2647042[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2647042.f_33[iParam0]) && !iParam0 == Global_2672741)
	{
		Var0 = { func_293(Global_2647042.f_33[iParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_230(iParam0);
}

Vector3 func_230(int iParam0)//Position - 0x7854
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	if (Global_2644847)
	{
		if (func_292(iParam0))
		{
			Var1 = { func_291(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2657921[iParam0 /*463*/].f_73.f_11)
		{
			if (SYSTEM::VMAG(Global_2657921[iParam0 /*463*/].f_73.f_12) > 0f)
			{
				return Global_2657921[iParam0 /*463*/].f_73.f_12;
			}
		}
	}
	if (Global_1845263[iParam0 /*877*/].f_267.f_34 > 0)
	{
		Var1 = { func_289(func_290(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_34)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_286(func_288(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { func_289(func_290(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (func_285(iParam0))
	{
		Var1 = { func_233(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (func_232(iParam0))
	{
		iVar4 = func_231(iParam0);
		if (iVar4 > -1)
		{
			Var1 = { Global_1942781.f_558[iVar4 /*3*/] };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2644847)
	{
		if (func_292(iParam0))
		{
			Var1 = { func_291(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2657921[iParam0 /*463*/].f_73.f_11)
		{
			if (SYSTEM::VMAG(Global_2657921[iParam0 /*463*/].f_73.f_12) > 0f)
			{
				return Global_2657921[iParam0 /*463*/].f_73.f_12;
			}
		}
	}
	return func_288(iParam0);
}

int func_231(int iParam0)//Position - 0x7A27
{
	if (iParam0 != func_17())
	{
		return Global_2657921[iParam0 /*463*/].f_321.f_16;
	}
	return -1;
}

int func_232(int iParam0)//Position - 0x7A4A
{
	int iVar0;
	
	if (iParam0 != func_17() && (func_78(iParam0, 1, 1) || Global_2635562.f_2980))
	{
		iVar0 = BitTest(Global_2657921[iParam0 /*463*/].f_321, 1);
		return iVar0;
	}
	return 0;
}

Vector3 func_233(int iParam0)//Position - 0x7A8C
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
	
	if (iParam0 == func_17())
	{
	}
	if (func_186(iParam0))
	{
		iVar0 = func_284(iParam0);
		if (iVar0 != func_17())
		{
			if (!func_283(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672741.f_258[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672741.f_258[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2657921[func_284(iParam0) /*463*/].f_321.f_12;
				}
			}
			else
			{
				iVar1 = func_280(iVar0);
				if (iVar1 == -1)
				{
					iVar1 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (!iVar1 == -1)
				{
					return Global_1942781.f_558[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_182(iParam0))
	{
		iVar2 = func_279(iParam0);
		if (iVar2 != func_17())
		{
			if (!func_278(iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1961179[iVar2]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_1961179[iVar2], false);
				}
				else
				{
					return Global_2657921[func_284(iParam0) /*463*/].f_321.f_12;
				}
			}
			else
			{
				iVar3 = 160;
				if (!iVar3 == -1)
				{
					return Global_1942781.f_558[iVar3 /*3*/];
				}
			}
		}
	}
	else if (func_185(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2738587.f_308))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2738587.f_308, false);
		}
	}
	else if (func_277(iParam0) && !func_276(iParam0))
	{
		iVar4 = Global_2657921[iParam0 /*463*/].f_321.f_10;
		if (iVar4 != func_17())
		{
			iVar5 = func_280(iVar4);
			if (iVar5 == -1)
			{
				iVar5 = Global_2657921[iParam0 /*463*/].f_321.f_7;
			}
			if (!iVar5 == -1)
			{
				return Global_1942781.f_558[iVar5 /*3*/];
			}
		}
	}
	else if (func_275(iParam0) && !func_274(iParam0))
	{
		if (func_285(iParam0) && func_273())
		{
			return Global_1942781.f_558[Global_2657921[iParam0 /*463*/].f_321.f_7 /*3*/];
		}
		iVar6 = Global_2657921[iParam0 /*463*/].f_321.f_10;
		if (iVar6 != func_17())
		{
			if (func_272(iVar6))
			{
				iVar7 = func_269(iVar6);
				if (iVar7 == -1)
				{
					iVar7 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (iVar7 != -1)
				{
					return Global_1942781.f_558[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_268(iParam0))
	{
		iVar8 = func_267(iParam0);
		if (iVar8 != func_17())
		{
			if (!func_266(iVar8) && !func_265(iVar8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672741.f_355[iVar8]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672741.f_355[iVar8], false);
				}
				else
				{
					return Global_2657921[func_267(iParam0) /*463*/].f_321.f_20;
				}
			}
			else if (func_272(iVar8) && func_266(iVar8))
			{
				iVar9 = func_269(iVar8);
				if (iVar9 == -1)
				{
					iVar9 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (!iVar9 == -1)
				{
					return Global_1942781.f_558[iVar9 /*3*/];
				}
			}
			else if (func_264(iVar8) && func_265(iVar8))
			{
				iVar10 = func_261(iVar8);
				if (iVar10 == -1)
				{
					iVar10 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (!iVar10 == -1)
				{
					return Global_1942781.f_558[iVar10 /*3*/];
				}
			}
		}
	}
	else if (func_260(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2738587.f_310))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2738587.f_310, false);
		}
	}
	else if (func_259(iParam0) && !func_258(iParam0))
	{
		iVar11 = Global_2657921[iParam0 /*463*/].f_321.f_10;
		if (iVar11 != func_17())
		{
			if (func_257(iVar11))
			{
				iVar12 = func_254(iVar11);
				if (iVar12 == -1)
				{
					iVar12 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (iVar12 != -1)
				{
					return func_253(iVar12);
				}
			}
		}
	}
	else if (func_252(iParam0) && !func_251(iParam0))
	{
		iVar13 = Global_2657921[iParam0 /*463*/].f_321.f_10;
		if (iVar13 != func_17())
		{
			if (func_250(iVar13))
			{
				iVar14 = func_247(iVar13);
				if (iVar14 == -1)
				{
					iVar14 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (iVar14 != -1)
				{
					return Global_1942781.f_558[iVar14 /*3*/];
				}
			}
		}
	}
	else if (func_246(iParam0, 0))
	{
		iVar15 = func_245(iParam0);
		if (iVar15 != func_17())
		{
			if (!func_244(iVar15))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672741.f_388[iVar15]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672741.f_388[iVar15], false);
				}
				else
				{
					return Global_1886967[func_245(iParam0) /*609*/].f_591;
				}
			}
			else
			{
				iVar16 = func_247(iVar15);
				if (iVar16 == -1)
				{
					iVar16 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (!iVar16 == -1)
				{
					return Global_1942781.f_558[iVar16 /*3*/];
				}
			}
		}
	}
	else if (func_243(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_242(iParam0))
	{
		iVar17 = func_239(iParam0);
		if (iVar17 != func_17())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2672741.f_421[iVar17]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2672741.f_421[iVar17], false);
			}
			else
			{
				return Global_1906517[iVar17 /*299*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_259(iParam0))
	{
		return func_253(Global_2657921[iParam0 /*463*/].f_321.f_7);
	}
	if (func_234(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1942781.f_558[Global_2657921[iParam0 /*463*/].f_321.f_7 /*3*/];
}

int func_234(int iParam0)//Position - 0x808B
{
	if (((func_238(iParam0) || func_237(iParam0)) || func_236(iParam0)) || func_235(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)//Position - 0x80C5
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

int func_236(int iParam0)//Position - 0x810C
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_237(int iParam0)//Position - 0x8153
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

int func_238(int iParam0)//Position - 0x819A
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

int func_239(int iParam0)//Position - 0x81E1
{
	int iVar0;
	
	if (iParam0 == func_17())
	{
		return iParam0;
	}
	if (func_241(iParam0) != -1)
	{
		iVar0 = func_183(func_241(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_240(iParam0, 0))
			{
				return func_25(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_17();
		}
		return Global_2657921[iParam0 /*463*/].f_321.f_10;
	}
	return func_17();
}

bool func_240(int iParam0, bool bParam1)//Position - 0x8270
{
	if (!func_18(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return 0;
		}
	}
	return Global_1886967[iParam0 /*609*/].f_10 != func_17();
}

int func_241(int iParam0)//Position - 0x82A9
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575079 || Global_2635562.f_2980) && iParam0 == PLAYER::PLAYER_ID()) && func_78(iParam0, 1, 0))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

int func_242(int iParam0)//Position - 0x8318
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 20;
			}
		}
		else if (((Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_1575079) && iParam0 == PLAYER::PLAYER_ID()) && func_78(iParam0, 1, 0))
		{
			return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 20;
		}
	}
	return 0;
}

int func_243(int iParam0)//Position - 0x83AF
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 13;
			}
		}
	}
	return 0;
}

int func_244(int iParam0)//Position - 0x83F6
{
	if (iParam0 != func_17())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_3, 4);
	}
	return 0;
}

int func_245(int iParam0)//Position - 0x841B
{
	if (iParam0 == func_17())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_246(int iParam0, bool bParam1)//Position - 0x843F
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_17())
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_247(int iParam0)//Position - 0x84CD
{
	int iVar0;
	
	if (iParam0 != func_17())
	{
		iVar0 = func_249(iParam0);
		if (iVar0 != 0)
		{
			return func_248(iVar0);
		}
	}
	return -1;
}

int func_248(int iParam0)//Position - 0x84F6
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_249(int iParam0)//Position - 0x8574
{
	if (iParam0 != func_17())
	{
		return Global_1845263[iParam0 /*877*/].f_267.f_313;
	}
	return 0;
}

int func_250(int iParam0)//Position - 0x8598
{
	if (iParam0 != func_17())
	{
		if (Global_1845263[iParam0 /*877*/].f_267.f_313 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_251(int iParam0)//Position - 0x85C1
{
	if (iParam0 != func_17())
	{
		if (func_252(iParam0) && Global_2657921[iParam0 /*463*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0)//Position - 0x85F6
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_253(int iParam0)//Position - 0x863D
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1942781.f_558[iParam0 /*3*/];
}

int func_254(int iParam0)//Position - 0x8749
{
	int iVar0;
	
	if (iParam0 != func_17())
	{
		iVar0 = func_256(iParam0);
		if (iVar0 != 0)
		{
			return func_255(iVar0);
		}
	}
	return -1;
}

int func_255(int iParam0)//Position - 0x8772
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_256(int iParam0)//Position - 0x87F0
{
	if (iParam0 != func_17())
	{
		return Global_1845263[iParam0 /*877*/].f_267.f_356;
	}
	return 0;
}

int func_257(int iParam0)//Position - 0x8814
{
	if (iParam0 != func_17())
	{
		return Global_1845263[iParam0 /*877*/].f_267.f_356 != 0;
	}
	return 0;
}

int func_258(int iParam0)//Position - 0x883A
{
	if (iParam0 != func_17())
	{
		if (func_259(iParam0) && Global_2657921[iParam0 /*463*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0)//Position - 0x886F
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_260(int iParam0)//Position - 0x88B6
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

int func_261(int iParam0)//Position - 0x88FD
{
	int iVar0;
	
	if (iParam0 == func_17())
	{
		return -1;
	}
	iVar0 = func_263(iParam0);
	if (!iVar0 == 0)
	{
		return func_262(iVar0);
	}
	return -1;
}

int func_262(int iParam0)//Position - 0x892C
{
	switch (iParam0)
	{
		case 1:
			return 83;
			break;
		
		case 2:
			return 84;
			break;
		
		case 3:
			return 85;
			break;
		
		case 4:
			return 86;
			break;
		
		case 5:
			return 87;
			break;
	}
	return -1;
}

int func_263(int iParam0)//Position - 0x8982
{
	if (iParam0 == func_17())
	{
		return 0;
	}
	return Global_1845263[iParam0 /*877*/].f_267.f_295;
}

int func_264(int iParam0)//Position - 0x89A6
{
	if (iParam0 != func_17())
	{
		return Global_1845263[iParam0 /*877*/].f_267.f_295 != 0;
	}
	return 0;
}

int func_265(int iParam0)//Position - 0x89CC
{
	if (iParam0 != func_17())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_6, 16);
	}
	return 0;
}

int func_266(int iParam0)//Position - 0x89F2
{
	if (iParam0 != func_17())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_2, 6);
	}
	return 0;
}

int func_267(int iParam0)//Position - 0x8A17
{
	if (iParam0 == func_17())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_268(int iParam0)//Position - 0x8A3B
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_17())
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_269(int iParam0)//Position - 0x8A9B
{
	int iVar0;
	
	if (iParam0 == func_17())
	{
		return -1;
	}
	iVar0 = func_271(iParam0);
	if (!iVar0 == 0)
	{
		return func_270(iVar0);
	}
	return -1;
}

int func_270(int iParam0)//Position - 0x8ACA
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_271(int iParam0)//Position - 0x8B58
{
	if (iParam0 == func_17())
	{
		return 0;
	}
	return Global_1845263[iParam0 /*877*/].f_267.f_302;
}

int func_272(int iParam0)//Position - 0x8B7C
{
	if (iParam0 != func_17())
	{
		return Global_1845263[iParam0 /*877*/].f_267.f_302 != 0;
	}
	return 0;
}

int func_273()//Position - 0x8BA2
{
	if (BitTest(Global_1942781.f_2, 13) || Global_1942781.f_3448)
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0)//Position - 0x8BC8
{
	if (iParam0 == func_17())
	{
		return 0;
	}
	if (func_275(iParam0) && Global_2657921[iParam0 /*463*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_275(int iParam0)//Position - 0x8C01
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_276(int iParam0)//Position - 0x8C48
{
	if (iParam0 == func_17())
	{
		return 0;
	}
	if (func_277(iParam0) && Global_2657921[iParam0 /*463*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_277(int iParam0)//Position - 0x8C81
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 4;
			}
		}
	}
	return 0;
}

int func_278(int iParam0)//Position - 0x8CC7
{
	if (iParam0 != func_17())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_5, 26);
	}
	return 0;
}

int func_279(int iParam0)//Position - 0x8CED
{
	if (iParam0 == func_17())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_280(int iParam0)//Position - 0x8D11
{
	int iVar0;
	
	if (iParam0 == func_17())
	{
		return -1;
	}
	iVar0 = func_282(iParam0);
	if (!iVar0 == 0)
	{
		return func_281(iVar0);
	}
	return -1;
}

int func_281(int iParam0)//Position - 0x8D40
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		
		case 2:
			return 23;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 25;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 27;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 29;
			break;
		
		case 9:
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 32:
			return 159;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_282(int iParam0)//Position - 0x8F10
{
	if (iParam0 == func_17())
	{
		return 0;
	}
	return Global_1845263[iParam0 /*877*/].f_267.f_195[5 /*13*/];
}

int func_283(int iParam0)//Position - 0x8F36
{
	if (iParam0 != func_17())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321, 6);
	}
	return 0;
}

int func_284(int iParam0)//Position - 0x8F59
{
	if (iParam0 == func_17())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_285(int iParam0)//Position - 0x8F7D
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575079 && iParam0 == PLAYER::PLAYER_ID()) && func_78(iParam0, 1, 0))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

void func_286(struct<3> Param0, var uParam3)//Position - 0x8FE3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_287(Param0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_287(Param0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_287(Param0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_287(Param0, iVar0, 0))
	{
		if (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_34 > 0)
		{
			*uParam3 = Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_34;
		}
		else if (Global_2635148.f_1 > 0)
		{
			*uParam3 = Global_2635148.f_1;
		}
		else
		{
			*uParam3 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_287(Param0, iVar0, 0))
	{
		if (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_34 > 0)
		{
			*uParam3 = Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_34;
		}
		else if (Global_2635148.f_1 > 0)
		{
			*uParam3 = Global_2635148.f_1;
		}
		else
		{
			*uParam3 = iVar0;
		}
		return;
	}
}

int func_287(struct<3> Param0, int iParam3, float fParam4)//Position - 0x9127
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var11[3];
	int iVar21;
	
	if (iParam3 != 999)
	{
		iVar21 = 0;
		while (iVar21 < 3)
		{
			if (Global_1312263[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_2 > Global_1312263[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3.f_2)
			{
				Var1[iVar21 /*3*/] = { Global_1312263[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
				Var11[iVar21 /*3*/] = { Global_1312263[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar21 /*3*/] = { Global_1312263[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
				Var11[iVar21 /*3*/] = { Global_1312263[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
			}
			Var1[iVar21 /*3*/].f_2 = (Var1[iVar21 /*3*/].f_2 + fParam4);
			Var11[iVar21 /*3*/].f_2 = (Var11[iVar21 /*3*/].f_2 - fParam4);
			iVar21++;
		}
		if (((Global_1312263[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var11[0 /*3*/], Var1[0 /*3*/], Global_1312263[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312263[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var11[1 /*3*/], Var1[1 /*3*/], Global_1312263[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312263[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var11[2 /*3*/], Var1[2 /*3*/], Global_1312263[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_287(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_287(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_287(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_287(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_287(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_287(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_287(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_287(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_287(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_287(Param0, 8, fParam4))
		{
			return 1;
		}
		if (func_287(Param0, 17, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_288(int iParam0)//Position - 0x947B
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

Vector3 func_289(int iParam0)//Position - 0x948E
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 1:
			Var0 = { -773.4775f, 310.6321f, 84.6981f };
			break;
		
		case 2:
			Var0 = { -252.5713f, -949.9199f, 30.221f };
			break;
		
		case 3:
			Var0 = { -1443.0938f, -544.7684f, 33.7424f };
			break;
		
		case 4:
			Var0 = { -913.85f, -455.1392f, 38.5999f };
			break;
		
		case 5:
			Var0 = { -47.3145f, -585.9766f, 36.9593f };
			break;
		
		case 6:
			Var0 = { -932.7474f, -383.9246f, 37.9613f };
			break;
		
		case 7:
			Var0 = { -619.1315f, 37.8841f, 42.5883f };
			break;
		
		case 8:
			Var0 = { 284.9614f, -159.9891f, 63.6221f };
			break;
		
		case 9:
			Var0 = { 2.8889f, 35.7762f, 70.5349f };
			break;
		
		case 10:
			Var0 = { 9.74f, 84.6906f, 77.3975f };
			break;
		
		case 11:
			Var0 = { -512.1465f, 111.2223f, 62.351f };
			break;
		
		case 12:
			Var0 = { -197.3405f, 88.1053f, 68.7422f };
			break;
		
		case 13:
			Var0 = { -628.3212f, 165.8364f, 60.1651f };
			break;
		
		case 14:
			Var0 = { -973.3757f, -1429.4247f, 6.6791f };
			break;
		
		case 15:
			Var0 = { -829.1362f, -855.0104f, 18.6297f };
			break;
		
		case 16:
			Var0 = { -757.5739f, -755.5591f, 25.5697f };
			break;
		
		case 17:
			Var0 = { -45.1289f, -57.0925f, 62.2531f };
			break;
		
		case 18:
			Var0 = { -206.7293f, 184.142f, 79.3279f };
			break;
		
		case 19:
			Var0 = { -811.7045f, -984.1961f, 13.1538f };
			break;
		
		case 20:
			Var0 = { -664.0032f, -853.6744f, 23.4325f };
			break;
		
		case 21:
			Var0 = { -1534.0247f, -324.5247f, 46.5237f };
			break;
		
		case 22:
			Var0 = { -1561.381f, -412.1974f, 41.389f };
			break;
		
		case 23:
			Var0 = { -1608.8514f, -429.184f, 39.439f };
			break;
		
		case 24:
			Var0 = { 964.3583f, -1034.1991f, 39.8303f };
			break;
		
		case 25:
			Var0 = { 894.2868f, -885.5679f, 26.1212f };
			break;
		
		case 26:
			Var0 = { 821.1741f, -924.1658f, 25.1998f };
			break;
		
		case 27:
			Var0 = { 759.7933f, -759.8209f, 25.759f };
			break;
		
		case 28:
			Var0 = { 844.7289f, -1164.0997f, 24.2681f };
			break;
		
		case 29:
			Var0 = { 526.2521f, -1604.613f, 28.2625f };
			break;
		
		case 30:
			Var0 = { 572.0462f, -1570.7357f, 27.4904f };
			break;
		
		case 31:
			Var0 = { 722.2852f, -1190.6168f, 23.282f };
			break;
		
		case 32:
			Var0 = { 497.6212f, -1494.0845f, 28.2893f };
			break;
		
		case 33:
			Var0 = { 480.3127f, -1549.9368f, 28.2828f };
			break;
		
		case 34:
			Var0 = { -68.702f, 6426.148f, 30.439f };
			break;
		
		case 35:
			Var0 = { -247.4374f, 6240.294f, 30.4892f };
			break;
		
		case 36:
			Var0 = { 2554.1653f, 4668.059f, 33.0233f };
			break;
		
		case 37:
			Var0 = { 2461.2202f, 1589.2552f, 32.0443f };
			break;
		
		case 38:
			Var0 = { -2203.335f, 4244.4272f, 47.3305f };
			break;
		
		case 39:
			Var0 = { 218.0665f, 2601.8171f, 44.7668f };
			break;
		
		case 40:
			Var0 = { 186.1719f, 2786.3425f, 45.0144f };
			break;
		
		case 41:
			Var0 = { 642.0746f, 2791.7295f, 40.9795f };
			break;
		
		case 42:
			Var0 = { -1130.9376f, 2701.1333f, 17.8004f };
			break;
		
		case 43:
			Var0 = { -10.944f, -1646.7601f, 28.3125f };
			break;
		
		case 44:
			Var0 = { 1024.2628f, -2398.4036f, 29.1261f };
			break;
		
		case 45:
			Var0 = { 870.8577f, -2232.3228f, 29.5508f };
			break;
		
		case 46:
			Var0 = { -663.8541f, -2380.389f, 12.9446f };
			break;
		
		case 47:
			Var0 = { -1088.6158f, -2235.0977f, 12.2182f };
			break;
		
		case 48:
			Var0 = { -342.5126f, -1468.6746f, 29.6107f };
			break;
		
		case 49:
			Var0 = { -1241.5399f, -259.8841f, 37.9445f };
			break;
		
		case 50:
			Var0 = { 899.8448f, -147.528f, 75.5674f };
			break;
		
		case 51:
			Var0 = { -1405.4109f, 526.8572f, 122.8361f };
			break;
		
		case 52:
			Var0 = { 1341.5518f, -1578.0366f, 53.4443f };
			break;
		
		case 53:
			Var0 = { -105.7029f, 6528.539f, 29.1719f };
			break;
		
		case 54:
			Var0 = { -302.3985f, 6327.434f, 31.8918f };
			break;
		
		case 55:
			Var0 = { -15.258f, 6557.378f, 32.2454f };
			break;
		
		case 56:
			Var0 = { 1899.6729f, 3773.1785f, 31.8829f };
			break;
		
		case 57:
			Var0 = { 1662.1211f, 4776.317f, 41.0075f };
			break;
		
		case 58:
			Var0 = { -178.2278f, 490.886f, 134.0466f };
			break;
		
		case 59:
			Var0 = { 339.5743f, 439.7083f, 145.5896f };
			break;
		
		case 60:
			Var0 = { -764.6163f, 618.3144f, 137.5536f };
			break;
		
		case 61:
			Var0 = { -679.5461f, 592.5162f, 139.693f };
			break;
		
		case 62:
			Var0 = { 124.4571f, 551.8877f, 181.658f };
			break;
		
		case 63:
			Var0 = { -563.7349f, 689.099f, 151.6596f };
			break;
		
		case 64:
			Var0 = { -743.0927f, 590.0371f, 140.9221f };
			break;
		
		case 65:
			Var0 = { -861.252f, 684.8923f, 146.2643f };
			break;
		
		case 66:
			Var0 = { -1292.4557f, 440.9454f, 93.7572f };
			break;
		
		case 67:
			Var0 = { 369.5891f, 417.4813f, 136.8344f };
			break;
		
		case 68:
			Var0 = { -1581.5015f, -558.2578f, 33.9528f };
			break;
		
		case 69:
			Var0 = { -1379.5457f, -499.1783f, 32.1574f };
			break;
		
		case 70:
			Var0 = { -117.5296f, -605.7157f, 35.2857f };
			break;
		
		case 71:
			Var0 = { -67.0943f, -802.4415f, 43.2273f };
			break;
		
		case 72:
			Var0 = { 254.1892f, -1809.1831f, 26.1805f };
			break;
		
		case 73:
			Var0 = { -1472.2778f, -920.0677f, 8.9683f };
			break;
		
		case 74:
			Var0 = { 38.9478f, -1026.6288f, 28.6354f };
			break;
		
		case 75:
			Var0 = { 46.903f, 2789.8247f, 57.1124f };
			break;
		
		case 76:
			Var0 = { -342.3246f, 6065.3164f, 30.4895f };
			break;
		
		case 77:
			Var0 = { 1737.8784f, 3709.0876f, 33.1348f };
			break;
		
		case 78:
			Var0 = { 939.7161f, -1459.2039f, 30.467f };
			break;
		
		case 79:
			Var0 = { 189.7624f, 309.7488f, 104.4714f };
			break;
		
		case 80:
			Var0 = { -21.9593f, -191.3618f, 51.5599f };
			break;
		
		case 81:
			Var0 = { 2472.2197f, 4110.4927f, 36.9629f };
			break;
		
		case 82:
			Var0 = { -39.3286f, 6420.6025f, 30.7017f };
			break;
		
		case 83:
			Var0 = { -1134.762f, -1568.848f, 3.4077f };
			break;
	}
	return Var0;
}

int func_290(int iParam0)//Position - 0x9DB5
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case 79:
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
			break;
		
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
			break;
		
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
			break;
		
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
			break;
		
		case 91:
			return 72;
			break;
		
		case 92:
			return 73;
			break;
		
		case 93:
			return 74;
			break;
		
		case 94:
			return 75;
			break;
		
		case 95:
			return 76;
			break;
		
		case 96:
			return 77;
			break;
		
		case 97:
			return 78;
			break;
		
		case 98:
			return 79;
			break;
		
		case 99:
			return 80;
			break;
		
		case 100:
			return 81;
			break;
		
		case 101:
			return 82;
			break;
		
		case 102:
			return 83;
			break;
	}
	return 0;
}

Vector3 func_291(int iParam0)//Position - 0xA2FC
{
	return Global_2657921[iParam0 /*463*/].f_73.f_7;
}

int func_292(int iParam0)//Position - 0xA313
{
	if (Global_2657921[iParam0 /*463*/].f_73.f_6 != -1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_293(int iParam0)//Position - 0xA331
{
	int iVar0;
	
	switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return ENTITY::GET_ENTITY_COORDS(iVar0, false);
			}
			break;
	}
	return HUD::GET_BLIP_COORDS(iParam0);
}

void func_294()//Position - 0xA37A
{
	Global_2684312.f_756 = 1;
}

var func_295()//Position - 0xA38A
{
	return Global_2684312.f_735;
}

var func_296()//Position - 0xA399
{
	return BitTest(Global_2684312.f_2, 11);
}

void func_297(var uParam0)//Position - 0xA3AA
{
	if (!func_488(uParam0))
	{
		func_481(uParam0);
		func_480(uParam0);
	}
	func_307(uParam0);
	if (!func_306(uParam0))
	{
		func_299(uParam0);
		func_298(uParam0);
	}
}

void func_298(var uParam0)//Position - 0xA3E4
{
	MISC::CLEAR_BIT(&(uParam0->f_732.f_4), uParam0->f_732.f_1);
}

void func_299(var uParam0)//Position - 0xA3FE
{
	if (Local_1446.f_4.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_4.f_1);
	}
	switch (uParam0->f_732.f_1)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_98())
			{
				func_304(uParam0, 1, 0);
			}
			func_303(uParam0, 0);
			func_302(uParam0);
			func_300(uParam0);
			break;
		
		case 5:
			break;
	}
}

void func_300(var uParam0)//Position - 0xA489
{
	func_301(&(uParam0->f_747.f_1), 0, 1);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
}

void func_301(var uParam0, bool bParam1, bool bParam2)//Position - 0xA4A4
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

void func_302(var uParam0)//Position - 0xA53E
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_718))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_718));
	}
}

void func_303(var uParam0, int iParam1)//Position - 0xA55B
{
	if (uParam0->f_707 != iParam1)
	{
	}
	uParam0->f_707 = iParam1;
}

void func_304(var uParam0, bool bParam1, int iParam2)//Position - 0xA574
{
	if (bParam1)
	{
		if ((uParam0->f_1100 && !func_305(PLAYER::PLAYER_ID())) || iParam2)
		{
			func_88(PLAYER::PLAYER_ID(), 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			uParam0->f_1100 = 0;
		}
	}
	else
	{
		func_88(PLAYER::PLAYER_ID(), 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		uParam0->f_1100 = 1;
	}
}

int func_305(int iParam0)//Position - 0xA5D6
{
	if (iParam0 != func_17() && func_78(iParam0, 1, 1))
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321, 3);
	}
	return 0;
}

bool func_306(var uParam0)//Position - 0xA607
{
	return !BitTest(uParam0->f_732.f_4, uParam0->f_732.f_1);
}

void func_307(var uParam0)//Position - 0xA61F
{
	if (Local_1446.f_4.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_4.f_2);
	}
	switch (uParam0->f_732)
	{
		case 0:
			if (!uParam0->f_1099)
			{
				func_479(uParam0);
			}
			break;
		
		case 1:
			func_479(uParam0);
			break;
		
		case 2:
			if (func_478(uParam0) && func_477())
			{
				func_479(uParam0);
			}
			break;
		
		case 3:
			func_377(uParam0);
			if (func_376(uParam0))
			{
				func_479(uParam0);
			}
			break;
		
		case 4:
			func_375(uParam0);
			func_372(uParam0);
			func_377(uParam0);
			func_351(uParam0);
			func_350(uParam0);
			func_345(uParam0);
			func_314(uParam0);
			func_309(uParam0);
			func_84(uParam0, 0);
			if (!func_376(uParam0))
			{
				func_308(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_308(var uParam0)//Position - 0xA705
{
	int iVar0;
	
	uParam0->f_732.f_1 = uParam0->f_732;
	MISC::SET_BIT(&(uParam0->f_732.f_4), uParam0->f_732.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_732.f_3), uParam0->f_732.f_1);
	iVar0 = uParam0->f_732;
	iVar0 = (iVar0 - 1);
	uParam0->f_732 = iVar0;
	if (uParam0->f_732 == 0)
	{
		uParam0->f_732 = 1;
	}
}

void func_309(var uParam0)//Position - 0xA760
{
	if (uParam0->f_732.f_5)
	{
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		func_131(0);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		CAM::INVALIDATE_IDLE_CAM();
		func_312();
		HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
		func_161(11, -1);
		func_311();
		func_310();
	}
}

void func_310()//Position - 0xA7AA
{
	Global_2738587.f_4636 = 0;
}

void func_311()//Position - 0xA7BA
{
	Global_23572.f_6 = 1;
}

void func_312()//Position - 0xA7C8
{
	NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::PLAYER_ID(), false);
	func_313();
}

void func_313()//Position - 0xA7DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar1 != func_17() && iVar1 != PLAYER::PLAYER_ID())
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
			}
		}
		iVar0++;
	}
}

void func_314(var uParam0)//Position - 0xA82A
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	char cVar8[24];
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 53)
	{
		if (func_344(uParam0, iVar0) && !func_343(uParam0, iVar0))
		{
			if (func_317(uParam0, iVar0))
			{
				iVar1 = iVar0;
			}
			else
			{
				Jump @123; //curOff = 61
				if (func_343(uParam0, iVar0))
				{
					Var2 = { func_316() };
					StringCopy(&cVar8, func_315(iVar0), 24);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2) && MISC::ARE_STRINGS_EQUAL(&Var2, &cVar8))
					{
						iVar1 = iVar0;
					}
					else
					{
						iVar0++;
					}
					if (Local_1548.f_6 != iVar1)
					{
						Local_1548.f_6 = iVar1;
						if (iVar1 != -1)
						{
							if (!Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_26)
							{
								Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_26 = 1;
							}
						}
						else if (Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_26)
						{
							Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_26 = 0;
						}
					}
				}

char* func_315(int iParam0)//Position - 0xA904
{
	if (Local_1446.f_59.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1446.f_59.f_1);
		return StackVal;
	}
	return "";
}

struct<6> func_316()//Position - 0xA928
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22166 == 4)
	{
		return Global_21785;
	}
	return Var0;
}

int func_317(var uParam0, int iParam1)//Position - 0xA94C
{
	struct<2> Var0;
	
	if (!func_12())
	{
		StringCopy(&Var0, func_315(iParam1), 16);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			func_339(&(Local_1548.f_7), func_342(iParam1), func_341(iParam1), func_340(iParam1), 0, 1);
			if (func_319(&(Local_1548.f_7), func_338(iParam1), &Var0, 9, 0, 0, 0))
			{
				func_318(uParam0, iParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_318(var uParam0, int iParam1)//Position - 0xA9B3
{
	MISC::SET_BIT(&(Local_1548.f_3[(iParam1 / 32)]), (iParam1 % 32));
	if (Local_1446.f_59.f_7 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Local_1446.f_59.f_7);
	}
}

bool func_319(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA9E5
{
	func_337(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_320(sParam2, iParam3, 0);
}

int func_320(char* sParam0, int iParam1, bool bParam2)//Position - 0xAA33
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
					func_336();
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
		if (func_335(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_334();
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
				func_326();
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
				if (func_325())
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
			if (func_58())
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
			func_324();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_323();
		func_321();
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
		func_336();
	}
	return 0;
}

void func_321()//Position - 0xAD01
{
	if (!func_322())
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

int func_322()//Position - 0xAD38
{
	if (!Global_262145.f_29155 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_17())
	{
		return 0;
	}
	if (func_125(PLAYER::PLAYER_ID()))
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

void func_323()//Position - 0xAD9B
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

void func_324()//Position - 0xADCD
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

int func_325()//Position - 0xAE62
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

void func_326()//Position - 0xAEFB
{
	if (func_333(14))
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
		Global_20813 = func_327();
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

var func_327()//Position - 0xAF9D
{
	func_328();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_328()//Position - 0xAFB6
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_331(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_330(PLAYER::PLAYER_PED_ID());
			if (func_329(iVar0) && (!func_333(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_329(Global_114370.f_2366.f_539.f_4321))
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

bool func_329(int iParam0)//Position - 0xB0B3
{
	return iParam0 < 3;
}

int func_330(int iParam0)//Position - 0xB0BF
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_331(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_331(int iParam0)//Position - 0xB0FC
{
	if (func_329(iParam0))
	{
		return func_332(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_332(int iParam0)//Position - 0xB121
{
	return Global_2139[iParam0 /*29*/];
}

bool func_333(int iParam0)//Position - 0xB130
{
	return Global_43922 == iParam0;
}

void func_334()//Position - 0xB13E
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

bool func_335(int iParam0, int iParam1)//Position - 0xB196
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

void func_336()//Position - 0xB1CE
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

void func_337(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xB225
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

char* func_338(var uParam0)//Position - 0xB27B
{
	if (Local_1446.f_59.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_59.f_2);
		return StackVal;
	}
	return "";
}

void func_339(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xB29F
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

char* func_340(var uParam0)//Position - 0xB33A
{
	if (Local_1446.f_59.f_5 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_59.f_5);
		return StackVal;
	}
	return "";
}

int func_341(var uParam0)//Position - 0xB35E
{
	if (Local_1446.f_59.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_59.f_4);
		return StackVal;
	}
	return 0;
}

int func_342(var uParam0)//Position - 0xB37F
{
	if (Local_1446.f_59.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_59.f_3);
		return StackVal;
	}
	return -1;
}

bool func_343(var uParam0, int iParam1)//Position - 0xB3A0
{
	return BitTest(Local_1548.f_3[(iParam1 / 32)], (iParam1 % 32));
}

var func_344(var uParam0, int iParam1)//Position - 0xB3BA
{
	return BitTest(Local_1548[(iParam1 / 32)], (iParam1 % 32));
}

void func_345(var uParam0)//Position - 0xB3D2
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_348(uParam0);
	if (((uParam0->f_747.f_62 || func_347(uParam0)) || uParam0->f_1094 != -1) || uParam0->f_1101)
	{
		return;
	}
	if (Local_1446.f_44 != 0)
	{
		Stack.Push(uParam0);
		Stack.Push(uVar0);
		Stack.Push(&uVar1);
		Call_Loc(Local_1446.f_44);
	}
	if (BitTest(uVar1, 0))
	{
		if (Local_1446.f_3 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_1446.f_3);
		}
		else
		{
			func_346(uParam0);
		}
	}
}

void func_346(var uParam0)//Position - 0xB449
{
	uParam0->f_732.f_5 = 0;
}

var func_347(var uParam0)//Position - 0xB459
{
	return uParam0->f_826;
}

int func_348(var uParam0)//Position - 0xB466
{
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return -1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return -1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || func_349(uParam0, 0, 0))
	{
		return 0;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || func_349(uParam0, 0, 1))
	{
		return 1;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || func_349(uParam0, 0, 2))
	{
		return 2;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) || func_349(uParam0, 0, 3))
	{
		return 3;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		return 4;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		return 5;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
	{
		return 6;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
	{
		return 7;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
	{
		return 8;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/))
	{
		return 9;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/))
	{
		return 10;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/))
	{
		return 11;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/))
	{
		return 12;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/))
	{
		return 13;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/))
	{
		return 14;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/))
	{
		return 15;
	}
	return -1;
}

int func_349(var uParam0, int iParam1, bool bParam2)//Position - 0xB5D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	switch (iParam1)
	{
		case 0:
			iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_826.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_826.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_826.f_1), bParam2);
					}
					break;
				
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_826.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_826.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_826.f_1), bParam2);
					}
					break;
				
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_826.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_826.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_826.f_1), bParam2);
					}
					break;
				
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_826.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_826.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_826.f_1), bParam2);
					}
					break;
			}
			break;
		
		case 1:
			iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_826.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_826.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_826.f_2), bParam2);
					}
					break;
				
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_826.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_826.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_826.f_2), bParam2);
					}
					break;
				
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_826.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_826.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_826.f_2), bParam2);
					}
					break;
				
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_826.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_826.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_826.f_2), bParam2);
					}
					break;
			}
			break;
	}
	return iVar0;
}

void func_350(var uParam0)//Position - 0xB846
{
	bool bVar0;
	
	if (uParam0->f_1094 == -1)
	{
		return;
	}
	if (func_133(uParam0, uParam0->f_1094, &bVar0))
	{
		if (bVar0)
		{
			switch (uParam0->f_1094)
			{
				case 1:
					Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_21 = 1;
					break;
				
				case 2:
					if (Local_1446.f_72.f_8 != 0)
					{
						Stack.Push(uParam0);
						Call_Loc(Local_1446.f_72.f_8);
					}
					break;
			}
		}
		else
		{
			switch (uParam0->f_1094)
			{
				case 2:
					if (Local_1446.f_72.f_9 != 0)
					{
						Stack.Push(uParam0);
						Call_Loc(Local_1446.f_72.f_9);
					}
					break;
				
				default:
					break;
				}
		}
		uParam0->f_1094 = -1;
		uParam0->f_1095 = -1;
		func_84(uParam0, 1);
	}
}

void func_351(var uParam0)//Position - 0xB8EE
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (uParam0->f_747.f_32 != uParam0->f_747.f_33)
	{
		func_371(uParam0, uParam0->f_747.f_33);
		uParam0->f_747.f_62 = 1;
		Var0 = { 0f, 0f, 0f };
		Var3 = { 0f, 0f, 0f };
		uParam0->f_747.f_44 = { func_370(uParam0) };
		uParam0->f_747.f_47 = { func_369(uParam0) };
		uParam0->f_747.f_1.f_17 = func_368(uParam0);
		uParam0->f_747.f_38 = { CAM::GET_CAM_COORD(uParam0->f_747.f_1) };
		uParam0->f_747.f_41 = { CAM::GET_CAM_ROT(uParam0->f_747.f_1, 2) };
		uParam0->f_747.f_1.f_18 = CAM::GET_CAM_FOV(uParam0->f_747.f_1);
		uParam0->f_747.f_1.f_14 = { 0f, 0f, 0f };
		uParam0->f_747.f_63 = 750;
		if (func_367(uParam0->f_747.f_33))
		{
			CAM::SHAKE_CAM(uParam0->f_747.f_1, func_366(uParam0->f_747.f_33), func_365(uParam0->f_747.f_33));
		}
		CAM::SET_CAM_PARAMS(uParam0->f_747.f_1, uParam0->f_747.f_38, uParam0->f_747.f_41, uParam0->f_747.f_1.f_18, 0, 1, 1, 2);
		CAM::SET_CAM_PARAMS(uParam0->f_747.f_1, uParam0->f_747.f_44, uParam0->f_747.f_47, uParam0->f_747.f_1.f_17, uParam0->f_747.f_63, 1, 1, 2);
	}
	if (uParam0->f_747.f_62)
	{
		uParam0->f_747.f_1.f_18 = func_368(uParam0);
		if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_747.f_1))
		{
			uParam0->f_747.f_38 = { uParam0->f_747.f_44 };
			uParam0->f_747.f_41 = { uParam0->f_747.f_47 };
			uParam0->f_747.f_1.f_1 = { uParam0->f_747.f_44 };
			uParam0->f_747.f_1.f_4 = { uParam0->f_747.f_47 };
			if (func_367(uParam0->f_747.f_33))
			{
				CAM::SHAKE_CAM(uParam0->f_747.f_1, func_366(uParam0->f_747.f_33), func_365(uParam0->f_747.f_33));
			}
			uParam0->f_747.f_62 = 0;
			func_360(uParam0, uParam0->f_747.f_1.f_18);
			func_356(&(uParam0->f_747.f_1), 0, 0, 1, 0, 1045220557, 0, 1065353216, 0);
		}
	}
	else
	{
		func_356(&(uParam0->f_747.f_1), func_355(uParam0->f_747.f_33), func_354(uParam0->f_747.f_33), func_353(uParam0->f_747.f_33), 0, 1045220557, 0, 1065353216, func_352(uParam0->f_747.f_33));
	}
}

int func_352(var uParam0)//Position - 0xBB50
{
	if (Local_1446.f_30.f_3.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_30.f_3.f_2);
		return StackVal;
	}
	return 1;
}

int func_353(var uParam0)//Position - 0xBB75
{
	if (Local_1446.f_30.f_3.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_30.f_3.f_1);
		return StackVal;
	}
	return 0;
}

int func_354(var uParam0)//Position - 0xBB9A
{
	if (Local_1446.f_30.f_10 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_30.f_10);
		return StackVal;
	}
	return 1;
}

int func_355(var uParam0)//Position - 0xBBBB
{
	if (Local_1446.f_30.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_30.f_3);
		return StackVal;
	}
	return 1;
}

void func_356(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)//Position - 0xBBDC
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
	func_359(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar5 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
		fVar6 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
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
		iVar0[2] = func_358((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_358((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar9 = (30f * SYSTEM::TIMESTEP());
	Var10 = { uParam0->f_8 + uParam0->f_11 };
	if ((PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var10.f_0;
		uParam0->f_14.f_1 = Var10.f_1;
		uParam0->f_14.f_2 = Var10.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_357(((((Var10.f_0 - uParam0->f_14) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_357(((((Var10.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_357(((((Var10.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_357(uParam0->f_14, SYSTEM::TO_FLOAT(-uParam0->f_21), SYSTEM::TO_FLOAT(uParam0->f_21));
		uParam0->f_14.f_1 = func_357(uParam0->f_14.f_1, SYSTEM::TO_FLOAT(-uParam0->f_22), SYSTEM::TO_FLOAT(uParam0->f_22));
		uParam0->f_14.f_2 = func_357(uParam0->f_14.f_2, SYSTEM::TO_FLOAT(-uParam0->f_20), SYSTEM::TO_FLOAT(uParam0->f_20));
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
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
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_357(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_357(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
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
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar9));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			if (CAM::IS_CAM_RENDERING(*uParam0))
			{
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			}
		}
	}
}

float func_357(float fParam0, float fParam1, float fParam2)//Position - 0xC133
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

int func_358(int iParam0, int iParam1, int iParam2)//Position - 0xC15A
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

void func_359(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0xC17F
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

void func_360(var uParam0, var uParam1)//Position - 0xC283
{
	uParam0->f_747.f_1.f_7 = uParam1;
	uParam0->f_747.f_1.f_20 = func_364(uParam0->f_747.f_33);
	uParam0->f_747.f_1.f_21 = func_363(uParam0->f_747.f_33);
	uParam0->f_747.f_1.f_22 = func_362(uParam0->f_747.f_33);
	uParam0->f_747.f_1.f_19 = func_361(uParam0->f_747.f_33);
}

float func_361(var uParam0)//Position - 0xC2E6
{
	if (Local_1446.f_30.f_3.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_30.f_3.f_3);
		return StackVal;
	}
	return 10f;
}

int func_362(var uParam0)//Position - 0xC30F
{
	if (Local_1446.f_30.f_10.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_30.f_10.f_3);
		return StackVal;
	}
	return 1;
}

int func_363(var uParam0)//Position - 0xC334
{
	if (Local_1446.f_30.f_10.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_30.f_10.f_2);
		return StackVal;
	}
	return 10;
}

int func_364(var uParam0)//Position - 0xC35A
{
	if (Local_1446.f_30.f_10.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_30.f_10.f_1);
		return StackVal;
	}
	return 15;
}

float func_365(var uParam0)//Position - 0xC380
{
	if (Local_1446.f_30.f_7.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_30.f_7.f_2);
		return StackVal;
	}
	return 1f;
}

char* func_366(var uParam0)//Position - 0xC3A5
{
	if (Local_1446.f_30.f_7.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_30.f_7.f_1);
		return StackVal;
	}
	return "HAND_SHAKE";
}

int func_367(var uParam0)//Position - 0xC3CD
{
	if (Local_1446.f_30.f_7 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_30.f_7);
		return StackVal;
	}
	return 1;
}

var func_368(var uParam0)//Position - 0xC3EE
{
	Stack.Push(uParam0->f_747.f_33);
	Call_Loc(Local_1446.f_30.f_2);
	return StackVal;
}

Vector3 func_369(var uParam0)//Position - 0xC405
{
	Stack.Push(uParam0->f_747.f_33);
	Call_Loc(Local_1446.f_30.f_1);
	return StackVal, StackVal, StackVal;
}

Vector3 func_370(var uParam0)//Position - 0xC41C
{
	Stack.Push(uParam0->f_747.f_33);
	Call_Loc(Local_1446.f_30);
	return StackVal, StackVal, StackVal;
}

void func_371(var uParam0, var uParam1)//Position - 0xC431
{
	uParam0->f_747.f_32 = uParam1;
}

void func_372(var uParam0)//Position - 0xC442
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	iVar0 = uParam0->f_1092;
	if (iVar0 == -1)
	{
		return;
	}
	Stack.Push(Local_1446.f_67 == 0);
	Stack.Push(uParam0);
	Call_Loc(Local_1446.f_67);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (!func_374(&(Global_1971856[iVar0 /*27*/].f_18)))
	{
		if (uParam0->f_1092 == PLAYER::PLAYER_ID())
		{
			Stack.Push(uParam0);
			Call_Loc(Local_1446.f_67.f_1);
			if (StackVal)
			{
				func_44(&(Global_1971856[iVar0 /*27*/].f_18), 0, 0);
			}
		}
	}
	else
	{
		Call_Loc(Local_1446.f_67.f_2);
		uParam0->f_831.f_245 = (StackVal - func_373(&(Global_1971856[iVar0 /*27*/].f_18), 0, 0));
		if (uParam0->f_831.f_245 > 0)
		{
			if (uParam0->f_831.f_245 < (uParam0->f_831.f_246 - 1000))
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1446.f_67.f_3);
				uParam0->f_831.f_246 = uParam0->f_831.f_245;
			}
		}
		else
		{
			uParam0->f_831.f_245 = 0;
			Stack.Push(uParam0);
			Call_Loc(Local_1446.f_67.f_4);
		}
	}
}

int func_373(var uParam0, bool bParam1, bool bParam2)//Position - 0xC52C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

bool func_374(var uParam0)//Position - 0xC573
{
	return uParam0->f_1;
}

void func_375(var uParam0)//Position - 0xC57F
{
	if (Local_1446.f_44.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_44.f_1);
	}
	else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	}
}

bool func_376(var uParam0)//Position - 0xC5AE
{
	return uParam0->f_732.f_5;
}

void func_377(var uParam0)//Position - 0xC5BD
{
	if (func_476(uParam0))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_716))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
			switch (func_475(uParam0))
			{
				case 0:
					break;
				
				case 2:
					GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(uParam0->f_716, true);
					break;
				
				case 1:
					GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_LARGE_RT(uParam0->f_716, true);
					break;
			}
			if (func_474(uParam0))
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_716, 255, 255, 255, 255, 0);
				if (uParam0->f_709)
				{
				}
			}
			else
			{
				HUD::SET_TEXT_RENDER_ID(uParam0->f_700);
				GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_716, func_473(uParam0), func_472(uParam0), func_471(uParam0), func_470(uParam0), 255, 255, 255, 255, 0);
				if (uParam0->f_709)
				{
				}
				HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			uParam0->f_714 = 1;
		}
	}
	else if (func_469(uParam0))
	{
		if (Local_1446.f_7.f_4.f_8 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_1446.f_7.f_4.f_8);
		}
	}
	if (func_468(uParam0))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_717))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
			HUD::SET_TEXT_RENDER_ID(uParam0->f_701);
			switch (func_467(uParam0))
			{
				case 0:
					break;
				
				case 2:
					GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(uParam0->f_717, true);
					break;
				
				case 1:
					GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_LARGE_RT(uParam0->f_717, true);
					break;
			}
			if (func_466(uParam0))
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_717, 255, 255, 255, 255, 0);
			}
			else
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_717, func_465(uParam0), func_464(uParam0), func_463(uParam0), func_462(uParam0), 255, 255, 255, 255, 0);
			}
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			uParam0->f_715 = 1;
			if (uParam0->f_709)
			{
			}
		}
	}
	else if (func_461(uParam0))
	{
		if (Local_1446.f_7.f_13.f_8 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_1446.f_7.f_13.f_8);
		}
	}
	if (func_460(uParam0))
	{
		func_378(uParam0);
	}
}

void func_378(var uParam0)//Position - 0xC79E
{
	struct<9> Var0;
	
	Var0 = { func_459() };
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (Local_1548.f_6 != -1)
	{
		func_457(uParam0);
		return;
	}
	else if (iLocal_1722)
	{
		func_456(uParam0, 1);
		iLocal_1722 = 0;
	}
	if (!func_455(uParam0))
	{
		func_448(&(uParam0->f_718), &Var0, uParam0, 0);
		return;
	}
	if (!GRAPHICS::GET_IS_WIDESCREEN() || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		func_447(uParam0, 0.5f);
	}
	else
	{
		func_447(uParam0, 0.7f);
	}
	func_445(uParam0);
	func_379(uParam0);
	func_448(&(uParam0->f_718), &Var0, uParam0, uParam0->f_710);
	func_456(uParam0, 0);
}

void func_379(var uParam0)//Position - 0xC84D
{
	bool bVar0;
	int iVar1;
	
	bVar0 = uParam0->f_1092 == PLAYER::PLAYER_ID();
	if (func_374(&(Global_1971856[uParam0->f_1092 /*27*/].f_18)))
	{
		func_444("", "HEIST_IB_CONT" /* GXT: Continue (~a~) */, uParam0->f_831.f_245, uParam0, 0);
	}
	iVar1 = uParam0->f_812;
	bLocal_1428 = true;
	if (iLocal_1439 != 0)
	{
		if (((func_443(iLocal_1439) || iLocal_1439 == -2) || iLocal_1439 == -3) || iLocal_1439 == -4)
		{
			func_442(2, 201, "CH_INSTR_SEL" /* GXT: Select */, uParam0, 1, 365);
		}
		else if (iVar1 == 1002)
		{
			func_442(2, 201, "CH_INSTR_LM" /* GXT: Launch Mission */, uParam0, 1, 365);
		}
		else
		{
			func_442(2, 201, "CH_INSTR_SEL" /* GXT: Select */, uParam0, 1, 365);
		}
		func_442(2, 202, "CH_INSTR_BACK" /* GXT: Back */, uParam0, 1, 365);
		if ((iLocal_1439 != -2 && iLocal_1439 != -3) && iLocal_1439 != -4)
		{
			func_441(2, 0, "HEIST_IB_NAV" /* GXT: Navigate */, uParam0);
		}
		return;
	}
	if (func_440(uParam0, iVar1))
	{
		func_442(2, 201, "H4P_INSTR_EQU" /* GXT: Equip */, uParam0, 1, 365);
	}
	else if (func_439(uParam0, iVar1))
	{
		func_442(2, 201, "H4P_INSTR_REM" /* GXT: Remove */, uParam0, 1, 365);
	}
	else if (func_438(uParam0, iVar1))
	{
		func_442(2, 201, "CH_INSTR_PREV" /* GXT: Preview */, uParam0, 1, 365);
	}
	else if (func_437(uParam0, iVar1))
	{
		func_442(2, 201, "CH_INSTR_SEL" /* GXT: Select */, uParam0, 1, 365);
	}
	else if (bVar0 && func_436(uParam0, iVar1))
	{
		func_442(2, 201, "CH_INSTR_LM" /* GXT: Launch Mission */, uParam0, 1, 365);
	}
	else if (bVar0 && func_433(uParam0, iVar1))
	{
		func_442(2, 201, "H4P_INSTR_PUR" /* GXT: Purchase */, uParam0, 1, 365);
	}
	else if (!bVar0 && func_432(uParam0, iVar1))
	{
		func_442(2, 201, "HEIST_IB_RDY" /* GXT: Ready */, uParam0, 1, 365);
	}
	else if (!bVar0 && func_430(uParam0, iVar1))
	{
		func_442(2, 201, "HEIST_IB_UNRDY" /* GXT: Unready */, uParam0, 1, 365);
	}
	else
	{
		bLocal_1428 = false;
	}
	if (func_429(iVar1))
	{
		func_442(2, 202, "CH_INSTR_QUIT" /* GXT: Quit */, uParam0, 1, 365);
	}
	else
	{
		func_442(2, 202, "CH_INSTR_BACK" /* GXT: Back */, uParam0, 1, 365);
	}
	if (func_428(uParam0))
	{
		func_442(2, 203, "HP_MAP" /* GXT: Map */, uParam0, 1, 365);
	}
	if (func_383(uParam0, iVar1))
	{
		func_442(2, 204, "CH_INSTR_INFO" /* GXT: Info */, uParam0, 1, 365);
	}
	if (func_20(uParam0->f_1092, 0))
	{
		func_441(2, 14, "H4P_INSTR_SCR" /* GXT: Screens */, uParam0);
	}
	if (func_20(uParam0->f_1092, 0) || func_382(uParam0->f_1092))
	{
		func_441(2, 0, "HEIST_IB_NAV" /* GXT: Navigate */, uParam0);
	}
	if (func_381(iVar1))
	{
		if ((MISC::IS_PS3_VERSION() || func_65()) || MISC::IS_PC_VERSION())
		{
			func_442(2, 217, "HEIST_IB_PSN" /* GXT: View Profile */, uParam0, 1, 365);
		}
		else if (MISC::IS_XBOX360_VERSION() || func_66())
		{
			func_380(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/, true), "HEIST_IB_XBL" /* GXT: View gamer card */, uParam0, 0);
		}
		else
		{
			func_380(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/, true), "HEIST_IB_PSNXBL", uParam0, 0);
		}
	}
}

void func_380(char* sParam0, char* sParam1, var uParam2, char* sParam3)//Position - 0xCB83
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

int func_381(int iParam0)//Position - 0xCBD3
{
	switch (iParam0)
	{
		case 105:
		case 106:
		case 107:
		case 108:
			return 1;
		
		default:
	}
	return 0;
}

int func_382(int iParam0)//Position - 0xCBFF
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_383(var uParam0, int iParam1)//Position - 0xCC1D
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_384(uParam0, iParam1)))
	{
		return 0;
	}
	return 1;
}

char* func_384(var uParam0, int iParam1)//Position - 0xCC39
{
	switch (iParam1)
	{
		case 1:
			return "H4P_INT0_GATH_I" /* GXT: Mission Details:~n~Under a disguise, scope the island for the primary target, secondary targets and other areas that may be useful during the heist.~n~~n~Heist Impact:~n~Identifies the locations of the primary target, different routes on and off the island, secondary targets to steal, and other points of interest that can open up extra opportunities during the heist. */;
		
		case 2:
			return "H4P_INT0_LOOT_I" /* GXT: Heist Impact:~n~Secondary targets can be stolen and sold alongside the primary target. Each player will only be able to carry a certain amount in their bag. */;
		
		case 3:
			return "H4P_INT0_ENTR_I" /* GXT: Heist Impact:~n~Opens up additional infiltration points for getting on the island during the Heist. */;
		
		case 4:
			return "H4P_INT0_EXIT_I" /* GXT: Heist Impact:~n~Opens up additional escape points for getting off the island during the Heist. */;
		
		case 5:
			return "H4P_INT0_COMP_I" /* GXT: Heist Impact:~n~Entry points into El Rubio's compound.  Additional equipment may need to be acquired during the heist to access some of these entry points. */;
		
		case 6:
			return "H4P_INT0_ITEM_I" /* GXT: Heist Impact:~n~Areas, equipment and vehicles that can be used during the heist to open up additional opportunities. */;
		
		case 7:
			return "H4P_INT2_CASH_I" /* GXT: Heist Impact:~n~Steal cash from locked storage spaces to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		
		case 8:
			return "H4P_INT2_WEED_I" /* GXT: Heist Impact:~n~Steal weed from locked storage spaces to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		
		case 9:
			return "H4P_INT2_COKE_I" /* GXT: Heist Impact:~n~Steal cocaine from locked storage spaces to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		
		case 10:
			return "H4P_INT2_GOLD_I" /* GXT: Heist Impact:~n~Steal gold from locked storage spaces to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		
		case 11:
			return "H4P_INT2_PAIN_I" /* GXT: Heist Impact:~n~Steal paintings from inside El Rubio's compound to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		
		case 12:
			return "H4P_INT3_AIRS_I" /* GXT: Heist Impact:~n~Infiltrate the airstrip using one of the following approach vehicles if acquired: ~n~ - Velum */;
		
		case 13:
			return "H4P_INT3_PARA_I" /* GXT: Heist Impact:~n~Infiltrate at high altitude above the island using one of the following approach vehicles if acquired: ~n~ - RO-86 Alkonost */;
		
		case 14:
			return "H4P_INT3_BEAC_I" /* GXT: Heist Impact:~n~Infiltrate the west beach using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat */;
		
		case 15:
			return "H4P_INT3_MDCK_I" /* GXT: Heist Impact:~n~Infiltrate the main dock using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat ~n~ - Longfin */;
		
		case 16:
			return "H4P_INT3_NDCK_I" /* GXT: Heist Impact:~n~Infiltrate the north dock using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat ~n~ - Longfin */;
		
		case 17:
			return "H4P_INT3_NDRP_I" /* GXT: Heist Impact:~n~Infiltrate the north drop zone using one of the following approach vehicles if acquired: ~n~ - Stealth Annihilator */;
		
		case 18:
			return "H4P_INT3_SDRP_I" /* GXT: Heist Impact:~n~Infiltrate the south drop zone using one of the following approach vehicles if acquired: ~n~ - Stealth Annihilator */;
		
		case 19:
			return "H4P_INT3_DTUN_I" /* GXT: Heist Impact:~n~Infiltrate the drainage tunnel using one of the following approach vehicles if acquired: ~n~ - Kosatka */;
		
		case 20:
			return "H4P_INT4_AIRS_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find an aircraft at the airstrip to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		
		case 21:
			return "H4P_INT4_MDCK_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find a boat at the main dock to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		
		case 22:
			return "H4P_INT4_NDCK_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find a boat at the north dock to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		
		case 23:
			return "H4P_INT4_SUBM_I" /* GXT: Heist Impact:~n~After acquiring the primary target, get back to your Kosatka to escape from the island. ~n~~n~ You can escape by any other means if plans change during the heist.~n~~n~Please note:~n~To escape with your Kosatka, it must also be used as your approach vehicle. */;
		
		case 30:
			return func_426(func_427(uParam0->f_1092), "H4P_INT6_PWRS_I" /* GXT: Heist Impact:~n~Disables security cameras and all lights on the island to reduce the guards' range of sight at night. */, "");
		
		case 31:
			return func_426(func_425(uParam0->f_1092), "H4P_INT6_CTOW_I" /* GXT: Heist Impact:~n~Disables air defenses around the island and allows hired support crew to be called in via the Interaction Menu. */, "");
		
		case 32:
			return func_426(func_419(uParam0->f_1092), "H4P_INT6_BCUT_I" /* GXT: Heist Impact:~n~If stolen during the heist, these can help you break into padlocked storage lockups containing secondary targets without alerting nearby guards. */, "");
		
		case 33:
			return func_426(func_413(uParam0->f_1092), "H4P_INT6_GRAP_I" /* GXT: Heist Impact:~n~If stolen during the heist, this can be used to climb broken parts of the wall into El Rubio's compound. */, "");
		
		case 34:
			return func_426(func_407(uParam0->f_1092), "H4P_INT6_UNIF_I" /* GXT: Heist Impact:~n~If stolen during the heist, the guard clothing can be worn as a disguise and the guards will take longer to spot you. It also allows entry into El Rubio's compound through the main gate without alerting the guards, if used alongside a supply truck. */, "");
		
		case 35:
			return func_426(func_406(uParam0->f_1092), "H4P_INT6_TROJ_I" /* GXT: Heist Impact:~n~If stolen during the heist, this will allow you to enter El Rubio's compound through the main gate without alerting the guards. You must also acquire the guard clothing to avoid detection. */, "");
		
		case 24:
			return "H4P_INT5_MGAT_I" /* GXT: Heist Impact:~n~Enter the courtyard of El Rubio's compound by destroying the main gate or stay undetected under the cover of a disguise. */;
		
		case 25:
			return "H4P_INT5_NWAL_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected by climbing the broken wall.~n~~n~Please note:~n~This entry point cannot be selected at the start of the heist. It only be used if grappling equipment is acquired during the job. */;
		
		case 26:
			return "H4P_INT5_NSGT_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected by unlocking the side gate.~n~~n~Please note:~n~This entry point cannot be selected at the start of the heist. It only be used if the code to the gate is acquired from a guard during the job. */;
		
		case 27:
			return "H4P_INT5_SWAL_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected by climbing the broken wall.~n~~n~Please note:~n~This entry point cannot be selected at the start of the heist. It only be used if grappling equipment is acquired during the job. */;
		
		case 28:
			return "H4P_INT5_SSGT_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected by unlocking the side gate.~n~~n~Please note:~n~This entry point cannot be selected at the start of the heist. It only be used if the code to the gate is acquired from a guard during the job. */;
		
		case 29:
			return "H4P_INT5_DTUN_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected through the underwater drainage tunnel. */;
		
		case 36:
			return "";
		
		case 37:
			return "";
		
		case 38:
			return "";
		
		case 39:
			return "";
		
		case 40:
			return "H4P_PRP1_SUBM_I" /* GXT: Mission Details:~n~Steal sonar jamming equipment. This will allow your Kosatka to remain undetected off the coast of Cayo Perico.~n~~n~Heist Impact:~n~With your Kosatka submerged off the coast, approach the island undetected in scuba gear. */;
		
		case 41:
			return "";
		
		case 42:
			return "H4P_PRP1_SPLA_I" /* GXT: Mission Details:~n~Steal one of El Rubio's smuggler planes to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Land on the island's airstrip in the Velum while disguised as one of El Rubio's smugglers. While unarmed, guards will let you travel around the airstrip but will attack if they spot you elsewhere. */;
		
		case 43:
			return "";
		
		case 44:
			return "H4P_PRP1_PBOA_I" /* GXT: Mission Details:~n~Steal a weaponized patrol boat to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Approach your chosen dock in a heavily armed Patrol Boat equipped with heavy machine guns. */;
		
		case 45:
			return "H4P_PRP1_SBOA_I" /* GXT: Mission Details:~n~Steal one of El Rubio's smuggler boats to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Approach your chosen dock in the Longfin while disguised as one of El Rubio's smugglers. While unarmed, some guards will let you travel around select areas of the docks but will attack if they spot you elsewhere. */;
		
		case 46:
			return "H4P_PRP1_BOM1_I" /* GXT: Mission Details:~n~Steal an RO-86 Alkonost to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Parachute from the RO-86 Alkonost's cargo hold as your pilot flies you at high altitude over the island while staying undetected. */;
		
		case 47:
			return "H4P_PRP1_BOM2_I" /* GXT: Mission Details:~n~Help a pilot who can fly you to the island.~n~~n~Heist Impact:~n~The pilot will fly you in undetected to get on to the island. */;
		
		case 48:
			return "H4P_PRP1_HEL1_I" /* GXT: Mission Details:~n~Steal a Stealth Annihilator to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Rappel out of the Stealth Annihilator undetected as your pilot hovers over your chosen drop zone. */;
		
		case 49:
			return "H4P_PRP1_HEL2_I" /* GXT: Mission Details:~n~Help a pilot who can fly you to the island.~n~~n~Heist Impact:~n~The pilot will fly you in undetected to get on to the island. */;
		
		case 50:
			return "H4P_PRP2_DEMC_I" /* GXT: Mission Details:~n~Steal demolition charges that can destroy the reinforced main gate to El Rubio's compound.~n~~n~Heist Impact:~n~Gain access to El Rubio's compound through the main gate and destroy padlocks to access secondary targets. */;
		
		case 53:
			return "H4P_PRP2_ATOR_I" /* GXT: Mission Details:~n~Steal a cutting torch that can burn through metal on land and underwater.~n~~n~Heist Impact:~n~Gain access to the underwater drainage tunnel beneath El Rubio's compound and burn through padlocks to access secondary targets. */;
		
		case 51:
			return func_426(func_405(uParam0->f_1092) == 11, "H4P_PRP2_TAR1_I" /* GXT: Mission Details:~n~Steal the code to the safe in El Rubio's secure vault.~n~~n~Heist Impact:~n~Unlocks the safe in El Rubio's secure vault, allowing you to access the primary target inside. */, "H4P_PRP2_TAR2_I" /* GXT: Mission Details:~n~Steal a plasma cutter that can cut through the reinforced display case in El Rubio's secure vault.~n~~n~Heist Impact:~n~Cuts through the reinforced glass display case in El Rubio's secure vault, allowing you to access the primary target inside. */);
		
		case 52:
			return "H4P_PRP2_FING_I" /* GXT: Mission Details:~n~Steal a fingerprint cloning device that can give you access to El Rubio's secure vault.~n~~n~Heist Impact:~n~Access El Rubio's secure basement via the elevator in his office. */;
		
		case 54:
			return "H4P_PRP3_SHOT_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- Assault Shotgun~n~- Machine Pistol~n~- Grenades~n~- Machete */;
		
		case 55:
			return "H4P_PRP3_RIFL_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- Military Rifle~n~- Pistol .50~n~- Sticky Bombs~n~- Knuckle Duster */;
		
		case 56:
			return "H4P_PRP3_SNIP_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- Sniper Rifle~n~- AP Pistol~n~- Molotov Cocktails~n~- Knife */;
		
		case 57:
			return func_426(func_389(uParam0, iParam1), "H4P_PRP3_M2SM_2" /* GXT: Locked:~n~Meet Chester McCoy as the owner of a Bunker or Arena Workshop. */, "H4P_PRP3_M2SM_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- SMG Mk II~n~- SNS Pistol Mk II~n~- Pipe Bombs~n~- Knife */);
		
		case 58:
			return func_426(func_389(uParam0, iParam1), "H4P_PRP3_M2RI_2" /* GXT: Locked:~n~Meet Chester McCoy as the owner of a Bunker or Arena Workshop. */, "H4P_PRP3_M2RI_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- Assault Rifle Mk II~n~- Pistol MKII~n~- Pipe Bombs~n~- Machete */);
		
		case 59:
			return "H4P_PRP3_SUPP_I" /* GXT: Mission Details:~n~Purchase suppressors that can be attached to your weapons for The Cayo Perico Heist. ~n~~n~ Cost: $5000~n~~n~Heist Impact:~n~Reduces the range that enemies can hear you shooting. */;
		
		case 60:
			return "H4P_PRP4_WEAP_I" /* GXT: Mission Details:~n~Take out the arms dealers supplying El Rubio with weapons. This prep can only be attempted once.~n~~n~Heist Impact:~n~The weapons used by El Rubio's security will be weakened during the heist. */;
		
		case 61:
			return "H4P_PRP4_ARMR_I" /* GXT: Mission Details:~n~Destroy all the armor shipments that are intended for El Rubio's security on the island. This prep can only be attempted once.~n~~n~Heist Impact:~n~El Rubio's security will not be equipped with body armor during the heist. */;
		
		case 62:
			return "H4P_PRP4_BRES_I" /* GXT: Mission Details:~n~Destroy all the Buzzards that are intended for El Rubio's security on the island. This prep can only be attempted once.~n~~n~Heist Impact:~n~If alerted, El Rubio's security will not have access to Buzzards during the heist. */;
		
		case 63:
			return "";
		
		case 64:
			return "";
		
		case 65:
			return "";
		
		case 66:
			return "";
		
		case 67:
			return "";
		
		case 68:
			return "";
		
		case 69:
			return "";
		
		case 70:
			return "";
		
		case 71:
			return "H4P_FIN1_SUBM_I" /* GXT: Heist Impact:~n~With your Kosatka submerged off the coast, approach the island undetected in scuba gear. */;
		
		case 72:
			return "H4P_FIN1_BOMB_I" /* GXT: Heist Impact:~n~Parachute from the RO-86 Alkonost's cargo hold as your pilot flies you at high altitude over the island while staying undetected. */;
		
		case 73:
			return "H4P_FIN1_SMPL_I" /* GXT: Heist Impact:~n~Land on the island's airstrip in the Velum while disguised as one of El Rubio's smugglers. While unarmed, guards will let you travel around the airstrip but will attack if they spot you elsewhere.~n~~n~Please note:~n~You must hire the Weapon Stash support crew member to avoid the guard's catching you with weapons when you land. */;
		
		case 74:
			return "H4P_FIN1_SHEL_I" /* GXT: Heist Impact:~n~Rappel out of the Stealth Annihilator undetected as your pilot hovers over your chosen drop zone. */;
		
		case 75:
			return "H4P_FIN1_PBOA_I" /* GXT: Heist Impact:~n~Approach your chosen dock in a heavily armed Patrol Boat equipped with heavy machine guns. */;
		
		case 76:
			return "H4P_FIN1_SBOA_I" /* GXT: Heist Impact:~n~Approach your chosen dock in the Longfin while disguised as one of El Rubio's smugglers. While unarmed, some guards will let you travel around select areas of the docks but will attack if they spot you elsewhere. */;
		
		case 77:
			return "H4P_FIN2_AIRS_I" /* GXT: Heist Impact:~n~Infiltrate the airstrip using one of the following approach vehicles if acquired: ~n~ - Velum */;
		
		case 78:
			return "H4P_FIN2_PARA_I" /* GXT: Heist Impact:~n~Infiltrate from high altitude above the island using one of the following approach vehicles if acquired: ~n~ - RO-86 Alkonost */;
		
		case 79:
			return "H4P_FIN2_WBEA_I" /* GXT: Heist Impact:~n~Infiltrate the west beach using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat */;
		
		case 80:
			return "H4P_FIN2_MDOC_I" /* GXT: Heist Impact:~n~Infiltrate the main dock using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat ~n~ - Longfin */;
		
		case 81:
			return "H4P_FIN2_NDOC_I" /* GXT: Heist Impact:~n~Infiltrate the north dock using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat ~n~ - Longfin */;
		
		case 82:
			return "H4P_FIN2_NDRP_I" /* GXT: Heist Impact:~n~Infiltrate the north drop zone using one of the following approach vehicles if acquired: ~n~ - Stealth Annihilator */;
		
		case 83:
			return "H4P_FIN2_SDRP_I" /* GXT: Heist Impact:~n~Infiltrate the south drop zone using one of the following approach vehicles if acquired: ~n~ - Stealth Annihilator */;
		
		case 84:
			return "H4P_FIN2_DTUN_I" /* GXT: Heist Impact:~n~Infiltrate the drainage tunnel using one of the following approach vehicles if acquired: ~n~ - Kosatka */;
		
		case 85:
			return "H4P_FIN3_MGAT_I" /* GXT: Heist Impact:~n~Enter the courtyard of El Rubio's compound by destroying the main gate or stay undetected under the cover of a disguise.~n~~n~Please note:~n~You must be driving a supply truck and wearing guard clothing to enter undetected. */;
		
		case 86:
			return "H4P_FIN3_DTUN_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected through the underwater drainage tunnel. */;
		
		case 87:
			return "H4P_FIN4_AIRS_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find an aircraft at the airstrip to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		
		case 88:
			return "H4P_FIN4_MDOC_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find a boat at the main dock to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		
		case 89:
			return "H4P_FIN4_NDOC_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find a boat at the north dock to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		
		case 90:
			return "H4P_FIN4_SUBM_I" /* GXT: Heist Impact:~n~After acquiring the primary target, get back to your Kosatka to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist.~n~~n~Please note:~n~To escape with your Kosatka, it must also be used as your approach vehicle. */;
		
		case 91:
			return "H4P_FIN5_TDAY_I" /* GXT: Heist Impact:~n~The guards can see further during the day but will be more visible to you too. */;
		
		case 92:
			return "H4P_FIN5_TNGT_I" /* GXT: Heist Impact:~n~The guards can't see as far at night but they will be less visible to you too. */;
		
		case 93:
			return "H4P_FIN6_SHOT_I" /* GXT: Details:~n~Access to the following weapons:~n~- Assault Shotgun~n~- Machine Pistol~n~- Grenades~n~- Machete */;
		
		case 94:
			return "H4P_FIN6_RIFL_I" /* GXT: Details:~n~Access to the following weapons:~n~- Military Rifle~n~- Pistol .50~n~- Sticky Bombs~n~- Knuckle Duster */;
		
		case 95:
			return "H4P_FIN6_SNIP_I" /* GXT: Details:~n~Access to the following weapons:~n~- Sniper Rifle~n~- AP Pistol~n~- Molotov Cocktails~n~- Knife */;
		
		case 96:
			return "H4P_FIN6_MKSM_I" /* GXT: Details:~n~Access to the following weapons:~n~- SMG Mk II~n~- SNS Pistol Mk II~n~- Pipe Bombs~n~- Knife */;
		
		case 97:
			return "H4P_FIN6_MKAR_I" /* GXT: Details:~n~Access to the following weapons:~n~- Assault Rifle Mk II~n~- Pistol Mk II~n~- Pipe Bombs~n~- Machete */;
		
		case 98:
			return "H4P_FIN6_SUPP_I" /* GXT: Heist Impact:~n~Reduces the range at which enemies can hear you shooting. */;
		
		case 99:
			return func_426(func_385(uParam0, iParam1), "H4P_FIN7_AIRS_I" /* GXT: Details:~n~From the Interaction Menu, call in an airstrike at your chosen location. ~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */, "H4P_FIN7_AIRS_2" /* GXT: Locked:~n~Meet this support crew member as the owner of a Hangar. */);
		
		case 100:
			return "H4P_FIN7_WDRP_I" /* GXT: Details:~n~From the Interaction Menu, call in a weapons supply drop containing a minigun, RPG and explosives. ~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */;
		
		case 101:
			return "H4P_FIN7_SNIP_I" /* GXT: Details:~n~From the Interaction Menu, call in a temporary support sniper who can silently take out marked enemies.~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */;
		
		case 102:
			return "H4P_FIN7_HELI_I" /* GXT: Details:~n~From the Interaction Menu, call in a temporary piloted helicopter that can take out El Rubio's security.~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */;
		
		case 103:
			return func_426(func_385(uParam0, iParam1), "H4P_FIN7_SPYD_I" /* GXT: Details:~n~From the Interaction Menu, call in an airborne drone to reveal the locations of nearby guards on the island. ~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */, "H4P_FIN7_SPYD_2" /* GXT: Locked:~n~Meet this support crew member as the owner of a Terrorbyte. */);
		
		case 104:
			return "H4P_FIN7_WEAP_I" /* GXT: Details:~n~Have your weapons stashed at the island's airstrip so you don't alert El Rubio's guards when landing in the Velum.~n~~n~Please Note:~n~This only works with the Velum approach vehicle. */;
		
		default:
	}
	return "";
}

int func_385(var uParam0, int iParam1)//Position - 0xD24E
{
	switch (iParam1)
	{
		case 99:
			return func_386(uParam0->f_1092, 0);
		
		case 103:
			return func_386(uParam0->f_1092, 3);
		
		default:
	}
	return 1;
}

int func_386(int iParam0, int iParam1)//Position - 0xD284
{
	switch (iParam1)
	{
		case 0:
			if (!func_264(iParam0) || !func_388(iParam0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (!func_387(iParam0) || !BitTest(Global_1968308[iParam0 /*68*/].f_42, 4))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_387(int iParam0)//Position - 0xD2E2
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_176277.f_14, 12);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1845263[iParam0 /*877*/].f_267.f_389, 31);
	}
	return 0;
}

int func_388(int iParam0)//Position - 0xD31E
{
	if (iParam0 == func_17())
	{
		return 0;
	}
	return Global_1845263[iParam0 /*877*/].f_267.f_295.f_5;
}

int func_389(var uParam0, int iParam1)//Position - 0xD344
{
	switch (iParam1)
	{
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return !func_404(uParam0->f_1092, 0, 0, 0);
		
		case 8:
			return !func_404(uParam0->f_1092, 1, 0, 0);
		
		case 9:
			return !func_404(uParam0->f_1092, 2, 0, 0);
		
		case 10:
			return !func_404(uParam0->f_1092, 3, 0, 0);
		
		case 11:
			return !func_404(uParam0->f_1092, 4, 0, 0);
		
		case 12:
			return !func_402(uParam0->f_1092, func_403(iParam1));
		
		case 13:
			return !func_402(uParam0->f_1092, func_403(iParam1));
		
		case 14:
			return !func_402(uParam0->f_1092, func_403(iParam1));
		
		case 15:
			return !func_402(uParam0->f_1092, func_403(iParam1));
		
		case 16:
			return !func_402(uParam0->f_1092, func_403(iParam1));
		
		case 17:
			return !func_402(uParam0->f_1092, func_403(iParam1));
		
		case 18:
			return !func_402(uParam0->f_1092, func_403(iParam1));
		
		case 19:
			return !func_402(uParam0->f_1092, func_403(iParam1));
		
		case 20:
			return !func_400(uParam0->f_1092, func_401(iParam1));
		
		case 21:
			return !func_400(uParam0->f_1092, func_401(iParam1));
		
		case 22:
			return !func_400(uParam0->f_1092, func_401(iParam1));
		
		case 23:
			return !func_400(uParam0->f_1092, func_401(iParam1));
		
		case 30:
			return !func_427(uParam0->f_1092);
		
		case 31:
			return !func_425(uParam0->f_1092);
		
		case 32:
			return !func_419(uParam0->f_1092);
		
		case 33:
			return !func_413(uParam0->f_1092);
		
		case 34:
			return !func_407(uParam0->f_1092);
		
		case 35:
			return !func_406(uParam0->f_1092);
		
		case 24:
			return !func_398(uParam0->f_1092, func_399(iParam1));
		
		case 25:
			return !func_398(uParam0->f_1092, func_399(iParam1));
		
		case 26:
			return !func_398(uParam0->f_1092, func_399(iParam1));
		
		case 27:
			return !func_398(uParam0->f_1092, func_399(iParam1));
		
		case 28:
			return !func_398(uParam0->f_1092, func_399(iParam1));
		
		case 29:
			return !func_398(uParam0->f_1092, func_399(iParam1));
		
		case 36:
			return 0;
		
		case 37:
			return 0;
		
		case 38:
			return 0;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
		case 42:
			return 0;
		
		case 43:
			if (!func_402(uParam0->f_1092, 5) && !func_402(uParam0->f_1092, 6))
			{
				return 1;
			}
			return 0;
		
		case 44:
			return !(func_402(uParam0->f_1092, 3) || func_402(uParam0->f_1092, 4));
		
		case 45:
			return !(func_402(uParam0->f_1092, 3) || func_402(uParam0->f_1092, 4));
		
		case 46:
			return 0;
		
		case 47:
			if (func_20(uParam0->f_1092, 6))
			{
				return 0;
			}
			if (func_20(uParam0->f_1092, 1))
			{
				return 0;
			}
			return 1;
		
		case 48:
			return !(func_402(uParam0->f_1092, 5) || func_402(uParam0->f_1092, 6));
		
		case 49:
			if (!func_402(uParam0->f_1092, 5) && !func_402(uParam0->f_1092, 6))
			{
				return 1;
			}
			if (func_20(uParam0->f_1092, 6))
			{
				return 0;
			}
			if (func_20(uParam0->f_1092, 2))
			{
				return 0;
			}
			return 1;
		
		case 50:
			return 0;
		
		case 53:
			return !func_402(uParam0->f_1092, 7);
		
		case 51:
			return 0;
		
		case 52:
			return 0;
		
		case 54:
			return (func_20(uParam0->f_1092, 13) && func_397(uParam0->f_1092) != 1);
		
		case 55:
			return (func_20(uParam0->f_1092, 13) && func_397(uParam0->f_1092) != 2);
		
		case 56:
			return (func_20(uParam0->f_1092, 13) && func_397(uParam0->f_1092) != 3);
		
		case 57:
			if (func_20(uParam0->f_1092, 13) && func_397(uParam0->f_1092) != 4)
			{
				return 1;
			}
			if (func_396(uParam0->f_1092) && func_392(uParam0->f_1092, func_282(uParam0->f_1092)))
			{
				return 0;
			}
			if (func_391(uParam0->f_1092) && func_390(uParam0->f_1092))
			{
				return 0;
			}
			return 1;
		
		case 58:
			if (func_20(uParam0->f_1092, 13) && func_397(uParam0->f_1092) != 5)
			{
				return 1;
			}
			if (func_396(uParam0->f_1092) && func_392(uParam0->f_1092, func_282(uParam0->f_1092)))
			{
				return 0;
			}
			if (func_391(uParam0->f_1092) && func_390(uParam0->f_1092))
			{
				return 0;
			}
			return 1;
		
		case 60:
			return 0;
		
		case 61:
			return 0;
		
		case 62:
			return 0;
		
		case 99:
			return !func_385(uParam0, iParam1);
		
		case 103:
			return !func_385(uParam0, iParam1);
		
		default:
	}
	return 0;
}

int func_390(int iParam0)//Position - 0xD948
{
	if (iParam0 != func_17())
	{
		return BitTest(Global_1845263[iParam0 /*877*/].f_267.f_375.f_2, 13);
	}
	return 0;
}

int func_391(int iParam0)//Position - 0xD971
{
	if (iParam0 != func_17())
	{
		if (Global_1845263[iParam0 /*877*/].f_267.f_375 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_392(int iParam0, int iParam1)//Position - 0xD99A
{
	int iVar0;
	
	if (func_395(iParam0, iParam1))
	{
		iVar0 = func_393(iParam0, iParam1);
		if (Global_1845263[iParam0 /*877*/].f_267.f_195[iVar0 /*13*/].f_4 > 0 && Global_1845263[iParam0 /*877*/].f_267.f_195[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_393(int iParam0, int iParam1)//Position - 0xD9EE
{
	int iVar0;
	
	if (func_394(iParam1) && iParam0 != func_17())
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1845263[iParam0 /*877*/].f_267.f_195[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_394(int iParam0)//Position - 0xDA3A
{
	if (iParam0 == 33 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_395(int iParam0, int iParam1)//Position - 0xDA59
{
	int iVar0;
	
	if (func_394(iParam1) && iParam0 != func_17())
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1845263[iParam0 /*877*/].f_267.f_195[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_396(int iParam0)//Position - 0xDAA4
{
	return func_282(iParam0) != 0;
}

int func_397(int iParam0)//Position - 0xDAB4
{
	if (iParam0 != -1)
	{
		return Global_1972721[iParam0 /*53*/].f_5.f_35;
	}
	return 0;
}

int func_398(int iParam0, int iParam1)//Position - 0xDAD2
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_2, iParam1);
	}
	return 0;
}

int func_399(int iParam0)//Position - 0xDAF3
{
	switch (iParam0)
	{
		case 24:
			return 0;
		
		case 25:
			return 1;
		
		case 26:
			return 2;
		
		case 27:
			return 3;
		
		case 28:
			return 4;
		
		case 29:
			return 5;
		
		default:
	}
	return 6;
}

int func_400(int iParam0, int iParam1)//Position - 0xDB3F
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_1, 0);
			
			case 1:
				return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_1, 3);
			
			case 2:
				return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_1, 4);
			
			case 3:
				return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_1, 2);
			}
		
		default:
	}
	return 0;
}

int func_401(int iParam0)//Position - 0xDBB1
{
	switch (iParam0)
	{
		case 20:
		case 87:
			return 0;
		
		case 21:
		case 88:
			return 1;
		
		case 22:
		case 89:
			return 2;
		
		case 23:
		case 90:
			return 3;
		
		default:
	}
	return 4;
}

int func_402(int iParam0, int iParam1)//Position - 0xDC01
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_1, iParam1);
	}
	return 0;
}

int func_403(int iParam0)//Position - 0xDC22
{
	switch (iParam0)
	{
		case 12:
		case 77:
			return 0;
		
		case 13:
		case 78:
			return 1;
		
		case 14:
		case 79:
			return 2;
		
		case 15:
		case 80:
			return 3;
		
		case 16:
		case 81:
			return 4;
		
		case 17:
		case 82:
			return 5;
		
		case 18:
		case 83:
			return 6;
		
		case 19:
		case 84:
			return 7;
		
		default:
	}
	return 8;
}

int func_404(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xDCB3
{
	bool bVar0;
	
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_5, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_13, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_6, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_14, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_7, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_15, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_8, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_16, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 4:
				bVar0 = false;
				while (bVar0 < 7)
				{
					if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_18, bVar0))
					{
						return 1;
					}
					bVar0++;
				}
				break;
			}
	}
	return 0;
}

int func_405(int iParam0)//Position - 0xDEA8
{
	if (iParam0 != -1)
	{
		switch (Global_1972721[iParam0 /*53*/].f_5.f_9)
		{
			case 4:
			case 2:
				return 11;
			
			default:
		}
		return 10;
	}
	return -1;
}

int func_406(int iParam0)//Position - 0xDEDE
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 15);
	}
	return 0;
}

int func_407(int iParam0)//Position - 0xDEFD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_408(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_408(int iParam0, int iParam1)//Position - 0xDF27
{
	switch (iParam1)
	{
		case 0:
			return func_412(iParam0);
		
		case 1:
			return func_411(iParam0);
		
		case 2:
			return func_410(iParam0);
		
		case 3:
			return func_409(iParam0);
		
		default:
	}
	return 0;
}

int func_409(int iParam0)//Position - 0xDF73
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 7);
	}
	return 0;
}

int func_410(int iParam0)//Position - 0xDF91
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 6);
	}
	return 0;
}

int func_411(int iParam0)//Position - 0xDFAF
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 5);
	}
	return 0;
}

int func_412(int iParam0)//Position - 0xDFCD
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 4);
	}
	return 0;
}

int func_413(int iParam0)//Position - 0xDFEB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_414(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_414(int iParam0, int iParam1)//Position - 0xE015
{
	switch (iParam1)
	{
		case 0:
			return func_418(iParam0);
		
		case 1:
			return func_417(iParam0);
		
		case 2:
			return func_416(iParam0);
		
		case 3:
			return func_415(iParam0);
		
		default:
	}
	return 0;
}

int func_415(int iParam0)//Position - 0xE061
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 3);
	}
	return 0;
}

int func_416(int iParam0)//Position - 0xE07F
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 2);
	}
	return 0;
}

int func_417(int iParam0)//Position - 0xE09D
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 1);
	}
	return 0;
}

int func_418(int iParam0)//Position - 0xE0BB
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 0);
	}
	return 0;
}

int func_419(int iParam0)//Position - 0xE0D9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_420(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_420(int iParam0, int iParam1)//Position - 0xE103
{
	switch (iParam1)
	{
		case 0:
			return func_424(iParam0);
		
		case 1:
			return func_423(iParam0);
		
		case 2:
			return func_422(iParam0);
		
		case 3:
			return func_421(iParam0);
		
		default:
	}
	return 0;
}

int func_421(int iParam0)//Position - 0xE14F
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 11);
	}
	return 0;
}

int func_422(int iParam0)//Position - 0xE16E
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 10);
	}
	return 0;
}

int func_423(int iParam0)//Position - 0xE18D
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 9);
	}
	return 0;
}

int func_424(int iParam0)//Position - 0xE1AC
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 8);
	}
	return 0;
}

int func_425(int iParam0)//Position - 0xE1CB
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 16);
	}
	return 0;
}

char* func_426(bool bParam0, char* sParam1, char* sParam2)//Position - 0xE1EA
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_427(int iParam0)//Position - 0xE201
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 14);
	}
	return 0;
}

int func_428(var uParam0)//Position - 0xE220
{
	if (!func_20(uParam0->f_1092, 0) && !func_382(uParam0->f_1092))
	{
		return 0;
	}
	return 1;
}

int func_429(int iParam0)//Position - 0xE24A
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 36:
		case 37:
		case 38:
		case 39:
		case 67:
		case 63:
		case 64:
		case 66:
		case 65:
		case 68:
		case 69:
		case 70:
		case 1000:
			return 1;
		
		default:
	}
	return 0;
}

int func_430(var uParam0, int iParam1)//Position - 0xE2D0
{
	switch (iParam1)
	{
		case 1000:
			if (func_431(uParam0, PLAYER::PLAYER_ID()) != -1)
			{
				return uParam0->f_831.f_67[func_431(uParam0, PLAYER::PLAYER_ID())] == 1;
			}
			break;
	}
	return 0;
}

int func_431(var uParam0, int iParam1)//Position - 0xE30F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_831.f_51[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_432(var uParam0, int iParam1)//Position - 0xE33F
{
	switch (iParam1)
	{
		case 1000:
			if (func_431(uParam0, PLAYER::PLAYER_ID()) != -1)
			{
				return uParam0->f_831.f_67[func_431(uParam0, PLAYER::PLAYER_ID())] == 0;
			}
			break;
	}
	return 0;
}

int func_433(var uParam0, int iParam1)//Position - 0xE37E
{
	switch (iParam1)
	{
		case 99:
			return !func_435(uParam0->f_1092, 0);
		
		case 100:
			return !func_435(uParam0->f_1092, 4);
		
		case 101:
			return !func_435(uParam0->f_1092, 1);
		
		case 102:
			return !func_435(uParam0->f_1092, 2);
		
		case 103:
			return !func_435(uParam0->f_1092, 3);
		
		case 104:
			return !func_435(uParam0->f_1092, 5);
		
		case 59:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return 0;
			}
			return !func_434(uParam0->f_1092);
		
		default:
	}
	return 0;
}

int func_434(int iParam0)//Position - 0xE424
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5, 12);
	}
	return 0;
}

int func_435(int iParam0, int iParam1)//Position - 0xE443
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_45, iParam1);
	}
	return 0;
}

int func_436(var uParam0, int iParam1)//Position - 0xE464
{
	if (func_389(uParam0, iParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return 1;
		
		case 40:
			return !func_20(uParam0->f_1092, 7);
		
		case 42:
			return !func_20(uParam0->f_1092, 5);
		
		case 44:
			return !func_20(uParam0->f_1092, 3);
		
		case 45:
			return !func_20(uParam0->f_1092, 4);
		
		case 46:
			return !func_20(uParam0->f_1092, 1);
		
		case 48:
			return !func_20(uParam0->f_1092, 2);
		
		case 47:
			return !func_20(uParam0->f_1092, 6);
		
		case 49:
			return !func_20(uParam0->f_1092, 6);
		
		case 50:
			return !func_20(uParam0->f_1092, 8);
		
		case 53:
			return !func_20(uParam0->f_1092, 9);
		
		case 51:
			return !func_20(uParam0->f_1092, 11);
		
		case 52:
			return !func_20(uParam0->f_1092, 12);
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (func_397(uParam0->f_1092) == 0 || !func_20(uParam0->f_1092, 13))
			{
				return 1;
			}
			break;
		
		case 60:
			return !func_20(uParam0->f_1092, 14);
		
		case 61:
			return !func_20(uParam0->f_1092, 15);
		
		case 62:
			return !func_20(uParam0->f_1092, 16);
	}
	return 0;
}

int func_437(var uParam0, int iParam1)//Position - 0xE610
{
	switch (iParam1)
	{
		case 1000:
			return 1;
		
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
		case 43:
			if (func_389(uParam0, iParam1))
			{
				return 0;
			}
			return 1;
		
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			if (uParam0->f_1092 != iLocal_1445)
			{
				return 0;
			}
			return NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		
		case 68:
		case 70:
			return NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		
		case 91:
		case 92:
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
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 98:
		case 105:
		case 106:
		case 107:
		case 108:
			return (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1092 == iLocal_1445);
		
		default:
	}
	return 0;
}

int func_438(var uParam0, int iParam1)//Position - 0xE77D
{
	switch (iParam1)
	{
		case 67:
		case 63:
		case 64:
		case 65:
		case 66:
		case 68:
		case 69:
		case 70:
			return !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		
		default:
	}
	return 0;
}

int func_439(var uParam0, int iParam1)//Position - 0xE7C5
{
	switch (iParam1)
	{
		case 98:
			if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1092 == PLAYER::PLAYER_ID()) && Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_44)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_440(var uParam0, int iParam1)//Position - 0xE80B
{
	switch (iParam1)
	{
		case 98:
			if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1092 == PLAYER::PLAYER_ID()) && !Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_44)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_441(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xE852
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
	MISC::SET_BIT(&(uParam3->f_690), iVar0);
	uParam3->f_693++;
}

void func_442(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)//Position - 0xE8B6
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

int func_443(int iParam0)//Position - 0xE933
{
	switch (iParam0)
	{
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 1;
		
		default:
	}
	return 0;
}

void func_444(char* sParam0, char* sParam1, var uParam2, var uParam3, char* sParam4)//Position - 0xE96B
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_16), sParam4, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam3->f_1[iVar0 /*57*/].f_36 = uParam2;
	MISC::SET_BIT(&(uParam3->f_686), iVar0);
	uParam3->f_694 = iVar0;
	uParam3->f_693++;
}

void func_445(var uParam0)//Position - 0xE9D9
{
	func_446(uParam0);
	uParam0->f_692 = 1;
}

void func_446(var uParam0)//Position - 0xE9ED
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

void func_447(var uParam0, float fParam1)//Position - 0xEAD6
{
	uParam0->f_699 = fParam1;
}

void func_448(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0xEAE5
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
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_454(uParam2);
	}
	if (Global_1577933 < 2)
	{
		func_453(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_452(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 365)
						{
							func_452(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_452(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
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
						func_451(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					func_452(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_452(&(uParam2->f_1[bVar0 /*57*/].f_16));
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
						func_451(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_450(*uParam0, uParam1);
	}
	func_449();
}

void func_449()//Position - 0xEE8D
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_450(int iParam0, var uParam1)//Position - 0xEEAB
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_451(char* sParam0)//Position - 0xEECA
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_452(char* sParam0)//Position - 0xEEDC
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_453(int iParam0)//Position - 0xEEEA
{
	Global_1577933 = iParam0;
}

void func_454(var uParam0)//Position - 0xEEF8
{
	uParam0->f_692 = 0;
}

bool func_455(var uParam0)//Position - 0xEF06
{
	return uParam0->f_710;
}

void func_456(var uParam0, int iParam1)//Position - 0xEF13
{
	if (uParam0->f_710 != iParam1)
	{
	}
	uParam0->f_710 = iParam1;
}

void func_457(var uParam0)//Position - 0xEF2C
{
	struct<9> Var0;
	int iVar9;
	
	if (!func_458(Local_1548.f_6))
	{
		return;
	}
	Var0 = { func_459() };
	if (iLocal_1722 && !uParam0->f_710)
	{
		func_448(&(uParam0->f_718), &Var0, uParam0, 0);
		return;
	}
	if (!GRAPHICS::GET_IS_WIDESCREEN() || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		func_447(uParam0, 0.5f);
	}
	else
	{
		func_447(uParam0, 0.7f);
	}
	func_445(uParam0);
	iVar9 = uParam0->f_812;
	if (func_438(uParam0, iVar9))
	{
		func_442(2, 201, "CH_INSTR_PREV" /* GXT: Preview */, uParam0, 1, 365);
	}
	else if (func_437(uParam0, iVar9))
	{
		func_442(2, 201, "CH_INSTR_SEL" /* GXT: Select */, uParam0, 1, 365);
	}
	if (func_429(iVar9))
	{
		func_442(2, 202, "CH_INSTR_QUIT" /* GXT: Quit */, uParam0, 1, 365);
	}
	else
	{
		func_442(2, 202, "CH_INSTR_BACK" /* GXT: Back */, uParam0, 1, 365);
	}
	if (func_428(uParam0))
	{
		func_442(2, 203, "HP_MAP" /* GXT: Map */, uParam0, 1, 365);
	}
	func_441(2, 0, "HEIST_IB_NAV" /* GXT: Navigate */, uParam0);
	func_448(&(uParam0->f_718), &Var0, uParam0, 1);
	if (!iLocal_1722)
	{
		iLocal_1722 = 1;
	}
	else if (uParam0->f_710)
	{
		uParam0->f_710 = 0;
	}
}

int func_458(int iParam0)//Position - 0xF066
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 19:
		case 37:
			return 1;
		
		default:
	}
	return 0;
}

struct<9> func_459()//Position - 0xF0A4
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

bool func_460(var uParam0)//Position - 0xF0E8
{
	return uParam0->f_707;
}

bool func_461(var uParam0)//Position - 0xF0F5
{
	if (Local_1446.f_7.f_13.f_7 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_13.f_7);
		return StackVal;
	}
	return uParam0->f_706;
}

float func_462(var uParam0)//Position - 0xF11E
{
	if (Local_1446.f_7.f_13.f_6 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_13.f_6);
		return StackVal;
	}
	return 1f;
}

float func_463(var uParam0)//Position - 0xF143
{
	if (Local_1446.f_7.f_13.f_5 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_13.f_5);
		return StackVal;
	}
	return 1f;
}

float func_464(var uParam0)//Position - 0xF168
{
	if (Local_1446.f_7.f_13.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_13.f_4);
		return StackVal;
	}
	return 0.5f;
}

float func_465(var uParam0)//Position - 0xF191
{
	if (Local_1446.f_7.f_13.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_13.f_3);
		return StackVal;
	}
	return 0.5f;
}

int func_466(var uParam0)//Position - 0xF1BA
{
	if (Local_1446.f_7.f_13.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_13.f_2);
		return StackVal;
	}
	return 0;
}

int func_467(var uParam0)//Position - 0xF1DF
{
	if (Local_1446.f_7.f_13.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_13.f_1);
		return StackVal;
	}
	return 2;
}

bool func_468(var uParam0)//Position - 0xF204
{
	return uParam0->f_704;
}

bool func_469(var uParam0)//Position - 0xF211
{
	if (Local_1446.f_7.f_4.f_7 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_4.f_7);
		return StackVal;
	}
	return uParam0->f_705;
}

float func_470(var uParam0)//Position - 0xF23A
{
	if (Local_1446.f_7.f_4.f_6 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_4.f_6);
		return StackVal;
	}
	return 1f;
}

float func_471(var uParam0)//Position - 0xF25F
{
	if (Local_1446.f_7.f_4.f_5 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_4.f_5);
		return StackVal;
	}
	return 1f;
}

float func_472(var uParam0)//Position - 0xF284
{
	if (Local_1446.f_7.f_4.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_4.f_4);
		return StackVal;
	}
	return 0.5f;
}

float func_473(var uParam0)//Position - 0xF2AD
{
	if (Local_1446.f_7.f_4.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_4.f_3);
		return StackVal;
	}
	return 0.5f;
}

int func_474(var uParam0)//Position - 0xF2D6
{
	if (Local_1446.f_7.f_4.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_4.f_2);
		return StackVal;
	}
	return 0;
}

int func_475(var uParam0)//Position - 0xF2FB
{
	if (Local_1446.f_7.f_4.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_4.f_1);
		return StackVal;
	}
	return 2;
}

bool func_476(var uParam0)//Position - 0xF320
{
	return uParam0->f_703;
}

var func_477()//Position - 0xF32D
{
	return Global_2693219.f_6;
}

int func_478(var uParam0)//Position - 0xF33B
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_716))
	{
		return 0;
	}
	if (uParam0->f_717 != 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_717))
		{
			return 0;
		}
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_718))
	{
		return 0;
	}
	return 1;
}

void func_479(var uParam0)//Position - 0xF380
{
	int iVar0;
	
	uParam0->f_732.f_1 = uParam0->f_732;
	MISC::SET_BIT(&(uParam0->f_732.f_4), uParam0->f_732.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_732.f_3), uParam0->f_732.f_1);
	iVar0 = uParam0->f_732;
	iVar0++;
	uParam0->f_732 = iVar0;
	if (uParam0->f_732 == 7)
	{
		uParam0->f_732 = 5;
	}
}

void func_480(var uParam0)//Position - 0xF3DB
{
	MISC::SET_BIT(&(uParam0->f_732.f_3), uParam0->f_732);
}

void func_481(var uParam0)//Position - 0xF3F3
{
	if (Local_1446.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_4);
	}
	switch (uParam0->f_732)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			func_484(uParam0);
			break;
		
		case 3:
			uParam0->f_1104 = 0;
			uParam0->f_1105 = 0;
			break;
		
		case 4:
			func_482(uParam0);
			func_303(uParam0, 1);
			func_456(uParam0, 1);
			func_304(uParam0, 0, 0);
			break;
		
		case 5:
			break;
	}
}

void func_482(var uParam0)//Position - 0xF47A
{
	uParam0->f_747.f_35 = 0f;
	uParam0->f_747.f_35.f_1 = 0f;
	uParam0->f_747.f_35.f_2 = -180f;
	func_483(&(uParam0->f_747.f_1), func_370(uParam0), func_369(uParam0), func_368(uParam0), 20, 10, 3, 10f, 1, 0, -1f, 1);
	if (func_367(uParam0->f_747.f_33))
	{
		CAM::SHAKE_CAM(uParam0->f_747.f_1, func_366(uParam0->f_747.f_33), func_365(uParam0->f_747.f_33));
	}
	func_360(uParam0, func_368(uParam0));
	CAM::SET_WIDESCREEN_BORDERS(true, 0);
	uParam0->f_747.f_38 = { func_370(uParam0) };
	uParam0->f_747.f_41 = { func_369(uParam0) };
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
}

void func_483(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15)//Position - 0xF543
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = uParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = uParam7;
	uParam0->f_18 = uParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = fParam11;
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

void func_484(var uParam0)//Position - 0xF63B
{
	uParam0->f_716 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_487(uParam0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_486(uParam0)))
	{
		uParam0->f_717 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_486(uParam0));
	}
	uParam0->f_718 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_485());
}

char* func_485()//Position - 0xF67C
{
	if (Local_1446.f_7.f_22 != 0)
	{
		Call_Loc(Local_1446.f_7.f_22);
		return StackVal;
	}
	return "INSTRUCTIONAL_BUTTONS";
}

char* func_486(var uParam0)//Position - 0xF69E
{
	if (Local_1446.f_7.f_13 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_13);
		return StackVal;
	}
	return "";
}

char* func_487(var uParam0)//Position - 0xF6C2
{
	if (Local_1446.f_7.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_4);
		return StackVal;
	}
	return "";
}

bool func_488(var uParam0)//Position - 0xF6E6
{
	return BitTest(uParam0->f_732.f_3, uParam0->f_732);
}

void func_489(int iParam0)//Position - 0xF6FB
{
	if (iLocal_1544 != iParam0)
	{
	}
	iLocal_1544 = iParam0;
}

void func_490()//Position - 0xF710
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_491() == 25)
	{
		Global_1971856[PLAYER::PLAYER_ID() /*27*/].f_20 = 1;
	}
}

int func_491()//Position - 0xF738
{
	return Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_192;
}

int func_492(var uParam0)//Position - 0xF74D
{
	if (!func_497(uParam0))
	{
		return 0;
	}
	if (!func_494(uParam0))
	{
		return 0;
	}
	if (!func_493())
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() != -1 && !Global_1971856[PLAYER::PLAYER_ID() /*27*/].f_20)
	{
		Global_1971856[PLAYER::PLAYER_ID() /*27*/].f_20 = 1;
	}
	return 1;
}

int func_493()//Position - 0xF7A6
{
	return 1;
}

int func_494(var uParam0)//Position - 0xF7AF
{
	char* sVar0;
	int iVar1;
	
	if (!BitTest(uParam0->f_1093, 3))
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7);
		sVar0 = StackVal;
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_1);
		iVar1 = StackVal;
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return 0;
		}
		if (iVar1 == 0)
		{
			return 0;
		}
		if (!BitTest(uParam0->f_1093, 1))
		{
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar0))
			{
				HUD::REGISTER_NAMED_RENDERTARGET(sVar0, false);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_1093), 1);
			}
		}
		if (BitTest(uParam0->f_1093, 1) && !BitTest(uParam0->f_1093, 2))
		{
			if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar1))
			{
				HUD::LINK_NAMED_RENDERTARGET(iVar1);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_1093), 2);
			}
		}
		if (BitTest(uParam0->f_1093, 1) && BitTest(uParam0->f_1093, 2))
		{
			uParam0->f_700 = func_496(sVar0);
			MISC::SET_BIT(&(uParam0->f_1093), 3);
		}
		else
		{
			if (!BitTest(uParam0->f_1093, 1))
			{
			}
			if (!BitTest(uParam0->f_1093, 2))
			{
			}
		}
	}
	if (!BitTest(uParam0->f_1093, 6))
	{
		if (func_495())
		{
			Stack.Push(uParam0);
			Call_Loc(Local_1446.f_7.f_2);
			sVar0 = StackVal;
			Stack.Push(uParam0);
			Call_Loc(Local_1446.f_7.f_2.f_1);
			iVar1 = StackVal;
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return 0;
			}
			if (iVar1 == 0)
			{
				return 0;
			}
			if (!BitTest(uParam0->f_1093, 4))
			{
				if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar0))
				{
					HUD::REGISTER_NAMED_RENDERTARGET(sVar0, false);
				}
				else
				{
					MISC::SET_BIT(&(uParam0->f_1093), 4);
				}
			}
			if (BitTest(uParam0->f_1093, 4) && !BitTest(uParam0->f_1093, 5))
			{
				if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar1))
				{
					HUD::LINK_NAMED_RENDERTARGET(iVar1);
				}
				else
				{
					MISC::SET_BIT(&(uParam0->f_1093), 5);
				}
			}
			if (BitTest(uParam0->f_1093, 4) && BitTest(uParam0->f_1093, 5))
			{
				uParam0->f_701 = func_496(sVar0);
				MISC::SET_BIT(&(uParam0->f_1093), 6);
			}
			else
			{
				if (!BitTest(uParam0->f_1093, 4))
				{
				}
				if (!BitTest(uParam0->f_1093, 5))
				{
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_1093), 6);
		}
	}
	if (BitTest(uParam0->f_1093, 3) && BitTest(uParam0->f_1093, 6))
	{
		return 1;
	}
	return 0;
}

int func_495()//Position - 0xF99E
{
	if (Local_1446.f_7.f_2 == 0 || Local_1446.f_7.f_2.f_1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_496(char* sParam0)//Position - 0xF9C8
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sParam0);
	}
	return -1;
}

bool func_497(var uParam0)//Position - 0xF9E4
{
	if (!BitTest(uParam0->f_1093, 0))
	{
		uParam0->f_1090 = func_999();
		uParam0->f_738 = { func_997() };
		uParam0->f_738.f_6 = { uParam0->f_738 };
		uParam0->f_747.f_33 = func_996();
		if (func_995() == 0)
		{
			uParam0->f_1081 = { 1561.1614f, 384.824f, -48.6215f };
			uParam0->f_1081.f_3 = { -89.3034f, -0.1435f, 180f };
			uParam0->f_1081.f_6 = 69f;
		}
		else
		{
			uParam0->f_1081 = { 1561.1604f, 384.8204f, -48.9135f };
			uParam0->f_1081.f_3 = { -89.5003f, -0.204f, 180f };
			uParam0->f_1081.f_6 = 69f;
		}
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			uParam0->f_1092 = func_994();
		}
		Local_1446.f_0 = 147503/*func_993*/;
		Local_1446.f_1 = 147459/*func_992*/;
		Local_1446.f_2 = 147439/*func_991*/;
		Local_1446.f_3 = 147420/*func_990*/;
		Local_1446.f_4 = 128720/*func_884*/;
		Local_1446.f_4.f_1 = 128635/*func_883*/;
		Local_1446.f_4.f_2 = 77414/*func_593*/;
		Local_1446.f_7 = 77402/*func_592*/;
		Local_1446.f_7.f_1 = 77389/*func_591*/;
		Local_1446.f_7.f_4 = 77377/*func_590*/;
		Local_1446.f_7.f_4.f_1 = 77368/*func_589*/;
		Local_1446.f_7.f_4.f_3 = 77355/*func_588*/;
		Local_1446.f_7.f_4.f_4 = 77342/*func_587*/;
		Local_1446.f_7.f_4.f_5 = 77329/*func_586*/;
		Local_1446.f_7.f_4.f_6 = 77316/*func_585*/;
		Local_1446.f_7.f_4.f_8 = 77189/*func_584*/;
		Local_1446.f_44 = 74262/*func_568*/;
		Local_1446.f_30 = 74194/*func_567*/;
		Local_1446.f_30.f_1 = 74126/*func_566*/;
		Local_1446.f_30.f_2 = 74096/*func_565*/;
		Local_1446.f_30.f_10 = 74087/*func_564*/;
		Local_1446.f_30.f_3 = 74078/*func_563*/;
		Local_1446.f_30.f_7.f_2 = 74065/*func_562*/;
		Local_1446.f_46 = 74001/*func_561*/;
		Local_1446.f_47 = 73868/*func_560*/;
		Local_1446.f_48 = 73778/*func_557*/;
		Local_1446.f_49.f_2 = 73765/*func_556*/;
		Local_1446.f_49 = 73688/*func_553*/;
		Local_1446.f_49.f_1 = 70791/*func_535*/;
		Local_1446.f_49.f_3 = 70776/*func_534*/;
		Local_1446.f_49.f_5 = 70764/*func_533*/;
		Local_1446.f_49.f_4 = 70724/*func_532*/;
		Local_1446.f_49.f_6 = 70708/*func_531*/;
		Local_1446.f_49.f_7 = 70696/*func_530*/;
		Local_1446.f_49.f_8 = 66619/*func_514*/;
		Local_1446.f_49.f_9 = 66607/*func_513*/;
		Local_1446.f_59 = 66595/*func_512*/;
		Local_1446.f_59.f_1 = 65887/*func_511*/;
		Local_1446.f_59.f_2 = 65875/*func_510*/;
		Local_1446.f_59.f_3 = 65866/*func_509*/;
		Local_1446.f_59.f_5 = 65854/*func_508*/;
		Local_1446.f_59.f_6 = 65809/*func_507*/;
		Local_1446.f_59.f_7 = 65703/*func_505*/;
		Local_1446.f_67 = 65694/*func_504*/;
		Local_1446.f_67.f_1 = 65556/*func_503*/;
		Local_1446.f_67.f_2 = 65544/*func_502*/;
		Local_1446.f_67.f_3 = 65529/*func_501*/;
		Local_1446.f_67.f_4 = 64711/*func_498*/;
		MISC::SET_BIT(&(uParam0->f_1093), 0);
	}
	return BitTest(uParam0->f_1093, 0);
}

void func_498(var uParam0)//Position - 0xFCC7
{
	func_500(uParam0);
	if (uParam0->f_1092 == PLAYER::PLAYER_ID())
	{
		func_499(uParam0);
		Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_22 = 1;
	}
}

void func_499(var uParam0)//Position - 0xFCF4
{
	uParam0->f_831.f_67[0] = 1;
	Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_7[0] = 1;
}

void func_500(var uParam0)//Position - 0xFD17
{
	int iVar0;
	int iVar1;
	
	switch (uParam0->f_831.f_49)
	{
		case 1:
			if (uParam0->f_1092 == PLAYER::PLAYER_ID())
			{
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[0] = 100;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[1] = 0;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[2] = 0;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[3] = 0;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[4] = 0;
			}
			uParam0->f_831.f_56[0] = 100;
			uParam0->f_831.f_56[1] = 0;
			uParam0->f_831.f_56[2] = 0;
			uParam0->f_831.f_56[3] = 0;
			uParam0->f_831.f_56[4] = 0;
			break;
		
		case 2:
			if (uParam0->f_1092 == PLAYER::PLAYER_ID())
			{
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[0] = 85;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[1] = 15;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[2] = 0;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[3] = 0;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[4] = 0;
			}
			uParam0->f_831.f_56[0] = 85;
			uParam0->f_831.f_56[1] = 15;
			uParam0->f_831.f_56[2] = 0;
			uParam0->f_831.f_56[3] = 0;
			uParam0->f_831.f_56[4] = 0;
			break;
		
		case 3:
			if (uParam0->f_1092 == PLAYER::PLAYER_ID())
			{
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[0] = 70;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[1] = 15;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[2] = 15;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[3] = 0;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[4] = 0;
			}
			uParam0->f_831.f_56[0] = 70;
			uParam0->f_831.f_56[1] = 15;
			uParam0->f_831.f_56[2] = 15;
			uParam0->f_831.f_56[3] = 0;
			uParam0->f_831.f_56[4] = 0;
			break;
		
		case 4:
			if (uParam0->f_1092 == PLAYER::PLAYER_ID())
			{
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[0] = 55;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[1] = 15;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[2] = 15;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[3] = 15;
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[4] = 0;
			}
			uParam0->f_831.f_56[0] = 55;
			uParam0->f_831.f_56[1] = 15;
			uParam0->f_831.f_56[2] = 15;
			uParam0->f_831.f_56[3] = 15;
			uParam0->f_831.f_56[4] = 0;
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_831.f_51[iVar0] != PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	Global_2685249.f_6615 = uParam0->f_831.f_56[iVar1];
	Global_1941036.f_29 = Global_2685249.f_6615;
}

void func_501(var uParam0)//Position - 0xFFF9
{
	uParam0->f_710 = 1;
}

int func_502()//Position - 0x10008
{
	return 120000;
}

int func_503(var uParam0)//Position - 0x10014
{
	if (((((uParam0->f_1092 == -1 || Global_1972721[uParam0->f_1092 /*53*/].f_5.f_39 == 0) || Global_1972721[uParam0->f_1092 /*53*/].f_5.f_40 == -1) || Global_1972721[uParam0->f_1092 /*53*/].f_5.f_41 == -1) || Global_1972721[uParam0->f_1092 /*53*/].f_5.f_42 == -1) || Global_1972721[uParam0->f_1092 /*53*/].f_5.f_43 == 0)
	{
		return 0;
	}
	return 1;
}

int func_504(var uParam0)//Position - 0x1009E
{
	return 1;
}

void func_505(int iParam0)//Position - 0x100A7
{
	int iVar0;
	
	if (func_506(iParam0) != 14626)
	{
		iVar0 = func_9(func_506(iParam0), -1);
		MISC::SET_BIT(&iVar0, (iParam0 % 32));
		func_5(func_506(iParam0), iVar0, -1, 1);
	}
}

int func_506(int iParam0)//Position - 0x100E4
{
	switch ((iParam0 / 32))
	{
		case 0:
			return 9541;
		
		case 1:
			return 9542;
		
		default:
	}
	return 14626;
}

int func_507(int iParam0)//Position - 0x10111
{
	if (func_506(iParam0) != 14626)
	{
		if (BitTest(func_9(func_506(iParam0), -1), (iParam0 % 32)))
		{
			return 0;
		}
	}
	return 1;
}

char* func_508(var uParam0)//Position - 0x1013E
{
	return "HS4_PAVEL";
}

int func_509(var uParam0)//Position - 0x1014A
{
	return 2;
}

char* func_510(var uParam0)//Position - 0x10153
{
	return "HS4PAAU";
}

char* func_511(int iParam0)//Position - 0x1015F
{
	switch (iParam0)
	{
		case 0:
			return "HS4PA_PS_1";
		
		case 1:
			return "HS4PA_PS_2";
		
		case 2:
			return "HS4PA_PS_3";
		
		case 3:
			return "HS4PA_PS_49";
		
		case 4:
			return "HS4PA_PS_50";
		
		case 5:
			return "HS4PA_PS_4";
		
		case 6:
			return "HS4PA_PS_5";
		
		case 7:
			return "HS4PA_PS_6";
		
		case 8:
			return "HS4PA_PS_7";
		
		case 9:
			return "HS4PA_PS_8";
		
		case 10:
			return "HS4PA_PS_15";
		
		case 11:
			return "HS4PA_PS_9";
		
		case 12:
			return "HS4PA_PS_10";
		
		case 13:
			return "HS4PA_PS_11";
		
		case 14:
			return "HS4PA_PS_51";
		
		case 15:
			return "HS4PA_PS_12";
		
		case 16:
			return "HS4PA_PS_52";
		
		case 17:
			return "HS4PA_PS_13";
		
		case 18:
			return "HS4PA_PS_14";
		
		case 19:
			return "HS4PA_PS_16";
		
		case 20:
			return "HS4PA_PS_17";
		
		case 21:
			return "HS4PA_PS_18";
		
		case 22:
			return "HS4PA_PS_19";
		
		case 23:
			return "HS4PA_PS_20";
		
		case 24:
			return "HS4PA_PS_21";
		
		case 25:
			return "HS4PA_PS_22";
		
		case 26:
			return "HS4PA_PS_23";
		
		case 27:
			return "HS4PA_PS_24";
		
		case 28:
			return "HS4PA_PS_25";
		
		case 29:
			return "HS4PA_PS_53";
		
		case 30:
			return "HS4PA_PS_26";
		
		case 31:
			return "HS4PA_PS_27";
		
		case 32:
			return "HS4PA_PS_28";
		
		case 33:
			return "HS4PA_PS_29";
		
		case 34:
			return "HS4PA_PS_30";
		
		case 35:
			return "HS4PA_PS_31";
		
		case 36:
			return "HS4PA_PS_32";
		
		case 37:
			return "HS4PA_PS_33";
		
		case 38:
			return "HS4PA_PS_34";
		
		case 39:
			return "HS4PA_PS_35";
		
		case 40:
			return "HS4PA_PS_36";
		
		case 41:
			return "HS4PA_PS_37";
		
		case 42:
			return "HS4PA_PS_38";
		
		case 43:
			return "HS4PA_PS_39";
		
		case 44:
			return "HS4PA_PS_40";
		
		case 45:
			return "HS4PA_PS_41";
		
		case 46:
			return "HS4PA_PS_42";
		
		case 47:
			return "HS4PA_PS_43";
		
		case 48:
			return "HS4PA_PS_44";
		
		case 49:
			return "HS4PA_PS_45";
		
		case 50:
			return "HS4PA_PS_46";
		
		case 51:
			return "HS4PA_PS_47";
		
		case 52:
			return "HS4PA_PS_48";
		
		default:
	}
	return "";
}

var func_512()//Position - 0x10423
{
	return Global_1579667;
}

char* func_513()//Position - 0x1042F
{
	return "HIP_SETUP_CASH" /* GXT: You do not have enough cash. The setup cost for The Cayo Perico Heist is $~1~. */;
}

int func_514()//Position - 0x1043B
{
	var uVar0;
	struct<10> Var1;
	
	if (func_529())
	{
		if (func_528())
		{
			func_516(joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"), Global_262145.f_30207 /* Tunable: H4_REPLAY_COST */, &uVar0, 0, 1, 0);
		}
		else
		{
			Var1 = -1;
			Var1.f_1 = -1;
			Var1.f_2 = -1;
			Var1.f_3 = -1;
			Var1.f_4 = -1;
			Var1.f_5 = -1;
			Var1.f_6 = -1;
			Var1.f_7 = -1;
			Var1.f_8 = -1;
			Var1.f_9 = -1;
			func_515(&Var1);
			Var1.f_7 = Global_262145.f_30207 /* Tunable: H4_REPLAY_COST */;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_262145.f_30207 /* Tunable: H4_REPLAY_COST */, 0, 1, &Var1);
		}
		return 1;
	}
	return 0;
}

void func_515(var uParam0)//Position - 0x104CB
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

void func_516(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x10504
{
	int iVar0;
	
	if (!func_528())
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
			if (iParam1 > 0 || Global_262145.f_28652 /* Tunable: 1103207774 */)
			{
				func_517(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_517(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			if (iParam1 > 0 || Global_262145.f_28652 /* Tunable: 1103207774 */)
			{
				func_517(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_517(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_517(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x10E17
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_528())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_8()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_524(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_523(1, iParam4);
			Global_4537356 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_518(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_518(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x10FC4
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_519(iParam0);
	}
}

void func_519(int iParam0)//Position - 0x10FFC
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_528())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_522(iParam0))
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
		func_520(&(Global_4535851[iParam0 /*85*/]));
	}
}

void func_520(var uParam0)//Position - 0x11050
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
	func_521(&(uParam0->f_14));
	func_521(&(uParam0->f_14.f_13));
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

void func_521(var uParam0)//Position - 0x11160
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

int func_522(int iParam0)//Position - 0x111A8
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535851[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_523(int iParam0, int iParam1)//Position - 0x111D3
{
	Global_2698632 = iParam1;
	Global_2698631 = iParam0;
}

int func_524(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x111E7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535851[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_528())
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
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_525(Global_4535851[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_525(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x11324
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
	iVar37 = func_527(Var0.f_1);
	if ((Global_262145.f_24288 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24289 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24290 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_526();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_526()//Position - 0x113B8
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_527(int iParam0)//Position - 0x113C8
{
	var uVar0;
	
	if (func_18(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_528()//Position - 0x113E3
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_529()//Position - 0x113FA
{
	int iVar0;
	int iVar1;
	
	if (STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&iVar0, &iVar1))
	{
		func_5(9571, iVar0, -1, 1);
		func_5(9572, iVar1, -1, 1);
		return 1;
	}
	return 0;
}

char* func_530()//Position - 0x11428
{
	return "HIP_COOLDOWN" /* GXT: Pavel will contact you when The Cayo Perico Heist is available again. */;
}

var func_531()//Position - 0x11434
{
	return BitTest(Global_1974418.f_10, 6);
}

struct<16> func_532()//Position - 0x11444
{
	struct<16> Var0;
	
	StringCopy(&Var0, "HIP_WARN_SETUP" /* GXT: The setup cost for The Cayo Perico Heist is $~1~. */, 64);
	if (BitTest(Global_1974418.f_10, 7))
	{
		StringCopy(&Var0, "HIP_WARN_SETUP2" /* GXT: The setup cost for The Cayo Perico Heist is $~1~. Setting up now will set the heist to Hard Mode. */, 64);
	}
	return Var0;
}

char* func_533()//Position - 0x1146C
{
	return "HIP_PROMPT_S" /* GXT: Press ~INPUT_CONTEXT~ to set up The Cayo Perico Heist. */;
}

var func_534()//Position - 0x11478
{
	return Global_262145.f_30207 /* Tunable: H4_REPLAY_COST */;
}

void func_535()//Position - 0x11487
{
	if (BitTest(Global_1974418.f_10, 7))
	{
		func_540(0);
		func_536(1, 1);
		MISC::SET_BIT(&(Global_1970744.f_1093), 12);
		Global_1970744.f_1104 = 1;
	}
	else
	{
		func_540(1);
	}
}

void func_536(bool bParam0, bool bParam1)//Position - 0x114C2
{
	int iVar0;
	
	iVar0 = func_9(9511, -1);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 12);
		MISC::SET_BIT(&(Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_1), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 12);
		MISC::CLEAR_BIT(&(Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_1), 12);
	}
	func_4(9511, iVar0, -1);
	if (bParam1)
	{
		func_537(-1713398555, 18, 0);
	}
}

void func_537(int iParam0, int iParam1, int iParam2)//Position - 0x1152B
{
	int iVar0;
	
	if (func_539(iParam1, iParam2))
	{
		iVar0 = func_538();
		Global_2695845[iVar0] = iParam1;
		Global_2695856[iVar0] = iParam0;
	}
}

int func_538()//Position - 0x11558
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

int func_539(int iParam0, var uParam1)//Position - 0x1158D
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

void func_540(bool bParam0)//Position - 0x11613
{
	int iVar0;
	
	iVar0 = func_9(9511, -1);
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&(Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_1), 0);
	func_4(9511, iVar0, -1);
	func_552(6);
	func_551();
	func_547();
	func_542();
	func_541(1);
	if (bParam0)
	{
		func_537(-1713398555, 18, 0);
	}
}

void func_541(bool bParam0)//Position - 0x1166E
{
	int iVar0;
	
	iVar0 = func_9(9511, -1);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&(Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_1), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 5);
		MISC::CLEAR_BIT(&(Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_1), 5);
	}
	func_4(9511, iVar0, -1);
}

void func_542()//Position - 0x116C2
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
	int iVar17[24];
	int iVar42[8];
	int iVar51[7];
	int iVar59;
	int iVar60;
	float fVar61;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_30025 /* Tunable: 544918928 */, Global_262145.f_30026 /* Tunable: -1055680280 */);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar17[iVar1] = 1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 24);
		iVar59 = iVar17[iVar1];
		iVar17[iVar1] = iVar17[iVar2];
		iVar17[iVar2] = iVar59;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar17[iVar1])
		{
			iVar60 = func_546(iVar1, 1);
			switch (iVar60)
			{
				case 0:
					MISC::SET_BIT(&iVar3, iVar1);
					break;
				
				case 1:
					MISC::SET_BIT(&iVar5, iVar1);
					break;
				
				case 2:
					MISC::SET_BIT(&iVar7, iVar1);
					break;
				
				case 3:
					MISC::SET_BIT(&iVar9, iVar1);
					break;
				}
		}
		iVar1++;
	}
	if (!func_382(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&iVar3, 6);
		MISC::CLEAR_BIT(&iVar3, 7);
		MISC::SET_BIT(&iVar5, 6);
		MISC::SET_BIT(&iVar5, 7);
		MISC::CLEAR_BIT(&iVar7, 6);
		MISC::CLEAR_BIT(&iVar7, 7);
		MISC::CLEAR_BIT(&iVar9, 6);
		MISC::CLEAR_BIT(&iVar9, 7);
		MISC::CLEAR_BIT(&iVar3, 11);
		MISC::CLEAR_BIT(&iVar3, 12);
		MISC::CLEAR_BIT(&iVar5, 11);
		MISC::CLEAR_BIT(&iVar5, 12);
		MISC::CLEAR_BIT(&iVar7, 11);
		MISC::CLEAR_BIT(&iVar7, 12);
		MISC::CLEAR_BIT(&iVar9, 11);
		MISC::CLEAR_BIT(&iVar9, 12);
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_30027 /* Tunable: -577933166 */, Global_262145.f_30028 /* Tunable: 740148171 */);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar42[iVar1] = 1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		iVar59 = iVar42[iVar1];
		iVar42[iVar1] = iVar42[iVar2];
		iVar42[iVar2] = iVar59;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (iVar42[iVar1])
		{
			iVar60 = func_546(iVar1, 0);
			switch (iVar60)
			{
				case 0:
					MISC::SET_BIT(&iVar4, iVar1);
					break;
				
				case 1:
					MISC::SET_BIT(&iVar6, iVar1);
					break;
				
				case 2:
					MISC::SET_BIT(&iVar8, iVar1);
					break;
				
				case 3:
					MISC::SET_BIT(&iVar10, iVar1);
					break;
				}
		}
		iVar1++;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_30029 /* Tunable: -1215396560 */, Global_262145.f_30030 /* Tunable: 2086011134 */);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar51[iVar1] = 1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iVar59 = iVar51[iVar1];
		iVar51[iVar1] = iVar51[iVar2];
		iVar51[iVar2] = iVar59;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (iVar51[iVar1])
		{
			MISC::SET_BIT(&iVar11, iVar1);
		}
		iVar1++;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_30031 /* Tunable: H4LOOT_MIN_CASH_VALUE */, Global_262145.f_30032 /* Tunable: H4LOOT_MAX_CASH_VALUE */ + 1);
	iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_30033 /* Tunable: H4LOOT_MIN_WEED_VALUE */, Global_262145.f_30034 /* Tunable: H4LOOT_MAX_WEED_VALUE */ + 1);
	iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_30035 /* Tunable: H4LOOT_MIN_COKE_VALUE */, Global_262145.f_30036 /* Tunable: H4LOOT_MAX_COKE_VALUE */ + 1);
	iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_30037 /* Tunable: H4LOOT_MIN_GOLD_VALUE */, Global_262145.f_30038 /* Tunable: H4LOOT_MAX_GOLD_VALUE */ + 1);
	iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_30039 /* Tunable: H4LOOT_MIN_PAINTING_VALUE */, Global_262145.f_30040 /* Tunable: H4LOOT_MAX_PAINTING_VALUE */ + 1);
	iVar12 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar12) / 100f)) * 100;
	iVar13 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar13) / 100f)) * 100;
	iVar14 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar14) / 100f)) * 100;
	iVar15 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar15) / 100f)) * 100;
	iVar16 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar16) / 100f)) * 100;
	fVar61 = func_543();
	if (fVar61 != 1f)
	{
		iVar12 = SYSTEM::CEIL((IntToFloat(iVar12) * fVar61));
		iVar13 = SYSTEM::CEIL((IntToFloat(iVar13) * fVar61));
		iVar14 = SYSTEM::CEIL((IntToFloat(iVar14) * fVar61));
		iVar15 = SYSTEM::CEIL((IntToFloat(iVar15) * fVar61));
		iVar16 = SYSTEM::CEIL((IntToFloat(iVar16) * fVar61));
	}
	func_5(9495, iVar3, -1, 1);
	func_5(9496, iVar4, -1, 1);
	func_5(9497, iVar12, -1, 1);
	func_5(9498, iVar5, -1, 1);
	func_5(9499, iVar6, -1, 1);
	func_5(9500, iVar13, -1, 1);
	func_5(9501, iVar7, -1, 1);
	func_5(9502, iVar8, -1, 1);
	func_5(9503, iVar14, -1, 1);
	func_5(9504, iVar9, -1, 1);
	func_5(9505, iVar10, -1, 1);
	func_5(9506, iVar15, -1, 1);
	func_5(9507, iVar11, -1, 1);
	func_5(9508, iVar16, -1, 1);
}

float func_543()//Position - 0x11B88
{
	switch (func_544(1))
	{
		case 0:
			return Global_262145.f_30182 /* Tunable: -1387641161 */;
		
		case 1:
			return Global_262145.f_30183 /* Tunable: -1977209208 */;
		
		case 2:
			return Global_262145.f_30184 /* Tunable: -651044344 */;
		
		case 3:
			return Global_262145.f_30185 /* Tunable: 593471001 */;
		
		case 4:
			return Global_262145.f_30186 /* Tunable: 2057499252 */;
		
		case 5:
			return Global_262145.f_30187 /* Tunable: -982681546 */;
		
		default:
	}
	return 1f;
}

int func_544(bool bParam0)//Position - 0x11BFB
{
	if (bParam0)
	{
		return func_9(9489, -1);
	}
	return func_545(PLAYER::PLAYER_ID());
}

int func_545(int iParam0)//Position - 0x11C1B
{
	if (iParam0 != -1)
	{
		return Global_1972721[iParam0 /*53*/].f_5.f_9;
	}
	return -1;
}

int func_546(int iParam0, bool bParam1)//Position - 0x11C39
{
	var uVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	if (bParam1)
	{
		uVar0[0] = Global_262145.f_30043[iParam0];
		uVar0[1] = Global_262145.f_30068[iParam0];
		uVar0[2] = Global_262145.f_30093[iParam0];
		uVar0[3] = Global_262145.f_30118[iParam0];
	}
	else
	{
		uVar0[0] = Global_262145.f_30143[iParam0];
		uVar0[1] = Global_262145.f_30152[iParam0];
		uVar0[2] = Global_262145.f_30161[iParam0];
		uVar0[3] = Global_262145.f_30170[iParam0];
	}
	iVar8 = 0;
	while (iVar8 <= 3)
	{
		fVar5 = (fVar5 + uVar0[iVar8]);
		iVar8++;
	}
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar5);
	iVar8 = 0;
	while (iVar8 <= 3)
	{
		fVar6 = (fVar6 + uVar0[iVar8]);
		if (fVar7 < fVar6)
		{
			iVar9 = iVar8;
			return iVar9;
		}
		iVar8++;
	}
	return -1;
}

void func_547()//Position - 0x11D23
{
	var uVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	if (!func_550(0))
	{
		func_5(9489, 4, -1, 1);
		return;
	}
	if (Global_262145.f_30199 /* Tunable: 637051746 */ != 0)
	{
		if (func_549(9360, -1) != Global_262145.f_30199 /* Tunable: 637051746 */)
		{
			func_5(9489, 5, -1, 1);
			return;
		}
	}
	if (func_548())
	{
		uVar0[0] = Global_262145.f_30193 /* Tunable: H4_TARGET_WEIGHTING_TEQUILA_BOOST */;
		uVar0[1] = Global_262145.f_30194 /* Tunable: H4_TARGET_WEIGHTING_PEARL_NECKLACE_BOOST */;
		uVar0[2] = Global_262145.f_30195 /* Tunable: H4_TARGET_WEIGHTING_BEARER_BONDS_BOOST */;
		uVar0[3] = Global_262145.f_30196 /* Tunable: H4_TARGET_WEIGHTING_PINK_DIAMOND_BOOST */;
	}
	else
	{
		uVar0[0] = Global_262145.f_30188 /* Tunable: H4_TARGET_WEIGHTING_TEQUILA */;
		uVar0[1] = Global_262145.f_30189 /* Tunable: H4_TARGET_WEIGHTING_PEARL_NECKLACE */;
		uVar0[2] = Global_262145.f_30190 /* Tunable: H4_TARGET_WEIGHTING_BEARER_BONDS */;
		uVar0[3] = Global_262145.f_30191 /* Tunable: H4_TARGET_WEIGHTING_PINK_DIAMOND */;
	}
	iVar8 = 0;
	while (iVar8 < 4)
	{
		fVar5 = (fVar5 + uVar0[iVar8]);
		iVar8++;
	}
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar5);
	iVar8 = 0;
	while (iVar8 < 4)
	{
		fVar6 = (fVar6 + uVar0[iVar8]);
		if (fVar7 < fVar6)
		{
			func_5(9489, iVar8, -1, 1);
			return;
		}
		iVar8++;
	}
}

int func_548()//Position - 0x11E33
{
	if (Global_262145.f_30198 /* Tunable: H4_TARGET_WEIGHTING_POSIX_TIME */ == -1)
	{
		return 0;
	}
	if (BitTest(Global_1974418.f_10, 21))
	{
		return 0;
	}
	return 1;
}

int func_549(int iParam0, int iParam1)//Position - 0x11E5B
{
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

bool func_550(bool bParam0)//Position - 0x11E77
{
	if (bParam0)
	{
		return BitTest(func_9(9511, -1), 1);
	}
	return func_382(PLAYER::PLAYER_ID());
}

void func_551()//Position - 0x11E99
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	func_5(9490, iVar1, -1, 1);
	iVar1 = 0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	func_5(9491, iVar1, -1, 1);
	iVar1 = 0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7 + 1);
	if (!func_382(PLAYER::PLAYER_ID()))
	{
		iVar0 = 6;
	}
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	func_5(9492, iVar1, -1, 1);
}

void func_552(int iParam0)//Position - 0x11FB5
{
	if (iParam0 == 6)
	{
		iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0 + 1, 6);
	}
	func_5(9493, iParam0, -1, 1);
}

int func_553()//Position - 0x11FD8
{
	return func_554(1);
}

int func_554(bool bParam0)//Position - 0x11FE5
{
	if (bParam0)
	{
		return BitTest(func_9(9511, -1), 0);
	}
	return func_555(PLAYER::PLAYER_ID());
}

int func_555(int iParam0)//Position - 0x12007
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_1, 0);
	}
	return 0;
}

bool func_556()//Position - 0x12025
{
	return func_550(1);
}

int func_557(var uParam0)//Position - 0x12032
{
	return func_558(0);
}

int func_558(int iParam0)//Position - 0x1203F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_559(iParam0);
	iVar1 = MISC::GET_CONTENT_ID_INDEX(iVar0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_559(int iParam0)//Position - 0x12063
{
	if (iParam0 == -1 || iParam0 == 11)
	{
		return 0;
	}
	return Global_262145.f_30210[iParam0];
}

int func_560()//Position - 0x1208C
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1444) && func_78(iLocal_1445, 1, 1))
	{
		if ((!func_124() && !func_123()) && !func_122())
		{
			if ((INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_1444) != joaat("Rm_Command") && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_1444) != joaat("Rm_Stair1")) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_1444) != joaat("Rm_Room2"))
			{
				return 1;
			}
		}
	}
	if (Global_1942781.f_3799 == 147)
	{
		return 1;
	}
	return 0;
}

char* func_561(int iParam0)//Position - 0x12111
{
	switch (iParam0)
	{
		case 0:
			if (!func_382(iLocal_1445) && !func_20(iLocal_1445, 0))
			{
				return "HIP_HELP_BBOSS2" /* GXT: Register as a Boss to access the Planning Screen ~HUD_COLOUR_GREEN~~BLIP_MP_HEIST~~s~ and begin the setup for The Cayo Perico Heist. */;
			}
			return "HIP_HELP_BBOSS" /* GXT: Register as a Boss to gain access to the Planning Screen. */;
		
		default:
	}
	return "";
}

float func_562(var uParam0)//Position - 0x12151
{
	return 0.1f;
}

int func_563(var uParam0)//Position - 0x1215E
{
	return 0;
}

int func_564(var uParam0)//Position - 0x12167
{
	return 0;
}

float func_565(int iParam0)//Position - 0x12170
{
	switch (iParam0)
	{
		case 0:
			return 69f;
		
		default:
	}
	return 0f;
}

Vector3 func_566(int iParam0)//Position - 0x1218E
{
	switch (iParam0)
	{
		case 0:
			if (func_995() == 0)
			{
				return -89.3034f, -0.1435f, 180f;
			}
			return -89.5003f, -0.204f, 180f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_567(int iParam0)//Position - 0x121D2
{
	switch (iParam0)
	{
		case 0:
			if (func_995() == 0)
			{
				return 1561.1614f, 384.824f, -48.6215f;
			}
			return 1561.1604f, 384.8204f, -48.9135f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_568(var uParam0, int iParam1, int* iParam2)//Position - 0x12216
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	
	if ((iLocal_1418 || iLocal_1419) || (Local_1548.f_6 != -1 && !func_458(Local_1548.f_6)))
	{
		return;
	}
	iVar0 = uParam0->f_812;
	func_580(uParam0, iParam1, iVar0);
	switch (iParam1)
	{
		case 0:
			if (iLocal_1439 != 0)
			{
				return;
			}
			func_579(uParam0->f_716, 188);
			func_578(uParam0->f_716);
			break;
		
		case 1:
			if (iLocal_1439 != 0)
			{
				return;
			}
			func_579(uParam0->f_716, 187);
			func_578(uParam0->f_716);
			break;
		
		case 2:
			if (func_381(iVar0))
			{
				func_575(uParam0, iVar0, iParam1);
			}
			else
			{
				func_579(uParam0->f_716, 189);
				func_578(uParam0->f_716);
			}
			break;
		
		case 3:
			if (func_381(iVar0))
			{
				func_575(uParam0, iVar0, iParam1);
			}
			else
			{
				func_579(uParam0->f_716, 190);
				func_578(uParam0->f_716);
			}
			break;
		
		case 8:
			if (Local_1548.f_6 != -1)
			{
				return;
			}
			func_579(uParam0->f_716, 205);
			func_578(uParam0->f_716);
			break;
		
		case 9:
			if (Local_1548.f_6 != -1)
			{
				return;
			}
			func_579(uParam0->f_716, 206);
			func_578(uParam0->f_716);
			break;
		
		case 4:
			if (func_574(uParam0, iVar0))
			{
				func_579(uParam0->f_716, 201);
				func_573(uParam0->f_716);
				func_578(uParam0->f_716);
			}
			if (iVar0 == 5 || iVar0 == 65)
			{
				if (!bLocal_1424)
				{
					bLocal_1424 = true;
				}
			}
			break;
		
		case 5:
			if (iLocal_1439 != 0)
			{
				func_571(uParam0);
			}
			else if (func_429(iVar0))
			{
				if (Local_1548.f_6 == -1)
				{
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						uParam0->f_1094 = 1;
					}
					else
					{
						MISC::SET_BIT(iParam2, 0);
					}
				}
			}
			else
			{
				func_579(uParam0->f_716, 202);
				func_578(uParam0->f_716);
				if (func_570(iVar0))
				{
					if (bLocal_1424)
					{
						bLocal_1424 = false;
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_1439 != 0)
			{
				return;
			}
			if (!func_428(uParam0))
			{
				return;
			}
			bLocal_1424 = !bLocal_1424;
			break;
		
		case 7:
			if (iLocal_1439 != 0)
			{
				return;
			}
			if (Local_1548.f_6 != -1)
			{
				return;
			}
			iLocal_1422 = !iLocal_1422;
			break;
		
		case 15:
			if (func_381(iVar0))
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_831.f_51[func_569(iVar0)]);
				Var2 = { func_216(iVar1) };
				func_37(uParam0, 5);
				NETWORK::NETWORK_SHOW_PROFILE_UI(&Var2);
			}
			break;
	}
}

int func_569(int iParam0)//Position - 0x124B0
{
	switch (iParam0)
	{
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		default:
	}
	return -1;
}

int func_570(int iParam0)//Position - 0x124E8
{
	switch (iParam0)
	{
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 85:
		case 86:
			return 1;
		
		default:
	}
	return 0;
}

void func_571(var uParam0)//Position - 0x1252C
{
	iLocal_1439 = 0;
	uParam0->f_710 = 1;
	func_572(uParam0->f_716);
}

void func_572(int iParam0)//Position - 0x12547
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iParam0, "HIDE_OVERLAY");
}

void func_573(int iParam0)//Position - 0x12559
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REQUEST_CURRENT_SELECTION");
	iLocal_1417 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	iLocal_1419 = 1;
}

int func_574(var uParam0, int iParam1)//Position - 0x12577
{
	switch (iParam1)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1092 != iLocal_1445)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_575(var uParam0, int iParam1, int iParam2)//Position - 0x125C1
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1092 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (uParam0->f_831.f_49 == 1)
	{
		func_37(uParam0, 4);
		return;
	}
	if (func_577(3))
	{
		func_11("CUTS_LOCKED" /* GXT: Changing your crew cuts is unavailable right now. */, -1);
		func_37(uParam0, 7);
		return;
	}
	switch (iParam2)
	{
		case 2:
			iVar0 = -5;
			break;
		
		case 3:
			if (uParam0->f_831.f_56[4] >= 5)
			{
				iVar0 = 5;
			}
			break;
	}
	iVar1 = func_569(iParam1);
	func_576(uParam0, iVar1, iVar0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar1++;
	}
}

void func_576(var uParam0, int iParam1, int iParam2)//Position - 0x1265B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 15;
	iVar1 = 85;
	if (uParam0->f_831.f_49 == 1)
	{
		iVar1 = 100;
	}
	if (iParam2 < 0)
	{
		iVar2 = uParam0->f_831.f_56[iParam1];
		if (iVar2 < MISC::ABSI(iParam2))
		{
			iParam2 = iVar2;
		}
		if (uParam0->f_831.f_56[iParam1] < iVar0)
		{
			iVar3 = (iVar0 - uParam0->f_831.f_56[iParam1]);
			uParam0->f_831.f_56[iParam1] = (uParam0->f_831.f_56[iParam1] + iVar3);
			func_37(uParam0, 4);
		}
		else if (uParam0->f_831.f_56[iParam1] == iVar0)
		{
			func_37(uParam0, 4);
		}
		else
		{
			if (uParam0->f_831.f_56[4] <= (100 - MISC::ABSI(iParam2)))
			{
				uParam0->f_831.f_56[4] = (uParam0->f_831.f_56[4] + MISC::ABSI(iParam2));
				uParam0->f_831.f_56[iParam1] = (uParam0->f_831.f_56[iParam1] - MISC::ABSI(iParam2));
			}
			if (iParam2 == 0)
			{
				func_37(uParam0, 4);
			}
			else
			{
				func_37(uParam0, 13);
			}
		}
		if (uParam0->f_831.f_56[iParam1] <= iVar0)
		{
			if (!func_14("HEIST_NOTE_6" /* GXT: The selected Heist member is at minimum cut. */))
			{
				HUD::CLEAR_HELP(true);
				func_11("HEIST_NOTE_6" /* GXT: The selected Heist member is at minimum cut. */, 5000);
			}
		}
	}
	else
	{
		iVar4 = uParam0->f_831.f_56[4];
		if (iVar4 < MISC::ABSI(iParam2))
		{
			iParam2 = iVar4;
		}
		if (uParam0->f_831.f_56[iParam1] > iVar1)
		{
			iVar5 = (uParam0->f_831.f_56[iParam1] - iVar1);
			uParam0->f_831.f_56[4] = (uParam0->f_831.f_56[4] + iVar5);
			func_37(uParam0, 4);
		}
		else if (uParam0->f_831.f_56[iParam1] == iVar1)
		{
			func_37(uParam0, 4);
		}
		else
		{
			if (uParam0->f_831.f_56[4] >= MISC::ABSI(iParam2))
			{
				uParam0->f_831.f_56[4] = (uParam0->f_831.f_56[4] - MISC::ABSI(iParam2));
				uParam0->f_831.f_56[iParam1] = (uParam0->f_831.f_56[iParam1] + MISC::ABSI(iParam2));
			}
			if (iParam2 == 0)
			{
				func_37(uParam0, 4);
			}
			else
			{
				func_37(uParam0, 12);
			}
		}
		if (uParam0->f_831.f_56[iParam1] >= iVar1)
		{
			if (!func_14("HEIST_NOTE_5" /* GXT: The selected Heist member is at maximum cut. */))
			{
				HUD::CLEAR_HELP(true);
				func_11("HEIST_NOTE_5" /* GXT: The selected Heist member is at maximum cut. */, 5000);
			}
		}
	}
}

int func_577(int iParam0)//Position - 0x12893
{
	if (Global_262145.f_34391 /* Tunable: 1308841934 */ == -1)
	{
		return 0;
	}
	if (BitTest(Global_1977955, 4))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			return BitTest(Global_1977955, 0);
		
		case 1:
			return BitTest(Global_1977955, 1);
		
		case 2:
			return BitTest(Global_1977955, 2);
		
		case 3:
			return BitTest(Global_1977955, 3);
		
		default:
	}
	return 0;
}

void func_578(int iParam0)//Position - 0x128FE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REQUEST_CURRENT_ROLLOVER");
	iLocal_1416 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	iLocal_1418 = 1;
}

void func_579(int iParam0, int iParam1)//Position - 0x1291C
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iParam0, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
}

void func_580(var uParam0, int iParam1, int iParam2)//Position - 0x12948
{
	if (!func_20(uParam0->f_1092, 0) && !func_382(uParam0->f_1092))
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 8:
			case 9:
				func_37(uParam0, 4);
				return;
				break;
			}
	}
	switch (iParam1)
	{
		case 0:
			if (func_381(iParam2) && uParam0->f_831.f_49 == 1)
			{
				func_37(uParam0, 4);
				return;
			}
			if (iLocal_1439 == 0)
			{
				func_37(uParam0, 0);
				if (!func_381(iParam2))
				{
					if (func_583(iParam2))
					{
						func_37(uParam0, 21);
					}
					else
					{
						func_37(uParam0, 22);
					}
				}
			}
			else
			{
				func_37(uParam0, 4);
			}
			break;
		
		case 1:
			if (func_381(iParam2) && uParam0->f_831.f_49 == 1)
			{
				func_37(uParam0, 4);
				return;
			}
			if (iLocal_1439 == 0)
			{
				func_37(uParam0, 0);
				if (!func_381(iParam2))
				{
					if (func_583(iParam2))
					{
						func_37(uParam0, 21);
					}
					else
					{
						func_37(uParam0, 22);
					}
				}
			}
			else
			{
				func_37(uParam0, 4);
			}
			break;
		
		case 2:
			if (iLocal_1439 == 0)
			{
				if (iParam2 == 1000)
				{
					func_37(uParam0, 1);
				}
				else if (!func_381(iParam2))
				{
					func_37(uParam0, 4);
				}
			}
			else if (iLocal_1439 > 0)
			{
				if (iParam2 == 1002)
				{
					func_37(uParam0, 1);
				}
				else
				{
					func_37(uParam0, 4);
				}
			}
			break;
		
		case 3:
			if (iLocal_1439 == 0)
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if ((func_10(iParam2, 2) && !func_381(iParam2)) && func_581(uParam0))
					{
						func_37(uParam0, 1);
					}
					else
					{
						func_37(uParam0, 4);
					}
				}
				else if (func_10(iParam2, 2) && iParam2 != 1000)
				{
					func_37(uParam0, 1);
				}
				else
				{
					func_37(uParam0, 4);
				}
			}
			else if (iLocal_1439 > 0)
			{
				if (iParam2 == 1001)
				{
					func_37(uParam0, 1);
				}
				else
				{
					func_37(uParam0, 4);
				}
			}
			break;
		
		case 8:
			func_37(uParam0, 1);
			break;
		
		case 9:
			func_37(uParam0, 1);
			break;
		
		case 4:
			if (bLocal_1428)
			{
				func_37(uParam0, 5);
			}
			else
			{
				func_37(uParam0, 7);
			}
			break;
		
		case 5:
			if (!func_429(iParam2))
			{
				func_37(uParam0, 6);
			}
			break;
		
		case 6:
			if (func_428(uParam0) && iLocal_1439 == 0)
			{
				func_37(uParam0, 8);
			}
			break;
		
		case 7:
			if (func_383(uParam0, iParam2) && iLocal_1439 == 0)
			{
				func_37(uParam0, 9);
			}
			break;
	}
}

int func_581(var uParam0)//Position - 0x12BFF
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_812;
	if (func_582(iVar0) != 2)
	{
		return 0;
	}
	if (uParam0->f_1092 == PLAYER::PLAYER_ID() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_1972721[uParam0->f_1092 /*53*/].f_5.f_39 == 0)
		{
			return 0;
		}
		if (Global_1972721[uParam0->f_1092 /*53*/].f_5.f_40 == -1)
		{
			return 0;
		}
		if (Global_1972721[uParam0->f_1092 /*53*/].f_5.f_41 == -1)
		{
			return 0;
		}
		if (Global_1972721[uParam0->f_1092 /*53*/].f_5.f_42 == -1)
		{
			return 0;
		}
		if (Global_1972721[uParam0->f_1092 /*53*/].f_5.f_43 == 0)
		{
			return 0;
		}
		if (Global_1971856[uParam0->f_1092 /*27*/].f_12[4] > 0)
		{
			return 0;
		}
		iVar1 = 1;
		while (iVar1 <= 3)
		{
			if (uParam0->f_831.f_51[iVar1] == -1)
			{
			}
			else if (uParam0->f_831.f_67[iVar1] == 0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

int func_582(int iParam0)//Position - 0x12CF5
{
	if (func_10(iParam0, 0))
	{
		return 0;
	}
	else if (func_10(iParam0, 1))
	{
		return 1;
	}
	return 2;
}

int func_583(int iParam0)//Position - 0x12D1D
{
	switch (iParam0)
	{
		case 36:
		case 37:
		case 38:
		case 39:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 91:
		case 92:
			return 0;
		
		default:
	}
	return 1;
}

void func_584(var uParam0)//Position - 0x12D85
{
	char* sVar0;
	char* sVar1;
	
	if (BitTest(Global_1937476.f_233, 1))
	{
		sVar1 = "hs4f_int";
		sVar0 = "cutscene_ui_3_screen_island_2";
	}
	else if (BitTest(Global_1937476.f_233, 0))
	{
		sVar1 = "hs4f_int";
		sVar0 = "cutscene_ui_3_screen_island_3";
	}
	HUD::SET_TEXT_RENDER_ID(uParam0->f_700);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(73, 73);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	GRAPHICS::DRAW_SPRITE_NAMED_RENDERTARGET(sVar1, sVar0, 0.5f, 0.75f, 1f, 0.5f, 0f, 255, 255, 255, 255, 0);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

float func_585(var uParam0)//Position - 0x12E04
{
	return 0.5f;
}

float func_586(var uParam0)//Position - 0x12E11
{
	return 0.5f;
}

float func_587(var uParam0)//Position - 0x12E1E
{
	return 0.75f;
}

float func_588(var uParam0)//Position - 0x12E2B
{
	return 0.25f;
}

int func_589(var uParam0)//Position - 0x12E38
{
	return 2;
}

char* func_590(var uParam0)//Position - 0x12E41
{
	return "ISLAND_HEIST_BOARD";
}

int func_591(var uParam0)//Position - 0x12E4D
{
	return joaat("h4_int_sub_command_table");
}

char* func_592(var uParam0)//Position - 0x12E5A
{
	return "submarine_table";
}

void func_593(var uParam0)//Position - 0x12E66
{
	switch (uParam0->f_732)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !iLocal_1430)
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HS4F_INT", false);
				iLocal_1430 = 1;
			}
			func_879(uParam0);
			break;
		
		case 3:
			func_856(uParam0);
			break;
		
		case 4:
			func_852(uParam0);
			func_627(uParam0);
			func_856(uParam0);
			func_594(uParam0);
			break;
		
		case 5:
			break;
	}
}

void func_594(var uParam0)//Position - 0x12EEF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar2 = uParam0->f_1092;
	if (iVar2 == -1)
	{
		return;
	}
	if (uParam0->f_1092 == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				if (Global_1971856[iVar3 /*27*/].f_12[4] != uParam0->f_831.f_56[4])
				{
					Global_1971856[iVar3 /*27*/].f_12[4] = uParam0->f_831.f_56[4];
				}
			}
			else
			{
				if (Global_1971856[iVar3 /*27*/].f_12[iVar0] != uParam0->f_831.f_56[iVar0])
				{
					Global_1971856[iVar3 /*27*/].f_12[iVar0] = uParam0->f_831.f_56[iVar0];
					if (uParam0->f_831.f_51[iVar0] == PLAYER::NETWORK_PLAYER_ID_TO_INT())
					{
						Global_2685249.f_6615 = Global_1971856[iVar3 /*27*/].f_12[iVar0];
						Global_1941036.f_29 = Global_2685249.f_6615;
					}
					iLocal_1434 = 1;
				}
				if (Global_1971856[iVar3 /*27*/].f_2[iVar0] != uParam0->f_831.f_51[iVar0])
				{
					Global_1971856[iVar3 /*27*/].f_2[iVar0] = uParam0->f_831.f_51[iVar0];
				}
				iVar1 = 0;
				while (iVar1 <= 31)
				{
					if (uParam0->f_831.f_51[iVar0] != iVar1 || uParam0->f_831.f_51[iVar0] == uParam0->f_1092)
					{
					}
					else if (uParam0->f_831.f_67[iVar0] != Global_1971856[iVar1 /*27*/].f_7[iVar0])
					{
						uParam0->f_831.f_67[iVar0] = Global_1971856[iVar1 /*27*/].f_7[iVar0];
						if (uParam0->f_831.f_67[iVar0] == 1)
						{
							func_37(uParam0, 16);
						}
						else
						{
							func_37(uParam0, 17);
						}
						Global_1971856[iVar3 /*27*/].f_7[iVar0] = uParam0->f_831.f_67[iVar0];
						iLocal_1434 = 1;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	else
	{
		if (Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 != Global_1972721[uParam0->f_1092 /*53*/].f_5.f_39)
		{
			func_622(uParam0, func_626(Global_1972721[uParam0->f_1092 /*53*/].f_5.f_39));
		}
		if (Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 != Global_1972721[uParam0->f_1092 /*53*/].f_5.f_40)
		{
			func_605(uParam0, func_621(Global_1972721[uParam0->f_1092 /*53*/].f_5.f_40));
		}
		if (Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 != Global_1972721[uParam0->f_1092 /*53*/].f_5.f_41)
		{
			func_602(uParam0, func_604(Global_1972721[uParam0->f_1092 /*53*/].f_5.f_41));
		}
		if (Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 != Global_1972721[uParam0->f_1092 /*53*/].f_5.f_42)
		{
			func_599(uParam0, func_601(Global_1972721[uParam0->f_1092 /*53*/].f_5.f_42));
		}
		if (Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_43 != Global_1972721[uParam0->f_1092 /*53*/].f_5.f_43)
		{
			func_595(uParam0, func_598(Global_1972721[uParam0->f_1092 /*53*/].f_5.f_43));
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (uParam0->f_831.f_51[iVar0] != PLAYER::NETWORK_PLAYER_ID_TO_INT())
			{
			}
			else
			{
				Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_7[iVar0] = uParam0->f_831.f_67[iVar0];
				iVar4 = iVar0;
			}
			iVar0++;
		}
		bVar5 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Global_1971856[iVar2 /*27*/].f_2[iVar0] != 0)
			{
				bVar5 = false;
			}
			iVar0++;
		}
		if (bVar5)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				if (uParam0->f_831.f_56[4] != Global_1971856[iVar2 /*27*/].f_12[4])
				{
					uParam0->f_831.f_56[4] = Global_1971856[iVar2 /*27*/].f_12[4];
				}
			}
			else
			{
				if (uParam0->f_831.f_56[iVar0] != Global_1971856[iVar2 /*27*/].f_12[iVar0])
				{
					uParam0->f_831.f_56[iVar0] = Global_1971856[iVar2 /*27*/].f_12[iVar0];
					if (iVar4 == iVar0)
					{
						Global_2685249.f_6615 = Global_1971856[iVar2 /*27*/].f_12[iVar0];
						Global_1941036.f_29 = Global_2685249.f_6615;
					}
					iLocal_1434 = 1;
				}
				if (uParam0->f_831.f_51[iVar0] != Global_1971856[iVar2 /*27*/].f_2[iVar0])
				{
					uParam0->f_831.f_51[iVar0] = Global_1971856[iVar2 /*27*/].f_2[iVar0];
				}
				if (uParam0->f_831.f_67[iVar0] != Global_1971856[iVar2 /*27*/].f_7[iVar0])
				{
					if (iVar4 != iVar0)
					{
						uParam0->f_831.f_67[iVar0] = Global_1971856[iVar2 /*27*/].f_7[iVar0];
						if (uParam0->f_831.f_67[iVar0] == 1)
						{
							func_37(uParam0, 16);
						}
						else
						{
							func_37(uParam0, 17);
						}
						iLocal_1434 = 1;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_595(var uParam0, int iParam1)//Position - 0x133A1
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_597(uParam0);
	func_596(uParam0->f_716, iParam1, 1);
	switch (iParam1)
	{
		case 91:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_43 = 1;
			break;
		
		case 92:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_43 = 2;
			break;
	}
}

void func_596(int iParam0, int iParam1, bool bParam2)//Position - 0x133FD
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_ITEM_SELECTED");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_597(var uParam0)//Position - 0x13420
{
	func_596(uParam0->f_716, 91, 0);
	func_596(uParam0->f_716, 92, 0);
}

int func_598(int iParam0)//Position - 0x13440
{
	switch (iParam0)
	{
		case 1:
			return 91;
		
		case 2:
			return 92;
		
		default:
	}
	return 0;
}

void func_599(var uParam0, int iParam1)//Position - 0x13466
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_600(uParam0);
	func_596(uParam0->f_716, iParam1, 1);
	switch (iParam1)
	{
		case 87:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 0;
			break;
		
		case 88:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 1;
			break;
		
		case 89:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 2;
			break;
		
		case 90:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 3;
			break;
	}
}

void func_600(var uParam0)//Position - 0x134F2
{
	func_596(uParam0->f_716, 87, 0);
	func_596(uParam0->f_716, 88, 0);
	func_596(uParam0->f_716, 89, 0);
	func_596(uParam0->f_716, 90, 0);
}

int func_601(int iParam0)//Position - 0x1352A
{
	switch (iParam0)
	{
		case 0:
			return 87;
		
		case 1:
			return 88;
		
		case 2:
			return 89;
		
		case 3:
			return 90;
		
		default:
	}
	return 0;
}

void func_602(var uParam0, int iParam1)//Position - 0x13566
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_603(uParam0);
	func_596(uParam0->f_716, iParam1, 1);
	switch (iParam1)
	{
		case 85:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 = 0;
			break;
		
		case 86:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 = 5;
			break;
	}
}

void func_603(var uParam0)//Position - 0x135C2
{
	func_596(uParam0->f_716, 85, 0);
	func_596(uParam0->f_716, 86, 0);
}

int func_604(int iParam0)//Position - 0x135E2
{
	switch (iParam0)
	{
		case 0:
			return 85;
		
		case 5:
			return 86;
		
		default:
	}
	return 0;
}

void func_605(var uParam0, int iParam1)//Position - 0x13608
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_620(uParam0);
	func_596(uParam0->f_716, iParam1, 1);
	if (iParam1 == 84)
	{
		func_619(uParam0);
	}
	else
	{
		func_606(uParam0);
	}
	switch (iParam1)
	{
		case 77:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 0;
			break;
		
		case 78:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 1;
			break;
		
		case 79:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 2;
			break;
		
		case 80:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 3;
			break;
		
		case 81:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 4;
			break;
		
		case 82:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 5;
			break;
		
		case 83:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 6;
			break;
		
		case 84:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 7;
			break;
	}
}

void func_606(var uParam0)//Position - 0x1370A
{
	struct<9> Var0;
	int iVar9;
	int iVar10;
	
	func_596(uParam0->f_716, 85, 0);
	func_618(uParam0->f_716, 85);
	func_596(uParam0->f_716, 86, 0);
	func_618(uParam0->f_716, 86);
	Local_1194[0 /*9*/] = { Var0 };
	Local_1194[1 /*9*/] = { Var0 };
	if (func_20(uParam0->f_1092, 8))
	{
		func_609(uParam0, &(Local_1194[iVar9 /*9*/]), 65, 85);
		iVar9++;
	}
	if (func_20(uParam0->f_1092, 9))
	{
		func_609(uParam0, &(Local_1194[iVar9 /*9*/]), 65, 86);
		iVar9++;
	}
	iVar10 = 0;
	while (iVar10 < iVar9)
	{
		func_607(uParam0->f_716, Local_1194[iVar10 /*9*/], 0);
		iVar10++;
	}
	Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 = -1;
}

void func_607(int iParam0, struct<9> Param1, bool bParam10)//Position - 0x137DA
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_FINALE_ITEM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_2);
	if (bParam10)
	{
		func_608(Param1.f_3);
	}
	else
	{
		func_451(Param1.f_3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_4);
		func_451(Param1.f_5);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(Param1.f_6);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_8);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_608(char* sParam0)//Position - 0x13841
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_609(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1384F
{
	*uParam1 = 1;
	uParam1->f_1 = iParam2;
	uParam1->f_2 = iParam3;
	uParam1->f_4 = func_617(uParam0, iParam3);
	uParam1->f_3 = func_616(uParam0, iParam3);
	uParam1->f_5 = func_614(uParam0, iParam3);
	uParam1->f_6 = func_612(uParam0, iParam3);
	if (func_389(uParam0, iParam3))
	{
		uParam1->f_7 = func_611(uParam0, iParam3);
	}
	else
	{
		uParam1->f_7 = 0;
	}
	uParam1->f_8 = func_610(iParam3);
}

int func_610(int iParam0)//Position - 0x138C0
{
	switch (iParam0)
	{
		case 59:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 1;
		
		default:
	}
	return 0;
}

int func_611(var uParam0, int iParam1)//Position - 0x138FE
{
	switch (iParam1)
	{
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 99:
		case 103:
			return 1;
		
		case 47:
			return 1;
		
		case 49:
			if (!func_402(uParam0->f_1092, 5) && !func_402(uParam0->f_1092, 6))
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return 2;
}

char* func_612(var uParam0, int iParam1)//Position - 0x13972
{
	switch (iParam1)
	{
		case 1:
			return func_613(uParam0);
		
		case 2:
			return "ADDITIONAL_LOOT";
		
		case 3:
			return "INFILTRATION_POINTS";
		
		case 4:
			return "ESCAPE_POINTS";
		
		case 5:
			return "COMPOUND_ENTRY_POINTS";
		
		case 6:
			return "POINTS_OF_INTEREST";
		
		case 7:
			return "CASH";
		
		case 8:
			return "WEED";
		
		case 9:
			return "COCAINE";
		
		case 10:
			return "GOLD" /* GXT: Gold */;
		
		case 11:
			return "PAINTINGS";
		
		case 12:
			return "AIRSTRIP";
		
		case 13:
			return "PARACHUTING";
		
		case 14:
			return "WEST_BEACH";
		
		case 15:
			return "MAIN_DOCK";
		
		case 16:
			return "NORTH_DOCK";
		
		case 17:
			return "NORTH_DROP_ZONE";
		
		case 18:
			return "SOUTH_DROP_ZONE";
		
		case 19:
			return "DRAINAGE_TUNNEL";
		
		case 20:
			return "AIRSTRIP";
		
		case 21:
			return "MAIN_DOCK";
		
		case 22:
			return "NORTH_DOCK";
		
		case 23:
			return "SUBMARINE";
		
		case 30:
			return "POWER_STATION";
		
		case 31:
			return "CONTROL_TOWER";
		
		case 32:
			return "BOLT_CUTTERS";
		
		case 33:
			return "GRAPPLING_EQUIPMENT";
		
		case 34:
			return "GUARD_UNIFORM";
		
		case 35:
			return "GUARD_TRUCK";
		
		case 24:
			return "MAIN_GATE";
		
		case 25:
			return "NORTH_WALL";
		
		case 26:
			return "NORTH_SIDE_GATE";
		
		case 27:
			return "SOUTH_WALL";
		
		case 28:
			return "SOUTH_SIDE_GATE";
		
		case 29:
			return "DRAINAGE_TUNNEL";
		
		case 36:
			return "";
		
		case 37:
			return "";
		
		case 38:
			return "";
		
		case 39:
			return "";
		
		case 40:
			return "SUBMARINE";
		
		case 41:
			return "BOMBER";
		
		case 42:
			return "PLANE";
		
		case 43:
			return "HELICOPTER";
		
		case 44:
			return "PATROL_BOAT";
		
		case 45:
			return "SMUGGLER_BOAT";
		
		case 46:
			return "BOMBER";
		
		case 47:
			return "PILOT";
		
		case 48:
			return "HELICOPTER";
		
		case 49:
			return "PILOT";
		
		case 50:
			return "DEMOLITION_CHARGES";
		
		case 53:
			return "ACETYLENE_TORCH";
		
		case 51:
			return func_426(func_405(uParam0->f_1092) == 11, "SAFE_CODE", "PLASMA_CUTTER");
		
		case 52:
			return "FINGERPRINT";
		
		case 54:
			return "SHOTGUN";
		
		case 55:
			return "BULLPUP_RIFLE";
		
		case 56:
			return "SNIPER";
		
		case 57:
			return "SMG";
		
		case 58:
			return "ASSAULT_RIFLE";
		
		case 59:
			return "SUPPRESSORS";
		
		case 60:
			return "WEAPONS";
		
		case 61:
			return "ARMOR";
		
		case 62:
			return "BACKUP";
		
		case 63:
			return "";
		
		case 64:
			return "";
		
		case 65:
			return "";
		
		case 66:
			return "";
		
		case 67:
			return "";
		
		case 68:
			return "";
		
		case 69:
			return "";
		
		case 70:
			return "";
		
		case 71:
			return "SUBMARINE";
		
		case 72:
			return "BOMBER";
		
		case 73:
			return "PLANE";
		
		case 74:
			return "HELICOPTER";
		
		case 75:
			return "PATROL_BOAT";
		
		case 76:
			return "SMUGGLER_BOAT";
		
		case 77:
			return "AIRSTRIP";
		
		case 78:
			return "PARACHUTING";
		
		case 79:
			return "WEST_BEACH";
		
		case 80:
			return "MAIN_DOCK";
		
		case 81:
			return "NORTH_DOCK";
		
		case 82:
			return "NORTH_DROP_ZONE";
		
		case 83:
			return "SOUTH_DROP_ZONE";
		
		case 84:
			return "DRAINAGE_TUNNEL";
		
		case 85:
			return "MAIN_GATE";
		
		case 86:
			return "DRAINAGE_TUNNEL";
		
		case 87:
			return "AIRSTRIP";
		
		case 88:
			return "MAIN_DOCK";
		
		case 89:
			return "NORTH_DOCK";
		
		case 90:
			return "SUBMARINE";
		
		case 91:
			return "";
		
		case 92:
			return "";
		
		case 93:
			return "SHOTGUN";
		
		case 94:
			return "BULLPUP_RIFLE";
		
		case 95:
			return "SNIPER";
		
		case 96:
			return "SMG";
		
		case 97:
			return "ASSAULT_RIFLE";
		
		case 98:
			return "SUPPRESSORS";
		
		case 99:
			return "AIRSTRIKE_SUPPORT";
		
		case 100:
			return "HEAVY_WEAPON_SUPPORT";
		
		case 101:
			return "SNIPER_SUPPORT";
		
		case 102:
			return "HELICOPTER_SUPPORT";
		
		case 103:
			return "SPY_DRONE_SUPPORT";
		
		case 104:
			return "WEAPON_STASH_SUPPORT";
		
		default:
	}
	return "";
}

char* func_613(var uParam0)//Position - 0x13EE3
{
	if (func_20(uParam0->f_1092, 0))
	{
		switch (func_545(uParam0->f_1092))
		{
			case 0:
				return "GATHER_INTEL_TEQUILA";
			
			case 1:
				return "GATHER_INTEL_NECKLACE";
			
			case 2:
				return "GATHER_INTEL_BONDS";
			
			case 3:
				return "GATHER_INTEL_DIAMOND";
			
			case 4:
				return "GATHER_INTEL_FILES";
			
			case 5:
				return "GATHER_INTEL_STATUE";
			}
		
		default:
	}
	return "GATHER_INTEL";
}

char* func_614(var uParam0, int iParam1)//Position - 0x13F58
{
	switch (iParam1)
	{
		case 1:
			if (!func_382(uParam0->f_1092))
			{
				if (!func_20(uParam0->f_1092, 0))
				{
					return "H4P_INT0_GAT_D1" /* GXT: Find the Madrazo Files on Cayo Perico. */;
				}
			}
			else if (!func_20(uParam0->f_1092, 0))
			{
				return "H4P_INT0_GAT_D2" /* GXT: Find the primary target on Cayo Perico. */;
			}
			return "H4P_INT0_GAT_D3" /* GXT: Gather additional intel on Cayo Perico. */;
		
		case 2:
			return "H4P_INT0_LOOT_D" /* GXT: Secondary targets scoped */;
		
		case 3:
			return "H4P_INT0_ENTR_D" /* GXT: Infiltration points scoped */;
		
		case 4:
			return "H4P_INT0_EXIT_D" /* GXT: Escape points scoped */;
		
		case 5:
			return "H4P_INT0_COMP_D" /* GXT: Compound entry points scoped */;
		
		case 6:
			return "H4P_INT0_ITEM_D" /* GXT: Points of interest scoped */;
		
		case 7:
			return "H4P_INT2_CASH_D" /* GXT: Secondary target scoped: Cash */;
		
		case 8:
			return "H4P_INT2_WEED_D" /* GXT: Secondary target scoped: Weed */;
		
		case 9:
			return "H4P_INT2_COKE_D" /* GXT: Secondary target scoped: Cocaine */;
		
		case 10:
			return "H4P_INT2_GOLD_D" /* GXT: Secondary target scoped: Gold */;
		
		case 11:
			return "H4P_INT2_PAIN_D" /* GXT: Secondary target scoped: Painting */;
		
		case 12:
			return "H4P_INT3_AIRS_D" /* GXT: Infiltration Point: Airstrip */;
		
		case 13:
			return "H4P_INT3_PARA_D" /* GXT: Infiltration Point: HALO Jump */;
		
		case 14:
			return "H4P_INT3_BEAC_D" /* GXT: Infiltration Point: West Beach */;
		
		case 15:
			return "H4P_INT3_MDCK_D" /* GXT: Infiltration Point: Main Dock */;
		
		case 16:
			return "H4P_INT3_NDCK_D" /* GXT: Infiltration Point: North Dock */;
		
		case 17:
			return "H4P_INT3_NDRP_D" /* GXT: Infiltration Point: North Drop Zone */;
		
		case 18:
			return "H4P_INT3_SDRP_D" /* GXT: Infiltration Point: South Drop Zone */;
		
		case 19:
			return "H4P_INT3_DTUN_D" /* GXT: Infiltration Point: Drainage Tunnel */;
		
		case 20:
			return "H4P_INT4_AIRS_D" /* GXT: Escape point: Airstrip */;
		
		case 21:
			return "H4P_INT4_MDCK_D" /* GXT: Escape point: Main Dock */;
		
		case 22:
			return "H4P_INT4_NDCK_D" /* GXT: Escape point: North Dock */;
		
		case 23:
			return "H4P_INT4_SUBM_D" /* GXT: Escape point: Kosatka */;
		
		case 30:
			return "H4P_INT6_PWRS_D" /* GXT: Point of interest: Power Station */;
		
		case 31:
			return "H4P_INT6_CTOW_D" /* GXT: Point of interest: Control Tower */;
		
		case 32:
			return "H4P_INT6_BCUT_D" /* GXT: Point of interest: Bolt Cutters */;
		
		case 33:
			return "H4P_INT6_GRAP_D" /* GXT: Point of interest: Grappling Equipment */;
		
		case 34:
			return "H4P_INT6_UNIF_D" /* GXT: Point of interest: Guard Clothing */;
		
		case 35:
			return "H4P_INT6_TROJ_D" /* GXT: Point of interest: Supply Truck */;
		
		case 24:
			return "H4P_INT5_MGAT_D" /* GXT: Compound entry point: Main Gate */;
		
		case 25:
			return "H4P_INT5_NWAL_D" /* GXT: Compound entry point: North Wall */;
		
		case 26:
			return "H4P_INT5_NSGT_D" /* GXT: Compound entry point: North Gate */;
		
		case 27:
			return "H4P_INT5_SWAL_D" /* GXT: Compound entry point: South Wall */;
		
		case 28:
			return "H4P_INT5_SSGT_D" /* GXT: Compound entry point: South Gate */;
		
		case 29:
			return "H4P_INT5_DTUN_D" /* GXT: Compound entry point: Drainage Tunnel */;
		
		case 36:
			return "H4P_PRP0_APVH_D" /* GXT: Acquire an approach vehicle to get to Cayo Perico */;
		
		case 37:
			return "H4P_PRP0_EQUI_D" /* GXT: Acquire the equipment needed for the heist */;
		
		case 38:
			return "H4P_PRP0_WEPL_D" /* GXT: Acquire a weapon loadout to be used during the heist */;
		
		case 39:
			return "H4P_PRP0_DISR_D" /* GXT: Disrupt El Rubio's security on Cayo Perico */;
		
		case 40:
			return func_426(func_615(uParam0->f_1092, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 41:
			return func_426(func_615(uParam0->f_1092, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 42:
			return func_426(func_615(uParam0->f_1092, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 43:
			return func_426(func_615(uParam0->f_1092, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 44:
			return func_426(func_615(uParam0->f_1092, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 45:
			return func_426(func_615(uParam0->f_1092, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 46:
			return func_426(func_615(uParam0->f_1092, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 47:
			return func_426(func_615(uParam0->f_1092, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 48:
			return func_426(func_615(uParam0->f_1092, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 49:
			return func_426(func_615(uParam0->f_1092, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 50:
			return func_426(func_20(uParam0->f_1092, 9), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 53:
			return func_426(func_20(uParam0->f_1092, 8), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 51:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 52:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 54:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 55:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 56:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 57:
			if (!func_396(uParam0->f_1092) || !func_392(uParam0->f_1092, func_282(uParam0->f_1092)))
			{
				return "H4P_PRP3_UKNW_D" /* GXT: ERROR: UNKNOWN */;
			}
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 58:
			if (!func_396(uParam0->f_1092) || !func_392(uParam0->f_1092, func_282(uParam0->f_1092)))
			{
				return "H4P_PRP3_UKNW_D" /* GXT: ERROR: UNKNOWN */;
			}
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 59:
			return "H4P_PRP3_SUPP_D" /* GXT: SUPPRESSORS. Cost: $5,000 */;
		
		case 60:
			return "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */;
		
		case 61:
			return "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */;
		
		case 62:
			return "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */;
		
		case 63:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_APRV_2" /* GXT: Select your approach vehicle */, "H4P_FIN0_APRV_D" /* GXT: Approach vehicles acquired */);
		
		case 64:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_INFI_2" /* GXT: Select your infiltration point */, "H4P_FIN0_INFI_D" /* GXT: Infiltration points scoped */);
		
		case 65:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_CENT_2" /* GXT: Select your compound entry point */, "H4P_FIN0_CENT_D" /* GXT: Compound entry points scoped */);
		
		case 66:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_ESCA_2" /* GXT: Select your escape point */, "H4P_FIN0_ESCA_D" /* GXT: Escape points scoped */);
		
		case 67:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_TIMD_2" /* GXT: Select time of day */, "H4P_FIN0_TIMD_D" /* GXT: Time of day */);
		
		case 68:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_WEAP_2" /* GXT: Weapon loadout acquired */, "H4P_FIN0_WEAP_D" /* GXT: Weapon loadout acquired */);
		
		case 69:
			return "H4P_FIN0_SUPP_D" /* GXT: Hire Support Crew */;
		
		case 70:
			return "H4P_FIN0_CREW_D" /* GXT: Assign crew cuts */;
		
		case 71:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SUBM_D" /* GXT: Select Kosatka */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		
		case 72:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_BOMB_D" /* GXT: Select Alkonost */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		
		case 73:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SMPL_D" /* GXT: Select Velum */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		
		case 74:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SHEL_D" /* GXT: Select Stealth Annihilator */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		
		case 75:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_PBOA_D" /* GXT: Select Patrol Boat */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		
		case 76:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SBOA_D" /* GXT: Select Longfin */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		
		case 77:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_AIRS_D" /* GXT: Select airstrip */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 78:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_PARA_D" /* GXT: Select HALO jump */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 79:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_WBEA_D" /* GXT: Select west beach */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 80:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_MDOC_D" /* GXT: Select main dock */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 81:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_NDOC_D" /* GXT: Select north dock */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 82:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_NDRP_D" /* GXT: Select north drop zone */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 83:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_SDRP_D" /* GXT: Select south drop zone */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 84:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_DTUN_D" /* GXT: Select drainage tunnel */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 85:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN3_MGAT_D" /* GXT: Select main gate */, "H4P_FIN3_CENT_D" /* GXT: Compound entry point scoped */);
		
		case 86:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN3_DTUN_D" /* GXT: Select drainage tunnel */, "H4P_FIN3_CENT_D" /* GXT: Compound entry point scoped */);
		
		case 87:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_AIRS_D" /* GXT: Select airstrip */, "H4P_FIN4_ESCA_D" /* GXT: Escape points scoped */);
		
		case 88:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_MDOC_D" /* GXT: Select main dock */, "H4P_FIN4_ESCA_D" /* GXT: Escape points scoped */);
		
		case 89:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_NDOC_D" /* GXT: Select north dock */, "H4P_FIN4_ESCA_D" /* GXT: Escape points scoped */);
		
		case 90:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_SUBM_D" /* GXT: Select Kosatka */, "H4P_FIN4_ESCA_D" /* GXT: Escape points scoped */);
		
		case 91:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN5_TDAY_D" /* GXT: Select day */, "H4P_FIN5_TIMD_D" /* GXT: Time of day */);
		
		case 92:
			return func_426(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN5_TNGT_D" /* GXT: Select night */, "H4P_FIN5_TIMD_D" /* GXT: Time of day */);
		
		case 93:
			return "H4P_FIN6_SHOT_D" /* GXT: Acquired Aggressor loadout */;
		
		case 94:
			return "H4P_FIN6_RIFL_D" /* GXT: Acquired Conspirator loadout */;
		
		case 95:
			return "H4P_FIN6_SNIP_D" /* GXT: Acquired Crack Shot loadout */;
		
		case 96:
			return "H4P_FIN6_MKSM_D" /* GXT: Acquired Saboteur loadout */;
		
		case 97:
			return "H4P_FIN6_MKAR_D" /* GXT: Acquired Marksman loadout */;
		
		case 98:
			return "H4P_FIN6_SUPP_D" /* GXT: Choose to use suppressors */;
		
		case 99:
			return func_426(func_389(uParam0, iParam1), "H4P_PRP3_UKNW_D" /* GXT: ERROR: UNKNOWN */, "H4P_FIN7_AIRS_D" /* GXT: AIRSTRIKE. Cost: $12,000 */);
		
		case 100:
			return "H4P_FIN7_WDRP_D" /* GXT: SUPPLY DROP. Cost: $15,000 */;
		
		case 101:
			return "H4P_FIN7_SNIP_D" /* GXT: SNIPER. Cost: $25,000 */;
		
		case 102:
			return "H4P_FIN7_HELI_D" /* GXT: HELICOPTER BACKUP. Cost: $30,000 */;
		
		case 103:
			return func_426(func_389(uParam0, iParam1), "H4P_PRP3_UKNW_D" /* GXT: ERROR: UNKNOWN */, "H4P_FIN7_SPYD_D" /* GXT: RECON DRONE. Cost: $25,000 */);
		
		case 104:
			return "H4P_FIN7_WEAP_D" /* GXT: WEAPON STASH. Cost: $10,000 */;
		
		default:
	}
	return "";
}

int func_615(int iParam0, bool bParam1)//Position - 0x14832
{
	if (((func_20(iParam0, 7) || func_20(iParam0, 5)) || func_20(iParam0, 3)) || func_20(iParam0, 4))
	{
		return 1;
	}
	if (func_20(iParam0, 1) || func_20(iParam0, 2))
	{
		if (bParam1)
		{
			return func_20(iParam0, 6);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

char* func_616(var uParam0, int iParam1)//Position - 0x1489D
{
	switch (iParam1)
	{
		case 1:
			return "H4P_INT0_GATH_T" /* GXT: GATHER INTEL */;
		
		case 2:
			return "H4P_INT0_LOOT_T" /* GXT: SECONDARY TARGETS */;
		
		case 3:
			return "H4P_INT0_ENTR_T" /* GXT: INFILTRATION POINTS */;
		
		case 4:
			return "H4P_INT0_EXIT_T" /* GXT: ESCAPE POINTS */;
		
		case 5:
			return "H4P_INT0_COMP_T" /* GXT: COMPOUND ENTRY POINTS */;
		
		case 6:
			return "H4P_INT0_ITEM_T" /* GXT: POINTS OF INTEREST */;
		
		case 7:
			return "H4P_INT2_CASH_T" /* GXT: CASH */;
		
		case 8:
			return "H4P_INT2_WEED_T" /* GXT: WEED */;
		
		case 9:
			return "H4P_INT2_COKE_T" /* GXT: COCAINE */;
		
		case 10:
			return "H4P_INT2_GOLD_T" /* GXT: GOLD */;
		
		case 11:
			return "H4P_INT2_PAIN_T" /* GXT: PAINTINGS */;
		
		case 12:
			return "H4P_INT3_AIRS_T" /* GXT: AIRSTRIP */;
		
		case 13:
			return "H4P_INT3_PARA_T" /* GXT: HALO JUMP */;
		
		case 14:
			return "H4P_INT3_BEAC_T" /* GXT: WEST BEACH */;
		
		case 15:
			return "H4P_INT3_MDCK_T" /* GXT: MAIN DOCK */;
		
		case 16:
			return "H4P_INT3_NDCK_T" /* GXT: NORTH DOCK */;
		
		case 17:
			return "H4P_INT3_NDRP_T" /* GXT: NORTH DROP ZONE */;
		
		case 18:
			return "H4P_INT3_SDRP_T" /* GXT: SOUTH DROP ZONE */;
		
		case 19:
			return "H4P_INT3_DTUN_T" /* GXT: DRAINAGE TUNNEL */;
		
		case 20:
			return "H4P_INT4_AIRS_T" /* GXT: AIRSTRIP */;
		
		case 21:
			return "H4P_INT4_MDCK_T" /* GXT: MAIN DOCK */;
		
		case 22:
			return "H4P_INT4_NDCK_T" /* GXT: NORTH DOCK */;
		
		case 23:
			return "H4P_INT4_SUBM_T" /* GXT: KOSATKA */;
		
		case 30:
			return "H4P_INT6_PWRS_T" /* GXT: POWER STATION */;
		
		case 31:
			return "H4P_INT6_CTOW_T" /* GXT: CONTROL TOWER */;
		
		case 32:
			return "H4P_INT6_BCUT_T" /* GXT: BOLT CUTTERS */;
		
		case 33:
			return "H4P_INT6_GRAP_T" /* GXT: GRAPPLING EQUIPMENT */;
		
		case 34:
			return "H4P_INT6_UNIF_T" /* GXT: GUARD CLOTHING */;
		
		case 35:
			return "H4P_INT6_TROJ_T" /* GXT: SUPPLY TRUCK */;
		
		case 24:
			return "H4P_INT5_MGAT_T" /* GXT: MAIN GATE */;
		
		case 25:
			return "H4P_INT5_NWAL_T" /* GXT: NORTH WALL */;
		
		case 26:
			return "H4P_INT5_NSGT_T" /* GXT: NORTH GATE */;
		
		case 27:
			return "H4P_INT5_SWAL_T" /* GXT: SOUTH WALL */;
		
		case 28:
			return "H4P_INT5_SSGT_T" /* GXT: SOUTH GATE */;
		
		case 29:
			return "H4P_INT5_DTUN_T" /* GXT: DRAINAGE TUNNEL */;
		
		case 36:
			return "H4P_PRP0_APVH_T" /* GXT: APPROACH VEHICLES */;
		
		case 37:
			return "H4P_PRP0_EQUI_T" /* GXT: EQUIPMENT */;
		
		case 38:
			return "H4P_PRP0_WEPL_T" /* GXT: WEAPON LOADOUT */;
		
		case 39:
			return "H4P_PRP0_DISR_T" /* GXT: DISRUPTION */;
		
		case 40:
			return "H4P_PRP1_SUBM_T" /* GXT: SUBMARINE: KOSATKA */;
		
		case 41:
			return "H4P_PRP1_SBOM_T" /* GXT: PLANE: ALKONOST */;
		
		case 42:
			return "H4P_PRP1_SPLA_T" /* GXT: PLANE: VELUM */;
		
		case 43:
			return "H4P_PRP1_SHEL_T" /* GXT: HELICOPTER: STEALTH ANNIHILATOR */;
		
		case 44:
			return "H4P_PRP1_PBOA_T" /* GXT: BOAT: PATROL BOAT */;
		
		case 45:
			return "H4P_PRP1_SBOA_T" /* GXT: BOAT: LONGFIN */;
		
		case 46:
			return "H4P_PRP1_BOM1_T" /* GXT: PART 1: ALKONOST */;
		
		case 47:
			return "H4P_PRP1_BOM2_T" /* GXT: PART 2: PILOT */;
		
		case 48:
			return "H4P_PRP1_HEL1_T" /* GXT: PART 1: STEALTH ANNIHILATOR */;
		
		case 49:
			return "H4P_PRP1_HEL2_T" /* GXT: PART 2: PILOT */;
		
		case 50:
			return "H4P_PRP2_DEMC_T" /* GXT: DEMOLITION CHARGES */;
		
		case 53:
			return "H4P_PRP2_ATOR_T" /* GXT: CUTTING TORCH */;
		
		case 51:
			return func_426(func_405(uParam0->f_1092) == 11, "H4P_PRP2_TAR1_T" /* GXT: SAFE CODE */, "H4P_PRP2_TAR2_T" /* GXT: PLASMA CUTTER */);
		
		case 52:
			return "H4P_PRP2_FING_T" /* GXT: FINGERPRINT CLONER */;
		
		case 54:
			return "H4P_PRP3_SHOT_T" /* GXT: AGGRESSOR */;
		
		case 55:
			return "H4P_PRP3_RIFL_T" /* GXT: CONSPIRATOR */;
		
		case 56:
			return "H4P_PRP3_SNIP_T" /* GXT: CRACK SHOT */;
		
		case 57:
			return "H4P_PRP3_M2SM_T" /* GXT: SABOTEUR */;
		
		case 58:
			return "H4P_PRP3_M2RI_T" /* GXT: MARKSMAN */;
		
		case 59:
			return "H4P_PRP3_SUPP_T" /* GXT: SUPPRESSORS */;
		
		case 60:
			return "H4P_PRP4_WEAP_T" /* GXT: WEAPONS */;
		
		case 61:
			return "H4P_PRP4_ARMR_T" /* GXT: ARMOR */;
		
		case 62:
			return "H4P_PRP4_BRES_T" /* GXT: AIR SUPPORT */;
		
		case 63:
			return "H4P_FIN0_APRV_T" /* GXT: APPROACH VEHICLE */;
		
		case 64:
			return "H4P_FIN0_INFI_T" /* GXT: INFILTRATION POINT */;
		
		case 65:
			return "H4P_FIN0_CENT_T" /* GXT: COMPOUND ENTRY POINT */;
		
		case 66:
			return "H4P_FIN0_ESCA_T" /* GXT: ESCAPE POINT */;
		
		case 67:
			return "H4P_FIN0_TIMD_T" /* GXT: TIME OF DAY */;
		
		case 68:
			return "H4P_FIN0_WEAP_T" /* GXT: WEAPON LOADOUT */;
		
		case 69:
			return "H4P_FIN0_SUPP_T" /* GXT: HIRE SUPPORT CREW */;
		
		case 70:
			return "H4P_FIN0_CREW_T" /* GXT: ASSIGN CREW CUTS */;
		
		case 71:
			return "H4P_FIN1_SUBM_T" /* GXT: KOSATKA */;
		
		case 72:
			return "H4P_FIN1_BOMB_T" /* GXT: ALKONOST */;
		
		case 73:
			return "H4P_FIN1_SMPL_T" /* GXT: VELUM */;
		
		case 74:
			return "H4P_FIN1_SHEL_T" /* GXT: STEALTH ANNIHILATOR */;
		
		case 75:
			return "H4P_FIN1_PBOA_T" /* GXT: PATROL BOAT */;
		
		case 76:
			return "H4P_FIN1_SBOA_T" /* GXT: LONGFIN */;
		
		case 77:
			return "H4P_FIN2_AIRS_T" /* GXT: AIRSTRIP */;
		
		case 78:
			return "H4P_FIN2_PARA_T" /* GXT: HALO JUMP */;
		
		case 79:
			return "H4P_FIN2_WBEA_T" /* GXT: WEST BEACH */;
		
		case 80:
			return "H4P_FIN2_MDOC_T" /* GXT: MAIN DOCK */;
		
		case 81:
			return "H4P_FIN2_NDOC_T" /* GXT: NORTH DOCK */;
		
		case 82:
			return "H4P_FIN2_NDRP_T" /* GXT: NORTH DROP ZONE */;
		
		case 83:
			return "H4P_FIN2_SDRP_T" /* GXT: SOUTH DROP ZONE */;
		
		case 84:
			return "H4P_FIN2_DTUN_T" /* GXT: DRAINAGE TUNNEL */;
		
		case 85:
			return "H4P_FIN3_MGAT_T" /* GXT: MAIN GATE */;
		
		case 86:
			return "H4P_FIN3_DTUN_T" /* GXT: DRAINAGE TUNNEL */;
		
		case 87:
			return "H4P_FIN4_AIRS_T" /* GXT: AIRSTRIP */;
		
		case 88:
			return "H4P_FIN4_MDOC_T" /* GXT: MAIN DOCK */;
		
		case 89:
			return "H4P_FIN4_NDOC_T" /* GXT: NORTH DOCK */;
		
		case 90:
			return "H4P_FIN4_SUBM_T" /* GXT: KOSATKA */;
		
		case 91:
			return "H4P_FIN5_TDAY_T" /* GXT: DAY */;
		
		case 92:
			return "H4P_FIN5_TNGT_T" /* GXT: NIGHT */;
		
		case 93:
			return "H4P_FIN6_SHOT_T" /* GXT: AGGRESSOR */;
		
		case 94:
			return "H4P_FIN6_RIFL_T" /* GXT: CONSPIRATOR */;
		
		case 95:
			return "H4P_FIN6_SNIP_T" /* GXT: CRACK SHOT */;
		
		case 96:
			return "H4P_FIN6_MKSM_T" /* GXT: SABOTEUR */;
		
		case 97:
			return "H4P_FIN6_MKAR_T" /* GXT: MARKSMAN */;
		
		case 98:
			return "H4P_FIN6_SUPP_T" /* GXT: SUPPRESSORS */;
		
		case 99:
			return "H4P_FIN7_AIRS_T" /* GXT: AIRSTRIKE */;
		
		case 100:
			return "H4P_FIN7_WDRP_T" /* GXT: SUPPLY DROP */;
		
		case 101:
			return "H4P_FIN7_SNIP_T" /* GXT: SNIPER */;
		
		case 102:
			return "H4P_FIN7_HELI_T" /* GXT: HELICOPTER BACKUP */;
		
		case 103:
			return "H4P_FIN7_SPYD_T" /* GXT: RECON DRONE */;
		
		case 104:
			return "H4P_FIN7_WEAP_T" /* GXT: WEAPON STASH */;
		
		default:
	}
	return "";
}

int func_617(var uParam0, var uParam1)//Position - 0x14E0C
{
	return 0;
}

void func_618(int iParam0, int iParam1)//Position - 0x14E15
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REMOVE_FINALE_ITEM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_619(var uParam0)//Position - 0x14E32
{
	struct<9> Var0;
	
	func_618(uParam0->f_716, 85);
	func_618(uParam0->f_716, 86);
	Local_1194[0 /*9*/] = { Var0 };
	Local_1194[1 /*9*/] = { Var0 };
	func_609(uParam0, &(Local_1194[0 /*9*/]), 65, 86);
	func_596(uParam0->f_716, 86, 1);
	func_607(uParam0->f_716, Local_1194[0 /*9*/], 0);
}

void func_620(var uParam0)//Position - 0x14E9A
{
	func_596(uParam0->f_716, 77, 0);
	func_596(uParam0->f_716, 78, 0);
	func_596(uParam0->f_716, 79, 0);
	func_596(uParam0->f_716, 80, 0);
	func_596(uParam0->f_716, 81, 0);
	func_596(uParam0->f_716, 82, 0);
	func_596(uParam0->f_716, 83, 0);
	func_596(uParam0->f_716, 84, 0);
}

int func_621(int iParam0)//Position - 0x14F02
{
	switch (iParam0)
	{
		case 0:
			return 77;
		
		case 1:
			return 78;
		
		case 2:
			return 79;
		
		case 3:
			return 80;
		
		case 4:
			return 81;
		
		case 5:
			return 82;
		
		case 6:
			return 83;
		
		case 7:
			return 84;
		
		default:
	}
	return 0;
}

void func_622(var uParam0, int iParam1)//Position - 0x14F6A
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_625(uParam0);
	func_624(uParam0);
	func_618(uParam0->f_716, 90);
	func_606(uParam0);
	func_596(uParam0->f_716, iParam1, 1);
	switch (iParam1)
	{
		case 71:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 1;
			func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, 79);
			iVar0++;
			if (func_402(uParam0->f_1092, 3))
			{
				func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_402(uParam0->f_1092, 4))
			{
				func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			if (func_402(uParam0->f_1092, 7))
			{
				func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, 84);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_607(uParam0->f_716, Local_1121[iVar1 /*9*/], 0);
				iVar1++;
			}
			func_623(uParam0);
			break;
		
		case 72:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 2;
			func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, 78);
			iVar0++;
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_607(uParam0->f_716, Local_1121[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 73:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 3;
			func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, 77);
			iVar0++;
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_607(uParam0->f_716, Local_1121[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 74:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 4;
			if (func_402(uParam0->f_1092, 5))
			{
				func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, 82);
				iVar0++;
			}
			if (func_402(uParam0->f_1092, 6))
			{
				func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, 83);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_607(uParam0->f_716, Local_1121[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 75:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 5;
			if (func_402(uParam0->f_1092, 3))
			{
				func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_402(uParam0->f_1092, 4))
			{
				func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_607(uParam0->f_716, Local_1121[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 76:
			Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 6;
			if (func_402(uParam0->f_1092, 3))
			{
				func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_402(uParam0->f_1092, 4))
			{
				func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_607(uParam0->f_716, Local_1121[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
	}
}

void func_623(var uParam0)//Position - 0x152AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_618(uParam0->f_716, 87);
	func_618(uParam0->f_716, 88);
	func_618(uParam0->f_716, 89);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = (87 + iVar1);
		if (func_400(uParam0->f_1092, func_401(iVar2)))
		{
			func_609(uParam0, &(Local_1213[iVar0 /*9*/]), 66, iVar2);
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_1213.f_0)
	{
		if (Local_1213[iVar1 /*9*/])
		{
			func_607(uParam0->f_716, Local_1213[iVar1 /*9*/], 0);
		}
		iVar1++;
	}
}

void func_624(var uParam0)//Position - 0x1534A
{
	int iVar0;
	struct<9> Var1;
	
	func_618(uParam0->f_716, 77);
	func_618(uParam0->f_716, 78);
	func_618(uParam0->f_716, 79);
	func_618(uParam0->f_716, 80);
	func_618(uParam0->f_716, 81);
	func_618(uParam0->f_716, 82);
	func_618(uParam0->f_716, 83);
	func_618(uParam0->f_716, 84);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_1121[iVar0 /*9*/] = { Var1 };
		iVar0++;
	}
	Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = -1;
}

void func_625(var uParam0)//Position - 0x153DB
{
	func_596(uParam0->f_716, 71, 0);
	func_596(uParam0->f_716, 72, 0);
	func_596(uParam0->f_716, 73, 0);
	func_596(uParam0->f_716, 74, 0);
	func_596(uParam0->f_716, 75, 0);
	func_596(uParam0->f_716, 76, 0);
}

int func_626(int iParam0)//Position - 0x1542B
{
	switch (iParam0)
	{
		case 1:
			return 71;
		
		case 2:
			return 72;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 6:
			return 76;
		
		default:
	}
	return 0;
}

void func_627(var uParam0)//Position - 0x1547D
{
	int iVar0;
	
	if (!iLocal_1419)
	{
		return;
	}
	iVar0 = -1;
	if (func_851(&iVar0))
	{
		uParam0->f_812.f_3 = uParam0->f_812.f_2;
		uParam0->f_812.f_2 = iVar0;
		uParam0->f_710 = 1;
		func_628(uParam0);
		iLocal_1419 = 0;
	}
}

void func_628(var uParam0)//Position - 0x154C2
{
	int iVar0;
	
	iVar0 = uParam0->f_812.f_2;
	if (uParam0->f_1092 != PLAYER::PLAYER_ID() && iVar0 != 1000)
	{
		return;
	}
	switch (iVar0)
	{
		case 1:
			if (Local_1548.f_6 != -1)
			{
				return;
			}
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return;
			}
			if (func_389(uParam0, iVar0))
			{
				return;
			}
			if (func_20(uParam0->f_1092, 0))
			{
				func_840(uParam0);
				return;
			}
			func_656(uParam0, iVar0);
			break;
		
		case 40:
		case 42:
		case 44:
		case 45:
		case 46:
		case 48:
		case 47:
		case 49:
		case 50:
		case 53:
		case 51:
		case 52:
		case 60:
		case 61:
		case 62:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return;
			}
			if (func_389(uParam0, iVar0))
			{
				return;
			}
			if (Local_1548.f_6 != -1)
			{
				return;
			}
			func_656(uParam0, iVar0);
			break;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (func_389(uParam0, iVar0))
			{
				return;
			}
			if (Local_1548.f_6 != -1)
			{
				return;
			}
			func_653(uParam0, iVar0);
			break;
		
		case 59:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return;
			}
			func_651(uParam0);
			break;
		
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			func_622(uParam0, iVar0);
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
			func_605(uParam0, iVar0);
			break;
		
		case 85:
		case 86:
			func_602(uParam0, iVar0);
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_599(uParam0, iVar0);
			break;
		
		case 91:
		case 92:
			func_595(uParam0, iVar0);
			break;
		
		case 98:
			func_650(uParam0, iVar0);
			break;
		
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			if (func_389(uParam0, iVar0))
			{
				return;
			}
			func_644(uParam0, iVar0);
			break;
		
		case 1000:
			if (Local_1548.f_6 != -1)
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (uParam0->f_1092 == PLAYER::PLAYER_ID())
				{
					func_643(uParam0);
				}
			}
			else if (uParam0->f_1092 == PLAYER::PLAYER_ID())
			{
				func_499(uParam0);
			}
			else
			{
				func_640(uParam0);
			}
			break;
		
		case 1002:
			func_629(uParam0);
			break;
		
		case 1001:
			func_571(uParam0);
			break;
	}
}

void func_629(var uParam0)//Position - 0x1579C
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<10> Var3;
	struct<10> Var13;
	
	switch (iLocal_1439)
	{
		case -2:
			func_639(uParam0, 0);
			iVar2 = func_9(9511, -1);
			MISC::SET_BIT(&iVar2, 16);
			func_4(9511, iVar2, -1);
			break;
		
		case -3:
			iVar2 = func_9(9511, -1);
			MISC::SET_BIT(&iVar2, 14);
			func_4(9511, iVar2, -1);
			break;
		
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			iVar0 = func_638(iLocal_1439);
			if (func_528())
			{
				func_516(func_637(iLocal_1439), iVar0, &uVar1, 0, 1, 0);
			}
			else
			{
				Var3 = -1;
				Var3.f_1 = -1;
				Var3.f_2 = -1;
				Var3.f_3 = -1;
				Var3.f_4 = -1;
				Var3.f_5 = -1;
				Var3.f_6 = -1;
				Var3.f_7 = -1;
				Var3.f_8 = -1;
				Var3.f_9 = -1;
				func_515(&Var3);
				func_636(&Var3, iLocal_1439, iVar0);
				MONEY::NETWORK_SPEND_ISLAND_HEIST(iVar0, 0, 1, &Var3);
			}
			func_634(func_635(iLocal_1439), 1);
			func_596(uParam0->f_716, iLocal_1439, 1);
			func_37(uParam0, 11);
			func_44(&uLocal_1442, 0, 0);
			break;
		
		case 1:
			func_656(uParam0, iLocal_1439);
			break;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			func_632(func_633(iLocal_1439));
			func_656(uParam0, iLocal_1439);
			break;
		
		case 59:
			if (func_528())
			{
				func_516(joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"), Global_262145.f_30206 /* Tunable: H4_SUPPRESSORS_COST */, &uVar1, 0, 1, 0);
			}
			else
			{
				Var13 = -1;
				Var13.f_1 = -1;
				Var13.f_2 = -1;
				Var13.f_3 = -1;
				Var13.f_4 = -1;
				Var13.f_5 = -1;
				Var13.f_6 = -1;
				Var13.f_7 = -1;
				Var13.f_8 = -1;
				Var13.f_9 = -1;
				func_515(&Var13);
				Var13.f_6 = Global_262145.f_30206 /* Tunable: H4_SUPPRESSORS_COST */;
				MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_262145.f_30206 /* Tunable: H4_SUPPRESSORS_COST */, 0, 1, &Var13);
			}
			func_631(1);
			func_630(uParam0->f_716, 59, 1);
			func_596(uParam0->f_716, 98, 1);
			func_37(uParam0, 11);
			func_44(&uLocal_1442, 0, 0);
			break;
	}
	iLocal_1439 = 0;
	uParam0->f_710 = 1;
	func_572(uParam0->f_716);
}

void func_630(int iParam0, int iParam1, int iParam2)//Position - 0x159D8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SETUP_ITEM_NUM_COMPLETE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_631(bool bParam0)//Position - 0x159FB
{
	int iVar0;
	
	iVar0 = func_9(9482, -1);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 12);
		MISC::SET_BIT(&(Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 12);
		MISC::CLEAR_BIT(&(Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5), 12);
	}
	func_5(9482, iVar0, -1, 1);
}

void func_632(int iParam0)//Position - 0x15A54
{
	func_5(9485, iParam0, -1, 1);
}

int func_633(int iParam0)//Position - 0x15A67
{
	switch (iParam0)
	{
		case 54:
			return 1;
		
		case 55:
			return 2;
		
		case 56:
			return 3;
		
		case 57:
			return 4;
		
		case 58:
			return 5;
		
		default:
	}
	return 0;
}

void func_634(int iParam0, bool bParam1)//Position - 0x15AA9
{
	int iVar0;
	
	iVar0 = func_9(9484, -1);
	if (bParam1)
	{
		MISC::SET_BIT(&iVar0, iParam0);
		MISC::SET_BIT(&(Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_45), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, iParam0);
		MISC::CLEAR_BIT(&(Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_45), iParam0);
	}
	func_5(9484, iVar0, -1, 1);
}

int func_635(int iParam0)//Position - 0x15B06
{
	switch (iParam0)
	{
		case 99:
			return 0;
		
		case 100:
			return 4;
		
		case 101:
			return 1;
		
		case 102:
			return 2;
		
		case 103:
			return 3;
		
		case 104:
			return 5;
		
		default:
	}
	return 6;
}

void func_636(var uParam0, int iParam1, int iParam2)//Position - 0x15B52
{
	switch (iParam1)
	{
		case 99:
			*uParam0 = iParam2;
			break;
		
		case 100:
			uParam0->f_1 = iParam2;
			break;
		
		case 101:
			uParam0->f_2 = iParam2;
			break;
		
		case 102:
			uParam0->f_3 = iParam2;
			break;
		
		case 103:
			uParam0->f_4 = iParam2;
			break;
		
		case 104:
			uParam0->f_5 = iParam2;
			break;
	}
}

int func_637(int iParam0)//Position - 0x15BBA
{
	switch (iParam0)
	{
		case 99:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE");
		
		case 100:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON");
		
		case 101:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER");
		
		case 102:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT");
		
		case 103:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE");
		
		case 104:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH");
		
		default:
	}
	return joaat("SERVICE_INVALID");
}

int func_638(int iParam0)//Position - 0x15C22
{
	switch (iParam0)
	{
		case 99:
			return Global_262145.f_30200 /* Tunable: H4_SUPPORTCREW_AIRSTRIKE_COST */;
		
		case 100:
			return Global_262145.f_30201 /* Tunable: H4_SUPPORTCREW_HEAVY_WEAPON_COST */;
		
		case 101:
			return Global_262145.f_30202 /* Tunable: H4_SUPPORTCREW_SNIPER_COST */;
		
		case 102:
			return Global_262145.f_30203 /* Tunable: H4_SUPPORTCREW_AIR_SUPPORT_COST */;
		
		case 103:
			return Global_262145.f_30204 /* Tunable: H4_SUPPORTCREW_DRONE_COST */;
		
		case 104:
			return Global_262145.f_30205 /* Tunable: H4_SUPPORTCREW_WEAPON_STASH_COST */;
		
		default:
	}
	return 0;
}

void func_639(var uParam0, int iParam1)//Position - 0x15C92
{
	if (uParam0->f_1092 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (Local_1446.f_59.f_6 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Local_1446.f_59.f_6);
		if (!StackVal)
		{
			return;
		}
	}
	if (!BitTest(Local_1548[(iParam1 / 32)], (iParam1 % 32)))
	{
	}
	MISC::SET_BIT(&(Local_1548[(iParam1 / 32)]), (iParam1 % 32));
}

void func_640(var uParam0)//Position - 0x15CEC
{
	int iVar0;
	
	iVar0 = func_431(uParam0, PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (uParam0->f_831.f_67[iVar0] == 0)
		{
			uParam0->f_831.f_67[iVar0] = 1;
		}
		else
		{
			uParam0->f_831.f_67[iVar0] = 0;
		}
		func_641(uParam0->f_716, 1, func_642(uParam0));
		iLocal_1434 = 1;
	}
}

void func_641(int iParam0, bool bParam1, char* sParam2)//Position - 0x15D47
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_LAUNCH_BUTTON");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	func_451(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_642(var uParam0)//Position - 0x15D6A
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (uParam0->f_1092 == PLAYER::PLAYER_ID())
		{
			return "H4_FINALE_CONT" /* GXT: CONTINUE */;
		}
		else if (func_431(uParam0, PLAYER::PLAYER_ID()) != -1)
		{
			if (uParam0->f_831.f_67[func_431(uParam0, PLAYER::PLAYER_ID())] == 0)
			{
				return "H4_FINALE_RDY" /* GXT: READY */;
			}
			else
			{
				return "H4_FINALE_NRDY" /* GXT: UNREADY */;
			}
		}
	}
	return "CH_FINALE_LBS" /* GXT: START */;
}

void func_643(var uParam0)//Position - 0x15DC9
{
	MISC::SET_BIT(&(uParam0->f_1093), 8);
	uParam0->f_732.f_5 = 0;
	iLocal_1435 = 6;
	iLocal_1421 = 1;
	uParam0->f_707 = 0;
	func_37(uParam0, 15);
}

void func_644(var uParam0, int iParam1)//Position - 0x15DFA
{
	int iVar0;
	
	iVar0 = func_635(iParam1);
	if (iVar0 == 6)
	{
		return;
	}
	if (func_435(PLAYER::PLAYER_ID(), iVar0))
	{
		return;
	}
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_638(iParam1), false, true, false, -1, 0))
	{
		return;
	}
	func_645(uParam0->f_716, func_649(iParam1), func_648(iParam1), func_647(), func_646());
	uParam0->f_710 = 1;
	iLocal_1439 = iParam1;
}

void func_645(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x15E61
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SHOW_OVERLAY");
	func_451(sParam1);
	func_451(sParam2);
	func_451(sParam3);
	func_451(sParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_646()//Position - 0x15E90
{
	return "H4P_OVERLAY_CAN" /* GXT: CANCEL */;
}

char* func_647()//Position - 0x15E9C
{
	return "H4P_OVERLAY_CON" /* GXT: CONFIRM */;
}

char* func_648(int iParam0)//Position - 0x15EA8
{
	switch (iParam0)
	{
		case 99:
			return "H4P_OVR_SC1_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase an Airstrike?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $12,000~n~&lt;\ */;
		
		case 100:
			return "H4P_OVR_SC2_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase the Supply Drop?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $15,000~n~&lt;\ */;
		
		case 101:
			return "H4P_OVR_SC3_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase the Sniper?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $25,000~n~&lt;\ */;
		
		case 102:
			return "H4P_OVR_SC4_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase Helicopter Backup?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $30,000~n~&lt;\ */;
		
		case 103:
			return "H4P_OVR_SC5_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase the Recon Drone?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $25,000~n~&lt;\ */;
		
		case 104:
			return "H4P_OVR_SC6_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase the Weapon Stash?~n~~n~Please note: This can only be used with the Velum approach vehicle.~n~~n~Cost: $10,000~n~&lt;\ */;
		
		default:
	}
	return "";
}

char* func_649(int iParam0)//Position - 0x15F09
{
	switch (iParam0)
	{
		case 99:
			return "H4P_OVR_SC1_T" /* GXT: SUPPORT CREW */;
		
		case 100:
			return "H4P_OVR_SC2_T" /* GXT: SUPPORT CREW */;
		
		case 101:
			return "H4P_OVR_SC3_T" /* GXT: SUPPORT CREW */;
		
		case 102:
			return "H4P_OVR_SC4_T" /* GXT: SUPPORT CREW */;
		
		case 103:
			return "H4P_OVR_SC5_T" /* GXT: SUPPORT CREW */;
		
		case 104:
			return "H4P_OVR_SC6_T" /* GXT: SUPPORT CREW */;
		
		default:
	}
	return "";
}

void func_650(var uParam0, int iParam1)//Position - 0x15F6A
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_44)
	{
		Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_44 = 0;
		func_596(uParam0->f_716, iParam1, 0);
	}
	else
	{
		Global_1972721[PLAYER::PLAYER_ID() /*53*/].f_5.f_44 = 1;
		func_596(uParam0->f_716, iParam1, 1);
	}
}

void func_651(var uParam0)//Position - 0x15FC7
{
	if (func_434(uParam0->f_1092))
	{
		return;
	}
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_30206 /* Tunable: H4_SUPPRESSORS_COST */, false, true, false, -1, 0))
	{
		return;
	}
	func_645(uParam0->f_716, "H4P_OVR_SUP_T" /* GXT: SUPPRESSORS */, "H4P_OVR_SUP_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase suppressors for $5000? You will be given the option to use them when setting up the finale.~n~&lt;\ */, func_652(), func_646());
	uParam0->f_710 = 1;
	iLocal_1439 = 59;
}

char* func_652()//Position - 0x16019
{
	return "H4P_OVERLAY_ACC" /* GXT: ACCEPT */;
}

void func_653(var uParam0, int iParam1)//Position - 0x16025
{
	if (func_397(uParam0->f_1092) == 0)
	{
		func_645(uParam0->f_716, func_655(iParam1), func_654(iParam1), func_652(), func_646());
		uParam0->f_710 = 1;
		iLocal_1439 = iParam1;
	}
	else if (!func_20(uParam0->f_1092, 13))
	{
		func_656(uParam0, iParam1);
	}
}

char* func_654(int iParam0)//Position - 0x1607C
{
	switch (iParam0)
	{
		case 54:
			return "H4P_OVR_WL1_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Aggressor::~n~- Assault Shotgun~n~- Machine Pistol~n~- Grenades~n~- Machete~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		
		case 55:
			return "H4P_OVR_WL2_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Conspirator::~n~- Military Rifle~n~- Pistol .50~n~- Sticky Bombs~n~- Knuckle Duster~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		
		case 56:
			return "H4P_OVR_WL3_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Crack Shot::~n~- Sniper Rifle~n~- AP Pistol~n~- Molotov Cocktails~n~- Knife~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		
		case 57:
			return "H4P_OVR_WL4_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Saboteur::~n~- SMG Mk II~n~- SNS Pistol Mk II~n~- Pipe Bombs~n~- Knife~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		
		case 58:
			return "H4P_OVR_WL5_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Marksman::~n~- Assault Rifle Mk II~n~- Pistol Mk II~n~- Pipe Bombs~n~- Machete~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		
		default:
	}
	return "";
}

char* func_655(int iParam0)//Position - 0x160D0
{
	switch (iParam0)
	{
		case 54:
			return "H4P_OVR_WL1_T" /* GXT: AGGRESSOR */;
		
		case 55:
			return "H4P_OVR_WL2_T" /* GXT: CONSPIRATOR */;
		
		case 56:
			return "H4P_OVR_WL3_T" /* GXT: CRACK SHOT */;
		
		case 57:
			return "H4P_OVR_WL4_T" /* GXT: SABOTEUR */;
		
		case 58:
			return "H4P_OVR_WL5_T" /* GXT: MARKSMAN */;
		
		default:
	}
	return "";
}

void func_656(var uParam0, int iParam1)//Position - 0x16124
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_839(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_19(uParam0, iVar0))
	{
		return;
	}
	if (func_838(iLocal_1445, 0))
	{
		return;
	}
	iVar1 = func_675(PLAYER::PLAYER_ID(), 256, 0);
	if (iVar1 != -1)
	{
		func_672(uParam0, iParam1, iVar1);
		return;
	}
	func_657(iVar0);
	Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_23 = 1;
	Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_24 = 0;
	iLocal_1435 = 5;
	func_37(uParam0, 15);
}

void func_657(int iParam0)//Position - 0x161A9
{
	func_658(-1, iParam0);
}

void func_658(int iParam0, var uParam1)//Position - 0x161B8
{
	if (!func_112())
	{
		return;
	}
	if (!func_671(-1))
	{
		return;
	}
	if (iParam0 != -1)
	{
		func_670(iParam0);
	}
	func_669(uParam1);
	func_659(256, -1);
}

void func_659(int iParam0, int iParam1)//Position - 0x161F1
{
	if ((func_112() || !func_668(1)) || func_667(iParam0) == 3)
	{
		if (!func_666(PLAYER::PLAYER_ID(), 0) && !func_666(PLAYER::PLAYER_ID(), 3))
		{
			func_665(iParam0);
			func_660(iParam0, func_664(1, 1), func_663(), func_662(), func_661(), iParam1);
		}
	}
}

void func_660(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x16259
{
	struct<8> Var0;
	
	Var0.f_0 = 1613825825;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam0;
	Var0.f_4 = uParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = uParam4;
	Var0.f_7 = uParam5;
	if (!iParam1 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 8, iParam1, Var0.f_0);
	}
}

var func_661()//Position - 0x162A6
{
	return Global_2738587.f_5234.f_348;
}

var func_662()//Position - 0x162B8
{
	return Global_2738587.f_5234.f_347;
}

var func_663()//Position - 0x162CA
{
	return Global_2738587.f_5234.f_346;
}

int func_664(int iParam0, bool bParam1)//Position - 0x162DC
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_78(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_79(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_665(int iParam0)//Position - 0x16341
{
	Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_32 = iParam0;
}

int func_666(int iParam0, int iParam1)//Position - 0x1635A
{
	if (func_126(iParam0, 0))
	{
		return func_667(Global_1886967[iParam0 /*609*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_667(int iParam0)//Position - 0x16384
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
		case 312:
		case 313:
		case 315:
		case 316:
		case 317:
		case 322:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
			return 0;
		
		case 276:
		case 267:
		case 318:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_668(bool bParam0)//Position - 0x16650
{
	return func_240(PLAYER::PLAYER_ID(), bParam0);
}

void func_669(var uParam0)//Position - 0x16662
{
	Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_309 = uParam0;
}

void func_670(int iParam0)//Position - 0x1667C
{
	if (Global_2738587.f_5234.f_346 != iParam0)
	{
		Global_2738587.f_5234.f_346 = iParam0;
	}
}

bool func_671(int iParam0)//Position - 0x1669F
{
	return func_9(9517, iParam0) != 0;
}

void func_672(var uParam0, int iParam1, int iParam2)//Position - 0x166B2
{
	switch (iParam2)
	{
		case 15:
			if (func_15(iLocal_1445))
			{
				func_11("GENERAL_MLF_G1" /* GXT: Can't launch this mission whilst one of your Club Members is currently under the effect of Peyote. */, -1);
			}
			else if (func_674(iLocal_1445))
			{
				func_11("GENERAL_MLF_G2" /* GXT: Can't launch this mission whilst one of your Associates is currently under the effect of Peyote. */, -1);
			}
			else
			{
				func_11("GENERAL_MLF_G3" /* GXT: Can't launch this mission whilst one of your Bodyguards is currently under the effect of Peyote. */, -1);
			}
			break;
		
		case 16:
			if (func_15(iLocal_1445))
			{
				func_11("GENERAL_MLF_G4" /* GXT: Can't launch this mission whilst one of your Club Members is playing a casino game. */, -1);
			}
			else if (func_674(iLocal_1445))
			{
				func_11("GENERAL_MLF_G5" /* GXT: Can't launch this mission whilst one of your Associates is playing a casino game. */, -1);
			}
			else
			{
				func_11("GENERAL_MLF_G6" /* GXT: Can't launch this mission whilst one of your Bodyguards is playing a casino game. */, -1);
			}
			break;
		
		default:
			if (func_673(func_839(uParam0, iParam1)))
			{
				func_11("CSH_LAUNCHF_0" /* GXT: The mission you have selected is currently unavailable. The maximum number of missions with this Heist Prep Equipment have already been sourced in session. Please wait or look for rival Heist crews transporting Heist Prep Equipment ~BLIP_NHP_BAG~ to steal from. */, -1);
			}
			else
			{
				func_11("CSH_LAUNCHF_1" /* GXT: The mission you have selected is currently unavailable. The maximum number of missions with this Heist Prep Equipment have already been sourced in session. Please try again soon. */, -1);
			}
			break;
	}
}

int func_673(int iParam0)//Position - 0x16764
{
	switch (iParam0)
	{
		case 10:
		case 7:
		case 8:
		case 9:
		case 13:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_674(int iParam0)//Position - 0x1679C
{
	if (!func_18(iParam0))
	{
		return 0;
	}
	return BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 26);
}

int func_675(int iParam0, int iParam1, bool bParam2)//Position - 0x167C3
{
	int iVar0;
	int iVar1;
	
	if (!func_707(func_810(iParam1, -1, -1, -1), func_767(iParam1, -1, 1, -1, -1, iParam0), func_716(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_15(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_705(iParam1) >= func_704(iVar0))
	{
		return 5;
	}
	if (func_703(iParam0))
	{
		return 6;
	}
	if (func_702(iParam0))
	{
		return 14;
	}
	if (func_701(iParam0) && !func_700(iParam0))
	{
		return 17;
	}
	iVar1 = func_695(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_667(iParam1) == 1)
	{
		if ((func_694() || func_693()) || ((!bParam2 && func_692() != 0) && func_667(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_667(iParam1) == 2)
	{
		if (!func_689(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1886967[iParam0 /*609*/].f_10.f_34 != func_17())
			{
				return 9;
			}
		}
		if (func_688(iParam0))
		{
			return 10;
		}
	}
	else if (func_686(iParam1))
	{
		if (func_24(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_685(iParam1))
	{
		if (func_684())
		{
			return 13;
		}
		if (func_681())
		{
			return 12;
		}
	}
	if (func_24(iParam0) + 1 < func_680(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_677(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_676(iParam0, 21) || func_676(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

var func_676(int iParam0, int iParam1)//Position - 0x169B2
{
	return BitTest(Global_2657921[iParam0 /*463*/].f_218, iParam1);
}

int func_677(int iParam0, int iParam1)//Position - 0x169C8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (!func_678(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_128(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_678(int iParam0, int iParam1, bool bParam2)//Position - 0x16A1A
{
	if (func_18(iParam1))
	{
		if (!bParam2)
		{
			if (func_679(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1886967[iParam0 /*609*/].f_10 != func_17())
		{
			return iParam1 == Global_1886967[iParam0 /*609*/].f_10;
		}
	}
	return 0;
}

int func_679(int iParam0, int iParam1)//Position - 0x16A64
{
	if (iParam1 != func_17())
	{
		if (iParam0 != func_17())
		{
			if (Global_1886967[iParam0 /*609*/].f_10 != func_17())
			{
				if (Global_1886967[iParam0 /*609*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_680(int iParam0)//Position - 0x16AA9
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18843 /* Tunable: BIKER_GUNRUNNING_MIN_PLAYERS */;
		
		case 183:
			return Global_262145.f_18851 /* Tunable: BIKER_POW_MIN_PLAYERS */;
		
		case 185:
			return Global_262145.f_18860 /* Tunable: BIKER_GUNS_FOR_HIRE_MIN_PLAYERS */;
		
		case 182:
			return Global_262145.f_18871 /* Tunable: BIKER_BY_THE_POUND_MIN_PLAYERS */;
		
		case 186:
			return Global_262145.f_18880 /* Tunable: BIKER_WEAPON_OF_CHOICE_MIN_PLAYERS */;
		
		case 195:
			return Global_262145.f_18898 /* Tunable: BIKER_NINE_TENTHS_MIN_PLAYERS */;
		
		case 198:
			return Global_262145.f_18908 /* Tunable: BIKER_CRACKED_MIN_PLAYERS */;
		
		case 197:
			return Global_262145.f_18920 /* Tunable: BIKER_JAILBREAK_MIN_PLAYERS */;
		
		case 207:
			return Global_262145.f_18928 /* Tunable: BIKER_FRAGILE_GOODS_MIN_PLAYERS */;
		
		case 209:
			return Global_262145.f_18941 /* Tunable: BIKER_OUTRIDER_MIN_PLAYERS */;
		
		case 208:
			return Global_262145.f_18949 /* Tunable: BIKER_TORCHED_MIN_PLAYERS */;
		
		case 201:
			return Global_262145.f_18982 /* Tunable: BIKER_STAND_YOUR_GROUND_MIN_PLAYERS */;
		
		case 211:
			return Global_262145.f_19050 /* Tunable: BIKER_ON_THE_RUN_MIN_PLAYERS */;
		
		case 193:
			return Global_262145.f_19073 /* Tunable: BIKER_HIT_AND_RIDE_MIN_PLAYERS */;
		
		case 205:
			return Global_262145.f_19091 /* Tunable: BIKER_MISCHIEF_MIN_PLAYERS */;
		
		case 189:
			return Global_262145.f_19056 /* Tunable: BIKER_RACE_MIN_PLAYERS */;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_681()//Position - 0x16BCD
{
	if (Global_1942642)
	{
		return 0;
	}
	return func_682();
}

int func_682()//Position - 0x16BE4
{
	if (func_683())
	{
		return 1;
	}
	return Global_2684312.f_744;
}

bool func_683()//Position - 0x16BFE
{
	return Global_1575033 == 10;
}

bool func_684()//Position - 0x16C0D
{
	return Global_262145.f_15882 /* Tunable: EXEC_CONTRABAND_DISABLE */;
}

int func_685(int iParam0)//Position - 0x16C1C
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_686(int iParam0)//Position - 0x16C42
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_687(iParam0, 0);
	return 0;
}

int func_687(int iParam0, int iParam1)//Position - 0x16C9C
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_688(int iParam0)//Position - 0x16CF1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if ((Global_1886967[iParam0 /*609*/].f_10.f_34 != func_17() && Global_1886967[iParam0 /*609*/].f_10.f_34 == iVar1) && Global_1886967[iVar1 /*609*/].f_10.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_689(int iParam0)//Position - 0x16D61
{
	switch (iParam0)
	{
		case 179:
			if (func_691() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_690() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_690() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_690()//Position - 0x16DAA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_108(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_691()//Position - 0x16DE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_15(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_692()//Position - 0x16E24
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_103;
}

bool func_693()//Position - 0x16E3B
{
	return Global_1916087.f_11.f_144 != -1;
}

bool func_694()//Position - 0x16E4D
{
	return Global_1916087.f_11.f_143 != -1;
}

int func_695(int iParam0)//Position - 0x16E5F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_697())
	{
		iVar1 = Global_1886967[iParam0 /*609*/].f_10.f_11[iVar0];
		if (iVar1 != func_17())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (func_703(iVar1))
				{
					return 7;
				}
				if (func_702(iVar1))
				{
					return 15;
				}
				if (func_696(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_696(int iParam0)//Position - 0x16ECB
{
	if (iParam0 == func_17())
	{
		return 0;
	}
	if (((((BitTest(Global_2657921[iParam0 /*463*/].f_321.f_4, 2) || BitTest(Global_2657921[iParam0 /*463*/].f_321.f_4, 3)) || BitTest(Global_2657921[iParam0 /*463*/].f_321.f_4, 5)) || BitTest(Global_2657921[iParam0 /*463*/].f_321.f_4, 6)) || BitTest(Global_2657921[iParam0 /*463*/].f_321.f_4, 7)) || BitTest(Global_1845263[iParam0 /*877*/].f_267.f_407.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_697()//Position - 0x16F69
{
	return (func_698() - 1);
}

int func_698()//Position - 0x16F77
{
	return func_699(PLAYER::PLAYER_ID());
}

int func_699(int iParam0)//Position - 0x16F87
{
	int iVar0;
	
	iVar0 = Global_1886967[iParam0 /*609*/].f_10;
	if (iVar0 != func_17() && Global_1886967[iVar0 /*609*/].f_10.f_429 == 1)
	{
		return 8;
	}
	return 4;
}

int func_700(int iParam0)//Position - 0x16FC1
{
	if (iParam0 != func_17())
	{
		if (func_78(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657921[iParam0 /*463*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_701(int iParam0)//Position - 0x17008
{
	if (iParam0 != func_17())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_5, 4);
	}
	return 0;
}

int func_702(int iParam0)//Position - 0x1702D
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

int func_703(int iParam0)//Position - 0x17099
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1886967[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

int func_704(int iParam0)//Position - 0x170BC
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_13241 /* Tunable: GB_POINTTOPOINT_INSTANCES_PERMITTED */;
		
		case 155:
			return Global_262145.f_13266 /* Tunable: GB_PROTECTIONRACKET_INSTANCES_PERMITTED */;
		
		case 153:
			return Global_262145.f_13230 /* Tunable: GB_MOSTWANTED_INSTANCES_PERMITTED */;
		
		case 163:
			return Global_262145.f_13206 /* Tunable: GB_CARJACKING_INSTANCES_PERMITTED */;
		
		case 160:
			return Global_262145.f_13219 /* Tunable: GB_FINDERS_KEEPERS_INSTANCES_PERMITTED */;
		
		case 154:
			return Global_262145.f_13276 /* Tunable: GB_SMASHANDGRAB_INSTANCES_PERMITTED */;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15709 /* Tunable: EXEC_CASHING_INSTANCES_PERMITTED */;
		
		case 172:
			return Global_262145.f_15728 /* Tunable: EXEC_SALVAGE_INSTANCES_PERMITTED */;
		
		case 148:
			return Global_262145.f_18957 /* Tunable: BIKER_DEATHMATCH_MAX_INSTANCES */;
		
		case 179:
			return Global_262145.f_18965 /* Tunable: BIKER_JOUST_MAX_INSTANCES */;
		
		case 201:
			return Global_262145.f_18979 /* Tunable: BIKER_STAND_YOUR_GROUND_MAX_INSTANCES */;
		
		case 200:
			return Global_262145.f_19019 /* Tunable: BIKER_CAGED_IN_MAX_INSTANCES */;
		
		case 211:
			return Global_262145.f_19048 /* Tunable: BIKER_ON_THE_RUN_MAX_INSTANCES */;
		
		case 194:
			return Global_262145.f_19060 /* Tunable: BIKER_RIPPIN_MAX_INSTANCES */;
		
		case 193:
			return Global_262145.f_19071 /* Tunable: BIKER_HIT_AND_RIDE_MAX_INSTANCES */;
		
		case 210:
			return Global_262145.f_19083 /* Tunable: BIKER_WHEELIE_MAX_INSTANCES */;
		
		case 205:
			return Global_262145.f_19089 /* Tunable: BIKER_MISCHIEF_MAX_INSTANCES */;
		
		case 199:
			return Global_262145.f_19102 /* Tunable: BIKER_SEARCH_AND_DESTROY_MAX_INSTANCES */;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_705(int iParam0)//Position - 0x1720E
{
	return Global_1916087.f_11.f_147[func_706(iParam0)];
}

int func_706(int iParam0)//Position - 0x17226
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 182:
			return 24;
		
		case 183:
			return 25;
		
		case 185:
			return 26;
		
		case 186:
			return 27;
		
		case 189:
			return 28;
		
		case 190:
			return 29;
		
		case 191:
			return 30;
		
		case 192:
			return 31;
		
		case 193:
			return 32;
		
		case 194:
			return 33;
		
		case 195:
			return 34;
		
		case 197:
			return 35;
		
		case 198:
			return 36;
		
		case 199:
			return 37;
		
		case 200:
			return 38;
		
		case 201:
			return 39;
		
		case 205:
			return 40;
		
		case 207:
			return 41;
		
		case 208:
			return 42;
		
		case 209:
			return 43;
		
		case 210:
			return 44;
		
		case 214:
			return 45;
		
		case 215:
			return 46;
		
		case 216:
			return 47;
		
		case 217:
			return 48;
		
		case 218:
			return 49;
		
		case 219:
			return 50;
		
		case 220:
			return 51;
		
		case 221:
			return 52;
		
		case 188:
			return 53;
		
		case 225:
			return 54;
		
		case 226:
			return 55;
		
		case 227:
			return 56;
		
		case 229:
			return 57;
		
		case 230:
			return 58;
		
		case 233:
			return 59;
		
		case 237:
			return 60;
		
		case 238:
			return 61;
		
		case 239:
			return 62;
		
		case 240:
			return 63;
		
		case 241:
			return 64;
		
		case 242:
			return 65;
		
		case 244:
			return 66;
		
		case 248:
			return 67;
		
		case 249:
			return 68;
		
		case 250:
			return 69;
		
		case 243:
			return 70;
		
		case 158:
			return 71;
		
		case 256:
			return 72;
		
		case 258:
			return 73;
		
		case 271:
			return 74;
		
		case 276:
			return 75;
		
		case 277:
			return 76;
		
		case 262:
			return 79;
		
		case 263:
			return 78;
		
		case 264:
			return 77;
		
		case 267:
			return 80;
		
		case 291:
			return 81;
		
		case 292:
			return 82;
		
		case 293:
			return 83;
		
		case 294:
			return 84;
		
		case 295:
			return 85;
		
		case 296:
			return 86;
		
		case 297:
			return 87;
		
		case 298:
			return 88;
		
		case 299:
			return 89;
		
		case 300:
			return 90;
		
		case 301:
			return 91;
		
		case 304:
			return 92;
		
		case 305:
			return 93;
		
		case 306:
			return 94;
		
		case 307:
			return 95;
		
		case 308:
			return 96;
		
		case 309:
			return 97;
		
		case 312:
			return 98;
		
		case 313:
			return 99;
		
		case 315:
			return 100;
		
		case 316:
			return 101;
		
		case 317:
			return 102;
		
		case 318:
			return 103;
		
		case 322:
			return 104;
		
		case 323:
			return 105;
		
		case 324:
			return 106;
		
		case 325:
			return 107;
		
		case 326:
			return 108;
		
		case 327:
			return 109;
		
		case 328:
			return 110;
		
		case 329:
			return 111;
		
		case 330:
			return 112;
		
		case 331:
			return 113;
		
		case 332:
			return 114;
		
		case 333:
			return 115;
		
		default:
	}
	return -1;
}

int func_707(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1772A
{
	if ((func_715(iParam0, bParam3, bParam4) || func_714(iParam1, bParam3, bParam4)) || func_708(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_708(int iParam0, bool bParam1, bool bParam2)//Position - 0x17764
{
	return func_709(2, iParam0, 0, bParam1, bParam2);
}

int func_709(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x17778
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681028, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_713(iParam0) - func_712(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_712(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_713(iParam0) - func_711(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_712(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_713(iParam0) - func_712(iParam0, 1));
		}
		if (!bParam4 && Global_1845263[PLAYER::PLAYER_ID() /*877*/] != 3)
		{
			iVar1 = (iVar1 - func_710(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_710(int iParam0)//Position - 0x1783E
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

int func_711(int iParam0)//Position - 0x17878
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

int func_712(int iParam0, bool bParam1)//Position - 0x178BE
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

int func_713(int iParam0)//Position - 0x1795B
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

int func_714(int iParam0, bool bParam1, bool bParam2)//Position - 0x1799B
{
	return func_709(1, iParam0, 0, bParam1, bParam2);
}

int func_715(int iParam0, bool bParam1, bool bParam2)//Position - 0x179AF
{
	return func_709(0, iParam0, 0, bParam1, bParam2);
}

int func_716(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x179C3
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_766(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_764(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_758(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_746(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 233:
			return func_739(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_732(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_729(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_728(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_724(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 158:
			return func_720(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 181:
			return func_717(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_717(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17C96
{
	int iVar0;
	
	iVar0 = func_719(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_718(iParam0, iParam2));
	return iVar0;
}

int func_718(int iParam0, var uParam1)//Position - 0x17CB9
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_719(int iParam0, var uParam1, var uParam2)//Position - 0x17CD3
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_720(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17CED
{
	int iVar0;
	
	iVar0 = func_723(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_721(iParam0, iParam2));
	return iVar0;
}

int func_721(int iParam0, int iParam1)//Position - 0x17D10
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_240(iParam1, 1))
			{
				Var0 = { func_722(iParam1) };
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

Vector3 func_722(int iParam0)//Position - 0x17E77
{
	return Global_1886967[iParam0 /*609*/].f_10.f_306;
}

int func_723(int iParam0, int iParam1, var uParam2)//Position - 0x17E8F
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_724(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x18104
{
	int iVar0;
	
	iVar0 = func_727(iParam0, iParam1, iParam3);
	if (!func_726(iParam0))
	{
		iVar0 = (iVar0 + func_725(iParam0, iParam2));
	}
	return iVar0;
}

int func_725(int iParam0, int iParam1)//Position - 0x18131
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_24(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_726(int iParam0)//Position - 0x18183
{
	return 0;
}

int func_727(int iParam0, int iParam1, int iParam2)//Position - 0x1818C
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_728(int iParam0)//Position - 0x1833B
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_729(int iParam0, int iParam1, int iParam2)//Position - 0x18387
{
	int iVar0;
	
	iVar0 = func_731(iParam0, iParam1);
	if (func_730(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_730(int iParam0)//Position - 0x183AB
{
	return 1;
}

int func_731(int iParam0, int iParam1)//Position - 0x183B4
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_732(int iParam0, int iParam1)//Position - 0x18503
{
	int iVar0;
	
	iVar0 = func_738(iParam0, iParam1);
	if (!func_737(iParam0))
	{
		iVar0 = (iVar0 + func_733(iParam0, func_23() + 1));
	}
	if (iParam0 == 14 || ((((func_737(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_733(iParam0, func_23() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_733(int iParam0, int iParam1)//Position - 0x18597
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_736(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_735(iParam0, iParam1);
			iVar2 = func_734(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_737(iParam0))
		{
			if (iVar0 > Global_262145.f_18594 /* Tunable: BIKER_RESUPPLY_MAX_VEHICLES */)
			{
				iVar0 = Global_262145.f_18594 /* Tunable: BIKER_RESUPPLY_MAX_VEHICLES */;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18593 /* Tunable: BIKER_RESUPPLY_MIN_PACKAGES */)
			{
				iVar0 = Global_262145.f_18593 /* Tunable: BIKER_RESUPPLY_MIN_PACKAGES */;
			}
			if (iVar0 > Global_262145.f_18592 /* Tunable: BIKER_RESUPPLY_MAX_PACKAGES */)
			{
				iVar0 = Global_262145.f_18592 /* Tunable: BIKER_RESUPPLY_MAX_PACKAGES */;
			}
		}
	}
	return iVar0;
}

int func_734(int iParam0)//Position - 0x18630
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18631 /* Tunable: BIKER_RESUPPLY_MEET_CONTACT_MIN_PACKAGES */;
		
		case 10:
			return Global_262145.f_18656 /* Tunable: BIKER_RESUPPLY_BANK_MIN_PACKAGES */;
		
		default:
	}
	return 1;
}

int func_735(int iParam0, int iParam1)//Position - 0x18660
{
	if (func_737(iParam0))
	{
		if (iParam1 >= Global_262145.f_18595 /* Tunable: BIKER_RESUPPLY_SECOND_VEHICLE_THRESHOLD */)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18632 /* Tunable: BIKER_RESUPPLY_MEET_CONTACT_MAX_PACKAGES */;
		
		case 10:
			return Global_262145.f_18657 /* Tunable: BIKER_RESUPPLY_BANK_MAX_PACKAGES */;
		
		default:
	}
	return 8;
}

int func_736(int iParam0)//Position - 0x186AE
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_737(int iParam0)//Position - 0x186E0
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_738(int iParam0, int iParam1)//Position - 0x18736
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_739(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x189C8
{
	int iVar0;
	
	iVar0 = func_745(iParam0, iParam1, iParam2, iParam4);
	if (!func_744(iParam0))
	{
		if (iParam3 != func_17())
		{
			iVar0 = (iVar0 + func_741(iParam0, func_24(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_740(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_740(int iParam0)//Position - 0x18A1B
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_741(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18A41
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_744(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_743(iParam0))
	{
		iVar0 = func_743(iParam0);
	}
	else if (iVar0 < func_742(iParam0))
	{
		iVar0 = func_742(iParam0);
	}
	return iVar0;
}

int func_742(int iParam0)//Position - 0x18ADD
{
	return 1;
}

int func_743(int iParam0)//Position - 0x18AE6
{
	return 4;
}

int func_744(int iParam0)//Position - 0x18AEF
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_745(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x18B2D
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_746(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18BE8
{
	int iVar0;
	
	iVar0 = func_757(iParam0, iParam1, iParam2, iParam4);
	if (!func_756(iParam0))
	{
		if (iParam3 != func_17())
		{
			iVar0 = (iVar0 + func_748(iParam0, func_24(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_747(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_747(int iParam0)//Position - 0x18C3B
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_748(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18C55
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_755(iParam0))
	{
		iVar1 = func_754(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_753(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_752(iParam2))
		{
			iVar0 = func_752(iParam2);
		}
	}
	if (iVar0 > func_750(iParam0))
	{
		iVar0 = func_750(iParam0);
	}
	else if (iVar0 < func_749(iParam0))
	{
		iVar0 = func_749(iParam0);
	}
	return iVar0;
}

int func_749(int iParam0)//Position - 0x18DD3
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_750(int iParam0)//Position - 0x18DED
{
	if (!func_755(iParam0))
	{
		if (func_756(iParam0))
		{
			if (func_751(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_751(int iParam0)//Position - 0x18E47
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_752(int iParam0)//Position - 0x18E61
{
	if (iParam0 == func_17() || Global_1845263[iParam0 /*877*/].f_267.f_295 == 0)
	{
		return 50;
	}
	return (50 - Global_1845263[iParam0 /*877*/].f_267.f_295.f_3);
}

int func_753(int iParam0)//Position - 0x18EA3
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_754(int iParam0)//Position - 0x18EBD
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_755(int iParam0)//Position - 0x18EDF
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_756(int iParam0)//Position - 0x18F35
{
	if (func_755(iParam0) || func_753(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_757(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x18F57
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_758(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x19089
{
	int iVar0;
	
	iVar0 = func_763(iParam0, iParam1, iParam2, iParam3);
	if (!func_762(iParam0))
	{
		iVar0 = (iVar0 + func_760(iParam0, func_23() + 1, -1, iParam2));
	}
	if (func_759(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_759(int iParam0)//Position - 0x190CF
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_760(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x19113
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_761(iParam0))
	{
		if (iParam2 <= Global_262145.f_21893 /* Tunable: -1542918426 */)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21894 /* Tunable: -2015624215 */)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_762(iParam0))
	{
		if (iParam1 < Global_262145.f_21853 /* Tunable: 642214211 */)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_761(int iParam0)//Position - 0x191F0
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_762(int iParam0)//Position - 0x19228
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_763(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1928A
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_764(int iParam0, int iParam1, var uParam2)//Position - 0x195D6
{
	int iVar0;
	
	iVar0 = func_765(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_765(int iParam0, int iParam1)//Position - 0x195F7
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_766(int iParam0)//Position - 0x197B7
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

int func_767(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1988F
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_809(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_805(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_801(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_795(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
		
		case 233:
			return func_789(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_788(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_787(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_786(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_780(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_774(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_768(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_768(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x19B7E
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_773(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_772(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_771(func_24(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_770(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_769(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_769(int iParam0, int iParam1)//Position - 0x19BF4
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_770(int iParam0, int iParam1)//Position - 0x19C0E
{
	return func_769(iParam0, iParam1) > 0;
}

int func_771(var uParam0, int iParam1, int iParam2)//Position - 0x19C20
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_772(int iParam0, int iParam1)//Position - 0x19C3A
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_773(int iParam0, int iParam1)//Position - 0x19C6E
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_774(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x19C88
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_779(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_778(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_777(func_24(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_776(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_775(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_775(int iParam0, int iParam1)//Position - 0x1A013
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_776(int iParam0, int iParam1)//Position - 0x1A099
{
	return func_775(iParam0, iParam1) > 0;
}

int func_777(int iParam0, int iParam1, int iParam2)//Position - 0x1A0AB
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_17())
			{
				if (func_240(iParam2, 1))
				{
					Var0 = { func_722(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

int func_778(int iParam0, int iParam1)//Position - 0x1A143
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_779(int iParam0, int iParam1)//Position - 0x1A422
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_780(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1A43C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_726(iParam0))
		{
			iVar0 = (iVar0 + func_725(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_785(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_784(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_783(func_24(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_782(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_781(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_781(int iParam0, int iParam1)//Position - 0x1A717
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_782(int iParam0, int iParam1)//Position - 0x1A74E
{
	return func_781(iParam0, iParam1) > 0;
}

int func_783(int iParam0, int iParam1)//Position - 0x1A760
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_784(int iParam0, int iParam1)//Position - 0x1A78A
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_785(int iParam0, int iParam1)//Position - 0x1A8BC
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_786(int iParam0)//Position - 0x1A8D6
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_787(int iParam0, int iParam1, int iParam2)//Position - 0x1A922
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_730(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_788(int iParam0, int iParam1)//Position - 0x1AAC3
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case 79:
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_737(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_733(iParam0, func_23() + 1));
	}
	return iVar0;
}

int func_789(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1B0AA
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_744(iParam0))
		{
			if (iParam3 != func_17())
			{
				iVar0 = (iVar0 + func_741(iParam0, func_24(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_17())
		{
			iVar0 = (iVar0 + func_794(iParam0, func_24(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_793(0, iParam1) != -1)
		{
			if (iParam3 != func_17())
			{
				iVar0 = (iVar0 + func_792(func_24(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_791(iParam0))
		{
			iVar0 = (iVar0 + func_790(iParam0));
		}
	}
	return iVar0;
}

int func_790(int iParam0)//Position - 0x1B220
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_791(int iParam0)//Position - 0x1B264
{
	return func_790(iParam0) > 0;
}

int func_792(var uParam0, int iParam1)//Position - 0x1B274
{
	return 2;
}

int func_793(int iParam0, int iParam1)//Position - 0x1B27D
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_794(int iParam0, int iParam1)//Position - 0x1B2C5
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			uVar0 = func_9(5329, -1);
			if (BitTest(uVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_795(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1B324
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_756(iParam0))
		{
			if (iParam3 != func_17())
			{
				iVar0 = (iVar0 + func_748(iParam0, func_24(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_17())
		{
			iVar0 = (iVar0 + func_800(iParam0, func_24(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_799(0, iParam1) != -1)
		{
			if (iParam3 != func_17())
			{
				iVar0 = (iVar0 + func_798(func_24(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_797(iParam0))
		{
			iVar0 = (iVar0 + func_796(iParam0));
		}
	}
	return iVar0;
}

int func_796(int iParam0)//Position - 0x1B5EA
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_797(int iParam0)//Position - 0x1B65C
{
	return func_796(iParam0) > 0;
}

int func_798(int iParam0, int iParam1)//Position - 0x1B66C
{
	switch (iParam0)
	{
		case 1:
			if (func_751(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_751(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_751(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_751(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_751(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_751(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_751(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_751(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_799(int iParam0, int iParam1)//Position - 0x1B764
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
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
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_800(int iParam0, int iParam1)//Position - 0x1BB04
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return SYSTEM::CEIL((IntToFloat(iParam1) / 2f));
}

int func_801(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1BBFD
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_760(iParam0, func_23() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_762(iParam0))
		{
			iVar0 = (iVar0 + func_760(iParam0, func_23() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_804(iParam0, func_23() + 1));
	}
	if (!bParam3)
	{
		if (func_803(iParam0))
		{
			iVar0 = (iVar0 + func_802(iParam0));
		}
	}
	return iVar0;
}

int func_802(int iParam0)//Position - 0x1BF80
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_803(int iParam0)//Position - 0x1BFF4
{
	return func_802(iParam0) > 0;
}

int func_804(int iParam0, int iParam1)//Position - 0x1C005
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_805(int iParam0, int iParam1, int iParam2)//Position - 0x1C051
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_808(iParam0, func_23() + 1, iParam2));
	iVar0 = (iVar0 + func_806(iParam0));
	return iVar0;
}

int func_806(int iParam0)//Position - 0x1C35A
{
	if (func_807(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_807(int iParam0)//Position - 0x1C370
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_808(int iParam0, var uParam1, int iParam2)//Position - 0x1C3BA
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_809(int iParam0)//Position - 0x1C3E4
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_810(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1C4BD
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_837(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_834(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_831(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_828(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_825(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_824(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_823();
		
		case 218:
			return func_822();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_821(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_820(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_817(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_814(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_811(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_811(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1C785
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_770(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_812(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_812(int iParam0, var uParam1)//Position - 0x1C7C3
{
	if (func_770(iParam0, uParam1))
	{
		return (func_769(iParam0, uParam1) + func_813(iParam0, uParam1));
	}
	return 0;
}

int func_813(int iParam0, var uParam1)//Position - 0x1C7EB
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_814(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1C805
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_776(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_815(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_815(int iParam0, int iParam1)//Position - 0x1CB93
{
	if (func_776(iParam0, iParam1))
	{
		return (func_775(iParam0, iParam1) + func_816(iParam0, iParam1));
	}
	return 0;
}

int func_816(int iParam0, int iParam1)//Position - 0x1CBBB
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_817(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1CC49
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_782(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_818(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_818(int iParam0, int iParam1)//Position - 0x1CE6C
{
	if (func_782(iParam0, iParam1))
	{
		return (func_781(iParam0, iParam1) + func_819(iParam0, iParam1));
	}
	return 0;
}

int func_819(int iParam0, int iParam1)//Position - 0x1CE94
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_820(int iParam0, int iParam1)//Position - 0x1CECB
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_821(int iParam0, int iParam1, int iParam2)//Position - 0x1CF3C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
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
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_822()//Position - 0x1D0F5
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_823()//Position - 0x1D103
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_824(int iParam0, int iParam1)//Position - 0x1D111
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case 79:
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_733(iParam0, func_23() + 1));
	}
	return iVar0;
}

int func_825(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1D6EE
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_791(iParam0))
		{
			iVar0 = (iVar0 + func_826(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_826(int iParam0, var uParam1)//Position - 0x1D7ED
{
	if (func_791(iParam0))
	{
		return (func_790(iParam0) + func_827(iParam0, uParam1));
	}
	return 0;
}

int func_827(int iParam0, var uParam1)//Position - 0x1D811
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_828(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1D857
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_797(iParam0))
		{
			iVar0 = (iVar0 + func_829(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_829(int iParam0, int iParam1)//Position - 0x1D9D1
{
	if (func_797(iParam0))
	{
		return (func_796(iParam0) + func_830(iParam0, iParam1));
	}
	return 0;
}

int func_830(int iParam0, int iParam1)//Position - 0x1D9F5
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_831(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1DA6F
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_803(iParam0))
		{
			iVar0 = (iVar0 + func_832(iParam0));
		}
	}
	return iVar0;
}

int func_832(int iParam0)//Position - 0x1DDA4
{
	if (func_803(iParam0))
	{
		return (func_802(iParam0) + func_833(iParam0));
	}
	return 0;
}

int func_833(int iParam0)//Position - 0x1DDC6
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_834(int iParam0, int iParam1, var uParam2)//Position - 0x1DE42
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_835(iParam0));
	return iVar0;
}

int func_835(int iParam0)//Position - 0x1E10A
{
	if (func_807(iParam0))
	{
		if (func_836(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_836(int iParam0)//Position - 0x1E12D
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_837(int iParam0)//Position - 0x1E177
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

int func_838(int iParam0, int iParam1)//Position - 0x1E259
{
	if (func_18(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10.f_32 != -1 || (iParam1 && Global_1886967[iParam0 /*609*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_839(var uParam0, int iParam1)//Position - 0x1E29D
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 40:
			return 7;
		
		case 42:
			return 5;
		
		case 44:
			return 3;
		
		case 45:
			return 4;
		
		case 46:
			return 1;
		
		case 48:
			return 2;
		
		case 47:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 8;
		
		case 53:
			return 9;
		
		case 51:
			return func_405(uParam0->f_1092);
		
		case 52:
			return 12;
		
		case 54:
			return 13;
		
		case 55:
			return 13;
		
		case 56:
			return 13;
		
		case 57:
			return 13;
		
		case 58:
			return 13;
		
		case 59:
			return 13;
		
		case 60:
			return 14;
		
		case 61:
			return 15;
		
		case 62:
			return 16;
		
		default:
	}
	return -1;
}

void func_840(var uParam0)//Position - 0x1E39D
{
	func_645(uParam0->f_716, "H4P_OVR_GAT_T" /* GXT: GATHER INTEL */, func_841(uParam0), func_652(), func_646());
	uParam0->f_710 = 1;
	iLocal_1439 = 1;
}

char* func_841(var uParam0)//Position - 0x1E3CA
{
	if (func_842(uParam0->f_1092))
	{
		return "H4P_OVR_GAT_2" /* GXT: //Loading...~n~~n~Stage:[return]~n~......................................................................................................~n~&gt;/Return to Cayo Perico?~n~Data indicates all essential scoping information has been gathered. Continued exploration of the island is optional.~n~&lt;\ */;
	}
	return "H4P_OVR_GAT_M" /* GXT: //Loading...~n~~n~Stage:[return]~n~......................................................................................................~n~&gt;/Return to Cayo Perico?~n~Continue to scope for additional intel. Submit photographic evidence to Pavel to update plans.~n~&lt;\ */;
}

int func_842(int iParam0)//Position - 0x1E3E9
{
	if (((func_849(iParam0) && func_848(iParam0)) && func_847(iParam0)) && func_843(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_843(int iParam0)//Position - 0x1E420
{
	if (iParam0 != -1)
	{
		if (((((func_846(iParam0) && func_845(iParam0)) && func_844(iParam0)) && func_406(iParam0)) && func_427(iParam0)) && func_425(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_844(int iParam0)//Position - 0x1E473
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_408(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_845(int iParam0)//Position - 0x1E49E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_414(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_846(int iParam0)//Position - 0x1E4C9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_420(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_847(int iParam0)//Position - 0x1E4F4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_398(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_848(int iParam0)//Position - 0x1E51F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_402(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_849(int iParam0)//Position - 0x1E54B
{
	if (iParam0 != -1)
	{
		if ((((func_850(iParam0, 0) && func_850(iParam0, 1)) && func_850(iParam0, 2)) && func_850(iParam0, 3)) && func_850(iParam0, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_850(int iParam0, int iParam1)//Position - 0x1E598
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (Global_1972721[iParam0 /*53*/].f_5.f_10.f_1 == Global_1972721[iParam0 /*53*/].f_5.f_10.f_5 && Global_1972721[iParam0 /*53*/].f_5.f_10.f_9 == Global_1972721[iParam0 /*53*/].f_5.f_10.f_13)
				{
					return 1;
				}
				break;
			
			case 1:
				if (Global_1972721[iParam0 /*53*/].f_5.f_10.f_2 == Global_1972721[iParam0 /*53*/].f_5.f_10.f_6 && Global_1972721[iParam0 /*53*/].f_5.f_10.f_10 == Global_1972721[iParam0 /*53*/].f_5.f_10.f_14)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_1972721[iParam0 /*53*/].f_5.f_10.f_3 == Global_1972721[iParam0 /*53*/].f_5.f_10.f_7 && Global_1972721[iParam0 /*53*/].f_5.f_10.f_11 == Global_1972721[iParam0 /*53*/].f_5.f_10.f_15)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_1972721[iParam0 /*53*/].f_5.f_10.f_4 == Global_1972721[iParam0 /*53*/].f_5.f_10.f_8 && Global_1972721[iParam0 /*53*/].f_5.f_10.f_12 == Global_1972721[iParam0 /*53*/].f_5.f_10.f_16)
				{
					return 1;
				}
				break;
			
			case 4:
				if (Global_1972721[iParam0 /*53*/].f_5.f_10.f_17 == Global_1972721[iParam0 /*53*/].f_5.f_10.f_18)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_851(int iParam0)//Position - 0x1E716
{
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_1417))
	{
		*iParam0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_1417);
		return 1;
	}
	*iParam0 = -1;
	return 0;
}

void func_852(var uParam0)//Position - 0x1E73B
{
	int iVar0;
	
	if (!iLocal_1418)
	{
		return;
	}
	iVar0 = -1;
	if (func_855(&iVar0))
	{
		uParam0->f_812.f_8 = uParam0->f_812;
		uParam0->f_812 = iVar0;
		Global_1972721[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_4 = iVar0;
		uParam0->f_710 = 1;
		if (func_443(uParam0->f_812) && uParam0->f_1106)
		{
			func_854(uParam0);
			uParam0->f_1106 = 0;
		}
		func_853(uParam0, uParam0->f_812);
		iLocal_1418 = 0;
		iLocal_1422 = 0;
	}
}

void func_853(var uParam0, int iParam1)//Position - 0x1E7B5
{
	switch (iParam1)
	{
		case 36:
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_639(uParam0, 19);
			}
			break;
		
		case 63:
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_639(uParam0, 37);
			}
			break;
		
		case 1000:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_639(uParam0, 52);
			}
			else
			{
				func_639(uParam0, 50);
			}
			break;
		
		case 105:
		case 106:
		case 107:
		case 108:
			func_639(uParam0, 51);
			break;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		switch (iParam1)
		{
			case 71:
			case 72:
			case 73:
			case 74:
			case 75:
			case 76:
				func_639(uParam0, 40);
				break;
			
			case 77:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
			case 83:
			case 84:
				func_639(uParam0, 38);
				break;
			
			case 85:
			case 86:
				func_639(uParam0, 42);
				break;
			
			case 87:
			case 88:
			case 89:
			case 90:
				func_639(uParam0, 39);
				break;
			
			case 91:
			case 92:
				func_639(uParam0, 41);
				break;
			}
	}
}

void func_854(var uParam0)//Position - 0x1E905
{
	func_645(uParam0->f_716, "H4P_OVR_CRE_T" /* GXT: NEW SUPPORT CREW UNLOCKED */, "H4P_OVR_CRE_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/You have unlocked a new support crew member for hire.~n~&lt;\ */, func_647(), "");
	uParam0->f_710 = 1;
	uParam0->f_812 = 1002;
	iLocal_1439 = -4;
}

int func_855(int iParam0)//Position - 0x1E93A
{
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_1416))
	{
		*iParam0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_1416);
		return 1;
	}
	*iParam0 = -1;
	return 0;
}

void func_856(var uParam0)//Position - 0x1E95F
{
	if (iLocal_1431 && !func_878(uParam0))
	{
		iLocal_1431 = 0;
		return;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_876(uParam0);
		func_871(uParam0);
		func_868(uParam0);
	}
	func_867(uParam0);
	func_863(uParam0);
	func_861(uParam0);
	func_858(uParam0);
	func_857(uParam0);
	iLocal_1431 = 1;
}

void func_857(var uParam0)//Position - 0x1E9BB
{
	if (func_878(uParam0))
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
	}
}

void func_858(var uParam0)//Position - 0x1E9DC
{
	bool bVar0;
	int iVar1;
	
	if (uParam0->f_1092 == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (iLocal_1437 != Global_1972721[uParam0->f_1092 /*53*/].f_5.f_45)
	{
		bVar0 = false;
		while (bVar0 < 6)
		{
			if (BitTest(Global_1972721[uParam0->f_1092 /*53*/].f_5.f_45, bVar0) && !BitTest(iLocal_1437, bVar0))
			{
				MISC::SET_BIT(&iLocal_1437, bVar0);
				func_596(uParam0->f_716, func_860(bVar0), 1);
			}
			bVar0++;
		}
	}
	if (bLocal_1426 != func_434(uParam0->f_1092))
	{
		bLocal_1426 = func_434(uParam0->f_1092);
		func_630(uParam0->f_716, 59, 1);
	}
	if (bLocal_1427 != Global_1972721[uParam0->f_1092 /*53*/].f_5.f_44)
	{
		bLocal_1427 = Global_1972721[uParam0->f_1092 /*53*/].f_5.f_44;
		func_596(uParam0->f_716, 98, bLocal_1427);
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (uParam0->f_812 != Global_1972721[uParam0->f_1092 /*53*/].f_4)
	{
		uParam0->f_812 = Global_1972721[uParam0->f_1092 /*53*/].f_4;
		iVar1 = uParam0->f_812;
		if (iVar1 != 1002 && iVar1 != 1001)
		{
			func_859(uParam0->f_716, iVar1);
		}
	}
	if (iLocal_1422 != Global_1972721[uParam0->f_1092 /*53*/].f_51)
	{
		iLocal_1422 = Global_1972721[uParam0->f_1092 /*53*/].f_51;
	}
	if (bLocal_1424 != Global_1972721[uParam0->f_1092 /*53*/].f_52)
	{
		bLocal_1424 = Global_1972721[uParam0->f_1092 /*53*/].f_52;
	}
}

void func_859(int iParam0, int iParam1)//Position - 0x1EB4D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_CURRENT_SELECTION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_860(bool bParam0)//Position - 0x1EB6A
{
	switch (bParam0)
	{
		case 0:
			return 99;
		
		case 1:
			return 101;
		
		case 2:
			return 102;
		
		case 3:
			return 103;
		
		case 4:
			return 100;
		
		case 5:
			return 104;
		
		default:
	}
	return 0;
}

void func_861(var uParam0)//Position - 0x1EBBC
{
	if (bLocal_1424)
	{
		if (!iLocal_1425)
		{
			func_862(uParam0->f_716, 1);
			iLocal_1425 = 1;
		}
	}
	else if (iLocal_1425)
	{
		func_862(uParam0->f_716, 0);
		iLocal_1425 = 0;
	}
	if (uParam0->f_1092 == PLAYER::PLAYER_ID() && Global_1972721[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_52 != iLocal_1425)
	{
		Global_1972721[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_52 = iLocal_1425;
	}
}

void func_862(int iParam0, int iParam1)//Position - 0x1EC27
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MAP_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_863(var uParam0)//Position - 0x1EC44
{
	int iVar0;
	
	iVar0 = uParam0->f_812;
	if (iLocal_1422)
	{
		if (!iLocal_1423)
		{
			if (func_383(uParam0, iVar0))
			{
				func_866(uParam0->f_716, func_384(uParam0, iVar0));
				func_865(uParam0, iVar0);
				iLocal_1423 = 1;
			}
			else
			{
				iLocal_1422 = 0;
			}
		}
	}
	else if (iLocal_1423)
	{
		func_864(uParam0->f_716);
		iLocal_1423 = 0;
	}
	if (uParam0->f_1092 == PLAYER::PLAYER_ID() && Global_1972721[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_51 != iLocal_1423)
	{
		Global_1972721[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_51 = iLocal_1423;
	}
}

void func_864(int iParam0)//Position - 0x1ECD6
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iParam0, "HIDE_TIP_TEXT");
}

void func_865(var uParam0, int iParam1)//Position - 0x1ECE8
{
	if (func_389(uParam0, iParam1))
	{
		return;
	}
	switch (iParam1)
	{
		case 1:
			if (func_20(uParam0->f_1092, 0))
			{
				func_639(uParam0, 5);
			}
			break;
		
		case 2:
			func_639(uParam0, 8);
			break;
		
		case 3:
			func_639(uParam0, 6);
			break;
		
		case 4:
			func_639(uParam0, 7);
			break;
		
		case 5:
			func_639(uParam0, 10);
			break;
		
		case 6:
			func_639(uParam0, 9);
			break;
		
		case 30:
			func_639(uParam0, 18);
			break;
		
		case 31:
			func_639(uParam0, 17);
			break;
		
		case 32:
			func_639(uParam0, 11);
			break;
		
		case 33:
			func_639(uParam0, 12);
			break;
		
		case 34:
			if (func_406(uParam0->f_1092))
			{
				func_639(uParam0, 14);
			}
			else
			{
				func_639(uParam0, 13);
			}
			break;
		
		case 35:
			if (func_407(uParam0->f_1092))
			{
				func_639(uParam0, 16);
			}
			else
			{
				func_639(uParam0, 15);
			}
			break;
		
		case 40:
			func_639(uParam0, 20);
			break;
		
		case 44:
			func_639(uParam0, 22);
			break;
		
		case 45:
			func_639(uParam0, 23);
			break;
		
		case 42:
			func_639(uParam0, 24);
			break;
		
		case 46:
		case 47:
			func_639(uParam0, 25);
			break;
		
		case 48:
		case 49:
			func_639(uParam0, 21);
			break;
		
		case 50:
			func_639(uParam0, 26);
			break;
		
		case 53:
			func_639(uParam0, 27);
			break;
		
		case 51:
			if (func_405(uParam0->f_1092) == 11)
			{
				if (!func_382(uParam0->f_1092))
				{
					func_639(uParam0, 28);
				}
				else
				{
					func_639(uParam0, 29);
				}
			}
			else
			{
				func_639(uParam0, 30);
			}
			break;
		
		case 52:
			func_639(uParam0, 31);
			break;
		
		case 38:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			func_639(uParam0, 32);
			break;
		
		case 59:
			func_639(uParam0, 33);
			break;
		
		case 60:
			func_639(uParam0, 34);
			break;
		
		case 61:
			func_639(uParam0, 35);
			break;
		
		case 62:
			func_639(uParam0, 36);
			break;
		
		case 64:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_639(uParam0, 38);
			}
			break;
		
		case 66:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_639(uParam0, 39);
			}
			break;
		
		case 63:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_639(uParam0, 40);
			}
			break;
		
		case 67:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_639(uParam0, 41);
			}
			break;
		
		case 65:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_639(uParam0, 42);
			}
			break;
		
		case 69:
			func_639(uParam0, 43);
			break;
		
		case 99:
			func_639(uParam0, 44);
			break;
		
		case 100:
			func_639(uParam0, 45);
			break;
		
		case 101:
			func_639(uParam0, 46);
			break;
		
		case 102:
			func_639(uParam0, 47);
			break;
		
		case 103:
			func_639(uParam0, 48);
			break;
		
		case 104:
			func_639(uParam0, 49);
			break;
	}
}

void func_866(int iParam0, char* sParam1)//Position - 0x1F052
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(iParam0, "SHOW_TIP_TEXT", sParam1, 0, 0, 0, 0);
}

void func_867(var uParam0)//Position - 0x1F06A
{
	if (func_581(uParam0))
	{
		if (!iLocal_1433)
		{
			func_641(uParam0->f_716, 1, func_642(uParam0));
			iLocal_1433 = 1;
		}
	}
	else if (iLocal_1433)
	{
		func_641(uParam0->f_716, 0, func_642(uParam0));
		iLocal_1433 = 0;
	}
}

void func_868(var uParam0)//Position - 0x1F0B3
{
	if (func_870(uParam0))
	{
		if (!iLocal_1432)
		{
			func_869(uParam0->f_716, 1);
			iLocal_1432 = 1;
		}
	}
	else if (iLocal_1432)
	{
		func_869(uParam0->f_716, 0);
		iLocal_1432 = 0;
	}
}

void func_869(int iParam0, bool bParam1)//Position - 0x1F0F0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_CREW_CUTS_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_870(var uParam0)//Position - 0x1F10D
{
	int iVar0;
	
	iVar0 = uParam0->f_812;
	if (func_582(iVar0) != 2)
	{
		return 0;
	}
	return NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

void func_871(var uParam0)//Position - 0x1F12E
{
	int iVar0;
	
	if (!iLocal_1434)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_831.f_49)
	{
		if (uParam0->f_831.f_51[iVar0] != -1)
		{
			func_872(uParam0->f_716, func_875(iVar0), func_874(uParam0, iVar0), uParam0->f_831.f_56[iVar0], uParam0->f_831.f_239[iVar0], func_873(uParam0->f_831.f_67[iVar0]));
		}
		iVar0++;
	}
	iLocal_1434 = 0;
}

void func_872(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1F1A7
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_CREW_MEMBER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	func_608(PLAYER::GET_PLAYER_NAME(iParam2));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_873(int iParam0)//Position - 0x1F1E0
{
	return iParam0 == 1;
}

int func_874(var uParam0, int iParam1)//Position - 0x1F1EC
{
	if (iParam1 != -1 && uParam0->f_831.f_51[iParam1] != -1)
	{
		return PLAYER::INT_TO_PLAYERINDEX(uParam0->f_831.f_51[iParam1]);
	}
	return func_17();
}

int func_875(int iParam0)//Position - 0x1F223
{
	switch (iParam0)
	{
		case 0:
			return 105;
		
		case 1:
			return 106;
		
		case 2:
			return 107;
		
		case 3:
			return 108;
		
		default:
	}
	return 0;
}

void func_876(var uParam0)//Position - 0x1F25F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_831.f_49)
	{
		if (uParam0->f_831.f_51[iVar0] != -1)
		{
			iVar1 = func_877(func_874(uParam0, iVar0));
			if (uParam0->f_831.f_239[iVar0] != iVar1)
			{
				uParam0->f_831.f_239[iVar0] = iVar1;
				iLocal_1434 = 1;
			}
		}
		iVar0++;
	}
}

int func_877(int iParam0)//Position - 0x1F2BD
{
	struct<13> Var0;
	
	if (iParam0 != func_17() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		Var0 = { func_216(iParam0) };
		if (func_215(Var0))
		{
			if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var0))
			{
				if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var0))
				{
					return 2;
				}
				else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var0))
			{
				return 1;
			}
			else
			{
				return 3;
			}
		}
	}
	return 0;
}

int func_878(var uParam0)//Position - 0x1F336
{
	switch (iLocal_1439)
	{
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 59:
			return 1;
			break;
	}
	if (func_374(&uLocal_1442))
	{
		if (func_43(&uLocal_1442, 4000, 0))
		{
			func_41(&uLocal_1442);
		}
		return 1;
	}
	return 0;
}

void func_879(var uParam0)//Position - 0x1F39B
{
	int iVar0;
	
	uParam0->f_831.f_49 = func_880(uParam0);
	switch (uParam0->f_831.f_49)
	{
		case 1:
			uParam0->f_831.f_56[0] = 100;
			uParam0->f_831.f_56[1] = 0;
			uParam0->f_831.f_56[2] = 0;
			uParam0->f_831.f_56[3] = 0;
			uParam0->f_831.f_56[4] = 0;
			break;
		
		case 2:
			uParam0->f_831.f_56[0] = 85;
			uParam0->f_831.f_56[1] = 15;
			uParam0->f_831.f_56[2] = 0;
			uParam0->f_831.f_56[3] = 0;
			uParam0->f_831.f_56[4] = 0;
			break;
		
		case 3:
			uParam0->f_831.f_56[0] = 70;
			uParam0->f_831.f_56[1] = 15;
			uParam0->f_831.f_56[2] = 15;
			uParam0->f_831.f_56[3] = 0;
			uParam0->f_831.f_56[4] = 0;
			break;
		
		case 4:
			uParam0->f_831.f_56[0] = 55;
			uParam0->f_831.f_56[1] = 15;
			uParam0->f_831.f_56[2] = 15;
			uParam0->f_831.f_56[3] = 15;
			uParam0->f_831.f_56[4] = 0;
			break;
	}
	if (uParam0->f_1092 == PLAYER::PLAYER_ID())
	{
		Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[4] = uParam0->f_831.f_56[4];
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_1092 == PLAYER::PLAYER_ID())
		{
			Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_12[iVar0] = uParam0->f_831.f_56[iVar0];
		}
		if (uParam0->f_831.f_51[iVar0] == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			Global_2685249.f_6615 = uParam0->f_831.f_56[iVar0];
			Global_1941036.f_29 = Global_2685249.f_6615;
		}
		iVar0++;
	}
	iLocal_1434 = 1;
}

int func_880(var uParam0)//Position - 0x1F559
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		uParam0->f_831.f_51[0] = uParam0->f_1092;
		uParam0->f_831.f_51[1] = -1;
		uParam0->f_831.f_51[2] = -1;
		uParam0->f_831.f_51[3] = -1;
		return 1;
	}
	iVar0 = func_17();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_831.f_51[iVar1] = -1;
		uParam0->f_831.f_67[iVar1] = 0;
		uParam0->f_831.f_239[iVar1] = 0;
		Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_7[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_78(iVar0, 1, 1))
		{
			if (iVar0 != func_17())
			{
				if (!func_881(iVar0))
				{
					if (iVar2 > 3)
					{
					}
					else
					{
						uParam0->f_831.f_51[iVar2] = iVar0;
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar2;
}

int func_881(int iParam0)//Position - 0x1F641
{
	if (func_79(iParam0, 0) || func_882(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_882(int iParam0)//Position - 0x1F664
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_96.f_32, 5);
}

void func_883(var uParam0)//Position - 0x1F67B
{
	switch (uParam0->f_732.f_1)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			}
			break;
		
		case 5:
			break;
	}
}

void func_884(var uParam0)//Position - 0x1F6D0
{
	switch (uParam0->f_732)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			if (!iLocal_1420)
			{
				func_988(uParam0);
				func_967(uParam0);
				func_966(uParam0);
				func_964(uParam0);
				func_922(uParam0);
				func_889(uParam0);
				iLocal_1420 = 1;
			}
			break;
		
		case 4:
			iLocal_1418 = 0;
			iLocal_1419 = 0;
			func_888(uParam0);
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GRAPHICS::SET_TIMECYCLE_MODIFIER("h4_sub_commandroom_BloomRedux");
			}
			func_885();
			break;
		
		case 5:
			break;
	}
}

void func_885()//Position - 0x1F76C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672741.f_2518[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672741.f_2518[iVar0 /*80*/].f_2 = 5;
			func_886(&(Global_2672741.f_2518[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_886(var uParam0, int iParam1)//Position - 0x1F7B7
{
	func_887(uParam0, iParam1);
}

void func_887(var uParam0, var uParam1)//Position - 0x1F7C7
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_888(var uParam0)//Position - 0x1F7D8
{
	int iVar0;
	
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	if ((uParam0->f_1092 == iLocal_1445 && !func_382(iLocal_1445)) && !func_20(iLocal_1445, 0))
	{
		iVar0 = func_9(9511, -1);
		if (!BitTest(iVar0, 13))
		{
			func_11("HIF_INTROVIBE" /* GXT: Dave and Keinemusik will allow you to infiltrate El Rubio's island and scope it to prepare for The Cayo Perico Heist. Press ~INPUT_FRONTEND_ACCEPT~ when ready to begin. */, -1);
			MISC::SET_BIT(&iVar0, 13);
			func_4(9511, iVar0, -1);
		}
	}
}

void func_889(var uParam0)//Position - 0x1F841
{
	int iVar0;
	
	if (func_20(uParam0->f_1092, 0))
	{
		func_907(uParam0->f_716, 1, func_918(uParam0), func_910(uParam0), func_909(uParam0), func_908());
		func_906(uParam0->f_716, 99, func_638(99));
		func_906(uParam0->f_716, 100, func_638(100));
		func_906(uParam0->f_716, 101, func_638(101));
		func_906(uParam0->f_716, 102, func_638(102));
		func_906(uParam0->f_716, 103, func_638(103));
		func_906(uParam0->f_716, 104, func_638(104));
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_905(uParam0->f_716, 67, 63, 64, 66, 68, 69, 70, 65);
			func_641(uParam0->f_716, 1, func_642(uParam0));
			iLocal_1433 = 1;
		}
		else
		{
			func_905(uParam0->f_716, 67, 63, 64, 66, 68, 69, -1, 65);
		}
		func_903(uParam0->f_716, func_904(uParam0));
	}
	else
	{
		if (func_902(uParam0->f_1092))
		{
			func_639(uParam0, 2);
		}
		else if (func_382(uParam0->f_1092))
		{
			func_639(uParam0, 1);
		}
		if (func_901(uParam0->f_1092))
		{
			func_639(uParam0, 4);
		}
	}
	func_900(uParam0->f_716, func_901(uParam0->f_1092));
	func_897(uParam0->f_716, func_899(0), func_898(uParam0, 0), func_899(1), func_898(uParam0, 1), func_899(2), func_898(uParam0, 2));
	func_895(uParam0->f_716, func_896());
	func_862(uParam0->f_716, 0);
	iVar0 = func_894(uParam0);
	func_893(uParam0->f_716, iVar0);
	if (func_896() == 0)
	{
		uParam0->f_812 = 1;
	}
	else
	{
		uParam0->f_812 = 63;
	}
	if (uParam0->f_1092 == iLocal_1445)
	{
		Global_1972721[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_4 = uParam0->f_812;
	}
	else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		uParam0->f_812 = 1000;
		func_859(uParam0->f_716, 1000);
	}
	else if (Global_1971856[uParam0->f_1092 /*27*/].f_20)
	{
		uParam0->f_812 = Global_1972721[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_4;
		func_859(uParam0->f_716, uParam0->f_812);
	}
	if (iVar0 == 0)
	{
		func_37(uParam0, 18);
	}
	func_892(uParam0);
	func_890(uParam0);
}

void func_890(var uParam0)//Position - 0x1FA71
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || uParam0->f_1092 != iLocal_1445)
	{
		return;
	}
	iVar0 = func_9(9511, -1);
	if (func_20(uParam0->f_1092, 0) && !BitTest(iVar0, 16))
	{
		func_645(uParam0->f_716, "H4P_OVR_INT_T" /* GXT: INTEL COMPLETE */, "H4P_OVR_INT_M" /* GXT: //Loading...~n~~n~Stage:[equipment]~n~......................................................................................................~n~&gt;/Madrazo files located.~n~Prep equipment phase can now be initiated.~n~Mandatory Prep work must be completed to unlock the Finale.~n~&lt;\ */, func_652(), "");
		uParam0->f_710 = 1;
		uParam0->f_812 = 1002;
		iLocal_1439 = -2;
		return;
	}
	if (func_891(uParam0->f_1092) && !BitTest(iVar0, 14))
	{
		func_645(uParam0->f_716, "H4P_OVR_MAN_T" /* GXT: MANDATORY PREPS COMPLETE */, "H4P_OVR_MAN_M" /* GXT: //Loading...~n~~n~Stage:[finale]~n~......................................................................................................~n~&gt;/Mandatory prep work complete. Finale access granted. Planning phase can now be initiated.~n~To increase chance of success:~n~- Continue scoping for additional intel.~n~- Complete optional prep work.~n~&lt;\ */, func_652(), "");
		uParam0->f_710 = 1;
		uParam0->f_812 = 1002;
		iLocal_1439 = -3;
	}
}

int func_891(int iParam0)//Position - 0x1FB28
{
	if (!func_615(iParam0, 1))
	{
		return 0;
	}
	if (!func_20(iParam0, 8) && !func_20(iParam0, 9))
	{
		return 0;
	}
	if (!func_21(iParam0, 10))
	{
		return 0;
	}
	if (!func_20(iParam0, 13))
	{
		return 0;
	}
	if (!func_20(iParam0, 12))
	{
		return 0;
	}
	return 1;
}

void func_892(var uParam0)//Position - 0x1FB8E
{
	if (!uParam0->f_1088)
	{
		uParam0->f_1088.f_1 = AUDIO::GET_SOUND_ID();
		if (uParam0->f_1088.f_1 != -1)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_1088.f_1, func_40(19), uParam0->f_738.f_6, func_39(19), false, 0, false);
			uParam0->f_1088 = 1;
		}
	}
}

void func_893(int iParam0, int iParam1)//Position - 0x1FBE4
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SHOW_SCREEN");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_894(var uParam0)//Position - 0x1FC01
{
	if (((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || uParam0->f_1104) || (uParam0->f_1092 != iLocal_1445 && Global_1971856[uParam0->f_1092 /*27*/].f_20)) || uParam0->f_1105)
	{
		return 1;
	}
	return 0;
}

void func_895(int iParam0, int iParam1)//Position - 0x1FC4C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INITIAL_TAB_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_896()//Position - 0x1FC69
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 2;
	}
	return 0;
}

void func_897(int iParam0, char* sParam1, bool bParam2, char* sParam3, bool bParam4, char* sParam5, bool bParam6)//Position - 0x1FC7D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_TABS");
	func_451(sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
	func_451(sParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	func_451(sParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam6);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_898(var uParam0, int iParam1)//Position - 0x1FCB8
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (!func_20(uParam0->f_1092, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!func_891(uParam0->f_1092))
			{
				return 1;
			}
			break;
	}
	return 0;
}

char* func_899(int iParam0)//Position - 0x1FD11
{
	switch (iParam0)
	{
		case 0:
			return "H4P_INTEL_TAB" /* GXT: INTEL */;
		
		case 1:
			return "H4P_PREP_TAB" /* GXT: PREP */;
		
		case 2:
			return "H4P_FINALE_TAB" /* GXT: FINALE */;
		
		default:
	}
	return "";
}

void func_900(int iParam0, bool bParam1)//Position - 0x1FD4B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_IS_HARD_MODE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_901(int iParam0)//Position - 0x1FD68
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_1, 12);
	}
	return 0;
}

int func_902(int iParam0)//Position - 0x1FD87
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_1, 3);
	}
	return 0;
}

void func_903(int iParam0, char* sParam1)//Position - 0x1FDA5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_LIST_TITLE");
	func_451(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_904(var uParam0)//Position - 0x1FDC2
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || uParam0->f_1092 != PLAYER::PLAYER_ID())
	{
		return "H4P_LIST_PREV" /* GXT: PREVIEW SELECTIONS */;
	}
	return "H4P_LIST_MAKE" /* GXT: MAKE SELECTIONS */;
}

void func_905(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1FDED
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_MENU_IDS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_906(int iParam0, int iParam1, int iParam2)//Position - 0x1FE34
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_COST");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_907(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)//Position - 0x1FE57
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_PAYOUTS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	func_451(sParam4);
	func_451(sParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_908()//Position - 0x1FE8C
{
	return "H4_LOOT_ADD" /* GXT: SECONDARY TARGETS */;
}

char* func_909(var uParam0)//Position - 0x1FE98
{
	switch (func_545(uParam0->f_1092))
	{
		case 0:
			return "H4_LOOT_TEQ" /* GXT: SINSIMITO TEQUILA */;
		
		case 1:
			return "H4_LOOT_NKLC" /* GXT: RUBY NECKLACE */;
		
		case 2:
			return "H4_LOOT_BONDS" /* GXT: BEARER BONDS */;
		
		case 3:
			return "H4_LOOT_DIAM" /* GXT: PINK DIAMOND */;
		
		case 4:
			return "H4_LOOT_FILES" /* GXT: MADRAZO FILES */;
		
		case 5:
			return "H4_LOOT_STAT" /* GXT: PANTHER STATUE */;
		
		default:
	}
	return "";
}

int func_910(var uParam0)//Position - 0x1FF00
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = (iVar0 + (func_912(uParam0->f_1092, iVar1) * func_911(uParam0->f_1092, iVar1, 0, 0)));
		iVar1++;
	}
	return iVar0;
}

int func_911(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1FF3D
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_5, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_13, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_6, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_14, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_7, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_15, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_8, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_16, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 4:
				bVar1 = false;
				while (bVar1 < 7)
				{
					if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_18, bVar1))
					{
						iVar0++;
					}
					bVar1++;
				}
				break;
			}
	}
	return iVar0;
}

int func_912(int iParam0, int iParam1)//Position - 0x20149
{
	switch (iParam1)
	{
		case 0:
			return func_917(iParam0);
		
		case 1:
			return func_916(iParam0);
		
		case 2:
			return func_915(iParam0);
		
		case 3:
			return func_914(iParam0);
		
		case 4:
			return func_913(iParam0);
		
		default:
	}
	return 0;
}

int func_913(int iParam0)//Position - 0x201A4
{
	if (iParam0 != -1)
	{
		return Global_1972721[iParam0 /*53*/].f_5.f_10.f_23;
	}
	return 0;
}

int func_914(int iParam0)//Position - 0x201C4
{
	if (iParam0 != -1)
	{
		return Global_1972721[iParam0 /*53*/].f_5.f_10.f_22;
	}
	return 0;
}

int func_915(int iParam0)//Position - 0x201E4
{
	if (iParam0 != -1)
	{
		return Global_1972721[iParam0 /*53*/].f_5.f_10.f_21;
	}
	return 0;
}

int func_916(int iParam0)//Position - 0x20204
{
	if (iParam0 != -1)
	{
		return Global_1972721[iParam0 /*53*/].f_5.f_10.f_20;
	}
	return 0;
}

int func_917(int iParam0)//Position - 0x20224
{
	if (iParam0 != -1)
	{
		return Global_1972721[iParam0 /*53*/].f_5.f_10.f_19;
	}
	return 0;
}

int func_918(var uParam0)//Position - 0x20244
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_921(func_545(uParam0->f_1092));
	fVar1 = func_919(func_920(func_901(uParam0->f_1092), 2, 1));
	iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar1));
	return iVar0;
}

float func_919(int iParam0)//Position - 0x2027E
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_30265 /* Tunable: 1808919381 */;
		
		case 2:
			return Global_262145.f_30266 /* Tunable: 1759346392 */;
		
		default:
	}
	return 1f;
}

int func_920(bool bParam0, int iParam1, int iParam2)//Position - 0x202AE
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_921(int iParam0)//Position - 0x202C5
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_30259 /* Tunable: IH_PRIMARY_TARGET_VALUE_TEQUILA */;
		
		case 1:
			return Global_262145.f_30260 /* Tunable: IH_PRIMARY_TARGET_VALUE_PEARL_NECKLACE */;
		
		case 2:
			return Global_262145.f_30261 /* Tunable: IH_PRIMARY_TARGET_VALUE_BEARER_BONDS */;
		
		case 3:
			return Global_262145.f_30262 /* Tunable: IH_PRIMARY_TARGET_VALUE_PINK_DIAMOND */;
		
		case 4:
			return Global_262145.f_30263 /* Tunable: IH_PRIMARY_TARGET_VALUE_MADRAZO_FILES */;
		
		case 5:
			return Global_262145.f_30264 /* Tunable: IH_PRIMARY_TARGET_VALUE_SAPPHIRE_PANTHER_STATUE */;
		
		default:
	}
	return 0;
}

void func_922(var uParam0)//Position - 0x20335
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_20(uParam0->f_1092, 0) && !func_382(uParam0->f_1092))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (func_963(uParam0->f_1092, bVar0) && func_962(uParam0->f_1092, bVar0))
		{
			iVar3 = func_961(uParam0->f_1092, bVar0);
			func_957(uParam0->f_716, func_960(iVar3), -1, func_959(iVar3), 0, func_958(bVar0));
		}
		bVar0++;
	}
	bVar1 = false;
	while (bVar1 < 8)
	{
		if (func_956(uParam0->f_1092, bVar1) && func_955(uParam0->f_1092, bVar1))
		{
			iVar3 = func_954(uParam0->f_1092, bVar1);
			func_957(uParam0->f_716, func_960(iVar3), -1, func_959(iVar3), 1, func_953(bVar1));
		}
		bVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 7)
	{
		if (func_952(uParam0->f_1092, iVar2) && func_951(uParam0->f_1092, iVar2))
		{
			func_957(uParam0->f_716, 11, -1, 7, 1, func_950(iVar2));
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_414(uParam0->f_1092, iVar4))
		{
			func_957(uParam0->f_716, 33, -1, 2, 0, func_944(func_945(uParam0->f_1092, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_408(uParam0->f_1092, iVar4))
		{
			func_957(uParam0->f_716, 34, -1, 2, 0, func_938(func_939(uParam0->f_1092, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_420(uParam0->f_1092, iVar4))
		{
			func_957(uParam0->f_716, 32, -1, 2, 0, func_932(func_933(uParam0->f_1092, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 8)
	{
		if (func_402(uParam0->f_1092, iVar4))
		{
			func_957(uParam0->f_716, func_931(iVar4, 0), func_931(iVar4, 1), func_930(iVar4), 0, func_929(iVar4));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_400(uParam0->f_1092, iVar4))
		{
			func_957(uParam0->f_716, func_928(iVar4, 0), func_928(iVar4, 1), 1, 0, func_927(iVar4));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		if (func_398(uParam0->f_1092, iVar4))
		{
			func_957(uParam0->f_716, func_926(iVar4, 0), func_926(iVar4, 1), 0, 1, func_925(iVar4));
		}
		iVar4++;
	}
	if (func_425(uParam0->f_1092))
	{
		func_957(uParam0->f_716, 31, -1, 2, 0, 4367.82f, -4579f, 23.06f);
	}
	if (func_427(uParam0->f_1092))
	{
		func_957(uParam0->f_716, 30, -1, 2, 0, 4480.7f, -4588.52f, 4.56f);
	}
	func_957(uParam0->f_716, 5, -1, 8, 0, 5020.6353f, -5746.534f, 31.93707f);
	if (func_406(uParam0->f_1092))
	{
		func_957(uParam0->f_716, 35, -1, 2, 0, func_923(func_924(uParam0->f_1092)));
	}
}

Vector3 func_923(int iParam0)//Position - 0x20667
{
	switch (iParam0)
	{
		case 1:
			return 4527.591f, -4526.633f, 3.211f;
		
		case 2:
			return 5152.974f, -4619.487f, 1.752f;
		
		case 3:
			return 5155.974f, -5132.699f, 1.312f;
		
		case 4:
			return 4900.456f, -5210.057f, 1.512f;
		
		case 5:
			return 4970.79f, -5695.73f, 18.888f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_924(int iParam0)//Position - 0x206F1
{
	if (iParam0 != -1)
	{
		return Global_1972721[iParam0 /*53*/].f_5.f_34;
	}
	return 0;
}

Vector3 func_925(int iParam0)//Position - 0x2070F
{
	switch (iParam0)
	{
		case 0:
			return 4982.59f, -5711.01f, 18.86f;
		
		case 1:
			return 5031.86f, -5685.84f, 23.87f;
		
		case 2:
			return 5085.03f, -5732.67f, 14.8f;
		
		case 3:
			return 4992.24f, -5807.17f, 24.87f;
		
		case 4:
			return 4960.13f, -5785.66f, 19.96f;
		
		case 5:
			return 5045.17f, -5817.24f, -12.7f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_926(int iParam0, bool bParam1)//Position - 0x207B1
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 85;
			
			case 5:
				return 86;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 25;
			
			case 2:
				return 26;
			
			case 3:
				return 27;
			
			case 4:
				return 28;
			
			case 5:
				return 29;
			}
		
		default:
	}
	return -1;
}

Vector3 func_927(int iParam0)//Position - 0x20828
{
	switch (iParam0)
	{
		case 0:
			return 4052.4f, -4655.79f, 3.18f;
		
		case 1:
			return 4799.21f, -5157.77f, -4.34f;
		
		case 2:
			return 5176.88f, -4752.2f, -4.11f;
		
		case 3:
			return 4533.25f, -4278.35f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_928(int iParam0, bool bParam1)//Position - 0x20896
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 87;
			
			case 1:
				return 88;
			
			case 2:
				return 89;
			
			case 3:
				return 90;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 20;
			
			case 1:
				return 21;
			
			case 2:
				return 22;
			
			case 3:
				return 23;
			}
		
		default:
	}
	return -1;
}

Vector3 func_929(int iParam0)//Position - 0x2090D
{
	switch (iParam0)
	{
		case 0:
			return 4052.4f, -4655.79f, 3.18f;
		
		case 3:
			return 4799.21f, -5157.77f, -4.34f;
		
		case 4:
			return 5176.88f, -4752.2f, -4.11f;
		
		case 2:
			return 4891.13f, -4925.02f, 9.31f;
		
		case 5:
			return 4820.73f, -4302.71f, 4.24f;
		
		case 6:
			return 5478.63f, -5847.74f, 19.54f;
		
		case 7:
			return 5045.17f, -5817.24f, -12.7f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_930(int iParam0)//Position - 0x209C7
{
	switch (iParam0)
	{
		case 1:
			return 9;
		
		default:
	}
	return 0;
}

int func_931(int iParam0, bool bParam1)//Position - 0x209E2
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 77;
			
			case 1:
				return 78;
			
			case 2:
				return 79;
			
			case 3:
				return 80;
			
			case 4:
				return 81;
			
			case 5:
				return 82;
			
			case 6:
				return 83;
			
			case 7:
				return 84;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 12;
			
			case 1:
				return 13;
			
			case 2:
				return 14;
			
			case 3:
				return 15;
			
			case 4:
				return 16;
			
			case 5:
				return 17;
			
			case 6:
				return 18;
			
			case 7:
				return 19;
			}
		
		default:
	}
	return -1;
}

Vector3 func_932(int iParam0)//Position - 0x20AB1
{
	switch (iParam0)
	{
		case 0:
			return 4534.709f, -4543.447f, 4.53f;
		
		case 1:
			return 4523.664f, -4511.79f, 4.184f;
		
		case 2:
			return 4076.849f, -4667.305f, 4.163f;
		
		case 3:
			return 4505.6f, -4653.089f, 10.456f;
		
		case 4:
			return 4805.025f, -4315.458f, 6.514f;
		
		case 5:
			return 5180.197f, -4670.979f, 6.231f;
		
		case 6:
			return 5098.02f, -4621.306f, 2.594f;
		
		case 7:
			return 5070.327f, -4638.299f, 2.902f;
		
		case 8:
			return 4955.743f, -5181.93f, 4.512f;
		
		case 9:
			return 5216.539f, -5126.448f, 5.984f;
		
		case 10:
			return 4879.029f, -5112.622f, 1.995f;
		
		case 11:
			return 4901.985f, -5348.011f, 9.409f;
		
		case 12:
			return 5362.94f, -5437.508f, 48.491f;
		
		case 13:
			return 5466.287f, -5232.051f, 27.065f;
		
		case 14:
			return 4754.99f, -5541.311f, 18.056f;
		
		case 15:
			return 5326.267f, -5266.071f, 32.237f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_933(int iParam0, int iParam1)//Position - 0x20C43
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_937(iParam0);
			
			case 1:
				return func_936(iParam0);
			
			case 2:
				return func_935(iParam0);
			
			case 3:
				return func_934(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_934(int iParam0)//Position - 0x20C95
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 15);
			return 15;
		}
	}
	return -1;
}

int func_935(int iParam0)//Position - 0x20D07
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 11);
			return 11;
		}
	}
	return -1;
}

int func_936(int iParam0)//Position - 0x20D79
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 7);
			return 7;
		}
	}
	return -1;
}

int func_937(int iParam0)//Position - 0x20DE3
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1972721[iParam0 /*53*/].f_5.f_5, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_938(int iParam0)//Position - 0x20E4D
{
	switch (iParam0)
	{
		case 0:
			return 5163.384f, -4995.56f, 11.682f;
		
		case 1:
			return 4765.362f, -4778.338f, 2.781f;
		
		case 2:
			return 4502.198f, -4523.357f, 3.396f;
		
		case 3:
			return 4528.522f, -4536.311f, 6.558f;
		
		case 4:
			return 5098.933f, -4609.03f, 1.369f;
		
		case 5:
			return 5060.167f, -4589.7f, 1.9f;
		
		case 6:
			return 5148.113f, -4616.131f, 1.387f;
		
		case 7:
			return 5170.703f, -4675.337f, 1.439f;
		
		case 8:
			return 5116.664f, -5130.588f, 1.143f;
		
		case 9:
			return 5002.533f, -5125.336f, 1.955f;
		
		case 10:
			return 4949.935f, -5321.81f, 7.085f;
		
		case 11:
			return 5012.355f, -5203.456f, 1.516f;
		
		case 12:
			return 4923.873f, -5273.464f, 4.65f;
		
		case 13:
			return 5263.995f, -5435.548f, 64.881f;
		
		case 14:
			return 4886.995f, -5454.333f, 29.731f;
		
		case 15:
			return 5106.183f, -5524.682f, 53.239f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_939(int iParam0, int iParam1)//Position - 0x20FDF
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_943(iParam0);
			
			case 1:
				return func_942(iParam0);
			
			case 2:
				return func_941(iParam0);
			
			case 3:
				return func_940(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_940(int iParam0)//Position - 0x21031
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 15);
			return 15;
		}
	}
	return -1;
}

int func_941(int iParam0)//Position - 0x210A3
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 11);
			return 11;
		}
	}
	return -1;
}

int func_942(int iParam0)//Position - 0x21115
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 7);
			return 7;
		}
	}
	return -1;
}

int func_943(int iParam0)//Position - 0x2117F
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1972721[iParam0 /*53*/].f_5.f_4, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_944(int iParam0)//Position - 0x211E9
{
	switch (iParam0)
	{
		case 0:
			return 4896.678f, -4791.297f, 2.59f;
		
		case 1:
			return 4529.568f, -4703.347f, 3.134f;
		
		case 2:
			return 4493.661f, -4733.618f, 10.01f;
		
		case 3:
			return 3895.499f, -4695.022f, 5.547f;
		
		case 4:
			return 5103.035f, -4681.288f, 7.702f;
		
		case 5:
			return 5130.433f, -4610.441f, 11.724f;
		
		case 6:
			return 5109.232f, -4578.338f, 28.711f;
		
		case 7:
			return 4879.964f, -4487.782f, 9.922f;
		
		case 8:
			return 4901.395f, -5331.422f, 28.64f;
		
		case 9:
			return 4862.909f, -5158.419f, 2.283f;
		
		case 10:
			return 5124.89f, -5097.902f, 2.192f;
		
		case 11:
			return 4867.519f, -4642.129f, 13.571f;
		
		case 12:
			return 5568.438f, -5185.942f, 10.22f;
		
		case 13:
			return 5406.297f, -5170.91f, 31.198f;
		
		case 14:
			return 5265.993f, -5430.593f, 140.566f;
		
		case 15:
			return 5611.286f, -5654.516f, 9.051f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_945(int iParam0, int iParam1)//Position - 0x2137B
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_949(iParam0);
			
			case 1:
				return func_948(iParam0);
			
			case 2:
				return func_947(iParam0);
			
			case 3:
				return func_946(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_946(int iParam0)//Position - 0x213CD
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 15);
			return 15;
		}
	}
	return -1;
}

int func_947(int iParam0)//Position - 0x2143F
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 11);
			return 11;
		}
	}
	return -1;
}

int func_948(int iParam0)//Position - 0x214B1
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 7);
			return 7;
		}
	}
	return -1;
}

int func_949(int iParam0)//Position - 0x2151B
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1972721[iParam0 /*53*/].f_5.f_3, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_950(int iParam0)//Position - 0x21585
{
	switch (iParam0)
	{
		case 0:
			return 5081.14f, -5758.794f, 15.981f;
		
		case 1:
			return 5027.032f, -5738.977f, 18.027f;
		
		case 2:
			return 5008.773f, -5783.208f, 17.99f;
		
		case 3:
			return 5014.587f, -5751.069f, 29.006f;
		
		case 4:
			return 5004.83f, -5755.521f, 29.006f;
		
		case 5:
			return 4995.553f, -5748.032f, 15.002f;
		
		case 6:
			return 4997.112f, -5745.52f, 15.001f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_951(int iParam0, int iParam1)//Position - 0x2163F
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_18, iParam1);
	}
	return 0;
}

int func_952(int iParam0, int iParam1)//Position - 0x21662
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_17, iParam1);
	}
	return 0;
}

Vector3 func_953(bool bParam0)//Position - 0x21685
{
	switch (bParam0)
	{
		case 0:
			return 5081.753f, -5754.63f, 15.764f;
		
		case 1:
			return 5082.945f, -5758.447f, 15.765f;
		
		case 2:
			return 5029.346f, -5733.933f, 17.81f;
		
		case 3:
			return 5029.777f, -5737.731f, 17.808f;
		
		case 4:
			return 5012.031f, -5788.325f, 17.773f;
		
		case 5:
			return 5006.233f, -5785.789f, 17.771f;
		
		case 6:
			return 4998.106f, -5752.379f, 14.783f;
		
		case 7:
			return 5003.947f, -5748.77f, 14.787f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_954(int iParam0, bool bParam1)//Position - 0x21757
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_9, bParam1))
		{
			return 0;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_10, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_11, bParam1))
		{
			return 2;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_12, bParam1))
		{
			return 3;
		}
	}
	return -1;
}

int func_955(int iParam0, bool bParam1)//Position - 0x217CF
{
	if (iParam0 != -1)
	{
		switch (func_954(iParam0, bParam1))
		{
			case 0:
				return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_13, bParam1);
			
			case 1:
				return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_14, bParam1);
			
			case 2:
				return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_15, bParam1);
			
			case 3:
				return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_16, bParam1);
			}
		
		default:
	}
	return 0;
}

int func_956(int iParam0, bool bParam1)//Position - 0x21853
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_9, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_10, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_11, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_12, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_957(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, struct<2> Param5, float fParam7)//Position - 0x218CB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_WORLD_MAP_ICON");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Param5.f_0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Param5.f_1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

Vector3 func_958(bool bParam0)//Position - 0x21908
{
	switch (bParam0)
	{
		case 0:
			return 4447.822f, -4442.135f, 7.175f;
		
		case 1:
			return 4448.821f, -4444.858f, 7.182f;
		
		case 2:
			return 4435.688f, -4446.595f, 4.25f;
		
		case 3:
			return 4438.332f, -4445.811f, 4.267f;
		
		case 4:
			return 4506.064f, -4555.47f, 4.095f;
		
		case 5:
			return 4503.678f, -4556.323f, 4.096f;
		
		case 6:
			return 5064.635f, -4589.759f, 2.801f;
		
		case 7:
			return 5067.557f, -4590.849f, 2.795f;
		
		case 8:
			return 5092.602f, -4680.137f, 2.35f;
		
		case 9:
			return 5093.195f, -4683.354f, 2.35f;
		
		case 10:
			return 5091.02f, -4685.678f, 2.351f;
		
		case 11:
			return 5136.102f, -4613.863f, 2.401f;
		
		case 12:
			return 5131.834f, -4612.648f, 2.404f;
		
		case 13:
			return 5329.472f, -5272.372f, 33.13f;
		
		case 14:
			return 5328.096f, -5270.587f, 33.129f;
		
		case 15:
			return 5196.664f, -5133.933f, 3.284f;
		
		case 16:
			return 5196.121f, -5136.333f, 3.285f;
		
		case 17:
			return 5000.313f, -5163.344f, 2.697f;
		
		case 18:
			return 5001.3f, -5165.434f, 2.697f;
		
		case 19:
			return 4959.845f, -5107.064f, 2.911f;
		
		case 20:
			return 4962.675f, -5106.771f, 2.913f;
		
		case 21:
			return 4963.856f, -5109.32f, 2.912f;
		
		case 22:
			return 4926.316f, -5244.514f, 2.461f;
		
		case 23:
			return 4924.385f, -5245.882f, 2.461f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_959(int iParam0)//Position - 0x21B5A
{
	switch (iParam0)
	{
		case 0:
			return 4;
		
		case 1:
			return 3;
		
		case 2:
			return 6;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

int func_960(int iParam0)//Position - 0x21B92
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 8;
		
		case 2:
			return 9;
		
		case 3:
			return 10;
		
		default:
	}
	return -1;
}

int func_961(int iParam0, bool bParam1)//Position - 0x21BCD
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_1, bParam1))
		{
			return 0;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_2, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_3, bParam1))
		{
			return 2;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_4, bParam1))
		{
			return 3;
		}
	}
	return -1;
}

int func_962(int iParam0, bool bParam1)//Position - 0x21C45
{
	if (iParam0 != -1)
	{
		switch (func_961(iParam0, bParam1))
		{
			case 0:
				return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_5, bParam1);
			
			case 1:
				return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_6, bParam1);
			
			case 2:
				return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_7, bParam1);
			
			case 3:
				return BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_8, bParam1);
			}
		
		default:
	}
	return 0;
}

int func_963(int iParam0, bool bParam1)//Position - 0x21CC9
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_1, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_2, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_3, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_4, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_964(var uParam0)//Position - 0x21D41
{
	int iVar0;
	
	if (!func_20(uParam0->f_1092, 0) && !func_382(uParam0->f_1092))
	{
		func_965(uParam0->f_716, Local_114[iVar0 /*14*/]);
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_114.f_0)
	{
		if (Local_114[iVar0 /*14*/])
		{
			func_965(uParam0->f_716, Local_114[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_199.f_0)
	{
		if (Local_199[iVar0 /*14*/])
		{
			func_965(uParam0->f_716, Local_199[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_312.f_0)
	{
		if (Local_312[iVar0 /*14*/])
		{
			func_965(uParam0->f_716, Local_312[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_369.f_0)
	{
		if (Local_369[iVar0 /*14*/])
		{
			func_965(uParam0->f_716, Local_369[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_525.f_0)
	{
		if (Local_525[iVar0 /*14*/])
		{
			func_965(uParam0->f_716, Local_525[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_440.f_0)
	{
		if (Local_440[iVar0 /*14*/])
		{
			func_965(uParam0->f_716, Local_440[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_610.f_0)
	{
		if (Local_610[iVar0 /*14*/])
		{
			func_965(uParam0->f_716, Local_610[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_667.f_0)
	{
		if (Local_667[iVar0 /*14*/])
		{
			func_965(uParam0->f_716, Local_667[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_808.f_0)
	{
		if (Local_808[iVar0 /*14*/])
		{
			func_965(uParam0->f_716, Local_808[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_865.f_0)
	{
		if (Local_865[iVar0 /*14*/])
		{
			func_965(uParam0->f_716, Local_865[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_950.f_0)
	{
		if (Local_950[iVar0 /*14*/])
		{
			func_965(uParam0->f_716, Local_950[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_993.f_0)
	{
		if (Local_993[iVar0 /*9*/])
		{
			func_607(uParam0->f_716, Local_993[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1066.f_0)
	{
		if (Local_1066[iVar0 /*9*/])
		{
			func_607(uParam0->f_716, Local_1066[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1121.f_0)
	{
		if (Local_1121[iVar0 /*9*/])
		{
			func_607(uParam0->f_716, Local_1121[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1194.f_0)
	{
		if (Local_1194[iVar0 /*9*/])
		{
			func_607(uParam0->f_716, Local_1194[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1213.f_0)
	{
		if (Local_1213[iVar0 /*9*/])
		{
			func_607(uParam0->f_716, Local_1213[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1250.f_0)
	{
		if (Local_1250[iVar0 /*9*/])
		{
			func_607(uParam0->f_716, Local_1250[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1269.f_0)
	{
		if (Local_1269[iVar0 /*9*/])
		{
			func_607(uParam0->f_716, Local_1269[iVar0 /*9*/], 0);
			if (Local_1269[iVar0 /*9*/].f_2 != 98 || func_434(uParam0->f_1092))
			{
				func_596(uParam0->f_716, Local_1269[iVar0 /*9*/].f_2, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1324.f_0)
	{
		if (Local_1324[iVar0 /*9*/])
		{
			func_607(uParam0->f_716, Local_1324[iVar0 /*9*/], 0);
			if (func_435(uParam0->f_1092, func_635(Local_1324[iVar0 /*9*/].f_2)))
			{
				func_596(uParam0->f_716, Local_1324[iVar0 /*9*/].f_2, 1);
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1092 == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 < Local_1379.f_0)
		{
			if (Local_1379[iVar0 /*9*/])
			{
				func_607(uParam0->f_716, Local_1379[iVar0 /*9*/], 1);
			}
			iVar0++;
		}
	}
}

void func_965(int iParam0, struct<14> Param1)//Position - 0x221C5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_SETUP_ITEM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_3);
	func_451(Param1.f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_8);
	func_451(Param1.f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(Param1.f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_11);
	if (Param1.f_12 != -2)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_12);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_13);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_966(var uParam0)//Position - 0x2224E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_898(uParam0, 2))
	{
		return;
	}
	func_609(uParam0, &(Local_993[0 /*9*/]), 0, 63);
	func_609(uParam0, &(Local_993[1 /*9*/]), 0, 64);
	func_609(uParam0, &(Local_993[2 /*9*/]), 0, 65);
	func_609(uParam0, &(Local_993[3 /*9*/]), 0, 66);
	func_609(uParam0, &(Local_993[4 /*9*/]), 0, 67);
	func_609(uParam0, &(Local_993[5 /*9*/]), 0, 68);
	func_609(uParam0, &(Local_993[6 /*9*/]), 0, 69);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1092 == PLAYER::PLAYER_ID())
	{
		func_609(uParam0, &(Local_993[7 /*9*/]), 0, 70);
	}
	iVar0 = 0;
	if (func_20(uParam0->f_1092, 7))
	{
		func_609(uParam0, &(Local_1066[iVar0 /*9*/]), 63, 71);
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 1) && func_20(uParam0->f_1092, 6))
	{
		func_609(uParam0, &(Local_1066[iVar0 /*9*/]), 63, 72);
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 5))
	{
		func_609(uParam0, &(Local_1066[iVar0 /*9*/]), 63, 73);
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 2) && func_20(uParam0->f_1092, 6))
	{
		func_609(uParam0, &(Local_1066[iVar0 /*9*/]), 63, 74);
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 3))
	{
		func_609(uParam0, &(Local_1066[iVar0 /*9*/]), 63, 75);
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 4))
	{
		func_609(uParam0, &(Local_1066[iVar0 /*9*/]), 63, 76);
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar2 = (77 + iVar1);
		if (func_402(uParam0->f_1092, func_403(iVar2)))
		{
			func_609(uParam0, &(Local_1121[iVar0 /*9*/]), 64, iVar2);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	if (func_20(uParam0->f_1092, 8))
	{
		func_609(uParam0, &(Local_1194[iVar0 /*9*/]), 65, 85);
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 9))
	{
		func_609(uParam0, &(Local_1194[iVar0 /*9*/]), 65, 86);
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = (87 + iVar1);
		if (func_400(uParam0->f_1092, func_401(iVar2)))
		{
			func_609(uParam0, &(Local_1213[iVar0 /*9*/]), 66, iVar2);
			iVar0++;
		}
		iVar1++;
	}
	func_609(uParam0, &(Local_1250[0 /*9*/]), 67, 91);
	func_609(uParam0, &(Local_1250[1 /*9*/]), 67, 92);
	if (func_397(uParam0->f_1092) == 1)
	{
		func_609(uParam0, &(Local_1269[0 /*9*/]), 68, 93);
	}
	else if (func_397(uParam0->f_1092) == 2)
	{
		func_609(uParam0, &(Local_1269[0 /*9*/]), 68, 94);
	}
	else if (func_397(uParam0->f_1092) == 3)
	{
		func_609(uParam0, &(Local_1269[0 /*9*/]), 68, 95);
	}
	else if (func_397(uParam0->f_1092) == 4)
	{
		func_609(uParam0, &(Local_1269[0 /*9*/]), 68, 96);
	}
	else if (func_397(uParam0->f_1092) == 5)
	{
		func_609(uParam0, &(Local_1269[0 /*9*/]), 68, 97);
	}
	func_609(uParam0, &(Local_1269[1 /*9*/]), 68, 98);
	bLocal_1426 = func_434(uParam0->f_1092);
	func_609(uParam0, &(Local_1324[0 /*9*/]), 69, 99);
	func_609(uParam0, &(Local_1324[1 /*9*/]), 69, 100);
	func_609(uParam0, &(Local_1324[2 /*9*/]), 69, 101);
	func_609(uParam0, &(Local_1324[3 /*9*/]), 69, 102);
	func_609(uParam0, &(Local_1324[4 /*9*/]), 69, 103);
	func_609(uParam0, &(Local_1324[5 /*9*/]), 69, 104);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1092 == PLAYER::PLAYER_ID())
	{
		func_609(uParam0, &(Local_1379[0 /*9*/]), 70, 105);
		func_609(uParam0, &(Local_1379[1 /*9*/]), 70, 106);
		func_609(uParam0, &(Local_1379[2 /*9*/]), 70, 107);
		func_609(uParam0, &(Local_1379[3 /*9*/]), 70, 108);
	}
}

void func_967(var uParam0)//Position - 0x22637
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_898(uParam0, 1))
	{
		return;
	}
	func_968(uParam0, &(Local_610[0 /*14*/]), 1, 0, 36, 0);
	func_968(uParam0, &(Local_610[1 /*14*/]), 1, 0, 37, 0);
	func_968(uParam0, &(Local_610[2 /*14*/]), 1, 0, 38, 0);
	func_968(uParam0, &(Local_610[3 /*14*/]), 1, 0, 39, 0);
	func_968(uParam0, &(Local_667[0 /*14*/]), 1, 36, 40, 0);
	func_968(uParam0, &(Local_667[1 /*14*/]), 1, 36, 41, 0);
	func_968(uParam0, &(Local_667[2 /*14*/]), 1, 36, 42, 0);
	func_968(uParam0, &(Local_667[3 /*14*/]), 1, 36, 43, 0);
	func_968(uParam0, &(Local_667[4 /*14*/]), 1, 36, 44, 0);
	func_968(uParam0, &(Local_667[5 /*14*/]), 1, 36, 45, 0);
	func_968(uParam0, &(Local_667[6 /*14*/]), 1, 41, 46, 0);
	func_968(uParam0, &(Local_667[7 /*14*/]), 1, 41, 47, 0);
	func_968(uParam0, &(Local_667[8 /*14*/]), 1, 43, 48, 0);
	func_968(uParam0, &(Local_667[9 /*14*/]), 1, 43, 49, 0);
	func_968(uParam0, &(Local_808[0 /*14*/]), 1, 37, 50, 0);
	func_968(uParam0, &(Local_808[1 /*14*/]), 1, 37, 51, 0);
	func_968(uParam0, &(Local_808[2 /*14*/]), 1, 37, 52, 0);
	func_968(uParam0, &(Local_808[3 /*14*/]), 1, 37, 53, 0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (54 + iVar1);
		if (!func_20(uParam0->f_1092, 13) || func_397(uParam0->f_1092) == func_633(iVar2))
		{
			func_968(uParam0, &(Local_865[iVar0 /*14*/]), 1, 38, iVar2, 0);
			iVar0++;
		}
		iVar1++;
	}
	func_968(uParam0, &(Local_865[iVar0 /*14*/]), 1, 38, 59, 0);
	func_968(uParam0, &(Local_950[0 /*14*/]), 1, 39, 60, 0);
	func_968(uParam0, &(Local_950[1 /*14*/]), 1, 39, 61, 0);
	func_968(uParam0, &(Local_950[2 /*14*/]), 1, 39, 62, 0);
}

void func_968(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x2281C
{
	*uParam1 = 1;
	uParam1->f_1 = iParam2;
	uParam1->f_2 = iParam3;
	uParam1->f_3 = iParam4;
	if (bParam5)
	{
		uParam1->f_4 = "CH_LIST_BLANK" /* GXT: ??? */;
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 2;
		uParam1->f_8 = 0;
		uParam1->f_9 = "CH_LIST_BLANK" /* GXT: ??? */;
		uParam1->f_10 = "";
		uParam1->f_11 = 0;
		uParam1->f_12 = -1;
		uParam1->f_13 = -1;
	}
	else
	{
		uParam1->f_4 = func_616(uParam0, iParam4);
		uParam1->f_5 = func_986(uParam0, iParam4);
		uParam1->f_6 = func_985(uParam0, iParam4);
		if (func_389(uParam0, iParam4))
		{
			uParam1->f_7 = func_611(uParam0, iParam4);
		}
		else
		{
			uParam1->f_7 = 0;
		}
		uParam1->f_8 = func_984(uParam0, iParam4);
		uParam1->f_9 = func_614(uParam0, iParam4);
		uParam1->f_10 = func_612(uParam0, iParam4);
		uParam1->f_11 = func_610(iParam4);
		if (func_972(uParam0, iParam4) != -2)
		{
			uParam1->f_12 = func_972(uParam0, iParam4);
			uParam1->f_13 = func_969(uParam0, iParam4);
		}
	}
}

int func_969(var uParam0, int iParam1)//Position - 0x22914
{
	switch (iParam1)
	{
		case 2:
			if (func_849(uParam0->f_1092))
			{
				return func_971(uParam0->f_1092);
			}
			return -1;
		
		case 3:
			return 8;
		
		case 4:
			return 4;
		
		case 5:
			return 6;
		
		case 6:
			return 6;
		
		case 7:
			if (func_970(uParam0->f_1092, 0, 0, 0) > 0 && func_911(uParam0->f_1092, 0, 0, 0) == func_970(uParam0->f_1092, 0, 0, 0))
			{
				return func_970(uParam0->f_1092, 0, 0, 0);
			}
			break;
		
		case 8:
			if (func_970(uParam0->f_1092, 1, 0, 0) > 0 && func_911(uParam0->f_1092, 1, 0, 0) == func_970(uParam0->f_1092, 1, 0, 0))
			{
				return func_970(uParam0->f_1092, 1, 0, 0);
			}
			break;
		
		case 9:
			if (func_970(uParam0->f_1092, 2, 0, 0) > 0 && func_911(uParam0->f_1092, 2, 0, 0) == func_970(uParam0->f_1092, 2, 0, 0))
			{
				return func_970(uParam0->f_1092, 2, 0, 0);
			}
			break;
		
		case 10:
			if (func_970(uParam0->f_1092, 3, 0, 0) > 0 && func_911(uParam0->f_1092, 3, 0, 0) == func_970(uParam0->f_1092, 3, 0, 0))
			{
				return func_970(uParam0->f_1092, 3, 0, 0);
			}
			break;
		
		case 11:
			if (func_970(uParam0->f_1092, 4, 0, 0) > 0 && func_911(uParam0->f_1092, 4, 0, 0) == func_970(uParam0->f_1092, 4, 0, 0))
			{
				return func_970(uParam0->f_1092, 4, 0, 0);
			}
			break;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 33:
			return 4;
		
		case 34:
			return 4;
		
		case 32:
			return 4;
		
		case 35:
			return 1;
		
		case 36:
			if (func_402(uParam0->f_1092, 5) || func_402(uParam0->f_1092, 6))
			{
				return 6;
			}
			return 5;
		
		case 37:
			if (!func_402(uParam0->f_1092, 7))
			{
				return 3;
			}
			return 4;
		
		case 38:
			return 1;
		
		case 39:
			return 3;
	}
	return -2;
}

int func_970(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x22B6B
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_1, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_9, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_2, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_10, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_3, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_11, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_4, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_12, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 4:
				bVar1 = false;
				while (bVar1 < 7)
				{
					if (BitTest(Global_1972721[iParam0 /*53*/].f_5.f_10.f_17, bVar1))
					{
						iVar0++;
					}
					bVar1++;
				}
				break;
			}
	}
	return iVar0;
}

int func_971(int iParam0)//Position - 0x22D76
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = (iVar0 + func_970(iParam0, 0, 0, 0));
		iVar0 = (iVar0 + func_970(iParam0, 1, 0, 0));
		iVar0 = (iVar0 + func_970(iParam0, 2, 0, 0));
		iVar0 = (iVar0 + func_970(iParam0, 3, 0, 0));
		iVar0 = (iVar0 + func_970(iParam0, 4, 0, 0));
	}
	return iVar0;
}

int func_972(var uParam0, int iParam1)//Position - 0x22DCC
{
	switch (iParam1)
	{
		case 2:
			if (func_849(uParam0->f_1092))
			{
				return func_971(uParam0->f_1092);
			}
			return -1;
		
		case 3:
			return func_983(uParam0);
		
		case 4:
			return func_982(uParam0);
		
		case 5:
			return func_981(uParam0);
		
		case 6:
			return func_980(uParam0);
		
		case 7:
			if (func_970(uParam0->f_1092, 0, 0, 0) > 0 && func_911(uParam0->f_1092, 0, 0, 0) == func_970(uParam0->f_1092, 0, 0, 0))
			{
				return func_970(uParam0->f_1092, 0, 0, 0);
			}
			break;
		
		case 8:
			if (func_970(uParam0->f_1092, 1, 0, 0) > 0 && func_911(uParam0->f_1092, 1, 0, 0) == func_970(uParam0->f_1092, 1, 0, 0))
			{
				return func_970(uParam0->f_1092, 1, 0, 0);
			}
			break;
		
		case 9:
			if (func_970(uParam0->f_1092, 2, 0, 0) > 0 && func_911(uParam0->f_1092, 2, 0, 0) == func_970(uParam0->f_1092, 2, 0, 0))
			{
				return func_970(uParam0->f_1092, 2, 0, 0);
			}
			break;
		
		case 10:
			if (func_970(uParam0->f_1092, 3, 0, 0) > 0 && func_911(uParam0->f_1092, 3, 0, 0) == func_970(uParam0->f_1092, 3, 0, 0))
			{
				return func_970(uParam0->f_1092, 3, 0, 0);
			}
			break;
		
		case 11:
			if (func_970(uParam0->f_1092, 4, 0, 0) > 0 && func_911(uParam0->f_1092, 4, 0, 0) == func_970(uParam0->f_1092, 4, 0, 0))
			{
				return func_970(uParam0->f_1092, 4, 0, 0);
			}
			break;
		
		case 30:
			return func_979(func_427(uParam0->f_1092));
		
		case 31:
			return func_979(func_425(uParam0->f_1092));
		
		case 33:
			return func_978(uParam0);
		
		case 34:
			return func_977(uParam0);
		
		case 32:
			return func_976(uParam0);
		
		case 35:
			return func_979(func_406(uParam0->f_1092));
		
		case 36:
			return func_975(uParam0);
		
		case 37:
			return func_974(uParam0);
		
		case 38:
			if (func_20(uParam0->f_1092, 13))
			{
				return 1;
			}
			return 0;
		
		case 39:
			return func_973(uParam0);
	}
	return -2;
}

int func_973(var uParam0)//Position - 0x23057
{
	int iVar0;
	
	if (func_20(uParam0->f_1092, 14))
	{
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 15))
	{
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 16))
	{
		iVar0++;
	}
	return iVar0;
}

int func_974(var uParam0)//Position - 0x2309D
{
	int iVar0;
	
	if (func_20(uParam0->f_1092, 8))
	{
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 9))
	{
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 11))
	{
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 12))
	{
		iVar0++;
	}
	return iVar0;
}

int func_975(var uParam0)//Position - 0x230F7
{
	int iVar0;
	
	if (func_20(uParam0->f_1092, 7))
	{
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 1) && func_20(uParam0->f_1092, 6))
	{
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 5))
	{
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 2) && func_20(uParam0->f_1092, 6))
	{
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 3))
	{
		iVar0++;
	}
	if (func_20(uParam0->f_1092, 4))
	{
		iVar0++;
	}
	return iVar0;
}

int func_976(var uParam0)//Position - 0x23191
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_420(uParam0->f_1092, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_977(var uParam0)//Position - 0x231C1
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_408(uParam0->f_1092, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_978(var uParam0)//Position - 0x231F1
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_414(uParam0->f_1092, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_979(bool bParam0)//Position - 0x23221
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_980(var uParam0)//Position - 0x23233
{
	int iVar0;
	
	if (func_846(uParam0->f_1092))
	{
		iVar0++;
	}
	if (func_845(uParam0->f_1092))
	{
		iVar0++;
	}
	if (func_844(uParam0->f_1092))
	{
		iVar0++;
	}
	if (func_406(uParam0->f_1092))
	{
		iVar0++;
	}
	if (func_427(uParam0->f_1092))
	{
		iVar0++;
	}
	if (func_425(uParam0->f_1092))
	{
		iVar0++;
	}
	return iVar0;
}

int func_981(var uParam0)//Position - 0x232A9
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_398(uParam0->f_1092, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_982(var uParam0)//Position - 0x232DA
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_400(uParam0->f_1092, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_983(var uParam0)//Position - 0x2330B
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_402(uParam0->f_1092, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_984(var uParam0, int iParam1)//Position - 0x2333C
{
	if (func_389(uParam0, iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 37:
		case 38:
			return 1;
		
		case 36:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			if (!func_615(uParam0->f_1092, 1))
			{
				return 1;
			}
			break;
		
		case 50:
		case 53:
			if (!func_20(uParam0->f_1092, 8) && !func_20(uParam0->f_1092, 9))
			{
				return 1;
			}
			break;
		
		case 51:
		case 52:
			return 1;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (!func_20(uParam0->f_1092, 13))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_985(var uParam0, int iParam1)//Position - 0x23421
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 1;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 32:
			return 1;
		
		case 33:
			return 1;
		
		case 34:
			return 1;
		
		case 35:
			return 1;
		
		case 24:
			return 1;
		
		case 25:
			return 1;
		
		case 26:
			return 1;
		
		case 27:
			return 1;
		
		case 28:
			return 1;
		
		case 29:
			return 1;
		
		case 36:
			return 1;
		
		case 37:
			return 1;
		
		case 38:
			return 1;
		
		case 39:
			return 1;
		
		case 40:
			return 1;
		
		case 41:
			return 1;
		
		case 42:
			return 1;
		
		case 43:
			return 1;
		
		case 44:
			return 1;
		
		case 45:
			return 1;
		
		case 46:
			return 1;
		
		case 47:
			return 1;
		
		case 48:
			return 1;
		
		case 49:
			return 1;
		
		case 50:
			return 1;
		
		case 53:
			return 1;
		
		case 51:
			return 1;
		
		case 52:
			return 1;
		
		case 54:
			return 1;
		
		case 55:
			return 1;
		
		case 56:
			return 1;
		
		case 57:
			return 1;
		
		case 58:
			return 1;
		
		case 59:
			return 1;
		
		case 60:
			return 1;
		
		case 61:
			return 1;
		
		case 62:
			return 1;
		
		default:
	}
	return 0;
}

int func_986(var uParam0, int iParam1)//Position - 0x2369D
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return func_979(func_850(uParam0->f_1092, 0));
		
		case 8:
			return func_979(func_850(uParam0->f_1092, 1));
		
		case 9:
			return func_979(func_850(uParam0->f_1092, 2));
		
		case 10:
			return func_979(func_850(uParam0->f_1092, 3));
		
		case 11:
			return func_979(func_987(uParam0->f_1092));
		
		case 12:
			return func_979(func_402(uParam0->f_1092, 0));
		
		case 13:
			return func_979(func_402(uParam0->f_1092, 1));
		
		case 14:
			return func_979(func_402(uParam0->f_1092, 2));
		
		case 15:
			return func_979(func_402(uParam0->f_1092, 3));
		
		case 16:
			return func_979(func_402(uParam0->f_1092, 4));
		
		case 17:
			return func_979(func_402(uParam0->f_1092, 5));
		
		case 18:
			return func_979(func_402(uParam0->f_1092, 6));
		
		case 19:
			return func_979(func_402(uParam0->f_1092, 7));
		
		case 20:
			return func_979(func_400(uParam0->f_1092, 0));
		
		case 21:
			return func_979(func_400(uParam0->f_1092, 1));
		
		case 22:
			return func_979(func_400(uParam0->f_1092, 2));
		
		case 23:
			return func_979(func_400(uParam0->f_1092, 3));
		
		case 30:
			return func_979(func_427(uParam0->f_1092));
		
		case 31:
			return func_979(func_425(uParam0->f_1092));
		
		case 32:
			return func_979(func_846(uParam0->f_1092));
		
		case 33:
			return func_979(func_845(uParam0->f_1092));
		
		case 34:
			return func_979(func_844(uParam0->f_1092));
		
		case 35:
			return func_979(func_406(uParam0->f_1092));
		
		case 24:
			return func_979(func_398(uParam0->f_1092, 0));
		
		case 25:
			return func_979(func_398(uParam0->f_1092, 1));
		
		case 26:
			return func_979(func_398(uParam0->f_1092, 2));
		
		case 27:
			return func_979(func_398(uParam0->f_1092, 3));
		
		case 28:
			return func_979(func_398(uParam0->f_1092, 4));
		
		case 29:
			return func_979(func_398(uParam0->f_1092, 5));
		
		case 36:
			if (func_615(uParam0->f_1092, 1))
			{
				return 1;
			}
			break;
		
		case 37:
			if (((func_21(uParam0->f_1092, 8) || func_21(uParam0->f_1092, 9)) && func_21(uParam0->f_1092, 10)) && func_21(uParam0->f_1092, 11))
			{
				return 1;
			}
			break;
		
		case 38:
			if (func_21(uParam0->f_1092, 12))
			{
				return 1;
			}
			break;
		
		case 39:
			if ((func_21(uParam0->f_1092, 13) && func_21(uParam0->f_1092, 14)) && func_21(uParam0->f_1092, 15))
			{
				return 1;
			}
			break;
		
		case 40:
			return func_979(func_21(uParam0->f_1092, 1));
		
		case 41:
			if (func_21(uParam0->f_1092, 2) && func_21(uParam0->f_1092, 7))
			{
				return 1;
			}
			break;
		
		case 42:
			return func_979(func_21(uParam0->f_1092, 3));
		
		case 43:
			if (func_21(uParam0->f_1092, 4) && func_21(uParam0->f_1092, 7))
			{
				return 2;
			}
			break;
		
		case 44:
			return func_979(func_21(uParam0->f_1092, 5));
		
		case 45:
			return func_979(func_21(uParam0->f_1092, 6));
		
		case 46:
			return func_979(func_21(uParam0->f_1092, 2));
		
		case 47:
			return func_979(func_21(uParam0->f_1092, 7));
		
		case 48:
			return func_979(func_21(uParam0->f_1092, 4));
		
		case 49:
			return func_979(func_21(uParam0->f_1092, 7));
		
		case 50:
			return func_979(func_21(uParam0->f_1092, 8));
		
		case 53:
			return func_979(func_21(uParam0->f_1092, 9));
		
		case 51:
			return func_979(func_21(uParam0->f_1092, 10));
		
		case 52:
			return func_979(func_21(uParam0->f_1092, 11));
		
		case 54:
			return func_979((func_21(uParam0->f_1092, 12) && func_397(uParam0->f_1092) == 1));
		
		case 55:
			return func_979((func_21(uParam0->f_1092, 12) && func_397(uParam0->f_1092) == 2));
		
		case 56:
			return func_979((func_21(uParam0->f_1092, 12) && func_397(uParam0->f_1092) == 3));
		
		case 57:
			return func_979((func_21(uParam0->f_1092, 12) && func_397(uParam0->f_1092) == 4));
		
		case 58:
			return func_979((func_21(uParam0->f_1092, 12) && func_397(uParam0->f_1092) == 5));
		
		case 59:
			return func_979(func_434(uParam0->f_1092));
		
		case 60:
			return func_979(func_21(uParam0->f_1092, 13));
		
		case 61:
			return func_979(func_21(uParam0->f_1092, 14));
		
		case 62:
			return func_979(func_21(uParam0->f_1092, 15));
	}
	return 0;
}

int func_987(int iParam0)//Position - 0x23CC9
{
	if (iParam0 != -1)
	{
		return Global_1972721[iParam0 /*53*/].f_5.f_10.f_17 == Global_1972721[iParam0 /*53*/].f_5.f_10.f_18;
	}
	return 0;
}

void func_988(var uParam0)//Position - 0x23CF8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_968(uParam0, &(Local_114[0 /*14*/]), 0, 0, 1, 0);
	if (!func_20(uParam0->f_1092, 0) && !func_382(uParam0->f_1092))
	{
		return;
	}
	func_968(uParam0, &(Local_114[1 /*14*/]), 0, 0, 2, 0);
	func_968(uParam0, &(Local_114[2 /*14*/]), 0, 0, 3, 0);
	func_968(uParam0, &(Local_114[3 /*14*/]), 0, 0, 4, 0);
	func_968(uParam0, &(Local_114[4 /*14*/]), 0, 0, 5, 0);
	func_968(uParam0, &(Local_114[5 /*14*/]), 0, 0, 6, 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar2 = (7 + iVar0);
		if (func_404(uParam0->f_1092, func_989(iVar2), 0, 0))
		{
			func_968(uParam0, &(Local_369[iVar1 /*14*/]), 0, 2, iVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_968(uParam0, &(Local_369[iVar1 /*14*/]), 0, 2, 7, 1);
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar2 = (12 + iVar0);
		if (func_402(uParam0->f_1092, func_403(iVar2)))
		{
			func_968(uParam0, &(Local_199[iVar1 /*14*/]), 0, 3, iVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = (20 + iVar0);
		if (func_400(uParam0->f_1092, func_401(iVar2)))
		{
			func_968(uParam0, &(Local_312[iVar1 /*14*/]), 0, 4, iVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = (24 + iVar0);
		if (func_398(uParam0->f_1092, func_399(iVar2)))
		{
			func_968(uParam0, &(Local_525[iVar1 /*14*/]), 0, 5, iVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	if (func_427(uParam0->f_1092))
	{
		func_968(uParam0, &(Local_440[iVar1 /*14*/]), 0, 6, 30, 0);
		iVar1++;
	}
	if (func_425(uParam0->f_1092))
	{
		func_968(uParam0, &(Local_440[iVar1 /*14*/]), 0, 6, 31, 0);
		iVar1++;
	}
	if (func_419(uParam0->f_1092))
	{
		func_968(uParam0, &(Local_440[iVar1 /*14*/]), 0, 6, 32, 0);
		iVar1++;
	}
	if (func_413(uParam0->f_1092))
	{
		func_968(uParam0, &(Local_440[iVar1 /*14*/]), 0, 6, 33, 0);
		iVar1++;
	}
	if (func_407(uParam0->f_1092))
	{
		func_968(uParam0, &(Local_440[iVar1 /*14*/]), 0, 6, 34, 0);
		iVar1++;
	}
	if (func_406(uParam0->f_1092))
	{
		func_968(uParam0, &(Local_440[iVar1 /*14*/]), 0, 6, 35, 0);
		iVar1++;
	}
	if (iVar1 == 0)
	{
		func_968(uParam0, &(Local_440[iVar1 /*14*/]), 0, 6, 32, 1);
	}
}

int func_989(int iParam0)//Position - 0x23F9A
{
	switch (iParam0)
	{
		case 7:
			return 0;
		
		case 8:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 3;
		
		case 11:
			return 4;
		
		default:
	}
	return -1;
}

void func_990(var uParam0)//Position - 0x23FDC
{
	if (iLocal_1435 == 4)
	{
		iLocal_1435 = 5;
	}
}

void func_991(var uParam0)//Position - 0x23FEF
{
	if (iLocal_1435 == 0)
	{
		iLocal_1435 = 1;
	}
}

char* func_992()//Position - 0x24003
{
	if (!func_382(iLocal_1445) && !func_20(iLocal_1445, 0))
	{
		return "HIP_PROMPT2" /* GXT: Press ~INPUT_CONTEXT~ to access the Planning Screen ~HUD_COLOUR_GREEN~~BLIP_MP_HEIST~~s~ and begin the setup for The Cayo Perico Heist. */;
	}
	return "HIP_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to use the Planning Screen. */;
}

int func_993()//Position - 0x2402F
{
	if (iLocal_1435 > 0)
	{
		return 0;
	}
	return 1;
}

int func_994()//Position - 0x24043
{
	return func_239(PLAYER::PLAYER_ID());
}

int func_995()//Position - 0x24053
{
	if (MISC::ABSF((GRAPHICS::GET_ASPECT_RATIO(false) - 1.3333333f)) < 0.1f)
	{
		return 0;
	}
	return 1;
}

int func_996()//Position - 0x24078
{
	return 0;
}

Vector3 func_997()//Position - 0x24081
{
	return func_998();
}

Vector3 func_998()//Position - 0x2408D
{
	return 1561.0537f, 385.9017f, -50.6854f;
}

int func_999()//Position - 0x240A4
{
	return 0;
}

int func_1000()//Position - 0x240AD
{
	return iLocal_1544;
}

void func_1001(var uParam0)//Position - 0x240B8
{
	if (func_1004(uParam0) || func_1003())
	{
		if (!uParam0->f_1099 && !func_1003())
		{
			func_1002(uParam0, 5);
			uParam0->f_1099 = 1;
		}
		else if (uParam0->f_732 == 5 || func_1003())
		{
			func_489(2);
			uParam0->f_1099 = 0;
		}
	}
}

void func_1002(var uParam0, int iParam1)//Position - 0x24118
{
	if (uParam0->f_732 != iParam1)
	{
		uParam0->f_732.f_1 = uParam0->f_732;
		MISC::SET_BIT(&(uParam0->f_732.f_4), uParam0->f_732.f_1);
		MISC::CLEAR_BIT(&(uParam0->f_732.f_3), uParam0->f_732.f_1);
		uParam0->f_732 = iParam1;
		if (uParam0->f_732 == 7)
		{
			uParam0->f_732 = 5;
		}
	}
}

int func_1003()//Position - 0x24170
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (func_123() && func_71() == 1)
	{
		return 1;
	}
	if (Global_1970744.f_1103)
	{
		return 1;
	}
	return 0;
}

int func_1004(var uParam0)//Position - 0x241A9
{
	if (BitTest(uParam0->f_1093, 12))
	{
		return 1;
	}
	if (BitTest(uParam0->f_1093, 13))
	{
		return 1;
	}
	if (func_1005())
	{
		return 1;
	}
	if (Local_1446.f_47 != 0)
	{
		Call_Loc(Local_1446.f_47);
		if (StackVal)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1005()//Position - 0x241F1
{
	return Global_2684312.f_696;
}

void func_1006()//Position - 0x24200
{
	iLocal_1444 = PLAYER::PLAYER_PED_ID();
	iLocal_1445 = PLAYER::PLAYER_ID();
}

void func_1007(var uParam0)//Position - 0x24216
{
	func_1018(uParam0);
	func_1016(uParam0);
	func_1009();
	func_116();
	func_1008();
	if (PLAYER::PLAYER_ID() != -1 && Global_1971856[PLAYER::PLAYER_ID() /*27*/].f_20)
	{
		Global_1971856[PLAYER::PLAYER_ID() /*27*/].f_20 = 0;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1008()//Position - 0x24261
{
	if (Global_1971853)
	{
		Global_1971853 = 0;
	}
	if (iLocal_1430)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("HS4F_INT");
	}
}

void func_1009()//Position - 0x24283
{
	func_1015(&Global_1970744);
	func_1014(&(Global_1970744.f_732));
	func_1013(&(Global_1970744.f_738));
	func_1012(&(Global_1970744.f_747));
	func_1011(&(Global_1970744.f_812));
	func_1010(&(Global_1970744.f_826));
	Global_1970744.f_1090 = -1;
	Global_1970744.f_1092 = func_17();
	Global_1970744.f_1093 = 0;
	Global_1970744.f_1102 = 0;
	Global_1970744.f_1091 = -1;
	Global_1970744.f_1103 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_25 = -1;
		Global_1971856[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*27*/].f_26 = 0;
	}
}

void func_1010(var uParam0)//Position - 0x2431E
{
	struct<5> Var0;
	
	Var0.f_4 = 1;
	*uParam0 = { Var0 };
}

void func_1011(var uParam0)//Position - 0x24337
{
	struct<14> Var0;
	
	*uParam0 = { Var0 };
}

void func_1012(var uParam0)//Position - 0x24349
{
	struct<65> Var0;
	
	Var0.f_63 = 500;
	Var0.f_64 = 2;
	*uParam0 = { Var0 };
}

void func_1013(var uParam0)//Position - 0x2436C
{
	struct<9> Var0;
	
	*uParam0 = { Var0 };
}

void func_1014(var uParam0)//Position - 0x2437E
{
	struct<6> Var0;
	
	*uParam0 = { Var0 };
}

void func_1015(var uParam0)//Position - 0x2438E
{
	struct<732> Var0;
	
	if (uParam0->f_716 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_716))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_716));
	}
	if (uParam0->f_717 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_717))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_717));
	}
	Var0.f_1 = 12;
	Var0.f_699 = 1065353216;
	Var0.f_702 = 1;
	Var0.f_703 = 1;
	*uParam0 = { Var0 };
}

void func_1016(var uParam0)//Position - 0x24409
{
	if (Local_1446.f_7 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7);
		func_1017(StackVal);
	}
	if (Local_1446.f_7.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1446.f_7.f_2);
		func_1017(StackVal);
	}
}

void func_1017(char* sParam0)//Position - 0x2443F
{
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sParam0))
	{
		HUD::RELEASE_NAMED_RENDERTARGET(sParam0);
	}
}

void func_1018(var uParam0)//Position - 0x24457
{
	if (uParam0->f_1088)
	{
		if (uParam0->f_1088.f_1 != -1)
		{
			AUDIO::STOP_SOUND(uParam0->f_1088.f_1);
			AUDIO::RELEASE_SOUND_ID(uParam0->f_1088.f_1);
			uParam0->f_1088.f_1 = -1;
			uParam0->f_1088 = 0;
		}
	}
}

int func_1019(var uParam0)//Position - 0x24496
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (BitTest(uParam0->f_1093, 13))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1093), 13);
	}
	if (BitTest(uParam0->f_1093, 14))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1093), 14);
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1020();
	return 1;
}

void func_1020()//Position - 0x244DF
{
	if (!Global_1971853)
	{
		Global_1971853 = 1;
	}
}

