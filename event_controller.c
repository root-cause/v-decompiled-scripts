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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
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
	var uLocal_63 = 0;
	int iLocal_64 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_143();
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
					func_140();
					break;
				
				case 194:
					func_139();
					break;
				
				case 195:
					func_133(iVar2);
					break;
				
				case 196:
					func_132(iVar2);
					break;
				
				case 197:
					func_121(iVar2);
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
		iLocal_64 = 1;
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
							Global_55405.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_55405.f_25[iVar5] = iVar1;
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
							Global_55405.f_13[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_55405.f_37[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_55405 = iVar3;
	Global_55405.f_12 = iVar4;
	Global_55405.f_24 = iVar5;
	Global_55405.f_36 = iVar6;
}

bool func_2(int iParam0)//Position - 0x24E
{
	return iParam0 < 10;
}

void func_3(int iParam0)//Position - 0x25B
{
	struct<39> Var0;
	int iVar1;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 39))
	{
		iVar1 = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(Var0.f_38);
		if (iVar1 >= 0 && iVar1 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
		{
			if (NETWORK::NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(iVar1) || NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(iVar1))
			{
				if (NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(iVar1))
				{
					func_58(iVar1);
				}
				else
				{
					NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iVar1);
				}
				func_57(Var0.f_37, -1);
			}
			else if (func_49())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param1, int iParam2, struct<13> Param3, var uParam4, int iParam5)//Position - 0x2F8
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int* iVar11;
	struct<16> Var12;
	struct<16> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	bVar0 = false;
	if (iParam5 >= 1000000)
	{
		iParam5 = (iParam5 - 1000000);
		bVar0 = true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_48())
		{
			func_47(iParam2);
			return 0;
		}
		if (func_46())
		{
			func_47(iParam2);
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bVar0)
		{
		}
		else if (!NETWORK::NETWORK_IS_FRIEND(&Param3))
		{
			func_47(iParam2);
			return 0;
		}
		if (Global_20209)
		{
			func_47(iParam2);
			return 0;
		}
		bVar1 = true;
		if (!func_45())
		{
			if (!func_44(0))
			{
				if (bVar1)
				{
					func_47(iParam2);
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_43(PLAYER::PLAYER_ID()))
		{
			func_47(iParam2);
			return 0;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		func_47(iParam2);
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		func_47(iParam2);
		return 0;
	}
	Var2 = { Param1 };
	iVar3 = func_42(Var2);
	if (iVar3 != -1)
	{
		func_39(iVar3);
	}
	iVar4 = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(iParam2);
	iVar5 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(iVar4);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 11)
	{
		if (iVar5 == Global_2657438[iVar6 /*4*/].f_3 && MISC::GET_GAME_TIMER() < Global_2657438[iVar6 /*4*/].f_2)
		{
			Global_2657438[iVar6 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
			iVar6 = 12;
			func_47(iParam2);
			return 0;
		}
		iVar6++;
	}
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	func_38(&Var7);
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 63;
	iVar11 = 0;
	StringCopy(&Var12, "", 64);
	StringCopy(&Var13, "", 64);
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 1;
	iVar18 = 0;
	iVar19 = 0;
	if (func_37(&Param0, &iVar8, &iVar11))
	{
		iVar10 = 40;
		iVar15 = 0;
		iVar11 = iVar11;
	}
	else if (func_35(&Param0, &Var7, 0))
	{
		iVar10 = Var7.f_2;
		iVar8 = func_34(iVar10, Var7.f_1);
		iVar9 = func_33(&Var7);
		Var12 = { func_32(&Var7, 0) };
		Var13 = { func_31(&Var7) };
		iVar15 = 1;
		iVar14 = func_30(&Var7, 0);
		iVar19 = func_29(&Var7);
		uVar20 = func_27(&Var7);
		uVar21 = func_26(&Var7);
		bVar22 = func_21(&Var7);
		if (!bVar22)
		{
			iVar18 = 1;
		}
	}
	else
	{
		bVar23 = false;
		if (func_19(PLAYER::PLAYER_ID(), Param3))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar23 = true;
			}
			else
			{
				func_47(iParam2);
				func_17(0);
				return 0;
			}
		}
		if (!func_16())
		{
			if (!bVar23)
			{
				if (func_14(PLAYER::PLAYER_ID(), Param3))
				{
					func_47(iParam2);
					func_17(0);
					return 0;
				}
			}
		}
		if (!func_13())
		{
			func_47(iParam2);
			bVar24 = true;
			func_17(bVar24);
			return 0;
		}
		bVar25 = false;
		if (!bVar23)
		{
			if (func_7(Param3, &bVar25, 1))
			{
				func_47(iParam2);
				func_17(bVar25);
				return 0;
			}
		}
		iVar16 = 1;
		iVar17 = 0;
		iVar15 = 1;
	}
	iVar26 = Global_1659438;
	if (iVar26 >= 12)
	{
		iVar26 = (iVar26 - 1);
	}
	iVar27 = (iVar26 - 1);
	while (iVar27 >= 0)
	{
		Global_2655137[iVar26 /*99*/] = { Global_2655137[iVar27 /*99*/] };
		iVar26 = (iVar26 - 1);
		iVar27 = (iVar27 - 1);
	}
	Global_1659438++;
	if (Global_1659438 > 12)
	{
		Global_1659438 = 12;
	}
	iVar28 = 0;
	Global_2655137[iVar28 /*99*/] = 0;
	Global_2655137[iVar28 /*99*/].f_1 = 0;
	Global_2655137[iVar28 /*99*/].f_5 = 0;
	Global_2655137[iVar28 /*99*/].f_2 = iVar16;
	Global_2655137[iVar28 /*99*/].f_3 = 0;
	Global_2655137[iVar28 /*99*/].f_4 = iVar17;
	Global_2655137[iVar28 /*99*/].f_6 = { Param0 };
	Global_2655137[iVar28 /*99*/].f_12 = uVar20;
	Global_2655137[iVar28 /*99*/].f_13 = uVar21;
	Global_2655137[iVar28 /*99*/].f_15 = { Param1 };
	StringCopy(&(Global_2655137[iVar28 /*99*/].f_31), "", 64);
	Global_2655137[iVar28 /*99*/].f_49 = iVar10;
	Global_2655137[iVar28 /*99*/].f_50 = iVar8;
	Global_2655137[iVar28 /*99*/].f_51 = iVar9;
	Global_2655137[iVar28 /*99*/].f_91 = iParam2;
	Global_2655137[iVar28 /*99*/].f_57 = { Var12 };
	Global_2655137[iVar28 /*99*/].f_73 = { Var13 };
	Global_2655137[iVar28 /*99*/].f_52 = iVar14;
	Global_2655137[iVar28 /*99*/].f_53 = 0;
	Global_2655137[iVar28 /*99*/].f_53.f_1 = 0;
	Global_2655137[iVar28 /*99*/].f_53.f_2 = 0;
	Global_2655137[iVar28 /*99*/].f_56 = iVar15;
	Global_2655137[iVar28 /*99*/].f_90 = uParam4;
	Global_2655137[iVar28 /*99*/].f_92 = -1;
	Global_2655137[iVar28 /*99*/].f_93 = iVar18;
	Global_2655137[iVar28 /*99*/].f_94 = Global_2657490;
	Global_2655137[iVar28 /*99*/].f_95 = iVar19;
	Global_2655137[iVar28 /*99*/].f_98 = NETWORK::NETWORK_IS_FRIEND(&Param3);
	if (Global_2655137[iVar28 /*99*/].f_50 == 0)
	{
		if (Global_2655137[iVar28 /*99*/].f_51 == 1)
		{
			Global_2655137[iVar28 /*99*/].f_56 = 0;
		}
	}
	Global_2655137[iVar28 /*99*/].f_96 = func_6(Param3, iVar28);
	Global_2655137[iVar28 /*99*/].f_97 = 0;
	Global_2655137[iVar28 /*99*/].f_89 = iParam5;
	Global_2657490++;
	Global_2655137[iVar28 /*99*/].f_47 = func_5(Param3);
	if (Global_2655137[iVar28 /*99*/].f_47 != -1)
	{
		Global_2655137[iVar28 /*99*/].f_48 = MISC::GET_GAME_TIMER() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)//Position - 0x845
{
	struct<13> Var0[1];
	int iVar1;
	
	if (!func_16())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar1 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var0, 1);
	if (iVar1 < 0)
	{
		return -1;
	}
	return iVar1;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x880
{
	if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
	{
		return 0;
	}
	if (Global_2655137[iParam13 /*99*/].f_90 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)//Position - 0x8A9
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

struct<13> func_8(int iParam0)//Position - 0x91D
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)//Position - 0x934
{
	if (MISC::IS_PS3_VERSION() || (func_10() && iParam0 == 0))
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == 0 || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) == 0)
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

