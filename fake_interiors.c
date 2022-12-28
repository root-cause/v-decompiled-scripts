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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	struct<3> Local_30 = { 0, 0, 0 } ;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_29 = -1;
	Local_30 = { 0f, 0f, 0f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (func_23(PLAYER::PLAYER_ID()) && ENTITY::DOES_ENTITY_EXIST(func_22()))
		{
			iLocal_33 = func_22();
		}
		else
		{
			iLocal_33 = PLAYER::PLAYER_PED_ID();
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_33, false))
		{
		}
		func_1();
	}
}

void func_1()//Position - 0xB1
{
	struct<3> Var0;
	struct<3> Var3;
	bool bVar6;
	int iVar7;
	
	func_21();
	if (iLocal_29 != -1 && func_20(iLocal_29))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_33, false) };
		Var3 = { func_19(iLocal_29) };
		if (SYSTEM::VDIST2(Var3, Var0) < IntToFloat(func_18(iLocal_29)))
		{
			bVar6 = false;
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 < func_17(iLocal_29))
			{
				if (!bVar6)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_33, func_16(iLocal_29, iVar7), func_15(iLocal_29, iVar7), func_14(iLocal_29, iVar7), false, true, 0))
					{
						bVar6 = true;
					}
				}
				iVar7++;
			}
			if (bVar6)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY(func_13(iLocal_29)), Var3.f_0, Var3.f_1, func_12(iLocal_29), func_11(iLocal_29));
				func_10(iLocal_29);
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_2())
		{
			if (BitTest(uLocal_34, 1))
			{
				MISC::CLEAR_BIT(&uLocal_34, 1);
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!BitTest(uLocal_34, 0))
				{
					HUD::SET_MINIMAP_COMPONENT(15, true, -1);
					MISC::SET_BIT(&uLocal_34, 0);
				}
			}
			else if (BitTest(uLocal_34, 0))
			{
				HUD::SET_MINIMAP_COMPONENT(15, false, -1);
				MISC::CLEAR_BIT(&uLocal_34, 0);
			}
		}
		else if (!BitTest(uLocal_34, 1))
		{
			HUD::SET_MINIMAP_COMPONENT(15, false, -1);
			MISC::CLEAR_BIT(&uLocal_34, 0);
			MISC::SET_BIT(&uLocal_34, 1);
		}
	}
}

int func_2()//Position - 0x1E7
{
	int iVar0;
	
	if (func_7(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_5(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_4();
		if (iVar0 != func_3())
		{
			if (func_7(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3()//Position - 0x227
{
	return -1;
}

var func_4()//Position - 0x230
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

bool func_5(int iParam0, bool bParam1)//Position - 0x245
{
	if (!bParam1)
	{
		if (func_6(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_3();
}

int func_6(int iParam0)//Position - 0x270
{
	if (iParam0 != func_3())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_3())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_7(int iParam0)//Position - 0x2A5
{
	int iVar0;
	
	if (func_9(iParam0))
	{
		iVar0 = func_8(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_8(int iParam0)//Position - 0x2DE
{
	if (iParam0 != func_3())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_293;
	}
	return 0;
}

int func_9(int iParam0)//Position - 0x302
{
	if (iParam0 != func_3())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_293 != 0;
	}
	return 0;
}

void func_10(int iParam0)//Position - 0x328
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_33, false) };
	HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(Var0.f_0, Var0.f_1);
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_33, false) };
			HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(Var0.f_0, Var0.f_1);
			break;
		
		case 3:
			HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			break;
		
		case 4:
			HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			break;
	}
}

int func_11(int iParam0)//Position - 0x396
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_33, false) };
			if (Var0.f_2 < 9.7796f)
			{
				return 0;
			}
			else if (Var0.f_2 > 9.7796f && Var0.f_2 < 16f)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		
		case 2:
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_33, false) };
			if (Var0.f_2 < 178.9f)
			{
				return 0;
			}
			else if (Var0.f_2 > 178.9f && Var0.f_2 < 188.7f)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
	}
	return 0;
}

int func_12(int iParam0)//Position - 0x46B
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
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
	}
	return 0;
}

char* func_13(int iParam0)//Position - 0x4BC
{
	switch (iParam0)
	{
		case 0:
			return "V_FakeBoatPO1SH2A";
			break;
		
		case 1:
			return "V_FakeWarehousePO103";
			break;
		
		case 2:
			return "V_FakeKortzCenter";
			break;
		
		case 3:
			return "V_FakePrison";
			break;
		
		case 4:
			return "V_FakeMilitaryBase";
			break;
	}
	return "";
}

