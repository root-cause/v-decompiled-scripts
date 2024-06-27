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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	struct<3> Local_25 = { 0, 0, 0 } ;
	struct<3> Local_28 = { 0, 0, 0 } ;
	int iLocal_31 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	float fVar1;
	int iVar2;
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
	iLocal_18 = -15;
	iLocal_19 = -15;
	iLocal_20 = -1;
	iLocal_24 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_99();
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stock_controller")) > 1)
	{
		func_99();
	}
	Global_64150 = 1;
	iLocal_20 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(480) / 16f));
	func_98();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_59908[iVar0 /*7*/])
		{
			if (Global_59908[iVar0 /*7*/].f_2)
			{
				if (!Global_59908[iVar0 /*7*/].f_4)
				{
					STATS::STAT_GET_INT(Global_59908[iVar0 /*7*/].f_3, &(Global_59908[iVar0 /*7*/].f_5), -1);
				}
				else
				{
					fVar1 = 0f;
					STATS::STAT_GET_FLOAT(Global_59908[iVar0 /*7*/].f_3, &fVar1, -1);
					Global_59908[iVar0 /*7*/].f_5 = SYSTEM::FLOOR(fVar1);
				}
			}
		}
		iVar0++;
	}
	func_97();
	func_95();
	func_94();
	func_91();
	Global_64150 = 0;
	func_90(1);
	func_87();
	func_84();
	while (true)
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (!Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 < 11)
			{
				Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
			}
			iVar2++;
		}
		func_80();
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_79(14))
		{
			func_68();
			iVar3 = 16;
			while (func_67() && iVar3 >= 0)
			{
				iVar3 = (iVar3 - 1);
				func_47();
				Global_61344 = 1;
				func_41();
				Global_64152 = 1;
				func_39();
				func_38();
			}
			if (func_30())
			{
				func_28(0);
				func_38();
				func_27();
				func_38();
				func_87();
				func_38();
			}
			while (Global_61337 > 0)
			{
				func_11(&iLocal_18, 0, 480, 0, 0, 0, 0);
				func_11(&iLocal_19, 0, 480, 0, 0, 0, 0);
				Global_61337 = (Global_61337 - 1);
			}
		}
		func_4();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x201
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return;
	}
	iVar1 = func_3(iVar0);
	if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
	{
		func_2(89, 1);
		if (ENTITY::GET_ENTITY_SPEED(iVar1) > 5f)
		{
			func_2(90, 1);
		}
	}
}

void func_2(int iParam0, int iParam1)//Position - 0x24A
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

int func_3(int iParam0)//Position - 0x2A7
{
	return iParam0;
}

void func_4()//Position - 0x2B1
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (Global_61338)
		{
			Global_61338 = 0;
			Global_61339 = MISC::GET_GAME_TIMER();
			Global_64151 = 1;
		}
		return;
	}
	if (Global_61338)
	{
		if (!STATS::STAT_COMMUNITY_SYNCH_IS_PENDING())
		{
			iVar0 = func_5();
			Global_61338 = 0;
			if (iVar0 < 5)
			{
				Global_64151 = 0;
			}
		}
	}
}

int func_5()//Position - 0x2FE
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE() || !NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_56465[iVar0 /*36*/].f_8)
		{
			if (Global_56465[iVar0 /*36*/].f_35 > -1)
			{
				iVar2 = Global_59346[Global_56465[iVar0 /*36*/].f_35 /*7*/];
				STATS::STAT_GET_FLOAT(iVar2, &(Global_56465[iVar0 /*36*/].f_9), -1);
				if (Global_56465[iVar0 /*36*/].f_9 > 0f)
				{
					fVar3 = 0f;
					STATS::STAT_COMMUNITY_GET_HISTORY(iVar2, 0, &(Global_56465[iVar0 /*36*/].f_33));
					Global_56465[iVar0 /*36*/].f_31 = Global_56465[iVar0 /*36*/].f_9;
					Global_56465[iVar0 /*36*/].f_32 = Global_56465[iVar0 /*36*/].f_9;
					fVar3 = (fVar3 + Global_56465[iVar0 /*36*/].f_33);
					iVar4 = 0;
					while (iVar4 < 4)
					{
						fVar5 = 0f;
						STATS::STAT_COMMUNITY_GET_HISTORY(iVar2, iVar4 + 1, &fVar5);
						if (fVar5 > Global_56465[iVar0 /*36*/].f_31)
						{
							Global_56465[iVar0 /*36*/].f_31 = fVar5;
						}
						if (fVar5 < Global_56465[iVar0 /*36*/].f_32)
						{
							Global_56465[iVar0 /*36*/].f_32 = fVar5;
						}
						fVar3 = (fVar3 + fVar5);
						iVar4++;
					}
					fVar3 = (fVar3 / 5f);
					fVar6 = func_6(iVar0);
					if (fVar6 > Global_56465[iVar0 /*36*/].f_31)
					{
						Global_56465[iVar0 /*36*/].f_31 = fVar6;
					}
					if (fVar6 < Global_56465[iVar0 /*36*/].f_32)
					{
						Global_56465[iVar0 /*36*/].f_32 = fVar6;
					}
					Global_56465[iVar0 /*36*/].f_33 = (fVar6 - fVar3);
					Global_56465[iVar0 /*36*/].f_34 = ((Global_56465[iVar0 /*36*/].f_33 / fVar3) * 100f);
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

float func_6(int iParam0)//Position - 0x497
{
	int iVar0;
	float fVar1;
	
	iVar0 = iParam0;
	fVar1 = (Global_56465[iParam0 /*36*/].f_9 * func_7(iVar0));
	return (SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fVar1 * 100f))) / 100f);
}

float func_7(int iParam0)//Position - 0x4CB
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = 1f;
	switch (iParam0)
	{
		case 61:
			if (Global_113969.f_9088.f_99.f_58[131])
			{
				fVar0 = 0.5f;
			}
			break;
		
		case 73:
			if (func_10(25))
			{
				fVar0 = (fVar0 * 3f);
			}
			else
			{
				if (func_10(74) || func_10(75))
				{
					fVar0 = (fVar0 * 0.95f);
				}
				if (func_10(14))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(16))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(48))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(24))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(27))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
		
		case 66:
			if (func_10(49))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			if (func_10(10))
			{
				fVar0 = (fVar0 * 0.95f);
			}
			break;
		
		case 59:
			if (func_10(93))
			{
				if (!func_10(47))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_10(38))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_10(84))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			break;
		
		case 69:
			if (func_10(90))
			{
				if (!func_10(14))
				{
					fVar0 = (fVar0 * 0.7f);
				}
			}
			break;
		
		case 16:
			if (func_10(28))
			{
				fVar0 = (fVar0 * 2f);
			}
			break;
		
		case 52:
			if (func_10(93))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.6f);
				}
			}
			break;
		
		case 56:
			if (func_10(61))
			{
				if (!func_10(49))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
	}
	if (Global_113969.f_20567.f_442 < 1)
	{
		return fVar0;
	}
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_113969.f_20567.f_443[iVar2] == iParam0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 > -1)
	{
		fVar0 = func_9(Global_113969.f_20567.f_452[iVar1], Global_113969.f_20567.f_461[iVar1]);
	}
	if (fVar0 > 1f)
	{
		fVar3 = (fVar0 - 1f);
		iVar4 = iParam0;
		iVar5 = func_8(0, iVar4);
		iVar6 = func_8(1, iVar4);
		iVar7 = func_8(2, iVar4);
		if (((iVar5 + iVar6) + iVar7) > 0)
		{
			iVar8 = ((Global_61340[0] + Global_61340[1]) + Global_61340[2]);
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_113969.f_20567.f_22[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_113969.f_20567.f_11[iVar2]));
				}
				if (Global_113969.f_20567.f_55[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_113969.f_20567.f_44[iVar2]));
				}
				if (Global_113969.f_20567.f_88[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_113969.f_20567.f_77[iVar2]));
				}
				iVar2++;
			}
			iVar9 = 700000000;
			iVar10 = 1000000000;
			if (iVar8 > iVar10)
			{
				fVar3 = 0f;
			}
			else if (iVar8 < iVar9)
			{
				fVar3 = 1f;
			}
			else
			{
				fVar11 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
				fVar12 = SYSTEM::TO_FLOAT((iVar10 - iVar9));
				fVar3 = (fVar3 * (1f - (fVar11 / fVar12)));
			}
		}
		fVar0 = (1f + fVar3);
	}
	return fVar0;
}

int func_8(int iParam0, int iParam1)//Position - 0x844
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return Global_113969.f_20567.f_22[iParam1];
			break;
		
		case 1:
			return Global_113969.f_20567.f_55[iParam1];
			break;
		
		case 2:
			return Global_113969.f_20567.f_88[iParam1];
			break;
	}
	return 0;
}

float func_9(int iParam0, var uParam1)//Position - 0x8B5
{
	float fVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	fVar0 = 0f;
	if (iParam0 < 1)
	{
		return 1f;
	}
	bVar1 = BitTest(uParam1, 0);
	fVar2 = SYSTEM::TO_FLOAT(iParam0);
	iVar3 = 0;
	if (BitTest(uParam1, 3))
	{
		iVar3++;
	}
	if (BitTest(uParam1, 4))
	{
		iVar3 += 2;
	}
	if (BitTest(uParam1, 5))
	{
		iVar3 += 4;
	}
	if (BitTest(uParam1, 20))
	{
		iVar3 += 8;
	}
	fVar4 = SYSTEM::TO_FLOAT((3 * iVar3));
	if (BitTest(uParam1, 2))
	{
		fVar4 = (fVar4 * 7f);
	}
	if (BitTest(uParam1, 1))
	{
		if (func_10(21))
		{
			return 1f;
		}
	}
	else if (fVar4 < 1f)
	{
		return 1f;
	}
	fVar5 = (1f - (fVar2 / fVar4));
	if (BitTest(uParam1, 16))
	{
		fVar0 = (fVar0 - 0.5f);
	}
	if (BitTest(uParam1, 17))
	{
		fVar0 = (fVar0 - 0.25f);
	}
	if (BitTest(uParam1, 18))
	{
		fVar0 = (fVar0 - 0.1f);
	}
	if (BitTest(uParam1, 19))
	{
		fVar0 = (fVar0 - 0.33f);
	}
	if (bVar1)
	{
		fVar0 = -fVar0;
	}
	if (!BitTest(uParam1, 1))
	{
		if (BitTest(uParam1, 6))
		{
			fVar6 = 0f;
			if (BitTest(uParam1, 8))
			{
				fVar6 = (fVar6 + 0.5f);
			}
			if (BitTest(uParam1, 9))
			{
				fVar6 = (fVar6 + 0.25f);
			}
			if (BitTest(uParam1, 10))
			{
				fVar6 = (fVar6 + 0.125f);
			}
			if (fVar5 < fVar6)
			{
				fVar7 = (fVar5 / fVar6);
				if (BitTest(uParam1, 7))
				{
					fVar7 = (1f - fVar7);
					fVar7 = (fVar7 * fVar7);
					fVar7 = (1f - fVar7);
				}
				fVar0 = (fVar0 * fVar7);
			}
		}
		if (BitTest(uParam1, 11))
		{
			fVar8 = 0f;
			if (BitTest(uParam1, 13))
			{
				fVar8 = (fVar8 + 0.5f);
			}
			if (BitTest(uParam1, 14))
			{
				fVar8 = (fVar8 + 0.25f);
			}
			if (BitTest(uParam1, 15))
			{
				fVar8 = (fVar8 + 0.125f);
			}
			fVar9 = (1f - fVar8);
			if (fVar5 > fVar9)
			{
				fVar10 = ((fVar5 - fVar9) / fVar8);
				if (BitTest(uParam1, 12))
				{
					fVar10 = (fVar10 * fVar10);
				}
				fVar0 = (fVar0 * (1f - fVar10));
			}
		}
	}
	fVar0 = (1f + fVar0);
	return fVar0;
}