bool func_10()//Position - 0x98F
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

int func_11()//Position - 0x9A5
{
	if (MISC::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if ((func_10() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE() == 0) && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
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

int func_12(int iParam0)//Position - 0xA1D
{
	if (MISC::IS_PS3_VERSION() || (func_10() && iParam0 == 0))
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0 || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) == 0)
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

bool func_13()//Position - 0xA78
{
	if (!MISC::IS_XBOX360_VERSION())
	{
		return 1;
	}
	return NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
}

int func_14(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xA90
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

int func_15(int iParam0)//Position - 0xACD
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

bool func_16()//Position - 0xAF9
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

void func_17(bool bParam0)//Position - 0xB0F
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
	if (iVar0 < Global_2657487)
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
		func_18("INV_RESTRICT", -1);
	}
	Global_2657487 = (iVar0 + 1800000);
}

void func_18(char* sParam0, int iParam1)//Position - 0xB6F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xB86
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

int func_20()//Position - 0xBB9
{
	if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_9() == 0)
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

int func_21(var uParam0)//Position - 0xC20
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_25(uParam0))
	{
		return BitTest(Global_2657492.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return BitTest(Global_2660249.f_1.f_63, 14);
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
			return BitTest(Global_794709.f_4[iVar1 /*88*/].f_76, 14);
		
		case 62:
			return BitTest(Global_998606.f_604[iVar1 /*88*/].f_76, 14);
		
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

int func_22(var uParam0)//Position - 0xCF0
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
			if (BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (BitTest(Global_998606.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
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
		if (BitTest(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (BitTest(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (BitTest(Global_1020252.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
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

int func_23(var uParam0)//Position - 0xF45
{
	if (Global_2660249)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2660249.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_24(int iParam0)//Position - 0xF6A
{
	return iParam0 == 9999;
}

int func_25(var uParam0)//Position - 0xF78
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2657492.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&(Global_2657492.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!BitTest(Global_2657492.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_26(var uParam0)//Position - 0xFD8
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
			return Global_794709.f_4[iVar1 /*88*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_27(var uParam0)//Position - 0x1021
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_22(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_28(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_28(var uParam0)//Position - 0x1088
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_177589[iVar1 /*13*/];
		
		case 62:
			return Global_998606.f_9405[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_29(var uParam0)//Position - 0x10FF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_25(uParam0))
	{
		return BitTest(Global_2657492.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return BitTest(Global_2660249.f_1.f_63, 17);
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
			return BitTest(Global_794709.f_4[iVar1 /*88*/].f_76, 17);
		
		case 62:
			return BitTest(Global_998606.f_604[iVar1 /*88*/].f_76, 17);
		
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

int func_30(var uParam0, bool bParam1)//Position - 0x11CF
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
				return Global_2660383.f_513[uParam0->f_9];
			}
		}
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2660249.f_1.f_54;
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
			return Global_794709.f_4[iVar1 /*88*/].f_54;
		
		case 62:
			return Global_998606.f_604[iVar1 /*88*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_31(var uParam0)//Position - 0x12AE
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_25(uParam0))
	{
		return Global_2657492.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2660249.f_1.f_28;
		}
		return Var0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_38;
		
		case 62:
			return Global_998606.f_604[iVar1 /*88*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_32(var uParam0, bool bParam1)//Position - 0x139E
{
	struct<16> Var0;
	int iVar1;
	
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
				return Global_2660383[uParam0->f_9 /*16*/];
			}
			return Global_2657492.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2660249.f_1.f_12;
		}
		return Var0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_22;
		
		case 62:
			return Global_998606.f_604[iVar1 /*88*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_33(var uParam0)//Position - 0x14C0
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_25(uParam0))
	{
		return Global_2657492.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2660249.f_1.f_55;
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
			return Global_794709.f_4[iVar1 /*88*/].f_68;
		
		case 62:
			return Global_998606.f_604[iVar1 /*88*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_34(int iParam0, int iParam1)//Position - 0x158E
{
	if (func_24(iParam1))
	{
		if (Global_2660249)
		{
			return Global_2660249.f_1.f_53;
		}
		return 304;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1 /*88*/].f_65;
		
		case 62:
			return Global_998606.f_604[iParam1 /*88*/].f_65;
		
		default:
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_1020252.f_5[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 304;
	}
	return 304;
}

int func_35(char* sParam0, var uParam1, bool bParam2)//Position - 0x1617
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
	iVar2 = 2018;
	if (!bParam2)
	{
		iVar2 = 2000;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_794709.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (BitTest(Global_998606.f_604[iVar0 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_998606.f_604[iVar0 /*88*/].f_65;
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
		if (BitTest(Global_1020252.f_5[iVar0 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_1020252.f_5[iVar0 /*88*/].f_65;
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

int func_36(int iParam0)//Position - 0x17A6
{
	switch (iParam0)
	{
		case 15:
			return 181;
		
		case 14:
			return 182;
		
		case 122:
			return 186;
		
		case 11:
			return 183;
		
		case 13:
			return 184;
		
		case 12:
			return 185;
		
		case 8:
			return 188;
		
		case 1:
			return 189;
		
		case 5:
			return 187;
		
		case 6:
			return 190;
		
		case 3:
			return 193;
		
		case 0:
			return 191;
		
		case 2:
			return 192;
		
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
		
		default:
	}
	return 0;
}

int func_37(char* sParam0, int iParam1, int* iParam2)//Position - 0x1CDE
{
	int iVar0;
	char[] cVar1[8];
	char cVar2[16];
	char[] cVar3[8];
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, HUD::_GET_TEXT_SUBSTRING_SLICE(sParam0, 0, 5), 8);
	if (!MISC::ARE_STRINGS_EQUAL(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar2, HUD::_GET_TEXT_SUBSTRING_SLICE(sParam0, 5, 12), 16);
	if (MISC::ARE_STRINGS_EQUAL(&cVar2, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar2, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar2, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar2, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar2, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar2, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar3, HUD::_GET_TEXT_SUBSTRING_SLICE(sParam0, 12, iVar0), 8);
	if (!MISC::STRING_TO_INT(&cVar3, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_38(var uParam0)//Position - 0x1DCD
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_39(int iParam0)//Position - 0x1DF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1659438)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (MISC::GET_GAME_TIMER() > Global_2657438[iVar0 /*4*/].f_2 || Global_2657438[iVar0 /*4*/].f_2 == 0)
		{
			if (NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES() > 0 && Global_2655137[iParam0 /*99*/].f_91 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
			{
				Global_2657438[iVar0 /*4*/].f_3 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Global_2655137[iParam0 /*99*/].f_91);
				Global_2657438[iVar0 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2655137[iParam0 /*99*/].f_92 != -1)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_2655137[iParam0 /*99*/].f_92);
	}
	if (!Global_2655137[iParam0 /*99*/].f_56)
	{
		if (Global_2655137[iParam0 /*99*/].f_52 != 0)
		{
			NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(Global_2655137[iParam0 /*99*/].f_52);
		}
	}
	func_47(Global_2655137[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1659438)
	{
		Global_2655137[iVar1 /*99*/] = { Global_2655137[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_41(iVar1);
	Global_1659438 = (Global_1659438 - 1);
	if (Global_1659411)
	{
		if (Global_1659409 > 0)
		{
			func_40();
		}
	}
}

void func_40()//Position - 0x1F38
{
	Global_1659411 = 0;
}

void func_41(int iParam0)//Position - 0x1F45
{
	Global_2655137[iParam0 /*99*/] = 0;
	Global_2655137[iParam0 /*99*/].f_1 = 0;
	Global_2655137[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2655137[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2655137[iParam0 /*99*/].f_31), "", 64);
	Global_2655137[iParam0 /*99*/].f_47 = -1;
	Global_2655137[iParam0 /*99*/].f_48 = MISC::GET_GAME_TIMER();
	Global_2655137[iParam0 /*99*/].f_49 = -1;
	Global_2655137[iParam0 /*99*/].f_50 = -1;
	Global_2655137[iParam0 /*99*/].f_51 = -1;
	Global_2655137[iParam0 /*99*/].f_52 = 0;
	Global_2655137[iParam0 /*99*/].f_53 = 0;
	Global_2655137[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2655137[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2655137[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2655137[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2655137[iParam0 /*99*/].f_73), "", 64);
	Global_2655137[iParam0 /*99*/].f_89 = 0;
	Global_2655137[iParam0 /*99*/].f_90 = 0;
	Global_2655137[iParam0 /*99*/].f_91 = -1;
	Global_2655137[iParam0 /*99*/].f_92 = -1;
	Global_2655137[iParam0 /*99*/].f_93 = 0;
	Global_2655137[iParam0 /*99*/].f_94 = -1;
	Global_2655137[iParam0 /*99*/].f_95 = 0;
	Global_2655137[iParam0 /*99*/].f_96 = 0;
	Global_2655137[iParam0 /*99*/].f_97 = 0;
	Global_2655137[iParam0 /*99*/].f_98 = 0;
}

int func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)//Position - 0x2087
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1659438)
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2655137[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_43(int iParam0)//Position - 0x20C0
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_139, 22);
}

int func_44(bool bParam0)//Position - 0x20D6
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_45()//Position - 0x20FE
{
	if (Global_113386.f_9085.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_46()//Position - 0x211B
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139, 2);
}

void func_47(int iParam0)//Position - 0x2132
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

bool func_48()//Position - 0x2165
{
	return Global_1575016 == 10;
}

int func_49()//Position - 0x2174
{
	if (!Global_78319)
	{
		return 1;
	}
	else if (func_50())
	{
		return 1;
	}
	return 0;
}

int func_50()//Position - 0x2197
{
	if (!func_51())
	{
		return 0;
	}
	return 1;
}

int func_51()//Position - 0x21AC
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_56())
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	return func_52(120, -1);
}

int func_52(int iParam0, int iParam1)//Position - 0x21DC
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_53(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_53(var uParam0)//Position - 0x2208
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_54()//Position - 0x223C
{
	return Global_1574918;
}

bool func_55()//Position - 0x2248
{
	return Global_1575046;
}

bool func_56()//Position - 0x2254
{
	return Global_1575048;
}

void func_57(var uParam0, int iParam1)//Position - 0x2260
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_54();
	}
	Global_1575038[iVar0] = uParam0;
}

void func_58(int iParam0)//Position - 0x2282
{
	func_114();
	if (func_113(1))
	{
		if (!func_102())
		{
			if (!func_91(1))
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					func_90();
				}
				func_61(1, 0);
				NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iParam0);
				func_60();
				func_59();
			}
		}
	}
}

void func_59()//Position - 0x22C7
{
	Global_1931618.f_7 = 1;
}

void func_60()//Position - 0x22D6
{
	Global_1931618.f_6 = 1;
}

void func_61(int iParam0, bool bParam1)//Position - 0x22E5
{
	if (func_113(iParam0))
	{
		Global_1931618.f_16[iParam0 /*44*/].f_5 = 1;
		func_63(iParam0, 0);
		func_62();
		if (bParam1)
		{
			Global_1931618 = 1;
		}
	}
}

void func_62()//Position - 0x2318
{
	Global_1931618.f_2 = 1;
}

void func_63(int iParam0, bool bParam1)//Position - 0x2327
{
	struct<6> Var0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam1)
		{
			func_89();
			func_75(PLAYER::PLAYER_ID(), 0, 81920, 0);
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 = 8;
			func_74();
			func_73();
		}
		func_72(iParam0);
		func_71(iParam0);
		func_69();
		func_68();
		func_62();
	}
	Var0 = { func_67(iParam0) };
	func_66(iParam0);
	func_64(&Var0);
}

void func_64(char* sParam0)//Position - 0x2393
{
	StringCopy(&(Global_2714762.f_860), sParam0, 24);
	if (func_65())
	{
		StringCopy(&(Global_1048576.f_44), sParam0, 24);
	}
}

bool func_65()//Position - 0x23B7
{
	return BitTest(Global_2715699.f_1.f_2809, 5);
}

void func_66(int iParam0)//Position - 0x23CA
{
	Global_1931618.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_67(int iParam0)//Position - 0x23DF
{
	return Global_1931618.f_16[iParam0 /*44*/].f_6;
}

void func_68()//Position - 0x23F5
{
	Global_2714762.f_9 = 100;
}

void func_69()//Position - 0x2405
{
	MISC::SET_BIT(&Global_2714762, 5);
	func_70();
}

void func_70()//Position - 0x241A
{
	MISC::SET_BIT(&Global_2714762, 8);
}

void func_71(var uParam0)//Position - 0x242C
{
	Global_1931618.f_8 = uParam0;
}

void func_72(var uParam0)//Position - 0x243C
{
	Global_1931618.f_9 = uParam0;
}

void func_73()//Position - 0x244C
{
	Global_2723612.f_1 = 0;
}

void func_74()//Position - 0x245B
{
	char* sVar0;
	
	StringCopy(&(Global_2714762.f_860), sVar0, 24);
}

void func_75(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x246E
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
	if (func_88())
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
		if (!func_86())
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
				else if (bVar14 || (!func_84(PLAYER::PLAYER_ID(), 0) && !func_83()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_80(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_79(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_78();
					func_77();
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
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_79(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_76(Global_4718592.f_168757))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575033)
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

bool func_76(int iParam0)//Position - 0x28FC
{
	return iParam0 == 17;
}

void func_77()//Position - 0x2909
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_78()//Position - 0x2956
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_79(int iParam0)//Position - 0x2994
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_80(bool bParam0, int iParam1, int iParam2)//Position - 0x29C5
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
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
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
				func_82();
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
		if (func_84(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_81(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_81(int iParam0, bool bParam1)//Position - 0x2A95
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_82()//Position - 0x2AB1
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

bool func_83()//Position - 0x2B09
{
	return BitTest(Global_2621446, 3);
}

bool func_84(int iParam0, int iParam1)//Position - 0x2B17
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_85(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
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

int func_85(int iParam0, bool bParam1)//Position - 0x2B62
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
	}
	if (Global_1575038[iVar1] == 1)
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

int func_86()//Position - 0x2BA3
{
	if (func_87() == 0)
	{
		return 1;
	}
	return 0;
}

int func_87()//Position - 0x2BB8
{
	return Global_1574632.f_18;
}

int func_88()//Position - 0x2BC6
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_89()//Position - 0x2BF7
{
	MISC::SET_BIT(&Global_2714762, 7);
}

void func_90()//Position - 0x2C08
{
	MISC::SET_BIT(&(Global_2714762.f_2), 15);
}

int func_91(int iParam0)//Position - 0x2C1C
{
	if (iParam0 || func_101())
	{
		if (!func_93(1))
		{
			return 1;
		}
		if (!func_92())
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

bool func_92()//Position - 0x2C58
{
	return Global_1931618.f_4;
}

int func_93(bool bParam0)//Position - 0x2C66
{
	if (!func_98())
	{
		return 0;
	}
	if ((func_96(func_97(-1), 0) >= 1 || func_52(123, -1)) && func_52(133, -1))
	{
		func_95();
		return 1;
	}
	else if (bParam0)
	{
		func_94();
	}
	return 0;
}

void func_94()//Position - 0x2CB7
{
	Global_1931618.f_5 = 1;
}

void func_95()//Position - 0x2CC6
{
	Global_1931618.f_4 = 1;
}

int func_96(int iParam0, int iParam1)//Position - 0x2CD5
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
		if (Global_295824[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_295824[iVar3] < iParam0)
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

int func_97(int iParam0)//Position - 0x2D94
{
	return Global_1659759[func_53(iParam0)];
}

int func_98()//Position - 0x2DA8
{
	if (func_100() && func_99(0))
	{
		return 1;
	}
	return 0;
}

var func_99(int iParam0)//Position - 0x2DC6
{
	return Global_1574538[iParam0];
}

var func_100()//Position - 0x2DD6
{
	return func_99(func_54() + 1);
}

var func_101()//Position - 0x2DE8
{
	return Global_1931618.f_2;
}

int func_102()//Position - 0x2DF6
{
	if (((((func_112() || !func_110(-1)) || !func_108()) || !func_105()) || !func_104()) || func_103())
	{
		return 1;
	}
	return 0;
}

var func_103()//Position - 0x2E41
{
	return Global_2725416;
}

int func_104()//Position - 0x2E4D
{
	if (MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_105()//Position - 0x2E68
{
	int iVar0;
	
	if (func_106(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

bool func_106(int* iParam0)//Position - 0x2E85
{
	if (func_107())
	{
		*iParam0 = 11;
		return 1;
	}
	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(iParam0);
}

bool func_107()//Position - 0x2EA3
{
	return Global_32236;
}

int func_108()//Position - 0x2EAE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_109(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(int iParam0)//Position - 0x2EDA
{
	if (func_52(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)//Position - 0x2EF6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_111(iParam0);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	if (BitTest(iVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)//Position - 0x2F1A
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_54();
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

var func_112()//Position - 0x2F7D
{
	return Global_2714762.f_743;
}

bool func_113(int iParam0)//Position - 0x2F8C
{
	return Global_1931618.f_16[iParam0 /*44*/].f_4;
}

void func_114()//Position - 0x2FA0
{
	int iVar0;
	int iVar1;
	
	func_120();
	if (SOCIALCLUB::_0xFF8F3A92B75ED67A() && !func_117())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = SOCIALCLUB::_0x4A7D6E727F941747(func_116(iVar0));
			if (iVar1 > 0)
			{
				Global_1931618.f_16[iVar0 /*44*/] = iVar1;
				func_115(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1931618.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_115(int iParam0, int iParam1)//Position - 0x3017
{
	bool bVar0;
	struct<16> Var1;
	var uVar2;
	
	bVar0 = true;
	if (SOCIALCLUB::_0x699E4A5C8C893A18(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1931618.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (SOCIALCLUB::_0x699E4A5C8C893A18(iParam1, "playlist", &Var1))
	{
		Global_1931618.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (SOCIALCLUB::_0x19853B5B17D77BCA(iParam1, &Var1))
	{
		Global_1931618.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (SOCIALCLUB::_0x8CC469AB4D349B7C(iParam1, "coronaCountdown", &uVar2))
		{
			Global_1931618.f_16[iParam0 /*44*/].f_1 = uVar2;
		}
		else
		{
			Global_1931618.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1931618.f_16[iParam0 /*44*/].f_2 = 0;
		if (SOCIALCLUB::_0x8CC469AB4D349B7C(iParam1, "eventSubType", &uVar2))
		{
			Global_1931618.f_16[iParam0 /*44*/].f_2 = uVar2;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1931618.f_1 = 1;
		}
		Global_1931618.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1931618.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_116(int iParam0)//Position - 0x3125
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

int func_117()//Position - 0x3172
{
	if (!func_118())
	{
		return 1;
	}
	return 0;
}

int func_118()//Position - 0x3187
{
	if (func_119())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_119()//Position - 0x31A7
{
	return Global_2725911;
}

void func_120()//Position - 0x31B3
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1931618 = { Var0 };
}

void func_121(int iParam0)//Position - 0x31DE
{
	var uVar0;
	
	if (Global_78319)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20255, true);
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 21))
	{
		func_123();
	}
	Global_2821909.f_1 = 0;
	Global_2821909.f_33 = -1;
	Global_2821909.f_34 = -1;
	StringCopy(&(Global_2821909.f_4), "", 64);
	func_122(&(Global_2821909.f_20));
}

void func_122(var uParam0)//Position - 0x3246
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

void func_123()//Position - 0x328E
{
	Global_2821909.f_2 = 1;
	Global_2821909.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2821909 = 0;
			Global_2821909.f_2 = 0;
		}
		else if (func_131(Global_2821909.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2821909.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2821909.f_20)))
				{
					func_130();
				}
			}
		}
		else
		{
			func_130();
		}
	}
	else
	{
		func_130();
	}
	if (Global_2821909.f_37)
	{
		func_124(0);
	}
	Global_2821909.f_37 = 0;
	Global_2821909.f_3 = 0;
}

void func_124(int iParam0)//Position - 0x332E
{
	if (func_129())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_128())
		{
			func_126(1, 1);
		}
		else
		{
			func_126(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8137, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 30);
	}
	if (!func_125())
	{
		Global_20266.f_1 = 3;
	}
}

int func_125()//Position - 0x33B8
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_126(bool bParam0, bool bParam1)//Position - 0x33DF
{
	if (bParam0)
	{
		if (func_127(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20203);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
}

int func_127(int iParam0)//Position - 0x3453
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_128()//Position - 0x34AA
{
	return BitTest(Global_1958711, 5);
}

bool func_129()//Position - 0x34B8
{
	return BitTest(Global_1958711, 19);
}

void func_130()//Position - 0x34C7
{
	Global_2821909.f_1 = 0;
	Global_2821909 = 0;
	Global_2821909.f_2 = 0;
	Global_2821909.f_33 = -1;
	Global_2821909.f_34 = -1;
	StringCopy(&(Global_2821909.f_4), "", 64);
	StringCopy(&(Global_2821909.f_39[0 /*16*/]), "", 64);
	Global_2821909.f_38 = 0;
	Global_2821909.f_56 = 0;
	Global_2821909.f_57 = 0;
	Global_2821909.f_58 = -2;
	Global_2821909.f_3 = 0;
	func_122(&(Global_2821909.f_20));
}

bool func_131(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x3536
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_132(int iParam0)//Position - 0x3546
{
	struct<2> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 15))
	{
		Global_2821909.f_33 = Var0.f_1;
		Global_2821909.f_34 = Var0.f_0;
	}
}

void func_133(int iParam0)//Position - 0x3571
{
	struct<9> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 21))
	{
		if (Global_2821909.f_3 == 0)
		{
			if (!func_134(&(Var0.f_8)))
			{
				NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 2);
			}
			else
			{
				Global_2821909.f_3 = 1;
				MemCopy(&(Global_2821909.f_4), {Var0}, 16);
				Global_2821909.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2821909.f_39[0 /*16*/]), "", 64);
				Global_2821909.f_58 = -2;
				Global_2821909.f_56 = 0;
				Global_2821909.f_57 = 0;
			}
		}
		else if (!func_134(&(Var0.f_8)))
		{
			NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 2);
		}
		else
		{
			Global_2821909.f_3 = 1;
			MemCopy(&(Global_2821909.f_4), {Var0}, 16);
			Global_2821909.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2821909.f_39[0 /*16*/]), "", 64);
			Global_2821909.f_58 = -2;
			Global_2821909.f_56 = 0;
			Global_2821909.f_57 = 0;
		}
	}
}

int func_134(var* uParam0)//Position - 0x3655
{
	if (Global_78319)
	{
		if (func_50() == 0)
		{
			return 0;
		}
		if (func_138(PLAYER::PLAYER_ID(), 1, 1))
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
	if (Global_2821909.f_1)
	{
	}
	if (Global_20472 == 1)
	{
		return 0;
	}
	if (Global_1836606)
	{
		return 0;
	}
	if (Global_2821909.f_36)
	{
		return 0;
	}
	if (func_125())
	{
		return 0;
	}
	if (((Global_43052 != 6 && Global_43052 != 8) && Global_43052 != 12) && Global_43052 != 15)
	{
		return 0;
	}
	if (func_137() && !func_136(12))
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
	if (!func_135(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (Global_78579)
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

int func_135(int iParam0)//Position - 0x37D9
{
	int iVar0;
	struct<13> Var1;
	
	if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_9() == 0)
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

bool func_136(int iParam0)//Position - 0x38B2
{
	return Global_43052 == iParam0;
}

int func_137()//Position - 0x38C0
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	return 1;
}

int func_138(int iParam0, bool bParam1, bool bParam2)//Position - 0x38D5
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
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_139()//Position - 0x3935
{
	func_130();
}

void func_140()//Position - 0x3941
{
	Global_2821909.f_1 = 1;
	Global_2821909.f_33 = -1;
	Global_2821909.f_34 = -1;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247) == 1)
	{
		if (Global_20254)
		{
			func_141(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_20209)
			{
				func_141(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_141(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_141(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x39BA
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
		func_142(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_142(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_142(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_142(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_142(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_142(char* sParam0)//Position - 0x3A6D
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_143()//Position - 0x3A7F
{
	int iVar0;
	
	if (iLocal_64)
	{
		Global_55405 = 0;
		Global_55405.f_12 = 0;
		Global_55405.f_24 = 0;
		Global_55405.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_55405.f_1[iVar0] = 0;
			Global_55405.f_13[iVar0] = 0;
			Global_55405.f_25[iVar0] = 0;
			Global_55405.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_64 = 0;
	}
}

