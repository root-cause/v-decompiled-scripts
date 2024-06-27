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
	int iLocal_16 = 0;
	int iLocal_17[2] = { 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_52();
	}
	while (true)
	{
		SYSTEM::WAIT(250);
		switch (iLocal_16)
		{
			case 0:
				if (iLocal_17[0])
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						Global_23405[3 /*42*/].f_27[0] = func_51(2);
						func_50(2, 32, Global_23405[3 /*42*/].f_27[0]);
					}
					StringCopy(&(Global_23405[3 /*42*/]), "PA_TREV1" /* GXT: Earn one million dollars. */, 16);
					StringCopy(&(Global_23405[3 /*42*/].f_4), "PA_TREV1" /* GXT: Earn one million dollars. */, 16);
					Global_23405[3 /*42*/].f_8 = 0;
					Global_23405[3 /*42*/].f_9 = 1;
					StringCopy(&(Global_23405[3 /*42*/].f_10[1 /*4*/]), "PA_TREV1A" /* GXT: Current wealth $~1~. */, 16);
					Global_23405[3 /*42*/].f_37[1] = 0;
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						Global_23405[3 /*42*/].f_27[1] = func_51(2);
					}
					func_43(2, 3, 1, 1);
					func_40("PA_TREV1A" /* GXT: Current wealth $~1~. */, Global_23405[3 /*42*/].f_27[1]);
					iLocal_16 = 1;
				}
				break;
			
			case 1:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					Global_23405[3 /*42*/].f_27[1] = func_51(2);
					if (func_39(2, 999999))
					{
						func_38("PA_COMPLETE" /* GXT: Goal achieved ~a~ */, "PA_TREV1" /* GXT: Earn one million dollars. */, 2000, 1);
						Global_23405[3 /*42*/].f_37[1] = 1;
						Global_23405[3 /*42*/].f_8 = 1;
						iLocal_22 = MISC::GET_GAME_TIMER();
						iLocal_16 = 2;
					}
					else if (func_39(2, 499999))
					{
						if (!iLocal_20)
						{
							func_37("PA_TREV1" /* GXT: Earn one million dollars. */, 2000, 1);
							iLocal_20 = 1;
						}
					}
					if (iLocal_17[1])
					{
						func_1(2, 32, 500000, 0, 0);
						iLocal_17[1] = 0;
					}
				}
				break;
			
			case 2:
				iLocal_21 = MISC::GET_GAME_TIMER();
				if ((iLocal_21 - iLocal_22) < 5000)
				{
					func_40("PA_TREV1A" /* GXT: Current wealth $~1~. */, Global_23405[3 /*42*/].f_27[1]);
				}
				break;
		}
	}
}