bool func_10(int iParam0)//Position - 0xA95
{
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_11(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAAB
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
	
	iVar0 = func_25(*iParam0);
	iVar1 = func_24(*iParam0);
	iVar2 = func_23(*iParam0);
	iVar3 = func_22(*iParam0);
	iVar4 = func_21(*iParam0);
	iVar5 = func_20(*iParam0);
	if (((iParam4 == 0 && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		iVar7 = iVar0;
		if (iVar6 < 0)
		{
			iVar6 = 11;
			iVar7 = (iVar7 - 1);
		}
		iVar8 = iVar6;
		iVar9 = func_19(iVar8, iVar7);
		iVar2 = (iVar2 + iVar9);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_12(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC00
{
	func_18(iParam0, iParam1);
	func_17(iParam0, iParam2);
	func_16(iParam0, iParam3);
	func_15(iParam0, iParam5);
	func_14(iParam0, iParam4);
	func_13(iParam0, iParam6);
}

void func_13(int iParam0, int iParam1)//Position - 0xC38
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_14(int iParam0, int iParam1)//Position - 0xCBE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_24(*iParam0);
	iVar1 = func_25(*iParam0);
	if (iParam1 < 1 || iParam1 > func_19(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 496);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_15(int iParam0, int iParam1)//Position - 0xD0F
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15);
	*iParam0 = (*iParam0 || iParam1);
}

void func_16(int iParam0, int iParam1)//Position - 0xD42
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_17(int iParam0, int iParam1)//Position - 0xD7C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_18(int iParam0, int iParam1)//Position - 0xDB7
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_19(int iParam0, int iParam1)//Position - 0xDF3
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

int func_20(int iParam0)//Position - 0xE95
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_21(int iParam0)//Position - 0xEA8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_22(int iParam0)//Position - 0xEBB
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_23(int iParam0)//Position - 0xECE
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_24(int iParam0)//Position - 0xEE0
{
	return iParam0 & 15;
}

var func_25(int iParam0)//Position - 0xEED
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_26(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_26(bool bParam0, int iParam1, int iParam2)//Position - 0xF0F
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_27()//Position - 0xF26
{
	int iVar0;
	
	if (Global_113969.f_20567.f_442 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!BitTest(Global_113969.f_20567.f_461[iVar0], 1))
		{
			if (Global_113969.f_20567.f_452[iVar0] > 0)
			{
				Global_113969.f_20567.f_452[iVar0] = (Global_113969.f_20567.f_452[iVar0] - 1);
				if (Global_113969.f_20567.f_452[iVar0] < 1)
				{
					Global_113969.f_20567.f_452[iVar0] = 0;
					Global_113969.f_20567.f_442 = (Global_113969.f_20567.f_442 - 1);
				}
			}
		}
		iVar0++;
	}
}

void func_28(bool bParam0)//Position - 0xFCD
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		func_29(iVar0, bParam0);
		SYSTEM::WAIT(0);
		if (!bParam0)
		{
			func_68();
		}
		iVar0++;
	}
}

void func_29(int iParam0, bool bParam1)//Position - 0x1002
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (Global_56465[iParam0 /*36*/].f_8)
	{
		return;
	}
	fVar0 = Global_56465[iParam0 /*36*/].f_9;
	if (!bParam1)
	{
		fVar0 = func_6(iParam0);
	}
	if (fVar0 == 0f)
	{
		return;
	}
	Global_56465[iParam0 /*36*/].f_14[Global_56465[iParam0 /*36*/].f_13] = fVar0;
	if (fVar0 > Global_56465[iParam0 /*36*/].f_31)
	{
		Global_56465[iParam0 /*36*/].f_31 = fVar0;
	}
	if (fVar0 < Global_56465[iParam0 /*36*/].f_32)
	{
		Global_56465[iParam0 /*36*/].f_32 = fVar0;
	}
	Global_56465[iParam0 /*36*/].f_13++;
	if (Global_56465[iParam0 /*36*/].f_13 >= 16)
	{
		Global_56465[iParam0 /*36*/].f_13 = 0;
	}
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < 16)
	{
		fVar1 = (fVar1 + Global_56465[iParam0 /*36*/].f_14[iVar2]);
		iVar2++;
	}
	fVar1 = (fVar1 / SYSTEM::TO_FLOAT(16));
	Global_56465[iParam0 /*36*/].f_33 = (fVar0 - fVar1);
	Global_56465[iParam0 /*36*/].f_34 = ((Global_56465[iParam0 /*36*/].f_33 / fVar1) * 100f);
}

int func_30()//Position - 0x110E
{
	int iVar0;
	
	if (iLocal_18 == -15)
	{
		iLocal_18 = func_37();
		iVar0 = func_22(iLocal_18);
		if (iVar0 == 24)
		{
			iVar0 = 0;
		}
		if (func_36(iVar0, 0, 8))
		{
			func_16(&iLocal_18, 8);
		}
		else if (func_36(iVar0, 8, 16))
		{
			func_16(&iLocal_18, 16);
		}
		else if (func_36(iVar0, 16, 24))
		{
			func_16(&iLocal_18, 0);
			func_35(&iLocal_18, 0, 0, 0, 1, 0, 0);
		}
		func_17(&iLocal_18, 0);
		func_18(&iLocal_18, 0);
		iLocal_19 = iLocal_18;
		return 0;
	}
	if (func_34(iLocal_18))
	{
		if (func_31(&iLocal_18, 1, 8))
		{
			return 0;
		}
		func_35(&iLocal_18, 0, 480, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1, int iParam2)//Position - 0x11C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_33(Global_1574630))
	{
		if (bParam1)
		{
			iVar0 = func_37();
			iVar1 = func_22(Global_1574630);
			iVar2 = func_21(Global_1574630);
			func_16(&iVar0, iVar1);
			func_17(&iVar0, iVar2);
			func_18(&iVar0, 0);
			if (func_32(func_37(), iVar0))
			{
				func_35(&iVar0, 0, 0, 0, 1, 0, 0);
			}
			iVar3 = 0;
			while (func_32(iVar0, *iParam0) && iVar3 < 24)
			{
				func_35(iParam0, 0, 0, iParam2, 0, 0, 0);
				iVar3 = (iVar3 + iParam2);
			}
		}
		return 1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)//Position - 0x125F
{
	int iVar0;
	int iVar1;
	
	if (!func_33(iParam1) || !func_33(iParam0))
	{
		return 1;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_22(iParam0);
	iVar1 = func_22(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_21(iParam0);
	iVar1 = func_21(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_20(iParam0);
	iVar1 = func_20(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x136B
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
	iVar0 = func_20(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_21(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_22(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_25(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_24(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_23(iParam0);
	if (iVar5 < 1 || iVar5 > func_19(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_34(int iParam0)//Position - 0x1447
{
	return func_32(func_37(), iParam0);
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1459
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_25(*iParam0);
	iVar1 = func_24(*iParam0);
	iVar2 = func_23(*iParam0);
	iVar3 = func_22(*iParam0);
	iVar4 = func_21(*iParam0);
	iVar5 = func_20(*iParam0);
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
	iVar6 = func_19(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_19(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_12(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_36(int iParam0, int iParam1, int iParam2)//Position - 0x15DB
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

int func_37()//Position - 0x1684
{
	var uVar0;
	
	func_18(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_17(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_16(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_14(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_15(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_13(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_38()//Position - 0x16CA
{
	SYSTEM::WAIT(0);
	func_68();
}

void func_39()//Position - 0x16DB
{
	int iVar0;
	
	iVar0 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
	if (iLocal_24 != iVar0)
	{
		if (iLocal_23 > 48)
		{
			switch (func_40(iLocal_24))
			{
				case 1:
					func_2(85, 1);
					break;
				
				case 2:
					func_2(84, 1);
					break;
				
				case 3:
					func_2(86, 1);
					break;
				
				case 4:
					func_2(87, 1);
					break;
				}
		}
		iLocal_23 = 0;
		iLocal_24 = iVar0;
	}
	switch (func_40(iVar0))
	{
		case 1:
			func_2(77, 1);
			break;
		
		case 2:
			func_2(76, 1);
			break;
		
		case 3:
			func_2(79, 1);
			break;
		
		case 4:
			func_2(80, 1);
			break;
		
		case 0:
			break;
	}
	func_2(78, 1);
	iLocal_23++;
}

int func_40(int iParam0)//Position - 0x17AA
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_41()//Position - 0x1836
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	func_68();
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_59908[iVar0 /*7*/])
		{
			if (Global_59908[iVar0 /*7*/].f_2)
			{
				iVar1 = 0;
				if (!Global_59908[iVar0 /*7*/].f_4)
				{
					STATS::STAT_GET_INT(Global_59908[iVar0 /*7*/].f_3, &iVar1, -1);
				}
				else
				{
					fVar2 = 0f;
					STATS::STAT_GET_FLOAT(Global_59908[iVar0 /*7*/].f_3, &fVar2, -1);
					iVar3 = SYSTEM::FLOOR(fVar2);
					if (Global_59908[iVar0 /*7*/].f_5 < iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = Global_59908[iVar0 /*7*/].f_5;
					}
				}
				Global_59908[iVar0 /*7*/].f_6 = (iVar1 - Global_59908[iVar0 /*7*/].f_5);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_56465[iVar0 /*36*/].f_8)
		{
			if (!Global_56465[iVar0 /*36*/].f_10 == 0f)
			{
				Global_56465[iVar0 /*36*/].f_11 = Global_56465[iVar0 /*36*/].f_10;
			}
		}
		if ((iVar0 % 40) == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
		iVar0++;
	}
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_56465[iVar0 /*36*/].f_8)
		{
			fVar5 = 0f;
			if (Global_56465[iVar0 /*36*/].f_10 != 0f)
			{
				fVar5 = (fVar5 + (((0.02f * Global_56465[iVar0 /*36*/].f_9) * Global_56465[iVar0 /*36*/].f_10) - Global_56465[iVar0 /*36*/].f_9));
			}
			fVar5 = (fVar5 + ((MISC::GET_RANDOM_FLOAT_IN_RANGE(-Global_59620[iVar4 /*7*/].f_6, Global_59620[iVar4 /*7*/].f_6) * 0.1f) * Global_56465[iVar0 /*36*/].f_9));
			Global_59620[iVar4 /*7*/] = (Global_59620[iVar4 /*7*/] * 0.995f);
			if (fVar5 < 0f)
			{
				fVar5 = (fVar5 * Global_59620[iVar4 /*7*/].f_2);
			}
			else if (fVar5 > 0f)
			{
				fVar5 = (fVar5 * Global_59620[iVar4 /*7*/].f_1);
			}
			fVar5 = func_46(fVar5, -Global_59620[iVar4 /*7*/].f_5, Global_59620[iVar4 /*7*/].f_5);
			iVar6 = 61;
			if (((iVar0 == iVar6 && func_45(44)) && !func_45(64)) && fVar5 > 0f)
			{
				Global_56465[iVar0 /*36*/].f_9 = (Global_56465[iVar0 /*36*/].f_9 - fVar5);
			}
			else
			{
				if (fVar5 > 0f)
				{
					fVar7 = func_43(iVar0);
					fVar5 = (fVar5 * fVar7);
				}
				Global_56465[iVar0 /*36*/].f_9 = (Global_56465[iVar0 /*36*/].f_9 + fVar5);
			}
			if (Global_56465[iVar0 /*36*/].f_9 > Global_59620[iVar4 /*7*/].f_3)
			{
				fVar8 = (Global_56465[iVar0 /*36*/].f_9 - Global_59620[iVar4 /*7*/].f_3);
				fVar8 = (fVar8 * 0.5f);
				Global_56465[iVar0 /*36*/].f_9 = (Global_56465[iVar0 /*36*/].f_9 - fVar8);
			}
			else if (Global_56465[iVar0 /*36*/].f_9 < Global_59620[iVar4 /*7*/].f_4)
			{
				fVar9 = (Global_59620[iVar4 /*7*/].f_4 - Global_56465[iVar0 /*36*/].f_9);
				fVar9 = (fVar9 * 0.5f);
				Global_56465[iVar0 /*36*/].f_9 = (Global_56465[iVar0 /*36*/].f_9 + fVar9);
			}
			Global_59620[iVar4 /*7*/] = (Global_59620[iVar4 /*7*/] - (((fVar5 * 0.66f) + (Global_59620[iVar4 /*7*/] * 0.33f)) * 0.02f));
			if (!Global_56465[iVar0 /*36*/].f_9 > 0f)
			{
				Global_56465[iVar0 /*36*/].f_9 = (-1f * Global_56465[iVar0 /*36*/].f_9);
				Global_56465[iVar0 /*36*/].f_9 = (Global_56465[iVar0 /*36*/].f_9 + 0.02f);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
		iVar0++;
	}
	func_42();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_59908[iVar0 /*7*/])
		{
			if (Global_59908[iVar0 /*7*/].f_2)
			{
				Global_59908[iVar0 /*7*/].f_5 = (Global_59908[iVar0 /*7*/].f_5 + Global_59908[iVar0 /*7*/].f_6);
			}
		}
		iVar0++;
	}
}

void func_42()//Position - 0x1BF5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (!Global_56465[iVar1 /*36*/].f_8)
		{
			if (iVar0 < 42)
			{
				Global_113969.f_20567.f_103[iVar0] = Global_56465[iVar1 /*36*/].f_9;
				if (Global_56465[iVar1 /*36*/].f_31 > Global_113969.f_20567.f_146[iVar0])
				{
					Global_113969.f_20567.f_146[iVar0] = Global_56465[iVar1 /*36*/].f_31;
				}
				if (Global_113969.f_20567.f_189[iVar0] == 0f)
				{
					Global_113969.f_20567.f_189[iVar0] = Global_56465[iVar1 /*36*/].f_32;
				}
				else if (Global_56465[iVar1 /*36*/].f_32 < Global_113969.f_20567.f_189[iVar0])
				{
					Global_113969.f_20567.f_189[iVar0] = Global_56465[iVar1 /*36*/].f_32;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

float func_43(int iParam0)//Position - 0x1CD1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	
	if (Global_56465[iParam0 /*36*/].f_8)
	{
		return 1f;
	}
	iVar0 = func_8(0, iParam0);
	iVar1 = func_8(1, iParam0);
	iVar2 = func_8(2, iParam0);
	if (((iVar0 + iVar1) + iVar2) < 1)
	{
		return 1f;
	}
	iVar3 = 1000000000;
	iVar4 = ((Global_61340[0] + Global_61340[1]) + Global_61340[2]);
	if (Global_61340[0] > iVar3)
	{
		return 0f;
	}
	if (Global_61340[1] > iVar3)
	{
		return 0f;
	}
	if (Global_61340[2] > iVar3)
	{
		return 0f;
	}
	fVar5 = 0f;
	iVar6 = 0;
	while (iVar6 < 10)
	{
		iVar7 = func_8(0, iVar6);
		if (iVar7 > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(0, iVar6)) * IntToFloat(iVar7)));
		}
		if (func_8(1, iVar6) > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(1, iVar6)) * IntToFloat(iVar7)));
		}
		if (func_8(2, iVar6) > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(2, iVar6)) * IntToFloat(iVar7)));
		}
		iVar6++;
	}
	iVar8 = (SYSTEM::FLOOR(fVar5) + iVar4);
	iVar9 = 700000000;
	if (iVar8 > iVar3)
	{
		return 0f;
	}
	if (iVar8 < iVar9)
	{
		return 1f;
	}
	fVar10 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
	fVar11 = SYSTEM::TO_FLOAT((iVar3 - iVar9));
	if (!fVar11 > 0f)
	{
		return 1f;
	}
	return (1f - (fVar10 / fVar11));
}

int func_44(int iParam0, int iParam1)//Position - 0x1E26
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 31;
	}
	switch (iParam0)
	{
		case 0:
			return Global_113969.f_20567[iParam1];
		
		case 1:
			return Global_113969.f_20567.f_33[iParam1];
		
		case 2:
			return Global_113969.f_20567.f_66[iParam1];
		
		default:
	}
	return 31;
}

int func_45(int iParam0)//Position - 0x1E8E
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

float func_46(float fParam0, float fParam1, float fParam2)//Position - 0x1EBA
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

void func_47()//Position - 0x1EE1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		if (iVar0 == 0)
		{
			func_2(75, 1);
		}
		iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
			if (iVar2 != 0)
			{
				if (func_58(iVar2))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
					func_56(iVar3);
				}
			}
		}
		SYSTEM::WAIT(0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			iVar4 = WEAPON::GET_SELECTED_PED_WEAPON(iVar1);
			func_54(iVar4);
			switch (iVar4)
			{
				case joaat("WEAPON_MOLOTOV"):
				case joaat("WEAPON_PETROLCAN"):
					switch (func_48())
					{
						case 0:
							func_2(147, 1);
							break;
						
						case 1:
							func_2(148, 1);
							break;
						
						case 2:
							func_2(149, 1);
							break;
					}
					break;
				}
			}
	}
}

int func_48()//Position - 0x1FB3
{
	func_49();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_49()//Position - 0x1FCC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_52(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_51(PLAYER::PLAYER_PED_ID());
			if (func_50(iVar0) && (!func_79(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_50(Global_113969.f_2366.f_539.f_4321))
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

bool func_50(int iParam0)//Position - 0x20C9
{
	return iParam0 < 3;
}

int func_51(int iParam0)//Position - 0x20D5
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)//Position - 0x2112
{
	if (func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_53(int iParam0)//Position - 0x2137
{
	return Global_2169[iParam0 /*29*/];
}

void func_54(int iParam0)//Position - 0x2146
{
	int iVar0;
	
	iVar0 = func_55(iParam0);
	switch (iVar0)
	{
		case 0:
			func_2(51, 1);
			break;
		
		case 1:
			func_2(52, 1);
			break;
		
		case 2:
			func_2(53, 1);
			break;
	}
}

int func_55(int iParam0)//Position - 0x218D
{
	switch (iParam0)
	{
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_STUNGUN"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_APPISTOL"):
			return 0;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_PISTOL"):
			return 1;
			break;
		
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
			break;
		
		default:
			return 3;
			break;
	}
	return 3;
}

void func_56(int iParam0)//Position - 0x2249
{
	switch (func_57(iParam0))
	{
		case 0:
			func_2(39, 1);
			break;
		
		case 1:
			func_2(35, 1);
			break;
		
		case 2:
			func_2(32, 1);
			break;
		
		case 3:
			func_2(38, 1);
			break;
		
		case 4:
			func_2(31, 1);
			break;
		
		case 5:
			func_2(33, 1);
			break;
		
		case 6:
			func_2(36, 1);
			break;
		
		case 7:
			func_2(37, 1);
			break;
	}
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			func_2(34, 1);
			break;
	}
}

int func_57(int iParam0)//Position - 0x231D
{
	switch (iParam0)
	{
		case joaat("benson"):
		case joaat("bobcatxl"):
		case joaat("bullet"):
		case joaat("dominator"):
		case joaat("minivan"):
		case joaat("peyote"):
		case joaat("radi"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("stanier"):
			return 3;
			break;
		
		case joaat("boxville"):
		case joaat("camper"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("tiptruck"):
			return 2;
			break;
		
		case joaat("fusilade"):
			return 6;
			break;
		
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("penumbra"):
		case joaat("sanchez"):
		case joaat("sanchez2"):
			return 1;
			break;
		
		case joaat("bfinjection"):
		case joaat("dune"):
		case joaat("surfer"):
		case joaat("surfer2"):
			return 4;
			break;
		
		case joaat("barracks2"):
		case joaat("biff"):
		case joaat("bulldozer"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("forklift"):
		case joaat("mixer"):
		case joaat("mixer2"):
			return 0;
			break;
		
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("sentinel"):
		case joaat("sentinel2"):
		case joaat("zion"):
		case joaat("zion2"):
			return 7;
			break;
	}
	return 8;
}

int func_58(int iParam0)//Position - 0x246D
{
	var uVar0;
	
	if (Global_79389)
	{
		return VEHICLE::IS_VEHICLE_STOLEN(iParam0);
	}
	if (func_61(iParam0, &uVar0))
	{
		return 0;
	}
	if (func_60(iParam0))
	{
		return 0;
	}
	if (func_59(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_59(int iParam0)//Position - 0x24AF
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

int func_60(int iParam0)//Position - 0x24EA
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

int func_61(int iParam0, var uParam1)//Position - 0x2566
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (Global_78179.f_484[iVar0] == iParam0)
		{
			if (func_62(&(Global_78179.f_555[0 /*21*/]), iVar0))
			{
				if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 10) && Global_78179.f_555[0 /*21*/].f_4 == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					*uParam1 = iVar0;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_62(var uParam0, int iParam1)//Position - 0x25D8
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
			uParam0->f_4 = func_65(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_65(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_65(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_65(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_65(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_65(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_65(2, 1);
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
			if (func_64())
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
			if (func_64())
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
		if (!func_63(Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_63(Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_63(Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

bool func_63(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x3CC5
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_64()//Position - 0x3D0C
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

int func_65(int iParam0, int iParam1)//Position - 0x3DC4
{
	struct<82> Var0;
	
	if (func_50(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_66(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_66(int iParam0, var uParam1, int iParam2)//Position - 0x3E06
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

int func_67()//Position - 0x405E
{
	if (iLocal_19 == -15)
	{
		return 0;
	}
	if (func_34(iLocal_19))
	{
		if (func_31(&iLocal_19, 1, 8))
		{
			return 0;
		}
		func_35(&iLocal_19, 0, iLocal_20, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_68()//Position - 0x409D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (Global_61345)
	{
		Global_61345 = 0;
		switch (func_57(Global_61346))
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_2(29, 1);
				break;
			
			case 4:
			case 5:
			case 6:
			case 7:
				func_2(30, 1);
				break;
			}
	}
	iVar0 = 0;
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar2 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar0);
		switch (iVar2)
		{
			case 142:
				SCRIPT::GET_EVENT_DATA(0, iVar0, &iVar1, 1);
				func_78(iVar1);
				bVar4 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							func_74(iVar1);
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							if (func_73(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1)))
							{
								func_2(3, 1);
							}
							func_72(ENTITY::GET_ENTITY_MODEL(iVar1));
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
						{
							switch (ENTITY::GET_ENTITY_MODEL(iVar1))
							{
								case joaat("prop_news_disp_01a"):
								case joaat("prop_news_disp_02a"):
								case joaat("prop_news_disp_02a_s"):
								case joaat("prop_news_disp_02b"):
								case joaat("prop_news_disp_02c"):
								case joaat("prop_news_disp_02d"):
								case joaat("prop_news_disp_02e"):
								case joaat("prop_news_disp_03a"):
								case joaat("prop_news_disp_03c"):
								case joaat("prop_news_disp_05a"):
								case -1389481633:
								case 1301918910:
								case joaat("prop_news_disp_06a"):
								case -1406224059:
									func_2(68, 1);
									break;
								
								case -959573699:
								case joaat("prop_postbox_01a"):
								case 1147034058:
								case 1444740423:
								case joaat("prop_postbox_ss_01a"):
									func_2(128, 1);
									break;
								}
							}
						}
				}
				break;
			
			case 141:
				SCRIPT::GET_EVENT_DATA(0, iVar0, &iVar1, 1);
				func_78(iVar1);
				bVar4 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (func_48() == 0 && iVar3 != PLAYER::PLAYER_PED_ID())
							{
								if (ENTITY::IS_ENTITY_DEAD(iVar1, false) || IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar1)) < (0.5f * IntToFloat(PED::GET_PED_MAX_HEALTH(iVar3))))
								{
									if (ENTITY::IS_ENTITY_A_PED(iVar1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											func_70(3);
										}
									}
								}
							}
							func_2(111, 1);
							func_2(124, 1);
							if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
							{
								func_2(130, 1);
							}
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_69(ENTITY::GET_ENTITY_MODEL(iVar1));
							func_2(111, 1);
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
						{
							func_2(111, 1);
						}
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_69(int iParam0)//Position - 0x435E
{
	switch (func_57(iParam0))
	{
		case 0:
			func_2(47, 1);
			break;
		
		case 1:
			func_2(43, 1);
			break;
		
		case 2:
			func_2(41, 1);
			break;
		
		case 3:
			func_2(46, 1);
			break;
		
		case 4:
			func_2(40, 1);
			break;
		
		case 5:
			func_2(42, 1);
			break;
		
		case 6:
			func_2(44, 1);
			break;
		
		case 7:
			func_2(45, 1);
			break;
	}
}

void func_70(int iParam0)//Position - 0x43F1
{
	switch (iParam0)
	{
		case 0:
			func_71(&Global_97981, 1);
			break;
		
		case 1:
			func_71(&Global_97983, 3);
			break;
		
		case 2:
			func_71(&Global_97987, 1);
			break;
		
		case 3:
			func_71(&Global_97989, 1);
			break;
		
		case 4:
			func_71(&Global_97991, 1);
			break;
		
		case 5:
			func_71(&Global_97993, 1);
			break;
		
		case 6:
			func_71(&Global_97995, 1);
			break;
		
		case 7:
			func_71(&Global_97997, 2);
			break;
		
		case 8:
			func_71(&Global_98000, 1);
			break;
		
		case 9:
			func_71(&Global_98002, 1);
			break;
	}
}

void func_71(var uParam0, int iParam1)//Position - 0x44B4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_72(int iParam0)//Position - 0x44F3
{
	switch (func_57(iParam0))
	{
		case 0:
			func_2(11, 1);
			break;
		
		case 1:
			func_2(6, 1);
			break;
		
		case 2:
			func_2(1, 1);
			break;
		
		case 3:
			func_2(10, 1);
			break;
		
		case 4:
			func_2(0, 1);
			break;
		
		case 5:
			func_2(2, 1);
			break;
		
		case 6:
			func_2(8, 1);
			break;
		
		case 7:
			func_2(9, 1);
			break;
	}
	if (iParam0 == joaat("taxi"))
	{
		func_2(100, 1);
	}
	func_2(111, 1);
}

int func_73(int iParam0)//Position - 0x459A
{
	if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 3) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 4) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 6) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 11) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 12) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 13) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 14) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 15) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 16) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 23) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 24) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 1) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 2) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 8) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) != -1)
		{
			return 1;
		}
		if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 18))
		{
			return 1;
		}
		if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 22))
		{
			return 1;
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_74(int iParam0)//Position - 0x4701
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
	{
		iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
		if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			func_77(iVar2, PED::GET_PED_TYPE(iVar0));
		}
		else
		{
			iVar3 = PED::GET_PED_CAUSE_OF_DEATH(iVar0);
			iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
			func_76(iVar3, PED::GET_PED_TYPE(iVar0), iVar4);
		}
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		func_2(129, 1);
	}
	if (!func_75(iParam0))
	{
		return;
	}
	func_2(111, 1);
	iVar5 = MISC::GET_GAME_TIMER();
	iVar6 = (iVar5 - iLocal_21);
	iLocal_21 = iVar5;
	if (iVar6 > 2000)
	{
		iLocal_22 = 0;
	}
	else
	{
		iLocal_22++;
		if (iLocal_22 == 3)
		{
			func_2(127, 1);
		}
	}
}

int func_75(int iParam0)//Position - 0x47B6
{
	int iVar0;
	
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	if (func_3(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())) == iVar0)
	{
		return 1;
	}
	return 0;
}

void func_76(int iParam0, int iParam1, int iParam2)//Position - 0x47EE
{
	int iVar0;
	
	iVar0 = func_55(iParam0);
	if (iVar0 == 0)
	{
		func_2(108, 1);
	}
	switch (iParam1)
	{
		case 4:
		case 5:
			switch (iVar0)
			{
				case 0:
					func_2(63, 1);
					break;
				
				case 1:
					func_2(64, 1);
					break;
				
				case 2:
					func_2(65, 1);
					break;
			}
			break;
		
		case 22:
			switch (iVar0)
			{
				case 0:
					func_2(57, 1);
					break;
				
				case 1:
					func_2(58, 1);
					break;
				
				case 2:
					func_2(59, 1);
					break;
			}
			break;
		
		case 27:
		case 6:
			switch (iVar0)
			{
				case 0:
					func_2(54, 1);
					break;
				
				case 1:
					func_2(55, 1);
					break;
				
				case 2:
					func_2(56, 1);
					break;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("S_F_Y_Hooker_01"):
			func_2(121, 1);
			break;
		
		case joaat("A_F_M_BodyBuild_01"):
		case joaat("A_M_M_Beach_02"):
		case joaat("A_M_Y_MusclBeac_02"):
		case joaat("A_M_Y_Runner_01"):
		case joaat("A_M_Y_RoadCyc_01"):
		case joaat("A_M_Y_Skater_01"):
		case joaat("A_M_Y_Skater_02"):
		case joaat("A_M_Y_Sunbathe_01"):
		case joaat("A_M_Y_Surfer_01"):
		case joaat("A_M_Y_Yoga_01"):
		case joaat("S_M_Y_BayWatch_01"):
		case joaat("S_M_Y_Marine_02"):
			func_2(69, 1);
			break;
		
		case joaat("S_M_Y_Dealer_01"):
			func_2(125, 1);
			break;
	}
}

void func_77(int iParam0, int iParam1)//Position - 0x4957
{
	func_2(48, 1);
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			func_2(4, 1);
			break;
		
		case joaat("tanker"):
			func_2(5, 1);
			func_2(7, 1);
			func_2(91, 1);
			break;
		
		case joaat("packer"):
			func_2(7, 1);
			break;
		
		case joaat("phantom"):
			func_2(5, 1);
			break;
	}
	switch (func_57(iParam0))
	{
		case 0:
			func_2(109, 1);
			break;
		
		case 1:
			func_2(104, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(60, 1);
					break;
			}
			break;
		
		case 2:
			func_2(102, 1);
			break;
		
		case 3:
			func_2(107, 1);
			break;
		
		case 4:
			func_2(101, 1);
			break;
		
		case 5:
			func_2(103, 1);
			break;
		
		case 6:
			func_2(105, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(61, 1);
					break;
			}
			break;
		
		case 7:
			func_2(106, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(62, 1);
					break;
			}
			break;
	}
}

void func_78(int iParam0)//Position - 0x4A9E
{
	ENTITY::DOES_ENTITY_EXIST(iParam0);
	ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

bool func_79(int iParam0)//Position - 0x4AB5
{
	return Global_44042 == iParam0;
}

void func_80()//Position - 0x4AC3
{
	int iVar0;
	int iVar1;
	
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		iLocal_31 = 0;
		return;
	}
	if (func_82(PLAYER::GET_PLAYER_INDEX(), -1))
	{
		iLocal_31 = 0;
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false);
		if (iLocal_31 != iVar0)
		{
			Local_25 = { Local_28 };
			iLocal_31 = iVar0;
		}
		if (iVar0 == 0)
		{
			return;
		}
		Local_25 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
		if (iLocal_31 == 0)
		{
			Local_28 = { Local_25 };
			iLocal_31 = iVar0;
			return;
		}
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_81(iVar1, MISC::GET_DISTANCE_BETWEEN_COORDS(Local_25, Local_28, false)))
		{
			Local_28 = { Local_25 };
		}
	}
}

int func_81(int iParam0, float fParam1)//Position - 0x4B70
{
	if (fParam1 < 10f)
	{
		return 0;
	}
	switch (func_57(iParam0))
	{
		case 0:
			func_2(28, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 1:
			func_2(24, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 2:
			func_2(21, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 3:
			func_2(27, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 4:
			func_2(20, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 5:
			func_2(22, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 6:
			func_2(25, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 7:
			func_2(26, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
	}
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			func_2(23, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			switch (func_48())
			{
				case 0:
					func_2(141, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				
				case 1:
					func_2(142, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				
				case 2:
					func_2(143, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
			}
			break;
	}
	return 1;
}

int func_82(int iParam0, int iParam1)//Position - 0x4D14
{
	int iVar0;
	
	if (func_83(iParam0, 1, 1))
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

int func_83(int iParam0, bool bParam1, bool bParam2)//Position - 0x4D61
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

void func_84()//Position - 0x4DC1
{
	func_85(0);
	func_85(1);
	func_85(2);
}

void func_85(int iParam0)//Position - 0x4DD8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_56465[iVar0 /*36*/].f_8)
		{
			iVar1 = Global_56465[iVar0 /*36*/].f_35;
			if (iVar1 > -1)
			{
				iVar2 = func_86(iParam0, iVar0);
				if (Global_56465[iVar0 /*36*/].f_9 <= 0f)
				{
					iVar2 = 0;
				}
				STATS::STAT_SET_INT(Global_59346[iVar1 /*7*/].f_3[iParam0], iVar2, true);
			}
		}
		iVar0++;
	}
}

int func_86(int iParam0, int iParam1)//Position - 0x4E40
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_113969.f_20567[iVar0] == iParam1)
				{
					if (Global_113969.f_20567.f_22[iVar0] > 0)
					{
						return Global_113969.f_20567.f_22[iVar0];
					}
				}
				break;
			
			case 1:
				if (Global_113969.f_20567.f_33[iVar0] == iParam1)
				{
					if (Global_113969.f_20567.f_55[iVar0] > 0)
					{
						return Global_113969.f_20567.f_55[iVar0];
					}
				}
				break;
			
			case 2:
				if (Global_113969.f_20567.f_66[iVar0] == iParam1)
				{
					if (Global_113969.f_20567.f_88[iVar0] > 0)
					{
						return Global_113969.f_20567.f_88[iVar0];
					}
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_87()//Position - 0x4F15
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_61627;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_61630[iVar0 /*14*/].f_13 > 0)
		{
			Global_61630[iVar0 /*14*/].f_13 = (Global_61630[iVar0 /*14*/].f_13 - 1);
		}
		else if (func_89(iVar0))
		{
			func_88(&(Global_61630[iVar0 /*14*/]), -1);
			Global_61630[iVar0 /*14*/].f_13 = 60000;
		}
		SYSTEM::WAIT(0);
		func_68();
		iVar0++;
	}
}

int func_88(var uParam0, int iParam1)//Position - 0x4F85
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = *uParam0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_64012[iVar0 /*34*/][iVar1 /*11*/].f_9 == uParam0->f_9)
		{
			uParam0->f_10 = (uParam0->f_10 + 0.05f);
			return 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	fVar2 = 0f;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_64012[iVar0 /*34*/][iVar1 /*11*/].f_10 > fVar2)
		{
			iVar3 = iVar1;
			fVar2 = Global_64012[iVar0 /*34*/][iVar1 /*11*/].f_10;
		}
		iVar1++;
	}
	if (iVar3 == -1)
	{
		return 0;
	}
	if (uParam0->f_10 <= Global_64012[iVar0 /*34*/][iVar3 /*11*/].f_10)
	{
		uParam0->f_10 = (uParam0->f_10 + 1f);
		Global_64012[iVar0 /*34*/][iVar3 /*11*/].f_10 = uParam0->f_10;
		Global_64012[iVar0 /*34*/][iVar3 /*11*/].f_1 = { uParam0->f_1 };
		Global_64012[iVar0 /*34*/][iVar3 /*11*/].f_5 = { uParam0->f_5 };
		Global_64012[iVar0 /*34*/][iVar3 /*11*/].f_9 = uParam0->f_9;
		Global_64012[iVar0 /*34*/][iVar3 /*11*/] = *uParam0;
		return 1;
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x50A0
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	
	iVar0 = Global_61630[iParam0 /*14*/].f_12;
	fVar1 = Global_56465[iVar0 /*36*/].f_9;
	iVar2 = Global_56465[iVar0 /*36*/].f_13;
	while (iVar2 > 15)
	{
		iVar2 = (iVar2 - 16);
	}
	iVar3 = (iVar2 - 10);
	while (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	fVar4 = Global_56465[iVar0 /*36*/].f_14[iVar3];
	Global_56465[iVar0 /*36*/].f_14[Global_56465[iVar0 /*36*/].f_13] = func_6(iVar0);
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = iVar3 + 1;
	if (iVar8 == 16)
	{
		iVar8 = 0;
	}
	iVar9 = 0;
	iVar10 = iVar8;
	iVar11 = 0;
	iVar12 = 0;
	iVar9 = 0;
	while (iVar9 < 8)
	{
		iVar11 = iVar10 + 1;
		if (iVar11 == 16)
		{
			iVar11 = 0;
		}
		iVar12 = iVar11 + 1;
		if (iVar12 == 16)
		{
			iVar12 = 0;
		}
		if (Global_56465[iVar0 /*36*/].f_14[iVar10] < Global_56465[iVar0 /*36*/].f_14[iVar11])
		{
			iVar6++;
			fVar13 = (fVar13 + (Global_56465[iVar0 /*36*/].f_14[iVar11] - Global_56465[iVar0 /*36*/].f_14[iVar10]));
		}
		else
		{
			iVar7++;
			fVar14 = (fVar14 + (Global_56465[iVar0 /*36*/].f_14[iVar10] - Global_56465[iVar0 /*36*/].f_14[iVar11]));
		}
		if (Global_56465[iVar0 /*36*/].f_14[iVar10] < Global_56465[iVar0 /*36*/].f_14[iVar11] && Global_56465[iVar0 /*36*/].f_14[iVar12] < Global_56465[iVar0 /*36*/].f_14[iVar11])
		{
			iVar5++;
		}
		if (Global_56465[iVar0 /*36*/].f_14[iVar10] > Global_56465[iVar0 /*36*/].f_14[iVar11] && Global_56465[iVar0 /*36*/].f_14[iVar12] > Global_56465[iVar0 /*36*/].f_14[iVar11])
		{
			iVar5++;
		}
		iVar10++;
		if (iVar10 == 16)
		{
			iVar10 = 0;
		}
		iVar9++;
	}
	if (iVar6 < 0)
	{
		fVar13 = (fVar13 / IntToFloat(iVar6));
	}
	if (iVar7 > 0)
	{
		fVar14 = (fVar14 / IntToFloat(iVar7));
	}
	fVar15 = (fVar1 - fVar4);
	if (fVar15 < 0f)
	{
		fVar15 = (fVar15 * -1f);
	}
	switch (Global_61630[iParam0 /*14*/].f_11)
	{
		case 0:
			if (iVar6 < 6)
			{
				return 0;
			}
			if (fVar13 < (fVar4 * 0.04f))
			{
				return 0;
			}
			return 1;
			break;
		
		case 1:
			if (iVar7 < 6)
			{
				return 0;
			}
			if (fVar14 < (fVar4 * 0.04f))
			{
				return 0;
			}
			return 1;
			break;
		
		case 2:
			if (iVar5 < 7)
			{
				return 0;
			}
			if (fVar15 > (fVar4 * 0.01f))
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_90(bool bParam0)//Position - 0x5332
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

void func_91()//Position - 0x55B4
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
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
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (iVar0 < 42)
		{
			if (!Global_56465[iVar1 /*36*/].f_8)
			{
				if (Global_113969.f_20567.f_103[iVar0] > 0f)
				{
					Global_56465[iVar1 /*36*/].f_9 = Global_113969.f_20567.f_103[iVar0];
				}
				if (Global_113969.f_20567.f_146[iVar0] > 0f)
				{
					Global_56465[iVar1 /*36*/].f_31 = Global_113969.f_20567.f_146[iVar0];
				}
				if (Global_113969.f_20567.f_189[iVar0] > 0f)
				{
					Global_56465[iVar1 /*36*/].f_32 = Global_113969.f_20567.f_189[iVar0];
				}
				iVar0++;
			}
			if ((Global_56465[iVar1 /*36*/].f_32 > 0f && Global_56465[iVar1 /*36*/].f_31 > 0f) && Global_56465[iVar1 /*36*/].f_9 > 0f)
			{
				fVar2 = Global_56465[iVar1 /*36*/].f_9;
				if (fVar2 > Global_56465[iVar1 /*36*/].f_31)
				{
					Global_56465[iVar1 /*36*/].f_31 = fVar2;
				}
				if (fVar2 < Global_56465[iVar1 /*36*/].f_32)
				{
					Global_56465[iVar1 /*36*/].f_32 = fVar2;
				}
				iVar3 = 0;
				fVar4 = (Global_56465[iVar1 /*36*/].f_31 - Global_56465[iVar1 /*36*/].f_32);
				fVar5 = 0f;
				fVar10 = 2.1474836E+09f;
				fVar11 = -2.1474836E+09f;
				iVar3 = 15;
				while (iVar3 >= 0)
				{
					fVar6 = ((fVar4 * MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 5f)) * 0.01f);
					fVar8 = 1f;
					fVar9 = 1f;
					if (iVar3 == 15)
					{
						fVar12 = ((Global_56465[iVar1 /*36*/].f_31 - Global_56465[iVar1 /*36*/].f_9) / fVar4);
						if (fVar12 < 0.2f)
						{
							fVar8 = (fVar12 / 0.2f);
						}
						fVar13 = ((Global_56465[iVar1 /*36*/].f_9 - Global_56465[iVar1 /*36*/].f_32) / fVar4);
						if (fVar13 < 0.2f)
						{
							fVar9 = (fVar13 / 0.2f);
						}
						fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_56465[iVar1 /*36*/].f_14[iVar3] = Global_56465[iVar1 /*36*/].f_9;
					}
					else
					{
						fVar14 = ((Global_56465[iVar1 /*36*/].f_31 - Global_56465[iVar1 /*36*/].f_14[iVar3 + 1]) / fVar4);
						if (fVar14 < 0.2f)
						{
							fVar8 = (fVar14 / 0.2f);
						}
						fVar15 = ((Global_56465[iVar1 /*36*/].f_14[iVar3 + 1] - Global_56465[iVar1 /*36*/].f_32) / fVar4);
						if (fVar15 < 0.2f)
						{
							fVar9 = (fVar15 / 0.2f);
						}
						fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_56465[iVar1 /*36*/].f_14[iVar3] = (Global_56465[iVar1 /*36*/].f_14[iVar3 + 1] + fVar7);
					}
					fVar10 = func_93(fVar10, Global_56465[iVar1 /*36*/].f_14[iVar3]);
					fVar11 = func_92(fVar11, Global_56465[iVar1 /*36*/].f_14[iVar3]);
					fVar5 = (fVar5 + Global_56465[iVar1 /*36*/].f_14[iVar3]);
					iVar3 = (iVar3 + -1);
				}
				Global_56465[iVar1 /*36*/].f_32 = fVar10;
				Global_56465[iVar1 /*36*/].f_31 = fVar11;
				fVar5 = (fVar5 / 16f);
				Global_56465[iVar1 /*36*/].f_33 = (Global_56465[iVar1 /*36*/].f_9 - fVar5);
				Global_56465[iVar1 /*36*/].f_34 = ((Global_56465[iVar1 /*36*/].f_33 / fVar5) * 100f);
				fVar16 = func_7(iVar1);
				if (fVar16 != 1f)
				{
					fVar5 = 0f;
					fVar17 = (fVar16 - 1f);
					iVar3 = 0;
					while (iVar3 <= 15)
					{
						fVar18 = (SYSTEM::TO_FLOAT(iVar3) / 16f);
						Global_56465[iVar1 /*36*/].f_14[iVar3] = (Global_56465[iVar1 /*36*/].f_14[iVar3] * (MISC::GET_RANDOM_FLOAT_IN_RANGE(0.95f, 1.05f) + (fVar18 * fVar17)));
						if (iVar3 == 15)
						{
							Global_56465[iVar1 /*36*/].f_14[iVar3] = (Global_56465[iVar1 /*36*/].f_9 * fVar16);
						}
						fVar5 = (fVar5 + Global_56465[iVar1 /*36*/].f_14[iVar3]);
						Global_56465[iVar1 /*36*/].f_32 = func_93(Global_56465[iVar1 /*36*/].f_32, Global_56465[iVar1 /*36*/].f_14[iVar3]);
						Global_56465[iVar1 /*36*/].f_31 = func_92(Global_56465[iVar1 /*36*/].f_31, Global_56465[iVar1 /*36*/].f_14[iVar3]);
						iVar3++;
					}
					fVar5 = (fVar5 / 16f);
					Global_56465[iVar1 /*36*/].f_33 = (Global_56465[iVar1 /*36*/].f_9 - fVar5);
					Global_56465[iVar1 /*36*/].f_34 = ((Global_56465[iVar1 /*36*/].f_33 / fVar5) * 100f);
				}
			}
		}
		iVar1++;
	}
}

float func_92(float fParam0, float fParam1)//Position - 0x59F1
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_93(float fParam0, float fParam1)//Position - 0x5A08
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_94()//Position - 0x5A1F
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (!Global_113969.f_20567.f_101)
	{
		iVar0 = 0;
		while (iVar0 < 80)
		{
			if (!Global_56465[iVar0 /*36*/].f_8)
			{
				Global_56465[iVar0 /*36*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 290f);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			func_28(1);
			iVar0 = 0;
			while (iVar0 < 80)
			{
				fVar2 = 0.85f;
				fVar3 = 1.15f;
				if (Global_56465[iVar0 /*36*/].f_9 < 5f)
				{
					fVar2 = 1.1f;
				}
				else if (Global_56465[iVar0 /*36*/].f_9 < 10f)
				{
					fVar2 = 0.95f;
				}
				else if (Global_56465[iVar0 /*36*/].f_9 > 285f)
				{
					fVar3 = 0.97f;
				}
				else if (Global_56465[iVar0 /*36*/].f_9 > 270f)
				{
					fVar3 = 1.05f;
				}
				Global_56465[iVar0 /*36*/].f_9 = (Global_56465[iVar0 /*36*/].f_9 * MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar2, fVar3));
				Global_56465[iVar0 /*36*/].f_9 = func_93(func_92(MISC::ABSF(Global_56465[iVar0 /*36*/].f_9), 3.5f), 290f);
				iVar0++;
			}
			iVar1++;
		}
		func_42();
		Global_113969.f_20567.f_101 = 1;
	}
}

void func_95()//Position - 0x5B64
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_61627 = 0;
	Global_61629 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			StringCopy(&(Global_64012[iVar0 /*34*/][iVar1 /*11*/].f_1), "BSNEWS_DEFAULT" /* GXT: BREAKING NEWS! THIS NEWS STORY HAS AN UNSET STRING!.//REMOVE THIS ENTRY FOR RELEASE! IT SHOULD NEVER SHOW IN GAME */, 16);
			StringCopy(&(Global_64012[iVar0 /*34*/][iVar1 /*11*/].f_5), "BSNEWS_DEFAULT" /* GXT: BREAKING NEWS! THIS NEWS STORY HAS AN UNSET STRING!.//REMOVE THIS ENTRY FOR RELEASE! IT SHOULD NEVER SHOW IN GAME */, 16);
			iVar1++;
		}
		iVar0++;
	}
	func_96(55, "ECL_P_SR_H" /* GXT: World gulping eCola in record volume, stocks up. */, "ECL_P_SR_C", 0, 0);
	func_96(55, "ECL_P_SF_H" /* GXT: Ecola 'sugar water' losing favour among investors. */, "ECL_P_SF_C", 1, 0);
	func_96(55, "ECL_P_RF_H" /* GXT: eCola stocks all over the place, sticky */, "ECL_P_RF_C", 2, 0);
	func_96(51, "BGR_P_SR_H" /* GXT: Burgershot stocks shoot up like cholesterol. */, "BGR_P_SR_C", 0, 0);
	func_96(51, "BGR_P_SF_H" /* GXT: Burgershot junk food stocks down. */, "BGR_P_SF_C", 1, 0);
	func_96(52, "CLK_P_SR_H" /* GXT: Cluckin' Bell stocks up on "Free Range is for Fairies" campaign. */, "CLK_P_SR_C", 0, 0);
	func_96(52, "CLK_P_SF_H" /* GXT: Cluckin' Bell chicken cruelty video brings stocks down. */, "CLK_P_SF_C", 1, 0);
	func_96(52, "CLK_P_RF_H" /* GXT: Investors don't know what to do with Cluckin' Bell fast food stocks. */, "CLK_P_RF_C", 2, 0);
	func_96(48, "BEN_P_SR_H" /* GXT: Bean Machine uses tax loopholes to win big.  Stocks rise. */, "BEN_P_SR_C", 0, 0);
	func_96(48, "BEN_P_SF_H" /* GXT: Fair trade coffee killing Bean Machine profits.  Stocks down. */, "BEN_P_SF_C", 1, 0);
	func_96(48, "BEN_P_RF_H" /* GXT: Coffee giant Bean Machine sees stocks moody, edgy. */, "BEN_P_RF_C", 2, 0);
	func_96(13, "FLC_P_SR_H" /* GXT: Credit card fees rack up huge profits says Fleeca. */, "FLC_P_SR_C", 0, 0);
	func_96(13, "FLC_P_SF_H" /* GXT: Cash is king - under the table deals killing Fleeca stock. */, "FLC_P_SF_C", 1, 0);
	func_96(13, "FLC_P_RF_H" /* GXT: Fleeca stock unsteady as market flails aimlessly. */, "FLC_P_RF_C", 2, 0);
	func_96(64, "PRO_P_SR_H" /* GXT: Prolaps shares up despite Bangladesh factory fire. */, "PRO_P_SR_C", 0, 0);
	func_96(64, "PRO_P_SF_H" /* GXT: Prolaps shares down as America goes more hipster. */, "PRO_P_SF_C", 1, 0);
	func_96(64, "PRO_P_RF_H" /* GXT: Prolaps unsteady after football player rampage. */, "PRO_P_RF_C", 2, 0);
	func_96(70, "UNI_P_SR_H" /* GXT: Vanilla Unicorn Strip Clubs are packed, stocks are up. */, "UNI_P_SR_C", 0, 0);
	func_96(70, "UNI_P_SF_H" /* GXT: Vanilla Unicorn strippers cry as stocks drop. */, "UNI_P_SF_C", 1, 0);
	func_96(70, "UNI_P_RF_H" /* GXT: Vanilla Unicorn Strip club stocks and clientele unpredictable. */, "UNI_P_RF_C", 2, 0);
	func_96(60, "KRP_P_SR_H" /* GXT: Krapea CEO announces new tax avoidance plan.  Stocks up. */, "KRP_P_SR_C", 0, 0);
	func_96(60, "KRP_P_SF_H" /* GXT: Krapea particle board furniture falling out of favour. */, "KRP_P_SF_C", 1, 0);
	func_96(60, "KRP_P_RF_H" /* GXT: Directions confusing for Krapea. */, "KRP_P_RF_C", 2, 0);
	func_96(56, "FUS_P_SR_H" /* GXT: No Strike! FlyUS stocks surge. */, "FUS_P_SR_C", 0, 0);
	func_96(56, "FUS_P_SF_H" /* GXT: Food poisoning on 154 FlyUS flights brings stock down. */, "FUS_P_SF_C", 1, 0);
	func_96(56, "FUS_P_RF_H" /* GXT: FlyUS stock hitting turbulence, bad headline. */, "FUS_P_RF_C", 2, 0);
	func_96(58, "GOP_P_SR_H" /* GXT: 60% of shipments contain drugs says Go Postal CEO - stocks rise. */, "GOP_P_SR_C", 0, 0);
	func_96(58, "GOP_P_SF_H" /* GXT: Go Postal going profitless. */, "GOP_P_SF_C", 1, 0);
	func_96(58, "GOP_P_RF_H" /* GXT: Go Postal stocks unsteady as America ships less. */, "GOP_P_RF_C", 2, 0);
	func_96(53, "BAN_P_SR_H" /* GXT: Snotty coffee house Cool Beans stocks surge. */, "BAN_P_SR_C", 0, 0);
	func_96(53, "BAN_P_SF_H" /* GXT: Prices cool off for Cool Beans. */, "BAN_P_SF_C", 1, 0);
	func_96(53, "BAN_P_RF_H" /* GXT: Cool Beans stocks up, then down, then up. */, "BAN_P_RF_C", 2, 0);
	func_96(62, "MAX_P_SR_H" /* GXT: Female insecurity sends Max Renda stocks up. */, "MAX_P_SR_C", 0, 0);
	func_96(62, "MAX_P_SF_H" /* GXT: Max Renda stocks runny. */, "MAX_P_SF_C", 1, 0);
	func_96(62, "MAX_P_RF_H" /* GXT: Max Renda stocks bipolar. */, "MAX_P_RF_C", 2, 0);
	func_96(57, "GAS_P_SR_H" /* GXT: Surgery soars price of Gastro Band stock. */, "GAS_P_SR_C", 0, 0);
	func_96(57, "GAS_P_SF_H" /* GXT: Another Gastro Band stock brings price down. */, "GAS_P_SF_C", 1, 0);
	func_96(57, "GAS_P_RF_H" /* GXT: Gastro Band stock - feast then famine. */, "GAS_P_RF_C", 2, 0);
	func_96(59, "GRU_P_SR_H" /* GXT: GruppeSechs not all it's cracked up to be. */, "GRU_P_SR_C", 0, 0);
	func_96(59, "GRU_P_SF_H" /* GXT: GruppeSechs down after heist. */, "GRU_P_SF_C", 1, 0);
	func_96(59, "GRU_P_RF_H" /* GXT: GruppeSechs unsteady if investors decide whether to join in. */, "GRU_P_RF_C", 2, 0);
	func_96(44, "PMP_P_SR_H" /* GXT: Pump and Run franchise sees stock rise as abs harden. */, "PMP_P_SR_C", 0, 0);
	func_96(44, "PMP_P_SF_H" /* GXT: Americans not going to gym. Prefer binge eating. Pump and Run shares drop. */, "PMP_P_SF_C", 1, 0);
	func_96(44, "PMP_P_RF_H" /* GXT: PMP shares volatile as gym attendance murky. */, "PMP_P_RF_C", 2, 0);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Global_61627 - 1));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			Global_64012[iVar0 /*34*/][iVar1 /*11*/].f_10 = 5000f;
			while (!func_88(&(Global_61630[iVar2 /*14*/]), iVar0))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Global_61627 - 1));
				SYSTEM::WAIT(2000);
			}
			Global_61630[iVar2 /*14*/].f_10 = 0f;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Global_61627 - 1));
			iVar1++;
		}
		iVar0++;
	}
}

