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
	float fLocal_45 = 0f;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
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
	fLocal_45 = ((0.05f + 0.275f) - 0.01f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_149();
		func_1();
	}
}

void func_1()//Position - 0xA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		iVar2 = 0;
		while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
		{
			iVar7 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar2);
			switch (iVar7)
			{
				case 193:
					func_146();
					break;
				
				case 194:
					func_145();
					break;
				
				case 195:
					func_139(iVar2);
					break;
				
				case 196:
					func_138(iVar2);
					break;
				
				case 197:
					func_127(iVar2);
					break;
				
				case 215:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		iLocal_63 = 1;
		switch (iVar0)
		{
			case 141:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_56289.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_56289.f_25[iVar5] = iVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 142:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_56289.f_13[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_56289.f_37[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_56289 = iVar3;
	Global_56289.f_12 = iVar4;
	Global_56289.f_24 = iVar5;
	Global_56289.f_36 = iVar6;
}

bool func_2(int iParam0)//Position - 0x24E
{
	return iParam0 < 10;
}

void func_3(int iParam0)//Position - 0x25B
{
	struct<39> Var0;
	int iVar39;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 39))
	{
		iVar39 = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(Var0.f_38);
		if (iVar39 >= 0 && iVar39 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
		{
			if (NETWORK::NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(iVar39) || NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(iVar39))
			{
				if (NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(iVar39))
				{
					func_59(iVar39);
				}
				else
				{
					NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iVar39);
				}
				func_58(Var0.f_37, -1);
			}
			else if (func_49())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param6, int iParam22, struct<13> Param23, var uParam36, int iParam37)//Position - 0x2F8
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<10> Var22;
	int iVar32;
	int iVar33;
	int iVar34;
	int* iVar35;
	struct<16> Var36;
	struct<16> Var52;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	var uVar74;
	var uVar75;
	bool bVar76;
	bool bVar77;
	bool bVar78;
	bool bVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	
	bVar0 = false;
	if (iParam37 >= 1000000)
	{
		iParam37 = (iParam37 - 1000000);
		bVar0 = true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_48())
		{
			func_47(iParam22);
			return 0;
		}
		if (func_46())
		{
			func_47(iParam22);
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bVar0)
		{
		}
		else if (!NETWORK::NETWORK_IS_FRIEND(&Param23))
		{
			func_47(iParam22);
			return 0;
		}
		if (Global_20756)
		{
			func_47(iParam22);
			return 0;
		}
		bVar1 = true;
		if (!func_45())
		{
			if (!func_44(0))
			{
				if (bVar1)
				{
					func_47(iParam22);
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_43(PLAYER::PLAYER_ID()))
		{
			func_47(iParam22);
			return 0;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param6))
	{
		func_47(iParam22);
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		func_47(iParam22);
		return 0;
	}
	Var2 = { Param6 };
	iVar18 = func_42(Var2);
	if (iVar18 != -1)
	{
		func_39(iVar18);
	}
	iVar19 = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(iParam22);
	if (iVar19 != -1)
	{
		iVar20 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(iVar19);
		iVar21 = 0;
		iVar21 = 0;
		while (iVar21 <= 11)
		{
			if (iVar20 == Global_2625771[iVar21 /*4*/].f_3 && MISC::GET_GAME_TIMER() < Global_2625771[iVar21 /*4*/].f_2)
			{
				Global_2625771[iVar21 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
				iVar21 = 12;
				func_47(iParam22);
				return 0;
			}
			iVar21++;
		}
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_9 = -1;
	func_38(&Var22);
	iVar32 = 0;
	iVar33 = 0;
	iVar34 = 63;
	iVar35 = 0;
	StringCopy(&Var36, "", 64);
	StringCopy(&Var52, "", 64);
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 0;
	iVar71 = 1;
	iVar72 = 0;
	iVar73 = 0;
	if (func_37(&Param0, &iVar32, &iVar35))
	{
		iVar34 = 40;
		iVar69 = 0;
		iVar35 = iVar35;
	}
	else if (func_35(&Param0, &Var22, 0))
	{
		iVar34 = Var22.f_2;
		iVar32 = func_34(iVar34, Var22.f_1);
		iVar33 = func_33(&Var22);
		Var36 = { func_32(&Var22, 0) };
		Var52 = { func_31(&Var22) };
		iVar69 = 1;
		iVar68 = func_30(&Var22, 0);
		iVar73 = func_29(&Var22);
		uVar74 = func_27(&Var22);
		uVar75 = func_26(&Var22);
		bVar76 = func_21(&Var22);
		if (!bVar76)
		{
			iVar72 = 1;
		}
	}
	else
	{
		bVar77 = false;
		if (func_19(PLAYER::PLAYER_ID(), Param23))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar77 = true;
			}
			else
			{
				func_47(iParam22);
				func_17(0);
				return 0;
			}
		}
		if (!func_16())
		{
			if (!bVar77)
			{
				if (func_14(PLAYER::PLAYER_ID(), Param23))
				{
					func_47(iParam22);
					func_17(0);
					return 0;
				}
			}
		}
		if (!func_13())
		{
			func_47(iParam22);
			bVar78 = true;
			func_17(bVar78);
			return 0;
		}
		bVar79 = false;
		if (!bVar77)
		{
			if (func_7(Param23, &bVar79, 1))
			{
				func_47(iParam22);
				func_17(bVar79);
				return 0;
			}
		}
		iVar70 = 1;
		iVar71 = 0;
		iVar69 = 1;
	}
	iVar80 = Global_1679777;
	if (iVar80 >= 12)
	{
		iVar80 = (iVar80 - 1);
	}
	iVar81 = (iVar80 - 1);
	while (iVar81 >= 0)
	{
		Global_2623469[iVar80 /*99*/] = { Global_2623469[iVar81 /*99*/] };
		iVar80 = (iVar80 - 1);
		iVar81 = (iVar81 - 1);
	}
	Global_1679777++;
	if (Global_1679777 > 12)
	{
		Global_1679777 = 12;
	}
	iVar82 = 0;
	Global_2623469[iVar82 /*99*/] = 0;
	Global_2623469[iVar82 /*99*/].f_1 = 0;
	Global_2623469[iVar82 /*99*/].f_5 = 0;
	Global_2623469[iVar82 /*99*/].f_2 = iVar70;
	Global_2623469[iVar82 /*99*/].f_3 = 0;
	Global_2623469[iVar82 /*99*/].f_4 = iVar71;
	Global_2623469[iVar82 /*99*/].f_6 = { Param0 };
	Global_2623469[iVar82 /*99*/].f_12 = uVar74;
	Global_2623469[iVar82 /*99*/].f_13 = uVar75;
	Global_2623469[iVar82 /*99*/].f_15 = { Param6 };
	StringCopy(&(Global_2623469[iVar82 /*99*/].f_31), "", 64);
	Global_2623469[iVar82 /*99*/].f_49 = iVar34;
	Global_2623469[iVar82 /*99*/].f_50 = iVar32;
	Global_2623469[iVar82 /*99*/].f_51 = iVar33;
	Global_2623469[iVar82 /*99*/].f_91 = iParam22;
	Global_2623469[iVar82 /*99*/].f_57 = { Var36 };
	Global_2623469[iVar82 /*99*/].f_73 = { Var52 };
	Global_2623469[iVar82 /*99*/].f_52 = iVar68;
	Global_2623469[iVar82 /*99*/].f_53 = 0;
	Global_2623469[iVar82 /*99*/].f_53.f_1 = 0;
	Global_2623469[iVar82 /*99*/].f_53.f_2 = 0;
	Global_2623469[iVar82 /*99*/].f_56 = iVar69;
	Global_2623469[iVar82 /*99*/].f_90 = uParam36;
	Global_2623469[iVar82 /*99*/].f_92 = -1;
	Global_2623469[iVar82 /*99*/].f_93 = iVar72;
	Global_2623469[iVar82 /*99*/].f_94 = Global_2625823;
	Global_2623469[iVar82 /*99*/].f_95 = iVar73;
	Global_2623469[iVar82 /*99*/].f_98 = NETWORK::NETWORK_IS_FRIEND(&Param23);
	if (Global_2623469[iVar82 /*99*/].f_50 == 0)
	{
		if (Global_2623469[iVar82 /*99*/].f_51 == 1)
		{
			Global_2623469[iVar82 /*99*/].f_56 = 0;
		}
	}
	Global_2623469[iVar82 /*99*/].f_96 = func_6(Param23, iVar82);
	Global_2623469[iVar82 /*99*/].f_97 = 0;
	Global_2623469[iVar82 /*99*/].f_89 = iParam37;
	Global_2625823++;
	Global_2623469[iVar82 /*99*/].f_47 = func_5(Param23);
	if (Global_2623469[iVar82 /*99*/].f_47 != -1)
	{
		Global_2623469[iVar82 /*99*/].f_48 = MISC::GET_GAME_TIMER() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)//Position - 0x84B
{
	struct<13> Var0[1];
	int iVar14;
	
	if (!func_16())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar14 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var0, 1);
	if (iVar14 < 0)
	{
		return -1;
	}
	return iVar14;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x886
{
	if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
	{
		return 0;
	}
	if (Global_2623469[iParam13 /*99*/].f_90 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)//Position - 0x8AF
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_12(0))
	{
		return 0;
	}
	if (func_16())
	{
		if (!func_11())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(PLAYER::PLAYER_ID()) };
	if (!bParam14 && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &uParam0))
	{
		if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)//Position - 0x923
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)//Position - 0x93A
{
	if (MISC::IS_PS3_VERSION() || (func_10() && iParam0 == 0))
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == 0 || NETWORK::_NETWORK_HAVE_PLATFORM_COMMUNICATION_PRIVILEGES() == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == 0)
	{
		return 0;
	}
	if (func_11() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_10()//Position - 0x993
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

int func_11()//Position - 0x9A9
{
	if (MISC::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if ((func_10() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == 0) && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (func_16() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	return 0;
}

int func_12(int iParam0)//Position - 0xA21
{
	if (MISC::IS_PS3_VERSION() || (func_10() && iParam0 == 0))
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0 || NETWORK::_NETWORK_HAVE_PLATFORM_COMMUNICATION_PRIVILEGES() == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
	{
		return 0;
	}
	if (func_11() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_13()//Position - 0xA7A
{
	if (!MISC::IS_XBOX360_VERSION())
	{
		return 1;
	}
	return NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
}

int func_14(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xA92
{
	if (!func_15(iParam0))
	{
		if (func_16())
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&uParam1))
			{
				return 0;
			}
		}
		if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15(int iParam0)//Position - 0xACF
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

bool func_16()//Position - 0xAFB
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_17(bool bParam0)//Position - 0xB11
{
	int iVar0;
	
	if (bParam0)
	{
		if (!MISC::IS_XBOX360_VERSION())
		{
			return;
		}
	}
	if (func_16())
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 < Global_2625820)
	{
		return;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return;
	}
	if (bParam0)
	{
		func_18("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_18("INV_RESTRICT" /* GXT: You have received an Invite to user-generated content which is currently restricted by your control settings. */, -1);
	}
	Global_2625820 = (iVar0 + 1800000);
}

void func_18(char* sParam0, int iParam1)//Position - 0xB71
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xB88
{
	if (!func_15(iParam0))
	{
		if (func_16())
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&uParam1))
			{
				return 0;
			}
		}
		if (!func_20())
		{
			return 1;
		}
	}
	return 0;
}

int func_20()//Position - 0xBBB
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	if (func_10())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (func_16())
	{
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(var uParam0)//Position - 0xC22
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_25(uParam0))
	{
		return BitTest(Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return BitTest(Global_2628582.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return BitTest(Global_794744.f_4[iVar1 /*89*/].f_76, 14);
		
		case 62:
			return BitTest(Global_949659.f_1804[iVar1 /*89*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_22(var uParam0)//Position - 0xCF2
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (BitTest(Global_794744.f_4[uParam0->f_1 /*89*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794744.f_4[uParam0->f_1 /*89*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_794744.f_4[uParam0->f_1 /*89*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1518)
			{
				if (BitTest(Global_794744.f_4[iVar0 /*89*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794744.f_4[iVar0 /*89*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (BitTest(Global_949659.f_1804[uParam0->f_1 /*89*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_949659.f_1804[uParam0->f_1 /*89*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_949659.f_1804[uParam0->f_1 /*89*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 300)
			{
				if (BitTest(Global_949659.f_1804[iVar0 /*89*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_949659.f_1804[iVar0 /*89*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (BitTest(Global_982384.f_4[uParam0->f_1 /*89*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_982384.f_4[uParam0->f_1 /*89*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (BitTest(Global_982384.f_4[uParam0->f_1 /*89*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (BitTest(Global_982384.f_4[iVar0 /*89*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_982384.f_4[iVar0 /*89*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_23(var uParam0)//Position - 0xF48
{
	if (Global_2628582)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2628582.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_24(int iParam0)//Position - 0xF6D
{
	return iParam0 == 9999;
}

int func_25(var uParam0)//Position - 0xF7B
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2625825.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&(Global_2625825.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!BitTest(Global_2625825.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_26(var uParam0)//Position - 0xFDB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_4[iVar1 /*89*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_27(var uParam0)//Position - 0x1024
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_22(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_28(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_28(var uParam0)//Position - 0x108B
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_22(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_135107[iVar13 /*13*/];
		
		case 62:
			return Global_949659.f_28505[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_29(var uParam0)//Position - 0x1102
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_25(uParam0))
	{
		return BitTest(Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return BitTest(Global_2628582.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return BitTest(Global_794744.f_4[iVar1 /*89*/].f_76, 17);
		
		case 62:
			return BitTest(Global_949659.f_1804[iVar1 /*89*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_30(var uParam0, bool bParam1)//Position - 0x11D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_25(uParam0))
		{
			if (BitTest(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2628716.f_513[uParam0->f_9];
			}
		}
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2628582.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_4[iVar1 /*89*/].f_54;
		
		case 62:
			return Global_949659.f_1804[iVar1 /*89*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_982384.f_4[iVar1 /*89*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_31(var uParam0)//Position - 0x12B1
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_25(uParam0))
	{
		return Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2628582.f_1.f_28;
		}
		return Var0;
	}
	iVar16 = func_22(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_4[iVar16 /*89*/].f_38;
		
		case 62:
			return Global_949659.f_1804[iVar16 /*89*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_982384.f_4[iVar16 /*89*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_32(var uParam0, bool bParam1)//Position - 0x13A1
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_25(uParam0))
		{
			if (BitTest(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2628716[uParam0->f_9 /*16*/];
			}
			return Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2628582.f_1.f_12;
		}
		return Var0;
	}
	iVar16 = func_22(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_4[iVar16 /*89*/].f_22;
		
		case 62:
			return Global_949659.f_1804[iVar16 /*89*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_982384.f_4[iVar16 /*89*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_33(var uParam0)//Position - 0x14C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_25(uParam0))
	{
		return Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2628582.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_4[iVar1 /*89*/].f_68;
		
		case 62:
			return Global_949659.f_1804[iVar1 /*89*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_982384.f_4[iVar1 /*89*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_34(int iParam0, int iParam1)//Position - 0x1591
{
	if (func_24(iParam1))
	{
		if (Global_2628582)
		{
			return Global_2628582.f_1.f_53;
		}
		return 337;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794744.f_4[iParam1 /*89*/].f_65;
		
		case 62:
			return Global_949659.f_1804[iParam1 /*89*/].f_65;
		
		default:
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_982384.f_4[iParam1 /*89*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 337;
	}
	return 337;
}

int func_35(char* sParam0, var uParam1, bool bParam2)//Position - 0x161A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1518;
	if (!bParam2)
	{
		iVar2 = 1500;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (BitTest(Global_794744.f_4[iVar0 /*89*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_794744.f_4[iVar0 /*89*/]), sParam0))
			{
				iVar1 = Global_794744.f_4[iVar0 /*89*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794744.f_4[iVar0 /*89*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 300)
	{
		if (BitTest(Global_949659.f_1804[iVar0 /*89*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_949659.f_1804[iVar0 /*89*/]), sParam0))
			{
				iVar1 = Global_949659.f_1804[iVar0 /*89*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (BitTest(Global_982384.f_4[iVar0 /*89*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_982384.f_4[iVar0 /*89*/]), sParam0))
			{
				iVar1 = Global_982384.f_4[iVar0 /*89*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = PLAYER::PLAYER_ID();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x17AA
{
	switch (iParam0)
	{
		case 15:
			return 210;
		
		case 14:
			return 211;
		
		case 122:
			return 215;
		
		case 11:
			return 212;
		
		case 13:
			return 213;
		
		case 12:
			return 214;
		
		case 8:
			return 217;
		
		case 1:
			return 218;
		
		case 5:
			return 216;
		
		case 6:
			return 219;
		
		case 3:
			return 222;
		
		case 0:
			return 220;
		
		case 2:
			return 221;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 87;
		
		case 183:
			return 88;
		
		case 185:
			return 89;
		
		case 186:
			return 90;
		
		case 190:
			return 91;
		
		case 191:
			return 92;
		
		case 192:
			return 93;
		
		case 193:
			return 94;
		
		case 205:
			return 102;
		
		case 194:
			return 95;
		
		case 197:
			return 96;
		
		case 198:
			return 97;
		
		case 195:
			return 98;
		
		case 199:
			return 99;
		
		case 200:
			return 100;
		
		case 201:
			return 101;
		
		case 207:
			return 103;
		
		case 208:
			return 104;
		
		case 209:
			return 105;
		
		case 210:
			return 106;
		
		case 225:
			return 107;
		
		case 226:
			return 108;
		
		case 227:
			return 109;
		
		case 229:
			return 110;
		
		case 230:
			return 111;
		
		case 233:
			return 113;
		
		case 237:
			return 115;
		
		case 238:
			return 116;
		
		case 249:
			return 123;
		
		case 239:
			return 117;
		
		case 240:
			return 118;
		
		case 241:
			return 119;
		
		case 242:
			return 120;
		
		case 244:
			return 121;
		
		case 248:
			return 122;
		
		case 250:
			return 124;
		
		case 243:
			return 125;
		
		case 158:
			return 126;
		
		case 181:
			return 86;
		
		case 150:
			return 127;
		
		case 24:
			return 128;
		
		case 26:
			return 129;
		
		case 256:
			return 130;
		
		case 258:
			return 131;
		
		case 259:
			return 133;
		
		case 271:
			return 134;
		
		case 273:
			return 135;
		
		case 276:
			return 136;
		
		case 277:
			return 137;
		
		case 262:
			return 138;
		
		case 263:
			return 139;
		
		case 264:
			return 140;
		
		case 268:
			return 141;
		
		case 269:
			return 143;
		
		case 270:
			return 144;
		
		case 275:
			return 145;
		
		case 286:
			return 146;
		
		case 267:
			return 148;
		
		case 266:
			return 147;
		
		case 287:
			return 149;
		
		case 289:
			return 150;
		
		case 147:
			return 151;
		
		case 291:
			return 152;
		
		case 292:
			return 153;
		
		case 293:
			return 154;
		
		case 294:
			return 155;
		
		case 295:
			return 156;
		
		case 296:
			return 157;
		
		case 297:
			return 158;
		
		case 298:
			return 159;
		
		case 299:
			return 160;
		
		case 300:
			return 161;
		
		case 301:
			return 162;
		
		case 288:
			return 163;
		
		case 290:
			return 164;
		
		case 304:
			return 165;
		
		case 305:
			return 166;
		
		case 306:
			return 167;
		
		case 307:
			return 168;
		
		case 308:
			return 169;
		
		case 309:
			return 170;
		
		case 310:
			return 171;
		
		case 311:
			return 172;
		
		case 312:
			return 173;
		
		case 313:
			return 174;
		
		case 315:
			return 175;
		
		case 316:
			return 176;
		
		case 317:
			return 177;
		
		case 318:
			return 178;
		
		case 320:
			return 179;
		
		case 322:
			return 180;
		
		case 323:
			return 181;
		
		case 324:
			return 182;
		
		case 325:
			return 183;
		
		case 326:
			return 184;
		
		case 327:
			return 185;
		
		case 328:
			return 186;
		
		case 329:
			return 187;
		
		case 330:
			return 188;
		
		case 331:
			return 189;
		
		case 332:
			return 190;
		
		case 333:
			return 191;
		
		default:
	}
	return 0;
}

int func_37(char* sParam0, int iParam1, int* iParam2)//Position - 0x1E21
{
	int iVar0;
	char[] cVar1[8];
	char cVar3[16];
	char[] cVar7[8];
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(sParam0, 0, 5), 8);
	if (!MISC::ARE_STRINGS_EQUAL(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar3, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(sParam0, 5, 12), 16);
	if (MISC::ARE_STRINGS_EQUAL(&cVar3, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar7, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(sParam0, 12, iVar0), 8);
	if (!MISC::STRING_TO_INT(&cVar7, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_38(var uParam0)//Position - 0x1F10
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_39(int iParam0)//Position - 0x1F33
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1679777)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (MISC::GET_GAME_TIMER() > Global_2625771[iVar0 /*4*/].f_2 || Global_2625771[iVar0 /*4*/].f_2 == 0)
		{
			if (NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES() > 0 && Global_2623469[iParam0 /*99*/].f_91 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
			{
				Global_2625771[iVar0 /*4*/].f_3 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Global_2623469[iParam0 /*99*/].f_91);
				Global_2625771[iVar0 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2623469[iParam0 /*99*/].f_92 != -1)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_2623469[iParam0 /*99*/].f_92);
	}
	if (!Global_2623469[iParam0 /*99*/].f_56)
	{
		if (Global_2623469[iParam0 /*99*/].f_52 != 0)
		{
			NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(Global_2623469[iParam0 /*99*/].f_52);
		}
	}
	func_47(Global_2623469[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1679777)
	{
		Global_2623469[iVar1 /*99*/] = { Global_2623469[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_41(iVar1);
	Global_1679777 = (Global_1679777 - 1);
	if (Global_1679750)
	{
		if (Global_1679748 > 0)
		{
			func_40();
		}
	}
}

void func_40()//Position - 0x207B
{
	Global_1679750 = 0;
}

void func_41(int iParam0)//Position - 0x2088
{
	Global_2623469[iParam0 /*99*/] = 0;
	Global_2623469[iParam0 /*99*/].f_1 = 0;
	Global_2623469[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2623469[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2623469[iParam0 /*99*/].f_31), "", 64);
	Global_2623469[iParam0 /*99*/].f_47 = -1;
	Global_2623469[iParam0 /*99*/].f_48 = MISC::GET_GAME_TIMER();
	Global_2623469[iParam0 /*99*/].f_49 = -1;
	Global_2623469[iParam0 /*99*/].f_50 = -1;
	Global_2623469[iParam0 /*99*/].f_51 = -1;
	Global_2623469[iParam0 /*99*/].f_52 = 0;
	Global_2623469[iParam0 /*99*/].f_53 = 0;
	Global_2623469[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2623469[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2623469[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2623469[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2623469[iParam0 /*99*/].f_73), "", 64);
	Global_2623469[iParam0 /*99*/].f_89 = 0;
	Global_2623469[iParam0 /*99*/].f_90 = 0;
	Global_2623469[iParam0 /*99*/].f_91 = -1;
	Global_2623469[iParam0 /*99*/].f_92 = -1;
	Global_2623469[iParam0 /*99*/].f_93 = 0;
	Global_2623469[iParam0 /*99*/].f_94 = -1;
	Global_2623469[iParam0 /*99*/].f_95 = 0;
	Global_2623469[iParam0 /*99*/].f_96 = 0;
	Global_2623469[iParam0 /*99*/].f_97 = 0;
	Global_2623469[iParam0 /*99*/].f_98 = 0;
}

int func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)//Position - 0x21CA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1679777)
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2623469[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_43(int iParam0)//Position - 0x2203
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_139, 22);
}

int func_44(bool bParam0)//Position - 0x2219
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

int func_45()//Position - 0x2241
{
	if (Global_114372.f_9088.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_46()//Position - 0x225E
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_139, 2);
}

void func_47(int iParam0)//Position - 0x2275
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(iParam0);
	if (iVar0 < 0 || iVar0 >= NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
	{
		return;
	}
	if (NETWORK::NETWORK_REMOVE_PRESENCE_INVITE(iVar0))
	{
		return;
	}
}

bool func_48()//Position - 0x22A8
{
	return Global_1575033 == 10;
}

int func_49()//Position - 0x22B7
{
	if (!Global_79248)
	{
		return 1;
	}
	else if (func_50())
	{
		return 1;
	}
	return 0;
}

int func_50()//Position - 0x22DA
{
	if (!func_51())
	{
		return 0;
	}
	return 1;
}

int func_51()//Position - 0x22EF
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_57())
	{
		return 1;
	}
	if (func_56())
	{
		return 1;
	}
	return func_52(120, -1);
}

int func_52(int iParam0, int iParam1)//Position - 0x231F
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_53(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_53(int iParam0, var uParam1)//Position - 0x2343
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_54(uParam1));
}

int func_54(var uParam0)//Position - 0x2358
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_55();
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

int func_55()//Position - 0x238C
{
	return Global_1574925;
}

bool func_56()//Position - 0x2398
{
	return Global_1575067;
}

bool func_57()//Position - 0x23A4
{
	return Global_1575069;
}

void func_58(var uParam0, int iParam1)//Position - 0x23B0
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_55();
	}
	Global_1575059[iVar0] = uParam0;
}

void func_59(int iParam0)//Position - 0x23D2
{
	func_120();
	if (func_119(1))
	{
		if (!func_108())
		{
			if (!func_94(1))
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					func_93();
				}
				func_62(1, 0);
				NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iParam0);
				func_61();
				func_60();
			}
		}
	}
}

