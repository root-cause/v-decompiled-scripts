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
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	func_99();
	while (true)
	{
		func_98();
		if (func_93())
		{
			func_92();
		}
		if (Global_2738934.f_5249.f_757 == 0)
		{
			func_92();
		}
		switch (iLocal_33)
		{
			case 0:
				iLocal_33 = 1;
				break;
			
			case 1:
				if (func_12())
				{
					iLocal_33 = 2;
				}
				break;
			
			case 2:
				if (!func_1())
				{
					iLocal_33 = 4;
				}
				break;
			
			case 4:
				func_92();
				break;
		}
	}
}

int func_1()//Position - 0xD3
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2738934.f_5249.f_756;
		if (iVar0 != func_6())
		{
			if (func_4(iVar0))
			{
				func_2(iVar0);
				return 0;
			}
		}
		else
		{
			func_2(iVar0);
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_2(int iParam0)//Position - 0x120
{
	if (iParam0 != func_6())
	{
		func_3(iParam0);
	}
	Global_2738934.f_5249.f_756 = func_6();
}

void func_3(int iParam0)//Position - 0x145
{
	int iVar0;
	
	iVar0 = iParam0;
	MISC::CLEAR_BIT(&(Global_2647061.f_388), iVar0);
	MISC::CLEAR_BIT(&(Global_2647061.f_389), iVar0);
	MISC::CLEAR_BIT(&(Global_2647061.f_390), iVar0);
	MISC::CLEAR_BIT(&(Global_2647061.f_392), iVar0);
	MISC::CLEAR_BIT(&(Global_2647061.f_396), iVar0);
	MISC::CLEAR_BIT(&(Global_2647061.f_391), iVar0);
}

int func_4(int iParam0)//Position - 0x19F
{
	if (!func_5(iParam0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)//Position - 0x1B8
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

int func_6()//Position - 0x218
{
	return -1;
}

bool func_7(bool bParam0)//Position - 0x221
{
	return func_8(PLAYER::PLAYER_ID(), bParam0);
}

int func_8(int iParam0, bool bParam1)//Position - 0x233
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, bool bParam1, int iParam2)//Position - 0x244
{
	int iVar0;
	
	if (!func_11(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_10(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_11(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0, int iParam1)//Position - 0x2A0
{
	if (func_11(iParam0))
	{
		if (func_11(Global_1887305[iParam0 /*610*/].f_10))
		{
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(var uParam0)//Position - 0x2EF
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

int func_12()//Position - 0x311
{
	bool bVar0;
	
	if (func_7(1))
	{
		bVar0 = Global_2738934.f_5249.f_756;
		if (bVar0 != func_6())
		{
			if (func_13(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_13(bool bParam0)//Position - 0x344
{
	if (func_5(bParam0, 0, 1))
	{
		func_90(bParam0, 432, 1, 0);
		if (func_89(bParam0))
		{
			func_86(bParam0, func_87(func_88(PLAYER::PLAYER_ID())), 1, 0);
		}
		if (func_84(bParam0))
		{
			func_82(bParam0, 1, 1, 0);
		}
		func_76(bParam0, 1, 0);
		func_14(bParam0, 1, 5000);
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1, int iParam2)//Position - 0x3A8
{
	int iVar0;
	
	if (bParam0 == func_6())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = bParam0;
	if (bParam1)
	{
		if (bParam0 == Global_2672855)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2647061[iVar0]))
		{
			MISC::SET_BIT(&(Global_2647061.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2647061.f_375), iVar0);
			HUD::SET_BLIP_FLASHES(Global_2647061[iVar0], true);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2647061[iVar0], 250);
			func_15(bParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2647061.f_375), iVar0);
			}
			else
			{
				Global_2647061.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_2647061.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2647061.f_375), iVar0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2647061.f_375), iVar0);
			}
			else
			{
				Global_2647061.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2647061.f_370), iVar0);
		MISC::CLEAR_BIT(&(Global_2647061.f_375), iVar0);
		if (HUD::DOES_BLIP_EXIST(Global_2647061[iVar0]))
		{
			func_15(bParam0);
			HUD::SET_BLIP_FLASHES(Global_2647061[iVar0], false);
		}
	}
}

void func_15(int iParam0)//Position - 0x4DD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2647061[iVar0]))
		{
			Global_2647061.f_1504[iVar0] = func_16(iParam0);
			HUD::SET_BLIP_PRIORITY(Global_2647061[iVar0], Global_2647061.f_1504[iVar0]);
		}
	}
}

int func_16(int iParam0)//Position - 0x52B
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2647061[iVar0]))
		{
			iVar1 = HUD::GET_BLIP_SPRITE(Global_2647061[iVar0]);
			if (BitTest(Global_2647061.f_386, iVar0) || BitTest(Global_2647061.f_385, iVar0))
			{
				return 1;
			}
			else if ((BitTest(Global_2647061.f_371, iVar0) || BitTest(Global_2647061.f_370, iVar0)) || BitTest(Global_2647061.f_388, iVar0))
			{
				return func_73(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_73(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_73(11);
						break;
					
					case 254:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_2672855))
						{
							return func_73(6);
						}
						else
						{
							return func_73(5);
						}
						break;
					
					case 271:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_2672855))
						{
							return func_73(6);
						}
						else
						{
							return func_73(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_72(Global_2672855, iParam0, -2, 0))
						{
							return func_73(6);
						}
						else
						{
							return func_73(5);
						}
						break;
					
					case 303:
					case 418:
						return func_73(10);
						break;
					
					case 364:
						if (func_21(Global_2672855, iParam0, 1))
						{
							return func_73(10);
						}
						else
						{
							return func_73(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_73(10);
						break;
					
					case 417:
						if ((func_20(iParam0) || func_19(iParam0)) || func_17(iParam0))
						{
							if (func_21(Global_2672855, iParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_21(Global_2672855, iParam0, 1))
						{
							return func_73(6);
						}
						else
						{
							return func_73(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_21(Global_2672855, iParam0, 1))
						{
							return func_73(6);
						}
						else
						{
							return func_73(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_17(int iParam0)//Position - 0x796
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_18(Global_2657971[iParam0 /*465*/].f_322.f_8) == 16;
			}
		}
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x7DD
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
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

int func_19(int iParam0)//Position - 0xCDD
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_18(Global_2657971[iParam0 /*465*/].f_322.f_8) == 15;
			}
		}
	}
	return 0;
}

int func_20(int iParam0)//Position - 0xD24
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_18(Global_2657971[iParam0 /*465*/].f_322.f_8) == 14;
			}
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, bool bParam2)//Position - 0xD6B
{
	if (func_24(iParam0, -2, 0, 0, 0) == func_24(iParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_22(func_24(iParam0, -2, 0, 0, 0)) && func_22(func_24(iParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0)//Position - 0xDC4
{
	if (iParam0 == func_23(1) || iParam0 == func_23(0))
	{
		return 1;
	}
	return 0;
}

int func_23(bool bParam0)//Position - 0xDEA
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_24(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xE01
{
	int iVar0;
	int iVar1;
	
	if (!func_11(iParam0))
	{
		return 1;
	}
	if (func_70(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_121471[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_70(PLAYER::PLAYER_ID()) || (func_69() && func_68())) && !BitTest(Global_2738934.f_4712, 31)) && !bParam4)
	{
		iVar1 = func_67();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_5(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_121471[iParam1] != -1)
							{
								return func_65(iParam1, iParam0, 0);
							}
							else
							{
								return func_41(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_41(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_121471[iParam1] != -1)
				{
					return func_65(iParam1, iParam0, 0);
				}
				else
				{
					return func_25(0, -1, 0);
				}
			}
			else
			{
				return func_25(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_121471[iParam1] != -1)
		{
			return func_65(iParam1, iParam0, 0);
		}
		else
		{
			return func_41(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_41(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_25(bool bParam0, int iParam1, bool bParam2)//Position - 0xFEC
{
	return func_26(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_26(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1002
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_40() || (func_39() && func_37())) && Global_1680185.f_1)
	{
		if (bParam1)
		{
			return func_36(iParam2, iVar0);
		}
		else
		{
			return func_36(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_30(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_23(1);
				}
				else
				{
					return func_23(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_27(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_27(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_23(1);
	}
	return func_23(0);
}

int func_27(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1104
{
	int iVar0;
	
	iVar0 = func_29(iParam0, iParam1, iParam3);
	if (func_28(Global_4718592.f_127178, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
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
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_28(int iParam0, bool bParam1)//Position - 0x121C
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_185586 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9522[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_29(int iParam0, int iParam1, int iParam2)//Position - 0x126D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_30(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_30(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12B5
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
		bVar0 = Global_1058116.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25622, bVar0))
			{
				bVar1 = Global_1058116.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_31(iParam0, bVar0, iParam1, bVar1) || !func_31(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_31(iParam0, bVar0, iParam1, bVar1) || !func_31(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_31(iParam0, bVar0, iParam1, bVar1) || !func_31(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_31(iParam0, bVar0, iParam1, bVar1) || !func_31(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (12 + iParam1));
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
					return BitTest(Global_4718592.f_3541, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1600
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
	if (!BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25623, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3592[iParam2 /*25891*/].f_25623, bParam3))
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
		if (((!func_5(iVar1, 1, 1) || func_33(iVar1, 0)) || BitTest(Global_2657971[iVar1 /*465*/].f_200, 2)) || func_32(iVar1))
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

var func_32(int iParam0)//Position - 0x172C
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 14);
}

bool func_33(int iParam0, int iParam1)//Position - 0x1744
{
	bool bVar0;
	
	if (!func_11(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_34(-1, 0) == 8;
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

int func_34(int iParam0, bool bParam1)//Position - 0x179D
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
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

int func_35()//Position - 0x17DE
{
	return Global_1574926;
}

int func_36(int iParam0, int iParam1)//Position - 0x17EA
{
	if (iParam0 == -1)
	{
		iParam0 = func_29(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_37()//Position - 0x1838
{
	if (func_38())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_190336, 4);
}

bool func_38()//Position - 0x1857
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_39()//Position - 0x186C
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_190336, 0);
	}
	return ((BitTest(Global_4718592.f_190336, 0) || Global_1919908) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_40()//Position - 0x18B3
{
	if (func_38() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_41(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x18D0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1845281[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_49())
			{
				iVar3 = func_45(iParam0);
				if (!iVar3 == -1)
				{
					return func_43(iVar3);
				}
			}
			if ((func_72(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_30(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_23(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_42(1);
			}
			else
			{
				return func_26(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836681 || Global_1836671) || Global_1845281[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836681 == 1 && Global_1836691 == 0))
			{
				return func_23(1);
			}
			else
			{
				return func_26(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836675 && Global_1836148.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_45(iParam0);
	if (!iVar4 == -1)
	{
		return func_43(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_42(bool bParam0)//Position - 0x1A68
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_43(int iParam0)//Position - 0x1A7F
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_44(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_44(int iParam0)//Position - 0x1B42
{
	return Global_2648938.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_45(int iParam0)//Position - 0x1B59
{
	if (func_11(iParam0))
	{
		if (func_47(iParam0, 1))
		{
			return Global_2648938.f_818.f_11[func_46(iParam0)];
		}
	}
	return -1;
}

int func_46(int iParam0)//Position - 0x1B89
{
	if (func_11(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_6();
}

int func_47(int iParam0, bool bParam1)//Position - 0x1BAC
{
	if (!func_11(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_48(iParam0))
		{
			return 0;
		}
	}
	return func_11(Global_1887305[iParam0 /*610*/].f_10);
}

int func_48(int iParam0)//Position - 0x1BE4
{
	if (func_11(iParam0))
	{
		if (func_11(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_49()//Position - 0x1C19
{
	if ((((((((func_64() || func_63()) || func_62()) || func_61()) || func_60()) || func_58()) || func_56()) || func_53()) || func_50())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_50()//Position - 0x1C95
{
	return func_51(Global_4718592.f_127178);
}

int func_51(int iParam0)//Position - 0x1CAB
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_52(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_52(int iParam0)//Position - 0x1CDF
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35481[iParam0];
	}
	return -1;
}

int func_53()//Position - 0x1CFE
{
	return func_54(Global_4718592.f_127178);
}

int func_54(int iParam0)//Position - 0x1D14
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_55(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x1D48
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_56()//Position - 0x1D67
{
	return func_57(Global_4718592.f_127178);
}

int func_57(int iParam0)//Position - 0x1D7D
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31052[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_58()//Position - 0x1DB6
{
	return func_59(Global_4718592.f_127178);
}

int func_59(int iParam0)//Position - 0x1DCC
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30347[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_60()//Position - 0x1E06
{
	return Global_2684504.f_24;
}

var func_61()//Position - 0x1E14
{
	return Global_2684504.f_21;
}

var func_62()//Position - 0x1E22
{
	return Global_2684504.f_19;
}

var func_63()//Position - 0x1E30
{
	return Global_2684504.f_18;
}

var func_64()//Position - 0x1E3E
{
	return Global_2684504.f_17;
}

int func_65(int iParam0, int iParam1, bool bParam2)//Position - 0x1E4C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058116.f_14[iParam0];
	if (func_49())
	{
		iVar2 = func_45(iParam1);
		if (!iVar2 == -1)
		{
			return func_43(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_8534[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_6())
	{
		if (Global_4718592.f_121471[iParam0] != -1 && Global_4718592.f_121471[iParam0] <= 4)
		{
			if (Global_4718592.f_121471[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_121471[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_121471[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_121471[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_121471[iParam0];
			}
		}
		else
		{
			iVar0 = func_26(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_66(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_30(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_42(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_66(int iParam0)//Position - 0x1FCC
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_185777;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_185778;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_185779;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_185780;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_67()//Position - 0x20A1
{
	return Global_2621446.f_2;
}

var func_68()//Position - 0x20AF
{
	return BitTest(Global_2621446, 4);
}

var func_69()//Position - 0x20BD
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

int func_70(int iParam0)//Position - 0x20D7
{
	if (func_33(iParam0, 0))
	{
		return 1;
	}
	if (func_71())
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

bool func_71()//Position - 0x2116
{
	return BitTest(Global_2621446, 3);
}

bool func_72(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2124
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_73(int iParam0)//Position - 0x219C
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_75())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_74(iParam0);
}

int func_74(int iParam0)//Position - 0x21D6
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_75()//Position - 0x2261
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(Global_2672855);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return BitTest(Global_4718592.f_3592[iVar0 /*25891*/].f_14238, 4);
	}
	return 0;
}

void func_76(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2298
{
	var uVar0;
	
	if (func_78(bParam0))
	{
		return;
	}
	func_77(&(Global_2647061.f_723[bParam0]), &(Global_2647061.f_1086[bParam0]), &(Global_2647061.f_393), bParam1, bParam0, bParam2, &uVar0);
}

int func_77(var uParam0, var uParam1, int* iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6)//Position - 0x22D6
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, bParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, bParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x2395
{
	if (iParam0 == func_6())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_79())
	{
		return 1;
	}
	return 0;
}

int func_79()//Position - 0x23BE
{
	switch (func_81())
	{
		case 0:
			return func_80();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_80()//Position - 0x23F1
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_81()//Position - 0x2415
{
	return Global_32948;
}

void func_82(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2420
{
	var uVar0;
	
	if (func_78(bParam0))
	{
		return;
	}
	if (func_77(&(Global_2647061.f_822[bParam0]), &(Global_2647061.f_1185[bParam0]), &(Global_2647061.f_367), bParam1, bParam0, bParam3, &uVar0))
	{
		func_83(bParam0, bParam2);
	}
}

void func_83(bool bParam0, bool bParam1)//Position - 0x2468
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2647061.f_368), bParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2647061.f_368), bParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_2647061[bParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2647061[bParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2647061[bParam0], true);
		}
	}
}

bool func_84(bool bParam0)//Position - 0x24C3
{
	return func_85(&(Global_2647061.f_822[bParam0]));
}

int func_85(var uParam0)//Position - 0x24DA
{
	if (SCRIPT::IS_THREAD_ACTIVE(*uParam0))
	{
		if (!*uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return 0;
		}
	}
	return 1;
}

void func_86(bool bParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x24FD
{
	var uVar0;
	
	if (func_78(bParam0))
	{
		return;
	}
	if (func_77(&(Global_2647061.f_624[bParam0]), &(Global_2647061.f_987[bParam0]), &(Global_2647061.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2647061.f_459[bParam0] = uParam1;
		}
	}
}

int func_87(int iParam0)//Position - 0x254F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_88(int iParam0)//Position - 0x27B7
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iVar0 != -1)
	{
		return func_43(iVar0);
	}
	return 1;
}

bool func_89(bool bParam0)//Position - 0x27D7
{
	return func_85(&(Global_2647061.f_624[bParam0]));
}

void func_90(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x27EE
{
	bool bVar0;
	
	if (func_78(bParam0))
	{
		return;
	}
	if (func_77(&(Global_2647061.f_591[bParam0]), &(Global_2647061.f_954[bParam0]), &(Global_2647061.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2647061.f_426[bParam0] = iParam1;
		}
		if (bVar0)
		{
			func_91();
		}
	}
}

void func_91()//Position - 0x2849
{
	Global_2647061.f_1656 = 1;
	Global_1943520.f_3864 = 1;
}

void func_92()//Position - 0x2861
{
	func_2(Global_2738934.f_5249.f_756);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_93()//Position - 0x287B
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_97())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_96())
	{
		return 1;
	}
	if (func_95(159))
	{
		if (!func_94())
		{
			return 1;
		}
	}
	if (func_95(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_79() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_79()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_94()//Position - 0x28FF
{
	return Global_2684504.f_700;
}

int func_95(int iParam0)//Position - 0x290E
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_96()//Position - 0x2925
{
	return Global_2696172;
}

bool func_97()//Position - 0x2931
{
	return Global_2684504.f_695;
}

void func_98()//Position - 0x2940
{
	SYSTEM::WAIT(0);
}

int func_99()//Position - 0x294D
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