void func_1(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1D5
{
	int iVar0;
	int iVar1;
	
	if (func_36(iParam0) == 3)
	{
		return;
	}
	if (func_36(iParam0) == 4)
	{
		return;
	}
	func_2(func_36(iParam0), 1, iParam1, iParam2, 0);
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

int func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2A7
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_35();
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
					func_34(99, 1);
					func_33(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_33(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_33(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_17(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_14(5))
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
							func_33(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_33(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_33(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_14(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_33(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_33(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_33(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_33(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_33(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_33(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_33(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_33(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_33(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_33(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_33(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_33(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_14(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_33(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_33(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_33(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_33(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_13(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_34(95, iParam3);
					break;
				
				case 1:
					func_34(97, iParam3);
					break;
				
				case 2:
					func_34(96, iParam3);
					break;
			}
			func_34(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_5(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_5(bVar1);
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
					func_33(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_33(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_33(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_4(iParam0);
	if (Global_44042 == 15)
	{
		func_3(0);
	}
	return 1;
}

void func_3(bool bParam0)//Position - 0x8A6
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

void func_4(int iParam0)//Position - 0xB28
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

void func_5(bool bParam0)//Position - 0xB82
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_12(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_12(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_12(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_12(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_8(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_8(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_8(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_8(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_8(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_8(8277, 0, -1, 1);
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
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_7() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_7() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_6(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_6(bool bParam0)//Position - 0xCF9
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

int func_7()//Position - 0xDED
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_8(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xDFA
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_9(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_9(int iParam0, var uParam1)//Position - 0xE28
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_10(uParam1));
}

int func_10(var uParam0)//Position - 0xE3D
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_11();
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

int func_11()//Position - 0xE71
{
	return Global_1574926;
}

void func_12(int iParam0, bool bParam1, int iParam2)//Position - 0xE7D
{
	if (iParam2 == -1)
	{
		iParam2 = func_11();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_13(int iParam0)//Position - 0xE9B
{
	func_34(93, iParam0);
	func_34(29, iParam0);
	func_34(30, iParam0);
}

int func_14(int iParam0)//Position - 0xEBB
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
		return func_16(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_16(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_16(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_16(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_15(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_15(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_15(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_15(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_15(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_15(8277, -1);
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
	return BitTest(Global_2359296[func_7() /*5570*/].f_681.f_10, iParam0);
}

int func_15(int iParam0, int iParam1)//Position - 0x105B
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_9(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_16(int iParam0, int iParam1)//Position - 0x108A
{
	if (iParam1 == -1)
	{
		iParam1 = func_11();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_17(bool bParam0)//Position - 0x10A6
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
		func_32(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_18(27, 1);
	return 1;
}

int func_18(int iParam0, int iParam1)//Position - 0x115D
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_19(iParam0, iParam1);
}

int func_19(int iParam0, int iParam1)//Position - 0x1178
{
	if (func_31(14) && !func_30(iParam0))
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
	if (func_29(&Global_4543384))
	{
		if (func_27(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_20(&Global_4543384, iParam0))
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

int func_20(var uParam0, int iParam1)//Position - 0x1215
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	func_23(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_21(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_21(var uParam0, int iParam1)//Position - 0x12C6
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_22(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_22(var uParam0, int iParam1)//Position - 0x1341
{
	return (*uParam0)[iParam1] == 78;
}

void func_23(var uParam0)//Position - 0x1352
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_24(uParam0, iVar0);
		iVar0++;
	}
	func_25(uParam0, (Global_4543383 - 0.5f));
}

void func_24(var uParam0, int iParam1)//Position - 0x1386
{
	(*uParam0)[iParam1] = 78;
}

void func_25(var uParam0, float fParam1)//Position - 0x1396
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

float func_26(var uParam0)//Position - 0x13B3
{
	return uParam0->f_80;
}

bool func_27(var uParam0, int iParam1)//Position - 0x13BF
{
	return func_28(uParam0, iParam1) != -1;
}

int func_28(var uParam0, int iParam1)//Position - 0x13D1
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

bool func_29(var uParam0)//Position - 0x13FE
{
	return uParam0->f_79 == 1;
}

int func_30(int iParam0)//Position - 0x140C
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

bool func_31(int iParam0)//Position - 0x145C
{
	return Global_44042 == iParam0;
}

int func_32(int iParam0, int iParam1)//Position - 0x146A
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

void func_33(int iParam0, int iParam1)//Position - 0x14BB
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_34(int iParam0, int iParam1)//Position - 0x14DE
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

void func_35()//Position - 0x153B
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

int func_36(int iParam0)//Position - 0x15B0
{
	return Global_2169[iParam0 /*29*/].f_17;
}

void func_37(char* sParam0, int iParam1, int iParam2)//Position - 0x15C1
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, false);
}

void func_38(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x15DA
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, false);
}

int func_39(int iParam0, int iParam1)//Position - 0x15F9
{
	if (func_51(iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_40(char* sParam0, int iParam1)//Position - 0x1614
{
	GRAPHICS::DRAW_RECT(0.852f, 0.81f, 0.141f, 0.025f, 0, 0, 0, 175, false);
	func_42(255, 255, 255, 255);
	func_41(0.81f, 0.8f, sParam0, iParam1, 0);
}

void func_41(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1657
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1675
{
	HUD::SET_TEXT_SCALE(0.3f, 0.3f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

int func_43(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x16B4
{
	if (func_49())
	{
		return 0;
	}
	if (func_44(iParam0, iParam1, bParam2, iParam3) == 1)
	{
		return 1;
	}
	return 0;
}

int func_44(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x16DF
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsidetask")) > 0)
	{
		return 0;
	}
	if (func_47() == 0)
	{
		func_46();
		return 0;
	}
	func_45(Global_23404);
	Global_23574[Global_23404 /*9*/].f_1 = uParam1;
	Global_23574[Global_23404 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_23574[Global_23404 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 1;
}

void func_45(int iParam0)//Position - 0x1743
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_23574[iParam0 /*9*/].f_2 = iVar0;
	Global_23574[iParam0 /*9*/].f_2.f_1 = iVar1;
	Global_23574[iParam0 /*9*/].f_2.f_2 = iVar2;
	Global_23574[iParam0 /*9*/].f_2.f_3 = iVar3;
	Global_23574[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_23574[iParam0 /*9*/].f_2.f_5 = iVar5;
}

void func_46()//Position - 0x17BD
{
}

int func_47()//Position - 0x17C5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_23574[iVar0 /*9*/].f_8 == 0)
		{
			Global_23404 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_23404 = 3;
	Global_23574[Global_23404 /*9*/].f_2 = -1;
	Global_23574[Global_23404 /*9*/].f_2.f_1 = 0;
	Global_23574[Global_23404 /*9*/].f_2.f_2 = 0;
	Global_23574[Global_23404 /*9*/].f_2.f_3 = 0;
	Global_23574[Global_23404 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_23574[iVar0 /*9*/].f_8 == 0 || Global_23574[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_48(Global_23574[iVar0 /*9*/].f_2, Global_23574[Global_23404 /*9*/].f_2))
			{
				Global_23404 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_23404 == 3)
	{
		return 0;
	}
	return 1;
}

int func_48(struct<6> Param0, struct<6> Param6)//Position - 0x189F
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_49()//Position - 0x198A
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1, int iParam2)//Position - 0x19B1
{
	if (func_36(iParam0) == 3)
	{
		return 0;
	}
	if (func_36(iParam0) == 4)
	{
		return 0;
	}
	return func_2(func_36(iParam0), 0, iParam1, iParam2, 0);
}

int func_51(int iParam0)//Position - 0x19E5
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

void func_52()//Position - 0x1A3D
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