void func_60()//Position - 0x2417
{
	Global_1927907.f_7 = 1;
}

void func_61()//Position - 0x2426
{
	Global_1927907.f_6 = 1;
}

void func_62(int iParam0, bool bParam1)//Position - 0x2435
{
	if (func_119(iParam0))
	{
		Global_1927907.f_16[iParam0 /*44*/].f_5 = 1;
		func_64(iParam0, 0);
		func_63();
		if (bParam1)
		{
			Global_1927907 = 1;
		}
	}
}

void func_63()//Position - 0x2468
{
	Global_1927907.f_2 = 1;
}

void func_64(int iParam0, bool bParam1)//Position - 0x2477
{
	struct<6> Var0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam1)
		{
			func_92();
			func_76(PLAYER::PLAYER_ID(), 0, 81920, 0);
			Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_95 = 8;
			func_75();
			func_74();
		}
		func_73(iParam0);
		func_72(iParam0);
		func_70();
		func_69();
		func_63();
	}
	Var0 = { func_68(iParam0) };
	func_67(iParam0);
	func_65(&Var0);
}

void func_65(char* sParam0)//Position - 0x24E3
{
	StringCopy(&(Global_2684312.f_860), sParam0, 24);
	if (func_66())
	{
		StringCopy(&(Global_1048576.f_44), sParam0, 24);
	}
}