void func_96(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x5EDE
{
	if (Global_61627 == 150)
	{
		return;
	}
	Global_61630[Global_61627 /*14*/].f_11 = iParam3;
	Global_61630[Global_61627 /*14*/] = iParam4;
	StringCopy(&(Global_61630[Global_61627 /*14*/].f_1), sParam1, 16);
	StringCopy(&(Global_61630[Global_61627 /*14*/].f_5), sParam2, 16);
	Global_61630[Global_61627 /*14*/].f_9 = Global_61629;
	Global_61630[Global_61627 /*14*/].f_12 = iParam0;
	Global_61627++;
	Global_61629++;
}

void func_97()//Position - 0x5F4C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
}

void func_98()//Position - 0x5F5F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		Global_56465[iVar0 /*36*/].f_33 = 0f;
		Global_56465[iVar0 /*36*/].f_13 = 0;
		Global_56465[iVar0 /*36*/].f_12 = 0;
		Global_56465[iVar0 /*36*/].f_31 = 0f;
		Global_56465[iVar0 /*36*/].f_32 = 3.402823E+38f;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_56465[iVar0 /*36*/].f_14[iVar1] = 0f;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		Global_59908[iVar0 /*7*/].f_2 = 0;
		iVar0++;
	}
	StringCopy(&(Global_56465[0 /*36*/]), "BSS_BSTR_0" /* GXT: Ammu-Nation */, 16);
	StringCopy(&(Global_56465[0 /*36*/].f_4), "BSS_BSTR_1" /* GXT: AMU */, 16);
	Global_56465[0 /*36*/].f_8 = 1;
	Global_56465[0 /*36*/].f_35 = 0;
	StringCopy(&(Global_56465[1 /*36*/]), "BSS_BSTR_2" /* GXT: Badger */, 16);
	StringCopy(&(Global_56465[1 /*36*/].f_4), "BSS_BSTR_3" /* GXT: BDG */, 16);
	Global_56465[1 /*36*/].f_8 = 1;
	Global_56465[1 /*36*/].f_35 = 1;
	StringCopy(&(Global_56465[2 /*36*/]), "BSS_BSTR_4" /* GXT: BankOfLiberty */, 16);
	StringCopy(&(Global_56465[2 /*36*/].f_4), "BSS_BSTR_5" /* GXT: BOL */, 16);
	Global_56465[2 /*36*/].f_8 = 0;
	Global_56465[2 /*36*/].f_35 = 0;
	StringCopy(&(Global_56465[3 /*36*/]), "BSS_BSTR_6" /* GXT: BF */, 16);
	StringCopy(&(Global_56465[3 /*36*/].f_4), "BSS_BSTR_7" /* GXT: BFA */, 16);
	Global_56465[3 /*36*/].f_8 = 1;
	Global_56465[3 /*36*/].f_35 = 2;
	StringCopy(&(Global_56465[4 /*36*/]), "BSS_BSTR_8" /* GXT: Binco */, 16);
	StringCopy(&(Global_56465[4 /*36*/].f_4), "BSS_BSTR_9" /* GXT: BIN */, 16);
	Global_56465[4 /*36*/].f_8 = 1;
	Global_56465[4 /*36*/].f_35 = 3;
	StringCopy(&(Global_56465[5 /*36*/]), "BSS_BSTR_10" /* GXT: BitterSweet */, 16);
	StringCopy(&(Global_56465[5 /*36*/].f_4), "BSS_BSTR_11" /* GXT: BTR */, 16);
	Global_56465[5 /*36*/].f_8 = 1;
	Global_56465[5 /*36*/].f_35 = 4;
	StringCopy(&(Global_56465[6 /*36*/]), "BSS_BSTR_12" /* GXT: Bleeter */, 16);
	StringCopy(&(Global_56465[6 /*36*/].f_4), "BSS_BSTR_13" /* GXT: BLE */, 16);
	Global_56465[6 /*36*/].f_8 = 1;
	Global_56465[6 /*36*/].f_35 = 5;
	StringCopy(&(Global_56465[7 /*36*/]), "BSS_BSTR_14" /* GXT: Brute */, 16);
	StringCopy(&(Global_56465[7 /*36*/].f_4), "BSS_BSTR_15" /* GXT: BRU */, 16);
	Global_56465[7 /*36*/].f_8 = 1;
	Global_56465[7 /*36*/].f_35 = 6;
	StringCopy(&(Global_56465[8 /*36*/]), "BSS_BSTR_16" /* GXT: CNT */, 16);
	StringCopy(&(Global_56465[8 /*36*/].f_4), "BSS_BSTR_16" /* GXT: CNT */, 16);
	Global_56465[8 /*36*/].f_8 = 1;
	Global_56465[8 /*36*/].f_35 = 7;
	StringCopy(&(Global_56465[9 /*36*/]), "BSS_BSTR_17" /* GXT: Crevis */, 16);
	StringCopy(&(Global_56465[9 /*36*/].f_4), "BSS_BSTR_18" /* GXT: CRE */, 16);
	Global_56465[9 /*36*/].f_8 = 1;
	Global_56465[9 /*36*/].f_35 = 8;
	StringCopy(&(Global_56465[10 /*36*/]), "BSS_BSTR_19" /* GXT: DailyGlobe */, 16);
	StringCopy(&(Global_56465[10 /*36*/].f_4), "BSS_BSTR_20" /* GXT: DGP */, 16);
	Global_56465[10 /*36*/].f_8 = 1;
	Global_56465[10 /*36*/].f_35 = 9;
	StringCopy(&(Global_56465[11 /*36*/]), "BSS_BSTR_21" /* GXT: Dept.WaterandPower */, 16);
	StringCopy(&(Global_56465[11 /*36*/].f_4), "BSS_BSTR_22" /* GXT: WAP */, 16);
	Global_56465[11 /*36*/].f_8 = 1;
	Global_56465[11 /*36*/].f_35 = 10;
	StringCopy(&(Global_56465[12 /*36*/]), "BSS_BSTR_23" /* GXT: Facade */, 16);
	StringCopy(&(Global_56465[12 /*36*/].f_4), "BSS_BSTR_24" /* GXT: FAC */, 16);
	Global_56465[12 /*36*/].f_8 = 1;
	Global_56465[12 /*36*/].f_35 = 11;
	StringCopy(&(Global_56465[13 /*36*/]), "BSS_BSTR_25" /* GXT: Fleeca */, 16);
	StringCopy(&(Global_56465[13 /*36*/].f_4), "BSS_BSTR_26" /* GXT: FLC */, 16);
	Global_56465[13 /*36*/].f_8 = 0;
	Global_56465[13 /*36*/].f_35 = 1;
	StringCopy(&(Global_56465[14 /*36*/]), "BSS_BSTR_27" /* GXT: Hijak */, 16);
	StringCopy(&(Global_56465[14 /*36*/].f_4), "BSS_BSTR_28" /* GXT: HJK */, 16);
	Global_56465[14 /*36*/].f_8 = 0;
	Global_56465[14 /*36*/].f_35 = 2;
	StringCopy(&(Global_56465[15 /*36*/]), "BSS_BSTR_29" /* GXT: Fruit */, 16);
	StringCopy(&(Global_56465[15 /*36*/].f_4), "BSS_BSTR_30" /* GXT: FRT */, 16);
	Global_56465[15 /*36*/].f_8 = 1;
	Global_56465[15 /*36*/].f_35 = 12;
	StringCopy(&(Global_56465[16 /*36*/]), "BSS_BSTR_31" /* GXT: AuguryInsurance */, 16);
	StringCopy(&(Global_56465[16 /*36*/].f_4), "BSS_BSTR_32" /* GXT: AUG */, 16);
	Global_56465[16 /*36*/].f_8 = 0;
	Global_56465[16 /*36*/].f_35 = 3;
	StringCopy(&(Global_56465[17 /*36*/]), "BSS_BSTR_33" /* GXT: Bullhead */, 16);
	StringCopy(&(Global_56465[17 /*36*/].f_4), "BSS_BSTR_34" /* GXT: BUL */, 16);
	Global_56465[17 /*36*/].f_8 = 0;
	Global_56465[17 /*36*/].f_35 = 4;
	StringCopy(&(Global_56465[18 /*36*/]), "BSS_BSTR_35" /* GXT: Hammerstein&Faust */, 16);
	StringCopy(&(Global_56465[18 /*36*/].f_4), "BSS_BSTR_36" /* GXT: HAF */, 16);
	Global_56465[18 /*36*/].f_8 = 0;
	Global_56465[18 /*36*/].f_35 = 5;
	StringCopy(&(Global_56465[19 /*36*/]), "BSS_BSTR_37" /* GXT: Slaughter,Slaughter&Slaughter */, 16);
	StringCopy(&(Global_56465[19 /*36*/].f_4), "BSS_BSTR_38" /* GXT: SSS */, 16);
	Global_56465[19 /*36*/].f_8 = 0;
	Global_56465[19 /*36*/].f_35 = 6;
	StringCopy(&(Global_56465[20 /*36*/]), "BSS_BSTR_39" /* GXT: LosSantosCustoms */, 16);
	StringCopy(&(Global_56465[20 /*36*/].f_4), "BSS_BSTR_40" /* GXT: LSC */, 16);
	Global_56465[20 /*36*/].f_8 = 1;
	Global_56465[20 /*36*/].f_35 = 13;
	StringCopy(&(Global_56465[21 /*36*/]), "BSS_BSTR_41" /* GXT: LSTransport */, 16);
	StringCopy(&(Global_56465[21 /*36*/].f_4), "BSS_BSTR_42" /* GXT: LST */, 16);
	Global_56465[21 /*36*/].f_8 = 1;
	Global_56465[21 /*36*/].f_35 = 14;
	StringCopy(&(Global_56465[22 /*36*/]), "BSS_BSTR_43" /* GXT: LTDOil */, 16);
	StringCopy(&(Global_56465[22 /*36*/].f_4), "BSS_BSTR_44" /* GXT: LTD */, 16);
	Global_56465[22 /*36*/].f_8 = 1;
	Global_56465[22 /*36*/].f_35 = 15;
	StringCopy(&(Global_56465[23 /*36*/]), "BSS_BSTR_45" /* GXT: Maibatsu */, 16);
	StringCopy(&(Global_56465[23 /*36*/].f_4), "BSS_BSTR_46" /* GXT: MAI */, 16);
	Global_56465[23 /*36*/].f_8 = 1;
	Global_56465[23 /*36*/].f_35 = 16;
	StringCopy(&(Global_56465[24 /*36*/]), "BSS_BSTR_47" /* GXT: MazeBank */, 16);
	StringCopy(&(Global_56465[24 /*36*/].f_4), "BSS_BSTR_48" /* GXT: MAZ */, 16);
	Global_56465[24 /*36*/].f_8 = 0;
	Global_56465[24 /*36*/].f_35 = 7;
	StringCopy(&(Global_56465[25 /*36*/]), "BSS_BSTR_49" /* GXT: Suburban */, 16);
	StringCopy(&(Global_56465[25 /*36*/].f_4), "BSS_BSTR_50" /* GXT: SUB */, 16);
	Global_56465[25 /*36*/].f_8 = 1;
	Global_56465[25 /*36*/].f_35 = 17;
	StringCopy(&(Global_56465[26 /*36*/]), "BSS_BSTR_51" /* GXT: AnimalArk */, 16);
	StringCopy(&(Global_56465[26 /*36*/].f_4), "BSS_BSTR_52" /* GXT: ARK */, 16);
	Global_56465[26 /*36*/].f_8 = 0;
	Global_56465[26 /*36*/].f_35 = 8;
	StringCopy(&(Global_56465[27 /*36*/]), "BSS_BSTR_53" /* GXT: Pisswasser */, 16);
	StringCopy(&(Global_56465[27 /*36*/].f_4), "BSS_BSTR_54" /* GXT: PIS */, 16);
	Global_56465[27 /*36*/].f_8 = 1;
	Global_56465[27 /*36*/].f_35 = 18;
	StringCopy(&(Global_56465[28 /*36*/]), "BSS_BSTR_55" /* GXT: Ponsonbys */, 16);
	StringCopy(&(Global_56465[28 /*36*/].f_4), "BSS_BSTR_56" /* GXT: PON */, 16);
	Global_56465[28 /*36*/].f_8 = 1;
	Global_56465[28 /*36*/].f_35 = 19;
	StringCopy(&(Global_56465[29 /*36*/]), "BSS_BSTR_57" /* GXT: Raine */, 16);
	StringCopy(&(Global_56465[29 /*36*/].f_4), "BSS_BSTR_58" /* GXT: RAI */, 16);
	Global_56465[29 /*36*/].f_8 = 0;
	Global_56465[29 /*36*/].f_35 = 9;
	StringCopy(&(Global_56465[30 /*36*/]), "BSS_BSTR_59" /* GXT: RonOil */, 16);
	StringCopy(&(Global_56465[30 /*36*/].f_4), "BSS_BSTR_60" /* GXT: RON */, 16);
	Global_56465[30 /*36*/].f_8 = 1;
	Global_56465[30 /*36*/].f_35 = 20;
	StringCopy(&(Global_56465[31 /*36*/]), "BSS_BSTR_61" /* GXT: Schyster */, 16);
	StringCopy(&(Global_56465[31 /*36*/].f_4), "BSS_BSTR_62" /* GXT: SHT */, 16);
	Global_56465[31 /*36*/].f_8 = 1;
	Global_56465[31 /*36*/].f_35 = 21;
	StringCopy(&(Global_56465[32 /*36*/]), "BSS_BSTR_63" /* GXT: Sprunk */, 16);
	StringCopy(&(Global_56465[32 /*36*/].f_4), "BSS_BSTR_64" /* GXT: SPU */, 16);
	Global_56465[32 /*36*/].f_8 = 1;
	Global_56465[32 /*36*/].f_35 = 22;
	StringCopy(&(Global_56465[33 /*36*/]), "BSS_BSTR_65" /* GXT: Tinkle */, 16);
	StringCopy(&(Global_56465[33 /*36*/].f_4), "BSS_BSTR_66" /* GXT: TNK */, 16);
	Global_56465[33 /*36*/].f_8 = 1;
	Global_56465[33 /*36*/].f_35 = 23;
	StringCopy(&(Global_56465[34 /*36*/]), "BSS_BSTR_67" /* GXT: WIWANG */, 16);
	StringCopy(&(Global_56465[34 /*36*/].f_4), "BSS_BSTR_68" /* GXT: WIW */, 16);
	Global_56465[34 /*36*/].f_8 = 1;
	Global_56465[34 /*36*/].f_35 = 24;
	StringCopy(&(Global_56465[35 /*36*/]), "BSS_BSTR_69" /* GXT: Ubermacht */, 16);
	StringCopy(&(Global_56465[35 /*36*/].f_4), "BSS_BSTR_70" /* GXT: UMA */, 16);
	Global_56465[35 /*36*/].f_8 = 1;
	Global_56465[35 /*36*/].f_35 = 25;
	StringCopy(&(Global_56465[36 /*36*/]), "BSS_BSTR_71" /* GXT: Vapid */, 16);
	StringCopy(&(Global_56465[36 /*36*/].f_4), "BSS_BSTR_72" /* GXT: VAP */, 16);
	Global_56465[36 /*36*/].f_8 = 1;
	Global_56465[36 /*36*/].f_35 = 26;
	StringCopy(&(Global_56465[37 /*36*/]), "BSS_BSTR_73" /* GXT: VomFeuer */, 16);
	StringCopy(&(Global_56465[37 /*36*/].f_4), "BSS_BSTR_74" /* GXT: VOM */, 16);
	Global_56465[37 /*36*/].f_8 = 1;
	Global_56465[37 /*36*/].f_35 = 27;
	StringCopy(&(Global_56465[38 /*36*/]), "BSS_BSTR_75" /* GXT: Weazel */, 16);
	StringCopy(&(Global_56465[38 /*36*/].f_4), "BSS_BSTR_76" /* GXT: WZL */, 16);
	Global_56465[38 /*36*/].f_8 = 1;
	Global_56465[38 /*36*/].f_35 = 28;
	StringCopy(&(Global_56465[39 /*36*/]), "BSS_BSTR_77" /* GXT: Whiz */, 16);
	StringCopy(&(Global_56465[39 /*36*/].f_4), "BSS_BSTR_78" /* GXT: WIZ */, 16);
	Global_56465[39 /*36*/].f_8 = 1;
	Global_56465[39 /*36*/].f_35 = 29;
	StringCopy(&(Global_56465[40 /*36*/]), "BSS_BSTR_79" /* GXT: Debonaire */, 16);
	StringCopy(&(Global_56465[40 /*36*/].f_4), "BSS_BSTR_80" /* GXT: DEB */, 16);
	Global_56465[40 /*36*/].f_8 = 0;
	Global_56465[40 /*36*/].f_35 = 10;
	StringCopy(&(Global_56465[41 /*36*/]), "BSS_BSTR_81" /* GXT: Zit */, 16);
	StringCopy(&(Global_56465[41 /*36*/].f_4), "BSS_BSTR_82" /* GXT: ZIT */, 16);
	Global_56465[41 /*36*/].f_8 = 1;
	Global_56465[41 /*36*/].f_35 = 30;
	StringCopy(&(Global_56465[42 /*36*/]), "BSS_BSTR_83" /* GXT: Shark */, 16);
	StringCopy(&(Global_56465[42 /*36*/].f_4), "BSS_BSTR_84" /* GXT: SHK */, 16);
	Global_56465[42 /*36*/].f_8 = 1;
	Global_56465[42 /*36*/].f_35 = 31;
	StringCopy(&(Global_56465[43 /*36*/]), "BSS_BSTR_85" /* GXT: BettaPharmaceuticals */, 16);
	StringCopy(&(Global_56465[43 /*36*/].f_4), "BSS_BSTR_86" /* GXT: BET */, 16);
	Global_56465[43 /*36*/].f_8 = 1;
	Global_56465[43 /*36*/].f_35 = 32;
	StringCopy(&(Global_56465[44 /*36*/]), "BSS_BSTR_87" /* GXT: PumpnRun */, 16);
	StringCopy(&(Global_56465[44 /*36*/].f_4), "BSS_BSTR_88" /* GXT: PMP */, 16);
	Global_56465[44 /*36*/].f_8 = 1;
	Global_56465[44 /*36*/].f_35 = 33;
	StringCopy(&(Global_56465[45 /*36*/]), "BSS_BSTR_89" /* GXT: GrainOfTruth */, 16);
	StringCopy(&(Global_56465[45 /*36*/].f_4), "BSS_BSTR_90" /* GXT: GOT */, 16);
	Global_56465[45 /*36*/].f_8 = 1;
	Global_56465[45 /*36*/].f_35 = 34;
	StringCopy(&(Global_56465[46 /*36*/]), "BSS_BSTR_91" /* GXT: Eyefind */, 16);
	StringCopy(&(Global_56465[46 /*36*/].f_4), "BSS_BSTR_92" /* GXT: EYE */, 16);
	Global_56465[46 /*36*/].f_8 = 1;
	Global_56465[46 /*36*/].f_35 = 35;
	StringCopy(&(Global_56465[47 /*36*/]), "BSS_BSTR_93" /* GXT: AirEmu */, 16);
	StringCopy(&(Global_56465[47 /*36*/].f_4), "BSS_BSTR_94" /* GXT: EMU */, 16);
	Global_56465[47 /*36*/].f_8 = 0;
	Global_56465[47 /*36*/].f_35 = 11;
	StringCopy(&(Global_56465[48 /*36*/]), "BSS_BSTR_95" /* GXT: BeanMachine */, 16);
	StringCopy(&(Global_56465[48 /*36*/].f_4), "BSS_BSTR_96" /* GXT: BEN */, 16);
	Global_56465[48 /*36*/].f_8 = 0;
	Global_56465[48 /*36*/].f_35 = 12;
	StringCopy(&(Global_56465[49 /*36*/]), "BSS_BSTR_97" /* GXT: GoldCoast */, 16);
	StringCopy(&(Global_56465[49 /*36*/].f_4), "BSS_BSTR_98" /* GXT: GCD */, 16);
	Global_56465[49 /*36*/].f_8 = 0;
	Global_56465[49 /*36*/].f_35 = 13;
	StringCopy(&(Global_56465[50 /*36*/]), "BSS_BSTR_99" /* GXT: BobMulét */, 16);
	StringCopy(&(Global_56465[50 /*36*/].f_4), "BSS_BSTR_100" /* GXT: BOM */, 16);
	Global_56465[50 /*36*/].f_8 = 0;
	Global_56465[50 /*36*/].f_35 = 14;
	StringCopy(&(Global_56465[51 /*36*/]), "BSS_BSTR_101" /* GXT: BurgerShot */, 16);
	StringCopy(&(Global_56465[51 /*36*/].f_4), "BSS_BSTR_102" /* GXT: BGR */, 16);
	Global_56465[51 /*36*/].f_8 = 0;
	Global_56465[51 /*36*/].f_35 = 15;
	StringCopy(&(Global_56465[52 /*36*/]), "BSS_BSTR_103" /* GXT: CluckinBell */, 16);
	StringCopy(&(Global_56465[52 /*36*/].f_4), "BSS_BSTR_104" /* GXT: CLK */, 16);
	Global_56465[52 /*36*/].f_8 = 0;
	Global_56465[52 /*36*/].f_35 = 16;
	StringCopy(&(Global_56465[53 /*36*/]), "BSS_BSTR_105" /* GXT: CoolBeans */, 16);
	StringCopy(&(Global_56465[53 /*36*/].f_4), "BSS_BSTR_106" /* GXT: BAN */, 16);
	Global_56465[53 /*36*/].f_8 = 0;
	Global_56465[53 /*36*/].f_35 = 17;
	StringCopy(&(Global_56465[54 /*36*/]), "BSS_BSTR_107" /* GXT: DollarPills */, 16);
	StringCopy(&(Global_56465[54 /*36*/].f_4), "BSS_BSTR_108" /* GXT: DOP */, 16);
	Global_56465[54 /*36*/].f_8 = 0;
	Global_56465[54 /*36*/].f_35 = 18;
	StringCopy(&(Global_56465[55 /*36*/]), "BSS_BSTR_109" /* GXT: eCola */, 16);
	StringCopy(&(Global_56465[55 /*36*/].f_4), "BSS_BSTR_110" /* GXT: ECL */, 16);
	Global_56465[55 /*36*/].f_8 = 0;
	Global_56465[55 /*36*/].f_35 = 19;
	StringCopy(&(Global_56465[56 /*36*/]), "BSS_BSTR_111" /* GXT: FlyUS */, 16);
	StringCopy(&(Global_56465[56 /*36*/].f_4), "BSS_BSTR_112" /* GXT: FUS */, 16);
	Global_56465[56 /*36*/].f_8 = 0;
	Global_56465[56 /*36*/].f_35 = 20;
	StringCopy(&(Global_56465[57 /*36*/]), "BSS_BSTR_113" /* GXT: GastroBand */, 16);
	StringCopy(&(Global_56465[57 /*36*/].f_4), "BSS_BSTR_114" /* GXT: GAS */, 16);
	Global_56465[57 /*36*/].f_8 = 0;
	Global_56465[57 /*36*/].f_35 = 21;
	StringCopy(&(Global_56465[58 /*36*/]), "BSS_BSTR_115" /* GXT: GoPostal */, 16);
	StringCopy(&(Global_56465[58 /*36*/].f_4), "BSS_BSTR_116" /* GXT: GOP */, 16);
	Global_56465[58 /*36*/].f_8 = 0;
	Global_56465[58 /*36*/].f_35 = 22;
	StringCopy(&(Global_56465[59 /*36*/]), "BSS_BSTR_117" /* GXT: GruppeSechs */, 16);
	StringCopy(&(Global_56465[59 /*36*/].f_4), "BSS_BSTR_118" /* GXT: GRU */, 16);
	Global_56465[59 /*36*/].f_8 = 0;
	Global_56465[59 /*36*/].f_35 = 23;
	StringCopy(&(Global_56465[60 /*36*/]), "BSS_BSTR_119" /* GXT: Krapea */, 16);
	StringCopy(&(Global_56465[60 /*36*/].f_4), "BSS_BSTR_120" /* GXT: KRP */, 16);
	Global_56465[60 /*36*/].f_8 = 0;
	Global_56465[60 /*36*/].f_35 = 24;
	StringCopy(&(Global_56465[61 /*36*/]), "BSS_BSTR_121" /* GXT: Lifeinvader */, 16);
	StringCopy(&(Global_56465[61 /*36*/].f_4), "BSS_BSTR_122" /* GXT: LFI */, 16);
	Global_56465[61 /*36*/].f_8 = 0;
	Global_56465[61 /*36*/].f_35 = 25;
	StringCopy(&(Global_56465[62 /*36*/]), "BSS_BSTR_123" /* GXT: MaxRenda */, 16);
	StringCopy(&(Global_56465[62 /*36*/].f_4), "BSS_BSTR_124" /* GXT: MAX */, 16);
	Global_56465[62 /*36*/].f_8 = 0;
	Global_56465[62 /*36*/].f_35 = 26;
	StringCopy(&(Global_56465[63 /*36*/]), "BSS_BSTR_125" /* GXT: PostOP */, 16);
	StringCopy(&(Global_56465[63 /*36*/].f_4), "BSS_BSTR_126" /* GXT: POP */, 16);
	Global_56465[63 /*36*/].f_8 = 0;
	Global_56465[63 /*36*/].f_35 = 27;
	StringCopy(&(Global_56465[64 /*36*/]), "BSS_BSTR_127" /* GXT: ProLaps */, 16);
	StringCopy(&(Global_56465[64 /*36*/].f_4), "BSS_BSTR_128" /* GXT: PRO */, 16);
	Global_56465[64 /*36*/].f_8 = 0;
	Global_56465[64 /*36*/].f_35 = 28;
	StringCopy(&(Global_56465[65 /*36*/]), "BSS_BSTR_129" /* GXT: Redwood */, 16);
	StringCopy(&(Global_56465[65 /*36*/].f_4), "BSS_BSTR_130" /* GXT: RWC */, 16);
	Global_56465[65 /*36*/].f_8 = 0;
	Global_56465[65 /*36*/].f_35 = 29;
	StringCopy(&(Global_56465[66 /*36*/]), "BSS_BSTR_131" /* GXT: RichardsMajestic */, 16);
	StringCopy(&(Global_56465[66 /*36*/].f_4), "BSS_BSTR_132" /* GXT: RIM */, 16);
	Global_56465[66 /*36*/].f_8 = 0;
	Global_56465[66 /*36*/].f_35 = 30;
	StringCopy(&(Global_56465[67 /*36*/]), "BSS_BSTR_133" /* GXT: TacoBomb */, 16);
	StringCopy(&(Global_56465[67 /*36*/].f_4), "BSS_BSTR_134" /* GXT: TBO */, 16);
	Global_56465[67 /*36*/].f_8 = 0;
	Global_56465[67 /*36*/].f_35 = 31;
	StringCopy(&(Global_56465[68 /*36*/]), "BSS_BSTR_135" /* GXT: Up-n-Atom */, 16);
	StringCopy(&(Global_56465[68 /*36*/].f_4), "BSS_BSTR_136" /* GXT: UPA */, 16);
	Global_56465[68 /*36*/].f_8 = 0;
	Global_56465[68 /*36*/].f_35 = 32;
	StringCopy(&(Global_56465[69 /*36*/]), "BSS_BSTR_137" /* GXT: Vangelico */, 16);
	StringCopy(&(Global_56465[69 /*36*/].f_4), "BSS_BSTR_138" /* GXT: VAG */, 16);
	Global_56465[69 /*36*/].f_8 = 0;
	Global_56465[69 /*36*/].f_35 = 33;
	StringCopy(&(Global_56465[70 /*36*/]), "BSS_BSTR_139" /* GXT: VanillaUnicorn */, 16);
	StringCopy(&(Global_56465[70 /*36*/].f_4), "BSS_BSTR_140" /* GXT: UNI */, 16);
	Global_56465[70 /*36*/].f_8 = 0;
	Global_56465[70 /*36*/].f_35 = 34;
	StringCopy(&(Global_56465[71 /*36*/]), "BSS_BSTR_141" /* GXT: HVYIndustries */, 16);
	StringCopy(&(Global_56465[71 /*36*/].f_4), "BSS_BSTR_142" /* GXT: HVY */, 16);
	Global_56465[71 /*36*/].f_8 = 1;
	Global_56465[71 /*36*/].f_35 = 36;
	StringCopy(&(Global_56465[72 /*36*/]), "BSS_BSTR_143" /* GXT: Logger */, 16);
	StringCopy(&(Global_56465[72 /*36*/].f_4), "BSS_BSTR_144" /* GXT: LOG */, 16);
	Global_56465[72 /*36*/].f_8 = 0;
	Global_56465[72 /*36*/].f_35 = 35;
	StringCopy(&(Global_56465[73 /*36*/]), "BSS_BSTR_145" /* GXT: Merryweather */, 16);
	StringCopy(&(Global_56465[73 /*36*/].f_4), "BSS_BSTR_146" /* GXT: MER */, 16);
	Global_56465[73 /*36*/].f_8 = 0;
	Global_56465[73 /*36*/].f_35 = 36;
	StringCopy(&(Global_56465[74 /*36*/]), "BSS_BSTR_147" /* GXT: WorldwideFM */, 16);
	StringCopy(&(Global_56465[74 /*36*/].f_4), "BSS_BSTR_148" /* GXT: WFM */, 16);
	Global_56465[74 /*36*/].f_8 = 0;
	Global_56465[74 /*36*/].f_35 = 37;
	StringCopy(&(Global_56465[75 /*36*/]), "BSS_BSTR_149" /* GXT: RadioLosSantos */, 16);
	StringCopy(&(Global_56465[75 /*36*/].f_4), "BSS_BSTR_150" /* GXT: RLS */, 16);
	Global_56465[75 /*36*/].f_8 = 0;
	Global_56465[75 /*36*/].f_35 = 38;
	StringCopy(&(Global_56465[76 /*36*/]), "BSS_BSTR_151" /* GXT: Shrewsbury */, 16);
	StringCopy(&(Global_56465[76 /*36*/].f_4), "BSS_BSTR_152" /* GXT: SHR */, 16);
	Global_56465[76 /*36*/].f_8 = 1;
	Global_56465[76 /*36*/].f_35 = 37;
	StringCopy(&(Global_56465[77 /*36*/]), "BSS_BSTR_153" /* GXT: HawkAndLittle */, 16);
	StringCopy(&(Global_56465[77 /*36*/].f_4), "BSS_BSTR_154" /* GXT: HAL */, 16);
	Global_56465[77 /*36*/].f_8 = 1;
	Global_56465[77 /*36*/].f_35 = 38;
	StringCopy(&(Global_56465[78 /*36*/]), "BSS_BSTR_155" /* GXT: MorsMutualInsurance */, 16);
	StringCopy(&(Global_56465[78 /*36*/].f_4), "BSS_BSTR_156" /* GXT: MOR */, 16);
	Global_56465[78 /*36*/].f_8 = 0;
	Global_56465[78 /*36*/].f_35 = 39;
	StringCopy(&(Global_56465[79 /*36*/]), "BSS_BSTR_157" /* GXT: Bilkinton */, 16);
	StringCopy(&(Global_56465[79 /*36*/].f_4), "BSS_BSTR_158" /* GXT: BIL */, 16);
	Global_56465[79 /*36*/].f_8 = 0;
	Global_56465[79 /*36*/].f_35 = 40;
	Global_59620[0 /*7*/].f_2 = 1f;
	Global_59620[0 /*7*/].f_1 = 1f;
	Global_59620[0 /*7*/].f_3 = 1000f;
	Global_59620[0 /*7*/].f_4 = 3.5f;
	Global_59620[0 /*7*/].f_5 = 3.5f;
	Global_59620[0 /*7*/].f_6 = 0.1f;
	Global_59620[1 /*7*/].f_2 = 1f;
	Global_59620[1 /*7*/].f_1 = 1f;
	Global_59620[1 /*7*/].f_3 = 1000f;
	Global_59620[1 /*7*/].f_4 = 3.5f;
	Global_59620[1 /*7*/].f_5 = 3.5f;
	Global_59620[1 /*7*/].f_6 = 0.1f;
	Global_59620[2 /*7*/].f_2 = 1f;
	Global_59620[2 /*7*/].f_1 = 1f;
	Global_59620[2 /*7*/].f_3 = 1000f;
	Global_59620[2 /*7*/].f_4 = 3.5f;
	Global_59620[2 /*7*/].f_5 = 3.5f;
	Global_59620[2 /*7*/].f_6 = 0.1f;
	Global_59620[3 /*7*/].f_2 = 1f;
	Global_59620[3 /*7*/].f_1 = 1f;
	Global_59620[3 /*7*/].f_3 = 1000f;
	Global_59620[3 /*7*/].f_4 = 3.5f;
	Global_59620[3 /*7*/].f_5 = 3.5f;
	Global_59620[3 /*7*/].f_6 = 0.1f;
	Global_59620[4 /*7*/].f_2 = 1f;
	Global_59620[4 /*7*/].f_1 = 1f;
	Global_59620[4 /*7*/].f_3 = 1000f;
	Global_59620[4 /*7*/].f_4 = 3.5f;
	Global_59620[4 /*7*/].f_5 = 3.5f;
	Global_59620[4 /*7*/].f_6 = 0.1f;
	Global_59620[5 /*7*/].f_2 = 1f;
	Global_59620[5 /*7*/].f_1 = 1f;
	Global_59620[5 /*7*/].f_3 = 1000f;
	Global_59620[5 /*7*/].f_4 = 3.5f;
	Global_59620[5 /*7*/].f_5 = 3.5f;
	Global_59620[5 /*7*/].f_6 = 0.1f;
	Global_59620[6 /*7*/].f_2 = 1f;
	Global_59620[6 /*7*/].f_1 = 1f;
	Global_59620[6 /*7*/].f_3 = 1000f;
	Global_59620[6 /*7*/].f_4 = 3.5f;
	Global_59620[6 /*7*/].f_5 = 3.5f;
	Global_59620[6 /*7*/].f_6 = 0.1f;
	Global_59620[7 /*7*/].f_2 = 1f;
	Global_59620[7 /*7*/].f_1 = 1f;
	Global_59620[7 /*7*/].f_3 = 1000f;
	Global_59620[7 /*7*/].f_4 = 3.5f;
	Global_59620[7 /*7*/].f_5 = 3.5f;
	Global_59620[7 /*7*/].f_6 = 0.1f;
	Global_59620[8 /*7*/].f_2 = 1f;
	Global_59620[8 /*7*/].f_1 = 1f;
	Global_59620[8 /*7*/].f_3 = 1000f;
	Global_59620[8 /*7*/].f_4 = 3.5f;
	Global_59620[8 /*7*/].f_5 = 3.5f;
	Global_59620[8 /*7*/].f_6 = 0.1f;
	Global_59620[9 /*7*/].f_2 = 1f;
	Global_59620[9 /*7*/].f_1 = 1f;
	Global_59620[9 /*7*/].f_3 = 1000f;
	Global_59620[9 /*7*/].f_4 = 3.5f;
	Global_59620[9 /*7*/].f_5 = 3.5f;
	Global_59620[9 /*7*/].f_6 = 0.1f;
	Global_59620[10 /*7*/].f_2 = 1f;
	Global_59620[10 /*7*/].f_1 = 1f;
	Global_59620[10 /*7*/].f_3 = 1000f;
	Global_59620[10 /*7*/].f_4 = 3.5f;
	Global_59620[10 /*7*/].f_5 = 3.5f;
	Global_59620[10 /*7*/].f_6 = 0.1f;
	Global_59620[11 /*7*/].f_2 = 1f;
	Global_59620[11 /*7*/].f_1 = 1f;
	Global_59620[11 /*7*/].f_3 = 1000f;
	Global_59620[11 /*7*/].f_4 = 3.5f;
	Global_59620[11 /*7*/].f_5 = 3.5f;
	Global_59620[11 /*7*/].f_6 = 0.1f;
	Global_59620[12 /*7*/].f_2 = 1f;
	Global_59620[12 /*7*/].f_1 = 1f;
	Global_59620[12 /*7*/].f_3 = 1000f;
	Global_59620[12 /*7*/].f_4 = 3.5f;
	Global_59620[12 /*7*/].f_5 = 3.5f;
	Global_59620[12 /*7*/].f_6 = 0.1f;
	Global_59620[13 /*7*/].f_2 = 1f;
	Global_59620[13 /*7*/].f_1 = 1f;
	Global_59620[13 /*7*/].f_3 = 1000f;
	Global_59620[13 /*7*/].f_4 = 3.5f;
	Global_59620[13 /*7*/].f_5 = 3.5f;
	Global_59620[13 /*7*/].f_6 = 0.1f;
	Global_59620[14 /*7*/].f_2 = 1f;
	Global_59620[14 /*7*/].f_1 = 1f;
	Global_59620[14 /*7*/].f_3 = 1000f;
	Global_59620[14 /*7*/].f_4 = 3.5f;
	Global_59620[14 /*7*/].f_5 = 3.5f;
	Global_59620[14 /*7*/].f_6 = 0.1f;
	Global_59620[15 /*7*/].f_2 = 1f;
	Global_59620[15 /*7*/].f_1 = 1f;
	Global_59620[15 /*7*/].f_3 = 1000f;
	Global_59620[15 /*7*/].f_4 = 3.5f;
	Global_59620[15 /*7*/].f_5 = 3.5f;
	Global_59620[15 /*7*/].f_6 = 0.1f;
	Global_59620[16 /*7*/].f_2 = 1f;
	Global_59620[16 /*7*/].f_1 = 1f;
	Global_59620[16 /*7*/].f_3 = 1000f;
	Global_59620[16 /*7*/].f_4 = 3.5f;
	Global_59620[16 /*7*/].f_5 = 3.5f;
	Global_59620[16 /*7*/].f_6 = 0.1f;
	Global_59620[17 /*7*/].f_2 = 1f;
	Global_59620[17 /*7*/].f_1 = 1f;
	Global_59620[17 /*7*/].f_3 = 1000f;
	Global_59620[17 /*7*/].f_4 = 3.5f;
	Global_59620[17 /*7*/].f_5 = 3.5f;
	Global_59620[17 /*7*/].f_6 = 0.1f;
	Global_59620[18 /*7*/].f_2 = 1f;
	Global_59620[18 /*7*/].f_1 = 1f;
	Global_59620[18 /*7*/].f_3 = 1000f;
	Global_59620[18 /*7*/].f_4 = 3.5f;
	Global_59620[18 /*7*/].f_5 = 3.5f;
	Global_59620[18 /*7*/].f_6 = 0.1f;
	Global_59620[19 /*7*/].f_2 = 1f;
	Global_59620[19 /*7*/].f_1 = 1f;
	Global_59620[19 /*7*/].f_3 = 1000f;
	Global_59620[19 /*7*/].f_4 = 3.5f;
	Global_59620[19 /*7*/].f_5 = 3.5f;
	Global_59620[19 /*7*/].f_6 = 0.1f;
	Global_59620[20 /*7*/].f_2 = 1f;
	Global_59620[20 /*7*/].f_1 = 1f;
	Global_59620[20 /*7*/].f_3 = 1000f;
	Global_59620[20 /*7*/].f_4 = 3.5f;
	Global_59620[20 /*7*/].f_5 = 3.5f;
	Global_59620[20 /*7*/].f_6 = 0.1f;
	Global_59620[21 /*7*/].f_2 = 1f;
	Global_59620[21 /*7*/].f_1 = 1f;
	Global_59620[21 /*7*/].f_3 = 1000f;
	Global_59620[21 /*7*/].f_4 = 3.5f;
	Global_59620[21 /*7*/].f_5 = 3.5f;
	Global_59620[21 /*7*/].f_6 = 0.1f;
	Global_59620[22 /*7*/].f_2 = 1f;
	Global_59620[22 /*7*/].f_1 = 1f;
	Global_59620[22 /*7*/].f_3 = 1000f;
	Global_59620[22 /*7*/].f_4 = 3.5f;
	Global_59620[22 /*7*/].f_5 = 3.5f;
	Global_59620[22 /*7*/].f_6 = 0.1f;
	Global_59620[23 /*7*/].f_2 = 1f;
	Global_59620[23 /*7*/].f_1 = 1f;
	Global_59620[23 /*7*/].f_3 = 1000f;
	Global_59620[23 /*7*/].f_4 = 3.5f;
	Global_59620[23 /*7*/].f_5 = 3.5f;
	Global_59620[23 /*7*/].f_6 = 0.1f;
	Global_59620[24 /*7*/].f_2 = 1f;
	Global_59620[24 /*7*/].f_1 = 1f;
	Global_59620[24 /*7*/].f_3 = 1000f;
	Global_59620[24 /*7*/].f_4 = 3.5f;
	Global_59620[24 /*7*/].f_5 = 3.5f;
	Global_59620[24 /*7*/].f_6 = 0.1f;
	Global_59620[25 /*7*/].f_2 = 1f;
	Global_59620[25 /*7*/].f_1 = 1f;
	Global_59620[25 /*7*/].f_3 = 1000f;
	Global_59620[25 /*7*/].f_4 = 3.5f;
	Global_59620[25 /*7*/].f_5 = 3.5f;
	Global_59620[25 /*7*/].f_6 = 0.1f;
	Global_59620[26 /*7*/].f_2 = 1f;
	Global_59620[26 /*7*/].f_1 = 1f;
	Global_59620[26 /*7*/].f_3 = 1000f;
	Global_59620[26 /*7*/].f_4 = 3.5f;
	Global_59620[26 /*7*/].f_5 = 3.5f;
	Global_59620[26 /*7*/].f_6 = 0.1f;
	Global_59620[27 /*7*/].f_2 = 1f;
	Global_59620[27 /*7*/].f_1 = 1f;
	Global_59620[27 /*7*/].f_3 = 1000f;
	Global_59620[27 /*7*/].f_4 = 3.5f;
	Global_59620[27 /*7*/].f_5 = 3.5f;
	Global_59620[27 /*7*/].f_6 = 0.1f;
	Global_59620[28 /*7*/].f_2 = 1f;
	Global_59620[28 /*7*/].f_1 = 1f;
	Global_59620[28 /*7*/].f_3 = 1000f;
	Global_59620[28 /*7*/].f_4 = 3.5f;
	Global_59620[28 /*7*/].f_5 = 3.5f;
	Global_59620[28 /*7*/].f_6 = 0.1f;
	Global_59620[29 /*7*/].f_2 = 1f;
	Global_59620[29 /*7*/].f_1 = 1f;
	Global_59620[29 /*7*/].f_3 = 1000f;
	Global_59620[29 /*7*/].f_4 = 3.5f;
	Global_59620[29 /*7*/].f_5 = 3.5f;
	Global_59620[29 /*7*/].f_6 = 0.1f;
	Global_59620[30 /*7*/].f_2 = 1f;
	Global_59620[30 /*7*/].f_1 = 1f;
	Global_59620[30 /*7*/].f_3 = 1000f;
	Global_59620[30 /*7*/].f_4 = 3.5f;
	Global_59620[30 /*7*/].f_5 = 3.5f;
	Global_59620[30 /*7*/].f_6 = 0.1f;
	Global_59620[31 /*7*/].f_2 = 1f;
	Global_59620[31 /*7*/].f_1 = 1f;
	Global_59620[31 /*7*/].f_3 = 1000f;
	Global_59620[31 /*7*/].f_4 = 3.5f;
	Global_59620[31 /*7*/].f_5 = 3.5f;
	Global_59620[31 /*7*/].f_6 = 0.1f;
	Global_59620[32 /*7*/].f_2 = 1f;
	Global_59620[32 /*7*/].f_1 = 1f;
	Global_59620[32 /*7*/].f_3 = 1000f;
	Global_59620[32 /*7*/].f_4 = 3.5f;
	Global_59620[32 /*7*/].f_5 = 3.5f;
	Global_59620[32 /*7*/].f_6 = 0.1f;
	Global_59620[33 /*7*/].f_2 = 1f;
	Global_59620[33 /*7*/].f_1 = 1f;
	Global_59620[33 /*7*/].f_3 = 1000f;
	Global_59620[33 /*7*/].f_4 = 3.5f;
	Global_59620[33 /*7*/].f_5 = 3.5f;
	Global_59620[33 /*7*/].f_6 = 0.1f;
	Global_59620[34 /*7*/].f_2 = 1f;
	Global_59620[34 /*7*/].f_1 = 1f;
	Global_59620[34 /*7*/].f_3 = 1000f;
	Global_59620[34 /*7*/].f_4 = 3.5f;
	Global_59620[34 /*7*/].f_5 = 3.5f;
	Global_59620[34 /*7*/].f_6 = 0.1f;
	Global_59620[35 /*7*/].f_2 = 1f;
	Global_59620[35 /*7*/].f_1 = 1f;
	Global_59620[35 /*7*/].f_3 = 1000f;
	Global_59620[35 /*7*/].f_4 = 3.5f;
	Global_59620[35 /*7*/].f_5 = 3.5f;
	Global_59620[35 /*7*/].f_6 = 0.1f;
	Global_59620[36 /*7*/].f_2 = 1f;
	Global_59620[36 /*7*/].f_1 = 1f;
	Global_59620[36 /*7*/].f_3 = 1000f;
	Global_59620[36 /*7*/].f_4 = 3.5f;
	Global_59620[36 /*7*/].f_5 = 3.5f;
	Global_59620[36 /*7*/].f_6 = 0.1f;
	Global_59620[37 /*7*/].f_2 = 1f;
	Global_59620[37 /*7*/].f_1 = 1f;
	Global_59620[37 /*7*/].f_3 = 1000f;
	Global_59620[37 /*7*/].f_4 = 3.5f;
	Global_59620[37 /*7*/].f_5 = 3.5f;
	Global_59620[37 /*7*/].f_6 = 0.1f;
	Global_59620[38 /*7*/].f_2 = 1f;
	Global_59620[38 /*7*/].f_1 = 1f;
	Global_59620[38 /*7*/].f_3 = 1000f;
	Global_59620[38 /*7*/].f_4 = 3.5f;
	Global_59620[38 /*7*/].f_5 = 3.5f;
	Global_59620[38 /*7*/].f_6 = 0.1f;
	Global_59620[39 /*7*/].f_2 = 1f;
	Global_59620[39 /*7*/].f_1 = 1f;
	Global_59620[39 /*7*/].f_3 = 1000f;
	Global_59620[39 /*7*/].f_4 = 3.5f;
	Global_59620[39 /*7*/].f_5 = 3.5f;
	Global_59620[39 /*7*/].f_6 = 0.1f;
	Global_59620[40 /*7*/].f_2 = 1f;
	Global_59620[40 /*7*/].f_1 = 1f;
	Global_59620[40 /*7*/].f_3 = 1000f;
	Global_59620[40 /*7*/].f_4 = 3.5f;
	Global_59620[40 /*7*/].f_5 = 3.5f;
	Global_59620[40 /*7*/].f_6 = 0.1f;
	Global_59908[0 /*7*/].f_1 = joaat("SM_BRVECDESBFA");
	Global_59908[0 /*7*/] = 1;
	Global_59908[1 /*7*/].f_1 = joaat("SM_BRVECDESBRU");
	Global_59908[1 /*7*/] = 1;
	Global_59908[3 /*7*/].f_1 = joaat("SM_BRVECDESLSC");
	Global_59908[3 /*7*/] = 1;
	Global_59908[4 /*7*/].f_1 = joaat("SM_BRVECDESLST");
	Global_59908[4 /*7*/] = 1;
	Global_59908[5 /*7*/].f_1 = joaat("SM_BRVECDESLTD");
	Global_59908[5 /*7*/] = 1;
	Global_59908[6 /*7*/].f_1 = joaat("SM_BRVECDESMAI");
	Global_59908[6 /*7*/] = 1;
	Global_59908[7 /*7*/].f_1 = joaat("SM_BRVECDESRON");
	Global_59908[7 /*7*/] = 1;
	Global_59908[8 /*7*/].f_1 = joaat("SM_BRVECDESSHT");
	Global_59908[8 /*7*/] = 1;
	Global_59908[9 /*7*/].f_1 = joaat("SM_BRVECDESUMA");
	Global_59908[9 /*7*/] = 1;
	Global_59908[10 /*7*/].f_1 = joaat("SM_BRVECDESVAP");
	Global_59908[10 /*7*/] = 1;
	Global_59908[11 /*7*/].f_1 = joaat("SM_BRVECDESHVY");
	Global_59908[11 /*7*/] = 1;
	Global_59908[12 /*7*/].f_1 = joaat("SM_VECBUYBFA");
	Global_59908[12 /*7*/] = 1;
	Global_59908[13 /*7*/].f_1 = joaat("SM_VECBUYBRU");
	Global_59908[13 /*7*/] = 1;
	Global_59908[15 /*7*/].f_1 = joaat("SM_VECBUYMAI");
	Global_59908[15 /*7*/] = 1;
	Global_59908[16 /*7*/].f_1 = joaat("SM_VECBUYSHT");
	Global_59908[16 /*7*/] = 1;
	Global_59908[17 /*7*/].f_1 = joaat("SM_VECBUYUMA");
	Global_59908[17 /*7*/] = 1;
	Global_59908[18 /*7*/].f_1 = joaat("SM_VECBUYVAP");
	Global_59908[18 /*7*/] = 1;
	Global_59908[19 /*7*/].f_1 = joaat("SM_VECBUYHVY");
	Global_59908[19 /*7*/] = 1;
	Global_59908[20 /*7*/].f_1 = joaat("SM_DISDRIVBFA");
	Global_59908[20 /*7*/] = 1;
	Global_59908[21 /*7*/].f_1 = joaat("SM_DISDRIVBRU");
	Global_59908[21 /*7*/] = 1;
	Global_59908[23 /*7*/].f_1 = joaat("SM_DISDRIVLST");
	Global_59908[23 /*7*/] = 1;
	Global_59908[24 /*7*/].f_1 = joaat("SM_DISDRIVMAI");
	Global_59908[24 /*7*/] = 1;
	Global_59908[25 /*7*/].f_1 = joaat("SM_DISDRIVSHT");
	Global_59908[25 /*7*/] = 1;
	Global_59908[26 /*7*/].f_1 = joaat("SM_DISDRIVUMA");
	Global_59908[26 /*7*/] = 1;
	Global_59908[27 /*7*/].f_1 = joaat("SM_DISDRIVVAP");
	Global_59908[27 /*7*/] = 1;
	Global_59908[28 /*7*/].f_1 = joaat("SM_DISDRIVHVY");
	Global_59908[28 /*7*/] = 1;
	Global_59908[30 /*7*/].f_1 = joaat("SM_VECMODLSC");
	Global_59908[30 /*7*/] = 1;
	Global_59908[31 /*7*/].f_1 = joaat("SM_VECSTOLBFA");
	Global_59908[31 /*7*/] = 1;
	Global_59908[32 /*7*/].f_1 = joaat("SM_VECSTOLBRU");
	Global_59908[32 /*7*/] = 1;
	Global_59908[34 /*7*/].f_1 = joaat("SM_VECSTOLLST");
	Global_59908[34 /*7*/] = 1;
	Global_59908[35 /*7*/].f_1 = joaat("SM_VECSTOLMAI");
	Global_59908[35 /*7*/] = 1;
	Global_59908[36 /*7*/].f_1 = joaat("SM_VECSTOLSHT");
	Global_59908[36 /*7*/] = 1;
	Global_59908[37 /*7*/].f_1 = joaat("SM_VECSTOLUMA");
	Global_59908[37 /*7*/] = 1;
	Global_59908[38 /*7*/].f_1 = joaat("SM_VECSTOLVAP");
	Global_59908[38 /*7*/] = 1;
	Global_59908[39 /*7*/].f_1 = joaat("SM_VECSTOLHVY");
	Global_59908[39 /*7*/] = 1;
	Global_59908[40 /*7*/].f_1 = joaat("SM_VECDMGBFA");
	Global_59908[40 /*7*/] = 1;
	Global_59908[41 /*7*/].f_1 = joaat("SM_VECDMGBRU");
	Global_59908[41 /*7*/] = 1;
	Global_59908[43 /*7*/].f_1 = joaat("SM_VECDMGMAI");
	Global_59908[43 /*7*/] = 1;
	Global_59908[44 /*7*/].f_1 = joaat("SM_VECDMGSHT");
	Global_59908[44 /*7*/] = 1;
	Global_59908[45 /*7*/].f_1 = joaat("SM_VECDMGUMA");
	Global_59908[45 /*7*/] = 1;
	Global_59908[46 /*7*/].f_1 = joaat("SM_VECDMGVAP");
	Global_59908[46 /*7*/] = 1;
	Global_59908[47 /*7*/].f_1 = joaat("SM_VECDMGHVY");
	Global_59908[47 /*7*/] = 1;
	Global_59908[48 /*7*/].f_1 = joaat("SM_VECPEDKIL");
	Global_59908[48 /*7*/] = 1;
	Global_59908[49 /*7*/].f_1 = joaat("SM_WEPBUYSHR");
	Global_59908[49 /*7*/] = 1;
	Global_59908[50 /*7*/].f_1 = joaat("SM_WEPBUYHAL");
	Global_59908[50 /*7*/] = 1;
	Global_59908[51 /*7*/].f_1 = joaat("SM_WEPTAKEVOM");
	Global_59908[51 /*7*/] = 1;
	Global_59908[52 /*7*/].f_1 = joaat("SM_WEPTAKESHR");
	Global_59908[52 /*7*/] = 1;
	Global_59908[53 /*7*/].f_1 = joaat("SM_WEPTAKEHAL");
	Global_59908[53 /*7*/] = 1;
	Global_59908[54 /*7*/].f_1 = joaat("SM_KILCOPVOM");
	Global_59908[54 /*7*/] = 1;
	Global_59908[55 /*7*/].f_1 = joaat("SM_KILCOPSHR");
	Global_59908[55 /*7*/] = 1;
	Global_59908[56 /*7*/].f_1 = joaat("SM_KILCOPHAL");
	Global_59908[56 /*7*/] = 1;
	Global_59908[57 /*7*/].f_1 = joaat("SM_KILCRIMVOM");
	Global_59908[57 /*7*/] = 1;
	Global_59908[58 /*7*/].f_1 = joaat("SM_KILCRIMSHR");
	Global_59908[58 /*7*/] = 1;
	Global_59908[59 /*7*/].f_1 = joaat("SM_KILCRIMHAL");
	Global_59908[59 /*7*/] = 1;
	Global_59908[60 /*7*/].f_1 = joaat("SM_KILCIVMAI");
	Global_59908[60 /*7*/] = 1;
	Global_59908[61 /*7*/].f_1 = joaat("SM_KILCIVSHT");
	Global_59908[61 /*7*/] = 1;
	Global_59908[62 /*7*/].f_1 = joaat("SM_KILCIVUMA");
	Global_59908[62 /*7*/] = 1;
	Global_59908[63 /*7*/].f_1 = joaat("SM_KILCIVVOM");
	Global_59908[63 /*7*/] = 1;
	Global_59908[64 /*7*/].f_1 = joaat("SM_KILCIVSHR");
	Global_59908[64 /*7*/] = 1;
	Global_59908[65 /*7*/].f_1 = joaat("SM_KILCIVHAL");
	Global_59908[65 /*7*/] = 1;
	Global_59908[67 /*7*/].f_1 = joaat("SM_VENUSESPU");
	Global_59908[67 /*7*/] = 1;
	Global_59908[68 /*7*/].f_1 = joaat("SM_NEWDAM");
	Global_59908[68 /*7*/] = 1;
	Global_59908[69 /*7*/].f_1 = joaat("SM_HPKIL");
	Global_59908[69 /*7*/] = 1;
	Global_59908[70 /*7*/].f_1 = joaat("SM_PUBCLUB");
	Global_59908[70 /*7*/] = 1;
	Global_59908[71 /*7*/].f_1 = joaat("SM_TDRNK");
	Global_59908[71 /*7*/] = 1;
	Global_59908[72 /*7*/].f_1 = joaat("SM_FRNPUB");
	Global_59908[72 /*7*/] = 1;
	Global_59908[73 /*7*/].f_1 = joaat("SM_DRNKCRM");
	Global_59908[73 /*7*/] = 1;
	Global_59908[74 /*7*/].f_1 = joaat("SM_RAMCOM");
	Global_59908[74 /*7*/] = 1;
	Global_59908[76 /*7*/].f_1 = joaat("SM_RADCNT");
	Global_59908[76 /*7*/] = 1;
	Global_59908[77 /*7*/].f_1 = joaat("SM_RADWZL");
	Global_59908[77 /*7*/] = 1;
	Global_59908[78 /*7*/].f_1 = joaat("SM_RADZIT");
	Global_59908[78 /*7*/] = 1;
	Global_59908[81 /*7*/].f_1 = joaat("SM_ZITITCNT");
	Global_59908[81 /*7*/] = 1;
	Global_59908[82 /*7*/].f_1 = joaat("SM_ZITITWZL");
	Global_59908[82 /*7*/] = 1;
	Global_59908[83 /*7*/].f_1 = joaat("SM_ZITITZIT");
	Global_59908[83 /*7*/] = 1;
	Global_59908[84 /*7*/].f_1 = joaat("SM_RADCHACNT");
	Global_59908[84 /*7*/] = 1;
	Global_59908[85 /*7*/].f_1 = joaat("SM_RADCHAWZL");
	Global_59908[85 /*7*/] = 1;
	Global_59908[88 /*7*/].f_1 = joaat("SM_PARA");
	Global_59908[88 /*7*/] = 1;
	Global_59908[89 /*7*/].f_1 = joaat("SM_TKFIRE");
	Global_59908[89 /*7*/] = 1;
	Global_59908[90 /*7*/].f_1 = joaat("SM_FIBAI");
	Global_59908[90 /*7*/] = 1;
	Global_59908[91 /*7*/].f_1 = joaat("SM_TANDES");
	Global_59908[91 /*7*/] = 1;
	Global_59908[92 /*7*/].f_1 = joaat("SM_GAREP");
	Global_59908[92 /*7*/] = 1;
	Global_59908[93 /*7*/].f_1 = joaat("SM_GAMONSP");
	Global_59908[93 /*7*/] = 1;
	Global_59908[94 /*7*/].f_1 = joaat("SM_MONB");
	Global_59908[94 /*7*/] = 1;
	Global_59908[98 /*7*/].f_1 = joaat("SM_MONUPSHK");
	Global_59908[98 /*7*/] = 1;
	Global_59908[100 /*7*/].f_1 = joaat("SM_TAXDEST");
	Global_59908[100 /*7*/] = 1;
	Global_59908[101 /*7*/].f_1 = joaat("SM_KILWBFA");
	Global_59908[101 /*7*/] = 1;
	Global_59908[102 /*7*/].f_1 = joaat("SM_KILWBRU");
	Global_59908[102 /*7*/] = 1;
	Global_59908[104 /*7*/].f_1 = joaat("SM_KILWMAI");
	Global_59908[104 /*7*/] = 1;
	Global_59908[105 /*7*/].f_1 = joaat("SM_KILWSHT");
	Global_59908[105 /*7*/] = 1;
	Global_59908[106 /*7*/].f_1 = joaat("SM_KILWUMA");
	Global_59908[106 /*7*/] = 1;
	Global_59908[107 /*7*/].f_1 = joaat("SM_KILWVAP");
	Global_59908[107 /*7*/] = 1;
	Global_59908[108 /*7*/].f_1 = joaat("SM_KILWVOM");
	Global_59908[108 /*7*/] = 1;
	Global_59908[109 /*7*/].f_1 = joaat("SM_KILWHVY");
	Global_59908[109 /*7*/] = 1;
	Global_59908[112 /*7*/].f_1 = joaat("SM_CLOBOFBIN");
	Global_59908[112 /*7*/] = 1;
	Global_59908[113 /*7*/].f_1 = joaat("SM_CLOBOFPKW");
	Global_59908[113 /*7*/] = 1;
	Global_59908[114 /*7*/].f_1 = joaat("SM_CLOBOFPON");
	Global_59908[114 /*7*/] = 1;
	Global_59908[117 /*7*/].f_1 = joaat("SM_YOGA");
	Global_59908[117 /*7*/] = 1;
	Global_59908[118 /*7*/].f_1 = joaat("SM_TRI");
	Global_59908[118 /*7*/] = 1;
	Global_59908[119 /*7*/].f_1 = joaat("SM_GYM");
	Global_59908[119 /*7*/] = 1;
	Global_59908[120 /*7*/].f_1 = joaat("SM_STRIP");
	Global_59908[120 /*7*/] = 1;
	Global_59908[121 /*7*/].f_1 = joaat("SM_UGHOK");
	Global_59908[121 /*7*/] = 1;
	Global_59908[122 /*7*/].f_1 = joaat("SM_STRTRO");
	Global_59908[122 /*7*/] = 1;
	Global_59908[123 /*7*/].f_1 = joaat("SM_PISCO");
	Global_59908[123 /*7*/] = 1;
	Global_59908[124 /*7*/].f_1 = joaat("SM_TOTINJ");
	Global_59908[124 /*7*/] = 1;
	Global_59908[125 /*7*/].f_1 = joaat("SM_DRUGKIL");
	Global_59908[125 /*7*/] = 1;
	Global_59908[126 /*7*/].f_1 = joaat("SM_HANGOVR");
	Global_59908[126 /*7*/] = 1;
	Global_59908[127 /*7*/].f_1 = joaat("SM_KILLSPR");
	Global_59908[127 /*7*/] = 1;
	Global_59908[129 /*7*/].f_1 = joaat("SM_PEDFIREKILL");
	Global_59908[129 /*7*/] = 1;
	Global_59908[130 /*7*/].f_1 = joaat("SM_PEDFIRETICK");
	Global_59908[130 /*7*/] = 1;
	Global_59908[131 /*7*/].f_1 = joaat("SM_TVTICKWAP");
	Global_59908[131 /*7*/] = 1;
	Global_59908[132 /*7*/].f_1 = joaat("SM_TVTICKWIW");
	Global_59908[132 /*7*/] = 1;
	Global_59908[134 /*7*/].f_1 = joaat("SM_ZITPOPZIT");
	Global_59908[134 /*7*/] = 1;
	Global_59908[135 /*7*/].f_1 = joaat("SM_CARAPP");
	Global_59908[135 /*7*/] = 1;
	Global_59908[137 /*7*/].f_1 = joaat("SM_STOROB");
	Global_59908[137 /*7*/] = 1;
	Global_59908[162 /*7*/].f_1 = joaat("SM_PHONCALBDG");
	Global_59908[162 /*7*/] = 1;
	Global_59908[163 /*7*/].f_1 = joaat("SM_PHONCALTNK");
	Global_59908[163 /*7*/] = 1;
	Global_59908[164 /*7*/].f_1 = joaat("SM_PHONCALWIZ");
	Global_59908[164 /*7*/] = 1;
	Global_59908[165 /*7*/].f_1 = joaat("SM_PHONTXTBDG");
	Global_59908[165 /*7*/] = 1;
	Global_59908[166 /*7*/].f_1 = joaat("SM_PHONTXTTNK");
	Global_59908[166 /*7*/] = 1;
	Global_59908[167 /*7*/].f_1 = joaat("SM_PHONTXTWIZ");
	Global_59908[167 /*7*/] = 1;
	Global_59908[168 /*7*/].f_1 = joaat("SM_CHTICKBDG");
	Global_59908[168 /*7*/] = 1;
	Global_59908[169 /*7*/].f_1 = joaat("SM_CHTICKTNK");
	Global_59908[169 /*7*/] = 1;
	Global_59908[170 /*7*/].f_1 = joaat("SM_CHTICKWIZ");
	Global_59908[170 /*7*/] = 1;
	Global_59908[171 /*7*/].f_1 = joaat("SM_CALCANBDG");
	Global_59908[171 /*7*/] = 1;
	Global_59908[172 /*7*/].f_1 = joaat("SM_CALCANTNK");
	Global_59908[172 /*7*/] = 1;
	Global_59908[173 /*7*/].f_1 = joaat("SM_CALCANWIZ");
	Global_59908[173 /*7*/] = 1;
	Global_59908[138 /*7*/].f_2 = 1;
	Global_59908[138 /*7*/].f_3 = joaat("SP0_DIST_WALKING");
	Global_59908[138 /*7*/].f_4 = 1;
	Global_59908[139 /*7*/].f_2 = 1;
	Global_59908[139 /*7*/].f_3 = joaat("SP1_DIST_WALKING");
	Global_59908[139 /*7*/].f_4 = 1;
	Global_59908[140 /*7*/].f_2 = 1;
	Global_59908[140 /*7*/].f_3 = joaat("SP2_DIST_WALKING");
	Global_59908[140 /*7*/].f_4 = 1;
	Global_59908[141 /*7*/].f_2 = 1;
	Global_59908[141 /*7*/].f_3 = joaat("SP0_DIST_DRIVING_BICYCLE");
	Global_59908[141 /*7*/].f_4 = 1;
	Global_59908[142 /*7*/].f_2 = 1;
	Global_59908[142 /*7*/].f_3 = joaat("SP1_DIST_DRIVING_BICYCLE");
	Global_59908[142 /*7*/].f_4 = 1;
	Global_59908[143 /*7*/].f_2 = 1;
	Global_59908[143 /*7*/].f_3 = joaat("SP2_DIST_DRIVING_BICYCLE");
	Global_59908[143 /*7*/].f_4 = 1;
	Global_59908[144 /*7*/].f_2 = 1;
	Global_59908[144 /*7*/].f_3 = joaat("SP0_BAILED_FROM_VEHICLE");
	Global_59908[144 /*7*/].f_4 = 0;
	Global_59908[145 /*7*/].f_2 = 1;
	Global_59908[145 /*7*/].f_3 = joaat("SP1_BAILED_FROM_VEHICLE");
	Global_59908[145 /*7*/].f_4 = 0;
	Global_59908[146 /*7*/].f_2 = 1;
	Global_59908[146 /*7*/].f_3 = joaat("SP2_BAILED_FROM_VEHICLE");
	Global_59908[146 /*7*/].f_4 = 0;
	Global_59908[150 /*7*/].f_2 = 1;
	Global_59908[150 /*7*/].f_3 = joaat("SP0_LARGE_ACCIDENTS");
	Global_59908[150 /*7*/].f_4 = 0;
	Global_59908[151 /*7*/].f_2 = 1;
	Global_59908[151 /*7*/].f_3 = joaat("SP1_LARGE_ACCIDENTS");
	Global_59908[151 /*7*/].f_4 = 0;
	Global_59908[152 /*7*/].f_2 = 1;
	Global_59908[152 /*7*/].f_3 = joaat("SP2_LARGE_ACCIDENTS");
	Global_59908[152 /*7*/].f_4 = 0;
	Global_59908[153 /*7*/].f_2 = 1;
	Global_59908[153 /*7*/].f_3 = joaat("SP0_TOTAL_LEGITIMATE_KILLS");
	Global_59908[153 /*7*/].f_4 = 0;
	Global_59908[154 /*7*/].f_2 = 1;
	Global_59908[154 /*7*/].f_3 = joaat("SP1_TOTAL_LEGITIMATE_KILLS");
	Global_59908[154 /*7*/].f_4 = 0;
	Global_59908[155 /*7*/].f_2 = 1;
	Global_59908[155 /*7*/].f_3 = joaat("SP2_TOTAL_LEGITIMATE_KILLS");
	Global_59908[155 /*7*/].f_4 = 0;
	Global_59908[156 /*7*/].f_2 = 1;
	Global_59908[156 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_ON_TAXIS");
	Global_59908[156 /*7*/].f_4 = 0;
	Global_59908[157 /*7*/].f_2 = 1;
	Global_59908[157 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_ON_TAXIS");
	Global_59908[157 /*7*/].f_4 = 0;
	Global_59908[158 /*7*/].f_2 = 1;
	Global_59908[158 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_ON_TAXIS");
	Global_59908[158 /*7*/].f_4 = 0;
	Global_59908[159 /*7*/].f_2 = 1;
	Global_59908[159 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_ON_HEALTHCARE");
	Global_59908[159 /*7*/].f_4 = 0;
	Global_59908[160 /*7*/].f_2 = 1;
	Global_59908[160 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_ON_HEALTHCARE");
	Global_59908[160 /*7*/].f_4 = 0;
	Global_59908[161 /*7*/].f_2 = 1;
	Global_59908[161 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_ON_HEALTHCARE");
	Global_59908[161 /*7*/].f_4 = 0;
	Global_59908[174 /*7*/].f_2 = 1;
	Global_59908[174 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_IN_COP_BRIBES");
	Global_59908[174 /*7*/].f_4 = 0;
	Global_59908[175 /*7*/].f_2 = 1;
	Global_59908[175 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_IN_COP_BRIBES");
	Global_59908[175 /*7*/].f_4 = 0;
	Global_59908[176 /*7*/].f_2 = 1;
	Global_59908[176 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_IN_COP_BRIBES");
	Global_59908[176 /*7*/].f_4 = 0;
	Global_59908[177 /*7*/].f_2 = 1;
	Global_59908[177 /*7*/].f_3 = joaat("SP0_BUSTED");
	Global_59908[177 /*7*/].f_4 = 0;
	Global_59908[178 /*7*/].f_2 = 1;
	Global_59908[178 /*7*/].f_3 = joaat("SP1_BUSTED");
	Global_59908[178 /*7*/].f_4 = 0;
	Global_59908[179 /*7*/].f_2 = 1;
	Global_59908[179 /*7*/].f_3 = joaat("SP2_BUSTED");
	Global_59908[179 /*7*/].f_4 = 0;
	Global_59908[180 /*7*/].f_2 = 1;
	Global_59908[180 /*7*/].f_3 = joaat("SP0_DIED_IN_FALL");
	Global_59908[180 /*7*/].f_4 = 0;
	Global_59908[181 /*7*/].f_2 = 1;
	Global_59908[181 /*7*/].f_3 = joaat("SP1_DIED_IN_FALL");
	Global_59908[181 /*7*/].f_4 = 0;
	Global_59908[182 /*7*/].f_2 = 1;
	Global_59908[182 /*7*/].f_3 = joaat("SP2_DIED_IN_FALL");
	Global_59908[182 /*7*/].f_4 = 0;
	Global_59908[183 /*7*/].f_2 = 1;
	Global_59908[183 /*7*/].f_3 = joaat("SP0_STARS_ATTAINED");
	Global_59908[183 /*7*/].f_4 = 0;
	Global_59908[184 /*7*/].f_2 = 1;
	Global_59908[184 /*7*/].f_3 = joaat("SP1_STARS_ATTAINED");
	Global_59908[184 /*7*/].f_4 = 0;
	Global_59908[185 /*7*/].f_2 = 1;
	Global_59908[185 /*7*/].f_3 = joaat("SP2_STARS_ATTAINED");
	Global_59908[185 /*7*/].f_4 = 0;
	Global_59908[186 /*7*/].f_2 = 1;
	Global_59908[186 /*7*/].f_3 = joaat("SP0_STARS_EVADED");
	Global_59908[186 /*7*/].f_4 = 0;
	Global_59908[187 /*7*/].f_2 = 1;
	Global_59908[187 /*7*/].f_3 = joaat("SP1_STARS_EVADED");
	Global_59908[187 /*7*/].f_4 = 0;
	Global_59908[188 /*7*/].f_2 = 1;
	Global_59908[188 /*7*/].f_3 = joaat("SP2_STARS_EVADED");
	Global_59908[188 /*7*/].f_4 = 0;
	Global_59908[189 /*7*/].f_2 = 1;
	Global_59908[189 /*7*/].f_3 = joaat("SP0_MANUAL_SAVED");
	Global_59908[189 /*7*/].f_4 = 0;
	Global_59908[190 /*7*/].f_2 = 1;
	Global_59908[190 /*7*/].f_3 = joaat("SP1_MANUAL_SAVED");
	Global_59908[190 /*7*/].f_4 = 0;
	Global_59908[191 /*7*/].f_2 = 1;
	Global_59908[191 /*7*/].f_3 = joaat("SP2_MANUAL_SAVED");
	Global_59908[191 /*7*/].f_4 = 0;
	Global_59908[192 /*7*/].f_2 = 1;
	Global_59908[192 /*7*/].f_3 = joaat("SP0_KILLS_COP");
	Global_59908[192 /*7*/].f_4 = 0;
	Global_59908[193 /*7*/].f_2 = 1;
	Global_59908[193 /*7*/].f_3 = joaat("SP1_KILLS_COP");
	Global_59908[193 /*7*/].f_4 = 0;
	Global_59908[194 /*7*/].f_2 = 1;
	Global_59908[194 /*7*/].f_3 = joaat("SP2_KILLS_COP");
	Global_59908[194 /*7*/].f_4 = 0;
	Global_59908[195 /*7*/].f_2 = 1;
	Global_59908[195 /*7*/].f_3 = joaat("SP0_KILLS_SWAT");
	Global_59908[195 /*7*/].f_4 = 0;
	Global_59908[196 /*7*/].f_2 = 1;
	Global_59908[196 /*7*/].f_3 = joaat("SP1_KILLS_SWAT");
	Global_59908[196 /*7*/].f_4 = 0;
	Global_59908[197 /*7*/].f_2 = 1;
	Global_59908[197 /*7*/].f_3 = joaat("SP2_KILLS_SWAT");
	Global_59908[197 /*7*/].f_4 = 0;
	Global_59908[198 /*7*/].f_2 = 1;
	Global_59908[198 /*7*/].f_3 = joaat("SP0_TIME_IN_COVER");
	Global_59908[198 /*7*/].f_4 = 0;
	Global_59908[199 /*7*/].f_2 = 1;
	Global_59908[199 /*7*/].f_3 = joaat("SP1_TIME_IN_COVER");
	Global_59908[199 /*7*/].f_4 = 0;
	Global_59908[200 /*7*/].f_2 = 1;
	Global_59908[200 /*7*/].f_3 = joaat("SP2_TIME_IN_COVER");
	Global_59908[200 /*7*/].f_4 = 0;
	Global_59346[0 /*7*/] = joaat("SM_PRICE_AMU");
	Global_59346[0 /*7*/].f_3[0] = joaat("AMU_OW0");
	Global_59346[0 /*7*/].f_3[1] = joaat("AMU_OW1");
	Global_59346[0 /*7*/].f_3[2] = joaat("AMU_OW2");
	Global_59346[1 /*7*/] = joaat("SM_PRICE_BDG");
	Global_59346[1 /*7*/].f_3[0] = joaat("BDG_OW0");
	Global_59346[1 /*7*/].f_3[1] = joaat("BDG_OW1");
	Global_59346[1 /*7*/].f_3[2] = joaat("BDG_OW2");
	Global_59346[2 /*7*/] = joaat("SM_PRICE_BFA");
	Global_59346[2 /*7*/].f_3[0] = joaat("BFA_OW0");
	Global_59346[2 /*7*/].f_3[1] = joaat("BFA_OW1");
	Global_59346[2 /*7*/].f_3[2] = joaat("BFA_OW2");
	Global_59346[3 /*7*/] = joaat("SM_PRICE_BIN");
	Global_59346[3 /*7*/].f_3[0] = joaat("BIN_OW0");
	Global_59346[3 /*7*/].f_3[1] = joaat("BIN_OW1");
	Global_59346[3 /*7*/].f_3[2] = joaat("BIN_OW2");
	Global_59346[4 /*7*/] = joaat("SM_PRICE_BTR");
	Global_59346[4 /*7*/].f_3[0] = joaat("BTR_OW0");
	Global_59346[4 /*7*/].f_3[1] = joaat("BTR_OW1");
	Global_59346[4 /*7*/].f_3[2] = joaat("BTR_OW2");
	Global_59346[5 /*7*/] = joaat("SM_PRICE_BLE");
	Global_59346[5 /*7*/].f_3[0] = joaat("BLE_OW0");
	Global_59346[5 /*7*/].f_3[1] = joaat("BLE_OW1");
	Global_59346[5 /*7*/].f_3[2] = joaat("BLE_OW2");
	Global_59346[6 /*7*/] = joaat("SM_PRICE_BRU");
	Global_59346[6 /*7*/].f_3[0] = joaat("BRU_OW0");
	Global_59346[6 /*7*/].f_3[1] = joaat("BRU_OW1");
	Global_59346[6 /*7*/].f_3[2] = joaat("BRU_OW2");
	Global_59346[7 /*7*/] = joaat("SM_PRICE_CNT");
	Global_59346[7 /*7*/].f_3[0] = joaat("CNT_OW0");
	Global_59346[7 /*7*/].f_3[1] = joaat("CNT_OW1");
	Global_59346[7 /*7*/].f_3[2] = joaat("CNT_OW2");
	Global_59346[8 /*7*/] = joaat("SM_PRICE_CRE");
	Global_59346[8 /*7*/].f_3[0] = joaat("CRE_OW0");
	Global_59346[8 /*7*/].f_3[1] = joaat("CRE_OW1");
	Global_59346[8 /*7*/].f_3[2] = joaat("CRE_OW2");
	Global_59346[9 /*7*/] = joaat("SM_PRICE_DGP");
	Global_59346[9 /*7*/].f_3[0] = joaat("DGP_OW0");
	Global_59346[9 /*7*/].f_3[1] = joaat("DGP_OW1");
	Global_59346[9 /*7*/].f_3[2] = joaat("DGP_OW2");
	Global_59346[10 /*7*/] = joaat("SM_PRICE_WAP");
	Global_59346[10 /*7*/].f_3[0] = joaat("WAP_OW0");
	Global_59346[10 /*7*/].f_3[1] = joaat("WAP_OW1");
	Global_59346[10 /*7*/].f_3[2] = joaat("WAP_OW2");
	Global_59346[11 /*7*/] = joaat("SM_PRICE_FAC");
	Global_59346[11 /*7*/].f_3[0] = joaat("FAC_OW0");
	Global_59346[11 /*7*/].f_3[1] = joaat("FAC_OW1");
	Global_59346[11 /*7*/].f_3[2] = joaat("FAC_OW2");
	Global_59346[12 /*7*/] = joaat("SM_PRICE_FRT");
	Global_59346[12 /*7*/].f_3[0] = joaat("FRT_OW0");
	Global_59346[12 /*7*/].f_3[1] = joaat("FRT_OW1");
	Global_59346[12 /*7*/].f_3[2] = joaat("FRT_OW2");
	Global_59346[13 /*7*/] = joaat("SM_PRICE_LSC");
	Global_59346[13 /*7*/].f_3[0] = joaat("LSC_OW0");
	Global_59346[13 /*7*/].f_3[1] = joaat("LSC_OW1");
	Global_59346[13 /*7*/].f_3[2] = joaat("LSC_OW2");
	Global_59346[14 /*7*/] = joaat("SM_PRICE_LST");
	Global_59346[14 /*7*/].f_3[0] = joaat("LST_OW0");
	Global_59346[14 /*7*/].f_3[1] = joaat("LST_OW1");
	Global_59346[14 /*7*/].f_3[2] = joaat("LST_OW2");
	Global_59346[15 /*7*/] = joaat("SM_PRICE_LTD");
	Global_59346[15 /*7*/].f_3[0] = joaat("LTD_OW0");
	Global_59346[15 /*7*/].f_3[1] = joaat("LTD_OW1");
	Global_59346[15 /*7*/].f_3[2] = joaat("LTD_OW2");
	Global_59346[16 /*7*/] = joaat("SM_PRICE_MAI");
	Global_59346[16 /*7*/].f_3[0] = joaat("MAI_OW0");
	Global_59346[16 /*7*/].f_3[1] = joaat("MAI_OW1");
	Global_59346[16 /*7*/].f_3[2] = joaat("MAI_OW2");
	Global_59346[17 /*7*/] = joaat("SM_PRICE_PKW");
	Global_59346[17 /*7*/].f_3[0] = joaat("PKW_OW0");
	Global_59346[17 /*7*/].f_3[1] = joaat("PKW_OW1");
	Global_59346[17 /*7*/].f_3[2] = joaat("PKW_OW2");
	Global_59346[18 /*7*/] = joaat("SM_PRICE_PIS");
	Global_59346[18 /*7*/].f_3[0] = joaat("PIS_OW0");
	Global_59346[18 /*7*/].f_3[1] = joaat("PIS_OW1");
	Global_59346[18 /*7*/].f_3[2] = joaat("PIS_OW2");
	Global_59346[19 /*7*/] = joaat("SM_PRICE_PON");
	Global_59346[19 /*7*/].f_3[0] = joaat("PON_OW0");
	Global_59346[19 /*7*/].f_3[1] = joaat("PON_OW1");
	Global_59346[19 /*7*/].f_3[2] = joaat("PON_OW2");
	Global_59346[20 /*7*/] = joaat("SM_PRICE_RON");
	Global_59346[20 /*7*/].f_3[0] = joaat("RON_OW0");
	Global_59346[20 /*7*/].f_3[1] = joaat("RON_OW1");
	Global_59346[20 /*7*/].f_3[2] = joaat("RON_OW2");
	Global_59346[21 /*7*/] = joaat("SM_PRICE_SHT");
	Global_59346[21 /*7*/].f_3[0] = joaat("SHT_OW0");
	Global_59346[21 /*7*/].f_3[1] = joaat("SHT_OW1");
	Global_59346[21 /*7*/].f_3[2] = joaat("SHT_OW2");
	Global_59346[22 /*7*/] = joaat("SM_PRICE_SPU");
	Global_59346[22 /*7*/].f_3[0] = joaat("SPU_OW0");
	Global_59346[22 /*7*/].f_3[1] = joaat("SPU_OW1");
	Global_59346[22 /*7*/].f_3[2] = joaat("SPU_OW2");
	Global_59346[23 /*7*/] = joaat("SM_PRICE_TNK");
	Global_59346[23 /*7*/].f_3[0] = joaat("TNK_OW0");
	Global_59346[23 /*7*/].f_3[1] = joaat("TNK_OW1");
	Global_59346[23 /*7*/].f_3[2] = joaat("TNK_OW2");
	Global_59346[24 /*7*/] = joaat("SM_PRICE_WIW");
	Global_59346[24 /*7*/].f_3[0] = joaat("WIW_OW0");
	Global_59346[24 /*7*/].f_3[1] = joaat("WIW_OW1");
	Global_59346[24 /*7*/].f_3[2] = joaat("WIW_OW2");
	Global_59346[25 /*7*/] = joaat("SM_PRICE_UMA");
	Global_59346[25 /*7*/].f_3[0] = joaat("UMA_OW0");
	Global_59346[25 /*7*/].f_3[1] = joaat("UMA_OW1");
	Global_59346[25 /*7*/].f_3[2] = joaat("UMA_OW2");
	Global_59346[26 /*7*/] = joaat("SM_PRICE_VAP");
	Global_59346[26 /*7*/].f_3[0] = joaat("VAP_OW0");
	Global_59346[26 /*7*/].f_3[1] = joaat("VAP_OW1");
	Global_59346[26 /*7*/].f_3[2] = joaat("VAP_OW2");
	Global_59346[27 /*7*/] = joaat("SM_PRICE_VOM");
	Global_59346[27 /*7*/].f_3[0] = joaat("VOM_OW0");
	Global_59346[27 /*7*/].f_3[1] = joaat("VOM_OW1");
	Global_59346[27 /*7*/].f_3[2] = joaat("VOM_OW2");
	Global_59346[28 /*7*/] = joaat("SM_PRICE_WZL");
	Global_59346[28 /*7*/].f_3[0] = joaat("WZL_OW0");
	Global_59346[28 /*7*/].f_3[1] = joaat("WZL_OW1");
	Global_59346[28 /*7*/].f_3[2] = joaat("WZL_OW2");
	Global_59346[29 /*7*/] = joaat("SM_PRICE_WIZ");
	Global_59346[29 /*7*/].f_3[0] = joaat("WIZ_OW0");
	Global_59346[29 /*7*/].f_3[1] = joaat("WIZ_OW1");
	Global_59346[29 /*7*/].f_3[2] = joaat("WIZ_OW2");
	Global_59346[30 /*7*/] = joaat("SM_PRICE_ZIT");
	Global_59346[30 /*7*/].f_3[0] = joaat("ZIT_OW0");
	Global_59346[30 /*7*/].f_3[1] = joaat("ZIT_OW1");
	Global_59346[30 /*7*/].f_3[2] = joaat("ZIT_OW2");
	Global_59346[31 /*7*/] = joaat("SM_PRICE_SHK");
	Global_59346[31 /*7*/].f_3[0] = joaat("SHK_OW0");
	Global_59346[31 /*7*/].f_3[1] = joaat("SHK_OW1");
	Global_59346[31 /*7*/].f_3[2] = joaat("SHK_OW2");
	Global_59346[32 /*7*/] = joaat("SM_PRICE_MOL");
	Global_59346[32 /*7*/].f_3[0] = joaat("MOL_OW0");
	Global_59346[32 /*7*/].f_3[1] = joaat("MOL_OW1");
	Global_59346[32 /*7*/].f_3[2] = joaat("MOL_OW2");
	Global_59346[33 /*7*/] = joaat("SM_PRICE_PMP");
	Global_59346[33 /*7*/].f_3[0] = joaat("PMP_OW0");
	Global_59346[33 /*7*/].f_3[1] = joaat("PMP_OW1");
	Global_59346[33 /*7*/].f_3[2] = joaat("PMP_OW2");
	Global_59346[34 /*7*/] = joaat("SM_PRICE_GOT");
	Global_59346[34 /*7*/].f_3[0] = joaat("GOT_OW0");
	Global_59346[34 /*7*/].f_3[1] = joaat("GOT_OW1");
	Global_59346[34 /*7*/].f_3[2] = joaat("GOT_OW2");
	Global_59346[35 /*7*/] = joaat("SM_PRICE_EYE");
	Global_59346[35 /*7*/].f_3[0] = joaat("EYE_OW0");
	Global_59346[35 /*7*/].f_3[1] = joaat("EYE_OW1");
	Global_59346[35 /*7*/].f_3[2] = joaat("EYE_OW2");
	Global_59346[36 /*7*/] = joaat("SM_PRICE_HVY");
	Global_59346[36 /*7*/].f_3[0] = joaat("HVY_OW0");
	Global_59346[36 /*7*/].f_3[1] = joaat("HVY_OW1");
	Global_59346[36 /*7*/].f_3[2] = joaat("HVY_OW2");
	Global_59346[37 /*7*/] = joaat("SM_PRICE_SHR");
	Global_59346[37 /*7*/].f_3[0] = joaat("SHR_OW0");
	Global_59346[37 /*7*/].f_3[1] = joaat("SHR_OW1");
	Global_59346[37 /*7*/].f_3[2] = joaat("SHR_OW2");
	Global_59346[38 /*7*/] = joaat("SM_PRICE_HAL");
	Global_59346[38 /*7*/].f_3[0] = joaat("HAL_OW0");
	Global_59346[38 /*7*/].f_3[1] = joaat("HAL_OW1");
	Global_59346[38 /*7*/].f_3[2] = joaat("HAL_OW2");
}

void func_99()//Position - 0x9572
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