float func_14(int iParam0, int iParam1)//Position - 0x518
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 28.125f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 32.6875f;
					break;
				
				case 1:
					return 13.1875f;
					break;
				
				case 2:
					return 16.25f;
					break;
				
				case 3:
					return 21.75f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 95f;
					break;
				
				case 1:
					return 78.75f;
					break;
				
				case 2:
					return 70.6875f;
					break;
				
				case 3:
					return 64.4375f;
					break;
				
				case 4:
					return 32.375f;
					break;
				
				case 5:
					return 19f;
					break;
				
				case 6:
					return 19f;
					break;
				
				case 7:
					return 19.78125f;
					break;
				
				case 8:
					return 32.0625f;
					break;
				
				case 9:
					return 35.8125f;
					break;
				
				case 10:
					return 30.5f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3000f;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1500f;
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_15(int iParam0, int iParam1)//Position - 0x6AA
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.5371f, -3057.2888f, 40.75164f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.278374f, -2654.2437f, 20.942299f;
					break;
				
				case 1:
					return 13.931628f, -2654.5605f, 14.44239f;
					break;
				
				case 2:
					return 55.595722f, -2667.4985f, 10.822453f;
					break;
				
				case 3:
					return 34.586597f, -2746.3875f, 10.950064f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2169.1704f, 256.7264f, 203.40813f;
					break;
				
				case 1:
					return -2216.3938f, 329.4761f, 201.36168f;
					break;
				
				case 2:
					return -2345.3528f, 350.78818f, 189.65222f;
					break;
				
				case 3:
					return -2288.0972f, 388.99094f, 200.9045f;
					break;
				
				case 4:
					return -2310.2632f, 406.638f, 200.90408f;
					break;
				
				case 5:
					return -2169.2214f, 260.5679f, 202.42944f;
					break;
				
				case 6:
					return -2258.7776f, 166.9506f, 202.83177f;
					break;
				
				case 7:
					return -2236.9731f, 285.59576f, 203.03947f;
					break;
				
				case 8:
					return -2211.3618f, 303.67413f, 214.93228f;
					break;
				
				case 9:
					return -2282.0981f, 383.09036f, 201.0395f;
					break;
				
				case 10:
					return -2277.9302f, 356.44424f, 201.10155f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 200f, 2600f, -5f;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1451.2051f, 2689.4402f, -37.62654f;
					break;
			}
			break;
	}
	return Local_30;
}

Vector3 func_16(int iParam0, int iParam1)//Position - 0x8F3
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.5345f, -2880.354f, -19.964888f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.15308f, -2747.0674f, 1.137565f;
					break;
				
				case 1:
					return 13.957768f, -2700.626f, 5.046232f;
					break;
				
				case 2:
					return 55.61185f, -2687.6814f, 5.005801f;
					break;
				
				case 3:
					return 34.56926f, -2759.479f, -0.030933f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2317.3801f, 191.63188f, 165.40373f;
					break;
				
				case 1:
					return -2357.9949f, 264.02972f, 162.79884f;
					break;
				
				case 2:
					return -2261.4329f, 387.3963f, 154.35222f;
					break;
				
				case 3:
					return -2326.399f, 408.3378f, 140.31822f;
					break;
				
				case 4:
					return -2304.6167f, 460.21268f, 140.21474f;
					break;
				
				case 5:
					return -2150.825f, 216.41681f, 162.80118f;
					break;
				
				case 6:
					return -2172.7651f, 203.5957f, 167.41351f;
					break;
				
				case 7:
					return -2191.0364f, 305.96097f, 159.62502f;
					break;
				
				case 8:
					return -2227.613f, 340.05872f, 165.13574f;
					break;
				
				case 9:
					return -2244.4097f, 399.57635f, 137.5101f;
					break;
				
				case 10:
					return -2243.2615f, 371.4072f, 137.2722f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3200f, 2600f, 3000f;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2841.1074f, 3506.837f, 1000.47363f;
					break;
			}
			break;
	}
	return Local_30;
}

int func_17(int iParam0)//Position - 0xB3C
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 4;
			break;
		
		case 2:
			return 11;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0xB8E
{
	switch (iParam0)
	{
		case 0:
			return 10000;
			break;
		
		case 1:
			return 10000;
			break;
		
		case 2:
			return 250000;
			break;
		
		case 3:
			return 9000000;
			break;
		
		case 4:
			return 2250000;
			break;
	}
	return 0;
}

Vector3 func_19(int iParam0)//Position - 0xBEC
{
	switch (iParam0)
	{
		case 0:
			return 1240f, -2970f, 12.2f;
			break;
		
		case 1:
			return 40f, -2720f, 12f;
			break;
		
		case 2:
			return -2250f, 300f, 182.2f;
			break;
		
		case 3:
			return 1700f, 2580f, 80f;
			break;
		
		case 4:
			return -2250f, 3100f, 80f;
			break;
	}
	return Local_30;
}

int func_20(int iParam0)//Position - 0xC86
{
	switch (iParam0)
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
			break;
	}
	return 1;
}

void func_21()//Position - 0xCC3
{
	struct<3> Var0;
	
	iLocal_28++;
	if (iLocal_28 > 4)
	{
		iLocal_28 = 0;
	}
	if (iLocal_28 != iLocal_29)
	{
		if (iLocal_29 == -1)
		{
			iLocal_29 = iLocal_28;
		}
		else
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_33, false) };
			if (SYSTEM::VDIST2(func_19(iLocal_28), Var0) < SYSTEM::VDIST2(func_19(iLocal_29), Var0))
			{
				iLocal_29 = iLocal_28;
			}
		}
	}
}

var func_22()//Position - 0xD1D
{
	return Global_2621446.f_2;
}

int func_23(int iParam0)//Position - 0xD2B
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_24())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_24()//Position - 0xD6A
{
	return BitTest(Global_2621446, 3);
}

bool func_25(int iParam0, int iParam1)//Position - 0xD78
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_26(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
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

int func_26(int iParam0, bool bParam1)//Position - 0xDC3
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
	}
	if (Global_1575040[iVar1] == 1)
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

int func_27()//Position - 0xE04
{
	return Global_1574918;
}