bool func_66()//Position - 0x2507
{
	return BitTest(Global_2685249.f_1.f_2809, 5);
}

void func_67(int iParam0)//Position - 0x251A
{
	Global_1927907.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_68(int iParam0)//Position - 0x252F
{
	return Global_1927907.f_16[iParam0 /*44*/].f_6;
}

void func_69()//Position - 0x2545
{
	Global_2684312.f_9 = 100;
}

void func_70()//Position - 0x2555
{
	MISC::SET_BIT(&Global_2684312, 5);
	func_71();
}

void func_71()//Position - 0x256A
{
	MISC::SET_BIT(&Global_2684312, 8);
}

void func_72(var uParam0)//Position - 0x257C
{
	Global_1927907.f_8 = uParam0;
}

void func_73(var uParam0)//Position - 0x258C
{
	Global_1927907.f_9 = uParam0;
}

void func_74()//Position - 0x259C
{
	Global_2693219.f_1 = 0;
}

void func_75()//Position - 0x25AB
{
	char* sVar0;
	
	StringCopy(&(Global_2684312.f_860), sVar0, 24);
}

void func_76(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x25BE
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
	if (func_91())
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
		if (!func_89())
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
				else if (bVar14 || ((!func_86(PLAYER::PLAYER_ID(), 0) && !func_85()) && !func_84(PLAYER::PLAYER_ID())))
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
					func_81(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_80(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_79();
					func_78();
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
				if (!func_80(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_77(Global_4718592.f_183007))
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

bool func_77(int iParam0)//Position - 0x2A70
{
	return iParam0 == 17;
}

void func_78()//Position - 0x2A7D
{
	struct<3> Var0;
	
	Global_2672741.f_1028 = 0;
	Global_2672741.f_1029 = 0;
	Global_2672741.f_1030 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672741.f_1035 = -1;
	Global_2672741.f_1036 = 0;
	Global_2635562.f_2992 = { Var0 };
}

void func_79()//Position - 0x2ACA
{
	Global_2635562.f_702 = 0;
	Global_2635562.f_3035 = 0;
	Global_2635562.f_515 = 0;
	Global_2635562.f_606 = 0;
	Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_217 = 0;
	Global_2635562.f_2990 = 0;
}

int func_80(int iParam0)//Position - 0x2B08
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

void func_81(bool bParam0, int iParam1, int iParam2)//Position - 0x2B39
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
				func_83();
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
		if (func_86(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_82(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_82(int iParam0, bool bParam1)//Position - 0x2C09
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_83()//Position - 0x2C25
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

int func_84(int iParam0)//Position - 0x2C7D
{
	if (func_86(iParam0, 0))
	{
		return 1;
	}
	if (func_85())
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

bool func_85()//Position - 0x2CBC
{
	return BitTest(Global_2621446, 3);
}

bool func_86(int iParam0, int iParam1)//Position - 0x2CCA
{
	bool bVar0;
	
	if (!func_88(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_87(-1, 0) == 8;
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

int func_87(int iParam0, bool bParam1)//Position - 0x2D23
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_55();
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

int func_88(var uParam0)//Position - 0x2D64
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

int func_89()//Position - 0x2D86
{
	if (func_90() == 0)
	{
		return 1;
	}
	return 0;
}

int func_90()//Position - 0x2D9B
{
	return Global_1574632.f_18;
}

int func_91()//Position - 0x2DA9
{
	if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873, 2) && !Global_2685249.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_92()//Position - 0x2DDA
{
	MISC::SET_BIT(&Global_2684312, 7);
}

void func_93()//Position - 0x2DEB
{
	MISC::SET_BIT(&(Global_2684312.f_2), 15);
}

int func_94(int iParam0)//Position - 0x2DFF
{
	if (iParam0 || func_107())
	{
		if (!func_96(1))
		{
			return 1;
		}
		if (!func_95())
		{
			return 1;
		}
		if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
		{
			return 1;
		}
	}
	return 0;
}

bool func_95()//Position - 0x2E3B
{
	return Global_1927907.f_4;
}

int func_96(bool bParam0)//Position - 0x2E49
{
	if (!func_104())
	{
		return 0;
	}
	if ((func_99(func_101(-1), 0) >= 1 || func_52(123, -1)) && func_52(133, -1))
	{
		func_98();
		return 1;
	}
	else if (bParam0)
	{
		func_97();
	}
	return 0;
}

void func_97()//Position - 0x2E9A
{
	Global_1927907.f_5 = 1;
}

void func_98()//Position - 0x2EA9
{
	Global_1927907.f_4 = 1;
}

int func_99(int iParam0, int iParam1)//Position - 0x2EB8
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
		if (func_100(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_100(iVar3) < iParam0)
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

int func_100(int iParam0)//Position - 0x2F73
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

int func_101(int iParam0)//Position - 0x34AE
{
	return func_102(640, iParam0);
}

int func_102(int iParam0, var uParam1)//Position - 0x34BF
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_103(iParam0, uParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_103(int iParam0, var uParam1)//Position - 0x34EE
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_54(uParam1));
}

int func_104()//Position - 0x3503
{
	if (func_106() && func_105(0))
	{
		return 1;
	}
	return 0;
}

var func_105(int iParam0)//Position - 0x3521
{
	return Global_1574538[iParam0];
}

var func_106()//Position - 0x3531
{
	return func_105(func_55() + 1);
}

var func_107()//Position - 0x3543
{
	return Global_1927907.f_2;
}

int func_108()//Position - 0x3551
{
	if (((((func_118() || !func_116(-1)) || !func_114()) || !func_111()) || !func_110()) || func_109())
	{
		return 1;
	}
	return 0;
}

var func_109()//Position - 0x359C
{
	return Global_2695964;
}

int func_110()//Position - 0x35A8
{
	if (MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_111()//Position - 0x35C3
{
	int iVar0;
	
	if (func_112(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

bool func_112(int* iParam0)//Position - 0x35E0
{
	if (func_113())
	{
		*iParam0 = 11;
		return 1;
	}
	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(iParam0);
}

bool func_113()//Position - 0x35FE
{
	return Global_33106;
}

int func_114()//Position - 0x3609
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_115(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_115(int iParam0)//Position - 0x3635
{
	if (func_52(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_116(int iParam0)//Position - 0x3651
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_117(iParam0);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	if (BitTest(iVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0)//Position - 0x3675
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_55();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_118()//Position - 0x36D8
{
	return Global_2684312.f_743;
}

bool func_119(int iParam0)//Position - 0x36E7
{
	return Global_1927907.f_16[iParam0 /*44*/].f_4;
}

void func_120()//Position - 0x36FB
{
	int iVar0;
	int iVar1;
	
	func_126();
	if (SOCIALCLUB::SC_COMMUNITY_EVENT_IS_ACTIVE() && !func_123())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(func_122(iVar0));
			if (iVar1 > 0)
			{
				Global_1927907.f_16[iVar0 /*44*/] = iVar1;
				func_121(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1927907.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_121(int iParam0, int iParam1)//Position - 0x3772
{
	bool bVar0;
	struct<16> Var1;
	var uVar17;
	
	bVar0 = true;
	if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1927907.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(iParam1, "playlist", &Var1))
	{
		Global_1927907.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID(iParam1, &Var1))
	{
		Global_1927907.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(iParam1, "coronaCountdown", &uVar17))
		{
			Global_1927907.f_16[iParam0 /*44*/].f_1 = uVar17;
		}
		else
		{
			Global_1927907.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1927907.f_16[iParam0 /*44*/].f_2 = 0;
		if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(iParam1, "eventSubType", &uVar17))
		{
			Global_1927907.f_16[iParam0 /*44*/].f_2 = uVar17;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1927907.f_1 = 1;
		}
		Global_1927907.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1927907.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_122(int iParam0)//Position - 0x3880
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_123()//Position - 0x38CD
{
	if (!func_124())
	{
		return 1;
	}
	return 0;
}

int func_124()//Position - 0x38E2
{
	if (func_125())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_125()//Position - 0x3902
{
	return Global_2696462;
}

void func_126()//Position - 0x390E
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1927907 = { Var0 };
}

void func_127(int iParam0)//Position - 0x3939
{
	var uVar0;
	
	if (Global_79248)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20802, true);
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 21))
	{
		func_129();
	}
	Global_2745629.f_1 = 0;
	Global_2745629.f_33 = -1;
	Global_2745629.f_34 = -1;
	StringCopy(&(Global_2745629.f_4), "", 64);
	func_128(&(Global_2745629.f_20));
}

void func_128(var uParam0)//Position - 0x39A1
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

void func_129()//Position - 0x39E9
{
	Global_2745629.f_2 = 1;
	Global_2745629.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2745629 = 0;
			Global_2745629.f_2 = 0;
		}
		else if (func_137(Global_2745629.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2745629.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2745629.f_20)))
				{
					func_136();
				}
			}
		}
		else
		{
			func_136();
		}
	}
	else
	{
		func_136();
	}
	if (Global_2745629.f_37)
	{
		func_130(0);
	}
	Global_2745629.f_37 = 0;
	Global_2745629.f_3 = 0;
}

void func_130(int iParam0)//Position - 0x3A89
{
	if (func_135())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_134())
		{
			func_132(1, 1);
		}
		else
		{
			func_132(0, 0);
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
	if (!func_131())
	{
		Global_20813.f_1 = 3;
	}
}

int func_131()//Position - 0x3B13
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_132(bool bParam0, bool bParam1)//Position - 0x3B3A
{
	if (bParam0)
	{
		if (func_133(0))
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

int func_133(int iParam0)//Position - 0x3BAE
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

bool func_134()//Position - 0x3C05
{
	return BitTest(Global_1956030, 5);
}

bool func_135()//Position - 0x3C13
{
	return BitTest(Global_1956030, 19);
}

void func_136()//Position - 0x3C22
{
	Global_2745629.f_1 = 0;
	Global_2745629 = 0;
	Global_2745629.f_2 = 0;
	Global_2745629.f_33 = -1;
	Global_2745629.f_34 = -1;
	StringCopy(&(Global_2745629.f_4), "", 64);
	StringCopy(&(Global_2745629.f_39[0 /*16*/]), "", 64);
	Global_2745629.f_38 = 0;
	Global_2745629.f_56 = 0;
	Global_2745629.f_57 = 0;
	Global_2745629.f_58 = -2;
	Global_2745629.f_3 = 0;
	func_128(&(Global_2745629.f_20));
}

bool func_137(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x3C91
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_138(int iParam0)//Position - 0x3CA1
{
	struct<2> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 15))
	{
		Global_2745629.f_33 = Var0.f_1;
		Global_2745629.f_34 = Var0.f_0;
	}
}

void func_139(int iParam0)//Position - 0x3CCC
{
	struct<9> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 21))
	{
		if (Global_2745629.f_3 == 0)
		{
			if (!func_140(&(Var0.f_8)))
			{
				NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 2);
			}
			else
			{
				Global_2745629.f_3 = 1;
				MemCopy(&(Global_2745629.f_4), {Var0}, 16);
				Global_2745629.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2745629.f_39[0 /*16*/]), "", 64);
				Global_2745629.f_58 = -2;
				Global_2745629.f_56 = 0;
				Global_2745629.f_57 = 0;
			}
		}
		else if (!func_140(&(Var0.f_8)))
		{
			NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 2);
		}
		else
		{
			Global_2745629.f_3 = 1;
			MemCopy(&(Global_2745629.f_4), {Var0}, 16);
			Global_2745629.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2745629.f_39[0 /*16*/]), "", 64);
			Global_2745629.f_58 = -2;
			Global_2745629.f_56 = 0;
			Global_2745629.f_57 = 0;
		}
	}
}

int func_140(var* uParam0)//Position - 0x3DB0
{
	if (Global_79248)
	{
		if (func_50() == 0)
		{
			return 0;
		}
		if (func_144(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	if (Global_2745629.f_1)
	{
	}
	if (Global_21033 == 1)
	{
		return 0;
	}
	if (Global_1836691)
	{
		return 0;
	}
	if (Global_2745629.f_36)
	{
		return 0;
	}
	if (func_131())
	{
		return 0;
	}
	if (((Global_43922 != 6 && Global_43922 != 8) && Global_43922 != 12) && Global_43922 != 15)
	{
		return 0;
	}
	if (func_143() && !func_142(12))
	{
		return 0;
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		return 0;
	}
	if (!func_141(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (Global_79509)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		if (!NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(uParam0) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(uParam0) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY())
	{
		if (func_16())
		{
			if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT())
			{
				return 0;
			}
		}
		else if (func_10())
		{
			return 0;
		}
	}
	return 1;
}

int func_141(int iParam0)//Position - 0x3F34
{
	int iVar0;
	struct<13> Var1;
	
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (MISC::IS_PS3_VERSION() || func_10())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || func_16())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, true) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1)))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_142(int iParam0)//Position - 0x400F
{
	return Global_43922 == iParam0;
}

int func_143()//Position - 0x401D
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	return 1;
}

int func_144(int iParam0, bool bParam1, bool bParam2)//Position - 0x4032
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

void func_145()//Position - 0x4092
{
	func_136();
}

void func_146()//Position - 0x409E
{
	Global_2745629.f_1 = 1;
	Global_2745629.f_33 = -1;
	Global_2745629.f_34 = -1;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794) == 1)
	{
		if (Global_20801)
		{
			func_147(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
			if (Global_20756)
			{
				func_147(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_147(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_147(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x4117
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_148(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_148(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_148(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_148(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_148(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_148(char* sParam0)//Position - 0x41CA
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_149()//Position - 0x41DC
{
	int iVar0;
	
	if (iLocal_63)
	{
		Global_56289 = 0;
		Global_56289.f_12 = 0;
		Global_56289.f_24 = 0;
		Global_56289.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_56289.f_1[iVar0] = 0;
			Global_56289.f_13[iVar0] = 0;
			Global_56289.f_25[iVar0] = 0;
			Global_56289.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_63 = 0;
	}
}

